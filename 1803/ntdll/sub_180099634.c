/*
 * XREFs of sub_180099634 @ 0x180099634
 * Callers:
 *     _snwscanf_s @ 0x180095A20 (_snwscanf_s.c)
 *     swscanf_s @ 0x180096990 (swscanf_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_1800996E8 @ 0x1800996E8 (sub_1800996E8.c)
 */

__int64 __fastcall sub_180099634(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]

  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    v7 = a1;
    v5 = a1;
    v6 = 2 * a2;
    v8 = 73;
    return sub_1800996E8(&v5, a3, a4);
  }
  else
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
}
