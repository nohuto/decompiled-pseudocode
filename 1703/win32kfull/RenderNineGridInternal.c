/*
 * XREFs of RenderNineGridInternal @ 0x1C00821F0
 * Callers:
 *     RenderNineGrid @ 0x1C0081F24 (RenderNineGrid.c)
 * Callees:
 *     DNG_DrawRow @ 0x1C0082F30 (DNG_DrawRow.c)
 *     DNG_StretchCol @ 0x1C00E3A8C (DNG_StretchCol.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00EF624 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     DNG_InitStretch @ 0x1C00F4AB8 (DNG_InitStretch.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

int __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128i *a4,
        int *a5,
        _DWORD *a6,
        __int64 a7,
        int a8)
{
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  unsigned __int64 v13; // xmm1_8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r14
  int v16; // esi
  unsigned __int64 v17; // rax
  int v18; // r9d
  int v19; // ebx
  __int64 v20; // r12
  int v21; // edi
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r12
  int v25; // r10d
  __int64 v26; // kr08_8
  __int64 v27; // r15
  int v28; // kr00_4
  int v29; // edx
  __int64 v30; // r8
  int v31; // ebx
  int v32; // r14d
  int v33; // esi
  __int64 v34; // r11
  int v35; // ecx
  int v36; // edx
  int v37; // ebx
  int v38; // r8d
  int v39; // r10d
  int v40; // esi
  int v41; // eax
  int v42; // r11d
  unsigned int v43; // r14d
  unsigned int v44; // r15d
  int v45; // esi
  int v46; // ecx
  int v47; // esi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rdx
  int v56; // ecx
  int v57; // r11d
  int v58; // r9d
  _DWORD *v59; // rdi
  int v60; // r11d
  int v61; // edx
  int v62; // r14d
  BOOL v63; // r15d
  int v64; // edx
  int v65; // esi
  int v66; // r9d
  int v67; // r8d
  int v68; // r10d
  int v69; // edx
  int v70; // ecx
  int v71; // r9d
  int v72; // r8d
  int v73; // edi
  int v74; // r15d
  int v75; // r11d
  int v76; // ecx
  int v77; // r10d
  unsigned __int64 v78; // rcx
  int v79; // r10d
  int v80; // r14d
  unsigned __int64 v81; // r9
  unsigned __int64 v82; // rsi
  unsigned __int64 v83; // r8
  unsigned __int64 v84; // rdx
  int v85; // edx
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // r10
  __int64 v89; // rdi
  __int64 v90; // rax
  unsigned int v91; // r14d
  __int64 v92; // rcx
  __int64 v93; // r15
  int v94; // r8d
  void *v95; // rcx
  char *v96; // rdx
  char *v97; // r9
  int v98; // edx
  int v99; // r10d
  __int64 v100; // rdx
  unsigned __int64 v101; // kr10_8
  int v102; // edx
  __int64 v103; // rdi
  __int64 v104; // r11
  unsigned __int64 v105; // rbx
  int v106; // eax
  __int64 v107; // rbx
  __int64 v108; // rbx
  __int64 v109; // rsi
  int v110; // ecx
  int v111; // r14d
  int v112; // edi
  const void *v113; // rdx
  char *v114; // rcx
  char *v115; // r9
  unsigned __int64 v116; // rcx
  int v117; // ecx
  __int64 v118; // rbx
  int v119; // edx
  int v120; // r15d
  int v121; // eax
  int v122; // edx
  int v123; // ecx
  int v124; // r12d
  int v125; // esi
  __int64 v126; // r14
  __int64 v127; // r12
  __int64 v128; // rdx
  int v129; // r15d
  unsigned __int64 v130; // rdi
  int v131; // r12d
  __int64 v132; // r14
  BOOL v133; // eax
  __int64 v134; // r9
  __int64 v135; // r11
  __int64 v136; // r14
  int *v137; // rdx
  int *v138; // r8
  __int64 v139; // r10
  int v140; // ecx
  int v142; // [rsp+30h] [rbp-D0h]
  int v143; // [rsp+30h] [rbp-D0h]
  int v144; // [rsp+34h] [rbp-CCh]
  int v145; // [rsp+38h] [rbp-C8h]
  int v146; // [rsp+40h] [rbp-C0h]
  int v147; // [rsp+48h] [rbp-B8h]
  int v148; // [rsp+50h] [rbp-B0h]
  int v149; // [rsp+50h] [rbp-B0h]
  int v150; // [rsp+58h] [rbp-A8h]
  int v151; // [rsp+58h] [rbp-A8h]
  __int64 v152; // [rsp+60h] [rbp-A0h]
  __int64 v153; // [rsp+60h] [rbp-A0h]
  int v154; // [rsp+68h] [rbp-98h]
  __int64 v155; // [rsp+70h] [rbp-90h]
  int v156; // [rsp+70h] [rbp-90h]
  __int64 v157; // [rsp+78h] [rbp-88h]
  __int64 v158; // [rsp+80h] [rbp-80h]
  int v159; // [rsp+88h] [rbp-78h]
  int v160; // [rsp+90h] [rbp-70h]
  __int64 v161; // [rsp+98h] [rbp-68h]
  int v162; // [rsp+A0h] [rbp-60h] BYREF
  int v163; // [rsp+A4h] [rbp-5Ch]
  __int64 v164; // [rsp+A8h] [rbp-58h]
  int v165; // [rsp+B0h] [rbp-50h]
  int v166; // [rsp+B4h] [rbp-4Ch]
  int v167; // [rsp+B8h] [rbp-48h]
  __int64 v168; // [rsp+C0h] [rbp-40h]
  int v169; // [rsp+C8h] [rbp-38h]
  int v170; // [rsp+CCh] [rbp-34h]
  unsigned int v171; // [rsp+D0h] [rbp-30h]
  int v172; // [rsp+D4h] [rbp-2Ch]
  int v173; // [rsp+DCh] [rbp-24h]
  int v174; // [rsp+E0h] [rbp-20h]
  int v175; // [rsp+E4h] [rbp-1Ch]
  int v176; // [rsp+E8h] [rbp-18h]
  int v177; // [rsp+ECh] [rbp-14h]
  int v178; // [rsp+F0h] [rbp-10h]
  unsigned int v179; // [rsp+F4h] [rbp-Ch]
  unsigned int v180; // [rsp+F8h] [rbp-8h]
  int v181; // [rsp+FCh] [rbp-4h]
  int v182; // [rsp+100h] [rbp+0h]
  int v183; // [rsp+104h] [rbp+4h]
  char v184; // [rsp+108h] [rbp+8h] BYREF
  char v185; // [rsp+128h] [rbp+28h] BYREF
  int v186; // [rsp+148h] [rbp+48h]
  int v187; // [rsp+14Ch] [rbp+4Ch]
  int v188; // [rsp+150h] [rbp+50h]
  int v189; // [rsp+154h] [rbp+54h]
  int v190; // [rsp+158h] [rbp+58h]
  unsigned __int64 v191; // [rsp+15Ch] [rbp+5Ch]
  int v192; // [rsp+16Ch] [rbp+6Ch]
  int v193; // [rsp+170h] [rbp+70h]
  int v194; // [rsp+174h] [rbp+74h]
  unsigned __int64 v195; // [rsp+178h] [rbp+78h]
  unsigned __int64 v196; // [rsp+180h] [rbp+80h]
  unsigned __int64 v197; // [rsp+188h] [rbp+88h]
  unsigned __int64 v198; // [rsp+190h] [rbp+90h]
  unsigned __int64 v199; // [rsp+1A0h] [rbp+A0h]
  _BYTE v200[40]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v202; // [rsp+220h] [rbp+120h]
  int v203; // [rsp+228h] [rbp+128h]
  int v204; // [rsp+240h] [rbp+140h]

  v10 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v11 = a3->m128i_i64[0];
  v12 = a4->m128i_i64[0];
  v13 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v154 = v10 - a3->m128i_i64[0];
  v14 = HIDWORD(a4->m128i_i64[0]);
  v15 = HIDWORD(v11);
  v16 = HIDWORD(v13) - HIDWORD(a4->m128i_i64[0]);
  v147 = v16;
  LODWORD(v17) = HIDWORD(v10) - HIDWORD(v11);
  v18 = v13 - a4->m128i_i64[0];
  v160 = HIDWORD(v10) - HIDWORD(v11);
  if ( v18 >= 128000000 || v16 >= 128000000 || v18 <= -128000000 || v16 <= -128000000 )
    return v17;
  v19 = v11 - v12;
  v20 = *(unsigned int *)(a1 + 40);
  v21 = v10 - v12;
  v22 = *(_QWORD *)(a1 + 48);
  v23 = *(_QWORD *)(a2 + 48);
  v24 = v22 + v20;
  v25 = *(_DWORD *)(a2 + 32);
  v198 = v23 + *(unsigned int *)(a2 + 40);
  v194 = *(_DWORD *)(a1 + 32);
  v26 = *(int *)(a1 + 64);
  v197 = v23;
  v145 = v19;
  v162 = v19;
  v146 = v15 - v14;
  v150 = HIDWORD(v10) - v14;
  v27 = v19;
  v202 = ((BYTE4(v26) & 3) + (int)v26) >> 2;
  v28 = *(_DWORD *)(a2 + 64);
  v165 = v202;
  v203 = v28 / 4;
  v169 = v28 / 4;
  v195 = v22;
  v196 = v24;
  v163 = v21;
  v157 = *(_QWORD *)(a1 + 56) + 4 * (v202 * (v16 - ((int)v15 - (int)v14) - 1) - (__int64)v19);
  v29 = a5[1];
  v30 = *a5;
  v31 = a5[3] - v29;
  v32 = a5[2] - v30;
  v204 = v31;
  v33 = v31 - 1;
  v34 = *(_QWORD *)(a2 + 56) + 4 * (v30 + v28 / 4 * v29 + (__int64)(v28 / 4 * (v31 - 1)));
  v158 = v34;
  if ( (*a6 & 0x20) != 0 )
  {
    v99 = ((BYTE4(v26) & 3) + (int)v26) >> 2;
    v108 = v157 + 4 * (v202 * v146 - (__int64)(v202 * (v147 - 1)));
    LODWORD(v17) = v145;
    v109 = v34 + 4 * (v203 * v146 - (__int64)(v203 * v33));
    v110 = v150;
    if ( v204 < v150 )
      v110 = v204;
    v151 = v110;
    if ( v32 < v21 )
      v21 = a5[2] - v30;
    if ( v21 > v145 )
    {
      v111 = v146;
      if ( v146 < v110 )
      {
        v112 = 4 * (v21 - v145);
        do
        {
          v113 = (const void *)(v109 + 4 * v27);
          v114 = (char *)(v108 + 4 * v27);
          if ( v112 <= 0 )
            break;
          v115 = &v114[v112];
          if ( v115 <= v114 )
            break;
          v17 = (unsigned __int64)v113 + v112;
          if ( v17 <= (unsigned __int64)v113 || v22 > (unsigned __int64)v114 || (unsigned __int64)v115 > v24 )
            break;
          if ( (v17 > v24 || v22 > (unsigned __int64)v113) && (v197 > (unsigned __int64)v113 || v17 > v198) )
            break;
          memmove(v114, v113, v112);
          v99 = ((BYTE4(v26) & 3) + (int)v26) >> 2;
          ++v111;
          LODWORD(v17) = v28 / 4;
          v108 += 4LL * v202;
          v109 += 4LL * v203;
        }
        while ( v111 < v151 );
      }
    }
    goto LABEL_72;
  }
  v188 = *a6 & 2;
  v167 = v154;
  v35 = a6[1];
  v36 = a6[2];
  v171 = v31;
  v166 = v18;
  v37 = 1;
  v170 = v32;
  v172 = v25;
  v173 = v35;
  v142 = v36;
  v176 = v36;
  if ( v18 - v36 - v35 <= 0 || v32 - v36 - v35 <= 0 )
  {
    v38 = 0;
    v183 = 0;
    if ( v36 + v35 )
    {
      v39 = v18 * v35 / (v36 + v35);
      v186 = v39;
    }
    else
    {
      v39 = 0;
      v186 = 0;
    }
    v40 = v18 - v39;
    v144 = v18 - v39;
    v187 = v18 - v39;
  }
  else
  {
    v38 = 1;
    v183 = 1;
    v39 = v35;
    v186 = v35;
    v40 = v36;
    v144 = v36;
    v187 = v36;
  }
  v41 = v21;
  v174 = v145;
  if ( v39 < v21 )
    v41 = v39;
  v175 = v41;
  if ( !v38 && v39 )
  {
    DNG_InitStretch((unsigned int)&v184, v39, v35, v145, v41);
    v36 = v176;
    v40 = v187;
    v24 = v196;
    v22 = v195;
    v39 = v186;
    v35 = v173;
    v32 = v170;
    v18 = v166;
    v21 = v163;
    v38 = v183;
    v142 = v176;
    v145 = v162;
    v144 = v187;
  }
  v42 = v18 - v40;
  v43 = v32 - v36 - v35;
  v44 = v18 - v40 - v39;
  v179 = v43;
  v148 = v18 - v40;
  v45 = v145;
  v180 = v44;
  if ( v39 > v145 )
    v45 = v39;
  v46 = v21;
  v181 = v45;
  if ( (int)(v44 + v39) < v21 )
    v46 = v44 + v39;
  v182 = v46;
  if ( v38 )
  {
    v47 = v45 - v39;
    v193 = v46 - v39;
    v48 = ((unsigned __int64)v43 << 32) - 1;
    v192 = v47;
    if ( v44 == 4LL )
      v49 = v48 >> 2;
    else
      v49 = v48 / v44;
    v50 = v49 + 1;
    v51 = (unsigned __int64)v43 << 32;
    if ( v44 == 4LL )
      v52 = v51 >> 2;
    else
      v52 = v51 / v44;
    v53 = v52 >> 1;
    v54 = HIDWORD(v50);
    v55 = HIDWORD(v53);
    v56 = v50;
    v191 = v50;
    if ( v47 > 5 )
    {
      v116 = (unsigned int)v53 + v47 * (unsigned __int64)(unsigned int)v50;
      LODWORD(v53) = v53 + v47 * v50;
      LODWORD(v55) = HIDWORD(v116) + v47 * HIDWORD(v50) + v55;
    }
    else if ( v47 > 0 )
    {
      v153 = (unsigned int)v47;
      do
      {
        v133 = (int)v53 + v56 < (unsigned int)v53;
        LODWORD(v53) = v53 + v56;
        LODWORD(v55) = v54 + v133 + v55;
        --v153;
      }
      while ( v153 );
      v42 = v148;
    }
    v189 = v55;
    v36 = v142;
    v190 = v53;
    v38 = v183;
  }
  if ( v42 <= v145 )
    v42 = v145;
  v57 = v42 - v44 - v39;
  v177 = v57;
  if ( v18 >= v21 )
    v18 = v21;
  v58 = v18 - v44 - v39;
  v178 = v58;
  if ( !v38 && v144 )
  {
    DNG_InitStretch((unsigned int)&v185, v144, v36, v57, v58);
    v24 = v196;
    v22 = v195;
    v145 = v162;
  }
  v59 = a6;
  v60 = v147;
  v61 = a6[3];
  v62 = a6[4];
  v149 = v61;
  v63 = v147 - v61 - v62 > 0 && v204 - v61 - v62 > 0;
  if ( v63 )
  {
    v143 = a6[3];
    v64 = a6[4];
  }
  else
  {
    if ( v62 + v61 )
      v117 = v147 * v61 / (v62 + v61);
    else
      v117 = 0;
    v143 = v117;
    v64 = v147 - v117;
  }
  v65 = v147 - v64;
  v66 = v146;
  v67 = v150;
  if ( v147 - v64 > v146 )
    v66 = v147 - v64;
  if ( v147 < v150 )
    v67 = v147;
  if ( v150 <= v65 )
    goto LABEL_39;
  v164 = v157;
  v168 = v158;
  if ( v62 != v64 )
  {
    if ( v64 > 0 )
    {
      DNG_InitStretch((unsigned int)v200, v64, v62, v147 - v67, v147 - v66);
      DNG_StretchCol((struct _DNGINTERNALDATA *)&v162);
      v68 = v162;
      v24 = v196;
      v22 = v195;
      v60 = v147;
      v145 = v162;
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v102 = v62 - v66 - v64 + v147 - 1;
  v164 = v157 - 4LL * v202 * v102;
  v168 = v158 - 4LL * v203 * v102;
  if ( v66 >= v67 )
  {
LABEL_39:
    v68 = v145;
    goto LABEL_40;
  }
  v103 = (unsigned int)(v67 - v66);
  do
  {
    DNG_DrawRow(&v162);
    v164 += 4LL * v202;
    v168 += 4LL * v203;
    --v103;
  }
  while ( v103 );
  v68 = v162;
  v24 = v196;
  v22 = v195;
  v60 = v147;
  v59 = a6;
  v145 = v162;
LABEL_40:
  v69 = v59[4];
  LODWORD(v17) = v59[3];
  v70 = v204;
  v71 = v60 - v17 - v69;
  v72 = v146;
  v73 = v204 - v17 - v69;
  if ( v63 && v73 > 0 && v71 > 0 && v146 < v65 )
  {
    v74 = v150;
    if ( v150 <= v143 )
    {
      v98 = v143;
      goto LABEL_70;
    }
    v75 = v146;
    v161 = v157 - 4LL * v202 * v69;
    v152 = v158 - 4LL * v203 * v69;
    if ( v149 > v146 )
      v75 = v149;
    if ( v188 )
    {
      v118 = v161 - 4LL * v202 * (v71 - 1) + 4LL * v202 * (v75 - v149);
      v164 = v118;
      v119 = (v75 - v149) % v73;
      v120 = v73 - v119;
      v168 = v152 - 4LL * v203 * (v73 - 1) + 4LL * v169 * v119;
      if ( v73 >= v71 )
        v121 = v71;
      else
        v121 = v73;
      v122 = v150;
      v123 = v150;
      v124 = v147 - v62;
      v156 = v147 - v62;
      if ( v147 - v62 < v150 )
        v123 = v147 - v62;
      if ( v75 + v121 >= v123 )
      {
        v125 = v150;
        if ( v124 < v150 )
          v125 = v147 - v62;
      }
      else
      {
        if ( v73 < v71 )
          v71 = v73;
        v125 = v71 + v75;
      }
      if ( v75 < v125 )
      {
        v126 = 4LL * v202;
        v127 = (unsigned int)(v125 - v75);
        do
        {
          DNG_DrawRow(&v162);
          if ( --v120 )
          {
            v128 = v168;
          }
          else
          {
            v120 = v73;
            v128 = v168 - 4LL * v203 * v73;
          }
          v118 = v126 + v164;
          v168 = 4LL * v203 + v128;
          v164 += v126;
          --v127;
        }
        while ( v127 );
        v68 = v162;
        v124 = v156;
        v122 = v150;
      }
      v129 = v122;
      v17 = 4LL * v202 * v73;
      v130 = v118 - v17;
      v168 = v118 - v17;
      if ( v124 < v122 )
        v129 = v124;
      if ( v125 < v129 )
      {
        v131 = 4 * v167;
        v132 = 4LL * v68;
        do
        {
          LODWORD(v17) = DNG_CopyMemory(
                           (struct _DNGINTERNALDATA *)&v162,
                           (void *)(v132 + v118),
                           (void *)(v132 + v130),
                           v131);
          if ( !(_DWORD)v17 )
            break;
          ++v125;
          LODWORD(v17) = 4 * v202;
          v118 += 4LL * v202;
          v130 += 4LL * v202;
          v164 = v118;
          v168 = v130;
        }
        while ( v125 < v129 );
      }
    }
    else
    {
      v76 = v150;
      if ( v147 - v62 < v150 )
        v76 = v147 - v62;
      v77 = v71 - v76;
      v78 = (unsigned int)v71;
      v79 = v149 + v77;
      v80 = v149 + v71 - v75;
      v81 = (((unsigned __int64)(unsigned int)v73 << 32) - 1) / (unsigned int)v71 + 1;
      v82 = (((unsigned __int64)(unsigned int)v73 << 32) / v78) >> 1;
      v83 = (((unsigned __int64)(unsigned int)v73 << 32) / v78) >> 33;
      v199 = HIDWORD(v81);
      v159 = v81;
      if ( v79 <= 5 )
      {
        if ( v79 > 0 )
        {
          v100 = (unsigned int)v79;
          do
          {
            v101 = __PAIR64__(v83, v82) + v81;
            LODWORD(v83) = (__PAIR64__(v83, v82) + v81) >> 32;
            LODWORD(v82) = v101;
            --v100;
          }
          while ( v100 );
        }
      }
      else
      {
        v84 = (unsigned int)v82 + v79 * (unsigned __int64)(unsigned int)v81;
        LODWORD(v82) = v82 + v79 * v81;
        LODWORD(v83) = HIDWORD(v84) + v79 * HIDWORD(v81) + v83;
      }
      v85 = v165;
      v86 = v161;
      v87 = v165 * v79;
      v88 = v152;
      v89 = v161 - 4 * v87;
      v90 = 4LL * v165 * v80;
      v91 = 0;
      v92 = v161 - v90;
      v17 = 4LL * v169 * (int)v83;
      v93 = v152 - v17;
      v155 = v92;
      if ( v89 != v92 )
      {
        do
        {
          if ( v37 )
          {
            v164 = v89;
            v168 = v93;
            DNG_DrawRow(&v162);
            v24 = v196;
            v22 = v195;
            v145 = v162;
          }
          else
          {
            v94 = 4 * v167;
            v17 = v145 + (__int64)v85;
            v95 = (void *)(v89 + 4LL * v145);
            v96 = (char *)(v89 + 4 * v17);
            if ( 4 * v167 <= 0 )
              break;
            v17 = (unsigned __int64)v95 + v94;
            if ( v17 <= (unsigned __int64)v95 )
              break;
            v97 = &v96[v94];
            if ( v97 <= v96 || v22 > (unsigned __int64)v95 || v17 > v24 )
              break;
            if ( (v22 > (unsigned __int64)v96 || (unsigned __int64)v97 > v24)
              && (v197 > (unsigned __int64)v96 || (unsigned __int64)v97 > v198) )
            {
              break;
            }
            memmove(v95, v96, v94);
          }
          v37 = ((int)v82 + v159 < (unsigned int)v82) + (_DWORD)v199;
          v91 += v37;
          if ( v91 < v171 )
            v93 -= 4LL * v169 * v37;
          LODWORD(v82) = v82 + v159;
          v85 = v165;
          v17 = -(__int64)v165;
          v89 -= 4LL * v165;
        }
        while ( v89 != v155 );
        v86 = v161;
        v88 = v152;
      }
      v164 = v86;
      v168 = v88;
    }
    v60 = v147;
    v72 = v146;
    v70 = v204;
  }
  v74 = v150;
  v98 = v143;
  if ( v143 < v150 )
    v74 = v143;
LABEL_70:
  if ( v72 < v98 )
  {
    v99 = ((BYTE4(v26) & 3) + (int)v26) >> 2;
    v104 = v157 - 4LL * v202 * (v60 - v98);
    v164 = v104;
    v17 = 4LL * v203 * (v70 - a6[3]);
    v105 = v158 - v17;
    v168 = v158 - v17;
    if ( v149 == v98 )
    {
      v106 = v149 - v72 - 1;
      v164 = v104 - 4LL * v202 * v106;
      v17 = v105 - 4LL * v203 * v106;
      v168 = v17;
      if ( v72 >= v74 )
        goto LABEL_72;
      v107 = (unsigned int)(v74 - v72);
      do
      {
        LODWORD(v17) = DNG_DrawRow(&v162);
        v164 += 4LL * v202;
        v168 += 4LL * v203;
        --v107;
      }
      while ( v107 );
    }
    else
    {
      if ( v98 <= 0 )
        goto LABEL_72;
      DNG_InitStretch((unsigned int)v200, v98, v149, v98 - v74, v98 - v72);
      LODWORD(v17) = DNG_StretchCol((struct _DNGINTERNALDATA *)&v162);
    }
  }
  v99 = ((BYTE4(v26) & 3) + (int)v26) >> 2;
LABEL_72:
  if ( a8 )
  {
    if ( v160 <= *(_DWORD *)(a1 + 36) )
    {
      LODWORD(v17) = v154;
      if ( v154 <= *(_DWORD *)(a1 + 32) && v160 > 0 )
      {
        v134 = 4LL * v99;
        v135 = (unsigned int)v160;
        LODWORD(v17) = v154 / 2;
        v136 = 0LL;
        do
        {
          v137 = (int *)(v136 + *(_QWORD *)(a1 + 56));
          v138 = &v137[v154 - 1];
          if ( v154 / 2 > 0 )
          {
            v139 = (unsigned int)(v154 / 2);
            do
            {
              v140 = *v137++;
              LODWORD(v17) = *v138--;
              *(v137 - 1) = v17;
              v138[1] = v140;
              --v139;
            }
            while ( v139 );
          }
          v136 += v134;
          --v135;
        }
        while ( v135 );
      }
    }
  }
  return v17;
}
