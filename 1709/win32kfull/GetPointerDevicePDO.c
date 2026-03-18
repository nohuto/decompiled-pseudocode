/*
 * XREFs of GetPointerDevicePDO @ 0x1C00DC0CC
 * Callers:
 *     GetPointerDeviceKey @ 0x1C00DBC40 (GetPointerDeviceKey.c)
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00DBFBC (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetContainerId @ 0x1C00DE234 (GetContainerId.c)
 *     GetDeviceParent @ 0x1C01B64D8 (GetDeviceParent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerDevicePDO(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  PIRP v4; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS Status; // ebx
  void *Information; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v4 )
  {
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 7;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v4->IoStatus.Status = -1073741637;
    Status = IofCallDriver(DeviceObject, v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Information = (void *)IoStatusBlock.Information;
      *a2 = *(_QWORD *)(IoStatusBlock.Information + 8);
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Status;
}
