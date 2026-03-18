/*
 * XREFs of ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18004B100
 * Callers:
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1800A2898 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18004A92C (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CC240 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetRealizer(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CLegacyMilBrushRealizer **a3)
{
  CLegacyMilBrushRealizer *v6; // rax
  CLegacyMilBrushRealizer *v7; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 7) )
  {
    v6 = (CLegacyMilBrushRealizer *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
    v7 = v6;
    if ( !v6 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(v6);
    *((_QWORD *)v7 + 12) = this;
    *(_QWORD *)v7 = &CBrushResourceRealizer::`vftable';
    CManipulationFrame::AddRef(v7);
    *((_QWORD *)this + 7) = v7;
  }
  *a3 = (struct CLegacyMilBrushRealizer *)*((_QWORD *)this + 7);
  (***((void (__fastcall ****)(_QWORD, const struct LegacyMilBrushContext *))this + 7))(*((_QWORD *)this + 7), a2);
  return 0LL;
}
