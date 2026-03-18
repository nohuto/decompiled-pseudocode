/*
 * XREFs of fmodf_0 @ 0x1800C5D68
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18003F820 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800BABA0 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800BAD84 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x180183DD4 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x180185DD8 (-Modulus@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl fmodf_0(float X, float Y)
{
  return fmodf(X, Y);
}
