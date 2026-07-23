/*
 * XREFs of sub_180109490 @ 0x180109490
 * Callers:
 *     sub_180109360 @ 0x180109360 (sub_180109360.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 *     sub_18010DE7C @ 0x18010DE7C (sub_18010DE7C.c)
 *     sub_18010E294 @ 0x18010E294 (sub_18010E294.c)
 *     sub_18010E330 @ 0x18010E330 (sub_18010E330.c)
 */

_BOOL8 __fastcall sub_180109490(__int64 a1)
{
  LONG LastErrorValue; // ecx
  void *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE Src[528]; // [rsp+20h] [rbp-228h] BYREF

  if ( !a1 )
  {
    if ( NtCurrentTeb()->LastErrorValue )
      return 0LL;
    LastErrorValue = 87;
LABEL_4:
    RtlSetLastWin32Error(LastErrorValue);
    return 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = sub_18010E330(v4);
LABEL_15:
    *(_QWORD *)(a1 + 8) = v5;
    return v5 != 0;
  }
  if ( !(unsigned int)sub_18010D960(*(_QWORD *)(a1 + 32), 258LL, Src) )
    return 0LL;
  v6 = sub_18010E294(Src);
  *(_QWORD *)(a1 + 8) = v6;
  if ( !v6 )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( LastErrorValue != 2 )
    {
      if ( !LastErrorValue || NtCurrentTeb()->LastErrorValue )
        return 0LL;
      goto LABEL_4;
    }
    v5 = sub_18010DE7C(Src);
    goto LABEL_15;
  }
  return 1LL;
}
