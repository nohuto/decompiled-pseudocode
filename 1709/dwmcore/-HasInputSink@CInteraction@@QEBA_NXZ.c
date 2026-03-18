/*
 * XREFs of ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x18009127C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteraction::HasInputSink(CInteraction *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 16);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 96);
  return v2 != 0;
}
