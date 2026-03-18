/*
 * XREFs of NtUserLockWorkStation @ 0x1C000D220
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 NtUserLockWorkStation()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = 0LL;
  if ( (unsigned int)CheckWinstaAttributeAccess(0x10u) )
  {
    PostWinlogonMessage(1027LL, 0LL);
    v0 = 1LL;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
