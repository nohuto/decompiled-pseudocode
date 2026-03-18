/*
 * XREFs of PopRegisterCoolingExtensionProtection @ 0x14075EB2C
 * Callers:
 *     PopAssociateThermalRequest @ 0x140627198 (PopAssociateThermalRequest.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140064E70 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x140496520 (IoGetDeviceObjectPointer.c)
 *     IoGetDeviceProperty @ 0x140525CB0 (IoGetDeviceProperty.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 */

__int64 __fastcall PopRegisterCoolingExtensionProtection(PDEVICE_OBJECT *Context)
{
  PVOID *NotificationEntry; // r15
  NTSTATUS DeviceProperty; // ebx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rdi
  PVOID PoolWithTag; // rbp
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+18h] BYREF

  FileObject = 0LL;
  NotificationEntry = (PVOID *)(Context + 7);
  if ( Context[7] )
  {
    return 0;
  }
  else
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context[6]);
    if ( IoGetDeviceProperty(DeviceAttachmentBaseRef, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x6C6F4350u);
      if ( PoolWithTag )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           PoolWithTag,
                           &BufferLength);
        if ( DeviceProperty >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
          DeviceProperty = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
          if ( DeviceProperty >= 0 )
            DeviceProperty = IoRegisterPlugPlayNotification(
                               EventCategoryTargetDeviceChange,
                               0,
                               FileObject,
                               DeviceObject->DriverObject,
                               (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopCoolingExtensionPnpNotification,
                               Context,
                               NotificationEntry);
          if ( FileObject )
            ObfDereferenceObject(FileObject);
        }
        ExFreePoolWithTag(PoolWithTag, 0x6C6F4350u);
      }
      else
      {
        DeviceProperty = -1073741670;
      }
    }
    else
    {
      DeviceProperty = -1073741823;
    }
    if ( DeviceAttachmentBaseRef )
      ObfDereferenceObject(DeviceAttachmentBaseRef);
  }
  return (unsigned int)DeviceProperty;
}
