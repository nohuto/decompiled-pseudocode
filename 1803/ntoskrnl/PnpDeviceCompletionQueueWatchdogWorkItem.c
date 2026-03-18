/*
 * XREFs of PnpDeviceCompletionQueueWatchdogWorkItem @ 0x14015F0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 */

void __fastcall PnpDeviceCompletionQueueWatchdogWorkItem(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 208);
  ExAcquireFastMutex((PFAST_MUTEX)(v1 + 64));
  PnpProcessWatchdogWorkItem(a1, PnpDeviceCompletionQueueWatchdogWorkItem);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 64));
}
