/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x1406CBEE8
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x14014B360 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 */

void PopThermalZoneUpdateCoolingPolicy()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    PopAcquireRwLockExclusive(i + 432);
    IoCancelIrp(*(PIRP *)(i + 56));
    PopReleaseRwLock(i + 432);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
