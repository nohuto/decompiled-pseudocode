/*
 * XREFs of CmpRunDownCmRM @ 0x14054E698
 * Callers:
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmShutdownCmRM @ 0x14054E650 (CmShutdownCmRM.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     CmpDelayFreeCmRm @ 0x14054E814 (CmpDelayFreeCmRm.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 */

void __fastcall CmpRunDownCmRM(__int64 *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  struct _KTHREAD *v8; // rax
  __int64 *v9; // rdx
  __int64 **v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 **v17; // rax
  _QWORD **v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v19 = (__int64 *)&v18;
    v18 = &v18;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v5 = (__int64 *)CmpLazyCommitListHead;
    while ( v5 != &CmpLazyCommitListHead )
    {
      v14 = v5;
      v15 = v5;
      v5 = (__int64 *)*v5;
      if ( (__int64 *)v14[4] == a1 )
      {
        if ( (__int64 *)v5[1] != v15 || (v16 = (__int64 **)v15[1], *v16 != v15) )
          __fastfail(3u);
        *v16 = v5;
        v5[1] = (__int64)v16;
        v17 = (__int64 **)v19;
        if ( (_QWORD ***)*v19 != &v18 )
          __fastfail(3u);
        v15[1] = (__int64)v19;
        *v15 = (__int64)&v18;
        *v17 = v15;
        v19 = v15;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v6 = v18;
      if ( v18[1] != &v18 || (v7 = (__int64)*v18, (_QWORD **)(*v18)[1] != v18) )
        __fastfail(3u);
      v18 = (_QWORD **)*v18;
      *(_QWORD *)(v7 + 8) = &v18;
      if ( v6 == &v18 )
        break;
      CmpCleanupTransactionState(a1, v6 - 4, 4LL);
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
      *(_QWORD *)(v11 + 4192) = 0LL;
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
