/*
 * XREFs of ExInitializeResourceLite @ 0x140093AD0
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x140119A5C (CcAllocateInitializeBcb.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     MUIInitializeResourceLock @ 0x1405692A8 (MUIInitializeResourceLock.c)
 *     PnpInitializeNotifyEntry @ 0x140571770 (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     PiPnpRtlInit @ 0x14059DDFC (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     TtmInit @ 0x1405A7710 (TtmInit.c)
 *     PiDmObjectManagerInit @ 0x1405BDD24 (PiDmObjectManagerInit.c)
 *     FsRtlInitializeTieringHeat @ 0x1405BDD74 (FsRtlInitializeTieringHeat.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1405C8E28 (PfSnPrefetchCacheCtxInitialize.c)
 *     _PnpCtxOpenMachine @ 0x1405CCFE4 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x1405CD1A8 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     PiDqObjectManagerInit @ 0x1405D13F8 (PiDqObjectManagerInit.c)
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1406DA90C (TtmiCreateEventQueue.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1407FBAB8 (PpInitializeBootDDB.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x140808838 (ExInitializeTimeRefresh.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     MiInitializeLoadedModuleList @ 0x140818184 (MiInitializeLoadedModuleList.c)
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 *     PiDeviceDependencyInit @ 0x140819A3C (PiDeviceDependencyInit.c)
 *     SepInitializeWorkList @ 0x14081AF9C (SepInitializeWorkList.c)
 *     ExpInitSystemPhase0 @ 0x14081F114 (ExpInitSystemPhase0.c)
 *     SepRmDbInitialization @ 0x14082189C (SepRmDbInitialization.c)
 *     PopInitializeAdpm @ 0x14082503C (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x1408253B4 (PpInitSystem.c)
 *     PiSwInit @ 0x140825FEC (PiSwInit.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140826580 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlStdLogStackTrace @ 0x14023B538 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x14023B590 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14023B884 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140255E24 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v3; // edx
  struct _LIST_ENTRY *v4; // rax
  KSPIN_LOCK *v6; // rsi
  unsigned __int16 v7; // di
  __int64 v8; // rbp
  int RecordedStackTraceIndex; // eax
  bool v10; // zf
  signed __int32 v11; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v6 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v8 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v8 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v6);
        v7 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v6, v8);
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
    }
    Resource->CreatorBackTraceIndex = v7;
  }
  else
  {
    Resource->CreatorBackTraceIndex = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    v3 = ExpResourceSpinLock;
    while ( (v3 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v3 & 0x40000000) == 0 )
      {
        v11 = _InterlockedCompareExchange(&ExpResourceSpinLock, v3 | 0x40000000, v3);
        v10 = v3 == v11;
        v3 = v11;
        if ( !v10 )
          continue;
      }
      KeYieldProcessorEx(&v13);
      v3 = ExpResourceSpinLock;
    }
  }
  v4 = (struct _LIST_ENTRY *)qword_140343048;
  if ( *(__int64 **)qword_140343048 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140343048 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  __writecr8(CurrentIrql);
  __incgsdword(0x6498u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
