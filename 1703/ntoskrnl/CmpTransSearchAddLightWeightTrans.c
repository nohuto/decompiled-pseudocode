/*
 * XREFs of CmpTransSearchAddLightWeightTrans @ 0x14042DCA4
 * Callers:
 *     CmpTransSearchAddTransFromHive @ 0x14042DBD4 (CmpTransSearchAddTransFromHive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpTransAllocateTrans @ 0x14042D530 (CmpTransAllocateTrans.c)
 *     CmpTransReferenceTransaction @ 0x14042DDF0 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
 *     CmpBindHiveToTrans @ 0x14042DE60 (CmpBindHiveToTrans.c)
 */

__int64 __fastcall CmpTransSearchAddLightWeightTrans(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // rbx
  int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rax
  char *Trans; // rax
  char *v14; // rsi
  signed __int64 v15; // rdi
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdi
  __int64 *v18; // rax
  struct _KTHREAD *CurrentThread; // rcx

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
    v14 = Trans;
    if ( Trans )
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), (signed __int64)Trans, 0LL);
      if ( v15 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = 1;
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        v10 = (unsigned int)CmpBindHiveToTrans(a2, v15) != 0 ? -1072103421 : -1072103423;
      }
      else
      {
        v16 = KeGetCurrentThread();
        v17 = (__int64)v14;
        v14 = 0LL;
        v8 = 0LL;
        --v16->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        if ( (*(_DWORD *)(v17 + 48) & 7) != 0 )
        {
          v10 = -1072103422;
LABEL_20:
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return v10;
        }
        *(_DWORD *)(v17 + 48) = 128;
        v18 = (__int64 *)qword_14036AE88;
        if ( *(__int64 **)qword_14036AE88 != &CmpLightTransactionList )
          __fastfail(3u);
        *(_QWORD *)v17 = &CmpLightTransactionList;
        *(_QWORD *)(v17 + 8) = v18;
        *v18 = v17;
        qword_14036AE88 = v17;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        *a4 = v17;
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
