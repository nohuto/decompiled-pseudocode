/*
 * XREFs of ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019248
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 * Callees:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800190E8 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCpuClip::ResolveClip(CCpuClip *this, const struct CShape **a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 2) || (v5 = CCpuClip::ConvertContextDependentClipToLocal((CShape **)this), v2 = v5, v5 >= 0) )
    *a2 = (const struct CShape *)*((_QWORD *)this + 2);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x69u);
  return v2;
}
