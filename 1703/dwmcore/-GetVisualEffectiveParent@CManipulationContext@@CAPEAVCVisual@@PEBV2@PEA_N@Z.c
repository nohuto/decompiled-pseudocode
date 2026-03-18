/*
 * XREFs of ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x180192FF8
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180192764 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180192C48 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180192E78 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180193444 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

struct CVisual *__fastcall CManipulationContext::GetVisualEffectiveParent(const struct CVisual *a1, bool *a2)
{
  CVisual *v2; // r10
  struct CInteraction *InteractionInternal; // r11
  struct CInteraction *v4; // rax
  char v5; // cl
  char v6; // dl
  struct CInteraction *v7; // rax

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( v2 )
    v4 = CVisual::GetInteractionInternal(v2);
  else
    v4 = 0LL;
  v5 = 1;
  if ( !InteractionInternal || (v6 = 1, (*((_BYTE *)InteractionInternal + 200) & 4) == 0) )
    v6 = 0;
  if ( !v4 || (*((_BYTE *)v4 + 200) & 4) == 0 )
    v5 = 0;
  if ( v6 )
    v2 = 0LL;
  if ( v5 )
  {
    do
    {
      if ( !v2 )
        break;
      v2 = (CVisual *)*((_QWORD *)v2 + 10);
      v7 = v2 ? CVisual::GetInteractionInternal(v2) : 0LL;
    }
    while ( v7 && (*((_BYTE *)v7 + 200) & 4) != 0 );
  }
  return v2;
}
