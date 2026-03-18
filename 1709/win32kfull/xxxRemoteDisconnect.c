/*
 * XREFs of xxxRemoteDisconnect @ 0x1C00D63E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     AutoRotationUpdateRegistry @ 0x1C00D6720 (AutoRotationUpdateRegistry.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00D6744 (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C00D69C4 (DrvSetGraphicsDevices.c)
 *     RemoveInputDevices @ 0x1C00D6A40 (RemoveInputDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D7030 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0126820 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C0141550 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0141CDC (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0141FF0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0142310 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0143F90 (UnregisterDeviceClassNotifications.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01B892C (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01F3C94 (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // esi
  __int64 RemoteContext; // rbp
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  _BYTE v12[8]; // [rsp+30h] [rbp-88h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v14[10]; // [rsp+40h] [rbp-78h] BYREF

  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v0 = 0;
  v14[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 21;
  LOBYTE(v14[6]) = -1;
  RemoteContext = GreGetRemoteContext();
  v2 = 0;
  if ( PsGetCurrentProcess(v4, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    gDxgkInterface[121](0LL);
  }
  else
  {
    while ( WPP_MAIN_CB.DeviceQueue.Lock )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
  }
  if ( gProtocolType || gbFullScreen != 1 || (result = xxxRequestOutOfFullScreenMode(), (int)result >= 0) )
  {
    gdwHydraHint |= 0x10u;
    memset(gstrBaseWinStationName, 0, 0x40uLL);
    if ( gfSessionSwitchBlock )
      return 3221226029LL;
    if ( !gProtocolType && !gbGDIOn )
    {
      v2 = 1;
      PowerOnGdi(v14, 1LL, 4LL);
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( gdwInAtomicOperation )
      {
        v5 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0LL, 1LL);
    }
    if ( !gProtocolType && gbSnapShotWindowsAndMonitors && *(_DWORD *)*gpDispInfo > 1u )
    {
      v11 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( !v11 )
        v11 = grpdeskIODefault;
      SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v11 + 40), gWndsMonitorSnapshotHead);
    }
    if ( gspdeskDisconnect )
    {
      v6 = xxxRemoteStopScreenUpdates();
      if ( v6 < 0 )
        goto LABEL_53;
      v0 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( gProtocolType )
      {
        GreDrvDisconnect(RemoteContext);
      }
      else
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v12);
        LOBYTE(v7) = 1;
        gDxgkInterface[120](v7);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
        v6 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v14);
        LOBYTE(v9) = 1;
        gDxgkInterface[121](v9);
        if ( v6 < 0 )
          goto LABEL_52;
        DrvCloseLocalGraphicsDevices();
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      AutoRotationUpdateRegistry();
      CitSessionConnectChange(0LL, 0LL);
    }
    else
    {
      v6 = -1073741823;
    }
    if ( v6 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_31:
      SetConsoleSwitchInProgress(0LL);
      if ( v6 < 0 && v2 == 1 )
        PowerOffGdi();
      return (unsigned int)v6;
    }
    if ( !v0 )
    {
LABEL_53:
      if ( !gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
      goto LABEL_31;
    }
LABEL_52:
    RemoteRedrawScreen();
    goto LABEL_53;
  }
  return result;
}
