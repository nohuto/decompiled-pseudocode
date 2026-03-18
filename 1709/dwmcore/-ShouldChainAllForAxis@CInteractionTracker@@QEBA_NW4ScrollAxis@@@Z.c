/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18016E7FC
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18016E824 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ShouldChainAllForAxis(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = 0LL;
  if ( *(_QWORD *)(a1 + 552) )
  {
    v3 = *(_QWORD *)(a1 + 544);
    if ( v3 )
      return CInteractionTracker::ShouldChainAllForAxis(a1, a2, v3);
  }
  return result;
}
