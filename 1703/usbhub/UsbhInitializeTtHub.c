/*
 * XREFs of UsbhInitializeTtHub @ 0x1C0025BA4
 * Callers:
 *     UsbhInitialize @ 0x1C0017340 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003B514 (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_HubDerefDeviceHandle @ 0x1C0025C70 (Usbh_HubDerefDeviceHandle.c)
 *     Usbh_HubInitialize20Hub @ 0x1C0025CC8 (Usbh_HubInitialize20Hub.c)
 *     UsbhGetDeviceHandle @ 0x1C0025D64 (UsbhGetDeviceHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitializeTtHub(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 DeviceHandle; // rbp
  unsigned int v7; // ebx

  v4 = FdoExt(a1);
  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  if ( (v4[640] & 0x80u) != 0 )
    v5 = *((unsigned __int8 *)FdoExt(a1) + 2938);
  v7 = Usbh_HubInitialize20Hub(a1, DeviceHandle, v5);
  Log(a1, 8, 1768838228, (int)v7, v5);
  Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 1212445810LL);
  return v7;
}
