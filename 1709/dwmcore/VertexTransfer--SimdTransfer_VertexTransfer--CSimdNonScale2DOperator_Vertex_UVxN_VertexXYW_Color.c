/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180073254
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 *v5; // r15
  __int64 v6; // r14
  GUID v9; // xmm6
  __m128 v11; // xmm7
  GUID v12; // xmm8
  GUID v13; // xmm9
  unsigned int v14; // ebp
  __int128 v15; // xmm12
  unsigned int v16; // r8d
  __m128 v17; // xmm11
  __m128 v18; // xmm5
  __m128 v19; // xmm10
  __m128 v20; // xmm2
  unsigned int v21; // edi
  __m128 v22; // xmm11
  __m128 v23; // xmm7
  __m128 *v24; // r11
  __m128 v25; // xmm4
  __m128 *v26; // r10
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r9
  __m128i v30; // xmm3
  __m128 v31; // xmm2
  __m128i v32; // xmm3
  __m128 v33; // xmm3
  _OWORD *v34; // rax
  __int64 v35; // rcx
  char *v36; // r11
  __m128 v37; // xmm4
  __m128i v38; // xmm3
  __m128 v39; // xmm2
  __m128i v40; // xmm3
  __m128 v41; // xmm3
  _OWORD *v42; // rax
  __int64 v43; // rcx
  char *v44; // r10
  __m128 v45; // xmm3
  __m128 v46; // xmm1
  __m128 v47; // xmm2
  __int128 v48; // [rsp+30h] [rbp-98h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v9 = DirectX::g_XMZero;
  v11 = (__m128)*((unsigned int *)a1 + 11);
  v12 = DirectX::g_XMZero;
  v13 = DirectX::g_XMZero;
  v14 = *((_DWORD *)a1 + 10) >> 1;
  if ( a3 )
  {
    v9 = (GUID)_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v12 = (GUID)_mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]),
                  _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v13 = (GUID)_mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]),
                  _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v15 = _xmm;
  if ( a3 && a4 )
  {
    result = (_UNKNOWN **)CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v48, a4);
    v15 = v48;
  }
  v16 = 0;
  v17 = (__m128)a2[12];
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v19 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v20 = (__m128)a2[13];
  v21 = *((_DWORD *)a1 + 5);
  v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v20, (__m128)0LL));
  if ( v21 )
  {
    v23 = _mm_shuffle_ps(v11, v11, 0);
    do
    {
      v24 = (__m128 *)(*v5 + (int)(v16 * *((_DWORD *)v5 + 2)));
      v25 = *v24;
      v26 = (__m128 *)(*v5 + (int)(*((_DWORD *)v5 + 2) * (v16 + 1)));
      v27 = *((_DWORD *)a1 + 16);
      v28 = a1[7] + (int)((v16 + 1) * v27);
      v29 = a1[7] + (int)(v16 * v27);
      v30 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v25, v25, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_and_ps(
                    _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228),
                    (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask),
                  _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v23))));
      v31 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v24, *v24, 85), v19), v22),
              _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v18));
      v32 = _mm_packs_epi32(v30, v30);
      v33 = (__m128)_mm_packus_epi16(v32, v32);
      *(__m128 *)v29 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_shuffle_ps(v31, v31, 228)),
                         _mm_and_ps(
                           _mm_shuffle_ps(v33, v33, 228),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v14 )
      {
        v34 = (_OWORD *)(v29 + 48);
        v35 = v14;
        v36 = (char *)v24 - v29;
        do
        {
          *v34 = *(_OWORD *)((char *)v34 + (_QWORD)v36 - 32);
          ++v34;
          --v35;
        }
        while ( v35 );
      }
      v37 = *v26;
      v38 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps(
                      _mm_xor_si128(
                        _mm_and_si128((__m128i)_mm_shuffle_ps(v37, v37, 255), g_MaskA8B8G8R8),
                        g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_and_ps(
                    _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228),
                    (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask),
                  _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v23))));
      v39 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v26, *v26, 85), v19), v22),
              _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), v18));
      v40 = _mm_packs_epi32(v38, v38);
      v41 = (__m128)_mm_packus_epi16(v40, v40);
      *(__m128 *)v28 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_shuffle_ps(v39, v39, 228)),
                         _mm_and_ps(
                           _mm_shuffle_ps(v41, v41, 228),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v14 )
      {
        v42 = (_OWORD *)(v28 + 48);
        v43 = v14;
        v44 = (char *)v26 - v28;
        do
        {
          *v42 = *(_OWORD *)((char *)v42 + (_QWORD)v44 - 32);
          ++v42;
          --v43;
        }
        while ( v43 );
      }
      result = (_UNKNOWN **)(2 * ((unsigned __int64)v16 >> 1));
      v45 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v16 >> 1));
      v46 = v45;
      if ( a3 )
      {
        v46 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v45, v45, 85), (__m128)v12), (__m128)v13),
                _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), (__m128)v9));
        v47 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v45, v45, 255), (__m128)v12), (__m128)v13),
                  _mm_mul_ps(_mm_shuffle_ps(v45, v45, 170), (__m128)v9)),
                (__m128)DirectX::g_XMZero,
                228);
      }
      else
      {
        v47 = (__m128)_mm_unpackhi_pd((__m128d)v45, (__m128d)DirectX::g_XMZero);
      }
      v16 += 2;
      *(__m128 *)(v29 + 16) = _mm_shuffle_ps(v46, (__m128)DirectX::g_XMZero, 228);
      *(_OWORD *)(v29 + 32) = v15;
      *(__m128 *)(v28 + 16) = v47;
      *(_OWORD *)(v28 + 32) = v15;
    }
    while ( v16 < v21 );
  }
  return result;
}
