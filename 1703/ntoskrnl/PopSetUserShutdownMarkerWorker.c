/*
 * XREFs of PopSetUserShutdownMarkerWorker @ 0x14017D320
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 */

void PopSetUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) |= 4u;
  PopWriteBsdPowerTransition();
  _InterlockedExchange(&dword_14034C9E0, 0);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
