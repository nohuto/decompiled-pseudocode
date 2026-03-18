/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140700938
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x14015C230 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
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
