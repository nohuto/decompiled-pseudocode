/*
 * XREFs of ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180195F9C
 * Callers:
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801951E8 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x180195348 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180193CAC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x180196C68 (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180196D74 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 */

char __fastcall CInteractionTracker::SetCustomAnimation(CInteractionTracker *a1, __int64 a2, int a3)
{
  char v3; // di

  v3 = 0;
  if ( a2 )
    return CInteractionTracker::TransitionToCustomAnimation();
  if ( *((_DWORD *)a1 + 38) == 3 )
  {
    CInteractionTracker::StopCustomAnimation(a1, a3);
    CInteractionTracker::CheckForIdle(a1);
  }
  return v3;
}
