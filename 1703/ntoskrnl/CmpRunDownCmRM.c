/*
 * XREFs of CmpRunDownCmRM @ 0x1404CA648
 * Callers:
 *     CmShutdownCmRM @ 0x1404CA600 (CmShutdownCmRM.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpDelayFreeCmRm @ 0x1404CA7C4 (CmpDelayFreeCmRm.c)
 */

void __fastcall CmpRunDownCmRM(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rax
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int64 *v14; // rax
  __int64 ****v15; // rdx
  __int64 ***v16; // rax
  __int64 **v17; // r8
  _QWORD *v18; // rdx
  __int64 *v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v20; // [rsp+28h] [rbp-8h]

  if ( a1 && !*(_DWORD *)(a1 + 64) )
  {
    v20 = &v19;
    v19 = (__int64 *)&v19;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v5 = (__int64 *)CmpLazyCommitListHead;
    while ( v5 != &CmpLazyCommitListHead )
    {
      v14 = v5 - 4;
      v5 = (__int64 *)*v5;
      if ( v14[8] == a1 )
      {
        v15 = (__int64 ****)v14[5];
        v16 = (__int64 ***)(v14 + 4);
        v17 = *v16;
        if ( (*v16)[1] != (__int64 *)v16 || *v15 != v16 )
          __fastfail(3u);
        *v15 = (__int64 ***)v17;
        v17[1] = (__int64 *)v15;
        v18 = v20;
        if ( *v20 != (__int64 *)&v19 )
          __fastfail(3u);
        v16[1] = v20;
        *v16 = &v19;
        *v18 = v16;
        v20 = (__int64 **)v16;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v6 = v19;
      v7 = (__int64 *)*v19;
      if ( (__int64 **)v19[1] != &v19 || (__int64 *)v7[1] != v19 )
        __fastfail(3u);
      v19 = (__int64 *)*v19;
      v7[1] = (__int64)&v19;
      if ( v6 == (__int64 *)&v19 )
        break;
      CmpCleanupTransactionState(a1, v6 - 4, 4u, 0);
    }
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpRmListLock);
    *(_DWORD *)(a1 + 104) |= 8u;
    v9 = *(_QWORD *)a1;
    v10 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v10 != a1 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 5400) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = *(void **)(a1 + 56);
    if ( v12 )
    {
      ObDereferenceObjectDeferDelete(v12);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v13 = *(void **)(a1 + 40);
    if ( v13 )
    {
      ObDereferenceObjectDeferDelete(v13);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
