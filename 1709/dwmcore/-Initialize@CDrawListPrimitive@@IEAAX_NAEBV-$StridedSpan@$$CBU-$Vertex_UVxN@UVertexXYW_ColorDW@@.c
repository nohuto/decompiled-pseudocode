/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800635A0
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800688E0 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x1801552B4 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x180155008 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 */

__int64 __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        char a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        void *Src,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  _DWORD *v9; // rdi
  __int64 v10; // r14
  float v12; // xmm1_4
  unsigned __int64 v13; // xmm0_8
  bool v14; // zf
  unsigned int v15; // r11d
  unsigned int v16; // r12d
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // edx
  int v22; // r8d
  __int64 result; // rax
  _QWORD *v24; // r8
  __int64 v25; // rbp
  __int64 v26; // rsi
  float v27; // xmm6_4
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r14
  float v31; // xmm2_4
  float v32; // xmm2_4
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm3_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm8_4
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm9_4
  float v53; // xmm0_4
  __int64 v54; // rax
  float *v55; // rcx
  __int64 v56; // r10
  __int64 v57; // rdx
  float v58; // xmm4_4
  __int64 v59; // r9
  float v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm1_4
  unsigned int v63; // ebp
  int v64; // edi
  int v65; // esi
  _QWORD *v66; // [rsp+40h] [rbp-E8h]
  __int64 v67; // [rsp+48h] [rbp-E0h]
  __int64 v68; // [rsp+50h] [rbp-D8h]
  _QWORD *v69; // [rsp+58h] [rbp-D0h]
  int v70; // [rsp+130h] [rbp+8h]
  unsigned int v71; // [rsp+138h] [rbp+10h]
  int v74; // [rsp+168h] [rbp+40h]
  int v75; // [rsp+170h] [rbp+48h]

  v9 = a4;
  v10 = a3;
  *(_BYTE *)(a1 + 97) = a9;
  *(_BYTE *)(a1 + 96) = a2;
  if ( *(float *)a8 < 0.0049999999
    || *(float *)a8 > 200.0
    || (v12 = *(float *)(a8 + 4), v12 < 0.0049999999)
    || v12 > 200.0 )
  {
    v13 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  }
  else
  {
    v13 = *(_QWORD *)a8;
  }
  v14 = *(_DWORD *)(a1 + 16) == 0;
  *(_QWORD *)(a1 + 88) = v13;
  if ( v14 )
    return (__int64)memset_0((void *)(a1 + 56), 0, 0x20uLL);
  memcpy_0(*(void **)(a1 + 48), Src, 2LL * a7);
  v15 = *(_DWORD *)(v10 + 12);
  v16 = 0;
  v17 = *(_DWORD *)(a1 + 12);
  v18 = *(_QWORD **)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 24);
  v20 = *(_QWORD *)(a1 + 32);
  v69 = v18;
  v21 = v17 + 2;
  v68 = v19;
  v22 = 8 * (v17 + 2);
  v74 = v22;
  result = (unsigned int)(8 * v17 + 16);
  v70 = v21;
  v67 = v20;
  v71 = result;
  v75 = v15;
  *(_OWORD *)(a1 + 56) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( v15 )
  {
    v24 = v18;
    v66 = v18;
    do
    {
      v25 = *(_QWORD *)v10 + (int)(v16 * *(_DWORD *)(v10 + 8));
      v26 = *(_QWORD *)v9 + (int)(v16 * v9[2]);
      *v24 = *(_QWORD *)v25;
      v27 = *(float *)(a1 + 88);
      v28 = (int)(8 * v16 * v21);
      v29 = v28 + v19;
      v30 = v28 + v20;
      v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - 1.0)) & _xmm);
      if ( v31 >= 0.0000011920929
        || (v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 92) - 1.0)) & _xmm), v32 >= 0.0000011920929) )
      {
        v45 = *(float *)(v26 + 4);
        v46 = *(float *)(v25 + 4) - v45;
        v47 = FLOAT_1_0;
        v48 = *(float *)v25 - *(float *)v26;
        v49 = (float)((float)(v27 * *(float *)v26) + (float)(v45 * 0.0)) + 0.0;
        v50 = (float)(v27 * v48) + (float)(v46 * 0.0);
        v51 = (float)(*(float *)(a1 + 92) * v46) + (float)(v48 * 0.0);
        v52 = (float)((float)(*(float *)(a1 + 92) * v45) + (float)(*(float *)v26 * 0.0)) + 0.0;
        if ( v50 != 0.0 || v51 != 0.0 )
        {
          v53 = sqrtf_0((float)(v51 * v51) + (float)(v50 * v50));
          v24 = v66;
          v15 = v75;
          v47 = *(float *)(v26 + 8) / v53;
        }
        v54 = 0LL;
        *(float *)(v29 + 4) = (float)(v51 * v47) + v52;
        *(float *)v29 = (float)(v47 * v50) + v49;
        if ( a5 >= 2 )
        {
          v55 = (float *)(v25 + 20);
          v56 = ((a5 - 2) >> 1) + 1;
          v57 = v26 - v25;
          v58 = 1.0 - v47;
          v59 = v29 - v25;
          v54 = (unsigned int)(2 * v56);
          do
          {
            v60 = (float)(v58 * *(float *)((char *)v55 + v57)) + (float)(v47 * *v55);
            *(float *)((char *)v55 + v59 - 4) = (float)(v58 * *(float *)((char *)v55 + v57 - 4))
                                              + (float)(v47 * *(v55 - 1));
            *(float *)((char *)v55 + v59) = v60;
            v61 = (float)(v58 * *(float *)((char *)v55 + v57 + 8)) + (float)(v47 * v55[2]);
            *(float *)((char *)v55 + v59 + 4) = (float)(v58 * *(float *)((char *)v55 + v57 + 4)) + (float)(v47 * v55[1]);
            *(float *)((char *)v55 + v59 + 8) = v61;
            v55 += 4;
            --v56;
          }
          while ( v56 );
        }
        if ( (unsigned int)v54 < a5 )
        {
          v62 = (float)((float)(1.0 - v47) * *(float *)(v26 + 8 * v54 + 16))
              + (float)(v47 * *(float *)(v25 + 8 * v54 + 16));
          *(float *)(v29 + 8 * v54 + 20) = (float)(v47 * *(float *)(v25 + 8 * v54 + 20))
                                         + (float)((float)(1.0 - v47) * *(float *)(v26 + 8 * v54 + 20));
          *(float *)(v29 + 8 * v54 + 16) = v62;
        }
        v19 = v68;
        v20 = v67;
        *(float *)v30 = v49;
        *(float *)(v30 + 4) = v52;
      }
      else
      {
        *(_QWORD *)v29 = *(_QWORD *)v25;
        if ( a5 )
        {
          v33 = (_QWORD *)(v29 + 16);
          v34 = a5;
          do
          {
            *v33 = *(_QWORD *)((char *)v33 + v25 - v29);
            ++v33;
            --v34;
          }
          while ( v34 );
        }
        *(_QWORD *)v30 = *(_QWORD *)v26;
      }
      *(_DWORD *)(v29 + 8) = *(_DWORD *)(v25 + 8);
      *(_DWORD *)(v29 + 12) = *(_DWORD *)(v25 + 12);
      *(_DWORD *)(v30 + 8) = *(_DWORD *)(v26 + 8);
      *(_DWORD *)(v30 + 12) = *(_DWORD *)(v26 + 12);
      if ( a5 )
      {
        v35 = (_QWORD *)(v30 + 16);
        v36 = a5;
        do
        {
          *v35 = *(_QWORD *)((char *)v35 + v26 - v30);
          ++v35;
          --v36;
        }
        while ( v36 );
      }
      ++v24;
      v37 = *(float *)(a1 + 60);
      ++v16;
      v10 = a3;
      v21 = v70;
      v66 = v24;
      *(float *)(a1 + 56) = fminf(*(float *)(a1 + 56), *(float *)v26);
      v38 = *(float *)(a1 + 64);
      *(float *)(a1 + 60) = fminf(v37, *(float *)(v26 + 4));
      v39 = *(float *)(a1 + 68);
      *(float *)(a1 + 64) = fmaxf(v38, *(float *)v26);
      v40 = *(float *)(a1 + 72);
      *(float *)(a1 + 68) = fmaxf(v39, *(float *)(v26 + 4));
      v41 = *(float *)(a1 + 76);
      *(float *)(a1 + 72) = fminf(v40, *(float *)v29);
      v42 = *(float *)(a1 + 80);
      *(float *)(a1 + 76) = fminf(v41, *(float *)(v29 + 4));
      v43 = *(float *)(a1 + 84);
      *(float *)(a1 + 80) = fmaxf(v42, *(float *)v29);
      v44 = fmaxf(v43, *(float *)(v29 + 4));
      v9 = a4;
      *(float *)(a1 + 84) = v44;
    }
    while ( v16 < v15 );
    v18 = v69;
    v22 = v74;
    result = v71;
  }
  if ( v15 < *(_DWORD *)(a1 + 8) )
  {
    v63 = v15 - 1;
    v64 = v15 * v22;
    v65 = v15 * result;
    do
    {
      result = SplitVertex(
                 *(_DWORD *)v10 + *(_DWORD *)(v10 + 8) * v63,
                 *a4 + a4[2] * v63,
                 a5,
                 (int)a1 + 88,
                 (__int64)&v18[v15],
                 v68 + v64,
                 v67 + v65);
      v65 += v71;
      v15 = v75 + 1;
      v64 += v74;
      v18 = v69;
      v75 = v15;
    }
    while ( v15 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
