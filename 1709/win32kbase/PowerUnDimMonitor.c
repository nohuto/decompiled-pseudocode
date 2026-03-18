/*
 * XREFs of PowerUnDimMonitor @ 0x1C0077E70
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0067180 (DrvDxgkWriteDiagEntry.c)
 *     SqmPowerState @ 0x1C0078290 (SqmPowerState.c)
 *     DrvSetMonitorBrightness @ 0x1C007876C (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007A778 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void PowerUnDimMonitor()
{
  _BYTE v0[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (gbPowerHighPrecisionBrightnessSupported || dword_1C0190F90 != dword_1C0190F7C) && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v0, 0);
    DrvSetMonitorBrightness(
      *(_QWORD *)(gpDispInfo + 8),
      dword_1C0190F94,
      dword_1C0190F98,
      0,
      (__int64)&byte_1C0190FB4,
      0);
    if ( (int)IsModerncorePowerUnDimMonitorSupported() >= 0 )
      ModerncorePowerUnDimMonitor();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    DrvDxgkWriteDiagEntry();
    dword_1C0190F7C = dword_1C0190F94;
    dword_1C0190F90 = dword_1C0190F94;
  }
}
