/*
 * XREFs of SepFreeTokenCapabilities @ 0x14001EFEC
 * Callers:
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x14048D160 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepDeReferenceSharedSidEntries @ 0x140730F30 (SepDeReferenceSharedSidEntries.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
