/*
 * XREFs of MiMakeSubsectionPte @ 0x1401A666C
 * Callers:
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiInitializeFileOnlyPfns @ 0x14025DF18 (MiInitializeFileOnlyPfns.c)
 *     MiInitializePrototypePtes @ 0x1404BD1E0 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x1404BD514 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1404BDAA0 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
