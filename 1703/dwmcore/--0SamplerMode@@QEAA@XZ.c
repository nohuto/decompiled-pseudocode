/*
 * XREFs of ??0SamplerMode@@QEAA@XZ @ 0x1800C2624
 * Callers:
 *     ??0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@USamplerMode@@01@Z @ 0x180009740 (--0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@USamplerMode@@01@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV?$ArrayRef@$$CBUSamplerMode@@@@@Z @ 0x180015D50 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV-$ArrayRef@$$CBUSam.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
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
