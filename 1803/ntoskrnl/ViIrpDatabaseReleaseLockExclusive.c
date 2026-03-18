/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x1402AB2B8
 * Callers:
 *     IovpCompleteRequest2 @ 0x14081CC4C (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14081D89C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140820B50 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140820DE8 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14082B448 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14082B51C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ViIrpDatabaseLock);
  __writecr8(v1);
}
