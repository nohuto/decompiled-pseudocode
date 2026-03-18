/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180034960 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180072C64 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180072C64.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180072E30 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180072E30.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800B3A24 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800B3A24.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x1801553D8 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D58B4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801D58B4.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D5D48 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801D5D48.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D64D4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D65B8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D66EC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D6BE0 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D6C5C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D6D38 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D70B4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D7168 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D7278 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        float *a2,
        __int64 a3,
        float a4,
        __int64 *a5)
{
  __int64 v5; // r15
  int v7; // r10d
  int v8; // r9d
  __int64 v9; // r13
  char v10; // bl
  int v11; // r12d
  int v12; // edi
  int v13; // eax
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // r10d
  char v17; // r11
  __m128 v18; // xmm7
  __m128 v19; // xmm5
  __m128 v20; // xmm3
  __m128 v21; // xmm4
  __m128 v22; // xmm11
  __m128 v23; // xmm12
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  unsigned int v27; // r10d
  __m128 v28; // xmm6
  __m128 v29; // xmm5
  __m128 v30; // xmm4
  __int64 v31; // r15
  int v32; // r11d
  int v33; // ebx
  int v34; // esi
  __int64 v35; // rdi
  __m128 *v36; // rcx
  __m128 *v37; // rdx
  __m128 *v38; // r8
  __m128 *v39; // r9
  __m128 v40; // xmm2
  _OWORD *m128_f32; // rax
  signed __int64 v42; // rdx
  __int64 v43; // r8
  __m128 v44; // xmm2
  _OWORD *v45; // rax
  __int64 v46; // rdx
  signed __int64 v47; // rcx
  __int64 result; // rax
  float v49; // xmm1_4
  __int32 v50; // [rsp+20h] [rbp-E0h] BYREF
  __int32 v51; // [rsp+24h] [rbp-DCh]
  __int64 v52; // [rsp+28h] [rbp-D8h]
  __int32 v53; // [rsp+30h] [rbp-D0h]
  __int32 v54; // [rsp+34h] [rbp-CCh]
  __int128 v55; // [rsp+38h] [rbp-C8h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  __int32 v57; // [rsp+50h] [rbp-B0h]
  __int32 v58; // [rsp+54h] [rbp-ACh]
  int v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+5Ch] [rbp-A4h]
  int v61; // [rsp+70h] [rbp-90h]
  _QWORD v62[2]; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+90h] [rbp-70h]
  int v64; // [rsp+94h] [rbp-6Ch]
  __int64 v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+A0h] [rbp-60h]
  int v67; // [rsp+A4h] [rbp-5Ch]
  int v68; // [rsp+A8h] [rbp-58h]
  float v69; // [rsp+ACh] [rbp-54h]
  char v70; // [rsp+B0h] [rbp-50h]
  __int64 v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+C0h] [rbp-40h]
  int v73; // [rsp+C4h] [rbp-3Ch]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]

  v5 = a1;
  v75 = a1;
  v65 = *(_QWORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_BYTE *)(a1 + 97);
  v11 = 8 * v7 + 16;
  v62[0] = *(_QWORD *)(a1 + 40);
  v69 = a4;
  v62[1] = v9;
  v63 = v11;
  v12 = *((_DWORD *)a5 + 2);
  v13 = *((_DWORD *)a5 + 3);
  v74 = *a5;
  v71 = v74;
  v73 = v13;
  v64 = v8;
  v66 = v11;
  v67 = v8;
  v68 = v7;
  v70 = v10;
  v61 = v12;
  v72 = v12;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2, (__int64)a2) )
  {
    v20 = (__m128)LODWORD(FLOAT_1_0);
    v20.m128_f32[0] = 1.0 / *(float *)(v5 + 88);
    v19 = (__m128)LODWORD(FLOAT_1_0);
    v19.m128_f32[0] = 1.0 / *(float *)(v5 + 92);
    v18 = v20;
    v18.m128_f32[0] = v20.m128_f32[0] * *(float *)v14;
    v21 = v19;
    v19.m128_f32[0] = v19.m128_f32[0] * *(float *)(v14 + 20);
    v20.m128_f32[0] = v20.m128_f32[0] * *(float *)(v14 + 4);
    v21.m128_f32[0] = v21.m128_f32[0] * *(float *)(v14 + 16);
    v22 = (__m128)*(unsigned int *)(v14 + 48);
    v23 = (__m128)*(unsigned int *)(v14 + 52);
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18.m128_f32[0] - v19.m128_f32[0])) & _xmm);
    if ( v24 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20.m128_f32[0] - COERCE_FLOAT(v21.m128_i32[0] ^ _xmm))) & _xmm) > 0.0000011920929
      || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v18.m128_f32[0] * v18.m128_f32[0])
                                                                  + (float)(v21.m128_f32[0] * v21.m128_f32[0]))
                                                          - 1.0)) & _xmm),
          v25 >= 0.0000011920929) )
    {
      v50 = v18.m128_i32[0];
      v51 = v20.m128_i32[0];
      v53 = v21.m128_i32[0];
      v54 = v19.m128_i32[0];
      v57 = v22.m128_i32[0];
      v58 = v23.m128_i32[0];
      v60 = 1065353216LL;
      v52 = 0LL;
      v56 = 1065353216LL;
      v59 = 0;
      v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v55 = 0LL;
      if ( v49 >= 0.0000011920929 )
      {
        if ( v17 )
        {
          if ( !v10 )
          {
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v62,
              &v50);
            result = *(unsigned int *)(v5 + 8);
            dword_18026EE28 += result;
            return result;
          }
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        }
        else if ( v10 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        }
      }
      else if ( v17 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      }
      result = *(unsigned int *)(v5 + 8);
      dword_18026EE28 += result;
      return result;
    }
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
    if ( v26 >= 0.0000011920929 )
    {
      v50 = v18.m128_i32[0];
      v51 = v20.m128_i32[0];
      v53 = v21.m128_i32[0];
      v54 = v19.m128_i32[0];
      v57 = v22.m128_i32[0];
      v58 = v23.m128_i32[0];
      v60 = 1065353216LL;
      v52 = 0LL;
      v56 = 1065353216LL;
      v59 = 0;
      v55 = 0LL;
      if ( v17 )
      {
        if ( v10 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v62,
            &v50);
      }
      else if ( v10 )
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      }
    }
    else if ( v17 )
    {
      v27 = v16 >> 1;
      v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, (__m128)0LL), _mm_unpacklo_ps(v20, (__m128)0LL));
      v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, (__m128)0LL), _mm_unpacklo_ps(v19, (__m128)0LL));
      v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v22, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v23, (__m128)0LL));
      if ( v15 )
      {
        v31 = v74;
        v32 = 0;
        v33 = 0;
        v34 = 2 * v12;
        v35 = ((unsigned int)(v15 - 1) >> 1) + 1;
        do
        {
          v36 = (__m128 *)(v9 + v33 + v11);
          v37 = (__m128 *)(v9 + v33);
          v38 = (__m128 *)(v31 + v32);
          v39 = (__m128 *)(v31 + v32 + v61);
          v40 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 85), v29), v30),
                  _mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 0), v28));
          *v38 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_shuffle_ps(v40, v40, 228)),
                   _mm_and_ps(
                     _mm_shuffle_ps(*v37, *v37, 228),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v27 )
          {
            m128_f32 = (_OWORD *)v38[1].m128_f32;
            v42 = (char *)v37 - (char *)v38;
            v43 = v27;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v42);
              ++m128_f32;
              --v43;
            }
            while ( v43 );
          }
          v44 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v36, *v36, 85), v29), v30),
                  _mm_mul_ps(_mm_shuffle_ps(*v36, *v36, 0), v28));
          *v39 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_shuffle_ps(v44, v44, 228)),
                   _mm_and_ps(
                     _mm_shuffle_ps(*v36, *v36, 228),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v27 )
          {
            v45 = (_OWORD *)v39[1].m128_f32;
            v46 = v27;
            v47 = (char *)v36 - (char *)v39;
            do
            {
              *v45 = *(_OWORD *)((char *)v45 + v47);
              ++v45;
              --v46;
            }
            while ( v46 );
          }
          v33 += 2 * v11;
          v32 += v34;
          --v35;
        }
        while ( v35 );
        v5 = v75;
      }
    }
    else
    {
      v50 = v18.m128_i32[0];
      v51 = v20.m128_i32[0];
      v53 = v21.m128_i32[0];
      v54 = v19.m128_i32[0];
      v57 = v22.m128_i32[0];
      v58 = v23.m128_i32[0];
      v60 = 1065353216LL;
      v52 = 0LL;
      v55 = 0LL;
      v56 = 1065353216LL;
      v59 = 0;
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v62,
        &v50);
    }
    result = *(unsigned int *)(v5 + 8);
    dword_18026EE24 += result;
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v5, &v50);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v10 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v62,
          &v50);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v62,
        &v50);
    }
    result = *(unsigned int *)(v5 + 8);
    dword_18026EE2C += result;
  }
  return result;
}
