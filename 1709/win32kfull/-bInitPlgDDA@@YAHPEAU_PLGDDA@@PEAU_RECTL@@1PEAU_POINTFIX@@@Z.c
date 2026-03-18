/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0004824
 * Callers:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 * Callees:
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C0005D44 (-bMulOverflow@@YAH_J0@Z.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C0005D8C (-bAddOverflow@@YAH_J0@Z.c)
 *     ROT_DIV @ 0x1C0005DC0 (ROT_DIV.c)
 *     QDIV @ 0x1C0005DE0 (QDIV.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C0005E2C (bScalePlgDDALToPlgDDA.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00EA1F4 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  struct _POINTFIX v10; // r11
  unsigned __int64 v11; // r14
  struct _POINTFIX v12; // r15
  LONG left; // r8d
  int v14; // r12d
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r11
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // r8
  LONG top; // edx
  int v22; // r9d
  LONG bottom; // r13d
  int v24; // r9d
  int v25; // ecx
  int v26; // r9d
  int v27; // edx
  int v28; // r9d
  int v29; // r9d
  int v30; // r9d
  int v31; // ecx
  __int64 v32; // r11
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // r12
  __int64 v39; // r10
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // r10
  __int64 v53; // r15
  __int64 v54; // r13
  __int64 v55; // r14
  __int64 v56; // r11
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r9
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // r9
  __int64 v63; // r10
  __int64 v64; // r10
  __int64 v65; // r8
  unsigned __int64 v66; // r10
  __int128 v67; // xmm0
  __int64 v68; // r9
  __int64 v69; // r15
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // r8
  struct _POINTFIX v73; // rdx
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // rdx
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r9
  __int64 v80; // r12
  __int64 v81; // rcx
  __int64 v82; // r15
  __int64 v83; // r10
  __int64 v84; // r10
  __int64 v85; // r9
  __int128 *v86; // rcx
  __int128 v87; // xmm0
  __int64 v88; // xmm1_8
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r10
  __int128 *v92; // rcx
  __int128 v93; // xmm0
  __int64 v94; // xmm1_8
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // r9
  __int64 v98; // r12
  __int64 v99; // r15
  __int64 v100; // r9
  signed __int64 v101; // r10
  __int64 v102; // r12
  unsigned int v103; // r10d
  __int64 v104; // r11
  __int64 v105; // r9
  __int64 v106; // r9
  __int64 v107; // r11
  __int64 v108; // rsi
  __int64 v109; // r10
  __int64 v110; // r11
  __int64 v111; // r9
  __int64 v112; // r11
  __int64 v113; // rcx
  __int64 v114; // r9
  __int64 v115; // rsi
  __int64 v116; // r10
  __int64 v117; // r10
  __int64 v118; // r11
  __int64 v119; // r9
  __int64 v120; // r10
  __int64 v121; // r9
  __int64 v122; // r10
  __int64 v123; // r11
  __int64 v124; // r10
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // r10
  __int64 v128; // r9
  __int64 v129; // r10
  __int64 v130; // r10
  __int64 v131; // r14
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r9
  __int64 v135; // r10
  __int64 v136; // r9
  __int64 v137; // r9
  __int64 v138; // r10
  __int64 v139; // r11
  __int64 v140; // r10
  __int64 v141; // r9
  __int64 v142; // r10
  __int64 v143; // r9
  __int64 v144; // r10
  __int64 v145; // r11
  __int64 v146; // rcx
  __int64 v147; // r10
  __int64 v148; // r9
  __int64 v149; // r10
  __int64 v150; // rcx
  __int64 v151; // r11
  __int64 v152; // r9
  __int64 v153; // r10
  __int64 v154; // r10
  __int64 v155; // r9
  __int64 v156; // r10
  __int64 v157; // r11
  __int64 v158; // rcx
  __int64 v159; // r10
  __int64 v160; // r9
  __int64 v161; // r10
  __int64 v162; // r11
  __int64 v163; // rcx
  __int64 v164; // r10
  __int64 v165; // r10
  __int64 v166; // r9
  __int64 v167; // r9
  __int64 v168; // r10
  __int64 v169; // r9
  __int64 v170; // r10
  __int64 v171; // r10
  __int64 v172; // r9
  __int64 v173; // r9
  __int64 v174; // r10
  __int64 v175; // r14
  __int64 v176; // r10
  __int64 v177; // r9
  __int64 v178; // rcx
  __int64 v179; // r10
  __int64 v180; // r13
  __int64 v181; // r11
  __int64 v182; // r11
  __int64 v183; // r9
  __int64 v184; // rcx
  __int64 v185; // r9
  __int64 v186; // r9
  __int64 v187; // r10
  __int64 v188; // r9
  __int64 v189; // r10
  __int64 v190; // r11
  __int64 v191; // r9
  __int64 v192; // r10
  __int64 v193; // r10
  __int64 v194; // r9
  __int64 v195; // r10
  __int64 v196; // rcx
  __int64 v197; // r10
  __int64 v198; // r9
  __int64 v199; // r10
  __int64 v200; // r9
  __int64 v201; // r10
  __int64 v202; // rcx
  __int64 v203; // r9
  __int64 v204; // r9
  __int64 v205; // r15
  __int64 v206; // r9
  __int64 v207; // r12
  __int64 v208; // r15
  __int64 v209; // r9
  __int64 v210; // rsi
  __int64 v211; // r9
  __int64 v212; // r9
  __int64 v213; // xmm1_8
  __int128 *v214; // r10
  __int128 v215; // xmm0
  __int64 v216; // xmm1_8
  __int128 *v217; // rcx
  __int128 v218; // xmm0
  __int64 v219; // xmm1_8
  __int128 v220; // xmm0
  __int64 v221; // xmm1_8
  __int128 v222; // xmm0
  __int64 v223; // xmm1_8
  __int128 v224; // xmm0
  __int64 v225; // xmm1_8
  __int64 v226; // r11
  struct _PLGDDA *v227; // rdx
  __int64 v228[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v229; // [rsp+30h] [rbp-D0h]
  __int64 v230; // [rsp+38h] [rbp-C8h]
  __int64 v231; // [rsp+40h] [rbp-C0h]
  __int64 v232; // [rsp+48h] [rbp-B8h]
  __int64 v233; // [rsp+50h] [rbp-B0h]
  __int64 v234; // [rsp+58h] [rbp-A8h]
  __int64 v235; // [rsp+60h] [rbp-A0h]
  __int64 v236; // [rsp+68h] [rbp-98h]
  __int64 v237; // [rsp+70h] [rbp-90h]
  __int64 v238; // [rsp+78h] [rbp-88h]
  __int64 v239; // [rsp+80h] [rbp-80h]
  __int64 v240; // [rsp+88h] [rbp-78h]
  __int64 v241; // [rsp+90h] [rbp-70h]
  __int64 v242; // [rsp+98h] [rbp-68h]
  __int64 v243; // [rsp+A0h] [rbp-60h]
  __int64 v244; // [rsp+A8h] [rbp-58h]
  struct _PLGDDA *v245; // [rsp+B0h] [rbp-50h]
  __int64 v246; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v247; // [rsp+C0h] [rbp-40h]
  __int64 v248; // [rsp+D0h] [rbp-30h] BYREF
  int v249; // [rsp+D8h] [rbp-28h]
  int v250; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v251; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTFIX v252; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v253; // [rsp+F0h] [rbp-10h]
  int v254; // [rsp+F8h] [rbp-8h]
  int v255; // [rsp+FCh] [rbp-4h]

  v245 = a1;
  v6 = 0;
  result = PALLOCMEM2(0x318uLL);
  v9 = result;
  if ( result )
  {
    v10 = a4[1];
    v11 = (unsigned __int64)*a4;
    v12 = a4[2];
    left = a3->left;
    v14 = v12.x + v10.x - v11;
    v253 = v12;
    v15 = HIDWORD(*(unsigned __int64 *)&v12);
    v251 = v11;
    v16 = HIDWORD(v11);
    v252 = v10;
    v17 = HIDWORD(*(unsigned __int64 *)&v10);
    v18 = v17 + v15 - v16;
    v254 = v14;
    v255 = v18;
    if ( left || a3->top )
    {
      LODWORD(v230) = a2->left;
      if ( (unsigned int)bSubOverflow(v230, left) )
        goto LABEL_236;
      top = a3->top;
      LODWORD(v231) = a2->top;
      if ( (unsigned int)bSubOverflow(v231, top) )
        goto LABEL_236;
      LODWORD(v229) = a2->right;
      if ( (unsigned int)bSubOverflow(v229, v20) )
        goto LABEL_236;
      bottom = a2->bottom;
      if ( (unsigned int)bSubOverflow(bottom, v22) )
        goto LABEL_236;
      LODWORD(v228[0]) = a3->right;
      if ( (unsigned int)bSubOverflow(v228[0], v20) || (unsigned int)bSubOverflow(a3->bottom, v24) )
        goto LABEL_236;
      a3 = (struct _RECTL *)&v246;
      v246 = 0LL;
      LODWORD(v248) = v230 - v20;
      v250 = bottom - v26;
      HIDWORD(v248) = v231 - v26;
      a2 = (struct _RECTL *)&v248;
      v249 = v229 - v20;
      LODWORD(v247) = LODWORD(v228[0]) - v20;
      HIDWORD(v247) = v25 - v26;
    }
    v20 = 0LL;
    v27 = ((int)v17 > (int)v16) ^ ((int)v17 > v18);
    v28 = v27 ^ ((*((_DWORD *)&v251 + 2 * (v27 ^ 1LL) + 1) > *((_DWORD *)&v251 + 2 * (v27 ^ 2LL) + 1)) + 1);
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            if ( (int)v17 < (int)v15 || (int)v17 <= (int)v15 && v252.x < v253.x )
            {
              v20 = 6LL;
LABEL_38:
              v31 = a3->bottom - a3->top;
              v19 = (unsigned int)(a3->right - a3->left);
              goto LABEL_39;
            }
            v20 = 7LL;
          }
        }
        else
        {
          if ( (int)v16 < v18 || (int)v16 <= v18 && (int)v251 < v14 )
          {
            v20 = 4LL;
            goto LABEL_38;
          }
          v20 = 5LL;
        }
      }
      else
      {
        if ( (int)v16 >= v18 && ((int)v16 > v18 || (int)v251 >= v14) )
        {
          v20 = 3LL;
          goto LABEL_38;
        }
        v20 = 2LL;
      }
    }
    else if ( (int)v17 >= (int)v15 && ((int)v17 > (int)v15 || v252.x >= v253.x) )
    {
      v20 = 1LL;
      goto LABEL_38;
    }
    v31 = a3->right - a3->left;
    v19 = (unsigned int)(a3->bottom - a3->top);
LABEL_39:
    v32 = (int)v19;
    v33 = v31;
    if ( !v31 )
      goto LABEL_236;
    if ( !(_DWORD)v19 )
      goto LABEL_236;
    v34 = a2->left;
    v35 = a2->top;
    v36 = (unsigned int)v20;
    v37 = 3LL * (unsigned int)v20;
    v36 *= 2LL;
    v38 = SLODWORD((&aiPlgConst)[v37]);
    v39 = dword_1C02E6E0C[2 * v37];
    v40 = dword_1C02E6E10[2 * v37];
    v41 = dword_1C02E6E08[2 * v37];
    v234 = dword_1C02E6E04[2 * v37];
    v233 = v38;
    v238 = v39;
    v235 = v40;
    v241 = v234 * v35 + v38 * v34 + (v33 - 1) * v41;
    v42 = v34 * v39;
    v43 = dword_1C02E6D84[2 * v36];
    v44 = v42 + (v32 - 1) * dword_1C02E6E14[2 * v37];
    v45 = v35 * v40;
    v46 = *((int *)&v251 + 2 * v43);
    v47 = v45 + v44;
    v48 = *((int *)&aiPlgSort + 2 * v36);
    v248 = v47;
    v20 = *((int *)&v251 + 2 * v48);
    v19 = *((int *)&v251 + 2 * v48 + 1);
    v49 = v46 - v20;
    v50 = dword_1C02E6D88[2 * v36];
    v51 = *((int *)&v251 + 2 * v43 + 1) - v19;
    v240 = v20;
    v239 = v19;
    v52 = *((int *)&v251 + 2 * v50) - v20;
    v53 = *((int *)&v251 + 2 * v50 + 1) - v19;
    v230 = v49;
    v236 = v52;
    v232 = v51;
    v229 = v53;
    if ( v49 )
    {
      if ( (unsigned int)bMulOverflow(v32, v49) )
        goto LABEL_236;
    }
    if ( v51 && (unsigned int)bMulOverflow(v32, v51) )
      goto LABEL_236;
    if ( v52 && (unsigned int)bMulOverflow(v33, v52) )
      goto LABEL_236;
    if ( v53 && (unsigned int)bMulOverflow(v33, v53) )
      goto LABEL_236;
    v54 = v53 * v33;
    v231 = v49 * v32;
    v55 = v51 * v32;
    v237 = v52 * v33;
    if ( !(v53 * v33) || (unsigned int)bMulOverflow(v33, v32) || v239 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v239 < 16 )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v33 * v56, v239 + 16) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v241, v55) )
      goto LABEL_236;
    if ( (unsigned int)bAddOverflow(v58, v57 * v55) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v47, v54) )
      goto LABEL_236;
    if ( (unsigned int)bAddOverflow(v59, v47 * v54) )
      goto LABEL_236;
    v62 = v19 + v60;
    if ( v62 < 0 && (unsigned __int64)(v62 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_236;
    v228[0] = v62 - 1;
    if ( (unsigned int)bMulOverflow(v61, 16LL) )
      goto LABEL_236;
    v64 = 16 * v63;
    if ( !v64 )
      goto LABEL_236;
    ROT_DIV(&v246, v55, v64);
    ROT_DIV(&v251, v54, v65);
    QDIV(v9 + 8, v228);
    v67 = *(_OWORD *)(v9 + 8);
    v68 = v246;
    v69 = v247;
    *(_OWORD *)(v9 + 24) = v67;
    v70 = v68 + *(_QWORD *)(v9 + 24);
    v71 = v69 + *(_QWORD *)(v9 + 32);
    *(_QWORD *)(v9 + 24) = v70;
    *(_QWORD *)(v9 + 32) = v71;
    if ( v71 >= v66 )
    {
      *(_QWORD *)(v9 + 24) = v70 + 1;
      *(_QWORD *)(v9 + 32) = v71 - v66;
    }
    v72 = v251;
    v73 = v252;
    *(_OWORD *)(v9 + 40) = v67;
    v74 = *(_QWORD *)(v9 + 40) + v72;
    v75 = *(_QWORD *)(v9 + 48) + *(_QWORD *)&v73;
    *(_QWORD *)(v9 + 40) = v74;
    *(_QWORD *)(v9 + 48) = v75;
    if ( v75 >= v66 )
    {
      *(_QWORD *)(v9 + 40) = v74 + 1;
      *(_QWORD *)(v9 + 48) = v75 - v66;
    }
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
    v76 = v68 + *(_QWORD *)(v9 + 56);
    v77 = v69 + *(_QWORD *)(v9 + 64);
    *(_QWORD *)(v9 + 56) = v76;
    *(_QWORD *)(v9 + 64) = v77;
    if ( v77 >= v66 )
    {
      *(_QWORD *)(v9 + 56) = v76 + 1;
      *(_QWORD *)(v9 + 64) = v77 - v66;
    }
    if ( (unsigned int)bMulOverflow(v233, v55) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v238, v54) )
      goto LABEL_236;
    v80 = v78 * v54;
    v246 = v79 * v55;
    if ( (unsigned int)bAddOverflow(v79 * v55, v78 * v54) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v234, v55) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v235, v54) )
      goto LABEL_236;
    v82 = v234 * v55;
    if ( (unsigned int)bAddOverflow(v234 * v55, v81 * v54) )
      goto LABEL_236;
    ROT_DIV(v9 + 264, v80 + v246, v83);
    *(_QWORD *)(v9 + 280) = v84;
    v87 = *v86;
    v88 = *((_QWORD *)v86 + 2);
    *(_OWORD *)(v9 + 288) = *v86;
    *(_OWORD *)(v9 + 312) = v87;
    *(_OWORD *)(v9 + 336) = v87;
    *(_QWORD *)(v9 + 304) = v88;
    *(_QWORD *)(v9 + 328) = v88;
    *(_QWORD *)(v9 + 352) = v88;
    ROT_DIV(v9 + 360, v82 + v85, v89);
    v90 = v229;
    *(_QWORD *)(v9 + 376) = v91;
    v93 = *v92;
    v94 = *((_QWORD *)v92 + 2);
    v95 = v230;
    *(_OWORD *)(v9 + 384) = v93;
    *(_OWORD *)(v9 + 408) = v93;
    *(_OWORD *)(v9 + 432) = v93;
    *(_QWORD *)(v9 + 400) = v94;
    *(_QWORD *)(v9 + 424) = v94;
    *(_QWORD *)(v9 + 448) = v94;
    if ( (unsigned int)bMulOverflow(v95, v90) )
      goto LABEL_236;
    v98 = v236;
    v99 = v96 * v97;
    if ( (unsigned int)bMulOverflow(v232, v236) )
      goto LABEL_236;
    v102 = v100 * v98;
    if ( (v102 ^ v99) < 0 )
    {
      if ( v99 < 0 )
      {
        if ( v101 < (__int64)(v102 + 0x8000000000000000uLL) )
          goto LABEL_236;
      }
      else if ( v99 > v102 + 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_236;
      }
    }
    v242 = v101 - v102;
    if ( (unsigned int)bMulOverflow(v33, 16LL) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v104, v103) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v233, v105) )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v238, v229) )
      goto LABEL_236;
    v108 = 16 * v33;
    if ( !v108 )
      goto LABEL_236;
    if ( !(16 * v107) )
      goto LABEL_236;
    ROT_DIV(v228, v233 * v106, v108);
    ROT_DIV(&v246, v109 * v229, v110);
    v243 = v246;
    v244 = v228[0];
    if ( (unsigned int)bAddOverflow(v228[0], v246) )
      goto LABEL_236;
    ROT_DIV(v228, v234 * v111, v108);
    ROT_DIV(&v246, v235 * v229, v112);
    if ( (unsigned int)bAddOverflow(v228[0], v246) )
      goto LABEL_236;
    v246 = v113 + v19;
    if ( v55 )
    {
      if ( (unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL) )
        goto LABEL_236;
      v117 = 16 * v116;
      if ( (v239 ^ v117) < 0 )
      {
        if ( v117 < 0 )
        {
          if ( v117 < (__int64)(v239 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v117 > v239 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      if ( (unsigned int)bMulOverflow(v231, v117 - v239) || v240 >= 0 && v118 - v240 < 16 )
        goto LABEL_236;
      if ( (unsigned int)bMulOverflow(v55, v240 + 16) )
        goto LABEL_236;
      if ( (unsigned int)bAddOverflow(v120, v55 * v119) )
        goto LABEL_236;
      v124 = v121 + v122;
      v125 = v248;
      if ( v248 )
      {
        if ( (unsigned int)bMulOverflow(v248, v99) )
          goto LABEL_236;
      }
      v126 = v125 * v99;
      if ( (v124 ^ (v125 * v99)) < 0 )
      {
        if ( v124 < 0 )
        {
          if ( v124 < (__int64)(v126 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v124 > v126 + v123 )
        {
          goto LABEL_236;
        }
      }
      v115 = v232;
      v127 = v124 - v126;
      if ( v125 && ((unsigned int)bMulOverflow(v236, v232) || (unsigned int)bMulOverflow(v128, v102)) )
        goto LABEL_236;
      if ( (unsigned int)bAddOverflow(v127, v125 * v102) )
        goto LABEL_236;
      v130 = v19 + v129;
      if ( v130 < 0 && (unsigned __int64)(v130 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_236;
      v228[0] = v130 - 1;
      if ( (unsigned int)bMulOverflow(16LL, v55) )
        goto LABEL_236;
      v131 = 16 * v55;
      *(_QWORD *)(v9 + 664) = v131;
      *(_QWORD *)(v9 + 472) = v131;
      *(_QWORD *)(v9 + 568) = v131;
      if ( !v131 )
        goto LABEL_236;
      QDIV(v9 + 72, v228);
      if ( (unsigned int)bMulOverflow(16LL, v231) )
        goto LABEL_236;
      v132 = *(_QWORD *)(v9 + 40);
      v133 = *(_QWORD *)(v9 + 8);
      if ( (v133 ^ v132) < 0 )
      {
        if ( v132 < 0 )
        {
          if ( v132 < (__int64)(v133 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v132 > v133 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      v232 = 16 * v231;
      if ( (unsigned int)bMulOverflow(16 * v231, v132 - v133) )
        goto LABEL_236;
      v136 = 16 * v231 * v134;
      if ( (v136 ^ v242) < 0 )
      {
        if ( v136 < 0 )
        {
          if ( v136 < (__int64)(v242 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v136 > v242 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      if ( (unsigned int)bAddOverflow(v135, v136 - v242) )
        goto LABEL_236;
      v228[0] = v137 + v138;
      QDIV(v9 + 120, v228);
      ROT_DIV(v9 + 648, v232, *(_QWORD *)(v9 + 664));
      v140 = v238;
      if ( v229 )
      {
        if ( (unsigned int)bMulOverflow(v238, v230) || (unsigned int)bMulOverflow(v142 * v230, v141) )
          goto LABEL_236;
      }
      v143 = v140 * v99;
      if ( v115 )
      {
        if ( (unsigned int)bMulOverflow(v140, v139) || (unsigned int)bMulOverflow(v144 * v145, v115) )
          goto LABEL_236;
      }
      v146 = v140 * v102;
      if ( (v143 ^ (v140 * v102)) < 0 )
      {
        if ( v143 < 0 )
        {
          if ( v143 < (__int64)(v146 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v143 > v146 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      if ( (unsigned int)bMulOverflow(16LL, v243 + v244) || (unsigned int)bMulOverflow(16 * v147, v231) )
        goto LABEL_236;
      v150 = 16 * v231 * v149;
      if ( (v148 ^ v150) < 0 )
      {
        if ( ((v231 * v149) & 0x800000000000000LL) != 0 )
        {
          if ( v150 < (__int64)(v148 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v150 > v148 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      v228[0] = v150 - v148;
      QDIV(v9 + 456, v228);
      if ( v229 )
      {
        if ( (unsigned int)bMulOverflow(v235, v230) || (unsigned int)bMulOverflow(v235 * v153, v152) )
          goto LABEL_236;
      }
      else
      {
        v154 = v235;
      }
      v155 = v154 * v99;
      if ( v115 )
      {
        if ( (unsigned int)bMulOverflow(v154, v151) || (unsigned int)bMulOverflow(v156 * v157, v115) )
        {
LABEL_236:
          Win32FreePool(v9, v19, v20);
          return v6;
        }
      }
      v158 = v154 * v102;
      if ( (v155 ^ (v154 * v102)) < 0 )
      {
        if ( v155 < 0 )
        {
          if ( v155 < (__int64)(v158 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v155 > v158 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      if ( (unsigned int)bMulOverflow(16LL, v246) || (unsigned int)bMulOverflow(16 * v159, v231) )
        goto LABEL_236;
      v163 = 16 * v162 * v161;
      if ( (v160 ^ v163) < 0 )
      {
        if ( ((v162 * v161) & 0x800000000000000LL) != 0 )
        {
          if ( v163 < (__int64)(v160 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v163 > v160 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      v228[0] = v163 - v160;
      QDIV(v9 + 552, v228);
      ROT_DIV(v9 + 744, v232, v131);
      *(_QWORD *)(v9 + 760) = v131;
    }
    else
    {
      *(_QWORD *)(v9 + 648) = 0LL;
      v115 = v114;
      *(_QWORD *)(v9 + 656) = 0LL;
      *(_QWORD *)(v9 + 664) = 0LL;
      *(_QWORD *)(v9 + 456) = 0LL;
      *(_QWORD *)(v9 + 464) = 0LL;
      *(_QWORD *)(v9 + 472) = 0LL;
      *(_QWORD *)(v9 + 552) = 0LL;
      *(_QWORD *)(v9 + 560) = 0LL;
      *(_QWORD *)(v9 + 568) = 0LL;
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_QWORD *)(v9 + 120) = 0LL;
      *(_QWORD *)(v9 + 128) = 0LL;
      *(_QWORD *)(v9 + 744) = 0LL;
      *(_QWORD *)(v9 + 752) = 0LL;
      *(_QWORD *)(v9 + 760) = 0LL;
    }
    if ( (unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8)) )
      goto LABEL_236;
    v165 = 16 * v164;
    if ( (v239 ^ v165) < 0 )
    {
      if ( v165 < 0 )
      {
        if ( v165 < (__int64)(v239 + 0x8000000000000000uLL) )
          goto LABEL_236;
      }
      else if ( v165 > v239 + 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_236;
      }
    }
    if ( (unsigned int)bMulOverflow(v237, v165 - v239) || v240 >= 0 && v166 - v240 < 16 )
      goto LABEL_236;
    if ( (unsigned int)bMulOverflow(v54, v240 + 16) )
      goto LABEL_236;
    if ( (unsigned int)bAddOverflow(v168, v54 * v167) )
      goto LABEL_236;
    v171 = v169 + v170;
    v172 = v241;
    if ( v241 )
    {
      if ( (unsigned int)bMulOverflow(v241, v99) )
        goto LABEL_236;
    }
    if ( (unsigned int)bAddOverflow(v171, v172 * v99) )
      goto LABEL_236;
    v175 = v236;
    v176 = v19 + v174;
    if ( v173 )
    {
      if ( (unsigned int)bMulOverflow(v236, v115) || (unsigned int)bMulOverflow(v177, v102) )
        goto LABEL_236;
    }
    v178 = v173 * v102;
    if ( (v176 ^ (v173 * v102)) < 0 )
    {
      if ( v176 >= 0 )
      {
        v19 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v176 > v178 + 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_236;
        goto LABEL_192;
      }
      if ( v176 < (__int64)(v178 + 0x8000000000000000uLL) )
        goto LABEL_236;
    }
    v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_192:
    v179 = v176 - v178;
    if ( v179 < 0 && (unsigned __int64)(v179 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_236;
    v228[0] = v179 - 1;
    if ( (unsigned int)bMulOverflow(16LL, v54) )
      goto LABEL_236;
    v180 = 16 * v54;
    *(_QWORD *)(v9 + 688) = v180;
    *(_QWORD *)(v9 + 496) = v180;
    *(_QWORD *)(v9 + 592) = v180;
    if ( !v180 )
      goto LABEL_236;
    QDIV(v9 + 88, v228);
    if ( (unsigned int)bMulOverflow(16LL, v181) )
      goto LABEL_236;
    v183 = *(_QWORD *)(v9 + 24);
    v184 = *(_QWORD *)(v9 + 8);
    if ( (v184 ^ v183) < 0 )
    {
      if ( v183 < 0 )
      {
        if ( v183 < (__int64)(v184 + 0x8000000000000000uLL) )
          goto LABEL_236;
      }
      else if ( v183 > v184 + 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_236;
      }
    }
    if ( (unsigned int)bMulOverflow(16 * v182, v183 - v184)
      || (unsigned int)bAddOverflow(16 * v237 * v185, v242)
      || (unsigned int)bAddOverflow(v187, v19 + v186) )
    {
      goto LABEL_236;
    }
    v228[0] = v188 + v189;
    QDIV(v9 + 104, v228);
    ROT_DIV(v9 + 672, v190, *(_QWORD *)(v9 + 688));
    if ( v229 )
    {
      if ( (unsigned int)bMulOverflow(v233, v230) || (unsigned int)bMulOverflow(v233 * v192, v191) )
        goto LABEL_236;
    }
    else
    {
      v193 = v233;
    }
    v194 = v193 * v99;
    if ( !v115 || !(unsigned int)bMulOverflow(v193, v175) && !(unsigned int)bMulOverflow(v195 * v175, v115) )
    {
      v196 = v193 * v102;
      if ( (v194 ^ (v193 * v102)) < 0 )
      {
        if ( v194 < 0 )
        {
          if ( v194 < (__int64)(v196 + 0x8000000000000000uLL) )
            goto LABEL_236;
        }
        else if ( v194 > v196 + 0x7FFFFFFFFFFFFFFFLL )
        {
          goto LABEL_236;
        }
      }
      if ( (unsigned int)bMulOverflow(16LL, v243 + v244) )
        goto LABEL_236;
      if ( (unsigned int)bMulOverflow(16 * v197, v237) )
        goto LABEL_236;
      if ( (unsigned int)bAddOverflow(16 * v237 * v199, v198) )
        goto LABEL_236;
      v228[0] = v200 + v201;
      QDIV(v9 + 480, v228);
      if ( v229 )
      {
        if ( (unsigned int)bMulOverflow(v234, v230) || (unsigned int)bMulOverflow(v230 * v202, v203) )
          goto LABEL_236;
      }
      v204 = v234;
      v205 = v234 * v99;
      if ( v115 )
      {
        if ( (unsigned int)bMulOverflow(v234, v175) || (unsigned int)bMulOverflow(v206 * v175, v115) )
          goto LABEL_236;
      }
      v207 = v204 * v102;
      if ( (v205 ^ v207) >= 0 )
        goto LABEL_232;
      if ( v205 < 0 )
      {
        if ( v205 >= (__int64)(v207 + 0x8000000000000000uLL) )
        {
LABEL_232:
          v208 = v205 - v207;
          if ( !(unsigned int)bMulOverflow(16LL, v246) )
          {
            v210 = v237;
            if ( !(unsigned int)bMulOverflow(16 * v209, v237) && !(unsigned int)bAddOverflow(16 * v210 * v211, v208) )
            {
              v228[0] = v208 + v212;
              QDIV(v9 + 576, v228);
              v213 = *(_QWORD *)(v9 + 688);
              *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
              v215 = *v214;
              *(_QWORD *)(v9 + 712) = v213;
              v216 = *((_QWORD *)v214 + 2);
              *(_OWORD *)(v9 + 504) = v215;
              v218 = *v217;
              *(_QWORD *)(v9 + 520) = v216;
              v219 = *((_QWORD *)v217 + 2);
              *(_OWORD *)(v9 + 600) = v218;
              v220 = *(_OWORD *)(v9 + 648);
              *(_QWORD *)(v9 + 616) = v219;
              v221 = *(_QWORD *)(v9 + 664);
              *(_OWORD *)(v9 + 720) = v220;
              v222 = *(_OWORD *)(v9 + 456);
              *(_QWORD *)(v9 + 736) = v221;
              v223 = *(_QWORD *)(v9 + 472);
              *(_OWORD *)(v9 + 528) = v222;
              v224 = *(_OWORD *)(v9 + 552);
              *(_QWORD *)(v9 + 544) = v223;
              v225 = *(_QWORD *)(v9 + 568);
              *(_OWORD *)(v9 + 624) = v224;
              *(_QWORD *)(v9 + 640) = v225;
              ROT_DIV(v9 + 768, v226, v180);
              v227 = v245;
              *(_QWORD *)(v9 + 784) = v180;
              v6 = bScalePlgDDALToPlgDDA(v9, v227);
            }
          }
          goto LABEL_236;
        }
      }
      else if ( v205 <= v207 + 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_232;
      }
    }
    goto LABEL_236;
  }
  return result;
}
