/*
 * XREFs of CmpRunDownCmRM @ 0x140597B4C
 * Callers:
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmShutdownCmRM @ 0x140597B04 (CmShutdownCmRM.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     CmpDelayFreeCmRm @ 0x140597CC8 (CmpDelayFreeCmRm.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 */

void __fastcall CmpRunDownCmRM(__int64 *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  struct _KTHREAD *v8; // rax
  __int64 *v9; // rdx
  __int64 **v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD **v19; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v20; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v20 = &v19;
    v19 = &v19;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v5 = (__int64 *)CmpLazyCommitListHead;
    while ( v5 != &CmpLazyCommitListHead )
    {
      v14 = v5 - 4;
      v5 = (__int64 *)*v5;
      if ( (__int64 *)v14[8] == a1 )
      {
        v15 = v14 + 4;
        v16 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v17 = (_QWORD *)v15[1], (_QWORD *)*v17 != v15) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = v20;
        if ( *v20 != &v19 )
          __fastfail(3u);
        v15[1] = v20;
        *v15 = &v19;
        *v18 = v15;
        v20 = (_QWORD **)v15;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v6 = v19;
      if ( v19[1] != &v19 || (v7 = (__int64)*v19, (_QWORD **)(*v19)[1] != v19) )
        __fastfail(3u);
      v19 = (_QWORD **)*v19;
      *(_QWORD *)(v7 + 8) = &v19;
      if ( v6 == &v19 )
        break;
      CmpCleanupTransactionState(a1, v6 - 4, 4LL, 0LL);
    }
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpRmListLock);
    *((_DWORD *)a1 + 26) |= 8u;
    v9 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v10 = (__int64 **)a1[1], *v10 != a1) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    v11 = a1[10];
    if ( v11 )
    {
      *(_QWORD *)(v11 + 5400) = 0LL;
      a1[10] = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = (void *)a1[7];
    if ( v12 )
    {
      ObDereferenceObjectDeferDelete(v12);
      a1[7] = 0LL;
    }
    v13 = (void *)a1[5];
    if ( v13 )
    {
      ObDereferenceObjectDeferDelete(v13);
      a1[5] = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
