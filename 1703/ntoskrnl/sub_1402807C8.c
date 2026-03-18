/*
 * XREFs of sub_1402807C8 @ 0x1402807C8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x14026F010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402807C8 @ 0x1402807C8 (sub_1402807C8.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     sub_140175FBC @ 0x140175FBC (sub_140175FBC.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     sub_1402807C8 @ 0x1402807C8 (sub_1402807C8.c)
 *     sub_140282ED4 @ 0x140282ED4 (sub_140282ED4.c)
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 *     sub_1407DCDE8 @ 0x1407DCDE8 (sub_1407DCDE8.c)
 */

__int64 __fastcall sub_1402807C8(ULONG_PTR *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  _BYTE *v4; // r8
  unsigned __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx
  int *v8; // rax
  _BYTE *v9; // rbx
  unsigned int v10; // r10d
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // edi
  unsigned int v15; // r9d
  _BYTE *v16; // r11
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r10d
  int *v24; // rax
  int v25; // ecx
  unsigned int v26; // esi
  unsigned __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // edx
  int v30; // edi
  unsigned int v31; // r9d
  _BYTE *v32; // r11
  unsigned int **v33; // r8
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned __int64 v41; // rdi
  int v42; // esi
  unsigned int v43; // edx
  __int64 (*v44)(void); // rax
  __int64 v45; // r8
  int v46; // ecx
  int v47; // edi
  unsigned int v48; // eax
  _BYTE *v49; // rsi
  int v50; // edx
  unsigned int v51; // eax
  __int64 v52; // r9
  int v53; // r8d
  unsigned __int64 v54; // rcx
  int v55; // ebx
  int v56; // ecx
  _BYTE *v57; // rbx
  _QWORD *v58; // rax
  int v59; // ecx
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  bool v62; // zf
  unsigned int v63; // edi
  _QWORD *v64; // r9
  const char *v65; // rax
  int v66; // r10d
  __int64 v67; // rbx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // r8
  unsigned int v70; // r11d
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r8
  signed __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned __int64 v76; // r11
  __int64 v77; // rax
  unsigned __int64 k; // rax
  _DWORD *v79; // rax
  _QWORD *v80; // rbx
  int v81; // edi
  __int64 v82; // rcx
  unsigned int *v83; // rcx
  unsigned __int64 v84; // rdx
  int v85; // ecx
  _QWORD *v86; // rax
  __int64 v87; // rdx
  int v88; // r8d
  _QWORD *v89; // rax
  unsigned int v90; // edx
  unsigned __int64 v91; // rcx
  ULONG_PTR *v92; // rdi
  char *v93; // r11
  int v94; // ebx
  int v95; // ecx
  __int16 v96; // ax
  char *v97; // r8
  int v98; // r10d
  signed __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 *v102; // r9
  unsigned int v103; // r8d
  __int64 *v104; // r10
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  char *v109; // r8
  int v110; // r10d
  __int64 v111; // rdx
  __int64 v112; // rax
  char *v113; // r8
  int v114; // r10d
  __int64 v115; // rdx
  __int64 v116; // rax
  unsigned int v117; // ecx
  ULONG_PTR v118; // r9
  unsigned int v119; // edx
  unsigned int v120; // eax
  unsigned int v121; // ecx
  unsigned int v122; // ecx
  __int64 v123; // rax
  __int64 v124; // r8
  unsigned __int64 v125; // rdi
  __int64 v126; // r10
  __int64 v127; // rax
  unsigned __int64 v128; // rbx
  int v129; // eax
  unsigned __int8 v130; // al
  int *v131; // rcx
  _QWORD *v132; // r9
  int v133; // ebx
  const char *v134; // rax
  unsigned __int64 v135; // r8
  unsigned __int64 v136; // rcx
  unsigned int v137; // r11d
  __int64 v138; // rsi
  __int64 v139; // rax
  __int64 v140; // r8
  unsigned __int64 v141; // rcx
  unsigned int v142; // r10d
  unsigned __int64 v143; // rax
  __int64 v144; // rax
  unsigned __int64 m; // rax
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int64 (__fastcall *v148)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v149; // rdx
  int v150; // ebx
  __int64 v151; // r8
  unsigned __int64 v152; // r9
  unsigned int v153; // eax
  _BYTE *v154; // rdi
  int v155; // edx
  unsigned int v156; // eax
  __int64 v157; // r9
  int v158; // r8d
  unsigned __int64 v159; // rcx
  int v160; // ebx
  int v161; // ecx
  unsigned int *v162; // rcx
  _BYTE *v163; // rbx
  ULONG_PTR *v164; // rax
  unsigned int v165; // r11d
  int v166; // ecx
  _QWORD *v167; // rsi
  _QWORD *v168; // rax
  __int64 v169; // rdx
  _QWORD *v170; // r9
  const char *v171; // rax
  int v172; // r10d
  unsigned __int64 v173; // r8
  unsigned __int64 v174; // rcx
  unsigned int v175; // r11d
  __int64 v176; // rdi
  __int64 v177; // rax
  __int64 v178; // r8
  unsigned __int64 v179; // rcx
  unsigned int v180; // r11d
  unsigned int v181; // edx
  unsigned __int64 v182; // rax
  __int64 v183; // rax
  unsigned __int64 n; // rax
  unsigned int *v185; // rsi
  ULONG_PTR v186; // rdx
  __int64 v187; // rsi
  unsigned int v188; // eax
  _BYTE *v189; // rbx
  int v190; // edx
  unsigned int v191; // eax
  __int64 v192; // r9
  int v193; // r8d
  unsigned __int64 v194; // rcx
  int v195; // edi
  int v196; // ecx
  int v197; // ecx
  unsigned int *v198; // rax
  __int64 v199; // r8
  unsigned __int64 v200; // r11
  unsigned int v201; // edx
  const char *v202; // rax
  int v203; // r10d
  __int64 v204; // rdi
  unsigned __int64 v205; // rcx
  unsigned __int64 v206; // r8
  unsigned int v207; // r11d
  __int64 v208; // rax
  __int64 v209; // r8
  __int64 v210; // rcx
  unsigned __int64 v211; // rax
  __int64 v212; // rax
  unsigned __int64 ii; // rax
  _DWORD *v214; // r8
  _DWORD *v215; // rcx
  ULONG_PTR v216; // rdi
  int v217; // eax
  __int64 v218; // rsi
  __int64 v219; // rax
  int v220; // ecx
  _QWORD *v221; // rax
  __int64 *v222; // rax
  __int64 v223; // rax
  ULONG_PTR v224; // rsi
  __int64 v225; // rax
  unsigned __int16 v226; // r9
  unsigned int *v227; // rdi
  ULONG_PTR *v228; // r11
  unsigned int v229; // edx
  ULONG_PTR v230; // r10
  int *v231; // rsi
  int v232; // ecx
  unsigned int v233; // r9d
  unsigned int v234; // r8d
  unsigned int v235; // eax
  __int64 v236; // rax
  int v237; // ecx
  unsigned int v238; // edx
  bool v239; // cc
  unsigned int *v240; // r9
  ULONG_PTR v241; // r10
  unsigned int *v242; // rax
  unsigned int v243; // eax
  unsigned int v244; // r9d
  int v245; // r10d
  ULONG_PTR v246; // rsi
  __int64 v247; // rsi
  unsigned int v248; // eax
  ULONG_PTR v249; // rdi
  int v250; // edx
  unsigned int v251; // eax
  __int64 v252; // r9
  int v253; // r8d
  unsigned __int64 v254; // rcx
  int v255; // ebx
  int v256; // ecx
  ULONG_PTR v257; // rcx
  _QWORD *v258; // rax
  __int64 v259; // rdx
  int v260; // r8d
  unsigned __int64 v261; // rdx
  unsigned __int64 jj; // rax
  unsigned int *v263; // rax
  ULONG_PTR v264; // rsi
  __int64 v265; // rax
  _DWORD *v266; // r11
  _DWORD *v267; // r8
  unsigned int *v268; // rax
  int v269; // r10d
  __int64 v270; // rdx
  _DWORD *v271; // rax
  __int64 v272; // rcx
  ULONG_PTR v273; // rdi
  ULONG_PTR v274; // rsi
  char *v275; // r8
  int v276; // ecx
  __int16 v277; // ax
  int v278; // r9d
  char *v279; // rdx
  __int64 v280; // r8
  char v281; // cl
  char v282; // al
  char *v283; // r8
  unsigned int v284; // edx
  ULONG_PTR *v285; // r9
  __int64 v286; // rcx
  __int64 v287; // rax
  char v288; // cl
  char v289; // al
  char *v290; // rdx
  int v291; // r9d
  char v292; // cl
  char v293; // al
  char *v294; // rdx
  int v295; // r9d
  char v296; // cl
  char v297; // al
  unsigned int v298; // ecx
  __int64 v299; // r9
  unsigned int v300; // r8d
  unsigned int v301; // eax
  unsigned int v302; // ecx
  unsigned int *v303; // rdx
  unsigned int *v304; // rcx
  ULONG_PTR *v305; // rdx
  unsigned __int64 v306; // r11
  unsigned int v307; // r9d
  unsigned int kk; // r8d
  _QWORD *v309; // r10
  const char *v310; // rax
  int v311; // esi
  unsigned __int64 v312; // r8
  __int64 v313; // rdi
  __int64 v314; // rax
  __int64 v315; // r8
  unsigned __int64 v316; // rcx
  unsigned int v317; // r9d
  unsigned __int64 v318; // rax
  __int64 v319; // rax
  unsigned __int64 mm; // rax
  unsigned int *v321; // r9
  unsigned int *v322; // rdx
  unsigned int v323; // eax
  _BYTE *v324; // rcx
  unsigned int v325; // edx
  __int64 v326; // rcx
  unsigned __int64 v327; // r11
  unsigned int v328; // r9d
  ULONG_PTR *v329; // rdx
  unsigned int *v330; // rcx
  unsigned int nn; // r8d
  _QWORD *v332; // r10
  const char *v333; // rax
  int v334; // esi
  unsigned __int64 v335; // r8
  __int64 v336; // rdi
  __int64 v337; // rax
  __int64 v338; // r8
  unsigned __int64 v339; // rcx
  unsigned int v340; // r9d
  unsigned __int64 v341; // rax
  __int64 v342; // rax
  unsigned __int64 i1; // rax
  _DWORD *v344; // rcx
  ULONG_PTR *v345; // rdx
  unsigned __int64 v346; // r11
  unsigned int v347; // r9d
  ULONG_PTR v348; // r10
  unsigned int v349; // r8d
  unsigned int *v350; // rcx
  _QWORD *v351; // r10
  const char *v352; // rax
  int v353; // esi
  unsigned __int64 v354; // r8
  __int64 v355; // rdi
  __int64 v356; // rax
  __int64 v357; // r8
  unsigned __int64 v358; // rcx
  unsigned int v359; // r9d
  unsigned __int64 v360; // rax
  __int64 v361; // rax
  unsigned __int64 v362; // rax
  _DWORD *v363; // r11
  unsigned int *v364; // r9
  unsigned int *v365; // r8
  _BYTE *v366; // rax
  __int64 v367; // rax
  __int64 v368; // rcx
  __int64 v369; // rax
  __int64 v370; // rdi
  __int64 v371; // rcx
  __int64 v372; // rdi
  __int64 i2; // rbx
  __int64 v374; // rax
  __int64 v375; // rdx
  unsigned int v376; // [rsp+38h] [rbp-D0h]
  int v377; // [rsp+38h] [rbp-D0h]
  int v378; // [rsp+38h] [rbp-D0h]
  unsigned int v379; // [rsp+38h] [rbp-D0h]
  unsigned int v380; // [rsp+38h] [rbp-D0h]
  unsigned int v381; // [rsp+38h] [rbp-D0h]
  unsigned int v382; // [rsp+3Ch] [rbp-CCh]
  unsigned int v383; // [rsp+3Ch] [rbp-CCh]
  unsigned int v384; // [rsp+3Ch] [rbp-CCh]
  char v385; // [rsp+40h] [rbp-C8h]
  unsigned int v386; // [rsp+40h] [rbp-C8h]
  unsigned int v387; // [rsp+40h] [rbp-C8h]
  unsigned int v388; // [rsp+40h] [rbp-C8h]
  unsigned int v389; // [rsp+44h] [rbp-C4h]
  unsigned int v390; // [rsp+44h] [rbp-C4h]
  unsigned int v391; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v392; // [rsp+4Ch] [rbp-BCh]
  __int64 v393; // [rsp+50h] [rbp-B8h]
  __int64 v394; // [rsp+58h] [rbp-B0h]
  ULONG_PTR *v395; // [rsp+60h] [rbp-A8h]
  unsigned __int64 i; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v397; // [rsp+70h] [rbp-98h]
  _BYTE *v398; // [rsp+78h] [rbp-90h]
  unsigned int *v399; // [rsp+80h] [rbp-88h]
  ULONG_PTR v400; // [rsp+88h] [rbp-80h]
  unsigned int *v401; // [rsp+90h] [rbp-78h]
  _DWORD *v402; // [rsp+98h] [rbp-70h]
  unsigned __int64 j; // [rsp+A0h] [rbp-68h]
  unsigned int *v404; // [rsp+A8h] [rbp-60h]
  ULONG_PTR v405; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v406; // [rsp+B8h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v408; // [rsp+C8h] [rbp-40h]
  __int64 v409; // [rsp+D0h] [rbp-38h]
  int v410; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v411; // [rsp+E0h] [rbp-28h]
  int v412; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v413; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v414[8]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v415; // [rsp+118h] [rbp+10h]
  _DWORD v416[4]; // [rsp+120h] [rbp+18h] BYREF
  unsigned int **v417; // [rsp+130h] [rbp+28h]
  _BYTE *v418; // [rsp+138h] [rbp+30h]
  unsigned int *v419; // [rsp+140h] [rbp+38h]
  ULONG_PTR v420; // [rsp+148h] [rbp+40h] BYREF
  __int64 v421; // [rsp+150h] [rbp+48h]
  ULONG_PTR v422; // [rsp+158h] [rbp+50h]
  __int64 v423; // [rsp+160h] [rbp+58h]
  char *v424; // [rsp+168h] [rbp+60h]
  char *v425; // [rsp+170h] [rbp+68h]
  char *v426; // [rsp+178h] [rbp+70h]
  char *v427; // [rsp+180h] [rbp+78h]
  char *v428; // [rsp+188h] [rbp+80h]
  __int64 *v429; // [rsp+190h] [rbp+88h]
  char *v430; // [rsp+198h] [rbp+90h]
  char *v431; // [rsp+1A0h] [rbp+98h]
  __int64 v432; // [rsp+1A8h] [rbp+A0h]
  __int64 v433; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v434; // [rsp+1B8h] [rbp+B0h]
  ULONG_PTR v435; // [rsp+1C0h] [rbp+B8h]
  __int64 v436; // [rsp+1C8h] [rbp+C0h]
  __int64 v437; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v438; // [rsp+1D8h] [rbp+D0h]
  ULONG_PTR v439; // [rsp+1E0h] [rbp+D8h]
  __int64 v440; // [rsp+1E8h] [rbp+E0h]
  _DWORD *v441; // [rsp+1F0h] [rbp+E8h]
  __int64 v442; // [rsp+1F8h] [rbp+F0h]
  __int64 v443; // [rsp+200h] [rbp+F8h]
  unsigned int v447; // [rsp+248h] [rbp+140h]
  unsigned int v448; // [rsp+250h] [rbp+148h]
  unsigned int v449; // [rsp+250h] [rbp+148h]
  int v450; // [rsp+250h] [rbp+148h]
  unsigned __int8 CurrentIrql; // [rsp+250h] [rbp+148h]
  unsigned int v452; // [rsp+250h] [rbp+148h]
  unsigned int v453; // [rsp+250h] [rbp+148h]
  unsigned __int16 v454; // [rsp+250h] [rbp+148h]
  int v455; // [rsp+250h] [rbp+148h]
  unsigned __int64 v456; // [rsp+250h] [rbp+148h]
  unsigned int v457; // [rsp+250h] [rbp+148h]

  v405 = *a1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *, _DWORD *))(v405 + 512))(a2, &v413, v414);
  v4 = 0LL;
  j = v3;
  v5 = v3;
  if ( !v3 )
    return 3221225595LL;
  v7 = 4;
  v409 = 0LL;
  v8 = &v410;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v9 = (_BYTE *)v405;
  v10 = 0;
  v397 = v405;
  v448 = *(_DWORD *)(v405 + 1548);
  if ( v448 )
  {
    v11 = *(_QWORD *)(v405 + 2024);
    v12 = v410;
    v13 = HIDWORD(v409);
    v14 = v409;
    for ( i = v11; ; v11 = i )
    {
      v15 = 0;
      v16 = v9;
      if ( v11 )
        v16 = (_BYTE *)v11;
      v4 = &v16[*((unsigned int *)v16 + 386)];
      if ( v14 && v13 <= v10 )
      {
        v15 = v13;
        v4 = &v16[v12];
      }
      if ( v15 != v10 )
        break;
LABEL_33:
      v14 = 1;
      LODWORD(v409) = 1;
      v21 = *(_DWORD *)v4;
      v12 = (_DWORD)v4 - (_DWORD)v16;
      v410 = (_DWORD)v4 - (_DWORD)v16;
      v13 = v15;
      HIDWORD(v409) = v15;
      if ( (v21 == 1 || v21 == 12) && *((_QWORD *)v4 + 1) == v5 && *((_DWORD *)v4 + 4) == v414[0] )
        goto LABEL_41;
      if ( (unsigned int)(v21 - 33) <= 1 && *((_QWORD *)v4 + 4) == v413 )
        goto LABEL_41;
      ++v10;
      v4 = 0LL;
      if ( v10 >= v448 )
        goto LABEL_41;
    }
    v17 = v10 - v15;
    v15 = v10;
    while ( 1 )
    {
      v18 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 == 1 )
      {
LABEL_30:
        v19 = 4 * (*((_DWORD *)v4 + 4) / 0xCu) + 48;
        goto LABEL_31;
      }
      if ( v18 == 7 )
      {
        v19 = (unsigned int)(24 * (*((_DWORD *)v4 + 6) + 2));
        goto LABEL_31;
      }
      if ( v18 == 8 )
        break;
      if ( v18 != 10 )
      {
        if ( v18 == 12 )
          goto LABEL_30;
        if ( v18 != 28 )
        {
          if ( v18 == 30 )
          {
            v19 = (((*((_DWORD *)v4 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v4 + 20) + 2);
          }
          else if ( (unsigned int)(v18 - 33) > 1 )
          {
            v19 = 48LL;
          }
          else
          {
            v19 = 20
                * (unsigned int)(((*((_DWORD *)v4 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v4 + 10) + 4095) >> 12)
                + 48;
          }
          goto LABEL_31;
        }
        v20 = *((unsigned __int16 *)v4 + 20);
        goto LABEL_28;
      }
      v19 = (unsigned int)(16 * (*((_DWORD *)v4 + 7) + 3));
LABEL_31:
      v4 += v19;
      if ( !--v17 )
      {
        v9 = (_BYTE *)v397;
        v5 = j;
        goto LABEL_33;
      }
    }
    v20 = *((unsigned __int16 *)v4 + 16);
LABEL_28:
    v19 = (v20 + 55) & 0xFFFFFFF8;
    goto LABEL_31;
  }
LABEL_41:
  if ( v4 )
    return 3221225742LL;
  v22 = (*((__int64 (__fastcall **)(__int64, ULONG_PTR *, unsigned int *))v9 + 64))(a2, &BugCheckParameter2, &v391);
  v23 = 0;
  v399 = (unsigned int *)v22;
  if ( !v22 )
    goto LABEL_241;
  v411 = 0LL;
  v24 = &v412;
  v25 = 4;
  do
  {
    *(_BYTE *)v24 = 0;
    v24 = (int *)((char *)v24 + 1);
    --v25;
  }
  while ( v25 );
  v26 = *((_DWORD *)v9 + 387);
  v449 = v26;
  if ( v26 )
  {
    v27 = *((_QWORD *)v9 + 253);
    v28 = v412;
    v29 = HIDWORD(v411);
    v30 = v411;
    for ( j = v27; ; v27 = j )
    {
      v31 = 0;
      v32 = v9;
      if ( v27 )
        v32 = (_BYTE *)v27;
      v33 = (unsigned int **)&v32[*((unsigned int *)v32 + 386)];
      if ( v30 && v29 <= v23 )
      {
        v31 = v29;
        v33 = (unsigned int **)&v32[v28];
      }
      if ( v31 != v23 )
        break;
LABEL_74:
      v30 = 1;
      LODWORD(v411) = 1;
      v38 = *(_DWORD *)v33;
      v28 = (_DWORD)v33 - (_DWORD)v32;
      v412 = (_DWORD)v33 - (_DWORD)v32;
      v29 = v31;
      HIDWORD(v411) = v31;
      if ( (v38 == 1 || v38 == 12) && v33[1] == v399 && *((_DWORD *)v33 + 4) == v391
        || (unsigned int)(v38 - 33) <= 1 && v33[4] == (unsigned int *)BugCheckParameter2 )
      {
        goto LABEL_83;
      }
      if ( ++v23 >= v26 )
        goto LABEL_82;
    }
    v34 = v23 - v31;
    v31 = v23;
    while ( 1 )
    {
      v35 = *(_DWORD *)v33;
      if ( *(_DWORD *)v33 == 1 )
      {
LABEL_71:
        v36 = 4 * (*((_DWORD *)v33 + 4) / 0xCu) + 48;
        goto LABEL_72;
      }
      if ( v35 == 7 )
      {
        v36 = (unsigned int)(24 * (*((_DWORD *)v33 + 6) + 2));
        goto LABEL_72;
      }
      if ( v35 == 8 )
        break;
      if ( v35 != 10 )
      {
        if ( v35 == 12 )
          goto LABEL_71;
        if ( v35 != 28 )
        {
          if ( v35 == 30 )
          {
            v36 = (((*((_DWORD *)v33 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v33 + 20) + 2);
          }
          else if ( (unsigned int)(v35 - 33) > 1 )
          {
            v36 = 48LL;
          }
          else
          {
            v36 = 20
                * (unsigned int)((((_DWORD)v33[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v33 + 10) + 4095) >> 12)
                + 48;
          }
          goto LABEL_72;
        }
        v37 = *((unsigned __int16 *)v33 + 20);
        goto LABEL_69;
      }
      v36 = (unsigned int)(16 * (*((_DWORD *)v33 + 7) + 3));
LABEL_72:
      v33 = (unsigned int **)((char *)v33 + v36);
      if ( !--v34 )
      {
        v9 = (_BYTE *)v397;
        v26 = v449;
        goto LABEL_74;
      }
    }
    v37 = *((unsigned __int16 *)v33 + 16);
LABEL_69:
    v36 = (v37 + 55) & 0xFFFFFFF8;
    goto LABEL_72;
  }
LABEL_82:
  v33 = 0LL;
LABEL_83:
  v417 = v33;
  if ( v33 )
  {
    v39 = -1073741554;
    goto LABEL_242;
  }
  v40 = (*((__int64 (__fastcall **)(__int64))v9 + 84))(a2);
  v41 = v391;
  v42 = v40;
  v43 = a3;
  LODWORD(v393) = v40;
  v389 = v391;
  if ( (a3 & 2) != 0 && !v40 )
  {
    v39 = 0;
    goto LABEL_243;
  }
  if ( (*((_DWORD *)v9 + 466) & 0x40000000) != 0 )
  {
    v39 = sub_1407DCDE8(&v405, BugCheckParameter2, a3);
    goto LABEL_242;
  }
  v44 = (__int64 (*)(void))*((_QWORD *)v9 + 63);
  v397 = BugCheckParameter2;
  v385 = a3;
  v406 = v44();
  if ( !v406 )
    goto LABEL_241;
  v45 = *((unsigned int *)v9 + 443);
  j = v41 / 0xC;
  v450 = *((_DWORD *)v9 + 377);
  v46 = 4 * (v41 / 0xC) + 48;
  v47 = v42 != 0 ? 12 : 1;
  v48 = v46 + v450;
  if ( (unsigned int)(v46 + v450) <= *((_DWORD *)v9 + 499) )
  {
    v49 = v9;
    v401 = (unsigned int *)v9;
    *((_DWORD *)v9 + 377) = v48;
  }
  else
  {
    v401 = (unsigned int *)sub_140282ED4(v9, v48, v45);
    v49 = v401;
    if ( !v401 )
      goto LABEL_108;
    v50 = *((_DWORD *)v9 + 466);
    if ( (v50 & 4) == 0 )
    {
      v51 = *((_DWORD *)v9 + 377);
      v52 = *((_QWORD *)v9 + 185);
      v53 = (v50 & 0x20000000) != 0 ? *((_DWORD *)v9 + 443) : 0;
      if ( v51 >= 8 )
      {
        v54 = (unsigned __int64)v51 >> 3;
        do
        {
          *(_QWORD *)v9 = 0LL;
          v51 -= 8;
          v9 += 8;
          --v54;
        }
        while ( v54 );
      }
      for ( ; v51; --v51 )
        *v9++ = 0;
      v55 = *((_DWORD *)v49 + 443);
      *((_DWORD *)v49 + 443) = v53;
      if ( v53 == 3 )
      {
        (*((void (__fastcall **)(__int64, __int64))v49 + 108))(v52, 1LL);
      }
      else
      {
        v56 = 0;
        if ( (*((_DWORD *)v49 + 466) & 0x10000000) == 0 )
          v56 = v53;
        if ( v56 )
          (*((void (__fastcall **)(__int64, _QWORD))v49 + 69))(v52 - 8, *(_QWORD *)(v52 - 8));
        else
          (*((void (__fastcall **)(__int64, __int64))v49 + 32))(v52, 1LL);
      }
      *((_DWORD *)v49 + 443) = v55;
    }
    *((_DWORD *)v49 + 466) &= ~4u;
  }
  ++*((_DWORD *)v49 + 387);
  v57 = &v49[v450];
  v402 = v57;
  v58 = v57;
  v59 = 48;
  v434 = v57;
  v60 = 6LL;
  do
  {
    *v58 = 0LL;
    v59 -= 8;
    ++v58;
    --v60;
  }
  while ( v60 );
  for ( ; v59; --v59 )
  {
    *(_BYTE *)v58 = 0;
    v58 = (_QWORD *)((char *)v58 + 1);
  }
  v61 = (unsigned __int64)v399;
  v62 = v47 == 32;
  *(_DWORD *)v57 = v47;
  v63 = v389;
  *((_QWORD *)v57 + 1) = v61;
  if ( v62 && v389 )
  {
    sub_140175FBC((__int64)v49, v61, v389, (__int64)(v57 + 24));
    v61 = (unsigned __int64)v399;
  }
  *((_DWORD *)v57 + 4) = v389;
  v64 = (_QWORD *)v61;
  *((_DWORD *)v49 + 394) += v389;
  v65 = (const char *)v61;
  v66 = *((_DWORD *)v49 + 389);
  v67 = *((_QWORD *)v49 + 195);
  v68 = v61 + v389;
  if ( v61 < v68 )
  {
    do
    {
      _mm_prefetch(v65, 0);
      v65 += 64;
    }
    while ( (unsigned __int64)v65 < v68 );
  }
  v69 = *((_QWORD *)v49 + 195);
  v70 = v389 >> 7;
  if ( v389 >> 7 )
  {
    do
    {
      v71 = 8LL;
      do
      {
        v72 = v69 ^ *v64;
        v73 = v64[1];
        v64 += 2;
        v69 = __ROL8__(__ROL8__(v72, v66) ^ v73, v66);
        --v71;
      }
      while ( v71 );
      v74 = __ROL8__(v67 ^ ((char *)v64 - (char *)v399), 17) ^ v67 ^ ((char *)v64 - (char *)v399);
      v440 = ((unsigned __int64)v74 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v66 = ((unsigned __int8)(v440 ^ v74) ^ (unsigned __int8)v66) & 0x3F;
      if ( !v66 )
        LOBYTE(v66) = 1;
      --v70;
    }
    while ( v70 );
    v49 = v401;
    v63 = v389;
  }
  v75 = v63 & 0x7F;
  if ( (unsigned int)v75 >= 8 )
  {
    v76 = (unsigned __int64)(v63 & 0x7F) >> 3;
    do
    {
      v69 = __ROL8__(*v64++ ^ v69, v66);
      v75 = (unsigned int)(v75 - 8);
      --v76;
    }
    while ( v76 );
  }
  if ( (_DWORD)v75 )
  {
    do
    {
      v77 = *(unsigned __int8 *)v64;
      v64 = (_QWORD *)((char *)v64 + 1);
      v69 = __ROL8__(v77 ^ v69, v66);
      v62 = (_DWORD)v75 == 1;
      v75 = (unsigned int)(v75 - 1);
    }
    while ( !v62 );
  }
  for ( k = v69; ; v69 = (unsigned int)k ^ (unsigned int)v69 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  v79 = v402;
  LODWORD(v69) = v69 & 0x7FFFFFFF;
  v441 = v402;
  v402[5] = v69;
  v80 = v79 + 6;
  *((_DWORD *)v49 + 394) += v63;
  v81 = -1073741275;
  v82 = *((_QWORD *)v49 + 152);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*((void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD *))v49 + 42))(v82, v75, v69, v64);
  v83 = (unsigned int *)**((_QWORD **)v49 + 173);
  v84 = (unsigned __int64)(v83 + 4);
  while ( *(_QWORD *)(v84 + 8) != v397 )
  {
    v84 += 24LL;
    if ( v84 >= (unsigned __int64)&v83[6 * *v83 + 4] )
      goto LABEL_139;
  }
  v81 = 0;
  *(_OWORD *)v80 = *(_OWORD *)v84;
  v80[2] = *(_QWORD *)(v84 + 16);
LABEL_139:
  (*((void (__fastcall **)(_QWORD))v49 + 50))(*((_QWORD *)v49 + 152));
  __writecr8(CurrentIrql);
  if ( v81 < 0 )
  {
    v85 = 24;
    v86 = v80;
    v87 = 3LL;
    do
    {
      *v86 = 0LL;
      v85 -= 8;
      ++v86;
      --v87;
    }
    while ( v87 );
    for ( ; v85; --v85 )
    {
      *(_BYTE *)v86 = 0;
      v86 = (_QWORD *)((char *)v86 + 1);
    }
    *v80 = 1LL;
  }
  v88 = j;
  v89 = v402 + 12;
  v90 = 4 * j;
  v394 = (__int64)(v402 + 12);
  if ( (unsigned int)(4 * j) >= 8 )
  {
    v91 = (unsigned __int64)v90 >> 3;
    do
    {
      *v89 = -1LL;
      v90 -= 8;
      ++v89;
      --v91;
    }
    while ( v91 );
  }
  for ( ; v90; --v90 )
  {
    *(_BYTE *)v89 = -1;
    v89 = (_QWORD *)((char *)v89 + 1);
  }
  v92 = (ULONG_PTR *)v399;
  v395 = (ULONG_PTR *)v399;
  v382 = -1;
  v452 = 0;
  i = 0LL;
  v404 = &v399[3 * v88];
  if ( (*((_DWORD *)v49 + 467) & 0x40) == 0 )
    v385 = a3 & 0xF7;
  j = (*((__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))v49 + 66))(v406, v397, *v399);
  v93 = (char *)j;
  if ( !j )
  {
LABEL_241:
    v39 = -1073741701;
    goto LABEL_242;
  }
LABEL_153:
  v94 = 0;
  if ( (*((_DWORD *)v93 + 9) & 0x2000000) != 0
    || (v95 = *(_DWORD *)v93, *(_DWORD *)v93 == 1414090313) && *((_DWORD *)v93 + 1) == 1195525195
    || v95 == 1162297680 && ((v96 = *((_WORD *)v93 + 2), v96 == 30583) || v96 == 29303 || v96 == 30839)
    || v95 == 1095914053 && *((_WORD *)v93 + 2) == 16724 )
  {
    v94 = 1;
  }
  else
  {
    v97 = (char *)*((_QWORD *)v49 + 223);
    v98 = 7;
    v429 = (__int64 *)*((_QWORD *)v49 + 224);
    v99 = v93 - v97;
    v430 = (char *)*((_QWORD *)v49 + 225);
    v431 = (char *)*((_QWORD *)v49 + 226);
    v428 = v97;
    while ( 1 )
    {
      v100 = (unsigned __int8)v97[v99];
      v101 = (unsigned __int8)*v97++;
      if ( v100 != v101 )
        break;
      if ( !--v98 )
      {
LABEL_180:
        v94 = 1;
        goto LABEL_181;
      }
    }
    v102 = v429;
    v103 = 8;
    v104 = (__int64 *)v93;
    while ( 1 )
    {
      v105 = *v104++;
      v106 = *v102++;
      if ( v105 != v106 )
        break;
      v103 -= 8;
      if ( v103 < 8 )
      {
        if ( !v103 )
          goto LABEL_180;
        while ( 1 )
        {
          v107 = *(unsigned __int8 *)v104;
          v104 = (__int64 *)((char *)v104 + 1);
          v108 = *(unsigned __int8 *)v102;
          v102 = (__int64 *)((char *)v102 + 1);
          if ( v107 != v108 )
            goto LABEL_173;
          if ( !--v103 )
            goto LABEL_180;
        }
      }
    }
LABEL_173:
    v109 = v430;
    v110 = 4;
    while ( 1 )
    {
      v111 = (unsigned __int8)v109[v93 - v430];
      v112 = (unsigned __int8)*v109++;
      if ( v111 != v112 )
        break;
      if ( !--v110 )
        goto LABEL_180;
    }
    v113 = v431;
    v114 = 6;
    while ( 1 )
    {
      v115 = (unsigned __int8)v113[v93 - v431];
      v116 = (unsigned __int8)*v113++;
      if ( v115 != v116 )
        break;
      if ( !--v114 )
        goto LABEL_180;
    }
  }
LABEL_181:
  if ( *((int *)v93 + 9) < 0 )
    v94 = 1;
  v392 = v94;
  if ( v94 && *(_DWORD *)v93 == 1414090313 && *((_DWORD *)v93 + 1) == 1195525195 )
  {
    if ( (*((_DWORD *)v49 + 466) & 0x10000000) != 0 )
      v94 = 0;
    v392 = v94;
  }
  v117 = *((_DWORD *)v93 + 2);
  if ( *((_DWORD *)v93 + 4) > v117 )
    v117 = *((_DWORD *)v93 + 4);
  v118 = v397;
  v119 = v117 + *((_DWORD *)v93 + 3);
  v376 = v119;
  while ( 1 )
  {
    v120 = *((_DWORD *)v92 + 2);
    if ( (v120 & 1) == 0 )
    {
      v121 = v382;
      if ( v120 < v382 )
        v121 = *((_DWORD *)v92 + 2);
      v382 = v121;
      v122 = v452;
      if ( v120 > v452 )
        v122 = *((_DWORD *)v92 + 2);
      v452 = v122;
    }
    v123 = *(unsigned int *)v92;
    v124 = 0LL;
    v125 = v118 + v123;
    v126 = (unsigned int)(*((_DWORD *)v395 + 1) - v123);
    LODWORD(v398) = *((_DWORD *)v395 + 1) - v123;
    if ( v94 )
    {
      v127 = v394;
      *(_DWORD *)v394 = 0x80000000;
      goto LABEL_237;
    }
    if ( (v385 & 8) != 0 )
    {
      v408 = (unsigned int)v126;
      if ( (((v125 & 0xFFF) + v126 + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 || (v125 & 0xFFFFFFFFFFFFF000uLL) != i )
      {
        if ( (_DWORD)v126 && (*((_DWORD *)v49 + 467) & 0x40) != 0 )
        {
          i = KeGetCurrentIrql();
          __writecr8(2uLL);
          v128 = v125 & 0xFFFFFFFFFFFFF000uLL;
          v415 = ((unsigned int)v126 + v125 - 1) | 0xFFF;
          v400 = (v125 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              v129 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, __int64))v49 + 135))(v128, 1LL, v124);
              if ( v129 == -1073741267 )
                break;
              v124 = 0LL;
              if ( v129 < 0 )
              {
                __writecr8((unsigned __int8)i);
                goto LABEL_215;
              }
              v130 = i;
LABEL_212:
              v128 += 4096LL;
              v400 += 4096LL;
              if ( v400 == v415 )
              {
                __writecr8(v130);
                goto LABEL_217;
              }
            }
            v130 = i;
            if ( (unsigned __int8)i > 1u )
              goto LABEL_212;
            __writecr8((unsigned __int8)i);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
        }
LABEL_215:
        if ( !*((_DWORD *)v49 + 432) )
        {
          v131 = v402;
          *((_QWORD *)v49 + 217) = v49 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v49 + 218) = (char *)v131 - 0x4C48B4211BBACBEBLL;
          *((_QWORD *)v49 + 219) = *v131;
          *((_DWORD *)v49 + 432) = 1;
          *((_QWORD *)v49 + 220) = v125;
        }
LABEL_217:
        LODWORD(v126) = (_DWORD)v398;
        i = (v125 + v408) & 0xFFFFFFFFFFFFF000uLL;
      }
    }
    *((_DWORD *)v49 + 394) += v126;
    v132 = (_QWORD *)v125;
    v133 = *((_DWORD *)v49 + 389);
    v134 = (const char *)v125;
    v135 = *((_QWORD *)v49 + 195);
    v136 = v125 + (unsigned int)v126;
    if ( v125 < v136 )
    {
      do
      {
        _mm_prefetch(v134, 0);
        v134 += 64;
      }
      while ( (unsigned __int64)v134 < v136 );
    }
    v137 = (unsigned int)v126 >> 7;
    if ( (unsigned int)v126 >> 7 )
    {
      v138 = *((_QWORD *)v49 + 195);
      do
      {
        v139 = 8LL;
        do
        {
          v140 = v132[1] ^ __ROL8__(*v132 ^ v135, v133);
          v132 += 2;
          v135 = __ROL8__(v140, v133);
          --v139;
        }
        while ( v139 );
        v141 = __ROL8__(v138 ^ ((unsigned __int64)v132 - v125), 17) ^ v138 ^ ((unsigned __int64)v132 - v125);
        v442 = (v141 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v133 = ((unsigned __int8)(v442 ^ v141) ^ (unsigned __int8)v133) & 0x3F;
        if ( !v133 )
          LOBYTE(v133) = 1;
        --v137;
      }
      while ( v137 );
      v49 = v401;
      LOBYTE(v126) = (_BYTE)v398;
    }
    v142 = v126 & 0x7F;
    if ( v142 >= 8 )
    {
      v143 = (unsigned __int64)v142 >> 3;
      do
      {
        v135 = __ROL8__(*v132++ ^ v135, v133);
        v142 -= 8;
        --v143;
      }
      while ( v143 );
    }
    for ( ; v142; --v142 )
    {
      v144 = *(unsigned __int8 *)v132;
      v132 = (_QWORD *)((char *)v132 + 1);
      v135 = __ROL8__(v144 ^ v135, v133);
    }
    for ( m = v135 >> 31; m; m >>= 31 )
      LODWORD(v135) = m ^ v135;
    v127 = v394;
    v93 = (char *)j;
    v119 = v376;
    v94 = v392;
    v118 = v397;
    *(_DWORD *)v394 = v135 & 0x7FFFFFFF;
LABEL_237:
    v92 = (ULONG_PTR *)((char *)v395 + 12);
    v395 = v92;
    if ( v92 == (ULONG_PTR *)v404 )
      break;
    v394 = v127 + 4;
    if ( *(_DWORD *)v92 < *((_DWORD *)v93 + 3) || v118 + *((unsigned int *)v92 + 1) > v119 )
    {
      j = (*((__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))v49 + 66))(v406, v118, *(unsigned int *)v92);
      v93 = (char *)j;
      if ( !j )
        goto LABEL_241;
      goto LABEL_153;
    }
  }
  v146 = v382;
  if ( v382 == -1 && !v452 )
    v146 = 0LL;
  v416[0] = v452 - v146;
  v405 = (ULONG_PTR)v49;
  v420 = BugCheckParameter2 + (unsigned int)v146;
  LOBYTE(v146) = 1;
  v421 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))v49 + 62))(
           BugCheckParameter2,
           v146,
           0LL,
           &v391);
  v147 = v421 != 0 ? v391 : 0;
  v391 = v147;
  v148 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v49 + 62);
  v416[1] = v147;
  LOBYTE(v147) = 1;
  v397 = v148(BugCheckParameter2, v147, 12LL, &v391);
  v422 = v397;
  LOBYTE(v149) = 1;
  v453 = v397 != 0 ? v391 : 0;
  v391 = v453;
  v416[2] = v453;
  v423 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))v49 + 62))(
           BugCheckParameter2,
           v149,
           10LL,
           &v391);
  v391 &= -(v423 != 0);
  v150 = *((_DWORD *)v49 + 377);
  v151 = *((unsigned int *)v49 + 443);
  LODWORD(v152) = (_DWORD)v393 != 0 ? 0xB : 0;
  v416[3] = v391;
  v386 = v152;
  v153 = v150 + 192;
  v377 = v150;
  if ( (unsigned int)(v150 + 192) <= *((_DWORD *)v49 + 499) )
  {
    v154 = v49;
    j = (unsigned __int64)v49;
    *((_DWORD *)v49 + 377) = v153;
  }
  else
  {
    j = sub_140282ED4(v49, v153, v151);
    v154 = (_BYTE *)j;
    if ( !j )
      goto LABEL_108;
    v155 = *((_DWORD *)v49 + 466);
    if ( (v155 & 4) == 0 )
    {
      v156 = *((_DWORD *)v49 + 377);
      v157 = *((_QWORD *)v49 + 185);
      v158 = (v155 & 0x20000000) != 0 ? *((_DWORD *)v49 + 443) : 0;
      if ( v156 >= 8 )
      {
        v159 = (unsigned __int64)v156 >> 3;
        do
        {
          *(_QWORD *)v49 = 0LL;
          v156 -= 8;
          v49 += 8;
          --v159;
        }
        while ( v159 );
      }
      for ( ; v156; --v156 )
        *v49++ = 0;
      v160 = *((_DWORD *)v154 + 443);
      *((_DWORD *)v154 + 443) = v158;
      if ( v158 == 3 )
      {
        (*((void (__fastcall **)(__int64, __int64))v154 + 108))(v157, 1LL);
      }
      else
      {
        v161 = 0;
        if ( (*((_DWORD *)v154 + 466) & 0x10000000) == 0 )
          v161 = v158;
        if ( v161 )
          (*((void (__fastcall **)(__int64, _QWORD))v154 + 69))(v157 - 8, *(_QWORD *)(v157 - 8));
        else
          (*((void (__fastcall **)(__int64, __int64))v154 + 32))(v157, 1LL);
      }
      *((_DWORD *)v154 + 443) = v160;
      v150 = v377;
    }
    *((_DWORD *)v154 + 466) &= ~4u;
    LODWORD(v152) = v386;
  }
  *((_DWORD *)v154 + 387) += 4;
  v162 = v416;
  v401 = v416;
  v163 = &v154[v150];
  v402 = v163;
  i = (unsigned __int64)v163;
  v418 = v163;
  v417 = (unsigned int **)v163;
  v164 = &v420;
  v395 = &v420;
  v394 = 4LL;
  do
  {
    v165 = *v162;
    v166 = 48;
    v167 = (_QWORD *)*v164;
    v168 = v163;
    v392 = v165;
    v169 = 6LL;
    do
    {
      *v168 = 0LL;
      v166 -= 8;
      ++v168;
      --v169;
    }
    while ( v169 );
    for ( ; v166; --v166 )
    {
      *(_BYTE *)v168 = 0;
      v168 = (_QWORD *)((char *)v168 + 1);
    }
    *(_DWORD *)v163 = v152;
    *((_QWORD *)v163 + 1) = v167;
    *((_DWORD *)v163 + 4) = v165;
    v170 = v167;
    *((_DWORD *)v154 + 394) += v165;
    v171 = (const char *)v167;
    v172 = *((_DWORD *)v154 + 389);
    v173 = *((_QWORD *)v154 + 195);
    v174 = (unsigned __int64)v167 + v165;
    if ( (unsigned __int64)v167 < v174 )
    {
      do
      {
        _mm_prefetch(v171, 0);
        v171 += 64;
      }
      while ( (unsigned __int64)v171 < v174 );
    }
    v175 = v165 >> 7;
    if ( v175 )
    {
      v176 = *((_QWORD *)v154 + 195);
      do
      {
        v177 = 8LL;
        do
        {
          v178 = v170[1] ^ __ROL8__(*v170 ^ v173, v172);
          v170 += 2;
          v173 = __ROL8__(v178, v172);
          --v177;
        }
        while ( v177 );
        v179 = __ROL8__(v176 ^ ((char *)v170 - (char *)v167), 17) ^ v176 ^ ((char *)v170 - (char *)v167);
        v432 = (v179 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v172 = ((unsigned __int8)(v432 ^ v179) ^ (unsigned __int8)v172) & 0x3F;
        if ( !v172 )
          LOBYTE(v172) = 1;
        --v175;
      }
      while ( v175 );
      v154 = (_BYTE *)j;
      v163 = (_BYTE *)i;
    }
    v180 = v392;
    v181 = v392 & 0x7F;
    if ( v181 >= 8 )
    {
      v182 = (unsigned __int64)(v392 & 0x7F) >> 3;
      do
      {
        v173 = __ROL8__(*v170++ ^ v173, v172);
        v181 -= 8;
        --v182;
      }
      while ( v182 );
    }
    for ( ; v181; --v181 )
    {
      v183 = *(unsigned __int8 *)v170;
      v170 = (_QWORD *)((char *)v170 + 1);
      v173 = __ROL8__(v183 ^ v173, v172);
    }
    for ( n = v173 >> 31; n; n >>= 31 )
      LODWORD(v173) = n ^ v173;
    v162 = v401 + 1;
    v152 = v386;
    v164 = v395 + 1;
    *((_DWORD *)v163 + 5) = v173 & 0x7FFFFFFF;
    v163 += 48;
    *((_DWORD *)v154 + 394) += v180;
    v62 = v394-- == 1;
    i = (unsigned __int64)v163;
    v418 = v163;
    v401 = v162;
    v395 = v164;
  }
  while ( !v62 );
  v185 = v402 + 24;
  LODWORD(v406) = a3 & 1;
  v405 = (ULONG_PTR)v154;
  v419 = v402 + 24;
  v186 = (unsigned int)((_DWORD)v393 != 0) + 13;
  v378 = ((_DWORD)v393 != 0) + 13;
  if ( v402 == (_DWORD *)-96LL )
  {
    v187 = *((unsigned int *)v154 + 377);
    v188 = v187 + 48;
    if ( (unsigned int)(v187 + 48) <= *((_DWORD *)v154 + 499) )
    {
      v189 = v154;
      *((_DWORD *)v154 + 377) = v188;
      i = (unsigned __int64)v154;
    }
    else
    {
      i = sub_140282ED4(v154, v188, *((unsigned int *)v154 + 443));
      v189 = (_BYTE *)i;
      if ( !i )
        goto LABEL_108;
      v190 = *((_DWORD *)v154 + 466);
      if ( (v190 & 4) == 0 )
      {
        v191 = *((_DWORD *)v154 + 377);
        v192 = *((_QWORD *)v154 + 185);
        v193 = (v190 & 0x20000000) != 0 ? *((_DWORD *)v154 + 443) : 0;
        if ( v191 >= 8 )
        {
          v194 = (unsigned __int64)v191 >> 3;
          do
          {
            *(_QWORD *)v154 = 0LL;
            v191 -= 8;
            v154 += 8;
            --v194;
          }
          while ( v194 );
        }
        for ( ; v191; --v191 )
          *v154++ = 0;
        v195 = *((_DWORD *)v189 + 443);
        *((_DWORD *)v189 + 443) = v193;
        if ( v193 == 3 )
        {
          (*((void (__fastcall **)(__int64, __int64))v189 + 108))(v192, 1LL);
        }
        else
        {
          v196 = 0;
          if ( (*((_DWORD *)v189 + 466) & 0x10000000) == 0 )
            v196 = v193;
          if ( v196 )
            (*((void (__fastcall **)(__int64, _QWORD))v189 + 69))(v192 - 8, *(_QWORD *)(v192 - 8));
          else
            (*((void (__fastcall **)(__int64, __int64))v189 + 32))(v192, 1LL);
        }
        *((_DWORD *)v189 + 443) = v195;
      }
      *((_DWORD *)v189 + 466) &= ~4u;
      LODWORD(v186) = v378;
    }
    ++*((_DWORD *)v189 + 387);
    v197 = 48;
    v185 = (unsigned int *)&v189[v187];
    v404 = v185;
    v198 = v185;
    v438 = v185;
    v199 = 6LL;
    do
    {
      *(_QWORD *)v198 = 0LL;
      v197 -= 8;
      v198 += 2;
      --v199;
    }
    while ( v199 );
    for ( ; v197; --v197 )
    {
      *(_BYTE *)v198 = 0;
      v198 = (unsigned int *)((char *)v198 + 1);
    }
    v200 = v397;
    v62 = (_DWORD)v186 == 32;
    *v185 = v186;
    v201 = v453;
    *((_QWORD *)v185 + 1) = v200;
    if ( v62 && v453 )
    {
      sub_140175FBC((__int64)v189, v200, v453, (__int64)(v185 + 6));
      v201 = v453;
      v200 = v397;
    }
    v185[4] = v201;
    v152 = v200;
    *((_DWORD *)v189 + 394) += v201;
    v202 = (const char *)v200;
    v203 = *((_DWORD *)v189 + 389);
    v204 = *((_QWORD *)v189 + 195);
    v205 = v200 + v201;
    if ( v200 < v205 )
    {
      do
      {
        _mm_prefetch(v202, 0);
        v202 += 64;
      }
      while ( (unsigned __int64)v202 < v205 );
    }
    v206 = *((_QWORD *)v189 + 195);
    v207 = v201 >> 7;
    if ( v201 >> 7 )
    {
      do
      {
        v208 = 8LL;
        do
        {
          v209 = *(_QWORD *)(v152 + 8) ^ __ROL8__(*(_QWORD *)v152 ^ v206, v203);
          v152 += 16LL;
          v206 = __ROL8__(v209, v203);
          --v208;
        }
        while ( v208 );
        v210 = __ROL8__(v204 ^ (v152 - v397), 17) ^ v204 ^ (v152 - v397);
        v433 = ((unsigned __int64)v210 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v203 = ((unsigned __int8)v433 ^ (unsigned __int8)(v210 ^ v203)) & 0x3F;
        if ( !v203 )
          LOBYTE(v203) = 1;
        --v207;
      }
      while ( v207 );
      v189 = (_BYTE *)i;
      v185 = v404;
      LOBYTE(v201) = v453;
    }
    v186 = v201 & 0x7F;
    if ( (unsigned int)v186 >= 8 )
    {
      v211 = (unsigned __int64)(unsigned int)v186 >> 3;
      do
      {
        v206 = __ROL8__(*(_QWORD *)v152 ^ v206, v203);
        v152 += 8LL;
        v186 = (unsigned int)(v186 - 8);
        --v211;
      }
      while ( v211 );
    }
    if ( (_DWORD)v186 )
    {
      do
      {
        v212 = *(unsigned __int8 *)v152++;
        v206 = __ROL8__(v212 ^ v206, v203);
        v62 = (_DWORD)v186 == 1;
        v186 = (unsigned int)(v186 - 1);
      }
      while ( !v62 );
    }
    for ( ii = v206 >> 31; ii; ii >>= 31 )
      LODWORD(v206) = ii ^ v206;
    v419 = v185;
    v185[5] = v206 & 0x7FFFFFFF;
    v214 = (_DWORD *)v453;
    *((_DWORD *)v189 + 394) += v453;
  }
  else
  {
    v214 = (_DWORD *)v453;
    v189 = v154;
    *v185 = v186;
  }
  if ( (*((_DWORD *)v189 + 466) & 0x40000000) != 0 && (_DWORD)v214 )
    sub_140175FBC((__int64)v189, v397, (unsigned int)v214, (__int64)(v185 + 7));
  v185[6] = 0;
  if ( (_DWORD)v406 )
    v185[6] = 1;
  v215 = v402;
  v216 = BugCheckParameter2;
  v405 = (ULONG_PTR)v189;
  v217 = (v402[46] ^ ((_DWORD)v393 != 0)) & 1;
  v402[36] = 35;
  v215[46] ^= v217;
  if ( v215[40] < 0x94u )
    goto LABEL_349;
  v218 = *((_QWORD *)v215 + 19);
  v219 = (*((__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *, unsigned __int64))v189 + 63))(
           v216,
           v186,
           v214,
           v152);
  if ( !v219 )
  {
LABEL_108:
    v39 = -1073741670;
    goto LABEL_242;
  }
  v214 = v402;
  v186 = v216 + *(unsigned int *)(v219 + 80);
  v220 = v402[46] | 2;
  v402[46] = v220;
  v221 = *(_QWORD **)(v218 + 112);
  if ( (unsigned __int64)v221 >= v216 && (unsigned __int64)v221 < v186 )
  {
    *((_QWORD *)v214 + 21) = *v221;
    v214[46] = v220 | 4;
  }
  v222 = *(__int64 **)(v218 + 120);
  if ( (unsigned __int64)v222 >= v216 && (unsigned __int64)v222 < v186 )
  {
    v223 = *v222;
    v214[46] |= 8u;
    *((_QWORD *)v214 + 22) = v223;
  }
LABEL_349:
  v224 = BugCheckParameter2;
  v405 = (ULONG_PTR)v189;
  v62 = (*((_DWORD *)v189 + 466) & 0x400000) == 0;
  v400 = BugCheckParameter2;
  if ( v62 )
    goto LABEL_575;
  v225 = (*((__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, _DWORD *, unsigned __int64))v189 + 63))(
           BugCheckParameter2,
           v186,
           v214,
           v152);
  v404 = (unsigned int *)v225;
  if ( !v225 )
    goto LABEL_241;
  v226 = *(_WORD *)(v225 + 6);
  v454 = v226;
  j = v389 / 0xCuLL;
  if ( !v226 )
  {
    if ( (*((_DWORD *)v189 + 466) & 0x200000) == 0 )
    {
      v414[1] = 25984;
      KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, v224, 0LL, 0LL);
    }
    if ( !*((_DWORD *)v189 + 432) )
    {
      *((_QWORD *)v189 + 218) = 0LL;
      *((_QWORD *)v189 + 220) = v224;
LABEL_355:
      *((_QWORD *)v189 + 219) = 271LL;
      *((_QWORD *)v189 + 217) = v189 - 0x5C5FC0A76E374B18LL;
      *((_DWORD *)v189 + 432) = 1;
    }
    goto LABEL_241;
  }
  v227 = v399;
  v379 = v226;
  v394 = (__int64)&v399[3 * (v389 / 0xC)];
  v229 = 0;
  v383 = 0;
  v395 = (ULONG_PTR *)(*(unsigned __int16 *)(v225 + 20) + v225 + 24);
  v228 = v395;
  v230 = v400;
  v231 = (int *)(v395 + 1);
  do
  {
    v232 = *v231;
    v233 = v231[1];
    if ( v231[2] > (unsigned int)*v231 )
      v232 = v231[2];
    v387 = v231[1];
    v234 = v233 + v232;
    LODWORD(v398) = v233 + v232;
    if ( v229 && v234 < *((_DWORD *)&v228[5 * v229 - 3] - 1) )
    {
      if ( (*((_DWORD *)v189 + 466) & 0x200000) == 0 )
      {
        v414[2] = 25984;
        KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, v230, 1uLL, 0LL);
      }
LABEL_387:
      if ( *((_DWORD *)v189 + 432) )
        goto LABEL_241;
      *((_QWORD *)v189 + 218) = 0LL;
      *((_QWORD *)v189 + 220) = v230;
      goto LABEL_355;
    }
    if ( v227 != (unsigned int *)v394 )
    {
      while ( 1 )
      {
        v235 = v227[1];
        if ( *v227 >= v234 || v235 <= v233 )
        {
LABEL_383:
          v229 = v383;
          v228 = v395;
          goto LABEL_384;
        }
        if ( *v227 < v233 || v235 > v234 )
          break;
        v236 = v227[2];
        if ( (v236 & 1) != 0 || (*(_BYTE *)(v236 + v230) & 0x20) != 0 )
        {
          v237 = *v231;
          v238 = v231[1];
          v239 = v231[2] <= (unsigned int)*v231;
          v392 = v238;
          if ( !v239 )
            v237 = v231[2];
          LODWORD(v406) = v237 + v238;
          v240 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v189 + 129))(v227, v230);
          if ( *v240 >= v392 && v240[1] < (unsigned int)v406 )
          {
            v241 = v400;
          }
          else
          {
            v241 = v400;
            if ( (*((_DWORD *)v189 + 466) & 0x200000) == 0 )
            {
              v414[3] = 25984;
              KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, v400, ((_DWORD)v240 - (_DWORD)v400) | 0x80000000, 0LL);
            }
            if ( !*((_DWORD *)v189 + 432) )
            {
              *((_QWORD *)v189 + 218) = 0LL;
              *((_QWORD *)v189 + 219) = 271LL;
              *((_QWORD *)v189 + 217) = v189 - 0x5C5FC0A76E374B18LL;
              *((_DWORD *)v189 + 432) = 1;
              *((_QWORD *)v189 + 220) = v241;
            }
          }
          v242 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v189 + 130))(
                                   v240,
                                   v241,
                                   v241 + *v240);
          if ( *v242 >= v392 && v242[1] < (unsigned int)v406 )
          {
            v234 = (unsigned int)v398;
            v233 = v387;
            v230 = v400;
          }
          else
          {
            v230 = v400;
            v243 = ((_DWORD)v242 - v400) | 0x80000000;
            if ( (*((_DWORD *)v189 + 466) & 0x200000) == 0 )
            {
              v414[7] = 25984;
              KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, v400, v243, 0LL);
            }
            v234 = (unsigned int)v398;
            v233 = v387;
            if ( !*((_DWORD *)v189 + 432) )
            {
              *((_QWORD *)v189 + 218) = 0LL;
              *((_QWORD *)v189 + 219) = 271LL;
              *((_QWORD *)v189 + 217) = v189 - 0x5C5FC0A76E374B18LL;
              *((_DWORD *)v189 + 432) = 1;
              *((_QWORD *)v189 + 220) = v230;
            }
          }
        }
        v227 += 3;
        if ( v227 == (unsigned int *)v394 )
          goto LABEL_383;
      }
      if ( (*((_DWORD *)v189 + 466) & 0x200000) == 0 )
      {
        v414[4] = 25984;
        KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, v230, 2uLL, 0LL);
      }
      goto LABEL_387;
    }
LABEL_384:
    v244 = v379;
    ++v229;
    v231 += 10;
    v383 = v229;
  }
  while ( v229 < v379 );
  v245 = j;
  v246 = v400;
  if ( v227 != (unsigned int *)v394 )
  {
    if ( (*((_DWORD *)v189 + 466) & 0x200000) == 0 )
    {
      v414[5] = 25984;
      KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, v400, 3uLL, 0LL);
    }
    if ( !*((_DWORD *)v189 + 432) )
    {
      *((_QWORD *)v189 + 218) = 0LL;
      *((_QWORD *)v189 + 219) = 271LL;
      *((_QWORD *)v189 + 217) = v189 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v189 + 220) = v246;
      *((_DWORD *)v189 + 432) = 1;
    }
    goto LABEL_241;
  }
  v247 = *((unsigned int *)v189 + 377);
  v248 = v247 + ((j + 6) & 0xFFFFFFF8) + 24 * (v379 + 2);
  if ( v248 <= *((_DWORD *)v189 + 499) )
  {
    v249 = (ULONG_PTR)v189;
    v397 = (ULONG_PTR)v189;
    *((_DWORD *)v189 + 377) = v248;
  }
  else
  {
    v397 = sub_140282ED4(v189, v248, *((unsigned int *)v189 + 443));
    v249 = v397;
    if ( !v397 )
      goto LABEL_108;
    v250 = *((_DWORD *)v189 + 466);
    if ( (v250 & 4) == 0 )
    {
      v251 = *((_DWORD *)v189 + 377);
      v252 = *((_QWORD *)v189 + 185);
      v253 = (v250 & 0x20000000) != 0 ? *((_DWORD *)v189 + 443) : 0;
      if ( v251 >= 8 )
      {
        v254 = (unsigned __int64)v251 >> 3;
        do
        {
          *(_QWORD *)v189 = 0LL;
          v251 -= 8;
          v189 += 8;
          --v254;
        }
        while ( v254 );
      }
      for ( ; v251; --v251 )
        *v189++ = 0;
      v255 = *(_DWORD *)(v249 + 1772);
      *(_DWORD *)(v249 + 1772) = v253;
      if ( v253 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v249 + 864))(v252, 1LL);
      }
      else
      {
        v256 = 0;
        if ( (*(_DWORD *)(v249 + 1864) & 0x10000000) == 0 )
          v256 = v253;
        if ( v256 )
          (*(void (__fastcall **)(__int64, _QWORD))(v249 + 552))(v252 - 8, *(_QWORD *)(v252 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v249 + 256))(v252, 1LL);
      }
      *(_DWORD *)(v249 + 1772) = v255;
    }
    *(_DWORD *)(v249 + 1864) &= ~4u;
    v244 = v379;
    v245 = j;
  }
  v257 = v249 + v247;
  ++*(_DWORD *)(v249 + 1548);
  v258 = (_QWORD *)(v249 + v247);
  v439 = v249 + v247;
  v259 = 6LL;
  v260 = 48;
  do
  {
    *v258 = 0LL;
    v260 -= 8;
    ++v258;
    --v259;
  }
  while ( v259 );
  for ( ; v260; --v260 )
  {
    *(_BYTE *)v258 = 0;
    v258 = (_QWORD *)((char *)v258 + 1);
  }
  *(_QWORD *)(v257 + 8) = v399;
  *(_DWORD *)v257 = 30;
  *(_DWORD *)(v257 + 16) = 0;
  v261 = *(_QWORD *)(v249 + 1560);
  for ( jj = v261; ; LODWORD(v261) = jj ^ v261 )
  {
    jj >>= 31;
    if ( !jj )
      break;
  }
  v263 = v404;
  v62 = (_DWORD)v393 == 0;
  v189 = (_BYTE *)v249;
  v264 = v400;
  *(_DWORD *)(v257 + 20) = v261 & 0x7FFFFFFF;
  *(_QWORD *)(v257 + 24) = v264;
  *(_DWORD *)(v257 + 32) = v263[20];
  *(_DWORD *)(v257 + 36) = v389;
  *(_WORD *)(v257 + 40) = v454;
  v435 = v257;
  LOWORD(v263) = (*(_WORD *)(v257 + 42) ^ !v62) & 1;
  i = v249;
  *(_WORD *)(v257 + 42) ^= (unsigned __int16)v263;
  v265 = *(unsigned __int16 *)(v257 + 40);
  v266 = (_DWORD *)(v257 + 48 + (((unsigned int)(v245 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
  v398 = (_BYTE *)(v257 + 48);
  v402 = v266;
  v267 = &v266[6 * v265];
  v415 = (__int64)v267;
  if ( v245 )
    v268 = v399 + 3;
  else
    v268 = (unsigned int *)v394;
  v269 = 0;
  v401 = v268;
  v270 = v244;
  v271 = v266 + 2;
  do
  {
    v272 = 2LL;
    do
    {
      *((_QWORD *)v271 - 1) = 0LL;
      *v271 = 0x80000000;
      v271 += 3;
      --v272;
    }
    while ( v272 );
    --v270;
  }
  while ( v270 );
  v273 = v397;
  v274 = v400;
  if ( v266 != v267 )
  {
    v275 = (char *)v395;
    while ( 1 )
    {
      if ( (*((_DWORD *)v275 + 9) & 0x2000000) != 0
        || (v276 = *(_DWORD *)v275, *(_DWORD *)v275 == 1414090313) && *((_DWORD *)v275 + 1) == 1195525195
        || v276 == 1162297680 && ((v277 = *((_WORD *)v275 + 2), v277 == 30583) || v277 == 29303 || v277 == 30839)
        || v276 == 1095914053 && *((_WORD *)v275 + 2) == 16724 )
      {
        v269 = 1;
      }
      else
      {
        v278 = 7;
        v279 = *(char **)(v273 + 1784);
        v425 = *(char **)(v273 + 1792);
        v280 = v275 - v279;
        v426 = *(char **)(v273 + 1800);
        v427 = *(char **)(v273 + 1808);
        v424 = v279;
        while ( 1 )
        {
          v281 = v279[v280];
          v282 = *v279++;
          if ( v281 != v282 )
            break;
          if ( !--v278 )
          {
LABEL_456:
            v269 = 1;
            goto LABEL_458;
          }
        }
        v283 = v425;
        v284 = 8;
        v285 = v395;
        while ( 1 )
        {
          v286 = *v285++;
          v287 = *(_QWORD *)v283;
          v283 += 8;
          if ( v286 != v287 )
            break;
          v284 -= 8;
          if ( v284 < 8 )
          {
            if ( !v284 )
              goto LABEL_456;
            while ( 1 )
            {
              v288 = *(_BYTE *)v285;
              v285 = (ULONG_PTR *)((char *)v285 + 1);
              v289 = *v283++;
              if ( v288 != v289 )
                goto LABEL_449;
              if ( !--v284 )
                goto LABEL_456;
            }
          }
        }
LABEL_449:
        v290 = v426;
        v291 = 4;
        while ( 1 )
        {
          v292 = v290[(char *)v395 - v426];
          v293 = *v290++;
          if ( v292 != v293 )
            break;
          if ( !--v291 )
            goto LABEL_456;
        }
        v294 = v427;
        v295 = 6;
        while ( 1 )
        {
          v296 = v294[(char *)v395 - v427];
          v297 = *v294++;
          if ( v296 != v297 )
            break;
          if ( !--v295 )
            goto LABEL_456;
        }
LABEL_458:
        v275 = (char *)v395;
      }
      if ( *((int *)v275 + 9) < 0 )
        v269 = 1;
      v455 = v269;
      if ( v269 && *(_DWORD *)v275 == 1414090313 && *((_DWORD *)v275 + 1) == 1195525195 )
      {
        if ( (*(_DWORD *)(v273 + 1864) & 0x10000000) != 0 )
          v269 = 0;
        v455 = v269;
      }
      v298 = *((_DWORD *)v275 + 2);
      v299 = *((unsigned int *)v275 + 3);
      if ( *((_DWORD *)v275 + 4) > v298 )
        v298 = *((_DWORD *)v275 + 4);
      v384 = *((_DWORD *)v275 + 3);
      v300 = v299 + v298;
      v390 = v299 + v298;
      if ( v399 == (unsigned int *)v394 )
      {
        v301 = 0;
        v302 = 0;
      }
      else
      {
        v301 = *v399;
        v302 = v399[1];
      }
      v303 = (unsigned int *)v394;
      v392 = v302;
      LODWORD(v406) = v301;
      v388 = v299;
      if ( v399 != (unsigned int *)v394 && v301 > (unsigned int)v299 && v302 <= v300 && !v269 )
      {
        *v266 = v299;
        v304 = v416;
        v266[1] = v301;
        v305 = &v420;
        v306 = v274 + v299;
        v388 = v301;
        v307 = v301 - v299;
        v404 = (unsigned int *)(v306 + v301 - v384);
        for ( kk = 0; kk < 4; ++kk )
        {
          if ( v306 < *v305 + *v304 && v306 + v301 - v384 > *v305 )
          {
            v274 = v400;
            v269 = v455;
            v300 = v390;
            LODWORD(v299) = v384;
            v303 = (unsigned int *)v394;
            goto LABEL_500;
          }
          ++v305;
          ++v304;
        }
        *(_DWORD *)(v273 + 1576) += v307;
        v309 = (_QWORD *)v306;
        v310 = (const char *)v306;
        v311 = *(_DWORD *)(v273 + 1556);
        v312 = *(_QWORD *)(v273 + 1560);
        if ( v306 < (unsigned __int64)v404 )
        {
          do
          {
            _mm_prefetch(v310, 0);
            v310 += 64;
          }
          while ( v310 < (const char *)v404 );
        }
        v380 = v307 >> 7;
        if ( v307 >> 7 )
        {
          v313 = *(_QWORD *)(v273 + 1560);
          do
          {
            v314 = 8LL;
            do
            {
              v315 = v309[1] ^ __ROL8__(*v309 ^ v312, v311);
              v309 += 2;
              v312 = __ROL8__(v315, v311);
              --v314;
            }
            while ( v314 );
            v316 = __ROL8__(v313 ^ ((unsigned __int64)v309 - v306), 17) ^ v313 ^ ((unsigned __int64)v309 - v306);
            v436 = (v316 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v311 = ((unsigned __int8)(v436 ^ v316) ^ (unsigned __int8)v311) & 0x3F;
            if ( !v311 )
              LOBYTE(v311) = 1;
            --v380;
          }
          while ( v380 );
          v189 = (_BYTE *)i;
          v273 = v397;
        }
        v317 = v307 & 0x7F;
        if ( v317 >= 8 )
        {
          v318 = (unsigned __int64)v317 >> 3;
          do
          {
            v312 = __ROL8__(*v309++ ^ v312, v311);
            v317 -= 8;
            --v318;
          }
          while ( v318 );
        }
        for ( ; v317; --v317 )
        {
          v319 = *(unsigned __int8 *)v309;
          v309 = (_QWORD *)((char *)v309 + 1);
          v312 = __ROL8__(v319 ^ v312, v311);
        }
        for ( mm = v312; ; LODWORD(v312) = mm ^ v312 )
        {
          mm >>= 31;
          if ( !mm )
            break;
        }
        v274 = v400;
        v269 = v455;
        LODWORD(v299) = v384;
        v303 = (unsigned int *)v394;
        v402[2] = v312 & 0x7FFFFFFF;
        v300 = v390;
      }
LABEL_500:
      if ( (unsigned int)v406 >= (unsigned int)v299 && v392 <= v300 )
      {
        v321 = v399;
        if ( v399 != v303 )
        {
          v322 = v401;
          v323 = v401[1];
          LODWORD(v393) = v323;
          if ( v323 <= v300 )
          {
            v324 = v398;
            do
            {
              if ( v322 == (unsigned int *)v394 )
                break;
              if ( v269 )
              {
                *v324 = 0x80;
              }
              else
              {
                v325 = *v322;
                v326 = v321[1];
                v388 = v325;
                if ( v325 < (unsigned int)v326 )
                {
                  if ( (*(_DWORD *)(v273 + 1864) & 0x200000) == 0 )
                  {
                    v414[6] = 25984;
                    KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, v274, 6uLL, 0LL);
                  }
                  if ( !*(_DWORD *)(v273 + 1728) )
                  {
                    *(_QWORD *)(v273 + 1744) = 0LL;
                    *(_QWORD *)(v273 + 1752) = 271LL;
                    *(_QWORD *)(v273 + 1736) = v273 - 0x5C5FC0A76E374B18LL;
                    *(_DWORD *)(v273 + 1728) = 1;
                    *(_QWORD *)(v273 + 1760) = v274;
                  }
                }
                v327 = v274 + v326;
                v328 = v325 - v326;
                v329 = &v420;
                v330 = v416;
                v404 = (unsigned int *)(v327 + v328);
                for ( nn = 0; nn < 4; ++nn )
                {
                  if ( v327 < *v329 + *v330 && v327 + v328 > *v329 )
                    goto LABEL_536;
                  ++v329;
                  ++v330;
                }
                if ( v328 < 4 )
                {
LABEL_536:
                  *v398 = 0x80;
                  goto LABEL_537;
                }
                *(_DWORD *)(v273 + 1576) += v328;
                v332 = (_QWORD *)v327;
                v333 = (const char *)v327;
                v334 = *(_DWORD *)(v273 + 1556);
                v335 = *(_QWORD *)(v273 + 1560);
                if ( v327 < (unsigned __int64)v404 )
                {
                  do
                  {
                    _mm_prefetch(v333, 0);
                    v333 += 64;
                  }
                  while ( v333 < (const char *)v404 );
                }
                v381 = v328 >> 7;
                if ( v328 >> 7 )
                {
                  v336 = *(_QWORD *)(v273 + 1560);
                  do
                  {
                    v337 = 8LL;
                    do
                    {
                      v338 = v332[1] ^ __ROL8__(*v332 ^ v335, v334);
                      v332 += 2;
                      v335 = __ROL8__(v338, v334);
                      --v337;
                    }
                    while ( v337 );
                    v339 = __ROL8__(v336 ^ ((unsigned __int64)v332 - v327), 17) ^ v336 ^ ((unsigned __int64)v332 - v327);
                    v437 = (v339 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v334 = ((unsigned __int8)(v437 ^ v339) ^ (unsigned __int8)v334) & 0x3F;
                    if ( !v334 )
                      LOBYTE(v334) = 1;
                    --v381;
                  }
                  while ( v381 );
                  v189 = (_BYTE *)i;
                  v273 = v397;
                }
                v340 = v328 & 0x7F;
                if ( v340 >= 8 )
                {
                  v341 = (unsigned __int64)v340 >> 3;
                  do
                  {
                    v335 = __ROL8__(*v332++ ^ v335, v334);
                    v340 -= 8;
                    --v341;
                  }
                  while ( v341 );
                }
                for ( ; v340; --v340 )
                {
                  v342 = *(unsigned __int8 *)v332;
                  v332 = (_QWORD *)((char *)v332 + 1);
                  v335 = __ROL8__(v342 ^ v335, v334);
                }
                for ( i1 = v335; ; LOBYTE(v335) = i1 ^ v335 )
                {
                  i1 >>= 7;
                  if ( !i1 )
                    break;
                }
                *v398 = v335 & 0x7F;
LABEL_537:
                v323 = v393;
                v269 = v455;
                v300 = v390;
                v322 = v401;
                v324 = v398;
              }
              v399 += 3;
              ++v324;
              v322 += 3;
              v398 = v324;
              v401 = v322;
              if ( v322 != (unsigned int *)v394 )
              {
                v323 = v322[1];
                LODWORD(v393) = v323;
              }
              v274 = v400;
              v321 = v399;
            }
            while ( v323 <= v300 );
          }
        }
      }
      if ( !v269 && v388 != v300 )
      {
        v344 = v402;
        v345 = &v420;
        v346 = v400 + v388;
        v347 = v300 - v388;
        v348 = v346 + v300 - v388;
        v402[3] = v388;
        v344[4] = v300;
        v349 = 0;
        v456 = v348;
        v350 = v416;
        while ( v346 >= *v345 + *v350 || v348 <= *v345 )
        {
          ++v349;
          ++v345;
          ++v350;
          if ( v349 >= 4 )
          {
            *(_DWORD *)(v273 + 1576) += v347;
            v351 = (_QWORD *)v346;
            v352 = (const char *)v346;
            v353 = *(_DWORD *)(v273 + 1556);
            v354 = *(_QWORD *)(v273 + 1560);
            if ( v346 < v456 )
            {
              do
              {
                _mm_prefetch(v352, 0);
                v352 += 64;
              }
              while ( (unsigned __int64)v352 < v456 );
            }
            v457 = v347 >> 7;
            if ( v347 >> 7 )
            {
              v355 = *(_QWORD *)(v273 + 1560);
              do
              {
                v356 = 8LL;
                do
                {
                  v357 = v351[1] ^ __ROL8__(*v351 ^ v354, v353);
                  v351 += 2;
                  v354 = __ROL8__(v357, v353);
                  --v356;
                }
                while ( v356 );
                v358 = __ROL8__(v355 ^ ((unsigned __int64)v351 - v346), 17) ^ v355 ^ ((unsigned __int64)v351 - v346);
                v443 = (v358 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v353 = ((unsigned __int8)(v443 ^ v358) ^ (unsigned __int8)v353) & 0x3F;
                if ( !v353 )
                  LOBYTE(v353) = 1;
                --v457;
              }
              while ( v457 );
              v189 = (_BYTE *)i;
              v273 = v397;
            }
            v359 = v347 & 0x7F;
            if ( v359 >= 8 )
            {
              v360 = (unsigned __int64)v359 >> 3;
              do
              {
                v354 = __ROL8__(*v351++ ^ v354, v353);
                v359 -= 8;
                --v360;
              }
              while ( v360 );
            }
            for ( ; v359; --v359 )
            {
              v361 = *(unsigned __int8 *)v351;
              v351 = (_QWORD *)((char *)v351 + 1);
              v354 = __ROL8__(v361 ^ v354, v353);
            }
            v362 = v354 >> 31;
            v269 = 0;
            while ( v362 )
            {
              LODWORD(v354) = v362 ^ v354;
              v362 >>= 31;
            }
            v363 = v402;
            v402[5] = v354 & 0x7FFFFFFF;
            goto LABEL_567;
          }
        }
      }
      v363 = v402;
      v269 = 0;
LABEL_567:
      v364 = v399;
      if ( v399 != (unsigned int *)v394 && *v399 >= v384 && v399[1] <= v390 )
      {
        v365 = v401;
        if ( v401 != (unsigned int *)v394 )
        {
          v366 = v398;
          *v398 = 0x80;
          v398 = v366 + 1;
          v401 = v365 + 3;
        }
        v399 = v364 + 3;
      }
      v266 = v363 + 6;
      v275 = (char *)(v395 + 5);
      v402 = v266;
      v395 += 5;
      if ( v266 == (_DWORD *)v415 )
        break;
      v274 = v400;
    }
  }
LABEL_575:
  v405 = (ULONG_PTR)v189;
  v39 = 0;
LABEL_242:
  v43 = a3;
LABEL_243:
  *a1 = v405;
  if ( (int)(v39 + 0x80000000) >= 0 && v39 != -1073741554 )
    return v39;
  if ( (v43 & 0x80000004) != 0x80000004 )
  {
    v447 = v43 | 0x80000000;
    v367 = (*(__int64 (__fastcall **)(__int64))(v405 + 504))(v413);
    v368 = *(unsigned int *)(v367 + 148);
    if ( (unsigned int)v368 >= 0x14 )
    {
      v369 = *(unsigned int *)(v367 + 144);
      v370 = v369 + v368;
      v371 = v413;
      v372 = v413 + v370;
      for ( i2 = v369 + v413; i2 != v372; i2 += 20LL )
      {
        if ( !*(_DWORD *)(i2 + 12) )
          break;
        v374 = *(unsigned int *)(i2 + 16);
        if ( !(_DWORD)v374 )
          break;
        v375 = *(_QWORD *)(v374 + v371);
        if ( v375 )
        {
          result = sub_1402807C8(&v405, v375, v447);
          *a1 = v405;
          if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741554 )
            return result;
          v371 = v413;
        }
      }
    }
  }
  return 0LL;
}
