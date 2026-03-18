/*
 * XREFs of PopThermalSxEntry @ 0x14014DA64
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14014DB20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyEndTracking @ 0x14014DCE4 (PopThermalStandbyEndTracking.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1405EA674 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopThermalSxEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rsi
  __int64 v3; // rdx

  PopAcquirePolicyLock(a1);
  PopThermalStandbyEndTracking(4LL);
  PopReleasePolicyLock();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    LOBYTE(v3) = *((_BYTE *)i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 63, v3);
    PopTraceThermalZonePassiveHistogram(i);
    *((_BYTE *)i + 504) = 1;
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
