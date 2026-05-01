/*
 * XREFs of ?_CommitPlacement@CDragVisual@@AEAAXXZ @ 0x1802F283C
 * Callers:
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1802F3124 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1802F2804 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_CommitPlacement(CDragVisual *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17)) )
  {
    CDragVisual::_ClearVisualFeedback(this);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
  }
}
