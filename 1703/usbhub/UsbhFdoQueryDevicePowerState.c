/*
 * XREFs of UsbhFdoQueryDevicePowerState @ 0x1C00033B8
 * Callers:
 *     UsbhFdoPower_QueryPower @ 0x1C0003170 (UsbhFdoPower_QueryPower.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoQueryDevicePowerState(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi

  v4 = FdoExt(a1);
  Log(a1, 16, 1365536883, 0, (__int64)a2);
  UsbhPoStartNextPowerIrp_Fdo(a1, a2, 1386LL);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
