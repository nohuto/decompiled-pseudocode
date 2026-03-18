/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x14013F370
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14007DB80 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x140285AD0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x14013F3D0 (ExAcquireFastResourceExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v4; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(BugCheckParameter2, a2);
  v4 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v4 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v4;
}
