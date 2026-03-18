/*
 * XREFs of ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E268
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18012C658 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18016C748 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E2C4 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedScale(CInteractionTracker *this, double a2)
{
  int v2; // eax
  char v3; // bl
  float v5; // xmm0_4
  CInteractionTracker *v6; // rcx

  v2 = *((_DWORD *)this + 35);
  v3 = 0;
  if ( !v2 )
    goto LABEL_4;
  if ( (unsigned int)(v2 - 2) <= 1 )
  {
    CInteractionTracker::TransitionToIdle(this);
LABEL_4:
    v3 = 1;
    LODWORD(v5) = CInteractionTracker::ClampValueToBoundary((__int64)this, 2LL, a2).m128_u32[0];
    CInteractionTracker::SetScale(v6, v5);
  }
  return v3;
}
