/*
 * XREFs of PowerDimMonitor @ 0x1C00DD2FC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0067180 (DrvDxgkWriteDiagEntry.c)
 *     SqmPowerState @ 0x1C0078290 (SqmPowerState.c)
 *     DrvSetMonitorBrightness @ 0x1C007876C (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007A778 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void PowerDimMonitor()
{
  _BYTE v0[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (gbPowerHighPrecisionBrightnessSupported
     || dword_1C0190F90 != dword_1C0190F84 && dword_1C0190F84 < (unsigned int)dword_1C0190F7C)
    && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v0, 1);
    DrvSetMonitorBrightness(
      *(_QWORD *)(gpDispInfo + 8),
      (unsigned int)dword_1C0190FA4,
      dword_1C0190FA8,
      1u,
      &byte_1C0190FB4,
      0);
    if ( (int)IsModerncorePowerDimMonitorSupported() >= 0 )
      ModerncorePowerDimMonitor();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    DrvDxgkWriteDiagEntry();
    dword_1C0190F84 = dword_1C0190FA4;
    dword_1C0190F90 = dword_1C0190FA4;
  }
}
