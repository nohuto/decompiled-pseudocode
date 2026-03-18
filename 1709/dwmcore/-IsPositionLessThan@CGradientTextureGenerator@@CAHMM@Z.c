/*
 * XREFs of ?IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z @ 0x1801D9E04
 * Callers:
 *     ?SetFirstStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DCOLORVALUE@@@Z @ 0x1801DA08C (-SetFirstStop@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DC.c)
 *     ?SetMiddleStops@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAI1@Z @ 0x1801DA370 (-SetMiddleStops@CGradientTextureGenerator@@CAXPEAV-$DynArray@UMILGradientStop@@$0A@@@PEAI1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CGradientTextureGenerator::IsPositionLessThan(float a1, float a2)
{
  float v2; // xmm1_4
  _BOOL8 result; // rax

  result = 0;
  if ( a2 > a1 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - a2)) & _xmm);
    if ( v2 > 0.0000011920929 )
      return 1;
  }
  return result;
}
