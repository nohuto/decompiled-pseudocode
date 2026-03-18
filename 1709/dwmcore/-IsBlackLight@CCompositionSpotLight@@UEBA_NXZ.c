/*
 * XREFs of ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x1800A0810
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B1630 (-NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSpotLight::IsBlackLight(CCompositionSpotLight *this)
{
  float v1; // xmm5_4
  float v2; // xmm2_4
  float v3; // xmm1_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  bool result; // al

  v1 = *((float *)this + 74);
  result = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 * *((float *)this + 54))) & _xmm) < 0.0000011920929 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 * *((float *)this + 55))) & _xmm);
    if ( v2 < 0.0000011920929 )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 * *((float *)this + 56))) & _xmm);
      if ( v3 < 0.0000011920929 )
      {
        v4 = *((float *)this + 75);
        v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 * *((float *)this + 58))) & _xmm);
        if ( v5 < 0.0000011920929 )
        {
          v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 * *((float *)this + 59))) & _xmm);
          if ( v6 < 0.0000011920929 )
          {
            v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 * *((float *)this + 60))) & _xmm);
            if ( v7 < 0.0000011920929 )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
