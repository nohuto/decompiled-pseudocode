/*
 * XREFs of sub_18008BB6C @ 0x18008BB6C
 * Callers:
 *     _i64toa @ 0x18008BA70 (_i64toa.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18008BB6C(unsigned __int64 a1, char *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // r11
  char *v5; // r10
  unsigned __int64 v6; // rax
  char *v7; // r8
  _BYTE *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rtt
  char *v11; // r9
  char v12; // dl
  char result; // al
  char v14; // cl

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -(__int64)a1;
  }
  v7 = v5;
  do
  {
    v8 = v5 + 1;
    v10 = v6;
    v6 /= v4;
    v9 = v10 % v4;
    v11 = v5;
    if ( (unsigned int)(v10 % v4) <= 9 )
      v12 = v9 + 48;
    else
      v12 = v9 + 87;
    *v5++ = v12;
  }
  while ( v6 );
  *v8 = 0;
  do
  {
    result = *v7;
    v14 = *v11;
    *v11-- = *v7;
    *v7++ = v14;
  }
  while ( v7 < v11 );
  return result;
}
