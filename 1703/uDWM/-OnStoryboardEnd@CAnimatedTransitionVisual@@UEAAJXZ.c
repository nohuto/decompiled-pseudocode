/*
 * XREFs of ?OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180036BF0
 * Callers:
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180012B5C (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardEnd(CAnimatedTransitionVisual *this)
{
  *((_BYTE *)this + 985) = 0;
  return 0LL;
}
