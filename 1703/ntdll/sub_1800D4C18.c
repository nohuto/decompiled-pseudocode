/*
 * XREFs of sub_1800D4C18 @ 0x1800D4C18
 * Callers:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 * Callees:
 *     sub_1800708A4 @ 0x1800708A4 (sub_1800708A4.c)
 *     sub_180070AA4 @ 0x180070AA4 (sub_180070AA4.c)
 */

__int64 __fastcall sub_1800D4C18(_WORD *a1, _WORD *a2)
{
  int v4; // r9d
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180070AA4((__int64)a1, v6, (unsigned __int64 *)&v8, 0LL);
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    v4 = sub_1800708A4(v6[0], v8, &v7, a2, 0x7FFFLL);
    *a1 = 2 * v7;
  }
  return (unsigned int)v4;
}
