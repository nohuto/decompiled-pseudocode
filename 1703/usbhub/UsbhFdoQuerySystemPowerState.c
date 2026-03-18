/*
 * XREFs of UsbhFdoQuerySystemPowerState @ 0x1C000322C
 * Callers:
 *     UsbhFdoPower_QueryPower @ 0x1C0003170 (UsbhFdoPower_QueryPower.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoQuerySystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 v4; // rbp
  NTSTATUS v5; // eax
  unsigned int v6; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v9; // rax

  v4 = FdoExt(DeviceObject);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 1224), Irp, File, 1u, 0x20u);
  v6 = v5;
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v5;
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1326LL);
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  else
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhFdoQuerySystemPowerSxIoCompletion, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v9 = Irp->Tail.Overlay.CurrentStackLocation;
      v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoQuerySystemPowerSxIoCompletion;
      v9[-1].Context = DeviceObject;
      v9[-1].Control = -32;
    }
    PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), Irp);
    return 259LL;
  }
}
