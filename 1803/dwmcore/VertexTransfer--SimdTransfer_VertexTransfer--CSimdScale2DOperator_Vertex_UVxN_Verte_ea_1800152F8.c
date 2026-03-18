/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800152F8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000E340 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180015A04 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180015A5C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        float *a3,
        float *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // ebp
  __m128 v10; // xmm9
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int128 v14; // xmm10
  unsigned int v15; // r15d
  unsigned int v16; // eax
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  float v19; // xmm1_4
  __m128 v20; // xmm3
  __m128 v21; // xmm2
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  int v25; // r11d
  int v26; // r10d
  int v27; // r9d
  DirectX::PackedVector *v28; // rcx
  __m128 v29; // xmm6
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  DirectX::PackedVector *v32; // rcx
  DirectX::PackedVector *v33; // rcx
  DirectX::PackedVector *v34; // rcx
  int v36; // [rsp+20h] [rbp-E8h]
  int v37; // [rsp+20h] [rbp-E8h]
  __int128 v38; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v39[8]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+110h] [rbp+8h]
  __int64 v41; // [rsp+118h] [rbp+10h]

  v6 = *(__m128 *)&DirectX::g_XMZero;
  v8 = *(__m128 *)&DirectX::g_XMZero;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(__m128 *)&DirectX::g_XMZero;
  v11 = *(_QWORD *)a1;
  v12 = a1 + 8;
  v13 = v9 >> 1;
  v41 = v11;
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
  v14 = _xmm;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v38, v11, (__int64 *)v12, a3, a4);
    v14 = v38;
    v12 = a1 + 8;
  }
  v15 = 0;
  v16 = *(_DWORD *)(a1 + 20);
  v17 = (__m128)a2[4];
  v18 = (__m128)a2[5];
  v39[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v19 = 0.0;
  v20 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, v17), _mm_unpacklo_ps(v18, v18));
  v21 = (__m128)a2[13];
  v39[1] = v20;
  v39[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
  v40 = v16;
  if ( v16 )
  {
    do
    {
      v22 = *(_QWORD *)v12 + (int)(*(_DWORD *)(v12 + 8) * (v15 + 1));
      v23 = *(_QWORD *)(a1 + 56) + (int)(v15 * *(_DWORD *)(a1 + 64));
      v24 = *(_QWORD *)(a1 + 56) + (int)((v15 + 1) * *(_DWORD *)(a1 + 64));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v39,
        *(_DWORD *)v12 + v15 * *(_DWORD *)(v12 + 8),
        *(_QWORD *)(a1 + 24) + v15 * *(_DWORD *)(a1 + 32),
        (_DWORD)a4,
        v36,
        v13,
        v23);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v39,
        v22,
        v26 + (v15 + 1) * v25,
        v27,
        v37,
        v13,
        v24);
      v29 = *(__m128 *)(v41 + 16 * ((unsigned __int64)v15 >> 1));
      if ( a3 )
      {
        v19 = DirectX::g_XMZero;
        v30 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v6)),
                *(__m128 *)&DirectX::g_XMZero,
                228);
        v31 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v29, v29, 170), v6)),
                *(__m128 *)&DirectX::g_XMZero,
                228);
      }
      else
      {
        v30 = _mm_shuffle_ps(v29, *(__m128 *)&DirectX::g_XMZero, 228);
        v31 = (__m128)_mm_unpackhi_pd((__m128d)v29, *(__m128d *)&DirectX::g_XMZero);
      }
      *(__m128 *)(v23 + 16) = v30;
      *(_OWORD *)(v23 + 32) = v14;
      *(__m128 *)(v24 + 16) = v31;
      *(_OWORD *)(v24 + 32) = v14;
      *(_WORD *)(v23 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v28, v19);
      *(_WORD *)(v23 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v32, v19);
      *(_WORD *)(v24 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v33, v19);
      LOWORD(v16) = DirectX::PackedVector::XMConvertFloatToHalf(v34, v19);
      v15 += 2;
      *(_WORD *)(v24 + 30) = v16;
      v12 = a1 + 8;
    }
    while ( v15 < v40 );
  }
  return v16;
}
