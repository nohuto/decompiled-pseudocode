/*
 * XREFs of sub_1800C90F4 @ 0x1800C90F4
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 * Callees:
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 *     sub_180040D04 @ 0x180040D04 (sub_180040D04.c)
 */

__int64 __fastcall sub_1800C90F4(_WORD *a1, _WORD *a2)
{
  int v4; // r9d
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_1800403FC((__int64)a1, v6, (unsigned __int64 *)&v8, 0LL);
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    v4 = sub_180040D04(v6[0], v8, &v7, a2, 0x7FFFLL);
    *a1 = 2 * v7;
  }
  return (unsigned int)v4;
}
