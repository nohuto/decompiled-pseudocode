/*
 * XREFs of xxxRemoteConnect @ 0x1C00A9030
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     FastGetProfileIntW @ 0x1C00604C0 (FastGetProfileIntW.c)
 *     InitLoadResources @ 0x1C0062000 (InitLoadResources.c)
 *     SetProtocolType @ 0x1C0078110 (SetProtocolType.c)
 *     GreDeviceIoControlEx @ 0x1C007A620 (GreDeviceIoControlEx.c)
 *     SetConnectedState @ 0x1C0098790 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C00987C0 (SetConnectCompletedState.c)
 *     SetConsoleSwitchInProgress @ 0x1C0099B80 (SetConsoleSwitchInProgress.c)
 *     CleanupRemoteHandles @ 0x1C009B400 (CleanupRemoteHandles.c)
 *     GreDxgkSessionConnected @ 0x1C009C02C (GreDxgkSessionConnected.c)
 *     GreMultiUserInitSession @ 0x1C00A5A50 (GreMultiUserInitSession.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00A6070 (DrvEscapeRemoteDrivers.c)
 *     InitVideo @ 0x1C00A6740 (InitVideo.c)
 *     wcschr @ 0x1C00A7308 (wcschr.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     GreDrvConnect @ 0x1C00F01D0 (GreDrvConnect.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  int v8; // ebx
  __int64 result; // rax
  wchar_t *v10; // rax
  int v11; // ebp
  _DWORD *v12; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  bool v14; // zf
  struct _KTIMER *v15; // rax
  PVOID Object[2]; // [rsp+60h] [rbp-38h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+8h] BYREF

  v8 = 0;
  if ( !*(_DWORD *)a1 )
  {
    gdwHydraHint |= 8u;
    if ( gfSessionSwitchBlock )
      return 3221225473LL;
    SetConsoleSwitchInProgress(1);
    *(_QWORD *)&gpThinWireCache = &ThinWireCache;
    ghRemoteMouseChannel = *(_QWORD *)(a1 + 48);
    gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
    gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
    ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
    ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
    ghRemoteKeyboardChannel = *(_QWORD *)(a1 + 56);
    ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
    SetProtocolType(*(_WORD *)(a1 + 264));
    LOWORD(WPP_MAIN_CB.ActiveThreadCount) = *(_WORD *)(a1 + 264);
    gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
    dword_1C018EDB0 = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    gRemotePreviousMonitorsCount = gRemoteNumMonitors;
    *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
    xmmword_1C018EDD0 = *(_OWORD *)(a1 + 178);
    qword_1C018EDE0 = *(_QWORD *)(a1 + 194);
    gWinStationInfo = *(_OWORD *)(a1 + 202);
    word_1C018EE38 = *(_WORD *)(a1 + 218);
    xmmword_1C018EE3C = *(_OWORD *)(a1 + 220);
    dword_1C018EE4C = *(_DWORD *)(a1 + 236);
    memset(&gstrBaseWinStationName, 0, 0x40uLL);
    *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
    xmmword_1C018ED30 = *(_OWORD *)(a1 + 96);
    xmmword_1C018ED40 = *(_OWORD *)(a1 + 112);
    xmmword_1C018ED50 = *(_OWORD *)(a1 + 128);
    v10 = wcschr(&gstrBaseWinStationName, 0x23u);
    if ( v10 )
      *v10 = 0;
    v11 = gbRemoteFxSession;
    gbRemoteFxSession = *(_DWORD *)(a1 + 292);
    dword_1C0191070 = *(_DWORD *)(a1 + 292);
    if ( *(_DWORD *)(a1 + 292) )
      qword_1C0191074 = *(_QWORD *)(a1 + 296);
    SetConnectedState(1, gbConnectCompleted);
    if ( (unsigned int)IsRemoteConnection() )
    {
      FastGetProfileIntW(0LL, 39LL, (const WCHAR *)L"CursorBlinkEnable", 0, &Value, 0);
      v12 = gpsi;
      if ( !Value )
      {
        *((_DWORD *)gpsi + 555) &= ~4u;
        goto LABEL_15;
      }
    }
    else
    {
      v12 = gpsi;
    }
    v12[555] |= 4u;
LABEL_15:
    if ( *(_QWORD *)&gVideoFileObject )
    {
      if ( ghRemoteVideoChannel )
        goto LABEL_28;
    }
    else if ( ghRemoteVideoChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
      if ( v8 < 0 )
        goto LABEL_41;
      *(PVOID *)&gVideoFileObject = Object[0];
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
      v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
      gThinwireFileObject = Object[0];
      if ( v8 < 0 )
        goto LABEL_41;
      if ( !(unsigned int)GreMultiUserInitSession(
                            (__int64)&gRemoteContext,
                            (__int64)ghRemoteThinwireChannel,
                            *(__int64 *)&gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            *(__int64 *)&gVideoFileObject,
                            (__int64)Object[0],
                            a2,
                            a3,
                            19,
                            &gRemoteDisplayDeviceName) )
      {
LABEL_20:
        v8 = -1073741823;
LABEL_51:
        gbRemoteFxSession = v11;
        dword_1C0191070 = v11;
        CleanupRemoteHandles(&gRemoteContext);
LABEL_52:
        SetConsoleSwitchInProgress(0);
        return (unsigned int)v8;
      }
      if ( (unsigned int)IsRemoteConnection() )
      {
        v8 = GreDeviceIoControlEx(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, Object, 0);
        if ( v8 < 0 )
          goto LABEL_41;
        v8 = GreDrvConnect(&gRemoteContext);
      }
      goto LABEL_27;
    }
    if ( !(unsigned int)GreMultiUserInitSession(
                          (__int64)&gRemoteContext,
                          (__int64)ghRemoteThinwireChannel,
                          *(__int64 *)&gpThinWireCache,
                          gRemoteNumMonitors,
                          gRemotePrimaryMonitor,
                          *(__int64 *)&gVideoFileObject,
                          (__int64)gThinwireFileObject,
                          a2,
                          a3,
                          19,
                          &gRemoteDisplayDeviceName) )
    {
      v8 = -1073741823;
LABEL_27:
      v14 = v8 == 0;
      if ( v8 < 0 )
        goto LABEL_42;
    }
LABEL_28:
    if ( ghRemoteBeepChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
      gpRemoteBeepDevice = Object[0];
    }
    v14 = v8 == 0;
    if ( v8 < 0 )
    {
LABEL_42:
      if ( v14 )
      {
        if ( !gProtocolType )
          RtlSetActiveConsoleId(gSessionId);
        if ( (int)IsxxxUserReinitializeAutoRotationSupported() >= 0 )
          xxxUserReinitializeAutoRotation();
        if ( (unsigned int)IsRemoteConnection() )
          DrvEscapeRemoteDrivers(
            *(_QWORD *)(gpDispInfo + 8),
            (unsigned __int16)gProtocolType,
            (__int64)qword_1C0191058,
            6u,
            0LL,
            0);
        SetConnectCompletedState(1);
      }
      if ( v8 >= 0 )
        goto LABEL_52;
      goto LABEL_51;
    }
    if ( !gbRemoteSession || gbVideoInitialized )
    {
      IsRemoteConnection();
      GreDxgkSessionConnected();
      v8 = 0;
    }
    else
    {
      if ( !InitVideo(a4) )
      {
        SetConnectedState(0, 0);
        goto LABEL_20;
      }
      if ( (int)IsLW_BrushInitSupported() >= 0 && !(unsigned int)LW_BrushInit()
        || (InitLoadResources(0),
            v15 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 0x744B7355u),
            (gptmrWD = v15) == 0LL) )
      {
        v8 = -1073741801;
        goto LABEL_51;
      }
      KeInitializeTimerEx(v15, SynchronizationTimer);
      IsRemoteConnection();
      GreDxgkSessionConnected();
      gbVideoInitialized = 1;
    }
LABEL_41:
    v14 = v8 == 0;
    goto LABEL_42;
  }
  result = IsxxxRemoteConsoleShadowStartSupported();
  if ( (int)result >= 0 )
    return xxxRemoteConsoleShadowStart(a1, a3, a4);
  return result;
}
