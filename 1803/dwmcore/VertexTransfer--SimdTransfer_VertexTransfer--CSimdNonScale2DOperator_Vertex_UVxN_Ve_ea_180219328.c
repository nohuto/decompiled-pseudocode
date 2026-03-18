/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219328
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000E340 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180015A04 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180140C5C (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        float *a3,
        float *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // r12d
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r12d
  float v15; // xmm10_4
  __int128 v16; // xmm11
  unsigned int v17; // r13d
  unsigned int v18; // ebp
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __m128 v21; // xmm2
  double *v22; // rdx
  __m128 *v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r15
  int v26; // r10d
  int v27; // r11d
  __int64 v28; // r9
  float v29; // xmm1_4
  DirectX::PackedVector *v30; // rcx
  __m128 v31; // xmm6
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  DirectX::PackedVector *v34; // rcx
  DirectX::PackedVector *v35; // rcx
  DirectX::PackedVector *v36; // rcx
  int v38; // [rsp+20h] [rbp-E8h]
  int v39; // [rsp+20h] [rbp-E8h]
  __int128 v40; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v41[9]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+110h] [rbp+8h]

  v6 = *(__m128 *)&DirectX::g_XMZero;
  v8 = *(__m128 *)&DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(__m128 *)&DirectX::g_XMZero;
  v11 = (__m128)*(unsigned int *)(a1 + 44);
  v12 = *(_QWORD *)a1;
  v13 = a1 + 8;
  v14 = v9 >> 1;
  v42 = v12;
  LODWORD(v15) = _mm_shuffle_ps(v11, v11, 0).m128_u32[0];
  if ( a3 )
  {
    v6 = _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 2)),
           _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 1), (__m128)0LL));
    v8 = _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 4), (__m128)*((unsigned int *)a3 + 6)),
           _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)0LL));
    v10 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
  }
  v16 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v12) = (unsigned __int16)CalculateTBNFrameFrom3Vertices(
                                      (struct D2DQuaternion *)&v40,
                                      v12,
                                      (__int64 *)v13,
                                      a3,
                                      a4);
    v16 = v40;
    v13 = a1 + 8;
  }
  v17 = *(_DWORD *)(a1 + 20);
  v18 = 0;
  v19 = (__m128)a2[5];
  v41[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v20 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v19, (__m128)0LL));
  v21 = (__m128)a2[13];
  v41[1] = v20;
  for ( v41[2] = _mm_unpacklo_ps(
                   _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
                   _mm_unpacklo_ps(v21, (__m128)0LL)); v18 < v17; v13 = a1 + 8 )
  {
    v22 = (double *)(*(_QWORD *)v13 + (int)(v18 * *(_DWORD *)(v13 + 8)));
    v23 = (__m128 *)(*(_QWORD *)v13 + (int)(*(_DWORD *)(v13 + 8) * (v18 + 1)));
    v24 = *(_QWORD *)(a1 + 56) + (int)(v18 * *(_DWORD *)(a1 + 64));
    v25 = *(_QWORD *)(a1 + 56) + (int)((v18 + 1) * *(_DWORD *)(a1 + 64));
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v41,
      (__int64)v22,
      *(_QWORD *)(a1 + 24) + (int)(v18 * *(_DWORD *)(a1 + 32)),
      *v22,
      v38,
      v14,
      (__m128 *)v24);
    v29 = (float)((float)(_mm_cvtepi32_ps(
                            _mm_xor_si128(
                              _mm_and_si128((__m128i)_mm_shuffle_ps(*v23, *v23, 255), g_MaskA8B8G8R8),
                              g_FlipA8R8G8B8)).m128_f32[0]
                        + 0.0)
                * 1.0)
        * v15;
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v41,
      (__int64)v23,
      v28 + v27 * v26,
      *(double *)v23->m128_u64,
      v39,
      v14,
      (__m128 *)v25);
    v31 = *(__m128 *)(v42 + 16 * ((unsigned __int64)v18 >> 1));
    if ( a3 )
    {
      v29 = DirectX::g_XMZero;
      v32 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v6)),
              *(__m128 *)&DirectX::g_XMZero,
              228);
      v33 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v6)),
              *(__m128 *)&DirectX::g_XMZero,
              228);
    }
    else
    {
      v32 = _mm_shuffle_ps(v31, *(__m128 *)&DirectX::g_XMZero, 228);
      v33 = (__m128)_mm_unpackhi_pd((__m128d)v31, *(__m128d *)&DirectX::g_XMZero);
    }
    *(__m128 *)(v24 + 16) = v32;
    *(_OWORD *)(v24 + 32) = v16;
    *(__m128 *)(v25 + 16) = v33;
    *(_OWORD *)(v25 + 32) = v16;
    *(_WORD *)(v24 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v30, v29);
    *(_WORD *)(v24 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v34, v29);
    *(_WORD *)(v25 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v35, v29);
    LOWORD(v12) = DirectX::PackedVector::XMConvertFloatToHalf(v36, v29);
    v18 += 2;
    *(_WORD *)(v25 + 30) = v12;
  }
  return v12;
}
