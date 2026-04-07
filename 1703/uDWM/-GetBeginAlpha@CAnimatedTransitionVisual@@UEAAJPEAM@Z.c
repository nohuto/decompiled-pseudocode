/*
 * XREFs of ?GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x180037B20
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180012634 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetBeginAlpha(CAnimatedTransitionVisual *this, float *a2)
{
  *a2 = *((float *)this + 232);
  return 0LL;
}
