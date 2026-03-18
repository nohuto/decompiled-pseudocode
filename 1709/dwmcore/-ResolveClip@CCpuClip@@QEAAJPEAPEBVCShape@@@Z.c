/*
 * XREFs of ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x1800B707C
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800B6E04 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 */

__int64 __fastcall CCpuClip::ResolveClip(CCpuClip *this, const struct CShape **a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 2) || (v5 = CCpuClip::ConvertContextDependentClipToLocal(this), v2 = v5, v5 >= 0) )
    *a2 = (const struct CShape *)*((_QWORD *)this + 2);
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x69u);
  return v2;
}
