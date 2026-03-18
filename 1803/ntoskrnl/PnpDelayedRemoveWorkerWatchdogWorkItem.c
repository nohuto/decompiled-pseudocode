/*
 * XREFs of PnpDelayedRemoveWorkerWatchdogWorkItem @ 0x14023C610
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 */

void __fastcall PnpDelayedRemoveWorkerWatchdogWorkItem(__int64 a1)
{
  ExAcquireFastMutex(&PnpDelayedRemoveWorkerWatchdogLock);
  PnpProcessWatchdogWorkItem(a1, (__int64)PnpDelayedRemoveWorkerWatchdogWorkItem);
  KeReleaseGuardedMutex(&PnpDelayedRemoveWorkerWatchdogLock);
}
