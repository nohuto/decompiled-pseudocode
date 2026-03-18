/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC644
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801BE0D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015EFB0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801BEE80 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __int64 v4; // r13
  __m128 v6; // xmm6
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  struct D2DQuaternion *result; // rax
  int v12; // ebp
  __int128 v13; // xmm9
  unsigned int v14; // r14d
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  unsigned int v20; // edi
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // r15
  int v24; // r9d
  int v25; // r10d
  int v26; // r11d
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  int v30; // [rsp+20h] [rbp-D8h]
  int v31; // [rsp+20h] [rbp-D8h]
  __int128 v32; // [rsp+40h] [rbp-B8h] BYREF
  _OWORD v33[8]; // [rsp+50h] [rbp-A8h] BYREF
  struct D2DQuaternion *v34; // [rsp+100h] [rbp+8h]

  v4 = a1 + 8;
  v6 = (__m128)DirectX::g_XMZero;
  v9 = (__m128)DirectX::g_XMZero;
  v10 = (__m128)DirectX::g_XMZero;
  result = *(struct D2DQuaternion **)a1;
  v12 = *(_DWORD *)(a1 + 40) >> 1;
  v34 = *(struct D2DQuaternion **)a1;
  if ( a3 )
  {
    v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v9 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v13 = _xmm;
  if ( a3 && a4 )
  {
    result = CalculateTBNFrameFrom3Vertices(
               (struct D2DQuaternion *)&v32,
               (__int64)result,
               (__int64 *)v4,
               (CMILMatrix *)a3,
               a4);
    v13 = v32;
  }
  v14 = *(_DWORD *)(a1 + 20);
  v15 = (__m128)a2[4];
  v16 = (__m128)a2[5];
  v33[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, v15), _mm_unpacklo_ps(v16, v16));
  v18 = (__m128)a2[13];
  v33[1] = v17;
  v19 = (__m128)a2[12];
  v20 = 0;
  for ( v33[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, (__m128)0LL), _mm_unpacklo_ps(v18, (__m128)0LL));
        v20 < v14;
        *(_OWORD *)(v22 + 32) = v13 )
  {
    v21 = *(_DWORD *)(a1 + 64);
    v22 = *(_QWORD *)(a1 + 56) + (int)((v20 + 1) * v21);
    v23 = *(_QWORD *)(a1 + 56) + (int)(v20 * v21);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v33,
      *(_DWORD *)v4 + v20 * *(_DWORD *)(v4 + 8),
      *(_DWORD *)(a1 + 24) + v20 * *(_DWORD *)(a1 + 32),
      *(_DWORD *)v4 + v20 * *(_DWORD *)(v4 + 8),
      v30,
      v12,
      v23);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v33,
      v26,
      v25,
      v24,
      v31,
      v12,
      v22);
    result = v34;
    v27 = *((__m128 *)v34 + ((unsigned __int64)v20 >> 1));
    v28 = v27;
    if ( a3 )
    {
      v28 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v9), v10),
              _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v6));
      v29 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 255), v9), v10),
                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), v6)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v29 = (__m128)_mm_unpackhi_pd((__m128d)v27, DirectX::g_XMZero);
    }
    v20 += 2;
    *(__m128 *)(v23 + 16) = _mm_shuffle_ps(v28, DirectX::g_XMZero, 228);
    *(_OWORD *)(v23 + 32) = v13;
    *(__m128 *)(v22 + 16) = v29;
  }
  return result;
}
