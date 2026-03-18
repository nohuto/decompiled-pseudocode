/*
 * XREFs of HvpIncrementCellReferenceCount @ 0x14008D070
 * Callers:
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryGetBlockAddress @ 0x14008D0E0 (HvpMapEntryGetBlockAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpIncrementCellReferenceCount(PVOID *a1)
{
  LOBYTE(a1) = 8;
  CmpMarkLockTryAcquired(a1);
}
