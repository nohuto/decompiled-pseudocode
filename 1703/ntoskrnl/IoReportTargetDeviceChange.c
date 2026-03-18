/*
 * XREFs of IoReportTargetDeviceChange @ 0x140574FF0
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x140422420 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     PnpSetCustomTargetEvent @ 0x14045564C (PnpSetCustomTargetEvent.c)
 */

NTSTATUS __stdcall IoReportTargetDeviceChange(PDEVICE_OBJECT PhysicalDeviceObject, PVOID NotificationStructure)
{
  _DWORD *DeviceNode; // rcx
  GUID *v5; // rdi
  _BOOL8 v6; // rsi
  _BOOL8 v7; // rcx
  _BOOL8 v8; // rcx
  unsigned __int16 v9; // ax
  int v10; // ecx
  NTSTATUS result; // eax
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v14; // rcx
  unsigned __int16 *v15; // rdi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  NTSTATUS v20; // [rsp+70h] [rbp+8h] BYREF

  if ( !PhysicalDeviceObject )
    goto LABEL_34;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)PhysicalDeviceObject, PhysicalDeviceObject->Size);
    DriverObject = PhysicalDeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock(
          (int)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v14 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v14 )
    {
      v15 = (unsigned __int16 *)(v14 + 40);
      IoAddTriageDumpDataBlock((int)v14, 720);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((int)v15, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), *v15);
      }
      v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((int)v16, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v17 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v17 && *(_WORD *)(v17 + 56) )
      {
        IoAddTriageDumpDataBlock(v17 + 56, 2);
        v18 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), *(unsigned __int16 *)(v18 + 56));
      }
    }
LABEL_34:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v5 = (GUID *)((char *)NotificationStructure + 4);
  LODWORD(v6) = 1;
  if ( (char *)NotificationStructure + 4 == (char *)&GUID_TARGET_DEVICE_QUERY_REMOVE )
    LODWORD(v7) = 1;
  else
    v7 = RtlCompareMemory(v5, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16;
  if ( v7 )
    return -1073741808;
  if ( v5 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED )
    LODWORD(v8) = 1;
  else
    v8 = RtlCompareMemory(v5, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16;
  if ( v8 )
    return -1073741808;
  if ( v5 != &GUID_TARGET_DEVICE_REMOVE_COMPLETE )
    v6 = RtlCompareMemory(v5, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10uLL) == 16;
  if ( v6 )
    return -1073741808;
  v9 = *((_WORD *)NotificationStructure + 1);
  if ( v9 < 0x24u )
    return -1073741808;
  v10 = *((_DWORD *)NotificationStructure + 8);
  if ( v10 != -1 && v10 > v9 - 36 )
    return -1073741808;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpSetCustomTargetEvent(
             PhysicalDeviceObject,
             (__int64)&Event,
             &v20,
             0LL,
             0LL,
             (unsigned __int16 *)NotificationStructure);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v20;
  }
  return result;
}
