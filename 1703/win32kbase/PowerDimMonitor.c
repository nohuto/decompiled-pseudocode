/*
 * XREFs of PowerDimMonitor @ 0x1C00D7114
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0057C30 (DrvDxgkWriteDiagEntry.c)
 *     DrvSetMonitorBrightness @ 0x1C0062550 (DrvSetMonitorBrightness.c)
 *     SqmPowerState @ 0x1C0065930 (SqmPowerState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0065BA4 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void PowerDimMonitor()
{
  _BYTE v0[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (gbPowerHighPrecisionBrightnessSupported
     || dword_1C018C260 != dword_1C018C254 && dword_1C018C254 < (unsigned int)dword_1C018C24C)
    && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v0, 1);
    DrvSetMonitorBrightness(
      *((_QWORD *)gpDispInfo + 1),
      (unsigned int)dword_1C018C274,
      dword_1C018C278,
      1u,
      &byte_1C018C284,
      0);
    if ( (int)IsModerncorePowerDimMonitorSupported() >= 0 )
      ModerncorePowerDimMonitor();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    DrvDxgkWriteDiagEntry();
    dword_1C018C254 = dword_1C018C274;
    dword_1C018C260 = dword_1C018C274;
  }
}
