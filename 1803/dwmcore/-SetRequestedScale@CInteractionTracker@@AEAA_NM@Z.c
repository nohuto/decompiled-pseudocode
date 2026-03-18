/*
 * XREFs of ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18019665C
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1801952D0 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x180193F88 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x1801966B0 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180196E48 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedScale(CInteractionTracker *this, double a2)
{
  char v3; // cl
  int v4; // eax
  float v5; // xmm0_4
  CInteractionTracker *v6; // rcx

  v3 = 0;
  v4 = *((_DWORD *)this + 38);
  if ( !v4 )
    goto LABEL_4;
  if ( (unsigned int)(v4 - 2) <= 1 )
  {
    CInteractionTracker::TransitionToIdle(this);
LABEL_4:
    LODWORD(v5) = CInteractionTracker::ClampValueToBoundary((__int64)this, 2LL, a2).m128_u32[0];
    CInteractionTracker::SetScale(v6, v5);
    return 1;
  }
  return v3;
}
