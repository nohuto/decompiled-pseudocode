/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370
 * Callers:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016AA60 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CMap@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@V?$CMapEqualHelper@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@@@@@QEAAHAEBV?$ComPtr@VCManipulation@@@WRL@Microsoft@@AEBV?$ComPtr@VCInteraction@@@34@@Z @ 0x18016ABC0 (-Add@-$CMap@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$ComPtr@VCInteraction@@@23@V-$CMapEqualH.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x1801A1830 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801A1F18 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x1801A21BC (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x1801A2630 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2DEC (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A33EC (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801A3ED0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800903B0 (-AddRef@CArrayBasedCoverageSet@@UEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(CArrayBasedCoverageSet **a1)
{
  CArrayBasedCoverageSet *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = **(void (***)(void))v1;
    if ( (char *)v2 == (char *)CArrayBasedCoverageSet::AddRef )
      CArrayBasedCoverageSet::AddRef(v1);
    else
      v2();
  }
}
