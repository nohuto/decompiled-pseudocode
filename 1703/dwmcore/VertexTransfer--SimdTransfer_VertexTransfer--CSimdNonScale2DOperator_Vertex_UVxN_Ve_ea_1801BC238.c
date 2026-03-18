/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC238
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801BE0D8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015EFB0 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801BEE1C (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
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
  unsigned int v14; // r12d
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r14
  int v23; // r9d
  int v24; // r10d
  int v25; // r11d
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  int v29; // [rsp+20h] [rbp-C8h]
  int v30; // [rsp+20h] [rbp-C8h]
  __int128 v31; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD v32[7]; // [rsp+50h] [rbp-98h] BYREF
  struct D2DQuaternion *v33; // [rsp+F0h] [rbp+8h]

  v4 = a1 + 8;
  v6 = (__m128)DirectX::g_XMZero;
  v9 = (__m128)DirectX::g_XMZero;
  v10 = (__m128)DirectX::g_XMZero;
  result = *(struct D2DQuaternion **)a1;
  v12 = *(_DWORD *)(a1 + 40) >> 1;
  v33 = *(struct D2DQuaternion **)a1;
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
               (struct D2DQuaternion *)&v31,
               (__int64)result,
               (__int64 *)v4,
               (CMILMatrix *)a3,
               a4);
    v13 = v31;
  }
  v14 = *(_DWORD *)(a1 + 20);
  v15 = (__m128)a2[5];
  v32[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v16 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v15, (__m128)0LL));
  v17 = (__m128)a2[13];
  v32[1] = v16;
  v18 = (__m128)a2[12];
  v19 = 0;
  for ( v32[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v17, (__m128)0LL));
        v19 < v14;
        *(_OWORD *)(v21 + 32) = v13 )
  {
    v20 = *(_DWORD *)(a1 + 64);
    v21 = *(_QWORD *)(a1 + 56) + (int)((v19 + 1) * v20);
    v22 = *(_QWORD *)(a1 + 56) + (int)(v19 * v20);
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v32,
      *(_DWORD *)v4 + v19 * *(_DWORD *)(v4 + 8),
      *(_DWORD *)(a1 + 24) + v19 * *(_DWORD *)(a1 + 32),
      v19 * *(_DWORD *)(a1 + 32),
      v29,
      v12,
      v22);
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v32,
      v25,
      v24,
      v23,
      v30,
      v12,
      v21);
    result = v33;
    v26 = *((__m128 *)v33 + ((unsigned __int64)v19 >> 1));
    v27 = v26;
    if ( a3 )
    {
      v27 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v9), v10),
              _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v6));
      v28 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 255), v9), v10),
                _mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), v6)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v28 = (__m128)_mm_unpackhi_pd((__m128d)v26, DirectX::g_XMZero);
    }
    v19 += 2;
    *(__m128 *)(v22 + 16) = _mm_shuffle_ps(v27, DirectX::g_XMZero, 228);
    *(_OWORD *)(v22 + 32) = v13;
    *(__m128 *)(v21 + 16) = v28;
  }
  return result;
}
