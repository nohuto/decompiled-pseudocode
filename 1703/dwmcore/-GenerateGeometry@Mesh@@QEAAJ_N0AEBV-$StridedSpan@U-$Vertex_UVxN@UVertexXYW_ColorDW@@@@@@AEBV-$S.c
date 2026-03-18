/*
 * XREFs of ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x18003D250
 * Callers:
 *     ?AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z @ 0x18004009C (-AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x18003B754 (-GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x18003B8AC (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18015E560 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GenerateGeometry(
        Mesh *this,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        __int16 a8,
        unsigned __int16 *a9,
        int *a10)
{
  __int16 v10; // r13
  int v11; // edi
  __m128i v15; // xmm6
  char v16; // al
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r15d
  int v22; // r11d
  __m128 v23; // xmm0
  __int64 v24; // r8
  __m128 v25; // xmm1
  __int64 v26; // r9
  __int64 v27; // r10
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  int v31; // ecx
  float v32; // xmm0_4
  unsigned int v33; // ecx
  double v34; // xmm0_8
  float v35; // xmm1_4
  unsigned int v36; // ecx
  float v37; // xmm0_4
  unsigned int v38; // eax
  __int64 v39; // r10
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  unsigned int v44; // r10d
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  bool v48; // r13
  int i; // r9d
  float v50; // xmm13_4
  float v51; // xmm3_4
  float v52; // xmm14_4
  float v53; // xmm4_4
  float v54; // xmm15_4
  float v55; // xmm5_4
  __int64 v56; // r12
  __int64 v57; // r11
  float v58; // xmm7_4
  float v59; // xmm8_4
  float v60; // xmm6_4
  float v61; // xmm1_4
  float v62; // xmm2_4
  float v63; // xmm5_4
  float v64; // xmm3_4
  float v65; // xmm4_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  unsigned __int64 v68; // xmm1_8
  int j; // r9d
  int v70; // eax
  int v71; // r8d
  __int64 result; // rax
  float v73; // xmm1_4
  float v74; // xmm7_4
  float v75; // xmm0_4
  float v76; // xmm8_4
  int v77; // ecx
  float v78; // xmm0_4
  unsigned int v79; // ecx
  double v80; // xmm0_8
  float v81; // xmm1_4
  int v82; // edx
  unsigned __int16 *v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned __int16 *v86; // rcx
  __int64 v87; // rdx
  int inited; // esi
  int v89; // edx
  int v90; // [rsp+48h] [rbp-C0h]
  __int64 v91; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v92; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v93; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v94; // [rsp+70h] [rbp-98h]
  __m128i v95; // [rsp+78h] [rbp-90h] BYREF
  int v96; // [rsp+158h] [rbp+50h] BYREF

  v10 = a8;
  v11 = 0;
  LODWORD(v91) = 0;
  v96 = 0;
  v15 = _mm_cvtsi32_si128(a8);
  v16 = *((_BYTE *)this + 236);
  v17 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v15, v15), 0);
  v95 = v17;
  if ( (v16 & 1) == 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xF9Au);
    return 2147500037LL;
  }
  if ( !a2 )
    goto LABEL_7;
  v18 = *((_QWORD *)this + 23);
  if ( v18 && (v16 & 0x18) == 0 )
  {
    v19 = *(int *)(v18 + 128);
    if ( (int)v19 > 0 )
    {
      memcpy_0(a9, *(const void **)(v18 + 112), 2 * v19);
      v96 = *(_DWORD *)(*((_QWORD *)this + 23) + 128LL);
    }
    goto LABEL_7;
  }
  inited = Mesh::InitMeshGraph(this);
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0xFC1u);
    return (unsigned int)inited;
  }
  v89 = *(_DWORD *)(*((_QWORD *)this + 22) + 100LL)
      + 2 * (*(_DWORD *)(*((_QWORD *)this + 22) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 22) + 104LL));
  if ( v89 > 0 )
  {
    inited = Mesh::GenerateTriangles(this, a9, 3 * v89, &v96);
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0xFC9u);
      return (unsigned int)inited;
    }
  }
LABEL_7:
  v20 = a5;
  v21 = a6;
  if ( *((int *)this + 42) > 0 )
  {
    v22 = 0;
    do
    {
      v23 = (__m128)*((unsigned int *)this + 50);
      v24 = *((_QWORD *)this + 19) + v22 * *((_DWORD *)this + 40);
      v23.m128_f32[0] = v23.m128_f32[0] + *(float *)v24;
      v25 = (__m128)*(unsigned int *)(v24 + 4);
      v25.m128_f32[0] = v25.m128_f32[0] + *((float *)this + 51);
      v26 = *(_QWORD *)a4 + v22 * *(_DWORD *)(a4 + 8);
      v23.m128_u64[0] = _mm_unpacklo_ps(v23, v25).m128_u64[0];
      v27 = *(_QWORD *)v20 + v22 * *(_DWORD *)(v20 + 8);
      *(_QWORD *)v27 = v23.m128_u64[0];
      *(_QWORD *)v26 = v23.m128_u64[0];
      *(_DWORD *)(v26 + 8) = 1065353216;
      *(_DWORD *)(v27 + 8) = 0;
      *(_DWORD *)(v27 + 12) = 1065353216;
      v28 = *(float *)(v24 + 16) * 255.0;
      v29 = (float)(*(float *)(v24 + 20) * 255.0) + 6291456.25;
      v30 = *(float *)(v24 + 12) * 255.0;
      if ( *((_BYTE *)this + 236) >= 0x80u )
      {
        *(float *)&v91 = (float)(*(float *)(v24 + 20) * 255.0) + 6291456.25;
        v77 = LODWORD(v29) << 23;
        v78 = v28 + 6291456.25;
        *(float *)&v92 = v78;
        v79 = (LODWORD(v78) << 15) | v77 & 0xFF00FFFF;
        v80 = v30;
        v81 = *(float *)(v24 + 8);
        *(float *)&v80 = v80 + 6291456.25;
        LODWORD(v93) = LODWORD(v80);
        v36 = ((int)(LODWORD(v80) << 10) >> 3) | v79 & 0xFFFF00FF;
        v37 = (float)(v81 * 255.0) + 6291456.25;
        *(float *)&v94 = v37;
      }
      else
      {
        *(float *)&v94 = (float)(*(float *)(v24 + 20) * 255.0) + 6291456.25;
        v31 = LODWORD(v29) << 23;
        v32 = v28 + 6291456.25;
        *(float *)&v93 = v32;
        v33 = (LODWORD(v32) << 15) | v31 & 0xFF00FFFF;
        v34 = v30;
        v35 = *(float *)(v24 + 8);
        *(float *)&v34 = v34 + 6291456.25;
        LODWORD(v92) = LODWORD(v34);
        v36 = ((int)(LODWORD(v34) << 10) >> 3) | v33 & 0xFFFF00FF;
        v37 = (float)(v35 * 255.0) + 6291456.25;
        *(float *)&v91 = v37;
      }
      *(_DWORD *)(v26 + 12) = ((int)(LODWORD(v37) << 10) >> 11) | v36 & 0xFFFFFF00;
      v38 = *((_DWORD *)this + 6);
      if ( v21 < v38 )
        v38 = v21;
      if ( v38 )
      {
        v39 = v27 - v24;
        v40 = (_QWORD *)(v24 + 28);
        v41 = 0LL;
        v42 = v26 - v24;
        v43 = v38;
        do
        {
          if ( *(_BYTE *)(v41 + *(_QWORD *)this + 52) )
          {
            *(_QWORD *)((char *)v40 + v39 - 12) = *v40;
            *(_QWORD *)((char *)v40 + v42 - 12) = *v40;
          }
          v41 += 56LL;
          ++v40;
          --v43;
        }
        while ( v43 );
      }
      ++v22;
    }
    while ( v22 < *((_DWORD *)this + 42) );
    v11 = *((_DWORD *)this + 42);
    LODWORD(v91) = v11;
  }
  if ( (*((_BYTE *)this + 236) & 0x40) != 0 )
  {
    Mesh::GenerateAntialiasBorder(
      (__int64)this,
      a3,
      *((_BYTE *)this + 237) & 1,
      (__int64 *)a4,
      v20,
      v21,
      (int *)&v91,
      (__int64)a9,
      v90,
      &v96);
    v11 = v91;
  }
  v44 = 0;
  if ( v21 )
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
        for ( i = 0; i < v11; *(_QWORD *)(v57 + v45) = v68 )
        {
          v50 = *(float *)(v46 + v47 + 12);
          v51 = *(float *)(v46 + v47);
          v52 = *(float *)(v46 + v47 + 16);
          v53 = *(float *)(v46 + v47 + 4);
          v54 = *(float *)(v46 + v47 + 20);
          v55 = *(float *)(v46 + v47 + 8);
          v56 = *(_QWORD *)a4 + i * *(_DWORD *)(a4 + 8);
          v57 = *(_QWORD *)v20 + i * *(_DWORD *)(v20 + 8);
          v92 = *(_QWORD *)(v56 + v45);
          v58 = (float)((float)(v51 * *(float *)&v92) + (float)(v50 * *((float *)&v92 + 1)))
              + *(float *)(v46 + v47 + 24);
          v59 = (float)((float)(v53 * *(float *)&v92) + (float)(v52 * *((float *)&v92 + 1)))
              + *(float *)(v46 + v47 + 28);
          v60 = (float)((float)(v55 * *(float *)&v92) + (float)(v54 * *((float *)&v92 + 1)))
              + *(float *)(v46 + v47 + 32);
          v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v60) & _xmm);
          if ( v61 >= 0.00012207031 )
          {
            v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v60 - 1.0)) & _xmm);
            if ( v62 >= 0.00012207031 )
            {
              v58 = v58 / v60;
              v59 = v59 / v60;
            }
          }
          v92 = *(_QWORD *)(v57 + v45);
          v94 = __PAIR64__(LODWORD(v59), LODWORD(v58));
          v63 = (float)((float)(v55 * *(float *)&v92) + (float)(v54 * *((float *)&v92 + 1)))
              + *(float *)(v46 + v47 + 32);
          v64 = (float)((float)(v51 * *(float *)&v92) + (float)(v50 * *((float *)&v92 + 1)))
              + *(float *)(v46 + v47 + 24);
          v65 = (float)((float)(v53 * *(float *)&v92) + (float)(v52 * *((float *)&v92 + 1)))
              + *(float *)(v46 + v47 + 28);
          v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v63) & _xmm);
          if ( v66 >= 0.00012207031 )
          {
            v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v63 - 1.0)) & _xmm);
            if ( v67 >= 0.00012207031 )
            {
              v64 = v64 / v63;
              v65 = v65 / v63;
            }
          }
          v93 = __PAIR64__(LODWORD(v65), LODWORD(v64));
          if ( v48 )
          {
            v73 = *(float *)(v46 + v47 + 44);
            if ( v58 > v73 )
              v74 = *(float *)(v46 + v47 + 44);
            else
              v74 = fmaxf(v58, *(float *)(v46 + v47 + 36));
            v75 = *(float *)(v46 + v47 + 48);
            *(float *)&v94 = v74;
            if ( v59 > v75 )
              v76 = v75;
            else
              v76 = fmaxf(v59, *(float *)(v46 + v47 + 40));
            *((float *)&v94 + 1) = v76;
            if ( v64 <= v73 )
              v73 = fmaxf(v64, *(float *)(v46 + v47 + 36));
            *(float *)&v93 = v73;
            if ( v65 <= v75 )
              v75 = fmaxf(v65, *(float *)(v46 + v47 + 40));
            *((float *)&v93 + 1) = v75;
          }
          ++i;
          v68 = v93;
          *(_QWORD *)(v56 + v45) = v94;
        }
      }
      else
      {
        for ( j = 0; j < v11; *(double *)(*(_QWORD *)v20 + v70 + v45) = DOUBLE_0_0 )
        {
          *(double *)(v45 + j * *(_DWORD *)(a4 + 8) + *(_QWORD *)a4) = DOUBLE_0_0;
          v70 = j * *(_DWORD *)(v20 + 8);
          ++j;
        }
      }
      ++v44;
      v45 += 8LL;
      v46 += 56LL;
    }
    while ( v44 < v21 );
    v17 = _mm_load_si128(&v95);
    v10 = a8;
  }
  v71 = v96;
  if ( v10 )
  {
    v82 = 0;
    if ( v96 > 0 )
    {
      if ( (unsigned int)v96 < 0x10 )
      {
        v83 = a9;
      }
      else
      {
        v83 = a9;
        v84 = v96 - (v96 & 0xF);
        v85 = 0LL;
        do
        {
          v82 += 16;
          *(__m128i *)&v83[v85] = _mm_add_epi16(_mm_loadu_si128((const __m128i *)&v83[v85]), v17);
          *(__m128i *)&v83[v85 + 8] = _mm_add_epi16(v17, _mm_loadu_si128((const __m128i *)&v83[v85 + 8]));
          v85 += 16LL;
        }
        while ( v85 < v84 );
      }
      if ( v82 < v71 )
      {
        v86 = &v83[v82];
        v87 = (unsigned int)(v71 - v82);
        do
        {
          *v86++ += v10;
          --v87;
        }
        while ( v87 );
      }
    }
  }
  result = 0LL;
  *a7 = v11;
  *a10 = v71;
  return result;
}
