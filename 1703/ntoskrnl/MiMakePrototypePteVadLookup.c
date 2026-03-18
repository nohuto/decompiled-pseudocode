/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x14017CF60
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiFillPteWithProto @ 0x1400A810C (MiFillPteWithProto.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiResolveSharedZeroFault @ 0x1400C18A0 (MiResolveSharedZeroFault.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  return MiSwizzleInvalidPte(32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL));
}
