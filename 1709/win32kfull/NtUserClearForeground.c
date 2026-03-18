/*
 * XREFs of NtUserClearForeground @ 0x1C01E3700
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    UserSetLastError(5LL, v1);
    v0 = 0LL;
  }
  else if ( v3 )
  {
    v2 = *(_QWORD *)(v3 + 432);
    if ( v2 )
      HMAssignmentUnlock(v2 + 88);
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
