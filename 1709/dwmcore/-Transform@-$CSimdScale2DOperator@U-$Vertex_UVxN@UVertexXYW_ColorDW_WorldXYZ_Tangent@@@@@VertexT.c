/*
 * XREFs of ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180072B5C
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800728C0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D5ECC (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801D5ECC.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D61F4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801D61F4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        __m128 *a1,
        __m128 *a2,
        __m128 *a3,
        double a4,
        int a5,
        unsigned int a6,
        __m128 *a7)
{
  __m128 v7; // xmm4
  __m128 v8; // xmm7
  __m128 v9; // xmm3
  __m128 v10; // xmm5
  __m128 v11; // xmm3
  __m128 *result; // rax
  __m128 v13; // xmm1
  char *v14; // r8
  char *v15; // rcx
  __int64 v16; // rdx
  __m128 v17; // xmm1

  v8 = *a3;
  v9 = _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a4, DirectX::g_XMOne, 228), *a3);
  v10 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *a1), _mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), a1[1]));
  v11 = (__m128)DirectX::g_XMOne;
  result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v10, (__m128)DirectX::g_XMZero)) & 3);
  if ( (_BYTE)result != 3 )
  {
    v13 = _mm_mul_ps(v10, v10);
    v11.m128_f32[0] = 1.0 / fsqrt(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0]);
    v11 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_shuffle_ps(v8, v8, 170));
  }
  *a7 = _mm_shuffle_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), a1[1]), a1[2]),
              _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *a1)),
            _mm_mul_ps(v11, v10)),
          _mm_or_ps(
            _mm_andnot_ps(
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
              _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
            _mm_and_ps(
              _mm_shuffle_ps(v7, v7, 228),
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
          228);
  if ( a6 )
  {
    v14 = (char *)((char *)a3 - (char *)a2);
    result = a2 + 1;
    v15 = (char *)((char *)a7 - (char *)a2);
    v16 = a6;
    v17 = _mm_shuffle_ps(v11, v11, 0);
    do
    {
      *(__m128 *)&v15[(_QWORD)result + 32] = _mm_add_ps(
                                               _mm_mul_ps(
                                                 _mm_sub_ps(*result, *(__m128 *)((char *)result + (_QWORD)v14)),
                                                 v17),
                                               *(__m128 *)((char *)result + (_QWORD)v14));
      ++result;
      --v16;
    }
    while ( v16 );
  }
  return result;
}
