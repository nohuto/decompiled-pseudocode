/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180014FC8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000E340 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180015A04 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180015A5C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     VertexTransfer::SimdBlend_2_ @ 0x180015D4C (VertexTransfer--SimdBlend_2_.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        float *a3,
        float *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // ebp
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebp
  unsigned __int32 v15; // xmm10_4
  __int128 v16; // xmm11
  unsigned int v17; // r15d
  unsigned int v18; // eax
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  int v26; // r11d
  int v27; // r10d
  int v28; // edx
  int v29; // r9d
  float v30; // xmm1_4
  int v31; // r11d
  int v32; // r10d
  int v33; // r9d
  DirectX::PackedVector *v34; // rcx
  __m128 v35; // xmm6
  __m128 v36; // xmm2
  __m128 v37; // xmm3
  DirectX::PackedVector *v38; // rcx
  DirectX::PackedVector *v39; // rcx
  DirectX::PackedVector *v40; // rcx
  int v42; // [rsp+20h] [rbp-F8h]
  int v43; // [rsp+20h] [rbp-F8h]
  __int128 v44; // [rsp+40h] [rbp-D8h] BYREF
  _OWORD v45[9]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v46; // [rsp+120h] [rbp+8h]
  __int64 v47; // [rsp+128h] [rbp+10h]

  v6 = *(__m128 *)&DirectX::g_XMZero;
  v8 = *(__m128 *)&DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(__m128 *)&DirectX::g_XMZero;
  v11 = (__m128)*(unsigned int *)(a1 + 44);
  v12 = *(_QWORD *)a1;
  v13 = a1 + 8;
  v14 = v9 >> 1;
  v47 = v12;
  v15 = _mm_shuffle_ps(v11, v11, 0).m128_u32[0];
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
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v44, v12, (__int64 *)v13, a3, a4);
    v16 = v44;
    v13 = a1 + 8;
  }
  v17 = 0;
  v18 = *(_DWORD *)(a1 + 20);
  v19 = (__m128)a2[4];
  v20 = (__m128)a2[5];
  v45[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v21 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, v19), _mm_unpacklo_ps(v20, v20));
  v22 = (__m128)a2[13];
  v45[1] = v21;
  v45[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
  v46 = v18;
  if ( v18 )
  {
    do
    {
      v23 = *(_QWORD *)v13 + (int)(*(_DWORD *)(v13 + 8) * (v17 + 1));
      v24 = *(_QWORD *)(a1 + 56) + (int)(v17 * *(_DWORD *)(a1 + 64));
      v25 = *(_QWORD *)(a1 + 56) + (int)((v17 + 1) * *(_DWORD *)(a1 + 64));
      VertexTransfer::SimdBlend_2_();
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v45,
        v28,
        v27 + v17 * v26,
        v29,
        v42,
        v14,
        v24);
      v30 = *(float *)&v15;
      VertexTransfer::SimdBlend_2_();
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v45,
        v23,
        v32 + (v17 + 1) * v31,
        v33,
        v43,
        v14,
        v25);
      v35 = *(__m128 *)(v47 + 16 * ((unsigned __int64)v17 >> 1));
      if ( a3 )
      {
        v30 = DirectX::g_XMZero;
        v36 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 85), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v6)),
                *(__m128 *)&DirectX::g_XMZero,
                228);
        v37 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v35, v35, 170), v6)),
                *(__m128 *)&DirectX::g_XMZero,
                228);
      }
      else
      {
        v36 = _mm_shuffle_ps(v35, *(__m128 *)&DirectX::g_XMZero, 228);
        v37 = (__m128)_mm_unpackhi_pd((__m128d)v35, *(__m128d *)&DirectX::g_XMZero);
      }
      *(__m128 *)(v24 + 16) = v36;
      *(_OWORD *)(v24 + 32) = v16;
      *(__m128 *)(v25 + 16) = v37;
      *(_OWORD *)(v25 + 32) = v16;
      *(_WORD *)(v24 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v34, v30);
      *(_WORD *)(v24 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v38, v30);
      *(_WORD *)(v25 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v39, v30);
      LOWORD(v18) = DirectX::PackedVector::XMConvertFloatToHalf(v40, v30);
      v17 += 2;
      *(_WORD *)(v25 + 30) = v18;
      v13 = a1 + 8;
    }
    while ( v17 < v46 );
  }
  return v18;
}
