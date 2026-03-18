/*
 * XREFs of UsbhFdoPower_SetPower @ 0x1C0004120
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00044D4 (UsbhFdoDevicePowerState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPower_SetPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v5; // rbp
  _IO_STACK_LOCATION *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9
  unsigned int Options; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(DeviceObject);
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
  return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
}
