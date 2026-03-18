/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025BF64
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140020280 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14014E340 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(ULONG_PTR BugCheckParameter2, char a2)
{
  _BYTE *OwnerEntryForLegacyShim; // rsi
  char v5; // bl

  OwnerEntryForLegacyShim = ExpAllocateOwnerEntryForLegacyShim();
  v5 = ExAcquireFastResourceSharedStarveExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, a2);
  if ( !v5 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v5;
}
