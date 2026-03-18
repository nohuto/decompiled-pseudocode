/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x14017C7E0
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiResolveSharedZeroFault @ 0x140040630 (MiResolveSharedZeroFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     MiFillPteWithProto @ 0x140125368 (MiFillPteWithProto.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  return MiSwizzleInvalidPte(32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL));
}
