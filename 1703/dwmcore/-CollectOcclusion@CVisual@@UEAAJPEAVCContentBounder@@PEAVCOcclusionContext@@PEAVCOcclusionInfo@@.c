/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800877F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000B200 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C860 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180038E60 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18008B970 (-AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CNineGridBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800BFDA0 (-AddOcclusionInformation@CNineGridBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  CRenderData *v6; // rcx
  const struct D2D_SIZE_F *v8; // r8
  __int64 (__fastcall *v9)(CRenderData *, struct IDrawingContext *, const struct D2D_SIZE_F *); // rax
  int v10; // eax
  unsigned int v11; // ebx

  v6 = (CRenderData *)*((_QWORD *)this + 30);
  if ( !v6 )
    return 0LL;
  v8 = (const struct D2D_SIZE_F *)((char *)this + 128);
  v9 = *(__int64 (__fastcall **)(CRenderData *, struct IDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v6 + 136LL);
  if ( v9 == CRenderData::AddOcclusionInformation )
  {
    v10 = CRenderData::Draw(v6, a3);
  }
  else if ( v9 == CColorBrush::AddOcclusionInformation )
  {
    v10 = CColorBrush::AddOcclusionInformation(v6, a3, v8);
  }
  else if ( v9 == CPrimitiveGroup::AddOcclusionInformation )
  {
    v10 = CPrimitiveGroup::AddOcclusionInformation(v6, a3, v8);
  }
  else if ( v9 == CSurfaceBrush::AddOcclusionInformation )
  {
    v10 = CSurfaceBrush::AddOcclusionInformation(v6, a3, v8);
  }
  else if ( v9 == CNineGridBrush::AddOcclusionInformation )
  {
    v10 = CNineGridBrush::AddOcclusionInformation(v6, a3, v8);
  }
  else if ( v9 == CCompositionSurfaceBitmap::AddOcclusionInformation )
  {
    v10 = CCompositionSurfaceBitmap::AddOcclusionInformation(v6, a3, v8);
  }
  else
  {
    v10 = v9(v6, a3, v8);
  }
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC8Eu);
  return v11;
}
