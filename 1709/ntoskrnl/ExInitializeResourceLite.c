/*
 * XREFs of ExInitializeResourceLite @ 0x140089610
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1400F755C (CcAllocateInitializeBcb.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     MUIInitializeResourceLock @ 0x1404F3344 (MUIInitializeResourceLock.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     PnpInitializeNotifyEntry @ 0x140586388 (PnpInitializeNotifyEntry.c)
 *     PiDqObjectManagerInit @ 0x1405C4548 (PiDqObjectManagerInit.c)
 *     _PnpCtxOpenMachine @ 0x1405C4AF8 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x1405C4F28 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     PiPnpRtlInit @ 0x1405C620C (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     PiDmObjectManagerInit @ 0x1405CD918 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x1405D1148 (AdtpObjsInitialize.c)
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1405DCDC8 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x1405E30B8 (FsRtlInitializeTieringHeat.c)
 *     TtmInit @ 0x1405F0520 (TtmInit.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x140710D1C (TtmiCreateEventQueue.c)
 *     SepRmDbInitialization @ 0x140827A2C (SepRmDbInitialization.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x14083CB54 (ExInitializeTimeRefresh.c)
 *     PiSwInit @ 0x14083E730 (PiSwInit.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     PiDmaGuardInitialize @ 0x140840328 (PiDmaGuardInitialize.c)
 *     PpInitializeBootDDB @ 0x1408403F4 (PpInitializeBootDDB.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x1408481FC (MiInitializeLoadedModuleList.c)
 *     PiDeviceDependencyInit @ 0x140849EFC (PiDeviceDependencyInit.c)
 *     SepInitializeWorkList @ 0x14084B91C (SepInitializeWorkList.c)
 *     ExpInitSystemPhase0 @ 0x14084FA14 (ExpInitSystemPhase0.c)
 *     FsRtlInitSystem @ 0x140851150 (FsRtlInitSystem.c)
 *     PopInitializeAdpm @ 0x140856358 (PopInitializeAdpm.c)
 *     PpInitSystem @ 0x1408567D4 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140857CC0 (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlStdLogStackTrace @ 0x140250DE8 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x140250E40 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140251114 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14027E6E0 (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  v4 = (struct _LIST_ENTRY *)qword_14035B788;
  if ( *(__int64 **)qword_14035B788 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_14035B788 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  __writecr8(CurrentIrql);
  __incgsdword(0x6358u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
