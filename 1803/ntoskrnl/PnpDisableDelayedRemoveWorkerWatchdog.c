/*
 * XREFs of PnpDisableDelayedRemoveWorkerWatchdog @ 0x14023C64C
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PnpDisableWatchdog @ 0x140075428 (PnpDisableWatchdog.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __fastcall PnpDisableDelayedRemoveWorkerWatchdog(__int64 a1)
{
  char v2; // bl

  ExAcquireFastMutex(&PnpDelayedRemoveWorkerWatchdogLock);
  v2 = PnpDisableWatchdog(*(_QWORD *)(a1 + 24));
  KeReleaseGuardedMutex(&PnpDelayedRemoveWorkerWatchdogLock);
  if ( v2 )
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 24) + 144LL), Executive, 0, 0, 0LL);
}
