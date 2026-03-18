/*
 * XREFs of ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00211BC
 * Callers:
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0013848 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C002AEC0 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C00732F8 (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009D5C4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C009F694 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C00A29A8 (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxIrp::SendIrpSynchronously(FxIrp *this, _DEVICE_OBJECT *DeviceObject)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  NTSTATUS result; // eax
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF

  event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&event.m_Event.m_Event, SynchronizationEvent, 0);
  m_Irp = this->m_Irp;
  event.m_Event.m_DbgFlagIsInitialized = 1;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
  CurrentStackLocation[-1].Context = &event;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(DeviceObject, this->m_Irp);
  if ( result == 259 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    return this->m_Irp->IoStatus.Status;
  }
  return result;
}
