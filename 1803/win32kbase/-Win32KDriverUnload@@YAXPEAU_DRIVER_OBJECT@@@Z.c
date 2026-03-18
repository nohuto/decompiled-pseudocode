/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00A9054 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00A9524 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     McGenEventUnregister @ 0x1C00AA76C (McGenEventUnregister.c)
 *     Win32FreePagedLookasideList @ 0x1C00BD280 (Win32FreePagedLookasideList.c)
 *     WinSqmEndSession @ 0x1C00BDFB8 (WinSqmEndSession.c)
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00BE6B4 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C00BECAC (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 *     ??_GCOPM@@QEAAPEAXI@Z @ 0x1C00C5154 (--_GCOPM@@QEAAPEAXI@Z.c)
 *     RIMUnInitialize @ 0x1C00DE320 (RIMUnInitialize.c)
 *     InputUnInitialize @ 0x1C0131764 (InputUnInitialize.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     CoreMsgUninitialize @ 0x1C0165668 (CoreMsgUninitialize.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C01686D0 (UninitializeTelemetryAssertsKM.c)
 *     TlgUnregisterAggregateProvider @ 0x1C01D8140 (TlgUnregisterAggregateProvider.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  void (*i)(void); // rdi
  unsigned int v6; // ebx
  PVOID v7; // rbx
  void *v8; // rdi
  ULONGLONG *v9; // rcx
  int v10; // ebx

  if ( (int)IsShutdownNavigationWindowRegistrySupported(a1) >= 0 )
    ShutdownNavigationWindowRegistry();
  if ( (int)IsCleanupDwmInputProcessingSupported() >= 0 )
    CleanupDwmInputProcessing();
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(
      DirectComposition::CConnection::s_pSessionConnection,
      v1);
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    ExDeleteResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    Win32FreePool((__int64)DirectComposition::CConnection::s_pSessionConnectionLock);
    DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  }
  if ( DirectComposition::CSynchronizationManager::s_pSyncTable )
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTable);
  if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
  {
    ExDeleteResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  }
  if ( (int)IsDDCCICleanUpSupported() >= 0 )
    DDCCICleanUpWrap();
  if ( P )
    COPM::`scalar deleting destructor'(P, v2);
  gdwHydraHint |= 0x80u;
  P = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v3 = *(_QWORD **)(gpDispInfo + 24);
    if ( v3 )
    {
      do
      {
        v4 = (_QWORD *)*v3;
        Win32FreePool((__int64)v3);
        v3 = v4;
      }
      while ( v4 );
      *(_QWORD *)(gpDispInfo + 24) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup();
  if ( gpWin32kDriverObject )
    UninitializeEditionAutoLogger();
  if ( qword_1C01A0E28 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v6 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C01A0E28 + 32 * v6 + 24) )
          i();
        ++v6;
      }
      while ( v6 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList();
  v7 = gpUserTypeIsolation;
  if ( gpUserTypeIsolation )
  {
    v8 = *(void **)gpUserTypeIsolation;
    if ( *(_QWORD *)gpUserTypeIsolation )
    {
      NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(*(_QWORD *)gpUserTypeIsolation);
      ExFreePoolWithTag(v8, 0);
    }
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<77824,304>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Destroy(v7);
    ExFreePoolWithTag(gpUserTypeIsolation, 0);
    gpUserTypeIsolation = 0LL;
  }
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      MmUnmapViewInSessionSpace(gpvSharedBase);
    }
    ObfDereferenceObject(ghSectionShared);
  }
  if ( gpDispInfo )
    Win32FreePool(gpDispInfo);
  if ( gpkdiStatic )
    Win32FreePool(gpkdiStatic);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( (int)IsMagContextDestroySupported() >= 0 )
    MagContextDestroy(&gMagnContext);
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    DisableUserkTraceLogging();
  if ( gbTraceLoggingInitialized )
  {
    EtwUnregister(qword_1C019A2A0);
    qword_1C019A2A0 = 0LL;
    hProvider = 0;
    EtwUnregister(qword_1C019EC60);
    qword_1C019EC60 = 0LL;
    dword_1C019EC40 = 0;
    EtwUnregister(qword_1C019EC20);
    qword_1C019EC20 = 0LL;
    dword_1C019EC00 = 0;
    EtwUnregister(qword_1C019EBE0);
    qword_1C019EBE0 = 0LL;
    dword_1C019EBC0 = 0;
  }
  TlgUnregisterAggregateProvider();
  v9 = (ULONGLONG *)gpAsyncKeyEventMonitor;
  if ( gpAsyncKeyEventMonitor )
  {
    Win32FreePool((__int64)gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister(v9);
  if ( (int)IsCleanupMediaChangeSupported() >= 0 )
    CleanupMediaChange();
  CoreMsgUninitialize();
  RIMUnInitialize();
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !gSessionId )
  {
    KeRemoveSystemServiceTable(1LL);
    if ( !gSessionId )
      KeRemoveSystemServiceTable(2LL);
  }
  if ( gpCountTable )
  {
    ExFreePoolWithTag(gpCountTable, 0);
    gpCountTable = 0LL;
  }
  FreeWin32KSyscallFilter();
  if ( (int)IsUninitializeWin32PoolTrackingSupported() < 0 )
    v10 = 0;
  else
    v10 = UninitializeWin32PoolTracking();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported() >= 0 )
    UninitializeWin32CrossSessionGlobals();
  if ( !v10 && (int)IsCheckSessionPoolAllocationsSupported() >= 0 )
    CheckSessionPoolAllocations();
  EtwUnregister(qword_1C019A220);
  qword_1C019A220 = 0LL;
  dword_1C019A200 = 0;
  UninitializeTelemetryAssertsKM();
  if ( (int)IsTelemetryAssertsSupported() >= 0 )
    UninitializeWin32kFullTelemetryAsserts();
}
