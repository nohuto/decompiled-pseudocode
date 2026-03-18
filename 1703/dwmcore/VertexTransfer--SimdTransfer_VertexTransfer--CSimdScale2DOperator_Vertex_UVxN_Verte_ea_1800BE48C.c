/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BE48C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r9d
  unsigned int v5; // r14d
  __m128 v6; // xmm8
  __m128 v7; // xmm9
  unsigned int v8; // r8d
  __m128 v9; // xmm10
  __m128 v10; // xmm11
  __m128 v11; // xmm3
  __m128 *v12; // rbx
  __m128 *v13; // r11
  __m128 *v14; // rsi
  __m128 v15; // xmm4
  __m128 *v16; // rdi
  __m128 v17; // xmm2
  __m128 *v18; // r10
  __m128 *v19; // rdx
  __m128 v20; // xmm7
  __m128i v21; // xmm6
  __m128i v22; // xmm6
  __m128 v23; // xmm6
  __m128 v24; // xmm1
  __int64 v25; // rcx
  signed __int64 v26; // rsi
  __m128 v27; // xmm1
  signed __int64 v28; // r10
  __m128 *v29; // rax
  __m128 v30; // xmm4
  __m128 v31; // xmm3
  __m128 v32; // xmm2
  __m128 v33; // xmm6
  __m128i v34; // xmm5
  __m128i v35; // xmm5
  __m128 v36; // xmm5
  __m128 v37; // xmm1
  __int64 v38; // rcx
  signed __int64 v39; // rdi
  __m128 v40; // xmm1
  signed __int64 v41; // rdx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)a2[4]), _mm_unpacklo_ps((__m128)a2[5], (__m128)a2[5]));
  v8 = *(_DWORD *)(a1 + 40) >> 1;
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  v10 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  if ( v5 )
  {
    do
    {
      v11 = (__m128)DirectX::g_XMOne;
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v13 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v14 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v15 = *v14;
      v16 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      v17 = _mm_sub_ps(_mm_shuffle_ps(*v12, DirectX::g_XMOne, 228), *v14);
      v18 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * *(_DWORD *)(a1 + 64)));
      v19 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v3 + 1) * *(_DWORD *)(a1 + 64)));
      v20 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v6));
      v21 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(*v12, *v12, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v10));
      v22 = _mm_packs_epi32(v21, v21);
      v23 = (__m128)_mm_packus_epi16(v22, v22);
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v20, DirectX::g_XMZero)) & 3) != 3 )
      {
        v24 = _mm_mul_ps(v20, v20);
        v11.m128_f32[0] = 1.0 / fsqrt(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]);
        v11 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_shuffle_ps(v15, v15, 170));
      }
      *v18 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v6)),
                 _mm_mul_ps(v11, v20)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                 _mm_and_ps(
                   _mm_shuffle_ps(v23, v23, 228),
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v8 )
      {
        v25 = v8;
        v26 = (char *)v14 - (char *)v12;
        v27 = _mm_shuffle_ps(v11, v11, 0);
        v28 = (char *)v18 - (char *)v12;
        v29 = v12 + 1;
        do
        {
          *(__m128 *)((char *)v29 + v28) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v29, *(__m128 *)((char *)v29 + v26)), v27),
                                             *(__m128 *)((char *)v29 + v26));
          ++v29;
          --v25;
        }
        while ( v25 );
      }
      v30 = *v16;
      v31 = (__m128)DirectX::g_XMOne;
      v32 = _mm_sub_ps(_mm_shuffle_ps(*v13, DirectX::g_XMOne, 228), *v16);
      v33 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v6));
      v34 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(*v13, *v13, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v10));
      v35 = _mm_packs_epi32(v34, v34);
      v36 = (__m128)_mm_packus_epi16(v35, v35);
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v33, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result != 3 )
      {
        v37 = _mm_mul_ps(v33, v33);
        v31.m128_f32[0] = 1.0 / fsqrt(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0]);
        v31 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), _mm_shuffle_ps(v30, v30, 170));
      }
      *v19 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v6)),
                 _mm_mul_ps(v31, v33)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                 _mm_and_ps(
                   _mm_shuffle_ps(v36, v36, 228),
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v8 )
      {
        v38 = v8;
        v39 = (char *)v16 - (char *)v13;
        v40 = _mm_shuffle_ps(v31, v31, 0);
        v41 = (char *)v19 - (char *)v13;
        result = v13 + 1;
        do
        {
          *(__m128 *)((char *)result + v41) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v39)), v40),
                                                *(__m128 *)((char *)result + v39));
          ++result;
          --v38;
        }
        while ( v38 );
      }
      v3 += 2;
    }
    while ( v3 < v5 );
  }
  return result;
}
