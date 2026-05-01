/*
 * XREFs of ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x1802F275C
 * Callers:
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1802F3124 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1802F3870 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1802F2804 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_CancelPlacement(CDragVisual *this)
{
  CDragVisual::_ClearVisualFeedback(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17));
}
