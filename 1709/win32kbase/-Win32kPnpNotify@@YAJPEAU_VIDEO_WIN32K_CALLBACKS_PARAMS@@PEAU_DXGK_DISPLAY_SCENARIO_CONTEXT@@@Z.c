/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DCE00
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     DrvLogDiagDisplayChange @ 0x1C0066240 (DrvLogDiagDisplayChange.c)
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DC5EC (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00F3570 (DxgkEngNotifyDisplayChange.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00F93C4 (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  PVOID PhysDisp; // rbp
  struct tagGRAPHICS_DEVICE *i; // rax
  int v8; // eax
  _QWORD v9[2]; // [rsp+50h] [rbp-28h] BYREF
  char v10; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    if ( a1->Param )
    {
      if ( !gProtocolType )
      {
        v9[0] = 0LL;
        *(&WPP_MAIN_CB.ActiveThreadCount + 1) = 0;
        DrvUpdateGraphicsDeviceList(1, 1);
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v9), v4 >= 0) )
        {
          v4 = xxxUserSetDisplayConfig(0, 0, 2191, 6, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
            xxxRestoreCsrssThreadDesktop(v9, 0LL);
        }
      }
      v8 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v4 = v8;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( !gProtocolType )
      {
        v9[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v9), v4 >= 0) )
        {
          v10 = 0;
          v4 = xxxUserSetDisplayConfig(0, 0, 2191, 6, (__int64)grpdeskRitInput, 0, 0LL, (__int64)&v10, (__int64)a2);
          if ( v4 < 0 )
          {
            v4 = xxxUserSetDisplayConfig(0, 0, 128, 1, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && v10 )
          {
            DxgkEngNotifyDisplayChange(0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
            xxxRestoreCsrssThreadDesktop(v9, 0LL);
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1, 0);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gPowerTransitionsState )
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
    return (unsigned int)v4;
  }
  else
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
}
