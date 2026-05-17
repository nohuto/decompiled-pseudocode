/*
 * XREFs of sub_1800A3130 @ 0x1800A3130
 * Callers:
 *     _snscanf_s @ 0x1800A05C0 (_snscanf_s.c)
 *     sscanf_s @ 0x1800A1090 (sscanf_s.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800A28A4 @ 0x1800A28A4 (sub_1800A28A4.c)
 */

__int64 __fastcall sub_1800A3130(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3, _DWORD *a4)
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
    return sub_1800A28A4((__int64)&v5, a3, a4);
  }
  else
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
}
