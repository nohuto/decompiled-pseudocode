/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiPrefetchJumpVad @ 0x14021BF50 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x1404A6A80 (MmHardFaultBytesRequired.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edx
  __int16 v5; // ax

  v3 = 1;
  if ( (a1 & 1) != 0 )
    return v3;
  v5 = MiReverseSwizzleInvalidPte(a1, 1LL, a3);
  if ( (v5 & 0x400) != 0 || (v5 & 0x800) != 0 )
    return v3;
  else
    return v3 & ((unsigned __int8)v5 >> 2);
}
