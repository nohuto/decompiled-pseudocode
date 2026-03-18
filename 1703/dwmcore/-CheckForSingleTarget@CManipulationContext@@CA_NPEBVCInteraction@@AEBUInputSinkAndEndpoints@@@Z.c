/*
 * XREFs of ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180192A60
 * Callers:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180192A60 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180193728 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180193EC4 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180192A60 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
 */

bool __fastcall CManipulationContext::CheckForSingleTarget(
        const struct CInteraction *a1,
        const struct InputSinkAndEndpoints *a2)
{
  const struct CInteraction *v3; // rdi
  bool result; // al

  if ( *((_QWORD *)a1 + 8) != *(_QWORD *)a2
    || *((_QWORD *)a1 + 9) != *((_QWORD *)a2 + 1)
    || *((_QWORD *)a1 + 10) != *((_QWORD *)a2 + 2)
    || *((_QWORD *)a1 + 11) != *((_QWORD *)a2 + 3)
    || *((_DWORD *)a1 + 24) != *((_DWORD *)a2 + 8)
    || *((_DWORD *)a1 + 25) != *((_DWORD *)a2 + 9)
    || *((_DWORD *)a1 + 26) != *((_DWORD *)a2 + 10)
    || *((_DWORD *)a1 + 27) != *((_DWORD *)a2 + 11) )
  {
    return 0;
  }
  v3 = (const struct CInteraction *)*((_QWORD *)a1 + 31);
  result = 1;
  do
  {
    if ( !v3 )
      break;
    result = CManipulationContext::CheckForSingleTarget(v3, a2);
    v3 = (const struct CInteraction *)*((_QWORD *)v3 + 29);
  }
  while ( result );
  return result;
}
