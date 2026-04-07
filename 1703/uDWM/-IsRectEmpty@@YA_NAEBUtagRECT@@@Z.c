/*
 * XREFs of ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x18001700C
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180006958 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18000F780 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180036C3C (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800725C0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmpty(const struct tagRECT *a1)
{
  return a1->right <= a1->left || a1->bottom <= a1->top;
}
