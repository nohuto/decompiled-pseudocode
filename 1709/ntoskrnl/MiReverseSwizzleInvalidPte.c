/*
 * XREFs of MiReverseSwizzleInvalidPte @ 0x14017C8D0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017C9D8 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReverseSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140388548 )
  {
    if ( (a1 & 0x10) != 0 )
      return a1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      return ~qword_140388548 & a1;
  }
  return a1;
}
