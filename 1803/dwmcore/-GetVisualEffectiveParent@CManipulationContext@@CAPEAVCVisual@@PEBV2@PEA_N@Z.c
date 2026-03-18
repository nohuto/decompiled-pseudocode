/*
 * XREFs of ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801DA868
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801D9D68 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801DA378 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801DA5E4 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801DACD8 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

struct CVisual *__fastcall CManipulationContext::GetVisualEffectiveParent(const struct CVisual *a1, bool *a2)
{
  struct CInteraction *InteractionInternal; // r10
  CVisual *v3; // r11
  struct CInteraction *v4; // rax
  char v5; // cl
  bool v6; // dl
  CVisual *v7; // r10
  struct CInteraction *v8; // rax

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( v3 )
    v4 = CVisual::GetInteractionInternal(v3);
  else
    v4 = 0LL;
  v5 = 1;
  v6 = InteractionInternal && (*((_BYTE *)InteractionInternal + 184) & 4) != 0;
  if ( !v4 || (*((_BYTE *)v4 + 184) & 4) == 0 )
    v5 = 0;
  v7 = 0LL;
  if ( !v6 )
    v7 = v3;
  if ( v5 )
  {
    do
    {
      if ( !v7 )
        break;
      v7 = (CVisual *)*((_QWORD *)v7 + 10);
      v8 = v7 ? CVisual::GetInteractionInternal(v7) : 0LL;
    }
    while ( v8 && (*((_BYTE *)v8 + 184) & 4) != 0 );
  }
  return v7;
}
