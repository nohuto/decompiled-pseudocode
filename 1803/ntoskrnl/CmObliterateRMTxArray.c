/*
 * XREFs of CmObliterateRMTxArray @ 0x1406F706C
 * Callers:
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 */

_QWORD ***__fastcall CmObliterateRMTxArray(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 **v6; // rax
  __int64 **v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD ***result; // rax
  _QWORD **v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-8h]

  v12 = (__int64 *)&v11;
  v11 = &v11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 *)CmpLazyCommitListHead;
  while ( v3 != &CmpLazyCommitListHead )
  {
    v4 = v3;
    v5 = v3;
    v3 = (__int64 *)*v3;
    if ( v4[4] == a1 )
    {
      if ( (__int64 *)v3[1] != v5 || (v6 = (__int64 **)v5[1], *v6 != v5) )
        __fastfail(3u);
      *v6 = v3;
      v3[1] = (__int64)v6;
      v7 = (__int64 **)v12;
      if ( (_QWORD ***)*v12 != &v11 )
        __fastfail(3u);
      v5[1] = (__int64)v12;
      *v5 = (__int64)&v11;
      *v7 = v5;
      v12 = v5;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v8 = v11;
    if ( v11[1] != &v11 || (v9 = (__int64)*v11, (_QWORD **)(*v11)[1] != v11) )
      __fastfail(3u);
    v11 = (_QWORD **)*v11;
    *(_QWORD *)(v9 + 8) = &v11;
    result = &v11;
    if ( v8 == &v11 )
      break;
    CmpCleanupTransactionState(a1, v8 - 4, 8, 0);
  }
  return result;
}
