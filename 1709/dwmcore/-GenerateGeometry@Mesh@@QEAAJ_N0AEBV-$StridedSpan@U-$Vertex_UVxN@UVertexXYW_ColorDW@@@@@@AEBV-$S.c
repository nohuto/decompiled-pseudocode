/*
 * XREFs of ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x180064ED0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z @ 0x180061CBC (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x180065720 (-GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x180065870 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180154700 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GenerateGeometry(
        Mesh *this,
        char a2,
        unsigned __int8 a3,
        __int64 *a4,
        __int64 a5,
        unsigned int a6,
        float *a7,
        __int16 a8,
        unsigned __int16 *a9,
        int *a10)
{
  __m128i v13; // xmm6
  float v14; // ebp
  char v15; // al
  int v16; // r13d
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int16 *v20; // r15
  __int64 v21; // rdi
  unsigned int v22; // r12d
  int v23; // r11d
  float *v24; // r8
  float v25; // xmm1_4
  float v26; // xmm0_4
  __int64 v27; // r10
  __int64 v28; // r9
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
  __int64 v40; // r9
  _QWORD *v41; // rdx
  __int64 v42; // r10
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // r14d
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  bool v49; // r15
  int i; // ecx
  __int64 v51; // r11
  float v52; // xmm1_4
  float v53; // xmm2_4
  __int64 v54; // r10
  float v55; // xmm5_4
  float v56; // xmm6_4
  float v57; // xmm7_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm0_4
  float v61; // xmm1_4
  float v62; // xmm8_4
  float v63; // xmm4_4
  float v64; // xmm3_4
  float v65; // xmm1_4
  float v66; // xmm2_4
  int j; // r8d
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int16 v71; // r8
  __int64 result; // rax
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm7_4
  float v76; // xmm2_4
  int v77; // edx
  unsigned __int16 *v78; // r9
  __int64 v79; // rcx
  unsigned __int16 *v80; // rax
  __m128i v81; // xmm0
  unsigned __int16 *v82; // rcx
  __int64 v83; // rdx
  int v84; // ecx
  float v85; // xmm0_4
  unsigned int v86; // ecx
  double v87; // xmm0_8
  float v88; // xmm1_4
  int inited; // edi
  int v90; // edx
  float v91; // [rsp+50h] [rbp-E8h] BYREF
  float v92; // [rsp+54h] [rbp-E4h]
  float v93; // [rsp+58h] [rbp-E0h]
  float v94; // [rsp+5Ch] [rbp-DCh]
  __m128i v95; // [rsp+60h] [rbp-D8h] BYREF
  int v96; // [rsp+140h] [rbp+8h] BYREF

  v91 = 0.0;
  v96 = 0;
  v13 = _mm_cvtsi32_si128(a8);
  v14 = 0.0;
  v15 = *((_BYTE *)this + 236);
  v16 = 0;
  v17 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v13, v13), 0);
  v95 = v17;
  if ( (v15 & 1) == 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0xF9Au);
    return 2147500037LL;
  }
  if ( a2 )
  {
    v18 = *((_QWORD *)this + 23);
    if ( v18 && (v15 & 0x18) == 0 )
    {
      v19 = *(int *)(v18 + 128);
      v20 = a9;
      if ( (int)v19 > 0 )
      {
        memcpy_0(a9, *(const void **)(v18 + 112), 2 * v19);
        v16 = *(_DWORD *)(*((_QWORD *)this + 23) + 128LL);
        v96 = v16;
      }
      goto LABEL_7;
    }
    inited = Mesh::InitMeshGraph(this);
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0xFC1u);
      return (unsigned int)inited;
    }
    v20 = a9;
    v90 = *(_DWORD *)(*((_QWORD *)this + 22) + 100LL)
        + 2 * (*(_DWORD *)(*((_QWORD *)this + 22) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 22) + 104LL));
    if ( v90 > 0 )
    {
      inited = Mesh::GenerateTriangles(this, a9, 3 * v90, &v96);
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0xFC9u);
        return (unsigned int)inited;
      }
      v16 = v96;
    }
  }
  else
  {
    v20 = a9;
  }
LABEL_7:
  v21 = a5;
  v22 = a6;
  if ( *((int *)this + 42) > 0 )
  {
    v23 = 0;
    do
    {
      v24 = (float *)(*((_QWORD *)this + 19) + v23 * *((_DWORD *)this + 40));
      v25 = *((float *)this + 50) + *v24;
      v26 = v24[1] + *((float *)this + 51);
      v27 = *a4 + v23 * *((_DWORD *)a4 + 2);
      v28 = *(_QWORD *)v21 + v23 * *(_DWORD *)(v21 + 8);
      *(float *)v28 = v25;
      *(float *)(v28 + 4) = v26;
      *(float *)v27 = v25;
      *(float *)(v27 + 4) = v26;
      *(_DWORD *)(v27 + 8) = 1065353216;
      *(_DWORD *)(v28 + 8) = 0;
      *(_DWORD *)(v28 + 12) = 1065353216;
      v29 = v24[4] * 255.0;
      v30 = (float)(v24[5] * 255.0) + 6291456.25;
      v31 = v24[3] * 255.0;
      if ( *((char *)this + 236) < 0 )
      {
        v91 = (float)(v24[5] * 255.0) + 6291456.25;
        v84 = LODWORD(v30) << 23;
        v85 = v29 + 6291456.25;
        v92 = v85;
        v86 = (LODWORD(v85) << 15) | v84 & 0xFF00FFFF;
        v87 = v31;
        v88 = v24[2];
        *(float *)&v87 = v87 + 6291456.25;
        v93 = *(float *)&v87;
        v37 = ((int)(LODWORD(v87) << 10) >> 3) | v86 & 0xFFFF00FF;
        v38 = (float)(v88 * 255.0) + 6291456.25;
        v94 = v38;
      }
      else
      {
        v94 = (float)(v24[5] * 255.0) + 6291456.25;
        v32 = LODWORD(v30) << 23;
        v33 = v29 + 6291456.25;
        v93 = v33;
        v34 = (LODWORD(v33) << 15) | v32 & 0xFF00FFFF;
        v35 = v31;
        v36 = v24[2];
        *(float *)&v35 = v35 + 6291456.25;
        v92 = *(float *)&v35;
        v37 = ((int)(LODWORD(v35) << 10) >> 3) | v34 & 0xFFFF00FF;
        v38 = (float)(v36 * 255.0) + 6291456.25;
        v91 = v38;
      }
      *(_DWORD *)(v27 + 12) = ((int)(LODWORD(v38) << 10) >> 11) | v37 & 0xFFFFFF00;
      v39 = *((_DWORD *)this + 6);
      if ( v22 < v39 )
        v39 = v22;
      if ( v39 )
      {
        v40 = v28 - (_QWORD)v24;
        v41 = v24 + 7;
        v42 = v27 - (_QWORD)v24;
        v43 = 0LL;
        v44 = v39;
        do
        {
          if ( *(_BYTE *)(v43 + *(_QWORD *)this + 52) )
          {
            *(_QWORD *)((char *)v41 + v40 - 12) = *v41;
            *(_QWORD *)((char *)v41 + v42 - 12) = *v41;
          }
          v43 += 56LL;
          ++v41;
          --v44;
        }
        while ( v44 );
      }
      ++v23;
    }
    while ( v23 < *((_DWORD *)this + 42) );
    v14 = *((float *)this + 42);
    v91 = v14;
  }
  if ( (*((_BYTE *)this + 236) & 0x40) != 0 )
  {
    Mesh::GenerateAntialiasBorder(
      (_DWORD)this,
      a3,
      *((_BYTE *)this + 237) & 1,
      (_DWORD)a4,
      v21,
      v22,
      (__int64)&v91,
      (__int64)v20);
    v14 = v91;
    v16 = v96;
  }
  v45 = 0;
  if ( v22 )
  {
    v46 = 0LL;
    v47 = 16LL;
    do
    {
      if ( v45 < *((_DWORD *)this + 6) && (v48 = *(_QWORD *)this, *(_BYTE *)(v46 + *(_QWORD *)this + 52)) )
      {
        v49 = *(float *)(v46 + v48 + 36) != 0.0
           || *(float *)(v46 + v48 + 40) != 0.0
           || *(float *)(v46 + v48 + 44) != 1.0
           || *(float *)(v46 + v48 + 48) != 1.0;
        for ( i = 0; i < SLODWORD(v14); *(float *)(v47 + v54 + 4) = v64 )
        {
          v51 = *a4 + i * *((_DWORD *)a4 + 2);
          v52 = *(float *)(v47 + v51);
          v53 = *(float *)(v47 + v51 + 4);
          v54 = *(_QWORD *)v21 + i * *(_DWORD *)(v21 + 8);
          v55 = (float)((float)(*(float *)(v46 + v48) * v52) + (float)(*(float *)(v46 + v48 + 12) * v53))
              + *(float *)(v46 + v48 + 24);
          v56 = (float)((float)(*(float *)(v46 + v48 + 4) * v52) + (float)(*(float *)(v46 + v48 + 16) * v53))
              + *(float *)(v46 + v48 + 28);
          v57 = (float)((float)(*(float *)(v46 + v48 + 8) * v52) + (float)(*(float *)(v46 + v48 + 20) * v53))
              + *(float *)(v46 + v48 + 32);
          v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v57) & _xmm);
          if ( v58 >= 0.000081380211 )
          {
            v59 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v57 - 1.0)) & _xmm);
            if ( v59 >= 0.000081380211 )
            {
              v55 = v55 / v57;
              v56 = v56 / v57;
            }
          }
          v60 = *(float *)(v47 + v54);
          v61 = *(float *)(v47 + v54 + 4);
          v62 = (float)((float)(*(float *)(v46 + v48 + 8) * v60) + (float)(*(float *)(v46 + v48 + 20) * v61))
              + *(float *)(v46 + v48 + 32);
          v63 = (float)((float)(*(float *)(v46 + v48) * v60) + (float)(*(float *)(v46 + v48 + 12) * v61))
              + *(float *)(v46 + v48 + 24);
          v64 = (float)((float)(*(float *)(v46 + v48 + 4) * v60) + (float)(*(float *)(v46 + v48 + 16) * v61))
              + *(float *)(v46 + v48 + 28);
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
          if ( v49 )
          {
            v73 = *(float *)(v46 + v48 + 44);
            v74 = *(float *)(v46 + v48 + 36);
            if ( v55 > v73 )
              v55 = *(float *)(v46 + v48 + 44);
            else
              v55 = fmaxf(v55, v74);
            v75 = *(float *)(v46 + v48 + 48);
            v76 = *(float *)(v46 + v48 + 40);
            if ( v56 > v75 )
              v56 = *(float *)(v46 + v48 + 48);
            else
              v56 = fmaxf(v56, v76);
            if ( v63 > v73 )
              v63 = *(float *)(v46 + v48 + 44);
            else
              v63 = fmaxf(v63, v74);
            if ( v64 > v75 )
              v64 = *(float *)(v46 + v48 + 48);
            else
              v64 = fmaxf(v64, v76);
          }
          *(float *)(v47 + v51) = v55;
          ++i;
          *(float *)(v47 + v51 + 4) = v56;
          *(float *)(v47 + v54) = v63;
        }
      }
      else
      {
        for ( j = 0; j < SLODWORD(v14); *(_DWORD *)(v70 + v47 + 4) = HIDWORD(DOUBLE_0_0) )
        {
          v68 = *a4;
          v69 = v47 + j * *((_DWORD *)a4 + 2);
          *(_DWORD *)(v69 + v68) = 0;
          *(_DWORD *)(v69 + v68 + 4) = HIDWORD(DOUBLE_0_0);
          LODWORD(v68) = j * *(_DWORD *)(v21 + 8);
          ++j;
          v70 = *(_QWORD *)v21 + (int)v68;
          *(_DWORD *)(v70 + v47) = 0;
        }
      }
      ++v45;
      v47 += 8LL;
      v46 += 56LL;
    }
    while ( v45 < v22 );
    v17 = _mm_load_si128(&v95);
  }
  v71 = a8;
  if ( a8 )
  {
    v77 = 0;
    if ( v16 > 0 )
    {
      if ( (unsigned int)v16 < 0x20 )
      {
        v78 = a9;
      }
      else
      {
        v78 = a9;
        v79 = 0LL;
        v80 = a9 + 16;
        do
        {
          v81 = _mm_loadu_si128((const __m128i *)v80 - 2);
          v80 += 32;
          v77 += 32;
          v79 += 32LL;
          *((__m128i *)v80 - 6) = _mm_add_epi16(v81, v17);
          *((__m128i *)v80 - 5) = _mm_add_epi16(v17, _mm_loadu_si128((const __m128i *)v80 - 5));
          *((__m128i *)v80 - 4) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)v80 - 4), v17);
          *((__m128i *)v80 - 3) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)v80 - 3), v17);
        }
        while ( v79 < v16 - (v16 & 0x1F) );
        v71 = a8;
      }
      if ( v77 < v16 )
      {
        v82 = &v78[v77];
        v83 = (unsigned int)(v16 - v77);
        do
        {
          *v82++ += v71;
          --v83;
        }
        while ( v83 );
      }
    }
  }
  result = 0LL;
  *a7 = v14;
  *a10 = v16;
  return result;
}
