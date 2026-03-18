/*
 * XREFs of Usbh_BS_BusStop @ 0x1C0009D88
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044AA8 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusStop(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx

  v3 = a3;
  FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  Log(a1, 2048, 1651725140, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v3);
  if ( (_DWORD)v3 == 12 )
    Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
  return UsbhReleaseBusStateLock(a1, a2);
}
