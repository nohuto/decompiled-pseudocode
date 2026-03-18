/*
 * XREFs of sub_1402E495C @ 0x1402E495C
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402E495C @ 0x1402E495C (sub_1402E495C.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     sub_14019FEBC @ 0x14019FEBC (sub_14019FEBC.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     sub_1402E495C @ 0x1402E495C (sub_1402E495C.c)
 *     sub_1402E68D4 @ 0x1402E68D4 (sub_1402E68D4.c)
 *     sub_1402E732C @ 0x1402E732C (sub_1402E732C.c)
 *     sub_1402E81AC @ 0x1402E81AC (sub_1402E81AC.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 *     sub_14087CF84 @ 0x14087CF84 (sub_14087CF84.c)
 */

__int64 __fastcall sub_1402E495C(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  int *v4; // r8
  __int64 result; // rax
  int v6; // ecx
  int *v7; // rax
  unsigned __int64 v8; // r9
  _BYTE *v9; // rbx
  unsigned int v10; // r10d
  unsigned __int64 v11; // rsi
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // r11d
  unsigned int v15; // r9d
  _BYTE *v16; // rax
  int v17; // edi
  __int64 v18; // r11
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdi
  unsigned int v26; // eax
  unsigned int v27; // esi
  __int64 (__fastcall *v28)(__int64, ULONG_PTR *, int *, unsigned __int64); // rax
  __int64 v29; // rax
  unsigned int v30; // r10d
  int v31; // ecx
  int v32; // ecx
  int *v33; // rax
  unsigned __int64 v34; // rsi
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // r11d
  unsigned int v38; // r9d
  _BYTE *v39; // rax
  int *v40; // rdi
  unsigned int **v41; // r8
  __int64 v42; // r11
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // r9
  __int64 v50; // rdi
  __int64 v51; // rdx
  int v52; // esi
  unsigned int v53; // edi
  __int64 (__fastcall *v54)(ULONG_PTR, __int64, _QWORD, int *); // rax
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(ULONG_PTR, __int64, __int64, int *); // rax
  __int64 v57; // rdx
  __int64 (__fastcall *v58)(ULONG_PTR); // rax
  __int64 v59; // rax
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rsi
  int v63; // r9d
  unsigned int v64; // eax
  _BYTE *v65; // rdi
  int v66; // ecx
  unsigned int v67; // eax
  __int64 v68; // r8
  int v69; // edx
  unsigned __int64 v70; // rcx
  int v71; // ebx
  int v72; // ecx
  ULONG_PTR *v73; // rcx
  __int64 v74; // rsi
  _QWORD *v75; // rax
  unsigned int *v76; // rdx
  __int64 v77; // r10
  _QWORD *v78; // r11
  int v79; // ecx
  __int64 v80; // rdx
  _QWORD *v81; // r9
  const char *v82; // rax
  unsigned __int64 v83; // rdx
  int v84; // ebx
  unsigned int v85; // r10d
  unsigned __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // r8
  unsigned __int128 v90; // rax
  unsigned int v91; // r11d
  unsigned int v92; // edx
  unsigned __int64 v93; // r10
  __int64 v94; // rax
  unsigned __int64 i; // rax
  bool v96; // zf
  _DWORD *v97; // rsi
  ULONG_PTR v98; // rax
  int v99; // ecx
  int v100; // ecx
  _BYTE *v101; // rdi
  __int64 v102; // rdx
  unsigned int v103; // r9d
  int *v104; // rsi
  ULONG_PTR v105; // rbx
  _QWORD *v106; // rax
  _QWORD *v107; // r10
  const char *v108; // rax
  int v109; // r11d
  unsigned __int64 v110; // r8
  ULONG_PTR v111; // rcx
  unsigned int v112; // esi
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // r8
  unsigned __int64 v116; // rcx
  unsigned int v117; // r9d
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 j; // rax
  int *v121; // rsi
  int v122; // r9d
  __int64 v123; // rsi
  unsigned int v124; // eax
  _BYTE *v125; // rbx
  int v126; // ecx
  unsigned int v127; // eax
  __int64 v128; // r8
  int v129; // edx
  unsigned __int64 v130; // rcx
  int v131; // edi
  int v132; // ecx
  int *v133; // rax
  int v134; // ecx
  __int64 v135; // rdx
  const char *v136; // rax
  __int64 v137; // rdx
  const char *v138; // r9
  const char *v139; // rcx
  int v140; // r11d
  __int64 v141; // rdi
  unsigned __int64 v142; // r8
  unsigned int v143; // r10d
  __int64 v144; // rax
  __int64 v145; // r8
  __int64 v146; // rcx
  unsigned int v147; // edx
  unsigned __int64 v148; // rax
  __int64 v149; // rax
  unsigned __int64 k; // rax
  ULONG_PTR v151; // r8
  int *v152; // r9
  _DWORD *v153; // rdx
  ULONG_PTR v154; // rdi
  BOOL v155; // ecx
  unsigned int v156; // eax
  bool v157; // cf
  __int64 v158; // rsi
  __int64 v159; // rax
  unsigned int v160; // ecx
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  ULONG_PTR v163; // rsi
  __int64 v164; // rax
  unsigned __int16 v165; // dx
  _BYTE *v166; // rax
  unsigned int *v167; // rdi
  __int64 v168; // r11
  unsigned int v169; // ecx
  unsigned int *v170; // r8
  unsigned int v171; // edx
  unsigned int v172; // r9d
  unsigned int v173; // edx
  unsigned int v174; // eax
  __int64 v175; // rax
  unsigned int v176; // ecx
  unsigned int v177; // esi
  unsigned int v178; // esi
  unsigned int *v179; // r9
  ULONG_PTR v180; // r10
  _DWORD *v181; // rax
  unsigned int v182; // eax
  unsigned int v183; // r9d
  int v184; // r10d
  __int64 v185; // rdi
  unsigned int v186; // eax
  _BYTE *v187; // rsi
  int v188; // edx
  unsigned int v189; // ecx
  __int64 v190; // r9
  int v191; // r8d
  unsigned __int64 v192; // rax
  int v193; // ebx
  int v194; // ecx
  _BYTE *v195; // rdx
  _QWORD *v196; // rax
  __int64 v197; // rcx
  int v198; // r8d
  unsigned __int64 v199; // rcx
  unsigned __int64 m; // rax
  _DWORD *v201; // rax
  ULONG_PTR v202; // rdi
  __int64 v203; // rax
  _DWORD *v204; // r11
  _DWORD *v205; // r8
  __int64 v206; // rcx
  unsigned int v207; // r10d
  __int64 v208; // rdx
  _DWORD *v209; // rax
  __int64 v210; // rcx
  char *v211; // rbx
  int v212; // ecx
  __int16 v213; // ax
  char *v214; // rdx
  int v215; // r9d
  __int64 v216; // r8
  char v217; // cl
  char v218; // al
  char *v219; // r8
  unsigned int v220; // edx
  char *v221; // r9
  __int64 v222; // rcx
  __int64 v223; // rax
  char v224; // cl
  char v225; // al
  char *v226; // rdx
  int v227; // r9d
  char v228; // cl
  char v229; // al
  char *v230; // rdx
  int v231; // r9d
  char v232; // cl
  char v233; // al
  int v234; // ecx
  unsigned int v235; // r9d
  unsigned int v236; // eax
  unsigned __int64 v237; // r8
  unsigned int *v238; // rbx
  unsigned int v239; // r9d
  unsigned int v240; // eax
  unsigned int v241; // ecx
  unsigned int *v242; // rdx
  ULONG_PTR *v243; // rdx
  unsigned int v244; // r9d
  unsigned __int64 v245; // r11
  __int64 v246; // rbx
  unsigned int v247; // r8d
  ULONG_PTR v248; // rbx
  unsigned int *v249; // rcx
  _QWORD *v250; // r10
  int v251; // edi
  const char *v252; // rax
  unsigned __int64 v253; // rsi
  unsigned int v254; // ebx
  __int64 v255; // rdx
  __int64 v256; // rax
  __int64 v257; // r8
  unsigned __int64 v258; // rcx
  unsigned int v259; // r9d
  unsigned __int64 v260; // rdx
  __int64 v261; // rax
  unsigned __int64 v262; // rax
  unsigned int *v263; // rax
  unsigned int v264; // ecx
  char v265; // r8
  __int64 v266; // rcx
  unsigned int v267; // edx
  unsigned __int64 v268; // r11
  unsigned int v269; // r9d
  __int64 v270; // rbx
  unsigned int *v271; // rcx
  ULONG_PTR v272; // rbx
  ULONG_PTR *v273; // rdx
  _QWORD *v274; // r10
  int v275; // edi
  const char *v276; // rax
  unsigned __int64 v277; // rsi
  unsigned __int64 v278; // r8
  unsigned int v279; // ebx
  __int64 v280; // rdx
  __int64 v281; // rax
  __int64 v282; // r8
  unsigned __int64 v283; // rcx
  unsigned int v284; // r9d
  unsigned __int64 v285; // rdx
  __int64 v286; // rax
  unsigned __int64 v287; // rax
  __int64 v288; // rax
  _DWORD *v289; // rcx
  unsigned __int64 v290; // r11
  unsigned int v291; // r8d
  ULONG_PTR *v292; // rdx
  unsigned int v293; // r9d
  ULONG_PTR v294; // rbx
  unsigned int *v295; // rcx
  __int64 v296; // rsi
  _QWORD *v297; // r10
  const char *v298; // rax
  int v299; // edi
  unsigned __int64 v300; // rsi
  unsigned __int64 v301; // r8
  unsigned int v302; // ebx
  __int64 v303; // rax
  __int64 v304; // r8
  unsigned __int64 v305; // rcx
  unsigned int v306; // r9d
  unsigned __int64 v307; // rax
  __int64 v308; // rax
  unsigned __int64 v309; // rax
  _DWORD *v310; // r11
  unsigned int *v311; // r8
  unsigned __int64 v312; // rcx
  char *v313; // rax
  unsigned int v314; // esi
  unsigned int v315; // esi
  __int64 v316; // rax
  __int64 v317; // rcx
  __int64 v318; // rax
  __int64 v319; // rdi
  __int64 v320; // rcx
  __int64 v321; // rdi
  __int64 n; // rbx
  __int64 v323; // rax
  __int64 v324; // rdx
  int v325; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v326; // [rsp+4Ch] [rbp-BCh]
  __int64 v327; // [rsp+50h] [rbp-B8h]
  int v328; // [rsp+58h] [rbp-B0h]
  unsigned int v329; // [rsp+5Ch] [rbp-ACh]
  __int64 v330; // [rsp+60h] [rbp-A8h]
  char *v331; // [rsp+68h] [rbp-A0h]
  __int64 v332; // [rsp+70h] [rbp-98h]
  _DWORD *v333; // [rsp+78h] [rbp-90h]
  unsigned __int64 v334; // [rsp+80h] [rbp-88h]
  _DWORD *v335; // [rsp+88h] [rbp-80h]
  unsigned int *v336; // [rsp+90h] [rbp-78h]
  unsigned int *v337; // [rsp+98h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v339; // [rsp+A8h] [rbp-60h] BYREF
  ULONG_PTR v340; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v341; // [rsp+B8h] [rbp-50h]
  _BYTE *v342; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v343; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v344; // [rsp+D0h] [rbp-38h]
  __int64 v345; // [rsp+D8h] [rbp-30h]
  int v346; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v347; // [rsp+E8h] [rbp-20h]
  int v348; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v349; // [rsp+F8h] [rbp-10h] BYREF
  int *v350; // [rsp+100h] [rbp-8h]
  int v351; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v352[9]; // [rsp+10Ch] [rbp+4h] BYREF
  _DWORD v353[6]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v354; // [rsp+148h] [rbp+40h]
  int *v355; // [rsp+150h] [rbp+48h]
  _DWORD *v356; // [rsp+158h] [rbp+50h]
  ULONG_PTR v357; // [rsp+160h] [rbp+58h] BYREF
  __int64 v358; // [rsp+168h] [rbp+60h]
  unsigned __int64 v359; // [rsp+170h] [rbp+68h]
  __int64 v360; // [rsp+178h] [rbp+70h]
  __int64 v361; // [rsp+180h] [rbp+78h]
  char *v362; // [rsp+188h] [rbp+80h]
  char *v363; // [rsp+190h] [rbp+88h]
  char *v364; // [rsp+198h] [rbp+90h]
  char *v365; // [rsp+1A0h] [rbp+98h]
  __int64 v366; // [rsp+1A8h] [rbp+A0h]
  int *v367; // [rsp+1B0h] [rbp+A8h]
  __int64 v368; // [rsp+1B8h] [rbp+B0h]
  _BYTE *v369; // [rsp+1C0h] [rbp+B8h]
  _BYTE *v370; // [rsp+1C8h] [rbp+C0h]
  __int64 v371; // [rsp+1D0h] [rbp+C8h]
  __int64 v372; // [rsp+1D8h] [rbp+D0h]
  __int64 v373; // [rsp+1E0h] [rbp+D8h]
  __int64 v374; // [rsp+1E8h] [rbp+E0h]
  unsigned int v378; // [rsp+240h] [rbp+138h]
  unsigned int v379; // [rsp+240h] [rbp+138h]
  int v380; // [rsp+240h] [rbp+138h]
  unsigned __int16 v381; // [rsp+240h] [rbp+138h]
  unsigned int v382; // [rsp+240h] [rbp+138h]

  v339 = (_BYTE *)*a1;
  v3 = (*((__int64 (__fastcall **)(__int64, __int64 *, int *))v339 + 64))(a2, &v349, &v351);
  v4 = 0LL;
  v335 = (_DWORD *)v3;
  if ( !v3 )
    return 3221225595LL;
  v6 = 4;
  v345 = 0LL;
  v7 = &v346;
  v8 = 1LL;
  do
  {
    *(_BYTE *)v7 = 0;
    v7 = (int *)((char *)v7 + 1);
    --v6;
  }
  while ( v6 );
  v9 = v339;
  v10 = 0;
  v327 = (__int64)v339;
  v378 = *((_DWORD *)v339 + 427);
  if ( v378 )
  {
    v11 = *((_QWORD *)v339 + 288);
    v12 = v346;
    v13 = HIDWORD(v345);
    v14 = v345;
    v334 = v11;
    while ( 1 )
    {
      v15 = 0;
      v16 = (_BYTE *)v11;
      v17 = (int)v9;
      if ( v11 )
        v17 = v11;
      else
        v16 = v9;
      v4 = (int *)&v16[*((unsigned int *)v16 + 426)];
      if ( v14 && v13 <= v10 )
      {
        v15 = v13;
        v4 = (int *)&v16[v12];
      }
      if ( v15 != v10 )
        break;
LABEL_37:
      v13 = v15;
      LODWORD(v345) = 1;
      v8 = *v4;
      v12 = (_DWORD)v4 - v17;
      HIDWORD(v345) = v13;
      v346 = (_DWORD)v4 - v17;
      v14 = 1;
      if ( (unsigned int)v8 > 0x2B
        || (v25 = 0x80000001002LL, !_bittest64(&v25, v8))
        || *((_DWORD **)v4 + 1) != v335
        || v4[4] != v351 )
      {
        v26 = v8 - 33;
        v8 = 1LL;
        if ( v26 > 1 || *((_QWORD *)v4 + 4) != v349 )
        {
          ++v10;
          v4 = 0LL;
          if ( v10 < v378 )
            continue;
        }
      }
      goto LABEL_44;
    }
    v18 = v10 - v15;
    v15 = v10;
    while ( 1 )
    {
      v19 = *v4;
      if ( *v4 > 12 )
        break;
      if ( v19 == 12 )
        goto LABEL_29;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_29;
      v21 = v20 - 6;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          v24 = *((unsigned __int16 *)v4 + 16);
LABEL_34:
          v23 = (v24 + 55) & 0xFFFFFFF8;
          goto LABEL_35;
        }
        if ( v22 != 2 )
          goto LABEL_31;
        v23 = (unsigned int)(16 * (v4[7] + 3));
      }
      else
      {
        v23 = (unsigned int)(24 * (v4[6] + 2));
      }
LABEL_35:
      v4 = (int *)((char *)v4 + v23);
      if ( !--v18 )
      {
        v9 = (_BYTE *)v327;
        v11 = v334;
        goto LABEL_37;
      }
    }
    if ( v19 == 28 )
    {
      v24 = *((unsigned __int16 *)v4 + 20);
      goto LABEL_34;
    }
    if ( v19 == 30 )
    {
      v23 = (((v4[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v4 + 20) + 2);
      goto LABEL_35;
    }
    if ( v19 <= 32 )
    {
LABEL_31:
      v23 = 48LL;
      goto LABEL_35;
    }
    if ( v19 <= 34 )
    {
      v23 = 20 * (unsigned int)(((v4[8] & 0xFFF) + (unsigned __int64)(unsigned int)v4[10] + 4095) >> 12) + 48;
      goto LABEL_35;
    }
    if ( v19 != 43 )
      goto LABEL_31;
LABEL_29:
    v23 = 4 * (v4[4] / 0xCu) + 48;
    goto LABEL_35;
  }
LABEL_44:
  if ( v4 )
    return 3221225742LL;
  v27 = a3;
  v28 = (__int64 (__fastcall *)(__int64, ULONG_PTR *, int *, unsigned __int64))*((_QWORD *)v9 + 64);
  v379 = a3;
  v342 = v9;
  v29 = v28(a2, &BugCheckParameter2, &v325, v8);
  v30 = 0;
  v336 = (unsigned int *)v29;
  if ( v29 )
  {
    v32 = 4;
    v347 = 0LL;
    v33 = &v348;
    do
    {
      *(_BYTE *)v33 = 0;
      v33 = (int *)((char *)v33 + 1);
      --v32;
    }
    while ( v32 );
    LODWORD(v332) = *((_DWORD *)v9 + 427);
    if ( (_DWORD)v332 )
    {
      v34 = *((_QWORD *)v9 + 288);
      v35 = v348;
      v36 = HIDWORD(v347);
      v37 = v347;
      v334 = v34;
      while ( 1 )
      {
        v38 = 0;
        v39 = (_BYTE *)v34;
        v40 = (int *)v9;
        if ( v34 )
          v40 = (int *)v34;
        else
          v39 = v9;
        v350 = v40;
        v41 = (unsigned int **)&v39[*((unsigned int *)v39 + 426)];
        if ( v37 && v36 <= v30 )
        {
          v38 = v36;
          v41 = (unsigned int **)&v39[v35];
        }
        if ( v38 != v30 )
          break;
LABEL_82:
        v36 = v38;
        LODWORD(v347) = 1;
        v49 = *(int *)v41;
        v35 = (_DWORD)v41 - (_DWORD)v40;
        HIDWORD(v347) = v36;
        v348 = (_DWORD)v41 - (_DWORD)v40;
        v37 = 1;
        if ( (unsigned int)v49 <= 0x2B )
        {
          v50 = 0x80000001002LL;
          if ( _bittest64(&v50, v49) )
          {
            if ( v41[1] == v336 && *((_DWORD *)v41 + 4) == v325 )
              goto LABEL_90;
          }
        }
        if ( (unsigned int)(v49 - 33) <= 1 && v41[4] == (unsigned int *)BugCheckParameter2 )
          goto LABEL_90;
        if ( ++v30 >= (unsigned int)v332 )
          goto LABEL_89;
      }
      v42 = v30 - v38;
      v38 = v30;
      while ( 1 )
      {
        v43 = *(_DWORD *)v41;
        if ( *(int *)v41 > 12 )
          break;
        if ( v43 == 12 )
          goto LABEL_74;
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_74;
        v45 = v44 - 6;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( !v46 )
          {
            v48 = *((unsigned __int16 *)v41 + 16);
LABEL_79:
            v47 = (v48 + 55) & 0xFFFFFFF8;
            goto LABEL_80;
          }
          if ( v46 != 2 )
            goto LABEL_76;
          v47 = (unsigned int)(16 * (*((_DWORD *)v41 + 7) + 3));
        }
        else
        {
          v47 = (unsigned int)(24 * (*((_DWORD *)v41 + 6) + 2));
        }
LABEL_80:
        v41 = (unsigned int **)((char *)v41 + v47);
        if ( !--v42 )
        {
          v9 = (_BYTE *)v327;
          LODWORD(v40) = (_DWORD)v350;
          v34 = v334;
          goto LABEL_82;
        }
      }
      if ( v43 == 28 )
      {
        v48 = *((unsigned __int16 *)v41 + 20);
        goto LABEL_79;
      }
      if ( v43 == 30 )
      {
        v47 = (((*((_DWORD *)v41 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v41 + 20) + 2);
        goto LABEL_80;
      }
      if ( v43 <= 32 )
      {
LABEL_76:
        v47 = 48LL;
        goto LABEL_80;
      }
      if ( v43 <= 34 )
      {
        v47 = 20
            * (unsigned int)((((_DWORD)v41[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v41 + 10) + 4095) >> 12)
            + 48;
        goto LABEL_80;
      }
      if ( v43 != 43 )
        goto LABEL_76;
LABEL_74:
      v47 = 4 * (*((_DWORD *)v41 + 4) / 0xCu) + 48;
      goto LABEL_80;
    }
LABEL_89:
    v41 = 0LL;
LABEL_90:
    v350 = (int *)v41;
    if ( v41 )
    {
      v31 = -1073741554;
LABEL_466:
      v27 = a3;
      goto LABEL_467;
    }
    v52 = (*((__int64 (__fastcall **)(__int64))v9 + 85))(a2);
    v328 = v52;
    LODWORD(v330) = v325;
    if ( (a3 & 0x10) == 0 || (*((_DWORD *)v9 + 523) & 0x400) != 0 )
    {
      v53 = a3;
    }
    else
    {
      v53 = a3 & 0xFFFFFFEF;
      v379 = a3 & 0xFFFFFFEF;
    }
    if ( (v53 & 0x10) != 0 && !(unsigned int)sub_1402E81AC(v9, BugCheckParameter2) )
    {
      v53 &= ~0x10u;
      v379 = v53;
    }
    if ( (v53 & 2) != 0 && !v52 )
      goto LABEL_465;
    if ( (*((_DWORD *)v9 + 522) & 0x40000000) != 0 )
    {
      v31 = sub_14087CF84(&v339, BugCheckParameter2, v53);
      goto LABEL_466;
    }
    v54 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, int *))*((_QWORD *)v9 + 62);
    v361 = 0LL;
    v353[4] = 0;
    LOBYTE(v51) = 1;
    v358 = v54(BugCheckParameter2, v51, 0LL, &v325);
    v55 = v325 & (unsigned int)-(v358 != 0);
    v325 = v55;
    v56 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v9 + 62);
    v353[1] = v55;
    LOBYTE(v55) = 1;
    v334 = v56(BugCheckParameter2, v55, 12LL, &v325);
    v359 = v334;
    LOBYTE(v57) = 1;
    v325 &= -(v334 != 0);
    LODWORD(v331) = v325;
    v353[2] = v325;
    v360 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, int *))v9 + 62))(
             BugCheckParameter2,
             v57,
             10LL,
             &v325);
    v325 &= -(v360 != 0);
    v58 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v9 + 63);
    v353[3] = v325;
    v59 = v58(BugCheckParameter2);
    if ( !v59 )
    {
LABEL_104:
      v31 = -1073741701;
      goto LABEL_466;
    }
    v60 = *((unsigned int *)v9 + 495);
    v357 = BugCheckParameter2;
    v353[0] = *(_DWORD *)(v59 + 84);
    v61 = v52;
    v62 = *((unsigned int *)v9 + 417);
    v63 = v61 != 0 ? 0xB : 0;
    v64 = v62 + 240;
    v326 = v63;
    if ( (unsigned int)(v62 + 240) <= *((_DWORD *)v9 + 557) )
    {
      v65 = v9;
      v333 = v9;
      *((_DWORD *)v9 + 417) = v64;
    }
    else
    {
      v333 = (_DWORD *)sub_1402E732C(v9, v64, v60);
      v65 = v333;
      if ( !v333 )
        goto LABEL_122;
      v66 = *((_DWORD *)v9 + 522);
      if ( (v66 & 4) == 0 )
      {
        v67 = *((_DWORD *)v9 + 417);
        v68 = *((_QWORD *)v9 + 205);
        v69 = (v66 & 0x20000000) != 0 ? *((_DWORD *)v9 + 495) : 0;
        if ( v67 >= 8 )
        {
          v70 = (unsigned __int64)v67 >> 3;
          do
          {
            *(_QWORD *)v9 = 0LL;
            v67 -= 8;
            v9 += 8;
            --v70;
          }
          while ( v70 );
        }
        for ( ; v67; --v67 )
          *v9++ = 0;
        v71 = *((_DWORD *)v65 + 495);
        *((_DWORD *)v65 + 495) = v69;
        if ( v69 == 3 )
        {
          (*((void (__fastcall **)(__int64))v65 + 109))(v68);
        }
        else
        {
          v72 = 0;
          if ( (*((_DWORD *)v65 + 522) & 0x10000000) == 0 )
            v72 = v69;
          if ( v72 )
            (*((void (__fastcall **)(__int64, _QWORD))v65 + 69))(v68 - 8, *(_QWORD *)(v68 - 8));
          else
            (*((void (__fastcall **)(__int64))v65 + 32))(v68);
        }
        *((_DWORD *)v65 + 495) = v71;
      }
      *((_DWORD *)v65 + 522) &= ~4u;
      v63 = v326;
    }
    *((_DWORD *)v65 + 427) += 5;
    v73 = &v357;
    v74 = (__int64)&v65[v62];
    v340 = (ULONG_PTR)&v357;
    v75 = (_QWORD *)v74;
    v335 = (_DWORD *)v74;
    v327 = v74;
    v76 = v353;
    v354 = v74;
    v350 = (int *)v74;
    v337 = v353;
    v332 = 5LL;
    do
    {
      v77 = *v76;
      v78 = (_QWORD *)*v73;
      v79 = 48;
      v329 = *v76;
      v80 = 6LL;
      do
      {
        *v75 = 0LL;
        v79 -= 8;
        ++v75;
        --v80;
      }
      while ( v80 );
      for ( ; v79; --v79 )
      {
        *(_BYTE *)v75 = 0;
        v75 = (_QWORD *)((char *)v75 + 1);
      }
      *(_DWORD *)v74 = v63;
      *(_QWORD *)(v74 + 8) = v78;
      v81 = v78;
      *(_DWORD *)(v74 + 16) = v77;
      v82 = (const char *)v78;
      *((_DWORD *)v65 + 434) += v77;
      v83 = *((_QWORD *)v65 + 215);
      v84 = *((_DWORD *)v65 + 429);
      v341 = v83;
      if ( v78 < (_QWORD *)((char *)v78 + v77) )
      {
        do
        {
          _mm_prefetch(v82, 0);
          v82 += 64;
        }
        while ( v82 < (const char *)v78 + v77 );
      }
      v85 = (unsigned int)v77 >> 7;
      v86 = v83;
      if ( v85 )
      {
        do
        {
          v87 = 8LL;
          do
          {
            v88 = v86 ^ *v81;
            v89 = v81[1];
            v81 += 2;
            v86 = __ROL8__(__ROL8__(v88, v84) ^ v89, v84);
            --v87;
          }
          while ( v87 );
          v90 = (__ROL8__(v341 ^ ((char *)v81 - (char *)v78), 17) ^ v341 ^ ((char *)v81 - (char *)v78))
              * (unsigned __int128)0x7010008004002001uLL;
          v366 = *((_QWORD *)&v90 + 1);
          v84 = (BYTE8(v90) ^ (unsigned __int8)(v90 ^ v84)) & 0x3F;
          if ( !v84 )
            LOBYTE(v84) = 1;
          --v85;
        }
        while ( v85 );
        v65 = v333;
        v74 = v327;
      }
      v91 = v329;
      v92 = v329 & 0x7F;
      if ( v92 >= 8 )
      {
        v93 = (unsigned __int64)(v329 & 0x7F) >> 3;
        do
        {
          v86 = __ROL8__(*v81++ ^ v86, v84);
          v92 -= 8;
          --v93;
        }
        while ( v93 );
        v91 = v329;
      }
      if ( v92 )
      {
        do
        {
          v94 = *(unsigned __int8 *)v81;
          v81 = (_QWORD *)((char *)v81 + 1);
          v86 = __ROL8__(v94 ^ v86, v84);
          --v92;
        }
        while ( v92 );
        v74 = v327;
      }
      for ( i = v86 >> 31; i; i >>= 31 )
        LODWORD(v86) = i ^ v86;
      v76 = v337 + 1;
      v63 = v326;
      v73 = (ULONG_PTR *)(v340 + 8);
      *(_DWORD *)(v74 + 20) = v86 & 0x7FFFFFFF;
      v74 += 48LL;
      *((_DWORD *)v65 + 434) += v91;
      v96 = v332-- == 1;
      v75 = (_QWORD *)v74;
      v327 = v74;
      v354 = v74;
      v337 = v76;
      v340 = (ULONG_PTR)v73;
    }
    while ( !v96 );
    v97 = v335;
    v98 = BugCheckParameter2;
    v99 = v328;
    v339 = v65;
    *v335 = 44;
    *((_QWORD *)v97 + 3) = v98;
    if ( (*((_DWORD *)v65 + 522) & 0x10200000) == 0 )
    {
      if ( v99 )
      {
LABEL_154:
        v97[8] |= 2u;
        goto LABEL_155;
      }
      if ( (*((_DWORD *)v65 + 523) & 0x8000) == 0 )
      {
LABEL_155:
        v342 = v65;
        v339 = v65;
        v31 = sub_1402E68D4(
                (unsigned int)&v342,
                (_DWORD)v336,
                v330,
                BugCheckParameter2,
                v99,
                v379,
                (__int64)&v343,
                (__int64)v352);
        if ( v31 < 0 )
          goto LABEL_466;
        v100 = 48;
        v101 = v342;
        v102 = 6LL;
        v103 = v352[0] - v343;
        v104 = (int *)&v342[(char *)v97 - v339];
        v105 = BugCheckParameter2 + v343;
        v333 = v342;
        v335 = v104;
        v337 = (unsigned int *)(v104 + 48);
        v106 = v104 + 48;
        v350 = v104;
        v339 = v342;
        LODWORD(v332) = v352[0] - v343;
        do
        {
          *v106 = 0LL;
          v100 -= 8;
          ++v106;
          --v102;
        }
        while ( v102 );
        for ( ; v100; --v100 )
        {
          *(_BYTE *)v106 = 0;
          v106 = (_QWORD *)((char *)v106 + 1);
        }
        v107 = (_QWORD *)v105;
        v104[48] = v326;
        v108 = (const char *)v105;
        *((_QWORD *)v104 + 25) = v105;
        v104[52] = v103;
        *((_DWORD *)v101 + 434) += v103;
        v109 = *((_DWORD *)v101 + 429);
        v110 = *((_QWORD *)v101 + 215);
        v111 = v105 + v103;
        if ( v105 < v111 )
        {
          do
          {
            _mm_prefetch(v108, 0);
            v108 += 64;
          }
          while ( (unsigned __int64)v108 < v111 );
        }
        v112 = v103 >> 7;
        if ( v103 >> 7 )
        {
          v113 = *((_QWORD *)v101 + 215);
          do
          {
            v114 = 8LL;
            do
            {
              v115 = v107[1] ^ __ROL8__(*v107 ^ v110, v109);
              v107 += 2;
              v110 = __ROL8__(v115, v109);
              --v114;
            }
            while ( v114 );
            v116 = __ROL8__(v113 ^ ((unsigned __int64)v107 - v105), 17) ^ v113 ^ ((unsigned __int64)v107 - v105);
            v372 = (v116 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v109 = ((unsigned __int8)v372 ^ (unsigned __int8)(v116 ^ v109)) & 0x3F;
            if ( !v109 )
              LOBYTE(v109) = 1;
            --v112;
          }
          while ( v112 );
          v101 = v333;
          LOBYTE(v103) = v332;
        }
        v117 = v103 & 0x7F;
        if ( v117 >= 8 )
        {
          v118 = (unsigned __int64)v117 >> 3;
          do
          {
            v110 = __ROL8__(*v107++ ^ v110, v109);
            v117 -= 8;
            --v118;
          }
          while ( v118 );
        }
        for ( ; v117; --v117 )
        {
          v119 = *(unsigned __int8 *)v107;
          v107 = (_QWORD *)((char *)v107 + 1);
          v110 = __ROL8__(v119 ^ v110, v109);
        }
        for ( j = v110 >> 31; j; j >>= 31 )
          LODWORD(v110) = j ^ v110;
        v380 = v379 & 1;
        v121 = v335 + 24;
        v337[5] = v110 & 0x7FFFFFFF;
        v355 = v121;
        v122 = (v328 != 0) + 13;
        LODWORD(v332) = v122;
        if ( v121 )
        {
          v151 = (unsigned int)v331;
          v125 = v101;
          *v121 = v122;
        }
        else
        {
          v123 = *((unsigned int *)v101 + 417);
          v124 = v123 + 48;
          if ( (unsigned int)(v123 + 48) <= *((_DWORD *)v101 + 557) )
          {
            v125 = v101;
            *((_DWORD *)v101 + 417) = v124;
            v327 = (__int64)v101;
          }
          else
          {
            v327 = sub_1402E732C(v101, v124, *((unsigned int *)v101 + 495));
            v125 = (_BYTE *)v327;
            if ( !v327 )
              goto LABEL_122;
            v126 = *((_DWORD *)v101 + 522);
            if ( (v126 & 4) == 0 )
            {
              v127 = *((_DWORD *)v101 + 417);
              v128 = *((_QWORD *)v101 + 205);
              v129 = (v126 & 0x20000000) != 0 ? *((_DWORD *)v101 + 495) : 0;
              if ( v127 >= 8 )
              {
                v130 = (unsigned __int64)v127 >> 3;
                do
                {
                  *(_QWORD *)v101 = 0LL;
                  v127 -= 8;
                  v101 += 8;
                  --v130;
                }
                while ( v130 );
              }
              for ( ; v127; --v127 )
                *v101++ = 0;
              v131 = *((_DWORD *)v125 + 495);
              *((_DWORD *)v125 + 495) = v129;
              if ( v129 == 3 )
              {
                (*((void (__fastcall **)(__int64))v125 + 109))(v128);
              }
              else
              {
                v132 = 0;
                if ( (*((_DWORD *)v125 + 522) & 0x10000000) == 0 )
                  v132 = v129;
                if ( v132 )
                  (*((void (__fastcall **)(__int64, _QWORD))v125 + 69))(v128 - 8, *(_QWORD *)(v128 - 8));
                else
                  (*((void (__fastcall **)(__int64))v125 + 32))(v128);
              }
              *((_DWORD *)v125 + 495) = v131;
            }
            *((_DWORD *)v125 + 522) &= ~4u;
            v122 = v332;
          }
          ++*((_DWORD *)v125 + 427);
          v121 = (int *)&v125[v123];
          v333 = v121;
          v133 = v121;
          v134 = 48;
          v367 = v121;
          v135 = 6LL;
          do
          {
            *(_QWORD *)v133 = 0LL;
            v134 -= 8;
            v133 += 2;
            --v135;
          }
          while ( v135 );
          for ( ; v134; --v134 )
          {
            *(_BYTE *)v133 = 0;
            v133 = (int *)((char *)v133 + 1);
          }
          v136 = (const char *)v334;
          v137 = (unsigned int)v331;
          *v121 = v122;
          v138 = v136;
          *((_QWORD *)v121 + 1) = v136;
          v121[4] = v137;
          *((_DWORD *)v125 + 434) += v137;
          v139 = &v136[v137];
          v140 = *((_DWORD *)v125 + 429);
          v141 = *((_QWORD *)v125 + 215);
          while ( v136 < v139 )
          {
            _mm_prefetch(v136, 0);
            v136 += 64;
          }
          v142 = *((_QWORD *)v125 + 215);
          v143 = (unsigned int)v137 >> 7;
          if ( (unsigned int)v137 >> 7 )
          {
            do
            {
              v144 = 8LL;
              do
              {
                v145 = *((_QWORD *)v138 + 1) ^ __ROL8__(*(_QWORD *)v138 ^ v142, v140);
                v138 += 16;
                v142 = __ROL8__(v145, v140);
                --v144;
              }
              while ( v144 );
              v146 = __ROL8__(v141 ^ (unsigned __int64)&v138[-v334], 17) ^ v141 ^ (unsigned __int64)&v138[-v334];
              v368 = ((unsigned __int64)v146 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v140 = ((unsigned __int8)(v368 ^ v146) ^ (unsigned __int8)v140) & 0x3F;
              if ( !v140 )
                LOBYTE(v140) = 1;
              --v143;
            }
            while ( v143 );
            v125 = (_BYTE *)v327;
            v121 = v333;
            LOBYTE(v137) = (_BYTE)v331;
          }
          v147 = v137 & 0x7F;
          if ( v147 >= 8 )
          {
            v148 = (unsigned __int64)v147 >> 3;
            do
            {
              v142 = __ROL8__(*(_QWORD *)v138 ^ v142, v140);
              v138 += 8;
              v147 -= 8;
              --v148;
            }
            while ( v148 );
          }
          for ( ; v147; --v147 )
          {
            v149 = *(unsigned __int8 *)v138++;
            v142 = __ROL8__(v149 ^ v142, v140);
          }
          for ( k = v142; ; LODWORD(v142) = k ^ v142 )
          {
            k >>= 31;
            if ( !k )
              break;
          }
          v355 = v121;
          v121[5] = v142 & 0x7FFFFFFF;
          v151 = (unsigned int)v331;
          *((_DWORD *)v125 + 434) += (_DWORD)v331;
        }
        v152 = v121;
        if ( (*((_DWORD *)v125 + 522) & 0x40000000) != 0 && (_DWORD)v151 )
          sub_14019FEBC((__int64)v125, v334, v151, (__int64)(v121 + 7));
        v121[6] = 0;
        if ( v380 )
          v121[6] = 1;
        v153 = v335;
        v154 = BugCheckParameter2;
        v339 = v125;
        v155 = v328 != 0;
        v156 = v335[46] & 0xFFFFFFFE;
        v335[36] = 35;
        v157 = v153[40] < 0x94u;
        v153[46] = v156 | v155;
        if ( v157 )
          goto LABEL_234;
        v158 = *((_QWORD *)v153 + 19);
        v159 = (*((__int64 (__fastcall **)(ULONG_PTR, _DWORD *, ULONG_PTR, int *))v125 + 63))(v154, v153, v151, v152);
        if ( v159 )
        {
          v152 = v335;
          v151 = v154 + *(unsigned int *)(v159 + 80);
          v153 = (_DWORD *)(v335[46] | 2u);
          v335[46] = (_DWORD)v153;
          v160 = (unsigned int)v153;
          v161 = *(_QWORD **)(v158 + 112);
          if ( (unsigned __int64)v161 >= v154 && (unsigned __int64)v161 < v151 )
          {
            v160 = (unsigned int)v153 | 4;
            *((_QWORD *)v152 + 21) = *v161;
            v152[46] = (unsigned int)v153 | 4;
          }
          v162 = *(_QWORD **)(v158 + 120);
          if ( (unsigned __int64)v162 >= v154 && (unsigned __int64)v162 < v151 )
          {
            *((_QWORD *)v152 + 22) = *v162;
            v152[46] = v160 | 8;
          }
LABEL_234:
          v163 = BugCheckParameter2;
          v339 = v125;
          v96 = (*((_DWORD *)v125 + 522) & 0x400000) == 0;
          v340 = BugCheckParameter2;
          v342 = v125;
          if ( !v96 )
          {
            v164 = (*((__int64 (__fastcall **)(ULONG_PTR, _DWORD *, ULONG_PTR, int *))v125 + 63))(
                     BugCheckParameter2,
                     v153,
                     v151,
                     v152);
            v333 = (_DWORD *)v164;
            if ( !v164 )
              goto LABEL_104;
            v165 = *(_WORD *)(v164 + 6);
            v334 = (unsigned int)v330 / 0xCuLL;
            v381 = v165;
            if ( !v165 )
            {
              if ( (*((_DWORD *)v125 + 522) & 0x200000) == 0 )
              {
                v352[1] = 1329605744;
                KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, v163, 0LL, 0LL);
              }
LABEL_238:
              if ( !*((_DWORD *)v125 + 484) )
              {
                v166 = v125 - 0x5C5FC0A76E374B18LL;
LABEL_240:
                *((_QWORD *)v125 + 243) = v166;
                *((_DWORD *)v125 + 484) = 1;
                *((_QWORD *)v125 + 244) = 0LL;
                *((_QWORD *)v125 + 245) = 271LL;
                *((_QWORD *)v125 + 246) = v163;
              }
              goto LABEL_104;
            }
            v167 = v336;
            LODWORD(v332) = v165;
            v344 = 12LL * ((unsigned int)v330 / 0xC);
            v337 = (unsigned int *)((char *)v336 + v344);
            v168 = *(unsigned __int16 *)(v164 + 20) + v164 + 24;
            v169 = 0;
            LODWORD(v331) = 0;
            v335 = (_DWORD *)v168;
            v170 = (unsigned int *)(v168 + 8);
            v327 = v168 + 8;
            do
            {
              v171 = v170[2];
              v172 = v170[1];
              if ( v171 <= *v170 )
                v171 = *v170;
              v329 = v170[1];
              v173 = v172 + v171;
              v326 = v173;
              if ( v169 )
              {
                if ( v173 < *(_DWORD *)(v168 + 40LL * (v169 - 1) + 12) )
                {
                  if ( (*((_DWORD *)v125 + 522) & 0x200000) == 0 )
                  {
                    v352[2] = 1329605744;
                    KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, v163, 1uLL, 0LL);
                  }
                  goto LABEL_238;
                }
                v169 = (unsigned int)v331;
              }
              if ( v167 != v337 )
              {
                while ( 1 )
                {
                  v174 = v167[1];
                  if ( *v167 >= v173 || v174 <= v172 )
                  {
LABEL_269:
                    v169 = (unsigned int)v331;
                    v168 = (__int64)v335;
                    goto LABEL_270;
                  }
                  if ( *v167 < v172 || v174 > v173 )
                    break;
                  v175 = v167[2];
                  if ( (v175 & 1) != 0 || (*(_BYTE *)(v175 + v163) & 0x20) != 0 )
                  {
                    v176 = v170[1];
                    v177 = v170[2];
                    if ( v177 <= *v170 )
                      v177 = *v170;
                    LODWORD(v341) = v170[1];
                    v178 = v176 + v177;
                    v179 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v125 + 131))(
                                             v167,
                                             v340);
                    if ( *v179 >= (unsigned int)v341 && v179[1] < v178 )
                    {
                      v180 = v340;
                    }
                    else
                    {
                      v180 = v340;
                      if ( (*((_DWORD *)v125 + 522) & 0x200000) == 0 )
                      {
                        v352[4] = 1329605744;
                        KeBugCheckEx(
                          __ROR4__(1329594368, 86),
                          0xAuLL,
                          v340,
                          ((_DWORD)v179 - (_DWORD)v340) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v125 + 484) )
                      {
                        *((_QWORD *)v125 + 244) = 0LL;
                        *((_QWORD *)v125 + 245) = 271LL;
                        *((_QWORD *)v125 + 243) = v125 - 0x5C5FC0A76E374B18LL;
                        *((_DWORD *)v125 + 484) = 1;
                        *((_QWORD *)v125 + 246) = v180;
                      }
                    }
                    v181 = (_DWORD *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v125 + 132))(
                                       v179,
                                       v180,
                                       v180 + *v179);
                    if ( *v181 >= (unsigned int)v341 && v181[1] < v178 )
                    {
                      v173 = v326;
                      v170 = (unsigned int *)v327;
                      v172 = v329;
                      v163 = v340;
                    }
                    else
                    {
                      v163 = v340;
                      v182 = ((_DWORD)v181 - v340) | 0x80000000;
                      if ( (*((_DWORD *)v125 + 522) & 0x200000) == 0 )
                      {
                        v352[3] = 1329605744;
                        KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, v340, v182, 0LL);
                      }
                      v173 = v326;
                      v170 = (unsigned int *)v327;
                      v172 = v329;
                      if ( !*((_DWORD *)v125 + 484) )
                      {
                        *((_QWORD *)v125 + 244) = 0LL;
                        *((_QWORD *)v125 + 245) = 271LL;
                        *((_QWORD *)v125 + 243) = v125 - 0x5C5FC0A76E374B18LL;
                        *((_DWORD *)v125 + 484) = 1;
                        *((_QWORD *)v125 + 246) = v163;
                      }
                    }
                  }
                  v167 += 3;
                  if ( v167 == v337 )
                    goto LABEL_269;
                }
                if ( (*((_DWORD *)v125 + 522) & 0x200000) == 0 )
                {
                  v352[6] = 1329605744;
                  KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, v163, 2uLL, 0LL);
                }
                goto LABEL_238;
              }
LABEL_270:
              v183 = v332;
              ++v169;
              v170 += 10;
              LODWORD(v331) = v169;
              v327 = (__int64)v170;
            }
            while ( v169 < (unsigned int)v332 );
            v184 = v334;
            if ( v167 != v337 )
            {
              if ( (*((_DWORD *)v125 + 522) & 0x200000) == 0 )
              {
                v352[5] = 1329605744;
                KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, v163, 3uLL, 0LL);
              }
              if ( !*((_DWORD *)v125 + 484) )
              {
                v166 = v125 - 0x5C5FC0A76E374B18LL;
                goto LABEL_240;
              }
              goto LABEL_104;
            }
            v185 = *((unsigned int *)v125 + 417);
            v186 = ((v334 + 6) & 0xFFFFFFF8) + 24 * v332 + v185 + 48;
            if ( v186 <= *((_DWORD *)v125 + 557) )
            {
              v187 = v125;
              v327 = (__int64)v125;
              *((_DWORD *)v125 + 417) = v186;
            }
            else
            {
              v327 = sub_1402E732C(v125, v186, *((unsigned int *)v125 + 495));
              v187 = (_BYTE *)v327;
              if ( !v327 )
                goto LABEL_122;
              v188 = *((_DWORD *)v125 + 522);
              if ( (v188 & 4) == 0 )
              {
                v189 = *((_DWORD *)v125 + 417);
                v190 = *((_QWORD *)v125 + 205);
                v191 = (v188 & 0x20000000) != 0 ? *((_DWORD *)v125 + 495) : 0;
                if ( v189 >= 8 )
                {
                  v192 = (unsigned __int64)v189 >> 3;
                  do
                  {
                    *(_QWORD *)v125 = 0LL;
                    v189 -= 8;
                    v125 += 8;
                    --v192;
                  }
                  while ( v192 );
                }
                for ( ; v189; --v189 )
                  *v125++ = 0;
                v193 = *((_DWORD *)v187 + 495);
                *((_DWORD *)v187 + 495) = v191;
                if ( v191 == 3 )
                {
                  (*((void (__fastcall **)(__int64, __int64))v187 + 109))(v190, 1LL);
                }
                else
                {
                  v194 = 0;
                  if ( (*((_DWORD *)v187 + 522) & 0x10000000) == 0 )
                    v194 = v191;
                  if ( v194 )
                    (*((void (__fastcall **)(__int64, _QWORD))v187 + 69))(v190 - 8, *(_QWORD *)(v190 - 8));
                  else
                    (*((void (__fastcall **)(__int64, __int64))v187 + 32))(v190, 1LL);
                }
                *((_DWORD *)v187 + 495) = v193;
              }
              *((_DWORD *)v187 + 522) &= ~4u;
              v183 = v332;
              v184 = v334;
            }
            v195 = &v187[v185];
            ++*((_DWORD *)v187 + 427);
            v196 = &v187[v185];
            v369 = &v187[v185];
            v197 = 6LL;
            v198 = 48;
            do
            {
              *v196 = 0LL;
              v198 -= 8;
              ++v196;
              --v197;
            }
            while ( v197 );
            for ( ; v198; --v198 )
            {
              *(_BYTE *)v196 = 0;
              v196 = (_QWORD *)((char *)v196 + 1);
            }
            *((_QWORD *)v195 + 1) = v336;
            *(_DWORD *)v195 = 30;
            *((_DWORD *)v195 + 4) = 0;
            v199 = *((_QWORD *)v187 + 215);
            for ( m = v199; ; LODWORD(v199) = m ^ v199 )
            {
              m >>= 31;
              if ( !m )
                break;
            }
            v201 = v333;
            v96 = v328 == 0;
            v202 = v340;
            v125 = v187;
            *((_DWORD *)v195 + 5) = v199 & 0x7FFFFFFF;
            *((_QWORD *)v195 + 3) = v202;
            *((_DWORD *)v195 + 8) = v201[20];
            *((_DWORD *)v195 + 9) = v330;
            *((_WORD *)v195 + 20) = v381;
            LOWORD(v201) = *((_WORD *)v195 + 21) & 0xFFFE;
            v370 = v195;
            v342 = v187;
            *((_WORD *)v195 + 21) = (unsigned __int16)v201 | !v96;
            v203 = *((unsigned __int16 *)v195 + 20);
            v204 = &v195[(((unsigned int)(v184 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
            v331 = v195 + 48;
            v333 = v204;
            v205 = &v204[6 * v203];
            v206 = 12LL;
            if ( !v184 )
              v206 = v344;
            v207 = 0;
            v356 = &v204[6 * v203];
            v334 = (unsigned __int64)v336 + v206;
            if ( v183 )
            {
              v208 = v183;
              v209 = v204 + 2;
              do
              {
                v210 = 2LL;
                do
                {
                  *((_QWORD *)v209 - 1) = 0LL;
                  *v209 = 0x80000000;
                  v209 += 3;
                  --v210;
                }
                while ( v210 );
                --v208;
              }
              while ( v208 );
              v202 = v340;
            }
            if ( v204 != v205 )
            {
              v211 = (char *)v335;
              while ( 1 )
              {
                if ( (*((_DWORD *)v211 + 9) & 0x2000000) != 0
                  || (v212 = *(_DWORD *)v211, *(_DWORD *)v211 == 1414090313) && *((_DWORD *)v211 + 1) == 1195525195
                  || v212 == 1162297680
                  && ((v213 = *((_WORD *)v211 + 2), v213 == 30839) || v213 == 29303 || v213 == 30583)
                  || v212 == 1095914053 && *((_WORD *)v211 + 2) == 16724 )
                {
LABEL_342:
                  v207 = 1;
                }
                else
                {
                  v214 = (char *)*((_QWORD *)v187 + 249);
                  v215 = 7;
                  v363 = (char *)*((_QWORD *)v187 + 250);
                  v216 = v211 - v214;
                  v364 = (char *)*((_QWORD *)v187 + 251);
                  v365 = (char *)*((_QWORD *)v187 + 252);
                  v362 = v214;
                  while ( 1 )
                  {
                    v217 = v214[v216];
                    v218 = *v214++;
                    if ( v217 != v218 )
                      break;
                    if ( !--v215 )
                      goto LABEL_342;
                  }
                  v219 = v363;
                  v220 = 8;
                  v221 = v211;
                  while ( 1 )
                  {
                    v222 = *(_QWORD *)v221;
                    v221 += 8;
                    v223 = *(_QWORD *)v219;
                    v219 += 8;
                    if ( v222 != v223 )
                      break;
                    v220 -= 8;
                    if ( v220 < 8 )
                    {
                      if ( !v220 )
                        goto LABEL_342;
                      while ( 1 )
                      {
                        v224 = *v221++;
                        v225 = *v219++;
                        if ( v224 != v225 )
                          goto LABEL_335;
                        if ( !--v220 )
                          goto LABEL_342;
                      }
                    }
                  }
LABEL_335:
                  v226 = v364;
                  v227 = 4;
                  while ( 1 )
                  {
                    v228 = v226[v211 - v364];
                    v229 = *v226++;
                    if ( v228 != v229 )
                      break;
                    if ( !--v227 )
                      goto LABEL_342;
                  }
                  v230 = v365;
                  v231 = 6;
                  while ( 1 )
                  {
                    v232 = v230[v211 - v365];
                    v233 = *v230++;
                    if ( v232 != v233 )
                      break;
                    if ( !--v231 )
                      goto LABEL_342;
                  }
                }
                v234 = *((_DWORD *)v211 + 9);
                if ( v234 < 0 )
                  v207 = 1;
                v328 = v207;
                if ( v207 && *(_DWORD *)v211 == 1414090313 && *((_DWORD *)v211 + 1) == 1195525195 )
                {
                  if ( (*((_DWORD *)v187 + 523) & 0x2000) != 0 )
                    v207 = 0;
                  v328 = v207;
                }
                if ( (*((_DWORD *)v187 + 523) & 0x4000) != 0
                  && (v234 & 0x20000000) != 0
                  && (v202 == *((_QWORD *)v187 + 188) || v202 == *((_QWORD *)v187 + 189)) )
                {
                  v207 = 1;
                  v328 = 1;
                }
                v235 = *((_DWORD *)v211 + 4);
                v236 = *((_DWORD *)v211 + 2);
                v237 = *((unsigned int *)v211 + 3);
                v238 = v337;
                if ( v235 <= v236 )
                  v235 = v236;
                v239 = v237 + v235;
                v326 = v237;
                v382 = v239;
                if ( v336 == v337 )
                {
                  v240 = 0;
                  v241 = 0;
                }
                else
                {
                  v240 = *v336;
                  v241 = v336[1];
                }
                v242 = v336;
                LODWORD(v341) = v241;
                LODWORD(v332) = v240;
                v329 = v237;
                if ( v336 == v337 || v240 <= (unsigned int)v237 || v241 > v239 || v207 )
                {
LABEL_388:
                  v207 = 0;
                }
                else
                {
                  *v204 = v237;
                  v243 = &v357;
                  v204[1] = v240;
                  v244 = v240 - v237;
                  v329 = v240;
                  v245 = v202 + v237;
                  v246 = v240 - (unsigned int)v237;
                  v247 = 0;
                  v344 = v245;
                  v248 = v245 + v246;
                  LODWORD(v330) = v244;
                  v249 = v353;
                  do
                  {
                    if ( v245 < *v243 + *v249 && v248 > *v243 )
                    {
                      v239 = v382;
                      LODWORD(v237) = v326;
                      v238 = v337;
                      v242 = v336;
                      goto LABEL_388;
                    }
                    ++v247;
                    ++v243;
                    ++v249;
                  }
                  while ( v247 < 5 );
                  *((_DWORD *)v187 + 434) += v244;
                  v250 = (_QWORD *)v245;
                  v251 = *((_DWORD *)v187 + 429);
                  v252 = (const char *)v245;
                  v253 = *((_QWORD *)v187 + 215);
                  if ( v245 < v248 )
                  {
                    do
                    {
                      _mm_prefetch(v252, 0);
                      v252 += 64;
                    }
                    while ( (unsigned __int64)v252 < v248 );
                  }
                  v237 = v253;
                  v254 = v244 >> 7;
                  if ( v244 >> 7 )
                  {
                    do
                    {
                      v255 = 8LL;
                      do
                      {
                        v256 = v237 ^ *v250;
                        v257 = v250[1];
                        v250 += 2;
                        v237 = __ROL8__(__ROL8__(v256, v251) ^ v257, v251);
                        --v255;
                      }
                      while ( v255 );
                      v258 = __ROL8__(v253 ^ ((unsigned __int64)v250 - v344), 17) ^ v253 ^ ((unsigned __int64)v250 - v344);
                      v371 = (v258 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v251 = ((unsigned __int8)(v371 ^ v258) ^ (unsigned __int8)v251) & 0x3F;
                      if ( !v251 )
                        LOBYTE(v251) = 1;
                      --v254;
                    }
                    while ( v254 );
                    LOBYTE(v244) = v330;
                  }
                  v259 = v244 & 0x7F;
                  if ( v259 >= 8 )
                  {
                    v260 = (unsigned __int64)v259 >> 3;
                    do
                    {
                      v237 = __ROL8__(*v250++ ^ v237, v251);
                      v259 -= 8;
                      --v260;
                    }
                    while ( v260 );
                  }
                  for ( ; v259; --v259 )
                  {
                    v261 = *(unsigned __int8 *)v250;
                    v250 = (_QWORD *)((char *)v250 + 1);
                    v237 = __ROL8__(v261 ^ v237, v251);
                  }
                  v262 = v237 >> 31;
                  v207 = 0;
                  while ( v262 )
                  {
                    LODWORD(v237) = v262 ^ v237;
                    v262 >>= 31;
                  }
                  v187 = (_BYTE *)v327;
                  v239 = v382;
                  v202 = v340;
                  v238 = v337;
                  v242 = v336;
                  v333[2] = v237 & 0x7FFFFFFF;
                  LODWORD(v237) = v326;
                }
                if ( (unsigned int)v332 >= (unsigned int)v237 && (unsigned int)v341 <= v239 && v242 != v238 )
                {
                  v263 = (unsigned int *)v334;
                  v264 = *(_DWORD *)(v334 + 4);
                  LODWORD(v330) = v264;
                  while ( v264 <= v239 && v263 != v238 )
                  {
                    if ( v328 )
                    {
                      v265 = 0x80;
                    }
                    else
                    {
                      v266 = v242[1];
                      v267 = *v263;
                      v329 = v267;
                      if ( v267 < (unsigned int)v266 )
                      {
                        if ( (*((_DWORD *)v187 + 522) & 0x200000) == 0 )
                        {
                          v352[7] = 1329605744;
                          KeBugCheckEx(__ROR4__(1329594368, 86), 0xAuLL, v202, 6uLL, 0LL);
                        }
                        if ( !*((_DWORD *)v187 + 484) )
                        {
                          *((_QWORD *)v187 + 244) = 0LL;
                          *((_QWORD *)v187 + 245) = 271LL;
                          *((_QWORD *)v187 + 243) = v187 - 0x5C5FC0A76E374B18LL;
                          *((_DWORD *)v187 + 484) = 1;
                          *((_QWORD *)v187 + 246) = v202;
                        }
                      }
                      v268 = v202 + v266;
                      v269 = v267 - v266;
                      v344 = v268;
                      v270 = v267 - (unsigned int)v266;
                      v271 = v353;
                      v272 = v268 + v270;
                      LODWORD(v332) = v269;
                      v273 = &v357;
                      do
                      {
                        if ( v268 < *v273 + *v271 && v272 > *v273 )
                          goto LABEL_423;
                        ++v207;
                        ++v273;
                        ++v271;
                      }
                      while ( v207 < 5 );
                      if ( v269 < 4 )
                      {
LABEL_423:
                        v207 = 0;
                        v265 = 0x80;
                        goto LABEL_424;
                      }
                      *((_DWORD *)v187 + 434) += v269;
                      v274 = (_QWORD *)v268;
                      v275 = *((_DWORD *)v187 + 429);
                      v276 = (const char *)v268;
                      v277 = *((_QWORD *)v187 + 215);
                      if ( v268 < v272 )
                      {
                        do
                        {
                          _mm_prefetch(v276, 0);
                          v276 += 64;
                        }
                        while ( (unsigned __int64)v276 < v272 );
                      }
                      v278 = v277;
                      v279 = v269 >> 7;
                      if ( v269 >> 7 )
                      {
                        do
                        {
                          v280 = 8LL;
                          do
                          {
                            v281 = v278 ^ *v274;
                            v282 = v274[1];
                            v274 += 2;
                            v278 = __ROL8__(__ROL8__(v281, v275) ^ v282, v275);
                            --v280;
                          }
                          while ( v280 );
                          v283 = __ROL8__(v277 ^ ((unsigned __int64)v274 - v344), 17) ^ v277 ^ ((unsigned __int64)v274
                                                                                              - v344);
                          v374 = (v283 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v275 = ((unsigned __int8)(v374 ^ v283) ^ (unsigned __int8)v275) & 0x3F;
                          if ( !v275 )
                            LOBYTE(v275) = 1;
                          --v279;
                        }
                        while ( v279 );
                        LOBYTE(v269) = v332;
                      }
                      v284 = v269 & 0x7F;
                      if ( v284 >= 8 )
                      {
                        v285 = (unsigned __int64)v284 >> 3;
                        do
                        {
                          v278 = __ROL8__(*v274++ ^ v278, v275);
                          v284 -= 8;
                          --v285;
                        }
                        while ( v285 );
                      }
                      for ( ; v284; --v284 )
                      {
                        v286 = *(unsigned __int8 *)v274;
                        v274 = (_QWORD *)((char *)v274 + 1);
                        v278 = __ROL8__(v286 ^ v278, v275);
                      }
                      v287 = v278 >> 7;
                      v207 = 0;
                      while ( v287 )
                      {
                        LOBYTE(v278) = v287 ^ v278;
                        v287 >>= 7;
                      }
                      v202 = v340;
                      v265 = v278 & 0x7F;
LABEL_424:
                      v242 = v336;
                      v238 = v337;
                      v239 = v382;
                      v264 = v330;
                    }
                    v242 += 3;
                    v336 = v242;
                    *v331++ = v265;
                    v263 = (unsigned int *)(v334 + 12);
                    v334 = (unsigned __int64)v263;
                    if ( v263 != v238 )
                    {
                      v264 = v263[1];
                      LODWORD(v330) = v264;
                    }
                    v187 = (_BYTE *)v327;
                  }
                }
                if ( v328 || (v288 = v329, v329 == v239) )
                {
LABEL_454:
                  v310 = v333;
                }
                else
                {
                  v289 = v333;
                  v290 = v202 + v329;
                  v291 = 0;
                  v292 = &v357;
                  v333[4] = v239;
                  v293 = v239 - v288;
                  v289[3] = v288;
                  v294 = v202 + v288 + v293;
                  LODWORD(v332) = v293;
                  v295 = v353;
                  do
                  {
                    if ( v290 < *v292 + *v295 && v294 > *v292 )
                    {
                      v207 = 0;
                      goto LABEL_454;
                    }
                    ++v291;
                    ++v292;
                    ++v295;
                  }
                  while ( v291 < 5 );
                  v296 = v327;
                  v297 = (_QWORD *)v290;
                  v298 = (const char *)v290;
                  *(_DWORD *)(v327 + 1736) += v293;
                  v299 = *(_DWORD *)(v296 + 1716);
                  v300 = *(_QWORD *)(v296 + 1720);
                  if ( v290 < v294 )
                  {
                    do
                    {
                      _mm_prefetch(v298, 0);
                      v298 += 64;
                    }
                    while ( (unsigned __int64)v298 < v294 );
                  }
                  v301 = v300;
                  v302 = v293 >> 7;
                  if ( v293 >> 7 )
                  {
                    do
                    {
                      v303 = 8LL;
                      do
                      {
                        v304 = v297[1] ^ __ROL8__(*v297 ^ v301, v299);
                        v297 += 2;
                        v301 = __ROL8__(v304, v299);
                        --v303;
                      }
                      while ( v303 );
                      v305 = __ROL8__(v300 ^ ((unsigned __int64)v297 - v290), 17) ^ v300 ^ ((unsigned __int64)v297 - v290);
                      v373 = (v305 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v299 = ((unsigned __int8)(v373 ^ v305) ^ (unsigned __int8)v299) & 0x3F;
                      if ( !v299 )
                        LOBYTE(v299) = 1;
                      --v302;
                    }
                    while ( v302 );
                    LOBYTE(v293) = v332;
                  }
                  v306 = v293 & 0x7F;
                  if ( v306 >= 8 )
                  {
                    v307 = (unsigned __int64)v306 >> 3;
                    do
                    {
                      v301 = __ROL8__(*v297++ ^ v301, v299);
                      v306 -= 8;
                      --v307;
                    }
                    while ( v307 );
                  }
                  for ( ; v306; --v306 )
                  {
                    v308 = *(unsigned __int8 *)v297;
                    v297 = (_QWORD *)((char *)v297 + 1);
                    v301 = __ROL8__(v308 ^ v301, v299);
                  }
                  v309 = v301 >> 31;
                  v207 = 0;
                  while ( v309 )
                  {
                    LODWORD(v301) = v309 ^ v301;
                    v309 >>= 31;
                  }
                  v310 = v333;
                  v333[5] = v301 & 0x7FFFFFFF;
                }
                v311 = v336;
                if ( v336 != v337 && *v336 >= v326 && v336[1] <= v382 )
                {
                  v312 = v334;
                  if ( (unsigned int *)v334 != v337 )
                  {
                    v313 = v331;
                    *v331 = 0x80;
                    v331 = v313 + 1;
                    v334 = v312 + 12;
                  }
                  v336 = v311 + 3;
                }
                v204 = v310 + 6;
                v211 = (char *)(v335 + 10);
                v333 = v204;
                v335 += 10;
                if ( v204 == v356 )
                  break;
                v187 = (_BYTE *)v327;
                v202 = v340;
              }
              v125 = v342;
            }
          }
          v339 = v125;
LABEL_465:
          v31 = 0;
          goto LABEL_466;
        }
LABEL_122:
        v31 = -1073741670;
        goto LABEL_466;
      }
      v97[8] |= 1u;
    }
    if ( v99 )
      goto LABEL_154;
    goto LABEL_155;
  }
  v31 = -1073741701;
LABEL_467:
  *a1 = v339;
  if ( (int)(v31 + 0x80000000) >= 0 && v31 != -1073741554 )
    return (unsigned int)v31;
  v314 = v27 & 0xFFFFFFEF;
  if ( (v314 & 0x80000004) != 0x80000004 )
  {
    v315 = v314 | 0x80000000;
    v316 = (*((__int64 (__fastcall **)(__int64))v339 + 63))(v349);
    v317 = *(unsigned int *)(v316 + 148);
    if ( (unsigned int)v317 >= 0x14 )
    {
      v318 = *(unsigned int *)(v316 + 144);
      v319 = v318 + v317;
      v320 = v349;
      v321 = v349 + v319;
      for ( n = v318 + v349; n != v321; n += 20LL )
      {
        if ( !*(_DWORD *)(n + 12) )
          break;
        v323 = *(unsigned int *)(n + 16);
        if ( !(_DWORD)v323 )
          break;
        v324 = *(_QWORD *)(v323 + v320);
        if ( v324 )
        {
          result = sub_1402E495C(&v339, v324, v315);
          *a1 = v339;
          if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741554 )
            return result;
          v320 = v349;
        }
      }
    }
  }
  return 0LL;
}
