/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x140251938
 * Callers:
 *     IovpCompleteRequest2 @ 0x14076DDF0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14076E8CC (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140771C00 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140771E98 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x14077C148 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14077C21C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ViIrpDatabaseLock);
  __writecr8(v1);
}
