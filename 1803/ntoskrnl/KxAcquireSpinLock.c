/*
 * XREFs of KxAcquireSpinLock @ 0x1400347F0
 * Callers:
 *     ExpTimerApcRoutine @ 0x140001DA0 (ExpTimerApcRoutine.c)
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     KeIntSteerPeriodic @ 0x140034710 (KeIntSteerPeriodic.c)
 *     PpmIdleSnapConcurrency @ 0x140035D70 (PpmIdleSnapConcurrency.c)
 *     PspGetProperty @ 0x140037DA0 (PspGetProperty.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14003830C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiScheduleNextForegroundBoost @ 0x14003A994 (KiScheduleNextForegroundBoost.c)
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     ExpCancelTimer @ 0x14005AA70 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     KiProcessPendingForegroundBoosts @ 0x14006B340 (KiProcessPendingForegroundBoosts.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14006ED00 (PspProcessUnbindVirtualizedTimers.c)
 *     PspSetProcessFreezeStateCallback @ 0x14008A720 (PspSetProcessFreezeStateCallback.c)
 *     KeSetSystemAllowedCpuSets @ 0x1400A69AC (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1400B6A10 (IopCancelIrpsInCurrentThreadList.c)
 *     KiInsertTimer2 @ 0x1400BBA54 (KiInsertTimer2.c)
 *     PsRemoveVirtualizedTimer @ 0x1400C0160 (PsRemoveVirtualizedTimer.c)
 *     PsInsertVirtualizedTimer @ 0x1400C3F10 (PsInsertVirtualizedTimer.c)
 *     PfSnTraceTimerRoutine @ 0x1400C4150 (PfSnTraceTimerRoutine.c)
 *     ExpTimerPause @ 0x1400C9404 (ExpTimerPause.c)
 *     KeAcquireInterruptSpinLock @ 0x1400C95C0 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerDpcRoutine @ 0x1400CD640 (ExpTimerDpcRoutine.c)
 *     CmpLazyFlushDpcRoutine @ 0x1400CDA50 (CmpLazyFlushDpcRoutine.c)
 *     FsRtlUninitializeFileLock @ 0x1400D1250 (FsRtlUninitializeFileLock.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x1400D1E80 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     EtwpLockUnlockBufferList @ 0x1400D3E98 (EtwpLockUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400D4514 (EtwpLockBufferList.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     PoNotifyMediaBuffering @ 0x140144310 (PoNotifyMediaBuffering.c)
 *     ExWakeTimersPause @ 0x14014DD10 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14014DF48 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x140155C60 (PfpPowerActionDpcRoutine.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140169850 (KeRegisterBugCheckReasonCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14016B97C (PpmPerfApplyProcessorState.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x14016C630 (KeDeregisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140175FAC (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x14017D3BC (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x14017F278 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1401805B0 (PpmInstallNewIdleStates.c)
 *     KeRegisterBugCheckCallback @ 0x140184E90 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x140186DD4 (KdDisableDebuggerWithLock.c)
 *     sub_14019FC10 @ 0x14019FC10 (sub_14019FC10.c)
 *     KeSynchronizeExecution @ 0x1401ABF90 (KeSynchronizeExecution.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1402250D0 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x140231900 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14023B184 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14023B1B0 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x14023E420 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x14023E4F0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x14023E5C0 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x14023E5EC (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x14023E74C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x14023E890 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x140242670 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x1402426F0 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140243820 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140244A8C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x140244AE8 (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x14024531C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x140246DA8 (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     KiEpfComplete @ 0x14024B0D0 (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x14024B234 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14024B2D4 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140273008 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x1402731E0 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1402735D0 (PpmRemoveIdleStates.c)
 *     PoSetProcessorQoS @ 0x140277C7C (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x140279AF8 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14027A4B0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPowerButtonTimerCallback @ 0x14027FB60 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1402B40B4 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1402B4280 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1402B5B78 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x1402BAF2C (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x14047B0A4 (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x140481658 (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x14082B944 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14082BA60 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14082BB90 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __stdcall KxAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v4; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented();
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v4 = SchedulerAssist[5];
        SchedulerAssist[5] = v4 + 1;
        if ( v4 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      KxWaitForSpinLockAndAcquire(SpinLock);
    }
  }
}
