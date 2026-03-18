/*
 * XREFs of PopRunNormalIrpWorkers @ 0x1401384A8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
