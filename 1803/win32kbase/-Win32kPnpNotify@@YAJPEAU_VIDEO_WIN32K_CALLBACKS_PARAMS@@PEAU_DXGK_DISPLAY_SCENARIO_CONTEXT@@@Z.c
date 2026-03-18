/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A34A0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     DrvLogDiagDisplayChange @ 0x1C004BA80 (DrvLogDiagDisplayChange.c)
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A26F0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00C97E0 (DxgkEngNotifyDisplayChange.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00D3898 (DrvCleanupGraphicsDevices.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6068 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  int v5; // ebx
  PVOID PhysDisp; // rbp
  struct tagGRAPHICS_DEVICE *i; // rax
  __int64 v9; // r8
  int v10; // eax
  _QWORD v11[2]; // [rsp+50h] [rbp-28h] BYREF
  char v12; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  if ( !gPowerTransitionsState )
  {
    LOBYTE(a3) = 1;
    DrvSetWddmDeviceMonitorPowerState(a1->PhysDisp, 1LL, a3, a2);
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    if ( a1->Param )
    {
      if ( !gProtocolType )
      {
        v11[0] = 0LL;
        gcLocalNextGlobalDeviceNumber = 0;
        DrvUpdateGraphicsDeviceList(1, 1);
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (v5 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v11), v5 >= 0) )
        {
          v5 = xxxUserSetDisplayConfig(0, 0, 2191, 6, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
            xxxRestoreCsrssThreadDesktop(v11, 0LL);
        }
      }
      v10 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v5 = v10;
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
        v11[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (v5 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v11), v5 >= 0) )
        {
          v12 = 0;
          v5 = xxxUserSetDisplayConfig(0, 0, 2191, 6, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)&v12, (__int64)a2);
          if ( v5 < 0 )
          {
            v5 = xxxUserSetDisplayConfig(0, 0, 128, 1, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && v12 )
          {
            DxgkEngNotifyDisplayChange(0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
            xxxRestoreCsrssThreadDesktop(v11, 0LL);
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v5 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1, 0);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gPowerTransitionsState )
    {
      LOBYTE(v9) = 1;
      DrvSetWddmDeviceMonitorPowerState(0LL, 4LL, v9, a2);
    }
    return (unsigned int)v5;
  }
  else
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
}
