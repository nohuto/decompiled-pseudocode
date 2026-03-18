/*
 * XREFs of ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801BEE1C
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BBC40 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801BBC40.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BBF5C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801BBF5C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC238 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801BC238.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        int a5,
        unsigned int a6,
        __m128 *a7)
{
  __m128 v7; // xmm4
  __m128 v8; // xmm2
  _OWORD *m128_f32; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v8 = _mm_add_ps(
         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 85), a1[1]), a1[2]),
         _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 0), *a1));
  *a7 = _mm_or_ps(
          _mm_andnot_ps(
            (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
            _mm_shuffle_ps(v8, v8, 228)),
          _mm_and_ps(
            _mm_shuffle_ps(v7, v7, 228),
            (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
  if ( a6 )
  {
    m128_f32 = (_OWORD *)a7[3].m128_f32;
    v10 = a2 - (_QWORD)a7;
    v11 = a6;
    do
    {
      *m128_f32 = *(_OWORD *)((char *)m128_f32 + v10 - 32);
      ++m128_f32;
      --v11;
    }
    while ( v11 );
  }
}
