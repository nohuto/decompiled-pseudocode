/*
 * XREFs of PopInitilizeAcDcSettings @ 0x140171BA4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x140074D80 (PopSetNotificationWork.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140519458 (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // bl
  _DWORD *PowerSettingConfiguration; // rax
  int Src; // [rsp+40h] [rbp+8h] BYREF

  Src = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, &Src);
  Src = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, &Src);
  v0 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(0x80u);
    PopSetNotificationWork(0x20u);
  }
}
