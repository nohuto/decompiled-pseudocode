/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C0007750
 * Callers:
 *     NtUserInitialize @ 0x1C0005200 (NtUserInitialize.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0005048 (RtlStringCchPrintfW.c)
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C0006120 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     ?vGetMitConfig@@YAXXZ @ 0x1C00061C0 (-vGetMitConfig@@YAXXZ.c)
 *     CreateKernelEvent @ 0x1C0008540 (CreateKernelEvent.c)
 *     RIMIsRunningOnMobile @ 0x1C000E954 (RIMIsRunningOnMobile.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     FastGetProfileIntFromID @ 0x1C0060420 (FastGetProfileIntFromID.c)
 *     InitLoadResources @ 0x1C0062000 (InitLoadResources.c)
 *     InitVideo @ 0x1C00A6740 (InitVideo.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00A6D8C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A6E44 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00E5164 (-DrvDriverFailure@@YAJXZ.c)
 *     ?GetPenStatusOnPhone@@YAXXZ @ 0x1C00E5454 (-GetPenStatusOnPhone@@YAXXZ.c)
 *     InitCreateObjectDirectory @ 0x1C01DD198 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v1; // rbx
  _QWORD *v2; // rsi
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int ObjectDirectory; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  void *v8; // rsi
  int v9; // r14d
  void *v10; // rsi
  wchar_t *v12; // rax
  wchar_t v13; // cx
  tagObjLock *DomainLockRef; // rbx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  PVOID MappedBase; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v21; // [rsp+54h] [rbp-ACh] BYREF
  tagObjLock *v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v25[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+D0h] [rbp-30h] BYREF
  int v27; // [rsp+DCh] [rbp-24h]
  _BYTE v28[12]; // [rsp+E8h] [rbp-18h] BYREF
  int v29; // [rsp+F4h] [rbp-Ch]

  memset(v25, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v25[1]);
  v25[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v25[3]) = 28;
  LOBYTE(v25[6]) = -1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v1 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v1;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v22);
  v2 = (_QWORD *)gpducstulHead;
  v3 = 0;
  if ( gpducstulHead )
  {
    DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
    do
    {
      gpducstulHead = v2[2];
      v2[2] = 0LL;
      tagObjLock::UnLock(DomainLockRef);
      HMUnlockObject(*v2);
      RIMLockExclusive(DomainLockRef);
      v2 = (_QWORD *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v22);
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  v4 = 256LL;
  if ( gbRemoteSession )
  {
    RtlStringCchPrintfW(
      &szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      gSessionId,
      L"\\Windows\\WindowStations");
  }
  else
  {
    v12 = &szWindowStationDirectory;
    while ( v4 != -2147483390 )
    {
      v13 = *(wchar_t *)((char *)v12 + (char *)L"\\Windows\\WindowStations" - (char *)&szWindowStationDirectory);
      if ( !v13 )
        break;
      *v12++ = v13;
      if ( !--v4 )
      {
        --v12;
        break;
      }
    }
    *v12 = 0;
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = CreateKernelEvent(SynchronizationEvent);
    if ( !gpEventPnPWainting
      || (FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 555) |= 4u,
          (gpEventDiconnectDesktop = CreateKernelEvent(SynchronizationEvent)) == 0) )
    {
      ObjectDirectory = -1073741801;
      goto LABEL_33;
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
        goto LABEL_33;
      if ( !InitVideo(v25) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_33;
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
        if ( !gbRemoteSession || gbFirstInteractiveSession )
          LW_BrushInit();
        if ( gbFirstInteractiveSession && gbRemoteSession && !gbSetupDPIInitialized )
          SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v25);
        InitLoadResources(0LL);
        v15 = gdwPolicyFlags;
        v8 = (void *)OpenCacheKeyEx(0LL, 51LL, 131097LL, &v15);
        if ( !v8 )
          goto LABEL_25;
        v9 = 0;
        while ( 1 )
        {
          RtlInitUnicodeString(&DestinationString, L"ConvertibleSlateMode");
          if ( ZwQueryValueKey(
                 v8,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) >= 0 )
            break;
          if ( !v15 )
            goto LABEL_24;
          ZwClose(v8);
          v8 = (void *)OpenCacheKeyEx(0LL, 51LL, 131097LL, &v15);
          if ( !v8 )
            goto LABEL_25;
        }
        v9 = v27;
LABEL_24:
        ZwClose(v8);
        if ( v9 )
          *((_DWORD *)gpsi + 555) |= 8u;
        else
LABEL_25:
          *((_DWORD *)gpsi + 555) &= ~8u;
        v16 = gdwPolicyFlags;
        v10 = (void *)OpenCacheKeyEx(0LL, 51LL, 131097LL, &v16);
        if ( !v10 )
          goto LABEL_30;
        while ( 1 )
        {
          RtlInitUnicodeString(&ValueName, L"SystemDockMode");
          if ( ZwQueryValueKey(v10, &ValueName, KeyValuePartialInformation, v28, 0x14u, &v21) >= 0 )
            break;
          if ( !v16 )
            goto LABEL_29;
          ZwClose(v10);
          v10 = (void *)OpenCacheKeyEx(0LL, 51LL, 131097LL, &v16);
          if ( !v10 )
            goto LABEL_30;
        }
        v3 = v29;
LABEL_29:
        ZwClose(v10);
        if ( v3 )
          *((_DWORD *)gpsi + 555) |= 0x10u;
        else
LABEL_30:
          *((_DWORD *)gpsi + 555) &= ~0x10u;
        vGetMitConfig();
        if ( (unsigned int)RIMIsRunningOnMobile() )
          GetPenStatusOnPhone();
      }
    }
  }
LABEL_33:
  UserSessionSwitchLeaveCrit(v5);
  return (unsigned int)ObjectDirectory;
}
