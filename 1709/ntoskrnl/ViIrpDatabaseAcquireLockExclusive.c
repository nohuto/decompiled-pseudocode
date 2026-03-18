/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x140278160
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407AFABC (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1407B06EC (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1407B39A0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1407B3C38 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1407BE070 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1407BE144 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
