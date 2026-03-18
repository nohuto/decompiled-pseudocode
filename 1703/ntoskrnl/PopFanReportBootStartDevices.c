/*
 * XREFs of PopFanReportBootStartDevices @ 0x140825F90
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     PopSqmFanEnumeration @ 0x1406D6880 (PopSqmFanEnumeration.c)
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
