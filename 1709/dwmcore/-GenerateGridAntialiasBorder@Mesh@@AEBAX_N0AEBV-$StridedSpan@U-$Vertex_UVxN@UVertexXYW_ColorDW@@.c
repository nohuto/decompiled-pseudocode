/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x180063B80
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHPEAGH3@Z @ 0x180065720 (-GenerateAntialiasBorder@Mesh@@AEBAX_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall Mesh::GenerateGridAntialiasBorder(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        unsigned int *a10)
{
  __int64 v10; // rdi
  __int64 v11; // r12
  int v12; // r14d
  char v13; // r11
  __int64 *v14; // rsi
  int v15; // r15d
  int v16; // ecx
  int v18; // edx
  unsigned int v19; // eax
  char *v20; // rcx
  char *v21; // r9
  char *v22; // r11
  char *v23; // rbx
  _DWORD *v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rax
  bool v27; // zf
  int v28; // r8d
  int v29; // edi
  int v30; // r10d
  int v31; // r14d
  int v32; // edx
  unsigned __int64 v33; // rbx
  int v34; // r12d
  __int64 v35; // r15
  __int64 v36; // r13
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r9
  int v39; // r10d
  unsigned __int64 v40; // rbx
  int v41; // edi
  int v42; // edx
  __int64 v43; // rsi
  __int64 v44; // r14
  bool v45; // cl
  int v46; // r14d
  int v47; // r15d
  __int64 v48; // rdi
  __int64 v49; // rsi
  float v50; // xmm2_4
  unsigned __int64 v51; // rbx
  float *v52; // r8
  float *v53; // rcx
  float v54; // xmm0_4
  unsigned __int64 v55; // rdx
  signed __int64 v56; // r11
  unsigned __int64 v57; // r10
  float *v58; // r9
  int v59; // eax
  char v60; // r8
  float *v61; // rcx
  float *v62; // rdx
  float v63; // xmm2_4
  float v64; // xmm0_4
  unsigned __int64 v65; // r8
  signed __int64 v66; // r11
  unsigned __int64 v67; // r9
  float *v68; // r10
  int v69; // edx
  int v70; // r8d
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // r10d
  __int64 v79; // rdi
  __int64 v80; // rsi
  _DWORD *v81; // rcx
  int v82; // eax
  char v83; // r9
  __int64 v84; // r15
  int v85; // r12d
  int v86; // r14d
  __int64 v87; // r13
  float v88; // xmm2_4
  unsigned __int64 v89; // rdi
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
  int v100; // ebx
  __int16 v101; // cx
  int v102; // r10d
  int v103; // edi
  int v104; // r11d
  int v105; // r15d
  __int64 *v106; // r14
  unsigned __int16 *v107; // r8
  __int64 v108; // r12
  unsigned __int16 v109; // si
  unsigned __int16 v110; // r13
  unsigned __int16 v111; // dx
  __int64 v112; // rcx
  __int64 result; // rax
  float v114; // xmm0_4
  unsigned __int64 v115; // rdx
  signed __int64 v116; // r11
  unsigned __int64 v117; // r10
  float *v118; // r9
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
  int v129; // r8d
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  int v133; // [rsp+28h] [rbp-E0h]
  int v134; // [rsp+2Ch] [rbp-DCh]
  unsigned int v135; // [rsp+30h] [rbp-D8h]
  int v136; // [rsp+34h] [rbp-D4h]
  int v137; // [rsp+38h] [rbp-D0h]
  unsigned int v138; // [rsp+3Ch] [rbp-CCh]
  int v139; // [rsp+40h] [rbp-C8h]
  int v140; // [rsp+44h] [rbp-C4h]
  int v141; // [rsp+48h] [rbp-C0h]
  int v142; // [rsp+4Ch] [rbp-BCh]
  __int64 v143; // [rsp+50h] [rbp-B8h]
  int v144; // [rsp+58h] [rbp-B0h]
  int v145; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v146; // [rsp+60h] [rbp-A8h]
  __int64 *v147; // [rsp+68h] [rbp-A0h]
  __int64 v148; // [rsp+70h] [rbp-98h]
  __int64 v149; // [rsp+78h] [rbp-90h]
  _DWORD *v150; // [rsp+80h] [rbp-88h]
  __int64 v151; // [rsp+88h] [rbp-80h]
  char *v152; // [rsp+90h] [rbp-78h]
  __int64 v153; // [rsp+98h] [rbp-70h]
  _DWORD *v154; // [rsp+A0h] [rbp-68h]
  unsigned int *v155; // [rsp+A8h] [rbp-60h]
  char *v156; // [rsp+B0h] [rbp-58h]
  char *v157; // [rsp+B8h] [rbp-50h]
  char *v158; // [rsp+C0h] [rbp-48h]
  __int64 v159; // [rsp+C8h] [rbp-40h]
  _DWORD v160[4]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v161[4]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v162[4]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v163[4]; // [rsp+100h] [rbp-8h] BYREF

  v10 = a1;
  v11 = a5;
  v12 = 0;
  v13 = a3;
  v14 = a4;
  v159 = a8;
  v155 = a10;
  v143 = a1;
  v138 = *a10;
  v154 = a7;
  v15 = *a7;
  v16 = *(_DWORD *)(a1 + 208);
  LOBYTE(v133) = a3;
  LOBYTE(v136) = a2;
  v18 = *(_DWORD *)(v10 + 212);
  v147 = a4;
  v151 = a5;
  v139 = v15;
  v145 = v15;
  v142 = 0;
  v160[0] = v18 * (v16 - 1);
  v160[2] = v18 - 1;
  v137 = 65537;
  v134 = 257;
  v162[0] = v16;
  v162[1] = v18;
  v162[2] = v16;
  v160[3] = v16 * v18 - 1;
  v162[3] = v18;
  v160[1] = 0;
  v161[0] = -v18;
  v161[1] = 1;
  v161[2] = v18;
  v161[3] = -1;
  if ( !a2 )
    goto LABEL_57;
  v19 = 0;
  v20 = (char *)v162 - v10;
  v135 = 0;
  v156 = (char *)v162 - v10;
  v21 = (char *)v163 - v10;
  v22 = (char *)v160 - v10;
  v157 = (char *)v163 - v10;
  v158 = (char *)v160 - v10;
  v23 = (char *)v161 - v10;
  v24 = (_DWORD *)(v10 + 220);
  v25 = 0LL;
  v150 = (_DWORD *)(v10 + 220);
  v148 = 0LL;
  v152 = (char *)v161 - v10;
  do
  {
    if ( v19 )
      v26 = v25 - 1;
    else
      v26 = 3LL;
    v27 = *v24 == 12;
    v153 = v26;
    if ( v27 )
    {
      v28 = *(_DWORD *)((char *)v24 + (_QWORD)v20 - 220) - 1;
      v144 = v28;
      if ( v28 <= 0 )
        goto LABEL_45;
    }
    else
    {
      if ( *(_DWORD *)(v10 + 4 * v26 + 220) != 12 )
        goto LABEL_45;
      v28 = 1;
      v144 = 1;
    }
    v29 = *((_DWORD *)v14 + 2);
    v30 = v12 + v15;
    v31 = *(_DWORD *)((char *)v24 + (_QWORD)v22 - 220);
    *(_DWORD *)((char *)v24 + (_QWORD)v21 - 220) = v30;
    v32 = *(_DWORD *)((char *)v24 + (_QWORD)v23 - 220);
    v33 = 0LL;
    v34 = v32 * v29;
    v35 = *v14 + v31 * v29;
    v141 = v30;
    LODWORD(v149) = v31;
    v140 = v32;
    v146 = (unsigned int)v28;
    v36 = *v14 + v30 * v29;
    v37 = (unsigned int)v28;
    do
    {
      memcpy_0((void *)(v36 + (int)v33 * v29), (const void *)(v35 + v34 * (int)v33), (unsigned int)(8 * a6 + 16));
      ++v33;
    }
    while ( v33 < v37 );
    v38 = v146;
    v39 = v141;
    v11 = v151;
    v40 = 0LL;
    v41 = *(_DWORD *)(v151 + 8);
    v42 = v41 * v140;
    v43 = *(_QWORD *)v151 + v41 * (int)v149;
    v44 = *(_QWORD *)v151 + v41 * v141;
    v140 *= v41;
    if ( v146 )
    {
      do
      {
        memcpy_0((void *)(v44 + (int)v40 * v41), (const void *)(v43 + (int)v40 * v42), (unsigned int)(8 * a6 + 16));
        v38 = v146;
        ++v40;
        v42 = v140;
      }
      while ( v40 < v146 );
      v39 = v141;
    }
    v25 = v148;
    if ( (*v150 & 0xC) != 0 )
    {
      v45 = (*v150 & 8) != 0 ? *((_BYTE *)&v134 + v148) == 0 : *((_BYTE *)&v134 + v148);
      v46 = *(_DWORD *)(v11 + 8);
      v47 = *((_DWORD *)v147 + 2);
      v48 = *(_QWORD *)v11 + v46 * v39;
      v49 = *v147 + v47 * v39;
      v50 = v45 ? FLOAT_0_5 : FLOAT_N0_5;
      v51 = 0LL;
      if ( v38 )
      {
        do
        {
          v52 = (float *)(v49 + (int)v51 * v47);
          v53 = (float *)(v48 + v46 * (int)v51);
          if ( *((_BYTE *)&v137 + v25) )
          {
            *v52 = v50 + *v53;
            if ( v52[1] == v53[1] )
              v54 = FLOAT_0_5;
            else
              v54 = FLOAT_0_70710677;
            v53[2] = v54;
            if ( !(_BYTE)v133 )
            {
              v55 = 0LL;
              if ( (unsigned __int64)a6 >= 2 )
              {
                v56 = (char *)v53 - (char *)v52;
                v57 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
                v58 = v52 + 4;
                v55 = 2 * v57;
                do
                {
                  *v58 = v50 + *(float *)((char *)v58 + v56);
                  v58[2] = v50 + *(float *)((char *)v58 + v56 + 8);
                  v58 += 4;
                  --v57;
                }
                while ( v57 );
                v38 = v146;
              }
              if ( v55 < a6 )
                v52[2 * v55 + 4] = v50 + v53[2 * v55 + 4];
            }
          }
          else
          {
            v52[1] = v50 + v53[1];
            if ( *v52 == *v53 )
              v114 = FLOAT_0_5;
            else
              v114 = FLOAT_0_70710677;
            v53[2] = v114;
            if ( !(_BYTE)v133 )
            {
              v115 = 0LL;
              if ( (unsigned __int64)a6 >= 2 )
              {
                v116 = (char *)v53 - (char *)v52;
                v117 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
                v118 = v52 + 5;
                v115 = 2 * v117;
                do
                {
                  *v118 = v50 + *(float *)((char *)v118 + v116);
                  v118[2] = v50 + *(float *)((char *)v118 + v116 + 8);
                  v118 += 4;
                  --v117;
                }
                while ( v117 );
                v38 = v146;
              }
              if ( v115 < a6 )
                v52[2 * v115 + 5] = v50 + v53[2 * v115 + 5];
            }
          }
          ++v51;
        }
        while ( v51 < v38 );
        v39 = v141;
        v11 = v151;
      }
    }
    v10 = v143;
    v59 = *(_DWORD *)(v143 + 4 * v153 + 220);
    if ( (v59 & 0xC) != 0 )
    {
      if ( (v59 & 8) != 0 )
        v60 = *((_BYTE *)&v134 + v153) == 0;
      else
        v60 = *((_BYTE *)&v134 + v153);
      v61 = (float *)(*(_QWORD *)v11 + v39 * *(_DWORD *)(v11 + 8));
      v62 = (float *)(*v147 + v39 * *((_DWORD *)v147 + 2));
      if ( v60 )
        v63 = FLOAT_0_5;
      else
        v63 = FLOAT_N0_5;
      if ( *((_BYTE *)&v137 + v153) )
      {
        *v62 = v63 + *v61;
        if ( v62[1] == v61[1] )
          v64 = FLOAT_0_5;
        else
          v64 = FLOAT_0_70710677;
        v61[2] = v64;
        if ( !(_BYTE)v133 )
        {
          v65 = 0LL;
          if ( (unsigned __int64)a6 >= 2 )
          {
            v66 = (char *)v61 - (char *)v62;
            v67 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
            v68 = v62 + 4;
            v65 = 2 * v67;
            do
            {
              *v68 = v63 + *(float *)((char *)v68 + v66);
              v68[2] = v63 + *(float *)((char *)v68 + v66 + 8);
              v68 += 4;
              --v67;
            }
            while ( v67 );
          }
          if ( v65 < a6 )
            v62[2 * v65 + 4] = v63 + v61[2 * v65 + 4];
        }
      }
      else
      {
        v62[1] = v63 + v61[1];
        if ( *v62 == *v61 )
          v119 = FLOAT_0_5;
        else
          v119 = FLOAT_0_70710677;
        v61[2] = v119;
        if ( !(_BYTE)v133 )
        {
          v120 = 0LL;
          if ( (unsigned __int64)a6 >= 2 )
          {
            v121 = (char *)v61 - (char *)v62;
            v122 = ((unsigned __int64)(a6 - 2LL) >> 1) + 1;
            v123 = v62 + 5;
            v120 = 2 * v122;
            do
            {
              *v123 = v63 + *(float *)((char *)v123 + v121);
              v123[2] = v63 + *(float *)((char *)v123 + v121 + 8);
              v123 += 4;
              --v122;
            }
            while ( v122 );
          }
          if ( v120 < a6 )
            v62[2 * v120 + 5] = v63 + v61[2 * v120 + 5];
        }
      }
    }
    v12 = v144 + v142;
    v24 = v150;
    v20 = v156;
    v21 = v157;
    v22 = v158;
    v23 = v152;
    v14 = v147;
    v15 = v139;
    v142 += v144;
LABEL_45:
    ++v24;
    v19 = v135 + 1;
    v150 = v24;
    ++v25;
    v135 = v19;
    v148 = v25;
  }
  while ( v19 < 4 );
  v69 = 0;
  if ( v12 >= 3 )
  {
    v70 = v15 + 1;
    v71 = (v12 - 3) / 3u + 1;
    v69 = 3 * v71;
    do
    {
      *(_DWORD *)((v70 - 1) * *(_DWORD *)(v11 + 8) + *(_QWORD *)v11 + 12LL) = 0;
      v72 = (v70 - 1) * *((_DWORD *)v14 + 2);
      v73 = *v14;
      if ( *(char *)(v10 + 236) < 0 )
        *(_BYTE *)(v72 + v73 + 15) = 0;
      else
        *(_DWORD *)(v72 + v73 + 12) = 0;
      *(_DWORD *)(v70 * *(_DWORD *)(v11 + 8) + *(_QWORD *)v11 + 12LL) = 0;
      v74 = v70 * *((_DWORD *)v14 + 2);
      v75 = *v14;
      if ( *(char *)(v10 + 236) < 0 )
        *(_BYTE *)(v74 + v75 + 15) = 0;
      else
        *(_DWORD *)(v74 + v75 + 12) = 0;
      *(_DWORD *)((v70 + 1) * *(_DWORD *)(v11 + 8) + *(_QWORD *)v11 + 12LL) = 0;
      v76 = (v70 + 1) * *((_DWORD *)v14 + 2);
      v77 = *v14;
      if ( *(char *)(v10 + 236) < 0 )
        *(_BYTE *)(v76 + v77 + 15) = 0;
      else
        *(_DWORD *)(v76 + v77 + 12) = 0;
      v70 += 3;
      --v71;
    }
    while ( v71 );
  }
  if ( v69 < v12 )
  {
    v129 = v69 + v15;
    v130 = (unsigned int)(v12 - v69);
    do
    {
      *(_DWORD *)(v129 * *(_DWORD *)(v11 + 8) + *(_QWORD *)v11 + 12LL) = 0;
      v131 = v129 * *((_DWORD *)v14 + 2);
      v132 = *v14;
      if ( *(char *)(v10 + 236) < 0 )
        *(_BYTE *)(v131 + v132 + 15) = 0;
      else
        *(_DWORD *)(v131 + v132 + 12) = 0;
      ++v129;
      --v130;
    }
    while ( v130 );
  }
  v13 = v133;
  v139 = v12 + v15;
LABEL_57:
  v78 = 0;
  v79 = v10 - (_QWORD)v160;
  v135 = 0;
  v143 = v79;
  v80 = 0LL;
  do
  {
    v81 = &v160[v80];
    v82 = *(_DWORD *)((char *)v81 + v79 + 220);
    if ( (v82 & 0xC) != 0 )
    {
      if ( (v82 & 4) != 0 )
        v83 = *((_BYTE *)&v134 + v80);
      else
        v83 = *((_BYTE *)&v134 + v80) == 0;
      v84 = *(_QWORD *)v11 + *v81 * *(_DWORD *)(v11 + 8);
      v85 = *(_DWORD *)(v11 + 8) * v161[v80];
      v86 = v161[v80] * *((_DWORD *)v147 + 2);
      v87 = *v147 + *v81 * *((_DWORD *)v147 + 2);
      if ( v83 )
        v88 = FLOAT_0_5;
      else
        v88 = FLOAT_N0_5;
      v89 = (unsigned int)v162[v80];
      v90 = 0LL;
      if ( v162[v80] )
      {
        do
        {
          v91 = (float *)(v87 + v86 * (int)v90);
          v92 = (float *)(v84 + (int)v90 * v85);
          if ( *((_BYTE *)&v137 + v80) )
          {
            *v91 = v88 + *v92;
            if ( v91[1] == v92[1] )
              v93 = FLOAT_0_5;
            else
              v93 = FLOAT_0_70710677;
            v92[2] = v93;
            if ( !v13 )
            {
              v94 = 0LL;
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
                v13 = v133;
              }
              if ( v94 < a6 )
                v91[2 * v94 + 4] = v88 + v92[2 * v94 + 4];
            }
          }
          else
          {
            v91[1] = v88 + v92[1];
            if ( *v91 == *v92 )
              v124 = FLOAT_0_5;
            else
              v124 = FLOAT_0_70710677;
            v92[2] = v124;
            if ( !v13 )
            {
              v125 = 0LL;
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
                v13 = v133;
              }
              if ( v125 < a6 )
                v91[2 * v125 + 5] = v88 + v92[2 * v125 + 5];
            }
          }
          ++v90;
        }
        while ( v90 < v89 );
        v78 = v135;
      }
      v79 = v143;
    }
    v11 = v151;
    ++v78;
    ++v80;
    v135 = v78;
  }
  while ( v78 < 4 );
  if ( (_BYTE)v136 )
  {
    v98 = 0;
    v135 = 0;
    v99 = 0LL;
    do
    {
      if ( *(_DWORD *)((char *)&v160[v99 + 55] + v79) == 12 )
      {
        v100 = 0;
        v101 = v145;
        v102 = v162[v99] - 1;
        v103 = v160[v99];
        v104 = v163[v99] - v145;
        if ( v102 > 0 )
        {
          v105 = v104 + 1;
          v106 = v147;
          v107 = (unsigned __int16 *)(v159 + 2LL * (int)v138);
          do
          {
            v108 = *v106;
            v109 = v104 + v101 + v100;
            v110 = LOWORD(v161[v99]) + v103;
            v111 = v101 + v105 % v142;
            v152 = (char *)(*((_DWORD *)v106 + 2) * v109);
            v112 = *((_DWORD *)v106 + 2) * v111;
            if ( *(float *)&v152[v108] != *(float *)(v112 + v108)
              || *(float *)&v152[v108 + 4] != *(float *)(v112 + v108 + 4) )
            {
              v138 += 6;
              *v107 = v109;
              v107[1] = v111;
              v107[2] = v110;
              v107[3] = v109;
              v107[4] = v110;
              v107[5] = v103;
              v107 += 6;
            }
            v103 += v161[v99];
            ++v100;
            v101 = v145;
            ++v105;
          }
          while ( v100 < v102 );
          v98 = v135;
        }
        v79 = v143;
      }
      ++v98;
      ++v99;
      v135 = v98;
    }
    while ( v98 < 4 );
  }
  *v154 = v139;
  result = v138;
  *v155 = v138;
  return result;
}
