/*
 * XREFs of UsbhDeleteUxdDeviceKey @ 0x1C00580C4
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C0058228 (UsbhDeleteUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C0057F40 (UsbhBuildUxdDeviceKey.c)
 */

__int64 __fastcall UsbhDeleteUxdDeviceKey(__int64 a1, __int64 a2)
{
  int v2; // r8d
  WCHAR ValueName[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(ValueName, L"VVVVPPPPRRRR");
  UsbhBuildUxdDeviceKey(a1, a2, ValueName);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v2,
      30,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
      (__int64)ValueName);
  RtlDeleteRegistryValue(1u, L"usbhub\\uxd_control\\devices", ValueName);
  return 0LL;
}
