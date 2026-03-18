/*
 * XREFs of PopThermalTelemetryWorker @ 0x14022F650
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14013C76C (PopTraceThermalZonePassiveHistogram.c)
 *     PopCoolingTelemetryWorker @ 0x14022A06C (PopCoolingTelemetryWorker.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140578F68 (PopThermalUpdatePassiveTimeTracking.c)
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
  return (unsigned int)_InterlockedExchange(&dword_14034AB08, 0);
}
