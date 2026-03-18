/*
 * XREFs of PnpDisableDeviceCompletionQueueWatchdog @ 0x1401468A8
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x1401467B0 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PnpDisableWatchdog @ 0x140075428 (PnpDisableWatchdog.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __fastcall PnpDisableDeviceCompletionQueueWatchdog(__int64 a1)
{
  char v2; // bl

  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 64));
  v2 = PnpDisableWatchdog(*(_QWORD *)(a1 + 120));
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 64));
  if ( v2 )
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 120) + 144LL), Executive, 0, 0, 0LL);
}
