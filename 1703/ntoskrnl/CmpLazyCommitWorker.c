/*
 * XREFs of CmpLazyCommitWorker @ 0x140669230
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 */

__int64 CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v2; // rax
  struct _KTHREAD *v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  struct _KTHREAD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rcx
  __int64 *v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+68h] [rbp+28h] BYREF

  v14 = 0;
  v13 = (__int64 *)&v12;
  v0 = 1;
  v12 = (__int64 *)&v12;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v2 = KeGetCurrentThread();
    --v2->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v3 = KeGetCurrentThread();
      --v3->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v4 = (__int64 *)CmpLazyCommitListHead;
      v5 = *(_QWORD *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || *(_QWORD *)(v5 + 8) != CmpLazyCommitListHead )
      {
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v5 + 8) = &CmpLazyCommitListHead;
      if ( v4 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( (int)CmpTransMgrCommit(v4[4], (__int64)(v4 - 4), &v14) < 0 )
      {
        v6 = (__int64 **)v13;
        if ( (__int64 **)*v13 != &v12 )
          __fastfail(3u);
        v4[1] = (__int64)v13;
        *v4 = (__int64)&v12;
        v0 = 0;
        *v6 = v4;
        v13 = v4;
      }
      else
      {
        CmpCleanupTransactionState(v4[4], v4 - 4, 4u, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v0 )
    {
      v7 = KeGetCurrentThread();
      --v7->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v8 = v12;
        v9 = (__int64 *)*v12;
        if ( (__int64 **)v12[1] != &v12 || (__int64 *)v9[1] != v12 )
          __fastfail(3u);
        v12 = (__int64 *)*v12;
        v9[1] = (__int64)&v12;
        if ( v8 == (__int64 *)&v12 )
          break;
        v10 = (__int64 **)qword_14036AEC8;
        if ( *(__int64 **)qword_14036AEC8 != &CmpLazyCommitListHead )
          __fastfail(3u);
        *v8 = (__int64)&CmpLazyCommitListHead;
        v8[1] = (__int64)v10;
        *v10 = v8;
        qword_14036AEC8 = (__int64)v8;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
