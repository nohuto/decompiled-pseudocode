/*
 * XREFs of EtwWriteEx @ 0x1400EF860
 * Callers:
 *     PoTraceSystemTimerResolutionKernel @ 0x140005A68 (PoTraceSystemTimerResolutionKernel.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x140005E40 (PoTraceSystemTimerResolutionUpdate.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KeIntSteerPeriodic @ 0x140034710 (KeIntSteerPeriodic.c)
 *     PpmCheckStart @ 0x1400356C0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x1400367B0 (PpmCheckRun.c)
 *     PpmCheckComputeEnergy @ 0x140036C30 (PpmCheckComputeEnergy.c)
 *     PpmPerfSelectProcessorState @ 0x140037040 (PpmPerfSelectProcessorState.c)
 *     PpmPerfRecordUtility @ 0x1400374B0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400376E0 (PpmParkRecordNodeStatistics.c)
 *     EtwTraceMemoryAcg @ 0x1400625A0 (EtwTraceMemoryAcg.c)
 *     _TlgWriteAgg @ 0x14006F11C (_TlgWriteAgg.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x140073340 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x140073454 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140073770 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopScanIdleList @ 0x140073E84 (PopScanIdleList.c)
 *     PopDiagTraceIdleCheck @ 0x140074D00 (PopDiagTraceIdleCheck.c)
 *     PopDiagTracePowerRequestChange @ 0x1400765E8 (PopDiagTracePowerRequestChange.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1400775EC (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopDiagTraceFxDevicePowered @ 0x140077AC0 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140077EDC (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400785AC (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopPepWork @ 0x1400789D0 (PopPepWork.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140079E34 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     _TlgWriteEx @ 0x14007A058 (_TlgWriteEx.c)
 *     EtwWriteTransfer @ 0x140084450 (EtwWriteTransfer.c)
 *     IoReuseIrp @ 0x1400A60A0 (IoReuseIrp.c)
 *     SeLogAccessFailure @ 0x1400B1D20 (SeLogAccessFailure.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 *     PnpDiagnosticTraceObject @ 0x1400C8D00 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400C8E84 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     PopTraceSystemIdleTimeReset @ 0x1400CF724 (PopTraceSystemIdleTimeReset.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1400D0C8C (PpmEventTraceFailedPerfCheckStart.c)
 *     PopThermalTraceRundownEvents @ 0x1400D20A8 (PopThermalTraceRundownEvents.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140109130 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140109AF0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmMediaBufferingWorker @ 0x140144040 (PpmMediaBufferingWorker.c)
 *     PoLatencySensitivityHint @ 0x140144140 (PoLatencySensitivityHint.c)
 *     McGenEventWriteKM @ 0x14014761C (McGenEventWriteKM.c)
 *     IoTransferActivityId @ 0x14014B850 (IoTransferActivityId.c)
 *     PnpDiagnosticTrace @ 0x14014BFEC (PnpDiagnosticTrace.c)
 *     PopDiagTraceRtcWakeInfo @ 0x14014E370 (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14015543C (PopDiagTraceSessionDisplayStateChange.c)
 *     IopLogEventIoMgrMountBegin @ 0x14015C5D8 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14015C6D4 (IopLogEventIoMgrMountSucceeded.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     IopLogEventIoMgrMountFailed @ 0x14015E290 (IopLogEventIoMgrMountFailed.c)
 *     KsepLogEtwMessage @ 0x140161AF4 (KsepLogEtwMessage.c)
 *     PopDiagTraceIrpFinish @ 0x140166264 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401666C8 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x140166C98 (PopDiagTraceDeviceReleaseIrp.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x140166D94 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceIrpStart @ 0x1401679AC (PopDiagTraceIrpStart.c)
 *     PnpTraceInterruptUsage @ 0x140168E28 (PnpTraceInterruptUsage.c)
 *     KiIntSteerLogState @ 0x140169544 (KiIntSteerLogState.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14016B004 (PopBatteryTraceSystemBatteryStatus.c)
 *     PpmEventArbitratorPerfStateChange @ 0x14016BC04 (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14016BDAC (PpmEventTraceExpectedUtility.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14016D564 (PopDiagTraceFxComponentIdleState.c)
 *     PopDiagTraceSetSystemState @ 0x14016DC30 (PopDiagTraceSetSystemState.c)
 *     PpmEventDomainPerfStateChange @ 0x14016E5E4 (PpmEventDomainPerfStateChange.c)
 *     BapdWriteEtwEvents @ 0x14016E868 (BapdWriteEtwEvents.c)
 *     KsepEvntLogFlagsApplied @ 0x1401706C0 (KsepEvntLogFlagsApplied.c)
 *     EtwpTraceFileName @ 0x140177690 (EtwpTraceFileName.c)
 *     PnpDiagnosticTraceElamDecision @ 0x1401795C4 (PnpDiagnosticTraceElamDecision.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140179690 (PnpDiagnosticTraceElamStatus.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140180FA0 (PopDiagTraceThermalZoneEnumeration.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1401822E8 (EtwTraceJobServerSiloMonitorCallback.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x140223B28 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x14022DACC (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x140232848 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x140238980 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1402389C4 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140238A98 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140238B84 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140238CAC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140238D54 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140238DB4 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140238E0C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140238E64 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140238EC0 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140238F54 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140238FAC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x1402396C0 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14024A018 (KiIntSteerLogStatus.c)
 *     KsepEvntLogShimsApplied @ 0x14024D0F8 (KsepEvntLogShimsApplied.c)
 *     KsepDsEventAddDevice @ 0x14024DB90 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x14024DCB8 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x14024DDB0 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x14024DE94 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14024DFAC (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14024E0AC (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x14024E180 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x14024E23C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14024E34C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x14024E444 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x14024E528 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x14024E60C (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x14024E708 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x14024E7E0 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x14024E8E8 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14024EADC (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14024EBDC (KsepSkipDriverUnloadEventDriverUnload.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x14027A970 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x14027AA60 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x14027AB04 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x14027AC1C (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x14027B688 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x14027B728 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14027B83C (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x14027B934 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14027BB30 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14027BC94 (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14027BD50 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x14027BE2C (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14027BEE8 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x14027C228 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x14027C2E4 (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentLatency @ 0x14027C3D8 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14027C4C4 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14027C5B0 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14027C6AC (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x14027C870 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14027CA18 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x14027CB60 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x14027CC78 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x14027CD70 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14027CE58 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14027CF08 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14027D0E8 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14027D28C (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x14027D32C (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14027D3CC (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14027D514 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x14027D674 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceShutdownAction @ 0x14027D738 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14027D824 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x14027D8CC (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14027D9EC (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14027DB1C (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventAutonomousModeChange @ 0x140280400 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x1402804F4 (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingStateChange @ 0x14028066C (PpmEventCoreParkingStateChange.c)
 *     PpmEventIdleDurationExpiration @ 0x1402807FC (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14028096C (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x140280A2C (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x140280B18 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x140280C40 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x140280D18 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x140280ED8 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x140280FE8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x1402811E8 (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x14028134C (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402814C8 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1402815C0 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x140281764 (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14028182C (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x140281890 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x140281A60 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVpQosChange @ 0x140281D00 (PpmEventVpQosChange.c)
 *     PopSqmAddToStream @ 0x1402832F4 (PopSqmAddToStream.c)
 *     EtwpTraceAdminlessAccessFailure @ 0x14029F68C (EtwpTraceAdminlessAccessFailure.c)
 *     EtwpTraceLpacAccessFailure @ 0x14029F738 (EtwpTraceLpacAccessFailure.c)
 *     SmEtwLogRegionOp @ 0x1402A6D24 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1402A6DF0 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x1402A6F28 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1402A6FF4 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x1402A7610 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1402A9460 (SmKmSqmAddToStream.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402AF574 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwpFileProvTrace @ 0x1402AF85C (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x1402AFB10 (EtwpLogMemInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x1402AFCC4 (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x1402B0084 (EtwpPsProvTracePriority.c)
 *     SeEtwWriteKMCveEvent @ 0x1402B0F70 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x1402B11AC (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1402BC930 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x1402BF7B8 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1402BF838 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x1402BF918 (WheapLogProcessTerminateEvent.c)
 *     WheapSqmDwordCommon @ 0x1402C03A8 (WheapSqmDwordCommon.c)
 *     EtwpPsProvTraceImage @ 0x1404B7A1C (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x14079CFD4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14079D108 (SmKmEtwLogStoreStats.c)
 *     BapdpRecordIumStatus @ 0x1408A5094 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x1408A5194 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1408C9030 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x1408E1128 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  int v8; // r13d
  NTSTATUS v12; // r9d
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdi
  __int64 v17; // r10
  unsigned __int64 Keyword; // r8
  unsigned __int8 v19; // al
  unsigned __int8 v20; // r10
  __int64 v21; // r11
  __int64 v22; // [rsp+90h] [rbp-78h] BYREF
  PEVENT_DATA_DESCRIPTOR v23; // [rsp+98h] [rbp-70h]
  _BYTE v24[32]; // [rsp+A0h] [rbp-68h] BYREF

  v8 = Filter;
  v23 = UserData;
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  v12 = 0;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = *(unsigned __int8 *)(RegHandle + 100);
  v15 = v13 + 28;
  if ( !v13 )
    v15 = 0LL;
  if ( (_BYTE)v14 )
  {
    v17 = *(_QWORD *)(RegHandle + 32);
    Keyword = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v17 + 80) )
    {
      v19 = *(_BYTE *)(v17 + 84);
      if ( (EventDescriptor->Level <= v19 || !v19)
        && ((*(_DWORD *)(v17 + 88) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v17 + 96)) != 0 && (Keyword & *(_QWORD *)(v17 + 104)) == *(_QWORD *)(v17 + 104)) )
      {
        v12 = EtwpEventWriteFull(
                v17,
                v14,
                v8,
                Flags,
                (__int64)EventDescriptor,
                0,
                0,
                (__int64)ActivityId,
                (__int64)RelatedActivityId,
                UserDataCount,
                (__int64)v23,
                0LL,
                (__int64)v24,
                0LL,
                *(_WORD *)(RegHandle + 98),
                v15,
                (__int64)&v22);
      }
    }
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(RegHandle + 40) + 80LL,
                            EventDescriptor->Level,
                            EventDescriptor->Keyword) )
      return EtwpEventWriteFull(
               *(_QWORD *)(RegHandle + 32),
               v20,
               v8,
               Flags,
               (__int64)EventDescriptor,
               0,
               0,
               (__int64)ActivityId,
               (__int64)RelatedActivityId,
               UserDataCount,
               (__int64)v23,
               0LL,
               (__int64)v24,
               v21,
               *(_WORD *)(RegHandle + 98),
               v15,
               (__int64)&v22);
  }
  return v12;
}
