/*
 * XREFs of DpiDeleteIoMmuDomain @ 0x1C0201F60
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0040538 (DpiGetIoMmuContextFromDevice.c)
 */

__int64 __fastcall DpiDeleteIoMmuDomain(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rbx

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(IoMmuContextFromDevice + 16);
  *(_QWORD *)(IoMmuContextFromDevice + 72) = KeGetCurrentThread();
  if ( *(_QWORD *)(IoMmuContextFromDevice + 80) )
  {
    ((void (*)(void))qword_1C007AC48)();
    *(_QWORD *)(IoMmuContextFromDevice + 80) = 0LL;
  }
  *(_QWORD *)(IoMmuContextFromDevice + 72) = 0LL;
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(IoMmuContextFromDevice + 16);
}
