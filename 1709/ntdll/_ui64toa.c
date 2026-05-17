/*
 * XREFs of _ui64toa @ 0x180091690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  char *v4; // rcx
  char *v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rtt
  char v9; // dl
  char *v10; // rdx
  char v11; // cl

  v4 = Buffer;
  v6 = Buffer;
  do
  {
    v8 = Value;
    Value /= (unsigned int)Radix;
    v7 = v8 % (unsigned int)Radix;
    if ( (unsigned int)v7 <= 9 )
      v9 = v7 + 48;
    else
      v9 = v7 + 87;
    *v4++ = v9;
  }
  while ( Value );
  *v4 = 0;
  v10 = v4 - 1;
  do
  {
    v11 = *v10;
    *v10-- = *v6;
    *v6++ = v11;
  }
  while ( v6 < v10 );
  return Buffer;
}
