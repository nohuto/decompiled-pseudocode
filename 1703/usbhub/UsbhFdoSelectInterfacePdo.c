/*
 * XREFs of UsbhFdoSelectInterfacePdo @ 0x1C003A7D0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoSelectInterfacePdo(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp)
{
  PDEVICE_OBJECT *v6; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IO_STACK_LOCATION *v8; // rax

  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  PdoExt((__int64)Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         Irp,
         (PIO_COMPLETION_ROUTINE)UsbhSelectConfigOrInterfaceComplete,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v8 = Irp->Tail.Overlay.CurrentStackLocation;
    v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v8[-1].Context = Context;
    v8[-1].Control = -32;
  }
  return IofCallDriver(v6[152], Irp);
}
