/*
 * XREFs of MiLocateCloneAddress @ 0x140050C4C
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiGetPfnProtection @ 0x1400B4D10 (MiGetPfnProtection.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiTrimThisWsle @ 0x14012ABC0 (MiTrimThisWsle.c)
 *     MiReferenceCloneProto @ 0x140141EDC (MiReferenceCloneProto.c)
 *     MiSharedVaToPartition @ 0x1401528B0 (MiSharedVaToPartition.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
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
