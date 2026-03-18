/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiPrefetchJumpVad @ 0x140213F48 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 *     MmHardFaultBytesRequired @ 0x140514370 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(char a1)
{
  unsigned int v1; // edx
  __int16 v3; // ax

  v1 = 1;
  if ( (a1 & 1) != 0 )
    return v1;
  v3 = MiReverseSwizzleInvalidPte();
  if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 )
    return v1;
  else
    return v1 & ((unsigned __int8)v3 >> 2);
}
