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

_QWORD *__fastcall sub_18010E330(_QWORD *BaseAddress, __int64 a2)
{
  const WCHAR *v4; // rcx
  __int64 v5; // rdi
  _BYTE v6[20]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+48h] [rbp-20h]

  if ( !BaseAddress )
  {
    RtlSetLastWin32Error(87);
    return BaseAddress;
  }
  v4 = (const WCHAR *)BaseAddress[5];
  if ( !v4
    || !(unsigned int)sub_18010D1BC(v4, a2, (__int64)v6)
    || *((_DWORD *)BaseAddress + 12) == v8 && BaseAddress[7] == v7 )
  {
    return BaseAddress;
  }
  v5 = sub_18010E294((WCHAR *)BaseAddress[5]);
  if ( !v5 )
    return BaseAddress;
  sub_18010E10C(BaseAddress);
  return (_QWORD *)v5;
}
