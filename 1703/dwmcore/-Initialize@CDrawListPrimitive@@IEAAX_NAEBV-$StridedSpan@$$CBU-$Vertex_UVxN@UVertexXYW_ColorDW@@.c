/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18008BFD0
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180007210 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18003FC4C (-ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOL.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x180021D68 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

__int64 __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        void *Src,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // rbp
  __int64 v10; // rsi
  float v12; // xmm1_4
  unsigned __int64 v13; // xmm0_8
  bool v14; // zf
  float *v15; // rdi
  unsigned int v16; // r11d
  unsigned int v17; // r12d
  __int64 result; // rax
  _QWORD *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r10d
  int v23; // r13d
  int v24; // r8d
  __int64 v25; // rdi
  __int64 v26; // r14
  float *v27; // rsi
  float v28; // xmm6_4
  __int64 v29; // rbp
  float v30; // xmm2_4
  float v31; // xmm2_4
  _QWORD *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // xmm0_8
  __int64 v35; // rcx
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm3_4
  float v45; // xmm4_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  __m128 v48; // xmm3
  float v49; // xmm8_4
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm9_4
  __int64 v53; // rax
  float *v54; // rcx
  __int64 v55; // r11
  char *v56; // rdx
  __m128 v57; // xmm4
  __int64 v58; // r10
  __m128 v59; // xmm2
  __m128 v60; // xmm1
  __m128 v61; // xmm0
  __m128 v62; // xmm2
  __m128 v63; // xmm1
  __m128 v64; // xmm2
  float v65; // xmm0_4
  __m128 v66; // xmm1
  float v67; // xmm0_4
  unsigned int v68; // r14d
  int v69; // esi
  int v70; // ebp
  __int64 v71; // [rsp+40h] [rbp-F8h]
  _QWORD *v72; // [rsp+50h] [rbp-E8h]
  _QWORD *v73; // [rsp+60h] [rbp-D8h]
  __int64 v74; // [rsp+140h] [rbp+8h]
  int v75; // [rsp+148h] [rbp+10h]
  int v78; // [rsp+178h] [rbp+40h]
  int v79; // [rsp+180h] [rbp+48h]

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
  v15 = (float *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = v13;
  if ( v14 )
    return (__int64)memset_0((void *)(a1 + 56), 0, 0x20uLL);
  memcpy_0(*(void **)(a1 + 48), Src, 2LL * a7);
  v16 = *(_DWORD *)(v10 + 12);
  v17 = 0;
  result = *(unsigned int *)(a1 + 12);
  v19 = *(_QWORD **)(a1 + 40);
  v20 = *(_QWORD *)(a1 + 24);
  v21 = *(_QWORD *)(a1 + 32);
  v22 = 8 * result + 16;
  v78 = v22;
  v73 = v19;
  v74 = v20;
  v71 = v21;
  v79 = v16;
  *(_OWORD *)(a1 + 56) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( v16 )
  {
    v23 = 0;
    v24 = 0;
    v75 = 0;
    v72 = v19;
    do
    {
      v25 = v20 + v24;
      v26 = *(_QWORD *)v10 + (int)(v17 * *(_DWORD *)(v10 + 8));
      v27 = (float *)(*(_QWORD *)v9 + (int)(v17 * *(_DWORD *)(v9 + 8)));
      *v19 = *(_QWORD *)v26;
      v28 = *(float *)(a1 + 88);
      v29 = v21 + v23;
      v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28 - 1.0)) & _xmm);
      if ( v30 >= 0.0000011920929
        || (v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 92) - 1.0)) & _xmm), v31 >= 0.0000011920929) )
      {
        v44 = *(float *)(v26 + 4) - v27[1];
        v45 = *(float *)v26 - *v27;
        v46 = *(float *)(a1 + 92) * v44;
        v47 = v44 * 0.0;
        v48 = (__m128)LODWORD(FLOAT_1_0);
        v49 = (float)((float)(v28 * COERCE_FLOAT(*(_QWORD *)v27)) + (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)v27)) * 0.0))
            + 0.0;
        v50 = (float)(v28 * v45) + v47;
        v51 = v46 + (float)(v45 * 0.0);
        v52 = (float)((float)(*(float *)(a1 + 92) * COERCE_FLOAT(HIDWORD(*(_QWORD *)v27)))
                    + (float)(COERCE_FLOAT(*(_QWORD *)v27) * 0.0))
            + 0.0;
        if ( v50 != 0.0 || v51 != 0.0 )
        {
          v67 = sqrtf_0((float)(v51 * v51) + (float)(v50 * v50));
          v48 = (__m128)*((unsigned int *)v27 + 2);
          v24 = v75;
          v19 = v72;
          v48.m128_f32[0] = v48.m128_f32[0] / v67;
        }
        v53 = 0LL;
        *(float *)v25 = (float)(v50 * v48.m128_f32[0]) + v49;
        *(float *)(v25 + 4) = (float)(v51 * v48.m128_f32[0]) + v52;
        if ( a5 >= 2 )
        {
          v54 = (float *)(v26 + 20);
          v57 = (__m128)LODWORD(FLOAT_1_0);
          v55 = ((a5 - 2) >> 1) + 1;
          v56 = (char *)v27 - v26;
          v57.m128_f32[0] = 1.0 - v48.m128_f32[0];
          v58 = v25 - v26;
          v53 = (unsigned int)(2 * v55);
          do
          {
            v59 = v57;
            v60 = v57;
            v59.m128_f32[0] = (float)(v57.m128_f32[0] * *(float *)((char *)v54 + (_QWORD)v56 - 4))
                            + (float)(v48.m128_f32[0] * *(v54 - 1));
            v60.m128_f32[0] = (float)(v57.m128_f32[0] * *(float *)((char *)v54 + (_QWORD)v56))
                            + (float)(v48.m128_f32[0] * *v54);
            v61 = v59;
            v62 = v57;
            v61.m128_u64[0] = _mm_unpacklo_ps(v61, v60).m128_u64[0];
            v63 = v57;
            *(_QWORD *)((char *)v54 + v58 - 4) = v61.m128_u64[0];
            v62.m128_f32[0] = (float)(v57.m128_f32[0] * *(float *)((char *)v54 + (_QWORD)v56 + 4))
                            + (float)(v48.m128_f32[0] * v54[1]);
            v63.m128_f32[0] = (float)(v57.m128_f32[0] * *(float *)((char *)v54 + (_QWORD)v56 + 8))
                            + (float)(v48.m128_f32[0] * v54[2]);
            *(_QWORD *)((char *)v54 + v58 + 4) = _mm_unpacklo_ps(v62, v63).m128_u64[0];
            v54 += 4;
            --v55;
          }
          while ( v55 );
        }
        if ( (unsigned int)v53 < a5 )
        {
          v64 = (__m128)LODWORD(FLOAT_1_0);
          v65 = v48.m128_f32[0] * *(float *)(v26 + 8 * v53 + 16);
          v64.m128_f32[0] = 1.0 - v48.m128_f32[0];
          v66 = v64;
          v48.m128_f32[0] = (float)(v48.m128_f32[0] * *(float *)(v26 + 8 * v53 + 20))
                          + (float)((float)(1.0 - v48.m128_f32[0]) * v27[2 * v53 + 5]);
          v66.m128_f32[0] = (float)(v64.m128_f32[0] * v27[2 * v53 + 4]) + v65;
          *(_QWORD *)(v25 + 8 * v53 + 16) = _mm_unpacklo_ps(v66, v48).m128_u64[0];
        }
        v34 = __PAIR64__(LODWORD(v52), LODWORD(v49));
        v22 = v78;
        v16 = v79;
      }
      else
      {
        *(_QWORD *)v25 = *(_QWORD *)v26;
        if ( a5 )
        {
          v32 = (_QWORD *)(v25 + 16);
          v33 = a5;
          do
          {
            *v32 = *(_QWORD *)((char *)v32 + v26 - v25);
            ++v32;
            --v33;
          }
          while ( v33 );
        }
        v34 = *(_QWORD *)v27;
      }
      *(_QWORD *)v29 = v34;
      *(_DWORD *)(v25 + 8) = *(_DWORD *)(v26 + 8);
      *(_DWORD *)(v25 + 12) = *(_DWORD *)(v26 + 12);
      *(float *)(v29 + 8) = v27[2];
      result = *((unsigned int *)v27 + 3);
      *(_DWORD *)(v29 + 12) = result;
      if ( a5 )
      {
        result = v29 + 16;
        v35 = a5;
        do
        {
          *(_QWORD *)result = *(_QWORD *)((char *)v27 + result - v29);
          result += 8LL;
          --v35;
        }
        while ( v35 );
      }
      v24 += v22;
      v36 = *(float *)(a1 + 60);
      ++v19;
      v9 = a4;
      ++v17;
      v20 = v74;
      v23 += v22;
      v21 = v71;
      *(float *)(a1 + 56) = fminf(*(float *)(a1 + 56), *v27);
      v37 = *(float *)(a1 + 64);
      v75 = v24;
      v72 = v19;
      *(float *)(a1 + 60) = fminf(v36, v27[1]);
      v38 = *(float *)(a1 + 68);
      *(float *)(a1 + 64) = fmaxf(v37, *v27);
      v39 = *(float *)(a1 + 72);
      v40 = fmaxf(v38, v27[1]);
      v10 = a3;
      *(float *)(a1 + 68) = v40;
      v41 = *(float *)(a1 + 76);
      *(float *)(a1 + 72) = fminf(v39, *(float *)v25);
      v42 = *(float *)(a1 + 80);
      *(float *)(a1 + 76) = fminf(v41, *(float *)(v25 + 4));
      v43 = *(float *)(a1 + 84);
      *(float *)(a1 + 80) = fmaxf(v42, *(float *)v25);
      *(float *)(a1 + 84) = fmaxf(v43, *(float *)(v25 + 4));
    }
    while ( v17 < v16 );
    v15 = (float *)(a1 + 88);
  }
  if ( v16 < *(_DWORD *)(a1 + 8) )
  {
    v68 = v16 - 1;
    v69 = v16 * v22;
    v70 = v16 * v22;
    do
    {
      result = (__int64)SplitVertex(
                          *(_QWORD *)a3 + (int)(v68 * *(_DWORD *)(a3 + 8)),
                          *(_QWORD *)a4 + (int)(v68 * *(_DWORD *)(a4 + 8)),
                          a5,
                          v15,
                          &v73[v16],
                          (_QWORD *)(v20 + v69),
                          (_QWORD *)(v21 + v70));
      v70 += v78;
      v20 = v74;
      v16 = v79 + 1;
      v21 = v71;
      v69 += v78;
      v79 = v16;
    }
    while ( v16 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
