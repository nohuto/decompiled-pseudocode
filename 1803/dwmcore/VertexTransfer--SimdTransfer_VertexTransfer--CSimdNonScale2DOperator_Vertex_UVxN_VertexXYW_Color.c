/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18000E930
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000E340 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int64 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned int *a2,
        float *a3,
        float *a4)
{
  __int64 result; // rax
  __int64 v6; // r15
  __m128 v9; // xmm6
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  unsigned int v12; // ebp
  __int128 v13; // xmm5
  unsigned int v14; // edi
  unsigned int v15; // r12d
  __m128 v16; // xmm9
  __m128 v17; // xmm10
  __m128 v18; // xmm11
  __m128 *v19; // rbx
  __m128 *v20; // r11
  __int64 v21; // r10
  __m128 v22; // xmm2
  __int64 v23; // r9
  _OWORD *v24; // rax
  __int64 v25; // rcx
  char *v26; // rbx
  __m128 v27; // xmm2
  _OWORD *v28; // rax
  __int64 v29; // rcx
  char *v30; // r11
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  __m128 v33; // xmm4
  unsigned int v34; // edx
  unsigned __int32 v35; // edx
  unsigned int v36; // eax
  unsigned __int32 v37; // xmm0_4
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // eax
  __m128 v41; // xmm2
  unsigned int v42; // edx
  unsigned int v43; // r8d
  unsigned __int32 v44; // edx
  unsigned int v45; // eax
  unsigned __int32 v46; // xmm2_4
  unsigned int v47; // edx
  unsigned int v48; // edx
  __int128 v49; // [rsp+30h] [rbp-98h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v6 = *(_QWORD *)a1;
  v9 = *(__m128 *)&DirectX::g_XMZero;
  v10 = *(__m128 *)&DirectX::g_XMZero;
  v11 = *(__m128 *)&DirectX::g_XMZero;
  v12 = *(_DWORD *)(a1 + 40) >> 1;
  if ( a3 )
  {
    v9 = _mm_unpacklo_ps(
           _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 2)),
           _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 1), (__m128)0LL));
    v10 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 4), (__m128)*((unsigned int *)a3 + 6)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)0LL));
    v11 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 14)),
            _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 13), (__m128)0LL));
  }
  v13 = _xmm;
  if ( a3 && a4 )
  {
    result = (__int64)CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v49, v6, (__int64 *)(a1 + 8), a3, a4);
    v13 = v49;
  }
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 20);
  v16 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v17 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps((__m128)a2[5], (__m128)0LL));
  v18 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
          _mm_unpacklo_ps((__m128)a2[13], (__m128)0LL));
  if ( v15 )
  {
    do
    {
      v19 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v14));
      v20 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v14 + 1)));
      v21 = *(_QWORD *)(a1 + 56) + (int)(v14 * *(_DWORD *)(a1 + 64));
      v22 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 85), v17), v18),
              _mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 0), v16));
      v23 = *(_QWORD *)(a1 + 56) + (int)((v14 + 1) * *(_DWORD *)(a1 + 64));
      *(__m128 *)v21 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_shuffle_ps(v22, v22, 228)),
                         _mm_and_ps(
                           _mm_shuffle_ps(*v19, *v19, 228),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v12 )
      {
        v24 = (_OWORD *)(v21 + 48);
        v25 = v12;
        v26 = (char *)v19 - v21;
        do
        {
          *v24 = *(_OWORD *)((char *)v24 + (_QWORD)v26 - 32);
          ++v24;
          --v25;
        }
        while ( v25 );
      }
      v27 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v20, *v20, 85), v17), v18),
              _mm_mul_ps(_mm_shuffle_ps(*v20, *v20, 0), v16));
      *(__m128 *)v23 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_shuffle_ps(v27, v27, 228)),
                         _mm_and_ps(
                           _mm_shuffle_ps(*v20, *v20, 228),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v12 )
      {
        v28 = (_OWORD *)(v23 + 48);
        v29 = v12;
        v30 = (char *)v20 - v23;
        do
        {
          *v28 = *(_OWORD *)((char *)v28 + (_QWORD)v30 - 32);
          ++v28;
          --v29;
        }
        while ( v29 );
      }
      v31 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v14 >> 1));
      if ( a3 )
      {
        v32 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v10), v11),
                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v9)),
                *(__m128 *)&DirectX::g_XMZero,
                228);
        v33 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v10), v11),
                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v9)),
                *(__m128 *)&DirectX::g_XMZero,
                228);
      }
      else
      {
        v32 = _mm_shuffle_ps(v31, *(__m128 *)&DirectX::g_XMZero, 228);
        v33 = (__m128)_mm_unpackhi_pd((__m128d)v31, *(__m128d *)&DirectX::g_XMZero);
      }
      *(__m128 *)(v21 + 16) = v32;
      *(_OWORD *)(v21 + 32) = v13;
      v34 = v31.m128_i32[0] & 0x7FFFFFFF;
      *(__m128 *)(v23 + 16) = v33;
      *(_OWORD *)(v23 + 32) = v13;
      if ( (v31.m128_i32[0] & 0x7FFFFFFFu) > 0x477FE000 )
      {
        LOWORD(v36) = 31744;
        if ( (v31.m128_i32[0] & 0x7FFFFF) != 0 && (v31.m128_i32[0] & 0x7F800000) == 2139095040 )
          LOWORD(v36) = 0x7FFF;
      }
      else
      {
        if ( v34 < 0x38800000 )
          v35 = (v31.m128_i32[0] & 0x7FFFFF | 0x800000u) >> (113 - (v34 >> 23));
        else
          v35 = v34 - 939524096;
        v36 = ((v35 + ((v35 >> 13) & 1) + 4095) >> 13) & 0x7FFF;
      }
      *(_WORD *)(v21 + 28) = v36 | v31.m128_i16[1] & 0x8000;
      v37 = _mm_shuffle_ps(v31, v31, 85).m128_u32[0];
      v38 = v37 & 0x7FFFFFFF;
      if ( (v37 & 0x7FFFFFFF) > 0x477FE000 )
      {
        LOWORD(v40) = 31744;
        if ( (v37 & 0x7FFFFF) != 0 && (v37 & 0x7F800000) == 2139095040 )
          LOWORD(v40) = 0x7FFF;
      }
      else
      {
        if ( v38 < 0x38800000 )
          v39 = (v37 & 0x7FFFFF | 0x800000) >> (113 - (v38 >> 23));
        else
          v39 = v38 - 939524096;
        v40 = ((v39 + ((v39 >> 13) & 1) + 4095) >> 13) & 0x7FFF;
      }
      *(_WORD *)(v21 + 30) = v40 | HIWORD(v37) & 0x8000;
      v41 = (__m128)_mm_unpackhi_pd((__m128d)v31, *(__m128d *)&DirectX::g_XMZero);
      v42 = v41.m128_i32[0] & 0x7FFFFFFF;
      v43 = HIWORD(v41.m128_i32[0]) & 0x8000;
      if ( (v41.m128_i32[0] & 0x7FFFFFFFu) > 0x477FE000 )
      {
        LOWORD(v45) = 31744;
        if ( (v41.m128_i32[0] & 0x7FFFFF) != 0 && (v41.m128_i32[0] & 0x7F800000) == 2139095040 )
          LOWORD(v45) = 0x7FFF;
      }
      else
      {
        if ( v42 < 0x38800000 )
          v44 = (v41.m128_i32[0] & 0x7FFFFF | 0x800000u) >> (113 - (v42 >> 23));
        else
          v44 = v42 - 939524096;
        v45 = ((v44 + ((v44 >> 13) & 1) + 4095) >> 13) & 0x7FFF;
      }
      v46 = _mm_shuffle_ps(v41, v41, 85).m128_u32[0];
      *(_WORD *)(v23 + 28) = v45 | v43;
      v47 = v46 & 0x7FFFFFFF;
      if ( (v46 & 0x7FFFFFFF) > 0x477FE000 )
      {
        result = 31744LL;
        if ( (v46 & 0x7FFFFF) != 0 && (v46 & 0x7F800000) == 2139095040 )
          result = 0x7FFFLL;
      }
      else
      {
        if ( v47 < 0x38800000 )
          v48 = (v46 & 0x7FFFFF | 0x800000) >> (113 - (v47 >> 23));
        else
          v48 = v47 - 939524096;
        result = ((v48 + ((v48 >> 13) & 1) + 4095) >> 13) & 0x7FFF;
      }
      v14 += 2;
      *(_WORD *)(v23 + 30) = result | HIWORD(v46) & 0x8000;
    }
    while ( v14 < v15 );
  }
  return result;
}
