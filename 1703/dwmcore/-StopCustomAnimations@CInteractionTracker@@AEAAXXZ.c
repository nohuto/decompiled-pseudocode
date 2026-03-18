/*
 * XREFs of ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016E97C
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016BD60 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016E91C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimations(CInteractionTracker *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < 2; ++i )
    CInteractionTracker::StopCustomAnimation(this, i);
}
