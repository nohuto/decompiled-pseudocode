/*
 * XREFs of MiMakePrototypePteDirect @ 0x14017C7C0
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiResolveSharedZeroFault @ 0x140040630 (MiResolveSharedZeroFault.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiTrimSystemImagePages @ 0x1400DDEAC (MiTrimSystemImagePages.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiFillPteWithProto @ 0x140125368 (MiFillPteWithProto.c)
 *     MiWriteSharedDemandZeroPte @ 0x14012C2A4 (MiWriteSharedDemandZeroPte.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiAddMappedPtes @ 0x1404F7940 (MiAddMappedPtes.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  return MiSwizzleInvalidPte((a1 << 16) | 0x400);
}
