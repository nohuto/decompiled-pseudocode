/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C023FA08
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C023E370 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     ComputeRGBLUTAA @ 0x1C0078BBC (ComputeRGBLUTAA.c)
 *     CachedHalftonePattern @ 0x1C00797DC (CachedHalftonePattern.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ComputeBGRMappingTable @ 0x1C023E944 (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, _BYTE *a4, int a5)
{
  __int64 v9; // r13
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  int v13; // edi
  __int64 v14; // xmm1_8
  int v15; // ebx
  unsigned int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // r15d
  HSEMAPHORE v19; // rcx
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int16 *v26; // r11
  unsigned int v27; // r9d
  unsigned __int16 *v28; // r8
  _BYTE *v29; // r10
  int v30; // r12d
  __int64 v31; // rdi
  unsigned __int16 *v32; // r8
  unsigned int v33; // edx
  char v34; // al
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int16 *v38; // r11
  unsigned int v39; // r9d
  unsigned __int16 *v40; // r8
  _BYTE *v41; // r10
  unsigned __int16 *v42; // r8
  char v43; // dl
  unsigned int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int16 *v47; // r11
  unsigned int v48; // r9d
  unsigned __int16 *v49; // r8
  _BYTE *v50; // r10
  int v51; // r12d
  __int64 v52; // rdi
  unsigned __int16 *v53; // r8
  unsigned int v54; // edx
  char v55; // al
  unsigned int v56; // ecx
  unsigned int v57; // eax
  char *v58; // r13
  unsigned int v59; // r15d
  unsigned int v60; // edi
  const void *v61; // rdi
  unsigned int v62; // esi
  size_t v63; // r12
  char v64; // r10
  __int64 v65; // rdx
  unsigned int v66; // ecx
  __int64 v67; // r9
  int v68; // edi
  unsigned __int16 *v69; // rax
  unsigned int v70; // ecx
  unsigned __int16 *v71; // r8
  _BYTE *v72; // r11
  unsigned __int16 *v73; // rsi
  unsigned int v74; // r14d
  int v75; // eax
  char v76; // r9
  unsigned int v77; // r8d
  unsigned int v78; // r10d
  char v79; // r11
  unsigned int v80; // ecx
  int v81; // eax
  _BYTE *v82; // r11
  unsigned int v83; // r9d
  char v84; // r10
  __int64 v85; // rdx
  unsigned int v86; // ecx
  __int64 v87; // r11
  int v88; // edi
  unsigned __int16 *v89; // rax
  unsigned int v90; // ecx
  unsigned __int16 *v91; // r8
  _BYTE *v92; // r15
  unsigned int v93; // r11d
  char v94; // dl
  int v95; // eax
  unsigned int v96; // ecx
  int v97; // r11d
  int v98; // eax
  unsigned __int16 *v99; // r13
  int v100; // ecx
  __int64 v101; // rax
  __int64 v102; // rcx
  unsigned __int16 *v103; // r9
  unsigned __int16 *v104; // r8
  _BYTE *v105; // r10
  int v106; // r11d
  __int64 v107; // rdi
  unsigned __int16 *v108; // r8
  int v109; // eax
  unsigned __int64 v110; // rdx
  __int64 v111; // rax
  unsigned int v112; // r11d
  __int64 v113; // rcx
  int v114; // edi
  unsigned __int16 *v115; // r10
  unsigned int v116; // r11d
  unsigned __int16 *v117; // r9
  _BYTE *v118; // rdi
  int v119; // eax
  unsigned __int64 v120; // r8
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int16 *v123; // r9
  unsigned __int16 *v124; // r8
  _BYTE *v125; // r10
  int v126; // r11d
  unsigned __int16 *v127; // r8
  int v128; // eax
  unsigned __int64 v129; // rdx
  __int64 v130; // rcx
  unsigned int v131; // eax
  __int64 v132; // rdx
  int v133; // edi
  unsigned __int16 *v134; // r11
  unsigned int v135; // r9d
  unsigned int v136; // eax
  unsigned __int16 *v137; // r10
  unsigned int v138; // r8d
  _DWORD *v139; // rdi
  unsigned int v140; // edx
  int v141; // eax
  int v142; // ecx
  int v144; // r11d
  __int64 v145; // r15
  unsigned __int16 *v146; // rdx
  unsigned __int16 *v147; // r8
  _BYTE *v148; // r9
  int v149; // r10d
  unsigned __int16 *v150; // r8
  int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rcx
  unsigned __int16 *v154; // r9
  unsigned __int16 *v155; // r8
  _BYTE *v156; // r10
  int v157; // r11d
  __int64 v158; // rdi
  unsigned __int16 *v159; // r8
  int v160; // eax
  unsigned __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rcx
  unsigned __int16 *v164; // r10
  unsigned int v165; // r9d
  unsigned __int16 *v166; // r8
  _BYTE *v167; // r11
  unsigned __int16 *v168; // r8
  int v169; // eax
  char v170; // dl
  unsigned int v171; // ecx
  unsigned int v172; // [rsp+38h] [rbp-C8h] BYREF
  int v173; // [rsp+3Ch] [rbp-C4h]
  unsigned int v174; // [rsp+40h] [rbp-C0h]
  unsigned int v175; // [rsp+44h] [rbp-BCh]
  __int64 v176; // [rsp+48h] [rbp-B8h]
  __int128 v177; // [rsp+50h] [rbp-B0h]
  __int64 v178; // [rsp+60h] [rbp-A0h]
  _BYTE *v179; // [rsp+68h] [rbp-98h]
  unsigned int v180; // [rsp+70h] [rbp-90h]
  _BYTE *v181; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v182; // [rsp+80h] [rbp-80h] BYREF
  int v183; // [rsp+98h] [rbp-68h]
  unsigned __int8 v184; // [rsp+A5h] [rbp-5Bh]
  unsigned __int8 v185; // [rsp+A6h] [rbp-5Ah]
  unsigned __int8 v186; // [rsp+A7h] [rbp-59h]
  int v187; // [rsp+D0h] [rbp-30h]
  unsigned int v188; // [rsp+D4h] [rbp-2Ch]
  int v189; // [rsp+D8h] [rbp-28h]
  unsigned int v190; // [rsp+DCh] [rbp-24h]
  _BYTE *v191; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v192; // [rsp+E8h] [rbp-18h]
  unsigned int v193; // [rsp+F0h] [rbp-10h]
  unsigned int v194; // [rsp+F4h] [rbp-Ch]

  v179 = (_BYTE *)a3;
  v181 = (_BYTE *)a1;
  v9 = 0LL;
  ComputeRGBLUTAA((_DWORD *)a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(v11, a3, a2, (__int64)&v172) == 1 )
  {
    v190 = CachedHalftonePattern(a1, a3, (__int64)&v182, 0, 0, 0);
    v10 = v190;
    if ( (int)v190 > 0 )
    {
      v12 = *(_OWORD *)(a1 + 3960);
      v13 = *(unsigned __int16 *)(a1 + 166);
      v14 = *(_QWORD *)(a1 + 3976);
      v15 = *(_DWORD *)(a3 + 56);
      v16 = *(unsigned __int16 *)(a1 + 170);
      v173 = v13;
      v178 = v14;
      v177 = v12;
      if ( (v15 & 0x400000) != 0 )
        v9 = (__int64)*(&p8BPPXlate + BYTE12(v177));
      v17 = a1 + 548;
      v174 = v15 & 0x2000000;
      if ( (v15 & 0x2000000) == 0 )
        v17 = v9;
      v176 = v17;
      v18 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v172 + 3984);
      v19 = (HSEMAPHORE)*((_QWORD *)v181 + 1);
      v20 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE1(v172) + 256) + 3984);
      v21 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE2(v172) + 512) + 3984);
      v172 = v21;
      EngReleaseSemaphore(v19);
      v22 = (unsigned __int8)v179[31];
      if ( v22 > 0xF9 )
      {
        if ( v22 == 250 )
        {
          if ( v174 )
          {
            if ( v16 )
            {
              v152 = v183;
              v153 = a5;
              v154 = v182;
              do
              {
                v155 = v154;
                v156 = a4;
                v154 = (unsigned __int16 *)((char *)v154 + v152);
                a4 += v153;
                --v16;
                v157 = v13;
                if ( v13 )
                {
                  v158 = v176;
                  v159 = v155 + 1;
                  do
                  {
                    v160 = *v159;
                    v161 = (v18 - *(v159 - 1)) & 0x30000 | (unsigned __int64)((v21 - v159[1]) & 0xE00000);
                    v159 += 3;
                    *v156++ = *(_BYTE *)((((v20 - v160) & 0x1C0000 | v161) >> 16) + v158);
                    --v157;
                  }
                  while ( v157 );
                  v13 = v173;
                  v152 = v183;
                  v153 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v16 )
          {
            v162 = v183;
            v163 = a5;
            v164 = v182;
            v165 = v172;
            do
            {
              v166 = v164;
              v167 = a4;
              v164 = (unsigned __int16 *)((char *)v164 + v162);
              a4 += v163;
              --v16;
              if ( v13 )
              {
                v168 = v166 + 1;
                do
                {
                  v169 = *v168;
                  v170 = ((v165 - v168[1]) >> 16) & 0xE0;
                  v171 = (v18 - *(v168 - 1)) >> 16;
                  v168 += 3;
                  *v167++ = ((v20 - v169) >> 16) & 0x1C | v171 & 3 | v170;
                  --v13;
                }
                while ( v13 );
                v13 = v173;
                v162 = v183;
                v163 = a5;
              }
            }
            while ( v16 );
          }
        }
        else if ( v22 == 251 )
        {
          v173 = v18 + v21 + v20;
          v144 = dwGrayIdxHB[BYTE1(v173)] + (unsigned __int16)wGrayIdxLB[(unsigned __int8)v173];
          if ( v16 )
          {
            v145 = v183;
            v146 = v182;
            do
            {
              v147 = v146;
              v148 = a4;
              v146 = (unsigned __int16 *)((char *)v146 + v145);
              a4 += a5;
              --v16;
              v149 = v13;
              if ( v13 )
              {
                v150 = v147 + 1;
                do
                {
                  v151 = *v150;
                  v150 += 3;
                  *v148++ = BYTE13(v177) ^ ((unsigned int)(v144 - v151) >> 12);
                  --v149;
                }
                while ( v149 );
              }
            }
            while ( v16 );
          }
        }
        else if ( v22 <= 0xFD )
        {
          if ( v16 )
          {
            v130 = v183;
            v131 = v13;
            v132 = a5;
            v133 = v13 & 1;
            v134 = v182;
            v135 = v172;
            v136 = v131 >> 1;
            LODWORD(v176) = v136;
            v173 = v133;
            do
            {
              v137 = v134;
              v179 = a4;
              v134 = (unsigned __int16 *)((char *)v134 + v130);
              a4 += v132;
              --v16;
              v138 = v136;
              if ( v136 )
              {
                v139 = v179;
                do
                {
                  v140 = DWORD2(v177) & (v135 - v137[5]) | (((unsigned int)v177 & (v18 - *v137) | DWORD1(v177) & (v20 - v137[1]) | DWORD2(v177) & (v135 - v137[2])) >> 16);
                  v141 = v137[3];
                  v142 = DWORD1(v177) & (v20 - v137[4]);
                  v137 += 6;
                  *v139++ = HIDWORD(v177) ^ (v177 & (v18 - v141) | v142 | v140);
                  --v138;
                }
                while ( v138 );
                v179 = v139;
                v133 = v173;
              }
              if ( v133 )
                *(_WORD *)v179 = HIWORD(v177) ^ (WORD1(v177) & ((v18 - *v137) >> 16) | WORD3(v177) & ((v20 - v137[1]) >> 16) | WORD5(v177) & ((v135 - v137[2]) >> 16));
              v136 = v176;
              v130 = v183;
              v132 = a5;
            }
            while ( v16 );
          }
        }
        else if ( v22 == 254 )
        {
          if ( v16 )
          {
            v121 = v183;
            v122 = a5;
            v123 = v182;
            do
            {
              v124 = v123;
              v125 = a4;
              v123 = (unsigned __int16 *)((char *)v123 + v121);
              a4 += v122;
              --v16;
              v126 = v13;
              if ( v13 )
              {
                v127 = v124 + 1;
                do
                {
                  v128 = *v127;
                  v129 = (v21 - v127[1]) & 0x70000 | (unsigned __int64)((v18 - *(v127 - 1)) & 0x1C00000);
                  v127 += 3;
                  *v125++ = VGA256Xlate[((v20 - v128) & 0x380000 | v129) >> 16];
                  --v126;
                }
                while ( v126 );
                v13 = v173;
                v121 = v183;
                v122 = a5;
              }
            }
            while ( v16 );
          }
        }
        else if ( v16 )
        {
          v111 = v183;
          v112 = v13;
          v113 = a5;
          v114 = v13 & 1;
          v115 = v182;
          v116 = v112 >> 1;
          v180 = v116;
          v173 = v114;
          do
          {
            v117 = v115;
            v179 = a4;
            v115 = (unsigned __int16 *)((char *)v115 + v111);
            a4 += v113;
            --v16;
            v192 = (unsigned __int64)v115;
            if ( v116 )
            {
              v118 = v179;
              do
              {
                v119 = *v117;
                v120 = DWORD1(v177) & (v20 - v117[1]) | DWORD2(v177) & (v21 - v117[2]) | HIDWORD(v177) & (v18 - v117[3]) | (unsigned int)v178 & (v20 - v117[4]) | (unsigned __int64)(HIDWORD(v178) & (v21 - v117[5]));
                v117 += 6;
                *v118++ = VGA16Xlate[(((unsigned int)v177 & (v18 - v119) | v120) ^ 0x770000) >> 16];
                --v116;
              }
              while ( v116 );
              v115 = (unsigned __int16 *)v192;
              v116 = v180;
              v179 = v118;
              v114 = v173;
            }
            if ( v114 )
              *v179 = VGA16Xlate[(((unsigned int)v177 & (v18 - *v117) | DWORD1(v177) & (v20 - v117[1]) | (unsigned __int64)(DWORD2(v177) & (v21 - v117[2]))) ^ 0x700000) >> 16];
            v111 = v183;
            v113 = a5;
          }
          while ( v16 );
        }
        return v190;
      }
      if ( v22 >= 0xF8 )
      {
        if ( v16 )
        {
          v101 = v183;
          v102 = a5;
          v103 = v182;
          do
          {
            v104 = v103;
            v105 = a4;
            v103 = (unsigned __int16 *)((char *)v103 + v101);
            a4 += v102;
            --v16;
            v106 = v13;
            if ( v13 )
            {
              v107 = v176;
              v108 = v104 + 1;
              do
              {
                v109 = *v108;
                v110 = (v18 - *(v108 - 1)) & 0x70000 | (unsigned __int64)((v21 - v108[1]) & 0x1C00000);
                v108 += 3;
                *v105++ = *(_BYTE *)((((v20 - v109) & 0x380000 | v110) >> 16) + v107);
                --v106;
              }
              while ( v106 );
              v13 = v173;
              v101 = v183;
              v102 = a5;
            }
          }
          while ( v16 );
        }
        return v190;
      }
      if ( v22 == 1 )
      {
        v83 = ((v18 + v21 + v20) ^ 0xFFF0) >> 4;
        v84 = -((v15 & 0x4000) == 0);
        if ( v16 )
        {
          v85 = v183;
          v86 = v13;
          v87 = a5;
          v88 = v13 & 7;
          v89 = v182;
          v90 = v86 >> 3;
          LODWORD(v176) = v90;
          do
          {
            v91 = v89;
            v181 = a4;
            v92 = a4;
            a4 += v87;
            v192 = (unsigned __int64)v89 + v85;
            --v16;
            v93 = v90;
            if ( v90 )
            {
              do
              {
                v94 = ((v83 - v91[7]) >> 16) & 0x20 | ((v83 - v91[16]) >> 16) & 4 | ((v83 - v91[19]) >> 16) & 2 | ((v83 - v91[4]) >> 16) & 0x40 | ((v83 - v91[22]) >> 16) & 1 | ((v83 - v91[1]) >> 16) & 0x80;
                v95 = v91[10];
                v96 = (v83 - v91[13]) >> 16;
                v91 += 24;
                *v92++ = v84 ^ (((v83 - v95) >> 16) & 0x10 | v96 & 8 | v94);
                --v93;
              }
              while ( v93 );
              v181 = v92;
            }
            v97 = v88;
            if ( v88 )
            {
              v98 = 0;
              v99 = v91 + 1;
              do
              {
                v100 = *v99;
                v99 += 3;
                v98 = (2 * v98) | (v83 - v100) & 0x10000;
                --v97;
              }
              while ( v97 );
              v173 = v98;
              BYTE2(v173) = v84 ^ BYTE2(v98);
              *v181 = (unsigned int)(v173 << (8 - v88)) >> 16;
            }
            v89 = (unsigned __int16 *)v192;
            v90 = v176;
            v85 = v183;
            v87 = a5;
          }
          while ( v16 );
        }
        return v190;
      }
      if ( v22 == 2 )
      {
        v64 = (v15 & 0x4000) == 0 ? 0x77 : 0;
        if ( v16 )
        {
          v65 = v183;
          v66 = v13;
          v67 = a5;
          v68 = v13 & 1;
          v69 = v182;
          v70 = v66 >> 1;
          LODWORD(v176) = v70;
          v173 = v68;
          do
          {
            --v16;
            v181 = a4;
            v71 = v69;
            v180 = v16;
            v72 = a4;
            a4 += v67;
            v192 = (unsigned __int64)v69 + v65;
            v191 = a4;
            if ( v70 )
            {
              v73 = v69;
              v175 = WORD1(v177);
              v74 = WORD1(v177);
              v172 = HIWORD(HIDWORD(v177));
              v174 = HIWORD(DWORD1(v177));
              v188 = WORD1(v178);
              v187 = HIWORD(HIDWORD(v178));
              v189 = HIWORD(DWORD2(v177));
              do
              {
                v75 = v73[5];
                v175 = v70 - 1;
                v76 = v187 & ((v21 - v75) >> 16);
                v77 = v20 - v73[4];
                v78 = v20 - v73[1];
                v79 = v189 & ((v21 - v73[2]) >> 16);
                v80 = v18 - v73[3];
                v81 = *v73;
                v73 += 6;
                LOBYTE(v78) = v172 & BYTE2(v80) | v174 & BYTE2(v78);
                v70 = v175;
                LOBYTE(v78) = v79 | v188 & BYTE2(v77) | v76 | v74 & ((v18 - v81) >> 16) | v78;
                v82 = v181;
                *v181 = ((v15 & 0x4000) == 0 ? 0x77 : 0) ^ v78;
                v72 = v82 + 1;
                v181 = v72;
              }
              while ( v70 );
              a4 = v191;
              v68 = v173;
              v64 = (v15 & 0x4000) == 0 ? 0x77 : 0;
              v179 = v73;
              v71 = v73;
              v16 = v180;
            }
            if ( v68 )
              *v72 = v64 ^ (((v18 - *v71) >> 16) & BYTE2(v177) | ((v20 - v71[1]) >> 16) & BYTE6(v177) | ((v21 - v71[2]) >> 16) & BYTE10(v177));
            v69 = (unsigned __int16 *)v192;
            v70 = v176;
            v65 = v183;
            v67 = a5;
          }
          while ( v16 );
        }
        return v190;
      }
      v23 = 4;
      if ( v22 > 4 )
      {
        if ( v22 <= 6 )
        {
          a4[v184] = ~(_BYTE)v172;
          a4[v185] = ~(_BYTE)v20;
          a4[v186] = ~(_BYTE)v18;
          if ( (_BYTE)v22 == 5 )
          {
            v23 = 3;
            v57 = 3 * v13;
          }
          else
          {
            a4[3] = 0;
            v57 = 4 * v13;
          }
          v58 = &a4[v23];
          v174 = v57;
          v59 = v57 - v23;
          if ( v57 != v23 )
          {
            do
            {
              v60 = v23;
              if ( v23 > v59 )
                v60 = v59;
              memmove(v58, a4, v60);
              v58 += v60;
              v23 += v60;
              v59 -= v60;
            }
            while ( v59 );
            v57 = v174;
          }
          v61 = a4;
          v62 = v16 - 1;
          if ( v62 )
          {
            v63 = v57;
            do
            {
              a4 += a5;
              memmove(a4, v61, v63);
              --v62;
            }
            while ( v62 );
          }
          return v190;
        }
        if ( v22 > 0xF4 )
        {
          if ( v22 <= 0xF6 )
          {
            if ( v16 )
            {
              v45 = v183;
              v46 = a5;
              v47 = v182;
              v48 = v172;
              do
              {
                v49 = v47;
                v50 = a4;
                v47 = (unsigned __int16 *)((char *)v47 + v45);
                a4 += v46;
                --v16;
                v51 = v13;
                if ( v13 )
                {
                  v52 = v176;
                  v53 = v49 + 1;
                  v192 = __PAIR64__(v20, v48);
                  v194 = v18;
                  v193 = v18;
                  do
                  {
                    v54 = v53[1];
                    --v51;
                    v175 = v54;
                    v55 = BYTE14(v177);
                    v56 = *((_DWORD *)&v192
                          + ((v48 >= v20) | (unsigned __int64)(*((_DWORD *)&v192 + (v48 >= v20)) >= v18 ? 2 : 0))) >> 21;
                    if ( v56 < v54 )
                    {
                      v174 = *v53;
                      if ( v56 >= v174 || (v172 = *(v53 - 1), v56 >= v172) )
                        v55 = BYTE14(v177);
                      else
                        v55 = *(_BYTE *)((((unsigned __int16)(v18 - v172) & (unsigned __int16)(v172 - v177) & 0x7000 | (v20 - v174) & (v174 - DWORD1(v177)) & 0x38000 | (unsigned __int64)((v48 - v175) & (v54 - DWORD2(v177)) & 0x1C0000)) >> 12)
                                       + v52);
                    }
                    *v50 = v55;
                    v53 += 3;
                    ++v50;
                  }
                  while ( v51 );
                  v13 = v173;
                  v45 = v183;
                  v46 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v174 )
          {
            if ( v16 )
            {
              v24 = v183;
              v25 = a5;
              v26 = v182;
              v27 = v172;
              do
              {
                v28 = v26;
                v29 = a4;
                v26 = (unsigned __int16 *)((char *)v26 + v24);
                a4 += v25;
                --v16;
                v30 = v13;
                if ( v13 )
                {
                  v31 = v176;
                  v32 = v28 + 1;
                  v192 = __PAIR64__(v20, v27);
                  v194 = v18;
                  v193 = v18;
                  do
                  {
                    v33 = v32[1];
                    --v30;
                    v175 = v33;
                    v34 = BYTE14(v177);
                    v35 = *((_DWORD *)&v192
                          + ((v27 >= v20) | (unsigned __int64)(*((_DWORD *)&v192 + (v27 >= v20)) >= v18 ? 2 : 0))) >> 21;
                    if ( v35 < v33 )
                    {
                      v172 = *v32;
                      if ( v35 >= v172 || (v174 = *(v32 - 1), v35 >= v174) )
                        v34 = BYTE14(v177);
                      else
                        v34 = *(_BYTE *)((((unsigned __int16)(v18 - v174) & (unsigned __int16)(v174 - v177) & 0x3000 | (v20 - v172) & (v172 - DWORD1(v177)) & 0x1C000 | (unsigned __int64)((v27 - v175) & (v33 - DWORD2(v177)) & 0xE0000)) >> 12)
                                       + v31);
                    }
                    *v29 = v34;
                    v32 += 3;
                    ++v29;
                  }
                  while ( v30 );
                  v13 = v173;
                  v24 = v183;
                  v25 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v16 )
          {
            v36 = v183;
            v37 = a5;
            v38 = v182;
            v39 = v172;
            do
            {
              v40 = v38;
              v41 = a4;
              v38 = (unsigned __int16 *)((char *)v38 + v36);
              a4 += v37;
              --v16;
              if ( v13 )
              {
                v192 = __PAIR64__(v20, v39);
                v42 = v40 + 1;
                v194 = v18;
                v193 = v18;
                do
                {
                  v43 = BYTE14(v177);
                  --v13;
                  v44 = *((_DWORD *)&v192
                        + ((v39 >= v20) | (unsigned __int64)(*((_DWORD *)&v192 + (v39 >= v20)) >= v18 ? 2 : 0))) >> 21;
                  v175 = v42[1];
                  if ( v44 < v175 )
                  {
                    v174 = *v42;
                    if ( v44 < v174 )
                    {
                      v172 = *(v42 - 1);
                      if ( v44 < v172 )
                        v43 = ((v18 - v172) >> 12) & ((v172 - (unsigned int)v177) >> 12) & 3 | ((v20 - v174) >> 12) & ((v174 - DWORD1(v177)) >> 12) & 0x1C | ((v39 - v175) >> 12) & ((v175 - DWORD2(v177)) >> 12) & 0xE0;
                    }
                  }
                  *v41 = v43;
                  v42 += 3;
                  ++v41;
                }
                while ( v13 );
                v13 = v173;
                v36 = v183;
                v37 = a5;
              }
            }
            while ( v16 );
          }
          return v190;
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
