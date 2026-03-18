/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02B17EC
 * Callers:
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C012493C (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     QDIV @ 0x1C02B1714 (QDIV.c)
 *     ROT_DIV @ 0x1C02B175C (ROT_DIV.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C02B17AC (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C02B2A3C (-bMulOverflow@@YAH_J0@Z.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C02B2AC4 (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C02B3698 (-bSubOverflow@@YAH_J0@Z.c)
 */

void *__fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v6; // ebx
  void *result; // rax
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
  LONG top; // edx
  int v20; // r8d
  int v21; // r9d
  LONG bottom; // r13d
  int v23; // r8d
  int v24; // r9d
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // r9
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // r14
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rcx
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // r13
  __int64 v52; // r9
  __int64 v53; // r10
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // r10
  __int64 v57; // r11
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // r11
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r9
  __int64 v64; // r9
  __int64 v65; // r10
  __int64 v66; // r10
  __int64 v67; // r11
  __int64 v68; // r10
  __int64 v69; // r8
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // r10
  __int64 v72; // r11
  _OWORD *v73; // rcx
  __int64 v74; // r9
  struct _POINTFIX v75; // r12
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r8
  unsigned __int64 v81; // rdx
  __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // r9
  __int64 v86; // r11
  __int64 v87; // r11
  __int64 v88; // rcx
  __int64 v89; // r11
  __int64 v90; // r12
  __int64 v91; // r10
  __int64 v92; // r10
  __int64 v93; // r9
  __int128 *v94; // rcx
  __int128 v95; // xmm0
  __int64 v96; // xmm1_8
  __int64 v97; // r8
  __int64 v98; // r10
  __int128 *v99; // rcx
  __int128 v100; // xmm0
  __int64 v101; // xmm1_8
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // r10
  __int64 v106; // r12
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // r9
  __int64 v110; // r10
  __int64 v111; // r14
  __int64 v112; // rsi
  __int64 v113; // r10
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r11
  __int64 v119; // rsi
  __int64 v120; // r14
  __int64 v121; // rsi
  __int64 v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // rsi
  __int64 v125; // rdx
  __int64 v126; // r11
  __int64 v127; // rsi
  __int64 v128; // r10
  __int64 v129; // r11
  __int64 v130; // rdx
  __int64 v131; // r10
  __int64 v132; // r14
  __int64 v133; // r10
  __int64 v134; // rdx
  __int64 v135; // r9
  __int64 v136; // r10
  __int64 v137; // rsi
  __int64 v138; // r10
  __int64 v139; // r9
  __int64 v140; // r14
  __int64 v141; // r10
  __int64 v142; // r10
  __int64 v143; // r11
  __int64 v144; // r11
  unsigned __int64 v145; // r11
  __int64 v146; // r14
  __int64 v147; // rdx
  __int64 v148; // r9
  __int64 v149; // r14
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // r10
  __int64 v154; // r8
  __int64 v155; // r10
  unsigned __int64 v156; // r10
  unsigned __int64 v157; // r8
  __int64 v158; // r14
  __int64 v159; // r9
  __int64 v160; // r10
  __int64 v161; // r9
  __int64 v162; // r9
  __int64 v163; // rcx
  __int64 v164; // r9
  unsigned __int64 v165; // r8
  __int64 v166; // r10
  __int64 v167; // r9
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // r9
  __int64 v171; // r10
  __int64 v172; // rcx
  __int64 v173; // r9
  unsigned __int64 v174; // r8
  __int64 v175; // r11
  __int64 v176; // r11
  __int64 v177; // r11
  __int64 v178; // rdx
  __int64 v179; // r11
  __int64 v180; // rcx
  __int64 v181; // r10
  __int64 v182; // r11
  __int64 v183; // rdx
  __int64 v184; // r10
  __int64 v185; // r8
  __int64 v186; // r10
  __int64 v187; // rcx
  __int64 v188; // rdx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // r10
  __int64 v192; // r10
  __int64 v193; // r9
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r10
  __int64 v197; // r10
  __int64 v198; // r15
  __int64 v199; // rdx
  __int64 v200; // r9
  __int64 v201; // r9
  __int64 v202; // rdx
  __int64 v203; // r9
  __int64 v204; // r10
  __int64 v205; // r9
  __int64 v206; // r10
  unsigned __int64 v207; // r8
  __int64 v208; // r11
  __int64 v209; // r9
  __int64 v210; // r10
  __int64 v211; // r10
  __int64 v212; // r9
  __int64 v213; // r10
  __int64 v214; // r11
  __int64 v215; // r9
  __int64 v216; // r14
  __int64 v217; // r9
  unsigned __int64 v218; // r8
  __int64 v219; // r14
  __int64 v220; // r10
  __int64 v221; // r11
  __int64 v222; // r14
  __int64 v223; // rcx
  __int64 v224; // r9
  __int64 v225; // r9
  __int64 v226; // r12
  __int64 v227; // r9
  __int64 v228; // r11
  __int64 v229; // r10
  __int64 v230; // r12
  __int64 v231; // r9
  __int64 v232; // rsi
  unsigned __int64 v233; // r8
  __int64 v234; // rdx
  __int64 v235; // xmm1_8
  __int128 v236; // xmm0
  __int64 v237; // xmm1_8
  __int128 *v238; // rcx
  __int128 v239; // xmm0
  __int64 v240; // xmm1_8
  __int128 v241; // xmm0
  __int64 v242; // xmm1_8
  __int128 v243; // xmm0
  __int64 v244; // xmm1_8
  __int128 v245; // xmm0
  __int64 v246; // xmm1_8
  struct _PLGDDA *v247; // rdx
  unsigned __int64 v248; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v249; // [rsp+28h] [rbp-D8h]
  __int64 v250; // [rsp+30h] [rbp-D0h]
  __int64 v251; // [rsp+38h] [rbp-C8h]
  __int64 v252; // [rsp+40h] [rbp-C0h]
  __int64 v253; // [rsp+48h] [rbp-B8h]
  __int64 v254; // [rsp+50h] [rbp-B0h]
  __int64 v255; // [rsp+58h] [rbp-A8h]
  __int64 v256; // [rsp+60h] [rbp-A0h]
  __int64 v257; // [rsp+68h] [rbp-98h]
  __int64 v258; // [rsp+70h] [rbp-90h]
  __int64 v259; // [rsp+78h] [rbp-88h]
  __int64 v260; // [rsp+80h] [rbp-80h]
  __int64 v261; // [rsp+88h] [rbp-78h]
  __int64 v262; // [rsp+90h] [rbp-70h]
  __int64 v263; // [rsp+98h] [rbp-68h]
  __int64 v264[3]; // [rsp+A0h] [rbp-60h] BYREF
  struct _PLGDDA *v265; // [rsp+B8h] [rbp-48h]
  __int64 v266; // [rsp+C0h] [rbp-40h] BYREF
  int v267; // [rsp+C8h] [rbp-38h]
  int v268; // [rsp+CCh] [rbp-34h]
  __int64 v269; // [rsp+D0h] [rbp-30h] BYREF
  int v270; // [rsp+D8h] [rbp-28h]
  int v271; // [rsp+DCh] [rbp-24h]
  __int64 v272; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTFIX v273; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v274; // [rsp+F0h] [rbp-10h]
  int v275; // [rsp+F8h] [rbp-8h]
  int v276; // [rsp+FCh] [rbp-4h]

  v265 = a1;
  v6 = 0;
  result = PALLOCMEM2(0x318uLL, 1633969223LL, 1);
  v9 = (__int64)result;
  if ( result )
  {
    v10 = a4[1];
    v11 = (unsigned __int64)*a4;
    v12 = a4[2];
    left = a3->left;
    v14 = v12.x + v10.x - v11;
    v274 = v12;
    v15 = HIDWORD(*(unsigned __int64 *)&v12);
    v272 = v11;
    v16 = HIDWORD(v11);
    v273 = v10;
    v17 = HIDWORD(*(unsigned __int64 *)&v10);
    v18 = v17 + v15 - v16;
    v275 = v14;
    v276 = v18;
    if ( left || a3->top )
    {
      LODWORD(v249) = a2->left;
      if ( bSubOverflow(v249, left) )
        goto LABEL_178;
      top = a3->top;
      LODWORD(v250) = a2->top;
      if ( bSubOverflow(v250, top) )
        goto LABEL_178;
      LODWORD(v251) = a2->right;
      if ( bSubOverflow(v251, v20) )
        goto LABEL_178;
      bottom = a2->bottom;
      if ( bSubOverflow(bottom, v21) )
        goto LABEL_178;
      LODWORD(v248) = a3->right;
      if ( bSubOverflow(v248, v23) || bSubOverflow(a3->bottom, v24) )
        goto LABEL_178;
      a3 = (struct _RECTL *)&v266;
      v266 = 0LL;
      LODWORD(v269) = v249 - v26;
      v271 = bottom - v27;
      HIDWORD(v269) = v250 - v27;
      a2 = (struct _RECTL *)&v269;
      v270 = v251 - v26;
      v267 = v248 - v26;
      v268 = v25 - v27;
    }
    v28 = 0LL;
    v29 = ((int)v17 > (int)v16 == (int)v17 > v18) ^ 3;
    if ( *((_DWORD *)&v272 + 2 * ((int)v17 > (int)v16 == (int)v17 > v18) + 1) <= *((_DWORD *)&v272
                                                                                 + 2
                                                                                 * (((int)v17 > (int)v16 == (int)v17 > v18) ^ 3LL)
                                                                                 + 1) )
      v29 = (int)v17 > (int)v16 == (int)v17 > v18;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            if ( (int)v17 < (int)v15 || (int)v17 <= (int)v15 && v273.x < v274.x )
            {
              v28 = 6LL;
LABEL_41:
              v32 = a3->bottom - a3->top;
              v33 = a3->right - a3->left;
              goto LABEL_42;
            }
            v28 = 7LL;
          }
        }
        else
        {
          if ( (int)v16 < v18 || (int)v16 <= v18 && (int)v272 < v14 )
          {
            v28 = 4LL;
            goto LABEL_41;
          }
          v28 = 5LL;
        }
      }
      else
      {
        if ( (int)v16 >= v18 && ((int)v16 > v18 || (int)v272 >= v14) )
        {
          v28 = 3LL;
          goto LABEL_41;
        }
        v28 = 2LL;
      }
    }
    else
    {
      if ( (int)v17 >= (int)v15 && ((int)v17 > (int)v15 || v273.x >= v274.x) )
      {
        v28 = 1LL;
        goto LABEL_41;
      }
      v28 = 0LL;
    }
    v32 = a3->right - a3->left;
    v33 = a3->bottom - a3->top;
LABEL_42:
    v34 = v33;
    if ( !v32 )
      goto LABEL_178;
    if ( !v33 )
      goto LABEL_178;
    v35 = a2->left;
    v36 = 3 * v28;
    v37 = a2->top;
    v38 = SLODWORD((&aiPlgConst)[3 * v28]);
    v39 = 2 * v28;
    v40 = dword_1C02EA2EC[2 * v36];
    v41 = dword_1C02EA2F0[2 * v36];
    v42 = dword_1C02EA2E8[2 * v36];
    v254 = dword_1C02EA2E4[2 * v36];
    v250 = v38;
    v259 = v40;
    v251 = v41;
    v257 = v254 * v37 + v38 * v35 + (v32 - 1) * v42;
    v43 = SLODWORD((&aiPlgSort)[v39]);
    v44 = v40 * v35 + (v34 - 1) * dword_1C02EA2F4[2 * v36];
    v45 = dword_1C02EA264[2 * v39];
    v46 = v41 * v37 + v44;
    v269 = v46;
    v47 = *((int *)&v272 + 2 * v43 + 1);
    v48 = *((int *)&v272 + 2 * v43);
    v49 = dword_1C02EA268[2 * v39];
    v50 = *((int *)&v272 + 2 * v45) - v48;
    v51 = *((int *)&v272 + 2 * v45 + 1) - v47;
    v258 = v48;
    v52 = *((int *)&v272 + 2 * v49) - v48;
    v53 = *((int *)&v272 + 2 * v49 + 1) - v47;
    v261 = v47;
    v253 = v50;
    v256 = v52;
    v249 = v53;
    if ( v50 )
    {
      if ( (unsigned int)bMulOverflow(v34, v50) )
        goto LABEL_178;
    }
    if ( v51 && (unsigned int)bMulOverflow(v34, v51) )
      goto LABEL_178;
    if ( v52 && (unsigned int)bMulOverflow(v32, v52) )
      goto LABEL_178;
    if ( v53 && (unsigned int)bMulOverflow(v32, v53) )
      goto LABEL_178;
    v54 = v32 * v53;
    v255 = v34 * v50;
    v252 = v32 * v52;
    if ( !(v32 * v53) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v32, v34) )
      goto LABEL_178;
    if ( bAddOverflow(v261, 16LL) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v56, v55 + 16) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v257, v57) )
      goto LABEL_178;
    if ( bAddOverflow(v59, v58 * v60) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v46, v54) )
      goto LABEL_178;
    if ( bAddOverflow(v61, v46 * v54) )
      goto LABEL_178;
    if ( (unsigned int)bSubOverflow(v62 + v63, 1LL) )
      goto LABEL_178;
    v248 = v64 - 1;
    if ( (unsigned int)bMulOverflow(v65, 16LL) )
      goto LABEL_178;
    v68 = 16 * v66;
    if ( !v68 )
      goto LABEL_178;
    ROT_DIV(&v272, v67, v68);
    ROT_DIV(v264, v54, v69);
    QDIV((unsigned __int64 *)(v9 + 8), &v248, v70);
    v74 = v272;
    v75 = v273;
    *(_OWORD *)(v9 + 24) = *v73;
    v76 = v74 + *(_QWORD *)(v9 + 24);
    v77 = *(_QWORD *)&v75 + *(_QWORD *)(v9 + 32);
    *(_QWORD *)(v9 + 24) = v76;
    *(_QWORD *)(v9 + 32) = v77;
    if ( v77 >= v71 )
    {
      *(_QWORD *)(v9 + 24) = v76 + 1;
      *(_QWORD *)(v9 + 32) = v77 - v71;
    }
    v78 = v264[0];
    v79 = v264[1];
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
    v80 = *(_QWORD *)(v9 + 40) + v78;
    v81 = *(_QWORD *)(v9 + 48) + v79;
    *(_QWORD *)(v9 + 40) = v80;
    *(_QWORD *)(v9 + 48) = v81;
    if ( v81 >= v71 )
    {
      *(_QWORD *)(v9 + 40) = v80 + 1;
      *(_QWORD *)(v9 + 48) = v81 - v71;
    }
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
    v82 = v74 + *(_QWORD *)(v9 + 56);
    v83 = *(_QWORD *)&v75 + *(_QWORD *)(v9 + 64);
    *(_QWORD *)(v9 + 56) = v82;
    *(_QWORD *)(v9 + 64) = v83;
    if ( v83 >= v71 )
    {
      *(_QWORD *)(v9 + 56) = v82 + 1;
      *(_QWORD *)(v9 + 64) = v83 - v71;
    }
    if ( (unsigned int)bMulOverflow(v250, v72) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v259, v54) )
      goto LABEL_178;
    v266 = v84 * v54;
    v260 = v85 * v86;
    if ( bAddOverflow(v85 * v86, v84 * v54) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v254, v87) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v251, v54) )
      goto LABEL_178;
    v90 = v254 * v89;
    if ( bAddOverflow(v254 * v89, v88 * v54) )
      goto LABEL_178;
    ROT_DIV((__int64 *)(v9 + 264), v266 + v260, v91);
    *(_QWORD *)(v9 + 280) = v92;
    v95 = *v94;
    v96 = *((_QWORD *)v94 + 2);
    *(_OWORD *)(v9 + 288) = *v94;
    *(_OWORD *)(v9 + 312) = v95;
    *(_OWORD *)(v9 + 336) = v95;
    *(_QWORD *)(v9 + 304) = v96;
    *(_QWORD *)(v9 + 328) = v96;
    *(_QWORD *)(v9 + 352) = v96;
    ROT_DIV((__int64 *)(v9 + 360), v90 + v93, v97);
    *(_QWORD *)(v9 + 376) = v98;
    v100 = *v99;
    v101 = *((_QWORD *)v99 + 2);
    v102 = v249;
    v103 = v253;
    *(_OWORD *)(v9 + 384) = v100;
    *(_OWORD *)(v9 + 408) = v100;
    *(_OWORD *)(v9 + 432) = v100;
    *(_QWORD *)(v9 + 400) = v101;
    *(_QWORD *)(v9 + 424) = v101;
    *(_QWORD *)(v9 + 448) = v101;
    if ( (unsigned int)bMulOverflow(v103, v102) )
      goto LABEL_178;
    v106 = v104 * v105;
    if ( (unsigned int)bMulOverflow(v51, v256) )
      goto LABEL_178;
    v262 = v51 * v107;
    if ( (unsigned int)bSubOverflow(v106, v51 * v107) )
      goto LABEL_178;
    v266 = v108 - v109;
    if ( (unsigned int)bMulOverflow(v32, 16LL) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v34, 16LL) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v250, v51) )
      goto LABEL_178;
    if ( (unsigned int)bMulOverflow(v259, v110) )
      goto LABEL_178;
    v111 = 16 * v32;
    if ( !v111 )
      goto LABEL_178;
    v112 = 16 * v34;
    if ( !v112 )
      goto LABEL_178;
    ROT_DIV(&v272, v250 * v51, v111);
    ROT_DIV(v264, v113 * v249, v112);
    if ( bAddOverflow(v272, v264[0]) )
      goto LABEL_178;
    v263 = v115 + v114;
    ROT_DIV(&v272, v254 * v51, v111);
    ROT_DIV(v264, v251 * v249, v112);
    if ( bAddOverflow(v272, v264[0]) )
      goto LABEL_178;
    v119 = v117 + v116;
    if ( v118 )
    {
      v121 = *(_QWORD *)(v9 + 8);
      if ( (unsigned int)bMulOverflow(v121, 16LL) )
        goto LABEL_178;
      v122 = 16 * v121;
      if ( (unsigned int)bSubOverflow(v122, v261) )
        goto LABEL_178;
      if ( (unsigned int)bMulOverflow(v255, v122 - v123) )
        goto LABEL_178;
      v124 = v258;
      if ( bAddOverflow(v258, 16LL) )
        goto LABEL_178;
      v127 = v125 + v124;
      if ( (unsigned int)bMulOverflow(v126, v127) )
        goto LABEL_178;
      if ( bAddOverflow(v128, v127 * v129) )
        goto LABEL_178;
      v132 = v269;
      v133 = v130 + v131;
      if ( v269 )
      {
        if ( (unsigned int)bMulOverflow(v269, v106) )
          goto LABEL_178;
      }
      if ( (unsigned int)bSubOverflow(v133, v106 * v132) )
        goto LABEL_178;
      v137 = v256;
      v138 = v136 - v134;
      if ( v132 )
      {
        if ( (unsigned int)bMulOverflow(v256, v51) || (unsigned int)bMulOverflow(v132, v139) )
          goto LABEL_178;
      }
      v140 = v135 * v132;
      if ( bAddOverflow(v138, v140) )
        goto LABEL_178;
      if ( (unsigned int)bSubOverflow(v140 + v141, 1LL) )
        goto LABEL_178;
      v248 = v142 - 1;
      if ( (unsigned int)bMulOverflow(16LL, v143) )
        goto LABEL_178;
      v145 = 16 * v144;
      *(_QWORD *)(v9 + 664) = v145;
      *(_QWORD *)(v9 + 472) = v145;
      *(_QWORD *)(v9 + 568) = v145;
      if ( !v145 )
        goto LABEL_178;
      QDIV((unsigned __int64 *)(v9 + 72), &v248, v145);
      if ( (unsigned int)bMulOverflow(16LL, v255) )
        goto LABEL_178;
      v146 = *(_QWORD *)(v9 + 40);
      if ( (unsigned int)bSubOverflow(v146, *(_QWORD *)(v9 + 8)) )
        goto LABEL_178;
      v149 = v146 - v147;
      v260 = 16 * v148;
      if ( (unsigned int)bMulOverflow(16 * v148, v149) )
        goto LABEL_178;
      if ( (unsigned int)bSubOverflow(16 * v149 * v150, v266) )
        goto LABEL_178;
      if ( bAddOverflow(v153, v152 - v151) )
        goto LABEL_178;
      v156 = v154 + v155;
      v157 = *(_QWORD *)(v9 + 664);
      v248 = v156;
      QDIV((unsigned __int64 *)(v9 + 120), &v248, v157);
      ROT_DIV((__int64 *)(v9 + 648), v260, *(_QWORD *)(v9 + 664));
      v158 = v259;
      if ( v249 )
      {
        if ( (unsigned int)bMulOverflow(v259, v253) || (unsigned int)bMulOverflow(v158 * v160, v159) )
          goto LABEL_178;
      }
      v161 = v106 * v158;
      if ( v51 )
      {
        if ( (unsigned int)bMulOverflow(v158, v137) || (unsigned int)bMulOverflow(v158 * v137, v51) )
          goto LABEL_178;
      }
      if ( (unsigned int)bSubOverflow(v161, v262 * v158) )
        goto LABEL_178;
      v120 = v263;
      if ( (unsigned int)bMulOverflow(16LL, v263) )
        goto LABEL_178;
      if ( (unsigned int)bMulOverflow(16 * v120, v255) )
        goto LABEL_178;
      if ( (unsigned int)bSubOverflow(16 * v255 * v120, v162) )
        goto LABEL_178;
      v165 = *(_QWORD *)(v9 + 472);
      v248 = v163 - v164;
      QDIV((unsigned __int64 *)(v9 + 456), &v248, v165);
      if ( v249 )
      {
        if ( (unsigned int)bMulOverflow(v251, v253) || (unsigned int)bMulOverflow(v251 * v253, v167) )
          goto LABEL_178;
      }
      v168 = v251;
      v169 = v106 * v251;
      if ( v51 )
      {
        if ( (unsigned int)bMulOverflow(v251, v137) || (unsigned int)bMulOverflow(v251 * v137, v51) )
          goto LABEL_178;
        v168 = v251;
      }
      if ( (unsigned int)bSubOverflow(v169, v166 * v168) )
        goto LABEL_178;
      v119 = v264[0] + v272;
      if ( (unsigned int)bMulOverflow(16LL, v264[0] + v272)
        || (unsigned int)bMulOverflow(16 * v119, v255)
        || (unsigned int)bSubOverflow(16 * v171 * v119, v170) )
      {
        goto LABEL_178;
      }
      v174 = *(_QWORD *)(v9 + 568);
      v248 = v172 - v173;
      QDIV((unsigned __int64 *)(v9 + 552), &v248, v174);
      ROT_DIV((__int64 *)(v9 + 744), v260, v175);
      *(_QWORD *)(v9 + 760) = v176;
    }
    else
    {
      v120 = v263;
      *(_QWORD *)(v9 + 648) = 0LL;
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
    if ( (unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8))
      || (unsigned int)bSubOverflow(16 * v177, v261)
      || (unsigned int)bMulOverflow(v252, v179 - v178)
      || bAddOverflow(v258, 16LL)
      || (unsigned int)bMulOverflow(v54, v180 + 16)
      || bAddOverflow(v181, v182 * v54) )
    {
      goto LABEL_178;
    }
    v185 = v257;
    v186 = v183 + v184;
    if ( v257 )
    {
      if ( (unsigned int)bMulOverflow(v257, v106) )
        goto LABEL_178;
      v185 = v187;
    }
    if ( !bAddOverflow(v186, v106 * v185) )
    {
      v192 = v188 + v191;
      if ( v189 )
      {
        if ( (unsigned int)bMulOverflow(v256, v51) || (unsigned int)bMulOverflow(v257, v193) )
          goto LABEL_178;
        v189 = v194;
      }
      if ( !(unsigned int)bSubOverflow(v192, v190 * v189) && !(unsigned int)bSubOverflow(v196 - v195, 1LL) )
      {
        v248 = v197 - 1;
        if ( !(unsigned int)bMulOverflow(16LL, v54) )
        {
          v198 = 16 * v54;
          *(_QWORD *)(v9 + 688) = v198;
          *(_QWORD *)(v9 + 496) = v198;
          *(_QWORD *)(v9 + 592) = v198;
          if ( v198 )
          {
            QDIV((unsigned __int64 *)(v9 + 88), &v248, v198);
            if ( !(unsigned int)bMulOverflow(16LL, v252)
              && !(unsigned int)bSubOverflow(*(_QWORD *)(v9 + 24), *(_QWORD *)(v9 + 8)) )
            {
              v258 = 16 * v252;
              if ( !(unsigned int)bMulOverflow(16 * v252, v200 - v199)
                && !bAddOverflow(16 * v252 * v201, v266)
                && !bAddOverflow(v204, v202 + v203) )
              {
                v207 = *(_QWORD *)(v9 + 688);
                v248 = v205 + v206;
                QDIV((unsigned __int64 *)(v9 + 104), &v248, v207);
                ROT_DIV((__int64 *)(v9 + 672), v258, *(_QWORD *)(v9 + 688));
                if ( v249 )
                {
                  if ( (unsigned int)bMulOverflow(v250, v253) || (unsigned int)bMulOverflow(v250 * v210, v209) )
                    goto LABEL_178;
                }
                else
                {
                  v211 = v250;
                }
                v212 = v211 * v106;
                if ( (!v51 || !(unsigned int)bMulOverflow(v211, v208) && !(unsigned int)bMulOverflow(v213 * v214, v51))
                  && !(unsigned int)bSubOverflow(v212, v250 * v262)
                  && !(unsigned int)bMulOverflow(16LL, v120)
                  && !(unsigned int)bMulOverflow(16 * v120, v252) )
                {
                  v216 = 16 * v252 * v120;
                  if ( !bAddOverflow(v216, v215) )
                  {
                    v218 = *(_QWORD *)(v9 + 496);
                    v248 = v217 + v216;
                    v219 = v9 + 480;
                    QDIV((unsigned __int64 *)(v9 + 480), &v248, v218);
                    if ( !v249 )
                    {
LABEL_170:
                      v225 = v254;
                      v226 = v254 * v106;
                      if ( (!v51
                         || !(unsigned int)bMulOverflow(v254, v221) && !(unsigned int)bMulOverflow(v227 * v228, v51))
                        && !(unsigned int)bSubOverflow(v226, v225 * v220) )
                      {
                        v230 = v226 - v229;
                        if ( !(unsigned int)bMulOverflow(16LL, v119) && !(unsigned int)bMulOverflow(16 * v119, v252) )
                        {
                          v232 = 16 * v231 * v119;
                          if ( !bAddOverflow(v232, v230) )
                          {
                            v233 = *(_QWORD *)(v9 + 592);
                            v248 = v230 + v232;
                            QDIV((unsigned __int64 *)(v9 + 576), &v248, v233);
                            v234 = v258;
                            v235 = *(_QWORD *)(v9 + 688);
                            *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                            v236 = *(_OWORD *)v219;
                            *(_QWORD *)(v9 + 712) = v235;
                            v237 = *(_QWORD *)(v219 + 16);
                            *(_OWORD *)(v9 + 504) = v236;
                            v239 = *v238;
                            *(_QWORD *)(v9 + 520) = v237;
                            v240 = *((_QWORD *)v238 + 2);
                            *(_OWORD *)(v9 + 600) = v239;
                            v241 = *(_OWORD *)(v9 + 648);
                            *(_QWORD *)(v9 + 616) = v240;
                            v242 = *(_QWORD *)(v9 + 664);
                            *(_OWORD *)(v9 + 720) = v241;
                            v243 = *(_OWORD *)(v9 + 456);
                            *(_QWORD *)(v9 + 736) = v242;
                            v244 = *(_QWORD *)(v9 + 472);
                            *(_OWORD *)(v9 + 528) = v243;
                            v245 = *(_OWORD *)(v9 + 552);
                            *(_QWORD *)(v9 + 544) = v244;
                            v246 = *(_QWORD *)(v9 + 568);
                            *(_OWORD *)(v9 + 624) = v245;
                            *(_QWORD *)(v9 + 640) = v246;
                            ROT_DIV((__int64 *)(v9 + 768), v234, v198);
                            v247 = v265;
                            *(_QWORD *)(v9 + 784) = v198;
                            v6 = bScalePlgDDALToPlgDDA(v9, v247);
                          }
                        }
                      }
                      goto LABEL_178;
                    }
                    v222 = v253;
                    if ( !(unsigned int)bMulOverflow(v254, v253) && !(unsigned int)bMulOverflow(v222 * v223, v224) )
                    {
                      v219 = v9 + 480;
                      goto LABEL_170;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_178:
    Win32FreePool(v9);
    return (void *)v6;
  }
  return result;
}
