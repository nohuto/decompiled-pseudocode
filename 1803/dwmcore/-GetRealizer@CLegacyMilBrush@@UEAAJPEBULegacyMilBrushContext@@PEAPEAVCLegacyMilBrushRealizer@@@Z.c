/*
 * XREFs of ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1801B0500
 * Callers:
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1801618B4 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18001D964 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CA1F0 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetRealizer(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CLegacyMilBrushRealizer **a3)
{
  CManipulationFrame *v3; // rbx
  CLegacyMilBrushRealizer *v6; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (CManipulationFrame *)*((_QWORD *)this + 7);
  if ( !v3 )
  {
    v6 = (CLegacyMilBrushRealizer *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
    v3 = v6;
    if ( !v6 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(v6);
    *((_QWORD *)v3 + 12) = this;
    *(_QWORD *)v3 = &CBrushResourceRealizer::`vftable';
    CManipulationFrame::AddRef(v3);
    *((_QWORD *)this + 7) = v3;
  }
  *a3 = v3;
  (***((void (__fastcall ****)(_QWORD, const struct LegacyMilBrushContext *))this + 7))(*((_QWORD *)this + 7), a2);
  return 0LL;
}
