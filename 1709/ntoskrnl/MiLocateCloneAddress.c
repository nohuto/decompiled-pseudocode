/*
 * XREFs of MiLocateCloneAddress @ 0x1400EA120
 * Callers:
 *     MiTrimThisWsle @ 0x1400110FC (MiTrimThisWsle.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiGetPfnProtection @ 0x1400E69D0 (MiGetPfnProtection.c)
 *     MiReferenceCloneProto @ 0x1400EA030 (MiReferenceCloneProto.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiComputePageCommitment @ 0x140112BF0 (MiComputePageCommitment.c)
 *     MiSharedVaToPartition @ 0x140132CC0 (MiSharedVaToPartition.c)
 *     MiCheckCommitReleaseFromVad @ 0x140211C90 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x140215F00 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 912);
  while ( result )
  {
    if ( a2 > result[4] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a2 >= result[3] )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return 0LL;
}
