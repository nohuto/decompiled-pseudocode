/*
 * XREFs of PopClearUserShutdownMarkerWorker @ 0x1405EF330
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1400D2C70 (PopOkayToQueueNextWorkItem.c)
 *     PopWriteBsdPowerTransition @ 0x140611DF0 (PopWriteBsdPowerTransition.c)
 */

void PopClearUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~4u;
  PopWriteBsdPowerTransition();
  PopOkayToQueueNextWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
