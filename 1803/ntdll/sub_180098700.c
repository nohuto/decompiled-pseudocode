/*
 * XREFs of sub_180098700 @ 0x180098700
 * Callers:
 *     _snscanf_s @ 0x180095900 (_snscanf_s.c)
 *     sscanf_s @ 0x1800963D0 (sscanf_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180097DA0 @ 0x180097DA0 (sub_180097DA0.c)
 */

__int64 __fastcall sub_180098700(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3, _BYTE **a4)
{
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]

  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    v7 = a1;
    v5 = a1;
    v6 = a2;
    v8 = 73;
    return sub_180097DA0(&v5, a3, a4);
  }
  else
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
}
