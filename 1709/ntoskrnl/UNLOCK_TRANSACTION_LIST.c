/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x140569544
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14010A3B0 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x140569428 (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
