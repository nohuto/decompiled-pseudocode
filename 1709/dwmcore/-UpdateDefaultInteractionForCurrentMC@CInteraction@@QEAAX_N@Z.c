/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801A3FF8
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A33EC (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this, char a2)
{
  unsigned __int8 v2; // r8
  char v3; // al

  v2 = *((_BYTE *)this + 216);
  if ( (v2 & 8) == 0 )
  {
    v3 = 0;
    if ( !a2 )
      v3 = v2 >> 1;
    *((_BYTE *)this + 216) = v2 & 0xFB | (4 * (v3 & 1 | 2));
  }
}
