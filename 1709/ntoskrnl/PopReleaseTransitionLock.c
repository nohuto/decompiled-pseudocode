/*
 * XREFs of PopReleaseTransitionLock @ 0x1407013E0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG PopReleaseTransitionLock()
{
  return KeSetEvent(&PopTransitionLock, 0, 0);
}
