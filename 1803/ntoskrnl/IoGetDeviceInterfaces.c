/*
 * XREFs of IoGetDeviceInterfaces @ 0x14048FF60
 * Callers:
 *     PnprIsMemoryDevice @ 0x14073465C (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x140734710 (PnprIsProcessorDevice.c)
 *     IopFetchConfigurationInformation @ 0x1408C4F0C (IopFetchConfigurationInformation.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaces(
        const GUID *InterfaceClassGuid,
        PDEVICE_OBJECT PhysicalDeviceObject,
        ULONG Flags,
        PZZWSTR *SymbolicLinkList)
{
  int v5; // edx
  _DWORD *DeviceNode; // rdx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v10; // rcx
  unsigned __int16 *v11; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  _WORD *v15; // rcx
  __int64 v16; // rcx

  v5 = 0;
  if ( PhysicalDeviceObject )
  {
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
      v10 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v10 )
      {
        v11 = (unsigned __int16 *)(v10 + 40);
        IoAddTriageDumpDataBlock((int)v10, 728);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((int)v11, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), *v11);
        }
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        v13 = (char *)DeviceObjectExtension->DeviceNode + 56;
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((int)v13, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        }
        v14 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v14 )
        {
          v15 = (_WORD *)(v14 + 56);
          if ( *v15 )
          {
            IoAddTriageDumpDataBlock((int)v15, 2);
            v16 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), *(unsigned __int16 *)(v16 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    v5 = (_DWORD)DeviceNode + 40;
  }
  return IopGetDeviceInterfaces((_DWORD)InterfaceClassGuid, v5, Flags, 0, (__int64)SymbolicLinkList, 0LL);
}
