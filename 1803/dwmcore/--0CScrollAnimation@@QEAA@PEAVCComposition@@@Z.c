/*
 * XREFs of ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801BDAD4
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x180194020 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801BF124 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18003AE00 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::CScrollAnimation(CScrollAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  return this;
}
