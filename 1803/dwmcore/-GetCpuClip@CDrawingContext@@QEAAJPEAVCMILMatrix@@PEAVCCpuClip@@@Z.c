/*
 * XREFs of ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006E250
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18006320C (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CDrawingContext::GetCpuClip(
        const struct CVisualTree **this,
        struct CMILMatrix *a2,
        CRectanglesShape **a3)
{
  CScopedClipStack *v3; // rdi
  CVisual *CurrentVisual; // rax
  struct _LIST_ENTRY *Blink; // rsi
  int TopCpuClipInScope; // eax
  unsigned int v9; // edi
  struct CShape *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (CScopedClipStack *)(this + 126);
  if ( *((_BYTE *)this[126] + 80 * (unsigned int)(*((_DWORD *)this + 258) - 1)) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
    Blink = CVisual::FindTreeData(CurrentVisual, this[816])[9].Blink;
    TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v3, &v11);
    v9 = TopCpuClipInScope;
    if ( TopCpuClipInScope < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TopCpuClipInScope, 0x344u);
      return v9;
    }
    CShapePtr::Release(a3 + 2);
    *a3 = v11;
    *((_BYTE *)a3 + 32) = 0;
    a3[1] = (CRectanglesShape *)Blink;
  }
  return 0;
}
