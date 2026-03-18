/*
 * XREFs of KiSetTimerEx @ 0x14005AB60
 * Callers:
 *     KeSetTimer @ 0x14005A670 (KeSetTimer.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     PopSetWatchdog @ 0x1400754B0 (PopSetWatchdog.c)
 *     PnpEnableWatchdog @ 0x1400757B4 (PnpEnableWatchdog.c)
 *     PfSnTraceTimerRoutine @ 0x1400C4150 (PfSnTraceTimerRoutine.c)
 *     PfSnStartTraceTimer @ 0x1400C96BC (PfSnStartTraceTimer.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     PfpServiceMainThreadBoost @ 0x1401559D8 (PfpServiceMainThreadBoost.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 *     PopEnableIrpWatchdog @ 0x1401678D8 (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x14016DFB4 (PpmEndHighPerfRequest.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402494EC (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x14024F838 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x14027846C (PopCoalescingSetTimer.c)
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140471260 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 *     PfSnBeginBootPhase @ 0x14047892C (PfSnBeginBootPhase.c)
 *     PfSnPowerBoost @ 0x14048C930 (PfSnPowerBoost.c)
 *     CmpDelayFreeCmRm @ 0x14054E814 (CmpDelayFreeCmRm.c)
 *     PiDrvDbUnloadNode @ 0x1405653D8 (PiDrvDbUnloadNode.c)
 *     PopQueueBatteryStatusTimeout @ 0x1405EA7B8 (PopQueueBatteryStatusTimeout.c)
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x1405EF43C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x1406145B0 (PopUserPresentSetWorker.c)
 *     CmpCmdInit @ 0x140627EE8 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x14064A790 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x140654B28 (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x140655414 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x1406F68BC (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1406F7190 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x1406F740C (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140712C40 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x140726280 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x140762D10 (PopSetSystemAwayMode.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407658EC (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x140765B10 (PopDiagStopCsSleepStudySession.c)
 *     TtmpResetEvaluationTimer @ 0x140772424 (TtmpResetEvaluationTimer.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1407CC4F0 (WheapSqmWaitWorkerRoutine.c)
 *     KdpTimeSlipWork @ 0x140805A90 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140820F38 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140825A08 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x14082B738 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14082BB90 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x1408C05BC (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiCancelTimer @ 0x14005B820 (KiCancelTimer.c)
 *     KiInsertTimerTable @ 0x1400F87E0 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x14024ADF0 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v9; // rsi
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rax
  volatile signed __int32 v17; // [rsp+30h] [rbp-48h]

  v9 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(a1, 0LL);
  *(_QWORD *)(a1 + 48) = v9;
  v13 = v12;
  *(_DWORD *)(a1 + 60) = a3;
  v17 = *(_DWORD *)a1;
  BYTE1(v17) = a4;
  if ( a2 >= 0 )
  {
    a4 |= 1u;
    BYTE1(v17) = a4;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v17;
      *(_QWORD *)(a1 + 24) = 0LL;
LABEL_8:
      KiTimerWaitTest(CurrentPrcb, a1, 0LL);
      goto LABEL_7;
    }
  }
  v14 = 0LL;
  if ( a4 >= 4u )
    v14 = (unsigned __int8)(a4 & 0xFC) << 16;
  HIBYTE(v17) |= 0x40u;
  v15 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v17) = (unsigned __int64)(v14 + v15) >> 18;
  *(_DWORD *)a1 = v17;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, a5, BYTE2(v17), 0LL) )
    goto LABEL_8;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_7:
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v13;
}
