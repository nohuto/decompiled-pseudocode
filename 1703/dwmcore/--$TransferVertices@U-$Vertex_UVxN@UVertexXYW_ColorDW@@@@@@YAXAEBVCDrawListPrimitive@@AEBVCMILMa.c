/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180008780 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18001C9DC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18001CB1C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18001FA04 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180099A90 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BE170 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800BE48C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800BE48C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BBAD0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BC4D0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801BC4D0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BCEE0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BD498 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BD580 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BD65C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BDA28 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BDB44 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BDC54 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

// local variable allocation has failed, the output may be wrong!
CCounterManager *__fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __int64 *a5)
{
  __int64 v5; // rsi
  __m128 v6; // xmm10
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r10d
  __int64 v10; // r13
  char v11; // r14
  int v12; // r12d
  __int64 v13; // rbx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // r9
  int v18; // r10d
  char v19; // r11
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __m128 v22; // xmm3
  __m128 v23; // xmm6
  __m128 v24; // xmm11
  __m128 v25; // xmm12
  float v26; // xmm0_4
  float v27; // xmm1_4
  unsigned int v28; // r8d
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __m128 v31; // xmm6
  int v32; // r9d
  __int64 v33; // rsi
  int v34; // r11d
  int v35; // ebx
  __int64 v36; // rdi
  __m128 *v37; // rcx
  __m128 *v38; // rdx
  __m128 *v39; // r10
  __m128 *v40; // r9
  __m128 v41; // xmm2
  _OWORD *v42; // rax
  signed __int64 v43; // rdx
  __int64 v44; // r10
  __m128 v45; // xmm2
  _OWORD *v46; // rax
  __int64 v47; // rdx
  signed __int64 v48; // rcx
  CCounterManager *result; // rax
  unsigned int v50; // r8d
  __m128 v51; // xmm8
  __m128 v52; // xmm5
  __m128 v53; // xmm6
  __m128 v54; // xmm9
  int v55; // r11d
  __int64 v56; // r15
  int v57; // r14d
  __m128 *v58; // rdx
  __m128 *v59; // r9
  __m128 *v60; // rcx
  __m128 *v61; // r10
  __m128 v62; // xmm4
  __m128 v63; // xmm2
  __m128i v64; // xmm3
  __m128i v65; // xmm3
  __m128 v66; // xmm3
  _OWORD *m128_f32; // rax
  signed __int64 v68; // rdx
  __int64 v69; // r9
  __m128 v70; // xmm4
  __m128 v71; // xmm2
  __m128i v72; // xmm3
  __m128i v73; // xmm3
  __m128 v74; // xmm3
  _OWORD *v75; // rax
  __int64 v76; // rdx
  signed __int64 v77; // rcx
  float v78; // xmm1_4
  int v79; // [rsp+20h] [rbp-E0h]
  _QWORD v81[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v82; // [rsp+40h] [rbp-C0h]
  int v83; // [rsp+44h] [rbp-BCh]
  __int64 v84; // [rsp+48h] [rbp-B8h]
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  int v87; // [rsp+58h] [rbp-A8h]
  int v88; // [rsp+5Ch] [rbp-A4h]
  char v89; // [rsp+60h] [rbp-A0h]
  __int64 v90; // [rsp+68h] [rbp-98h]
  int v91; // [rsp+70h] [rbp-90h]
  int v92; // [rsp+74h] [rbp-8Ch]
  __int64 v93; // [rsp+80h] [rbp-80h]
  _DWORD v94[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v95; // [rsp+90h] [rbp-70h]
  __int32 v96; // [rsp+98h] [rbp-68h]
  __int32 v97; // [rsp+9Ch] [rbp-64h]
  __int128 v98; // [rsp+A0h] [rbp-60h]
  __int64 v99; // [rsp+B0h] [rbp-50h]
  __int32 v100; // [rsp+B8h] [rbp-48h]
  __int32 v101; // [rsp+BCh] [rbp-44h]
  int v102; // [rsp+C0h] [rbp-40h]
  __int64 v103; // [rsp+C4h] [rbp-3Ch]
  _DWORD v104[2]; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v105; // [rsp+D4h] [rbp-2Ch]
  __int32 v106; // [rsp+DCh] [rbp-24h]
  __int32 v107; // [rsp+E0h] [rbp-20h]
  __int128 v108; // [rsp+E4h] [rbp-1Ch]
  __int64 v109; // [rsp+F4h] [rbp-Ch]
  __int32 v110; // [rsp+FCh] [rbp-4h]
  __int32 v111; // [rsp+100h] [rbp+0h]
  int v112; // [rsp+104h] [rbp+4h]
  __int64 v113; // [rsp+108h] [rbp+8h]
  _DWORD v114[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v115; // [rsp+118h] [rbp+18h]
  __int32 v116; // [rsp+120h] [rbp+20h]
  __int32 v117; // [rsp+124h] [rbp+24h]
  __int128 v118; // [rsp+128h] [rbp+28h]
  __int64 v119; // [rsp+138h] [rbp+38h]
  __int32 v120; // [rsp+140h] [rbp+40h]
  __int32 v121; // [rsp+144h] [rbp+44h]
  int v122; // [rsp+148h] [rbp+48h]
  __int64 v123; // [rsp+14Ch] [rbp+4Ch]
  _DWORD v124[2]; // [rsp+154h] [rbp+54h] BYREF
  __int64 v125; // [rsp+15Ch] [rbp+5Ch]
  __int32 v126; // [rsp+164h] [rbp+64h]
  __int32 v127; // [rsp+168h] [rbp+68h]
  __int128 v128; // [rsp+16Ch] [rbp+6Ch]
  __int64 v129; // [rsp+17Ch] [rbp+7Ch]
  __int32 v130; // [rsp+184h] [rbp+84h]
  __int32 v131; // [rsp+188h] [rbp+88h]
  int v132; // [rsp+18Ch] [rbp+8Ch]
  __int64 v133; // [rsp+190h] [rbp+90h]
  _DWORD v134[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v135; // [rsp+1A0h] [rbp+A0h]
  __int32 v136; // [rsp+1A8h] [rbp+A8h]
  __int32 v137; // [rsp+1ACh] [rbp+ACh]
  __int128 v138; // [rsp+1B0h] [rbp+B0h]
  __int64 v139; // [rsp+1C0h] [rbp+C0h]
  __int32 v140; // [rsp+1C8h] [rbp+C8h]
  __int32 v141; // [rsp+1CCh] [rbp+CCh]
  int v142; // [rsp+1D0h] [rbp+D0h]
  __int64 v143; // [rsp+1D4h] [rbp+D4h]
  _DWORD v144[2]; // [rsp+1DCh] [rbp+DCh] BYREF
  __int64 v145; // [rsp+1E4h] [rbp+E4h]
  __int32 v146; // [rsp+1ECh] [rbp+ECh]
  __int32 v147; // [rsp+1F0h] [rbp+F0h]
  __int128 v148; // [rsp+1F4h] [rbp+F4h]
  __int64 v149; // [rsp+204h] [rbp+104h]
  __int32 v150; // [rsp+20Ch] [rbp+10Ch]
  __int32 v151; // [rsp+210h] [rbp+110h]
  int v152; // [rsp+214h] [rbp+114h]
  __int64 v153; // [rsp+218h] [rbp+118h]
  _DWORD v154[2]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v155; // [rsp+228h] [rbp+128h]
  __int32 v156; // [rsp+230h] [rbp+130h]
  __int32 v157; // [rsp+234h] [rbp+134h]
  __int128 v158; // [rsp+238h] [rbp+138h]
  __int64 v159; // [rsp+248h] [rbp+148h]
  __int32 v160; // [rsp+250h] [rbp+150h]
  __int32 v161; // [rsp+254h] [rbp+154h]
  int v162; // [rsp+258h] [rbp+158h]
  __int64 v163; // [rsp+25Ch] [rbp+15Ch]
  _DWORD v164[2]; // [rsp+264h] [rbp+164h] BYREF
  __int64 v165; // [rsp+26Ch] [rbp+16Ch]
  __int32 v166; // [rsp+274h] [rbp+174h]
  __int32 v167; // [rsp+278h] [rbp+178h]
  __int128 v168; // [rsp+27Ch] [rbp+17Ch]
  __int64 v169; // [rsp+28Ch] [rbp+18Ch]
  __int32 v170; // [rsp+294h] [rbp+194h]
  __int32 v171; // [rsp+298h] [rbp+198h]
  int v172; // [rsp+29Ch] [rbp+19Ch]
  __int64 v173; // [rsp+2A0h] [rbp+1A0h]
  _DWORD v174[2]; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v175; // [rsp+2B0h] [rbp+1B0h]
  __int32 v176; // [rsp+2B8h] [rbp+1B8h]
  __int32 v177; // [rsp+2BCh] [rbp+1BCh]
  __int128 v178; // [rsp+2C0h] [rbp+1C0h]
  __int64 v179; // [rsp+2D0h] [rbp+1D0h]
  __int32 v180; // [rsp+2D8h] [rbp+1D8h]
  __int32 v181; // [rsp+2DCh] [rbp+1DCh]
  int v182; // [rsp+2E0h] [rbp+1E0h]
  __int64 v183; // [rsp+2E4h] [rbp+1E4h]
  _DWORD v184[2]; // [rsp+2ECh] [rbp+1ECh] BYREF
  __int64 v185; // [rsp+2F4h] [rbp+1F4h]
  __int32 v186; // [rsp+2FCh] [rbp+1FCh]
  __int32 v187; // [rsp+300h] [rbp+200h]
  __int128 v188; // [rsp+304h] [rbp+204h]
  __int64 v189; // [rsp+314h] [rbp+214h]
  __int32 v190; // [rsp+31Ch] [rbp+21Ch]
  __int32 v191; // [rsp+320h] [rbp+220h]
  int v192; // [rsp+324h] [rbp+224h]
  __int64 v193; // [rsp+328h] [rbp+228h]
  _BYTE v194[80]; // [rsp+330h] [rbp+230h] BYREF

  v5 = a1;
  v6 = *(__m128 *)&a4;
  v7 = *(_QWORD *)(a1 + 32);
  v88 = LODWORD(a4);
  v8 = *(_DWORD *)(v5 + 12);
  v9 = *(_DWORD *)(v5 + 8);
  v10 = *(_QWORD *)(v5 + 24);
  v11 = *(_BYTE *)(v5 + 97);
  v12 = 8 * v8 + 16;
  v81[0] = *(_QWORD *)(v5 + 40);
  v81[1] = v10;
  v82 = v12;
  v83 = v9;
  v13 = *a5;
  v14 = *((_DWORD *)a5 + 2);
  v15 = *((_DWORD *)a5 + 3);
  v93 = v13;
  v90 = v13;
  v92 = v15;
  v84 = v7;
  v85 = v12;
  v86 = v9;
  v87 = v8;
  v89 = v11;
  v79 = v14;
  v91 = v14;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2) )
  {
    v22 = (__m128)LODWORD(FLOAT_1_0);
    v22.m128_f32[0] = 1.0 / *(float *)(v5 + 88);
    v21 = (__m128)LODWORD(FLOAT_1_0);
    v21.m128_f32[0] = 1.0 / *(float *)(v5 + 92);
    v20 = v22;
    v20.m128_f32[0] = v22.m128_f32[0] * *(float *)v17;
    v23 = v21;
    v21.m128_f32[0] = v21.m128_f32[0] * *(float *)(v17 + 20);
    v22.m128_f32[0] = v22.m128_f32[0] * *(float *)(v17 + 4);
    v23.m128_f32[0] = v23.m128_f32[0] * *(float *)(v17 + 16);
    v24 = (__m128)*(unsigned int *)(v17 + 48);
    v25 = (__m128)*(unsigned int *)(v17 + 52);
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20.m128_f32[0] - v21.m128_f32[0])) & _xmm);
    if ( v26 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22.m128_f32[0] - COERCE_FLOAT(v23.m128_i32[0] ^ _xmm))) & _xmm) > 0.0000011920929
      || (v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v23.m128_f32[0] * v23.m128_f32[0])
                                                                  + (float)(v20.m128_f32[0] * v20.m128_f32[0]))
                                                          - 1.0)) & _xmm),
          v27 >= 0.0000011920929) )
    {
      v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6.m128_f32[0] - 1.0)) & _xmm);
      if ( v78 < 0.0000011920929 )
      {
        if ( v19 )
        {
          v134[0] = v20.m128_i32[0];
          v134[1] = v22.m128_i32[0];
          v136 = v23.m128_i32[0];
          v137 = v21.m128_i32[0];
          v140 = v24.m128_i32[0];
          v141 = v25.m128_i32[0];
          v143 = 1065353216LL;
          v135 = 0LL;
          v138 = 0LL;
          v139 = 1065353216LL;
          v142 = 0;
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
            v81,
            v134);
          return (CCounterManager *)(unsigned int)_InterlockedExchangeAdd(
                                                    (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager
                                                  + 1,
                                                    *(_DWORD *)(v5 + 8));
        }
        v144[0] = v20.m128_i32[0];
        v144[1] = v22.m128_i32[0];
        v146 = v23.m128_i32[0];
        v147 = v21.m128_i32[0];
        v150 = v24.m128_i32[0];
        v151 = v25.m128_i32[0];
        v153 = 1065353216LL;
        v145 = 0LL;
        v148 = 0LL;
        v149 = 1065353216LL;
        v152 = 0;
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v81,
          v144);
      }
      else if ( v19 )
      {
        if ( v11 )
        {
          v154[0] = v20.m128_i32[0];
          v154[1] = v22.m128_i32[0];
          v156 = v23.m128_i32[0];
          v157 = v21.m128_i32[0];
          v160 = v24.m128_i32[0];
          v161 = v25.m128_i32[0];
          v163 = 1065353216LL;
          v155 = 0LL;
          v158 = 0LL;
          v159 = 1065353216LL;
          v162 = 0;
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v81,
            v154);
        }
        else
        {
          v164[0] = v20.m128_i32[0];
          v164[1] = v22.m128_i32[0];
          v166 = v23.m128_i32[0];
          v167 = v21.m128_i32[0];
          v170 = v24.m128_i32[0];
          v171 = v25.m128_i32[0];
          v173 = 1065353216LL;
          v165 = 0LL;
          v168 = 0LL;
          v169 = 1065353216LL;
          v172 = 0;
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v81,
            v164);
        }
      }
      else if ( v11 )
      {
        v174[0] = v20.m128_i32[0];
        v174[1] = v22.m128_i32[0];
        v176 = v23.m128_i32[0];
        v177 = v21.m128_i32[0];
        v180 = v24.m128_i32[0];
        v181 = v25.m128_i32[0];
        v183 = 1065353216LL;
        v175 = 0LL;
        v178 = 0LL;
        v179 = 1065353216LL;
        v182 = 0;
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v81,
          v174);
      }
      else
      {
        v184[0] = v20.m128_i32[0];
        v184[1] = v22.m128_i32[0];
        v186 = v23.m128_i32[0];
        v187 = v21.m128_i32[0];
        v190 = v24.m128_i32[0];
        v191 = v25.m128_i32[0];
        v193 = 1065353216LL;
        v185 = 0LL;
        v188 = 0LL;
        v189 = 1065353216LL;
        v192 = 0;
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v81,
          v184);
      }
      return (CCounterManager *)(unsigned int)_InterlockedExchangeAdd(
                                                (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager
                                              + 1,
                                                *(_DWORD *)(v5 + 8));
    }
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6.m128_f32[0] - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v19 )
      {
        if ( v11 )
        {
          v104[0] = v20.m128_i32[0];
          v104[1] = v22.m128_i32[0];
          v106 = v23.m128_i32[0];
          v107 = v21.m128_i32[0];
          v110 = v24.m128_i32[0];
          v111 = v25.m128_i32[0];
          v113 = 1065353216LL;
          v105 = 0LL;
          v108 = 0LL;
          v109 = 1065353216LL;
          v112 = 0;
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v81,
            v104);
        }
        else
        {
          v50 = v16 >> 1;
          v51 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
          v52 = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
          v53 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v25, (__m128)0LL));
          v54 = _mm_shuffle_ps(v6, v6, 0);
          if ( v18 )
          {
            v55 = 0;
            v56 = ((unsigned int)(v18 - 1) >> 1) + 1;
            v57 = 0;
            do
            {
              v58 = (__m128 *)(v10 + v57);
              v59 = (__m128 *)(v13 + v55);
              v60 = (__m128 *)(v10 + v12 + v57);
              v61 = (__m128 *)(v13 + v55 + v14);
              v62 = *v58;
              v63 = _mm_add_ps(
                      _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v58, *v58, 85), v52), v53),
                      _mm_mul_ps(_mm_shuffle_ps(v62, v62, 0), v51));
              v64 = _mm_cvttps_epi32(
                      _mm_mul_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_cvtepi32_ps(
                              _mm_xor_si128(
                                _mm_and_si128((__m128i)_mm_shuffle_ps(v62, v62, 255), g_MaskA8B8G8R8),
                                g_FlipA8R8G8B8)),
                            g_FixAA8R8G8B8),
                          g_NormalizeA8R8G8B8),
                        v54));
              v65 = _mm_packs_epi32(v64, v64);
              v66 = (__m128)_mm_packus_epi16(v65, v65);
              *v59 = _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(v63, v63, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(v66, v66, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
              if ( v50 )
              {
                m128_f32 = (_OWORD *)v59[1].m128_f32;
                v68 = (char *)v58 - (char *)v59;
                v69 = v50;
                do
                {
                  *m128_f32 = *(_OWORD *)((char *)m128_f32 + v68);
                  ++m128_f32;
                  --v69;
                }
                while ( v69 );
              }
              v70 = *v60;
              v71 = _mm_add_ps(
                      _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v60, *v60, 85), v52), v53),
                      _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0), v51));
              v72 = _mm_cvttps_epi32(
                      _mm_mul_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_cvtepi32_ps(
                              _mm_xor_si128(
                                _mm_and_si128((__m128i)_mm_shuffle_ps(v70, v70, 255), g_MaskA8B8G8R8),
                                g_FlipA8R8G8B8)),
                            g_FixAA8R8G8B8),
                          g_NormalizeA8R8G8B8),
                        v54));
              v73 = _mm_packs_epi32(v72, v72);
              v74 = (__m128)_mm_packus_epi16(v73, v73);
              *v61 = _mm_or_ps(
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         _mm_shuffle_ps(v71, v71, 228)),
                       _mm_and_ps(
                         _mm_shuffle_ps(v74, v74, 228),
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
              if ( v50 )
              {
                v75 = (_OWORD *)v61[1].m128_f32;
                v76 = v50;
                v77 = (char *)v60 - (char *)v61;
                do
                {
                  *v75 = *(_OWORD *)((char *)v75 + v77);
                  ++v75;
                  --v76;
                }
                while ( v76 );
              }
              v55 += 2 * v14;
              v57 += 2 * v12;
              --v56;
            }
            while ( v56 );
            v5 = a1;
          }
        }
      }
      else if ( v11 )
      {
        v114[0] = v20.m128_i32[0];
        v114[1] = v22.m128_i32[0];
        v116 = v23.m128_i32[0];
        v117 = v21.m128_i32[0];
        v120 = v24.m128_i32[0];
        v121 = v25.m128_i32[0];
        v123 = 1065353216LL;
        v115 = 0LL;
        v118 = 0LL;
        v119 = 1065353216LL;
        v122 = 0;
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v81,
          v114);
      }
      else
      {
        v124[0] = v20.m128_i32[0];
        v124[1] = v22.m128_i32[0];
        v126 = v23.m128_i32[0];
        v127 = v21.m128_i32[0];
        v130 = v24.m128_i32[0];
        v131 = v25.m128_i32[0];
        v133 = 1065353216LL;
        v125 = 0LL;
        v128 = 0LL;
        v129 = 1065353216LL;
        v132 = 0;
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v81,
          v124);
      }
    }
    else if ( v19 )
    {
      v28 = v16 >> 1;
      v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v20, (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
      v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v23, (__m128)0LL), _mm_unpacklo_ps(v21, (__m128)0LL));
      v31 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, (__m128)LODWORD(FLOAT_1_0)), _mm_unpacklo_ps(v25, (__m128)0LL));
      if ( v18 )
      {
        v32 = v14;
        v33 = v93;
        v34 = 0;
        v35 = 0;
        v36 = ((unsigned int)(v18 - 1) >> 1) + 1;
        do
        {
          v37 = (__m128 *)(v10 + v12 + v35);
          v38 = (__m128 *)(v10 + v35);
          v39 = (__m128 *)(v33 + v34);
          v40 = (__m128 *)(v33 + v34 + v32);
          v41 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v38, *v38, 85), v30), v31),
                  _mm_mul_ps(_mm_shuffle_ps(*v38, *v38, 0), v29));
          *v39 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_shuffle_ps(v41, v41, 228)),
                   _mm_and_ps(
                     _mm_shuffle_ps(*v38, *v38, 228),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v28 )
          {
            v42 = (_OWORD *)v39[1].m128_f32;
            v43 = (char *)v38 - (char *)v39;
            v44 = v28;
            do
            {
              *v42 = *(_OWORD *)((char *)v42 + v43);
              ++v42;
              --v44;
            }
            while ( v44 );
          }
          v45 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 85), v30), v31),
                  _mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 0), v29));
          *v40 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_shuffle_ps(v45, v45, 228)),
                   _mm_and_ps(
                     _mm_shuffle_ps(*v37, *v37, 228),
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v28 )
          {
            v46 = (_OWORD *)v40[1].m128_f32;
            v47 = v28;
            v48 = (char *)v37 - (char *)v40;
            do
            {
              *v46 = *(_OWORD *)((char *)v46 + v48);
              ++v46;
              --v47;
            }
            while ( v47 );
          }
          v32 = v79;
          v35 += 2 * v12;
          v34 += 2 * v79;
          --v36;
        }
        while ( v36 );
        v5 = a1;
      }
    }
    else
    {
      v94[0] = v20.m128_i32[0];
      v94[1] = v22.m128_i32[0];
      v96 = v23.m128_i32[0];
      v97 = v21.m128_i32[0];
      v100 = v24.m128_i32[0];
      v101 = v25.m128_i32[0];
      v103 = 1065353216LL;
      v95 = 0LL;
      v98 = 0LL;
      v99 = 1065353216LL;
      v102 = 0;
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v81,
        v94);
    }
    result = CCounterManager::s_pGlobalPerFrameCounterManager;
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager,
      *(_DWORD *)(v5 + 8));
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(v5, (__int64)v194, v17);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&a4 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      if ( v11 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v81,
          v194);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          (__int64)v81,
          (__int64)v194);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v81,
        (__int64)v194);
    }
    return (CCounterManager *)(unsigned int)_InterlockedExchangeAdd(
                                              (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager
                                            + 2,
                                              *(_DWORD *)(v5 + 8));
  }
  return result;
}
