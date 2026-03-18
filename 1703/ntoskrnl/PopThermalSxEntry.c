/*
 * XREFs of PopThermalSxEntry @ 0x14013C6B4
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14013C76C (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyEndTracking @ 0x14013C87C (PopThermalStandbyEndTracking.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140578F68 (PopThermalUpdatePassiveTimeTracking.c)
 */

void PopThermalSxEntry()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rsi
  __int64 v5; // rdx

  PopAcquirePolicyLock();
  PopThermalStandbyEndTracking(4LL);
  PopReleasePolicyLock(v1, v0, v2);
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
