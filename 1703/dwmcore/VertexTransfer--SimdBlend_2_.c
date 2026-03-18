/*
 * XREFs of VertexTransfer::SimdBlend_2_ @ 0x1801BBA70
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBAD0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BBF5C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801BBF5C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BC4D0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801BC4D0.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC964 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801BC964.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128i __fastcall VertexTransfer::SimdBlend_2_(double a1, double a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0

  v2 = _mm_cvttps_epi32(
         _mm_mul_ps(
           _mm_mul_ps(
             _mm_add_ps(
               _mm_cvtepi32_ps(
                 _mm_xor_si128(
                   _mm_and_si128(
                     _mm_load_si128((const __m128i *)&g_MaskA8B8G8R8),
                     (__m128i)_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 255)),
                   g_FlipA8R8G8B8)),
               g_FixAA8R8G8B8),
             g_NormalizeA8R8G8B8),
           _mm_or_ps(
             _mm_andnot_ps(
               (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
               _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 228)),
             _mm_and_ps(
               _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228),
               (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask))));
  v3 = _mm_packs_epi32(v2, v2);
  return _mm_packus_epi16(v3, v3);
}
