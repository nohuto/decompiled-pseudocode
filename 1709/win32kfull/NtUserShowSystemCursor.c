/*
 * XREFs of NtUserShowSystemCursor @ 0x1C01EC870
 * Callers:
 *     <none>
 * Callees:
 *     GreHidePointer @ 0x1C0046DE0 (GreHidePointer.c)
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    LOBYTE(v3) = a1 == 0;
    v3 = GreHidePointer(v3);
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
