/*
 * XREFs of ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x180039228
 * Callers:
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180010EAC (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsRectEmpty(const struct tagRECT *a1)
{
  return a1->right <= a1->left || a1->bottom <= a1->top;
}
