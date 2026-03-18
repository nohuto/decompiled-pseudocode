/*
 * XREFs of PopReleaseTransitionLock @ 0x140577648
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

LONG PopReleaseTransitionLock()
{
  return KeSetEvent(&PopTransitionLock, 0, 0);
}
