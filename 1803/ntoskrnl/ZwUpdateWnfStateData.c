/*
 * XREFs of ZwUpdateWnfStateData @ 0x1401AAD80
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x1400CC890 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x14014DE80 (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x14016E868 (BapdWriteEtwEvents.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     PopBackgroundActivityPolicyCallback @ 0x1402745E0 (PopBackgroundActivityPolicyCallback.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402764F4 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x140278DDC (PopThermalStandbyNotify.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14028E630 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PspChargeProcessWakeCounter @ 0x1404CE250 (PspChargeProcessWakeCounter.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14051F808 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14051FBB8 (PiUEventNotifyClientPendingEvent.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x140526838 (PopEvaluateGlobalUserStatus.c)
 *     PspJobNotificationWorker @ 0x14052DE40 (PspJobNotificationWorker.c)
 *     PspEnforceLimits @ 0x140536480 (PspEnforceLimits.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140541BF4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopDispatchNotificationsToList @ 0x140565C38 (PopDispatchNotificationsToList.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405D5428 (PiDcContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x1405EA4F0 (PiUEventBroadcastEventWorker.c)
 *     PopPolicyTimeChange @ 0x1405EF280 (PopPolicyTimeChange.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140601D88 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PopPerfBoostPowerRequest @ 0x1406102F0 (PopPerfBoostPowerRequest.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140610E34 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x140611BE0 (PopUpdateConsoleDisplayState.c)
 *     PopEvaluateInputSuppressionAction @ 0x140613CE0 (PopEvaluateInputSuppressionAction.c)
 *     PopThermalHandlePreviousShutdown @ 0x140627B68 (PopThermalHandlePreviousShutdown.c)
 *     PopSetupMixedRealitytNotification @ 0x140627CEC (PopSetupMixedRealitytNotification.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     PopNetPublishWnfStateUpdate @ 0x14064FD64 (PopNetPublishWnfStateUpdate.c)
 *     PiUEventSendDeviceInstallNotification @ 0x140652800 (PiUEventSendDeviceInstallNotification.c)
 *     PopEsUpdateSetting @ 0x140653330 (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x140654C34 (PopEsPublishState.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x14065561C (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x140711300 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x1407168A8 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140728018 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407280A4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopUpdateOverThrottledCount @ 0x140763400 (PopUpdateOverThrottledCount.c)
 *     PopDiagNextCsSleepStudySession @ 0x1407658EC (PopDiagNextCsSleepStudySession.c)
 *     PopNetRefreshWorkerCallback @ 0x14076B9E0 (PopNetRefreshWorkerCallback.c)
 *     PopPublishPowerButtonState @ 0x14076BC94 (PopPublishPowerButtonState.c)
 *     PopPreSleepNotifyWorker @ 0x14076C330 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x140771914 (TtmpUpdatePrimaryDisplayWnf.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140772E60 (TtmNotifySessionDisplayRequiredChange.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14077BDA4 (PspSendNoWakeChargeLimitNotification.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     PopCheckShutdownMarker @ 0x1408A8FA8 (PopCheckShutdownMarker.c)
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 *     PopInitVideoWnfState @ 0x1408C9488 (PopInitVideoWnfState.c)
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
