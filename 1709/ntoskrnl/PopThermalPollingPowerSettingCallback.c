/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x14015CE00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  char v0; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v0 = !PopPdcIdleResiliency || dword_1403661AC != 1;
  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != v0 )
  {
    PopThermalPollingWakesAllowed = v0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
    {
      PopAcquireRwLockExclusive(i + 432);
      if ( *(_DWORD *)(i + 232) || (*(_BYTE *)(i + 65) & 1) != 0 && *(_DWORD *)(i + 104) )
        IoCancelIrp(*(PIRP *)(i + 56));
      PopReleaseRwLock(i + 432);
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalLock);
  return 0LL;
}
