/*
 * XREFs of PropertyEval @ 0x1404BA130
 * Callers:
 *     FilterEvalStrict @ 0x1404B9EAC (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1404BD870 (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ArrayContains @ 0x1402682B0 (ArrayContains.c)
 *     StringListContains @ 0x1404BE040 (StringListContains.c)
 *     CompareFileTimeType @ 0x140745A88 (CompareFileTimeType.c)
 *     StringListElementSubstringMatch @ 0x1407467D0 (StringListElementSubstringMatch.c)
 *     SubstringMatch @ 0x1407468C8 (SubstringMatch.c)
 */

__int64 __fastcall PropertyEval(
        unsigned int a1,
        wchar_t *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        wchar_t *Str2,
        unsigned int a7,
        int *a8)
{
  size_t v8; // r11
  int v9; // edi
  unsigned int v10; // ebx
  int v11; // r15d
  int v12; // r8d
  unsigned int v13; // r9d
  int v14; // r14d
  int v15; // eax
  bool v16; // zf
  int v17; // edx
  bool v18; // zf
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  bool v23; // cf
  int v24; // eax
  bool v25; // zf
  int v26; // ecx
  unsigned int v27; // r9d
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  bool v31; // zf
  bool v32; // sf
  bool v33; // of
  bool v34; // sf
  bool v35; // of
  bool v36; // sf
  bool v37; // of
  bool v38; // zf
  bool v39; // sf
  bool v40; // of
  unsigned int v41; // r9d
  unsigned int v42; // r9d
  unsigned int v43; // r9d
  unsigned int v44; // r9d
  int v45; // ecx
  bool v46; // zf
  bool v47; // sf
  bool v48; // of
  __int64 v49; // rcx
  int v50; // ecx
  bool v51; // sf
  bool v52; // of
  __int64 v53; // rcx
  int v54; // ecx
  bool v55; // sf
  bool v56; // of
  __int64 v57; // rcx
  int v58; // ecx
  bool v59; // zf
  bool v60; // sf
  bool v61; // of
  __int64 v62; // rcx
  int v63; // ecx
  unsigned int v64; // r9d
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  unsigned int v67; // r9d
  unsigned int v68; // r9d
  unsigned int v69; // r9d
  unsigned int v70; // r9d
  unsigned int v71; // r9d
  unsigned int v72; // r9d
  unsigned int v73; // r9d
  unsigned int v74; // r9d
  unsigned int v75; // r9d
  bool v76; // zf
  __int64 v77; // rcx
  unsigned int v78; // r9d
  unsigned int v79; // r9d
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // r9d
  unsigned int v87; // r9d
  unsigned int v88; // r9d
  unsigned int v89; // r9d
  __m128i v90; // xmm1
  unsigned int v91; // eax
  double v92; // xmm1_8
  bool v93; // cf
  __m128i v94; // xmm0
  unsigned int v95; // eax
  double v96; // xmm0_8
  __m128i v97; // xmm0
  float v98; // xmm0_4
  __m128i v99; // xmm1
  unsigned int v100; // eax
  double v101; // xmm1_8
  bool v102; // cf
  bool v103; // zf
  __m128i v104; // xmm0
  unsigned int v105; // eax
  double v106; // xmm0_8
  __m128i v107; // xmm0
  unsigned int v108; // eax
  double v109; // xmm0_8
  float v110; // xmm1_4
  unsigned int v111; // r9d
  unsigned int v112; // r9d
  unsigned int v113; // r9d
  unsigned int v114; // r9d
  __m128i v115; // xmm1
  unsigned int v116; // eax
  float v117; // xmm1_4
  __m128i v118; // xmm1
  unsigned int v119; // eax
  float v120; // xmm1_4
  __m128i v121; // xmm0
  unsigned int v122; // eax
  float v123; // xmm0_4
  __m128i v124; // xmm0
  unsigned int v125; // eax
  float v126; // xmm0_4
  unsigned int v127; // r9d
  unsigned int v128; // r9d
  unsigned int v129; // r9d
  unsigned int v130; // r9d
  unsigned __int64 v131; // rcx
  bool v132; // cf
  bool v133; // zf
  unsigned __int64 v134; // rcx
  bool v135; // cf
  unsigned __int64 v136; // rcx
  unsigned __int64 v137; // rcx
  bool v138; // cf
  bool v139; // zf
  __int64 v140; // rcx
  unsigned int v141; // r9d
  unsigned int v142; // r9d
  unsigned int v143; // r9d
  unsigned int v144; // r9d
  unsigned int v145; // ecx
  unsigned int v146; // ecx
  unsigned int v147; // ecx
  unsigned int v148; // ecx
  int v149; // ecx
  unsigned int v150; // r9d
  unsigned int v151; // r9d
  unsigned int v152; // r9d
  unsigned int v153; // r9d
  int v154; // ecx
  int v155; // ecx
  int v156; // ecx
  int v157; // ecx
  unsigned int v158; // r9d
  unsigned int v159; // r9d
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  unsigned int v162; // r9d
  unsigned int v163; // r9d
  unsigned int v164; // r9d
  unsigned int v165; // r9d
  int v166; // edx
  int v167; // ecx
  int v168; // edx
  int v169; // ecx
  int v170; // edx
  int v171; // ecx
  int v172; // edx
  int v173; // ecx
  int v174; // edx
  int v175; // ecx
  unsigned int v176; // r9d
  unsigned int v177; // r9d
  unsigned int v178; // r9d
  unsigned int v179; // r9d
  wchar_t v180; // cx
  bool v181; // cf
  bool v182; // zf
  unsigned __int64 v183; // rcx
  bool v184; // cf
  unsigned __int64 v185; // rcx
  bool v186; // cf
  unsigned __int64 v187; // rcx
  wchar_t v188; // cx
  bool v189; // cf
  bool v190; // zf
  unsigned __int64 v191; // rcx
  wchar_t v192; // cx
  unsigned int v193; // r9d
  unsigned int v194; // r9d
  unsigned int v195; // r9d
  unsigned int v196; // r9d
  unsigned int v197; // r9d
  unsigned int v198; // r9d
  unsigned int v199; // r9d
  unsigned int v200; // r9d
  unsigned int v201; // r9d
  unsigned int v202; // r9d
  unsigned int v203; // r9d
  unsigned int v204; // r9d
  unsigned int v205; // r9d
  unsigned int v206; // r9d
  unsigned int v207; // r9d
  unsigned int v208; // r9d
  unsigned int v209; // eax
  unsigned int v210; // r9d
  unsigned int v211; // r9d
  unsigned int v212; // r9d
  unsigned int v213; // r9d
  unsigned int v214; // r9d
  unsigned int v215; // r9d
  unsigned int v216; // r9d
  unsigned int v217; // r9d
  unsigned int v218; // r9d
  unsigned int v219; // r9d
  unsigned int v220; // r9d
  unsigned int v221; // r9d
  unsigned int v222; // r9d
  unsigned int v223; // r9d
  unsigned int v224; // r9d
  unsigned int v225; // r9d
  unsigned int v226; // r9d
  unsigned int v227; // r9d
  unsigned int v228; // r9d
  unsigned int v229; // r9d
  unsigned int v230; // r9d
  unsigned int v231; // r9d
  unsigned int v232; // r9d
  unsigned int v233; // r9d
  wchar_t v234; // cx
  __int16 v235; // cx
  __int16 v236; // cx
  wchar_t v237; // cx
  unsigned int v238; // r9d
  unsigned int v239; // r9d
  unsigned int v240; // r9d
  unsigned int v241; // r9d
  unsigned int v242; // r9d
  unsigned int v243; // r9d
  unsigned int v244; // r9d
  unsigned int v245; // r9d
  unsigned int v246; // r9d
  unsigned int v247; // r9d
  unsigned int v248; // r9d
  unsigned int v249; // r9d
  unsigned int v250; // r9d
  unsigned int v251; // r9d
  unsigned int v252; // r9d
  unsigned int v253; // r9d
  unsigned int v254; // r9d
  unsigned int v255; // r9d
  unsigned int v256; // r9d
  unsigned int v257; // r9d
  unsigned int v258; // r9d
  unsigned int v259; // r9d
  unsigned int v260; // r9d
  unsigned int v261; // r9d
  unsigned int v262; // r9d
  unsigned int v263; // r9d
  unsigned int v264; // r9d
  unsigned int v265; // r9d
  unsigned int v266; // r9d
  unsigned int v267; // r9d
  unsigned int v268; // r9d
  unsigned int v269; // r9d
  wchar_t v270; // cx
  wchar_t v271; // cx
  __int16 v272; // cx
  unsigned int v273; // r9d
  unsigned int v274; // r9d
  unsigned int v275; // r9d
  unsigned int v276; // r9d
  __int16 v277; // dx
  __int16 v278; // dx
  __int16 v279; // dx
  __int16 v280; // dx
  unsigned int v281; // r9d
  unsigned int v282; // r9d
  unsigned int v283; // r9d
  unsigned int v284; // r9d
  unsigned int v285; // r9d
  unsigned int v286; // r9d
  unsigned int v287; // r9d
  unsigned int v288; // r9d
  unsigned int v289; // r9d
  unsigned int v290; // r9d
  unsigned int v291; // r9d
  unsigned int v292; // r9d
  unsigned int v293; // r9d
  unsigned int v294; // r9d
  unsigned int v295; // r9d
  unsigned int v296; // r9d
  unsigned int v297; // r9d
  unsigned int v298; // r9d
  unsigned int v299; // r9d
  unsigned int v300; // r9d
  unsigned int v301; // r9d
  unsigned int v302; // r9d
  unsigned int v303; // r9d
  unsigned int v304; // r9d
  unsigned int v305; // r9d
  unsigned int v306; // r9d
  unsigned int v307; // r9d
  unsigned int v308; // r9d
  unsigned int v309; // r9d
  unsigned int v310; // r9d
  unsigned int v311; // r9d
  unsigned int v312; // r9d
  unsigned int v313; // r9d
  unsigned int v314; // r9d
  unsigned int v315; // r9d
  unsigned int v316; // r9d
  unsigned int v317; // r9d
  unsigned int v318; // r9d
  unsigned int v319; // r9d
  unsigned int v320; // r9d
  unsigned int v321; // r9d
  unsigned int v322; // r9d
  unsigned int v323; // r9d
  unsigned int v324; // r9d
  unsigned int v325; // r9d
  unsigned int v326; // r9d
  unsigned int v327; // r9d
  unsigned int v328; // r9d
  unsigned int v329; // r9d
  unsigned int v330; // r9d
  unsigned int v331; // r9d
  unsigned int v332; // r9d
  unsigned int v333; // r9d
  unsigned int v334; // r9d
  unsigned int v335; // r9d
  unsigned int v336; // r9d
  unsigned int v337; // r9d
  unsigned int v338; // r9d
  unsigned int v339; // r9d
  unsigned int v340; // r9d
  unsigned int v341; // r9d
  unsigned int v342; // r9d
  unsigned int v343; // r9d
  unsigned int v344; // r9d
  unsigned int v345; // r9d
  unsigned int v346; // r9d
  unsigned int v347; // r9d
  unsigned int v348; // r9d
  unsigned int v349; // r9d
  unsigned int v350; // ecx
  unsigned int v351; // ecx
  unsigned int v352; // ecx
  unsigned int v353; // ecx
  unsigned int v354; // r9d
  unsigned int v355; // r9d
  unsigned int v356; // r9d
  unsigned int v357; // r9d
  unsigned int v358; // r9d
  unsigned int v359; // r9d
  unsigned int v360; // r9d
  unsigned int v361; // r9d
  unsigned int v362; // r9d
  unsigned int v363; // r9d
  unsigned int v364; // r9d
  unsigned int v365; // r9d
  unsigned int v366; // r9d
  unsigned int v367; // r9d
  unsigned int v368; // r9d
  unsigned int v369; // r9d
  unsigned int v370; // r9d
  unsigned int v371; // r9d
  unsigned int v372; // r9d
  unsigned int v373; // r9d
  unsigned int v374; // r9d
  unsigned int v375; // r9d
  unsigned int v376; // r9d
  unsigned int v377; // r9d
  unsigned int v378; // r9d
  unsigned int v379; // r9d
  unsigned int v380; // r9d
  unsigned int v381; // r9d
  bool v382; // zf
  bool v383; // zf
  unsigned int v384; // r9d
  unsigned int v385; // r9d
  unsigned int v386; // r9d
  unsigned int v387; // r9d
  double v388; // xmm0_8
  double v389; // xmm1_8
  double v390; // xmm0_8
  double v391; // xmm1_8
  double v392; // xmm1_8
  unsigned int v393; // r9d
  unsigned int v394; // r9d
  unsigned int v395; // r9d
  unsigned int v396; // r9d
  __m128i v397; // xmm0
  unsigned int v398; // ecx
  __m128i v399; // xmm1
  unsigned int v400; // ecx
  __m128i v401; // xmm0
  unsigned int v402; // ecx
  __m128i v403; // xmm1
  unsigned int v404; // ecx
  __m128i v405; // xmm1
  unsigned int v406; // ecx
  unsigned int v407; // r9d
  unsigned int v408; // r9d
  unsigned int v409; // r9d
  unsigned int v410; // r9d
  unsigned int v411; // r9d
  unsigned int v412; // r9d
  unsigned int v413; // r9d
  unsigned int v414; // r9d
  unsigned int v415; // r9d
  unsigned int v416; // r9d
  unsigned int v417; // r9d
  unsigned int v418; // r9d
  unsigned int v419; // r9d
  unsigned int v420; // r9d
  unsigned int v421; // r9d
  unsigned int v422; // r9d
  unsigned int v423; // r9d
  unsigned int v424; // r9d
  unsigned int v425; // r9d
  unsigned int v426; // r9d
  unsigned int v427; // r9d
  unsigned int v428; // r9d
  unsigned int v429; // r9d
  unsigned int v430; // r9d
  unsigned int v431; // r9d
  unsigned int v432; // r9d
  unsigned int v433; // r9d
  unsigned int v434; // r9d
  unsigned int v435; // r9d
  unsigned int v436; // r9d
  unsigned int v437; // r9d
  unsigned int v438; // r9d
  unsigned int v439; // r9d
  unsigned int v440; // r9d
  unsigned int v441; // r9d
  unsigned int v442; // r9d
  float v443; // xmm0_4
  float v444; // xmm1_4
  float v445; // xmm0_4
  float v446; // xmm1_4
  unsigned int v447; // r9d
  unsigned int v448; // r9d
  unsigned int v449; // r9d
  unsigned int v450; // r9d
  __m128i v451; // xmm0
  unsigned int v452; // ecx
  __m128i v453; // xmm1
  unsigned int v454; // ecx
  __m128i v455; // xmm0
  unsigned int v456; // ecx
  __m128i v457; // xmm1
  unsigned int v458; // ecx
  __m128i v459; // xmm1
  unsigned int v460; // ecx
  unsigned int v461; // r9d
  unsigned int v462; // r9d
  unsigned int v463; // r9d
  unsigned int v464; // r9d
  unsigned int v465; // r9d
  unsigned int v466; // r9d
  unsigned int v467; // r9d
  unsigned int v468; // r9d
  unsigned int v469; // r9d
  unsigned int v470; // r9d
  unsigned int v471; // r9d
  unsigned int v472; // r9d
  unsigned int v473; // r9d
  unsigned int v474; // r9d
  unsigned int v475; // r9d
  unsigned int v476; // r9d
  unsigned int v477; // r9d
  unsigned int v478; // r9d
  unsigned int v479; // r9d
  unsigned int v480; // r9d
  unsigned int v481; // r9d
  unsigned int v482; // r9d
  unsigned int v483; // r9d
  unsigned int v484; // r9d
  unsigned int v485; // r9d
  unsigned int v486; // r9d
  unsigned int v487; // r9d
  unsigned int v488; // r9d
  unsigned int v489; // r9d
  unsigned int v490; // r9d
  unsigned int v491; // r9d
  unsigned int v492; // r9d
  unsigned int v493; // r9d
  unsigned int v494; // r9d
  unsigned int v495; // r9d
  unsigned int v496; // r9d
  unsigned int v497; // r9d
  unsigned int v498; // r9d
  unsigned int v499; // r9d
  unsigned int v500; // r9d
  unsigned int v501; // r9d
  unsigned int v502; // r9d
  unsigned int v503; // r9d
  unsigned int v504; // r9d
  unsigned int v505; // r9d
  unsigned int v506; // r9d
  unsigned int v507; // r9d
  unsigned int v508; // r9d
  unsigned int v509; // r9d
  unsigned int v510; // r9d
  unsigned int v511; // r9d
  unsigned int v512; // r9d
  unsigned int v513; // r9d
  unsigned int v514; // r9d
  unsigned int v515; // r9d
  unsigned int v516; // r9d
  unsigned int v517; // r9d
  unsigned int v518; // r9d
  unsigned int v519; // r9d
  unsigned int v520; // r9d
  unsigned int v521; // r9d
  unsigned int v522; // r9d
  unsigned int v523; // r9d
  unsigned int v524; // r9d
  unsigned int v525; // r9d
  unsigned int v526; // r9d
  unsigned int v527; // r9d
  unsigned int v528; // r9d
  unsigned int v529; // r9d
  unsigned int v530; // r9d
  unsigned int v531; // r9d
  unsigned int v532; // r9d
  unsigned int v533; // r9d
  unsigned int v534; // r9d
  unsigned int v535; // r9d
  unsigned int v536; // r9d
  unsigned int v537; // r9d
  unsigned int v538; // r9d
  unsigned int v539; // r9d
  unsigned int v540; // r9d
  unsigned int v541; // r9d
  unsigned int v542; // r9d
  unsigned int v543; // r9d
  unsigned int v544; // r9d
  unsigned int v545; // r9d
  unsigned int v546; // r9d
  unsigned int v547; // r9d
  unsigned int v548; // r9d
  unsigned int v549; // r9d
  unsigned int v550; // r9d
  unsigned int v551; // r9d
  unsigned int v552; // r9d
  unsigned int v553; // r9d
  unsigned int v554; // r9d
  unsigned int v555; // r9d
  unsigned int v556; // r9d
  unsigned int v557; // r9d
  unsigned int v558; // r9d
  unsigned int v559; // r9d
  unsigned int v560; // r9d
  unsigned int v561; // r9d
  unsigned int v562; // r9d
  unsigned int v563; // r9d
  unsigned int v564; // r9d
  unsigned int v565; // r9d
  unsigned int v566; // r9d
  unsigned int v567; // r9d
  unsigned int v568; // r9d
  unsigned int v569; // eax
  bool v570; // zf
  __int64 v571; // rcx

  v8 = a3;
  v9 = 0;
  v10 = 0;
  v11 = a4 & 0x10000;
  v12 = a4 & 0x20000;
  v13 = a4 & 0xF000FFFF;
  *a8 = 0;
  if ( v12 && a1 != 18 && a1 != 8210 && a1 != 25 )
  {
    v10 = -1073741637;
    goto LABEL_1357;
  }
  v14 = 1;
  if ( v13 == 1 )
  {
    *a8 = a1 != 0;
    goto LABEL_1357;
  }
  if ( a1 && a5 )
  {
    if ( a1 > 0x1003 )
    {
      if ( a1 == 4109 )
      {
        if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
          goto LABEL_1354;
        if ( v13 == 2 )
          goto LABEL_1355;
        if ( v13 != 0x10000000 )
          goto LABEL_1354;
        v15 = ArrayContains((__int64)a2, v8, (__int64)Str2, a7);
      }
      else
      {
        if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
          goto LABEL_1354;
        switch ( v13 )
        {
          case 0x1000u:
            v15 = StringListContains(a2);
            break;
          case 2u:
            v383 = v12 == 0;
LABEL_843:
            if ( !v383 )
              goto LABEL_1354;
            goto LABEL_1355;
          case 0x2000u:
          case 0x3000u:
          case 0x4000u:
            v15 = StringListElementSubstringMatch((_DWORD)a2, a5, (_DWORD)Str2, v12, v13);
            break;
          default:
            goto LABEL_1354;
        }
      }
      goto LABEL_21;
    }
    if ( a1 == 4099 )
    {
LABEL_841:
      v383 = v13 == 2;
      goto LABEL_843;
    }
    if ( a1 <= 0xD )
    {
      if ( a1 == 13 )
      {
        if ( a5 == 13 && v13 == 2 )
        {
          if ( *(_DWORD *)a2 == *(_DWORD *)Str2
            && *((_DWORD *)a2 + 1) == *((_DWORD *)Str2 + 1)
            && *((_DWORD *)a2 + 2) == *((_DWORD *)Str2 + 2) )
          {
            v18 = *((_DWORD *)a2 + 3) == *((_DWORD *)Str2 + 3);
            goto LABEL_37;
          }
LABEL_13:
          v14 = 0;
LABEL_14:
          *a8 = v14;
          goto LABEL_1357;
        }
LABEL_1354:
        v10 = -1073741637;
        goto LABEL_1357;
      }
      if ( a1 <= 7 )
      {
        if ( a1 == 7 )
        {
          if ( v13 - 7 > 1 )
          {
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                if ( a5 != 2 )
                {
                  if ( a5 != 3 )
                  {
                    if ( a5 != 4 )
                    {
                      if ( a5 != 5 )
                      {
                        v19 = a5 - 6;
                        if ( a5 == 6 )
                          goto LABEL_50;
                        goto LABEL_49;
                      }
                      v346 = v13 - 2;
                      if ( v346 )
                      {
                        v347 = v346 - 1;
                        if ( v347 )
                        {
                          v348 = v347 - 1;
                          if ( v348 )
                          {
                            v349 = v348 - 1;
                            if ( v349 )
                            {
                              if ( v349 != 1 )
                                goto LABEL_1354;
                              v350 = *Str2;
                              goto LABEL_751;
                            }
                            v351 = *Str2;
                            goto LABEL_754;
                          }
                          v352 = *Str2;
                          goto LABEL_757;
                        }
                        v353 = *Str2;
                        goto LABEL_760;
                      }
                      goto LABEL_123;
                    }
                    v354 = v13 - 2;
                    if ( v354 )
                    {
                      v355 = v354 - 1;
                      if ( v355 )
                      {
                        v356 = v355 - 1;
                        if ( v356 )
                        {
                          v357 = v356 - 1;
                          if ( v357 )
                          {
                            if ( v357 != 1 )
                              goto LABEL_1354;
                            v350 = (__int16)*Str2;
                            goto LABEL_751;
                          }
                          v351 = (__int16)*Str2;
LABEL_754:
                          v184 = *(_DWORD *)a2 < v351;
                          goto LABEL_341;
                        }
                        v352 = (__int16)*Str2;
LABEL_757:
                        v186 = *(_DWORD *)a2 < v352;
                        goto LABEL_345;
                      }
                      v353 = (__int16)*Str2;
LABEL_760:
                      v189 = *(_DWORD *)a2 < v353;
                      v190 = *(_DWORD *)a2 == v353;
                      goto LABEL_349;
                    }
LABEL_133:
                    v63 = (__int16)*Str2;
                    goto LABEL_151;
                  }
                  v358 = v13 - 2;
                  if ( v358 )
                  {
                    v359 = v358 - 1;
                    if ( !v359 )
                    {
                      v353 = *(unsigned __int8 *)Str2;
                      goto LABEL_760;
                    }
                    v360 = v359 - 1;
                    if ( !v360 )
                    {
                      v352 = *(unsigned __int8 *)Str2;
                      goto LABEL_757;
                    }
                    v361 = v360 - 1;
                    if ( !v361 )
                    {
                      v351 = *(unsigned __int8 *)Str2;
                      goto LABEL_754;
                    }
                    if ( v361 != 1 )
                      goto LABEL_1354;
                    v350 = *(unsigned __int8 *)Str2;
                    goto LABEL_751;
                  }
LABEL_143:
                  v63 = *(unsigned __int8 *)Str2;
                  goto LABEL_151;
                }
                v362 = v13 - 2;
                if ( v362 )
                {
                  v363 = v362 - 1;
                  if ( !v363 )
                  {
                    v353 = *(char *)Str2;
                    goto LABEL_760;
                  }
                  v364 = v363 - 1;
                  if ( !v364 )
                  {
                    v352 = *(char *)Str2;
                    goto LABEL_757;
                  }
                  v365 = v364 - 1;
                  if ( !v365 )
                  {
                    v351 = *(char *)Str2;
                    goto LABEL_754;
                  }
                  if ( v365 != 1 )
                    goto LABEL_1354;
                  v350 = *(char *)Str2;
LABEL_751:
                  v181 = *(_DWORD *)a2 < v350;
                  v182 = *(_DWORD *)a2 == v350;
                  goto LABEL_337;
                }
LABEL_150:
                v63 = *(char *)Str2;
                goto LABEL_151;
              }
LABEL_791:
              v366 = v13 - 2;
              if ( v366 )
              {
                v367 = v366 - 1;
                if ( v367 )
                {
                  v368 = v367 - 1;
                  if ( v368 )
                  {
                    v369 = v368 - 1;
                    if ( v369 )
                    {
                      if ( v369 != 1 )
                        goto LABEL_1354;
                      v82 = *(unsigned int *)a2;
LABEL_797:
                      v33 = __OFSUB__(v82, *(_QWORD *)Str2);
                      v31 = v82 == *(_QWORD *)Str2;
                      v32 = v82 - *(_QWORD *)Str2 < 0;
                      goto LABEL_86;
                    }
                    v83 = *(unsigned int *)a2;
                    goto LABEL_799;
                  }
                  v84 = *(unsigned int *)a2;
                  goto LABEL_801;
                }
                v85 = *(unsigned int *)a2;
                goto LABEL_803;
              }
              goto LABEL_734;
            }
            if ( a5 != 9 )
            {
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                    goto LABEL_791;
                  if ( a5 != 15 )
                    goto LABEL_1354;
                }
                v370 = v13 - 2;
                if ( v370 )
                {
                  v371 = v370 - 1;
                  if ( v371 )
                  {
                    v372 = v371 - 1;
                    if ( v372 )
                    {
                      v373 = v372 - 1;
                      if ( v373 )
                      {
                        if ( v373 != 1 )
                          goto LABEL_1354;
                        v92 = (double)*(int *)a2;
                        goto LABEL_178;
                      }
                      v96 = (double)*(int *)a2;
LABEL_184:
                      v93 = v96 < *(double *)Str2;
                      goto LABEL_188;
                    }
                    v101 = (double)*(int *)a2;
                    goto LABEL_194;
                  }
                  v106 = (double)*(int *)a2;
LABEL_200:
                  v102 = v106 < *(double *)Str2;
                  v103 = v106 == *(double *)Str2;
                  goto LABEL_202;
                }
                v109 = (double)*(int *)a2;
                goto LABEL_208;
              }
              v374 = v13 - 2;
              if ( v374 )
              {
                v375 = v374 - 1;
                if ( v375 )
                {
                  v376 = v375 - 1;
                  if ( v376 )
                  {
                    v377 = v376 - 1;
                    if ( v377 )
                    {
                      if ( v377 != 1 )
                        goto LABEL_1354;
                      v117 = (float)*(int *)a2;
                      goto LABEL_219;
                    }
                    v98 = (float)*(int *)a2;
LABEL_187:
                    v93 = v98 < *(float *)Str2;
                    goto LABEL_188;
                  }
                  v120 = (float)*(int *)a2;
LABEL_225:
                  v102 = *(float *)Str2 < v120;
                  v103 = *(float *)Str2 == v120;
                  goto LABEL_202;
                }
                v123 = (float)*(int *)a2;
LABEL_231:
                v102 = v123 < *(float *)Str2;
                v103 = v123 == *(float *)Str2;
                goto LABEL_202;
              }
              v126 = (float)*(int *)a2;
              goto LABEL_237;
            }
            v378 = v13 - 2;
            if ( !v378 )
            {
LABEL_734:
              v140 = *(unsigned int *)a2;
              goto LABEL_735;
            }
            v379 = v378 - 1;
            if ( v379 )
            {
              v380 = v379 - 1;
              if ( v380 )
              {
                v381 = v380 - 1;
                if ( v381 )
                {
                  if ( v381 != 1 )
                    goto LABEL_1354;
                  v131 = *(unsigned int *)a2;
LABEL_244:
                  v132 = v131 < *(_QWORD *)Str2;
                  v133 = v131 == *(_QWORD *)Str2;
                  goto LABEL_245;
                }
                v134 = *(unsigned int *)a2;
                goto LABEL_248;
              }
              v136 = *(unsigned int *)a2;
              goto LABEL_253;
            }
            v137 = *(unsigned int *)a2;
            goto LABEL_256;
          }
          if ( a5 != 7 )
            goto LABEL_1354;
          if ( v13 != 7 )
          {
            v15 = *(_DWORD *)Str2 | *(_DWORD *)a2;
            goto LABEL_21;
          }
          v26 = *(_DWORD *)Str2 & *(_DWORD *)a2;
LABEL_63:
          *a8 = v26;
          goto LABEL_1357;
        }
        if ( a1 != 1 )
        {
          if ( a1 != 2 )
          {
            if ( a1 != 3 )
            {
              if ( a1 != 4 )
              {
                if ( a1 != 5 )
                {
                  if ( a5 <= 8 )
                  {
                    if ( a5 != 8 )
                    {
                      switch ( a5 )
                      {
                        case 2u:
                          v72 = v13 - 2;
                          if ( !v72 )
                            goto LABEL_150;
                          v73 = v72 - 1;
                          if ( !v73 )
                          {
                            v58 = *(char *)Str2;
                            goto LABEL_119;
                          }
                          v74 = v73 - 1;
                          if ( !v74 )
                          {
                            v54 = *(char *)Str2;
                            goto LABEL_113;
                          }
                          v75 = v74 - 1;
                          if ( !v75 )
                          {
                            v50 = *(char *)Str2;
                            goto LABEL_107;
                          }
                          if ( v75 != 1 )
                            goto LABEL_1354;
                          v45 = *(char *)Str2;
                          break;
                        case 3u:
                          v68 = v13 - 2;
                          if ( !v68 )
                            goto LABEL_143;
                          v69 = v68 - 1;
                          if ( !v69 )
                          {
                            v58 = *(unsigned __int8 *)Str2;
                            goto LABEL_119;
                          }
                          v70 = v69 - 1;
                          if ( !v70 )
                          {
                            v54 = *(unsigned __int8 *)Str2;
                            goto LABEL_113;
                          }
                          v71 = v70 - 1;
                          if ( !v71 )
                          {
                            v50 = *(unsigned __int8 *)Str2;
                            goto LABEL_107;
                          }
                          if ( v71 != 1 )
                            goto LABEL_1354;
                          v45 = *(unsigned __int8 *)Str2;
                          break;
                        case 4u:
                          v64 = v13 - 2;
                          if ( !v64 )
                            goto LABEL_133;
                          v65 = v64 - 1;
                          if ( v65 )
                          {
                            v66 = v65 - 1;
                            if ( v66 )
                            {
                              v67 = v66 - 1;
                              if ( v67 )
                              {
                                if ( v67 != 1 )
                                  goto LABEL_1354;
                                v45 = (__int16)*Str2;
                                break;
                              }
                              v50 = (__int16)*Str2;
LABEL_107:
                              v52 = __OFSUB__(*(_DWORD *)a2, v50);
                              v51 = *(_DWORD *)a2 - v50 < 0;
                              goto LABEL_110;
                            }
                            v54 = (__int16)*Str2;
LABEL_113:
                            v56 = __OFSUB__(*(_DWORD *)a2, v54);
                            v55 = *(_DWORD *)a2 - v54 < 0;
                            goto LABEL_116;
                          }
                          v58 = (__int16)*Str2;
LABEL_119:
                          v61 = __OFSUB__(*(_DWORD *)a2, v58);
                          v59 = *(_DWORD *)a2 == v58;
                          v60 = *(_DWORD *)a2 - v58 < 0;
                          goto LABEL_122;
                        case 5u:
                          v41 = v13 - 2;
                          if ( !v41 )
                          {
LABEL_123:
                            v63 = *Str2;
LABEL_151:
                            v76 = *(_DWORD *)a2 == v63;
LABEL_154:
                            v15 = v76;
                            goto LABEL_21;
                          }
                          v42 = v41 - 1;
                          if ( v42 )
                          {
                            v43 = v42 - 1;
                            if ( v43 )
                            {
                              v44 = v43 - 1;
                              if ( v44 )
                              {
                                if ( v44 != 1 )
                                  goto LABEL_1354;
                                v45 = *Str2;
                                break;
                              }
                              v50 = *Str2;
                              goto LABEL_107;
                            }
                            v54 = *Str2;
                            goto LABEL_113;
                          }
                          v58 = *Str2;
                          goto LABEL_119;
                        default:
                          v19 = a5 - 6;
                          if ( a5 != 6 )
                          {
LABEL_49:
                            if ( v19 != 1 )
                              goto LABEL_1354;
LABEL_50:
                            v20 = v13 - 2;
                            if ( v20 )
                            {
                              v21 = v20 - 1;
                              if ( v21 )
                              {
                                v22 = v21 - 1;
                                if ( !v22 )
                                {
                                  v23 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_54:
                                  v17 = v23;
                                  goto LABEL_32;
                                }
                                v345 = v22 - 1;
                                if ( v345 )
                                {
                                  if ( v345 != 1 )
                                    goto LABEL_1354;
                                  v132 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                                  v133 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                  goto LABEL_245;
                                }
                                v135 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_250:
                                v17 = !v135;
                                goto LABEL_32;
                              }
                              v138 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                              v139 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                              goto LABEL_258;
                            }
                            goto LABEL_64;
                          }
                          v27 = v13 - 2;
                          if ( v27 )
                          {
                            v28 = v27 - 1;
                            if ( v28 )
                            {
                              v29 = v28 - 1;
                              if ( v29 )
                              {
                                v30 = v29 - 1;
                                if ( v30 )
                                {
                                  if ( v30 != 1 )
                                    goto LABEL_1354;
                                  v33 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                  v31 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                  v32 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                                  goto LABEL_86;
                                }
                                v35 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                v34 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                                goto LABEL_89;
                              }
                              v37 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                              v36 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_92:
                              v17 = v36 ^ v37;
                              goto LABEL_32;
                            }
                            v40 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                            v38 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                            v39 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_95:
                            v17 = !(v39 ^ v40 | v38);
                            goto LABEL_32;
                          }
LABEL_64:
                          v16 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                          goto LABEL_31;
                      }
                      v48 = __OFSUB__(*(_DWORD *)a2, v45);
                      v46 = *(_DWORD *)a2 == v45;
                      v47 = *(_DWORD *)a2 - v45 < 0;
LABEL_104:
                      v15 = v47 ^ v48 | v46;
                      goto LABEL_21;
                    }
LABEL_161:
                    v78 = v13 - 2;
                    if ( v78 )
                    {
                      v79 = v78 - 1;
                      if ( v79 )
                      {
                        v80 = v79 - 1;
                        if ( v80 )
                        {
                          v81 = v80 - 1;
                          if ( v81 )
                          {
                            if ( v81 != 1 )
                              goto LABEL_1354;
                            v82 = *(int *)a2;
                            goto LABEL_797;
                          }
                          v83 = *(int *)a2;
LABEL_799:
                          v35 = __OFSUB__(v83, *(_QWORD *)Str2);
                          v34 = v83 - *(_QWORD *)Str2 < 0;
                          goto LABEL_89;
                        }
                        v84 = *(int *)a2;
                        goto LABEL_801;
                      }
                      v85 = *(int *)a2;
                      goto LABEL_803;
                    }
                    goto LABEL_259;
                  }
                  if ( a5 == 9 )
                  {
                    v127 = v13 - 2;
                    if ( v127 )
                    {
                      v128 = v127 - 1;
                      if ( v128 )
                      {
                        v129 = v128 - 1;
                        if ( v129 )
                        {
                          v130 = v129 - 1;
                          if ( v130 )
                          {
                            if ( v130 != 1 )
                              goto LABEL_1354;
                            v131 = *(int *)a2;
                            goto LABEL_244;
                          }
                          v134 = *(int *)a2;
                          goto LABEL_248;
                        }
                        v136 = *(int *)a2;
                        goto LABEL_253;
                      }
                      v137 = *(int *)a2;
                      goto LABEL_256;
                    }
LABEL_259:
                    v140 = *(int *)a2;
LABEL_735:
                    v16 = v140 == *(_QWORD *)Str2;
                    goto LABEL_31;
                  }
                  if ( a5 != 10 )
                  {
                    if ( a5 != 11 )
                    {
                      if ( a5 == 14 )
                        goto LABEL_161;
                      if ( a5 != 15 )
                        goto LABEL_1354;
                    }
                    v86 = v13 - 2;
                    if ( v86 )
                    {
                      v87 = v86 - 1;
                      if ( v87 )
                      {
                        v88 = v87 - 1;
                        if ( v88 )
                        {
                          v89 = v88 - 1;
                          if ( v89 )
                          {
                            if ( v89 != 1 )
                              goto LABEL_1354;
                            v90 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                            goto LABEL_177;
                          }
                          v94 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_182:
                          *(_QWORD *)&v96 = *(_OWORD *)&_mm_cvtepi32_pd(v94);
                          goto LABEL_184;
                        }
                        v99 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_192;
                      }
                      v104 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_198:
                      *(_QWORD *)&v106 = *(_OWORD *)&_mm_cvtepi32_pd(v104);
                      goto LABEL_200;
                    }
                    v107 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                    goto LABEL_206;
                  }
                  v111 = v13 - 2;
                  if ( v111 )
                  {
                    v112 = v111 - 1;
                    if ( v112 )
                    {
                      v113 = v112 - 1;
                      if ( v113 )
                      {
                        v114 = v113 - 1;
                        if ( v114 )
                        {
                          if ( v114 != 1 )
                            goto LABEL_1354;
                          v115 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_218;
                        }
                        v97 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_186:
                        LODWORD(v98) = _mm_cvtepi32_ps(v97).m128_u32[0];
                        goto LABEL_187;
                      }
                      v118 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_223:
                      LODWORD(v120) = _mm_cvtepi32_ps(v118).m128_u32[0];
                      goto LABEL_225;
                    }
                    v121 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_229:
                    LODWORD(v123) = _mm_cvtepi32_ps(v121).m128_u32[0];
                    goto LABEL_231;
                  }
                  v124 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                  goto LABEL_235;
                }
                if ( a5 <= 8 )
                {
                  if ( a5 != 8 )
                  {
                    if ( a5 != 2 )
                    {
                      if ( a5 != 3 )
                      {
                        if ( a5 != 4 )
                        {
                          if ( a5 != 5 )
                          {
                            if ( a5 != 6 )
                            {
                              if ( a5 != 7 )
                                goto LABEL_1354;
                              v141 = v13 - 2;
                              if ( v141 )
                              {
                                v142 = v141 - 1;
                                if ( v142 )
                                {
                                  v143 = v142 - 1;
                                  if ( v143 )
                                  {
                                    v144 = v143 - 1;
                                    if ( v144 )
                                    {
                                      if ( v144 != 1 )
                                        goto LABEL_1354;
                                      v145 = *a2;
                                      goto LABEL_274;
                                    }
                                    v146 = *a2;
LABEL_277:
                                    v135 = v146 < *(_DWORD *)Str2;
                                    goto LABEL_250;
                                  }
                                  v147 = *a2;
LABEL_280:
                                  v23 = v147 < *(_DWORD *)Str2;
                                  goto LABEL_54;
                                }
                                v148 = *a2;
LABEL_283:
                                v138 = v148 < *(_DWORD *)Str2;
                                v139 = v148 == *(_DWORD *)Str2;
                                goto LABEL_258;
                              }
                              goto LABEL_284;
                            }
                            v150 = v13 - 2;
                            if ( !v150 )
                            {
LABEL_284:
                              v149 = *a2;
LABEL_286:
                              v16 = v149 == *(_DWORD *)Str2;
                              goto LABEL_31;
                            }
                            v151 = v150 - 1;
                            if ( v151 )
                            {
                              v152 = v151 - 1;
                              if ( v152 )
                              {
                                v153 = v152 - 1;
                                if ( v153 )
                                {
                                  if ( v153 != 1 )
                                    goto LABEL_1354;
                                  v154 = *a2;
                                  goto LABEL_293;
                                }
                                v155 = *a2;
LABEL_296:
                                v35 = __OFSUB__(v155, *(_DWORD *)Str2);
                                v34 = v155 - *(_DWORD *)Str2 < 0;
                                goto LABEL_89;
                              }
                              v156 = *a2;
LABEL_299:
                              v37 = __OFSUB__(v156, *(_DWORD *)Str2);
                              v36 = v156 - *(_DWORD *)Str2 < 0;
                              goto LABEL_92;
                            }
                            v157 = *a2;
LABEL_302:
                            v40 = __OFSUB__(v157, *(_DWORD *)Str2);
                            v38 = v157 == *(_DWORD *)Str2;
                            v39 = v157 - *(_DWORD *)Str2 < 0;
                            goto LABEL_95;
                          }
                          v158 = v13 - 2;
                          if ( v158 )
                          {
                            v159 = v158 - 1;
                            if ( v159 )
                            {
                              v160 = v159 - 1;
                              if ( !v160 )
                              {
                                v23 = *a2 < *Str2;
                                goto LABEL_54;
                              }
                              v161 = v160 - 1;
                              if ( v161 )
                              {
                                if ( v161 != 1 )
                                  goto LABEL_1354;
                                v132 = *a2 < *Str2;
                                v133 = *a2 == *Str2;
                                goto LABEL_245;
                              }
                              v135 = *a2 < *Str2;
                              goto LABEL_250;
                            }
                            v138 = *a2 < *Str2;
                            v139 = *a2 == *Str2;
                            goto LABEL_258;
                          }
LABEL_312:
                          v16 = *a2 == *Str2;
                          goto LABEL_31;
                        }
                        v162 = v13 - 2;
                        if ( v162 )
                        {
                          v163 = v162 - 1;
                          if ( v163 )
                          {
                            v164 = v163 - 1;
                            if ( v164 )
                            {
                              v165 = v164 - 1;
                              if ( v165 )
                              {
                                if ( v165 != 1 )
                                  goto LABEL_1354;
                                v166 = *a2;
                                v167 = (__int16)*Str2;
                                goto LABEL_319;
                              }
                              v168 = *a2;
                              v169 = (__int16)*Str2;
LABEL_322:
                              v52 = __OFSUB__(v168, v169);
                              v51 = v168 - v169 < 0;
                              goto LABEL_110;
                            }
                            v170 = *a2;
                            v171 = (__int16)*Str2;
LABEL_325:
                            v56 = __OFSUB__(v170, v171);
                            v55 = v170 - v171 < 0;
                            goto LABEL_116;
                          }
                          v172 = *a2;
                          v173 = (__int16)*Str2;
LABEL_328:
                          v61 = __OFSUB__(v172, v173);
                          v59 = v172 == v173;
                          v60 = v172 - v173 < 0;
                          goto LABEL_122;
                        }
                        v174 = *a2;
                        v175 = (__int16)*Str2;
LABEL_373:
                        v76 = v174 == v175;
                        goto LABEL_154;
                      }
                      v176 = v13 - 2;
                      if ( v176 )
                      {
                        v177 = v176 - 1;
                        if ( v177 )
                        {
                          v178 = v177 - 1;
                          if ( v178 )
                          {
                            v179 = v178 - 1;
                            if ( v179 )
                            {
                              if ( v179 != 1 )
                                goto LABEL_1354;
                              v180 = *(unsigned __int8 *)Str2;
                              v181 = *a2 < v180;
                              v182 = *a2 == v180;
                              goto LABEL_337;
                            }
                            v184 = *a2 < *(unsigned __int8 *)Str2;
LABEL_341:
                            v15 = !v184;
                            goto LABEL_21;
                          }
                          v186 = *a2 < *(unsigned __int8 *)Str2;
LABEL_345:
                          v15 = v186;
                          goto LABEL_21;
                        }
                        v188 = *(unsigned __int8 *)Str2;
                        v189 = *a2 < v188;
                        v190 = *a2 == v188;
LABEL_349:
                        v15 = !v189 && !v190;
                        goto LABEL_21;
                      }
                      goto LABEL_350;
                    }
                    v193 = v13 - 2;
                    if ( v193 )
                    {
                      v194 = v193 - 1;
                      if ( v194 )
                      {
                        v195 = v194 - 1;
                        if ( v195 )
                        {
                          v196 = v195 - 1;
                          if ( v196 )
                          {
                            if ( v196 != 1 )
                              goto LABEL_1354;
                            v166 = *a2;
                            goto LABEL_359;
                          }
                          v168 = *a2;
                          goto LABEL_362;
                        }
                        v170 = *a2;
                        goto LABEL_365;
                      }
                      v172 = *a2;
                      goto LABEL_368;
                    }
                    v174 = *a2;
                    goto LABEL_371;
                  }
                  goto LABEL_380;
                }
                if ( a5 == 9 )
                {
                  v210 = v13 - 2;
                  if ( v210 )
                  {
                    v211 = v210 - 1;
                    if ( v211 )
                    {
                      v212 = v211 - 1;
                      if ( v212 )
                      {
                        v213 = v212 - 1;
                        if ( v213 )
                        {
                          if ( v213 != 1 )
                            goto LABEL_1354;
                          v131 = *a2;
                          goto LABEL_244;
                        }
                        v134 = *a2;
                        goto LABEL_248;
                      }
                      v136 = *a2;
                      goto LABEL_253;
                    }
                    v137 = *a2;
                    goto LABEL_256;
                  }
LABEL_413:
                  v140 = *a2;
                  goto LABEL_735;
                }
                if ( a5 != 10 )
                {
                  if ( a5 != 11 )
                  {
                    if ( a5 == 14 )
                    {
LABEL_380:
                      v197 = v13 - 2;
                      if ( v197 )
                      {
                        v198 = v197 - 1;
                        if ( v198 )
                        {
                          v199 = v198 - 1;
                          if ( v199 )
                          {
                            v200 = v199 - 1;
                            if ( v200 )
                            {
                              if ( v200 != 1 )
                                goto LABEL_1354;
                              v82 = *a2;
                              goto LABEL_797;
                            }
                            v83 = *a2;
                            goto LABEL_799;
                          }
                          v84 = *a2;
LABEL_801:
                          v37 = __OFSUB__(v84, *(_QWORD *)Str2);
                          v36 = v84 - *(_QWORD *)Str2 < 0;
                          goto LABEL_92;
                        }
                        v85 = *a2;
LABEL_803:
                        v40 = __OFSUB__(v85, *(_QWORD *)Str2);
                        v38 = v85 == *(_QWORD *)Str2;
                        v39 = v85 - *(_QWORD *)Str2 < 0;
                        goto LABEL_95;
                      }
                      goto LABEL_413;
                    }
                    if ( a5 != 15 )
                      goto LABEL_1354;
                  }
                  v201 = v13 - 2;
                  if ( v201 )
                  {
                    v202 = v201 - 1;
                    if ( v202 )
                    {
                      v203 = v202 - 1;
                      if ( v203 )
                      {
                        v204 = v203 - 1;
                        if ( v204 )
                        {
                          if ( v204 != 1 )
                            goto LABEL_1354;
                          v91 = *a2;
                          goto LABEL_176;
                        }
                        v95 = *a2;
LABEL_181:
                        v94 = _mm_cvtsi32_si128(v95);
                        goto LABEL_182;
                      }
                      v100 = *a2;
LABEL_191:
                      v99 = _mm_cvtsi32_si128(v100);
LABEL_192:
                      *(_QWORD *)&v101 = *(_OWORD *)&_mm_cvtepi32_pd(v99);
LABEL_194:
                      v102 = *(double *)Str2 < v101;
                      v103 = *(double *)Str2 == v101;
                      goto LABEL_202;
                    }
                    v105 = *a2;
LABEL_197:
                    v104 = _mm_cvtsi32_si128(v105);
                    goto LABEL_198;
                  }
                  v108 = *a2;
LABEL_205:
                  v107 = _mm_cvtsi32_si128(v108);
LABEL_206:
                  *(_QWORD *)&v109 = *(_OWORD *)&_mm_cvtepi32_pd(v107);
LABEL_208:
                  v18 = v109 == *(double *)Str2;
                  goto LABEL_37;
                }
                v205 = v13 - 2;
                if ( v205 )
                {
                  v206 = v205 - 1;
                  if ( v206 )
                  {
                    v207 = v206 - 1;
                    if ( v207 )
                    {
                      v208 = v207 - 1;
                      if ( v208 )
                      {
                        if ( v208 != 1 )
                          goto LABEL_1354;
                        v116 = *a2;
                        goto LABEL_217;
                      }
                      v209 = *a2;
LABEL_403:
                      v97 = _mm_cvtsi32_si128(v209);
                      goto LABEL_186;
                    }
                    v119 = *a2;
LABEL_222:
                    v118 = _mm_cvtsi32_si128(v119);
                    goto LABEL_223;
                  }
                  v122 = *a2;
LABEL_228:
                  v121 = _mm_cvtsi32_si128(v122);
                  goto LABEL_229;
                }
                v125 = *a2;
LABEL_234:
                v124 = _mm_cvtsi32_si128(v125);
LABEL_235:
                LODWORD(v126) = _mm_cvtepi32_ps(v124).m128_u32[0];
LABEL_237:
                v18 = v126 == *(float *)Str2;
                goto LABEL_37;
              }
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  switch ( a5 )
                  {
                    case 2u:
                      v238 = v13 - 2;
                      if ( !v238 )
                      {
                        v192 = *(char *)Str2;
                        goto LABEL_352;
                      }
                      v239 = v238 - 1;
                      if ( v239 )
                      {
                        v240 = v239 - 1;
                        if ( v240 )
                        {
                          v241 = v240 - 1;
                          if ( v241 )
                          {
                            if ( v241 != 1 )
                              goto LABEL_1354;
                            v234 = *(char *)Str2;
LABEL_475:
                            v48 = __OFSUB__(*a2, v234);
                            v46 = *a2 == v234;
                            v47 = (__int16)(*a2 - v234) < 0;
                            goto LABEL_104;
                          }
                          v235 = *(char *)Str2;
LABEL_478:
                          v52 = __OFSUB__(*a2, v235);
                          v51 = (__int16)(*a2 - v235) < 0;
                          goto LABEL_110;
                        }
                        v236 = *(char *)Str2;
LABEL_481:
                        v56 = __OFSUB__(*a2, v236);
                        v55 = (__int16)(*a2 - v236) < 0;
                        goto LABEL_116;
                      }
                      v237 = *(char *)Str2;
                      break;
                    case 3u:
                      v230 = v13 - 2;
                      if ( !v230 )
                      {
LABEL_350:
                        v192 = *(unsigned __int8 *)Str2;
LABEL_352:
                        v76 = *a2 == v192;
                        goto LABEL_154;
                      }
                      v231 = v230 - 1;
                      if ( v231 )
                      {
                        v232 = v231 - 1;
                        if ( v232 )
                        {
                          v233 = v232 - 1;
                          if ( v233 )
                          {
                            if ( v233 != 1 )
                              goto LABEL_1354;
                            v234 = *(unsigned __int8 *)Str2;
                            goto LABEL_475;
                          }
                          v235 = *(unsigned __int8 *)Str2;
                          goto LABEL_478;
                        }
                        v236 = *(unsigned __int8 *)Str2;
                        goto LABEL_481;
                      }
                      v237 = *(unsigned __int8 *)Str2;
                      break;
                    case 4u:
                      v226 = v13 - 2;
                      if ( !v226 )
                        goto LABEL_312;
                      v227 = v226 - 1;
                      if ( !v227 )
                      {
                        v40 = __OFSUB__(*a2, *Str2);
                        v38 = *a2 == *Str2;
                        v39 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_95;
                      }
                      v228 = v227 - 1;
                      if ( !v228 )
                      {
                        v37 = __OFSUB__(*a2, *Str2);
                        v36 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_92;
                      }
                      v229 = v228 - 1;
                      if ( v229 )
                      {
                        if ( v229 != 1 )
                          goto LABEL_1354;
                        v33 = __OFSUB__(*a2, *Str2);
                        v31 = *a2 == *Str2;
                        v32 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_86;
                      }
                      v35 = __OFSUB__(*a2, *Str2);
                      v34 = (__int16)(*a2 - *Str2) < 0;
LABEL_89:
                      v17 = v34 == v35;
                      goto LABEL_32;
                    case 5u:
                      v222 = v13 - 2;
                      if ( v222 )
                      {
                        v223 = v222 - 1;
                        if ( v223 )
                        {
                          v224 = v223 - 1;
                          if ( v224 )
                          {
                            v225 = v224 - 1;
                            if ( v225 )
                            {
                              if ( v225 != 1 )
                                goto LABEL_1354;
                              v166 = (__int16)*a2;
                              goto LABEL_447;
                            }
                            v168 = (__int16)*a2;
                            goto LABEL_450;
                          }
                          v170 = (__int16)*a2;
                          goto LABEL_453;
                        }
                        v172 = (__int16)*a2;
                        goto LABEL_456;
                      }
                      v174 = (__int16)*a2;
                      goto LABEL_459;
                    case 6u:
                      v218 = v13 - 2;
                      if ( !v218 )
                        goto LABEL_431;
                      v219 = v218 - 1;
                      if ( !v219 )
                      {
                        v157 = (__int16)*a2;
                        goto LABEL_302;
                      }
                      v220 = v219 - 1;
                      if ( !v220 )
                      {
                        v156 = (__int16)*a2;
                        goto LABEL_299;
                      }
                      v221 = v220 - 1;
                      if ( !v221 )
                      {
                        v155 = (__int16)*a2;
                        goto LABEL_296;
                      }
                      if ( v221 != 1 )
                        goto LABEL_1354;
                      v154 = (__int16)*a2;
LABEL_293:
                      v33 = __OFSUB__(v154, *(_DWORD *)Str2);
                      v31 = v154 == *(_DWORD *)Str2;
                      v32 = v154 - *(_DWORD *)Str2 < 0;
LABEL_86:
                      v17 = v32 ^ v33 | v31;
                      goto LABEL_32;
                    case 7u:
                      v214 = v13 - 2;
                      if ( v214 )
                      {
                        v215 = v214 - 1;
                        if ( !v215 )
                        {
                          v148 = (__int16)*a2;
                          goto LABEL_283;
                        }
                        v216 = v215 - 1;
                        if ( !v216 )
                        {
                          v147 = (__int16)*a2;
                          goto LABEL_280;
                        }
                        v217 = v216 - 1;
                        if ( !v217 )
                        {
                          v146 = (__int16)*a2;
                          goto LABEL_277;
                        }
                        if ( v217 != 1 )
                          goto LABEL_1354;
                        v145 = (__int16)*a2;
                        goto LABEL_274;
                      }
LABEL_431:
                      v149 = (__int16)*a2;
                      goto LABEL_286;
                    default:
                      goto LABEL_1354;
                  }
                  v61 = __OFSUB__(*a2, v237);
                  v59 = *a2 == v237;
                  v60 = (__int16)(*a2 - v237) < 0;
                  goto LABEL_122;
                }
                goto LABEL_497;
              }
              if ( a5 == 9 )
              {
                v254 = v13 - 2;
                if ( v254 )
                {
                  v255 = v254 - 1;
                  if ( v255 )
                  {
                    v256 = v255 - 1;
                    if ( v256 )
                    {
                      v257 = v256 - 1;
                      if ( v257 )
                      {
                        if ( v257 != 1 )
                          goto LABEL_1354;
                        v131 = (__int16)*a2;
                        goto LABEL_244;
                      }
                      v134 = (__int16)*a2;
                      goto LABEL_248;
                    }
                    v136 = (__int16)*a2;
                    goto LABEL_253;
                  }
                  v137 = (__int16)*a2;
                  goto LABEL_256;
                }
LABEL_535:
                v140 = (__int16)*a2;
                goto LABEL_735;
              }
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                  {
LABEL_497:
                    v242 = v13 - 2;
                    if ( v242 )
                    {
                      v243 = v242 - 1;
                      if ( v243 )
                      {
                        v244 = v243 - 1;
                        if ( v244 )
                        {
                          v245 = v244 - 1;
                          if ( v245 )
                          {
                            if ( v245 != 1 )
                              goto LABEL_1354;
                            v82 = (__int16)*a2;
                            goto LABEL_797;
                          }
                          v83 = (__int16)*a2;
                          goto LABEL_799;
                        }
                        v84 = (__int16)*a2;
                        goto LABEL_801;
                      }
                      v85 = (__int16)*a2;
                      goto LABEL_803;
                    }
                    goto LABEL_535;
                  }
                  if ( a5 != 15 )
                    goto LABEL_1354;
                }
                v246 = v13 - 2;
                if ( !v246 )
                {
                  v108 = (__int16)*a2;
                  goto LABEL_205;
                }
                v247 = v246 - 1;
                if ( !v247 )
                {
                  v105 = (__int16)*a2;
                  goto LABEL_197;
                }
                v248 = v247 - 1;
                if ( !v248 )
                {
                  v100 = (__int16)*a2;
                  goto LABEL_191;
                }
                v249 = v248 - 1;
                if ( !v249 )
                {
                  v95 = (__int16)*a2;
                  goto LABEL_181;
                }
                if ( v249 != 1 )
                  goto LABEL_1354;
                v91 = (__int16)*a2;
LABEL_176:
                v90 = _mm_cvtsi32_si128(v91);
LABEL_177:
                *(_QWORD *)&v92 = *(_OWORD *)&_mm_cvtepi32_pd(v90);
                goto LABEL_178;
              }
              v250 = v13 - 2;
              if ( !v250 )
              {
                v125 = (__int16)*a2;
                goto LABEL_234;
              }
              v251 = v250 - 1;
              if ( !v251 )
              {
                v122 = (__int16)*a2;
                goto LABEL_228;
              }
              v252 = v251 - 1;
              if ( !v252 )
              {
                v119 = (__int16)*a2;
                goto LABEL_222;
              }
              v253 = v252 - 1;
              if ( !v253 )
              {
                v209 = (__int16)*a2;
                goto LABEL_403;
              }
              if ( v253 != 1 )
                goto LABEL_1354;
              v116 = (__int16)*a2;
LABEL_217:
              v115 = _mm_cvtsi32_si128(v116);
LABEL_218:
              LODWORD(v117) = _mm_cvtepi32_ps(v115).m128_u32[0];
              goto LABEL_219;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                if ( a5 == 2 )
                {
                  v285 = v13 - 2;
                  if ( v285 )
                  {
                    v286 = v285 - 1;
                    if ( v286 )
                    {
                      v287 = v286 - 1;
                      if ( v287 )
                      {
                        v288 = v287 - 1;
                        if ( v288 )
                        {
                          if ( v288 != 1 )
                            goto LABEL_1354;
                          v166 = *(unsigned __int8 *)a2;
LABEL_359:
                          v167 = *(char *)Str2;
                          goto LABEL_319;
                        }
                        v168 = *(unsigned __int8 *)a2;
LABEL_362:
                        v169 = *(char *)Str2;
                        goto LABEL_322;
                      }
                      v170 = *(unsigned __int8 *)a2;
LABEL_365:
                      v171 = *(char *)Str2;
                      goto LABEL_325;
                    }
                    v172 = *(unsigned __int8 *)a2;
LABEL_368:
                    v173 = *(char *)Str2;
                    goto LABEL_328;
                  }
                  v174 = *(unsigned __int8 *)a2;
LABEL_371:
                  v175 = *(char *)Str2;
                  goto LABEL_373;
                }
                if ( a5 != 3 )
                {
                  if ( a5 == 4 )
                  {
                    v273 = v13 - 2;
                    if ( !v273 )
                    {
                      v76 = (unsigned __int16)*(unsigned __int8 *)a2 == *Str2;
                      goto LABEL_154;
                    }
                    v274 = v273 - 1;
                    if ( v274 )
                    {
                      v275 = v274 - 1;
                      if ( v275 )
                      {
                        v276 = v275 - 1;
                        if ( v276 )
                        {
                          if ( v276 != 1 )
                            goto LABEL_1354;
                          v277 = *(unsigned __int8 *)a2;
                          v48 = __OFSUB__(v277, *Str2);
                          v46 = v277 == (__int16)*Str2;
                          v47 = (__int16)(v277 - *Str2) < 0;
                          goto LABEL_104;
                        }
                        v278 = *(unsigned __int8 *)a2;
                        v52 = __OFSUB__(v278, *Str2);
                        v51 = (__int16)(v278 - *Str2) < 0;
LABEL_110:
                        v15 = v51 == v52;
                        goto LABEL_21;
                      }
                      v279 = *(unsigned __int8 *)a2;
                      v56 = __OFSUB__(v279, *Str2);
                      v55 = (__int16)(v279 - *Str2) < 0;
LABEL_116:
                      v15 = v55 ^ v56;
                      goto LABEL_21;
                    }
                    v280 = *(unsigned __int8 *)a2;
                    v61 = __OFSUB__(v280, *Str2);
                    v59 = v280 == (__int16)*Str2;
                    v60 = (__int16)(v280 - *Str2) < 0;
LABEL_122:
                    v15 = !(v60 ^ v61 | v59);
                    goto LABEL_21;
                  }
                  if ( a5 != 5 )
                  {
                    if ( a5 == 6 )
                    {
                      v262 = v13 - 2;
                      if ( v262 )
                      {
                        v263 = v262 - 1;
                        if ( !v263 )
                        {
                          v157 = *(unsigned __int8 *)a2;
                          goto LABEL_302;
                        }
                        v264 = v263 - 1;
                        if ( !v264 )
                        {
                          v156 = *(unsigned __int8 *)a2;
                          goto LABEL_299;
                        }
                        v265 = v264 - 1;
                        if ( !v265 )
                        {
                          v155 = *(unsigned __int8 *)a2;
                          goto LABEL_296;
                        }
                        if ( v265 != 1 )
                          goto LABEL_1354;
                        v154 = *(unsigned __int8 *)a2;
                        goto LABEL_293;
                      }
                    }
                    else
                    {
                      if ( a5 != 7 )
                        goto LABEL_1354;
                      v258 = v13 - 2;
                      if ( v258 )
                      {
                        v259 = v258 - 1;
                        if ( !v259 )
                        {
                          v148 = *(unsigned __int8 *)a2;
                          goto LABEL_283;
                        }
                        v260 = v259 - 1;
                        if ( !v260 )
                        {
                          v147 = *(unsigned __int8 *)a2;
                          goto LABEL_280;
                        }
                        v261 = v260 - 1;
                        if ( !v261 )
                        {
                          v146 = *(unsigned __int8 *)a2;
                          goto LABEL_277;
                        }
                        if ( v261 != 1 )
                          goto LABEL_1354;
                        v145 = *(unsigned __int8 *)a2;
                        goto LABEL_274;
                      }
                    }
                    v149 = *(unsigned __int8 *)a2;
                    goto LABEL_286;
                  }
                  v266 = v13 - 2;
                  if ( v266 )
                  {
                    v267 = v266 - 1;
                    if ( v267 )
                    {
                      v268 = v267 - 1;
                      if ( !v268 )
                      {
                        v23 = *(unsigned __int8 *)a2 < *Str2;
                        goto LABEL_54;
                      }
                      v269 = v268 - 1;
                      if ( v269 )
                      {
                        if ( v269 != 1 )
                          goto LABEL_1354;
                        v270 = *(unsigned __int8 *)a2;
                        v132 = v270 < *Str2;
                        v133 = v270 == *Str2;
                        goto LABEL_245;
                      }
                      v135 = *(unsigned __int8 *)a2 < *Str2;
                      goto LABEL_250;
                    }
                    v271 = *(unsigned __int8 *)a2;
                    v138 = v271 < *Str2;
                    v139 = v271 == *Str2;
                    goto LABEL_258;
                  }
                  v272 = *(unsigned __int8 *)a2;
                  goto LABEL_574;
                }
                v281 = v13 - 2;
                if ( v281 )
                {
                  v282 = v281 - 1;
                  if ( v282 )
                  {
                    v283 = v282 - 1;
                    if ( !v283 )
                    {
                      v23 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                      goto LABEL_54;
                    }
                    v284 = v283 - 1;
                    if ( v284 )
                    {
                      if ( v284 != 1 )
                        goto LABEL_1354;
                      v132 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                      v133 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                      goto LABEL_245;
                    }
                    v135 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    goto LABEL_250;
                  }
                  v138 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                  v139 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_258:
                  v17 = !v138 && !v139;
                  goto LABEL_32;
                }
                goto LABEL_30;
              }
              goto LABEL_604;
            }
            if ( a5 == 9 )
            {
              v301 = v13 - 2;
              if ( v301 )
              {
                v302 = v301 - 1;
                if ( v302 )
                {
                  v303 = v302 - 1;
                  if ( v303 )
                  {
                    v304 = v303 - 1;
                    if ( v304 )
                    {
                      if ( v304 != 1 )
                        goto LABEL_1354;
                      v131 = *(unsigned __int8 *)a2;
                      goto LABEL_244;
                    }
                    v134 = *(unsigned __int8 *)a2;
                    goto LABEL_248;
                  }
                  v136 = *(unsigned __int8 *)a2;
                  goto LABEL_253;
                }
                v137 = *(unsigned __int8 *)a2;
                goto LABEL_256;
              }
LABEL_642:
              v140 = *(unsigned __int8 *)a2;
              goto LABEL_735;
            }
            if ( a5 == 10 )
            {
              v297 = v13 - 2;
              if ( !v297 )
              {
                v125 = *(unsigned __int8 *)a2;
                goto LABEL_234;
              }
              v298 = v297 - 1;
              if ( !v298 )
              {
                v122 = *(unsigned __int8 *)a2;
                goto LABEL_228;
              }
              v299 = v298 - 1;
              if ( !v299 )
              {
                v119 = *(unsigned __int8 *)a2;
                goto LABEL_222;
              }
              v300 = v299 - 1;
              if ( !v300 )
              {
                v209 = *(unsigned __int8 *)a2;
                goto LABEL_403;
              }
              if ( v300 != 1 )
                goto LABEL_1354;
              v116 = *(unsigned __int8 *)a2;
              goto LABEL_217;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_604:
                v289 = v13 - 2;
                if ( v289 )
                {
                  v290 = v289 - 1;
                  if ( v290 )
                  {
                    v291 = v290 - 1;
                    if ( v291 )
                    {
                      v292 = v291 - 1;
                      if ( v292 )
                      {
                        if ( v292 != 1 )
                          goto LABEL_1354;
                        v82 = *(unsigned __int8 *)a2;
                        goto LABEL_797;
                      }
                      v83 = *(unsigned __int8 *)a2;
                      goto LABEL_799;
                    }
                    v84 = *(unsigned __int8 *)a2;
                    goto LABEL_801;
                  }
                  v85 = *(unsigned __int8 *)a2;
                  goto LABEL_803;
                }
                goto LABEL_642;
              }
              if ( a5 != 15 )
                goto LABEL_1354;
            }
            v293 = v13 - 2;
            if ( !v293 )
            {
              v108 = *(unsigned __int8 *)a2;
              goto LABEL_205;
            }
            v294 = v293 - 1;
            if ( !v294 )
            {
              v105 = *(unsigned __int8 *)a2;
              goto LABEL_197;
            }
            v295 = v294 - 1;
            if ( !v295 )
            {
              v100 = *(unsigned __int8 *)a2;
              goto LABEL_191;
            }
            v296 = v295 - 1;
            if ( !v296 )
            {
              v95 = *(unsigned __int8 *)a2;
              goto LABEL_181;
            }
            if ( v296 != 1 )
              goto LABEL_1354;
            v91 = *(unsigned __int8 *)a2;
            goto LABEL_176;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 != 2 )
              {
                if ( a5 == 3 )
                {
                  v321 = v13 - 2;
                  if ( !v321 )
                  {
                    v174 = *(char *)a2;
                    v175 = *(unsigned __int8 *)Str2;
                    goto LABEL_373;
                  }
                  v322 = v321 - 1;
                  if ( !v322 )
                  {
                    v172 = *(char *)a2;
                    v173 = *(unsigned __int8 *)Str2;
                    goto LABEL_328;
                  }
                  v323 = v322 - 1;
                  if ( !v323 )
                  {
                    v170 = *(char *)a2;
                    v171 = *(unsigned __int8 *)Str2;
                    goto LABEL_325;
                  }
                  v324 = v323 - 1;
                  if ( !v324 )
                  {
                    v168 = *(char *)a2;
                    v169 = *(unsigned __int8 *)Str2;
                    goto LABEL_322;
                  }
                  if ( v324 != 1 )
                    goto LABEL_1354;
                  v166 = *(char *)a2;
                  v167 = *(unsigned __int8 *)Str2;
LABEL_319:
                  v48 = __OFSUB__(v166, v167);
                  v46 = v166 == v167;
                  v47 = v166 - v167 < 0;
                  goto LABEL_104;
                }
                if ( a5 != 4 )
                {
                  if ( a5 != 5 )
                  {
                    if ( a5 == 6 )
                    {
                      v309 = v13 - 2;
                      if ( v309 )
                      {
                        v310 = v309 - 1;
                        if ( !v310 )
                        {
                          v157 = *(char *)a2;
                          goto LABEL_302;
                        }
                        v311 = v310 - 1;
                        if ( !v311 )
                        {
                          v156 = *(char *)a2;
                          goto LABEL_299;
                        }
                        v312 = v311 - 1;
                        if ( !v312 )
                        {
                          v155 = *(char *)a2;
                          goto LABEL_296;
                        }
                        if ( v312 != 1 )
                          goto LABEL_1354;
                        v154 = *(char *)a2;
                        goto LABEL_293;
                      }
                    }
                    else
                    {
                      if ( a5 != 7 )
                        goto LABEL_1354;
                      v305 = v13 - 2;
                      if ( v305 )
                      {
                        v306 = v305 - 1;
                        if ( !v306 )
                        {
                          v148 = *(char *)a2;
                          goto LABEL_283;
                        }
                        v307 = v306 - 1;
                        if ( !v307 )
                        {
                          v147 = *(char *)a2;
                          goto LABEL_280;
                        }
                        v308 = v307 - 1;
                        if ( !v308 )
                        {
                          v146 = *(char *)a2;
                          goto LABEL_277;
                        }
                        if ( v308 != 1 )
                          goto LABEL_1354;
                        v145 = *(char *)a2;
LABEL_274:
                        v132 = v145 < *(_DWORD *)Str2;
                        v133 = v145 == *(_DWORD *)Str2;
                        goto LABEL_245;
                      }
                    }
                    v149 = *(char *)a2;
                    goto LABEL_286;
                  }
                  v313 = v13 - 2;
                  if ( v313 )
                  {
                    v314 = v313 - 1;
                    if ( v314 )
                    {
                      v315 = v314 - 1;
                      if ( v315 )
                      {
                        v316 = v315 - 1;
                        if ( v316 )
                        {
                          if ( v316 != 1 )
                            goto LABEL_1354;
                          v166 = *(char *)a2;
LABEL_447:
                          v167 = *Str2;
                          goto LABEL_319;
                        }
                        v168 = *(char *)a2;
LABEL_450:
                        v169 = *Str2;
                        goto LABEL_322;
                      }
                      v170 = *(char *)a2;
LABEL_453:
                      v171 = *Str2;
                      goto LABEL_325;
                    }
                    v172 = *(char *)a2;
LABEL_456:
                    v173 = *Str2;
                    goto LABEL_328;
                  }
                  v174 = *(char *)a2;
LABEL_459:
                  v175 = *Str2;
                  goto LABEL_373;
                }
                v317 = v13 - 2;
                if ( v317 )
                {
                  v318 = v317 - 1;
                  if ( !v318 )
                  {
                    v40 = __OFSUB__(*(char *)a2, *Str2);
                    v38 = *(char *)a2 == (__int16)*Str2;
                    v39 = (__int16)(*(char *)a2 - *Str2) < 0;
                    goto LABEL_95;
                  }
                  v319 = v318 - 1;
                  if ( !v319 )
                  {
                    v37 = __OFSUB__(*(char *)a2, *Str2);
                    v36 = (__int16)(*(char *)a2 - *Str2) < 0;
                    goto LABEL_92;
                  }
                  v320 = v319 - 1;
                  if ( v320 )
                  {
                    if ( v320 != 1 )
                      goto LABEL_1354;
                    v33 = __OFSUB__(*(char *)a2, *Str2);
                    v31 = *(char *)a2 == (__int16)*Str2;
                    v32 = (__int16)(*(char *)a2 - *Str2) < 0;
                    goto LABEL_86;
                  }
                  v35 = __OFSUB__(*(char *)a2, *Str2);
                  v34 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_89;
                }
                v272 = *(char *)a2;
LABEL_574:
                v16 = v272 == (__int16)*Str2;
                goto LABEL_31;
              }
              v325 = v13 - 2;
              if ( v325 )
              {
                v326 = v325 - 1;
                if ( !v326 )
                {
                  v40 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v38 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  v39 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_95;
                }
                v327 = v326 - 1;
                if ( !v327 )
                {
                  v37 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v36 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_92;
                }
                v328 = v327 - 1;
                if ( v328 )
                {
                  if ( v328 != 1 )
                    goto LABEL_1354;
                  v33 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v31 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  v32 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_86;
                }
                v35 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v34 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_89;
              }
LABEL_30:
              v16 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_31:
              v17 = v16;
LABEL_32:
              *a8 = v17;
              goto LABEL_1357;
            }
            goto LABEL_696;
          }
          if ( a5 == 9 )
          {
            v341 = v13 - 2;
            if ( v341 )
            {
              v342 = v341 - 1;
              if ( v342 )
              {
                v343 = v342 - 1;
                if ( v343 )
                {
                  v344 = v343 - 1;
                  if ( v344 )
                  {
                    if ( v344 != 1 )
                      goto LABEL_1354;
                    v131 = *(char *)a2;
                    goto LABEL_244;
                  }
                  v134 = *(char *)a2;
LABEL_248:
                  v135 = v134 < *(_QWORD *)Str2;
                  goto LABEL_250;
                }
                v136 = *(char *)a2;
LABEL_253:
                v23 = v136 < *(_QWORD *)Str2;
                goto LABEL_54;
              }
              v137 = *(char *)a2;
LABEL_256:
              v138 = v137 < *(_QWORD *)Str2;
              v139 = v137 == *(_QWORD *)Str2;
              goto LABEL_258;
            }
LABEL_733:
            v140 = *(char *)a2;
            goto LABEL_735;
          }
          if ( a5 == 10 )
          {
            v337 = v13 - 2;
            if ( !v337 )
            {
              v125 = *(char *)a2;
              goto LABEL_234;
            }
            v338 = v337 - 1;
            if ( !v338 )
            {
              v122 = *(char *)a2;
              goto LABEL_228;
            }
            v339 = v338 - 1;
            if ( !v339 )
            {
              v119 = *(char *)a2;
              goto LABEL_222;
            }
            v340 = v339 - 1;
            if ( !v340 )
            {
              v209 = *(char *)a2;
              goto LABEL_403;
            }
            if ( v340 != 1 )
              goto LABEL_1354;
            v116 = *(char *)a2;
            goto LABEL_217;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_696:
              v329 = v13 - 2;
              if ( v329 )
              {
                v330 = v329 - 1;
                if ( v330 )
                {
                  v331 = v330 - 1;
                  if ( v331 )
                  {
                    v332 = v331 - 1;
                    if ( v332 )
                    {
                      if ( v332 != 1 )
                        goto LABEL_1354;
                      v82 = *(char *)a2;
                      goto LABEL_797;
                    }
                    v83 = *(char *)a2;
                    goto LABEL_799;
                  }
                  v84 = *(char *)a2;
                  goto LABEL_801;
                }
                v85 = *(char *)a2;
                goto LABEL_803;
              }
              goto LABEL_733;
            }
            if ( a5 != 15 )
              goto LABEL_1354;
          }
          v333 = v13 - 2;
          if ( !v333 )
          {
            v108 = *(char *)a2;
            goto LABEL_205;
          }
          v334 = v333 - 1;
          if ( !v334 )
          {
            v105 = *(char *)a2;
            goto LABEL_197;
          }
          v335 = v334 - 1;
          if ( !v335 )
          {
            v100 = *(char *)a2;
            goto LABEL_191;
          }
          v336 = v335 - 1;
          if ( !v336 )
          {
            v95 = *(char *)a2;
            goto LABEL_181;
          }
          if ( v336 != 1 )
            goto LABEL_1354;
          v91 = *(char *)a2;
          goto LABEL_176;
        }
        if ( a5 != 1 || v13 != 2 )
          goto LABEL_1354;
        if ( a2 )
          goto LABEL_13;
        v18 = Str2 == 0LL;
LABEL_37:
        if ( v18 )
          goto LABEL_14;
        goto LABEL_13;
      }
      if ( a1 != 8 )
      {
        if ( a1 != 9 )
        {
          if ( a1 != 10 )
          {
            if ( a1 != 11 )
            {
              v382 = a5 == 12;
              goto LABEL_840;
            }
LABEL_1299:
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                switch ( a5 )
                {
                  case 2u:
                    v419 = v13 - 2;
                    if ( !v419 )
                    {
                      v406 = *(char *)Str2;
                      goto LABEL_879;
                    }
                    v420 = v419 - 1;
                    if ( !v420 )
                    {
                      v404 = *(char *)Str2;
                      goto LABEL_875;
                    }
                    v421 = v420 - 1;
                    if ( !v421 )
                    {
                      v402 = *(char *)Str2;
                      goto LABEL_871;
                    }
                    v422 = v421 - 1;
                    if ( !v422 )
                    {
                      v400 = *(char *)Str2;
                      goto LABEL_867;
                    }
                    if ( v422 != 1 )
                      goto LABEL_1354;
                    v398 = *(char *)Str2;
                    break;
                  case 3u:
                    v415 = v13 - 2;
                    if ( !v415 )
                    {
                      v406 = *(unsigned __int8 *)Str2;
                      goto LABEL_879;
                    }
                    v416 = v415 - 1;
                    if ( !v416 )
                    {
                      v404 = *(unsigned __int8 *)Str2;
                      goto LABEL_875;
                    }
                    v417 = v416 - 1;
                    if ( !v417 )
                    {
                      v402 = *(unsigned __int8 *)Str2;
                      goto LABEL_871;
                    }
                    v418 = v417 - 1;
                    if ( !v418 )
                    {
                      v400 = *(unsigned __int8 *)Str2;
                      goto LABEL_867;
                    }
                    if ( v418 != 1 )
                      goto LABEL_1354;
                    v398 = *(unsigned __int8 *)Str2;
                    break;
                  case 4u:
                    v411 = v13 - 2;
                    if ( !v411 )
                    {
                      v406 = (__int16)*Str2;
                      goto LABEL_879;
                    }
                    v412 = v411 - 1;
                    if ( !v412 )
                    {
                      v404 = (__int16)*Str2;
                      goto LABEL_875;
                    }
                    v413 = v412 - 1;
                    if ( !v413 )
                    {
                      v402 = (__int16)*Str2;
                      goto LABEL_871;
                    }
                    v414 = v413 - 1;
                    if ( !v414 )
                    {
                      v400 = (__int16)*Str2;
                      goto LABEL_867;
                    }
                    if ( v414 != 1 )
                      goto LABEL_1354;
                    v398 = (__int16)*Str2;
                    break;
                  case 5u:
                    v407 = v13 - 2;
                    if ( v407 )
                    {
                      v408 = v407 - 1;
                      if ( v408 )
                      {
                        v409 = v408 - 1;
                        if ( v409 )
                        {
                          v410 = v409 - 1;
                          if ( v410 )
                          {
                            if ( v410 != 1 )
                              goto LABEL_1354;
                            v398 = *Str2;
                            break;
                          }
                          v400 = *Str2;
LABEL_867:
                          v399 = _mm_cvtsi32_si128(v400);
LABEL_868:
                          *(_QWORD *)&v389 = *(_OWORD *)&_mm_cvtepi32_pd(v399);
                          goto LABEL_959;
                        }
                        v402 = *Str2;
LABEL_871:
                        v401 = _mm_cvtsi32_si128(v402);
LABEL_872:
                        *(_QWORD *)&v390 = *(_OWORD *)&_mm_cvtepi32_pd(v401);
                        goto LABEL_962;
                      }
                      v404 = *Str2;
LABEL_875:
                      v403 = _mm_cvtsi32_si128(v404);
LABEL_876:
                      *(_QWORD *)&v391 = *(_OWORD *)&_mm_cvtepi32_pd(v403);
                      goto LABEL_965;
                    }
                    v406 = *Str2;
LABEL_879:
                    v405 = _mm_cvtsi32_si128(v406);
LABEL_880:
                    *(_QWORD *)&v392 = *(_OWORD *)&_mm_cvtepi32_pd(v405);
                    goto LABEL_856;
                  case 6u:
                    v393 = v13 - 2;
                    if ( v393 )
                    {
                      v394 = v393 - 1;
                      if ( v394 )
                      {
                        v395 = v394 - 1;
                        if ( v395 )
                        {
                          v396 = v395 - 1;
                          if ( v396 )
                          {
                            if ( v396 != 1 )
                              goto LABEL_1354;
                            v397 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                            goto LABEL_864;
                          }
                          v399 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_868;
                        }
                        v401 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                        goto LABEL_872;
                      }
                      v403 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                      goto LABEL_876;
                    }
                    v405 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                    goto LABEL_880;
                  case 7u:
                    v384 = v13 - 2;
                    if ( !v384 )
                    {
                      v392 = (double)*(int *)Str2;
LABEL_856:
                      v18 = *(double *)a2 == v392;
                      goto LABEL_37;
                    }
                    v385 = v384 - 1;
                    if ( !v385 )
                    {
                      v391 = (double)*(int *)Str2;
LABEL_965:
                      v189 = *(double *)a2 < v391;
                      v190 = *(double *)a2 == v391;
                      goto LABEL_349;
                    }
                    v386 = v385 - 1;
                    if ( !v386 )
                    {
                      v390 = (double)*(int *)Str2;
LABEL_962:
                      v189 = v390 < *(double *)a2;
                      v190 = v390 == *(double *)a2;
                      goto LABEL_349;
                    }
                    v387 = v386 - 1;
                    if ( v387 )
                    {
                      if ( v387 != 1 )
                        goto LABEL_1354;
                      v388 = (double)*(int *)Str2;
                      goto LABEL_956;
                    }
                    v389 = (double)*(int *)Str2;
LABEL_959:
                    v184 = *(double *)a2 < v389;
                    goto LABEL_341;
                  default:
                    goto LABEL_1354;
                }
                v397 = _mm_cvtsi32_si128(v398);
LABEL_864:
                *(_QWORD *)&v388 = *(_OWORD *)&_mm_cvtepi32_pd(v397);
LABEL_956:
                v184 = v388 < *(double *)a2;
                goto LABEL_341;
              }
LABEL_921:
              v423 = v13 - 2;
              if ( !v423 )
              {
                v392 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_856;
              }
              v424 = v423 - 1;
              if ( !v424 )
              {
                v391 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_965;
              }
              v425 = v424 - 1;
              if ( !v425 )
              {
                v390 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_962;
              }
              v426 = v425 - 1;
              if ( v426 )
              {
                if ( v426 != 1 )
                  goto LABEL_1354;
                v388 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_956;
              }
              v389 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_959;
            }
            if ( a5 == 9 )
            {
              v435 = v13 - 2;
              if ( !v435 )
              {
                v392 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v392 = v392 + 1.844674407370955e19;
                goto LABEL_856;
              }
              v436 = v435 - 1;
              if ( !v436 )
              {
                v391 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v391 = v391 + 1.844674407370955e19;
                goto LABEL_965;
              }
              v437 = v436 - 1;
              if ( !v437 )
              {
                v390 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v390 = v390 + 1.844674407370955e19;
                goto LABEL_962;
              }
              v438 = v437 - 1;
              if ( v438 )
              {
                if ( v438 != 1 )
                  goto LABEL_1354;
                v388 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v388 = v388 + 1.844674407370955e19;
                goto LABEL_956;
              }
              v389 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v389 = v389 + 1.844674407370955e19;
              goto LABEL_959;
            }
            if ( a5 == 10 )
            {
              v431 = v13 - 2;
              if ( !v431 )
              {
                v392 = *(float *)Str2;
                goto LABEL_856;
              }
              v432 = v431 - 1;
              if ( !v432 )
              {
                v391 = *(float *)Str2;
                goto LABEL_965;
              }
              v433 = v432 - 1;
              if ( !v433 )
              {
                v390 = *(float *)Str2;
                goto LABEL_962;
              }
              v434 = v433 - 1;
              if ( v434 )
              {
                if ( v434 != 1 )
                  goto LABEL_1354;
                v388 = *(float *)Str2;
                goto LABEL_956;
              }
              v389 = *(float *)Str2;
              goto LABEL_959;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
                goto LABEL_921;
              if ( a5 != 15 )
                goto LABEL_1354;
            }
            v427 = v13 - 2;
            if ( v427 )
            {
              v428 = v427 - 1;
              if ( v428 )
              {
                v429 = v428 - 1;
                if ( v429 )
                {
                  v430 = v429 - 1;
                  if ( v430 )
                  {
                    if ( v430 != 1 )
                      goto LABEL_1354;
                    v93 = *(double *)Str2 < *(double *)a2;
                    goto LABEL_188;
                  }
                  v96 = *(double *)a2;
                  goto LABEL_184;
                }
                v102 = *(double *)Str2 < *(double *)a2;
                v103 = *(double *)Str2 == *(double *)a2;
LABEL_202:
                v26 = !v102 && !v103;
                goto LABEL_63;
              }
              v106 = *(double *)a2;
              goto LABEL_200;
            }
            v109 = *(double *)a2;
            goto LABEL_208;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v473 = v13 - 2;
                  if ( !v473 )
                  {
                    v460 = *(char *)Str2;
                    goto LABEL_1007;
                  }
                  v474 = v473 - 1;
                  if ( !v474 )
                  {
                    v458 = *(char *)Str2;
                    goto LABEL_1003;
                  }
                  v475 = v474 - 1;
                  if ( !v475 )
                  {
                    v456 = *(char *)Str2;
                    goto LABEL_999;
                  }
                  v476 = v475 - 1;
                  if ( !v476 )
                  {
                    v454 = *(char *)Str2;
                    goto LABEL_995;
                  }
                  if ( v476 != 1 )
                    goto LABEL_1354;
                  v452 = *(char *)Str2;
                  break;
                case 3u:
                  v469 = v13 - 2;
                  if ( !v469 )
                  {
                    v460 = *(unsigned __int8 *)Str2;
                    goto LABEL_1007;
                  }
                  v470 = v469 - 1;
                  if ( !v470 )
                  {
                    v458 = *(unsigned __int8 *)Str2;
                    goto LABEL_1003;
                  }
                  v471 = v470 - 1;
                  if ( !v471 )
                  {
                    v456 = *(unsigned __int8 *)Str2;
                    goto LABEL_999;
                  }
                  v472 = v471 - 1;
                  if ( !v472 )
                  {
                    v454 = *(unsigned __int8 *)Str2;
                    goto LABEL_995;
                  }
                  if ( v472 != 1 )
                    goto LABEL_1354;
                  v452 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v465 = v13 - 2;
                  if ( !v465 )
                  {
                    v460 = (__int16)*Str2;
                    goto LABEL_1007;
                  }
                  v466 = v465 - 1;
                  if ( !v466 )
                  {
                    v458 = (__int16)*Str2;
                    goto LABEL_1003;
                  }
                  v467 = v466 - 1;
                  if ( !v467 )
                  {
                    v456 = (__int16)*Str2;
                    goto LABEL_999;
                  }
                  v468 = v467 - 1;
                  if ( !v468 )
                  {
                    v454 = (__int16)*Str2;
                    goto LABEL_995;
                  }
                  if ( v468 != 1 )
                    goto LABEL_1354;
                  v452 = (__int16)*Str2;
                  break;
                case 5u:
                  v461 = v13 - 2;
                  if ( v461 )
                  {
                    v462 = v461 - 1;
                    if ( v462 )
                    {
                      v463 = v462 - 1;
                      if ( v463 )
                      {
                        v464 = v463 - 1;
                        if ( v464 )
                        {
                          if ( v464 != 1 )
                            goto LABEL_1354;
                          v452 = *Str2;
                          break;
                        }
                        v454 = *Str2;
LABEL_995:
                        v453 = _mm_cvtsi32_si128(v454);
                        goto LABEL_996;
                      }
                      v456 = *Str2;
LABEL_999:
                      v455 = _mm_cvtsi32_si128(v456);
                      goto LABEL_1000;
                    }
                    v458 = *Str2;
LABEL_1003:
                    v457 = _mm_cvtsi32_si128(v458);
                    goto LABEL_1004;
                  }
                  v460 = *Str2;
LABEL_1007:
                  v459 = _mm_cvtsi32_si128(v460);
                  goto LABEL_1008;
                case 6u:
                  v447 = v13 - 2;
                  if ( v447 )
                  {
                    v448 = v447 - 1;
                    if ( v448 )
                    {
                      v449 = v448 - 1;
                      if ( v449 )
                      {
                        v450 = v449 - 1;
                        if ( v450 )
                        {
                          if ( v450 != 1 )
                            goto LABEL_1354;
                          v451 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_992;
                        }
                        v453 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_996:
                        LODWORD(v444) = _mm_cvtepi32_ps(v453).m128_u32[0];
                        goto LABEL_1089;
                      }
                      v455 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1000:
                      LODWORD(v445) = _mm_cvtepi32_ps(v455).m128_u32[0];
                      goto LABEL_1092;
                    }
                    v457 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1004:
                    LODWORD(v446) = _mm_cvtepi32_ps(v457).m128_u32[0];
                    goto LABEL_1095;
                  }
                  v459 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1008:
                  LODWORD(v110) = _mm_cvtepi32_ps(v459).m128_u32[0];
                  goto LABEL_210;
                case 7u:
                  v439 = v13 - 2;
                  if ( v439 )
                  {
                    v440 = v439 - 1;
                    if ( v440 )
                    {
                      v441 = v440 - 1;
                      if ( v441 )
                      {
                        v442 = v441 - 1;
                        if ( v442 )
                        {
                          if ( v442 != 1 )
                            goto LABEL_1354;
                          v443 = (float)*(int *)Str2;
                          goto LABEL_1086;
                        }
                        v444 = (float)*(int *)Str2;
LABEL_1089:
                        v184 = *(float *)a2 < v444;
                        goto LABEL_341;
                      }
                      v445 = (float)*(int *)Str2;
LABEL_1092:
                      v189 = v445 < *(float *)a2;
                      v190 = v445 == *(float *)a2;
                      goto LABEL_349;
                    }
                    v446 = (float)*(int *)Str2;
LABEL_1095:
                    v189 = *(float *)a2 < v446;
                    v190 = *(float *)a2 == v446;
                    goto LABEL_349;
                  }
                  v110 = (float)*(int *)Str2;
LABEL_210:
                  v18 = *(float *)a2 == v110;
                  goto LABEL_37;
                default:
                  goto LABEL_1354;
              }
              v451 = _mm_cvtsi32_si128(v452);
LABEL_992:
              LODWORD(v443) = _mm_cvtepi32_ps(v451).m128_u32[0];
              goto LABEL_1086;
            }
            goto LABEL_1051;
          }
          if ( a5 == 9 )
          {
            v489 = v13 - 2;
            if ( !v489 )
            {
              v110 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v110 = v110 + 1.8446744e19;
              goto LABEL_210;
            }
            v490 = v489 - 1;
            if ( !v490 )
            {
              v446 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v446 = v446 + 1.8446744e19;
              goto LABEL_1095;
            }
            v491 = v490 - 1;
            if ( !v491 )
            {
              v445 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v445 = v445 + 1.8446744e19;
              goto LABEL_1092;
            }
            v492 = v491 - 1;
            if ( !v492 )
            {
              v444 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v444 = v444 + 1.8446744e19;
              goto LABEL_1089;
            }
            if ( v492 != 1 )
              goto LABEL_1354;
            v443 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v443 = v443 + 1.8446744e19;
            goto LABEL_1086;
          }
          if ( a5 == 10 )
          {
            v485 = v13 - 2;
            if ( v485 )
            {
              v486 = v485 - 1;
              if ( v486 )
              {
                v487 = v486 - 1;
                if ( !v487 )
                {
                  v102 = *(float *)Str2 < *(float *)a2;
                  v103 = *(float *)Str2 == *(float *)a2;
                  goto LABEL_202;
                }
                v488 = v487 - 1;
                if ( v488 )
                {
                  if ( v488 != 1 )
                    goto LABEL_1354;
                  v93 = *(float *)Str2 < *(float *)a2;
                  goto LABEL_188;
                }
                v98 = *(float *)a2;
                goto LABEL_187;
              }
              v123 = *(float *)a2;
              goto LABEL_231;
            }
            v126 = *(float *)a2;
            goto LABEL_237;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_1051:
              v477 = v13 - 2;
              if ( !v477 )
              {
                v110 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_210;
              }
              v478 = v477 - 1;
              if ( !v478 )
              {
                v446 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1095;
              }
              v479 = v478 - 1;
              if ( !v479 )
              {
                v445 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1092;
              }
              v480 = v479 - 1;
              if ( !v480 )
              {
                v444 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1089;
              }
              if ( v480 != 1 )
                goto LABEL_1354;
              v443 = (float)(int)*(_QWORD *)Str2;
LABEL_1086:
              v184 = v443 < *(float *)a2;
              goto LABEL_341;
            }
            if ( a5 != 15 )
              goto LABEL_1354;
          }
          v481 = v13 - 2;
          if ( !v481 )
          {
            v109 = *(float *)a2;
            goto LABEL_208;
          }
          v482 = v481 - 1;
          if ( !v482 )
          {
            v106 = *(float *)a2;
            goto LABEL_200;
          }
          v483 = v482 - 1;
          if ( !v483 )
          {
            v101 = *(float *)a2;
            goto LABEL_194;
          }
          v484 = v483 - 1;
          if ( !v484 )
          {
            v96 = *(float *)a2;
            goto LABEL_184;
          }
          if ( v484 != 1 )
            goto LABEL_1354;
          v92 = *(float *)a2;
LABEL_178:
          v93 = *(double *)Str2 < v92;
LABEL_188:
          v26 = !v93;
          goto LABEL_63;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            if ( a5 != 2 )
            {
              if ( a5 != 3 )
              {
                if ( a5 != 4 )
                {
                  if ( a5 != 5 )
                  {
                    if ( a5 != 6 )
                    {
                      if ( a5 != 7 )
                        goto LABEL_1354;
                      v493 = v13 - 2;
                      if ( v493 )
                      {
                        v494 = v493 - 1;
                        if ( v494 )
                        {
                          v495 = v494 - 1;
                          if ( v495 )
                          {
                            v496 = v495 - 1;
                            if ( v496 )
                            {
                              if ( v496 != 1 )
                                goto LABEL_1354;
                              v183 = *(unsigned int *)Str2;
                              goto LABEL_336;
                            }
                            v185 = *(unsigned int *)Str2;
LABEL_340:
                            v184 = *(_QWORD *)a2 < v185;
                            goto LABEL_341;
                          }
                          v187 = *(unsigned int *)Str2;
LABEL_344:
                          v186 = *(_QWORD *)a2 < v187;
                          goto LABEL_345;
                        }
                        v191 = *(unsigned int *)Str2;
LABEL_348:
                        v189 = *(_QWORD *)a2 < v191;
                        v190 = *(_QWORD *)a2 == v191;
                        goto LABEL_349;
                      }
                      goto LABEL_1112;
                    }
                    v497 = v13 - 2;
                    if ( v497 )
                    {
                      v498 = v497 - 1;
                      if ( !v498 )
                      {
                        v191 = *(int *)Str2;
                        goto LABEL_348;
                      }
                      v499 = v498 - 1;
                      if ( !v499 )
                      {
                        v187 = *(int *)Str2;
                        goto LABEL_344;
                      }
                      v500 = v499 - 1;
                      if ( !v500 )
                      {
                        v185 = *(int *)Str2;
                        goto LABEL_340;
                      }
                      if ( v500 != 1 )
                        goto LABEL_1354;
                      v183 = *(int *)Str2;
LABEL_336:
                      v181 = *(_QWORD *)a2 < v183;
                      v182 = *(_QWORD *)a2 == v183;
LABEL_337:
                      v15 = v181 || v182;
                      goto LABEL_21;
                    }
LABEL_1122:
                    v77 = *(int *)Str2;
                    goto LABEL_153;
                  }
                  v501 = v13 - 2;
                  if ( v501 )
                  {
                    v502 = v501 - 1;
                    if ( !v502 )
                    {
                      v191 = *Str2;
                      goto LABEL_348;
                    }
                    v503 = v502 - 1;
                    if ( !v503 )
                    {
                      v187 = *Str2;
                      goto LABEL_344;
                    }
                    v504 = v503 - 1;
                    if ( !v504 )
                    {
                      v185 = *Str2;
                      goto LABEL_340;
                    }
                    if ( v504 != 1 )
                      goto LABEL_1354;
                    v183 = *Str2;
                    goto LABEL_336;
                  }
LABEL_1132:
                  v77 = *Str2;
                  goto LABEL_153;
                }
                v505 = v13 - 2;
                if ( v505 )
                {
                  v506 = v505 - 1;
                  if ( !v506 )
                  {
                    v191 = (__int16)*Str2;
                    goto LABEL_348;
                  }
                  v507 = v506 - 1;
                  if ( !v507 )
                  {
                    v187 = (__int16)*Str2;
                    goto LABEL_344;
                  }
                  v508 = v507 - 1;
                  if ( !v508 )
                  {
                    v185 = (__int16)*Str2;
                    goto LABEL_340;
                  }
                  if ( v508 != 1 )
                    goto LABEL_1354;
                  v183 = (__int16)*Str2;
                  goto LABEL_336;
                }
LABEL_1142:
                v77 = (__int16)*Str2;
                goto LABEL_153;
              }
              v509 = v13 - 2;
              if ( v509 )
              {
                v510 = v509 - 1;
                if ( !v510 )
                {
                  v191 = *(unsigned __int8 *)Str2;
                  goto LABEL_348;
                }
                v511 = v510 - 1;
                if ( !v511 )
                {
                  v187 = *(unsigned __int8 *)Str2;
                  goto LABEL_344;
                }
                v512 = v511 - 1;
                if ( !v512 )
                {
                  v185 = *(unsigned __int8 *)Str2;
                  goto LABEL_340;
                }
                if ( v512 != 1 )
                  goto LABEL_1354;
                v183 = *(unsigned __int8 *)Str2;
                goto LABEL_336;
              }
LABEL_1152:
              v77 = *(unsigned __int8 *)Str2;
              goto LABEL_153;
            }
            v513 = v13 - 2;
            if ( v513 )
            {
              v514 = v513 - 1;
              if ( !v514 )
              {
                v191 = *(char *)Str2;
                goto LABEL_348;
              }
              v515 = v514 - 1;
              if ( !v515 )
              {
                v187 = *(char *)Str2;
                goto LABEL_344;
              }
              v516 = v515 - 1;
              if ( !v516 )
              {
                v185 = *(char *)Str2;
                goto LABEL_340;
              }
              if ( v516 != 1 )
                goto LABEL_1354;
              v183 = *(char *)Str2;
              goto LABEL_336;
            }
LABEL_152:
            v77 = *(char *)Str2;
LABEL_153:
            v76 = *(_QWORD *)a2 == v77;
            goto LABEL_154;
          }
          goto LABEL_1168;
        }
        if ( a5 == 9 )
          goto LABEL_1168;
        if ( a5 != 10 )
        {
          if ( a5 == 11 )
          {
LABEL_1177:
            v521 = v13 - 2;
            if ( !v521 )
            {
              v109 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v109 = v109 + 1.844674407370955e19;
              goto LABEL_208;
            }
            v522 = v521 - 1;
            if ( !v522 )
            {
              v106 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v106 = v106 + 1.844674407370955e19;
              goto LABEL_200;
            }
            v523 = v522 - 1;
            if ( !v523 )
            {
              v101 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v101 = v101 + 1.844674407370955e19;
              goto LABEL_194;
            }
            v524 = v523 - 1;
            if ( !v524 )
            {
              v96 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v96 = v96 + 1.844674407370955e19;
              goto LABEL_184;
            }
            if ( v524 != 1 )
              goto LABEL_1354;
            v92 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v92 = v92 + 1.844674407370955e19;
            goto LABEL_178;
          }
          if ( a5 != 14 )
          {
            if ( a5 != 15 )
              goto LABEL_1354;
            goto LABEL_1177;
          }
LABEL_1168:
          v517 = v13 - 2;
          if ( v517 )
          {
            v518 = v517 - 1;
            if ( !v518 )
            {
              v138 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              v139 = *(_QWORD *)a2 == *(_QWORD *)Str2;
              goto LABEL_258;
            }
            v519 = v518 - 1;
            if ( !v519 )
            {
              v23 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              goto LABEL_54;
            }
            v520 = v519 - 1;
            if ( !v520 )
            {
              v135 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              goto LABEL_250;
            }
            if ( v520 != 1 )
              goto LABEL_1354;
            v132 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            v133 = *(_QWORD *)a2 == *(_QWORD *)Str2;
LABEL_245:
            v17 = v132 || v133;
            goto LABEL_32;
          }
          goto LABEL_1284;
        }
        v525 = v13 - 2;
        if ( !v525 )
        {
          v126 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v126 = v126 + 1.8446744e19;
          goto LABEL_237;
        }
        v526 = v525 - 1;
        if ( !v526 )
        {
          v123 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v123 = v123 + 1.8446744e19;
          goto LABEL_231;
        }
        v527 = v526 - 1;
        if ( !v527 )
        {
          v120 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v120 = v120 + 1.8446744e19;
          goto LABEL_225;
        }
        v528 = v527 - 1;
        if ( !v528 )
        {
          v98 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v98 = v98 + 1.8446744e19;
          goto LABEL_187;
        }
        if ( v528 != 1 )
          goto LABEL_1354;
        v117 = (float)(int)*(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v117 = v117 + 1.8446744e19;
LABEL_219:
        v93 = *(float *)Str2 < v117;
        goto LABEL_188;
      }
LABEL_1310:
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          if ( a5 == 2 )
          {
            v549 = v13 - 2;
            if ( !v549 )
              goto LABEL_152;
            v550 = v549 - 1;
            if ( !v550 )
            {
              v62 = *(char *)Str2;
              goto LABEL_121;
            }
            v551 = v550 - 1;
            if ( !v551 )
            {
              v57 = *(char *)Str2;
              goto LABEL_115;
            }
            v552 = v551 - 1;
            if ( !v552 )
            {
              v53 = *(char *)Str2;
              goto LABEL_109;
            }
            if ( v552 != 1 )
              goto LABEL_1354;
            v49 = *(char *)Str2;
          }
          else if ( a5 == 3 )
          {
            v545 = v13 - 2;
            if ( !v545 )
              goto LABEL_1152;
            v546 = v545 - 1;
            if ( !v546 )
            {
              v62 = *(unsigned __int8 *)Str2;
              goto LABEL_121;
            }
            v547 = v546 - 1;
            if ( !v547 )
            {
              v57 = *(unsigned __int8 *)Str2;
              goto LABEL_115;
            }
            v548 = v547 - 1;
            if ( !v548 )
            {
              v53 = *(unsigned __int8 *)Str2;
              goto LABEL_109;
            }
            if ( v548 != 1 )
              goto LABEL_1354;
            v49 = *(unsigned __int8 *)Str2;
          }
          else if ( a5 == 4 )
          {
            v541 = v13 - 2;
            if ( !v541 )
              goto LABEL_1142;
            v542 = v541 - 1;
            if ( !v542 )
            {
              v62 = (__int16)*Str2;
              goto LABEL_121;
            }
            v543 = v542 - 1;
            if ( !v543 )
            {
              v57 = (__int16)*Str2;
              goto LABEL_115;
            }
            v544 = v543 - 1;
            if ( !v544 )
            {
              v53 = (__int16)*Str2;
              goto LABEL_109;
            }
            if ( v544 != 1 )
              goto LABEL_1354;
            v49 = (__int16)*Str2;
          }
          else
          {
            if ( a5 != 5 )
            {
              if ( a5 == 6 )
              {
                v533 = v13 - 2;
                if ( !v533 )
                  goto LABEL_1122;
                v534 = v533 - 1;
                if ( v534 )
                {
                  v535 = v534 - 1;
                  if ( v535 )
                  {
                    v536 = v535 - 1;
                    if ( v536 )
                    {
                      if ( v536 != 1 )
                        goto LABEL_1354;
                      v49 = *(int *)Str2;
                      goto LABEL_103;
                    }
                    v53 = *(int *)Str2;
LABEL_109:
                    v52 = __OFSUB__(*(_QWORD *)a2, v53);
                    v51 = *(_QWORD *)a2 - v53 < 0;
                    goto LABEL_110;
                  }
                  v57 = *(int *)Str2;
                  goto LABEL_115;
                }
                v62 = *(int *)Str2;
              }
              else
              {
                if ( a5 != 7 )
                  goto LABEL_1354;
                v529 = v13 - 2;
                if ( !v529 )
                {
LABEL_1112:
                  v77 = *(unsigned int *)Str2;
                  goto LABEL_153;
                }
                v530 = v529 - 1;
                if ( v530 )
                {
                  v531 = v530 - 1;
                  if ( v531 )
                  {
                    v532 = v531 - 1;
                    if ( v532 )
                    {
                      if ( v532 != 1 )
                        goto LABEL_1354;
                      v49 = *(unsigned int *)Str2;
                      goto LABEL_103;
                    }
                    v53 = *(unsigned int *)Str2;
                    goto LABEL_109;
                  }
                  v57 = *(unsigned int *)Str2;
LABEL_115:
                  v56 = __OFSUB__(*(_QWORD *)a2, v57);
                  v55 = *(_QWORD *)a2 - v57 < 0;
                  goto LABEL_116;
                }
                v62 = *(unsigned int *)Str2;
              }
LABEL_121:
              v61 = __OFSUB__(*(_QWORD *)a2, v62);
              v59 = *(_QWORD *)a2 == v62;
              v60 = *(_QWORD *)a2 - v62 < 0;
              goto LABEL_122;
            }
            v537 = v13 - 2;
            if ( !v537 )
              goto LABEL_1132;
            v538 = v537 - 1;
            if ( !v538 )
            {
              v62 = *Str2;
              goto LABEL_121;
            }
            v539 = v538 - 1;
            if ( !v539 )
            {
              v57 = *Str2;
              goto LABEL_115;
            }
            v540 = v539 - 1;
            if ( !v540 )
            {
              v53 = *Str2;
              goto LABEL_109;
            }
            if ( v540 != 1 )
              goto LABEL_1354;
            v49 = *Str2;
          }
LABEL_103:
          v48 = __OFSUB__(*(_QWORD *)a2, v49);
          v46 = *(_QWORD *)a2 == v49;
          v47 = *(_QWORD *)a2 - v49 < 0;
          goto LABEL_104;
        }
LABEL_1259:
        v553 = v13 - 2;
        if ( v553 )
        {
          v554 = v553 - 1;
          if ( !v554 )
          {
            v40 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v38 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            v39 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_95;
          }
          v555 = v554 - 1;
          if ( !v555 )
          {
            v37 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v36 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_92;
          }
          v556 = v555 - 1;
          if ( v556 )
          {
            if ( v556 != 1 )
              goto LABEL_1354;
            v33 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v31 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            v32 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_86;
          }
          v35 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v34 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_89;
        }
LABEL_1284:
        v16 = *(_QWORD *)a2 == *(_QWORD *)Str2;
        goto LABEL_31;
      }
      if ( a5 == 9 )
        goto LABEL_1168;
      if ( a5 == 10 )
      {
        v561 = v13 - 2;
        if ( !v561 )
        {
          v126 = (float)(int)*(_QWORD *)a2;
          goto LABEL_237;
        }
        v562 = v561 - 1;
        if ( !v562 )
        {
          v123 = (float)(int)*(_QWORD *)a2;
          goto LABEL_231;
        }
        v563 = v562 - 1;
        if ( !v563 )
        {
          v120 = (float)(int)*(_QWORD *)a2;
          goto LABEL_225;
        }
        v564 = v563 - 1;
        if ( !v564 )
        {
          v98 = (float)(int)*(_QWORD *)a2;
          goto LABEL_187;
        }
        if ( v564 != 1 )
          goto LABEL_1354;
        v117 = (float)(int)*(_QWORD *)a2;
        goto LABEL_219;
      }
      if ( a5 != 11 )
      {
        if ( a5 == 14 )
          goto LABEL_1259;
        if ( a5 != 15 )
          goto LABEL_1354;
      }
      v557 = v13 - 2;
      if ( !v557 )
      {
        v109 = (double)(int)*(_QWORD *)a2;
        goto LABEL_208;
      }
      v558 = v557 - 1;
      if ( !v558 )
      {
        v106 = (double)(int)*(_QWORD *)a2;
        goto LABEL_200;
      }
      v559 = v558 - 1;
      if ( !v559 )
      {
        v101 = (double)(int)*(_QWORD *)a2;
        goto LABEL_194;
      }
      v560 = v559 - 1;
      if ( !v560 )
      {
        v96 = (double)(int)*(_QWORD *)a2;
        goto LABEL_184;
      }
      if ( v560 != 1 )
        goto LABEL_1354;
      v92 = (double)(int)*(_QWORD *)a2;
      goto LABEL_178;
    }
    if ( a1 <= 0x14 )
    {
      if ( a1 >= 0x13 )
        goto LABEL_1354;
      switch ( a1 )
      {
        case 0xEu:
          goto LABEL_1310;
        case 0xFu:
          goto LABEL_1299;
        case 0x10u:
          if ( a5 != 16 )
            goto LABEL_1354;
          v565 = v13 - 2;
          if ( v565 )
          {
            v566 = v565 - 1;
            if ( v566 )
            {
              v567 = v566 - 1;
              if ( v567 )
              {
                v568 = v567 - 1;
                if ( v568 )
                {
                  if ( v568 != 1 )
                    goto LABEL_1354;
                  v569 = CompareFileTimeType(a2, Str2) + 1;
                }
                else
                {
                  v569 = CompareFileTimeType(a2, Str2);
                }
                v26 = v569 <= 1;
                goto LABEL_63;
              }
              v25 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
            }
            else
            {
              v25 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
            }
LABEL_62:
            v26 = v25;
            goto LABEL_63;
          }
          v24 = CompareFileTimeType(a2, Str2);
LABEL_61:
          v25 = v24 == 0;
          goto LABEL_62;
        case 0x11u:
          if ( a5 != 17 || v13 != 2 )
            goto LABEL_1354;
          goto LABEL_30;
      }
      if ( a5 != 18 )
        goto LABEL_1354;
      if ( v13 == 2 )
        goto LABEL_57;
      if ( v13 - 9 > 2 )
        goto LABEL_1354;
      v15 = SubstringMatch(a2, Str2);
LABEL_21:
      *a8 = v15;
      goto LABEL_1357;
    }
    if ( a1 != 21 )
    {
      switch ( a1 )
      {
        case 0x16u:
          v570 = a5 == 22;
          break;
        case 0x17u:
          v382 = a5 == 23;
LABEL_840:
          if ( !v382 )
            goto LABEL_1354;
          goto LABEL_841;
        case 0x18u:
          v570 = a5 == 24;
          break;
        default:
          if ( a1 != 25 || a5 != 25 && a5 != 18 || v13 != 2 )
            goto LABEL_1354;
LABEL_57:
          if ( v12 )
          {
            if ( !(_DWORD)v8 || (_DWORD)v8 != a7 )
            {
              *a8 = 0;
              goto LABEL_1357;
            }
            v24 = wcsicmp(a2, Str2);
            goto LABEL_61;
          }
LABEL_1355:
          if ( (_DWORD)v8 != a7 )
            goto LABEL_13;
          v18 = memcmp(a2, Str2, v8) == 0;
          goto LABEL_37;
      }
      if ( !v570 || v13 != 2 )
        goto LABEL_1354;
      goto LABEL_64;
    }
    if ( a5 == 21 && v13 == 2 )
    {
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Str2 + 4) )
        goto LABEL_13;
      v571 = *(_QWORD *)a2 - *(_QWORD *)Str2;
      if ( *(_QWORD *)a2 == *(_QWORD *)Str2 )
        v571 = *((_QWORD *)a2 + 1) - *((_QWORD *)Str2 + 1);
      v18 = v571 == 0;
      goto LABEL_37;
    }
  }
LABEL_1357:
  if ( v11 )
  {
    LOBYTE(v9) = *a8 == 0;
    *a8 = v9;
  }
  return v10;
}
