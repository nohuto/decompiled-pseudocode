/*
 * XREFs of PostWinlogonMessage @ 0x1C00669C0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxDwmControl @ 0x1C0066950 (xxxDwmControl.c)
 *     PowerOffMonitor @ 0x1C0099170 (PowerOffMonitor.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118630 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C0118AA0 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0118C10 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119030 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0119B70 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119F70 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0049680 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     WmsgpPostMessage @ 0x1C01BD11C (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  int v3; // edi

  v2 = a1;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  v3 = WmsgpPostMessage(a1, (unsigned int)a1, a2);
  if ( v3 >= 0 && v2 == 1027 )
  {
    CInputGlobals::UpdateGlobalTickCount((__int64)gpInputGlobals, 1);
    if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
      SetTimerCoalescingTolerance(3LL);
  }
  return (unsigned int)v3;
}
