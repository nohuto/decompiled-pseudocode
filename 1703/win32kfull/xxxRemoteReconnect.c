/*
 * XREFs of xxxRemoteReconnect @ 0x1C0139E30
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     SetMouseTrails @ 0x1C00B9CC4 (SetMouseTrails.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C00BAE00 (DrvOcclusionStateChangeNotify.c)
 *     TransitionCursorSuppressionState @ 0x1C00F0DC0 (TransitionCursorSuppressionState.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00FE41C (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C00FE6A0 (DrvSetGraphicsDevices.c)
 *     RemoveInputDevices @ 0x1C00FE810 (RemoveInputDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FEE04 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     RegisterCDROMNotify @ 0x1C011896C (RegisterCDROMNotify.c)
 *     InitKeyboard @ 0x1C0119A9C (InitKeyboard.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C011C2E0 (xxxUserReinitializeAutoRotation.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C013A6E8 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C013A804 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C013A844 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C013A8A8 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C013A9A4 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C013AAAC (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C013AC0C (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C013B0D0 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     UnregisterDeviceClassNotifications @ 0x1C013DC04 (UnregisterDeviceClassNotifications.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GreDrvReconnect @ 0x1C029BA44 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  BOOL v2; // ebx
  NTSTATUS Win32kDriverObject; // edi
  BOOL v4; // esi
  void *v5; // r12
  unsigned int v6; // r15d
  __int64 RemoteContext; // r14
  __int64 v8; // rcx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  char *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  wchar_t *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r15d
  int v24; // r13d
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  _WORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v43; // rcx
  int v44; // [rsp+38h] [rbp-340h]
  BOOL v45; // [rsp+60h] [rbp-318h]
  int v46; // [rsp+70h] [rbp-308h]
  int v47; // [rsp+74h] [rbp-304h]
  int v48; // [rsp+78h] [rbp-300h]
  int v49; // [rsp+84h] [rbp-2F4h]
  PVOID v50; // [rsp+90h] [rbp-2E8h] BYREF
  PVOID v51; // [rsp+98h] [rbp-2E0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-2D8h] BYREF
  _BYTE v53[304]; // [rsp+B0h] [rbp-2C8h] BYREF
  char v54; // [rsp+1E0h] [rbp-198h] BYREF
  __int64 v55; // [rsp+200h] [rbp-178h]
  __int64 v56; // [rsp+208h] [rbp-170h]
  __int64 v57; // [rsp+210h] [rbp-168h]
  __int64 v58; // [rsp+218h] [rbp-160h]
  __int64 v59; // [rsp+220h] [rbp-158h]
  __int128 v60; // [rsp+230h] [rbp-148h]
  __int128 v61; // [rsp+240h] [rbp-138h]
  __int128 v62; // [rsp+250h] [rbp-128h]
  __int128 v63; // [rsp+260h] [rbp-118h]
  char v64[58]; // [rsp+270h] [rbp-108h] BYREF
  __int128 v65; // [rsp+2AAh] [rbp-CEh]
  __int16 v66; // [rsp+2BAh] [rbp-BEh]
  __int128 v67; // [rsp+2BCh] [rbp-BCh]
  int v68; // [rsp+2CCh] [rbp-ACh]
  int v69; // [rsp+2D0h] [rbp-A8h]
  int v70; // [rsp+2D4h] [rbp-A4h]
  unsigned __int16 v71; // [rsp+2E8h] [rbp-90h]
  __int64 v72; // [rsp+2ECh] [rbp-8Ch]
  int v73; // [rsp+2F4h] [rbp-84h]
  int v74; // [rsp+2F8h] [rbp-80h]
  int v75; // [rsp+2FCh] [rbp-7Ch]
  int v76; // [rsp+304h] [rbp-74h]
  _QWORD v77[8]; // [rsp+310h] [rbp-68h] BYREF

  memset(v77, 0, sizeof(v77));
  EtwActivityIdControl(3u, (LPGUID)&v77[1]);
  v77[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v77[3]) = 22;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v49 = gMouseTrails + 1;
  v5 = 0LL;
  v6 = 0;
  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v9 = (_OWORD *)a1;
  if ( a1 + 304 < a1 || a1 + 304 > W32UserProbeAddress )
    v9 = (_OWORD *)W32UserProbeAddress;
  v10 = v53;
  v11 = 2LL;
  do
  {
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    v10[6] = v9[6];
    v10 += 8;
    *(v10 - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  *v10 = *v9;
  v10[1] = v9[1];
  v10[2] = v9[2];
  v12 = &v54;
  v13 = v53;
  v14 = 2LL;
  do
  {
    *(_OWORD *)v12 = *v13;
    *((_OWORD *)v12 + 1) = v13[1];
    *((_OWORD *)v12 + 2) = v13[2];
    *((_OWORD *)v12 + 3) = v13[3];
    *((_OWORD *)v12 + 4) = v13[4];
    *((_OWORD *)v12 + 5) = v13[5];
    *((_OWORD *)v12 + 6) = v13[6];
    v12 += 128;
    *((_OWORD *)v12 - 1) = v13[7];
    v13 += 8;
    --v14;
  }
  while ( v14 );
  *(_OWORD *)v12 = *v13;
  *((_OWORD *)v12 + 1) = v13[1];
  *((_OWORD *)v12 + 2) = v13[2];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = v57;
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  ghRemoteVideoChannel = v55;
  ghRemoteBeepChannel = v56;
  ghRemoteKeyboardChannel = v58;
  ghRemoteThinwireChannel = v59;
  gRemoteClientKeyboardType = v72;
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = v73;
  gbClientDoubleClickSupport = v69;
  gfEnableWindowsKey = v70;
  gbRemoteFxSession = v76;
  *(_DWORD *)(RemoteContext + 64) = v76;
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v60;
  *((_OWORD *)&gstrBaseWinStationName + 1) = v61;
  *((_OWORD *)&gstrBaseWinStationName + 2) = v62;
  *((_OWORD *)&gstrBaseWinStationName + 3) = v63;
  gWinStationInfo = v65;
  *((_WORD *)&gWinStationInfo + 8) = v66;
  *(_OWORD *)((char *)&gWinStationInfo + 20) = v67;
  *((_DWORD *)&gWinStationInfo + 9) = v68;
  v15 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v15 )
    *v15 = 0;
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
    v16 = gpsi;
    if ( !v46 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_16;
    }
  }
  else
  {
    v16 = gpsi;
  }
  *(_DWORD *)(v16 + 2220) |= 4u;
LABEL_16:
  v17 = *(_QWORD *)(RemoteContext + 40);
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(v17 + 2 * v18) );
    v6 = v18 + 1;
    v19 = (void *)Win32AllocPoolWithQuota(2LL * v6, 2020897621LL);
    v5 = v19;
    if ( !v19 )
    {
      Win32kDriverObject = -1073741801;
      v23 = 0;
      v24 = 0;
      goto LABEL_70;
    }
    memmove(v19, *(const void **)(RemoteContext + 40), 2LL * v6);
    v2 = 0;
  }
  if ( !gVideoFileObject && ghRemoteVideoChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v50, 0LL);
    if ( Win32kDriverObject >= 0 )
    {
      gVideoFileObject = v50;
      IoGetRelatedDeviceObject((PFILE_OBJECT)v50);
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v51, 0LL);
      gThinwireFileObject = v51;
      v2 = 0;
      if ( Win32kDriverObject >= 0
        && !(unsigned int)GreMultiUserInitSession(
                            RemoteContext,
                            ghRemoteThinwireChannel,
                            gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            gVideoFileObject,
                            gThinwireFileObject,
                            8,
                            v64,
                            19,
                            gRemoteDisplayDeviceName) )
      {
        Win32kDriverObject = -1073741823;
      }
    }
  }
  else if ( !ghRemoteVideoChannel
         && !(unsigned int)GreMultiUserInitSession(
                             RemoteContext,
                             ghRemoteThinwireChannel,
                             gpThinWireCache,
                             gRemoteNumMonitors,
                             gRemotePrimaryMonitor,
                             gVideoFileObject,
                             gThinwireFileObject,
                             8,
                             v64,
                             19,
                             gRemoteDisplayDeviceName) )
  {
    Win32kDriverObject = -1073741823;
  }
  if ( Win32kDriverObject < 0 )
    goto LABEL_113;
  if ( ghRemoteBeepChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &Object, 0LL);
    gpRemoteBeepDevice = Object;
    v2 = 0;
  }
  if ( Win32kDriverObject < 0 )
    goto LABEL_113;
  if ( gnShadowers )
    xxxRemoteStopScreenUpdates();
  if ( v71 != gPreviousProtocolType && gPreviousProtocolType )
  {
    if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, v6 - 1, v5) )
    {
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v77);
      if ( Win32kDriverObject < 0 )
      {
LABEL_113:
        v23 = 0;
        v24 = 0;
        goto LABEL_69;
      }
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices(v21, v20);
      if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v64) )
        goto LABEL_41;
    }
    Win32kDriverObject = -1073741823;
    goto LABEL_113;
  }
LABEL_41:
  SetProtocolType(v71);
  v23 = 1;
  v24 = 1;
  if ( gProtocolType )
  {
    if ( gProtocolType == gPreviousProtocolType )
    {
      Win32kDriverObject = GreDrvReconnect(RemoteContext);
      LOBYTE(v2) = Win32kDriverObject >= 0;
      v45 = v2;
      v25 = 0;
    }
    else
    {
      v25 = 1;
      Win32kDriverObject = GreDrvConnect(RemoteContext);
      v45 = Win32kDriverObject >= 0;
    }
  }
  else
  {
    v25 = 1;
    Win32kDriverObject = DrvOpenLocalGraphicsDevices(gProtocolType, v22);
    if ( Win32kDriverObject < 0 )
    {
      v23 = 0;
      goto LABEL_69;
    }
    v48 = 1;
  }
  if ( !(unsigned int)DrvSetGraphicsDevices(v64, gProtocolType) )
  {
    if ( gnShadowers )
      RemoteRedrawScreen(v27, v26, 0LL);
    Win32kDriverObject = -1073741823;
    goto LABEL_69;
  }
  if ( v74
    || (v30 = *(_WORD **)&gPreviousProtocolType, v29 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType)
    || v75 )
  {
    if ( v75 || (v28 = 2191, !gProtocolType) )
      v28 = 2447;
    LOBYTE(v44) = 0;
    Win32kDriverObject = xxxUserSetDisplayConfig(
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           v28,
                           2,
                           gspdeskShouldBeForeground,
                           v44,
                           0LL,
                           0LL,
                           v77);
    if ( Win32kDriverObject < 0 )
      goto LABEL_69;
    v30 = *(_WORD **)&gPreviousProtocolType;
  }
  else
  {
    v23 = 0;
  }
  if ( gProtocolType )
  {
    if ( v25
      && !(unsigned int)DrvEscapeRemoteDrivers(
                          *(_QWORD *)(gpDispInfo + 8LL),
                          gProtocolType,
                          *(_QWORD *)(RemoteContext + 40),
                          2LL,
                          gptmrWD,
                          8) )
    {
      Win32kDriverObject = -1073741823;
    }
    AttachInputDevices(0LL);
  }
  else
  {
    if ( *v30 )
      RemoveInputDevices();
    if ( !gpWin32kDriverObject )
      Win32kDriverObject = GetWin32kDriverObject(v29, v30);
    AttachInputDevices(1LL);
    xxxUserReinitializeAutoRotation();
    if ( gdwInAtomicOperation )
    {
      v31 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v31, gdwInAtomicOperation, v32, v33);
    RegisterCDROMNotify();
    v47 = 1;
    EnterCrit(0LL, 1LL);
  }
  RemoteRedrawScreen(v35, v34, v36);
  if ( v23 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
    xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 40LL), gWndsMonitorSnapshotHead);
  InitKeyboard();
  UpdateKeyLights(0LL);
  SetPointer(1);
  if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
    TransitionCursorSuppressionState(2, 0);
  SetConnectedState(1LL, gbConnectCompleted);
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
    v37 = gpsi;
    if ( !v46 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_68;
    }
  }
  else
  {
    v37 = gpsi;
  }
  *(_DWORD *)(v37 + 2220) |= 4u;
LABEL_68:
  DrvGetRemoteDeviceCount();
  _guard_dispatch_icall_fptr();
  LOBYTE(v38) = gProtocolType == 0;
  LOBYTE(v39) = 1;
  CitSessionConnectChange(v39, v38);
  v23 = 1;
LABEL_69:
  v4 = v45;
LABEL_70:
  SetMouseTrails(v49);
  v40 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v40 = Win32kDriverObject == 0;
  }
  if ( v40 && !gProtocolType )
    RtlSetActiveConsoleId(gSessionId);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  if ( Win32kDriverObject < 0 )
  {
    v43 = gbRemoteFxSession;
    *(_DWORD *)(RemoteContext + 64) = gbRemoteFxSession;
    if ( v47 )
      UnregisterDeviceClassNotifications(gbRemoteFxSession, v41);
    if ( v48 )
      DrvCloseLocalGraphicsDevices(v43, v41);
    if ( v24 )
      SetProtocolType(gProtocolType);
    if ( v23 )
      DrvSetGraphicsDevices(v64, gProtocolType);
  }
  if ( v5 )
    Win32FreePool(v5);
  if ( !Win32kDriverObject )
  {
    if ( gProtocolType )
      DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 8LL), gProtocolType, *(_QWORD *)(RemoteContext + 40), 6LL, 0LL, 0);
  }
  DrvOcclusionStateChangeNotify();
  return (unsigned int)Win32kDriverObject;
}
