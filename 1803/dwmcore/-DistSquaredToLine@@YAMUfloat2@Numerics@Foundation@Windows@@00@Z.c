/*
 * XREFs of ?DistSquaredToLine@@YAMUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x1801C2680
 * Callers:
 *     ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEAUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1801C2708 (-DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEAUfloat3@Numerics@Founda.c)
 *     ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C3550 (-IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall DistSquaredToLine(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm4
  float v4; // xmm3_4

  v3 = HIDWORD(a3);
  v4 = (float)((float)((float)(*((float *)&a1 + 1) - *((float *)&a2 + 1)) * *(float *)&v3)
             + (float)((float)(*(float *)&a1 - *(float *)&a2) * *(float *)&a3))
     / (float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(*(float *)&a3 * *(float *)&a3));
  *(float *)&v3 = (float)((float)((float)((float)(*((float *)&a3 + 1) * v4) + *((float *)&a2 + 1)) - *((float *)&a1 + 1))
                        * (float)((float)((float)(*((float *)&a3 + 1) * v4) + *((float *)&a2 + 1)) - *((float *)&a1 + 1)))
                + (float)((float)((float)((float)(*(float *)&a3 * v4) + *(float *)&a2) - *(float *)&a1)
                        * (float)((float)((float)(*(float *)&a3 * v4) + *(float *)&a2) - *(float *)&a1));
  return (__m128)v3;
}
