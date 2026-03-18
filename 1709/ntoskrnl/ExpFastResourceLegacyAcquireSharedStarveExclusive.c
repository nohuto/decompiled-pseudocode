/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1402856A4
 * Callers:
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x140115FD0 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14013F0C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
