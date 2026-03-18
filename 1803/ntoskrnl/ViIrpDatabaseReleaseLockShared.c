/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x1402AB2E0
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x14082B304 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14082B39C (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViIrpDatabaseReleaseLockShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&ViIrpDatabaseLock);
  __writecr8(v1);
}
