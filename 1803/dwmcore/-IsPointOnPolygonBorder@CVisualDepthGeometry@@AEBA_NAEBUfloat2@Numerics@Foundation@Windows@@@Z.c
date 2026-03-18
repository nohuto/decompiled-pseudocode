/*
 * XREFs of ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C3550
 * Callers:
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C29A4 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 * Callees:
 *     ?DistSquaredToLine@@YAMUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x1801C2680 (-DistSquaredToLine@@YAMUfloat2@Numerics@Foundation@Windows@@00@Z.c)
 */

char __fastcall CVisualDepthGeometry::IsPointOnPolygonBorder(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2)
{
  __int64 *v2; // r11
  CVisualDepthGeometry *v3; // r10
  int v4; // r9d
  int v5; // r9d
  float v6; // xmm1_4

  v2 = (__int64 *)a2;
  v3 = this;
  v4 = 0;
  while ( 1 )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(DistSquaredToLine(
                                               *v2,
                                               *(_QWORD *)((char *)v3 + 16 * v4 + 84),
                                               *(_QWORD *)((char *)v3 + 16 * v4 + 92)).m128_f32[0]) & _xmm);
    if ( v6 < 0.0000011920929 )
      break;
    v4 = v5 + 1;
    if ( v4 >= 4 )
      return 0;
  }
  return 1;
}
