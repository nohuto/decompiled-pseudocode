/*
 * XREFs of _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x18009B138
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x18009D328 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180011CBC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 */

void __fastcall lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()(
        CGroupingStoryboard **a1,
        CAnimatedTransitionVisual **a2)
{
  CAnimatedTransitionVisual::SetBeginAlpha(a2[5], 0.0);
  *((_BYTE *)a2[5] + 971) = 1;
  *((_BYTE *)a2[5] + 984) = 1;
  CGroupingStoryboard::_SetUnifiedCenter(*a1, (struct CAnimationComponent *)a2);
}
