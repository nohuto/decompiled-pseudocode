/*
 * XREFs of ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z @ 0x18000994C
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?Render@CDrawListPrimitiveBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18015C3A0 (-Render@CDrawListPrimitiveBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800AB4C8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 */

int __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        struct CDrawingContext *a2,
        struct CDrawListPrimitiveBuilder *a3)
{
  return CDrawListCache::Update(
           this,
           *(_QWORD *)(*((_QWORD *)a2 + 4) + 400LL),
           *((struct CDrawListEntry ***)a3 + 5),
           *((_DWORD *)a3 + 16),
           (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)a2 + 66) != 0),
           *((_DWORD *)a3 + 26) != 0);
}
