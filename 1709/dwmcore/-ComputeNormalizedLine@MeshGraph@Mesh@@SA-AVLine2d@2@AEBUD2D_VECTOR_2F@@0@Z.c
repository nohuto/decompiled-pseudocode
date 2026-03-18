/*
 * XREFs of ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180154164
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801538A0 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x18011C948 (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z @ 0x180154264 (-ComputeRadialIndex@MeshGraph@Mesh@@SAMAEBVLine2d@2@@Z.c)
 */

__int64 __fastcall Mesh::MeshGraph::ComputeNormalizedLine(Mesh::Line2d *a1, _QWORD *a2, const struct D2D_VECTOR_2F *a3)
{
  __int64 v3; // rcx
  __m128 v4; // xmm5
  float *v5; // r8
  float v6; // xmm0_4
  __m128 v7; // xmm0
  D2D_VECTOR_2F v8; // xmm0_8
  float v9; // xmm1_4
  __m128 v10; // xmm1
  __m128 v11; // xmm4
  D2D_VECTOR_2F v13; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = *a2;
  Mesh::Line2d::SetDirection(a1, a3);
  v4.m128_i32[0] = 0;
  if ( !*(_BYTE *)(v3 + 17) && !*(_BYTE *)(v3 + 16) )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(Mesh::MeshGraph::ComputeRadialIndex((const struct Mesh::Line2d *)v3)) & _xmm);
    if ( v6 <= 0.000099999997 )
    {
      if ( v4.m128_f32[0] <= *v5 )
        v7 = (__m128)LODWORD(FLOAT_1_0);
      else
        v7 = (__m128)LODWORD(FLOAT_N1_0);
      v8 = (D2D_VECTOR_2F)_mm_unpacklo_ps(v7, v4).m128_u64[0];
LABEL_13:
      v13 = v8;
      Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v13);
      goto LABEL_14;
    }
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - 1.4142135)) & _xmm);
    if ( v9 <= 0.000099999997 )
    {
      if ( v4.m128_f32[0] <= v5[1] )
        v10 = (__m128)LODWORD(FLOAT_1_0);
      else
        v10 = (__m128)LODWORD(FLOAT_N1_0);
      v8 = (D2D_VECTOR_2F)_mm_unpacklo_ps(v4, v10).m128_u64[0];
      goto LABEL_13;
    }
  }
LABEL_14:
  v11 = (__m128)*(unsigned int *)(v3 + 8);
  if ( v4.m128_f32[0] > v11.m128_f32[0] || v11.m128_f32[0] == v4.m128_f32[0] && v4.m128_f32[0] >= *(float *)(v3 + 12) )
  {
    v13 = (D2D_VECTOR_2F)_mm_unpacklo_ps(
                           _mm_xor_ps(v11, (__m128)_xmm),
                           _mm_xor_ps((__m128)*(unsigned int *)(v3 + 12), (__m128)_xmm)).m128_u64[0];
    Mesh::Line2d::SetDirection((Mesh::Line2d *)v3, &v13);
  }
  return v3;
}
