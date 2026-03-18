/*
 * XREFs of CmpTransSearchAddLightWeightTrans @ 0x14054C228
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromHive @ 0x14054C1D4 (CmpTransSearchAddTransFromHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpTransReferenceTransaction @ 0x14054C710 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     CmpTransAllocateTrans @ 0x14054C8C4 (CmpTransAllocateTrans.c)
 *     CmpBindHiveToTrans @ 0x14054C9AC (CmpBindHiveToTrans.c)
 */

__int64 __fastcall CmpTransSearchAddLightWeightTrans(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // rbx
  int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rax
  signed __int64 Trans; // rax
  void *v14; // rsi
  signed __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rax

  v5 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = a1;
  v9 = 0;
  v10 = CmpTransReferenceTransaction();
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v11 = *(_QWORD *)(v5 + 16);
  if ( v11 )
  {
    *a4 = v11;
    v10 = 0;
  }
  else if ( a3 )
  {
    Trans = CmpTransAllocateTrans(v8, 0LL, 0LL, a2);
    v14 = (void *)Trans;
    if ( Trans )
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), Trans, 0LL);
      CurrentThread = KeGetCurrentThread();
      v17 = v15;
      if ( v15 )
      {
        v9 = 1;
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        v10 = (unsigned int)CmpBindHiveToTrans(a2, v17) != 0 ? -1072103421 : -1072103423;
      }
      else
      {
        v18 = (__int64)v14;
        v8 = 0LL;
        v14 = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        if ( (*(_DWORD *)(v18 + 48) & 7) != 0 )
        {
          v10 = -1072103422;
LABEL_20:
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return v10;
        }
        *(_DWORD *)(v18 + 48) = 128;
        v19 = (__int64 *)qword_1403CA368;
        if ( *(__int64 **)qword_1403CA368 != &CmpLightTransactionList )
          __fastfail(3u);
        *(_QWORD *)v18 = &CmpLightTransactionList;
        *(_QWORD *)(v18 + 8) = v19;
        *v19 = v18;
        qword_1403CA368 = v18;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        *a4 = v18;
        v10 = 0;
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0x72544D43u);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1072103422;
  }
  if ( v8 )
    CmpTransDereferenceTransaction(v8);
  if ( v9 )
    goto LABEL_20;
  return v10;
}
