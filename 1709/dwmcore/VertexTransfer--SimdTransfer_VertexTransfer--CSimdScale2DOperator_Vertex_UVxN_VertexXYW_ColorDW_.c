/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800728C0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180072B5C (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int64 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4)
{
  GUID v5; // xmm6
  GUID v8; // xmm7
  unsigned int v9; // r15d
  GUID v10; // xmm8
  __int64 v11; // rax
  __int64 *v12; // rcx
  unsigned int v13; // r15d
  __int128 v14; // xmm9
  unsigned int v15; // ebp
  __int64 result; // rax
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // r13
  int v24; // r11d
  int v25; // r10d
  int v26; // r9d
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  int v30; // [rsp+20h] [rbp-D8h]
  int v31; // [rsp+20h] [rbp-D8h]
  __int128 v32; // [rsp+40h] [rbp-B8h] BYREF
  _OWORD v33[7]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+100h] [rbp+8h]
  __int64 v35; // [rsp+108h] [rbp+10h]

  v5 = DirectX::g_XMZero;
  v8 = DirectX::g_XMZero;
  v9 = *((_DWORD *)a1 + 10);
  v10 = DirectX::g_XMZero;
  v11 = *a1;
  v12 = a1 + 1;
  v13 = v9 >> 1;
  v35 = v11;
  if ( a3 )
  {
    v5 = (GUID)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v8 = (GUID)_mm_unpacklo_ps(
                 _mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]),
                 _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v10 = (GUID)_mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]),
                  _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v32, a4);
    v14 = v32;
    v12 = a1 + 1;
  }
  v15 = 0;
  result = *((unsigned int *)a1 + 5);
  v17 = (__m128)a2[4];
  v18 = (__m128)a2[5];
  v33[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, v17), _mm_unpacklo_ps(v18, v18));
  v20 = (__m128)a2[13];
  v33[1] = v19;
  v33[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
  v34 = result;
  if ( (_DWORD)result )
  {
    do
    {
      v21 = *v12 + (int)(*((_DWORD *)v12 + 2) * (v15 + 1));
      v22 = a1[7] + (int)(v15 * *((_DWORD *)a1 + 16));
      v23 = a1[7] + (int)((v15 + 1) * *((_DWORD *)a1 + 16));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v33,
        *(_DWORD *)v12 + v15 * *((_DWORD *)v12 + 2),
        a1[3] + v15 * *((_DWORD *)a1 + 8),
        a4,
        v30,
        v13,
        v22);
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v33,
        v21,
        v25 + (v15 + 1) * v24,
        v26,
        v31,
        v13,
        v23);
      result = v35;
      v27 = *(__m128 *)(v35 + 16 * ((unsigned __int64)v15 >> 1));
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
      v12 = a1 + 1;
      *(__m128 *)(v22 + 16) = _mm_shuffle_ps(v28, (__m128)DirectX::g_XMZero, 228);
      v15 += 2;
      *(_OWORD *)(v22 + 32) = v14;
      *(__m128 *)(v23 + 16) = v29;
      *(_OWORD *)(v23 + 32) = v14;
    }
    while ( v15 < v34 );
  }
  return result;
}
