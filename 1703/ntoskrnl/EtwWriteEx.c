/*
 * XREFs of EtwWriteEx @ 0x140094690
 * Callers:
 *     EtwpTraceFileName @ 0x140028630 (EtwpTraceFileName.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400295DC (PoTraceSystemTimerResolutionKernel.c)
 *     EtwWriteTransfer @ 0x140030E20 (EtwWriteTransfer.c)
 *     PnpDiagnosticTrace @ 0x140033764 (PnpDiagnosticTrace.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140034DD8 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140034FA8 (PopThermalTraceRundownEvents.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140036914 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     PopTraceSystemIdleTimeReset @ 0x14003A080 (PopTraceSystemIdleTimeReset.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14003B694 (PoTraceSystemTimerResolutionUpdate.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140044B84 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     PpmPerfSelectProcessorState @ 0x1400461B0 (PpmPerfSelectProcessorState.c)
 *     PpmPerfRecordUtility @ 0x140046730 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140046970 (PpmParkRecordNodeStatistics.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140068680 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceFxDevicePowered @ 0x140068E00 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400697F8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140069C1C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x140069FFC (PopPepWork.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14006FB40 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x14006FC74 (PpmEventTraceFailedPerfCheckStart.c)
 *     PopDiagTraceIdleCheck @ 0x140071288 (PopDiagTraceIdleCheck.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopDiagTracePowerRequestChange @ 0x140072404 (PopDiagTracePowerRequestChange.c)
 *     EtwTraceMemoryAcg @ 0x14007D6F8 (EtwTraceMemoryAcg.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x140081D20 (_TlgWriteAgg.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250 (PpmCheckSnapAllDeliveredPerformance.c)
 *     IoReuseIrp @ 0x14012C360 (IoReuseIrp.c)
 *     PpmMediaBufferingWorker @ 0x140130970 (PpmMediaBufferingWorker.c)
 *     PoLatencySensitivityHint @ 0x140130BD0 (PoLatencySensitivityHint.c)
 *     IoTransferActivityId @ 0x140135F30 (IoTransferActivityId.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140138514 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14013D0C4 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceIrpFinish @ 0x140144E20 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401450B0 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140146604 (PopDiagTraceIrpStart.c)
 *     PpmEventArbitratorPerfStateChange @ 0x140146EBC (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x140147068 (PpmEventTraceExpectedUtility.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140148E30 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopDiagTraceSetSystemState @ 0x14014AD5C (PopDiagTraceSetSystemState.c)
 *     PpmEventDomainPerfStateChange @ 0x14014B088 (PpmEventDomainPerfStateChange.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14014B18C (PopDiagTraceFxComponentIdleState.c)
 *     KiIntSteerLogState @ 0x14014C888 (KiIntSteerLogState.c)
 *     BapdWriteEtwEvents @ 0x14014CABC (BapdWriteEtwEvents.c)
 *     Template_zzjzzzqq @ 0x14014FF80 (Template_zzjzzzqq.c)
 *     Template_zzjzzztzqzztqz @ 0x14015013C (Template_zzjzzztzqzztqz.c)
 *     IopLogEventIoMgrMountBegin @ 0x1401510C0 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x1401511BC (IopLogEventIoMgrMountSucceeded.c)
 *     KsepEvntLogShimsApplied @ 0x140153258 (KsepEvntLogShimsApplied.c)
 *     IopLogEventIoMgrMountFailed @ 0x14015378C (IopLogEventIoMgrMountFailed.c)
 *     PnpDiagnosticTraceElamDecision @ 0x140153CD8 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140153DA8 (PnpDiagnosticTraceElamStatus.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140163C1C (EtwTraceJobServerSiloMonitorCallback.c)
 *     PoFxSetComponentLatency @ 0x140165020 (PoFxSetComponentLatency.c)
 *     PoFxSetComponentResidency @ 0x140167970 (PoFxSetComponentResidency.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1401689E4 (PopDiagTraceThermalZoneEnumeration.c)
 *     KsepEvntLogFlagsApplied @ 0x140169014 (KsepEvntLogFlagsApplied.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1401E2304 (DbgkpLkmdSqmIncrementDword.c)
 *     Template_jq @ 0x1401E4118 (Template_jq.c)
 *     Template_xxxqq @ 0x1401E4198 (Template_xxxqq.c)
 *     Template_xxxqqqq @ 0x1401E4254 (Template_xxxqqqq.c)
 *     HvlpWriteEventLog @ 0x1401EB614 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x1401F5E60 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1401F5EA4 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x1401F5F78 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401F6064 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401F6190 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401F6238 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x1401F6298 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x1401F62F0 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1401F6348 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401F63A4 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1401F6438 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1401F6490 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x1401F6B00 (SecureDump_LogErrorEvent.c)
 *     Template_qzq @ 0x1401F793C (Template_qzq.c)
 *     Template_hzr0 @ 0x1401F81BC (Template_hzr0.c)
 *     Template_hzr0qqhzr4 @ 0x1401F8248 (Template_hzr0qqhzr4.c)
 *     Template_z @ 0x1401F8D2C (Template_z.c)
 *     Template_j @ 0x1401F8DC8 (Template_j.c)
 *     Template_zjqq @ 0x1401F8E68 (Template_zjqq.c)
 *     Template_p @ 0x1401F9090 (Template_p.c)
 *     Template_pqzzzzzzz @ 0x1401F9104 (Template_pqzzzzzzz.c)
 *     Template_zzjzxtq @ 0x1401F9AC4 (Template_zzjzxtq.c)
 *     Template_zq @ 0x1401F9D1C (Template_zq.c)
 *     Template_jzt @ 0x1401FAB40 (Template_jzt.c)
 *     Template_q @ 0x1401FAC14 (Template_q.c)
 *     Template_qz @ 0x1401FAC80 (Template_qz.c)
 *     Template_zzt @ 0x1401FAD44 (Template_zzt.c)
 *     Template_pz @ 0x1401FAE44 (Template_pz.c)
 *     Template_qhzr1z @ 0x1401FAF04 (Template_qhzr1z.c)
 *     KiIntSteerLogStatus @ 0x14020587C (KiIntSteerLogStatus.c)
 *     KsepDsEventAddDevice @ 0x140208C50 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x140208D78 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x140208E70 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x140208F54 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14020906C (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14020916C (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x140209240 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x1402092FC (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14020940C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140209504 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x1402095E8 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x1402096CC (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x1402097C8 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402098A0 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1402099A8 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x140209B0C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140209C0C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14022F9D8 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14022FAC8 (PoTraceDynamicTickDisabled.c)
 *     PopDiagTraceAbnormalReset @ 0x140230528 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x1402305C8 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402306E0 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402308F0 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x140230A50 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x140230B0C (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x140230BE8 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140230CA4 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140230E78 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x14023119C (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140231260 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentWake @ 0x140231354 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140231450 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140231530 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x140231614 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x140231758 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x140231868 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140231960 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140231A48 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140231AF8 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140231BB4 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140231D68 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140231E08 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140231F50 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402320AC (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x140232170 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140232260 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x1402322F8 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140232414 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140232544 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140235420 (PpmEventBiosCapChange.c)
 *     PpmEventComputeEnergy @ 0x140235514 (PpmEventComputeEnergy.c)
 *     PpmEventCoreParkingStateChange @ 0x14023565C (PpmEventCoreParkingStateChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1402357EC (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x140235964 (PpmEventLPICoreParking.c)
 *     PpmEventParkNodePreference @ 0x140235B08 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x140235C30 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x140235D08 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x140235EC8 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x140235FD8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x1402361DC (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140236340 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402364C0 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1402365B8 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x140236770 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x140236840 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402368A4 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140236A80 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopSqmAddToStream @ 0x1402384AC (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     SmEtwLogRegionOp @ 0x14024D7AC (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14024D878 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14024D98C (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x14024DA58 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x14024E070 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x14024FD64 (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x140253F50 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1402541D0 (EtwpLogMemInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x140254378 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x140254710 (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x140255580 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x140255744 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x14025EA90 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x140260518 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x140260598 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x140260678 (WheapLogProcessTerminateEvent.c)
 *     WheapSqmDwordCommon @ 0x1402610EC (WheapSqmDwordCommon.c)
 *     EtwpPsProvTraceImage @ 0x140594E68 (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x140701CD4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140701E08 (SmKmEtwLogStoreStats.c)
 *     EtwpTraceSystemInitialization @ 0x140811798 (EtwpTraceSystemInitialization.c)
 *     BapdpRecordIumStatus @ 0x14081252C (BapdpRecordIumStatus.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140825780 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x14083523C (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS v11; // r10d
  __int64 v12; // rax
  _WORD *v13; // rdi
  PEVENT_DATA_DESCRIPTOR v14; // rsi
  ULONG v15; // ebp
  GUID *v16; // r14
  GUID *v17; // r15
  unsigned __int64 Keyword; // r8
  __int64 Level; // rdx
  LONG *v21; // r9
  unsigned __int8 v22; // r11
  __int64 v23; // r9
  unsigned __int8 v24; // r11
  __int64 v25; // [rsp+90h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp-40h]
  unsigned __int64 v27; // [rsp+E0h] [rbp+8h] BYREF
  ULONG64 v28; // [rsp+F0h] [rbp+18h]

  v28 = Filter;
  v27 = 0LL;
  v11 = 0;
  v25 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v12 = *(_QWORD *)(RegHandle + 104);
  if ( v12 )
    v13 = (_WORD *)(v12 + 28);
  else
    v13 = 0LL;
  v14 = UserData;
  v15 = UserDataCount;
  v16 = (GUID *)RelatedActivityId;
  v17 = (GUID *)ActivityId;
  if ( *(_BYTE *)(RegHandle + 100) )
  {
    Keyword = EventDescriptor->Keyword;
    Level = EventDescriptor->Level;
    v26 = *(_QWORD **)(RegHandle + 32);
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(v26 + 10, Level, Keyword) )
      v11 = EtwpEventWriteFull(
              v26,
              v22,
              v28,
              Flags,
              (__int16 *)EventDescriptor,
              (__int16)v21,
              (__int16)v21,
              v17,
              v16,
              v15,
              (__int64)v14,
              v21,
              &v25,
              (__int64)v21,
              *(_BYTE *)(RegHandle + 102),
              v13,
              &v27);
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(RegHandle + 40) + 80LL,
                            EventDescriptor->Level,
                            EventDescriptor->Keyword) )
      return EtwpEventWriteFull(
               *(_QWORD **)(RegHandle + 32),
               v24,
               v28,
               Flags,
               (__int16 *)EventDescriptor,
               0,
               0,
               v17,
               v16,
               v15,
               (__int64)v14,
               0LL,
               &v25,
               v23,
               *(_BYTE *)(RegHandle + 102),
               v13,
               &v27);
  }
  return v11;
}
