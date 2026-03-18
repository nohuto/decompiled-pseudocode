/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C00B23A4
 * Callers:
 *     NtUserInitialize @ 0x1C00B2B40 (NtUserInitialize.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C00141F0 (CreateKernelEvent.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     InitLoadResources @ 0x1C0054BBC (InitLoadResources.c)
 *     xxxSystemParametersInfo @ 0x1C005C030 (xxxSystemParametersInfo.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C00A0A6C (RtlStringCchPrintfW.c)
 *     FastGetProfileIntFromID @ 0x1C00A8030 (FastGetProfileIntFromID.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00B1884 (-DrvDriverFailure@@YAJXZ.c)
 *     ?GetPenStatusOnPhone@@YAXXZ @ 0x1C00B1B58 (-GetPenStatusOnPhone@@YAXXZ.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C00B1D88 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C00B1F20 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2054 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitVideo @ 0x1C00B2994 (InitVideo.c)
 *     RIMIsRunningOnMobile @ 0x1C00F2610 (RIMIsRunningOnMobile.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateObjectDirectory @ 0x1C01F2228 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *i; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v18; // rdx
  wchar_t *v19; // rcx
  __int64 v20; // rdx
  wchar_t v21; // ax
  wchar_t *v22; // rax
  __int64 v23; // rcx
  int ObjectDirectory; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  int v26; // edi
  void *v27; // r14
  int v28; // esi
  void *v29; // r14
  int v30; // esi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  PVOID MappedBase; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v39; // [rsp+54h] [rbp-ACh] BYREF
  tagObjLock *v40; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v43[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+D0h] [rbp-30h] BYREF
  int v45; // [rsp+DCh] [rbp-24h]
  _BYTE v46[12]; // [rsp+E8h] [rbp-18h] BYREF
  int v47; // [rsp+F4h] [rbp-Ch]

  memset(v43, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v43[1]);
  v43[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v43[3]) = 28;
  LOBYTE(v43[6]) = -1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1, v0, v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v9, v8, v10);
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v40);
  for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
  {
    gpducstulHead = i[2];
    v14 = *i;
    i[2] = 0LL;
    if ( !*(_DWORD *)(v14 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    DomainLockRef = GetDomainLockRef(8LL, v11);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*i);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v18);
  }
  tagObjLock::UnLock(v40);
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  v19 = &szWindowStationDirectory;
  v20 = 256LL;
  if ( gbRemoteSession )
  {
    LODWORD(Timeout) = gSessionId;
    RtlStringCchPrintfW(
      &szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      Timeout,
      L"\\Windows\\WindowStations");
  }
  else
  {
    do
    {
      if ( v20 == -2147483390 )
        break;
      v21 = *(wchar_t *)((char *)v19 + (char *)L"\\Windows\\WindowStations" - (char *)&szWindowStationDirectory);
      if ( !v21 )
        break;
      *v19++ = v21;
      --v20;
    }
    while ( v20 );
    v22 = v19 - 1;
    if ( v20 )
      v22 = v19;
    *v22 = 0;
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = (__int64)CreateKernelEvent(SynchronizationEvent, 1u);
    if ( gpEventPnPWainting
      && (FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 559) |= 4u,
          (gpEventDiconnectDesktop = (__int64)CreateKernelEvent(SynchronizationEvent, 0)) != 0) )
    {
      if ( !gbRemoteSession || gbFirstInteractiveSession )
      {
        ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
        if ( ObjectDirectory < 0 )
          goto LABEL_74;
        if ( !InitVideo(v43) )
        {
          ObjectDirectory = DrvDriverFailure();
          MmUnmapViewInSessionSpace(MappedBase);
          ObfDereferenceObject(Object);
          goto LABEL_74;
        }
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        gbVideoInitialized = 1;
        InputBuffer = 2LL;
        ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
      }
      CurrentThread = KeGetCurrentThread();
      gbUserInitialized = 1;
      ObjectDirectory = xxxCreateThreadInfo(CurrentThread);
      if ( ObjectDirectory >= 0 )
      {
        if ( giDelayedPowerTimeout )
        {
          xxxSystemParametersInfo(0x51u, giDelayedPowerTimeout, 0LL, 0);
          xxxSystemParametersInfo(0x52u, giDelayedPowerTimeout, 0LL, 0);
          giDelayedPowerTimeout = 0;
        }
        ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
        if ( ObjectDirectory >= 0 )
        {
          if ( !gbRemoteSession || gbFirstInteractiveSession )
            LW_BrushInit();
          if ( !gbSetupDPIInitialized && gbRemoteSession && gbFirstInteractiveSession )
            SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v43);
          InitLoadResources(0);
          v26 = v33;
          v34 = gdwPolicyFlags;
          do
          {
            v27 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v34);
            if ( !v27 )
            {
              v26 = 0;
              goto LABEL_61;
            }
            RtlInitUnicodeString(&DestinationString, L"ConvertibleSlateMode");
            if ( ZwQueryValueKey(
                   v27,
                   &DestinationString,
                   KeyValuePartialInformation,
                   KeyValueInformation,
                   0x14u,
                   &ResultLength) < 0 )
            {
              v28 = v34;
              if ( !v34 )
                v26 = 0;
            }
            else
            {
              v26 = v45;
              v28 = 0;
              v34 = 0;
            }
            ZwClose(v27);
          }
          while ( v28 );
          if ( v26 )
          {
            *((_DWORD *)gpsi + 559) |= 8u;
            goto LABEL_62;
          }
LABEL_61:
          *((_DWORD *)gpsi + 559) &= ~8u;
LABEL_62:
          v33 = gdwPolicyFlags;
          while ( 1 )
          {
            v29 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v33);
            if ( !v29 )
              break;
            RtlInitUnicodeString(&ValueName, L"SystemDockMode");
            if ( ZwQueryValueKey(v29, &ValueName, KeyValuePartialInformation, v46, 0x14u, &v39) < 0 )
            {
              v30 = v33;
              if ( !v33 )
                v26 = 0;
            }
            else
            {
              v26 = v47;
              v30 = 0;
              v33 = 0;
            }
            ZwClose(v29);
            if ( !v30 )
            {
              if ( v26 )
              {
                *((_DWORD *)gpsi + 559) |= 0x10u;
                goto LABEL_72;
              }
              break;
            }
          }
          *((_DWORD *)gpsi + 559) &= ~0x10u;
LABEL_72:
          if ( (unsigned int)RIMIsRunningOnMobile() )
            GetPenStatusOnPhone();
        }
      }
    }
    else
    {
      ObjectDirectory = -1073741801;
    }
  }
LABEL_74:
  UserSessionSwitchLeaveCrit(v23);
  return (unsigned int)ObjectDirectory;
}
