/*
 * XREFs of ExInitializeResourceLite @ 0x1400F3430
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x1400DA798 (CcAllocateInitializeBcb.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     PnpInitializeNotifyEntry @ 0x1405E2768 (PnpInitializeNotifyEntry.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     MUIInitializeResourceLock @ 0x140605E60 (MUIInitializeResourceLock.c)
 *     PiPnpRtlInit @ 0x140622640 (PiPnpRtlInit.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     DrvDbOpenContext @ 0x140623998 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140623BE8 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxOpenMachine @ 0x140623FA8 (_PnpCtxOpenMachine.c)
 *     TtmInit @ 0x140627A80 (TtmInit.c)
 *     PiDmObjectManagerInit @ 0x1406312A8 (PiDmObjectManagerInit.c)
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140645588 (PfSnPrefetchCacheCtxInitialize.c)
 *     FsRtlInitializeTieringHeat @ 0x14064AB24 (FsRtlInitializeTieringHeat.c)
 *     PiDqObjectManagerInit @ 0x14064FA0C (PiDqObjectManagerInit.c)
 *     IopInitializeBootLogging @ 0x140719F14 (IopInitializeBootLogging.c)
 *     TtmiCreateEventQueue @ 0x1407745A4 (TtmiCreateEventQueue.c)
 *     MiInitializeLoadedModuleList @ 0x14089DE40 (MiInitializeLoadedModuleList.c)
 *     ExpInitSystemPhase0 @ 0x14089EA18 (ExpInitSystemPhase0.c)
 *     PiSwInit @ 0x14089F42C (PiSwInit.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1408A48EC (PpInitializeBootDDB.c)
 *     PipDmgInitPhaseOne @ 0x1408A503C (PipDmgInitPhaseOne.c)
 *     PopInitializeAdpm @ 0x1408A5E40 (PopInitializeAdpm.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x1408B1178 (ExInitializeTimeRefresh.c)
 *     PiDeviceDependencyInit @ 0x1408BBDBC (PiDeviceDependencyInit.c)
 *     SepInitializeWorkList @ 0x1408BD584 (SepInitializeWorkList.c)
 *     FsRtlInitSystem @ 0x1408C1C40 (FsRtlInitSystem.c)
 *     SepRmDbInitialization @ 0x1408C3D58 (SepRmDbInitialization.c)
 *     PpInitSystem @ 0x1408C8AC4 (PpInitSystem.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x1408C9E2C (WmipGetSMBiosFromLoaderBlock.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     RtlStdLogStackTrace @ 0x140286898 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1402868F0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140286BD8 (RtlpStdGetRecordedStackTraceIndex.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1402B18AC (PerfLogExecutiveResourceInitialize.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  KSPIN_LOCK *v8; // rsi
  unsigned __int16 v9; // di
  __int64 v10; // rbp
  int RecordedStackTraceIndex; // eax
  int v12; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  v2 = 0LL;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v8 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v10 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v10 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v8);
        v9 = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v8, v10);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = 0;
    }
    v2 = v9;
  }
  Resource->CreatorBackTraceIndex = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&ExpResourceSpinLock, CurrentIrql);
  v4 = (struct _LIST_ENTRY *)qword_14039EDA8;
  if ( *(__int64 **)qword_14039EDA8 != &ExpSystemResourcesList )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&ExpSystemResourcesList;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_14039EDA8 = (__int64)Resource;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v12;
      if ( !v12 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x6358u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
