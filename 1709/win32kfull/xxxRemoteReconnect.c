/*
 * XREFs of xxxRemoteReconnect @ 0x1C0140AE0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     SetMouseTrails @ 0x1C00470EC (SetMouseTrails.c)
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00D6744 (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C00D69C4 (DrvSetGraphicsDevices.c)
 *     RemoveInputDevices @ 0x1C00D6A40 (RemoveInputDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D7030 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     RegisterCDROMNotify @ 0x1C01224D0 (RegisterCDROMNotify.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C012339C (DrvOcclusionStateChangeNotify.c)
 *     InitKeyboard @ 0x1C012351C (InitKeyboard.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C01260E0 (xxxUserReinitializeAutoRotation.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C0141394 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01414B0 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01414F0 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0141550 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C0141648 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0141750 (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C01418B0 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0141CDC (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0143F90 (UnregisterDeviceClassNotifications.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     GreDrvReconnect @ 0x1C0298248 (GreDrvReconnect.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  char *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  wchar_t *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // r15d
  int v25; // r13d
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // r8
  PVOID *Object; // [rsp+20h] [rbp-368h]
  int HandleInformation; // [rsp+28h] [rbp-360h]
  BOOL v47; // [rsp+60h] [rbp-328h]
  int v48; // [rsp+70h] [rbp-318h] BYREF
  int v49; // [rsp+74h] [rbp-314h]
  int v50; // [rsp+78h] [rbp-310h]
  int v51; // [rsp+84h] [rbp-304h]
  int v52; // [rsp+88h] [rbp-300h]
  PVOID v53; // [rsp+90h] [rbp-2F8h] BYREF
  PVOID v54; // [rsp+98h] [rbp-2F0h] BYREF
  PVOID v55; // [rsp+A0h] [rbp-2E8h] BYREF
  _BYTE v56[304]; // [rsp+B0h] [rbp-2D8h] BYREF
  char v57; // [rsp+1E0h] [rbp-1A8h] BYREF
  __int64 v58; // [rsp+200h] [rbp-188h]
  __int64 v59; // [rsp+208h] [rbp-180h]
  __int64 v60; // [rsp+210h] [rbp-178h]
  __int64 v61; // [rsp+218h] [rbp-170h]
  __int64 v62; // [rsp+220h] [rbp-168h]
  __int128 v63; // [rsp+230h] [rbp-158h]
  __int128 v64; // [rsp+240h] [rbp-148h]
  __int128 v65; // [rsp+250h] [rbp-138h]
  __int128 v66; // [rsp+260h] [rbp-128h]
  char v67[58]; // [rsp+270h] [rbp-118h] BYREF
  __int128 v68; // [rsp+2AAh] [rbp-DEh]
  __int16 v69; // [rsp+2BAh] [rbp-CEh]
  __int128 v70; // [rsp+2BCh] [rbp-CCh]
  int v71; // [rsp+2CCh] [rbp-BCh]
  int v72; // [rsp+2D0h] [rbp-B8h]
  int v73; // [rsp+2D4h] [rbp-B4h]
  unsigned __int16 v74; // [rsp+2E8h] [rbp-A0h]
  __int64 v75; // [rsp+2ECh] [rbp-9Ch]
  int v76; // [rsp+2F4h] [rbp-94h]
  int v77; // [rsp+2F8h] [rbp-90h]
  int v78; // [rsp+2FCh] [rbp-8Ch]
  int v79; // [rsp+304h] [rbp-84h]
  _QWORD v80[10]; // [rsp+310h] [rbp-78h] BYREF

  memset(v80, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v80[1]);
  v80[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v80[3]) = 22;
  LOBYTE(v80[6]) = -1;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v47 = 0;
  v49 = 0;
  v50 = 0;
  v51 = gMouseTrails + 1;
  v5 = 0LL;
  v6 = 0;
  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v9, v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v10 = (_OWORD *)a1;
  if ( a1 + 304 < a1 || a1 + 304 > MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v11 = v56;
  v12 = 2LL;
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    *(v11 - 1) = v10[7];
    v10 += 8;
    --v12;
  }
  while ( v12 );
  *v11 = *v10;
  v11[1] = v10[1];
  v11[2] = v10[2];
  v13 = &v57;
  v14 = v56;
  v15 = 2LL;
  do
  {
    *(_OWORD *)v13 = *v14;
    *((_OWORD *)v13 + 1) = v14[1];
    *((_OWORD *)v13 + 2) = v14[2];
    *((_OWORD *)v13 + 3) = v14[3];
    *((_OWORD *)v13 + 4) = v14[4];
    *((_OWORD *)v13 + 5) = v14[5];
    *((_OWORD *)v13 + 6) = v14[6];
    v13 += 128;
    *((_OWORD *)v13 - 1) = v14[7];
    v14 += 8;
    --v15;
  }
  while ( v15 );
  *(_OWORD *)v13 = *v14;
  *((_OWORD *)v13 + 1) = v14[1];
  *((_OWORD *)v13 + 2) = v14[2];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = v60;
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  ghRemoteVideoChannel = v58;
  ghRemoteBeepChannel = v59;
  ghRemoteKeyboardChannel = v61;
  ghRemoteThinwireChannel = v62;
  gRemoteClientKeyboardType = v75;
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = v76;
  gbClientDoubleClickSupport = v72;
  gfEnableWindowsKey = v73;
  v52 = gbRemoteFxSession;
  gbRemoteFxSession = v79;
  *(_DWORD *)(RemoteContext + 64) = v79;
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v63;
  *((_OWORD *)&gstrBaseWinStationName + 1) = v64;
  *((_OWORD *)&gstrBaseWinStationName + 2) = v65;
  *((_OWORD *)&gstrBaseWinStationName + 3) = v66;
  gWinStationInfo = v68;
  *((_WORD *)&gWinStationInfo + 8) = v69;
  *(_OWORD *)((char *)&gWinStationInfo + 20) = v70;
  *((_DWORD *)&gWinStationInfo + 9) = v71;
  v16 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v16 )
    *v16 = 0;
  if ( gProtocolType )
  {
    HandleInformation = 0;
    Object = (PVOID *)&v48;
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
    v17 = gpsi;
    if ( !v48 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_16;
    }
  }
  else
  {
    v17 = gpsi;
  }
  *(_DWORD *)(v17 + 2220) |= 4u;
LABEL_16:
  v18 = *(_QWORD *)(RemoteContext + 40);
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v18 + 2 * v19) );
    v6 = v19 + 1;
    v20 = (void *)Win32AllocPoolWithQuota(2LL * v6, 2020897621LL);
    v5 = v20;
    if ( !v20 )
    {
      Win32kDriverObject = -1073741801;
      v24 = 0;
      v25 = 0;
      goto LABEL_69;
    }
    memmove(v20, *(const void **)(RemoteContext + 40), 2LL * v6);
    v2 = 0;
  }
  if ( !gVideoFileObject && ghRemoteVideoChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v53, 0LL);
    if ( Win32kDriverObject >= 0 )
    {
      gVideoFileObject = v53;
      IoGetRelatedDeviceObject((PFILE_OBJECT)v53);
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v54, 0LL);
      gThinwireFileObject = v54;
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
                            v67,
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
                             v67,
                             19,
                             gRemoteDisplayDeviceName) )
  {
    Win32kDriverObject = -1073741823;
  }
  if ( Win32kDriverObject < 0 )
    goto LABEL_112;
  if ( ghRemoteBeepChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v55, 0LL);
    gpRemoteBeepDevice = v55;
    v2 = 0;
  }
  if ( Win32kDriverObject < 0 )
    goto LABEL_112;
  if ( gnShadowers )
    xxxRemoteStopScreenUpdates();
  if ( v74 != gPreviousProtocolType && gPreviousProtocolType )
  {
    if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, v6 - 1, v5) )
    {
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v80);
      if ( Win32kDriverObject < 0 )
      {
LABEL_112:
        v24 = 0;
        v25 = 0;
        goto LABEL_68;
      }
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices(v22, v21);
      if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v67) )
        goto LABEL_41;
    }
    Win32kDriverObject = -1073741823;
    goto LABEL_112;
  }
LABEL_41:
  SetProtocolType(v74);
  v24 = 1;
  v25 = 1;
  if ( gProtocolType )
  {
    if ( gProtocolType == gPreviousProtocolType )
    {
      Win32kDriverObject = GreDrvReconnect(RemoteContext);
      LOBYTE(v2) = Win32kDriverObject >= 0;
      v47 = v2;
      v26 = 0;
    }
    else
    {
      v26 = 1;
      Win32kDriverObject = GreDrvConnect(RemoteContext);
      v47 = Win32kDriverObject >= 0;
    }
  }
  else
  {
    v26 = 1;
    Win32kDriverObject = DrvOpenLocalGraphicsDevices(gProtocolType, v23);
    if ( Win32kDriverObject < 0 )
    {
      v24 = 0;
      goto LABEL_68;
    }
    v50 = 1;
  }
  if ( !(unsigned int)DrvSetGraphicsDevices(v67, gProtocolType) )
  {
    if ( gnShadowers )
      RemoteRedrawScreen(v28, v27, v29, 0LL, Object, HandleInformation);
    Win32kDriverObject = -1073741823;
    goto LABEL_68;
  }
  if ( v77 || (v31 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || v78 )
  {
    if ( v78 || (v30 = 2191LL, !gProtocolType) )
      v30 = 2447LL;
    LOBYTE(HandleInformation) = 0;
    Win32kDriverObject = xxxUserSetDisplayConfig(
                           0LL,
                           0LL,
                           v30,
                           2LL,
                           gspdeskShouldBeForeground,
                           HandleInformation,
                           0LL,
                           0LL,
                           v80);
    if ( Win32kDriverObject < 0 )
      goto LABEL_68;
  }
  else
  {
    v24 = 0;
  }
  v32 = gProtocolType;
  if ( gProtocolType )
  {
    if ( v26
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
    if ( gPreviousProtocolType )
      RemoveInputDevices();
    if ( !gpWin32kDriverObject )
      Win32kDriverObject = GetWin32kDriverObject(v31, v32);
    AttachInputDevices(1LL);
    xxxUserReinitializeAutoRotation();
    if ( gdwInAtomicOperation )
    {
      v33 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v33, gdwInAtomicOperation);
    RegisterCDROMNotify();
    v49 = 1;
    EnterCrit(0LL, 1LL);
  }
  RemoteRedrawScreen(v35, v34, v36, v37, Object, HandleInformation);
  if ( v24 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
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
    v38 = gpsi;
    if ( !v48 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_67;
    }
  }
  else
  {
    v38 = gpsi;
  }
  *(_DWORD *)(v38 + 2220) |= 4u;
LABEL_67:
  DrvGetRemoteDeviceCount();
  _guard_dispatch_icall_fptr();
  LOBYTE(v39) = gProtocolType == 0;
  LOBYTE(v40) = 1;
  CitSessionConnectChange(v40, v39);
  v24 = 1;
LABEL_68:
  v4 = v47;
LABEL_69:
  SetMouseTrails(v51);
  v41 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v41 = Win32kDriverObject == 0;
  }
  if ( v41 && !gProtocolType )
    RtlSetActiveConsoleId(gSessionId);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v52;
    *(_DWORD *)(RemoteContext + 64) = v52;
    if ( v49 )
      UnregisterDeviceClassNotifications();
    if ( v50 )
      DrvCloseLocalGraphicsDevices();
    if ( v25 )
      SetProtocolType(gProtocolType);
    if ( v24 )
      DrvSetGraphicsDevices(v67, gProtocolType);
  }
  if ( v5 )
    Win32FreePool(v5, v42, v43);
  if ( !Win32kDriverObject )
  {
    if ( gProtocolType )
      DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 8LL), gProtocolType, *(_QWORD *)(RemoteContext + 40), 6LL, 0LL, 0);
  }
  DrvOcclusionStateChangeNotify();
  return (unsigned int)Win32kDriverObject;
}
