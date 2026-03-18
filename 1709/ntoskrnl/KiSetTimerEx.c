/*
 * XREFs of KiSetTimerEx @ 0x1400E1F70
 * Callers:
 *     PfSnStartTraceTimer @ 0x140010720 (PfSnStartTraceTimer.c)
 *     PfSnTraceTimerRoutine @ 0x140011BB0 (PfSnTraceTimerRoutine.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     PopSetWatchdog @ 0x1400B1A00 (PopSetWatchdog.c)
 *     PopEnableIrpWatchdog @ 0x1400B3804 (PopEnableIrpWatchdog.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x1400E1F50 (KeSetTimer.c)
 *     PpmEndHighPerfRequest @ 0x14015B7B4 (PpmEndHighPerfRequest.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14020B154 (KiInvokeInterruptServiceRoutine.c)
 *     PfpServiceMainThreadBoost @ 0x140239740 (PfpServiceMainThreadBoost.c)
 *     PopCoalescingSetTimer @ 0x140240ED8 (PopCoalescingSetTimer.c)
 *     PfSnBeginBootPhase @ 0x140429124 (PfSnBeginBootPhase.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1404311D8 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 *     PfSnPowerBoost @ 0x140443BEC (PfSnPowerBoost.c)
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     PiDrvDbUnloadNode @ 0x140533FE8 (PiDrvDbUnloadNode.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140572010 (SmProcessStoreMemoryPriorityRequest.c)
 *     CmpDelayFreeCmRm @ 0x140597CC8 (CmpDelayFreeCmRm.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 *     PpmWmiDispatch @ 0x1405DABB0 (PpmWmiDispatch.c)
 *     PopUserPresentSetWorker @ 0x1405EED00 (PopUserPresentSetWorker.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1405EF37C (PfSnQueueEnablePrefetcherTimer.c)
 *     PopSetExecutionRequiredTimer @ 0x1405F17F8 (PopSetExecutionRequiredTimer.c)
 *     CmpLazyCommitWorker @ 0x140693FA0 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x140694210 (CmpQueueLazyCommitWorker.c)
 *     CmSetLazyFlushState @ 0x14069430C (CmSetLazyFlushState.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406AE390 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x1406C0840 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1406FD890 (PopSetSystemAwayMode.c)
 *     PoUserShutdownInitiated @ 0x1406FDA60 (PoUserShutdownInitiated.c)
 *     PopQueueBatteryStatusTimeout @ 0x1406FEEFC (PopQueueBatteryStatusTimeout.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407014E4 (PopDiagNextCsSleepStudySession.c)
 *     PopDiagStopCsSleepStudySession @ 0x1407016F4 (PopDiagStopCsSleepStudySession.c)
 *     TtmpResetEvaluationTimer @ 0x14070ECC4 (TtmpResetEvaluationTimer.c)
 *     WheapSqmWaitWorkerRoutine @ 0x140764810 (WheapSqmWaitWorkerRoutine.c)
 *     KdpTimeSlipWork @ 0x1407989B0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x1407B3D88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1407B8778 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x1407BE2EC (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1407BE730 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x14084F17C (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiInsertTimerTable @ 0x14006FA60 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     KiCancelTimer @ 0x1400E22F0 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x14020CA7C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
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
LABEL_10:
      KiTimerWaitTest((__int64)CurrentPrcb, a1, 0LL);
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
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, a1, a5, BYTE2(v17), 0LL) )
    goto LABEL_10;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_7:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v13;
}
