/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18016EA3C
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x18018A050 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x18018A5B0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 * Callees:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18016E8E8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 */

char __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // r8

  result = 0;
  if ( *(_QWORD *)(a1 + 552) )
  {
    v3 = *(_QWORD *)(a1 + 544);
    if ( v3 )
      return CInteractionTracker::ShouldChainForAxis(a1, a2, v3, 0);
  }
  return result;
}
