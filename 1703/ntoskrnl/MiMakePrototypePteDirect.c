/*
 * XREFs of MiMakePrototypePteDirect @ 0x14017CF4C
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400028AC (MiWriteSharedDemandZeroPte.c)
 *     MiTrimSystemImagePages @ 0x14006D3FC (MiTrimSystemImagePages.c)
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     MiFillPteWithProto @ 0x1400A810C (MiFillPteWithProto.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiResolveSharedZeroFault @ 0x1400C18A0 (MiResolveSharedZeroFault.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MiAddMappedPtes @ 0x1404976A0 (MiAddMappedPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  return MiSwizzleInvalidPte((a1 << 16) | 0x400);
}
