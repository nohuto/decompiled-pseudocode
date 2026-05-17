/*
 * XREFs of _ui64toa @ 0x18008BAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  unsigned __int64 v4; // rbx
  char *v5; // rcx
  char *v7; // r9
  unsigned __int64 v8; // rdx
  char *v9; // r8
  _BYTE *v10; // rax
  char v11; // dl
  char v12; // cl

  v4 = (unsigned int)Radix;
  v5 = Buffer;
  v7 = Buffer;
  do
  {
    v8 = Value % v4;
    v9 = v5;
    Value /= v4;
    v10 = v5 + 1;
    if ( (unsigned int)v8 <= 9 )
      v11 = v8 + 48;
    else
      v11 = v8 + 87;
    *v5++ = v11;
  }
  while ( Value );
  *v10 = 0;
  do
  {
    v12 = *v9;
    *v9-- = *v7;
    *v7++ = v12;
  }
  while ( v7 < v9 );
  return Buffer;
}
