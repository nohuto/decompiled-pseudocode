/*
 * XREFs of ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x180196CC8
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180193288 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180196E48 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x180196ED0 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x180196C68 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimations(CInteractionTracker *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < 2; ++i )
    CInteractionTracker::StopCustomAnimation(this, i);
}
