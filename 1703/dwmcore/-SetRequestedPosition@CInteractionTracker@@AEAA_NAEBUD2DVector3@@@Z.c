/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E1BC
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x18012C574 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTER.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18012C5EC (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18016C748 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DF54 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180188978 (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  int v2; // eax
  char v3; // bl
  unsigned __int32 v6; // xmm0_4
  double v7; // xmm2_8
  __int64 v8; // rcx
  CInteractionTracker *v9; // rcx
  _DWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 35);
  v3 = 0;
  if ( !v2 )
    goto LABEL_4;
  if ( (unsigned int)(v2 - 2) <= 1 )
  {
    CInteractionTracker::TransitionToIdle(this);
LABEL_4:
    v3 = 1;
    v6 = CInteractionTracker::ClampValueToBoundary((__int64)this, 0LL, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a2)).m128_u32[0];
    *(_QWORD *)&v7 = *((unsigned int *)a2 + 1);
    v11[0] = v6;
    v11[1] = CInteractionTracker::ClampValueToBoundary(v8, 1LL, v7).m128_u32[0];
    v11[2] = 0;
    CInteractionTracker::SetPosition(v9, (const struct D2DVector3 *)v11);
    CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 328), this);
  }
  return v3;
}
