/*
 * XREFs of ?SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z @ 0x18006B238
 * Callers:
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1800851A0 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800BEDE0 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 * Callees:
 *     <none>
 */

bool __fastcall MILMatrix3x2::SetInverse(
        MILMatrix3x2 *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  float v8; // xmm4_4
  float v9; // xmm6_4
  bool result; // al

  v8 = (float)(a2 * a5) - (float)(a3 * a4);
  if ( v8 == 0.0 )
    return 0;
  v9 = 1.0 / v8;
  if ( !_finite((float)(1.0 / v8)) )
    return 0;
  result = 1;
  *(float *)this = v9 * a5;
  *((_DWORD *)this + 2) = COERCE_UNSIGNED_INT(v9 * a4) ^ _xmm;
  *((_DWORD *)this + 1) = COERCE_UNSIGNED_INT(v9 * a3) ^ _xmm;
  *((float *)this + 3) = v9 * a2;
  *((float *)this + 4) = (float)((float)(a4 * a7) - (float)(a5 * a6)) * v9;
  *((float *)this + 5) = (float)((float)(a3 * a6) - (float)(a2 * a7)) * v9;
  return result;
}
