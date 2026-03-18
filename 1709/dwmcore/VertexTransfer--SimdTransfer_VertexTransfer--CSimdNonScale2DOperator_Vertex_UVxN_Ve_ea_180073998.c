/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180073998
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 *v5; // r15
  __int64 v6; // rbp
  GUID v9; // xmm6
  GUID v11; // xmm7
  GUID v12; // xmm8
  unsigned int v13; // esi
  __int128 v14; // xmm10
  unsigned int v15; // r8d
  __m128 v16; // xmm9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm2
  unsigned int v20; // edi
  __m128 v21; // xmm9
  __m128 *v22; // r11
  __m128 *v23; // r10
  int v24; // eax
  __int64 v25; // r9
  __m128 v26; // xmm2
  __int64 v27; // rdx
  _OWORD *v28; // rax
  __int64 v29; // rcx
  char *v30; // r11
  __m128 v31; // xmm2
  _OWORD *v32; // rax
  __int64 v33; // rcx
  char *v34; // r10
  __m128 v35; // xmm3
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __int128 v38[4]; // [rsp+30h] [rbp-78h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v9 = DirectX::g_XMZero;
  v11 = DirectX::g_XMZero;
  v12 = DirectX::g_XMZero;
  v13 = *((_DWORD *)a1 + 10) >> 1;
  if ( a3 )
  {
    v9 = (GUID)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v11 = (GUID)_mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]),
                  _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v12 = (GUID)_mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]),
                  _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    result = (_UNKNOWN **)CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)v38, a4);
    v14 = v38[0];
  }
  v15 = 0;
  v16 = (__m128)a2[12];
  v17 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v19 = (__m128)a2[13];
  v20 = *((_DWORD *)a1 + 5);
  v21 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v19, (__m128)0LL));
  if ( v20 )
  {
    do
    {
      v22 = (__m128 *)(*v5 + (int)(v15 * *((_DWORD *)v5 + 2)));
      v23 = (__m128 *)(*v5 + (int)(*((_DWORD *)v5 + 2) * (v15 + 1)));
      v24 = *((_DWORD *)a1 + 16);
      v25 = a1[7] + (int)(v15 * v24);
      v26 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 85), v18), v21),
              _mm_mul_ps(_mm_shuffle_ps(*v22, *v22, 0), v17));
      v27 = a1[7] + (int)((v15 + 1) * v24);
      *(__m128 *)v25 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_shuffle_ps(v26, v26, 228)),
                         _mm_and_ps(
                           _mm_shuffle_ps(*v22, *v22, 228),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v13 )
      {
        v28 = (_OWORD *)(v25 + 48);
        v29 = v13;
        v30 = (char *)v22 - v25;
        do
        {
          *v28 = *(_OWORD *)((char *)v28 + (_QWORD)v30 - 32);
          ++v28;
          --v29;
        }
        while ( v29 );
      }
      v31 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v23, *v23, 85), v18), v21),
              _mm_mul_ps(_mm_shuffle_ps(*v23, *v23, 0), v17));
      *(__m128 *)v27 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_shuffle_ps(v31, v31, 228)),
                         _mm_and_ps(
                           _mm_shuffle_ps(*v23, *v23, 228),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v13 )
      {
        v32 = (_OWORD *)(v27 + 48);
        v33 = v13;
        v34 = (char *)v23 - v27;
        do
        {
          *v32 = *(_OWORD *)((char *)v32 + (_QWORD)v34 - 32);
          ++v32;
          --v33;
        }
        while ( v33 );
      }
      result = (_UNKNOWN **)(2 * ((unsigned __int64)v15 >> 1));
      v35 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v15 >> 1));
      v36 = v35;
      if ( a3 )
      {
        v36 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 85), (__m128)v11), (__m128)v12),
                _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), (__m128)v9));
        v37 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 255), (__m128)v11), (__m128)v12),
                  _mm_mul_ps(_mm_shuffle_ps(v35, v35, 170), (__m128)v9)),
                (__m128)DirectX::g_XMZero,
                228);
      }
      else
      {
        v37 = (__m128)_mm_unpackhi_pd((__m128d)v35, (__m128d)DirectX::g_XMZero);
      }
      v15 += 2;
      *(__m128 *)(v25 + 16) = _mm_shuffle_ps(v36, (__m128)DirectX::g_XMZero, 228);
      *(_OWORD *)(v25 + 32) = v14;
      *(__m128 *)(v27 + 16) = v37;
      *(_OWORD *)(v27 + 32) = v14;
    }
    while ( v15 < v20 );
  }
  return result;
}
