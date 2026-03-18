/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180053AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180027FA0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180029790 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180070C30 (-AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  unsigned int v5; // ebx
  CPrimitiveGroup *v7; // rcx
  const struct D2D_SIZE_F *v9; // r8
  __int64 (__fastcall *v10)(CRenderData *, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  int v11; // eax

  v5 = 0;
  v7 = (CPrimitiveGroup *)*((_QWORD *)this + 30);
  if ( v7 )
  {
    v9 = (const struct D2D_SIZE_F *)((char *)this + 132);
    v10 = *(__int64 (__fastcall **)(CRenderData *, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v7 + 152LL);
    if ( v10 == CRenderData::AddOcclusionInformation )
    {
      v11 = CRenderData::Draw(v7, (__int64)a3, 2);
    }
    else if ( v10 == CPrimitiveGroup::AddOcclusionInformation )
    {
      v11 = CPrimitiveGroup::AddOcclusionInformation(v7, a3, v9);
    }
    else if ( v10 == CColorBrush::AddOcclusionInformation )
    {
      v11 = CColorBrush::AddOcclusionInformation(v7, a3, v9);
    }
    else if ( v10 == CSurfaceBrush::AddOcclusionInformation )
    {
      v11 = CSurfaceBrush::AddOcclusionInformation(v7, a3, v9);
    }
    else if ( v10 == CCompositionSurfaceBitmap::AddOcclusionInformation )
    {
      v11 = CCompositionSurfaceBitmap::AddOcclusionInformation(v7, a3, v9);
    }
    else
    {
      v11 = v10(v7, a3, v9);
    }
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xCC7u);
  }
  return v5;
}
