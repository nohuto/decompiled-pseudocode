/*
 * XREFs of UsbhBusIoInvalidateDeviceRelations @ 0x1C0025818
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C002557C (UsbhBusConnectPdo.c)
 *     UsbhDeregisterPdo @ 0x1C0042B54 (UsbhDeregisterPdo.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B18 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhBusIoInvalidateDeviceRelations(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v4; // rsi

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 16, 4812662, a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
  IoInvalidateDeviceRelations(v4[149], BusRelations);
}
