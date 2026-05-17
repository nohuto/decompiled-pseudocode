/*
 * XREFs of sub_180097858 @ 0x180097858
 * Callers:
 *     _vsnprintf_s @ 0x180095860 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x180096380 (vsprintf_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

__int64 __fastcall sub_180097858(_BYTE *a1, unsigned __int64 a2, const char *a3, int *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  _BYTE *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  _BYTE *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  if ( !a2 )
    goto LABEL_2;
  if ( a2 == -1LL )
  {
    v9 = 0x7FFFFFFF;
  }
  else
  {
    if ( a2 > 0x7FFFFFFF )
    {
LABEL_2:
      sub_18008B020();
      return 0xFFFFFFFFLL;
    }
    v9 = a2;
  }
  v10 = a1;
  v8 = a1;
  v11 = 66;
  result = sub_180096EA4((__int64)&v8, a3, a4);
  a1[a2 - 1] = 0;
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( --v9 < 0 )
    {
      if ( (unsigned int)sub_18009A104(0LL, &v8) == -1 )
        return 4294967294LL;
    }
    else
    {
      *v8 = 0;
    }
    return v7;
  }
  if ( v9 < 0 )
    return 4294967294LL;
  if ( a1 )
  {
    if ( a2 )
      *a1 = 0;
  }
  return result;
}
