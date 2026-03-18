/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x140080E60
 * Callers:
 *     <none>
 * Callees:
 *     PnpTraceStartDevice @ 0x14003362C (PnpTraceStartDevice.c)
 *     IoFindDeviceThatFailedIrp @ 0x1400398F0 (IoFindDeviceThatFailedIrp.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140080F24 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140080F4C (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
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
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
    if ( DeviceThatFailedIrp )
      v3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  if ( *(_DWORD *)(a3 + 32) == 781 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(*(_QWORD *)(a3 + 16) + 40LL));
  else
    PnpTraceStartDevice(*(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 40), v3);
  PnpDeviceCompletionRequestDestroy(a3);
  IoFreeIrp(a2);
  return 3221225494LL;
}
