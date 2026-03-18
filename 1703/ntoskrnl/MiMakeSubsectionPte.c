/*
 * XREFs of MiMakeSubsectionPte @ 0x14017CF90
 * Callers:
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiInitializeFileOnlyPfn @ 0x140219044 (MiInitializeFileOnlyPfn.c)
 *     MiBuildImageControlArea @ 0x1404940B8 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1404946A0 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x14054AFA8 (MiInitializePrototypePtes.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
