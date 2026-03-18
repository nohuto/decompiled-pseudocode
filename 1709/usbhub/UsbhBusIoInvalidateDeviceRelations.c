/*
 * XREFs of UsbhBusIoInvalidateDeviceRelations @ 0x1C0027C80
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C001B7E0 (UsbhBusConnectPdo.c)
 *     UsbhDeregisterPdo @ 0x1C0043994 (UsbhDeregisterPdo.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C00468E4 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
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
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
  IoInvalidateDeviceRelations(v4[149], BusRelations);
}
