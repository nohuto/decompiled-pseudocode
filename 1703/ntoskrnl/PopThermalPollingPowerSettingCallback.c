/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x1401682C0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  char v0; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v0 = !PopPdcIdleResiliency || dword_14034BB2C != 1;
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
