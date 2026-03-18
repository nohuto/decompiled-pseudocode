/*
 * XREFs of ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18007DAF0
 * Callers:
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037528 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18007D8B8 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800C1B10 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetRealizer(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CLegacyMilBrushRealizer **a3)
{
  CLegacyMilBrushRealizer *v5; // rax
  CLegacyMilBrushRealizer *v6; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 7) )
  {
    v5 = (CLegacyMilBrushRealizer *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
    v6 = v5;
    if ( !v5 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(v5);
    *((_QWORD *)v6 + 12) = this;
    *(_QWORD *)v6 = &CBrushResourceRealizer::`vftable';
    CManipulationFrame::AddRef(v6);
    *((_QWORD *)this + 7) = v6;
  }
  *a3 = (struct CLegacyMilBrushRealizer *)*((_QWORD *)this + 7);
  (***((void (__fastcall ****)(_QWORD, const struct LegacyMilBrushContext *))this + 7))(*((_QWORD *)this + 7), a2);
  return 0LL;
}
