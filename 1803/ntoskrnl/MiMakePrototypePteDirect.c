/*
 * XREFs of MiMakePrototypePteDirect @ 0x1401A6614
 * Callers:
 *     MiResolveSharedZeroFault @ 0x14001E1D0 (MiResolveSharedZeroFault.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiFillPteWithProto @ 0x14003C58C (MiFillPteWithProto.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiExpandSharedZeroCluster @ 0x14013C370 (MiExpandSharedZeroCluster.c)
 *     MiTrimSystemImagePages @ 0x14013FAEC (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x140142210 (MiWriteSharedDemandZeroPte.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiAddMappedPtes @ 0x1404BC450 (MiAddMappedPtes.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  return MiSwizzleInvalidPte((a1 << 16) | 0x400);
}
