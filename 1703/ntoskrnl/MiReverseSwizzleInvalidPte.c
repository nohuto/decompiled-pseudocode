/*
 * XREFs of MiReverseSwizzleInvalidPte @ 0x14017D030
 * Callers:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017D130 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReverseSwizzleInvalidPte(__int64 a1)
{
  if ( qword_14036C200 )
  {
    if ( (a1 & 0x10) != 0 )
      return a1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      return ~qword_14036C200 & a1;
  }
  return a1;
}
