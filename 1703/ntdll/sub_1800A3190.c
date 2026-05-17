/*
 * XREFs of sub_1800A3190 @ 0x1800A3190
 * Callers:
 *     _vsnwprintf_s @ 0x1800A0630 (_vsnwprintf_s.c)
 *     vswprintf_s @ 0x1800A1560 (vswprintf_s.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 *     sub_1800A32A4 @ 0x1800A32A4 (sub_1800A32A4.c)
 */

__int64 __fastcall sub_1800A3190(_WORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  _BYTE *v8; // rax
  _BYTE *v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  _WORD *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]

  if ( !a2 )
    goto LABEL_2;
  if ( a2 == -1LL )
  {
    v10 = 0x7FFFFFFF;
  }
  else
  {
    if ( a2 > 0x3FFFFFFF )
    {
LABEL_2:
      sub_180095DE0();
      return 0xFFFFFFFFLL;
    }
    v10 = 2 * a2;
  }
  v11 = a1;
  v9 = a1;
  v12 = 66;
  result = sub_1800A32A4(&v9, a3, a4);
  a1[a2 - 1] = 0;
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( --v10 < 0 )
    {
      if ( (unsigned int)sub_18009C404(0LL, (__int64)&v9) == -1 )
        return 4294967294LL;
      v8 = v9;
    }
    else
    {
      *v9 = 0;
      v8 = ++v9;
    }
    if ( --v10 < 0 )
    {
      if ( (unsigned int)sub_18009C404(0LL, (__int64)&v9) == -1 )
        return 4294967294LL;
    }
    else
    {
      *v8 = 0;
    }
    return v7;
  }
  if ( v10 < 0 )
    return 4294967294LL;
  if ( a1 )
  {
    if ( a2 )
      *a1 = 0;
  }
  return result;
}
