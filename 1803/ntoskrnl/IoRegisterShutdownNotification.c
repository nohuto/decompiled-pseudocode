/*
 * XREFs of IoRegisterShutdownNotification @ 0x140604F60
 * Callers:
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     RawInitialize @ 0x1408B7610 (RawInitialize.c)
 * Callees:
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x140163934 (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140604FD4 (IopLogAuditIoRegisterNotificationEvent.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  PoolWithTag[2] = DeviceObject;
  ObfReferenceObject(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION);
  return 0;
}
