/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x1402518F0
 * Callers:
 *     IovpCompleteRequest2 @ 0x14076DDF0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14076E8CC (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140771C00 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140771E98 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14077C148 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14077C21C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
