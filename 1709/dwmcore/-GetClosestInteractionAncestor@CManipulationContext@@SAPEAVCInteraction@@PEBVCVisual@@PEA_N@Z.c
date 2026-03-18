/*
 * XREFs of ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A1A94
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801A1F50 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A33EC (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801A3ED0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801A1D18 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 */

struct CInteraction *__fastcall CManipulationContext::GetClosestInteractionAncestor(const struct CVisual *a1, bool *a2)
{
  CArrayBasedCoverageSet *v2; // rbx
  CVisual *VisualEffectiveParent; // rdi
  CArrayBasedCoverageSet *InteractionInternal; // rax
  bool *v5; // rdx
  CArrayBasedCoverageSet *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(a1, a2);
  if ( VisualEffectiveParent )
  {
    do
    {
      InteractionInternal = CVisual::GetInteractionInternal(VisualEffectiveParent);
      if ( *Microsoft::WRL::ComPtr<CInteraction>::operator=(&v7, InteractionInternal) )
        break;
      VisualEffectiveParent = CManipulationContext::GetVisualEffectiveParent(VisualEffectiveParent, v5);
    }
    while ( VisualEffectiveParent );
    v2 = v7;
  }
  if ( v2 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return v2;
}
