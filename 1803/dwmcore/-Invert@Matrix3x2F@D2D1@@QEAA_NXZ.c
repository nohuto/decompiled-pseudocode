/*
 * XREFs of ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180019290
 * Callers:
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180009A40 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800190E8 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801B07F0 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 *     ?SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1801B0C00 (-SetD2DEffectProperties@CAffineTransform2DEffect@@MEAAJPEAUID2D1Effect@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2D1::Matrix3x2F::Invert(D2D1_MATRIX_3X2_F *this)
{
  return D2D1InvertMatrix(this);
}
