/*
 * XREFs of KiSetTimerEx @ 0x14004D040
 * Callers:
 *     PfSnTraceTimerRoutine @ 0x14002E5D0 (PfSnTraceTimerRoutine.c)
 *     KeSetTimer @ 0x14004CFD0 (KeSetTimer.c)
 *     KeSetTimerEx @ 0x14004CFF0 (KeSetTimerEx.c)
 *     PopSetWatchdog @ 0x14006FDA8 (PopSetWatchdog.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     PfSnStartTraceTimer @ 0x14012D018 (PfSnStartTraceTimer.c)
 *     PfpServiceMainThreadBoost @ 0x14013D78C (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x140146530 (PopEnableIrpWatchdog.c)
 *     PoClearPowerRequestInternalDeferred @ 0x14014AFAC (PoClearPowerRequestInternalDeferred.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140204F5C (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetTimer @ 0x14022D97C (PopCoalescingSetTimer.c)
 *     PfSnBeginBootPhase @ 0x140404E20 (PfSnBeginBootPhase.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140409CB8 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopBuildDeviceNotifyList @ 0x14040AE30 (PopBuildDeviceNotifyList.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140447BB0 (SmProcessStoreMemoryPriorityRequest.c)
 *     PfSnPowerBoost @ 0x140467398 (PfSnPowerBoost.c)
 *     PiDrvDbUnloadNode @ 0x140489BB8 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x1404CA7C4 (CmpDelayFreeCmRm.c)
 *     PoUserShutdownInitiated @ 0x1405768F0 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x1405779D8 (CmSetLazyFlushState.c)
 *     PopQueueBatteryStatusTimeout @ 0x140577C0C (PopQueueBatteryStatusTimeout.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x140586600 (PopUserPresentSetWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 *     PpmWmiDispatch @ 0x1405C71C0 (PpmWmiDispatch.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1405D5BA4 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x1406689BC (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x140669230 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x1406694A0 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406830A0 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x140694A70 (IopDeviceRemovalForResetComplete.c)
 *     PopCsStateChanged @ 0x1406C5874 (PopCsStateChanged.c)
 *     PopSetSystemAwayMode @ 0x1406CA0E0 (PopSetSystemAwayMode.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406CC0BC (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1406CC424 (PopDiagStopCsSleepStudySession.c)
 *     TtmpResetEvaluationTimer @ 0x1406D8934 (TtmpResetEvaluationTimer.c)
 *     WheapSqmWaitWorkerRoutine @ 0x140724D40 (WheapSqmWaitWorkerRoutine.c)
 *     ViPendingDelayCompletion @ 0x140771FE0 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140776988 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x14077C3C4 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14077C7F0 (ViWdIrpTimerDpcRoutine.c)
 *     KdpTimeSlipWork @ 0x14078B790 (KdpTimeSlipWork.c)
 *     PfSnInitializePrefetcher @ 0x14081DD1C (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiCancelTimer @ 0x14004D1D0 (KiCancelTimer.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400EC830 (KiInsertTimerTable.c)
 *     KiTraceSetTimer @ 0x1402064DC (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
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
  if ( (a4 & 0xFC) != 0 )
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
