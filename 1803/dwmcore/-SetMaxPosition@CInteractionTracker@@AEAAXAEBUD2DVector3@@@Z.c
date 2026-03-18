/*
 * XREFs of ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196090
 * Callers:
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x18019505C (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196234 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180196500 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18019425C (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196234 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1801CA84C (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
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
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 352));
    CResource::InvalidateAnimationSources(this, 23);
  }
}
