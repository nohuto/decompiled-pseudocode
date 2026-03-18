/*
 * XREFs of PopCoolingTelemetryWorker @ 0x1402744FC
 * Callers:
 *     PopThermalTelemetryWorker @ 0x140278E60 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14027E12C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1405EA674 (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopCoolingTelemetryWorker()
{
  __int64 i; // rbx
  __int64 v1; // rdx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) && *(_QWORD *)(i + 136) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          LOBYTE(v1) = *((_BYTE *)j + 16);
          PopThermalUpdatePassiveTimeTracking(j + 5, v1);
          PopTraceThermalRequestPassiveHistogram(j);
        }
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
