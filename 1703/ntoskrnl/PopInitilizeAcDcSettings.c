/*
 * XREFs of PopInitilizeAcDcSettings @ 0x1401557BC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1404C2204 (PopFindPowerSettingConfiguration.c)
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
