/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D5ECC
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180072B5C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        float *a3,
        float *a4)
{
  GUID v5; // xmm6
  GUID v8; // xmm7
  unsigned int v9; // r15d
  GUID v10; // xmm8
  struct D2DQuaternion *result; // rax
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int128 v14; // xmm9
  unsigned int v15; // ebp
  unsigned int v16; // r12d
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __m128 *v21; // rdx
  __m128 *v22; // rdi
  __int64 v23; // r13
  int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // r11
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  int v30; // [rsp+20h] [rbp-E8h]
  int v31; // [rsp+20h] [rbp-E8h]
  __int128 v32; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v33[8]; // [rsp+50h] [rbp-B8h] BYREF
  __m128 *v34; // [rsp+110h] [rbp+8h]
  struct D2DQuaternion *v35; // [rsp+118h] [rbp+10h]

  v5 = DirectX::g_XMZero;
  v8 = DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = DirectX::g_XMZero;
  result = *(struct D2DQuaternion **)a1;
  v12 = a1 + 8;
  v13 = v9 >> 1;
  v35 = result;
  if ( a3 )
  {
    v5 = (GUID)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 2)),
                 _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 1), (__m128)0LL));
    v8 = (GUID)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 4), (__m128)*((unsigned int *)a3 + 6)),
                 _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)0LL));
    v10 = (GUID)_mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
                  _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v32, (__int64)result, (__int64 *)v12, a3, a4);
    v14 = v32;
    v12 = a1 + 8;
  }
  v15 = 0;
  v16 = *(_DWORD *)(a1 + 20);
  v17 = (__m128)a2[4];
  v18 = (__m128)a2[5];
  v33[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, v17), _mm_unpacklo_ps(v18, v18));
  v20 = (__m128)a2[13];
  v33[1] = v19;
  v33[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
  if ( v16 )
  {
    do
    {
      v21 = (__m128 *)(*(_QWORD *)v12 + (int)(v15 * *(_DWORD *)(v12 + 8)));
      v22 = (__m128 *)(*(_QWORD *)v12 + (int)(*(_DWORD *)(v12 + 8) * (v15 + 1)));
      v23 = *(_QWORD *)(a1 + 56) + (int)(v15 * *(_DWORD *)(a1 + 64));
      v34 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v15 + 1) * *(_DWORD *)(a1 + 64)));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        v33,
        v21,
        (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v15 * *(_DWORD *)(a1 + 32))),
        *(double *)v21->m128_u64,
        v30,
        v13,
        (__m128 *)v23);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        v33,
        v22,
        (__m128 *)(v25 + (int)((v15 + 1) * v24)),
        *(double *)v22->m128_u64,
        v31,
        v13,
        v34);
      result = v35;
      v27 = *((__m128 *)v35 + ((unsigned __int64)v15 >> 1));
      v28 = v27;
      if ( a3 )
      {
        v28 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), (__m128)v8), (__m128)v10),
                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), (__m128)v5));
        v29 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 255), (__m128)v8), (__m128)v10),
                  _mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), (__m128)v5)),
                (__m128)DirectX::g_XMZero,
                228);
      }
      else
      {
        v29 = (__m128)_mm_unpackhi_pd((__m128d)v27, (__m128d)DirectX::g_XMZero);
      }
      v12 = a1 + 8;
      *(__m128 *)(v23 + 16) = _mm_shuffle_ps(v28, (__m128)DirectX::g_XMZero, 228);
      v15 += 2;
      *(_OWORD *)(v23 + 32) = v14;
      *(__m128 *)(v26 + 16) = v29;
      *(_OWORD *)(v26 + 32) = v14;
    }
    while ( v15 < v16 );
  }
  return result;
}
