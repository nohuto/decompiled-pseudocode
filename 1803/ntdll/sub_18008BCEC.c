/*
 * XREFs of sub_18008BCEC @ 0x18008BCEC
 * Callers:
 *     _i64tow @ 0x18008BC40 (_i64tow.c)
 *     _ui64tow @ 0x18008BCB0 (_ui64tow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008BCEC(unsigned __int64 a1, __int16 *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // r11
  __int16 *v5; // r10
  unsigned __int64 v6; // rax
  __int16 *v7; // r8
  _WORD *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rtt
  __int16 *v11; // r9
  __int16 v12; // dx
  __int64 result; // rax
  __int16 v14; // cx

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
    result = (unsigned __int16)*v7;
    v14 = *v11;
    *v11-- = result;
    *v7++ = v14;
  }
  while ( v7 < v11 );
  return result;
}
