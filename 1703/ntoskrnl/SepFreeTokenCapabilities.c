/*
 * XREFs of SepFreeTokenCapabilities @ 0x14002CEFC
 * Callers:
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x14051E5E0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1406F94E0 (SepDeReferenceSharedSidEntries.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
