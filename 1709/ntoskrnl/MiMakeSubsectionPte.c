/*
 * XREFs of MiMakeSubsectionPte @ 0x14017C818
 * Callers:
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiInitializeFileOnlyPfn @ 0x140223308 (MiInitializeFileOnlyPfn.c)
 *     MiInitializePrototypePtes @ 0x14048DF98 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x1404FA468 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1404FAAC0 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
