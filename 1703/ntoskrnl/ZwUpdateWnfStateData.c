/*
 * XREFs of ZwUpdateWnfStateData @ 0x140181740
 * Callers:
 *     FsRtlSendModernAppTermination @ 0x140019CF0 (FsRtlSendModernAppTermination.c)
 *     PopThermalSxExit @ 0x1401387EC (PopThermalSxExit.c)
 *     BapdWriteEtwEvents @ 0x14014CABC (BapdWriteEtwEvents.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 *     PopBackgroundActivityPolicyCallback @ 0x14022A280 (PopBackgroundActivityPolicyCallback.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14022BDAC (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopThermalStandbyNotify @ 0x14022F5D4 (PopThermalStandbyNotify.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404206BC (PopEvaluateGlobalUserStatus.c)
 *     PspJobNotificationWorker @ 0x14044A260 (PspJobNotificationWorker.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140468A10 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiUEventBroadcastEventWorker @ 0x140469170 (PiUEventBroadcastEventWorker.c)
 *     PspEnforceLimits @ 0x140478970 (PspEnforceLimits.c)
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404A6744 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1404A6AA8 (PiUEventNotifyClientPendingEvent.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopDispatchNotificationsToList @ 0x1404C5F9C (PopDispatchNotificationsToList.c)
 *     PspChargeProcessWakeCounter @ 0x1405263E0 (PspChargeProcessWakeCounter.c)
 *     PopPerfBoostPowerRequest @ 0x1405818E0 (PopPerfBoostPowerRequest.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x140584DDC (PopUpdateConsoleDisplayState.c)
 *     PiDcContainerRequiresConfiguration @ 0x140594944 (PiDcContainerRequiresConfiguration.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     PopThermalHandlePreviousShutdown @ 0x1405A8504 (PopThermalHandlePreviousShutdown.c)
 *     PopNetEvaluationWorkerCallback @ 0x1405D0C70 (PopNetEvaluationWorkerCallback.c)
 *     PopEsUpdateSetting @ 0x1405D3C7C (PopEsUpdateSetting.c)
 *     PopEsPublishState @ 0x1405D5204 (PopEsPublishState.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405D5E60 (PopUpdateBackgroundCoolingStatus.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406817A8 (DbgkpStartSystemErrorHandler.c)
 *     FsRtlpHeatRegisterVolume @ 0x1406869D0 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14069642C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406964B8 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x140696600 (PiUEventSendDeviceInstallNotification.c)
 *     PopBatteryRemove @ 0x1406CAA10 (PopBatteryRemove.c)
 *     PopUpdateOverThrottledCount @ 0x1406CBF70 (PopUpdateOverThrottledCount.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406CC0BC (PopDiagNextCsSleepStudySession.c)
 *     PopPublishPowerButtonState @ 0x1406CFF9C (PopPublishPowerButtonState.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406D7DD0 (TtmpUpdatePrimaryDisplayWnf.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406E011C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1406E19D4 (PspSendNoWakeChargeLimitNotification.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PopCheckShutdownMarker @ 0x140824044 (PopCheckShutdownMarker.c)
 *     PopInitVideoWnfState @ 0x140825D4C (PopInitVideoWnfState.c)
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
