/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC964
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801BE0D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015EFB0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x1801BBA70 (VertexTransfer--SimdBlend_2_.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801BEE80 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __int64 v4; // r13
  __m128 v7; // xmm7
  __m128 v9; // xmm8
  __m128 v10; // xmm9
  struct D2DQuaternion *result; // rax
  int v12; // ebp
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
  int v25; // r9d
  double *v26; // r11
  int v27; // r9d
  int v28; // r10d
  int v29; // r11d
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  int v33; // [rsp+20h] [rbp-E8h]
  int v34; // [rsp+20h] [rbp-E8h]
  __int128 v35; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v36[9]; // [rsp+50h] [rbp-B8h] BYREF
  struct D2DQuaternion *v37; // [rsp+110h] [rbp+8h]

  v4 = a1 + 8;
  v7 = (__m128)DirectX::g_XMZero;
  v9 = (__m128)DirectX::g_XMZero;
  v10 = (__m128)DirectX::g_XMZero;
  result = *(struct D2DQuaternion **)a1;
  v12 = *(_DWORD *)(a1 + 40) >> 1;
  v37 = *(struct D2DQuaternion **)a1;
  *(_QWORD *)&v13 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0).m128_u64[0];
  if ( a3 )
  {
    v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    result = CalculateTBNFrameFrom3Vertices(
               (struct D2DQuaternion *)&v35,
               (__int64)result,
               (__int64 *)v4,
               (CMILMatrix *)a3,
               a4);
    v14 = v35;
  }
  v15 = *(_DWORD *)(a1 + 20);
  v16 = (__m128)a2[4];
  v17 = (__m128)a2[5];
  v36[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v16), _mm_unpacklo_ps(v17, v17));
  v19 = (__m128)a2[13];
  v36[1] = v18;
  v20 = (__m128)a2[12];
  v21 = 0;
  for ( v36[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0LL), _mm_unpacklo_ps(v19, (__m128)0LL));
        v21 < v15;
        *(_OWORD *)(v23 + 32) = v14 )
  {
    v22 = *(_QWORD *)(a1 + 56) + (int)(v21 * *(_DWORD *)(a1 + 64));
    v23 = *(_QWORD *)(a1 + 56) + (int)((v21 + 1) * *(_DWORD *)(a1 + 64));
    VertexTransfer::SimdBlend_2_(*(double *)(*(_QWORD *)v4 + (int)(v21 * *(_DWORD *)(v4 + 8))), v13);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v36,
      v25,
      *(_DWORD *)(a1 + 24) + v21 * v24,
      v25,
      v33,
      v12,
      v22);
    VertexTransfer::SimdBlend_2_(*v26, v13);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v36,
      v29,
      v28,
      v27,
      v34,
      v12,
      v23);
    result = v37;
    v30 = *((__m128 *)v37 + ((unsigned __int64)v21 >> 1));
    v31 = v30;
    if ( a3 )
    {
      v31 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v9), v10),
              _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v7));
      v32 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 255), v9), v10),
                _mm_mul_ps(_mm_shuffle_ps(v30, v30, 170), v7)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v32 = (__m128)_mm_unpackhi_pd((__m128d)v30, DirectX::g_XMZero);
    }
    v21 += 2;
    *(__m128 *)(v22 + 16) = _mm_shuffle_ps(v31, DirectX::g_XMZero, 228);
    *(_OWORD *)(v22 + 32) = v14;
    *(__m128 *)(v23 + 16) = v32;
  }
  return result;
}
