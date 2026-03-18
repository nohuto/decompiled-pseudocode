/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D5A28
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011DF14 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        float *a3,
        float *a4)
{
  GUID v5; // xmm6
  GUID v8; // xmm7
  unsigned int v9; // r14d
  GUID v10; // xmm8
  struct D2DQuaternion *result; // rax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int128 v14; // xmm9
  unsigned int v15; // r15d
  unsigned int v16; // ebp
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  double *v20; // rdx
  double *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r13
  int v24; // r10d
  int v25; // r11d
  __int64 v26; // r9
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  int v30; // [rsp+20h] [rbp-D8h]
  int v31; // [rsp+20h] [rbp-D8h]
  __int128 v32; // [rsp+40h] [rbp-B8h] BYREF
  __m128 v33[8]; // [rsp+50h] [rbp-A8h] BYREF
  struct D2DQuaternion *v34; // [rsp+100h] [rbp+8h]

  v5 = DirectX::g_XMZero;
  v8 = DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = DirectX::g_XMZero;
  result = *(struct D2DQuaternion **)a1;
  v12 = a1 + 8;
  v13 = v9 >> 1;
  v34 = result;
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
  v15 = *(_DWORD *)(a1 + 20);
  v16 = 0;
  v17 = (__m128)a2[5];
  v33[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v17, (__m128)0LL));
  v19 = (__m128)a2[13];
  v33[1] = v18;
  for ( v33[2] = _mm_unpacklo_ps(
                   _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
                   _mm_unpacklo_ps(v19, (__m128)0LL)); v16 < v15; *(_OWORD *)(v23 + 32) = v14 )
  {
    v20 = (double *)(*(_QWORD *)v12 + (int)(v16 * *(_DWORD *)(v12 + 8)));
    v21 = (double *)(*(_QWORD *)v12 + (int)(*(_DWORD *)(v12 + 8) * (v16 + 1)));
    v22 = *(_QWORD *)(a1 + 56) + (int)(v16 * *(_DWORD *)(a1 + 64));
    v23 = *(_QWORD *)(a1 + 56) + (int)((v16 + 1) * *(_DWORD *)(a1 + 64));
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v33,
      (__int64)v20,
      *(_QWORD *)(a1 + 24) + (int)(v16 * *(_DWORD *)(a1 + 32)),
      *v20,
      v30,
      v13,
      (__m128 *)v22);
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v33,
      (__int64)v21,
      v26 + v25 * v24,
      *v21,
      v31,
      v13,
      (__m128 *)v23);
    result = v34;
    v27 = *((__m128 *)v34 + ((unsigned __int64)v16 >> 1));
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
    *(__m128 *)(v22 + 16) = _mm_shuffle_ps(v28, (__m128)DirectX::g_XMZero, 228);
    v16 += 2;
    *(_OWORD *)(v22 + 32) = v14;
    *(__m128 *)(v23 + 16) = v29;
  }
  return result;
}
