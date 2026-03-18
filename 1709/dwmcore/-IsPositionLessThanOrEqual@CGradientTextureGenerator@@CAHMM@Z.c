/*
 * XREFs of ?IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z @ 0x1801D9E38
 * Callers:
 *     ?AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3DCOLORVALUE@@@Z @ 0x1801D9560 (-AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3D.c)
 *     ?SetFirstStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DCOLORVALUE@@@Z @ 0x1801DA08C (-SetFirstStop@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CGradientTextureGenerator::IsPositionLessThanOrEqual(float a1, float a2)
{
  float v2; // xmm1_4
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= a1 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - a2)) & _xmm);
    if ( v2 > 0.0000011920929 )
      return 0;
  }
  return result;
}
