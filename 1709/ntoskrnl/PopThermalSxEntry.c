/*
 * XREFs of PopThermalSxEntry @ 0x140243B58
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopThermalStandbyEndTracking @ 0x140243AA8 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1402481F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14070003C (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopThermalSxEntry(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rsi
  __int64 v5; // rdx

  PopAcquirePolicyLock(a1);
  PopThermalStandbyEndTracking(4LL, v1, v2);
  PopReleasePolicyLock();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 432);
    LOBYTE(v5) = *(_BYTE *)(i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 504, v5);
    PopTraceThermalZonePassiveHistogram(i);
    *(_BYTE *)(i + 504) = 1;
    PopReleaseRwLock(i + 432);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
