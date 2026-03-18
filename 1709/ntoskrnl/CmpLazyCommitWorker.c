/*
 * XREFs of CmpLazyCommitWorker @ 0x140693FA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x1405A51A4 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 */

_QWORD *CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax
  struct _KTHREAD *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 **v7; // rcx
  struct _KTHREAD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD **v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+68h] [rbp+28h] BYREF

  v14 = 0;
  v13 = (__int64 *)&v12;
  v0 = 1;
  v12 = &v12;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v4 = KeGetCurrentThread();
      --v4->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v5 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v6 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v6 + 8) = &CmpLazyCommitListHead;
      if ( v5 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( (int)CmpTransMgrCommit(v5[4], (__int64)(v5 - 4), &v14) < 0 )
      {
        v7 = (__int64 **)v13;
        if ( (_QWORD ***)*v13 != &v12 )
          __fastfail(3u);
        v5[1] = (__int64)v13;
        *v5 = (__int64)&v12;
        v0 = 0;
        *v7 = v5;
        v13 = v5;
      }
      else
      {
        CmpCleanupTransactionState(v5[4], v5 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v0 )
    {
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v9 = v12;
        if ( v12[1] != &v12 || (v10 = (__int64)*v12, (_QWORD **)(*v12)[1] != v12) )
          __fastfail(3u);
        v12 = (_QWORD **)*v12;
        *(_QWORD *)(v10 + 8) = &v12;
        if ( v9 == &v12 )
          break;
        v11 = (_QWORD *)qword_140386E68;
        if ( *(__int64 **)qword_140386E68 != &CmpLazyCommitListHead )
          __fastfail(3u);
        *v9 = &CmpLazyCommitListHead;
        v9[1] = v11;
        *v11 = v9;
        qword_140386E68 = (__int64)v9;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
