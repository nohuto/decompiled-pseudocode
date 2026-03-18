/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     InputUnInitialize @ 0x1C0004D90 (InputUnInitialize.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0034998 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ??_GCOPM@@QEAAPEAXI@Z @ 0x1C0074A90 (--_GCOPM@@QEAAPEAXI@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0075320 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C0075AA0 (Win32FreePagedLookasideList.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C0076078 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     RIMUnInitialize @ 0x1C00760F0 (RIMUnInitialize.c)
 *     CoreMsgUninitialize @ 0x1C00761E0 (CoreMsgUninitialize.c)
 *     McGenEventUnregister @ 0x1C00762EC (McGenEventUnregister.c)
 *     WinSqmEndSession @ 0x1C007639C (WinSqmEndSession.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     TlgUnregisterAggregateProvider @ 0x1C01C42D8 (TlgUnregisterAggregateProvider.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void (*i)(void); // rdi
  unsigned int v7; // ebx
  ULONGLONG *v8; // rcx
  int v9; // ebx
  _QWORD *v10; // rbx

  if ( (int)IsShutdownNavigationWindowRegistrySupported(a1) >= 0 )
    ShutdownNavigationWindowRegistry();
  if ( (int)IsCleanupDwmInputProcessingSupported() >= 0 )
    CleanupDwmInputProcessing();
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(DirectComposition::CConnection::s_pSessionConnection);
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
  if ( qword_1C01903B8 )
    COPM::`scalar deleting destructor'(qword_1C01903B8);
  gdwHydraHint |= 0x80u;
  qword_1C01903B8 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v1 = *(_QWORD **)(gpDispInfo + 16);
    if ( v1 )
    {
      do
      {
        v10 = (_QWORD *)*v1;
        Win32FreePool((__int64)v1);
        v1 = v10;
      }
      while ( v10 );
      *(_QWORD *)(gpDispInfo + 16) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup(v3, v2, v4, v5);
  if ( gpWin32kDriverObject )
    UninitializeEditionAutoLogger();
  if ( qword_1C018E9B8 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v7 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C018E9B8 + 32 * v7 + 24) )
          i();
        ++v7;
      }
      while ( v7 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList((__int64)gpStackRefLookAside);
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
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    EtwUnregister(qword_1C0188840);
    qword_1C0188840 = 0LL;
    dword_1C0188820 = 0;
    EtwUnregister(qword_1C01887C0);
    qword_1C01887C0 = 0LL;
    dword_1C01887A0 = 0;
    EtwUnregister(qword_1C018D250);
    qword_1C018D250 = 0LL;
    dword_1C018D230 = 0;
  }
  TlgUnregisterAggregateProvider();
  v8 = gpAsyncKeyEventMonitor;
  if ( gpAsyncKeyEventMonitor )
  {
    Win32FreePool((__int64)gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister(v8);
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
    v9 = 0;
  else
    v9 = UninitializeWin32PoolTracking();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported() >= 0 )
    UninitializeWin32CrossSessionGlobals();
  if ( !v9 && (int)IsCheckSessionPoolAllocationsSupported() >= 0 )
    CheckSessionPoolAllocations();
  EtwUnregister(qword_1C01880F0);
  qword_1C01880F0 = 0LL;
  dword_1C01880D0 = 0;
}
