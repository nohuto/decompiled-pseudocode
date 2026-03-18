/*
 * XREFs of ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801812D0
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016C830 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180182AD0 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18002F614 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AnInitializeEngine@@YAXXZ @ 0x1800C6048 (-AnInitializeEngine@@YAXXZ.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::CScrollAnimation(CScrollAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  AnInitializeEngine();
  return this;
}
