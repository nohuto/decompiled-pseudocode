/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x140537C60
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x140537C60 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsQueryProcessEnergyValues @ 0x1404CE830 (PsQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140537C60 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x140537D50 (PopEtProcessSnapshotUpdate.c)
 *     PopEtIsrDpcQuery @ 0x14056DE40 (PopEtIsrDpcQuery.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx
  _OWORD v7[27]; // [rsp+20h] [rbp-1C8h] BYREF

  if ( !*(_DWORD *)(a2 + 4) && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback();
  if ( a1[232] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v7;
    CurrentThread = KeGetCurrentThread();
    v5 = a1[232] + 432LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v5, 0LL);
    if ( a1 == PsIdleProcess )
      PopEtIsrDpcQuery(a1, v7);
    else
      PsQueryProcessEnergyValues(a1, v7);
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock(a1[232] + 432LL);
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}
