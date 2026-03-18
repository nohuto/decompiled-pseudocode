/*
 * XREFs of IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140017760 (MiResolvePrivateZeroFault.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiPrefetchJumpVad @ 0x1402580D8 (MiPrefetchJumpVad.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MmHardFaultBytesRequired @ 0x1405B6CC0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall IS_PTE_NOT_DEMAND_ZERO(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  __int16 v6; // ax

  v4 = 1;
  if ( (a1 & 1) != 0 )
    return v4;
  v6 = MiReverseSwizzleInvalidPte(a1, 1LL, a3, a4);
  if ( (v6 & 0x400) != 0 || (v6 & 0x800) != 0 )
    return v4;
  else
    return v4 & ((unsigned __int8)v6 >> 2);
}
