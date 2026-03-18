/*
 * XREFs of ValidateGestureInfo @ 0x1C01F9C0C
 * Callers:
 *     NtUserInjectGesture @ 0x1C01E83E0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C01F9904 (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( *a3 == 56 && a3[7] && a3[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87LL, a2);
  return 0LL;
}
