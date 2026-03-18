/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x140251960
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x14077C010 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14077C09C (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViIrpDatabaseReleaseLockShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&ViIrpDatabaseLock);
  __writecr8(v1);
}
