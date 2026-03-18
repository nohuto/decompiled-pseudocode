/*
 * XREFs of ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x180196ED0
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801CAADC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x180194020 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x180196CC8 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801CA2A4 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToInContact(CInteractionTracker *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 38);
  if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
  {
    CInteractionTracker::StopCustomAnimations(this);
    *((_DWORD *)this + 40) = 0;
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
    InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
      (char *)this + 352,
      *((unsigned int *)this + 38));
    *((_DWORD *)this + 166) = *((_DWORD *)this + 28);
    CInteractionTracker::SetState((__int64)this, 1u);
  }
}
