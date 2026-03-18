/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1402AB270
 * Callers:
 *     IovpCompleteRequest2 @ 0x14081CC4C (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14081D89C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140820B50 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140820DE8 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14082B448 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14082B51C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
