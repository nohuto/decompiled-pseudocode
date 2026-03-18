/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x1402781D0
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x1407BDF2C (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1407BDFC4 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViIrpDatabaseReleaseLockShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&ViIrpDatabaseLock);
  __writecr8(v1);
}
