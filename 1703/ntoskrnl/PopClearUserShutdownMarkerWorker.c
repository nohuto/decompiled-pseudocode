/*
 * XREFs of PopClearUserShutdownMarkerWorker @ 0x14017D2E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 */

void PopClearUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~4u;
  PopWriteBsdPowerTransition();
  _InterlockedExchange(&dword_14034CA20, 0);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
