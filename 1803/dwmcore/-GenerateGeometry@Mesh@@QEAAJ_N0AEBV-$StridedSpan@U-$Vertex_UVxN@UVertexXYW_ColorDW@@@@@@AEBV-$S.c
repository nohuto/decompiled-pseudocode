/*
 * XREFs of ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x1800B2340
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z @ 0x1800ADF68 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x1800B06FC (-GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B0850 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18017DC84 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GenerateGeometry(
        Mesh *this,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        float *a7,
        __int16 a8,
        unsigned __int16 *a9,
        int *a10)
{
  __int16 v10; // si
  float v11; // edi
  int v12; // r13d
  char v14; // r12
  __m128i v16; // xmm6
  char v17; // al
  __m128i v18; // xmm6
  unsigned __int16 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // ebp
  int v24; // r11d
  float v25; // xmm1_4
  float v26; // xmm0_4
  __int64 v27; // r9
  __int64 v28; // r10
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  int v32; // ecx
  float v33; // xmm0_4
  unsigned int v34; // ecx
  double v35; // xmm0_8
  float v36; // xmm1_4
  unsigned int v37; // ecx
  float v38; // xmm0_4
  unsigned int v39; // eax
  __int64 v40; // r10
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  unsigned int v44; // r10d
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  bool v48; // r12
  int i; // r9d
  __int64 v50; // rsi
  float v51; // xmm1_4
  float v52; // xmm2_4
  __int64 v53; // r11
  float v54; // xmm5_4
  float v55; // xmm6_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm7_4
  float v63; // xmm4_4
  float v64; // xmm3_4
  float v65; // xmm1_4
  float v66; // xmm2_4
  int j; // r9d
  int v68; // eax
  __int64 result; // rax
  float v70; // xmm0_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm7_4
  int v74; // ecx
  float v75; // xmm0_4
  unsigned int v76; // ecx
  double v77; // xmm0_8
  float v78; // xmm1_4
  int v79; // edx
  unsigned __int16 *v80; // r9
  __int64 v81; // rcx
  unsigned __int16 *v82; // rax
  __m128i v83; // xmm0
  unsigned __int16 *v84; // rcx
  __int64 v85; // rdx
  int inited; // esi
  int v87; // edx
  int v88; // [rsp+40h] [rbp-F8h]
  float v89; // [rsp+50h] [rbp-E8h] BYREF
  float v90; // [rsp+54h] [rbp-E4h]
  float v91; // [rsp+58h] [rbp-E0h]
  float v92; // [rsp+5Ch] [rbp-DCh]
  __m128i v93; // [rsp+60h] [rbp-D8h] BYREF
  int v94; // [rsp+140h] [rbp+8h] BYREF

  v10 = a8;
  v11 = 0.0;
  v12 = 0;
  v89 = 0.0;
  v94 = 0;
  v14 = a3;
  v16 = _mm_cvtsi32_si128(a8);
  v17 = *((_BYTE *)this + 236);
  v18 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v16, v16), 0);
  v93 = v18;
  if ( (v17 & 1) == 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0xF4Du);
    return 2147500037LL;
  }
  v19 = a9;
  if ( !a2 )
    goto LABEL_7;
  v20 = *((_QWORD *)this + 23);
  if ( v20 && (v17 & 0x18) == 0 )
  {
    v21 = *(int *)(v20 + 128);
    if ( (int)v21 > 0 )
    {
      memcpy_0(a9, *(const void **)(v20 + 120), 2 * v21);
      v12 = *(_DWORD *)(*((_QWORD *)this + 23) + 128LL);
      v94 = v12;
    }
    goto LABEL_7;
  }
  inited = Mesh::InitMeshGraph(this);
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0xF74u);
    return (unsigned int)inited;
  }
  v87 = *(_DWORD *)(*((_QWORD *)this + 22) + 100LL)
      + 2 * (*(_DWORD *)(*((_QWORD *)this + 22) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 22) + 104LL));
  if ( v87 > 0 )
  {
    inited = Mesh::GenerateTriangles(this, v19, 3 * v87, &v94);
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0xF7Cu);
      return (unsigned int)inited;
    }
    v12 = v94;
  }
  v10 = a8;
LABEL_7:
  v22 = a5;
  v23 = a6;
  if ( *((int *)this + 42) > 0 )
  {
    v24 = 0;
    do
    {
      a3 = *((_QWORD *)this + 19) + v24 * *((_DWORD *)this + 40);
      v25 = *(float *)a3 + *((float *)this + 50);
      v26 = *(float *)(a3 + 4) + *((float *)this + 51);
      v27 = *(_QWORD *)a4 + *(_DWORD *)(a4 + 8) * v24;
      v28 = *(_QWORD *)v22 + *(_DWORD *)(v22 + 8) * v24;
      *(float *)v28 = v25;
      *(float *)(v28 + 4) = v26;
      *(float *)v27 = v25;
      *(float *)(v27 + 4) = v26;
      *(_DWORD *)(v27 + 8) = 1065353216;
      *(_DWORD *)(v28 + 8) = 0;
      *(_DWORD *)(v28 + 12) = 1065353216;
      v29 = *(float *)(a3 + 16) * 255.0;
      v30 = (float)(*(float *)(a3 + 20) * 255.0) + 6291456.25;
      v31 = *(float *)(a3 + 12) * 255.0;
      if ( *((char *)this + 236) < 0 )
      {
        v89 = (float)(*(float *)(a3 + 20) * 255.0) + 6291456.25;
        v74 = LODWORD(v30) << 23;
        v75 = v29 + 6291456.25;
        v90 = v75;
        v76 = (LODWORD(v75) << 15) | v74 & 0xFF00FFFF;
        v77 = v31;
        v78 = *(float *)(a3 + 8);
        *(float *)&v77 = v77 + 6291456.25;
        v91 = *(float *)&v77;
        v37 = ((int)(LODWORD(v77) << 10) >> 3) | v76 & 0xFFFF00FF;
        v38 = (float)(v78 * 255.0) + 6291456.25;
        v92 = v38;
      }
      else
      {
        v92 = (float)(*(float *)(a3 + 20) * 255.0) + 6291456.25;
        v32 = LODWORD(v30) << 23;
        v33 = v29 + 6291456.25;
        v91 = v33;
        v34 = (LODWORD(v33) << 15) | v32 & 0xFF00FFFF;
        v35 = v31;
        v36 = *(float *)(a3 + 8);
        *(float *)&v35 = v35 + 6291456.25;
        v90 = *(float *)&v35;
        v37 = ((int)(LODWORD(v35) << 10) >> 3) | v34 & 0xFFFF00FF;
        v38 = (float)(v36 * 255.0) + 6291456.25;
        v89 = v38;
      }
      *(_DWORD *)(v27 + 12) = ((int)(LODWORD(v38) << 10) >> 11) | v37 & 0xFFFFFF00;
      v39 = *((_DWORD *)this + 6);
      if ( v23 < v39 )
        v39 = v23;
      if ( v39 )
      {
        v40 = v28 - a3;
        v41 = (_QWORD *)(a3 + 28);
        v42 = 0LL;
        v43 = v27 - a3;
        a3 = v39;
        do
        {
          if ( *(_BYTE *)(v42 + *(_QWORD *)this + 52) )
          {
            *(_QWORD *)((char *)v41 + v40 - 12) = *v41;
            *(_QWORD *)((char *)v41 + v43 - 12) = *v41;
          }
          v42 += 56LL;
          ++v41;
          --a3;
        }
        while ( a3 );
      }
      v11 = *((float *)this + 42);
      ++v24;
    }
    while ( v24 < SLODWORD(v11) );
    v89 = *((float *)this + 42);
  }
  if ( (*((_BYTE *)this + 236) & 0x40) != 0 )
  {
    Mesh::GenerateAntialiasBorder((__int64)this, v14, a3, a4, v22, v23, &v89, (__int64)a9, v88, &v94);
    v11 = v89;
    v12 = v94;
  }
  v44 = 0;
  if ( v23 )
  {
    v45 = 16LL;
    v46 = 0LL;
    do
    {
      if ( v44 < *((_DWORD *)this + 6) && (v47 = *(_QWORD *)this, *(_BYTE *)(v46 + *(_QWORD *)this + 52)) )
      {
        v48 = *(float *)(v46 + v47 + 36) != 0.0
           || *(float *)(v46 + v47 + 40) != 0.0
           || *(float *)(v46 + v47 + 44) != 1.0
           || *(float *)(v46 + v47 + 48) != 1.0;
        for ( i = 0; i < SLODWORD(v11); *(float *)(v45 + v53 + 4) = v64 )
        {
          v50 = *(_QWORD *)a4 + *(_DWORD *)(a4 + 8) * i;
          v51 = *(float *)(v45 + v50);
          v52 = *(float *)(v45 + v50 + 4);
          v53 = *(_QWORD *)v22 + *(_DWORD *)(v22 + 8) * i;
          v54 = (float)((float)(*(float *)(v46 + v47) * v51) + (float)(*(float *)(v46 + v47 + 12) * v52))
              + *(float *)(v46 + v47 + 24);
          v55 = (float)((float)(*(float *)(v46 + v47 + 4) * v51) + (float)(*(float *)(v46 + v47 + 16) * v52))
              + *(float *)(v46 + v47 + 28);
          v56 = (float)((float)(*(float *)(v46 + v47 + 8) * v51) + (float)(*(float *)(v46 + v47 + 20) * v52))
              + *(float *)(v46 + v47 + 32);
          v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v56) & _xmm);
          if ( v57 >= 0.000081380211 )
          {
            v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v56 - 1.0)) & _xmm);
            if ( v58 >= 0.000081380211 )
            {
              v54 = v54 / v56;
              v55 = v55 / v56;
            }
          }
          v59 = *(float *)(v45 + v53 + 4);
          v60 = *(float *)(v45 + v53);
          v61 = v60 * *(float *)(v46 + v47 + 4);
          v62 = (float)((float)(*(float *)(v46 + v47 + 20) * v59) + (float)(v60 * *(float *)(v46 + v47 + 8)))
              + *(float *)(v46 + v47 + 32);
          v63 = (float)((float)(v60 * *(float *)(v46 + v47)) + (float)(*(float *)(v46 + v47 + 12) * v59))
              + *(float *)(v46 + v47 + 24);
          v64 = (float)(v61 + (float)(*(float *)(v46 + v47 + 16) * v59)) + *(float *)(v46 + v47 + 28);
          v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v62) & _xmm);
          if ( v65 >= 0.000081380211 )
          {
            v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v62 - 1.0)) & _xmm);
            if ( v66 >= 0.000081380211 )
            {
              v63 = v63 / v62;
              v64 = v64 / v62;
            }
          }
          if ( v48 )
          {
            v70 = *(float *)(v46 + v47 + 44);
            v71 = *(float *)(v46 + v47 + 36);
            if ( v54 > v70 )
              v54 = *(float *)(v46 + v47 + 44);
            else
              v54 = fmaxf(v54, v71);
            v72 = *(float *)(v46 + v47 + 48);
            v73 = *(float *)(v46 + v47 + 40);
            if ( v55 > v72 )
              v55 = *(float *)(v46 + v47 + 48);
            else
              v55 = fmaxf(v55, v73);
            if ( v63 > v70 )
              v63 = *(float *)(v46 + v47 + 44);
            else
              v63 = fmaxf(v63, v71);
            if ( v64 > v72 )
              v64 = *(float *)(v46 + v47 + 48);
            else
              v64 = fmaxf(v64, v73);
          }
          *(float *)(v45 + v50) = v54;
          ++i;
          *(float *)(v45 + v50 + 4) = v55;
          *(float *)(v45 + v53) = v63;
        }
      }
      else
      {
        for ( j = 0; j < SLODWORD(v11); *(double *)(*(_QWORD *)v22 + v68 + v45) = DOUBLE_0_0 )
        {
          *(double *)(v45 + *(_DWORD *)(a4 + 8) * j + *(_QWORD *)a4) = DOUBLE_0_0;
          v68 = *(_DWORD *)(v22 + 8) * j++;
        }
      }
      ++v44;
      v45 += 8LL;
      v46 += 56LL;
    }
    while ( v44 < v23 );
    v18 = _mm_load_si128(&v93);
    v10 = a8;
  }
  if ( v10 )
  {
    v79 = 0;
    if ( v12 > 0 )
    {
      if ( (unsigned int)v12 < 0x20 )
      {
        v80 = a9;
      }
      else
      {
        v80 = a9;
        v81 = 0LL;
        v82 = a9 + 16;
        do
        {
          v83 = _mm_loadu_si128((const __m128i *)v82 - 2);
          v82 += 32;
          v79 += 32;
          v81 += 32LL;
          *((__m128i *)v82 - 6) = _mm_add_epi16(v83, v18);
          *((__m128i *)v82 - 5) = _mm_add_epi16(v18, _mm_loadu_si128((const __m128i *)v82 - 5));
          *((__m128i *)v82 - 4) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)v82 - 4), v18);
          *((__m128i *)v82 - 3) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)v82 - 3), v18);
        }
        while ( v81 < v12 - (v12 & 0x1F) );
      }
      if ( v79 < v12 )
      {
        v84 = &v80[v79];
        v85 = (unsigned int)(v12 - v79);
        do
        {
          *v84++ += v10;
          --v85;
        }
        while ( v85 );
      }
    }
  }
  result = 0LL;
  *a7 = v11;
  *a10 = v12;
  return result;
}
