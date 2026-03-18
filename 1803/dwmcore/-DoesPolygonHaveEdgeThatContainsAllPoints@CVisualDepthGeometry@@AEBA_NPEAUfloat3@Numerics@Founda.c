/*
 * XREFs of ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEAUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1801C2708
 * Callers:
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1801C258C (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat3@Numerics@Foundation@Windows@@H@.c)
 * Callees:
 *     ?DistSquaredToLine@@YAMUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x1801C2680 (-DistSquaredToLine@@YAMUfloat2@Numerics@Foundation@Windows@@00@Z.c)
 */

char __fastcall CVisualDepthGeometry::DoesPolygonHaveEdgeThatContainsAllPoints(
        CVisualDepthGeometry *this,
        struct Windows::Foundation::Numerics::float3 *a2,
        int a3)
{
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // r11
  __int64 *i; // rbx
  int v9; // r9d
  __int64 v10; // r10
  float v11; // xmm1_4

  v5 = 0;
  v6 = a3;
  do
  {
    v7 = 2LL * v5;
    if ( v6 <= 0 )
      return 1;
    for ( i = (__int64 *)a2; ; i = (__int64 *)((char *)i + 12) )
    {
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(DistSquaredToLine(
                                                  *i,
                                                  *(_QWORD *)((char *)this + 8 * v7 + 84),
                                                  *(_QWORD *)((char *)this + 8 * v7 + 92)).m128_f32[0]) & _xmm);
      if ( v11 >= 0.0000011920929 )
        break;
      if ( v10 + 1 >= v6 )
        return 1;
    }
    v5 = v9 + 1;
  }
  while ( v5 < 4 );
  return 0;
}
