/*
 * XREFs of RenderNineGridInternal @ 0x1C0010030
 * Callers:
 *     RenderNineGrid @ 0x1C000FD60 (RenderNineGrid.c)
 * Callees:
 *     DNG_InitStretch @ 0x1C000E00C (DNG_InitStretch.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C000E1B0 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     DNG_StretchCol @ 0x1C000E220 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C0010DB0 (DNG_DrawRow.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

unsigned __int64 __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128i *a4,
        int *a5,
        _DWORD *a6,
        __int64 a7,
        int a8)
{
  unsigned __int64 v9; // xmm0_8
  __int64 v10; // r15
  __int64 v11; // r11
  __m128i v12; // xmm1
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r14
  unsigned __int64 result; // rax
  int v16; // r8d
  int v17; // esi
  int v18; // r15d
  __int64 v19; // rax
  signed int v20; // edi
  int v21; // r11d
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r10
  int v24; // r13d
  __int64 v25; // rdx
  int v26; // ecx
  signed int v27; // r9d
  __int64 v28; // rsi
  int v29; // ebx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // esi
  signed int v33; // r11d
  unsigned int v34; // r14d
  int v35; // eax
  __int64 v36; // r9
  signed int v37; // esi
  unsigned int v38; // r15d
  signed int v39; // r14d
  signed int v40; // ecx
  int v41; // eax
  int v42; // r14d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  int v51; // esi
  int v52; // r8d
  _DWORD *v53; // rdi
  int v54; // r15d
  signed int v55; // edx
  unsigned int v56; // r14d
  signed int v57; // edx
  int v58; // ecx
  int v59; // esi
  int v60; // r9d
  int v61; // r8d
  int v62; // r11d
  int v63; // edx
  int v64; // r9d
  signed int v65; // r8d
  int v66; // edi
  int v67; // esi
  unsigned int v68; // ecx
  unsigned int v69; // r11d
  unsigned __int64 v70; // rcx
  int v71; // r11d
  int v72; // r14d
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // rsi
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // r11
  __int64 v80; // rdi
  __int64 v81; // rax
  unsigned int v82; // r14d
  __int64 v83; // rcx
  __int64 v84; // r15
  int v85; // r8d
  void *v86; // rcx
  char *v87; // rdx
  char *v88; // r9
  signed int v89; // r11d
  signed int v90; // edx
  int v91; // r8d
  __int64 v92; // rdx
  unsigned __int64 v93; // kr08_8
  int v94; // edx
  __int64 v95; // rdi
  unsigned __int64 v96; // rdi
  int v97; // eax
  __int64 v98; // rbx
  int v99; // r13d
  __int64 v100; // rbx
  __int64 v101; // rsi
  int v102; // edi
  char *v103; // rdx
  void *v104; // rcx
  char *v105; // r9
  unsigned __int64 v106; // rcx
  int v107; // eax
  int v108; // r13d
  __int64 v109; // rbx
  int v110; // edx
  int v111; // r15d
  int v112; // eax
  int v113; // edx
  signed int v114; // ecx
  int v115; // r12d
  int v116; // r14d
  __int64 v117; // r13
  __int64 v118; // r12
  __int64 v119; // rdx
  int v120; // r15d
  unsigned __int64 v121; // rdi
  int v122; // r12d
  __int64 v123; // rsi
  int v124; // eax
  BOOL v125; // eax
  __int64 v126; // r11
  __int64 v127; // r9
  __int64 v128; // rbx
  __int64 v129; // rdi
  __int64 v130; // rsi
  unsigned int *v131; // rdx
  unsigned int *v132; // r8
  __int64 v133; // r11
  unsigned int v134; // ecx
  unsigned int v135; // [rsp+30h] [rbp-D0h]
  signed int v136; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v137; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v138; // [rsp+38h] [rbp-C8h]
  unsigned int v139; // [rsp+40h] [rbp-C0h]
  int v140; // [rsp+40h] [rbp-C0h]
  __int64 v141; // [rsp+40h] [rbp-C0h]
  signed int v142; // [rsp+48h] [rbp-B8h]
  int v143; // [rsp+48h] [rbp-B8h]
  int v144; // [rsp+50h] [rbp-B0h]
  int v145; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v146; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+68h] [rbp-98h]
  __int64 v148; // [rsp+70h] [rbp-90h]
  __int64 v149; // [rsp+70h] [rbp-90h]
  int v150; // [rsp+78h] [rbp-88h]
  int v151; // [rsp+78h] [rbp-88h]
  int v152; // [rsp+80h] [rbp-80h]
  __int64 v153; // [rsp+88h] [rbp-78h]
  __int64 v154; // [rsp+90h] [rbp-70h]
  int v155; // [rsp+98h] [rbp-68h]
  int v156; // [rsp+A0h] [rbp-60h] BYREF
  signed int v157; // [rsp+A4h] [rbp-5Ch]
  __int64 v158; // [rsp+A8h] [rbp-58h]
  int v159; // [rsp+B0h] [rbp-50h]
  int v160; // [rsp+B4h] [rbp-4Ch]
  int v161; // [rsp+B8h] [rbp-48h]
  __int64 v162; // [rsp+C0h] [rbp-40h]
  int v163; // [rsp+C8h] [rbp-38h]
  signed int v164; // [rsp+CCh] [rbp-34h]
  unsigned int v165; // [rsp+D0h] [rbp-30h]
  int v166; // [rsp+D4h] [rbp-2Ch]
  unsigned int v167; // [rsp+DCh] [rbp-24h]
  int v168; // [rsp+E0h] [rbp-20h]
  int v169; // [rsp+E4h] [rbp-1Ch]
  unsigned int v170; // [rsp+E8h] [rbp-18h]
  int v171; // [rsp+ECh] [rbp-14h]
  int v172; // [rsp+F0h] [rbp-10h]
  int v173; // [rsp+F4h] [rbp-Ch]
  unsigned int v174; // [rsp+F8h] [rbp-8h]
  signed int v175; // [rsp+FCh] [rbp-4h]
  signed int v176; // [rsp+100h] [rbp+0h]
  int v177; // [rsp+104h] [rbp+4h]
  char v178[32]; // [rsp+108h] [rbp+8h] BYREF
  char v179[32]; // [rsp+128h] [rbp+28h] BYREF
  signed int v180; // [rsp+148h] [rbp+48h]
  int v181; // [rsp+14Ch] [rbp+4Ch]
  int v182; // [rsp+150h] [rbp+50h]
  int v183; // [rsp+154h] [rbp+54h]
  int v184; // [rsp+158h] [rbp+58h]
  int v185; // [rsp+15Ch] [rbp+5Ch]
  int v186; // [rsp+160h] [rbp+60h]
  int v187; // [rsp+16Ch] [rbp+6Ch]
  int v188; // [rsp+170h] [rbp+70h]
  int v189; // [rsp+174h] [rbp+74h]
  unsigned __int64 v190; // [rsp+178h] [rbp+78h]
  unsigned __int64 v191; // [rsp+180h] [rbp+80h]
  unsigned __int64 v192; // [rsp+188h] [rbp+88h]
  unsigned __int64 v193; // [rsp+190h] [rbp+90h]
  unsigned __int64 v194; // [rsp+1A0h] [rbp+A0h]
  __int64 v195; // [rsp+1A8h] [rbp+A8h]
  _DWORD v196[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v198; // [rsp+220h] [rbp+120h]
  int v199; // [rsp+228h] [rbp+128h]
  unsigned int v200; // [rsp+240h] [rbp+140h]
  int v201; // [rsp+240h] [rbp+140h]

  v9 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v10 = a3->m128i_i64[0];
  v11 = a4->m128i_i64[0];
  v12 = *a4;
  v152 = v9 - a3->m128i_i64[0];
  v13 = HIDWORD(a4->m128i_i64[0]);
  v14 = HIDWORD(a3->m128i_i64[0]);
  v12.m128i_i64[0] = _mm_srli_si128(v12, 8).m128i_u64[0];
  v137 = HIDWORD(v9);
  result = (unsigned int)(HIDWORD(v9) - HIDWORD(a3->m128i_i64[0]));
  v16 = v12.m128i_i32[0] - v11;
  v17 = v12.m128i_i32[1] - HIDWORD(v11);
  v155 = HIDWORD(v9) - HIDWORD(v10);
  v147 = v12.m128i_i32[1] - HIDWORD(v11);
  if ( v12.m128i_i32[0] - (int)v11 >= 128000000 || v17 >= 128000000 || v16 <= -128000000 || v17 <= -128000000 )
    return result;
  LODWORD(v137) = HIDWORD(v9) - v13;
  v18 = v10 - v11;
  v19 = *(unsigned int *)(a2 + 40);
  v20 = v9 - v11;
  v21 = *(_DWORD *)(a2 + 32);
  v22 = *(_QWORD *)(a1 + 48);
  v23 = v22 + *(unsigned int *)(a1 + 40);
  v192 = *(_QWORD *)(a2 + 48);
  v193 = v192 + v19;
  v189 = *(_DWORD *)(a1 + 32);
  v145 = v14 - v13;
  v198 = *(_DWORD *)(a1 + 64) / 4;
  v24 = v198;
  v159 = v198;
  LODWORD(v19) = *(_DWORD *)(a2 + 64);
  v190 = v22;
  v146 = v23;
  v191 = v23;
  v199 = (int)v19 / 4;
  v163 = (int)v19 / 4;
  v142 = v18;
  v156 = v18;
  v157 = v20;
  v154 = *(_QWORD *)(a1 + 56) + 4 * (v198 * (v17 - ((int)v14 - (int)v13) - 1) - (__int64)v18);
  v25 = *a5;
  v26 = a5[1];
  v27 = a5[2] - v25;
  v144 = a5[3] - v26;
  v28 = (int)v19 / 4 * (v144 - 1);
  v153 = *(_QWORD *)(a2 + 56) + 4 * (v25 + v28 + (int)v19 / 4 * v26);
  if ( (*a6 & 0x20) != 0 )
  {
    v91 = v198;
    v99 = v145;
    v100 = v154 + 4 * (v91 * v145 - (__int64)(v91 * (v147 - 1)));
    result = v137;
    if ( v144 < (int)v137 )
      result = (unsigned int)v144;
    v101 = v153 + 4 * (v199 * v145 - v28);
    v138 = result;
    if ( v27 < v20 )
      v20 = a5[2] - v25;
    if ( v20 > v18 && v145 < (int)result )
    {
      v102 = 4 * (v20 - v18);
      while ( 1 )
      {
        v103 = (char *)(v101 + 4LL * v18);
        v104 = (void *)(v100 + 4LL * v18);
        if ( v102 <= 0 )
          break;
        result = (unsigned __int64)v104 + v102;
        if ( result <= (unsigned __int64)v104 )
          goto LABEL_69;
        v105 = &v103[v102];
        if ( v105 <= v103 || v22 > (unsigned __int64)v104 || result > v23 )
          goto LABEL_69;
        if ( (v22 > (unsigned __int64)v103 || (unsigned __int64)v105 > v23)
          && (v192 > (unsigned __int64)v103 || (unsigned __int64)v105 > v193) )
        {
          goto LABEL_69;
        }
        memmove(v104, v103, v102);
        ++v99;
        v91 = v198;
        v23 = v146;
        v101 += 4LL * v199;
        result = v138;
        v100 += 4LL * v198;
        if ( v99 >= (int)v138 )
          goto LABEL_70;
      }
    }
    goto LABEL_70;
  }
  v182 = *a6 & 2;
  v29 = 1;
  v161 = v152;
  v165 = v144;
  v30 = a6[1];
  v31 = a6[2];
  v160 = v16;
  v164 = v27;
  v166 = v21;
  v167 = v30;
  v200 = v31;
  v170 = v31;
  if ( (int)(v16 - v31 - v30) <= 0 || (int)(v27 - v31 - v30) <= 0 )
  {
    v124 = 0;
    v177 = 0;
    v32 = 0;
    if ( v31 + v30 )
      v124 = (int)(v16 * v30) / (int)(v31 + v30);
    v180 = v124;
    v34 = v16 - v124;
    v33 = v124;
    v135 = v16 - v124;
    v181 = v16 - v124;
  }
  else
  {
    v32 = 1;
    v177 = 1;
    v33 = v30;
    v180 = v30;
    v34 = v31;
    v135 = v31;
    v181 = v31;
  }
  v168 = v18;
  v35 = v20;
  if ( v33 < v20 )
    v35 = v33;
  v169 = v35;
  if ( !v32 && v33 )
  {
    DNG_InitStretch((__int64)v178, v33, v30, v18, v35);
    v23 = v191;
    v34 = v181;
    v31 = v170;
    v22 = v190;
    v33 = v180;
    v30 = v167;
    v27 = v164;
    v16 = v160;
    v24 = v159;
    v20 = v157;
    v146 = v191;
    v135 = v181;
    v200 = v170;
    v142 = v156;
  }
  v36 = v27 - v31 - v30;
  v37 = v16 - v34;
  v38 = v16 - v34 - v33;
  v173 = v36;
  v174 = v38;
  v39 = v142;
  v40 = v20;
  if ( v33 > v142 )
    v39 = v33;
  v175 = v39;
  if ( (int)(v38 + v33) < v20 )
    v40 = v38 + v33;
  v41 = v177;
  v176 = v40;
  if ( v177 )
  {
    v42 = v39 - v33;
    v188 = v40 - v33;
    v43 = ((unsigned __int64)(unsigned int)v36 << 32) - 1;
    v187 = v42;
    if ( v38 == 4LL )
      v44 = v43 >> 2;
    else
      v44 = v43 / v38;
    v45 = v36 << 32;
    v46 = v44 + 1;
    v139 = v44 + 1;
    if ( v38 == 4LL )
    {
      v47 = v45 >> 2;
    }
    else
    {
      v46 = v44 + 1;
      v47 = v45 / v38;
    }
    v48 = v47 >> 1;
    v49 = HIDWORD(v46);
    v185 = v46;
    v50 = HIDWORD(v48);
    v150 = v49;
    v186 = v49;
    if ( v42 > 5 )
    {
      v106 = (unsigned int)v48 + v42 * (unsigned __int64)v139;
      LODWORD(v48) = v48 + v42 * v139;
      LODWORD(v50) = HIDWORD(v106) + v42 * v49 + v50;
    }
    else if ( v42 > 0 )
    {
      v149 = (unsigned int)v42;
      do
      {
        v125 = (unsigned int)v48 + v139 < (unsigned int)v48;
        LODWORD(v48) = v48 + v139;
        LODWORD(v50) = v150 + v125 + v50;
        --v149;
      }
      while ( v149 );
      v24 = v159;
      v23 = v146;
    }
    v41 = v177;
    v183 = v50;
    v31 = v200;
    v184 = v48;
  }
  if ( v37 <= v142 )
    v37 = v142;
  v51 = v37 - v38 - v33;
  v171 = v51;
  if ( v16 >= v20 )
    v16 = v20;
  v52 = v16 - v38 - v33;
  v172 = v52;
  if ( !v41 && v135 )
  {
    DNG_InitStretch((__int64)v179, v135, v31, v51, v52);
    v23 = v191;
    v22 = v190;
    v24 = v159;
    v146 = v191;
    v142 = v156;
  }
  v53 = a6;
  v54 = v147;
  v55 = a6[3];
  v56 = a6[4];
  v136 = v55;
  if ( (int)(v147 - v55 - v56) <= 0 || (int)(v144 - v55 - v56) <= 0 )
  {
    v107 = 0;
    v140 = 0;
    if ( v56 + v55 )
      v107 = v147 * v55 / (int)(v56 + v55);
    v201 = v107;
    v57 = v147 - v107;
  }
  else
  {
    v201 = a6[3];
    v57 = a6[4];
    v140 = 1;
  }
  v58 = v137;
  v59 = v147 - v57;
  v60 = v145;
  v61 = v137;
  if ( v147 - v57 > v145 )
    v60 = v147 - v57;
  if ( v147 < (int)v137 )
    v61 = v147;
  if ( (int)v137 <= v59 )
    goto LABEL_37;
  v158 = v154;
  v162 = v153;
  if ( v56 != v57 )
  {
    if ( v57 > 0 )
    {
      DNG_InitStretch((__int64)v196, v57, v56, v147 - v61, v147 - v60);
      DNG_StretchCol((struct _DNGINTERNALDATA *)&v156, v196);
      v23 = v191;
      v62 = v156;
      v22 = v190;
      v24 = v159;
      v58 = v137;
      v146 = v191;
      v142 = v156;
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v94 = v56 - v60 - v57 + v147 - 1;
  v158 = v154 - 4LL * v198 * v94;
  v162 = v153 - 4LL * v199 * v94;
  if ( v60 >= v61 )
  {
    v58 = v137;
LABEL_37:
    v62 = v142;
    goto LABEL_38;
  }
  v95 = (unsigned int)(v61 - v60);
  do
  {
    DNG_DrawRow(&v156);
    v158 += 4LL * v198;
    v162 += 4LL * v199;
    --v95;
  }
  while ( v95 );
  v23 = v191;
  v62 = v156;
  v22 = v190;
  v24 = v159;
  v54 = v147;
  v58 = v137;
  v53 = a6;
  v146 = v191;
  v142 = v156;
LABEL_38:
  v63 = v53[4];
  result = (unsigned int)v53[3];
  v64 = v54 - result - v63;
  v65 = v145;
  v66 = v144 - result - v63;
  if ( v140 && v66 > 0 && v64 > 0 && v145 < v59 )
  {
    if ( v58 <= v201 )
    {
      v89 = v137;
      v90 = v201;
      goto LABEL_68;
    }
    v67 = v145;
    v141 = v154 - 4LL * v198 * v63;
    if ( v136 > v145 )
      v67 = v136;
    v148 = v153 - 4LL * v199 * v63;
    if ( v182 )
    {
      v108 = v198;
      v109 = v141 - 4LL * v198 * (v64 - 1) + 4LL * v198 * (v67 - v136);
      v158 = v109;
      v110 = (v67 - v136) % v66;
      v111 = v66 - v110;
      v162 = v148 - 4LL * v199 * (v66 - 1) + 4LL * v163 * v110;
      if ( v66 >= v64 )
        v112 = v64;
      else
        v112 = v66;
      v113 = v137;
      v114 = v137;
      v115 = v147 - v56;
      v143 = v147 - v56;
      if ( (int)(v147 - v56) < (int)v137 )
        v114 = v147 - v56;
      if ( v67 + v112 >= v114 )
      {
        v116 = v137;
        if ( v115 < (int)v137 )
          v116 = v115;
      }
      else
      {
        if ( v66 < v64 )
          v64 = v66;
        v116 = v64 + v67;
      }
      if ( v67 < v116 )
      {
        v117 = 4LL * v198;
        v118 = (unsigned int)(v116 - v67);
        do
        {
          DNG_DrawRow(&v156);
          if ( --v111 )
          {
            v119 = v162;
          }
          else
          {
            v111 = v66;
            v119 = v162 - 4LL * v199 * v66;
          }
          v109 = v117 + v158;
          v162 = 4LL * v199 + v119;
          v158 += v117;
          --v118;
        }
        while ( v118 );
        v62 = v156;
        v115 = v143;
        v113 = v137;
        v108 = v198;
      }
      v120 = v113;
      result = 4LL * v108 * v66;
      v121 = v109 - result;
      v162 = v109 - result;
      if ( v115 < v113 )
        v120 = v115;
      if ( v116 < v120 )
      {
        v122 = 4 * v161;
        v123 = 4LL * v62;
        do
        {
          result = DNG_CopyMemory((struct _DNGINTERNALDATA *)&v156, (char *)(v123 + v109), (char *)(v123 + v121), v122);
          if ( !(_DWORD)result )
            break;
          ++v116;
          result = 4LL * v108;
          v109 += result;
          v121 += result;
          v158 = v109;
          v162 = v121;
        }
        while ( v116 < v120 );
      }
    }
    else
    {
      v68 = v137;
      if ( (int)(v54 - v56) < (int)v137 )
        v68 = v54 - v56;
      v69 = v136 - v68;
      v70 = (unsigned int)v64;
      v71 = v64 + v69;
      v72 = v64 + v136 - v67;
      v73 = (((unsigned __int64)(unsigned int)v66 << 32) - 1) / (unsigned int)v64 + 1;
      v151 = v73;
      v74 = (((unsigned __int64)(unsigned int)v66 << 32) / v70) >> 1;
      v194 = HIDWORD(v73);
      v75 = (((unsigned __int64)(unsigned int)v66 << 32) / v70) >> 33;
      if ( v71 <= 5 )
      {
        if ( v71 > 0 )
        {
          v92 = (unsigned int)v71;
          do
          {
            v93 = __PAIR64__(v75, v74) + v73;
            LODWORD(v75) = (__PAIR64__(v75, v74) + v73) >> 32;
            LODWORD(v74) = v93;
            --v92;
          }
          while ( v92 );
          v23 = v146;
        }
      }
      else
      {
        v76 = (unsigned int)v74 + v71 * (unsigned __int64)(unsigned int)v73;
        LODWORD(v74) = v74 + v71 * v73;
        LODWORD(v75) = HIDWORD(v76) + v71 * HIDWORD(v73) + v75;
      }
      v77 = v141;
      v78 = v24 * v71;
      v79 = v148;
      v80 = v141 - 4 * v78;
      v81 = 4LL * v24 * v72;
      v82 = 0;
      v83 = v141 - v81;
      result = 4LL * v163 * (int)v75;
      v84 = v148 - result;
      v195 = v83;
      if ( v80 != v83 )
      {
        do
        {
          if ( v29 )
          {
            v158 = v80;
            v162 = v84;
            DNG_DrawRow(&v156);
            v22 = v190;
            v24 = v159;
            v146 = v191;
            v142 = v156;
          }
          else
          {
            v85 = 4 * v161;
            result = v142 + (__int64)v24;
            v86 = (void *)(v80 + 4LL * v142);
            v87 = (char *)(v80 + 4 * result);
            if ( 4 * v161 <= 0 )
              break;
            result = (unsigned __int64)v86 + v85;
            if ( result <= (unsigned __int64)v86 )
              break;
            v88 = &v87[v85];
            if ( v88 <= v87 || v22 > (unsigned __int64)v86 || result > v23 )
              break;
            if ( (v22 > (unsigned __int64)v87 || (unsigned __int64)v88 > v23)
              && (v192 > (unsigned __int64)v87 || (unsigned __int64)v88 > v193) )
            {
              break;
            }
            memmove(v86, v87, v85);
          }
          v29 = ((int)v74 + v151 < (unsigned int)v74) + (_DWORD)v194;
          v82 += v29;
          if ( v82 < v165 )
            v84 -= 4LL * v163 * v29;
          v23 = v146;
          LODWORD(v74) = v74 + v151;
          result = -(__int64)v24;
          v80 -= 4LL * v24;
        }
        while ( v80 != v195 );
        v77 = v141;
        v79 = v148;
      }
      v158 = v77;
      v162 = v79;
    }
    v54 = v147;
    v65 = v145;
  }
  v89 = v137;
  v90 = v201;
  if ( v201 < (int)v137 )
    v89 = v201;
LABEL_68:
  if ( v65 < v90 )
  {
    v158 = v154 - 4LL * v198 * (v54 - v90);
    result = 4LL * v199 * (v144 - a6[3]);
    v96 = v153 - result;
    v162 = v153 - result;
    if ( v136 == v90 )
    {
      v97 = v136 - v65 - 1;
      v158 = v154 - 4LL * v198 * (v54 - v90) - 4LL * v198 * v97;
      result = v96 - 4LL * v199 * v97;
      v162 = result;
      if ( v65 < v89 )
      {
        v98 = (unsigned int)(v89 - v65);
        do
        {
          result = DNG_DrawRow(&v156);
          v158 += 4LL * v198;
          v162 += 4LL * v199;
          --v98;
        }
        while ( v98 );
      }
    }
    else if ( v90 > 0 )
    {
      DNG_InitStretch((__int64)v196, v90, v136, v90 - v89, v90 - v65);
      result = DNG_StretchCol((struct _DNGINTERNALDATA *)&v156, v196);
    }
  }
LABEL_69:
  v91 = v198;
LABEL_70:
  if ( a8 )
  {
    v126 = a1;
    if ( v155 <= *(_DWORD *)(a1 + 36) )
    {
      result = v152;
      if ( v152 <= *(_DWORD *)(a1 + 32) && v155 > 0 )
      {
        v127 = 4LL * v91;
        v128 = (unsigned int)v155;
        result = (unsigned int)(v152 / 2);
        v129 = (unsigned int)result;
        v130 = 0LL;
        do
        {
          v131 = (unsigned int *)(v130 + *(_QWORD *)(v126 + 56));
          v132 = &v131[v152 - 1];
          if ( (int)v129 > 0 )
          {
            v133 = v129;
            do
            {
              v134 = *v131++;
              result = *v132--;
              *(v131 - 1) = result;
              v132[1] = v134;
              --v133;
            }
            while ( v133 );
            v126 = a1;
          }
          v130 += v127;
          --v128;
        }
        while ( v128 );
      }
    }
  }
  return result;
}
