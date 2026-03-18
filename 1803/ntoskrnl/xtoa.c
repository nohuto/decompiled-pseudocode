/*
 * XREFs of xtoa @ 0x140187FB0
 * Callers:
 *     _itoa @ 0x140187F80 (_itoa.c)
 * Callees:
 *     <none>
 */

char __fastcall xtoa(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  char *v5; // r10
  char *v6; // r8
  char *v7; // r11
  unsigned int v8; // r9d
  _BYTE *v9; // rax
  char v10; // r9
  char result; // al
  char v12; // cl

  v5 = a2;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    a1 = -a1;
  }
  v6 = v5;
  do
  {
    v7 = v5;
    v8 = a1 % a3;
    a1 /= a3;
    v9 = v5 + 1;
    if ( v8 <= 9 )
      v10 = v8 + 48;
    else
      v10 = v8 + 87;
    *v5++ = v10;
  }
  while ( a1 );
  *v9 = 0;
  do
  {
    result = *v6;
    v12 = *v7;
    *v7-- = *v6;
    *v6++ = v12;
  }
  while ( v6 < v7 );
  return result;
}
