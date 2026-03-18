/*
 * XREFs of NtUserClearForeground @ 0x1C01D6F00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  v0 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    UserSetLastError(5LL);
    v0 = 0LL;
  }
  else if ( v3 )
  {
    v2 = *(_QWORD *)(v3 + 408);
    if ( v2 )
      HMAssignmentUnlock(v2 + 88);
  }
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
