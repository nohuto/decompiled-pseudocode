/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBAD0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x18013615C (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQX.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x1801BBA70 (VertexTransfer--SimdBlend_2_.c)
 */

void __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm7
  unsigned int v10; // esi
  double v11; // xmm7_8
  double *v12; // rbx
  int v13; // r8d
  __m128 *v14; // rax
  double *v15; // r11
  __m128 *v16; // r9
  __int64 v17; // r10
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+20h] [rbp-78h]
  __m128 v20[3]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v6 = (__m128)a2[5];
  v20[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v6, (__m128)0LL));
  v8 = (__m128)a2[13];
  v20[1] = v7;
  v9 = (__m128)*(unsigned int *)(a1 + 44);
  v10 = v2 >> 1;
  v20[2] = _mm_unpacklo_ps(
             _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
             _mm_unpacklo_ps(v8, (__m128)0LL));
  *(_QWORD *)&v11 = _mm_shuffle_ps(v9, v9, 0).m128_u64[0];
  if ( v4 )
  {
    do
    {
      v12 = (double *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      VertexTransfer::SimdBlend_2_(*(double *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16))), v11);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        v20,
        (__int64)v15,
        *(_QWORD *)(a1 + 24) + (int)(v3 * v13),
        *v15,
        v18,
        v10,
        v14);
      VertexTransfer::SimdBlend_2_(*v12, v11);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        v20,
        (__int64)v12,
        v17,
        *v12,
        v19,
        v10,
        v16);
      v3 += 2;
    }
    while ( v3 < v4 );
  }
}
