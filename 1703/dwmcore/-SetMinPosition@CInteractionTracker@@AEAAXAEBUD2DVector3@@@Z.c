/*
 * XREFs of ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DDB0
 * Callers:
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x18012CB6C (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DC0C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E100 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CA00 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DC0C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x180188978 (-StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 */

void __fastcall CInteractionTracker::SetMinPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm0_4
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)((char *)this + 76) - *(_QWORD *)a2;
  if ( !v3 )
    v3 = *((unsigned int *)this + 21) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v3 )
  {
    *(_QWORD *)((char *)this + 76) = *(_QWORD *)a2;
    *((_DWORD *)this + 21) = *((_DWORD *)a2 + 2);
    CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(this);
    v4 = fmaxf(*((float *)this + 20), *((float *)this + 23));
    v6[0] = fmaxf(*((float *)this + 19), *((float *)this + 22));
    v5 = fmaxf(*((float *)this + 21), *((float *)this + 24));
    *(float *)&v6[1] = v4;
    *(float *)&v6[2] = v5;
    CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v6);
    if ( !*((_DWORD *)this + 35) )
      CChainingHelper::StartIdle((CInteractionTracker *)((char *)this + 328), this);
    CResource::InvalidateAnimationSources(this, 20LL);
  }
}
