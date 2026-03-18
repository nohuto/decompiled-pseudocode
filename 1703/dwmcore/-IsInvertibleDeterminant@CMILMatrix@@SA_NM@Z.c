/*
 * XREFs of ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180186354
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18008D630 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18009AAA0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x180172F58 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsInvertibleDeterminant(float a1)
{
  float v1; // xmm2_4
  bool result; // al

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
  result = v1 >= 0.00000011920929;
  if ( v1 >= 0.00000011920929 )
    return _finite((float)(1.0 / a1)) != 0;
  return result;
}
