/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1404E900C
 * Callers:
 *     PopScanIdleList @ 0x1400B1278 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x14015A870 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x140241060 (PopErratumUpdateCallback.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x1405A000C (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x1405CAF18 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x1405CB168 (PopUpdateConsoleDisplayState.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405CC0B0 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x1405E2FB8 (PopEsPublishState.c)
 *     PopWnfMixedRealityCallback @ 0x1406F7C10 (PopWnfMixedRealityCallback.c)
 *     PopSetAwayModeStatus @ 0x1406FD814 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1406FF320 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerSettingValue @ 0x1406FF510 (PdcPoSetPowerSettingValue.c)
 *     PopMonitorProcessBrightnessAction @ 0x140708344 (PopMonitorProcessBrightnessAction.c)
 *     PopSessionWinlogonNotification @ 0x140709EF4 (PopSessionWinlogonNotification.c)
 *     PopSetWin32kDisplayTimeout @ 0x14070A07C (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
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
