/*
 * XREFs of ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18007E4D8
 * Callers:
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007E9D8 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

void __fastcall CAnimatedGlassSheet::OnRectUpdated(struct tagPOINT *this, const struct tagRECT *a2)
{
  LONG v4; // eax
  LONG v5; // eax
  struct tagSIZE v6; // [rsp+38h] [rbp+10h] BYREF

  v6.cx = a2->left;
  v6.cy = a2->top;
  CVisual::SetOffset(this, (const struct tagPOINT *)&v6);
  v4 = a2->right - a2->left;
  if ( v4 < 0 )
    v4 = 0;
  v6.cx = v4;
  v5 = a2->bottom - a2->top;
  if ( v5 < 0 )
    v5 = 0;
  v6.cy = v5;
  CVisual::SetSize((struct tagSIZE *)this, &v6);
}
