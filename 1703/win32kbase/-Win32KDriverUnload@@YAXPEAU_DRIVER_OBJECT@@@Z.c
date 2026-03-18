/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00146EC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WinSqmEndSession @ 0x1C0065EB4 (WinSqmEndSession.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00670EC (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     RIMUnInitialize @ 0x1C0067150 (RIMUnInitialize.c)
 *     CoreMsgUninitialize @ 0x1C0067240 (CoreMsgUninitialize.c)
 *     McGenEventUnregister @ 0x1C006734C (McGenEventUnregister.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006737C (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C0067BC4 (MultiUserNtGreCleanup.c)
 *     InputUnInitialize @ 0x1C0069278 (InputUnInitialize.c)
 *     ??_GCOPM@@QEAAPEAXI@Z @ 0x1C006D828 (--_GCOPM@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     TlgUnregisterAggregateProvider @ 0x1C01BD280 (TlgUnregisterAggregateProvider.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  unsigned int v1; // edx
  _QWORD *v2; // rcx
  _BYTE *v3; // rax
  void (*i)(void); // rdi
  unsigned int v5; // ebx
  PVOID v6; // rcx
  PVOID v7; // rcx
  PREGHANDLE v8; // rcx
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
  if ( qword_1C018B748 )
    COPM::`scalar deleting destructor'(qword_1C018B748, v1);
  gdwHydraHint |= 0x80u;
  qword_1C018B748 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v2 = (_QWORD *)*((_QWORD *)gpDispInfo + 2);
    if ( v2 )
    {
      do
      {
        v10 = (_QWORD *)*v2;
        Win32FreePool((__int64)v2);
        v2 = v10;
      }
      while ( v10 );
      *((_QWORD *)gpDispInfo + 2) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup();
  if ( gpWin32kDriverObject )
    UninitializeEditionAutoLogger();
  v3 = qword_1C0189E38;
  if ( qword_1C0189E38 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v5 = 0;
      do
      {
        if ( v3[32 * v5 + 24] )
        {
          i();
          v3 = qword_1C0189E38;
        }
        ++v5;
      }
      while ( v5 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  gdwHydraHint |= 0x200u;
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  v6 = ghSectionShared;
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      v6 = ghSectionShared;
    }
    ObfDereferenceObject(v6);
  }
  if ( gpDispInfo )
    Win32FreePool((__int64)gpDispInfo);
  if ( gpkdiStatic )
    Win32FreePool(gpkdiStatic);
  v7 = ghSectionKernelHandleTable;
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
    {
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
      v7 = ghSectionKernelHandleTable;
    }
    ObfDereferenceObject(v7);
  }
  if ( (int)IsMagContextDestroySupported() >= 0 )
    MagContextDestroy(&gMagnContext);
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    DisableUserkTraceLogging();
  if ( gbTraceLoggingInitialized )
  {
    EtwUnregister(qword_1C0186880);
    qword_1C0186880 = 0LL;
    dword_1C0186860 = 0;
    EtwUnregister(qword_1C0186840);
    qword_1C0186840 = 0LL;
    dword_1C0186820 = 0;
    EtwUnregister(qword_1C01867C0);
    qword_1C01867C0 = 0LL;
    dword_1C01867A0 = 0;
    EtwUnregister(qword_1C0188860);
    qword_1C0188860 = 0LL;
    dword_1C0188840 = 0;
  }
  TlgUnregisterAggregateProvider();
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
  if ( gafServiceFilterAuditCache )
  {
    ExFreePoolWithTag(gafServiceFilterAuditCache, 0);
    gafServiceFilterAuditCache = 0LL;
  }
  if ( (int)IsUninitializeWin32PoolTrackingSupported() < 0 )
    v9 = 0;
  else
    v9 = UninitializeWin32PoolTracking();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported() >= 0 )
    UninitializeWin32CrossSessionGlobals();
  if ( !v9 && (int)IsCheckSessionPoolAllocationsSupported() >= 0 )
    CheckSessionPoolAllocations();
  EtwUnregister(qword_1C01860F0);
  qword_1C01860F0 = 0LL;
  hProvider = 0;
}
