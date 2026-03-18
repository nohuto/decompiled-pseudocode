/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180015B64
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800ACDB0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x180015CE8 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQX.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x180015D4C (VertexTransfer--SimdBlend_2_.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned int *a2)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  unsigned int v5; // r12d
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  unsigned int v10; // r14d
  int v11; // ebx
  __int64 v12; // rsi
  int v13; // r11d
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r11d
  int v20; // r9d
  int v21; // [rsp+20h] [rbp-88h]
  int v22; // [rsp+20h] [rbp-88h]
  __m128 v23[3]; // [rsp+40h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v7 = (__m128)a2[5];
  v23[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v7, (__m128)0LL));
  v9 = (__m128)a2[13];
  v23[1] = v8;
  v10 = v3 >> 1;
  v23[2] = _mm_unpacklo_ps(
             _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
             _mm_unpacklo_ps(v9, (__m128)0LL));
  if ( v5 )
  {
    do
    {
      v11 = *(_DWORD *)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v4 + 1));
      VertexTransfer::SimdBlend_2_(*(_QWORD *)(a1 + 56) + (int)(v4 * *(_DWORD *)(a1 + 64)));
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v23,
        v14,
        v13 + v4 * v11,
        v16,
        v21,
        v10,
        v15);
      v18 = VertexTransfer::SimdBlend_2_(v17);
      result = (_UNKNOWN **)VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                              (unsigned int)v23,
                              v12,
                              v19 + (v4 + 1) * v11,
                              v20,
                              v22,
                              v10,
                              v18);
      v4 += 2;
    }
    while ( v4 < v5 );
  }
  return result;
}
