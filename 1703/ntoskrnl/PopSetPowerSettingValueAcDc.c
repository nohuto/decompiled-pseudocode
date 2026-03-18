/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1404C72B8
 * Callers:
 *     PopScanIdleList @ 0x140070F24 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x140166920 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14022DB00 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x14041DDF0 (PopSessionWinlogonNotification.c)
 *     PopEvaluateGlobalUserStatus @ 0x1404206BC (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x140584DDC (PopUpdateConsoleDisplayState.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1405A880C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x1405D5204 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1406CA058 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1406CB360 (PdcPoReportLidState.c)
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 *     PdcPoSetPowerSettingValue @ 0x1406CB540 (PdcPoSetPowerSettingValue.c)
 *     PopMonitorProcessBrightnessAction @ 0x1406D00AC (PopMonitorProcessBrightnessAction.c)
 *     PopSetWin32kDisplayTimeout @ 0x1406D4724 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
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
