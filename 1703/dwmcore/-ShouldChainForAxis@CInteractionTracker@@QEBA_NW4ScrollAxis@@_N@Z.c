/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18016E84C
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801824AC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180183350 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801838E0 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 * Callees:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18016E6EC (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 */

char __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1, int a2)
{
  char result; // al
  __int64 v3; // r8

  result = 0;
  if ( *(_QWORD *)(a1 + 520) )
  {
    v3 = *(_QWORD *)(a1 + 512);
    if ( v3 )
      return CInteractionTracker::ShouldChainForAxis(a1, a2, v3, 0);
  }
  return result;
}
