/*
 * XREFs of PopReleaseTransitionLock @ 0x1405EFA48
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140476810 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG PopReleaseTransitionLock()
{
  return KeSetEvent(&PopTransitionLock, 0, 0);
}
