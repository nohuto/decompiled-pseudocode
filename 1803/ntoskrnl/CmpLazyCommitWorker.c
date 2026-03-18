/*
 * XREFs of CmpLazyCommitWorker @ 0x1406F7190
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 */

_QWORD *CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // al
  struct _KTHREAD *v3; // rcx
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD **v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-8h]
  int v21; // [rsp+68h] [rbp+28h] BYREF

  v21 = 0;
  v20 = (__int64 *)&v19;
  v0 = 1;
  v19 = &v19;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v3 = KeGetCurrentThread();
  if ( v2 )
  {
    --v3->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v6 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v7 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v7 + 8) = &CmpLazyCommitListHead;
      if ( v6 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( (int)CmpTransMgrCommit(v6[4], (__int64)(v6 - 4), &v21) < 0 )
      {
        v8 = (__int64 **)v20;
        if ( (_QWORD ***)*v20 != &v19 )
          __fastfail(3u);
        v6[1] = (__int64)v20;
        *v6 = (__int64)&v19;
        v0 = 0;
        *v8 = v6;
        v20 = v6;
      }
      else
      {
        CmpCleanupTransactionState(v6[4], v6 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v14 = v19;
        if ( v19[1] != &v19 || (v15 = (__int64)*v19, (_QWORD **)(*v19)[1] != v19) )
          __fastfail(3u);
        v19 = (_QWORD **)*v19;
        *(_QWORD *)(v15 + 8) = &v19;
        if ( v14 == &v19 )
          break;
        v16 = (_QWORD *)qword_1403CA3A8;
        if ( *(__int64 **)qword_1403CA3A8 != &CmpLazyCommitListHead )
          __fastfail(3u);
        *v14 = &CmpLazyCommitListHead;
        v14[1] = v16;
        *v16 = v14;
        qword_1403CA3A8 = (__int64)v14;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD(v10, v9, v11, v12);
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL, v17, v18);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v3 = KeGetCurrentThread();
  }
  return KeLeaveCriticalRegionThread((__int64)v3);
}
