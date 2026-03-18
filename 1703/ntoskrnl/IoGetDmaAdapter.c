/*
 * XREFs of IoGetDmaAdapter @ 0x1405CB2A0
 * Callers:
 *     VfGetDmaAdapter @ 0x140769DA0 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1405CB374 (PiGetDmaAdapterFromBusInterface.c)
 */

struct _DMA_ADAPTER *__stdcall IoGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  struct _DMA_ADAPTER *DmaAdapterFromBusInterface; // rdi
  _DWORD *DeviceNode; // rcx
  size_t v8; // r8
  NTSTATUS DeviceProperty; // eax
  int v10; // r9d
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[20]; // [rsp+40h] [rbp-68h] BYREF
  int PropertyBuffer[11]; // [rsp+54h] [rbp-54h] BYREF

  DmaAdapterFromBusInterface = 0LL;
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
      v13 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v13 )
      {
        v14 = (unsigned __int16 *)(v13 + 40);
        IoAddTriageDumpDataBlock((int)v13, 720);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((int)v14, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), *v14);
        }
        v15 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((int)v15, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        }
        v16 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        if ( v16 && *(_WORD *)(v16 + 56) )
        {
          IoAddTriageDumpDataBlock(v16 + 56, 2);
          v17 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), *(unsigned __int16 *)(v17 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    ((void (__fastcall *)(struct _KTHREAD *, PDEVICE_OBJECT))off_14033B618[0])(
      KeGetCurrentThread(),
      PhysicalDeviceObject);
    if ( ((DeviceDescription->InterfaceType + 1) & 0xFFFFFFEF) == 0 )
    {
      if ( DeviceDescription->Version >= 3 )
      {
        v8 = 0LL;
        if ( DeviceDescription->Version == 3 )
          v8 = 64LL;
      }
      else
      {
        v8 = 40LL;
      }
      memmove(v19, DeviceDescription, v8);
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyLegacyBusType,
                         4u,
                         PropertyBuffer,
                         ResultLength);
      v10 = PropertyBuffer[0];
      if ( DeviceProperty < 0 )
        v10 = PnpDefaultInterfaceType;
      PropertyBuffer[0] = v10;
    }
    DmaAdapterFromBusInterface = (struct _DMA_ADAPTER *)PiGetDmaAdapterFromBusInterface(PhysicalDeviceObject);
    ((void (__fastcall *)(struct _KTHREAD *, _QWORD))off_14033B618[0])(KeGetCurrentThread(), 0LL);
  }
  return DmaAdapterFromBusInterface;
}
