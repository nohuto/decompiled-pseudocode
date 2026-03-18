/*
 * XREFs of ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4
 * Callers:
 *     ?DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCBitmapResource@@AEBUMilRectF@@@Z @ 0x18001D8BC (-DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18001DB7C (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180024990 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180070600 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18013C970 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18015CFF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801679F0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180048A20 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushDrawListGenerator::~CBrushDrawListGenerator(CBrushDrawListGenerator *this)
{
  CMILRefCountBase *v2; // rcx
  CSurfaceDrawListBrush **v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rcx
  void (*v7)(void); // rax
  CSurfaceDrawListBrush *v8; // rcx
  void *(__fastcall *v9)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v7 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v2);
    else
      v7();
  }
  *((_DWORD *)this + 10) = 0;
  v3 = (CSurfaceDrawListBrush **)((char *)this + 104);
  v4 = 0LL;
  *(_OWORD *)((char *)this + 56) = _xmm;
  *((_BYTE *)this + 109) = 0;
  if ( *((_DWORD *)this + 26) )
  {
    do
    {
      if ( *((_QWORD *)this + v4 + 9) )
      {
        v8 = (CSurfaceDrawListBrush *)*((_QWORD *)this + v4 + 9);
        if ( v8 )
        {
          v9 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v8;
          if ( v9 == CSurfaceDrawListBrush::`vector deleting destructor' )
          {
            CSurfaceDrawListBrush::`vector deleting destructor'(v8, 1u);
          }
          else if ( v9 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
          {
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v8, 1u);
          }
          else
          {
            v9(v8, 1u);
          }
        }
        *((_QWORD *)this + v4 + 9) = 0LL;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)v3 );
  }
  *(_DWORD *)v3 = 0;
  v5 = 4LL;
  do
  {
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(--v3);
    --v5;
  }
  while ( v5 );
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
