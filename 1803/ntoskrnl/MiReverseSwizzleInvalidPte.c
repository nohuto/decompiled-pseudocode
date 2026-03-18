/*
 * XREFs of MiReverseSwizzleInvalidPte @ 0x1401A66D4
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiCopyHeaderIfResident @ 0x14004D648 (MiCopyHeaderIfResident.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x1400BF848 (MiReplacePageOfProtoPool.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1401A6244 (MiRewriteTrimPteAsDemandZero.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401A6800 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiAddRangeToCrashDump @ 0x140256F18 (MiAddRangeToCrashDump.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReverseSwizzleInvalidPte(__int64 a1)
{
  if ( qword_1403CB6E0 )
  {
    if ( (a1 & 0x10) != 0 )
      return a1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      return ~qword_1403CB6E0 & a1;
  }
  return a1;
}
