/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D5D48
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x18007314C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEB.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x1801D5854 (VertexTransfer--SimdBlend_2_.c)
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  unsigned int v5; // r12d
  __m128 v7; // xmm0
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm7
  unsigned int v12; // r15d
  double v13; // xmm7_8
  double *v14; // rsi
  __m128 *v15; // rdi
  int v16; // r8d
  __m128 *v17; // rdx
  __m128 *v18; // rcx
  __m128 *v19; // rax
  int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+20h] [rbp-88h]
  __m128 v22[3]; // [rsp+40h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 20);
  v7 = (__m128)a2[4];
  v8 = (__m128)a2[5];
  v22[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v7), _mm_unpacklo_ps(v8, v8));
  v10 = (__m128)a2[13];
  v22[1] = v9;
  v11 = (__m128)*(unsigned int *)(a1 + 44);
  v12 = v4 >> 1;
  v22[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v10, (__m128)0LL));
  *(_QWORD *)&v13 = _mm_shuffle_ps(v11, v11, 0).m128_u64[0];
  if ( v5 )
  {
    do
    {
      v14 = (double *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v15 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      VertexTransfer::SimdBlend_2_(*(double *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16))), v13);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        v22,
        v17,
        (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * v16)),
        *(double *)v17->m128_u64,
        v20,
        v12,
        v18);
      VertexTransfer::SimdBlend_2_(*v14, v13);
      result = VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                 v22,
                 (__m128 *)v14,
                 v15,
                 *v14,
                 v21,
                 v12,
                 v19);
      v3 += 2;
    }
    while ( v3 < v5 );
  }
  return result;
}
