/*
 * XREFs of HvpDecrementCellReferenceCount @ 0x14008130C
 * Callers:
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 * Callees:
 *     CmpMarkLockTryAcquired @ 0x1405A0710 (CmpMarkLockTryAcquired.c)
 */

void __fastcall HvpDecrementCellReferenceCount(PVOID *a1)
{
  LOBYTE(a1) = 8;
  CmpMarkLockTryAcquired(a1);
}
