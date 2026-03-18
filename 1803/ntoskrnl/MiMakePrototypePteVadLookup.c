/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x1401A6634
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiResolveSharedZeroFault @ 0x14001E1D0 (MiResolveSharedZeroFault.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiFillPteWithProto @ 0x14003C58C (MiFillPteWithProto.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiExpandSharedZeroCluster @ 0x14013C370 (MiExpandSharedZeroCluster.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  return MiSwizzleInvalidPte(32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL));
}
