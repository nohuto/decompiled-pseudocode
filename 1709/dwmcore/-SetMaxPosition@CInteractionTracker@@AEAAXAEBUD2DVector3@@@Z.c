/*
 * XREFs of ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DE54
 * Callers:
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x18016CC90 (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DFF8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E2C0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18016B7FC (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DFF8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x18019265C (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::SetMaxPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm0_4
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 11) - *(_QWORD *)a2;
  if ( !v3 )
    v3 = *((unsigned int *)this + 24) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 11) = *(_QWORD *)a2;
    *((_DWORD *)this + 24) = *((_DWORD *)a2 + 2);
    CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(this);
    v4 = fminf(*((float *)this + 20), *((float *)this + 23));
    v6[0] = fminf(*((float *)this + 19), *((float *)this + 22));
    v5 = fminf(*((float *)this + 21), *((float *)this + 24));
    *(float *)&v6[1] = v4;
    *(float *)&v6[2] = v5;
    CInteractionTracker::SetMinPosition(this, (const struct D2DVector3 *)v6);
    if ( !*((_DWORD *)this + 38) )
      CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 340), this);
    CResource::InvalidateAnimationSources(this);
  }
}
