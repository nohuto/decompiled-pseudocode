/*
 * XREFs of EtwWriteEx @ 0x140087CE0
 * Callers:
 *     KeIntSteerPeriodic @ 0x140002920 (KeIntSteerPeriodic.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14000A210 (PoTraceSystemTimerResolutionUpdate.c)
 *     PpmMediaBufferingWorker @ 0x14000D2B0 (PpmMediaBufferingWorker.c)
 *     PoLatencySensitivityHint @ 0x14000DB40 (PoLatencySensitivityHint.c)
 *     PopThermalTraceRundownEvents @ 0x14000EDE8 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x14000F374 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     PpmCheckComputeEnergy @ 0x14008F1B0 (PpmCheckComputeEnergy.c)
 *     PpmCheckRun @ 0x14008F490 (PpmCheckRun.c)
 *     PpmPerfSelectProcessorState @ 0x140090780 (PpmPerfSelectProcessorState.c)
 *     PpmPerfRecordUtility @ 0x140091890 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140093020 (PpmParkRecordNodeStatistics.c)
 *     PpmPerfAction @ 0x1400953A0 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140095700 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     EtwTraceMemoryAcg @ 0x1400A67AC (EtwTraceMemoryAcg.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1400AEFF4 (PopDiagTraceClearDeepSleepConstraint.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1400AF0C8 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDiagTraceIdleCheck @ 0x1400B11F8 (PopDiagTraceIdleCheck.c)
 *     PopScanIdleList @ 0x1400B1278 (PopScanIdleList.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400B1934 (PopDiagTraceSystemLatencyUpdate.c)
 *     PnpTraceInterruptUsage @ 0x1400B2DC0 (PnpTraceInterruptUsage.c)
 *     KiIntSteerLogState @ 0x1400B3634 (KiIntSteerLogState.c)
 *     PopDiagTraceIrpStart @ 0x1400B3A64 (PopDiagTraceIrpStart.c)
 *     IoReuseIrp @ 0x1400B4070 (IoReuseIrp.c)
 *     EtwWriteTransfer @ 0x1400B4B70 (EtwWriteTransfer.c)
 *     PopDiagTracePowerRequestChange @ 0x1400B50DC (PopDiagTracePowerRequestChange.c)
 *     _TlgWriteAgg @ 0x1400BA394 (_TlgWriteAgg.c)
 *     PpmCheckStart @ 0x1400E4720 (PpmCheckStart.c)
 *     KsepLogEtwMessage @ 0x1400FA08C (KsepLogEtwMessage.c)
 *     PnpDiagnosticTraceObject @ 0x1400FBA44 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x1400FCD14 (PnpDiagnosticTrace.c)
 *     PopPepWork @ 0x1400FD200 (PopPepWork.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400FD544 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400FD990 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FDDE8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400FE378 (PopDiagTraceFxComponentLogicalCondition.c)
 *     SeLogAccessFailure @ 0x140113BC0 (SeLogAccessFailure.c)
 *     PopDiagTraceIrpFinish @ 0x140123260 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140123484 (PopDiagTraceFxDevicePowerState.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoTransferActivityId @ 0x140127F40 (IoTransferActivityId.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x140129D34 (PpmEventTraceFailedPerfCheckStart.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x14012A91C (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceDeviceReleaseIrp @ 0x14012A9D8 (PopDiagTraceDeviceReleaseIrp.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14012C3A8 (PoTraceSystemTimerResolutionKernel.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14012D114 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PopTraceSystemIdleTimeReset @ 0x14012EC88 (PopTraceSystemIdleTimeReset.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140131F40 (PopDiagTraceFxComponentIdleState.c)
 *     McGenEventWriteKM @ 0x140133874 (McGenEventWriteKM.c)
 *     BapdWriteEtwEvents @ 0x1401342D8 (BapdWriteEtwEvents.c)
 *     PnpDiagnosticTraceElamStatus @ 0x140146730 (PnpDiagnosticTraceElamStatus.c)
 *     PnpDiagnosticTraceElamDecision @ 0x140146844 (PnpDiagnosticTraceElamDecision.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140146E2C (PopBatteryTraceSystemBatteryStatus.c)
 *     PoFxSetComponentLatency @ 0x140147590 (PoFxSetComponentLatency.c)
 *     PpmEventArbitratorPerfStateChange @ 0x14014D7F8 (PpmEventArbitratorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14014D9A0 (PpmEventTraceExpectedUtility.c)
 *     IopLogEventIoMgrMountBegin @ 0x1401517F4 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140151C84 (IopLogEventIoMgrMountSucceeded.c)
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1401552FC (EtwTraceJobServerSiloMonitorCallback.c)
 *     IopLogEventIoMgrMountFailed @ 0x140155BB4 (IopLogEventIoMgrMountFailed.c)
 *     KsepEvntLogShimsApplied @ 0x1401596AC (KsepEvntLogShimsApplied.c)
 *     PpmEventDomainPerfStateChange @ 0x14015A7B4 (PpmEventDomainPerfStateChange.c)
 *     PopDiagTraceSetSystemState @ 0x14015B664 (PopDiagTraceSetSystemState.c)
 *     PoFxSetComponentResidency @ 0x14015C0F0 (PoFxSetComponentResidency.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1401E64C8 (DbgkpLkmdSqmIncrementDword.c)
 *     HvlpWriteEventLog @ 0x1401F08A0 (HvlpWriteEventLog.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
 *     IopLiveDumpTrace @ 0x1401FBCA8 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1401FBCEC (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x1401FBDC0 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401FBEAC (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401FBFD8 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401FC080 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x1401FC0E0 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x1401FC138 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1401FC190 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401FC1EC (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1401FC280 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1401FC2D8 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     SecureDump_LogErrorEvent @ 0x1401FC980 (SecureDump_LogErrorEvent.c)
 *     KiIntSteerLogStatus @ 0x14020BA1C (KiIntSteerLogStatus.c)
 *     KsepEvntLogFlagsApplied @ 0x14020EEA8 (KsepEvntLogFlagsApplied.c)
 *     KsepDsEventAddDevice @ 0x14020F7A0 (KsepDsEventAddDevice.c)
 *     KsepDsEventDataIrp @ 0x14020F8C8 (KsepDsEventDataIrp.c)
 *     KsepDsEventDevicePowerCompleted @ 0x14020F9C0 (KsepDsEventDevicePowerCompleted.c)
 *     KsepDsEventDevicePowerIrp @ 0x14020FAA4 (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventDriverLoad @ 0x14020FBBC (KsepDsEventDriverLoad.c)
 *     KsepDsEventDriverStartIo @ 0x14020FCBC (KsepDsEventDriverStartIo.c)
 *     KsepDsEventDriverUnload @ 0x14020FD90 (KsepDsEventDriverUnload.c)
 *     KsepDsEventIoCreateDevice @ 0x14020FE4C (KsepDsEventIoCreateDevice.c)
 *     KsepDsEventPnpIrp @ 0x14020FF5C (KsepDsEventPnpIrp.c)
 *     KsepDsEventPnpStartDevice @ 0x140210054 (KsepDsEventPnpStartDevice.c)
 *     KsepDsEventPnpStopDevice @ 0x140210138 (KsepDsEventPnpStopDevice.c)
 *     KsepDsEventPoolAllocate @ 0x14021021C (KsepDsEventPoolAllocate.c)
 *     KsepDsEventPoolFree @ 0x140210318 (KsepDsEventPoolFree.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402103F0 (KsepDsEventRequestPowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1402104F8 (KsepDsEventSystemPowerIrp.c)
 *     KsepSkipDriverUnloadEventDriverLoad @ 0x14021066C (KsepSkipDriverUnloadEventDriverLoad.c)
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14021076C (KsepSkipDriverUnloadEventDriverUnload.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1402441F0 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     PoTraceDynamicTickDisabled @ 0x1402442E0 (PoTraceDynamicTickDisabled.c)
 *     PoTraceForceIdleReset @ 0x140244384 (PoTraceForceIdleReset.c)
 *     PoTraceForceIdleStateChange @ 0x14024449C (PoTraceForceIdleStateChange.c)
 *     PopDiagTraceAbnormalReset @ 0x140244E90 (PopDiagTraceAbnormalReset.c)
 *     PopDiagTraceCsDeepSleepWatchdog @ 0x140244F30 (PopDiagTraceCsDeepSleepWatchdog.c)
 *     PopDiagTraceCsDripsDivergence @ 0x140245048 (PopDiagTraceCsDripsDivergence.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x140245140 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x140245348 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDiagTraceCsFanPerfTrack @ 0x14024549C (PopDiagTraceCsFanPerfTrack.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x140245558 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     PopDiagTraceDeviceComplianceUpdate @ 0x140245634 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402456F0 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceEsState @ 0x140245A30 (PopDiagTraceEsState.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x140245AEC (PopDiagTraceFxComponentIdleConstraints.c)
 *     PopDiagTraceFxComponentWake @ 0x140245BE0 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140245CDC (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140245DBC (PopDiagTraceFxDeviceIdleConstraints.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x140245EA0 (PopDiagTraceFxPerfNominalChange.c)
 *     PopDiagTraceFxPerfRequest @ 0x140245FE8 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestComplete @ 0x140246100 (PopDiagTraceFxPerfRequestComplete.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402461F8 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402462E0 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140246390 (PopDiagTraceIdleResiliencyStart.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14024644C (PopDiagTraceIllegalProcessorThrottle.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402465F4 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopDiagTraceIrpPended @ 0x140246694 (PopDiagTraceIrpPended.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140246734 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14024687C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceRegisterSystemState @ 0x1402469D8 (PopDiagTraceRegisterSystemState.c)
 *     PopDiagTraceRtcWakeInfo @ 0x140246A9C (PopDiagTraceRtcWakeInfo.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140246EBC (PopDiagTraceSessionDisplayStateChange.c)
 *     PopDiagTraceShutdownAction @ 0x140246F98 (PopDiagTraceShutdownAction.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140247084 (PopDiagTraceSleepStudyBlocker.c)
 *     PopDiagTraceThermalStateChange @ 0x14024712C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140247248 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140247598 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402476C4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PpmEventAutonomousModeChange @ 0x14024A490 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x14024A584 (PpmEventBiosCapChange.c)
 *     PpmEventCoreParkingStateChange @ 0x14024A6FC (PpmEventCoreParkingStateChange.c)
 *     PpmEventIdleDurationExpiration @ 0x14024A88C (PpmEventIdleDurationExpiration.c)
 *     PpmEventLPICoreParking @ 0x14024A9FC (PpmEventLPICoreParking.c)
 *     PpmEventParkNodeCapChange @ 0x14024AABC (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x14024ABA8 (PpmEventParkNodePreference.c)
 *     PpmEventPlatformVetoRequest @ 0x14024ACD0 (PpmEventPlatformVetoRequest.c)
 *     PpmEventPlatformVetoRundown @ 0x14024ADA8 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRequest @ 0x14024AF64 (PpmEventProcessorVetoRequest.c)
 *     PpmEventProcessorVetoRundown @ 0x14024B074 (PpmEventProcessorVetoRundown.c)
 *     PpmEventThermalCapChange @ 0x14024B270 (PpmEventThermalCapChange.c)
 *     PpmEventTraceCoreParkingSelection @ 0x14024B3D4 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14024B550 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14024B648 (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceLPIState @ 0x14024B7EC (PpmEventTraceLPIState.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14024B8B4 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmEventTracePreVetoAccounting @ 0x14024B918 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14024BAF0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmEventVpQosChange @ 0x14024BD84 (PpmEventVpQosChange.c)
 *     PopSqmAddToStream @ 0x14024D55C (PopSqmAddToStream.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     EtwpTraceLpacAccessFailure @ 0x14025DDB4 (EtwpTraceLpacAccessFailure.c)
 *     SmEtwLogRegionOp @ 0x140272A7C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x140272B48 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140272C80 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140272D4C (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140273B80 (SmKmStoreTerminateWorker.c)
 *     SmKmSqmAddToStream @ 0x1402763D4 (SmKmSqmAddToStream.c)
 *     EtwpFileProvTrace @ 0x14027BD38 (EtwpFileProvTrace.c)
 *     EtwpLogMemInfo @ 0x14027C33C (EtwpLogMemInfo.c)
 *     EtwpNetProvTraceNetwork @ 0x14027C73C (EtwpNetProvTraceNetwork.c)
 *     EtwpPsProvTracePriority @ 0x14027CAF4 (EtwpPsProvTracePriority.c)
 *     EtwpTraceFileName @ 0x14027D090 (EtwpTraceFileName.c)
 *     SeEtwWriteKMCveEvent @ 0x14027DD90 (SeEtwWriteKMCveEvent.c)
 *     EtwpTraceLostEvent @ 0x14027E008 (EtwpTraceLostEvent.c)
 *     KitLogFeatureUsage @ 0x1402885E0 (KitLogFeatureUsage.c)
 *     WheapGenerateETWEvents @ 0x14028A0E8 (WheapGenerateETWEvents.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x14028A168 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapLogProcessTerminateEvent @ 0x14028A248 (WheapLogProcessTerminateEvent.c)
 *     WheapSqmDwordCommon @ 0x14028ACBC (WheapSqmDwordCommon.c)
 *     SmKmEtwLogStoreChange @ 0x140739FD0 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14073A104 (SmKmEtwLogStoreStats.c)
 *     EtwpPsProvTraceImage @ 0x140746F28 (EtwpPsProvTraceImage.c)
 *     BapdpRecordIumStatus @ 0x140827F50 (BapdpRecordIumStatus.c)
 *     EtwpTraceSystemInitialization @ 0x1408288A4 (EtwpTraceSystemInitialization.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140856E98 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopDiagTraceDirtyTransition @ 0x14086C3E8 (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
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
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // r10
  unsigned __int64 Keyword; // r8
  unsigned __int8 v18; // al
  unsigned __int8 v20; // r10
  __int64 v21; // r11
  __int64 v22; // [rsp+90h] [rbp-78h] BYREF
  PEVENT_DATA_DESCRIPTOR v23; // [rsp+98h] [rbp-70h]
  _BYTE v24[32]; // [rsp+A0h] [rbp-68h] BYREF

  v8 = Filter;
  v23 = UserData;
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  v12 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v13 = *(_QWORD *)(RegHandle + 104);
  v14 = *(unsigned __int8 *)(RegHandle + 100);
  v15 = v13 + 28;
  if ( !v13 )
    v15 = 0LL;
  if ( (_BYTE)v14 )
  {
    v16 = *(_QWORD *)(RegHandle + 32);
    Keyword = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v16 + 80) )
    {
      v18 = *(_BYTE *)(v16 + 84);
      if ( (EventDescriptor->Level <= v18 || !v18)
        && ((*(_DWORD *)(v16 + 88) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v16 + 96)) != 0 && (Keyword & *(_QWORD *)(v16 + 104)) == *(_QWORD *)(v16 + 104)) )
      {
        v12 = (unsigned int)EtwpEventWriteFull(
                              v16,
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
                            EventDescriptor->Keyword,
                            v12) )
      LODWORD(v12) = EtwpEventWriteFull(
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
