/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x1405C7C90
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x1401464A4 (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x1405C7D84 (IopLogAuditIoRegisterNotificationEvent.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *PoolWithTag; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObject(DeviceObject);
  PoolWithTag[2] = DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyLastChanceShutdownQueueHead, PoolWithTag);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION);
  return 0;
}
