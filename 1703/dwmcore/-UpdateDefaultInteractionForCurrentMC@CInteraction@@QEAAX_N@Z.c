/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180195038
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180192764 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801944C4 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this, char a2)
{
  char v2; // r8
  bool v3; // al

  v2 = *((_BYTE *)this + 200);
  if ( (v2 & 8) == 0 )
  {
    v3 = 0;
    if ( !a2 )
      v3 = (v2 & 2) != 0;
    *((_BYTE *)this + 200) &= ~4u;
    *((_BYTE *)this + 200) |= 4 * (v3 | 2);
  }
}
