/*
 * XREFs of ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C38A8
 * Callers:
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x1801BCC34 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAV3@@Z @ 0x1801C37A8 (-ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 */

__int64 __fastcall CBrushTypeUtils::GetBrushTransform(float *a1, __int64 a2, float *a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (float)(a3[2] - *a3) != 0.0 && (float)(a3[3] - a3[1]) != 0.0 )
  {
    CBrushTypeUtils::ConvertRelativeTransformToAbsolute(a3, a1, (CMILMatrix *)a4);
    result = 1LL;
  }
  if ( a2 )
  {
    if ( (_DWORD)result )
    {
      CMILMatrix::Multiply((CMILMatrix *)a4, (const struct CMILMatrix *)a2);
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a2;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(a2 + 48);
      *(_DWORD *)(a4 + 64) = *(_DWORD *)(a2 + 64);
    }
    result = 1LL;
  }
  if ( !(_DWORD)result )
  {
    *(_WORD *)(a4 + 64) = 32085;
    *(_OWORD *)a4 = _xmm;
    *(_OWORD *)(a4 + 16) = _xmm;
    *(_OWORD *)(a4 + 32) = _xmm;
    *(_OWORD *)(a4 + 48) = _xmm;
  }
  return result;
}
