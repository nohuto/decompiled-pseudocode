/*
 * XREFs of ?CanReceiveInput@CInteraction@@QEBA_NK@Z @ 0x180091298
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInteraction::CanReceiveInput(CInteraction *this, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_QWORD *)this + 38)
    || (*(unsigned int (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)this + 80LL))(this, a2, 0LL) )
  {
    return 1;
  }
  return v2;
}
