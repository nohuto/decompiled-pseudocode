/*
 * XREFs of PopThermalTelemetryWorker @ 0x140243D30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopCoolingTelemetryWorker @ 0x14023CF1C (PopCoolingTelemetryWorker.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1402481F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14070003C (PopThermalUpdatePassiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  __int64 v2; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 432);
    LOBYTE(v2) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 504, v2);
    PopTraceThermalZonePassiveHistogram(i);
    PopReleaseRwLock(i + 432);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  return (unsigned int)_InterlockedExchange(&dword_1403652C8, 0);
}
