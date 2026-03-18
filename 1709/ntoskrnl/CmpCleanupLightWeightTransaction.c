/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1405689D4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14044B9BC (CmpCommitLightWeightTransaction.c)
 *     CmpAbortLightWeightTransaction @ 0x140568928 (CmpAbortLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 */

_QWORD *__fastcall CmpCleanupLightWeightTransaction(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *result; // rax

  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData(a1, a2);
  CmpUnlockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a1[7] )
    return (_QWORD *)CmpTransDereferenceTransaction(a1[7]);
  return result;
}
