/*
 * XREFs of ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004A730
 * Callers:
 *     <none>
 * Callees:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180097620 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18009D390 (-AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CollectOcclusion(
        CVisual *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  unsigned int v5; // ebx
  CSpriteVisualContent *v7; // rcx
  const struct D2D_SIZE_F *v9; // r8
  int (*v10)(CSpriteVisualContent *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  int v11; // eax

  v5 = 0;
  v7 = (CSpriteVisualContent *)*((_QWORD *)this + 31);
  if ( v7 )
  {
    v9 = (const struct D2D_SIZE_F *)((char *)this + 132);
    v10 = *(int (**)(CSpriteVisualContent *__hidden, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v7 + 152LL);
    if ( (char *)v10 == (char *)CRenderData::AddOcclusionInformation )
    {
      v11 = CRenderData::Draw(v7, a3, 2LL);
    }
    else if ( v10 == CSpriteVisualContent::AddOcclusionInformation )
    {
      v11 = CSpriteVisualContent::AddOcclusionInformation(v7, a3, v9);
    }
    else if ( (char *)v10 == (char *)CSurfaceBrush::AddOcclusionInformation )
    {
      v11 = CSurfaceBrush::AddOcclusionInformation(v7, a3, v9);
    }
    else if ( (char *)v10 == (char *)CPrimitiveGroup::AddOcclusionInformation )
    {
      v11 = CPrimitiveGroup::AddOcclusionInformation(v7, a3, v9);
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(CSpriteVisualContent *, struct COcclusionContext *, const struct D2D_SIZE_F *))v10)(
              v7,
              a3,
              v9);
    }
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xDDCu);
  }
  return v5;
}
