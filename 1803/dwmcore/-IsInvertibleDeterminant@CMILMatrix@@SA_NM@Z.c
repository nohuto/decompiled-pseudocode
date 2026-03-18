/*
 * XREFs of ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18000DFF8
 * Callers:
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000DED0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800275D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800A3BC4 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18013CD68 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B644C (-IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsInvertibleDeterminant(float a1)
{
  float v1; // xmm2_4
  bool result; // al

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - 0.0)) & _xmm);
  result = v1 >= 0.00000011920929;
  if ( v1 >= 0.00000011920929 )
    return _finite((float)(1.0 / a1)) != 0;
  return result;
}
