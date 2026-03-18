/*
 * XREFs of PopThermalCoolingPowerSettingCallback @ 0x14014B360
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1406CBEE8 (PopThermalZoneUpdateCoolingPolicy.c)
 */

__int64 __fastcall PopThermalCoolingPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v6; // r9
  int v7; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v6 = *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_SYSTEM_COOLING_POLICY.Data4 - a1[1];
  if ( v6 || a3 != 4 )
  {
    v7 = dword_14034BB68;
  }
  else
  {
    v7 = *a2;
    dword_14034BB68 = *a2;
  }
  if ( PopPlatformAoAc && !PopConsoleDisplayState )
    v7 = 1;
  if ( v7 != PopCoolingMode )
  {
    PopCoolingMode = v7;
    PopThermalZoneUpdateCoolingPolicy();
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalLock);
  return 0LL;
}
