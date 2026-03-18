/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x1406D2C20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessSnapshotUpdate @ 0x1406D30EC (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx
  _OWORD v7[22]; // [rsp+20h] [rbp-178h] BYREF

  if ( a1[229] )
  {
    *a2 = a1;
    a2[3] = v7;
    CurrentThread = KeGetCurrentThread();
    v5 = a1[229] + 344LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v5, 0LL);
    PsQueryProcessEnergyValues(a1, v7);
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock(a1[229] + 344LL);
    *a2 = 0LL;
  }
  return 0LL;
}
