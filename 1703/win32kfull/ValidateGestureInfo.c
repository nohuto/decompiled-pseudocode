/*
 * XREFs of ValidateGestureInfo @ 0x1C01EF780
 * Callers:
 *     NtUserInjectGesture @ 0x1C01DC1D0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C01EF47C (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( *a3 == 56 && a3[7] && a3[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87LL);
  return 0LL;
}
