/*
 * XREFs of Usbh_BS_BusRemove @ 0x1C003E830
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusRemove(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebp
  int v8; // [rsp+28h] [rbp-10h]

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651724371, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v8);
  }
  return UsbhReleaseBusStateLock(a1, a2, v6);
}
