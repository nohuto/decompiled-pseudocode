/*
 * XREFs of PowerUnDimMonitor @ 0x1C00656EC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0057C30 (DrvDxgkWriteDiagEntry.c)
 *     DrvSetMonitorBrightness @ 0x1C0062550 (DrvSetMonitorBrightness.c)
 *     SqmPowerState @ 0x1C0065930 (SqmPowerState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0065BA4 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void PowerUnDimMonitor()
{
  _BYTE v0[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (gbPowerHighPrecisionBrightnessSupported || dword_1C018C260 != dword_1C018C24C) && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v0, 0);
    DrvSetMonitorBrightness(
      *((_QWORD *)gpDispInfo + 1),
      (unsigned int)dword_1C018C264,
      dword_1C018C268,
      0,
      &byte_1C018C284,
      0);
    if ( (int)IsModerncorePowerUnDimMonitorSupported() >= 0 )
      ModerncorePowerUnDimMonitor();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    DrvDxgkWriteDiagEntry();
    dword_1C018C24C = dword_1C018C264;
    dword_1C018C260 = dword_1C018C264;
  }
}
