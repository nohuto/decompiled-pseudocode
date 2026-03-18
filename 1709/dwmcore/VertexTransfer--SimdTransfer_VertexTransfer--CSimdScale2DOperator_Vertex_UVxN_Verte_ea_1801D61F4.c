/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D61F4
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180072B5C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x1801D5854 (VertexTransfer--SimdBlend_2_.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        float *a3,
        float *a4)
{
  __int64 v4; // r13
  GUID v7; // xmm7
  GUID v9; // xmm8
  GUID v10; // xmm9
  struct D2DQuaternion *result; // rax
  unsigned int v12; // ebp
  double v13; // xmm11_8
  __int128 v14; // xmm10
  unsigned int v15; // r12d
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  unsigned int v21; // esi
  __int64 v22; // r14
  __int64 v23; // r15
  int v24; // r8d
  __m128 *v25; // r9
  double *v26; // r11
  __m128 *v27; // r10
  __m128 *v28; // r11
  __m128 v29; // xmm3
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  int v32; // [rsp+20h] [rbp-E8h]
  int v33; // [rsp+20h] [rbp-E8h]
  __int128 v34; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v35[9]; // [rsp+50h] [rbp-B8h] BYREF
  struct D2DQuaternion *v36; // [rsp+110h] [rbp+8h]

  v4 = a1 + 8;
  v7 = DirectX::g_XMZero;
  v9 = DirectX::g_XMZero;
  v10 = DirectX::g_XMZero;
  result = *(struct D2DQuaternion **)a1;
  v12 = *(_DWORD *)(a1 + 40) >> 1;
  v36 = *(struct D2DQuaternion **)a1;
  *(_QWORD *)&v13 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0).m128_u64[0];
  if ( a3 )
  {
    v7 = (GUID)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 2)),
                 _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 1), (__m128)0LL));
    v9 = (GUID)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 4), (__m128)*((unsigned int *)a3 + 6)),
                 _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)0LL));
    v10 = (GUID)_mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
                  _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v34, (__int64)result, (__int64 *)v4, a3, a4);
    v14 = v34;
  }
  v15 = *(_DWORD *)(a1 + 20);
  v16 = (__m128)a2[4];
  v17 = (__m128)a2[5];
  v35[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v16), _mm_unpacklo_ps(v17, v17));
  v19 = (__m128)a2[13];
  v35[1] = v18;
  v20 = (__m128)a2[12];
  v21 = 0;
  for ( v35[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0LL), _mm_unpacklo_ps(v19, (__m128)0LL));
        v21 < v15;
        *(_OWORD *)(v23 + 32) = v14 )
  {
    v22 = *(_QWORD *)(a1 + 56) + (int)(v21 * *(_DWORD *)(a1 + 64));
    v23 = *(_QWORD *)(a1 + 56) + (int)((v21 + 1) * *(_DWORD *)(a1 + 64));
    VertexTransfer::SimdBlend_2_(*(double *)(*(_QWORD *)v4 + (int)(v21 * *(_DWORD *)(v4 + 8))), v13);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v35,
      v25,
      (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v21 * v24)),
      *(double *)v25->m128_u64,
      v32,
      v12,
      (__m128 *)v22);
    VertexTransfer::SimdBlend_2_(*v26, v13);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v35,
      v28,
      v27,
      *(double *)v28->m128_u64,
      v33,
      v12,
      (__m128 *)v23);
    result = v36;
    v29 = *((__m128 *)v36 + ((unsigned __int64)v21 >> 1));
    v30 = v29;
    if ( a3 )
    {
      v30 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), (__m128)v9), (__m128)v10),
              _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), (__m128)v7));
      v31 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 255), (__m128)v9), (__m128)v10),
                _mm_mul_ps(_mm_shuffle_ps(v29, v29, 170), (__m128)v7)),
              (__m128)DirectX::g_XMZero,
              228);
    }
    else
    {
      v31 = (__m128)_mm_unpackhi_pd((__m128d)v29, (__m128d)DirectX::g_XMZero);
    }
    v21 += 2;
    *(__m128 *)(v22 + 16) = _mm_shuffle_ps(v30, (__m128)DirectX::g_XMZero, 228);
    *(_OWORD *)(v22 + 32) = v14;
    *(__m128 *)(v23 + 16) = v31;
  }
  return result;
}
