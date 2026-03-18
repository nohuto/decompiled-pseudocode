/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180196E48
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180193CAC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1801965BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18019665C (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x180193AFC (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x180193FB0 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x180196CC8 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801CA140 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  __int64 v3; // rax
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 38) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this);
  }
  else
  {
    v3 = CInteractionTracker::CalculateInertiaCallbackValues((CScrollAnimation **)this, (__int64)v4);
    *(_OWORD *)((char *)this + 716) = *(_OWORD *)v3;
    *(_OWORD *)((char *)this + 732) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)((char *)this + 748) = *(_OWORD *)(v3 + 32);
    *(_QWORD *)((char *)this + 764) = *(_QWORD *)(v3 + 48);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
  InteractionSourceManager::OnInteractionTrackerTransitionToIdle((char *)this + 352, *((unsigned int *)this + 38));
  CInteractionTracker::SetState((__int64)this, 0);
}
