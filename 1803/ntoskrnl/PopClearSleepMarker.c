/*
 * XREFs of PopClearSleepMarker @ 0x1405EF75C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140476810 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140611DF0 (PopWriteBsdPowerTransition.c)
 */

void PopClearSleepMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) &= 0xFu;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
