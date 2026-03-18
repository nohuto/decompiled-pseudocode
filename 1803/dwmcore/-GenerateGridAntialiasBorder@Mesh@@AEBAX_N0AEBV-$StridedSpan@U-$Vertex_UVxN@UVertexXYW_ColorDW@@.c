/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x1800AFBA0
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x1800B06FC (-GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall Mesh::GenerateGridAntialiasBorder(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        unsigned int *a10)
{
  __int64 v10; // r15
  __int64 v11; // rdi
  int v12; // r12d
  __int64 *v14; // rsi
  int v15; // r14d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // ecx
  char *v19; // r8
  char *v20; // r10
  char *v21; // r11
  char *v22; // rbx
  _DWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // zf
  int v27; // r9d
  int v28; // edi
  int v29; // r8d
  int v30; // r12d
  __int64 v31; // rcx
  int v32; // edx
  int v33; // r14d
  unsigned __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // r15
  unsigned __int64 v37; // r12
  int v38; // r8d
  unsigned __int64 v39; // r13
  __int64 v40; // r9
  unsigned __int64 v41; // rbx
  int v42; // edi
  int v43; // edx
  __int64 v44; // rsi
  __int64 v45; // r14
  __int64 v46; // r12
  bool v47; // cl
  int v48; // r14d
  int v49; // r15d
  __int64 v50; // rdi
  __int64 v51; // rsi
  float v52; // xmm2_4
  unsigned __int64 v53; // rbx
  float *v54; // r10
  float *v55; // rcx
  float v56; // xmm0_4
  unsigned __int64 v57; // rax
  signed __int64 v58; // r9
  unsigned __int64 v59; // r8
  float *v60; // rdx
  int v61; // eax
  char v62; // dl
  float *v63; // rcx
  float *v64; // rax
  float v65; // xmm2_4
  float v66; // xmm0_4
  unsigned __int64 v67; // r8
  signed __int64 v68; // r11
  unsigned __int64 v69; // r9
  float *v70; // r10
  int v71; // r9d
  int v72; // r8d
  unsigned int v73; // edx
  __int64 v74; // r10
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  unsigned int v78; // r11d
  __int64 v79; // r15
  __int64 v80; // rbx
  _DWORD *v81; // rcx
  int v82; // eax
  char v83; // r9
  int v84; // r12d
  __int64 v85; // r15
  int v86; // r14d
  __int64 v87; // r13
  float v88; // xmm2_4
  unsigned __int64 v89; // rsi
  unsigned __int64 v90; // rcx
  float *v91; // r8
  float *v92; // rdx
  float v93; // xmm0_4
  unsigned __int64 v94; // r10
  signed __int64 v95; // r11
  unsigned __int64 v96; // rax
  float *v97; // r9
  unsigned int v98; // r14d
  __int64 v99; // r9
  int v100; // r11d
  __int16 v101; // cx
  int v102; // r10d
  int v103; // ebx
  int v104; // esi
  int v105; // r15d
  __int64 *v106; // r14
  unsigned __int16 *v107; // r8
  __int64 v108; // r12
  unsigned __int16 v109; // di
  unsigned __int16 v110; // r13
  unsigned __int16 v111; // dx
  __int64 v112; // rcx
  __int64 result; // rax
  float v114; // xmm0_4
  unsigned __int64 v115; // rax
  signed __int64 v116; // r9
  unsigned __int64 v117; // r8
  float *v118; // rdx
  float v119; // xmm0_4
  unsigned __int64 v120; // r8
  signed __int64 v121; // r11
  unsigned __int64 v122; // r9
  float *v123; // r10
  float v124; // xmm0_4
  unsigned __int64 v125; // r10
  signed __int64 v126; // r11
  unsigned __int64 v127; // rax
  float *v128; // r9
  int v129; // edx
  __int64 v130; // r8
  __int64 v131; // rcx
  int v132; // [rsp+28h] [rbp-E0h]
  unsigned int v133; // [rsp+2Ch] [rbp-DCh]
  int v134; // [rsp+30h] [rbp-D8h]
  int v135; // [rsp+34h] [rbp-D4h]
  unsigned int v136; // [rsp+38h] [rbp-D0h]
  int v137; // [rsp+3Ch] [rbp-CCh]
  int v138; // [rsp+40h] [rbp-C8h]
  int v139; // [rsp+44h] [rbp-C4h]
  int v140; // [rsp+48h] [rbp-C0h]
  int v141; // [rsp+4Ch] [rbp-BCh]
  __int64 v142; // [rsp+50h] [rbp-B8h]
  __int64 v143; // [rsp+58h] [rbp-B0h]
  __int64 *v144; // [rsp+60h] [rbp-A8h]
  __int64 v145; // [rsp+68h] [rbp-A0h]
  __int64 v146; // [rsp+70h] [rbp-98h]
  __int64 v147; // [rsp+78h] [rbp-90h]
  _DWORD *v148; // [rsp+80h] [rbp-88h]
  char *v149; // [rsp+88h] [rbp-80h]
  unsigned __int64 v150; // [rsp+90h] [rbp-78h]
  __int64 v151; // [rsp+98h] [rbp-70h]
  _DWORD *v152; // [rsp+A0h] [rbp-68h]
  unsigned int *v153; // [rsp+A8h] [rbp-60h]
  char *v154; // [rsp+B0h] [rbp-58h]
  char *v155; // [rsp+B8h] [rbp-50h]
  char *v156; // [rsp+C0h] [rbp-48h]
  __int64 v157; // [rsp+C8h] [rbp-40h]
  _DWORD v158[4]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v159[4]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v160[4]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v161[4]; // [rsp+100h] [rbp-8h] BYREF

  v10 = a1;
  v11 = a5;
  v12 = 0;
  v14 = a4;
  v157 = a8;
  v153 = a10;
  v145 = a1;
  v136 = *a10;
  v152 = a7;
  v15 = *a7;
  v16 = *(_DWORD *)(a1 + 208);
  LOBYTE(v134) = a2;
  v17 = *(_DWORD *)(v10 + 212);
  v144 = a4;
  v143 = a5;
  v137 = v15;
  LODWORD(v142) = v15;
  v140 = 0;
  v135 = 65537;
  v158[0] = v17 * (v16 - 1);
  v158[2] = v17 - 1;
  v132 = 257;
  v160[0] = v16;
  v160[1] = v17;
  v160[2] = v16;
  v160[3] = v17;
  v158[3] = v16 * v17 - 1;
  v158[1] = 0;
  v159[0] = -v17;
  v159[1] = 1;
  v159[2] = v17;
  v159[3] = -1;
  if ( !a2 )
    goto LABEL_54;
  v18 = 0;
  v19 = (char *)v160 - v10;
  v133 = 0;
  v154 = (char *)v160 - v10;
  v20 = (char *)v161 - v10;
  v21 = (char *)v158 - v10;
  v155 = (char *)v161 - v10;
  v156 = (char *)v158 - v10;
  v22 = (char *)v159 - v10;
  v23 = (_DWORD *)(v10 + 220);
  v24 = 0LL;
  v148 = (_DWORD *)(v10 + 220);
  v146 = 0LL;
  v149 = (char *)v159 - v10;
  do
  {
    if ( v18 )
      v25 = v24 - 1;
    else
      v25 = 3LL;
    v26 = *v23 == 12;
    v151 = v25;
    if ( v26 )
    {
      v27 = *(_DWORD *)((char *)v23 + (_QWORD)v19 - 220) - 1;
      v141 = v27;
      if ( v27 <= 0 )
        goto LABEL_42;
    }
    else
    {
      if ( *(_DWORD *)(v10 + 4 * v25 + 220) != 12 )
        goto LABEL_42;
      v27 = 1;
      v141 = 1;
    }
    v28 = *((_DWORD *)v14 + 2);
    v29 = v12 + v15;
    v30 = *(_DWORD *)((char *)v23 + (_QWORD)v21 - 220);
    v31 = *v14;
    *(_DWORD *)((char *)v23 + (_QWORD)v20 - 220) = v29;
    v32 = *(_DWORD *)((char *)v23 + (_QWORD)v22 - 220);
    v33 = v28 * v32;
    v34 = 0LL;
    v35 = v31 + v28 * v30;
    v139 = v29;
    LODWORD(v147) = v30;
    v138 = v32;
    v150 = (unsigned int)v27;
    v36 = v31 + v28 * v29;
    v37 = (unsigned int)v27;
    do
    {
      memcpy_0((void *)(v36 + v28 * (int)v34), (const void *)(v35 + v33 * (int)v34), (unsigned int)(8 * a6 + 16));
      ++v34;
    }
    while ( v34 < v37 );
    v38 = v139;
    v39 = v150;
    v40 = v143;
    v41 = 0LL;
    v42 = *(_DWORD *)(v143 + 8);
    v43 = v42 * v138;
    v44 = *(_QWORD *)v143 + v42 * (int)v147;
    v45 = *(_QWORD *)v143 + v42 * v139;
    v138 *= v42;
    if ( v150 )
    {
      do
      {
        memcpy_0((void *)(v45 + v42 * (int)v41), (const void *)(v44 + v43 * (int)v41), (unsigned int)(8 * a6 + 16));
        v43 = v138;
        ++v41;
      }
      while ( v41 < v39 );
      v38 = v139;
      v40 = v143;
    }
    if ( (*v148 & 0xC) != 0 )
    {
      v46 = v146;
      v47 = (*v148 & 8) != 0 ? *((_BYTE *)&v132 + v146) == 0 : *((_BYTE *)&v132 + v146);
      v48 = *(_DWORD *)(v40 + 8);
      v49 = *((_DWORD *)v144 + 2);
      v50 = *(_QWORD *)v40 + v48 * v38;
      v51 = *v144 + v49 * v38;
      v52 = v47 ? FLOAT_0_5 : FLOAT_N0_5;
      v53 = 0LL;
      if ( v39 )
      {
        do
        {
          v54 = (float *)(v51 + v49 * (int)v53);
          v55 = (float *)(v50 + v48 * (int)v53);
          if ( *((_BYTE *)&v135 + v46) )
          {
            *v54 = v52 + *v55;
            if ( v54[1] == v55[1] )
              v56 = FLOAT_0_5;
            else
              v56 = FLOAT_0_70710677;
            v57 = 0LL;
            v55[2] = v56;
            if ( (unsigned __int64)a6 >= 2 )
            {
              v58 = (char *)v55 - (char *)v54;
              v59 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
              v60 = v54 + 4;
              v57 = 2 * v59;
              do
              {
                *v60 = v52 + *(float *)((char *)v60 + v58);
                v60[2] = v52 + *(float *)((char *)v60 + v58 + 8);
                v60 += 4;
                --v59;
              }
              while ( v59 );
            }
            if ( v57 < a6 )
              v54[2 * v57 + 4] = v52 + v55[2 * v57 + 4];
          }
          else
          {
            v54[1] = v52 + v55[1];
            if ( *v54 == *v55 )
              v114 = FLOAT_0_5;
            else
              v114 = FLOAT_0_70710677;
            v115 = 0LL;
            v55[2] = v114;
            if ( (unsigned __int64)a6 >= 2 )
            {
              v116 = (char *)v55 - (char *)v54;
              v117 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
              v118 = v54 + 5;
              v115 = 2 * v117;
              do
              {
                *v118 = v52 + *(float *)((char *)v118 + v116);
                v118[2] = v52 + *(float *)((char *)v118 + v116 + 8);
                v118 += 4;
                --v117;
              }
              while ( v117 );
            }
            if ( v115 < a6 )
              v54[2 * v115 + 5] = v52 + v55[2 * v115 + 5];
          }
          ++v53;
        }
        while ( v53 < v39 );
        v38 = v139;
      }
    }
    v10 = v145;
    v61 = *(_DWORD *)(v145 + 4 * v151 + 220);
    if ( (v61 & 0xC) != 0 )
    {
      if ( (v61 & 8) != 0 )
        v62 = *((_BYTE *)&v132 + v151) == 0;
      else
        v62 = *((_BYTE *)&v132 + v151);
      v11 = v143;
      v14 = v144;
      v63 = (float *)(*(_QWORD *)v143 + *(_DWORD *)(v143 + 8) * v38);
      v64 = (float *)(*v144 + *((_DWORD *)v144 + 2) * v38);
      if ( v62 )
        v65 = FLOAT_0_5;
      else
        v65 = FLOAT_N0_5;
      if ( *((_BYTE *)&v135 + v151) )
      {
        *v64 = v65 + *v63;
        if ( v64[1] == v63[1] )
          v66 = FLOAT_0_5;
        else
          v66 = FLOAT_0_70710677;
        v67 = 0LL;
        v63[2] = v66;
        if ( (unsigned __int64)a6 >= 2 )
        {
          v68 = (char *)v63 - (char *)v64;
          v69 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
          v70 = v64 + 4;
          v67 = 2 * v69;
          do
          {
            *v70 = v65 + *(float *)((char *)v70 + v68);
            v70[2] = v65 + *(float *)((char *)v70 + v68 + 8);
            v70 += 4;
            --v69;
          }
          while ( v69 );
        }
        if ( v67 < a6 )
          v64[2 * v67 + 4] = v65 + v63[2 * v67 + 4];
      }
      else
      {
        v64[1] = v65 + v63[1];
        if ( *v64 == *v63 )
          v119 = FLOAT_0_5;
        else
          v119 = FLOAT_0_70710677;
        v120 = 0LL;
        v63[2] = v119;
        if ( (unsigned __int64)a6 >= 2 )
        {
          v121 = (char *)v63 - (char *)v64;
          v122 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
          v123 = v64 + 5;
          v120 = 2 * v122;
          do
          {
            *v123 = v65 + *(float *)((char *)v123 + v121);
            v123[2] = v65 + *(float *)((char *)v123 + v121 + 8);
            v123 += 4;
            --v122;
          }
          while ( v122 );
        }
        if ( v120 < a6 )
          v64[2 * v120 + 5] = v65 + v63[2 * v120 + 5];
      }
    }
    else
    {
      v11 = v143;
      v14 = v144;
    }
    v12 = v141 + v140;
    v23 = v148;
    v18 = v133;
    v19 = v154;
    v20 = v155;
    v21 = v156;
    v22 = v149;
    v15 = v137;
    v140 += v141;
LABEL_42:
    ++v18;
    v24 = v146 + 1;
    v133 = v18;
    ++v23;
    ++v146;
    v148 = v23;
  }
  while ( v18 < 4 );
  v71 = 0;
  if ( v12 >= 3 )
  {
    v72 = v15 + 1;
    v73 = (v12 - 3) / 3u + 1;
    v74 = v73;
    v71 = 3 * v73;
    do
    {
      *(_DWORD *)(*(_DWORD *)(v11 + 8) * (v72 - 1) + *(_QWORD *)v11 + 12LL) = 0;
      v75 = *v14 + (v72 - 1) * *((_DWORD *)v14 + 2);
      if ( *(char *)(v10 + 236) >= 0 )
        *(_DWORD *)(v75 + 12) = 0;
      else
        *(_BYTE *)(v75 + 15) = 0;
      *(_DWORD *)(*(_DWORD *)(v11 + 8) * v72 + *(_QWORD *)v11 + 12LL) = 0;
      v76 = *v14 + v72 * *((_DWORD *)v14 + 2);
      if ( *(char *)(v10 + 236) >= 0 )
        *(_DWORD *)(v76 + 12) = 0;
      else
        *(_BYTE *)(v76 + 15) = 0;
      *(_DWORD *)(*(_DWORD *)(v11 + 8) * (v72 + 1) + *(_QWORD *)v11 + 12LL) = 0;
      v77 = *v14 + (v72 + 1) * *((_DWORD *)v14 + 2);
      if ( *(char *)(v10 + 236) >= 0 )
        *(_DWORD *)(v77 + 12) = 0;
      else
        *(_BYTE *)(v77 + 15) = 0;
      v72 += 3;
      --v74;
    }
    while ( v74 );
  }
  if ( v71 < v12 )
  {
    v129 = v71 + v15;
    v130 = (unsigned int)(v12 - v71);
    do
    {
      *(_DWORD *)(*(_DWORD *)(v11 + 8) * v129 + *(_QWORD *)v11 + 12LL) = 0;
      v131 = *v14 + v129 * *((_DWORD *)v14 + 2);
      if ( *(char *)(v10 + 236) >= 0 )
        *(_DWORD *)(v131 + 12) = 0;
      else
        *(_BYTE *)(v131 + 15) = 0;
      ++v129;
      --v130;
    }
    while ( v130 );
  }
  v137 = v12 + v15;
LABEL_54:
  v78 = 0;
  v79 = v10 - (_QWORD)v158;
  v133 = 0;
  v145 = v79;
  v80 = 0LL;
  do
  {
    v81 = &v158[v80];
    v82 = *(_DWORD *)((char *)v81 + v79 + 220);
    if ( (v82 & 0xC) != 0 )
    {
      if ( (v82 & 4) != 0 )
        v83 = *((_BYTE *)&v132 + v80);
      else
        v83 = *((_BYTE *)&v132 + v80) == 0;
      v84 = *(_DWORD *)(v11 + 8) * v159[v80];
      v85 = *(_QWORD *)v11 + *v81 * *(_DWORD *)(v11 + 8);
      v86 = v159[v80] * *((_DWORD *)v14 + 2);
      v87 = *v14 + *v81 * *((_DWORD *)v14 + 2);
      if ( v83 )
        v88 = FLOAT_0_5;
      else
        v88 = FLOAT_N0_5;
      v89 = (unsigned int)v160[v80];
      v90 = 0LL;
      if ( v160[v80] )
      {
        do
        {
          v91 = (float *)(v87 + v86 * (int)v90);
          v92 = (float *)(v85 + v84 * (int)v90);
          if ( *((_BYTE *)&v135 + v80) )
          {
            *v91 = v88 + *v92;
            if ( v91[1] == v92[1] )
              v93 = FLOAT_0_5;
            else
              v93 = FLOAT_0_70710677;
            v94 = 0LL;
            v92[2] = v93;
            if ( (unsigned __int64)a6 >= 2 )
            {
              v95 = (char *)v92 - (char *)v91;
              v96 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
              v97 = v91 + 4;
              v94 = 2 * v96;
              do
              {
                *v97 = v88 + *(float *)((char *)v97 + v95);
                v97[2] = v88 + *(float *)((char *)v97 + v95 + 8);
                v97 += 4;
                --v96;
              }
              while ( v96 );
            }
            if ( v94 < a6 )
              v91[2 * v94 + 4] = v88 + v92[2 * v94 + 4];
          }
          else
          {
            v91[1] = v88 + v92[1];
            if ( *v91 == *v92 )
              v124 = FLOAT_0_5;
            else
              v124 = FLOAT_0_70710677;
            v125 = 0LL;
            v92[2] = v124;
            if ( (unsigned __int64)a6 >= 2 )
            {
              v126 = (char *)v92 - (char *)v91;
              v127 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
              v128 = v91 + 5;
              v125 = 2 * v127;
              do
              {
                *v128 = v88 + *(float *)((char *)v128 + v126);
                v128[2] = v88 + *(float *)((char *)v128 + v126 + 8);
                v128 += 4;
                --v127;
              }
              while ( v127 );
            }
            if ( v125 < a6 )
              v91[2 * v125 + 5] = v88 + v92[2 * v125 + 5];
          }
          ++v90;
        }
        while ( v90 < v89 );
        v78 = v133;
      }
      v79 = v145;
    }
    v11 = v143;
    ++v78;
    v14 = v144;
    ++v80;
    v133 = v78;
  }
  while ( v78 < 4 );
  if ( (_BYTE)v134 )
  {
    v98 = 0;
    v133 = 0;
    v99 = 0LL;
    do
    {
      if ( *(_DWORD *)((char *)&v158[v99 + 55] + v79) == 12 )
      {
        v100 = 0;
        v101 = v142;
        v102 = v160[v99] - 1;
        v103 = v158[v99];
        v104 = v161[v99] - v142;
        if ( v102 > 0 )
        {
          v105 = v104 + 1;
          v106 = v144;
          v107 = (unsigned __int16 *)(v157 + 2LL * (int)v136);
          do
          {
            v108 = *v106;
            v109 = v104 + v101 + v100;
            v110 = v103 + LOWORD(v159[v99]);
            v111 = v101 + v105 % v140;
            v149 = (char *)(*((_DWORD *)v106 + 2) * v109);
            v112 = *((_DWORD *)v106 + 2) * v111;
            if ( *(float *)&v149[v108] != *(float *)(v112 + v108)
              || *(float *)&v149[v108 + 4] != *(float *)(v112 + v108 + 4) )
            {
              v136 += 6;
              *v107 = v109;
              v107[1] = v111;
              v107[2] = v110;
              v107[3] = v109;
              v107[4] = v110;
              v107[5] = v103;
              v107 += 6;
            }
            v103 += v159[v99];
            ++v100;
            v101 = v142;
            ++v105;
          }
          while ( v100 < v102 );
          v98 = v133;
          v79 = v145;
        }
      }
      ++v98;
      ++v99;
      v133 = v98;
    }
    while ( v98 < 4 );
  }
  *v152 = v137;
  result = v136;
  *v153 = v136;
  return result;
}
