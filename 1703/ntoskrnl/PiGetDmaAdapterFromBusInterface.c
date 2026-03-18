/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x1405CB374
 * Callers:
 *     IoGetDmaAdapter @ 0x1405CB2A0 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rsi
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  USHORT v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  void (__fastcall *v18)(__int64); // [rsp+48h] [rbp-30h]
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // [rsp+58h] [rbp-20h]

  v3 = 0LL;
  if ( !DeviceObject )
    goto LABEL_20;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)DeviceObject, DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
      p_DriverName = &DeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock(
          (int)DeviceObject->DriverObject->DriverName.Buffer,
          DeviceObject->DriverObject->DriverName.Length);
      }
    }
    v11 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      IoAddTriageDumpDataBlock((int)v11, 720);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((int)v12, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), *v12);
      }
      v13 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((int)v13, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v14 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v14 && *(_WORD *)(v14 + 56) )
      {
        IoAddTriageDumpDataBlock(v14 + 56, 2);
        v15 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), *(unsigned __int16 *)(v15 + 56));
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface(DeviceObject, (ULONG_PTR)&GUID_BUS_INTERFACE_STANDARD, 1u, 0x40u, 0LL, &v16) >= 0 )
  {
    if ( v19 )
      v3 = v19(v17, a2, a3);
    v18(v17);
  }
  return v3;
}
