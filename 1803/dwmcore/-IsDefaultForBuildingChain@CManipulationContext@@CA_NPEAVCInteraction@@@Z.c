/*
 * XREFs of ?IsDefaultForBuildingChain@CManipulationContext@@CA_NPEAVCInteraction@@@Z @ 0x1801DACAC
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801D9D68 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1801CE944 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 */

bool __fastcall CManipulationContext::IsDefaultForBuildingChain(struct CInteraction *a1)
{
  unsigned __int8 v1; // r8
  char v2; // r8

  if ( (unsigned int)CInteraction::GetTotalNumContacts(a1) )
    v2 = v1 >> 2;
  else
    v2 = v1 >> 1;
  return v2 & 1;
}
