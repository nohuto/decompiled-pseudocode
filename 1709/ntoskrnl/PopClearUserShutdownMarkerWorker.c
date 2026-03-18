/*
 * XREFs of PopClearUserShutdownMarkerWorker @ 0x1406F5070
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x1401325F0 (PopOkayToQueueNextWorkItem.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
 */

void PopClearUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~4u;
  PopWriteBsdPowerTransition();
  PopOkayToQueueNextWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
