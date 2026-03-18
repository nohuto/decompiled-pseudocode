/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801DCAC4
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801D9D68 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801DBF24 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this, char a2)
{
  unsigned __int8 v2; // r8
  char v3; // al

  v2 = *((_BYTE *)this + 184);
  if ( (v2 & 8) == 0 )
  {
    v3 = 0;
    if ( !a2 )
      v3 = v2 >> 1;
    *((_BYTE *)this + 184) = v2 & 0xFB | (4 * (v3 & 1 | 2));
  }
}
