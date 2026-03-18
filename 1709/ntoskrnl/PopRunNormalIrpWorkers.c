/*
 * XREFs of PopRunNormalIrpWorkers @ 0x140249194
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
