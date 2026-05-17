/*
 * XREFs of sub_1800A4064 @ 0x1800A4064
 * Callers:
 *     _snwscanf_s @ 0x1800A06E0 (_snwscanf_s.c)
 *     swscanf_s @ 0x1800A15C0 (swscanf_s.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A4118 @ 0x1800A4118 (sub_1800A4118.c)
 */

__int64 __fastcall sub_1800A4064(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
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
    return sub_1800A4118(&v5, a3, a4);
  }
  else
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
}
