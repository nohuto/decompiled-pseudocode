/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x1C0142600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDwmGetRemoteSessionOcclusionState()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = gbFreezeScreenUpdates;
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
