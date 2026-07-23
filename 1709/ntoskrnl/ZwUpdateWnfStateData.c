/*
 * XREFs of ZwUpdateWnfStateData @ 0x140181140
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1401283C0 (FsRtlSendModernAppTermination.c)
 *     BapdWriteEtwEvents @ 0x1401342D8 (BapdWriteEtwEvents.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 *     PopBackgroundActivityPolicyCallback @ 0x14023D140 (PopBackgroundActivityPolicyCallback.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023F168 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x140243B00 (PopThermalStandbyNotify.c)
 *     PopThermalSxExit @ 0x140243C14 (PopThermalSxExit.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x1404E6D90 (PopDispatchNotificationsToList.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PspEnforceLimits @ 0x14050F6C0 (PspEnforceLimits.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14054A2BC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14054BDE4 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14054D6A8 (PiUEventNotifyClientPendingEvent.c)
 *     PspJobNotificationWorker @ 0x14057F6D0 (PspJobNotificationWorker.c)
 *     PiUEventBroadcastEventWorker @ 0x14059F660 (PiUEventBroadcastEventWorker.c)
 *     PopEvaluateGlobalUserStatus @ 0x1405A000C (PopEvaluateGlobalUserStatus.c)
 *     PopPerfBoostPowerRequest @ 0x1405B3B70 (PopPerfBoostPowerRequest.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405B898C (PopThermalHandlePreviousShutdown.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1405C5FBC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405C60D8 (PiDcContainerRequiresConfiguration.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x1405CAF18 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x1405CB168 (PopUpdateConsoleDisplayState.c)
 *     PopEsPublishState @ 0x1405E2FB8 (PopEsPublishState.c)
 *     PopEsUpdateSetting @ 0x1405E3034 (PopEsUpdateSetting.c)
 *     PopNetPublishWnfStateUpdate @ 0x1405EAEA4 (PopNetPublishWnfStateUpdate.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405F2590 (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406AC9C8 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x1406B1DD8 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1406C1FE4 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406C2070 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1406C21B8 (PiUEventSendDeviceInstallNotification.c)
 *     PopUpdateOverThrottledCount @ 0x1407009C0 (PopUpdateOverThrottledCount.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407014E4 (PopDiagNextCsSleepStudySession.c)
 *     PopPublishPowerButtonState @ 0x140707E14 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x14070A460 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x14070E158 (TtmpUpdatePrimaryDisplayWnf.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140717D84 (PspSendNoWakeChargeLimitNotification.c)
 *     PopCheckShutdownMarker @ 0x140827D14 (PopCheckShutdownMarker.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     PpDevCfgInit @ 0x14083EBC0 (PpDevCfgInit.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 *     PopInitVideoWnfState @ 0x1408573B4 (PopInitVideoWnfState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
