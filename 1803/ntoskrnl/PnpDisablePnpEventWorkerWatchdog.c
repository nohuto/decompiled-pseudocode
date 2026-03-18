/*
 * XREFs of PnpDisablePnpEventWorkerWatchdog @ 0x1400753DC
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PnpDisableWatchdog @ 0x140075428 (PnpDisableWatchdog.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __fastcall PnpDisablePnpEventWorkerWatchdog(__int64 a1)
{
  char v2; // bl

  ExAcquireFastMutex(&PnpEventWorkerWatchdogLock);
  v2 = PnpDisableWatchdog(*(_QWORD *)(a1 + 104));
  KeReleaseGuardedMutex(&PnpEventWorkerWatchdogLock);
  if ( v2 )
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 104) + 144LL), Executive, 0, 0, 0LL);
}
