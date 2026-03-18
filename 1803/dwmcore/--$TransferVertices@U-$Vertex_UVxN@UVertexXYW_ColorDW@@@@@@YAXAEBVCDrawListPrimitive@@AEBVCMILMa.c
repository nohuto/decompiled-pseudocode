/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800ACDB0
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18000FF4C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180015B64 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180015B64.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180016650 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180016A8C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x180017C60 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800A56A0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BD920 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BD920.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802196A4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1802196A4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180219BB0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021A10C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021A188 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021A264 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021A5E0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021A694 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021A7A4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        float *a2,
        __int64 a3,
        double a4,
        __int64 *a5)
{
  int v5; // r9d
  __int64 v6; // rsi
  int v7; // r10d
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // edi
  char v11; // r12
  __m128 v12; // xmm10
  int v13; // ebx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // r9d
  int v18; // r10d
  char v19; // r11
  __m128 v20; // xmm11
  __m128 v21; // xmm6
  __m128 v22; // xmm4
  __m128 v23; // xmm3
  __m128 v24; // xmm5
  __m128 v25; // xmm12
  float v26; // xmm0_4
  float v27; // xmm1_4
  unsigned int v28; // r9d
  __m128 v29; // xmm6
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  int v32; // r8d
  int v33; // r13d
  int v34; // esi
  int v35; // r11d
  __int64 v36; // rdi
  int v37; // ebx
  int v38; // r12d
  __m128 *v39; // rdx
  __m128 *v40; // r10
  __m128 *v41; // rcx
  __m128 *v42; // r8
  __m128 v43; // xmm2
  _OWORD *v44; // rax
  signed __int64 v45; // rdx
  __int64 v46; // r10
  __m128 v47; // xmm2
  _OWORD *v48; // rax
  __int64 v49; // rdx
  signed __int64 v50; // rcx
  __int64 result; // rax
  float v52; // xmm1_4
  unsigned int v53; // r9d
  __m128 v54; // xmm8
  __m128 v55; // xmm9
  __m128 v56; // xmm10
  int v57; // r11d
  int v58; // edx
  int v59; // esi
  __m128 *v60; // r8
  __m128 *v61; // rcx
  __m128 *v62; // r10
  __m128 *v63; // r12
  __m128 *v64; // rdx
  __m128 v65; // xmm4
  __m128 v66; // xmm0
  __m128 v67; // xmm3
  __m128 v68; // xmm1
  __m128 v69; // xmm0
  __m128 v70; // xmm7
  signed __int64 v71; // r10
  __m128 *v72; // rax
  signed __int64 v73; // rdx
  __int64 v74; // rcx
  __m128 v75; // xmm2
  __m128 v76; // xmm7
  __m128 v77; // xmm4
  __m128 v78; // xmm0
  __m128 v79; // xmm3
  __m128 v80; // xmm1
  __m128 *v81; // rcx
  __int64 v82; // rdx
  signed __int64 v83; // r12
  __m128 v84; // xmm2
  signed __int64 v85; // rcx
  __m128 *v86; // rax
  bool v87; // zf
  __m128 v88; // xmm6
  unsigned int v89; // r9d
  __m128 v90; // xmm5
  __m128 v91; // xmm7
  __m128 v92; // xmm8
  int v93; // r11d
  __int64 v94; // r13
  int v95; // r12d
  __m128 *v96; // rdx
  __m128 *v97; // r8
  __m128 *v98; // rcx
  __m128 *v99; // r10
  __m128 v100; // xmm4
  __m128 v101; // xmm2
  __m128i v102; // xmm3
  __m128i v103; // xmm3
  __m128 v104; // xmm3
  _OWORD *m128_f32; // rax
  signed __int64 v106; // rdx
  __int64 v107; // r8
  __m128 v108; // xmm4
  __m128 v109; // xmm2
  __m128i v110; // xmm3
  __m128i v111; // xmm3
  __m128 v112; // xmm3
  _OWORD *v113; // rax
  __int64 v114; // rdx
  signed __int64 v115; // rcx
  __int32 v116; // [rsp+20h] [rbp-E0h] BYREF
  __int32 v117; // [rsp+24h] [rbp-DCh]
  __int64 v118; // [rsp+28h] [rbp-D8h]
  __int32 v119; // [rsp+30h] [rbp-D0h]
  __int32 v120; // [rsp+34h] [rbp-CCh]
  __int128 v121; // [rsp+38h] [rbp-C8h]
  __int64 v122; // [rsp+48h] [rbp-B8h]
  __int32 v123; // [rsp+50h] [rbp-B0h]
  __int32 v124; // [rsp+54h] [rbp-ACh]
  int v125; // [rsp+58h] [rbp-A8h]
  __int64 v126; // [rsp+5Ch] [rbp-A4h]
  int v127; // [rsp+70h] [rbp-90h]
  __int64 v128; // [rsp+78h] [rbp-88h]
  __int64 v129; // [rsp+80h] [rbp-80h]
  _QWORD v130[2]; // [rsp+90h] [rbp-70h] BYREF
  int v131; // [rsp+A0h] [rbp-60h]
  int v132; // [rsp+A4h] [rbp-5Ch]
  __int64 v133; // [rsp+A8h] [rbp-58h]
  int v134; // [rsp+B0h] [rbp-50h]
  int v135; // [rsp+B4h] [rbp-4Ch]
  int v136; // [rsp+B8h] [rbp-48h]
  int v137; // [rsp+BCh] [rbp-44h]
  char v138; // [rsp+C0h] [rbp-40h]
  __int64 v139; // [rsp+C8h] [rbp-38h]
  int v140; // [rsp+D0h] [rbp-30h]
  int v141; // [rsp+D4h] [rbp-2Ch]
  __m128 *v142; // [rsp+E0h] [rbp-20h]

  v5 = *(_DWORD *)(a1 + 12);
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 8 * v5 + 16;
  v11 = *(_BYTE *)(a1 + 97);
  v130[0] = *(_QWORD *)(a1 + 40);
  v12 = *(__m128 *)&a4;
  v137 = LODWORD(a4);
  v129 = a1;
  v13 = *((_DWORD *)a5 + 2);
  v14 = *a5;
  v15 = *((_DWORD *)a5 + 3);
  v139 = *a5;
  v141 = v15;
  LODWORD(v128) = v10;
  v130[1] = v8;
  v131 = v10;
  v132 = v7;
  v133 = v9;
  v134 = v10;
  v135 = v7;
  v136 = v5;
  v138 = v11;
  v127 = v13;
  v140 = v13;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2) )
  {
    v23 = (__m128)LODWORD(FLOAT_1_0);
    v23.m128_f32[0] = 1.0 / *(float *)(v6 + 88);
    v20 = (__m128)*(unsigned int *)(v16 + 48);
    v22 = (__m128)LODWORD(FLOAT_1_0);
    v22.m128_f32[0] = 1.0 / *(float *)(v6 + 92);
    v21 = v23;
    v21.m128_f32[0] = v23.m128_f32[0] * *(float *)v16;
    v24 = v22;
    v22.m128_f32[0] = v22.m128_f32[0] * *(float *)(v16 + 20);
    v23.m128_f32[0] = v23.m128_f32[0] * *(float *)(v16 + 4);
    v24.m128_f32[0] = v24.m128_f32[0] * *(float *)(v16 + 16);
    v25 = (__m128)*(unsigned int *)(v16 + 52);
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21.m128_f32[0] - v22.m128_f32[0])) & _xmm);
    if ( v26 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23.m128_f32[0] - COERCE_FLOAT(v24.m128_i32[0] ^ _xmm))) & _xmm) > 0.0000011920929
      || (v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v21.m128_f32[0] * v21.m128_f32[0])
                                                                  + (float)(v24.m128_f32[0] * v24.m128_f32[0]))
                                                          - 1.0)) & _xmm),
          v27 >= 0.0000011920929) )
    {
      v52 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12.m128_f32[0] - 1.0)) & _xmm);
      if ( v52 >= 0.0000011920929 )
      {
        v116 = v21.m128_i32[0];
        v117 = v23.m128_i32[0];
        v119 = v24.m128_i32[0];
        v120 = v22.m128_i32[0];
        v123 = v20.m128_i32[0];
        v124 = v25.m128_i32[0];
        v126 = 1065353216LL;
        v118 = 0LL;
        v122 = 1065353216LL;
        v125 = 0;
        v121 = 0LL;
        if ( v19 )
        {
          if ( !v11 )
          {
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              v130,
              &v116);
            result = *(unsigned int *)(v6 + 8);
            dword_1802D6368 += result;
            return result;
          }
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v130,
            &v116);
        }
        else if ( v11 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v130,
            &v116);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v130,
            &v116);
        }
      }
      else if ( v19 )
      {
        v53 = v17 >> 1;
        v54 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, v21), _mm_unpacklo_ps(v23, v23));
        v55 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, v24), _mm_unpacklo_ps(v22, v22));
        v56 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0LL), _mm_unpacklo_ps(v25, (__m128)0LL));
        if ( v18 )
        {
          v57 = 0;
          v58 = 0;
          v127 = 0;
          v128 = ((unsigned int)(v18 - 1) >> 1) + 1;
          v59 = 0;
          do
          {
            v60 = (__m128 *)(v8 + v10 + v58);
            v61 = (__m128 *)(v8 + v58);
            v62 = (__m128 *)(v9 + v59);
            v142 = (__m128 *)(v14 + v13 + v57);
            v63 = (__m128 *)(v9 + v10 + v59);
            v64 = (__m128 *)(v14 + v57);
            v65 = *v62;
            v66 = _mm_sub_ps(_mm_shuffle_ps(*v61, DirectX::g_XMOne, 228), *v62);
            v67 = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v66, v66, 85), v55),
                    _mm_mul_ps(_mm_shuffle_ps(v66, v66, 0), v54));
            if ( (_mm_movemask_ps(_mm_cmpeq_ps(v67, *(__m128 *)&DirectX::g_XMZero)) & 3) == 3 )
            {
              v70 = (__m128)DirectX::g_XMOne;
            }
            else
            {
              v68 = _mm_mul_ps(v67, v67);
              v69 = (__m128)DirectX::g_XMOne;
              v69.m128_f32[0] = 1.0 / fsqrt(v68.m128_f32[0] + _mm_shuffle_ps(v68, v68, 85).m128_f32[0]);
              v70 = _mm_mul_ps(_mm_shuffle_ps(v65, v65, 170), _mm_shuffle_ps(v69, v69, 0));
            }
            *v64 = _mm_shuffle_ps(
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v65, v65, 85), v55), v56),
                         _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v54)),
                       _mm_mul_ps(v70, v67)),
                     _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(*v61, *v61, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
                     228);
            if ( v53 )
            {
              v71 = (char *)v62 - (char *)v61;
              v72 = v61 + 1;
              v73 = (char *)v64 - (char *)v61;
              v74 = v53;
              v75 = _mm_shuffle_ps(v70, v70, 0);
              do
              {
                *(__m128 *)((char *)v72 + v73) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v72, *(__m128 *)((char *)v72 + v71)), v75),
                                                   *(__m128 *)((char *)v72 + v71));
                ++v72;
                --v74;
              }
              while ( v74 );
            }
            v76 = (__m128)DirectX::g_XMOne;
            v77 = *v63;
            v78 = _mm_sub_ps(_mm_shuffle_ps(*v60, DirectX::g_XMOne, 228), *v63);
            v79 = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v78, v78, 85), v55),
                    _mm_mul_ps(_mm_shuffle_ps(v78, v78, 0), v54));
            if ( (_mm_movemask_ps(_mm_cmpeq_ps(v79, *(__m128 *)&DirectX::g_XMZero)) & 3) != 3 )
            {
              v80 = _mm_mul_ps(v79, v79);
              v76.m128_f32[0] = 1.0 / fsqrt(v80.m128_f32[0] + _mm_shuffle_ps(v80, v80, 85).m128_f32[0]);
              v76 = _mm_mul_ps(_mm_shuffle_ps(v76, v76, 0), _mm_shuffle_ps(v77, v77, 170));
            }
            v81 = v142;
            *v142 = _mm_shuffle_ps(
                      _mm_add_ps(
                        _mm_add_ps(
                          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v77, v77, 85), v55), v56),
                          _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v54)),
                        _mm_mul_ps(v76, v79)),
                      _mm_or_ps(
                        _mm_andnot_ps(
                          (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                          _mm_shuffle_ps(DirectX::g_XMOne, DirectX::g_XMOne, 228)),
                        _mm_and_ps(
                          _mm_shuffle_ps(*v60, *v60, 228),
                          (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
                      228);
            if ( v53 )
            {
              v82 = v53;
              v83 = (char *)v63 - (char *)v60;
              v84 = _mm_shuffle_ps(v76, v76, 0);
              v85 = (char *)v81 - (char *)v60;
              v86 = v60 + 1;
              do
              {
                *(__m128 *)((char *)v86 + v85) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v86, *(__m128 *)((char *)v86 + v83)), v84),
                                                   *(__m128 *)((char *)v86 + v83));
                ++v86;
                --v82;
              }
              while ( v82 );
            }
            v87 = v128-- == 1;
            v59 += 2 * v10;
            v57 += 2 * v13;
            v58 = v127 + 2 * v10;
            v127 = v58;
          }
          while ( !v87 );
          v6 = v129;
        }
      }
      else
      {
        v116 = v21.m128_i32[0];
        v117 = v23.m128_i32[0];
        v119 = v24.m128_i32[0];
        v120 = v22.m128_i32[0];
        v123 = v20.m128_i32[0];
        v124 = v25.m128_i32[0];
        v126 = 1065353216LL;
        v118 = 0LL;
        v121 = 0LL;
        v122 = 1065353216LL;
        v125 = 0;
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v130,
          &v116);
      }
      result = *(unsigned int *)(v6 + 8);
      dword_1802D6368 += result;
      return result;
    }
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12.m128_f32[0] - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v19 )
      {
        if ( v11 )
        {
          v116 = v21.m128_i32[0];
          v117 = v23.m128_i32[0];
          v119 = v24.m128_i32[0];
          v120 = v22.m128_i32[0];
          v123 = v20.m128_i32[0];
          v124 = v25.m128_i32[0];
          v126 = 1065353216LL;
          v118 = 0LL;
          v121 = 0LL;
          v122 = 1065353216LL;
          v125 = 0;
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            (__int64)v130,
            (unsigned int *)&v116);
        }
        else
        {
          v88 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, (__m128)0LL), _mm_unpacklo_ps(v23, (__m128)0LL));
          v89 = v17 >> 1;
          v90 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
          v91 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v25, (__m128)0LL));
          v92 = _mm_shuffle_ps(v12, v12, 0);
          if ( v18 )
          {
            v93 = 0;
            v94 = ((unsigned int)(v18 - 1) >> 1) + 1;
            v95 = 0;
            do
            {
              v96 = (__m128 *)(v8 + v95);
              v97 = (__m128 *)(v14 + v93);
              v98 = (__m128 *)(v8 + v95 + v10);
              v99 = (__m128 *)(v14 + v93 + v13);
              v100 = *v96;
              v101 = _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v96, *v96, 85), v90), v91),
                       _mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v88));
              v102 = _mm_cvttps_epi32(
                       _mm_mul_ps(
                         _mm_mul_ps(
                           _mm_add_ps(
                             _mm_cvtepi32_ps(
                               _mm_xor_si128(
                                 _mm_and_si128((__m128i)_mm_shuffle_ps(v100, v100, 255), g_MaskA8B8G8R8),
                                 g_FlipA8R8G8B8)),
                             g_FixAA8R8G8B8),
                           g_NormalizeA8R8G8B8),
                         v92));
              v103 = _mm_packs_epi32(v102, v102);
              v104 = (__m128)_mm_packus_epi16(v103, v103);
              *v97 = _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(v101, v101, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(v104, v104, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
              if ( v89 )
              {
                m128_f32 = (_OWORD *)v97[1].m128_f32;
                v106 = (char *)v96 - (char *)v97;
                v107 = v89;
                do
                {
                  *m128_f32 = *(_OWORD *)((char *)m128_f32 + v106);
                  ++m128_f32;
                  --v107;
                }
                while ( v107 );
              }
              v108 = *v98;
              v109 = _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v98, *v98, 85), v90), v91),
                       _mm_mul_ps(_mm_shuffle_ps(v108, v108, 0), v88));
              v110 = _mm_cvttps_epi32(
                       _mm_mul_ps(
                         _mm_mul_ps(
                           _mm_add_ps(
                             _mm_cvtepi32_ps(
                               _mm_xor_si128(
                                 _mm_and_si128((__m128i)_mm_shuffle_ps(v108, v108, 255), g_MaskA8B8G8R8),
                                 g_FlipA8R8G8B8)),
                             g_FixAA8R8G8B8),
                           g_NormalizeA8R8G8B8),
                         v92));
              v111 = _mm_packs_epi32(v110, v110);
              v112 = (__m128)_mm_packus_epi16(v111, v111);
              *v99 = _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(v109, v109, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(v112, v112, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
              if ( v89 )
              {
                v113 = (_OWORD *)v99[1].m128_f32;
                v114 = v89;
                v115 = (char *)v98 - (char *)v99;
                do
                {
                  *v113 = *(_OWORD *)((char *)v113 + v115);
                  ++v113;
                  --v114;
                }
                while ( v114 );
              }
              v93 += 2 * v13;
              v95 += 2 * v10;
              --v94;
            }
            while ( v94 );
            v6 = v129;
          }
        }
      }
      else
      {
        v116 = v21.m128_i32[0];
        v117 = v23.m128_i32[0];
        v119 = v24.m128_i32[0];
        v120 = v22.m128_i32[0];
        v123 = v20.m128_i32[0];
        v124 = v25.m128_i32[0];
        v126 = 1065353216LL;
        v118 = 0LL;
        v122 = 1065353216LL;
        v125 = 0;
        v121 = 0LL;
        if ( v11 )
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v130,
            &v116);
        else
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v130,
            &v116);
      }
    }
    else if ( v19 )
    {
      v28 = v17 >> 1;
      v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, (__m128)0LL), _mm_unpacklo_ps(v23, (__m128)0LL));
      v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
      v31 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v25, (__m128)0LL));
      if ( v18 )
      {
        v32 = v127;
        v33 = 2 * v10;
        v34 = v128;
        v35 = 0;
        v36 = ((unsigned int)(v18 - 1) >> 1) + 1;
        v37 = 0;
        v38 = 2 * v127;
        do
        {
          v39 = (__m128 *)(v8 + v37);
          v40 = (__m128 *)(v14 + v35);
          v41 = (__m128 *)(v8 + v37 + v34);
          v42 = (__m128 *)(v14 + v35 + v32);
          v43 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v39, *v39, 85), v30), v31),
                  _mm_mul_ps(_mm_shuffle_ps(*v39, *v39, 0), v29));
          *v40 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_shuffle_ps(v43, v43, 228)),
                   _mm_and_ps(
                     _mm_shuffle_ps(*v39, *v39, 228),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v28 )
          {
            v44 = (_OWORD *)v40[1].m128_f32;
            v45 = (char *)v39 - (char *)v40;
            v46 = v28;
            do
            {
              *v44 = *(_OWORD *)((char *)v44 + v45);
              ++v44;
              --v46;
            }
            while ( v46 );
          }
          v47 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v41, *v41, 85), v30), v31),
                  _mm_mul_ps(_mm_shuffle_ps(*v41, *v41, 0), v29));
          *v42 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_shuffle_ps(v47, v47, 228)),
                   _mm_and_ps(
                     _mm_shuffle_ps(*v41, *v41, 228),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v28 )
          {
            v48 = (_OWORD *)v42[1].m128_f32;
            v49 = v28;
            v50 = (char *)v41 - (char *)v42;
            do
            {
              *v48 = *(_OWORD *)((char *)v48 + v50);
              ++v48;
              --v49;
            }
            while ( v49 );
          }
          v32 = v127;
          v37 += v33;
          v35 += v38;
          --v36;
        }
        while ( v36 );
        v6 = v129;
      }
    }
    else
    {
      v116 = v21.m128_i32[0];
      v117 = v23.m128_i32[0];
      v119 = v24.m128_i32[0];
      v120 = v22.m128_i32[0];
      v123 = v20.m128_i32[0];
      v124 = v25.m128_i32[0];
      v126 = 1065353216LL;
      v118 = 0LL;
      v121 = 0LL;
      v122 = 1065353216LL;
      v125 = 0;
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v130,
        &v116);
    }
    result = *(unsigned int *)(v6 + 8);
    dword_1802D6364 += result;
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v6, (__int64)&v116, v16);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&a4 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v11 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v130,
          &v116);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v130,
          (CMILMatrix *)&v116);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___((__int64)v130);
    }
    result = *(unsigned int *)(v6 + 8);
    dword_1802D636C += result;
  }
  return result;
}
