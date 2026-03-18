/*
 * XREFs of UsbhFdoPower_QueryPower @ 0x1C0002DF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhStartThisPowerIrp_Fdo @ 0x1C0002E6C (UsbhStartThisPowerIrp_Fdo.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C0002EE4 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C0003078 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPower_QueryPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // rbp
  unsigned int Options; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(DeviceObject);
  UsbhStartThisPowerIrp_Fdo(DeviceObject, Irp, 1161LL);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoQuerySystemPowerState(DeviceObject, Irp);
  if ( Options == 1 )
    return UsbhFdoQueryDevicePowerState(DeviceObject, Irp);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1172LL);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
}
