/*
 * XREFs of IoInvalidateDeviceRelations @ 0x1400FF390
 * Callers:
 *     PiSwProcessParentStartIrp @ 0x140553AF8 (PiSwProcessParentStartIrp.c)
 *     IopPnPDispatch @ 0x1405B9E90 (IopPnPDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1406CA410 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiSwCloseDevice @ 0x1406CDA04 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceRelations(PDEVICE_OBJECT DeviceObject, DEVICE_RELATION_TYPE Type)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v6; // rcx
  unsigned __int16 *v7; // rdi
  _WORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  if ( !DeviceObject )
    goto LABEL_21;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(DeviceObject, DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock(DriverObject, (unsigned int)DriverObject->Size);
      p_DriverName = &DeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock(p_DriverName, 2LL);
        IoAddTriageDumpDataBlock(
          DeviceObject->DriverObject->DriverName.Buffer,
          DeviceObject->DriverObject->DriverName.Length);
      }
    }
    v6 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v6 )
    {
      v7 = (unsigned __int16 *)(v6 + 40);
      IoAddTriageDumpDataBlock(v6, 728LL);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock(v7, 2LL);
        IoAddTriageDumpDataBlock(*((_QWORD *)v7 + 1), *v7);
      }
      v8 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock(v8, 2LL);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v9 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v9 && *(_WORD *)(v9 + 56) )
      {
        IoAddTriageDumpDataBlock(v9 + 56, 2LL);
        v10 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v10 + 64), *(unsigned __int16 *)(v10 + 56));
      }
    }
LABEL_21:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  if ( (unsigned int)Type <= PowerRelations || Type == SingleBusRelations || Type == TransportRelations )
    PnpRequestDeviceAction(DeviceObject, 0LL, 0LL, 0LL);
}
