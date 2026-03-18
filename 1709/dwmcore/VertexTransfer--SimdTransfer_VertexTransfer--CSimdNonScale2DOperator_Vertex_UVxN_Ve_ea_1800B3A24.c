/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800B3A24
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r9d
  unsigned int v4; // esi
  __m128 v6; // xmm5
  __m128 v7; // xmm6
  unsigned int v8; // r8d
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  __m128 *v11; // r11
  __m128 v12; // xmm4
  __m128 *v13; // r10
  int v14; // eax
  int v15; // ecx
  __m128 *v16; // rdx
  __m128 *v17; // rdi
  __m128 v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm3
  __m128 v21; // xmm3
  __int64 v22; // rcx
  signed __int64 v23; // r11
  __m128 v24; // xmm4
  __m128 v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm3
  __m128 v28; // xmm3
  __int64 v29; // rcx
  signed __int64 v30; // r10
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v8 = *(_DWORD *)(a1 + 40) >> 1;
  v9 = _mm_unpacklo_ps(
         _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
         _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  v10 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  if ( v4 )
  {
    do
    {
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = *v11;
      v13 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v14 = *(_DWORD *)(a1 + 64);
      v15 = (v3 + 1) * v14;
      result = v3 * v14;
      v16 = (__m128 *)(*(_QWORD *)(a1 + 56) + v15);
      v17 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)result);
      v18 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v11, *v11, 85), v7), v9),
              _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v6));
      v19 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v12, v12, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v10));
      v20 = _mm_packs_epi32(v19, v19);
      v21 = (__m128)_mm_packus_epi16(v20, v20);
      *v17 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_shuffle_ps(v18, v18, 228)),
               _mm_and_ps(
                 _mm_shuffle_ps(v21, v21, 228),
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v8 )
      {
        result = (unsigned __int64)&v17[1];
        v22 = v8;
        v23 = (char *)v11 - (char *)v17;
        do
        {
          *(_OWORD *)result = *(_OWORD *)(v23 + result);
          result += 16LL;
          --v22;
        }
        while ( v22 );
      }
      v24 = *v13;
      v25 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v13, *v13, 85), v7), v9),
              _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v6));
      v26 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v24, v24, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v10));
      v27 = _mm_packs_epi32(v26, v26);
      v28 = (__m128)_mm_packus_epi16(v27, v27);
      *v16 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_shuffle_ps(v25, v25, 228)),
               _mm_and_ps(
                 _mm_shuffle_ps(v28, v28, 228),
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v8 )
      {
        result = (unsigned __int64)&v16[1];
        v29 = v8;
        v30 = (char *)v13 - (char *)v16;
        do
        {
          *(_OWORD *)result = *(_OWORD *)(v30 + result);
          result += 16LL;
          --v29;
        }
        while ( v29 );
      }
      v3 += 2;
    }
    while ( v3 < v4 );
  }
  return result;
}
