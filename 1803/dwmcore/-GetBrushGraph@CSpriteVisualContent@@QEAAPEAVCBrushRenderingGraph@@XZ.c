/*
 * XREFs of ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18009CCF0
 * Callers:
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800B8DC4 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

struct CBrushRenderingGraph *__fastcall CSpriteVisualContent::GetBrushGraph(CSpriteVisualContent *this, __int64 a2)
{
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(CSpriteVisualContent *, __int64))(*(_QWORD *)this + 304LL))(this, a2);
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 8);
}
