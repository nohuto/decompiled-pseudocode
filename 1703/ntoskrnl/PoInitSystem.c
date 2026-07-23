/*
 * XREFs of PoInitSystem @ 0x14080B764
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KiInitializeMutant @ 0x140121F00 (KiInitializeMutant.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x1401557BC (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x14015594C (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x140164014 (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140165770 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopDiagTraceAbnormalReset @ 0x140230528 (PopDiagTraceAbnormalReset.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 *     RtlIsMultiSessionSku @ 0x140560330 (RtlIsMultiSessionSku.c)
 *     PopEsWorkItemSchedule @ 0x140582B1C (PopEsWorkItemSchedule.c)
 *     PopUpdateConsoleDisplayState @ 0x140584DDC (PopUpdateConsoleDisplayState.c)
 *     RtlLockBootStatusData @ 0x140585800 (RtlLockBootStatusData.c)
 *     PopInitializePowerPolicySimulate @ 0x140585A34 (PopInitializePowerPolicySimulate.c)
 *     RtlUnlockBootStatusData @ 0x140585EE0 (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x140586418 (PopResetActionDefaults.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     PpmEnableWmiInterface @ 0x14059FC64 (PpmEnableWmiInterface.c)
 *     EmpProviderRegister @ 0x1405A3390 (EmpProviderRegister.c)
 *     TtmInit @ 0x1405A7710 (TtmInit.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405A80EC (PpmIdleRegisterDefaultStates.c)
 *     PopInitializeWorkItem @ 0x1405A834C (PopInitializeWorkItem.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405A8504 (PopThermalHandlePreviousShutdown.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1405A85D4 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405A8610 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupAudioEventNotification @ 0x1405A864C (PopSetupAudioEventNotification.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1405A8EC0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     PopLogSleepDisabled @ 0x1405C2380 (PopLogSleepDisabled.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405CBD10 (KeRegisterProcessorChangeCallback.c)
 *     PopInitializeTimer @ 0x1405CEEDC (PopInitializeTimer.c)
 *     PopDefaultPolicy @ 0x1405D4578 (PopDefaultPolicy.c)
 *     PopCheckSkipTick @ 0x1405D5B10 (PopCheckSkipTick.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405D5CC8 (PopSetupHighPerfPowerRequest.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405D5E60 (PopUpdateBackgroundCoolingStatus.c)
 *     PopDiagTraceSkipTick @ 0x1406CDCB8 (PopDiagTraceSkipTick.c)
 *     PopInitializePowerButtonHold @ 0x14080C4FC (PopInitializePowerButtonHold.c)
 *     PopNetInitialize @ 0x14080C59C (PopNetInitialize.c)
 *     PopDeepSleepInitialize @ 0x14080C6A4 (PopDeepSleepInitialize.c)
 *     PopCoalescingInitialize @ 0x14080C6EC (PopCoalescingInitialize.c)
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x14081F640 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitHeteroPolicy @ 0x14081FD60 (PpmInitHeteroPolicy.c)
 *     PpmInitPolicyConfiguration @ 0x14081FF4C (PpmInitPolicyConfiguration.c)
 *     PpmInitIdlePolicy @ 0x1408208A4 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x140820B9C (PopThermalInit.c)
 *     PoFxInitPowerManagement @ 0x140820D80 (PoFxInitPowerManagement.c)
 *     PopBatteryInit @ 0x140822C60 (PopBatteryInit.c)
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     PopInitializeIrpWorkers @ 0x1408236D0 (PopInitializeIrpWorkers.c)
 *     PopPowerRequestInit @ 0x14082399C (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140823D88 (PopUmpoInitializeMonitorChannel.c)
 *     PopCheckForUpgradeInProgress @ 0x140823F04 (PopCheckForUpgradeInProgress.c)
 *     PopCheckAndClearBootError @ 0x140823FE4 (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x140824044 (PopCheckShutdownMarker.c)
 *     PpmPerfInitialize @ 0x1408246A4 (PpmPerfInitialize.c)
 *     PopInitializePowerSettings @ 0x140824E80 (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x14082503C (PopInitializeAdpm.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140825090 (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitCoreParkingPolicy @ 0x140825648 (PpmInitCoreParkingPolicy.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140825780 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopBlackBoxInit @ 0x140825B04 (PopBlackBoxInit.c)
 *     PopWakeSourceInit @ 0x140825BF8 (PopWakeSourceInit.c)
 *     PopInitVideoWnfState @ 0x140825D4C (PopInitVideoWnfState.c)
 *     PopFanReportBootStartDevices @ 0x140825F90 (PopFanReportBootStartDevices.c)
 *     PopInitShutdownList @ 0x14082610C (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x14082676C (PoFxRegisterDebugger.c)
 *     PopEtInit @ 0x140826858 (PopEtInit.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140826ABC (PopPdcCsCheckSystemVolumeDevice.c)
 */

char __fastcall PoInitSystem(int a1, __int64 a2)
{
  char v2; // di
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  int v9; // ebx
  unsigned __int8 v10; // si
  bool v11; // zf
  unsigned __int8 v12; // al
  HANDLE v13; // rbx
  char v14; // bl
  HANDLE FileHandle; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v18[20]; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+B0h] [rbp+40h] BYREF
  int Buffer; // [rsp+C0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+C8h] [rbp+58h] BYREF

  v2 = 0;
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
    qword_14034B808 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_14034B7F8 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 248, 1917415248, 0, 0);
    PopBsdSkipLogging = 0;
    qword_14034C9A8 = 0LL;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v5);
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0, 1);
    PopWdiTimer = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    qword_14034A770 = (__int64)&qword_14034A768;
    qword_14034A768 = (__int64)&qword_14034A768;
    qword_14034A7B8 = (__int64)PopWdiTimerCallback;
    qword_14034A7F0 = (__int64)PopWdiTimerWorkerThread;
    PopDisplayBurstSuppressWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDisplayBurstSuppressWorker;
    PopLidClosedSleepStudyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopLidClosedSleepStudyWorker;
    qword_14034C988 = 0LL;
    qword_14034C978 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = (__int64)&PopTransitionCheckpoints;
    PopWdiCurrentScenarioInstanceId = 0;
    qword_14034A778 = 0LL;
    qword_14034A798 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_14034A7C0 = 0LL;
    qword_14034A7D8 = 0LL;
    qword_14034A7B0 = 0LL;
    qword_14034A7F8 = 0LL;
    PopWdiTimerWorker = 0LL;
    PopDisplayBurstSuppressWorkItem.Parameter = 0LL;
    PopDisplayBurstSuppressWorkItem.List.Flink = 0LL;
    PopLidClosedSleepStudyWorkItem.Parameter = 0LL;
    PopLidClosedSleepStudyWorkItem.List.Flink = 0LL;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmCheckCurrentPipelineId = 6;
    LODWORD(PpmCheckDpc) = 787;
    qword_14034A3C0 = 0LL;
    qword_14034A3B8 = (__int64)PpmCheckRun;
    qword_14034A358 = (__int64)PpmCheckPeriodicStart;
    qword_14034A3D8 = 0LL;
    qword_14034A3B0 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_14034A360 = 0LL;
    qword_14034A378 = 0LL;
    qword_14034A350 = 0LL;
    if ( (int)PopInitializeIrpWorkers() < 0 )
      return v2;
    PopIrpSerialLock = 0LL;
    qword_14034B818 = 0LL;
    qword_14034B858 = (__int64)&qword_14034B850;
    qword_14034B850 = (__int64)&qword_14034B850;
    qword_14034B878 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_14034B868 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_14034B898 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_14034C728 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_14036E248 = 0LL;
    LOWORD(dword_14034B848) = 1;
    BYTE2(dword_14034B848) = 6;
    dword_14034B84C = 1;
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
    v6 = PopIdleScanInterval;
    qword_14034B8A8 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v6 = a1 + 30;
        PopIdleScanInterval = a1 + 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v6 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v6 + 59) / v6;
      PopBackgroundTaskIgnoreCount = (v6 + 179) / v6;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.List.Flink = 0LL;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Count = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_14034B9F8 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_14034B9E8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_14034BA18 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_14034BA08 = (__int64)&PopThermal;
    PopThermal = (__int64)&PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_14034BA28 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_14034BA44;
    PopDefaultPolicy(dword_14034BA44);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_14034BBB0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_14036E240 = -1;
    dword_14036E244 = 2;
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
    qword_14034ADF8 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_14034AE18 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_14034AFA8 = 0LL;
    qword_14034AFB8 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    dword_14034BC20 = 4;
    byte_14034BC24 = 0;
    qword_14034BC28 = (__int64)PopShutdownHandler;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_14034A1D8 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_1403876C0 = (__int64)&qword_1403876B8;
    qword_1403876B8 = (__int64)&qword_1403876B8;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_14034C638 = (__int64)&qword_14034C630;
    qword_14034C630 = (__int64)&qword_14034C630;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_14034A1E0 = 0LL;
    qword_14034A1F8 = 0LL;
    qword_14034A1D0 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_1403876C8 = 0LL;
    qword_1403876E8 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_14034C628 = 1;
    byte_14034C62A = 6;
    dword_14034C62C = 1;
    PoFxInitPowerManagement();
    dword_14034BB4C = 0;
    qword_14034BB50 = 100LL;
    qword_14034BB58 = 100LL;
    dword_14034BB60 = 100;
    PopNetInitialize(0LL);
    PopInitializePowerButtonHold(0LL);
    PopBlackBoxInit();
    v7 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v7 + 3080);
    if ( !*(_BYTE *)(v7 + 3080) )
      return 1;
    *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v7 + 3088);
    xmmword_14036E698 = *(_OWORD *)(v7 + 3096);
    xmmword_14036E6A8 = *(_OWORD *)(v7 + 3112);
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    if ( (PopAggressiveStandbyActionsRegValue & 0xFFFFFFF0) == 0 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    qword_140349F68 = 0LL;
    PopEsLock = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItemSchedule(1);
    PopInitializePowerSettingCallbacks();
    if ( (int)PopEtInit() < 0 || (int)PopPowerRequestInit() < 0 || (int)PopInitializeHighPerfPowerRequest() < 0 )
      return v2;
    PopCheckPowerSourceAfterRtcWakeInitialize();
    PopWatchdogLock = 0LL;
    qword_140349F48 = (__int64)&PopWatchdogList;
    PopWatchdogList = (__int64)&PopWatchdogList;
    PopInitializePowerButtonHold(1LL);
  }
  if ( a1 == 2 )
  {
    PoFxRegisterDebugger();
    HalReportResourceUsage(1LL);
    if ( EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle) >= 0 )
      PopBatteryEtwRegistered = 1;
    if ( EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle) < 0 )
      return v2;
    PpmEtwRegistered = 1;
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PopInitializeHeteroProcessors();
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    PpmCheckInitProcessors(0);
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
    PopPdcCsCheckSystemVolumeDevice();
    PopUpdateBackgroundCoolingStatus(0);
    PopInitVideoWnfState();
  }
  if ( a1 != 3 )
    return 1;
  if ( (int)EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 1u, &v17) >= 0
    && (int)PopDiagInitialize() >= 0 )
  {
    PopTriggerDiagTraceAoAcCapability();
    PopFanReportBootStartDevices();
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = 2;
    v10 = 1;
    if ( CurrentPrcb->CpuVendor != 1 || (v11 = CurrentPrcb->CpuType == 23, PoAllowOpportunisticTickSkipping = 1, !v11) )
      PoAllowOpportunisticTickSkipping = 0;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy == 1 )
      {
        v10 = 0;
        if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v18) >= 0 )
        {
          PopApicMode = v19;
          if ( PopCheckSkipTick() )
          {
            PoSkipTickMode = 0;
            goto LABEL_46;
          }
          if ( PoAllowOpportunisticTickSkipping )
            v9 = 1;
        }
      }
      else
      {
        v9 = 0;
      }
    }
    PoSkipTickMode = v9;
    if ( v9 == 2 )
    {
      v12 = 1;
      goto LABEL_45;
    }
    if ( v10 )
    {
      v12 = 0;
LABEL_45:
      PopDiagTraceSkipTick(v12, v10);
    }
LABEL_46:
    PpmInitIllegalThrottleLogging();
    if ( RtlLockBootStatusData(&FileHandle) >= 0 )
    {
      v13 = FileHandle;
      PopCheckShutdownMarker(a2, FileHandle);
      PopCheckAndClearBootError(v13);
      RtlUnlockBootStatusData(v13);
    }
    if ( (unsigned __int8)off_14033B5E0[0]()
      || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
    {
      PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
    }
    PopAcquirePolicyLock();
    PopCheckForUpgradeInProgress();
    if ( InitIsWinPEMode )
      PopLogSleepDisabled(16, 15, 0LL, 0LL);
    if ( byte_14034BC94 )
      PopLogSleepDisabled(17, 7, 0LL, 0LL);
    PopDeepSleepInitialize(3LL);
    PopInitializePowerPolicySimulate();
    if ( (PopSimulate & 1) != 0 )
    {
      byte_14034BC9E = 1;
      *(_QWORD *)&xmmword_14034BCA0 = 0x19000000064LL;
      *((_QWORD *)&xmmword_14034BCA0 + 1) = 0xFFFF0000000ALL;
      LODWORD(qword_14034BCC0) = 4;
      dword_14034BCC8 = 2;
    }
    if ( (PopSimulate & 2) != 0 )
    {
      LODWORD(PopCapabilities) = 16843009;
      WORD2(PopCapabilities) = 257;
      BYTE6(PopCapabilities) = 1;
      unk_14034BC91 = 257;
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
    PopNetInitialize(3LL);
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
    PopHiberLoaderScratchPages = *(_DWORD *)(*(_QWORD *)(a2 + 240) + 168LL);
    PopSetupHighPerfPowerRequest();
    PpmEnableWmiInterface();
    PopAcquirePolicyLock();
    PopCoalescingInitialize();
    PopReleasePolicyLock();
    if ( PopPlatformAoAc )
    {
      v14 = PopDripsWatchdogAction;
      if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
      {
        if ( (PopDripsWatchdogAction & 0x10) != 0 )
          v14 = PopDripsWatchdogAction | 2;
        else
          v14 = PopDripsWatchdogAction & 0xFD;
      }
      ExInitializeResourceLite(&stru_14036F408);
      byte_14036F3A4 = v14;
      PopDripsWatchdog = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&unk_14036F470,
        (__int64)PopDripsWatchdogTimerCallbackRoutine,
        (__int64)&PopDripsWatchdog,
        (__int64)PopDripsWatchdogWorkerRoutine,
        (__int64)&PopDripsWatchdog);
    }
    PopSetupAudioEventNotification();
    PopSetupFullScrenVideoNotification();
    PopSetupUserPresencePredictionNotification();
    PopThermalHandlePreviousShutdown();
    PopCheckpointEfiRuntimeRedirected = (*(_BYTE *)(a2 + 264) & 2) != 0;
    TtmInit();
    if ( PopPlatformAoAc )
    {
      v20 = 1;
      EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v20);
      if ( v20 == 2 )
        PopErrataReportingIncorrectLidState = 1;
    }
    return 1;
  }
  return v2;
}
