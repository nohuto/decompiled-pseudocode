/*
 * XREFs of NtUserWaitForMsgAndEvent @ 0x1C01ED7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserWaitForMsgAndEvent()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  EnterCrit(0LL, 1LL);
  UserSessionSwitchLeaveCrit(v1, v0);
  return 0LL;
}
