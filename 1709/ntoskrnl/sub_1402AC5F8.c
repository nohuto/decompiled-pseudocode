/*
 * XREFs of sub_1402AC5F8 @ 0x1402AC5F8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     sub_14017573C @ 0x14017573C (sub_14017573C.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     sub_1402AE570 @ 0x1402AE570 (sub_1402AE570.c)
 *     sub_1402AEFBC @ 0x1402AEFBC (sub_1402AEFBC.c)
 *     sub_1402AFE60 @ 0x1402AFE60 (sub_1402AFE60.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 */

__int64 __fastcall sub_1402AC5F8(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  int *v4; // r8
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx
  int *v8; // rax
  unsigned __int64 v9; // r9
  _BYTE *v10; // rbx
  unsigned int v11; // r10d
  _BYTE *v12; // rax
  int v13; // ecx
  unsigned int v14; // edx
  int v15; // edi
  unsigned int v16; // r9d
  _BYTE *v17; // r11
  __int64 v18; // rdi
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r11
  unsigned int v26; // eax
  unsigned int v27; // esi
  __int64 (__fastcall *v28)(__int64, ULONG_PTR *, unsigned int *, unsigned __int64); // rax
  int v29; // ecx
  int v30; // ecx
  int *v31; // rax
  unsigned int v32; // esi
  unsigned int v33; // r10d
  __int64 v34; // rax
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // edi
  int *v38; // r11
  unsigned int v39; // r9d
  ULONG_PTR **v40; // r8
  __int64 v41; // rdi
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // r9
  __int64 v49; // r11
  __int64 v50; // rdx
  unsigned int v51; // esi
  unsigned int v52; // edi
  __int64 (__fastcall *v53)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v54; // rdx
  __int64 (__fastcall *v55)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v56; // rdx
  __int64 (__fastcall *v57)(ULONG_PTR); // rax
  __int64 v58; // rax
  __int64 v59; // r8
  unsigned int v60; // eax
  __int64 v61; // rsi
  int v62; // r9d
  unsigned int v63; // eax
  _BYTE *v64; // rdi
  int v65; // edx
  unsigned int v66; // eax
  __int64 v67; // r9
  int v68; // r8d
  unsigned __int64 v69; // rcx
  int v70; // ebx
  int v71; // ecx
  unsigned int *v72; // rcx
  int *v73; // rbx
  ULONG_PTR *v74; // rax
  unsigned int v75; // r10d
  int v76; // ecx
  const char *v77; // rsi
  int *v78; // rax
  __int64 v79; // rdx
  const char *v80; // rax
  const char *v81; // r9
  unsigned __int64 v82; // rdx
  int v83; // r11d
  unsigned __int64 v84; // rcx
  unsigned int v85; // r10d
  unsigned __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // r8
  unsigned __int128 v90; // rax
  int v91; // esi
  unsigned int v92; // edx
  unsigned __int64 v93; // r10
  __int64 v94; // rax
  unsigned __int64 k; // rax
  bool v96; // zf
  unsigned __int64 v97; // rbx
  ULONG_PTR v98; // rax
  unsigned int v99; // ecx
  int v100; // ecx
  _BYTE *v101; // rdi
  __int64 v102; // rdx
  ULONG_PTR v103; // rsi
  unsigned int v104; // ebx
  unsigned __int64 v105; // r8
  _QWORD *v106; // rax
  _QWORD *v107; // r9
  const char *v108; // rax
  int v109; // r10d
  unsigned __int64 v110; // r8
  ULONG_PTR v111; // rcx
  unsigned int v112; // r11d
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // r8
  unsigned __int128 v116; // rax
  unsigned int v117; // ebx
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 m; // rax
  int *v121; // rsi
  char *v122; // r9
  __int64 v123; // rsi
  unsigned int v124; // eax
  _BYTE *v125; // rbx
  int v126; // edx
  unsigned int v127; // eax
  __int64 v128; // r9
  int v129; // r8d
  unsigned __int64 v130; // rcx
  int v131; // edi
  int v132; // ecx
  int v133; // ecx
  int *v134; // rax
  __int64 v135; // rdx
  char v136; // dl
  const char *v137; // rax
  int v138; // r11d
  __int64 v139; // rdi
  const char *n; // rcx
  unsigned __int64 v141; // r8
  unsigned int v142; // r10d
  __int64 v143; // rax
  __int64 v144; // r8
  __int64 v145; // rcx
  unsigned int v146; // edx
  unsigned __int64 v147; // rax
  __int64 v148; // rax
  unsigned __int64 ii; // rax
  unsigned __int64 v150; // r8
  unsigned __int64 v151; // rdx
  ULONG_PTR v152; // rdi
  BOOL v153; // ecx
  unsigned int v154; // eax
  bool v155; // cf
  __int64 v156; // rsi
  __int64 v157; // rax
  int v158; // ecx
  _QWORD *v159; // rax
  __int64 *v160; // rax
  __int64 v161; // rax
  ULONG_PTR v162; // rsi
  __int64 v163; // rax
  unsigned __int16 v164; // dx
  _BYTE *v165; // rax
  ULONG_PTR *v166; // rdi
  __int64 v167; // r11
  unsigned int v168; // r8d
  _DWORD *v169; // rdx
  int v170; // ecx
  unsigned int v171; // r10d
  unsigned int v172; // r9d
  unsigned int v173; // eax
  __int64 v174; // rax
  int v175; // ecx
  int v176; // r8d
  __int64 (__fastcall *v177)(ULONG_PTR *, ULONG_PTR); // rax
  unsigned int v178; // esi
  unsigned int *v179; // r9
  ULONG_PTR v180; // r10
  unsigned int *v181; // rax
  unsigned int v182; // eax
  unsigned int v183; // r9d
  int v184; // r10d
  __int64 v185; // rdi
  unsigned int v186; // eax
  __int64 v187; // rsi
  int v188; // r8d
  __int64 v189; // rdx
  __int64 v190; // r10
  int v191; // r9d
  unsigned __int64 v192; // rax
  int v193; // ebx
  int v194; // ecx
  __int64 v195; // rdx
  _QWORD *v196; // rax
  __int64 v197; // rcx
  int v198; // r8d
  unsigned __int64 v199; // rcx
  unsigned __int64 jj; // rax
  int *v201; // rax
  ULONG_PTR v202; // r11
  __int64 v203; // rax
  unsigned __int64 v204; // rdi
  unsigned __int64 v205; // r8
  __int64 v206; // rcx
  unsigned int v207; // r10d
  __int64 v208; // rdx
  _DWORD *v209; // rax
  __int64 v210; // rcx
  char *v211; // rbx
  int v212; // ecx
  __int16 v213; // ax
  int v214; // r9d
  char *v215; // rdx
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
  unsigned int v235; // ecx
  unsigned __int64 v236; // r8
  ULONG_PTR *v237; // r9
  ULONG_PTR *v238; // rbx
  unsigned int v239; // edx
  unsigned int v240; // eax
  unsigned int v241; // ecx
  unsigned int v242; // edi
  int *v243; // rcx
  ULONG_PTR *v244; // rdx
  unsigned int v245; // r9d
  unsigned __int64 v246; // r11
  unsigned int *v247; // rcx
  ULONG_PTR v248; // rbx
  unsigned int kk; // r8d
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
  unsigned int *v263; // r8
  unsigned int v264; // eax
  unsigned int *v265; // rcx
  __int64 v266; // rcx
  ULONG_PTR *v267; // rdx
  unsigned __int64 v268; // r11
  unsigned int v269; // r9d
  __int64 v270; // rbx
  unsigned int *v271; // rcx
  ULONG_PTR v272; // rbx
  _QWORD *v273; // r10
  int v274; // edi
  const char *v275; // rax
  unsigned __int64 v276; // rsi
  unsigned __int64 v277; // r8
  unsigned int v278; // ebx
  __int64 v279; // rdx
  __int64 v280; // rax
  __int64 v281; // r8
  unsigned __int64 v282; // rcx
  unsigned int v283; // r9d
  unsigned __int64 v284; // rdx
  __int64 v285; // rax
  unsigned __int64 v286; // rax
  int *v287; // rax
  unsigned int *v288; // rcx
  unsigned __int64 v289; // r11
  unsigned int v290; // r9d
  unsigned int v291; // r8d
  ULONG_PTR v292; // rbx
  ULONG_PTR *v293; // rdx
  __int64 v294; // rsi
  _QWORD *v295; // r10
  const char *v296; // rax
  int v297; // edi
  unsigned __int64 v298; // rsi
  unsigned __int64 v299; // r8
  unsigned int v300; // ebx
  __int64 v301; // rax
  __int64 v302; // r8
  unsigned __int64 v303; // rcx
  unsigned int v304; // r9d
  unsigned __int64 v305; // rax
  __int64 v306; // rax
  unsigned __int64 v307; // rax
  int *v308; // rdi
  ULONG_PTR *v309; // r8
  unsigned __int64 v310; // rcx
  unsigned int *v311; // rax
  unsigned int v312; // esi
  unsigned int v313; // esi
  __int64 v314; // rax
  __int64 v315; // rcx
  __int64 v316; // rax
  __int64 v317; // rdi
  __int64 v318; // rcx
  __int64 v319; // rdi
  __int64 mm; // rbx
  __int64 v321; // rax
  __int64 v322; // rdx
  unsigned int v323; // [rsp+48h] [rbp-C0h]
  unsigned int v324; // [rsp+48h] [rbp-C0h]
  int v325; // [rsp+48h] [rbp-C0h]
  unsigned int v326; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v327; // [rsp+50h] [rbp-B8h]
  unsigned int v328; // [rsp+54h] [rbp-B4h]
  __int64 j; // [rsp+58h] [rbp-B0h]
  __int64 v330; // [rsp+60h] [rbp-A8h]
  _BYTE *v331; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v332; // [rsp+70h] [rbp-98h]
  ULONG_PTR v333; // [rsp+78h] [rbp-90h]
  unsigned __int64 v334; // [rsp+80h] [rbp-88h]
  int *v335; // [rsp+88h] [rbp-80h]
  unsigned int v336; // [rsp+90h] [rbp-78h]
  unsigned int *v337; // [rsp+98h] [rbp-70h]
  ULONG_PTR *v338; // [rsp+A0h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v340; // [rsp+B0h] [rbp-58h] BYREF
  ULONG_PTR *v341; // [rsp+B8h] [rbp-50h]
  unsigned int v342; // [rsp+C0h] [rbp-48h]
  _BYTE *i; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v344; // [rsp+D0h] [rbp-38h]
  unsigned int v345; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v346; // [rsp+E0h] [rbp-28h]
  int v347; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v348; // [rsp+F0h] [rbp-18h]
  int v349; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v350; // [rsp+100h] [rbp-8h] BYREF
  int *v351; // [rsp+108h] [rbp+0h]
  int v352; // [rsp+110h] [rbp+8h] BYREF
  _DWORD v353[9]; // [rsp+114h] [rbp+Ch] BYREF
  _DWORD v354[6]; // [rsp+138h] [rbp+30h] BYREF
  int *v355; // [rsp+150h] [rbp+48h]
  int *v356; // [rsp+158h] [rbp+50h]
  unsigned __int64 v357; // [rsp+160h] [rbp+58h]
  ULONG_PTR v358; // [rsp+168h] [rbp+60h] BYREF
  __int64 v359; // [rsp+170h] [rbp+68h]
  __int64 v360; // [rsp+178h] [rbp+70h]
  __int64 v361; // [rsp+180h] [rbp+78h]
  __int64 v362; // [rsp+188h] [rbp+80h]
  char *v363; // [rsp+190h] [rbp+88h]
  char *v364; // [rsp+198h] [rbp+90h]
  char *v365; // [rsp+1A0h] [rbp+98h]
  char *v366; // [rsp+1A8h] [rbp+A0h]
  __int64 v367; // [rsp+1B0h] [rbp+A8h]
  int *v368; // [rsp+1B8h] [rbp+B0h]
  __int64 v369; // [rsp+1C0h] [rbp+B8h]
  __int64 v370; // [rsp+1C8h] [rbp+C0h]
  __int64 v371; // [rsp+1D0h] [rbp+C8h]
  __int64 v372; // [rsp+1D8h] [rbp+D0h]
  __int64 v373; // [rsp+1E0h] [rbp+D8h]
  __int64 v374; // [rsp+1E8h] [rbp+E0h]
  __int64 v375; // [rsp+1F0h] [rbp+E8h]
  unsigned int v379; // [rsp+240h] [rbp+138h]
  unsigned int v380; // [rsp+240h] [rbp+138h]
  int v381; // [rsp+240h] [rbp+138h]
  unsigned __int16 v382; // [rsp+240h] [rbp+138h]
  unsigned int v383; // [rsp+240h] [rbp+138h]

  v340 = *a1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(v340 + 496))(a2, &v350, &v352);
  v4 = 0LL;
  j = v3;
  v5 = v3;
  if ( !v3 )
    return 3221225595LL;
  v7 = 4;
  v346 = 0LL;
  v8 = &v347;
  v9 = 1LL;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v10 = (_BYTE *)v340;
  v11 = 0;
  v331 = (_BYTE *)v340;
  v379 = *(_DWORD *)(v340 + 1644);
  if ( v379 )
  {
    v12 = *(_BYTE **)(v340 + 2216);
    v13 = v347;
    v14 = HIDWORD(v346);
    v15 = v346;
    for ( i = v12; ; v12 = i )
    {
      v16 = 0;
      v17 = v10;
      if ( v12 )
        v17 = v12;
      v4 = (int *)&v17[*((unsigned int *)v17 + 410)];
      if ( v15 && v14 <= v11 )
      {
        v16 = v14;
        v4 = (int *)&v17[v13];
      }
      if ( v16 != v11 )
        break;
LABEL_36:
      v14 = v16;
      LODWORD(v346) = 1;
      v9 = *v4;
      v13 = (_DWORD)v4 - (_DWORD)v17;
      HIDWORD(v346) = v14;
      v347 = (_DWORD)v4 - (_DWORD)v17;
      v15 = 1;
      if ( (unsigned int)v9 <= 0x2B )
      {
        v25 = 0x80000001002LL;
        if ( _bittest64(&v25, v9) )
        {
          if ( *((_QWORD *)v4 + 1) == v5 && v4[4] == v352 )
            goto LABEL_44;
        }
      }
      v26 = v9 - 33;
      v9 = 1LL;
      if ( v26 <= 1 && *((_QWORD *)v4 + 4) == v350 )
        goto LABEL_44;
      ++v11;
      v4 = 0LL;
      if ( v11 >= v379 )
        goto LABEL_44;
    }
    v18 = v11 - v16;
    v16 = v11;
    while ( 1 )
    {
      v19 = *v4;
      if ( *v4 > 12 )
        break;
      if ( v19 == 12 )
        goto LABEL_28;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_28;
      v21 = v20 - 6;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          v24 = *((unsigned __int16 *)v4 + 16);
LABEL_33:
          v23 = (v24 + 55) & 0xFFFFFFF8;
          goto LABEL_34;
        }
        if ( v22 != 2 )
          goto LABEL_30;
        v23 = (unsigned int)(16 * (v4[7] + 3));
      }
      else
      {
        v23 = (unsigned int)(24 * (v4[6] + 2));
      }
LABEL_34:
      v4 = (int *)((char *)v4 + v23);
      if ( !--v18 )
      {
        v10 = v331;
        v5 = j;
        goto LABEL_36;
      }
    }
    if ( v19 == 28 )
    {
      v24 = *((unsigned __int16 *)v4 + 20);
      goto LABEL_33;
    }
    if ( v19 == 30 )
    {
      v23 = (((v4[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v4 + 20) + 2);
      goto LABEL_34;
    }
    if ( v19 <= 32 )
    {
LABEL_30:
      v23 = 48LL;
      goto LABEL_34;
    }
    if ( v19 <= 34 )
    {
      v23 = 20 * (unsigned int)(((v4[8] & 0xFFF) + (unsigned __int64)(unsigned int)v4[10] + 4095) >> 12) + 48;
      goto LABEL_34;
    }
    if ( v19 != 43 )
      goto LABEL_30;
LABEL_28:
    v23 = 4 * (v4[4] / 0xCu) + 48;
    goto LABEL_34;
  }
LABEL_44:
  if ( v4 )
    return 3221225742LL;
  v27 = a3;
  v28 = (__int64 (__fastcall *)(__int64, ULONG_PTR *, unsigned int *, unsigned __int64))*((_QWORD *)v10 + 62);
  v380 = a3;
  i = v10;
  v338 = (ULONG_PTR *)v28(a2, &BugCheckParameter2, &v326, v9);
  if ( v338 )
  {
    v30 = 4;
    v348 = 0LL;
    v31 = &v349;
    do
    {
      *(_BYTE *)v31 = 0;
      v31 = (int *)((char *)v31 + 1);
      --v30;
    }
    while ( v30 );
    v32 = *((_DWORD *)v10 + 411);
    v33 = 0;
    LODWORD(v332) = v32;
    if ( v32 )
    {
      v34 = *((_QWORD *)v10 + 277);
      v35 = v349;
      v36 = HIDWORD(v348);
      v37 = v348;
      for ( j = v34; ; v34 = j )
      {
        v38 = (int *)v10;
        if ( v34 )
          v38 = (int *)v34;
        v351 = v38;
        v39 = 0;
        v40 = (ULONG_PTR **)((char *)v38 + (unsigned int)v38[410]);
        if ( v37 && v36 <= v33 )
        {
          v39 = v36;
          v40 = (ULONG_PTR **)((char *)v38 + (unsigned int)v35);
        }
        if ( v39 != v33 )
          break;
LABEL_81:
        v36 = v39;
        LODWORD(v348) = 1;
        v48 = *(int *)v40;
        v35 = (_DWORD)v40 - (_DWORD)v38;
        HIDWORD(v348) = v36;
        v349 = (_DWORD)v40 - (_DWORD)v38;
        v37 = 1;
        if ( (unsigned int)v48 <= 0x2B )
        {
          v49 = 0x80000001002LL;
          if ( _bittest64(&v49, v48) )
          {
            if ( v40[1] == v338 && *((_DWORD *)v40 + 4) == v326 )
              goto LABEL_90;
          }
        }
        if ( (unsigned int)(v48 - 33) <= 1 && v40[4] == (ULONG_PTR *)BugCheckParameter2 )
          goto LABEL_90;
        if ( ++v33 >= v32 )
          goto LABEL_89;
      }
      v41 = v33 - v39;
      v39 = v33;
      while ( 1 )
      {
        v42 = *(_DWORD *)v40;
        if ( *(int *)v40 > 12 )
          break;
        if ( v42 == 12 )
          goto LABEL_73;
        v43 = v42 - 1;
        if ( !v43 )
          goto LABEL_73;
        v44 = v43 - 6;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( !v45 )
          {
            v47 = *((unsigned __int16 *)v40 + 16);
LABEL_78:
            v46 = (v47 + 55) & 0xFFFFFFF8;
            goto LABEL_79;
          }
          if ( v45 != 2 )
            goto LABEL_75;
          v46 = (unsigned int)(16 * (*((_DWORD *)v40 + 7) + 3));
        }
        else
        {
          v46 = (unsigned int)(24 * (*((_DWORD *)v40 + 6) + 2));
        }
LABEL_79:
        v40 = (ULONG_PTR **)((char *)v40 + v46);
        if ( !--v41 )
        {
          v10 = v331;
          LODWORD(v38) = (_DWORD)v351;
          v32 = v332;
          goto LABEL_81;
        }
      }
      if ( v42 == 28 )
      {
        v47 = *((unsigned __int16 *)v40 + 20);
        goto LABEL_78;
      }
      if ( v42 == 30 )
      {
        v46 = (((*((_DWORD *)v40 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v40 + 20) + 2);
        goto LABEL_79;
      }
      if ( v42 <= 32 )
      {
LABEL_75:
        v46 = 48LL;
        goto LABEL_79;
      }
      if ( v42 <= 34 )
      {
        v46 = 20
            * (unsigned int)((((_DWORD)v40[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v40 + 10) + 4095) >> 12)
            + 48;
        goto LABEL_79;
      }
      if ( v42 != 43 )
        goto LABEL_75;
LABEL_73:
      v46 = 4 * (*((_DWORD *)v40 + 4) / 0xCu) + 48;
      goto LABEL_79;
    }
LABEL_89:
    v40 = 0LL;
LABEL_90:
    v351 = (int *)v40;
    if ( v40 )
    {
      v29 = -1073741554;
LABEL_466:
      v27 = a3;
      goto LABEL_467;
    }
    v51 = (*((__int64 (__fastcall **)(__int64))v10 + 83))(a2);
    v328 = v51;
    v336 = v326;
    if ( (a3 & 0x10) == 0 || (*((_DWORD *)v10 + 503) & 0x400) != 0 )
    {
      v52 = a3;
    }
    else
    {
      v52 = a3 & 0xFFFFFFEF;
      v380 = a3 & 0xFFFFFFEF;
    }
    if ( (v52 & 0x10) != 0 && !(unsigned int)sub_1402AFE60(v10, BugCheckParameter2) )
    {
      v52 &= ~0x10u;
      v380 = v52;
    }
    if ( (v52 & 2) != 0 && !v51 )
      goto LABEL_465;
    if ( (*((_DWORD *)v10 + 502) & 0x40000000) != 0 )
    {
      v29 = sub_14080CF60(&v340, BugCheckParameter2, v52);
      goto LABEL_466;
    }
    v53 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))*((_QWORD *)v10 + 60);
    v362 = 0LL;
    v354[4] = 0;
    LOBYTE(v50) = 1;
    v359 = v53(BugCheckParameter2, v50, 0LL, &v326);
    v54 = v359 != 0 ? v326 : 0;
    v326 = v54;
    v55 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 60);
    v354[1] = v54;
    LOBYTE(v54) = 1;
    v331 = (_BYTE *)v55(BugCheckParameter2, v54, 12LL, &v326);
    v360 = (__int64)v331;
    LOBYTE(v56) = 1;
    v323 = v331 != 0LL ? v326 : 0;
    v326 = v323;
    v354[2] = v323;
    v361 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))v10 + 60))(
             BugCheckParameter2,
             v56,
             10LL,
             &v326);
    v326 &= -(v361 != 0);
    v57 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v10 + 61);
    v354[3] = v326;
    v58 = v57(BugCheckParameter2);
    if ( !v58 )
    {
LABEL_104:
      v29 = -1073741701;
      goto LABEL_466;
    }
    v59 = *((unsigned int *)v10 + 479);
    v358 = BugCheckParameter2;
    v354[0] = *(_DWORD *)(v58 + 84);
    v60 = v51;
    v61 = *((unsigned int *)v10 + 401);
    v62 = v60 != 0 ? 0xB : 0;
    v63 = v61 + 240;
    v327 = v62;
    if ( (unsigned int)(v61 + 240) <= *((_DWORD *)v10 + 535) )
    {
      v64 = v10;
      j = (__int64)v10;
      *((_DWORD *)v10 + 401) = v63;
    }
    else
    {
      j = sub_1402AEFBC(v10, v63, v59);
      v64 = (_BYTE *)j;
      if ( !j )
        goto LABEL_122;
      v65 = *((_DWORD *)v10 + 502);
      if ( (v65 & 4) == 0 )
      {
        v66 = *((_DWORD *)v10 + 401);
        v67 = *((_QWORD *)v10 + 197);
        v68 = (v65 & 0x20000000) != 0 ? *((_DWORD *)v10 + 479) : 0;
        if ( v66 >= 8 )
        {
          v69 = (unsigned __int64)v66 >> 3;
          do
          {
            *(_QWORD *)v10 = 0LL;
            v66 -= 8;
            v10 += 8;
            --v69;
          }
          while ( v69 );
        }
        for ( ; v66; --v66 )
          *v10++ = 0;
        v70 = *((_DWORD *)v64 + 479);
        *((_DWORD *)v64 + 479) = v68;
        if ( v68 == 3 )
        {
          (*((void (__fastcall **)(__int64, __int64))v64 + 107))(v67, 1LL);
        }
        else
        {
          v71 = 0;
          if ( (*((_DWORD *)v64 + 502) & 0x10000000) == 0 )
            v71 = v68;
          if ( v71 )
            (*((void (__fastcall **)(__int64, _QWORD))v64 + 67))(v67 - 8, *(_QWORD *)(v67 - 8));
          else
            (*((void (__fastcall **)(__int64, __int64))v64 + 30))(v67, 1LL);
        }
        *((_DWORD *)v64 + 479) = v70;
      }
      *((_DWORD *)v64 + 502) &= ~4u;
      v62 = v327;
    }
    *((_DWORD *)v64 + 411) += 5;
    v334 = (unsigned __int64)&v64[v61];
    v72 = v354;
    v73 = (int *)&v64[v61];
    v335 = (int *)&v64[v61];
    v355 = (int *)&v64[v61];
    v351 = (int *)&v64[v61];
    v74 = &v358;
    v341 = &v358;
    v337 = v354;
    v333 = 5LL;
    do
    {
      v75 = *v72;
      v76 = 48;
      v77 = (const char *)*v74;
      v78 = v73;
      LODWORD(v330) = v75;
      v79 = 6LL;
      do
      {
        *(_QWORD *)v78 = 0LL;
        v76 -= 8;
        v78 += 2;
        --v79;
      }
      while ( v79 );
      for ( ; v76; --v76 )
      {
        *(_BYTE *)v78 = 0;
        v78 = (int *)((char *)v78 + 1);
      }
      *v73 = v62;
      v80 = v77;
      *((_QWORD *)v73 + 1) = v77;
      v81 = v77;
      v73[4] = v75;
      *((_DWORD *)v64 + 418) += v75;
      v82 = *((_QWORD *)v64 + 207);
      v83 = *((_DWORD *)v64 + 413);
      v84 = (unsigned __int64)&v77[v75];
      v332 = v82;
      if ( (unsigned __int64)v77 < v84 )
      {
        do
        {
          _mm_prefetch(v80, 0);
          v80 += 64;
        }
        while ( (unsigned __int64)v80 < v84 );
      }
      v85 = v75 >> 7;
      v86 = v82;
      if ( v85 )
      {
        do
        {
          v87 = 8LL;
          do
          {
            v88 = v86 ^ *(_QWORD *)v81;
            v89 = *((_QWORD *)v81 + 1);
            v81 += 16;
            v86 = __ROL8__(__ROL8__(v88, v83) ^ v89, v83);
            --v87;
          }
          while ( v87 );
          v90 = (__ROL8__(v332 ^ (v81 - v77), 17) ^ v332 ^ (v81 - v77)) * (unsigned __int128)0x7010008004002001uLL;
          v367 = *((_QWORD *)&v90 + 1);
          v83 = (BYTE8(v90) ^ (unsigned __int8)(v90 ^ v83)) & 0x3F;
          if ( !v83 )
            LOBYTE(v83) = 1;
          --v85;
        }
        while ( v85 );
        v64 = (_BYTE *)j;
        v73 = v335;
      }
      v91 = v330;
      v92 = v330 & 0x7F;
      if ( v92 >= 8 )
      {
        v93 = (unsigned __int64)(v330 & 0x7F) >> 3;
        do
        {
          v86 = __ROL8__(*(_QWORD *)v81 ^ v86, v83);
          v81 += 8;
          v92 -= 8;
          --v93;
        }
        while ( v93 );
        v91 = v330;
      }
      if ( v92 )
      {
        do
        {
          v94 = *(unsigned __int8 *)v81++;
          v86 = __ROL8__(v94 ^ v86, v83);
          --v92;
        }
        while ( v92 );
        v64 = (_BYTE *)j;
      }
      for ( k = v86 >> 31; k; k >>= 31 )
        LODWORD(v86) = k ^ v86;
      v72 = v337 + 1;
      v62 = v327;
      v74 = v341 + 1;
      v73[5] = v86 & 0x7FFFFFFF;
      v73 += 12;
      *((_DWORD *)v64 + 418) += v91;
      v96 = v333-- == 1;
      v335 = v73;
      v355 = v73;
      v337 = v72;
      v341 = v74;
    }
    while ( !v96 );
    v97 = v334;
    v98 = BugCheckParameter2;
    v99 = v328;
    v340 = (__int64)v64;
    *(_DWORD *)v334 = 44;
    *(_QWORD *)(v97 + 24) = v98;
    if ( (*((_DWORD *)v64 + 502) & 0x10200000) == 0 )
    {
      if ( v99 )
      {
LABEL_154:
        *(_DWORD *)(v97 + 32) |= 2u;
        goto LABEL_155;
      }
      if ( (*((_DWORD *)v64 + 503) & 0x8000) == 0 )
      {
LABEL_155:
        i = v64;
        v340 = (__int64)v64;
        v29 = sub_1402AE570(
                (unsigned int)&i,
                (_DWORD)v338,
                v336,
                BugCheckParameter2,
                v99,
                v380,
                (__int64)&v345,
                (__int64)v353);
        if ( v29 < 0 )
          goto LABEL_466;
        v100 = 48;
        v101 = i;
        v102 = 6LL;
        v103 = BugCheckParameter2 + v345;
        v334 = (unsigned __int64)&i[v97 - v340];
        v351 = (int *)v334;
        v104 = v353[0] - v345;
        v105 = v334 + 192;
        v337 = (unsigned int *)i;
        j = v334 + 192;
        v106 = (_QWORD *)(v334 + 192);
        v340 = (__int64)i;
        LODWORD(v332) = v353[0] - v345;
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
        v107 = (_QWORD *)v103;
        *(_DWORD *)v105 = v327;
        v108 = (const char *)v103;
        *(_QWORD *)(v105 + 8) = v103;
        *(_DWORD *)(v105 + 16) = v104;
        *((_DWORD *)v101 + 418) += v104;
        v109 = *((_DWORD *)v101 + 413);
        v110 = *((_QWORD *)v101 + 207);
        v111 = v103 + v104;
        if ( v103 < v111 )
        {
          do
          {
            _mm_prefetch(v108, 0);
            v108 += 64;
          }
          while ( (unsigned __int64)v108 < v111 );
        }
        v112 = v104 >> 7;
        if ( v104 >> 7 )
        {
          v113 = *((_QWORD *)v101 + 207);
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
            v116 = (__ROL8__(v113 ^ ((unsigned __int64)v107 - v103), 17) ^ v113 ^ ((unsigned __int64)v107 - v103))
                 * (unsigned __int128)0x7010008004002001uLL;
            v373 = *((_QWORD *)&v116 + 1);
            v109 = (BYTE8(v116) ^ (unsigned __int8)(v116 ^ v109)) & 0x3F;
            if ( !v109 )
              LOBYTE(v109) = 1;
            --v112;
          }
          while ( v112 );
          v101 = v337;
          LOBYTE(v104) = v332;
        }
        v117 = v104 & 0x7F;
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
        for ( m = v110; ; LODWORD(v110) = m ^ v110 )
        {
          m >>= 31;
          if ( !m )
            break;
        }
        v381 = v380 & 1;
        v121 = (int *)(v334 + 96);
        *(_DWORD *)(j + 20) = v110 & 0x7FFFFFFF;
        v356 = v121;
        v122 = (char *)((unsigned int)(v328 != 0) + 13);
        LODWORD(v332) = (v328 != 0) + 13;
        if ( v121 )
        {
          v150 = v323;
          v125 = v101;
          *v121 = (int)v122;
        }
        else
        {
          v123 = *((unsigned int *)v101 + 401);
          v124 = v123 + 48;
          if ( (unsigned int)(v123 + 48) <= *((_DWORD *)v101 + 535) )
          {
            v125 = v101;
            *((_DWORD *)v101 + 401) = v124;
            j = (__int64)v101;
          }
          else
          {
            j = sub_1402AEFBC(v101, v124, *((unsigned int *)v101 + 479));
            v125 = (_BYTE *)j;
            if ( !j )
              goto LABEL_122;
            v126 = *((_DWORD *)v101 + 502);
            if ( (v126 & 4) == 0 )
            {
              v127 = *((_DWORD *)v101 + 401);
              v128 = *((_QWORD *)v101 + 197);
              v129 = (v126 & 0x20000000) != 0 ? *((_DWORD *)v101 + 479) : 0;
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
              v131 = *((_DWORD *)v125 + 479);
              *((_DWORD *)v125 + 479) = v129;
              if ( v129 == 3 )
              {
                (*((void (__fastcall **)(__int64, __int64))v125 + 107))(v128, 1LL);
              }
              else
              {
                v132 = 0;
                if ( (*((_DWORD *)v125 + 502) & 0x10000000) == 0 )
                  v132 = v129;
                if ( v132 )
                  (*((void (__fastcall **)(__int64, _QWORD))v125 + 67))(v128 - 8, *(_QWORD *)(v128 - 8));
                else
                  (*((void (__fastcall **)(__int64, __int64))v125 + 30))(v128, 1LL);
              }
              *((_DWORD *)v125 + 479) = v131;
            }
            *((_DWORD *)v125 + 502) &= ~4u;
            LODWORD(v122) = v332;
          }
          ++*((_DWORD *)v125 + 411);
          v133 = 48;
          v121 = (int *)&v125[v123];
          v335 = v121;
          v134 = v121;
          v368 = v121;
          v135 = 6LL;
          do
          {
            *(_QWORD *)v134 = 0LL;
            v133 -= 8;
            v134 += 2;
            --v135;
          }
          while ( v135 );
          for ( ; v133; --v133 )
          {
            *(_BYTE *)v134 = 0;
            v134 = (int *)((char *)v134 + 1);
          }
          v136 = v323;
          v137 = v331;
          *v121 = (int)v122;
          v122 = (char *)v137;
          *((_QWORD *)v121 + 1) = v137;
          v121[4] = v323;
          *((_DWORD *)v125 + 418) += v323;
          v138 = *((_DWORD *)v125 + 413);
          v139 = *((_QWORD *)v125 + 207);
          for ( n = &v137[v323]; v137 < n; v137 += 64 )
            _mm_prefetch(v137, 0);
          v141 = *((_QWORD *)v125 + 207);
          v142 = v323 >> 7;
          if ( v323 >> 7 )
          {
            do
            {
              v143 = 8LL;
              do
              {
                v144 = *((_QWORD *)v122 + 1) ^ __ROL8__(*(_QWORD *)v122 ^ v141, v138);
                v122 += 16;
                v141 = __ROL8__(v144, v138);
                --v143;
              }
              while ( v143 );
              v145 = __ROL8__(v139 ^ (v122 - v331), 17) ^ v139 ^ (v122 - v331);
              v369 = ((unsigned __int64)v145 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v138 = ((unsigned __int8)(v369 ^ v145) ^ (unsigned __int8)v138) & 0x3F;
              if ( !v138 )
                LOBYTE(v138) = 1;
              --v142;
            }
            while ( v142 );
            v125 = (_BYTE *)j;
            v121 = v335;
            v136 = v323;
          }
          v146 = v136 & 0x7F;
          if ( v146 >= 8 )
          {
            v147 = (unsigned __int64)v146 >> 3;
            do
            {
              v141 = __ROL8__(*(_QWORD *)v122 ^ v141, v138);
              v122 += 8;
              v146 -= 8;
              --v147;
            }
            while ( v147 );
          }
          for ( ; v146; --v146 )
          {
            v148 = (unsigned __int8)*v122++;
            v141 = __ROL8__(v148 ^ v141, v138);
          }
          for ( ii = v141 >> 31; ii; ii >>= 31 )
            LODWORD(v141) = ii ^ v141;
          v356 = v121;
          v121[5] = v141 & 0x7FFFFFFF;
          v150 = v323;
          *((_DWORD *)v125 + 418) += v323;
        }
        if ( (*((_DWORD *)v125 + 502) & 0x40000000) != 0 && (_DWORD)v150 )
          sub_14017573C((__int64)v125, (__int64)v331, v150, (__int64)(v121 + 7));
        v121[6] = 0;
        if ( v381 )
          v121[6] = 1;
        v151 = v334;
        v152 = BugCheckParameter2;
        v340 = (__int64)v125;
        v153 = v328 != 0;
        v154 = *(_DWORD *)(v334 + 184) & 0xFFFFFFFE;
        *(_DWORD *)(v334 + 144) = 35;
        v155 = *(_DWORD *)(v151 + 160) < 0x94u;
        *(_DWORD *)(v151 + 184) = v154 | v153;
        if ( v155 )
          goto LABEL_233;
        v156 = *(_QWORD *)(v151 + 152);
        v157 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, unsigned __int64, char *))v125 + 61))(
                 v152,
                 v151,
                 v150,
                 v122);
        if ( v157 )
        {
          v150 = v334;
          v151 = v152 + *(unsigned int *)(v157 + 80);
          v158 = *(_DWORD *)(v334 + 184) | 2;
          *(_DWORD *)(v334 + 184) = v158;
          v159 = *(_QWORD **)(v156 + 112);
          if ( (unsigned __int64)v159 >= v152 && (unsigned __int64)v159 < v151 )
          {
            *(_QWORD *)(v150 + 168) = *v159;
            *(_DWORD *)(v150 + 184) = v158 | 4;
          }
          v160 = *(__int64 **)(v156 + 120);
          if ( (unsigned __int64)v160 >= v152 && (unsigned __int64)v160 < v151 )
          {
            v161 = *v160;
            *(_DWORD *)(v150 + 184) |= 8u;
            *(_QWORD *)(v150 + 176) = v161;
          }
LABEL_233:
          v162 = BugCheckParameter2;
          v340 = (__int64)v125;
          v96 = (*((_DWORD *)v125 + 502) & 0x400000) == 0;
          v333 = BugCheckParameter2;
          i = v125;
          if ( !v96 )
          {
            v163 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, unsigned __int64, char *))v125 + 61))(
                     BugCheckParameter2,
                     v151,
                     v150,
                     v122);
            v335 = (int *)v163;
            if ( !v163 )
              goto LABEL_104;
            v164 = *(_WORD *)(v163 + 6);
            v334 = v336 / 0xCuLL;
            v382 = v164;
            if ( !v164 )
            {
              if ( (*((_DWORD *)v125 + 502) & 0x200000) == 0 )
              {
                v353[1] = -201326588;
                KeBugCheckEx(__ROR4__(-201326588, 90), 0xAuLL, v162, 0LL, 0LL);
              }
LABEL_237:
              if ( !*((_DWORD *)v125 + 468) )
              {
                v165 = v125 - 0x5C5FC0A76E374B18LL;
LABEL_239:
                *((_QWORD *)v125 + 235) = v165;
                *((_DWORD *)v125 + 468) = 1;
                *((_QWORD *)v125 + 236) = 0LL;
                *((_QWORD *)v125 + 237) = 271LL;
                *((_QWORD *)v125 + 238) = v162;
              }
              goto LABEL_104;
            }
            v166 = v338;
            j = v163 + *(unsigned __int16 *)(v163 + 20) + 24LL;
            v167 = j;
            LODWORD(v332) = v164;
            v344 = 12LL * (v336 / 0xC);
            v341 = (ULONG_PTR *)((char *)v338 + v344);
            v324 = 0;
            v168 = 0;
            v169 = (_DWORD *)(j + 8);
            v331 = (_BYTE *)(j + 8);
            do
            {
              v170 = *v169;
              v171 = v169[1];
              if ( v169[2] > *v169 )
                v170 = v169[2];
              LODWORD(v330) = v169[1];
              v172 = v171 + v170;
              v327 = v171 + v170;
              if ( v168 && v172 < *(_DWORD *)(v167 + 40LL * (v168 - 1) + 12) )
              {
                if ( (*((_DWORD *)v125 + 502) & 0x200000) == 0 )
                {
                  v353[2] = -201326588;
                  KeBugCheckEx(__ROR4__(-201326588, 90), 0xAuLL, v162, 1uLL, 0LL);
                }
                goto LABEL_237;
              }
              if ( v166 != v341 )
              {
                while ( 1 )
                {
                  v173 = *((_DWORD *)v166 + 1);
                  if ( *(_DWORD *)v166 >= v172 || v173 <= v171 )
                  {
LABEL_267:
                    v168 = v324;
                    v167 = j;
                    goto LABEL_268;
                  }
                  if ( *(_DWORD *)v166 < v171 || v173 > v172 )
                    break;
                  v174 = *((unsigned int *)v166 + 2);
                  if ( (v174 & 1) != 0 || (*(_BYTE *)(v174 + v162) & 0x20) != 0 )
                  {
                    v175 = *v169;
                    v176 = v169[1];
                    if ( v169[2] > *v169 )
                      v175 = v169[2];
                    v177 = (__int64 (__fastcall *)(ULONG_PTR *, ULONG_PTR))*((_QWORD *)v125 + 128);
                    v342 = v169[1];
                    v178 = v176 + v175;
                    v179 = (unsigned int *)v177(v166, v333);
                    if ( *v179 >= v342 && v179[1] < v178 )
                    {
                      v180 = v333;
                    }
                    else
                    {
                      v180 = v333;
                      if ( (*((_DWORD *)v125 + 502) & 0x200000) == 0 )
                      {
                        v353[6] = -201326588;
                        KeBugCheckEx(
                          __ROR4__(-201326588, 90),
                          0xAuLL,
                          v333,
                          ((_DWORD)v179 - (_DWORD)v333) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v125 + 468) )
                      {
                        *((_QWORD *)v125 + 236) = 0LL;
                        *((_QWORD *)v125 + 237) = 271LL;
                        *((_QWORD *)v125 + 235) = v125 - 0x5C5FC0A76E374B18LL;
                        *((_DWORD *)v125 + 468) = 1;
                        *((_QWORD *)v125 + 238) = v180;
                      }
                    }
                    v181 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v125 + 129))(
                                             v179,
                                             v180,
                                             v180 + *v179);
                    if ( *v181 >= v342 && v181[1] < v178 )
                    {
                      v169 = v331;
                      v172 = v327;
                      v171 = v330;
                      v162 = v333;
                    }
                    else
                    {
                      v162 = v333;
                      v182 = ((_DWORD)v181 - v333) | 0x80000000;
                      if ( (*((_DWORD *)v125 + 502) & 0x200000) == 0 )
                      {
                        v353[3] = -201326588;
                        KeBugCheckEx(__ROR4__(-201326588, 90), 0xAuLL, v333, v182, 0LL);
                      }
                      v169 = v331;
                      v172 = v327;
                      v171 = v330;
                      if ( !*((_DWORD *)v125 + 468) )
                      {
                        *((_QWORD *)v125 + 236) = 0LL;
                        *((_QWORD *)v125 + 237) = 271LL;
                        *((_QWORD *)v125 + 235) = v125 - 0x5C5FC0A76E374B18LL;
                        *((_DWORD *)v125 + 468) = 1;
                        *((_QWORD *)v125 + 238) = v162;
                      }
                    }
                  }
                  v166 = (ULONG_PTR *)((char *)v166 + 12);
                  if ( v166 == v341 )
                    goto LABEL_267;
                }
                if ( (*((_DWORD *)v125 + 502) & 0x200000) == 0 )
                {
                  v353[5] = -201326588;
                  KeBugCheckEx(__ROR4__(-201326588, 90), 0xAuLL, v162, 2uLL, 0LL);
                }
                goto LABEL_237;
              }
LABEL_268:
              v183 = v332;
              ++v168;
              v169 += 10;
              v324 = v168;
              v331 = v169;
            }
            while ( v168 < (unsigned int)v332 );
            v184 = v334;
            if ( v166 != v341 )
            {
              if ( (*((_DWORD *)v125 + 502) & 0x200000) == 0 )
              {
                v353[4] = -201326588;
                KeBugCheckEx(__ROR4__(-201326588, 90), 0xAuLL, v162, 3uLL, 0LL);
              }
              if ( !*((_DWORD *)v125 + 468) )
              {
                v165 = v125 - 0x5C5FC0A76E374B18LL;
                goto LABEL_239;
              }
              goto LABEL_104;
            }
            v185 = *((unsigned int *)v125 + 401);
            v186 = ((v334 + 6) & 0xFFFFFFF8) + 24 * v332 + v185 + 48;
            if ( v186 <= *((_DWORD *)v125 + 535) )
            {
              v187 = (__int64)v125;
              v331 = v125;
              *((_DWORD *)v125 + 401) = v186;
            }
            else
            {
              v331 = (_BYTE *)sub_1402AEFBC(v125, v186, *((unsigned int *)v125 + 479));
              v187 = (__int64)v331;
              if ( !v331 )
                goto LABEL_122;
              v188 = *((_DWORD *)v125 + 502);
              if ( (v188 & 4) == 0 )
              {
                v189 = *((unsigned int *)v125 + 401);
                v190 = *((_QWORD *)v125 + 197);
                v191 = (v188 & 0x20000000) != 0 ? *((_DWORD *)v125 + 479) : 0;
                if ( (unsigned int)v189 >= 8 )
                {
                  v192 = (unsigned __int64)(unsigned int)v189 >> 3;
                  do
                  {
                    *(_QWORD *)v125 = 0LL;
                    v189 = (unsigned int)(v189 - 8);
                    v125 += 8;
                    --v192;
                  }
                  while ( v192 );
                }
                if ( (_DWORD)v189 )
                {
                  do
                  {
                    *v125++ = 0;
                    v96 = (_DWORD)v189 == 1;
                    v189 = (unsigned int)(v189 - 1);
                  }
                  while ( !v96 );
                }
                v193 = *(_DWORD *)(v187 + 1916);
                *(_DWORD *)(v187 + 1916) = v191;
                if ( v191 == 3 )
                {
                  (*(void (__fastcall **)(__int64, __int64))(v187 + 856))(v190, v189);
                }
                else
                {
                  v194 = 0;
                  if ( (*(_DWORD *)(v187 + 2008) & 0x10000000) == 0 )
                    v194 = v191;
                  if ( v194 )
                    (*(void (__fastcall **)(__int64, _QWORD))(v187 + 536))(v190 - 8, *(_QWORD *)(v190 - 8));
                  else
                    (*(void (__fastcall **)(__int64, __int64))(v187 + 240))(v190, v189);
                }
                *(_DWORD *)(v187 + 1916) = v193;
              }
              *(_DWORD *)(v187 + 2008) &= ~4u;
              v183 = v332;
              v184 = v334;
            }
            v195 = v187 + v185;
            ++*(_DWORD *)(v187 + 1644);
            v196 = (_QWORD *)(v187 + v185);
            v370 = v187 + v185;
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
            *(_QWORD *)(v195 + 8) = v338;
            *(_DWORD *)v195 = 30;
            *(_DWORD *)(v195 + 16) = 0;
            v199 = *(_QWORD *)(v187 + 1656);
            for ( jj = v199; ; LODWORD(v199) = jj ^ v199 )
            {
              jj >>= 31;
              if ( !jj )
                break;
            }
            v201 = v335;
            v96 = v328 == 0;
            v202 = v333;
            v125 = (_BYTE *)v187;
            *(_DWORD *)(v195 + 20) = v199 & 0x7FFFFFFF;
            *(_QWORD *)(v195 + 24) = v202;
            *(_DWORD *)(v195 + 32) = v201[20];
            *(_DWORD *)(v195 + 36) = v336;
            *(_WORD *)(v195 + 40) = v382;
            LOWORD(v201) = *(_WORD *)(v195 + 42) & 0xFFFE;
            v371 = v187 + v185;
            i = (_BYTE *)v187;
            *(_WORD *)(v195 + 42) = (unsigned __int16)v201 | !v96;
            v203 = *(unsigned __int16 *)(v195 + 40);
            v204 = v195 + 48 + (((unsigned int)(v184 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
            v337 = (unsigned int *)(v195 + 48);
            v335 = (int *)v204;
            v205 = v204 + 24 * v203;
            v206 = 12LL;
            if ( !v184 )
              v206 = v344;
            v207 = 0;
            v357 = v204 + 24 * v203;
            v334 = (unsigned __int64)v338 + v206;
            if ( v183 )
            {
              v208 = v183;
              v209 = (_DWORD *)(v204 + 8);
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
              v202 = v333;
            }
            if ( v204 != v205 )
            {
              v211 = (char *)j;
              while ( 1 )
              {
                if ( (*((_DWORD *)v211 + 9) & 0x2000000) != 0
                  || (v212 = *(_DWORD *)v211, *(_DWORD *)v211 == 1414090313) && *((_DWORD *)v211 + 1) == 1195525195
                  || v212 == 1162297680
                  && ((v213 = *((_WORD *)v211 + 2), v213 == 30583) || v213 == 29303 || v213 == 30839)
                  || v212 == 1095914053 && *((_WORD *)v211 + 2) == 16724 )
                {
                  v207 = 1;
                }
                else
                {
                  v214 = 7;
                  v215 = *(char **)(v187 + 1928);
                  v364 = *(char **)(v187 + 1936);
                  v216 = v211 - v215;
                  v365 = *(char **)(v187 + 1944);
                  v366 = *(char **)(v187 + 1952);
                  v363 = v215;
                  while ( 1 )
                  {
                    v217 = v215[v216];
                    v218 = *v215++;
                    if ( v217 != v218 )
                      break;
                    if ( !--v214 )
                    {
LABEL_340:
                      v207 = 1;
                      goto LABEL_341;
                    }
                  }
                  v219 = v364;
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
                        goto LABEL_340;
                      while ( 1 )
                      {
                        v224 = *v221++;
                        v225 = *v219++;
                        if ( v224 != v225 )
                          goto LABEL_333;
                        if ( !--v220 )
                          goto LABEL_340;
                      }
                    }
                  }
LABEL_333:
                  v226 = v365;
                  v227 = 4;
                  while ( 1 )
                  {
                    v228 = v226[v211 - v365];
                    v229 = *v226++;
                    if ( v228 != v229 )
                      break;
                    if ( !--v227 )
                      goto LABEL_340;
                  }
                  v230 = v366;
                  v231 = 6;
                  while ( 1 )
                  {
                    v232 = v230[v211 - v366];
                    v233 = *v230++;
                    if ( v232 != v233 )
                      break;
                    if ( !--v231 )
                      goto LABEL_340;
                  }
                }
LABEL_341:
                v234 = *((_DWORD *)v211 + 9);
                if ( v234 < 0 )
                  v207 = 1;
                v325 = v207;
                if ( v207 && *(_DWORD *)v211 == 1414090313 && *((_DWORD *)v211 + 1) == 1195525195 )
                {
                  if ( (*(_DWORD *)(v187 + 2012) & 0x2000) != 0 )
                    v207 = 0;
                  v325 = v207;
                }
                if ( (*(_DWORD *)(v187 + 2012) & 0x4000) != 0
                  && (v234 & 0x20000000) != 0
                  && (v202 == *(_QWORD *)(v187 + 1440) || v202 == *(_QWORD *)(v187 + 1448)) )
                {
                  v207 = 1;
                  v325 = 1;
                }
                v235 = *((_DWORD *)v211 + 2);
                v236 = *((unsigned int *)v211 + 3);
                v237 = v341;
                if ( *((_DWORD *)v211 + 4) > v235 )
                  v235 = *((_DWORD *)v211 + 4);
                v238 = v338;
                v327 = v236;
                v239 = v236 + v235;
                v383 = v236 + v235;
                if ( v338 == v341 )
                {
                  v240 = 0;
                  v241 = 0;
                }
                else
                {
                  v240 = *(_DWORD *)v338;
                  v241 = *((_DWORD *)v338 + 1);
                }
                v342 = v241;
                v242 = v236;
                LODWORD(v332) = v240;
                if ( v338 == v341 || v240 <= (unsigned int)v236 || v241 > v239 || v207 )
                {
LABEL_387:
                  v207 = 0;
                }
                else
                {
                  v243 = v335;
                  v244 = &v358;
                  v336 = v240;
                  v245 = v240 - v236;
                  v246 = v333 + v236;
                  v242 = v240;
                  v335[1] = v240;
                  *v243 = v236;
                  v247 = v354;
                  v248 = v246 + v240 - (unsigned int)v236;
                  v344 = v246;
                  LODWORD(v330) = v240 - v236;
                  for ( kk = 0; kk < 5; ++kk )
                  {
                    if ( v246 < *v244 + *v247 && v248 > *v244 )
                    {
                      v202 = v333;
                      v239 = v383;
                      LODWORD(v236) = v327;
                      v237 = v341;
                      v238 = v338;
                      goto LABEL_387;
                    }
                    ++v244;
                    ++v247;
                  }
                  *(_DWORD *)(v187 + 1672) += v245;
                  v250 = (_QWORD *)v246;
                  v251 = *(_DWORD *)(v187 + 1652);
                  v252 = (const char *)v246;
                  v253 = *(_QWORD *)(v187 + 1656);
                  if ( v246 < v248 )
                  {
                    do
                    {
                      _mm_prefetch(v252, 0);
                      v252 += 64;
                    }
                    while ( (unsigned __int64)v252 < v248 );
                  }
                  v236 = v253;
                  v254 = v245 >> 7;
                  if ( v245 >> 7 )
                  {
                    do
                    {
                      v255 = 8LL;
                      do
                      {
                        v256 = v236 ^ *v250;
                        v257 = v250[1];
                        v250 += 2;
                        v236 = __ROL8__(__ROL8__(v256, v251) ^ v257, v251);
                        --v255;
                      }
                      while ( v255 );
                      v258 = __ROL8__(v253 ^ ((unsigned __int64)v250 - v344), 17) ^ v253 ^ ((unsigned __int64)v250 - v344);
                      v372 = (v258 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v251 = ((unsigned __int8)(v372 ^ v258) ^ (unsigned __int8)v251) & 0x3F;
                      if ( !v251 )
                        LOBYTE(v251) = 1;
                      --v254;
                    }
                    while ( v254 );
                    LOBYTE(v245) = v330;
                  }
                  v259 = v245 & 0x7F;
                  if ( v259 >= 8 )
                  {
                    v260 = (unsigned __int64)v259 >> 3;
                    do
                    {
                      v236 = __ROL8__(*v250++ ^ v236, v251);
                      v259 -= 8;
                      --v260;
                    }
                    while ( v260 );
                  }
                  for ( ; v259; --v259 )
                  {
                    v261 = *(unsigned __int8 *)v250;
                    v250 = (_QWORD *)((char *)v250 + 1);
                    v236 = __ROL8__(v261 ^ v236, v251);
                  }
                  v262 = v236 >> 31;
                  v207 = 0;
                  while ( v262 )
                  {
                    LODWORD(v236) = v262 ^ v236;
                    v262 >>= 31;
                  }
                  v187 = (__int64)v331;
                  v242 = v336;
                  v202 = v333;
                  v239 = v383;
                  v237 = v341;
                  v238 = v338;
                  v335[2] = v236 & 0x7FFFFFFF;
                  LODWORD(v236) = v327;
                }
                if ( (unsigned int)v332 >= (unsigned int)v236 && v342 <= v239 && v238 != v237 )
                {
                  v263 = (unsigned int *)v334;
                  v264 = *(_DWORD *)(v334 + 4);
                  v328 = v264;
                  if ( v264 <= v239 )
                  {
                    v265 = v337;
                    while ( v263 != (unsigned int *)v237 )
                    {
                      if ( v325 )
                      {
                        *(_BYTE *)v265 = 0x80;
                      }
                      else
                      {
                        v242 = *v263;
                        v266 = *((unsigned int *)v238 + 1);
                        v336 = v242;
                        if ( v242 < (unsigned int)v266 )
                        {
                          if ( (*(_DWORD *)(v187 + 2008) & 0x200000) == 0 )
                          {
                            v353[7] = -201326588;
                            KeBugCheckEx(__ROR4__(-201326588, 90), 0xAuLL, v202, 6uLL, 0LL);
                          }
                          if ( !*(_DWORD *)(v187 + 1872) )
                          {
                            *(_QWORD *)(v187 + 1888) = 0LL;
                            *(_QWORD *)(v187 + 1896) = 271LL;
                            *(_QWORD *)(v187 + 1880) = v187 - 0x5C5FC0A76E374B18LL;
                            *(_DWORD *)(v187 + 1872) = 1;
                            *(_QWORD *)(v187 + 1904) = v202;
                          }
                        }
                        v267 = &v358;
                        v268 = v333 + v266;
                        v269 = v242 - v266;
                        v344 = v268;
                        v270 = v242 - (unsigned int)v266;
                        v271 = v354;
                        v272 = v268 + v270;
                        LODWORD(v332) = v269;
                        do
                        {
                          if ( v268 < *v267 + *v271 && v272 > *v267 )
                            goto LABEL_424;
                          ++v207;
                          ++v267;
                          ++v271;
                        }
                        while ( v207 < 5 );
                        if ( v269 < 4 )
                        {
LABEL_424:
                          v207 = 0;
                          *(_BYTE *)v337 = 0x80;
                          goto LABEL_425;
                        }
                        *(_DWORD *)(v187 + 1672) += v269;
                        v273 = (_QWORD *)v268;
                        v274 = *(_DWORD *)(v187 + 1652);
                        v275 = (const char *)v268;
                        v276 = *(_QWORD *)(v187 + 1656);
                        if ( v268 < v272 )
                        {
                          do
                          {
                            _mm_prefetch(v275, 0);
                            v275 += 64;
                          }
                          while ( (unsigned __int64)v275 < v272 );
                        }
                        v277 = v276;
                        v278 = v269 >> 7;
                        if ( v269 >> 7 )
                        {
                          do
                          {
                            v279 = 8LL;
                            do
                            {
                              v280 = v277 ^ *v273;
                              v281 = v273[1];
                              v273 += 2;
                              v277 = __ROL8__(__ROL8__(v280, v274) ^ v281, v274);
                              --v279;
                            }
                            while ( v279 );
                            v282 = __ROL8__(v276 ^ ((unsigned __int64)v273 - v344), 17) ^ v276 ^ ((unsigned __int64)v273
                                                                                                - v344);
                            v375 = (v282 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                            v274 = ((unsigned __int8)(v375 ^ v282) ^ (unsigned __int8)v274) & 0x3F;
                            if ( !v274 )
                              LOBYTE(v274) = 1;
                            --v278;
                          }
                          while ( v278 );
                          LOBYTE(v269) = v332;
                        }
                        v283 = v269 & 0x7F;
                        if ( v283 >= 8 )
                        {
                          v284 = (unsigned __int64)v283 >> 3;
                          do
                          {
                            v277 = __ROL8__(*v273++ ^ v277, v274);
                            v283 -= 8;
                            --v284;
                          }
                          while ( v284 );
                        }
                        for ( ; v283; --v283 )
                        {
                          v285 = *(unsigned __int8 *)v273;
                          v273 = (_QWORD *)((char *)v273 + 1);
                          v277 = __ROL8__(v285 ^ v277, v274);
                        }
                        v286 = v277 >> 7;
                        v207 = 0;
                        while ( v286 )
                        {
                          LOBYTE(v277) = v286 ^ v277;
                          v286 >>= 7;
                        }
                        v242 = v336;
                        *(_BYTE *)v337 = v277 & 0x7F;
LABEL_425:
                        v264 = v328;
                        v239 = v383;
                        v263 = (unsigned int *)v334;
                        v265 = v337;
                        v237 = v341;
                        v238 = v338;
                      }
                      v238 = (ULONG_PTR *)((char *)v238 + 12);
                      v265 = (unsigned int *)((char *)v265 + 1);
                      v263 += 3;
                      v338 = v238;
                      v337 = v265;
                      v334 = (unsigned __int64)v263;
                      if ( v263 != (unsigned int *)v237 )
                      {
                        v264 = v263[1];
                        v328 = v264;
                      }
                      v187 = (__int64)v331;
                      if ( v264 > v239 )
                        break;
                      v202 = v333;
                    }
                  }
                }
                if ( v325 || v242 == v239 )
                {
LABEL_454:
                  v308 = v335;
                }
                else
                {
                  v287 = v335;
                  v288 = v354;
                  v289 = v333 + v242;
                  v290 = v239 - v242;
                  v291 = 0;
                  v335[4] = v239;
                  v292 = v289 + v239 - v242;
                  v293 = &v358;
                  v287[3] = v242;
                  LODWORD(v332) = v290;
                  do
                  {
                    if ( v289 < *v293 + *v288 && v292 > *v293 )
                    {
                      v207 = 0;
                      goto LABEL_454;
                    }
                    ++v291;
                    ++v293;
                    ++v288;
                  }
                  while ( v291 < 5 );
                  v294 = (__int64)v331;
                  v295 = (_QWORD *)v289;
                  v296 = (const char *)v289;
                  *((_DWORD *)v331 + 418) += v290;
                  v297 = *(_DWORD *)(v294 + 1652);
                  v298 = *(_QWORD *)(v294 + 1656);
                  if ( v289 < v292 )
                  {
                    do
                    {
                      _mm_prefetch(v296, 0);
                      v296 += 64;
                    }
                    while ( (unsigned __int64)v296 < v292 );
                  }
                  v299 = v298;
                  v300 = v290 >> 7;
                  if ( v290 >> 7 )
                  {
                    do
                    {
                      v301 = 8LL;
                      do
                      {
                        v302 = v295[1] ^ __ROL8__(*v295 ^ v299, v297);
                        v295 += 2;
                        v299 = __ROL8__(v302, v297);
                        --v301;
                      }
                      while ( v301 );
                      v303 = __ROL8__(v298 ^ ((unsigned __int64)v295 - v289), 17) ^ v298 ^ ((unsigned __int64)v295 - v289);
                      v374 = (v303 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v297 = ((unsigned __int8)(v374 ^ v303) ^ (unsigned __int8)v297) & 0x3F;
                      if ( !v297 )
                        LOBYTE(v297) = 1;
                      --v300;
                    }
                    while ( v300 );
                    LOBYTE(v290) = v332;
                  }
                  v304 = v290 & 0x7F;
                  if ( v304 >= 8 )
                  {
                    v305 = (unsigned __int64)v304 >> 3;
                    do
                    {
                      v299 = __ROL8__(*v295++ ^ v299, v297);
                      v304 -= 8;
                      --v305;
                    }
                    while ( v305 );
                  }
                  for ( ; v304; --v304 )
                  {
                    v306 = *(unsigned __int8 *)v295;
                    v295 = (_QWORD *)((char *)v295 + 1);
                    v299 = __ROL8__(v306 ^ v299, v297);
                  }
                  v307 = v299 >> 31;
                  v207 = 0;
                  while ( v307 )
                  {
                    LODWORD(v299) = v307 ^ v299;
                    v307 >>= 31;
                  }
                  v308 = v335;
                  v335[5] = v299 & 0x7FFFFFFF;
                }
                v309 = v338;
                if ( v338 != v341 && *(_DWORD *)v338 >= v327 && *((_DWORD *)v338 + 1) <= v383 )
                {
                  v310 = v334;
                  if ( (ULONG_PTR *)v334 != v341 )
                  {
                    v311 = v337;
                    *(_BYTE *)v337 = 0x80;
                    v337 = (unsigned int *)((char *)v311 + 1);
                    v334 = v310 + 12;
                  }
                  v338 = (ULONG_PTR *)((char *)v309 + 12);
                }
                v211 = (char *)(j + 40);
                v335 = v308 + 6;
                j += 40LL;
                if ( v308 + 6 == (int *)v357 )
                  break;
                v187 = (__int64)v331;
                v202 = v333;
              }
              v125 = i;
            }
          }
          v340 = (__int64)v125;
LABEL_465:
          v29 = 0;
          goto LABEL_466;
        }
LABEL_122:
        v29 = -1073741670;
        goto LABEL_466;
      }
      *(_DWORD *)(v97 + 32) |= 1u;
    }
    if ( v99 )
      goto LABEL_154;
    goto LABEL_155;
  }
  v29 = -1073741701;
LABEL_467:
  *a1 = v340;
  if ( (int)(v29 + 0x80000000) >= 0 && v29 != -1073741554 )
    return (unsigned int)v29;
  v312 = v27 & 0xFFFFFFEF;
  if ( (v312 & 0x80000004) != 0x80000004 )
  {
    v313 = v312 | 0x80000000;
    v314 = (*(__int64 (__fastcall **)(__int64))(v340 + 488))(v350);
    v315 = *(unsigned int *)(v314 + 148);
    if ( (unsigned int)v315 >= 0x14 )
    {
      v316 = *(unsigned int *)(v314 + 144);
      v317 = v316 + v315;
      v318 = v350;
      v319 = v350 + v317;
      for ( mm = v316 + v350; mm != v319; mm += 20LL )
      {
        if ( !*(_DWORD *)(mm + 12) )
          break;
        v321 = *(unsigned int *)(mm + 16);
        if ( !(_DWORD)v321 )
          break;
        v322 = *(_QWORD *)(v321 + v318);
        if ( v322 )
        {
          result = sub_1402AC5F8(&v340, v322, v313);
          *a1 = v340;
          if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741554 )
            return result;
          v318 = v350;
        }
      }
    }
  }
  return 0LL;
}
