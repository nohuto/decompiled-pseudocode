/*
 * XREFs of ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A28DC
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009D5C4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00244A8 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C00A29A8 (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 */

int __fastcall SendDeviceUsageNotification(
        MxDeviceObject *RelatedDevice,
        FxIrp *RelatedIrp,
        MxWorkItem *Workitem,
        FxIrp *OriginalIrp,
        unsigned __int8 Revert)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx
  FxUsageWorkitemParameters param; // [rsp+30h] [rbp-58h] BYREF

  if ( !Workitem->m_WorkItem )
    return SendDeviceUsageNotificationWorker(RelatedDevice, RelatedIrp, OriginalIrp, Revert);
  FxCREvent::FxCREvent(&param.Event, (unsigned __int8)RelatedIrp);
  m_WorkItem = Workitem->m_WorkItem;
  param.Revert = Revert;
  param.Status = -1073741823;
  param.RelatedDevice = RelatedDevice;
  param.RelatedIrp = RelatedIrp;
  param.OriginalIrp = OriginalIrp;
  IoQueueWorkItem(m_WorkItem, _DeviceUsageNotificationWorkItem, DelayedWorkQueue, &param);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&param.Event, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  return param.Status;
}
