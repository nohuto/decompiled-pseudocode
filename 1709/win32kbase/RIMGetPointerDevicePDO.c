/*
 * XREFs of RIMGetPointerDevicePDO @ 0x1C000EC48
 * Callers:
 *     RIMUpdateMonitorQuirk @ 0x1C000B05C (RIMUpdateMonitorQuirk.c)
 *     RIMGetDeviceParent @ 0x1C000B2A0 (RIMGetDeviceParent.c)
 *     RIMGetContainerId @ 0x1C000EB54 (RIMGetContainerId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetPointerDevicePDO(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
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
