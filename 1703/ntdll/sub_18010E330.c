/*
 * XREFs of sub_18010E330 @ 0x18010E330
 * Callers:
 *     sub_180109360 @ 0x180109360 (sub_180109360.c)
 *     sub_180109490 @ 0x180109490 (sub_180109490.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 *     sub_18010E10C @ 0x18010E10C (sub_18010E10C.c)
 *     sub_18010E294 @ 0x18010E294 (sub_18010E294.c)
 */

unsigned __int64 __fastcall sub_18010E330(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx
  unsigned __int64 v6; // rdi
  _BYTE v7[20]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+3Ch] [rbp-2Ch]
  int v9; // [rsp+48h] [rbp-20h]

  if ( !a1 )
  {
    RtlSetLastWin32Error(0x57u);
    return a1;
  }
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v4
    || !(unsigned int)sub_18010D1BC(v4, a2, (__int64)v7)
    || *(_DWORD *)(a1 + 48) == v9 && *(_QWORD *)(a1 + 56) == v8 )
  {
    return a1;
  }
  v6 = sub_18010E294(*(_WORD **)(a1 + 40), v5);
  if ( !v6 )
    return a1;
  sub_18010E10C(a1);
  return v6;
}
