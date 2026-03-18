/*
 * XREFs of PopReleaseAwaymodeLock @ 0x1404397D0
 * Callers:
 *     PopAwayModePowerRequest @ 0x1406F5AA0 (PopAwayModePowerRequest.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

_QWORD *PopReleaseAwaymodeLock()
{
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
