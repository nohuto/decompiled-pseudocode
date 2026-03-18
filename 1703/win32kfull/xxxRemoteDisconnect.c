/*
 * XREFs of xxxRemoteDisconnect @ 0x1C00FE0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 *     AutoRotationUpdateRegistry @ 0x1C00FE400 (AutoRotationUpdateRegistry.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00FE41C (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C00FE6A0 (DrvSetGraphicsDevices.c)
 *     RemoveInputDevices @ 0x1C00FE810 (RemoveInputDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FEE04 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C011CB40 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C013A8A8 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C013B0D0 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C013B470 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C013B690 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     UnregisterDeviceClassNotifications @ 0x1C013DC04 (UnregisterDeviceClassNotifications.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01B56B8 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01E7CA4 (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // esi
  __int64 RemoteContext; // rbp
  int v2; // r14d
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  int *v8; // rcx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  int *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-78h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-68h] BYREF

  memset(v15, 0, sizeof(v15));
  EtwActivityIdControl(3u, (LPGUID)&v15[1]);
  v0 = 0;
  v15[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v15[3]) = 21;
  RemoteContext = GreGetRemoteContext();
  v2 = 0;
  if ( PsGetCurrentProcess(v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    gDxgkInterface[122](0LL);
  }
  else
  {
    while ( ghSwitcher )
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
      PowerOnGdi(v15, 1LL, 4LL);
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( gdwInAtomicOperation )
      {
        v4 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v4, gdwInAtomicOperation, v5, v6);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0LL, 1LL);
    }
    if ( !gProtocolType && gbSnapShotWindowsAndMonitors && *(_DWORD *)*gpDispInfo > 1u )
    {
      v12 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( !v12 )
        v12 = grpdeskIODefault;
      SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v12 + 40), gWndsMonitorSnapshotHead);
    }
    if ( gspdeskDisconnect )
    {
      v7 = xxxRemoteStopScreenUpdates();
      if ( v7 < 0 )
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
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v13);
        LOBYTE(v8) = 1;
        gDxgkInterface[121](v8);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
        v7 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15);
        LOBYTE(v10) = 1;
        gDxgkInterface[122](v10);
        if ( v7 < 0 )
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
      v7 = -1073741823;
    }
    if ( v7 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_31:
      SetConsoleSwitchInProgress(0LL);
      if ( v7 < 0 && v2 == 1 )
        PowerOffGdi();
      return (unsigned int)v7;
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
