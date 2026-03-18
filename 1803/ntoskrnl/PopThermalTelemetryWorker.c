/*
 * XREFs of PopThermalTelemetryWorker @ 0x140278E60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14014DB20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopCoolingTelemetryWorker @ 0x1402744FC (PopCoolingTelemetryWorker.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1405EA674 (PopThermalUpdatePassiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rdi
  __int64 v2; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    LOBYTE(v2) = *((_BYTE *)i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 63, v2);
    PopTraceThermalZonePassiveHistogram((__int64)i);
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  return (unsigned int)_InterlockedExchange(&dword_1403A9C88, 0);
}
