/*
 * XREFs of ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180036C10
 * Callers:
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180012BFC (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180012C90 (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimatedTransitionVisual::ShouldUseDComp(CAnimatedTransitionVisual *this)
{
  return *((_BYTE *)this + 976);
}
