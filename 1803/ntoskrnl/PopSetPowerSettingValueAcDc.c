/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14051D68C
 * Callers:
 *     PopScanIdleList @ 0x140073E84 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x140185310 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1402785F0 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x14048B920 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x140526838 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140610E34 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x140611BE0 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140614350 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1406144D0 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14062806C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x140654C34 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x140762C88 (PopSetAwayModeStatus.c)
 *     PopNotifyLidStateChange @ 0x140762E00 (PopNotifyLidStateChange.c)
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerSettingValue @ 0x140764E90 (PdcPoSetPowerSettingValue.c)
 *     PopMonitorProcessBrightnessAction @ 0x14076C414 (PopMonitorProcessBrightnessAction.c)
 *     PopSetWin32kDisplayTimeout @ 0x14076DA68 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(LPCGUID SettingGuid, unsigned int a2, void *Src)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(SettingGuid, 0xFFFFFFFF, 0, a2, Src);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(SettingGuid, 0xFFFFFFFF, 1, a2, Src);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
