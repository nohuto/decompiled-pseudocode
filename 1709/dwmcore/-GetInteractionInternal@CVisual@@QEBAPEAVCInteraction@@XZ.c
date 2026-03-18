/*
 * XREFs of ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18004F5FC (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18004F630 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180054C68 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180054C94 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801968BC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A1A94 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z @ 0x1801A1D18 (-GetVisualEffectiveParent@CManipulationContext@@CAPEAVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801A1F50 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801A239C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801A279C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801A3ED0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1801A4028 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CVisual::GetInteractionInternal(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v1 + 4) & 0x2000000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x7000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(struct CInteraction **)(i + 4);
}
