/*
 * XREFs of ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800226AC
 * Callers:
 *     ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800B1D9C (-ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z.c)
 * Callees:
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180082DD0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

struct CBrushRenderingGraph *__fastcall CSpriteVisualContent::GetBrushGraph(CSpriteVisualContent *this, _BOOL8 a2)
{
  __int64 (__fastcall *v3)(CEffectBrush *__hidden, bool); // rax

  LOBYTE(a2) = 1;
  v3 = *(__int64 (__fastcall **)(CEffectBrush *__hidden, bool))(*(_QWORD *)this + 272LL);
  if ( v3 == CEffectBrush::EnsureBrushGraph )
    CEffectBrush::EnsureBrushGraph(this, 1);
  else
    v3(this, a2);
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 8);
}
