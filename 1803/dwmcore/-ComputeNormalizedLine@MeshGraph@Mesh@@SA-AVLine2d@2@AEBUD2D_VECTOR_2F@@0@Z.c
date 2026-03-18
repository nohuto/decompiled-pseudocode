/*
 * XREFs of ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x18017D814
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18017CF78 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x18013F6B8 (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x18017D928 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 */

__int64 __fastcall Mesh::MeshGraph::ComputeNormalizedLine(Mesh::Line2d *a1, _QWORD *a2, const struct D2D_VECTOR_2F *a3)
{
  __int64 v3; // rcx
  __m128 v4; // xmm5
  float *v5; // r9
  float v6; // xmm0_4
  float v7; // xmm2_4
  __m128 v8; // xmm0
  D2D_VECTOR_2F v9; // xmm0_8
  __m128 v10; // xmm1
  __m128 v11; // xmm4
  D2D_VECTOR_2F v13; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = *a2;
  Mesh::Line2d::SetDirection(a1, a3);
  v4.m128_i32[0] = 0;
  if ( !*(_BYTE *)(v3 + 17) && !*(_BYTE *)(v3 + 16) )
  {
    v6 = Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)v3);
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - v4.m128_f32[0])) & _xmm);
    if ( v7 <= 0.000099999997 )
    {
      if ( v4.m128_f32[0] <= *v5 )
        v8 = (__m128)LODWORD(FLOAT_1_0);
      else
        v8 = (__m128)LODWORD(FLOAT_N1_0);
      v9 = (D2D_VECTOR_2F)_mm_unpacklo_ps(v8, v4).m128_u64[0];
LABEL_13:
      v13 = v9;
      Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v13);
      goto LABEL_14;
    }
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm)
                                                          - 1.4142135)) & _xmm) <= 0.000099999997 )
    {
      if ( v4.m128_f32[0] <= v5[1] )
        v10 = (__m128)LODWORD(FLOAT_1_0);
      else
        v10 = (__m128)LODWORD(FLOAT_N1_0);
      v9 = (D2D_VECTOR_2F)_mm_unpacklo_ps(v4, v10).m128_u64[0];
      goto LABEL_13;
    }
  }
LABEL_14:
  v11 = (__m128)*(unsigned int *)(v3 + 8);
  if ( v4.m128_f32[0] > v11.m128_f32[0] || v11.m128_f32[0] == v4.m128_f32[0] && v4.m128_f32[0] >= *(float *)(v3 + 12) )
  {
    v13 = (D2D_VECTOR_2F)_mm_unpacklo_ps(
                           _mm_xor_ps(v11, (__m128)(unsigned int)_xmm),
                           _mm_xor_ps((__m128)*(unsigned int *)(v3 + 12), (__m128)(unsigned int)_xmm)).m128_u64[0];
    Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v13);
  }
  return v3;
}
