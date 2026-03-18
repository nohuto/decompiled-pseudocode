/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x1404CE654
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x14007FCDC (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1404CE510 (CmpRundownUnitOfWork.c)
 * Callees:
 *     <none>
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
