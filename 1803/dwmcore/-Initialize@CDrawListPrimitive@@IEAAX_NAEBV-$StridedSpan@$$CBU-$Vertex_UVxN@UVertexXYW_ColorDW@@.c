/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800AF3E0
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180010270 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18017E534 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x1800170E0 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800BF134 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
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
  __int64 v9; // rdi
  __int64 v10; // r14
  float v12; // xmm1_4
  unsigned __int64 v13; // xmm0_8
  bool v14; // zf
  unsigned int v15; // r11d
  unsigned int v16; // r13d
  _QWORD *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 *v25; // r14
  float v26; // xmm3_4
  __int64 v27; // rdi
  float v28; // xmm2_4
  float v29; // xmm2_4
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // xmm0_8
  _QWORD *v33; // rax
  __int64 v34; // rcx
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  unsigned int v44; // ebp
  int v45; // edi
  int v46; // esi
  __int64 v47; // [rsp+40h] [rbp-F8h]
  __int64 v48; // [rsp+48h] [rbp-F0h]
  _QWORD *v49; // [rsp+50h] [rbp-E8h]
  __int64 v50; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD *v51; // [rsp+60h] [rbp-D8h]
  float v52; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+74h] [rbp-C4h]
  __int64 v54; // [rsp+7Ch] [rbp-BCh]
  int v55; // [rsp+84h] [rbp-B4h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __int128 v57; // [rsp+90h] [rbp-A8h]
  __int128 v58; // [rsp+A0h] [rbp-98h]
  int v59; // [rsp+B0h] [rbp-88h]
  unsigned int v60; // [rsp+140h] [rbp+8h]
  int v61; // [rsp+148h] [rbp+10h]
  int v64; // [rsp+178h] [rbp+40h]
  int v65; // [rsp+180h] [rbp+48h]

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
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 48), Src, 2LL * a7);
    v15 = *(_DWORD *)(v10 + 12);
    v16 = 0;
    v17 = *(_QWORD **)(a1 + 40);
    v18 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(a1 + 32);
    result = (unsigned int)(8 * *(_DWORD *)(a1 + 12) + 16);
    v60 = 8 * *(_DWORD *)(a1 + 12) + 16;
    v51 = v17;
    v47 = v18;
    v48 = v19;
    v65 = v15;
    *(_OWORD *)(a1 + 56) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v15 )
    {
      v21 = 0;
      v22 = 0;
      v61 = 0;
      v64 = 0;
      v49 = v17;
      do
      {
        v23 = v19 + v21;
        v24 = *(_QWORD *)v10 + (int)(v16 * *(_DWORD *)(v10 + 8));
        v25 = (__int64 *)(*(_QWORD *)v9 + (int)(v16 * *(_DWORD *)(v9 + 8)));
        *v17 = *(_QWORD *)v24;
        v26 = *(float *)(a1 + 88);
        v27 = v18 + v22;
        v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 1.0)) & _xmm);
        if ( v28 >= 0.0000011920929
          || (v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 92) - 1.0)) & _xmm),
              v29 >= 0.0000011920929) )
        {
          v55 = *(_DWORD *)(a1 + 92);
          v57 = _xmm;
          v52 = v26;
          v53 = 0LL;
          v54 = 0LL;
          v56 = 0LL;
          v58 = _xmm;
          v59 = 0;
          Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
            v24,
            (_DWORD)v25,
            a5,
            (unsigned int)&v52,
            v27,
            (__int64)&v50);
          v32 = v50;
          v21 = v64;
          v22 = v61;
          v17 = v49;
          v15 = v65;
        }
        else
        {
          *(_QWORD *)v27 = *(_QWORD *)v24;
          if ( a5 )
          {
            v30 = (_QWORD *)(v27 + 16);
            v31 = a5;
            do
            {
              *v30 = *(_QWORD *)((char *)v30 + v24 - v27);
              ++v30;
              --v31;
            }
            while ( v31 );
          }
          v32 = *v25;
        }
        *(_QWORD *)v23 = v32;
        *(_DWORD *)(v27 + 8) = *(_DWORD *)(v24 + 8);
        *(_DWORD *)(v27 + 12) = *(_DWORD *)(v24 + 12);
        *(_DWORD *)(v23 + 8) = *((_DWORD *)v25 + 2);
        *(_DWORD *)(v23 + 12) = *((_DWORD *)v25 + 3);
        if ( a5 )
        {
          v33 = (_QWORD *)(v23 + 16);
          v34 = a5;
          do
          {
            *v33 = *(_QWORD *)((char *)v33 + (_QWORD)v25 - v23);
            ++v33;
            --v34;
          }
          while ( v34 );
        }
        ++v17;
        v35 = *(float *)(a1 + 60);
        ++v16;
        result = v60;
        v22 += v60;
        v18 = v47;
        v21 += v60;
        v19 = v48;
        *(float *)(a1 + 56) = fminf(*(float *)(a1 + 56), *(float *)v25);
        v36 = *(float *)(a1 + 64);
        v61 = v22;
        v64 = v21;
        v49 = v17;
        *(float *)(a1 + 60) = fminf(v35, *((float *)v25 + 1));
        v37 = *(float *)(a1 + 68);
        *(float *)(a1 + 64) = fmaxf(v36, *(float *)v25);
        v38 = *(float *)(a1 + 72);
        v39 = fmaxf(v37, *((float *)v25 + 1));
        v10 = a3;
        *(float *)(a1 + 68) = v39;
        v40 = *(float *)(a1 + 76);
        *(float *)(a1 + 72) = fminf(v38, *(float *)v27);
        v41 = *(float *)(a1 + 80);
        *(float *)(a1 + 76) = fminf(v40, *(float *)(v27 + 4));
        v42 = *(float *)(a1 + 84);
        *(float *)(a1 + 80) = fmaxf(v41, *(float *)v27);
        v43 = fmaxf(v42, *(float *)(v27 + 4));
        v9 = a4;
        *(float *)(a1 + 84) = v43;
      }
      while ( v16 < v15 );
    }
    if ( v15 < *(_DWORD *)(a1 + 8) )
    {
      v44 = v15 - 1;
      v45 = v15 * result;
      v46 = v15 * result;
      do
      {
        result = (__int64)SplitVertex(
                            *(_QWORD *)v10 + (int)(*(_DWORD *)(v10 + 8) * v44),
                            *(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * v44),
                            a5,
                            (float *)(a1 + 88),
                            &v51[v15],
                            (_QWORD *)(v18 + v45),
                            (_QWORD *)(v19 + v46));
        v46 += v60;
        v18 = v47;
        v15 = v65 + 1;
        v19 = v48;
        v45 += v60;
        v65 = v15;
      }
      while ( v15 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
