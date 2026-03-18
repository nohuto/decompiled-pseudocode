/*
 * XREFs of HvpIncrementCellReferenceCount @ 0x140080FF0
 * Callers:
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryGetBlockAddress @ 0x140081210 (HvpMapEntryGetBlockAddress.c)
 * Callees:
 *     CmpMarkLockTryAcquired @ 0x1405A0710 (CmpMarkLockTryAcquired.c)
 */

void __fastcall HvpIncrementCellReferenceCount(PVOID *a1)
{
  LOBYTE(a1) = 8;
  CmpMarkLockTryAcquired(a1);
}
