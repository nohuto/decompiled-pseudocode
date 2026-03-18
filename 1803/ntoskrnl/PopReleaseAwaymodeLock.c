/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140470C14
 * Callers:
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x14075D6C0 (PopAwayModePowerRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PopReleaseAwaymodeLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&PopAwaymodeLock, 0LL, a3, a4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
