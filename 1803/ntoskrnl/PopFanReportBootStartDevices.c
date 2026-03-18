/*
 * XREFs of PopFanReportBootStartDevices @ 0x1408A5DDC
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PopSqmFanEnumeration @ 0x140626EDC (PopSqmFanEnumeration.c)
 */

void PopFanReportBootStartDevices()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
