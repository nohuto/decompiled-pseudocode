/*
 * XREFs of IoSetDevicePropertyData @ 0x1405B8D60
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PnpSetDevicePropertyData @ 0x1405B8E08 (PnpSetDevicePropertyData.c)
 */

NTSTATUS __stdcall IoSetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        DEVPROPTYPE Type,
        ULONG Size,
        PVOID Data)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v12; // rcx
  unsigned __int16 *v13; // rdi
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx

  if ( !Pdo )
    goto LABEL_16;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)Pdo, Pdo->Size);
    DriverObject = Pdo->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
      p_DriverName = &Pdo->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock((int)Pdo->DriverObject->DriverName.Buffer, Pdo->DriverObject->DriverName.Length);
      }
    }
    v12 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v12 + 40);
      IoAddTriageDumpDataBlock((int)v12, 720);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((int)v13, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), *v13);
      }
      v14 = (char *)Pdo->DeviceObjectExtension->DeviceNode + 56;
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((int)v14, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
      }
      v15 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
      if ( v15 && *(_WORD *)(v15 + 56) )
      {
        IoAddTriageDumpDataBlock(v15 + 56, 2);
        v16 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), *(unsigned __int16 *)(v16 + 56));
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return PnpSetDevicePropertyData(Pdo, PropertyKey, Lcid);
}
