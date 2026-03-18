/*
 * XREFs of HvpDecrementCellReferenceCount @ 0x14008D19C
 * Callers:
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpDecrementCellReferenceCount(PVOID *a1)
{
  LOBYTE(a1) = 8;
  CmpMarkLockTryAcquired(a1);
}
