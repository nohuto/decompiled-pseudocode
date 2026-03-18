/*
 * XREFs of PowerDimUndimResend @ 0x1C00786C8
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065520 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0067180 (DrvDxgkWriteDiagEntry.c)
 *     DrvSetMonitorBrightness @ 0x1C007876C (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007A778 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 PowerDimUndimResend()
{
  int v0; // ebx
  __int64 result; // rax
  _BYTE v2[96]; // [rsp+30h] [rbp-78h] BYREF

  v0 = 0;
  if ( !gProtocolType
    && !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2)
    && !gbPowerHighPrecisionBrightnessSupported
    && !byte_1C0190FB4
    && dword_1C0190F90 != -1 )
  {
    result = DrvSetMonitorBrightness(
               *(_QWORD *)(gpDispInfo + 8),
               dword_1C0190F90,
               -1,
               dword_1C0190F90 == dword_1C0190F84,
               (__int64)&byte_1C0190FB4,
               1);
    if ( byte_1C0190FB4 )
    {
      LOBYTE(v0) = dword_1C0190F90 == dword_1C0190F84;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v2, v0);
      return DrvDxgkWriteDiagEntry();
    }
  }
  return result;
}
