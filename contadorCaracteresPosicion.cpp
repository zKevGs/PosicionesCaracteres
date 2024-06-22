#include <iostream>
#include <string>
#include <vector>


///



using namespace std;



int main(){

string caracteres;

cout << "introduzca un texto que solo contenga A, B, C, D, E: ";
cin >> caracteres;


const int sizee = (caracteres.size());

 int contadorA[sizee];
 int contadorB[sizee];
 int contadorC[sizee];
 int contadorD[sizee];
 int contadorE[sizee];


int e = 0, a=0, b=0, c=0, d=0;




for(int i = 0; i< sizee; i++){
    char texto = tolower(caracteres[i]);



switch (texto){

case 'e':
    contadorE[e]= i;
    e++;
    break;
case 'a':
    contadorA[a]= i;
    a++;
    break;
case 'b':
    contadorB[b]= i;
      b++;
    break;
case 'c':
    contadorC[c]= i;
    c++;
    break;
case 'd':
    contadorD[d]= i;
    d++;
    break;
}

}


   cout << "El caracter E aparecio en las posiciones: ";
    for (int i = 0; i <e; i++) {
        cout << contadorE[i] << " ";
    }
     cout << "y aparecio " << e << " veces" << endl;


   cout << "El caracter A aparecio en las posiciones: ";
    for (int i = 0; i <a; i++) {
        cout << contadorA[i] << " ";
    }
    cout << "y aparecio " << a << " veces" << endl;


    cout << "El caracter B aparecio en las posiciones: ";
    for (int i = 0; i < b; i++) {
        cout << contadorB[i] << " ";
    }
    cout << "y aparecio " << b << " veces" << endl;

    cout << "El caracter C aparecio en las posiciones: ";
    for (int i = 0; i < c; i++) {
        cout << contadorC[i] << " ";
    }
    cout << "y aparecio " << c << " veces" << endl;

    cout << "El caracter D aparecio en las posiciones: ";
    for (int i = 0; i < d; i++) {
        cout << contadorD[i] << " ";
    }
    cout << "y aparecio " << d << " veces" << endl;


return 0;
}
