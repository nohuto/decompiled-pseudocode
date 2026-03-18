/*
 * XREFs of ??0CDrawListBitmap@@QEAA@XZ @ 0x180048570
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V?$span@$$CBUSamplerMode@@@gsl@@@Z @ 0x18006CEDC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V-$span@$$CBUSamplerMod.c)
 * Callees:
 *     <none>
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  return this;
}
