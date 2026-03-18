/*
 * XREFs of ViIrpDatabaseAcquireLockShared @ 0x140278184
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x1407BDF2C (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1407BDFC4 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockShared(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockShared(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
