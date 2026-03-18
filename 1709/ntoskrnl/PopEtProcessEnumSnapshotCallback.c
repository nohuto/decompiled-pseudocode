/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x1404579D0
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1404579D0 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1404579D0 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x140457AC0 (PopEtProcessSnapshotUpdate.c)
 *     PopEtIsrDpcQuery @ 0x140459780 (PopEtIsrDpcQuery.c)
 *     PsQueryProcessEnergyValues @ 0x140493140 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx
  _BYTE v7[432]; // [rsp+20h] [rbp-1C8h] BYREF

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
