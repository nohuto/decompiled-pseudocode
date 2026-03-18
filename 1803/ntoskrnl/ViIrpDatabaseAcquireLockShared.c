/*
 * XREFs of ViIrpDatabaseAcquireLockShared @ 0x1402AB294
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x14082B304 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14082B39C (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockShared(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockShared(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
