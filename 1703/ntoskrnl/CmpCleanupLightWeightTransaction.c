/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x14042D494
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x14042D3E8 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140669900 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCleanupLightWeightTransaction(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 result; // rax

  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData(a1, a2);
  CmpUnlockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v5 = *a1;
  v6 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v6 != a1 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( a1[7] )
    return CmpTransDereferenceTransaction(a1[7]);
  return result;
}
