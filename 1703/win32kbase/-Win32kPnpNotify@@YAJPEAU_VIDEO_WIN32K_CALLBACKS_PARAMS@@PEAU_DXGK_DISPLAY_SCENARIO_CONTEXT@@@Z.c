/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     DrvLogDiagDisplayChange @ 0x1C0056D60 (DrvLogDiagDisplayChange.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C009B5F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D61E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00F0990 (DxgkEngNotifyDisplayChange.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00F8F14 (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  PVOID PhysDisp; // rbp
  struct tagGRAPHICS_DEVICE *i; // rax
  int v8; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v9; // [rsp+20h] [rbp-68h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v10; // [rsp+20h] [rbp-68h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // [rsp+28h] [rbp-60h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v12; // [rsp+28h] [rbp-60h]
  _QWORD v13[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF

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
        v13[0] = 0LL;
        HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
        DrvUpdateGraphicsDeviceList(1LL, 1LL);
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v13), v4 >= 0) )
        {
          LODWORD(v11) = 6;
          LODWORD(v9) = 2191;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, v9, v11, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
            xxxRestoreCsrssThreadDesktop(v13, 0LL);
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
        v13[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (v4 = xxxSetCsrssThreadDesktop(grpdeskRitInput, v13), v4 >= 0) )
        {
          LODWORD(v11) = 6;
          LODWORD(v9) = 2191;
          LOBYTE(v14) = 0;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, v9, v11, (__int64)grpdeskRitInput, 0, 0LL, &v14, (__int64)a2);
          if ( v4 < 0 )
          {
            LODWORD(v12) = 1;
            LODWORD(v10) = 128;
            v4 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, v10, v12, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && (_BYTE)v14 )
          {
            DxgkEngNotifyDisplayChange(0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
            xxxRestoreCsrssThreadDesktop(v13, 0LL);
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1LL, 0LL);
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
