/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x1405CAFE0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopEsWorkItemSchedule @ 0x1405C9C98 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    dword_1403661F0 = *a2;
    if ( (unsigned int)dword_1403661F0 > 0x64 )
      dword_1403661F0 = 100;
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v4;
}
