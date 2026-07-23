/*
 * XREFs of PoInitSystem @ 0x140831CA8
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400B1788 (PoFxSendSystemLatencyUpdate.c)
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     ExRegisterCallback @ 0x14012D810 (ExRegisterCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     PopInitilizeAcDcSettings @ 0x140139D88 (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x140139EE4 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x14013A1D0 (PpmInitIllegalThrottleLogging.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140146390 (ExInitializeNPagedLookasideListInternal.c)
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1401573D0 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14017D9A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopDiagTraceAbnormalReset @ 0x140244E90 (PopDiagTraceAbnormalReset.c)
 *     PopTraceBootError @ 0x1402478E0 (PopTraceBootError.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140424330 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PoEnergyContextInitialize @ 0x1404495E0 (PoEnergyContextInitialize.c)
 *     PoEnergyContextStart @ 0x1404589DC (PoEnergyContextStart.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     RtlGetSystemBootStatus @ 0x1405AC050 (RtlGetSystemBootStatus.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 *     PopInitializeWorkItem @ 0x1405B8080 (PopInitializeWorkItem.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405B8098 (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405B898C (PopThermalHandlePreviousShutdown.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 *     EmpProviderRegister @ 0x1405BC000 (EmpProviderRegister.c)
 *     ObCreateObjectType @ 0x1405C6D70 (ObCreateObjectType.c)
 *     PopUpdateConsoleDisplayState @ 0x1405CB168 (PopUpdateConsoleDisplayState.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1405CC778 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopLogSleepDisabled @ 0x1405D5670 (PopLogSleepDisabled.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405DF540 (KeRegisterProcessorChangeCallback.c)
 *     PpmEnableWmiInterface @ 0x1405E1624 (PpmEnableWmiInterface.c)
 *     PopInitializeTimer @ 0x1405E53BC (PopInitializeTimer.c)
 *     PopInitializePowerPolicySimulate @ 0x1405EF5E0 (PopInitializePowerPolicySimulate.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405EF820 (PopSetupHighPerfPowerRequest.c)
 *     TtmInit @ 0x1405F0520 (TtmInit.c)
 *     PopDefaultPolicy @ 0x1405F0898 (PopDefaultPolicy.c)
 *     PopInitializePreSleepNotifications @ 0x1405F1FF4 (PopInitializePreSleepNotifications.c)
 *     PopCheckSkipTick @ 0x1405F2044 (PopCheckSkipTick.c)
 *     PopResetActionDefaults @ 0x1405F24AC (PopResetActionDefaults.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405F2590 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405F2AE0 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x1405F2B1C (PopSetupMixedRealitytNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1405F2B58 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1405F2B94 (PopSetupAudioEventNotification.c)
 *     PopPdcCsDeviceNotification @ 0x1406FF6C8 (PopPdcCsDeviceNotification.c)
 *     PopDiagTraceSkipTick @ 0x140705004 (PopDiagTraceSkipTick.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140707AEC (PopNetIsDisconnectStandbyActive.c)
 *     PopEtInitializeBuiltinAppId @ 0x140708B34 (PopEtInitializeBuiltinAppId.c)
 *     RtlSetSystemBootStatus @ 0x140723590 (RtlSetSystemBootStatus.c)
 *     RtlInternTableInitialize @ 0x140727668 (RtlInternTableInitialize.c)
 *     PopDiagInitialize @ 0x140827B48 (PopDiagInitialize.c)
 *     PopCheckShutdownMarker @ 0x140827D14 (PopCheckShutdownMarker.c)
 *     PopNetInitialize @ 0x140831B60 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140832928 (PopInitializePowerButtonHold.c)
 *     PopDeepSleepInitialize @ 0x1408329C4 (PopDeepSleepInitialize.c)
 *     PopEsInit @ 0x140847FC0 (PopEsInit.c)
 *     PopCoalescingInitialize @ 0x140848F38 (PopCoalescingInitialize.c)
 *     PopRecorderInit @ 0x140849820 (PopRecorderInit.c)
 *     PopInitializeHighPerfPowerRequest @ 0x14084EDCC (PopInitializeHighPerfPowerRequest.c)
 *     PopInitializePowerSettingCallbacks @ 0x14084FF58 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitHeteroPolicy @ 0x1408505C0 (PpmInitHeteroPolicy.c)
 *     PopInitializeIrpWorkers @ 0x140850B84 (PopInitializeIrpWorkers.c)
 *     PpmInitPolicyConfiguration @ 0x140850E70 (PpmInitPolicyConfiguration.c)
 *     PopThermalInit @ 0x140851B9C (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140851C2C (PpmPerfInitialize.c)
 *     PpmInitIdlePolicy @ 0x140852008 (PpmInitIdlePolicy.c)
 *     PoFxInitPowerManagement @ 0x1408527CC (PoFxInitPowerManagement.c)
 *     PopBatteryInitPhaseTwo @ 0x140853920 (PopBatteryInitPhaseTwo.c)
 *     PopBatteryInit @ 0x140853C48 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x140853E60 (PopPowerRequestInit.c)
 *     PopUmpoInitializeChannel @ 0x1408542AC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408551FC (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializePowerSettings @ 0x140855F84 (PopInitializePowerSettings.c)
 *     PopInitializeAdpm @ 0x140856358 (PopInitializeAdpm.c)
 *     PpmInitCoreParkingPolicy @ 0x140856B64 (PpmInitCoreParkingPolicy.c)
 *     PopCheckForUpgradeInProgress @ 0x140856BF0 (PopCheckForUpgradeInProgress.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140856E98 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopWakeSourceInit @ 0x140857314 (PopWakeSourceInit.c)
 *     PopInitVideoWnfState @ 0x1408573B4 (PopInitVideoWnfState.c)
 *     PopFanReportBootStartDevices @ 0x14085768C (PopFanReportBootStartDevices.c)
 *     PopInitShutdownList @ 0x140857964 (PopInitShutdownList.c)
 *     PoFxRegisterDebugger @ 0x140857ED8 (PoFxRegisterDebugger.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int v4; // eax
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rcx
  int v9; // ebx
  unsigned __int8 v10; // di
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  _QWORD *i; // rcx
  __int64 v19; // rax
  unsigned __int64 NextProcess; // rax
  ULONG_PTR v21; // rbx
  unsigned __int8 v22; // zf
  char v23; // bl
  int v24; // eax
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 Buffer; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp-88h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v35[8]; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v37; // [rsp+C0h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES v39; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v40[16]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v41[20]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v42; // [rsp+1CCh] [rbp+C4h]
  _DWORD InputBuffer[4]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 DataBuffer; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 v45; // [rsp+1E8h] [rbp+E0h]
  int v46; // [rsp+1F0h] [rbp+E8h]
  __int64 OutputBuffer; // [rsp+1F8h] [rbp+F0h] BYREF
  int v48; // [rsp+200h] [rbp+F8h]

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
    qword_140365E68 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140365E88 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopDeepSleepDisengageReasonLock = 0LL;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 248, 1917415248, 0, 0);
    BootStatFileHandle = 0LL;
    qword_140367428 = 0LL;
    BootStatFileHandleAcquired = 0;
    BootStatKeepHandleOpen = 0;
    BootStatDataCache = 0LL;
    PopBsdSkipLogging = 0;
    PopBsdUpdateLock = 0LL;
    PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
    PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v6);
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0, 1);
    PopWdiTimer = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopWdiCurrentScenarioInstanceId = 0;
    qword_140364BD0 = (__int64)&qword_140364BC8;
    qword_140364BC8 = (__int64)&qword_140364BC8;
    qword_140364C38 = (__int64)PopWdiTimerCallback;
    PopWdiTimerWorker.WorkerRoutine = (void (__fastcall *)(void *))PopWdiTimerWorkerThread;
    PopDisplayBurstSuppressWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDisplayBurstSuppressWorker;
    PopLidClosedSleepStudyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopLidClosedSleepStudyWorker;
    qword_140364BD8 = 0LL;
    qword_140364BF8 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_140364C40 = 0LL;
    qword_140364C58 = 0LL;
    qword_140364C30 = 0LL;
    PopWdiTimerWorker.Parameter = 0LL;
    PopWdiTimerWorker.List.Flink = 0LL;
    PopDisplayBurstSuppressWorkItem.Parameter = 0LL;
    PopDisplayBurstSuppressWorkItem.List.Flink = 0LL;
    PopLidClosedSleepStudyWorkItem.Parameter = 0LL;
    PopLidClosedSleepStudyWorkItem.List.Flink = 0LL;
    PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, 0LL);
    qword_140367128 = 0LL;
    qword_1403673F8 = 0LL;
    qword_1403673E8 = (__int64)&PopTransitionCheckpoints;
    PopTransitionCheckpoints = &PopTransitionCheckpoints;
    qword_140364B38 = (__int64)PpmCheckRun;
    qword_140364AD8 = (__int64)PpmCheckPeriodicStart;
    PopInputSuppressionLock = 0LL;
    PopTransitionCheckpointLock = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmCheckCurrentPipelineId = 6;
    LODWORD(PpmCheckDpc) = 787;
    qword_140364B40 = 0LL;
    qword_140364B58 = 0LL;
    qword_140364B30 = 0LL;
    LODWORD(PpmCheckStartDpc) = 787;
    qword_140364AE0 = 0LL;
    qword_140364AF8 = 0LL;
    qword_140364AD0 = 0LL;
    v4 = PopInitializeIrpWorkers();
    if ( v4 < 0 )
      return v4 >= 0;
    PopIrpSerialLock = 0LL;
    qword_140365E98 = 0LL;
    qword_140365ED8 = (__int64)&qword_140365ED0;
    qword_140365ED0 = (__int64)&qword_140365ED0;
    qword_140365EF8 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140365EE8 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140365F18 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_1403671C8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140389CC8 = 0LL;
    LOWORD(dword_140365EC8) = 1;
    BYTE2(dword_140365EC8) = 6;
    dword_140365ECC = 1;
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
    qword_140365F28 = (__int64)&PopIdleDetectList;
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
    qword_140366078 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140366068 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140366098 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140366088 = (__int64)&PopThermal;
    PopThermal = (__int64)&PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_1403660A8 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_1403660C4;
    PopDefaultPolicy(dword_1403660C4);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140366230 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140389CC0 = -1;
    dword_140389CC4 = 2;
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
    qword_140366428 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_140366408 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_140365608 = 0LL;
    qword_140365618 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    dword_1403662A0 = 4;
    byte_1403662A4 = 0;
    qword_1403662A8 = (__int64)PopShutdownHandler;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140364938 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_1403A2BA0 = (__int64)&qword_1403A2B98;
    qword_1403A2B98 = (__int64)&qword_1403A2B98;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_1403670B8 = (__int64)&qword_1403670B0;
    qword_1403670B0 = (__int64)&qword_1403670B0;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_140364940 = 0LL;
    qword_140364958 = 0LL;
    qword_140364930 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_1403A2BA8 = 0LL;
    qword_1403A2BC8 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_1403670A8 = 1;
    byte_1403670AA = 6;
    dword_1403670AC = 1;
    PoFxInitPowerManagement();
    dword_1403661CC = 0;
    qword_1403661D0 = 100LL;
    qword_1403661D8 = 100LL;
    dword_1403661E0 = 100;
    PopNetInitialize(0);
    PopInitializePowerButtonHold(0LL);
    PopRecorderInit();
    v8 = *(_QWORD *)(a2 + 240);
    LOBYTE(PopFirmwareResetReason) = *(_BYTE *)(v8 + 3080);
    if ( !*(_BYTE *)(v8 + 3080) )
      goto LABEL_5;
    *((_QWORD *)&PopFirmwareResetReason + 1) = *(_QWORD *)(v8 + 3088);
    xmmword_14038D480 = *(_OWORD *)(v8 + 3096);
    xmmword_14038D490 = *(_OWORD *)(v8 + 3112);
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
    if ( PopEnergyEstimationEnabled )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3B8uLL, 0x54456F50u);
      PopEtGlobals = (__int64)PoolWithTag;
      v12 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        return v4 >= 0;
      }
      memset(PoolWithTag, 0, 0x3B8uLL);
      v12[3] = 0LL;
      v12[2] = 0LL;
      v12[1] = v12;
      *v12 = v12;
      v12[6] = 0LL;
      v12[5] = 0LL;
      v12[11] = PopEtInternerAllocate;
      v12[12] = PopEtInternerFree;
      v12[13] = PopEtInternerLock;
      v12[14] = PopEtInternerUnlock;
      v12[15] = PopEtInternerEntryInitialize;
      RtlInternTableInitialize(v12 + 7, (__int64)(v12 + 11));
      PoEnergyContextInitialize(v12 + 16);
      *((_QWORD *)PsIdleProcess + 232) = v13;
      PopEtInitializeBuiltinAppId((__int64)(v12 + 96), (__int64)L"Default");
      PopEtInitializeBuiltinAppId((__int64)(v12 + 106), (__int64)L"Overflow");
      PopEtInitializeBuiltinAppId((__int64)(v12 + 86), (__int64)L"IsrDpc");
      v15 = (__int64)(v12 + 76);
      *(_QWORD *)(*(_QWORD *)(v14 + 1856) + 448LL) = v16;
      PopEtInitializeBuiltinAppId(v15, (__int64)L"System");
      v17 = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[15];
      if ( v17 )
        *(_QWORD *)(v17 + 448) = v15;
      for ( i = 0LL; ; i = (_QWORD *)v21 )
      {
        NextProcess = PsGetNextProcess(i);
        v21 = NextProcess;
        if ( !NextProcess )
          break;
        v19 = *(_QWORD *)(NextProcess + 1856);
        if ( v19 && !*(_QWORD *)(v19 + 448) )
        {
          *(_QWORD *)(v19 + 448) = PopEtGlobals + 768;
          PoEnergyContextStart(v21);
        }
      }
      RtlInitUnicodeString(&DestinationString, L"EnergyTracker");
      memset(v40, 0, 0x78uLL);
      BYTE2(v40[0]) |= 4u;
      v40[8] = PopEtEnergyTrackerClose;
      LOWORD(v40[0]) = 120;
      v40[9] = PopEtEnergyTrackerDelete;
      HIDWORD(v40[4]) = 1;
      LODWORD(v40[5]) = 640;
      LODWORD(v40[1]) = 402;
      HIDWORD(v40[3]) = 2031617;
      v4 = ObCreateObjectType(&DestinationString, (__int64)v40, 0LL, PopEtGlobals + 32);
      if ( v4 >= 0 )
        v4 = 0;
      if ( v4 < 0 )
        return v4 >= 0;
    }
    v4 = PopPowerRequestInit();
    if ( v4 < 0 )
      return v4 >= 0;
    v4 = PopInitializeHighPerfPowerRequest();
    if ( v4 < 0 )
      return v4 >= 0;
    PopCheckPowerSourceAfterRtcWakeInitialize();
    PopWatchdogLock = 0LL;
    qword_140364598 = (__int64)&PopWatchdogList;
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
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
    if ( PopPlatformAoAc )
    {
      v29 = IoArcBootDeviceName.Buffer;
      FileHandle = 0LL;
      ObjectAttributes.ObjectName = &IoArcBootDeviceName;
      v30 = 0x100000000LL;
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
        v48 = 0;
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
          if ( (_BYTE)v48 )
            PopBsdSkipLogging = 1;
          else
            BYTE5(v30) = 1;
        }
      }
      PopPdcCsDeviceNotification((__int64)&v29);
      if ( FileHandle )
        ZwClose(FileHandle);
      PopAcquirePolicyLock();
      PopNetIsDisconnectStandbyActive(&v26);
      byte_140366317 = (unsigned int)(v26 - 3) > 1;
      PopReleasePolicyLock();
    }
    PopUpdateBackgroundCoolingStatus(0);
    PopInitVideoWnfState();
  }
  if ( a1 != 3 )
    goto LABEL_5;
  v4 = EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 1u, &v34);
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
          if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v41) >= 0 )
          {
            PopApicMode = v42;
            if ( PopCheckSkipTick() )
            {
              PoSkipTickMode = 0;
              goto LABEL_34;
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
      v22 = v9 == 2;
      if ( v9 != 2 )
      {
        if ( !v10 )
          goto LABEL_34;
        v22 = v9 == 2;
      }
      PopDiagTraceSkipTick(v22, v10);
LABEL_34:
      PpmInitIllegalThrottleLogging();
      PopCheckShutdownMarker(a2);
      if ( RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL) >= 0 && HIDWORD(v45) )
      {
        PopTraceBootError();
        DataBuffer = 0LL;
        v45 = 0LL;
        v46 = 0;
        RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
      }
      if ( (unsigned __int8)off_140353610[0]()
        || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
      {
        PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
      }
      PopAcquirePolicyLock();
      PopCheckForUpgradeInProgress();
      if ( InitIsWinPEMode )
        PopLogSleepDisabled(16, 15, 0LL, 0LL);
      if ( byte_140366314 )
        PopLogSleepDisabled(17, 7, 0LL, 0LL);
      PopDeepSleepInitialize(3LL);
      PopInitializePowerPolicySimulate();
      if ( (PopSimulate & 1) != 0 )
      {
        byte_14036631E = 1;
        *(_QWORD *)&xmmword_140366320 = 0x19000000064LL;
        *((_QWORD *)&xmmword_140366320 + 1) = 0xFFFF0000000ALL;
        LODWORD(qword_140366340) = 4;
        dword_140366348 = 2;
      }
      if ( (PopSimulate & 2) != 0 )
      {
        LODWORD(PopCapabilities) = 16843009;
        WORD2(PopCapabilities) = 257;
        BYTE6(PopCapabilities) = 1;
        unk_140366311 = 257;
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
      LODWORD(Buffer) = 1;
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
      PopHiberLoaderScratchPages = *(_DWORD *)(*(_QWORD *)(a2 + 240) + 168LL);
      PopSetupHighPerfPowerRequest();
      PpmEnableWmiInterface();
      PopAcquirePolicyLock();
      PopCoalescingInitialize();
      PopReleasePolicyLock();
      if ( PopPlatformAoAc )
      {
        v23 = PopDripsWatchdogAction;
        if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
        {
          if ( (PopDripsWatchdogAction & 0x10) != 0 )
            v23 = PopDripsWatchdogAction | 2;
          else
            v23 = PopDripsWatchdogAction & 0xFD;
        }
        ExInitializeResourceLite(&stru_14038DC88);
        v24 = PopDripsCallbackInterval;
        if ( PopDripsCallbackInterval >= (unsigned int)PopDripsWatchdogTimeout || !PopDripsCallbackInterval )
          v24 = PopDripsWatchdogTimeout;
        byte_14038DC14 = v23;
        PopDripsWatchdog = v24;
        PopInitializeTimer(
          (__int64)&unk_14038DCF0,
          (__int64)PopDripsWatchdogTimerCallbackRoutine,
          (__int64)&PopDripsWatchdog,
          (__int64)PopDripsWatchdogWorkerRoutine,
          (__int64)&PopDripsWatchdog);
      }
      PopSetupAudioEventNotification();
      PopSetupMixedRealitytNotification();
      PopSetupFullScrenVideoNotification();
      PopSetupUserPresencePredictionNotification();
      PopThermalHandlePreviousShutdown();
      PopCheckpointEfiRuntimeRedirected = (*(_BYTE *)(a2 + 264) & 2) != 0;
      TtmInit();
      if ( PopPlatformAoAc )
      {
        v25 = 1;
        EmClientQueryRuleState(EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS, &v25);
        if ( v25 == 2 )
          PopErrataReportingIncorrectLidState = 1;
      }
      PopBatteryQueueWork(1u);
      if ( (int)KsrGetFirmwareInformation(v35) >= 0 )
      {
        RtlInitUnicodeString(&v37, L"\\Callback\\SoftRestart");
        v39.Length = 48;
        v39.ObjectName = &v37;
        v39.RootDirectory = 0LL;
        v39.Attributes = 80;
        *(_OWORD *)&v39.SecurityDescriptor = 0LL;
        if ( ExCreateCallback(&CallbackObject, &v39, 0, 1u) >= 0 )
          ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopKsrCallback, 0LL);
      }
LABEL_5:
      v4 = 0;
    }
  }
  return v4 >= 0;
}
