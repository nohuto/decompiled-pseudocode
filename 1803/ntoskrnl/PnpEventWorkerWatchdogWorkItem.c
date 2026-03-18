/*
 * XREFs of PnpEventWorkerWatchdogWorkItem @ 0x14023C6E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 */

void __fastcall PnpEventWorkerWatchdogWorkItem(__int64 a1)
{
  ExAcquireFastMutex(&PnpEventWorkerWatchdogLock);
  PnpProcessWatchdogWorkItem(a1, (__int64)PnpEventWorkerWatchdogWorkItem);
  KeReleaseGuardedMutex(&PnpEventWorkerWatchdogLock);
}
