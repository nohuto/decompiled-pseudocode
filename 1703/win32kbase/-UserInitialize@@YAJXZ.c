/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C0074A90
 * Callers:
 *     NtUserInitialize @ 0x1C00766E0 (NtUserInitialize.c)
 * Callees:
 *     RIMIsRunningOnMobile @ 0x1C000A090 (RIMIsRunningOnMobile.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     CreateKernelEvent @ 0x1C0054640 (CreateKernelEvent.c)
 *     FastGetProfileIntFromID @ 0x1C0073AA0 (FastGetProfileIntFromID.c)
 *     InitLoadResources @ 0x1C00743E0 (InitLoadResources.c)
 *     ?vGetMitConfig@@YAXXZ @ 0x1C007653C (-vGetMitConfig@@YAXXZ.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C0076640 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     RtlStringCchPrintfW @ 0x1C00768AC (RtlStringCchPrintfW.c)
 *     InitVideo @ 0x1C009C744 (InitVideo.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C009CE3C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CEF4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00E620C (-DrvDriverFailure@@YAJXZ.c)
 *     ?GetPenStatusOnPhone@@YAXXZ @ 0x1C00E64FC (-GetPenStatusOnPhone@@YAXXZ.c)
 *     InitCreateObjectDirectory @ 0x1C01D77D0 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rbx
  LARGE_INTEGER v10; // rsi
  int v11; // r8d
  __int64 v12; // rdx
  int ObjectDirectory; // ebx
  int v14; // eax
  int v15; // ecx
  void *v16; // rsi
  int v17; // r14d
  void *v18; // rsi
  wchar_t *v20; // rax
  wchar_t v21; // cx
  int v22; // ecx
  ULONG Length[2]; // [rsp+20h] [rbp-89h]
  int v24; // [rsp+30h] [rbp-79h] BYREF
  int v25; // [rsp+34h] [rbp-75h] BYREF
  PVOID MappedBase; // [rsp+38h] [rbp-71h] BYREF
  PVOID Object; // [rsp+40h] [rbp-69h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-59h] BYREF
  ULONG v30; // [rsp+54h] [rbp-55h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-51h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v33[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+C0h] [rbp+17h] BYREF
  int v35; // [rsp+CCh] [rbp+23h]
  _BYTE v36[12]; // [rsp+D8h] [rbp+2Fh] BYREF
  int v37; // [rsp+E4h] [rbp+3Bh]

  memset(v33, 0, sizeof(v33));
  EtwActivityIdControl(3u, (LPGUID)&v33[1]);
  v33[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v33[3]) = 28;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1, v0, v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = 0;
  v9 = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( v9 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v22 = (unsigned __int8)byte_1C0186D98;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v22) = byte_1C0186D98 - 1;
        Template_xqx(
          v22,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v11,
          v10.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
    }
    if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v11,
        0,
        1000 * v10.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  v12 = 256LL;
  if ( gbRemoteSession )
  {
    Length[0] = gSessionId;
    RtlStringCchPrintfW(
      &szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)Length,
      L"\\Windows\\WindowStations");
  }
  else
  {
    v20 = &szWindowStationDirectory;
    while ( v12 != -2147483390 )
    {
      v21 = *(wchar_t *)((char *)v20 + (char *)L"\\Windows\\WindowStations" - (char *)&szWindowStationDirectory);
      if ( !v21 )
        break;
      *v20++ = v21;
      if ( !--v12 )
      {
        --v20;
        break;
      }
    }
    *v20 = 0;
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = (__int64)CreateKernelEvent(SynchronizationEvent, 1u);
    if ( !gpEventPnPWainting
      || (FastGetProfileIntFromID(0, 39, 0x268u, 1, (int *)&gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 555) |= 4u,
          (gpEventDiconnectDesktop = (__int64)CreateKernelEvent(SynchronizationEvent, 0)) == 0) )
    {
      ObjectDirectory = -1073741801;
      goto LABEL_41;
    }
    if ( !gbRemoteSession || gbFirstInteractiveSession )
    {
      gbUsingDefaultSectionSize = 0;
      ObjectDirectory = ReserveUserSessionViewsWorker(&Object, &MappedBase);
      if ( ObjectDirectory < 0 )
      {
        gdwNOIOSectionSize = 128;
        gdwDesktopSectionSize = 512;
        gbUsingDefaultSectionSize = 1;
        ObjectDirectory = ReserveUserSessionViewsWorker(&Object, &MappedBase);
      }
      if ( ObjectDirectory < 0 )
        goto LABEL_41;
      if ( !InitVideo(v33) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_41;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      InputBuffer = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
    }
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(KeGetCurrentThread());
    if ( ObjectDirectory >= 0 )
    {
      if ( giDelayedPowerTimeout )
      {
        if ( (int)IsxxxSystemParametersInfoSupported() >= 0 )
        {
          xxxSystemParametersInfo(81LL, (unsigned int)giDelayedPowerTimeout, 0LL);
          xxxSystemParametersInfo(82LL, (unsigned int)giDelayedPowerTimeout, 0LL);
        }
        giDelayedPowerTimeout = 0;
      }
      ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
      if ( ObjectDirectory >= 0 )
      {
        v14 = gbRemoteSession;
        if ( !gbRemoteSession || (v15 = gbFirstInteractiveSession) != 0 )
        {
          LW_BrushInit();
          v14 = gbRemoteSession;
          v15 = gbFirstInteractiveSession;
        }
        if ( !gbSetupDPIInitialized && v14 && v15 )
          SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v33);
        InitLoadResources(0);
        v24 = gdwPolicyFlags;
        v16 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v24);
        if ( !v16 )
          goto LABEL_31;
        v17 = 0;
        while ( 1 )
        {
          RtlInitUnicodeString(&DestinationString, L"ConvertibleSlateMode");
          if ( ZwQueryValueKey(
                 v16,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) >= 0 )
            break;
          if ( !v24 )
            goto LABEL_30;
          ZwClose(v16);
          v16 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v24);
          if ( !v16 )
            goto LABEL_31;
        }
        v17 = v35;
LABEL_30:
        ZwClose(v16);
        if ( v17 )
          *((_DWORD *)gpsi + 555) |= 8u;
        else
LABEL_31:
          *((_DWORD *)gpsi + 555) &= ~8u;
        v25 = gdwPolicyFlags;
        v18 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v25);
        if ( !v18 )
          goto LABEL_36;
        while ( 1 )
        {
          RtlInitUnicodeString(&ValueName, L"SystemDockMode");
          if ( ZwQueryValueKey(v18, &ValueName, KeyValuePartialInformation, v36, 0x14u, &v30) >= 0 )
            break;
          if ( !v25 )
            goto LABEL_35;
          ZwClose(v18);
          v18 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v25);
          if ( !v18 )
            goto LABEL_36;
        }
        v8 = v37;
LABEL_35:
        ZwClose(v18);
        if ( v8 )
          *((_DWORD *)gpsi + 555) |= 0x10u;
        else
LABEL_36:
          *((_DWORD *)gpsi + 555) &= ~0x10u;
        vGetMitConfig();
        if ( RIMIsRunningOnMobile() )
          GetPenStatusOnPhone();
        if ( (int)IsInitRimClientSupported() >= 0 )
          ObjectDirectory = InitRimClient();
      }
    }
  }
LABEL_41:
  UserSessionSwitchLeaveCrit();
  return (unsigned int)ObjectDirectory;
}
