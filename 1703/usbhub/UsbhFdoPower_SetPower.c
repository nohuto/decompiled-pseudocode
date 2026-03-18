/*
 * XREFs of UsbhFdoPower_SetPower @ 0x1C0004590
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00049E4 (UsbhFdoDevicePowerState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPower_SetPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PDEVICE_OBJECT *DeviceExtension; // rsi
  _IO_STACK_LOCATION *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9
  unsigned int Options; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (PDEVICE_OBJECT *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  Log((_DWORD)DeviceObject, 16, 1349739892, 0, (__int64)Irp);
  FdoExt(DeviceObject);
  v6 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v6->Parameters.Create.Options <= 1 )
  {
    Log((_DWORD)DeviceObject, 16, 1347374643, (_DWORD)v6, (__int64)Irp);
    *(_QWORD *)(v7 + 8 * v8 + 840) = Irp;
    *(_QWORD *)(v7 + 8 * v8 + 856) = v9;
    *(_DWORD *)(v7 + 4 * v8 + 872) = 1743;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoSystemPowerState(DeviceObject, Irp);
  if ( Options == 1 )
    return UsbhFdoDevicePowerState(DeviceObject, Irp);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1753);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(DeviceExtension[151], Irp);
}
