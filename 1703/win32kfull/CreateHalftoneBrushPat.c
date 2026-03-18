/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C023E0D8
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C023CA38 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     CachedHalftonePattern @ 0x1C00339A0 (CachedHalftonePattern.c)
 *     ComputeRGBLUTAA @ 0x1C0033BA4 (ComputeRGBLUTAA.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ComputeBGRMappingTable @ 0x1C023D020 (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, _BYTE *a4, int a5)
{
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // edi
  __int64 v13; // xmm1_8
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned __int16 *v16; // rcx
  HSEMAPHORE v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int16 *v24; // r12
  unsigned int v25; // r9d
  unsigned __int16 *v26; // r10
  _BYTE *v27; // r11
  int v28; // r13d
  unsigned int v29; // r8d
  unsigned __int16 *v30; // r10
  unsigned __int16 *v31; // r12
  char v32; // r14
  unsigned int v33; // edi
  unsigned int v34; // edx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int16 *v40; // r13
  unsigned int v41; // r9d
  unsigned __int16 *v42; // r10
  _BYTE *v43; // r11
  unsigned int v44; // edx
  unsigned __int16 *v45; // r10
  char v46; // r8
  unsigned int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int16 *v51; // r12
  unsigned int v52; // r9d
  unsigned __int16 *v53; // r10
  _BYTE *v54; // r11
  int v55; // r13d
  unsigned int v56; // r8d
  unsigned __int16 *v57; // r10
  unsigned __int16 *v58; // r12
  char v59; // r14
  unsigned int v60; // edi
  unsigned int v61; // edx
  unsigned int v62; // eax
  unsigned int v63; // ecx
  char v64; // al
  unsigned int v65; // eax
  char *v66; // r13
  unsigned int v67; // r15d
  unsigned int v68; // edi
  const void *v69; // rdi
  unsigned int v70; // esi
  __int64 v71; // r15
  size_t v72; // r12
  char v73; // r10
  __int64 v74; // rax
  unsigned int v75; // r13d
  unsigned int v76; // r9d
  unsigned __int64 v77; // rcx
  unsigned __int16 *v78; // r12
  int v79; // edi
  unsigned int v80; // r13d
  unsigned int v81; // r8d
  unsigned __int16 *v82; // r11
  unsigned int v83; // ecx
  int v84; // edi
  unsigned int v85; // r12d
  int v86; // esi
  int v87; // r14d
  int v88; // r13d
  int v89; // eax
  char v90; // dl
  int v91; // eax
  unsigned int v92; // ecx
  char v93; // dl
  int v94; // ecx
  unsigned __int16 *v95; // rax
  char v96; // dl
  unsigned int v97; // r9d
  char v98; // r10
  __int64 v99; // rdx
  unsigned int v100; // ecx
  unsigned __int16 *v101; // rax
  int v102; // edi
  unsigned int v103; // ecx
  unsigned __int16 *v104; // r8
  unsigned __int16 *v105; // r13
  unsigned __int16 *v106; // r11
  unsigned int v107; // r8d
  char v108; // dl
  int v109; // eax
  unsigned int v110; // ecx
  int v111; // r11d
  int v112; // eax
  unsigned __int16 *v113; // r13
  int v114; // ecx
  __int64 v115; // rax
  unsigned __int64 v116; // rcx
  unsigned __int16 *v117; // r11
  unsigned int v118; // r9d
  unsigned int v119; // r8d
  unsigned __int16 *v120; // r10
  _BYTE *v121; // r12
  int v122; // r13d
  unsigned __int16 *v123; // rdi
  unsigned __int16 *v124; // r10
  int v125; // eax
  unsigned __int64 v126; // rdx
  __int64 v127; // rax
  unsigned int v128; // r13d
  unsigned int v129; // r9d
  unsigned __int16 *v130; // rcx
  unsigned __int16 *v131; // r12
  int v132; // edi
  unsigned int v133; // r13d
  unsigned int v134; // r10d
  unsigned __int16 *v135; // r11
  unsigned __int16 *v136; // rdi
  int v137; // eax
  unsigned __int64 v138; // r8
  __int64 v139; // rax
  unsigned __int64 v140; // rcx
  unsigned __int16 *v141; // r11
  unsigned int v142; // r9d
  unsigned int v143; // r8d
  unsigned __int16 *v144; // r10
  _BYTE *v145; // r12
  int v146; // r13d
  unsigned __int16 *v147; // r10
  int v148; // eax
  unsigned __int64 v149; // rdx
  __int64 v150; // rax
  unsigned int v151; // r13d
  unsigned __int16 *v152; // r11
  unsigned __int64 v153; // rcx
  unsigned int v154; // r9d
  int v155; // edi
  unsigned int v156; // r13d
  unsigned int v157; // r8d
  unsigned __int16 *v158; // r10
  unsigned __int16 *v159; // rdi
  unsigned int v160; // edx
  int v161; // eax
  int v162; // ecx
  int v164; // r11d
  __int64 v165; // r15
  unsigned __int16 *v166; // rdx
  unsigned __int16 *v167; // r8
  _BYTE *v168; // r9
  int v169; // r10d
  unsigned __int16 *v170; // r8
  int v171; // eax
  __int64 v172; // rax
  unsigned __int64 v173; // rcx
  unsigned __int16 *v174; // r11
  unsigned int v175; // r9d
  unsigned int v176; // r8d
  unsigned __int16 *v177; // r10
  _BYTE *v178; // r12
  int v179; // r13d
  unsigned __int16 *v180; // rdi
  unsigned __int16 *v181; // r10
  int v182; // eax
  unsigned __int64 v183; // rdx
  __int64 v184; // rax
  unsigned __int64 v185; // rcx
  unsigned __int16 *v186; // r11
  unsigned int v187; // r9d
  unsigned int v188; // r8d
  unsigned __int16 *v189; // r10
  _BYTE *v190; // r13
  unsigned __int16 *v191; // r10
  int v192; // eax
  char v193; // dl
  unsigned int v194; // ecx
  unsigned int v195; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v196; // [rsp+38h] [rbp-C8h]
  unsigned int v197; // [rsp+3Ch] [rbp-C4h]
  int v198; // [rsp+40h] [rbp-C0h]
  int v199; // [rsp+44h] [rbp-BCh]
  int v200; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v201; // [rsp+50h] [rbp-B0h]
  unsigned int v202; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v203; // [rsp+60h] [rbp-A0h]
  __int128 v204; // [rsp+68h] [rbp-98h]
  __int64 v205; // [rsp+78h] [rbp-88h]
  unsigned int v206; // [rsp+88h] [rbp-78h]
  _BYTE *v207; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v208; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v209; // [rsp+A0h] [rbp-60h] BYREF
  int v210; // [rsp+B8h] [rbp-48h]
  unsigned __int8 v211; // [rsp+C5h] [rbp-3Bh]
  unsigned __int8 v212; // [rsp+C6h] [rbp-3Ah]
  unsigned __int8 v213; // [rsp+C7h] [rbp-39h]
  unsigned int v214; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v215; // [rsp+F8h] [rbp-8h]
  unsigned int v216; // [rsp+100h] [rbp+0h]
  unsigned int v217; // [rsp+104h] [rbp+4h]

  v207 = (_BYTE *)a3;
  v198 = a5;
  v201 = 0LL;
  ComputeRGBLUTAA((_DWORD *)a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v9 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(v10, a3, a2, &v195) == 1 )
  {
    v214 = CachedHalftonePattern(a1, a3, (__int64)&v209, 0, 0, 0);
    v9 = v214;
    if ( (int)v214 > 0 )
    {
      v11 = *(_DWORD *)(a3 + 56);
      v12 = *(unsigned __int16 *)(a1 + 166);
      v13 = *(_QWORD *)(a1 + 3976);
      v14 = *(unsigned __int16 *)(a1 + 170);
      v199 = v12;
      v205 = v13;
      v197 = v11;
      v204 = *(_OWORD *)(a1 + 3960);
      if ( (v11 & 0x400000) != 0 )
        v201 = (unsigned __int16 *)*(&p8BPPXlate + BYTE12(v204));
      v15 = v11;
      v16 = (unsigned __int16 *)(a1 + 548);
      v200 = v15 & 0x2000000;
      if ( (v15 & 0x2000000) == 0 )
        v16 = v201;
      v203 = v16;
      v17 = *(HSEMAPHORE *)(a1 + 8);
      v18 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v195 + 3984);
      v19 = *(_DWORD *)(a1 + 4LL * BYTE1(v195) + 5008);
      v196 = v19;
      v195 = *(_DWORD *)(a1 + 4LL * BYTE2(v195) + 6032);
      EngReleaseSemaphore(v17);
      v20 = (unsigned __int8)v207[31];
      if ( v20 > 0xF9 )
      {
        if ( v20 == 250 )
        {
          if ( v200 )
          {
            if ( v14 )
            {
              v172 = v210;
              v173 = a5;
              v174 = v209;
              v175 = v196;
              v176 = v195;
              v215 = a5;
              do
              {
                v177 = v174;
                v178 = a4;
                v174 = (unsigned __int16 *)((char *)v174 + v172);
                a4 += v173;
                --v14;
                v179 = v12;
                if ( v12 )
                {
                  v180 = v203;
                  v181 = v177 + 1;
                  do
                  {
                    v182 = *v181;
                    v183 = (v18 - *(v181 - 1)) & 0x30000 | (unsigned __int64)((v176 - v181[1]) & 0xE00000);
                    v181 += 3;
                    *v178++ = *((_BYTE *)v180 + (((v175 - v182) & 0x1C0000 | v183) >> 16));
                    --v179;
                  }
                  while ( v179 );
                  v12 = v199;
                  v172 = v210;
                  v173 = v215;
                }
              }
              while ( v14 );
            }
          }
          else if ( v14 )
          {
            v184 = v210;
            v185 = a5;
            v186 = v209;
            v187 = v196;
            v188 = v195;
            v215 = a5;
            do
            {
              v189 = v186;
              v190 = a4;
              v186 = (unsigned __int16 *)((char *)v186 + v184);
              a4 += v185;
              --v14;
              if ( v12 )
              {
                v191 = v189 + 1;
                do
                {
                  v192 = *v191;
                  v193 = ((v188 - v191[1]) >> 16) & 0xE0;
                  v194 = (v18 - *(v191 - 1)) >> 16;
                  v191 += 3;
                  *v190++ = ((v187 - v192) >> 16) & 0x1C | v194 & 3 | v193;
                  --v12;
                }
                while ( v12 );
                v12 = v199;
                v184 = v210;
                v185 = v215;
              }
            }
            while ( v14 );
          }
        }
        else if ( v20 == 251 )
        {
          v198 = v18 + v19 + v195;
          v164 = dwGrayIdxHB[BYTE1(v198)] + (unsigned __int16)wGrayIdxLB[(unsigned __int8)v198];
          if ( v14 )
          {
            v165 = v210;
            v166 = v209;
            do
            {
              v167 = v166;
              v168 = a4;
              v166 = (unsigned __int16 *)((char *)v166 + v165);
              a4 += a5;
              --v14;
              v169 = v12;
              if ( v12 )
              {
                v170 = v167 + 1;
                do
                {
                  v171 = *v170;
                  v170 += 3;
                  *v168++ = BYTE13(v204) ^ ((unsigned int)(v164 - v171) >> 12);
                  --v169;
                }
                while ( v169 );
              }
            }
            while ( v14 );
          }
        }
        else if ( v20 <= 0xFD )
        {
          if ( v14 )
          {
            v150 = v210;
            v151 = v12;
            v152 = v209;
            v153 = a5;
            v154 = v196;
            v155 = v12 & 1;
            v156 = v151 >> 1;
            v206 = v156;
            v215 = a5;
            v199 = v155;
            do
            {
              v157 = v195;
              v158 = v152;
              v201 = (unsigned __int16 *)a4;
              v152 = (unsigned __int16 *)((char *)v152 + v150);
              a4 += v153;
              --v14;
              if ( v156 )
              {
                v159 = v201;
                do
                {
                  v160 = DWORD2(v204) & (v157 - v158[5]) | (((unsigned int)v204 & (v18 - *v158) | DWORD1(v204) & (v154 - v158[1]) | DWORD2(v204) & (v157 - v158[2])) >> 16);
                  v161 = v158[3];
                  v162 = DWORD1(v204) & (v154 - v158[4]);
                  v158 += 6;
                  *(_DWORD *)v159 = HIDWORD(v204) ^ (v204 & (v18 - v161) | v162 | v160);
                  v159 += 2;
                  --v156;
                }
                while ( v156 );
                v156 = v206;
                v201 = v159;
                v155 = v199;
              }
              if ( v155 )
                *v201 = HIWORD(v204) ^ (WORD1(v204) & ((v18 - *v158) >> 16) | WORD3(v204) & ((v154 - v158[1]) >> 16) | WORD5(v204) & ((v157 - v158[2]) >> 16));
              v150 = v210;
              v153 = v215;
            }
            while ( v14 );
          }
        }
        else if ( v20 == 254 )
        {
          if ( v14 )
          {
            v139 = v210;
            v140 = a5;
            v141 = v209;
            v142 = v196;
            v143 = v195;
            v215 = a5;
            do
            {
              v144 = v141;
              v145 = a4;
              v141 = (unsigned __int16 *)((char *)v141 + v139);
              a4 += v140;
              --v14;
              v146 = v12;
              if ( v12 )
              {
                v147 = v144 + 1;
                do
                {
                  v148 = *v147;
                  v149 = (v143 - v147[1]) & 0x70000 | (unsigned __int64)((v18 - *(v147 - 1)) & 0x1C00000);
                  v147 += 3;
                  *v145++ = *((_BYTE *)&VGA256Xlate + (((v142 - v148) & 0x380000 | v149) >> 16));
                  --v146;
                }
                while ( v146 );
                v12 = v199;
                v139 = v210;
                v140 = v215;
              }
            }
            while ( v14 );
          }
        }
        else if ( v14 )
        {
          v127 = v210;
          v128 = v12;
          v129 = v196;
          v130 = (unsigned __int16 *)a5;
          v131 = v209;
          v132 = v12 & 1;
          v133 = v128 >> 1;
          v206 = v133;
          v208 = (unsigned __int16 *)a5;
          v199 = v132;
          do
          {
            v134 = v195;
            v135 = v131;
            v131 = (unsigned __int16 *)((char *)v131 + v127);
            v201 = (unsigned __int16 *)a4;
            a4 = &a4[(_QWORD)v130];
            v215 = (unsigned __int64)v131;
            --v14;
            if ( v133 )
            {
              v136 = v201;
              do
              {
                v137 = *v135;
                v138 = DWORD1(v204) & (v129 - v135[1]) | DWORD2(v204) & (v134 - v135[2]) | HIDWORD(v204) & (v18 - v135[3]) | (unsigned int)v205 & (v129 - v135[4]) | (unsigned __int64)(HIDWORD(v205) & (v134 - v135[5]));
                v135 += 6;
                *(_BYTE *)v136 = *((_BYTE *)&VGA16Xlate + ((((unsigned int)v204 & (v18 - v137) | v138) ^ 0x770000) >> 16));
                v136 = (unsigned __int16 *)((char *)v136 + 1);
                --v133;
              }
              while ( v133 );
              v131 = (unsigned __int16 *)v215;
              v133 = v206;
              v201 = v136;
              v132 = v199;
            }
            if ( v132 )
              *(_BYTE *)v201 = *((_BYTE *)&VGA16Xlate
                               + ((((unsigned int)v204 & (v18 - *v135) | DWORD1(v204) & (v129 - v135[1]) | (unsigned __int64)(DWORD2(v204) & (v134 - v135[2]))) ^ 0x700000) >> 16));
            v127 = v210;
            v130 = v208;
          }
          while ( v14 );
        }
        return v214;
      }
      if ( v20 >= 0xF8 )
      {
        if ( v14 )
        {
          v115 = v210;
          v116 = a5;
          v117 = v209;
          v118 = v196;
          v119 = v195;
          v215 = a5;
          do
          {
            v120 = v117;
            v121 = a4;
            v117 = (unsigned __int16 *)((char *)v117 + v115);
            a4 += v116;
            --v14;
            v122 = v12;
            if ( v12 )
            {
              v123 = v203;
              v124 = v120 + 1;
              do
              {
                v125 = *v124;
                v126 = (v18 - *(v124 - 1)) & 0x70000 | (unsigned __int64)((v119 - v124[1]) & 0x1C00000);
                v124 += 3;
                *v121++ = *((_BYTE *)v123 + (((v118 - v125) & 0x380000 | v126) >> 16));
                --v122;
              }
              while ( v122 );
              v12 = v199;
              v115 = v210;
              v116 = v215;
            }
          }
          while ( v14 );
        }
        return v214;
      }
      if ( v20 == 1 )
      {
        v97 = ((v18 + v19 + v195) ^ 0xFFF0) >> 4;
        v98 = -((v197 & 0x4000) == 0);
        if ( v14 )
        {
          v99 = v210;
          v100 = v12;
          v101 = v209;
          v102 = v12 & 7;
          v103 = v100 >> 3;
          v104 = (unsigned __int16 *)a5;
          v208 = (unsigned __int16 *)a5;
          LODWORD(v203) = v103;
          do
          {
            v105 = v101;
            v201 = (unsigned __int16 *)a4;
            v106 = (unsigned __int16 *)a4;
            a4 = &a4[(_QWORD)v104];
            v215 = (unsigned __int64)v101 + v99;
            --v14;
            v107 = v103;
            if ( v103 )
            {
              do
              {
                v108 = ((v97 - v105[7]) >> 16) & 0x20 | ((v97 - v105[16]) >> 16) & 4 | ((v97 - v105[19]) >> 16) & 2 | ((v97 - v105[4]) >> 16) & 0x40 | ((v97 - v105[22]) >> 16) & 1 | ((v97 - v105[1]) >> 16) & 0x80;
                v109 = v105[10];
                v110 = (v97 - v105[13]) >> 16;
                v105 += 24;
                *(_BYTE *)v106 = v98 ^ (((v97 - v109) >> 16) & 0x10 | v110 & 8 | v108);
                v106 = (unsigned __int16 *)((char *)v106 + 1);
                --v107;
              }
              while ( v107 );
              v201 = v106;
            }
            v111 = v102;
            if ( v102 )
            {
              v112 = 0;
              v113 = v105 + 1;
              do
              {
                v114 = *v113;
                v113 += 3;
                v112 = (2 * v112) | (v97 - v114) & 0x10000;
                --v111;
              }
              while ( v111 );
              v198 = v112;
              BYTE2(v198) = v98 ^ BYTE2(v112);
              *(_BYTE *)v201 = (unsigned int)(v198 << (8 - v102)) >> 16;
            }
            v101 = (unsigned __int16 *)v215;
            v103 = (unsigned int)v203;
            v99 = v210;
            v104 = v208;
          }
          while ( v14 );
        }
        return v214;
      }
      if ( v20 == 2 )
      {
        v73 = (v197 & 0x4000) == 0 ? 0x77 : 0;
        if ( v14 )
        {
          v74 = v210;
          v75 = v12;
          v76 = v196;
          v77 = a5;
          v78 = v209;
          v79 = v12 & 1;
          v80 = v75 >> 1;
          LODWORD(v203) = v80;
          v215 = a5;
          v199 = v79;
          do
          {
            v81 = v195;
            --v14;
            v82 = v78;
            v201 = (unsigned __int16 *)a4;
            a4 += v77;
            v196 = v14;
            v78 = (unsigned __int16 *)((char *)v78 + v74);
            v207 = a4;
            v208 = v78;
            v83 = v80;
            if ( v80 )
            {
              v202 = HIWORD(DWORD2(v204));
              v84 = HIWORD(DWORD2(v204));
              v197 = WORD1(v205);
              v85 = WORD1(v205);
              v200 = HIWORD(DWORD1(v204));
              v86 = HIWORD(DWORD1(v204));
              v198 = HIWORD(HIDWORD(v204));
              v87 = HIWORD(HIDWORD(v204));
              v88 = HIWORD(HIDWORD(v205));
              v206 = WORD1(v204);
              do
              {
                v89 = v82[5];
                v202 = v83 - 1;
                v90 = v87 & ((v18 - v82[3]) >> 16) | v85 & ((v76 - v82[4]) >> 16) | v86 & ((v76 - v82[1]) >> 16) | v88 & ((v81 - v89) >> 16);
                v91 = *v82;
                v92 = (v81 - v82[2]) >> 16;
                v82 += 6;
                v93 = v84 & v92 | v90;
                v94 = v18 - v91;
                v95 = v201;
                v96 = v206 & BYTE2(v94) | v93;
                v83 = v202;
                *(_BYTE *)v201 = v73 ^ v96;
                v201 = (unsigned __int16 *)((char *)v95 + 1);
              }
              while ( v83 );
              v14 = v196;
              a4 = v207;
              v79 = v199;
              v78 = v208;
              v80 = (unsigned int)v203;
            }
            if ( v79 )
              *(_BYTE *)v201 = v73 ^ (BYTE2(v204) & ((v18 - *v82) >> 16) | BYTE6(v204) & ((v76 - v82[1]) >> 16) | BYTE10(v204) & ((v81 - v82[2]) >> 16));
            v74 = v210;
            v77 = v215;
          }
          while ( v14 );
        }
        return v214;
      }
      v21 = 4;
      if ( v20 > 4 )
      {
        if ( v20 <= 6 )
        {
          a4[v211] = ~(_BYTE)v195;
          a4[v212] = ~(_BYTE)v19;
          a4[v213] = ~(_BYTE)v18;
          if ( (_BYTE)v20 == 5 )
          {
            v21 = 3;
            v65 = 3 * v12;
          }
          else
          {
            a4[3] = 0;
            v65 = 4 * v12;
          }
          v66 = &a4[v21];
          v197 = v65;
          v67 = v65 - v21;
          if ( v65 != v21 )
          {
            do
            {
              v68 = v21;
              if ( v21 > v67 )
                v68 = v67;
              memmove(v66, a4, v68);
              v66 += v68;
              v21 += v68;
              v67 -= v68;
            }
            while ( v67 );
            v65 = v197;
          }
          v69 = a4;
          v70 = v14 - 1;
          if ( v70 )
          {
            v71 = v198;
            v72 = v65;
            do
            {
              a4 += v71;
              memmove(a4, v69, v72);
              --v70;
            }
            while ( v70 );
          }
          return v214;
        }
        if ( v20 > 0xF4 )
        {
          if ( v20 <= 0xF6 )
          {
            if ( v14 )
            {
              v49 = v210;
              v50 = v198;
              v51 = v209;
              v52 = v196;
              do
              {
                v53 = v51;
                v54 = a4;
                v51 = (unsigned __int16 *)((char *)v51 + v49);
                a4 += v50;
                --v14;
                v201 = v51;
                v207 = a4;
                v55 = v12;
                if ( v12 )
                {
                  v56 = v195;
                  v57 = v53 + 2;
                  v58 = v203;
                  v59 = BYTE14(v204);
                  v215 = __PAIR64__(v52, v195);
                  v217 = v18;
                  v216 = v18;
                  do
                  {
                    v60 = *v57;
                    v61 = *(v57 - 1);
                    --v55;
                    v197 = v61;
                    v62 = *(v57 - 2);
                    v63 = *((_DWORD *)&v215
                          + ((v56 >= v52) | (unsigned __int64)(*((_DWORD *)&v215 + (v56 >= v52)) >= v18 ? 2 : 0))) >> 21;
                    v200 = v62;
                    if ( v63 >= v60 || v63 >= v61 || v63 >= v62 )
                      v64 = v59;
                    else
                      v64 = *((_BYTE *)v58
                            + (((unsigned __int16)(v18 - v200) & (unsigned __int16)(v200 - v204) & 0x7000 | (v52 - v197) & (v197 - DWORD1(v204)) & 0x38000 | (unsigned __int64)((v56 - v60) & (v60 - DWORD2(v204)) & 0x1C0000)) >> 12));
                    *v54 = v64;
                    v57 += 3;
                    ++v54;
                  }
                  while ( v55 );
                  a4 = v207;
                  v12 = v199;
                  v51 = v201;
                  v49 = v210;
                  v50 = v198;
                }
              }
              while ( v14 );
            }
          }
          else if ( v200 )
          {
            if ( v14 )
            {
              v22 = v210;
              v23 = v198;
              v24 = v209;
              v25 = v196;
              do
              {
                v26 = v24;
                v27 = a4;
                v24 = (unsigned __int16 *)((char *)v24 + v22);
                a4 += v23;
                --v14;
                v201 = v24;
                v207 = a4;
                v28 = v12;
                if ( v12 )
                {
                  v29 = v195;
                  v30 = v26 + 2;
                  v31 = v203;
                  v32 = BYTE14(v204);
                  v215 = __PAIR64__(v25, v195);
                  v217 = v18;
                  v216 = v18;
                  do
                  {
                    v33 = *v30;
                    v34 = *(v30 - 1);
                    --v28;
                    v200 = v34;
                    v35 = *(v30 - 2);
                    v36 = *((_DWORD *)&v215
                          + ((v29 >= v25) | (unsigned __int64)(*((_DWORD *)&v215 + (v29 >= v25)) >= v18 ? 2 : 0))) >> 21;
                    v197 = v35;
                    if ( v36 >= v33 || v36 >= v34 || v36 >= v35 )
                      v37 = v32;
                    else
                      v37 = *((_BYTE *)v31
                            + (((unsigned __int16)(v18 - v197) & (unsigned __int16)(v197 - v204) & 0x3000 | (v25 - v200) & (v200 - DWORD1(v204)) & 0x1C000 | (unsigned __int64)((v29 - v33) & (v33 - DWORD2(v204)) & 0xE0000)) >> 12));
                    *v27 = v37;
                    v30 += 3;
                    ++v27;
                  }
                  while ( v28 );
                  a4 = v207;
                  v12 = v199;
                  v24 = v201;
                  v22 = v210;
                  v23 = v198;
                }
              }
              while ( v14 );
            }
          }
          else if ( v14 )
          {
            v38 = v210;
            v39 = v198;
            v40 = v209;
            v41 = v196;
            do
            {
              v42 = v40;
              v43 = a4;
              v40 = (unsigned __int16 *)((char *)v40 + v38);
              a4 += v39;
              --v14;
              if ( v12 )
              {
                v44 = v195;
                v45 = v42 + 2;
                v215 = __PAIR64__(v41, v195);
                v217 = v18;
                v216 = v18;
                do
                {
                  --v12;
                  v196 = *(v45 - 1);
                  v197 = *v45;
                  v46 = BYTE14(v204);
                  v47 = *(v45 - 2);
                  v48 = *((_DWORD *)&v215
                        + ((v44 >= v41) | (unsigned __int64)(*((_DWORD *)&v215 + (v44 >= v41)) >= v18 ? 2 : 0))) >> 21;
                  v200 = v47;
                  if ( v48 < v197 && v48 < v196 && v48 < v47 )
                    v46 = ((v18 - v200) >> 12) & ((unsigned int)(v200 - v204) >> 12) & 3 | ((v41 - v196) >> 12) & ((v196 - DWORD1(v204)) >> 12) & 0x1C | ((v44 - v197) >> 12) & ((v197 - DWORD2(v204)) >> 12) & 0xE0;
                  *v43 = v46;
                  v45 += 3;
                  ++v43;
                }
                while ( v12 );
                v12 = v199;
                v38 = v210;
                v39 = v198;
              }
            }
            while ( v14 );
          }
          return v214;
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v9;
}
