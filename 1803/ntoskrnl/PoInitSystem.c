/*
 * XREFs of PoInitSystem @ 0x1408A80C0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400735B8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14014B690 (ExInitializeNPagedLookasideListInternal.c)
 *     ExRegisterCallback @ 0x14016BF30 (ExRegisterCallback.c)
 *     PopBatteryQueueWork @ 0x14016CA8C (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x140171BA4 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x140171EEC (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x140182024 (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140183240 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401A75A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopDiagTraceAbnormalReset @ 0x14027B688 (PopDiagTraceAbnormalReset.c)
 *     PopTraceBootError @ 0x14027DC90 (PopTraceBootError.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x14046FAB0 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x140602AE8 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x140611BE0 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x140613A48 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x1406143CC (PopResetActionDefaults.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14062747C (PopIdleInitAoAcDozeS4Timer.c)
 *     PopInitializePreSleepNotifications @ 0x1406274FC (PopInitializePreSleepNotifications.c)
 *     PopSetupHighPerfPowerRequest @ 0x14062754C (PopSetupHighPerfPowerRequest.c)
 *     PopInitializeWorkItem @ 0x140627684 (PopInitializeWorkItem.c)
 *     PpmIdleRegisterDefaultStates @ 0x14062769C (PpmIdleRegisterDefaultStates.c)
 *     RtlGetSystemBootStatus @ 0x140627A20 (RtlGetSystemBootStatus.c)
 *     TtmInit @ 0x140627A80 (TtmInit.c)
 *     PopThermalHandlePreviousShutdown @ 0x140627B68 (PopThermalHandlePreviousShutdown.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140627C38 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140627C74 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140627CB0 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x140627CEC (PopSetupMixedRealitytNotification.c)
 *     PopSetupAudioEventNotification @ 0x140627D68 (PopSetupAudioEventNotification.c)
 *     PpmEnableWmiInterface @ 0x1406287CC (PpmEnableWmiInterface.c)
 *     EmpProviderRegister @ 0x14062AC40 (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 *     PopInitializeTimer @ 0x14064C21C (PopInitializeTimer.c)
 *     KeRegisterProcessorChangeCallback @ 0x14064C530 (KeRegisterProcessorChangeCallback.c)
 *     PopDefaultPolicy @ 0x140653A24 (PopDefaultPolicy.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x14065561C (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckSkipTick @ 0x140655AD8 (PopCheckSkipTick.c)
 *     PopIsDirectedDripsEnabled @ 0x140762038 (PopIsDirectedDripsEnabled.c)
 *     PopPdcCsDeviceNotification @ 0x140764F48 (PopPdcCsDeviceNotification.c)
 *     PopDiagTraceSkipTick @ 0x140769044 (PopDiagTraceSkipTick.c)
 *     PopNetIsDisconnectStandbyActive @ 0x14076B924 (PopNetIsDisconnectStandbyActive.c)
 *     RtlSetSystemBootStatus @ 0x140786E60 (RtlSetSystemBootStatus.c)
 *     PopDiagInitialize @ 0x1408A5C04 (PopDiagInitialize.c)
 *     PopFanReportBootStartDevices @ 0x1408A5DDC (PopFanReportBootStartDevices.c)
 *     PopInitializeAdpm @ 0x1408A5E40 (PopInitializeAdpm.c)
 *     PopNetInitialize @ 0x1408A7F78 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x1408A8DD4 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x1408A8E9C (PopDeepSleepInitialize.c)
 *     PopInitializePowerSettings @ 0x1408A8EE4 (PopInitializePowerSettings.c)
 *     PopCheckShutdownMarker @ 0x1408A8FA8 (PopCheckShutdownMarker.c)
 *     PopInitializeDirectedDrips @ 0x1408A9118 (PopInitializeDirectedDrips.c)
 *     PopCoalescingInitialize @ 0x1408A91EC (PopCoalescingInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x1408C153C (PopInitializePowerSettingCallbacks.c)
 *     PpmInitHeteroPolicy @ 0x1408C1950 (PpmInitHeteroPolicy.c)
 *     PpmInitPolicyConfiguration @ 0x1408C19C4 (PpmInitPolicyConfiguration.c)
 *     PopThermalInit @ 0x1408C2A44 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x1408C2AD4 (PpmPerfInitialize.c)
 *     PpmInitIdlePolicy @ 0x1408C2BE8 (PpmInitIdlePolicy.c)
 *     PoFxInitPowerManagement @ 0x1408C3198 (PoFxInitPowerManagement.c)
 *     PopEtInit @ 0x1408C3458 (PopEtInit.c)
 *     PopRecorderInit @ 0x1408C5424 (PopRecorderInit.c)
 *     PopBatteryInitPhaseTwo @ 0x1408C57D4 (PopBatteryInitPhaseTwo.c)
 *     PopBatteryInit @ 0x1408C5CA0 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x1408C5EB8 (PopPowerRequestInit.c)
 *     PopUmpoInitializeChannel @ 0x1408C6304 (PopUmpoInitializeChannel.c)
 *     PopInitializeIrpWorkers @ 0x1408C6F68 (PopInitializeIrpWorkers.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408C70DC (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1408C7738 (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitCoreParkingPolicy @ 0x1408C8C30 (PpmInitCoreParkingPolicy.c)
 *     PopCheckForUpgradeInProgress @ 0x1408C8CBC (PopCheckForUpgradeInProgress.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1408C9030 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopWakeSourceInit @ 0x1408C93E8 (PopWakeSourceInit.c)
 *     PopInitVideoWnfState @ 0x1408C9488 (PopInitVideoWnfState.c)
 *     PopInitShutdownList @ 0x1408C99F4 (PopInitShutdownList.c)
 *     PopEsInit @ 0x1408C9BFC (PopEsInit.c)
 *     PoFxRegisterDebugger @ 0x1408CA0E4 (PoFxRegisterDebugger.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int v4; // eax
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rcx
  int v9; // ebx
  unsigned __int8 v10; // di
  __int64 v11; // rdx
  unsigned __int8 v12; // zf
  int v13; // ebx
  int v14; // eax
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  int Buffer; // [rsp+5Ch] [rbp-A4h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[8]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES v29; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v30[20]; // [rsp+118h] [rbp+18h] BYREF
  int v31; // [rsp+12Ch] [rbp+2Ch]
  _DWORD InputBuffer[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 DataBuffer; // [rsp+140h] [rbp+40h] BYREF
  __int64 v34; // [rsp+148h] [rbp+48h]
  int v35; // [rsp+150h] [rbp+50h]
  __int64 OutputBuffer; // [rsp+158h] [rbp+58h] BYREF
  int v37; // [rsp+160h] [rbp+60h]

  PopOsInitPhase = a1;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopPowerAggregatorLock = 0LL;
    qword_1403A8708 = 0LL;
    memset(PopPowerAggregatorWork, 0, 0xD4uLL);
    PopPowerAggregatorWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorWorker;
    qword_1403A82E8 = 0LL;
    qword_1403AB1B8 = 0LL;
    qword_1403AA718 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_1403AA708 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopPowerAggregatorWorkItem.Parameter = 0LL;
    PopPowerAggregatorWorkItem.List.Flink = 0LL;
    PopPowerEventLock = 0LL;
    PopCoalRegistrationListLock = 0LL;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 248, 1917415248, 0, 0);
    BootStatFileHandle = 0LL;
    qword_1403ABCB8 = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
    BootStatDataCache = 0LL;
    PopBsdSkipLogging = 0;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v6);
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0LL, 1);
    PopWdiTimer = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    qword_1403A8890 = (__int64)&qword_1403A8888;
    qword_1403A8888 = (__int64)&qword_1403A8888;
    qword_1403A8918 = (__int64)PopWdiTimerCallback;
    PopWdiTimerWorker.WorkerRoutine = (void (__fastcall *)(void *))PopWdiTimerWorkerThread;
    PopWdiCurrentScenarioInstanceId = 0;
    qword_1403A8898 = 0LL;
    qword_1403A88B8 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_1403A8920 = 0LL;
    qword_1403A8938 = 0LL;
    qword_1403A8910 = 0LL;
    PopWdiTimerWorker.Parameter = 0LL;
    PopDisplayBurstSuppressWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDisplayBurstSuppressWorker;
    PopWdiTimerWorker.List.Flink = 0LL;
    PopLidClosedSleepStudyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopLidClosedSleepStudyWorker;
    PopDisplayBurstSuppressWorkItem.Parameter = 0LL;
    PopDisplayBurstSuppressWorkItem.List.Flink = 0LL;
    PopLidClosedSleepStudyWorkItem.Parameter = 0LL;
    PopLidClosedSleepStudyWorkItem.List.Flink = 0LL;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, 0LL);
    PopInputSuppressionLock = 0LL;
    qword_1403ABC78 = 0LL;
    qword_1403AB9E8 = 0LL;
    qword_1403ABC68 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    qword_1403A8798 = (__int64)PpmCheckRun;
    qword_1403A87D8 = (__int64)PpmCheckPeriodicStart;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmCheckCurrentPipelineId = 6;
    LODWORD(PpmCheckDpc) = 787;
    qword_1403A87A0 = 0LL;
    qword_1403A87B8 = 0LL;
    qword_1403A8790 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_1403A87E0 = 0LL;
    qword_1403A87F8 = 0LL;
    qword_1403A87D0 = 0LL;
    v4 = PopInitializeIrpWorkers();
    if ( v4 < 0 )
      return v4 >= 0;
    PopIrpSerialLock = 0LL;
    qword_1403AA748 = 0LL;
    qword_1403AA798 = (__int64)&qword_1403AA790;
    qword_1403AA790 = (__int64)&qword_1403AA790;
    qword_1403AA768 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_1403AA758 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_1403AA7B8 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_1403ABA38 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_1403CDB08 = 0LL;
    word_1403AA788 = 1;
    byte_1403AA78A = 6;
    dword_1403AA78C = 1;
    PopWorkerLock = 0LL;
    LOWORD(PopTransitionLock.Header.Lock) = 1;
    PopTransitionLock.Header.Size = 6;
    PopTransitionLock.Header.SignalState = 1;
    PopDisableSleepMutex.Count = 1;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v7 = PopIdleScanInterval;
    qword_1403AA7C8 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v7 = 30;
        PopIdleScanInterval = 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v7 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v7 + 59) / v7;
      PopBackgroundTaskIgnoreCount = (v7 + 179) / v7;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopPolicyWorker.List.Flink = 0LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Count = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_1403AA8D8 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_1403AA8C8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_1403AA8B8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_1403AA908 = (__int64)&PopThermal;
    PopThermal = &PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_1403AA8F8 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_1403AA944;
    PopDefaultPolicy(dword_1403AA944);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_1403AA930 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_1403CDB00 = -1;
    dword_1403CDB04 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0LL);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    PopPolicyDeviceLock = 0LL;
    qword_1403A9D08 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_1403A9CF8 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_1403A9E98 = 0LL;
    qword_1403A9E88 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    dword_1403AAB00 = 4;
    byte_1403AAB04 = 0;
    qword_1403AAB08 = (__int64)PopShutdownHandler;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_1403A8158 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_1403E91C0 = (__int64)&qword_1403E91B8;
    qword_1403E91B8 = (__int64)&qword_1403E91B8;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_1403AB978 = (__int64)&qword_1403AB970;
    qword_1403AB970 = (__int64)&qword_1403AB970;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_1403A8160 = 0LL;
    qword_1403A8178 = 0LL;
    qword_1403A8150 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_1403E91C8 = 0LL;
    qword_1403E91E8 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_1403AB968 = 1;
    byte_1403AB96A = 6;
    dword_1403AB96C = 1;
    PoFxInitPowerManagement();
    dword_1403AAA4C = 0;
    qword_1403AAA50 = 100LL;
    qword_1403AAA58 = 100LL;
    dword_1403AAA60 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v8 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v8 + 3080);
    if ( *(_BYTE *)(v8 + 3080) )
    {
      *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v8 + 3088);
      xmmword_1403D13D0 = *(_OWORD *)(v8 + 3096);
      xmmword_1403D13E0 = *(_OWORD *)(v8 + 3112);
    }
    PopSIdleLastUpdateNotificationState = 0;
    PopInitializeWorkItem((__int64)&PopSIdleUpdateNotificationWorkItem, (__int64)PopSIdleUpdateNotificationWorker, 0LL);
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    PopEsInit();
    PopInitializePowerSettingCallbacks();
    v4 = PopEtInit();
    if ( v4 < 0 )
      return v4 >= 0;
    v4 = PopPowerRequestInit();
    if ( v4 < 0 )
      return v4 >= 0;
    v4 = PopInitializeHighPerfPowerRequest();
    if ( v4 < 0 )
      return v4 >= 0;
    PopCheckPowerSourceAfterRtcWakeInitialize();
    PopWatchdogLock = 0LL;
    qword_1403A7C28 = (__int64)&PopWatchdogList;
    PopWatchdogList = (__int64)&PopWatchdogList;
    PopInitializePowerButtonHold(1LL);
  }
  if ( a1 == 2 )
  {
    PoFxRegisterDebugger();
    HalReportResourceUsage(1LL);
    PopBatteryInitPhaseTwo();
    v4 = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle);
    if ( v4 < 0 )
      return v4 >= 0;
    PpmEtwRegistered = 1;
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PopInitializeHeteroProcessors(1);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    PpmCheckInitProcessors(0);
    PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock(&PopFxSystemLatencyLock);
    if ( PopPlatformAoAc )
    {
      v20 = IoArcBootDeviceName.Buffer;
      FileHandle = 0LL;
      ObjectAttributes.ObjectName = &IoArcBootDeviceName;
      v21 = 0x100000000LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
      {
        IoStatusBlock.Pointer = 0LL;
        IoStatusBlock.Information = 0LL;
        *(_QWORD *)&InputBuffer[1] = 0LL;
        OutputBuffer = 0LL;
        v37 = 0;
        InputBuffer[0] = 7;
        if ( ZwDeviceIoControlFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x2D1400u,
               InputBuffer,
               0xCu,
               &OutputBuffer,
               0xCu) >= 0 )
        {
          if ( (_BYTE)v37 )
            PopBsdSkipLogging = 1;
          else
            BYTE5(v21) = 1;
        }
      }
      PopPdcCsDeviceNotification((__int64)&v20);
      if ( FileHandle )
        ZwClose(FileHandle);
      PopAcquirePolicyLock();
      PopNetIsDisconnectStandbyActive(&v17);
      byte_1403AAB77 = (unsigned int)(v17 - 3) > 1;
      PopReleasePolicyLock();
    }
    PopUpdateBackgroundCoolingStatus(0);
    PopInitVideoWnfState();
  }
  if ( a1 != 3 )
    goto LABEL_5;
  v4 = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 1u, &v25);
  if ( v4 >= 0 )
  {
    v4 = PopDiagInitialize();
    if ( v4 >= 0 )
    {
      PopTriggerDiagTraceAoAcCapability();
      PopFanReportBootStartDevices();
      v9 = 2;
      v10 = 1;
      if ( PopSkipTickPolicy )
      {
        if ( PopSkipTickPolicy == 1 )
        {
          v10 = 0;
          if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v30) >= 0 )
          {
            PopApicMode = v31;
            if ( PopCheckSkipTick() )
            {
              PoSkipTickMode = 0;
              goto LABEL_35;
            }
            v9 = 1;
          }
        }
        else
        {
          v9 = 0;
        }
      }
      PoSkipTickMode = v9;
      v12 = v9 == 2;
      if ( v9 != 2 )
      {
        if ( !v10 )
          goto LABEL_35;
        v12 = v9 == 2;
      }
      PopDiagTraceSkipTick(v12, v10);
LABEL_35:
      PpmInitIllegalThrottleLogging();
      PopCheckShutdownMarker(a2);
      if ( RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL) >= 0 && HIDWORD(v34) )
      {
        PopTraceBootError();
        DataBuffer = 0LL;
        v34 = 0LL;
        v35 = 0;
        RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
      }
      if ( (unsigned __int8)off_1403989B0[0]()
        || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
      {
        PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
      }
      PopAcquirePolicyLock();
      PopCheckForUpgradeInProgress();
      if ( InitIsWinPEMode )
        PopLogSleepDisabled(16, 15, 0LL, 0LL);
      if ( byte_1403AAB74 )
        PopLogSleepDisabled(17, 7, 0LL, 0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2296LL) & 8) != 0 )
      {
        PopSecureLaunched = 1;
        PopLogSleepDisabled(21, 4, 0LL, 0LL);
      }
      PopDeepSleepInitialize(3LL);
      PopInitializePowerPolicySimulate();
      if ( (PopSimulate & 1) != 0 )
      {
        byte_1403AAB7E = 1;
        *(_QWORD *)&xmmword_1403AAB80 = 0x19000000064LL;
        *((_QWORD *)&xmmword_1403AAB80 + 1) = 0xFFFF0000000ALL;
        LODWORD(qword_1403AABA0) = 4;
        dword_1403AABA8 = 2;
      }
      if ( (PopSimulate & 2) != 0 )
      {
        LODWORD(PopCapabilities) = 16843009;
        WORD2(PopCapabilities) = 257;
        BYTE6(PopCapabilities) = 1;
        unk_1403AAB71 = 257;
      }
      PopResetCurrentPolicies();
      PopInitializeAdpm();
      if ( RtlIsMultiSessionSku() && PopPlatformAoAc )
      {
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ACDC_POWER_SOURCE,
          (PPOWER_SETTING_CALLBACK)PopBackgroundActivityPolicyCallback,
          0LL,
          0LL);
        PoRegisterPowerSettingCallback(
          0LL,
          &GUID_LOW_POWER_EPOCH,
          (PPOWER_SETTING_CALLBACK)PopBackgroundActivityPolicyCallback,
          0LL,
          0LL);
      }
      PopInitilizeAcDcSettings();
      Buffer = 1;
      PopUpdateConsoleDisplayState(1);
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
      PopNetInitialize(3);
      PopReleasePolicyLock();
      *(_QWORD *)&PopIdleScanTimer.Header.Lock = 8LL;
      PopIdleScanDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopCheckForIdleness;
      PopIdleScanTimer.Header.WaitListHead.Blink = &PopIdleScanTimer.Header.WaitListHead;
      PopIdleScanTimer.Header.WaitListHead.Flink = &PopIdleScanTimer.Header.WaitListHead;
      PopIdleScanDpc.TargetInfoAsUlong = 275;
      PopIdleScanDpc.DeferredContext = 0LL;
      PopIdleScanDpc.DpcData = 0LL;
      PopIdleScanDpc.ProcessorHistory = 0LL;
      PopIdleScanTimer.DueTime.QuadPart = 0LL;
      *(_QWORD *)&PopIdleScanTimer.Processor = 0LL;
      PopIdleInitAoAcDozeS4Timer();
      if ( PopIdleScanInterval )
        KeSetCoalescableTimer(
          &PopIdleScanTimer,
          (LARGE_INTEGER)(-10000000LL * (unsigned int)PopIdleScanInterval),
          1000 * PopIdleScanInterval,
          0x3E8u,
          &PopIdleScanDpc);
      PopInitializePreSleepNotifications();
      v11 = *(_QWORD *)(a2 + 240);
      PopHiberLoaderScratchPages = *(_DWORD *)(v11 + 168);
      PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(v11 + 116) & 0x80000) != 0;
      PopSetupHighPerfPowerRequest();
      PpmEnableWmiInterface();
      PopAcquirePolicyLock();
      PopCoalescingInitialize();
      PopReleasePolicyLock();
      PopInitializeDirectedDrips();
      if ( PopPlatformAoAc )
      {
        v13 = (unsigned __int8)PopDripsWatchdogAction;
        if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
        {
          if ( (PopDripsWatchdogAction & 0x10) != 0 )
            v13 = (unsigned __int8)PopDripsWatchdogAction | 2;
          else
            v13 = PopDripsWatchdogAction & 0xFD;
        }
        if ( (unsigned __int8)PopIsDirectedDripsEnabled() )
          v13 |= 0x100u;
        ExInitializeResourceLite(&stru_1403D1AD8);
        v14 = PopDripsCallbackInterval;
        if ( PopDripsCallbackInterval >= (unsigned int)PopDripsWatchdogTimeout || !PopDripsCallbackInterval )
          v14 = PopDripsWatchdogTimeout;
        dword_1403D1A64 = v13;
        PopDripsWatchdog = v14;
        PopInitializeTimer(
          (__int64)&unk_1403D1B40,
          (__int64)PopDripsWatchdogTimerCallbackRoutine,
          (__int64)&PopDripsWatchdog,
          (__int64)PopDripsWatchdogWorkerRoutine,
          (__int64)&PopDripsWatchdog);
      }
      PopSetupAudioEventNotification();
      PopSetupMixedRealitytNotification();
      PopSetupFullScrenVideoNotification();
      PopSetupUserPresencePredictionNotification();
      PopSetupSprActiveSessionChangeNotification();
      PopThermalHandlePreviousShutdown();
      PopCheckpointEfiRuntimeRedirected = (*(_DWORD *)(a2 + 264) & 2) != 0;
      TtmInit();
      if ( PopPlatformAoAc )
      {
        v15 = 1;
        EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v15);
        if ( v15 == 2 )
          PopErrataReportingIncorrectLidState = 1;
        if ( PopPlatformAoAc )
        {
          if ( PopEnableInputSuppressionOverride == -1 )
          {
            v16 = 1;
            EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v16);
            PopEnableInputSuppression = v16 == 2;
          }
          else
          {
            PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
          }
        }
      }
      PopBatteryQueueWork(1u);
      if ( (int)KsrGetFirmwareInformation(v26) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
        v29.Length = 48;
        v29.ObjectName = &DestinationString;
        v29.RootDirectory = 0LL;
        v29.Attributes = 80;
        *(_OWORD *)&v29.SecurityDescriptor = 0LL;
        if ( ExCreateCallback(&CallbackObject, &v29, 0, 1u) >= 0 )
          ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopKsrCallback, 0LL);
      }
LABEL_5:
      v4 = 0;
    }
  }
  return v4 >= 0;
}
