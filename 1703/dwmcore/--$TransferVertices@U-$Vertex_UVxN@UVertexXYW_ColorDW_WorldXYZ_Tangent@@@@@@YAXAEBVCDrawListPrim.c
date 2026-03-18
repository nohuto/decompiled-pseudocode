/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801BE0D8
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18001FA04 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180099A90 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA?AUD2D_MATRIX_3X2_F@@AEBVCMILMatrix@@@Z @ 0x180133654 (-GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA-AUD2D_MATRIX_3X2_F@@AEBVCMILMa.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180186894 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BBC40 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801BBC40.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BBF5C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801BBF5C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC238 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801BC238.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC644 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801BC644.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BC964 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801BC964.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BCC44 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801BCC44.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD014 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD1C0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801BD1C0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD360 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801BD360.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD6CC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD810 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801BD810.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD948 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801BD948.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDCF0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDE68 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801BDE68.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDFD4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801BDFD4.c)
 */

CCounterManager *__fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        CDrawListPrimitive *this,
        struct CMILMatrix *a2,
        char a3,
        float a4,
        __int64 *a5)
{
  int v6; // r14d
  int v8; // edx
  __int64 v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  CMILMatrix *v13; // r9
  unsigned int *v14; // r10
  char v15; // r11
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  CCounterManager *result; // rax
  float v21; // xmm1_4
  CMILMatrix *v22; // r10
  float v23; // xmm1_4
  _QWORD v24[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v25; // [rsp+38h] [rbp-D0h]
  int v26; // [rsp+3Ch] [rbp-CCh]
  __int64 v27; // [rsp+40h] [rbp-C8h]
  int v28; // [rsp+48h] [rbp-C0h]
  int v29; // [rsp+4Ch] [rbp-BCh]
  int v30; // [rsp+50h] [rbp-B8h]
  float v31; // [rsp+54h] [rbp-B4h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  int v34; // [rsp+68h] [rbp-A0h]
  int v35; // [rsp+6Ch] [rbp-9Ch]
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int128 v40; // [rsp+90h] [rbp-78h]
  int v41; // [rsp+A0h] [rbp-68h]
  int v42; // [rsp+A4h] [rbp-64h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  __int64 v45; // [rsp+B4h] [rbp-54h]
  __int64 v46; // [rsp+BCh] [rbp-4Ch] BYREF
  int v47; // [rsp+C4h] [rbp-44h]
  int v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+CCh] [rbp-3Ch]
  __int128 v50; // [rsp+D4h] [rbp-34h]
  int v51; // [rsp+E4h] [rbp-24h]
  int v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+ECh] [rbp-1Ch]
  int v54; // [rsp+F4h] [rbp-14h]
  __int64 v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h] BYREF
  int v57; // [rsp+108h] [rbp+0h]
  int v58; // [rsp+10Ch] [rbp+4h]
  __int64 v59; // [rsp+110h] [rbp+8h]
  __int128 v60; // [rsp+118h] [rbp+10h]
  int v61; // [rsp+128h] [rbp+20h]
  int v62; // [rsp+12Ch] [rbp+24h]
  __int64 v63; // [rsp+130h] [rbp+28h]
  int v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+13Ch] [rbp+34h]
  __int64 v66; // [rsp+144h] [rbp+3Ch] BYREF
  int v67; // [rsp+14Ch] [rbp+44h]
  int v68; // [rsp+150h] [rbp+48h]
  __int64 v69; // [rsp+154h] [rbp+4Ch]
  __int128 v70; // [rsp+15Ch] [rbp+54h]
  int v71; // [rsp+16Ch] [rbp+64h]
  int v72; // [rsp+170h] [rbp+68h]
  __int64 v73; // [rsp+174h] [rbp+6Ch]
  int v74; // [rsp+17Ch] [rbp+74h]
  __int64 v75; // [rsp+180h] [rbp+78h]
  __int64 v76; // [rsp+188h] [rbp+80h] BYREF
  int v77; // [rsp+190h] [rbp+88h]
  int v78; // [rsp+194h] [rbp+8Ch]
  __int64 v79; // [rsp+198h] [rbp+90h]
  __int128 v80; // [rsp+1A0h] [rbp+98h]
  int v81; // [rsp+1B0h] [rbp+A8h]
  int v82; // [rsp+1B4h] [rbp+ACh]
  __int64 v83; // [rsp+1B8h] [rbp+B0h]
  int v84; // [rsp+1C0h] [rbp+B8h]
  __int64 v85; // [rsp+1C4h] [rbp+BCh]
  __int64 v86; // [rsp+1CCh] [rbp+C4h] BYREF
  int v87; // [rsp+1D4h] [rbp+CCh]
  int v88; // [rsp+1D8h] [rbp+D0h]
  __int64 v89; // [rsp+1DCh] [rbp+D4h]
  __int128 v90; // [rsp+1E4h] [rbp+DCh]
  int v91; // [rsp+1F4h] [rbp+ECh]
  int v92; // [rsp+1F8h] [rbp+F0h]
  __int64 v93; // [rsp+1FCh] [rbp+F4h]
  int v94; // [rsp+204h] [rbp+FCh]
  __int64 v95; // [rsp+208h] [rbp+100h]
  __int64 v96; // [rsp+210h] [rbp+108h] BYREF
  int v97; // [rsp+218h] [rbp+110h]
  int v98; // [rsp+21Ch] [rbp+114h]
  __int64 v99; // [rsp+220h] [rbp+118h]
  __int128 v100; // [rsp+228h] [rbp+120h]
  int v101; // [rsp+238h] [rbp+130h]
  int v102; // [rsp+23Ch] [rbp+134h]
  __int64 v103; // [rsp+240h] [rbp+138h]
  int v104; // [rsp+248h] [rbp+140h]
  __int64 v105; // [rsp+24Ch] [rbp+144h]
  __int64 v106; // [rsp+254h] [rbp+14Ch] BYREF
  int v107; // [rsp+25Ch] [rbp+154h]
  int v108; // [rsp+260h] [rbp+158h]
  __int64 v109; // [rsp+264h] [rbp+15Ch]
  __int128 v110; // [rsp+26Ch] [rbp+164h]
  int v111; // [rsp+27Ch] [rbp+174h]
  int v112; // [rsp+280h] [rbp+178h]
  __int64 v113; // [rsp+284h] [rbp+17Ch]
  int v114; // [rsp+28Ch] [rbp+184h]
  __int64 v115; // [rsp+290h] [rbp+188h]
  __int64 v116; // [rsp+298h] [rbp+190h] BYREF
  int v117; // [rsp+2A0h] [rbp+198h]
  int v118; // [rsp+2A4h] [rbp+19Ch]
  __int64 v119; // [rsp+2A8h] [rbp+1A0h]
  __int128 v120; // [rsp+2B0h] [rbp+1A8h]
  int v121; // [rsp+2C0h] [rbp+1B8h]
  int v122; // [rsp+2C4h] [rbp+1BCh]
  __int64 v123; // [rsp+2C8h] [rbp+1C0h]
  int v124; // [rsp+2D0h] [rbp+1C8h]
  __int64 v125; // [rsp+2D4h] [rbp+1CCh]
  __int64 v126; // [rsp+2DCh] [rbp+1D4h] BYREF
  int v127; // [rsp+2E4h] [rbp+1DCh]
  int v128; // [rsp+2E8h] [rbp+1E0h]
  __int64 v129; // [rsp+2ECh] [rbp+1E4h]
  __int128 v130; // [rsp+2F4h] [rbp+1ECh]
  int v131; // [rsp+304h] [rbp+1FCh]
  int v132; // [rsp+308h] [rbp+200h]
  __int64 v133; // [rsp+30Ch] [rbp+204h]
  int v134; // [rsp+314h] [rbp+20Ch]
  __int64 v135; // [rsp+318h] [rbp+210h]
  __int64 v136; // [rsp+320h] [rbp+218h] BYREF
  int v137; // [rsp+328h] [rbp+220h]
  int v138; // [rsp+32Ch] [rbp+224h]
  __int64 v139; // [rsp+330h] [rbp+228h]
  __int128 v140; // [rsp+338h] [rbp+230h]
  int v141; // [rsp+348h] [rbp+240h]
  int v142; // [rsp+34Ch] [rbp+244h]
  __int64 v143; // [rsp+350h] [rbp+248h]
  int v144; // [rsp+358h] [rbp+250h]
  __int64 v145; // [rsp+35Ch] [rbp+254h]
  __int64 v146; // [rsp+364h] [rbp+25Ch] BYREF
  int v147; // [rsp+36Ch] [rbp+264h]
  int v148; // [rsp+370h] [rbp+268h]
  __int64 v149; // [rsp+374h] [rbp+26Ch]
  __int128 v150; // [rsp+37Ch] [rbp+274h]
  int v151; // [rsp+38Ch] [rbp+284h]
  int v152; // [rsp+390h] [rbp+288h]
  __int64 v153; // [rsp+394h] [rbp+28Ch]
  int v154; // [rsp+39Ch] [rbp+294h]
  __int64 v155; // [rsp+3A0h] [rbp+298h]
  __m128 v156[4]; // [rsp+3A8h] [rbp+2A0h] BYREF
  int v157; // [rsp+3E8h] [rbp+2E0h]
  float v158[20]; // [rsp+3F8h] [rbp+2F0h] BYREF
  struct D2D_MATRIX_3X2_F v159; // [rsp+448h] [rbp+340h] BYREF

  v6 = *((_DWORD *)this + 3);
  v27 = *((_QWORD *)this + 4);
  v8 = *((_DWORD *)this + 2);
  v9 = *((_QWORD *)this + 3);
  v10 = *((_BYTE *)this + 97);
  v24[0] = *((_QWORD *)this + 5);
  v24[1] = v9;
  v25 = 8 * v6 + 16;
  v28 = v25;
  v31 = a4;
  v33 = *a5;
  v34 = *((_DWORD *)a5 + 2);
  v35 = *((_DWORD *)a5 + 3);
  v26 = v8;
  v29 = v8;
  v30 = v6;
  LOBYTE(v32) = v10;
  v157 = 0;
  if ( !a3 )
  {
    CMILMatrix::SetToInverse(v156, a2);
    CMILMatrix::Transpose((CMILMatrix *)v156, v11, v12);
  }
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>((float *)a2) )
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform3x2(this, &v159, a2);
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v159.m11 - v159.m22)) & _xmm);
    if ( v16 > 0.0000011920929
      || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v159.m12 - COERCE_FLOAT(LODWORD(v159.m21) ^ _xmm))) & _xmm),
          v17 > 0.0000011920929)
      || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v159.m21 * v159.m21)
                                                                  + (float)(v159.m11 * v159.m11))
                                                          - 1.0)) & _xmm),
          v18 >= 0.0000011920929) )
    {
      v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      if ( v21 >= 0.0000011920929 )
      {
        if ( v15 )
        {
          if ( v10 )
          {
            v117 = 0;
            v118 = 0;
            v122 = 0;
            v124 = 0;
            v120 = 0LL;
            v125 = 1065353216LL;
            v123 = *(_QWORD *)&v159.m[2][0];
            v119 = *(_QWORD *)&v159.m[1][0];
            v116 = *(_QWORD *)&v159.m11;
            v121 = 1065353216;
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              (__int64)v24,
              (unsigned int *)&v116,
              v14,
              v13);
          }
          else
          {
            v127 = 0;
            v128 = 0;
            v132 = 0;
            v134 = 0;
            v130 = 0LL;
            v135 = 1065353216LL;
            v133 = *(_QWORD *)&v159.m[2][0];
            v129 = *(_QWORD *)&v159.m[1][0];
            v126 = *(_QWORD *)&v159.m11;
            v131 = 1065353216;
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              (__int64)v24,
              (unsigned int *)&v126,
              v14,
              v13);
          }
        }
        else if ( v10 )
        {
          v137 = 0;
          v138 = 0;
          v142 = 0;
          v144 = 0;
          v140 = 0LL;
          v145 = 1065353216LL;
          v143 = *(_QWORD *)&v159.m[2][0];
          v139 = *(_QWORD *)&v159.m[1][0];
          v136 = *(_QWORD *)&v159.m11;
          v141 = 1065353216;
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            (__int64)v24,
            (int)&v136,
            (CMILMatrix *)v14,
            v13);
        }
        else
        {
          v147 = 0;
          v148 = 0;
          v152 = 0;
          v154 = 0;
          v150 = 0LL;
          v155 = 1065353216LL;
          v153 = *(_QWORD *)&v159.m[2][0];
          v149 = *(_QWORD *)&v159.m[1][0];
          v146 = *(_QWORD *)&v159.m11;
          v151 = 1065353216;
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            (__int64)v24,
            (int)&v146,
            (CMILMatrix *)v14,
            v13);
        }
      }
      else if ( v15 )
      {
        v97 = 0;
        v98 = 0;
        v102 = 0;
        v104 = 0;
        v100 = 0LL;
        v105 = 1065353216LL;
        v103 = *(_QWORD *)&v159.m[2][0];
        v99 = *(_QWORD *)&v159.m[1][0];
        v96 = *(_QWORD *)&v159.m11;
        v101 = 1065353216;
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          (__int64)v24,
          (unsigned int *)&v96,
          v14,
          v13);
      }
      else
      {
        v107 = 0;
        v108 = 0;
        v112 = 0;
        v114 = 0;
        v110 = 0LL;
        v115 = 1065353216LL;
        v113 = *(_QWORD *)&v159.m[2][0];
        v109 = *(_QWORD *)&v159.m[1][0];
        v106 = *(_QWORD *)&v159.m11;
        v111 = 1065353216;
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          (__int64)v24,
          (__int64)&v106,
          (CMILMatrix *)v14,
          v13);
      }
      return (CCounterManager *)(unsigned int)_InterlockedExchangeAdd(
                                                (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager
                                              + 1,
                                                *((_DWORD *)this + 2));
    }
    else
    {
      v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      if ( v19 >= 0.0000011920929 )
      {
        if ( v15 )
        {
          if ( v10 )
          {
            v57 = 0;
            v58 = 0;
            v62 = 0;
            v64 = 0;
            v60 = 0LL;
            v65 = 1065353216LL;
            v63 = *(_QWORD *)&v159.m[2][0];
            v59 = *(_QWORD *)&v159.m[1][0];
            v56 = *(_QWORD *)&v159.m11;
            v61 = 1065353216;
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              (__int64)v24,
              (unsigned int *)&v56,
              v14,
              v13);
          }
          else
          {
            v67 = 0;
            v68 = 0;
            v72 = 0;
            v74 = 0;
            v70 = 0LL;
            v75 = 1065353216LL;
            v73 = *(_QWORD *)&v159.m[2][0];
            v69 = *(_QWORD *)&v159.m[1][0];
            v66 = *(_QWORD *)&v159.m11;
            v71 = 1065353216;
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              (__int64)v24,
              (unsigned int *)&v66,
              v14,
              v13);
          }
        }
        else if ( v10 )
        {
          v77 = 0;
          v78 = 0;
          v82 = 0;
          v84 = 0;
          v80 = 0LL;
          v85 = 1065353216LL;
          v83 = *(_QWORD *)&v159.m[2][0];
          v79 = *(_QWORD *)&v159.m[1][0];
          v76 = *(_QWORD *)&v159.m11;
          v81 = 1065353216;
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            (__int64)v24,
            (__int64)&v76,
            (CMILMatrix *)v14,
            v13);
        }
        else
        {
          v87 = 0;
          v88 = 0;
          v92 = 0;
          v94 = 0;
          v90 = 0LL;
          v95 = 1065353216LL;
          v93 = *(_QWORD *)&v159.m[2][0];
          v89 = *(_QWORD *)&v159.m[1][0];
          v86 = *(_QWORD *)&v159.m11;
          v91 = 1065353216;
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            (__int64)v24,
            (__int64)&v86,
            (CMILMatrix *)v14,
            v13);
        }
      }
      else if ( v15 )
      {
        v37 = 0;
        v38 = 0;
        v42 = 0;
        v44 = 0;
        v40 = 0LL;
        v45 = 1065353216LL;
        v43 = *(_QWORD *)&v159.m[2][0];
        v39 = *(_QWORD *)&v159.m[1][0];
        v36 = *(_QWORD *)&v159.m11;
        v41 = 1065353216;
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          (__int64)v24,
          (unsigned int *)&v36,
          v14,
          v13);
      }
      else
      {
        v47 = 0;
        v48 = 0;
        v52 = 0;
        v54 = 0;
        v50 = 0LL;
        v55 = 1065353216LL;
        v53 = *(_QWORD *)&v159.m[2][0];
        v49 = *(_QWORD *)&v159.m[1][0];
        v46 = *(_QWORD *)&v159.m11;
        v51 = 1065353216;
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          (__int64)v24,
          (__int64)&v46,
          (CMILMatrix *)v14,
          v13);
      }
      result = CCounterManager::s_pGlobalPerFrameCounterManager;
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager,
        *((_DWORD *)this + 2));
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4((__int64)this, (__int64)v158, (__int64)a2);
    v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
    if ( v23 >= 0.0000011920929 )
    {
      if ( v10 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          (__int64)v24,
          v158,
          v22);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          (__int64)v24,
          v158,
          v22);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        (__int64)v24,
        v158,
        v22);
    }
    return (CCounterManager *)(unsigned int)_InterlockedExchangeAdd(
                                              (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager
                                            + 2,
                                              *((_DWORD *)this + 2));
  }
  return result;
}
