/*
 * XREFs of PowerDimUndimResend @ 0x1C0062AF0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0057C30 (DrvDxgkWriteDiagEntry.c)
 *     DrvSetMonitorBrightness @ 0x1C0062550 (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0065BA4 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 PowerDimUndimResend()
{
  int v0; // ebx
  __int64 result; // rax
  _BYTE v2[96]; // [rsp+30h] [rbp-78h] BYREF

  v0 = 0;
  if ( !gProtocolType
    && !*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type
    && !gbPowerHighPrecisionBrightnessSupported
    && !byte_1C018C284
    && dword_1C018C260 != -1 )
  {
    result = DrvSetMonitorBrightness(
               *((_QWORD *)gpDispInfo + 1),
               (unsigned int)dword_1C018C260,
               0xFFFFFFFF,
               dword_1C018C260 == dword_1C018C254,
               &byte_1C018C284,
               1);
    if ( byte_1C018C284 )
    {
      LOBYTE(v0) = dword_1C018C260 == dword_1C018C254;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v2, v0);
      return DrvDxgkWriteDiagEntry();
    }
  }
  return result;
}
