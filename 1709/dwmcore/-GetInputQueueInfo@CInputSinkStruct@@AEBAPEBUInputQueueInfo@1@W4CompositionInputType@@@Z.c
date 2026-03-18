/*
 * XREFs of ?GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z @ 0x1800BA540
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     _lambda_8818c77f10d734eae77f8593241f110e_::operator() @ 0x1801A0FE8 (_lambda_8818c77f10d734eae77f8593241f110e_--operator().c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CInputSinkStruct::GetInputQueueInfo(_DWORD *a1, int a2)
{
  _DWORD *v2; // rax

  v2 = a1 + 24;
  while ( a1 != v2 )
  {
    if ( a2 == *a1 )
      return a1;
    a1 += 6;
  }
  return 0LL;
}
