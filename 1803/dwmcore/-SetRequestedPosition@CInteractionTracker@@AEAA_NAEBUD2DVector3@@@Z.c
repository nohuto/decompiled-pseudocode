/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1801965BC
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x180195104 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTER.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x180195178 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x180193F88 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801963D8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180196E48 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1801CA84C (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  char v4; // cl
  int v5; // eax
  unsigned __int32 v6; // xmm0_4
  double v7; // xmm2_8
  __int64 v8; // rcx
  CInteractionTracker *v9; // rcx
  _DWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 38);
  if ( !v5 )
    goto LABEL_4;
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    CInteractionTracker::TransitionToIdle(this);
LABEL_4:
    v6 = CInteractionTracker::ClampValueToBoundary((__int64)this, 0LL, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a2)).m128_u32[0];
    *(_QWORD *)&v7 = *((unsigned int *)a2 + 1);
    v11[0] = v6;
    v11[1] = CInteractionTracker::ClampValueToBoundary(v8, 1LL, v7).m128_u32[0];
    v11[2] = 0;
    CInteractionTracker::SetPosition(v9, (const struct D2DVector3 *)v11);
    InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 352));
    return 1;
  }
  return v4;
}
