/*
 * XREFs of DriverEntry @ 0x1C01DE690
 * Callers:
 *     GsDriverEntry @ 0x1C01DD010 (GsDriverEntry.c)
 * Callees:
 *     PowerIsDimTimeOutManual @ 0x1C00050C0 (PowerIsDimTimeOutManual.c)
 *     InputInitialize @ 0x1C000650C (InputInitialize.c)
 *     Win32AllocPagedLookasideList @ 0x1C0006B50 (Win32AllocPagedLookasideList.c)
 *     InitializeWin32KSyscallFilter @ 0x1C0007ED0 (InitializeWin32KSyscallFilter.c)
 *     CreateKernelEvent @ 0x1C0008540 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x1C00085A0 (CreateKernelSemaphore.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     RtlLoadStringOrError @ 0x1C0060610 (RtlLoadStringOrError.c)
 *     OPMInitialize @ 0x1C00749FC (OPMInitialize.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     CoreMsgInitialize @ 0x1C0086F68 (CoreMsgInitialize.c)
 *     RIMInitialize @ 0x1C008CCE0 (RIMInitialize.c)
 *     WinSqmStartSession @ 0x1C0096794 (WinSqmStartSession.c)
 *     InitializeGraphicsInfrastructure @ 0x1C00974C4 (InitializeGraphicsInfrastructure.c)
 *     WinSqmIsOptedInEx @ 0x1C0098240 (WinSqmIsOptedInEx.c)
 *     RIMInitializeAutoLogger @ 0x1C00985A4 (RIMInitializeAutoLogger.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C009A714 (-CheckInitialSessions@@YAJXZ.c)
 *     GetWin32kDriverObject @ 0x1C009A9E0 (GetWin32kDriverObject.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C009B230 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     McGenEventRegister @ 0x1C009C190 (McGenEventRegister.c)
 *     RetrieveCurrentDisplayState @ 0x1C00A6628 (RetrieveCurrentDisplayState.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C01C40AC (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C01C4184 (TraceLoggingRegisterEx.c)
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 *     InitCreateUserCrit @ 0x1C01E0188 (InitCreateUserCrit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS CurrentDisplayState; // edi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v6; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ETWENABLECALLBACK *v23; // rdx
  const GUID *v24; // rcx
  void *v25; // r8
  ULONGLONG *v26; // r9
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  LARGE_INTEGER *v32; // rbx
  struct tagTHREADINFO *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  HANDLE CurrentProcessId; // rax
  __int64 W32pArgumentTable; // rdi
  unsigned int W32pServiceLimit; // ebx
  __int64 W32pServiceTable; // rax
  __int64 W32pArgumentTableFilter; // rdi
  unsigned int W32pServiceLimitFilter; // ebx
  __int64 W32pServiceTableFilter; // rax
  __int64 *DomainLockRef; // rbx
  __int64 *v53; // rbx
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-B8h] BYREF
  tagObjLock *v56; // [rsp+50h] [rbp-B0h] BYREF
  tagObjLock *v57; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD OutputBuffer[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+74h] [rbp-8Ch]
  int v61; // [rsp+78h] [rbp-88h]
  int v62; // [rsp+7Ch] [rbp-84h]
  int v63; // [rsp+80h] [rbp-80h]
  int v64; // [rsp+84h] [rbp-7Ch]
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  unsigned __int8 v67; // [rsp+90h] [rbp-70h]
  unsigned __int8 v68; // [rsp+91h] [rbp-6Fh]
  int v69; // [rsp+94h] [rbp-6Ch]
  char v70; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING v71; // [rsp+A0h] [rbp-60h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v75[160]; // [rsp+100h] [rbp+0h] BYREF

  SystemInformation = 0LL;
  EnsureRequiredApiSetExtensions();
  gpKbdTbl = (__int64)KbdTablesFallback;
  gpusMouseVKey = (__int64)&ausMouseVKey;
  gSessionId = PsGetCurrentProcessSessionId();
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  CurrentDisplayState = 0;
  if ( dword_1C0195F90 == 1 )
  {
    CurrentDisplayState = -1073741801;
  }
  else if ( (int)IsInitializeWin32CrossSessionGlobalsSupported() >= 0 )
  {
    CurrentDisplayState = InitializeWin32CrossSessionGlobals();
  }
  if ( dword_1C0195F90 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported() >= 0
    && !(unsigned int)InitializeWin32PoolTracking()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0195F90 == 3 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
  {
    LODWORD(SystemInformation) = 8;
    CurrentDisplayState = ZwQuerySystemInformation(
                            MaxSystemInfoClass|SystemProcessInformation,
                            &SystemInformation,
                            8u,
                            0LL);
    if ( CurrentDisplayState < 0 || (gbOSTestSigningEnabled = 1, (SystemInformation & 0x200000000LL) == 0) )
      gbOSTestSigningEnabled = 0;
    WdInitialize();
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01880D0, 0LL, 0LL);
  }
  if ( dword_1C0195F90 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v4 = 64LL;
  if ( dword_1C0195F90 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C0192918 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C0192908 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v5 = &gTimerHashTable;
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    --v4;
  }
  while ( v4 );
  memset(&gTimerId, 0, 0xFE0uLL);
  if ( (int)IsEditionInitializeMoveSizeListSupported() >= 0 )
    EditionInitializeMoveSizeList();
  if ( (int)IsInitializeHidRequestListSupported() >= 0 )
    InitializeHidRequestList();
  if ( (int)IsInitializePointerInputSupported() >= 0 )
    InitializePointerInput();
  if ( (int)IsInitializePointerPredictionSupported() >= 0 )
    InitializePointerPrediction();
  WPP_MAIN_CB.Dpc.DpcData = (PVOID)MEMORY[0xFFFFF78000000330];
  if ( (int)IsInitializePointerDevicesPresenceStateSupported() >= 0 )
    InitializePointerDevicesPresenceState(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_108;
  v6 = CheckInitialSessions();
  CurrentDisplayState = v6;
  if ( v6 && v6 != -1073741771 )
  {
    if ( v6 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_108;
  }
  if ( !gbRemoteSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId(gSessionId);
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)Win32KDriverUnload;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_109;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(16LL, 0x616C7355u, 0x6C6F7355u, 0xFFFEu);
  if ( !gpStackRefLookAside )
    goto LABEL_109;
  if ( !gSessionId )
  {
    W32pArgumentTable = SysEntryGetW32pArgumentTable();
    W32pServiceLimit = SysEntryGetW32pServiceLimit();
    W32pServiceTable = SysEntryGetW32pServiceTable();
    KeAddSystemServiceTable(W32pServiceTable, gpCountTable, W32pServiceLimit, W32pArgumentTable, 1);
    if ( !gSessionId )
    {
      W32pArgumentTableFilter = SysEntryGetW32pArgumentTableFilter();
      W32pServiceLimitFilter = SysEntryGetW32pServiceLimitFilter();
      W32pServiceTableFilter = SysEntryGetW32pServiceTableFilter();
      KeAddSystemServiceTable(W32pServiceTableFilter, gpCountTable, W32pServiceLimitFilter, W32pArgumentTableFilter, 2);
    }
  }
  if ( !(unsigned int)InitCreateUserCrit() )
    goto LABEL_109;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v15, v14, v16, v17);
  gptiCurrent = v13;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v56);
  v18 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v18[2];
      v18[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v18);
      RIMLockExclusive((__int64)DomainLockRef);
      v18 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v56);
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  if ( CurrentDisplayState < 0 )
  {
    UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
    goto LABEL_108;
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  if ( !gSessionId )
  {
    SysEntryPsEstablishWin32Callouts();
    if ( !gSessionId )
      DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  KeQueryPerformanceCounter(&gliQpcFreq);
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_108;
  if ( (int)IsMagContextInitializeSupported() >= 0 )
    MagContextInitialize(&gMagnContext);
  McGenEventRegister(v24, v23, v25, v26);
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    EnableUserkTraceLogging();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0188820, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01887A0, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C018D230, (TLG_PENABLECALLBACK)W32kBaseInputEnableCallback, 0LL);
  gbTraceLoggingInitialized = 1;
  TlgRegisterAggregateProviderEx();
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( (int)IsInitTimerCoalescingSupported() >= 0 )
    InitTimerCoalescing();
  if ( (int)IsInitializeFeedbackDataSupported() >= 0 )
    InitializeFeedbackData();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_109;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_109;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_109;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_109;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_109;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters )
    goto LABEL_109;
  gcDITHitTestWaiters = 0;
  gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemDITHitTestWaiters
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (gcRITBlockedOnDITWaiters = 0, (gpsemRITBlockedOnDITWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (hModuleWinKernel = MmPageEntireDriver(DriverEntry)) == 0LL
    || (RtlLoadStringOrError(0x268u, v75, 80, 0), hModuleWin = MmUserProbeAddress, !(unsigned __int8)InitializeGre()) )
  {
LABEL_109:
    CurrentDisplayState = -1073741801;
    goto LABEL_108;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_108;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_108;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = v70;
  giPowerOffTimeOutMs = 1000 * v59;
  dword_1C0190FBC = v61 == 1;
  dword_1C0190FC8 = v62 == 0;
  dword_1C0190FE4 = v67;
  dword_1C0190FDC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C0190FC4 = 1;
  dword_1C0190FE8 = v69 != 0;
  dword_1C0190F70 = 1;
  qword_1C0190F38 = 0LL;
  qword_1C0190F50 = 0LL;
  qword_1C0190F48 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C0190F58 = 0LL;
  qword_1C0190F60 = 0LL;
  v27 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C0190F40 = (v27 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C0190F68 = 0;
  dword_1C0190FF0 = 0;
  giDimTimeOutMs = 1000 * v60;
  dword_1C0190F88 = v65;
  dword_1C0190F80 = v64;
  dword_1C0190F78 = v63;
  dword_1C0190F8C = v66;
  dword_1C0190FEC = v68;
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v27);
  dword_1C0190F94 = dword_1C0190F78;
  dword_1C0190FA4 = dword_1C0190F80;
  dword_1C0190F98 = -1;
  dword_1C0190F9C = -1;
  dword_1C0190FA0 = -1;
  dword_1C0190FA8 = -1;
  dword_1C0190FAC = -1;
  dword_1C0190FB0 = -1;
  byte_1C0190FB4 = 0;
  dword_1C0190F90 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState >= 0 )
    {
      v54 = gPowerTransitionsState != 0 ? 3 : 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v54, 4LL, 0LL, 0LL, 0, 0);
      goto LABEL_72;
    }
LABEL_108:
    Win32KDriverUnload(0LL);
    return CurrentDisplayState;
  }
LABEL_72:
  ExInitializeRundownProtection(&gWinstaRunRef);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    v32 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, v28, v30, v31);
    if ( v32 )
      v32[1] = KeQueryPerformanceCounter(0LL);
    v33 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v35, v34, v36, v37);
    gptiCurrent = v33;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v57);
    v38 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      v53 = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v38[2];
        v38[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)v53);
        HMUnlockObject(*v38);
        RIMLockExclusive((__int64)v53);
        v38 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v57);
    if ( !gpWin32kDriverObject )
      GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C018F5F4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    goto LABEL_108;
  RtlInitUnicodeString(
    &v71,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  RIMInitializeAutoLogger(v43, (__int64)&v71);
  InitializeEditionAutoLogger(gpWin32kDriverObject, &v71);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_108;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_108;
  if ( (int)IsDDCCIInitializeSupported() >= 0 )
  {
    CurrentDisplayState = DDCCIInitializeWrap();
    if ( CurrentDisplayState < 0 )
      goto LABEL_108;
  }
  CurrentDisplayState = DCompSessionInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_108;
  if ( (int)IsInitDwmInputProcessingSupported() >= 0 )
  {
    CurrentDisplayState = InitDwmInputProcessing();
    if ( CurrentDisplayState < 0 )
      goto LABEL_108;
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported() >= 0 )
  {
    CurrentDisplayState = InitializeNavigationWindowRegistry();
    if ( CurrentDisplayState < 0 )
      goto LABEL_108;
  }
  if ( gSessionId )
  {
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      ghSMSS = 0LL;
  }
  return 0;
}
