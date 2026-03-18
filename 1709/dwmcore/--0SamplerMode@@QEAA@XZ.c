/*
 * XREFs of ??0SamplerMode@@QEAA@XZ @ 0x180048A10
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V?$span@$$CBUSamplerMode@@@gsl@@@Z @ 0x18006CEDC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V-$span@$$CBUSamplerMod.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     <none>
 */

SamplerMode *__fastcall SamplerMode::SamplerMode(SamplerMode *this)
{
  SamplerMode *result; // rax

  *(_WORD *)this = 257;
  result = this;
  *((_BYTE *)this + 2) = 1;
  return result;
}
