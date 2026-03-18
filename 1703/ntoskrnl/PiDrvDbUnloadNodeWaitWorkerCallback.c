/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140036870
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140036914 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ZwWaitForSingleObject @ 0x14017DFC0 (ZwWaitForSingleObject.c)
 */

__int64 __fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx

  ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    *(_BYTE *)(a1 + 489) = 1;
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
}
