/*
 * XREFs of MiLocateCloneAddress @ 0x14007C278
 * Callers:
 *     MiReferenceCloneProto @ 0x140002838 (MiReferenceCloneProto.c)
 *     MiSharedVaToPartition @ 0x1400739A4 (MiSharedVaToPartition.c)
 *     MiGetPfnProtection @ 0x140078704 (MiGetPfnProtection.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiTrimThisWsle @ 0x1400FF1A0 (MiTrimThisWsle.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020ADC8 (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x14020E7A4 (MiSplitReducedCommitClonePage.c)
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
