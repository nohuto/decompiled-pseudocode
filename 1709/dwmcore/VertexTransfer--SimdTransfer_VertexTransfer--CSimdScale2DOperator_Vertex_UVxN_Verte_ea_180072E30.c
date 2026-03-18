/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180072E30
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r8d
  unsigned int v5; // r14d
  __m128 v6; // xmm7
  __m128 v7; // xmm8
  unsigned int v8; // r9d
  __m128 v9; // xmm10
  __m128 v10; // xmm3
  __m128 *v11; // rbx
  __m128 *v12; // r11
  __m128 *v13; // rsi
  __m128 *v14; // rdi
  __m128 v15; // xmm4
  __m128 v16; // xmm0
  __m128 *v17; // r10
  __m128 *v18; // rdx
  __m128 v19; // xmm6
  __int64 v20; // rcx
  signed __int64 v21; // rsi
  __m128 v22; // xmm1
  signed __int64 v23; // r10
  __m128 *v24; // rax
  __m128 v25; // xmm5
  __m128 v26; // xmm0
  __m128 v27; // xmm3
  __m128 v28; // xmm4
  __int64 v29; // rcx
  signed __int64 v30; // rdi
  __m128 v31; // xmm1
  signed __int64 v32; // rdx
  __m128 v33; // xmm1
  __m128 v34; // xmm1
  __m128 v35; // xmm0
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)a2[4]), _mm_unpacklo_ps((__m128)a2[5], (__m128)a2[5]));
  v8 = *(_DWORD *)(a1 + 40) >> 1;
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  if ( v5 )
  {
    do
    {
      v10 = (__m128)DirectX::g_XMOne;
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v13 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v14 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      v15 = *v13;
      v16 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v13);
      v17 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * *(_DWORD *)(a1 + 64)));
      v18 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v3 + 1) * *(_DWORD *)(a1 + 64)));
      v19 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v6));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v19, (__m128)DirectX::g_XMZero)) & 3) != 3 )
      {
        v33 = _mm_mul_ps(v19, v19);
        v10.m128_f32[0] = 1.0 / fsqrt(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0]);
        v10 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), _mm_shuffle_ps(v15, v15, 170));
      }
      *v17 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v6)),
                 _mm_mul_ps(v10, v19)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                 _mm_and_ps(
                   _mm_shuffle_ps(*v11, *v11, 228),
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v8 )
      {
        v20 = v8;
        v21 = (char *)v13 - (char *)v11;
        v22 = _mm_shuffle_ps(v10, v10, 0);
        v23 = (char *)v17 - (char *)v11;
        v24 = v11 + 1;
        do
        {
          *(__m128 *)((char *)v24 + v23) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v24, *(__m128 *)((char *)v24 + v21)), v22),
                                             *(__m128 *)((char *)v24 + v21));
          ++v24;
          --v20;
        }
        while ( v20 );
      }
      v25 = *v14;
      v26 = _mm_sub_ps(_mm_shuffle_ps(*v12, DirectX::g_XMOne, 228), *v14);
      v27 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v7), _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v6));
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v27, (__m128)DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result == 3 )
      {
        v28 = (__m128)DirectX::g_XMOne;
      }
      else
      {
        v34 = _mm_mul_ps(v27, v27);
        v35 = (__m128)DirectX::g_XMOne;
        v35.m128_f32[0] = 1.0 / fsqrt(v34.m128_f32[0] + _mm_shuffle_ps(v34, v34, 85).m128_f32[0]);
        v28 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 170), _mm_shuffle_ps(v35, v35, 0));
      }
      *v18 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 85), v7), v9),
                   _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v6)),
                 _mm_mul_ps(v28, v27)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                 _mm_and_ps(
                   _mm_shuffle_ps(*v12, *v12, 228),
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v8 )
      {
        v29 = v8;
        v30 = (char *)v14 - (char *)v12;
        v31 = _mm_shuffle_ps(v28, v28, 0);
        v32 = (char *)v18 - (char *)v12;
        result = v12 + 1;
        do
        {
          *(__m128 *)((char *)result + v32) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v30)), v31),
                                                *(__m128 *)((char *)result + v30));
          ++result;
          --v29;
        }
        while ( v29 );
      }
      v3 += 2;
    }
    while ( v3 < v5 );
  }
  return result;
}
