/*
 * XREFs of IoReportTargetDeviceChangeAsynchronous @ 0x140067520
 * Callers:
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140422420 (FsRtlNotifyVolumeEventEx.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PnpSetCustomTargetEvent @ 0x14045564C (PnpSetCustomTargetEvent.c)
 */

NTSTATUS __stdcall IoReportTargetDeviceChangeAsynchronous(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PVOID NotificationStructure,
        PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
        PVOID Context)
{
  _DWORD *DeviceNode; // rcx
  GUID *v9; // rdi
  _BOOL8 v10; // rcx
  _BOOL8 v11; // rcx
  _BOOL8 v12; // rcx
  unsigned __int16 v13; // cx
  int v14; // edx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v19; // rcx
  unsigned __int16 *v20; // rsi
  _WORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_37;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(PhysicalDeviceObject, PhysicalDeviceObject->Size);
    DriverObject = PhysicalDeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock(DriverObject, (unsigned int)DriverObject->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock(p_DriverName, 2LL);
        IoAddTriageDumpDataBlock(
          PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v19 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v19 )
    {
      v20 = (unsigned __int16 *)(v19 + 40);
      IoAddTriageDumpDataBlock(v19, 720LL);
      if ( *v20 )
      {
        IoAddTriageDumpDataBlock(v20, 2LL);
        IoAddTriageDumpDataBlock(*((_QWORD *)v20 + 1), *v20);
      }
      v21 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v21 )
      {
        IoAddTriageDumpDataBlock(v21, 2LL);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v22 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v22 && *(_WORD *)(v22 + 56) )
      {
        IoAddTriageDumpDataBlock(v22 + 56, 2LL);
        v23 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 64), *(unsigned __int16 *)(v23 + 56));
      }
    }
LABEL_37:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v9 = (GUID *)((char *)NotificationStructure + 4);
  if ( (char *)NotificationStructure + 4 == (char *)&GUID_TARGET_DEVICE_QUERY_REMOVE )
    LODWORD(v10) = 1;
  else
    v10 = RtlCompareMemory(v9, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16;
  if ( v10 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED )
    LODWORD(v11) = 1;
  else
    v11 = RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16;
  if ( v11 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_COMPLETE )
    LODWORD(v12) = 1;
  else
    v12 = RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10uLL) == 16;
  if ( v12 )
    return -1073741808;
  v13 = *((_WORD *)NotificationStructure + 1);
  if ( v13 < 0x24u )
    return -1073741808;
  v14 = *((_DWORD *)NotificationStructure + 8);
  if ( v14 != -1 && v14 > v13 - 36 )
    return -1073741808;
  if ( KeGetCurrentIrql() != 2 )
    return PnpSetCustomTargetEvent(PhysicalDeviceObject, (__int64)Context, NotificationStructure);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 64LL, 0x38706E50u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObjectWithTag(PhysicalDeviceObject, 0x746C6644u);
  PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)PhysicalDeviceObject;
  PoolWithTag[1].Parameter = &PoolWithTag[2];
  memmove(&PoolWithTag[2], NotificationStructure, *((unsigned __int16 *)NotificationStructure + 1));
  PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)Callback;
  PoolWithTag[1].WorkerRoutine = (void (__fastcall *)(void *))Context;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnpReportTargetDeviceChangeAsyncWorker;
  PoolWithTag->Parameter = PoolWithTag;
  PoolWithTag->List.Flink = 0LL;
  ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  return 259;
}
