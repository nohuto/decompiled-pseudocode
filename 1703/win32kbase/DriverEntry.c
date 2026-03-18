/*
 * XREFs of DriverEntry @ 0x1C01D5780
 * Callers:
 *     GsDriverEntry @ 0x1C01D8B60 (GsDriverEntry.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     CreateKernelEvent @ 0x1C0054640 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x1C0058750 (CreateKernelSemaphore.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C006AA7C (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     InitializeGraphicsInfrastructure @ 0x1C006AB0C (InitializeGraphicsInfrastructure.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C006AE58 (-CheckInitialSessions@@YAJXZ.c)
 *     RIMInitialize @ 0x1C006AF90 (RIMInitialize.c)
 *     CoreMsgInitialize @ 0x1C006B0BC (CoreMsgInitialize.c)
 *     McGenEventRegister @ 0x1C006D000 (McGenEventRegister.c)
 *     WinSqmStartSession @ 0x1C006D038 (WinSqmStartSession.c)
 *     PowerIsDimTimeOutManual @ 0x1C006D324 (PowerIsDimTimeOutManual.c)
 *     RIMInitializeAutoLogger @ 0x1C006D45C (RIMInitializeAutoLogger.c)
 *     GetWin32kDriverObject @ 0x1C006D4E0 (GetWin32kDriverObject.c)
 *     WinSqmIsOptedInEx @ 0x1C006D5A0 (WinSqmIsOptedInEx.c)
 *     OPMInitialize @ 0x1C006D794 (OPMInitialize.c)
 *     InputInitialize @ 0x1C006DA98 (InputInitialize.c)
 *     RtlLoadStringOrError @ 0x1C0073FB0 (RtlLoadStringOrError.c)
 *     RetrieveCurrentDisplayState @ 0x1C009C62C (RetrieveCurrentDisplayState.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C01BD5F0 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C01BD6C0 (TraceLoggingRegisterEx.c)
 *     InitCreateUserCrit @ 0x1C01D5008 (InitCreateUserCrit.c)
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS CurrentDisplayState; // ebx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  struct _KEVENT *PoolWithTag; // rax
  ETWENABLECALLBACK *v8; // rdx
  const GUID *v9; // rcx
  void *v10; // r8
  ULONGLONG *v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  LARGE_INTEGER v22; // rcx
  LARGE_INTEGER v23; // rdi
  LARGE_INTEGER v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // eax
  SIZE_T v27; // rbx
  PVOID v28; // rax
  HANDLE CurrentProcessId; // rax
  __int64 W32pArgumentTable; // rdi
  unsigned int W32pServiceLimit; // ebx
  __int64 W32pServiceTable; // rax
  __int64 W32pArgumentTableFilter; // rdi
  unsigned int W32pServiceLimitFilter; // ebx
  __int64 W32pServiceTableFilter; // rax
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD OutputBuffer[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v41; // [rsp+68h] [rbp-A0h]
  int v42; // [rsp+6Ch] [rbp-9Ch]
  int v43; // [rsp+70h] [rbp-98h]
  int v44; // [rsp+74h] [rbp-94h]
  int v45; // [rsp+78h] [rbp-90h]
  int v46; // [rsp+7Ch] [rbp-8Ch]
  int v47; // [rsp+80h] [rbp-88h]
  int v48; // [rsp+84h] [rbp-84h]
  unsigned __int8 v49; // [rsp+88h] [rbp-80h]
  unsigned __int8 v50; // [rsp+89h] [rbp-7Fh]
  int v51; // [rsp+8Ch] [rbp-7Ch]
  char v52; // [rsp+90h] [rbp-78h]
  struct _UNICODE_STRING v53; // [rsp+98h] [rbp-70h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v57[160]; // [rsp+F8h] [rbp-10h] BYREF

  SystemInformation = 0LL;
  EnsureRequiredApiSetExtensions();
  gpKbdTbl = (__int64)KbdTablesFallback;
  gpusMouseVKey = (__int64)&ausMouseVKey;
  gSessionId = PsGetCurrentProcessSessionId();
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  CurrentDisplayState = 0;
  if ( dword_1C018F140 == 1 )
  {
    CurrentDisplayState = -1073741801;
  }
  else if ( (int)IsInitializeWin32CrossSessionGlobalsSupported() >= 0 )
  {
    CurrentDisplayState = InitializeWin32CrossSessionGlobals();
  }
  if ( dword_1C018F140 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported() >= 0
    && !(unsigned int)InitializeWin32PoolTracking()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C018F140 == 3 )
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
    TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  }
  if ( dword_1C018F140 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  if ( dword_1C018F140 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C018DAB8 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C018DAA8 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v4 = &gTimerHashTable;
  W32UserProbeAddress = (CTouchProcessor *)MmUserProbeAddress;
  v5 = 64LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  memset(&gTimerId, 0, 0xFE0uLL);
  if ( (int)IsInitializeHidRequestListSupported() >= 0 )
    InitializeHidRequestList();
  if ( (int)IsInitializePointerInputSupported() >= 0 )
    InitializePointerInput();
  if ( (int)IsInitializePointerPredictionSupported() >= 0 )
    InitializePointerPrediction();
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000330];
  if ( (int)IsInitializePointerDevicesPresenceStateSupported() >= 0 )
    InitializePointerDevicesPresenceState(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_111;
  v6 = CheckInitialSessions();
  CurrentDisplayState = v6;
  if ( v6 && v6 != -1073741771 )
  {
    if ( v6 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_111;
  }
  if ( !gbRemoteSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)Win32KDriverUnload;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_112;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
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
    goto LABEL_112;
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
    goto LABEL_111;
  if ( (int)IsMagContextInitializeSupported() >= 0 )
    MagContextInitialize(&gMagnContext);
  McGenEventRegister(v9, v8, v10, v11);
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    EnableUserkTraceLogging();
  TraceLoggingRegisterEx(
    (TraceLoggingHProvider)&dword_1C0186860,
    (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback,
    0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0186820, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01867A0, 0LL, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0188840, (TLG_PENABLECALLBACK)W32kBaseInputEnableCallback, 0LL);
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
    goto LABEL_112;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_112;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_112;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_112;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_112;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters )
    goto LABEL_112;
  gcDITHitTestWaiters = 0;
  gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemDITHitTestWaiters )
    goto LABEL_112;
  gcDITLuidHitTestWaiters = 0;
  gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemDITLuidHitTestWaiters )
    goto LABEL_112;
  gcRITBlockedOnDITWaiters = 0;
  gpsemRITBlockedOnDITWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemRITBlockedOnDITWaiters )
    goto LABEL_112;
  hModuleWinKernel = MmPageEntireDriver(DriverEntry);
  if ( !hModuleWinKernel )
    goto LABEL_112;
  RtlLoadStringOrError(0x268u, v57, 80, 0);
  hModuleWin = (__int64)W32UserProbeAddress;
  if ( !InitializeGre() )
    goto LABEL_112;
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_111;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_111;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = v52;
  giPowerOffTimeOutMs = 1000 * v41;
  dword_1C018C28C = v43 == 1;
  dword_1C018C298 = v44 == 0;
  dword_1C018C2B4 = v49;
  dword_1C018C2AC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C018C294 = 1;
  dword_1C018C2B8 = v51 != 0;
  dword_1C018C240 = 1;
  qword_1C018C208 = 0LL;
  qword_1C018C220 = 0LL;
  qword_1C018C218 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C018C228 = 0LL;
  qword_1C018C230 = 0LL;
  v12 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C018C210 = (v12 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C018C238 = 0;
  giDimTimeOutMs = 1000 * v42;
  dword_1C018C258 = v47;
  dword_1C018C250 = v46;
  dword_1C018C248 = v45;
  dword_1C018C25C = v48;
  dword_1C018C2BC = v50;
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v12);
  dword_1C018C264 = dword_1C018C248;
  dword_1C018C274 = dword_1C018C250;
  dword_1C018C268 = -1;
  dword_1C018C26C = -1;
  dword_1C018C270 = -1;
  dword_1C018C278 = -1;
  dword_1C018C27C = -1;
  dword_1C018C280 = -1;
  byte_1C018C284 = 0;
  dword_1C018C260 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
    {
LABEL_111:
      Win32KDriverUnload(0LL);
      return CurrentDisplayState;
    }
    LODWORD(v38) = gPowerTransitionsState != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v38, 4LL, 0LL, 0LL, 0, 0);
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v13, v15);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v17 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v21 = PsGetCurrentThreadWin32Thread(v19, v18, v20);
    if ( v21 )
    {
      v23 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v21 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        OutputBufferLength[0] = 0;
        LOBYTE(v22.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v22.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v24.QuadPart,
          v23.QuadPart,
          *(_QWORD *)OutputBufferLength,
          gullUserCritAcquireToken);
      }
      if ( v23.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        OutputBufferLength[0] = 1000 * v23.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          (__int64)gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v24.QuadPart,
          0LL,
          *(_QWORD *)OutputBufferLength,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v21 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v17;
    gbValidateHandleForIL = 1;
    if ( !gpWin32kDriverObject )
      GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit();
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C018AA7C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    goto LABEL_111;
  RtlInitUnicodeString(
    &v53,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  RIMInitializeAutoLogger(v25, (__int64)&v53);
  InitializeEditionAutoLogger(gpWin32kDriverObject, &v53);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_111;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_111;
  if ( (int)IsDDCCIInitializeSupported() >= 0 )
  {
    CurrentDisplayState = DDCCIInitializeWrap();
    if ( CurrentDisplayState < 0 )
      goto LABEL_111;
  }
  CurrentDisplayState = DCompSessionInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_111;
  if ( (int)IsInitDwmInputProcessingSupported() >= 0 )
  {
    CurrentDisplayState = InitDwmInputProcessing();
    if ( CurrentDisplayState < 0 )
      goto LABEL_111;
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported() >= 0 )
  {
    CurrentDisplayState = InitializeNavigationWindowRegistry();
    if ( CurrentDisplayState < 0 )
      goto LABEL_111;
  }
  v26 = SysEntryGetW32pServiceLimitFilter();
  v27 = ((unsigned __int64)v26 >> 3) + 1;
  if ( (v26 & 7) == 0 )
    v27 = (unsigned __int64)v26 >> 3;
  if ( (v27 & 3) != 0 )
    v27 = v27 - (v27 & 3) + 4;
  v28 = ExAllocatePoolWithTag((POOL_TYPE)512, v27, 0x46696C74u);
  gafServiceFilterAuditCache = v28;
  if ( !v28 )
  {
LABEL_112:
    CurrentDisplayState = -1073741801;
    goto LABEL_111;
  }
  memset(v28, 0, v27);
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
