/*
 * XREFs of UsbhFdoPnp_StartDevice @ 0x1C0018D80
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001B7E0 (Usbh_FDO_Pnp_State.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PDEVICE_OBJECT *v4; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int Status; // edi
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *v9; // rax
  int v10; // [rsp+48h] [rbp-30h]
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v4 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
  {
    v9 = Irp->Tail.Overlay.CurrentStackLocation;
    v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
    v9[-1].Context = &Event;
    v9[-1].Control = -32;
  }
  Log((__int64)DeviceObject, 2, 1937011287, 0LL, (__int64)Irp);
  if ( IofCallDriver(v4[151], Irp) == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = Irp->IoStatus.Status;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    LOBYTE(v10) = 0;
    UsbhException((int)DeviceObject, 0, 57, 0, 0, Status, 0, usbfile_pnp_c, 3077, v10);
  }
  else
  {
    v7 = FdoExt((__int64)DeviceObject);
    Status = Usbh_FDO_Pnp_State(v7 + 346, 4LL);
  }
  v4[638] = (PDEVICE_OBJECT)MEMORY[0xFFFFF78000000014];
  Log((__int64)DeviceObject, 2, 1398035028, 0LL, Status);
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
