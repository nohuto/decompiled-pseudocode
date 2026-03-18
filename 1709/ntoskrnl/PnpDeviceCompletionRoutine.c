/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x1400FB8B0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1400FB974 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x1400FB99C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PnpDiagnosticTraceObject @ 0x1400FBA44 (PnpDiagnosticTraceObject.c)
 *     PnpTraceStartDevice @ 0x1400FCBDC (PnpTraceStartDevice.c)
 *     IoFindDeviceThatFailedIrp @ 0x14012E918 (IoFindDeviceThatFailedIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionRoutine(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 DeviceThatFailedIrp; // rax

  v3 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( a2->PendingReturned )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = a2->IoStatus.Information;
  *(_DWORD *)(a3 + 40) = a2->IoStatus.Status;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
    if ( DeviceThatFailedIrp )
      v3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  if ( *(_DWORD *)(a3 + 32) == 781 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop);
  else
    PnpTraceStartDevice(*(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 40), v3);
  PnpDeviceCompletionRequestDestroy(a3);
  IoFreeIrp(a2);
  return 3221225494LL;
}
