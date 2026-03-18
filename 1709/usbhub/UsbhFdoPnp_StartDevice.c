/*
 * XREFs of UsbhFdoPnp_StartDevice @ 0x1C0008390
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_FDO_Pnp_State @ 0x1C00085E0 (Usbh_FDO_Pnp_State.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 v4; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int Status; // edi
  __int64 v7; // rax
  _IO_STACK_LOCATION *v9; // rax
  int v10; // [rsp+48h] [rbp-30h]
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v4 = FdoExt(DeviceObject);
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
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
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
  Log((_DWORD)DeviceObject, 2, 1937011287, 0, (__int64)Irp);
  if ( IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), Irp) == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  Status = Irp->IoStatus.Status;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    LOBYTE(v10) = 0;
    UsbhException((int)DeviceObject, 0, 57, 0, 0, Status, 0, usbfile_pnp_c, 3077, v10);
  }
  else
  {
    v7 = FdoExt(DeviceObject);
    Status = Usbh_FDO_Pnp_State(v7 + 1384, 4LL);
  }
  *(_QWORD *)(v4 + 5104) = MEMORY[0xFFFFF78000000014];
  Log((_DWORD)DeviceObject, 2, 1398035028, 0, Status);
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
