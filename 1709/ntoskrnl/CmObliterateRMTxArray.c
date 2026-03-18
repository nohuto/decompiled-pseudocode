/*
 * XREFs of CmObliterateRMTxArray @ 0x140693E78
 * Callers:
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 */

_QWORD ***__fastcall CmObliterateRMTxArray(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD ***result; // rax
  _QWORD **v12; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v13; // [rsp+28h] [rbp-8h]

  v13 = &v12;
  v12 = &v12;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 *)CmpLazyCommitListHead;
  while ( v3 != &CmpLazyCommitListHead )
  {
    v4 = v3 - 4;
    v3 = (__int64 *)*v3;
    if ( v4[8] == a1 )
    {
      v5 = v4 + 4;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v8 = v13;
      if ( *v13 != &v12 )
        __fastfail(3u);
      v5[1] = v13;
      *v5 = &v12;
      *v8 = v5;
      v13 = (_QWORD **)v5;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v9 = v12;
    if ( v12[1] != &v12 || (v10 = (__int64)*v12, (_QWORD **)(*v12)[1] != v12) )
      __fastfail(3u);
    v12 = (_QWORD **)*v12;
    *(_QWORD *)(v10 + 8) = &v12;
    result = &v12;
    if ( v9 == &v12 )
      break;
    CmpCleanupTransactionState(a1, v9 - 4, 8, 0);
  }
  return result;
}
