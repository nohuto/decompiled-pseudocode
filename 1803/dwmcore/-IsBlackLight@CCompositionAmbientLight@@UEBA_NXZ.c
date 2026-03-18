/*
 * XREFs of ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x1800161F0
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180015DAC (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionAmbientLight::IsBlackLight(CCompositionAmbientLight *this)
{
  float v1; // xmm3_4
  bool result; // al
  float v3; // xmm2_4
  float v4; // xmm1_4

  v1 = *((float *)this + 44);
  result = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 * *((float *)this + 40))) & _xmm) < 0.0000011920929 )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 * *((float *)this + 41))) & _xmm);
    if ( v3 < 0.0000011920929 )
    {
      v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 * *((float *)this + 42))) & _xmm);
      if ( v4 < 0.0000011920929 )
        return 1;
    }
  }
  return result;
}
