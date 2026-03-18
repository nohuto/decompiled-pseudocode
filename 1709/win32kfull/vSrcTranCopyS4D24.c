/*
 * XREFs of vSrcTranCopyS4D24 @ 0x1C0255160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D24(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // rsi
  __int64 v14; // rax
  int v15; // ecx
  int *v16; // rcx
  int v17; // r10d
  unsigned int v18; // r11d
  int v19; // r13d
  int v20; // r15d
  int v21; // ebp
  int v22; // r9d
  unsigned int v23; // ebx
  signed int v24; // r8d
  unsigned int v25; // r9d
  __int64 result; // rax
  _BYTE *v27; // r12
  __int64 v28; // rdi
  int v29; // ecx
  int v30; // edx
  _BYTE *v31; // r14
  __int64 v32; // r11
  int v33; // ecx
  int v34; // ecx
  unsigned __int8 v35; // r8
  unsigned int v36; // r11d
  int v37; // edx
  __int64 v38; // r10
  _DWORD *v39; // rax
  unsigned int v40; // edx
  int v41; // r11d
  _DWORD *v42; // rax
  unsigned int v43; // r11d
  unsigned int v44; // r8d
  int v45; // edx
  _DWORD *v46; // rax
  unsigned int v47; // r11d
  unsigned int v48; // r8d
  int v49; // edx
  unsigned __int8 v50; // r8
  unsigned int v51; // r15d
  int v52; // edx
  __int64 v53; // r10
  _DWORD *v54; // rax
  unsigned int v55; // edx
  int v56; // r15d
  _DWORD *v57; // rax
  unsigned int v58; // r15d
  unsigned int v59; // r8d
  int v60; // edx
  _DWORD *v61; // rax
  unsigned int v62; // r15d
  unsigned int v63; // r8d
  unsigned __int8 v64; // r8
  unsigned int v65; // r15d
  int v66; // edx
  __int64 v67; // r10
  _DWORD *v68; // rax
  unsigned int v69; // edx
  int v70; // r15d
  _DWORD *v71; // rax
  unsigned int v72; // r15d
  unsigned int v73; // r8d
  int v74; // edx
  _DWORD *v75; // rax
  unsigned int v76; // r15d
  unsigned int v77; // r8d
  unsigned __int8 v78; // r8
  unsigned int v79; // r15d
  int v80; // edx
  __int64 v81; // r10
  _DWORD *v82; // rax
  unsigned int v83; // edx
  int v84; // r15d
  _DWORD *v85; // rax
  unsigned int v86; // r15d
  unsigned int v87; // r8d
  int v88; // edx
  _DWORD *v89; // rax
  unsigned int v90; // edx
  unsigned int v91; // r8d
  int v92; // r15d
  unsigned __int8 v93; // r8
  unsigned int v94; // r15d
  __int64 v95; // r10
  _DWORD *v96; // rax
  unsigned int v97; // edx
  int v98; // r15d
  _DWORD *v99; // rax
  unsigned int v100; // r15d
  unsigned int v101; // r8d
  int v102; // edx
  _DWORD *v103; // rax
  unsigned int v104; // edx
  unsigned int v105; // r8d
  int v106; // r15d
  unsigned __int8 v107; // r8
  unsigned int v108; // r15d
  __int64 v109; // r10
  _DWORD *v110; // rax
  unsigned int v111; // edx
  int v112; // r15d
  _DWORD *v113; // rax
  unsigned int v114; // r15d
  unsigned int v115; // r8d
  int v116; // edx
  _DWORD *v117; // rax
  unsigned int v118; // edx
  unsigned int v119; // r8d
  int v120; // r15d
  unsigned __int8 v121; // r8
  unsigned int v122; // r15d
  __int64 v123; // r10
  _DWORD *v124; // rax
  unsigned int v125; // edx
  int v126; // r15d
  _DWORD *v127; // rax
  unsigned int v128; // r15d
  unsigned int v129; // r8d
  int v130; // edx
  _DWORD *v131; // rax
  unsigned int v132; // edx
  unsigned int v133; // r8d
  int v134; // r15d
  int v135; // ecx
  unsigned __int8 v136; // r8
  unsigned int v137; // r15d
  __int64 v138; // r10
  _DWORD *v139; // rax
  unsigned int v140; // edx
  int v141; // r15d
  _DWORD *v142; // rax
  unsigned int v143; // r15d
  unsigned int v144; // r8d
  int v145; // edx
  _DWORD *v146; // rax
  unsigned int v147; // r15d
  unsigned int v148; // r8d
  int v149; // ecx
  unsigned __int8 v150; // r8
  unsigned int v151; // r15d
  __int64 v152; // r10
  _DWORD *v153; // rax
  unsigned int v154; // edx
  int v155; // r15d
  _DWORD *v156; // rax
  unsigned int v157; // r15d
  unsigned int v158; // r8d
  int v159; // edx
  _DWORD *v160; // rax
  unsigned int v161; // r15d
  unsigned int v162; // r8d
  unsigned __int8 v163; // r8
  unsigned int v164; // r14d
  __int64 v165; // r10
  _DWORD *v166; // rax
  unsigned int v167; // edx
  int v168; // r14d
  _DWORD *v169; // rax
  unsigned int v170; // r14d
  unsigned int v171; // r8d
  int v172; // edx
  _DWORD *v173; // rax
  unsigned int v174; // r14d
  unsigned int v175; // r8d
  unsigned __int8 v176; // r8
  int v177; // edx
  __int64 v178; // r10
  _DWORD *v179; // rax
  unsigned int v180; // edx
  int v181; // r11d
  _DWORD *v182; // rax
  unsigned int v183; // r11d
  unsigned int v184; // r8d
  int v185; // edx
  _DWORD *v186; // rax
  unsigned int v187; // r11d
  unsigned int v188; // r8d
  int v189; // edx
  unsigned int v190; // eax
  unsigned __int8 v191; // r8
  _DWORD *v192; // rsi
  _DWORD *v193; // rax
  unsigned int v194; // edx
  __int64 v195; // r10
  int v196; // ebx
  _DWORD *v197; // rax
  unsigned int v198; // ebx
  unsigned int v199; // r8d
  unsigned int v200; // ebx
  unsigned int v201; // edx
  char v202; // [rsp+0h] [rbp-68h]
  unsigned int v203; // [rsp+4h] [rbp-64h]
  unsigned int v204; // [rsp+8h] [rbp-60h]
  char v205; // [rsp+Ch] [rbp-5Ch]
  int v206; // [rsp+10h] [rbp-58h]
  __int64 v207; // [rsp+18h] [rbp-50h]
  _BYTE *v208; // [rsp+70h] [rbp+8h]
  int v209; // [rsp+78h] [rbp+10h]
  __int64 v210; // [rsp+88h] [rbp+20h]
  int v211; // [rsp+90h] [rbp+28h]
  int v212; // [rsp+98h] [rbp+30h]
  unsigned int v213; // [rsp+B0h] [rbp+48h]
  char v214; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v14 = *(_QWORD *)(a11 + 128);
  if ( !v14 )
    v14 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1824LL);
  v15 = *(_DWORD *)(v14 + 24);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(int **)(v14 + 120);
    v17 = *v16;
    v18 = v16[6];
    v19 = v16[1];
    v20 = v16[7];
    v21 = v16[2];
    v22 = v16[8];
    v209 = *v16;
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v22) = 16;
      v17 = 255;
      v209 = 255;
      v21 = 16711680;
      LOBYTE(v18) = 0;
    }
    else
    {
      LOBYTE(v18) = 16;
      v17 = 16711680;
      v209 = 16711680;
      v21 = 255;
      LOBYTE(v22) = 0;
    }
  }
  v23 = a9;
  v205 = v22;
  v213 = (a9 & v17) >> v18;
  v214 = v18;
  v203 = (v23 & v19) >> v20;
  v202 = v20;
  v24 = (a5 + 3) & 0xFFFFFFFC;
  v204 = (v23 & v21) >> v22;
  v25 = a6 & 0xFFFFFFFC;
  result = (unsigned int)(3 * a5);
  v27 = (_BYTE *)(a2 / 2 + a1);
  v28 = (int)result + a4;
  v208 = v27;
  v210 = v28;
  if ( v24 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v176 = *v27 & 0xF;
      if ( v176 )
      {
        if ( v176 == 15 )
        {
          v18 = v23;
        }
        else
        {
          LOBYTE(a10) = *(_BYTE *)v28;
          v177 = v17;
          v178 = v176;
          *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v28 + 1);
          v179 = &unk_1C02DC070;
          v180 = (a10 & (unsigned int)v177) >> v18;
          if ( (int)(v213 - v180) >= 0 )
            v179 = &unk_1C02DC030;
          v181 = v179[v176];
          v182 = &unk_1C02DC070;
          v183 = v209 & (((v180 << 16) + (v213 - v180) * v181) >> 16 << v214);
          v184 = (a10 & (unsigned int)v19) >> v20;
          if ( (int)(v203 - v184) >= 0 )
            v182 = &unk_1C02DC030;
          v185 = v182[v178];
          v186 = &unk_1C02DC070;
          v187 = v19 & (((v184 << 16) + (v203 - v184) * v185) >> 16 << v20) | v183;
          v188 = (a10 & (unsigned int)v21) >> v205;
          if ( (int)(v204 - v188) >= 0 )
            v186 = &unk_1C02DC030;
          v189 = v186[v178];
          v17 = v209;
          v18 = v21 & (((v188 << 16) + (v204 - v188) * v189) >> 16 << v205) | v187;
        }
        *(_BYTE *)v28 = v18;
        v190 = v18 >> 8;
        *(_BYTE *)(v28 + 2) = BYTE2(v18);
        LOBYTE(v18) = v214;
        *(_BYTE *)(v28 + 1) = v190;
      }
      v28 += 3LL;
      result = (unsigned int)(a5 + 1);
      if ( (_DWORD)result == a6 )
        return result;
      ++v27;
    }
    else if ( (a5 & 3) != 2 )
    {
      return result;
    }
    v191 = *v27 >> 4;
    if ( v191 )
    {
      if ( v191 != 15 )
      {
        v192 = &unk_1C02DC070;
        LOBYTE(a10) = *(_BYTE *)v28;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v28 + 1);
        v193 = &unk_1C02DC070;
        v194 = (a10 & (unsigned int)v17) >> v18;
        v195 = v191;
        if ( (int)(v213 - v194) >= 0 )
          v193 = &unk_1C02DC030;
        v196 = v193[v191];
        v197 = &unk_1C02DC070;
        v198 = v209 & (((v194 << 16) + (v213 - v194) * v196) >> 16 << v18);
        v199 = (a10 & (unsigned int)v19) >> v20;
        if ( (int)(v203 - v199) >= 0 )
          v197 = &unk_1C02DC030;
        v200 = v19 & (((v199 << 16) + (v203 - v199) * v197[v195]) >> 16 << v20) | v198;
        v201 = (a10 & (unsigned int)v21) >> v205;
        if ( (int)(v204 - v201) >= 0 )
          v192 = &unk_1C02DC030;
        v23 = v21 & (((v201 << 16) + (v204 - v201) * v192[v195]) >> 16 << v205) | v200;
      }
      *(_BYTE *)v28 = v23;
      result = v23 >> 8;
      *(_BYTE *)(v28 + 2) = BYTE2(v23);
      *(_BYTE *)(v28 + 1) = BYTE1(v23);
    }
    return result;
  }
  v212 = a6 - v25;
  v29 = v24 - a5;
  v206 = v24 - a5;
  result = (unsigned int)((int)(v25 - v24) / 4);
  v30 = (int)(v25 - v24) / 4;
  v211 = v30;
  if ( a8 )
  {
    while ( 1 )
    {
      v31 = v27;
      v32 = v28;
      v33 = v29 - 1;
      if ( !v33 )
        goto LABEL_37;
      v34 = v33 - 1;
      if ( !v34 )
        goto LABEL_25;
      if ( v34 == 1 )
        break;
LABEL_49:
      if ( v30 > 0 )
      {
        v207 = (unsigned int)v30;
        while ( 1 )
        {
          v78 = *v31 >> 4;
          if ( v78 )
          {
            if ( v78 == 15 )
            {
              v79 = v23;
            }
            else
            {
              v80 = v17;
              v81 = v78;
              LOWORD(a10) = *(_WORD *)v32;
              BYTE2(a10) = *(_BYTE *)(v32 + 2);
              v82 = &unk_1C02DC070;
              v83 = (a10 & (unsigned int)v80) >> v214;
              if ( (int)(v213 - v83) >= 0 )
                v82 = &unk_1C02DC030;
              v84 = v82[v78];
              v85 = &unk_1C02DC070;
              v86 = v209 & (((v83 << 16) + (v213 - v83) * v84) >> 16 << v214);
              v87 = (a10 & (unsigned int)v19) >> v202;
              if ( (int)(v203 - v87) >= 0 )
                v85 = &unk_1C02DC030;
              v88 = v85[v81];
              v89 = &unk_1C02DC070;
              v90 = (v87 << 16) + (v203 - v87) * v88;
              v91 = (a10 & (unsigned int)v21) >> v205;
              v92 = v19 & (HIWORD(v90) << v202) | v86;
              if ( (int)(v204 - v91) >= 0 )
                v89 = &unk_1C02DC030;
              v79 = v21 & (((v91 << 16) + (v204 - v91) * v89[v81]) >> 16 << v205) | v92;
            }
            *(_BYTE *)v32 = v79;
            *(_BYTE *)(v32 + 2) = BYTE2(v79);
            *(_BYTE *)(v32 + 1) = BYTE1(v79);
          }
          v93 = *v31 & 0xF;
          if ( v93 )
          {
            if ( v93 == 15 )
            {
              v94 = v23;
            }
            else
            {
              v95 = v93;
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = *(_BYTE *)(v32 + 5);
              v96 = &unk_1C02DC070;
              v97 = (a10 & (unsigned int)v209) >> v214;
              if ( (int)(v213 - v97) >= 0 )
                v96 = &unk_1C02DC030;
              v98 = v96[v93];
              v99 = &unk_1C02DC070;
              v100 = v209 & (((v97 << 16) + (v213 - v97) * v98) >> 16 << v214);
              v101 = (a10 & (unsigned int)v19) >> v202;
              if ( (int)(v203 - v101) >= 0 )
                v99 = &unk_1C02DC030;
              v102 = v99[v95];
              v103 = &unk_1C02DC070;
              v104 = (v101 << 16) + (v203 - v101) * v102;
              v105 = (a10 & (unsigned int)v21) >> v205;
              v106 = v19 & (HIWORD(v104) << v202) | v100;
              if ( (int)(v204 - v105) >= 0 )
                v103 = &unk_1C02DC030;
              v94 = v21 & (((v105 << 16) + (v204 - v105) * v103[v95]) >> 16 << v205) | v106;
            }
            *(_BYTE *)(v32 + 3) = v94;
            *(_BYTE *)(v32 + 5) = BYTE2(v94);
            *(_BYTE *)(v32 + 4) = BYTE1(v94);
          }
          v107 = v31[1] >> 4;
          if ( v107 )
          {
            if ( v107 == 15 )
            {
              v108 = v23;
            }
            else
            {
              v109 = v107;
              LOWORD(a10) = *(_WORD *)(v32 + 6);
              BYTE2(a10) = *(_BYTE *)(v32 + 8);
              v110 = &unk_1C02DC070;
              v111 = (a10 & (unsigned int)v209) >> v214;
              if ( (int)(v213 - v111) >= 0 )
                v110 = &unk_1C02DC030;
              v112 = v110[v107];
              v113 = &unk_1C02DC070;
              v114 = v209 & (((v111 << 16) + (v213 - v111) * v112) >> 16 << v214);
              v115 = (a10 & (unsigned int)v19) >> v202;
              if ( (int)(v203 - v115) >= 0 )
                v113 = &unk_1C02DC030;
              v116 = v113[v109];
              v117 = &unk_1C02DC070;
              v118 = (v115 << 16) + (v203 - v115) * v116;
              v119 = (a10 & (unsigned int)v21) >> v205;
              v120 = v19 & (HIWORD(v118) << v202) | v114;
              if ( (int)(v204 - v119) >= 0 )
                v117 = &unk_1C02DC030;
              v108 = v21 & (((v119 << 16) + (v204 - v119) * v117[v109]) >> 16 << v205) | v120;
            }
            *(_BYTE *)(v32 + 6) = v108;
            *(_BYTE *)(v32 + 8) = BYTE2(v108);
            *(_BYTE *)(v32 + 7) = BYTE1(v108);
          }
          v121 = v31[1] & 0xF;
          if ( v121 )
          {
            if ( v121 == 15 )
            {
              v122 = v23;
            }
            else
            {
              v123 = v121;
              LOWORD(a10) = *(_WORD *)(v32 + 9);
              BYTE2(a10) = *(_BYTE *)(v32 + 11);
              v124 = &unk_1C02DC070;
              v125 = (a10 & (unsigned int)v209) >> v214;
              if ( (int)(v213 - v125) >= 0 )
                v124 = &unk_1C02DC030;
              v126 = v124[v121];
              v127 = &unk_1C02DC070;
              v128 = v209 & (((v125 << 16) + (v213 - v125) * v126) >> 16 << v214);
              v129 = (a10 & (unsigned int)v19) >> v202;
              if ( (int)(v203 - v129) >= 0 )
                v127 = &unk_1C02DC030;
              v130 = v127[v123];
              v131 = &unk_1C02DC070;
              v132 = (v129 << 16) + (v203 - v129) * v130;
              v133 = (a10 & (unsigned int)v21) >> v205;
              v134 = v19 & (HIWORD(v132) << v202) | v128;
              if ( (int)(v204 - v133) >= 0 )
                v131 = &unk_1C02DC030;
              v122 = v21 & (((v133 << 16) + (v204 - v133) * v131[v123]) >> 16 << v205) | v134;
            }
            *(_BYTE *)(v32 + 9) = v122;
            *(_BYTE *)(v32 + 11) = BYTE2(v122);
            *(_BYTE *)(v32 + 10) = BYTE1(v122);
          }
          v32 += 12LL;
          v31 += 2;
          if ( !--v207 )
            break;
          v17 = v209;
        }
        v28 = v210;
        v27 = v208;
      }
      v135 = v212;
      if ( v212 )
      {
        v136 = *v31 >> 4;
        if ( v136 )
        {
          if ( v136 == 15 )
          {
            v137 = v23;
          }
          else
          {
            v138 = v136;
            LOWORD(a10) = *(_WORD *)v32;
            BYTE2(a10) = *(_BYTE *)(v32 + 2);
            v139 = &unk_1C02DC070;
            v140 = (a10 & (unsigned int)v209) >> v214;
            if ( (int)(v213 - v140) >= 0 )
              v139 = &unk_1C02DC030;
            v141 = v139[v136];
            v142 = &unk_1C02DC070;
            v143 = v209 & (((v140 << 16) + (v213 - v140) * v141) >> 16 << v214);
            v144 = (a10 & (unsigned int)v19) >> v202;
            if ( (int)(v203 - v144) >= 0 )
              v142 = &unk_1C02DC030;
            v145 = v142[v138];
            v146 = &unk_1C02DC070;
            v147 = v19 & (((v144 << 16) + (v203 - v144) * v145) >> 16 << v202) | v143;
            v148 = (a10 & (unsigned int)v21) >> v205;
            if ( (int)(v204 - v148) >= 0 )
              v146 = &unk_1C02DC030;
            v135 = v212;
            v137 = v21 & (((v148 << 16) + (v204 - v148) * v146[v138]) >> 16 << v205) | v147;
          }
          *(_BYTE *)v32 = v137;
          *(_BYTE *)(v32 + 2) = BYTE2(v137);
          *(_BYTE *)(v32 + 1) = BYTE1(v137);
        }
        v149 = v135 - 1;
        if ( v149 )
        {
          v150 = *v31 & 0xF;
          if ( v150 )
          {
            if ( v150 == 15 )
            {
              v151 = v23;
            }
            else
            {
              v152 = v150;
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = *(_BYTE *)(v32 + 5);
              v153 = &unk_1C02DC070;
              v154 = (a10 & (unsigned int)v209) >> v214;
              if ( (int)(v213 - v154) >= 0 )
                v153 = &unk_1C02DC030;
              v155 = v153[v150];
              v156 = &unk_1C02DC070;
              v157 = v209 & (((v154 << 16) + (v213 - v154) * v155) >> 16 << v214);
              v158 = (a10 & (unsigned int)v19) >> v202;
              if ( (int)(v203 - v158) >= 0 )
                v156 = &unk_1C02DC030;
              v159 = v156[v152];
              v160 = &unk_1C02DC070;
              v161 = v19 & (((v158 << 16) + (v203 - v158) * v159) >> 16 << v202) | v157;
              v162 = (a10 & (unsigned int)v21) >> v205;
              if ( (int)(v204 - v162) >= 0 )
                v160 = &unk_1C02DC030;
              v151 = v21 & (((v162 << 16) + (v204 - v162) * v160[v152]) >> 16 << v205) | v161;
            }
            *(_BYTE *)(v32 + 3) = v151;
            *(_BYTE *)(v32 + 5) = BYTE2(v151);
            *(_BYTE *)(v32 + 4) = BYTE1(v151);
          }
          if ( v149 != 1 )
          {
            v163 = v31[1] >> 4;
            if ( v163 )
            {
              if ( v163 == 15 )
              {
                v164 = v23;
              }
              else
              {
                v165 = v163;
                LOWORD(a10) = *(_WORD *)(v32 + 6);
                BYTE2(a10) = *(_BYTE *)(v32 + 8);
                v166 = &unk_1C02DC070;
                v167 = (a10 & (unsigned int)v209) >> v214;
                if ( (int)(v213 - v167) >= 0 )
                  v166 = &unk_1C02DC030;
                v168 = v166[v163];
                v169 = &unk_1C02DC070;
                v170 = v209 & (((v167 << 16) + (v213 - v167) * v168) >> 16 << v214);
                v171 = (a10 & (unsigned int)v19) >> v202;
                if ( (int)(v203 - v171) >= 0 )
                  v169 = &unk_1C02DC030;
                v172 = v169[v165];
                v173 = &unk_1C02DC070;
                v174 = v19 & (((v171 << 16) + (v203 - v171) * v172) >> 16 << v202) | v170;
                v175 = (a10 & (unsigned int)v21) >> v205;
                if ( (int)(v204 - v175) >= 0 )
                  v173 = &unk_1C02DC030;
                v164 = v21 & (((v175 << 16) + (v204 - v175) * v173[v165]) >> 16 << v205) | v174;
              }
              *(_BYTE *)(v32 + 6) = v164;
              *(_BYTE *)(v32 + 8) = BYTE2(v164);
              *(_BYTE *)(v32 + 7) = BYTE1(v164);
            }
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v27 += v12;
      v28 += a7;
      LOBYTE(v20) = v202;
      v17 = v209;
      v29 = v206;
      v30 = v211;
      a8 = result;
      v208 = v27;
      v210 = v28;
      if ( !(_DWORD)result )
        return result;
    }
    v35 = *v27 & 0xF;
    if ( v35 )
    {
      if ( v35 == 15 )
      {
        v36 = v23;
      }
      else
      {
        v37 = v17;
        v38 = v35;
        LOWORD(a10) = *(_WORD *)v28;
        BYTE2(a10) = *(_BYTE *)(v28 + 2);
        v39 = &unk_1C02DC070;
        v40 = (a10 & (unsigned int)v37) >> v214;
        if ( (int)(v213 - v40) >= 0 )
          v39 = &unk_1C02DC030;
        v41 = v39[v35];
        v42 = &unk_1C02DC070;
        v43 = v209 & (((v40 << 16) + (v213 - v40) * v41) >> 16 << v214);
        v44 = (a10 & (unsigned int)v19) >> v20;
        if ( (int)(v203 - v44) >= 0 )
          v42 = &unk_1C02DC030;
        v45 = v42[v38];
        v46 = &unk_1C02DC070;
        v47 = v19 & (((v44 << 16) + (v203 - v44) * v45) >> 16 << v20) | v43;
        v48 = (a10 & (unsigned int)v21) >> v205;
        if ( (int)(v204 - v48) >= 0 )
          v46 = &unk_1C02DC030;
        v49 = v46[v38];
        v17 = v209;
        v36 = v21 & (((v48 << 16) + (v204 - v48) * v49) >> 16 << v205) | v47;
      }
      *(_BYTE *)v28 = v36;
      *(_BYTE *)(v28 + 2) = BYTE2(v36);
      *(_BYTE *)(v28 + 1) = BYTE1(v36);
    }
    v32 = v28 + 3;
    v31 = v27 + 1;
LABEL_25:
    v50 = *v31 >> 4;
    if ( v50 )
    {
      if ( v50 == 15 )
      {
        v51 = v23;
      }
      else
      {
        v52 = v17;
        v53 = v50;
        LOWORD(a10) = *(_WORD *)v32;
        BYTE2(a10) = *(_BYTE *)(v32 + 2);
        v54 = &unk_1C02DC070;
        v55 = (a10 & (unsigned int)v52) >> v214;
        if ( (int)(v213 - v55) >= 0 )
          v54 = &unk_1C02DC030;
        v56 = v54[v50];
        v57 = &unk_1C02DC070;
        v58 = v209 & (((v55 << 16) + (v213 - v55) * v56) >> 16 << v214);
        v59 = (a10 & (unsigned int)v19) >> v202;
        if ( (int)(v203 - v59) >= 0 )
          v57 = &unk_1C02DC030;
        v60 = v57[v53];
        v61 = &unk_1C02DC070;
        v62 = v19 & (((v59 << 16) + (v203 - v59) * v60) >> 16 << v202) | v58;
        v63 = (a10 & (unsigned int)v21) >> v205;
        if ( (int)(v204 - v63) >= 0 )
          v61 = &unk_1C02DC030;
        v51 = v21 & (((v63 << 16) + (v204 - v63) * v61[v53]) >> 16 << v205) | v62;
      }
      *(_BYTE *)v32 = v51;
      *(_BYTE *)(v32 + 2) = BYTE2(v51);
      *(_BYTE *)(v32 + 1) = BYTE1(v51);
    }
    v17 = v209;
    v32 += 3LL;
LABEL_37:
    v64 = *v31 & 0xF;
    if ( v64 )
    {
      if ( v64 == 15 )
      {
        v65 = v23;
      }
      else
      {
        v66 = v17;
        v67 = v64;
        LOWORD(a10) = *(_WORD *)v32;
        BYTE2(a10) = *(_BYTE *)(v32 + 2);
        v68 = &unk_1C02DC070;
        v69 = (a10 & (unsigned int)v66) >> v214;
        if ( (int)(v213 - v69) >= 0 )
          v68 = &unk_1C02DC030;
        v70 = v68[v64];
        v71 = &unk_1C02DC070;
        v72 = v209 & (((v69 << 16) + (v213 - v69) * v70) >> 16 << v214);
        v73 = (a10 & (unsigned int)v19) >> v202;
        if ( (int)(v203 - v73) >= 0 )
          v71 = &unk_1C02DC030;
        v74 = v71[v67];
        v75 = &unk_1C02DC070;
        v76 = v19 & (((v73 << 16) + (v203 - v73) * v74) >> 16 << v202) | v72;
        v77 = (a10 & (unsigned int)v21) >> v205;
        if ( (int)(v204 - v77) >= 0 )
          v75 = &unk_1C02DC030;
        v65 = v21 & (((v77 << 16) + (v204 - v77) * v75[v67]) >> 16 << v205) | v76;
      }
      *(_BYTE *)v32 = v65;
      *(_BYTE *)(v32 + 2) = BYTE2(v65);
      *(_BYTE *)(v32 + 1) = BYTE1(v65);
    }
    v17 = v209;
    v32 += 3LL;
    v30 = v211;
    ++v31;
    goto LABEL_49;
  }
  return result;
}
