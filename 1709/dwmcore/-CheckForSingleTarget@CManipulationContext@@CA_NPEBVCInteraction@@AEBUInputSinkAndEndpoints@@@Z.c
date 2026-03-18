/*
 * XREFs of ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x1801A1640
 * Callers:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x1801A1640 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x1801A2630 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2DEC (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x1801A1640 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
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
    || *((_QWORD *)a1 + 12) != *((_QWORD *)a2 + 4)
    || *((_QWORD *)a1 + 13) != *((_QWORD *)a2 + 5)
    || *((_QWORD *)a1 + 14) != *((_QWORD *)a2 + 6)
    || *((_QWORD *)a1 + 15) != *((_QWORD *)a2 + 7) )
  {
    return 0;
  }
  v3 = (const struct CInteraction *)*((_QWORD *)a1 + 33);
  result = 1;
  do
  {
    if ( !v3 )
      break;
    result = CManipulationContext::CheckForSingleTarget(v3, a2);
    v3 = (const struct CInteraction *)*((_QWORD *)v3 + 31);
  }
  while ( result );
  return result;
}
