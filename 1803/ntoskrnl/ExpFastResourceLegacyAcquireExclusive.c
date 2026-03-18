/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x140157E8C
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1400FFD70 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x1402BA100 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140158600 (ExAcquireFastResourceExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140159678 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v3; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(BugCheckParameter2);
  v3 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v3 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v3;
}
