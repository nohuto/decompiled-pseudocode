/*
 * XREFs of PropertyEval @ 0x140529FE0
 * Callers:
 *     FilterEvalStrict @ 0x140529CE0 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14052E36C (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ArrayContains @ 0x14029260C (ArrayContains.c)
 *     StringListContains @ 0x140584984 (StringListContains.c)
 *     CompareFileTimeType @ 0x140787F5C (CompareFileTimeType.c)
 *     StringListElementSubstringMatch @ 0x140788CA4 (StringListElementSubstringMatch.c)
 *     SubstringMatch @ 0x140788D9C (SubstringMatch.c)
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
  unsigned int v23; // r9d
  bool v24; // zf
  bool v25; // sf
  bool v26; // of
  bool v27; // sf
  bool v28; // of
  bool v29; // sf
  bool v30; // of
  bool v31; // zf
  bool v32; // sf
  bool v33; // of
  unsigned int v34; // r9d
  unsigned int v35; // r9d
  unsigned int v36; // r9d
  unsigned int v37; // r9d
  int v38; // ecx
  bool v39; // zf
  bool v40; // sf
  bool v41; // of
  __int64 v42; // rcx
  int v43; // ecx
  bool v44; // sf
  bool v45; // of
  __int64 v46; // rcx
  int v47; // ecx
  bool v48; // sf
  bool v49; // of
  __int64 v50; // rcx
  int v51; // ecx
  bool v52; // zf
  bool v53; // sf
  bool v54; // of
  __int64 v55; // rcx
  int v56; // ecx
  unsigned int v57; // r9d
  unsigned int v58; // r9d
  unsigned int v59; // r9d
  unsigned int v60; // r9d
  unsigned int v61; // r9d
  unsigned int v62; // r9d
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  unsigned int v67; // r9d
  unsigned int v68; // r9d
  bool v69; // zf
  __int64 v70; // rcx
  unsigned int v71; // r9d
  unsigned int v72; // r9d
  unsigned int v73; // r9d
  unsigned int v74; // r9d
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned int v79; // r9d
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  unsigned int v82; // r9d
  __m128i v83; // xmm1
  unsigned int v84; // eax
  double v85; // xmm1_8
  bool v86; // cf
  __m128i v87; // xmm0
  unsigned int v88; // eax
  double v89; // xmm0_8
  __m128i v90; // xmm0
  float v91; // xmm0_4
  int v92; // ecx
  __m128i v93; // xmm1
  unsigned int v94; // eax
  double v95; // xmm1_8
  bool v96; // cf
  bool v97; // zf
  __m128i v98; // xmm0
  unsigned int v99; // eax
  double v100; // xmm0_8
  unsigned int v101; // eax
  __m128i v102; // xmm0
  unsigned int v103; // eax
  double v104; // xmm0_8
  float v105; // xmm1_4
  unsigned int v106; // r9d
  unsigned int v107; // r9d
  unsigned int v108; // r9d
  unsigned int v109; // r9d
  __m128i v110; // xmm1
  unsigned int v111; // eax
  float v112; // xmm1_4
  __m128i v113; // xmm1
  unsigned int v114; // eax
  float v115; // xmm1_4
  __m128i v116; // xmm0
  unsigned int v117; // eax
  float v118; // xmm0_4
  __m128i v119; // xmm0
  unsigned int v120; // eax
  float v121; // xmm0_4
  unsigned int v122; // r9d
  unsigned int v123; // r9d
  unsigned int v124; // r9d
  unsigned int v125; // r9d
  unsigned __int64 v126; // rcx
  bool v127; // cf
  bool v128; // zf
  unsigned __int64 v129; // rcx
  bool v130; // cf
  unsigned __int64 v131; // rcx
  bool v132; // cf
  unsigned __int64 v133; // rcx
  bool v134; // cf
  bool v135; // zf
  __int64 v136; // rcx
  unsigned int v137; // r9d
  unsigned int v138; // r9d
  unsigned int v139; // r9d
  unsigned int v140; // r9d
  unsigned int v141; // ecx
  unsigned int v142; // ecx
  unsigned int v143; // ecx
  unsigned int v144; // ecx
  int v145; // ecx
  unsigned int v146; // r9d
  unsigned int v147; // r9d
  unsigned int v148; // r9d
  unsigned int v149; // r9d
  int v150; // ecx
  int v151; // ecx
  int v152; // ecx
  int v153; // ecx
  unsigned int v154; // r9d
  unsigned int v155; // r9d
  unsigned int v156; // r9d
  unsigned int v157; // r9d
  unsigned int v158; // r9d
  unsigned int v159; // r9d
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  int v162; // edx
  int v163; // ecx
  int v164; // edx
  int v165; // ecx
  int v166; // edx
  int v167; // ecx
  int v168; // edx
  int v169; // ecx
  int v170; // edx
  int v171; // ecx
  unsigned int v172; // r9d
  unsigned int v173; // r9d
  unsigned int v174; // r9d
  unsigned int v175; // r9d
  wchar_t v176; // cx
  bool v177; // cf
  bool v178; // zf
  unsigned __int64 v179; // rcx
  bool v180; // cf
  unsigned __int64 v181; // rcx
  bool v182; // cf
  unsigned __int64 v183; // rcx
  wchar_t v184; // cx
  bool v185; // cf
  bool v186; // zf
  unsigned __int64 v187; // rcx
  wchar_t v188; // cx
  unsigned int v189; // r9d
  unsigned int v190; // r9d
  unsigned int v191; // r9d
  unsigned int v192; // r9d
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
  unsigned int v205; // eax
  unsigned int v206; // r9d
  unsigned int v207; // r9d
  unsigned int v208; // r9d
  unsigned int v209; // r9d
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
  wchar_t v230; // cx
  __int16 v231; // cx
  __int16 v232; // cx
  wchar_t v233; // cx
  unsigned int v234; // r9d
  unsigned int v235; // r9d
  unsigned int v236; // r9d
  unsigned int v237; // r9d
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
  wchar_t v266; // cx
  wchar_t v267; // cx
  __int16 v268; // cx
  unsigned int v269; // r9d
  unsigned int v270; // r9d
  unsigned int v271; // r9d
  unsigned int v272; // r9d
  __int16 v273; // dx
  __int16 v274; // dx
  __int16 v275; // dx
  __int16 v276; // dx
  unsigned int v277; // r9d
  unsigned int v278; // r9d
  unsigned int v279; // r9d
  unsigned int v280; // r9d
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
  unsigned int v349; // ecx
  unsigned int v350; // ecx
  unsigned int v351; // ecx
  unsigned int v352; // ecx
  unsigned int v353; // r9d
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
  bool v381; // zf
  bool v382; // zf
  unsigned int v383; // r9d
  unsigned int v384; // r9d
  unsigned int v385; // r9d
  unsigned int v386; // r9d
  double v387; // xmm0_8
  double v388; // xmm1_8
  double v389; // xmm0_8
  double v390; // xmm1_8
  double v391; // xmm1_8
  unsigned int v392; // r9d
  unsigned int v393; // r9d
  unsigned int v394; // r9d
  unsigned int v395; // r9d
  __m128i v396; // xmm0
  unsigned int v397; // ecx
  __m128i v398; // xmm1
  unsigned int v399; // ecx
  __m128i v400; // xmm0
  unsigned int v401; // ecx
  __m128i v402; // xmm1
  unsigned int v403; // ecx
  __m128i v404; // xmm1
  unsigned int v405; // ecx
  unsigned int v406; // r9d
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
  float v442; // xmm0_4
  float v443; // xmm1_4
  float v444; // xmm0_4
  float v445; // xmm1_4
  unsigned int v446; // r9d
  unsigned int v447; // r9d
  unsigned int v448; // r9d
  unsigned int v449; // r9d
  __m128i v450; // xmm0
  unsigned int v451; // ecx
  __m128i v452; // xmm1
  unsigned int v453; // ecx
  __m128i v454; // xmm0
  unsigned int v455; // ecx
  __m128i v456; // xmm1
  unsigned int v457; // ecx
  __m128i v458; // xmm1
  unsigned int v459; // ecx
  unsigned int v460; // r9d
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
  int v564; // eax
  bool v565; // zf
  unsigned int v566; // r9d
  unsigned int v567; // r9d
  unsigned int v568; // r9d
  unsigned int v569; // r9d
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
      if ( a1 != 4109 )
      {
        if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
          goto LABEL_1354;
        switch ( v13 )
        {
          case 0x1000u:
            v15 = StringListContains(a2);
            break;
          case 2u:
            v382 = v12 == 0;
LABEL_836:
            if ( !v382 )
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
LABEL_20:
        *a8 = v15;
        goto LABEL_1357;
      }
      if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
        goto LABEL_1354;
      if ( v13 != 2 )
      {
        if ( v13 != 0x10000000 )
          goto LABEL_1354;
        v15 = ArrayContains((__int64)a2, v8, (__int64)Str2, a7);
        goto LABEL_20;
      }
      goto LABEL_1355;
    }
    if ( a1 == 4099 )
    {
LABEL_834:
      v382 = v13 == 2;
      goto LABEL_836;
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
            goto LABEL_36;
          }
LABEL_12:
          v14 = 0;
LABEL_13:
          *a8 = v14;
          goto LABEL_1357;
        }
LABEL_1354:
        v10 = -1073741637;
        goto LABEL_1357;
      }
      if ( a1 <= 7 )
      {
        if ( a1 != 7 )
        {
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
                                {
                                  v20 = v13 - 2;
                                  if ( v20 )
                                  {
                                    v21 = v20 - 1;
                                    if ( v21 )
                                    {
                                      v22 = v21 - 1;
                                      if ( v22 )
                                      {
                                        v23 = v22 - 1;
                                        if ( v23 )
                                        {
                                          if ( v23 != 1 )
                                            goto LABEL_1354;
                                          v26 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                          v24 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                          v25 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                                          goto LABEL_63;
                                        }
                                        v28 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                        v27 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_66:
                                        v17 = v27 == v28;
                                        goto LABEL_31;
                                      }
                                      v30 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                      v29 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_69:
                                      v17 = v29 ^ v30;
                                      goto LABEL_31;
                                    }
                                    v33 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                                    v31 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                    v32 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_72:
                                    v17 = !(v32 ^ v33 | v31);
                                    goto LABEL_31;
                                  }
                                  goto LABEL_62;
                                }
LABEL_728:
                                if ( v19 != 1 )
                                  goto LABEL_1354;
LABEL_729:
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
                                        v127 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                                        v128 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                        goto LABEL_224;
                                      }
                                      v130 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_229:
                                      v17 = !v130;
                                      goto LABEL_31;
                                    }
                                    v132 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                                    goto LABEL_234;
                                  }
                                  v134 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                                  v135 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                  goto LABEL_239;
                                }
LABEL_62:
                                v16 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                goto LABEL_30;
                              }
                              v34 = v13 - 2;
                              if ( v34 )
                              {
                                v35 = v34 - 1;
                                if ( v35 )
                                {
                                  v36 = v35 - 1;
                                  if ( v36 )
                                  {
                                    v37 = v36 - 1;
                                    if ( v37 )
                                    {
                                      if ( v37 != 1 )
                                        goto LABEL_1354;
                                      v38 = *Str2;
                                      goto LABEL_79;
                                    }
                                    v43 = *Str2;
                                    goto LABEL_84;
                                  }
                                  v47 = *Str2;
                                  goto LABEL_90;
                                }
                                v51 = *Str2;
                                goto LABEL_96;
                              }
                              goto LABEL_100;
                            }
                            v57 = v13 - 2;
                            if ( v57 )
                            {
                              v58 = v57 - 1;
                              if ( v58 )
                              {
                                v59 = v58 - 1;
                                if ( v59 )
                                {
                                  v60 = v59 - 1;
                                  if ( v60 )
                                  {
                                    if ( v60 != 1 )
                                      goto LABEL_1354;
                                    v38 = (__int16)*Str2;
                                    goto LABEL_79;
                                  }
                                  v43 = (__int16)*Str2;
LABEL_84:
                                  v45 = __OFSUB__(*(_DWORD *)a2, v43);
                                  v44 = *(_DWORD *)a2 - v43 < 0;
                                  goto LABEL_87;
                                }
                                v47 = (__int16)*Str2;
LABEL_90:
                                v49 = __OFSUB__(*(_DWORD *)a2, v47);
                                v48 = *(_DWORD *)a2 - v47 < 0;
                                goto LABEL_93;
                              }
                              v51 = (__int16)*Str2;
LABEL_96:
                              v54 = __OFSUB__(*(_DWORD *)a2, v51);
                              v52 = *(_DWORD *)a2 == v51;
                              v53 = *(_DWORD *)a2 - v51 < 0;
                              goto LABEL_99;
                            }
LABEL_110:
                            v56 = (__int16)*Str2;
                            goto LABEL_128;
                          }
                          v61 = v13 - 2;
                          if ( v61 )
                          {
                            v62 = v61 - 1;
                            if ( !v62 )
                            {
                              v51 = *(unsigned __int8 *)Str2;
                              goto LABEL_96;
                            }
                            v63 = v62 - 1;
                            if ( !v63 )
                            {
                              v47 = *(unsigned __int8 *)Str2;
                              goto LABEL_90;
                            }
                            v64 = v63 - 1;
                            if ( !v64 )
                            {
                              v43 = *(unsigned __int8 *)Str2;
                              goto LABEL_84;
                            }
                            if ( v64 != 1 )
                              goto LABEL_1354;
                            v38 = *(unsigned __int8 *)Str2;
                            goto LABEL_79;
                          }
LABEL_120:
                          v56 = *(unsigned __int8 *)Str2;
                          goto LABEL_128;
                        }
                        v65 = v13 - 2;
                        if ( v65 )
                        {
                          v66 = v65 - 1;
                          if ( !v66 )
                          {
                            v51 = *(char *)Str2;
                            goto LABEL_96;
                          }
                          v67 = v66 - 1;
                          if ( !v67 )
                          {
                            v47 = *(char *)Str2;
                            goto LABEL_90;
                          }
                          v68 = v67 - 1;
                          if ( !v68 )
                          {
                            v43 = *(char *)Str2;
                            goto LABEL_84;
                          }
                          if ( v68 != 1 )
                            goto LABEL_1354;
                          v38 = *(char *)Str2;
LABEL_79:
                          v41 = __OFSUB__(*(_DWORD *)a2, v38);
                          v39 = *(_DWORD *)a2 == v38;
                          v40 = *(_DWORD *)a2 - v38 < 0;
LABEL_81:
                          v15 = v40 ^ v41 | v39;
                          goto LABEL_20;
                        }
LABEL_127:
                        v56 = *(char *)Str2;
                        goto LABEL_128;
                      }
LABEL_138:
                      v71 = v13 - 2;
                      if ( v71 )
                      {
                        v72 = v71 - 1;
                        if ( v72 )
                        {
                          v73 = v72 - 1;
                          if ( v73 )
                          {
                            v74 = v73 - 1;
                            if ( v74 )
                            {
                              if ( v74 != 1 )
                                goto LABEL_1354;
                              v75 = *(int *)a2;
                              goto LABEL_790;
                            }
                            v76 = *(int *)a2;
LABEL_792:
                            v28 = __OFSUB__(v76, *(_QWORD *)Str2);
                            v27 = v76 - *(_QWORD *)Str2 < 0;
                            goto LABEL_66;
                          }
                          v77 = *(int *)a2;
LABEL_794:
                          v30 = __OFSUB__(v77, *(_QWORD *)Str2);
                          v29 = v77 - *(_QWORD *)Str2 < 0;
                          goto LABEL_69;
                        }
                        v78 = *(int *)a2;
LABEL_796:
                        v33 = __OFSUB__(v78, *(_QWORD *)Str2);
                        v31 = v78 == *(_QWORD *)Str2;
                        v32 = v78 - *(_QWORD *)Str2 < 0;
                        goto LABEL_72;
                      }
                      goto LABEL_240;
                    }
                    if ( a5 != 9 )
                    {
                      if ( a5 != 10 )
                      {
                        if ( a5 != 11 )
                        {
                          if ( a5 == 14 )
                            goto LABEL_138;
                          if ( a5 != 15 )
                            goto LABEL_1354;
                        }
                        v79 = v13 - 2;
                        if ( v79 )
                        {
                          v80 = v79 - 1;
                          if ( v80 )
                          {
                            v81 = v80 - 1;
                            if ( v81 )
                            {
                              v82 = v81 - 1;
                              if ( v82 )
                              {
                                if ( v82 != 1 )
                                  goto LABEL_1354;
                                v83 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                                goto LABEL_154;
                              }
                              v87 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                              goto LABEL_159;
                            }
                            v93 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                            goto LABEL_169;
                          }
                          v98 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_175;
                        }
                        v102 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_185;
                      }
                      v106 = v13 - 2;
                      if ( v106 )
                      {
                        v107 = v106 - 1;
                        if ( v107 )
                        {
                          v108 = v107 - 1;
                          if ( v108 )
                          {
                            v109 = v108 - 1;
                            if ( v109 )
                            {
                              if ( v109 != 1 )
                                goto LABEL_1354;
                              v110 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                              goto LABEL_197;
                            }
                            v90 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                            goto LABEL_163;
                          }
                          v113 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_202;
                        }
                        v116 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_208;
                      }
                      v119 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                      goto LABEL_214;
                    }
                    v122 = v13 - 2;
                    if ( !v122 )
                    {
LABEL_240:
                      v136 = *(int *)a2;
LABEL_715:
                      v16 = v136 == *(_QWORD *)Str2;
                      goto LABEL_30;
                    }
                    v123 = v122 - 1;
                    if ( v123 )
                    {
                      v124 = v123 - 1;
                      if ( v124 )
                      {
                        v125 = v124 - 1;
                        if ( v125 )
                        {
                          if ( v125 != 1 )
                            goto LABEL_1354;
                          v126 = *(int *)a2;
                          goto LABEL_223;
                        }
                        v129 = *(int *)a2;
LABEL_227:
                        v130 = v129 < *(_QWORD *)Str2;
                        goto LABEL_229;
                      }
                      v131 = *(int *)a2;
LABEL_232:
                      v132 = v131 < *(_QWORD *)Str2;
                      goto LABEL_234;
                    }
                    v133 = *(int *)a2;
LABEL_237:
                    v134 = v133 < *(_QWORD *)Str2;
                    v135 = v133 == *(_QWORD *)Str2;
                    goto LABEL_239;
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
                                v137 = v13 - 2;
                                if ( v137 )
                                {
                                  v138 = v137 - 1;
                                  if ( v138 )
                                  {
                                    v139 = v138 - 1;
                                    if ( v139 )
                                    {
                                      v140 = v139 - 1;
                                      if ( v140 )
                                      {
                                        if ( v140 != 1 )
                                          goto LABEL_1354;
                                        v141 = *a2;
                                        goto LABEL_255;
                                      }
                                      v142 = *a2;
LABEL_258:
                                      v130 = v142 < *(_DWORD *)Str2;
                                      goto LABEL_229;
                                    }
                                    v143 = *a2;
LABEL_261:
                                    v132 = v143 < *(_DWORD *)Str2;
                                    goto LABEL_234;
                                  }
                                  v144 = *a2;
LABEL_264:
                                  v134 = v144 < *(_DWORD *)Str2;
                                  v135 = v144 == *(_DWORD *)Str2;
                                  goto LABEL_239;
                                }
                                goto LABEL_265;
                              }
                              v146 = v13 - 2;
                              if ( !v146 )
                              {
LABEL_265:
                                v145 = *a2;
LABEL_267:
                                v16 = v145 == *(_DWORD *)Str2;
                                goto LABEL_30;
                              }
                              v147 = v146 - 1;
                              if ( v147 )
                              {
                                v148 = v147 - 1;
                                if ( v148 )
                                {
                                  v149 = v148 - 1;
                                  if ( v149 )
                                  {
                                    if ( v149 != 1 )
                                      goto LABEL_1354;
                                    v150 = *a2;
                                    goto LABEL_274;
                                  }
                                  v151 = *a2;
LABEL_277:
                                  v28 = __OFSUB__(v151, *(_DWORD *)Str2);
                                  v27 = v151 - *(_DWORD *)Str2 < 0;
                                  goto LABEL_66;
                                }
                                v152 = *a2;
LABEL_280:
                                v30 = __OFSUB__(v152, *(_DWORD *)Str2);
                                v29 = v152 - *(_DWORD *)Str2 < 0;
                                goto LABEL_69;
                              }
                              v153 = *a2;
LABEL_283:
                              v33 = __OFSUB__(v153, *(_DWORD *)Str2);
                              v31 = v153 == *(_DWORD *)Str2;
                              v32 = v153 - *(_DWORD *)Str2 < 0;
                              goto LABEL_72;
                            }
                            v154 = v13 - 2;
                            if ( v154 )
                            {
                              v155 = v154 - 1;
                              if ( v155 )
                              {
                                v156 = v155 - 1;
                                if ( v156 )
                                {
                                  v157 = v156 - 1;
                                  if ( v157 )
                                  {
                                    if ( v157 != 1 )
                                      goto LABEL_1354;
                                    v127 = *a2 < *Str2;
                                    v128 = *a2 == *Str2;
                                    goto LABEL_224;
                                  }
                                  v130 = *a2 < *Str2;
                                  goto LABEL_229;
                                }
                                v132 = *a2 < *Str2;
                                goto LABEL_234;
                              }
                              v134 = *a2 < *Str2;
                              v135 = *a2 == *Str2;
                              goto LABEL_239;
                            }
LABEL_293:
                            v16 = *a2 == *Str2;
                            goto LABEL_30;
                          }
                          v158 = v13 - 2;
                          if ( v158 )
                          {
                            v159 = v158 - 1;
                            if ( v159 )
                            {
                              v160 = v159 - 1;
                              if ( v160 )
                              {
                                v161 = v160 - 1;
                                if ( v161 )
                                {
                                  if ( v161 != 1 )
                                    goto LABEL_1354;
                                  v162 = *a2;
                                  v163 = (__int16)*Str2;
                                  goto LABEL_300;
                                }
                                v164 = *a2;
                                v165 = (__int16)*Str2;
LABEL_303:
                                v45 = __OFSUB__(v164, v165);
                                v44 = v164 - v165 < 0;
                                goto LABEL_87;
                              }
                              v166 = *a2;
                              v167 = (__int16)*Str2;
LABEL_306:
                              v49 = __OFSUB__(v166, v167);
                              v48 = v166 - v167 < 0;
                              goto LABEL_93;
                            }
                            v168 = *a2;
                            v169 = (__int16)*Str2;
LABEL_309:
                            v54 = __OFSUB__(v168, v169);
                            v52 = v168 == v169;
                            v53 = v168 - v169 < 0;
                            goto LABEL_99;
                          }
                          v170 = *a2;
                          v171 = (__int16)*Str2;
LABEL_354:
                          v69 = v170 == v171;
                          goto LABEL_131;
                        }
                        v172 = v13 - 2;
                        if ( v172 )
                        {
                          v173 = v172 - 1;
                          if ( v173 )
                          {
                            v174 = v173 - 1;
                            if ( v174 )
                            {
                              v175 = v174 - 1;
                              if ( v175 )
                              {
                                if ( v175 != 1 )
                                  goto LABEL_1354;
                                v176 = *(unsigned __int8 *)Str2;
                                v177 = *a2 < v176;
                                v178 = *a2 == v176;
                                goto LABEL_318;
                              }
                              v180 = *a2 < *(unsigned __int8 *)Str2;
LABEL_322:
                              v15 = !v180;
                              goto LABEL_20;
                            }
                            v182 = *a2 < *(unsigned __int8 *)Str2;
LABEL_326:
                            v15 = v182;
                            goto LABEL_20;
                          }
                          v184 = *(unsigned __int8 *)Str2;
                          v185 = *a2 < v184;
                          v186 = *a2 == v184;
LABEL_330:
                          v15 = !v185 && !v186;
                          goto LABEL_20;
                        }
                        goto LABEL_331;
                      }
                      v189 = v13 - 2;
                      if ( v189 )
                      {
                        v190 = v189 - 1;
                        if ( v190 )
                        {
                          v191 = v190 - 1;
                          if ( v191 )
                          {
                            v192 = v191 - 1;
                            if ( v192 )
                            {
                              if ( v192 != 1 )
                                goto LABEL_1354;
                              v162 = *a2;
                              goto LABEL_340;
                            }
                            v164 = *a2;
                            goto LABEL_343;
                          }
                          v166 = *a2;
                          goto LABEL_346;
                        }
                        v168 = *a2;
                        goto LABEL_349;
                      }
                      v170 = *a2;
                      goto LABEL_352;
                    }
LABEL_361:
                    v193 = v13 - 2;
                    if ( v193 )
                    {
                      v194 = v193 - 1;
                      if ( !v194 )
                      {
                        v78 = *a2;
                        goto LABEL_796;
                      }
                      v195 = v194 - 1;
                      if ( !v195 )
                      {
                        v77 = *a2;
                        goto LABEL_794;
                      }
                      v196 = v195 - 1;
                      if ( !v196 )
                      {
                        v76 = *a2;
                        goto LABEL_792;
                      }
                      if ( v196 != 1 )
                        goto LABEL_1354;
                      v75 = *a2;
LABEL_790:
                      v26 = __OFSUB__(v75, *(_QWORD *)Str2);
                      v24 = v75 == *(_QWORD *)Str2;
                      v25 = v75 - *(_QWORD *)Str2 < 0;
                      goto LABEL_63;
                    }
LABEL_394:
                    v136 = *a2;
                    goto LABEL_715;
                  }
                  if ( a5 != 9 )
                  {
                    if ( a5 != 10 )
                    {
                      if ( a5 != 11 )
                      {
                        if ( a5 == 14 )
                          goto LABEL_361;
                        if ( a5 != 15 )
                          goto LABEL_1354;
                      }
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
                              v84 = *a2;
                              goto LABEL_153;
                            }
                            v88 = *a2;
LABEL_158:
                            v87 = _mm_cvtsi32_si128(v88);
LABEL_159:
                            *(_QWORD *)&v89 = *(_OWORD *)&_mm_cvtepi32_pd(v87);
                            goto LABEL_161;
                          }
                          v94 = *a2;
LABEL_168:
                          v93 = _mm_cvtsi32_si128(v94);
LABEL_169:
                          *(_QWORD *)&v95 = *(_OWORD *)&_mm_cvtepi32_pd(v93);
LABEL_171:
                          v96 = *(double *)Str2 < v95;
                          v97 = *(double *)Str2 == v95;
                          goto LABEL_179;
                        }
                        v99 = *a2;
LABEL_174:
                        v98 = _mm_cvtsi32_si128(v99);
LABEL_175:
                        *(_QWORD *)&v100 = *(_OWORD *)&_mm_cvtepi32_pd(v98);
                        goto LABEL_177;
                      }
                      v103 = *a2;
LABEL_184:
                      v102 = _mm_cvtsi32_si128(v103);
LABEL_185:
                      *(_QWORD *)&v104 = *(_OWORD *)&_mm_cvtepi32_pd(v102);
LABEL_187:
                      v18 = v104 == *(double *)Str2;
                      goto LABEL_36;
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
                            v111 = *a2;
                            goto LABEL_196;
                          }
                          v205 = *a2;
LABEL_384:
                          v90 = _mm_cvtsi32_si128(v205);
LABEL_163:
                          LODWORD(v91) = _mm_cvtepi32_ps(v90).m128_u32[0];
                          goto LABEL_164;
                        }
                        v114 = *a2;
LABEL_201:
                        v113 = _mm_cvtsi32_si128(v114);
LABEL_202:
                        LODWORD(v115) = _mm_cvtepi32_ps(v113).m128_u32[0];
LABEL_204:
                        v96 = *(float *)Str2 < v115;
                        v97 = *(float *)Str2 == v115;
                        goto LABEL_179;
                      }
                      v117 = *a2;
LABEL_207:
                      v116 = _mm_cvtsi32_si128(v117);
LABEL_208:
                      LODWORD(v118) = _mm_cvtepi32_ps(v116).m128_u32[0];
LABEL_210:
                      v96 = v118 < *(float *)Str2;
                      v97 = v118 == *(float *)Str2;
                      goto LABEL_179;
                    }
                    v120 = *a2;
LABEL_213:
                    v119 = _mm_cvtsi32_si128(v120);
LABEL_214:
                    LODWORD(v121) = _mm_cvtepi32_ps(v119).m128_u32[0];
LABEL_216:
                    v18 = v121 == *(float *)Str2;
                    goto LABEL_36;
                  }
                  v206 = v13 - 2;
                  if ( !v206 )
                    goto LABEL_394;
                  v207 = v206 - 1;
                  if ( !v207 )
                  {
                    v133 = *a2;
                    goto LABEL_237;
                  }
                  v208 = v207 - 1;
                  if ( !v208 )
                  {
                    v131 = *a2;
                    goto LABEL_232;
                  }
                  v209 = v208 - 1;
                  if ( !v209 )
                  {
                    v129 = *a2;
                    goto LABEL_227;
                  }
                  if ( v209 != 1 )
                    goto LABEL_1354;
                  v126 = *a2;
LABEL_223:
                  v127 = v126 < *(_QWORD *)Str2;
                  v128 = v126 == *(_QWORD *)Str2;
                  goto LABEL_224;
                }
                if ( a5 <= 8 )
                {
                  if ( a5 != 8 )
                  {
                    switch ( a5 )
                    {
                      case 2u:
                        v234 = v13 - 2;
                        if ( !v234 )
                        {
                          v188 = *(char *)Str2;
                          goto LABEL_333;
                        }
                        v235 = v234 - 1;
                        if ( v235 )
                        {
                          v236 = v235 - 1;
                          if ( v236 )
                          {
                            v237 = v236 - 1;
                            if ( v237 )
                            {
                              if ( v237 != 1 )
                                goto LABEL_1354;
                              v230 = *(char *)Str2;
LABEL_456:
                              v41 = __OFSUB__(*a2, v230);
                              v39 = *a2 == v230;
                              v40 = (__int16)(*a2 - v230) < 0;
                              goto LABEL_81;
                            }
                            v231 = *(char *)Str2;
LABEL_459:
                            v45 = __OFSUB__(*a2, v231);
                            v44 = (__int16)(*a2 - v231) < 0;
                            goto LABEL_87;
                          }
                          v232 = *(char *)Str2;
LABEL_462:
                          v49 = __OFSUB__(*a2, v232);
                          v48 = (__int16)(*a2 - v232) < 0;
                          goto LABEL_93;
                        }
                        v233 = *(char *)Str2;
                        break;
                      case 3u:
                        v226 = v13 - 2;
                        if ( !v226 )
                        {
LABEL_331:
                          v188 = *(unsigned __int8 *)Str2;
LABEL_333:
                          v69 = *a2 == v188;
                          goto LABEL_131;
                        }
                        v227 = v226 - 1;
                        if ( v227 )
                        {
                          v228 = v227 - 1;
                          if ( v228 )
                          {
                            v229 = v228 - 1;
                            if ( v229 )
                            {
                              if ( v229 != 1 )
                                goto LABEL_1354;
                              v230 = *(unsigned __int8 *)Str2;
                              goto LABEL_456;
                            }
                            v231 = *(unsigned __int8 *)Str2;
                            goto LABEL_459;
                          }
                          v232 = *(unsigned __int8 *)Str2;
                          goto LABEL_462;
                        }
                        v233 = *(unsigned __int8 *)Str2;
                        break;
                      case 4u:
                        v222 = v13 - 2;
                        if ( !v222 )
                          goto LABEL_293;
                        v223 = v222 - 1;
                        if ( !v223 )
                        {
                          v33 = __OFSUB__(*a2, *Str2);
                          v31 = *a2 == *Str2;
                          v32 = (__int16)(*a2 - *Str2) < 0;
                          goto LABEL_72;
                        }
                        v224 = v223 - 1;
                        if ( !v224 )
                        {
                          v30 = __OFSUB__(*a2, *Str2);
                          v29 = (__int16)(*a2 - *Str2) < 0;
                          goto LABEL_69;
                        }
                        v225 = v224 - 1;
                        if ( !v225 )
                        {
                          v28 = __OFSUB__(*a2, *Str2);
                          v27 = (__int16)(*a2 - *Str2) < 0;
                          goto LABEL_66;
                        }
                        if ( v225 != 1 )
                          goto LABEL_1354;
                        v26 = __OFSUB__(*a2, *Str2);
                        v24 = *a2 == *Str2;
                        v25 = (__int16)(*a2 - *Str2) < 0;
LABEL_63:
                        v17 = v25 ^ v26 | v24;
                        goto LABEL_31;
                      case 5u:
                        v218 = v13 - 2;
                        if ( v218 )
                        {
                          v219 = v218 - 1;
                          if ( v219 )
                          {
                            v220 = v219 - 1;
                            if ( v220 )
                            {
                              v221 = v220 - 1;
                              if ( v221 )
                              {
                                if ( v221 != 1 )
                                  goto LABEL_1354;
                                v162 = (__int16)*a2;
                                goto LABEL_428;
                              }
                              v164 = (__int16)*a2;
                              goto LABEL_431;
                            }
                            v166 = (__int16)*a2;
                            goto LABEL_434;
                          }
                          v168 = (__int16)*a2;
                          goto LABEL_437;
                        }
                        v170 = (__int16)*a2;
                        goto LABEL_440;
                      case 6u:
                        v214 = v13 - 2;
                        if ( !v214 )
                          goto LABEL_412;
                        v215 = v214 - 1;
                        if ( !v215 )
                        {
                          v153 = (__int16)*a2;
                          goto LABEL_283;
                        }
                        v216 = v215 - 1;
                        if ( !v216 )
                        {
                          v152 = (__int16)*a2;
                          goto LABEL_280;
                        }
                        v217 = v216 - 1;
                        if ( !v217 )
                        {
                          v151 = (__int16)*a2;
                          goto LABEL_277;
                        }
                        if ( v217 != 1 )
                          goto LABEL_1354;
                        v150 = (__int16)*a2;
LABEL_274:
                        v26 = __OFSUB__(v150, *(_DWORD *)Str2);
                        v24 = v150 == *(_DWORD *)Str2;
                        v25 = v150 - *(_DWORD *)Str2 < 0;
                        goto LABEL_63;
                      case 7u:
                        v210 = v13 - 2;
                        if ( v210 )
                        {
                          v211 = v210 - 1;
                          if ( !v211 )
                          {
                            v144 = (__int16)*a2;
                            goto LABEL_264;
                          }
                          v212 = v211 - 1;
                          if ( !v212 )
                          {
                            v143 = (__int16)*a2;
                            goto LABEL_261;
                          }
                          v213 = v212 - 1;
                          if ( !v213 )
                          {
                            v142 = (__int16)*a2;
                            goto LABEL_258;
                          }
                          if ( v213 != 1 )
                            goto LABEL_1354;
                          v141 = (__int16)*a2;
                          goto LABEL_255;
                        }
LABEL_412:
                        v145 = (__int16)*a2;
                        goto LABEL_267;
                      default:
                        goto LABEL_1354;
                    }
                    v54 = __OFSUB__(*a2, v233);
                    v52 = *a2 == v233;
                    v53 = (__int16)(*a2 - v233) < 0;
                    goto LABEL_99;
                  }
                  goto LABEL_478;
                }
                if ( a5 == 9 )
                {
                  v250 = v13 - 2;
                  if ( v250 )
                  {
                    v251 = v250 - 1;
                    if ( !v251 )
                    {
                      v133 = (__int16)*a2;
                      goto LABEL_237;
                    }
                    v252 = v251 - 1;
                    if ( !v252 )
                    {
                      v131 = (__int16)*a2;
                      goto LABEL_232;
                    }
                    v253 = v252 - 1;
                    if ( !v253 )
                    {
                      v129 = (__int16)*a2;
                      goto LABEL_227;
                    }
                    if ( v253 != 1 )
                      goto LABEL_1354;
                    v126 = (__int16)*a2;
                    goto LABEL_223;
                  }
LABEL_516:
                  v136 = (__int16)*a2;
                  goto LABEL_715;
                }
                if ( a5 != 10 )
                {
                  if ( a5 != 11 )
                  {
                    if ( a5 == 14 )
                    {
LABEL_478:
                      v238 = v13 - 2;
                      if ( v238 )
                      {
                        v239 = v238 - 1;
                        if ( !v239 )
                        {
                          v78 = (__int16)*a2;
                          goto LABEL_796;
                        }
                        v240 = v239 - 1;
                        if ( !v240 )
                        {
                          v77 = (__int16)*a2;
                          goto LABEL_794;
                        }
                        v241 = v240 - 1;
                        if ( !v241 )
                        {
                          v76 = (__int16)*a2;
                          goto LABEL_792;
                        }
                        if ( v241 != 1 )
                          goto LABEL_1354;
                        v75 = (__int16)*a2;
                        goto LABEL_790;
                      }
                      goto LABEL_516;
                    }
                    if ( a5 != 15 )
                      goto LABEL_1354;
                  }
                  v242 = v13 - 2;
                  if ( !v242 )
                  {
                    v103 = (__int16)*a2;
                    goto LABEL_184;
                  }
                  v243 = v242 - 1;
                  if ( !v243 )
                  {
                    v99 = (__int16)*a2;
                    goto LABEL_174;
                  }
                  v244 = v243 - 1;
                  if ( !v244 )
                  {
                    v94 = (__int16)*a2;
                    goto LABEL_168;
                  }
                  v245 = v244 - 1;
                  if ( !v245 )
                  {
                    v88 = (__int16)*a2;
                    goto LABEL_158;
                  }
                  if ( v245 != 1 )
                    goto LABEL_1354;
                  v84 = (__int16)*a2;
LABEL_153:
                  v83 = _mm_cvtsi32_si128(v84);
LABEL_154:
                  *(_QWORD *)&v85 = *(_OWORD *)&_mm_cvtepi32_pd(v83);
LABEL_155:
                  v86 = *(double *)Str2 < v85;
LABEL_165:
                  v92 = !v86;
                  goto LABEL_181;
                }
                v246 = v13 - 2;
                if ( !v246 )
                {
                  v120 = (__int16)*a2;
                  goto LABEL_213;
                }
                v247 = v246 - 1;
                if ( !v247 )
                {
                  v117 = (__int16)*a2;
                  goto LABEL_207;
                }
                v248 = v247 - 1;
                if ( !v248 )
                {
                  v114 = (__int16)*a2;
                  goto LABEL_201;
                }
                v249 = v248 - 1;
                if ( !v249 )
                {
                  v205 = (__int16)*a2;
                  goto LABEL_384;
                }
                if ( v249 != 1 )
                  goto LABEL_1354;
                v111 = (__int16)*a2;
LABEL_196:
                v110 = _mm_cvtsi32_si128(v111);
LABEL_197:
                LODWORD(v112) = _mm_cvtepi32_ps(v110).m128_u32[0];
LABEL_198:
                v86 = *(float *)Str2 < v112;
                goto LABEL_165;
              }
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  if ( a5 == 2 )
                  {
                    v281 = v13 - 2;
                    if ( v281 )
                    {
                      v282 = v281 - 1;
                      if ( v282 )
                      {
                        v283 = v282 - 1;
                        if ( v283 )
                        {
                          v284 = v283 - 1;
                          if ( v284 )
                          {
                            if ( v284 != 1 )
                              goto LABEL_1354;
                            v162 = *(unsigned __int8 *)a2;
LABEL_340:
                            v163 = *(char *)Str2;
                            goto LABEL_300;
                          }
                          v164 = *(unsigned __int8 *)a2;
LABEL_343:
                          v165 = *(char *)Str2;
                          goto LABEL_303;
                        }
                        v166 = *(unsigned __int8 *)a2;
LABEL_346:
                        v167 = *(char *)Str2;
                        goto LABEL_306;
                      }
                      v168 = *(unsigned __int8 *)a2;
LABEL_349:
                      v169 = *(char *)Str2;
                      goto LABEL_309;
                    }
                    v170 = *(unsigned __int8 *)a2;
LABEL_352:
                    v171 = *(char *)Str2;
                    goto LABEL_354;
                  }
                  if ( a5 != 3 )
                  {
                    if ( a5 == 4 )
                    {
                      v269 = v13 - 2;
                      if ( v269 )
                      {
                        v270 = v269 - 1;
                        if ( v270 )
                        {
                          v271 = v270 - 1;
                          if ( v271 )
                          {
                            v272 = v271 - 1;
                            if ( v272 )
                            {
                              if ( v272 != 1 )
                                goto LABEL_1354;
                              v273 = *(unsigned __int8 *)a2;
                              v41 = __OFSUB__(v273, *Str2);
                              v39 = v273 == (__int16)*Str2;
                              v40 = (__int16)(v273 - *Str2) < 0;
                              goto LABEL_81;
                            }
                            v274 = *(unsigned __int8 *)a2;
                            v45 = __OFSUB__(v274, *Str2);
                            v44 = (__int16)(v274 - *Str2) < 0;
LABEL_87:
                            v15 = v44 == v45;
                            goto LABEL_20;
                          }
                          v275 = *(unsigned __int8 *)a2;
                          v49 = __OFSUB__(v275, *Str2);
                          v48 = (__int16)(v275 - *Str2) < 0;
LABEL_93:
                          v15 = v48 ^ v49;
                          goto LABEL_20;
                        }
                        v276 = *(unsigned __int8 *)a2;
                        v54 = __OFSUB__(v276, *Str2);
                        v52 = v276 == (__int16)*Str2;
                        v53 = (__int16)(v276 - *Str2) < 0;
LABEL_99:
                        v15 = !(v53 ^ v54 | v52);
                        goto LABEL_20;
                      }
                      v69 = (unsigned __int16)*(unsigned __int8 *)a2 == *Str2;
LABEL_131:
                      v15 = v69;
                      goto LABEL_20;
                    }
                    if ( a5 != 5 )
                    {
                      if ( a5 == 6 )
                      {
                        v258 = v13 - 2;
                        if ( v258 )
                        {
                          v259 = v258 - 1;
                          if ( !v259 )
                          {
                            v153 = *(unsigned __int8 *)a2;
                            goto LABEL_283;
                          }
                          v260 = v259 - 1;
                          if ( !v260 )
                          {
                            v152 = *(unsigned __int8 *)a2;
                            goto LABEL_280;
                          }
                          v261 = v260 - 1;
                          if ( !v261 )
                          {
                            v151 = *(unsigned __int8 *)a2;
                            goto LABEL_277;
                          }
                          if ( v261 != 1 )
                            goto LABEL_1354;
                          v150 = *(unsigned __int8 *)a2;
                          goto LABEL_274;
                        }
                      }
                      else
                      {
                        if ( a5 != 7 )
                          goto LABEL_1354;
                        v254 = v13 - 2;
                        if ( v254 )
                        {
                          v255 = v254 - 1;
                          if ( !v255 )
                          {
                            v144 = *(unsigned __int8 *)a2;
                            goto LABEL_264;
                          }
                          v256 = v255 - 1;
                          if ( !v256 )
                          {
                            v143 = *(unsigned __int8 *)a2;
                            goto LABEL_261;
                          }
                          v257 = v256 - 1;
                          if ( !v257 )
                          {
                            v142 = *(unsigned __int8 *)a2;
                            goto LABEL_258;
                          }
                          if ( v257 != 1 )
                            goto LABEL_1354;
                          v141 = *(unsigned __int8 *)a2;
                          goto LABEL_255;
                        }
                      }
                      v145 = *(unsigned __int8 *)a2;
                      goto LABEL_267;
                    }
                    v262 = v13 - 2;
                    if ( v262 )
                    {
                      v263 = v262 - 1;
                      if ( v263 )
                      {
                        v264 = v263 - 1;
                        if ( v264 )
                        {
                          v265 = v264 - 1;
                          if ( v265 )
                          {
                            if ( v265 != 1 )
                              goto LABEL_1354;
                            v266 = *(unsigned __int8 *)a2;
                            v127 = v266 < *Str2;
                            v128 = v266 == *Str2;
                            goto LABEL_224;
                          }
                          v130 = *(unsigned __int8 *)a2 < *Str2;
                          goto LABEL_229;
                        }
                        v132 = *(unsigned __int8 *)a2 < *Str2;
                        goto LABEL_234;
                      }
                      v267 = *(unsigned __int8 *)a2;
                      v134 = v267 < *Str2;
                      v135 = v267 == *Str2;
                      goto LABEL_239;
                    }
                    v268 = *(unsigned __int8 *)a2;
                    goto LABEL_555;
                  }
                  v277 = v13 - 2;
                  if ( v277 )
                  {
                    v278 = v277 - 1;
                    if ( v278 )
                    {
                      v279 = v278 - 1;
                      if ( v279 )
                      {
                        v280 = v279 - 1;
                        if ( v280 )
                        {
                          if ( v280 != 1 )
                            goto LABEL_1354;
                          v127 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                          v128 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                          goto LABEL_224;
                        }
                        v130 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                        goto LABEL_229;
                      }
                      v132 = *(_BYTE *)a2 < *(_BYTE *)Str2;
LABEL_234:
                      v17 = v132;
                      goto LABEL_31;
                    }
                    v134 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    v135 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_239:
                    v17 = !v134 && !v135;
                    goto LABEL_31;
                  }
                  goto LABEL_29;
                }
                goto LABEL_584;
              }
              if ( a5 == 9 )
              {
                v297 = v13 - 2;
                if ( v297 )
                {
                  v298 = v297 - 1;
                  if ( !v298 )
                  {
                    v133 = *(unsigned __int8 *)a2;
                    goto LABEL_237;
                  }
                  v299 = v298 - 1;
                  if ( !v299 )
                  {
                    v131 = *(unsigned __int8 *)a2;
                    goto LABEL_232;
                  }
                  v300 = v299 - 1;
                  if ( !v300 )
                  {
                    v129 = *(unsigned __int8 *)a2;
                    goto LABEL_227;
                  }
                  if ( v300 != 1 )
                    goto LABEL_1354;
                  v126 = *(unsigned __int8 *)a2;
                  goto LABEL_223;
                }
LABEL_622:
                v136 = *(unsigned __int8 *)a2;
                goto LABEL_715;
              }
              if ( a5 == 10 )
              {
                v293 = v13 - 2;
                if ( !v293 )
                {
                  v120 = *(unsigned __int8 *)a2;
                  goto LABEL_213;
                }
                v294 = v293 - 1;
                if ( !v294 )
                {
                  v117 = *(unsigned __int8 *)a2;
                  goto LABEL_207;
                }
                v295 = v294 - 1;
                if ( !v295 )
                {
                  v114 = *(unsigned __int8 *)a2;
                  goto LABEL_201;
                }
                v296 = v295 - 1;
                if ( !v296 )
                {
                  v205 = *(unsigned __int8 *)a2;
                  goto LABEL_384;
                }
                if ( v296 != 1 )
                  goto LABEL_1354;
                v111 = *(unsigned __int8 *)a2;
                goto LABEL_196;
              }
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                {
LABEL_584:
                  v285 = v13 - 2;
                  if ( v285 )
                  {
                    v286 = v285 - 1;
                    if ( !v286 )
                    {
                      v78 = *(unsigned __int8 *)a2;
                      goto LABEL_796;
                    }
                    v287 = v286 - 1;
                    if ( !v287 )
                    {
                      v77 = *(unsigned __int8 *)a2;
                      goto LABEL_794;
                    }
                    v288 = v287 - 1;
                    if ( !v288 )
                    {
                      v76 = *(unsigned __int8 *)a2;
                      goto LABEL_792;
                    }
                    if ( v288 != 1 )
                      goto LABEL_1354;
                    v75 = *(unsigned __int8 *)a2;
                    goto LABEL_790;
                  }
                  goto LABEL_622;
                }
                if ( a5 != 15 )
                  goto LABEL_1354;
              }
              v289 = v13 - 2;
              if ( !v289 )
              {
                v103 = *(unsigned __int8 *)a2;
                goto LABEL_184;
              }
              v290 = v289 - 1;
              if ( !v290 )
              {
                v99 = *(unsigned __int8 *)a2;
                goto LABEL_174;
              }
              v291 = v290 - 1;
              if ( !v291 )
              {
                v94 = *(unsigned __int8 *)a2;
                goto LABEL_168;
              }
              v292 = v291 - 1;
              if ( !v292 )
              {
                v88 = *(unsigned __int8 *)a2;
                goto LABEL_158;
              }
              if ( v292 != 1 )
                goto LABEL_1354;
              v84 = *(unsigned __int8 *)a2;
              goto LABEL_153;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                if ( a5 != 2 )
                {
                  if ( a5 == 3 )
                  {
                    v317 = v13 - 2;
                    if ( !v317 )
                    {
                      v170 = *(char *)a2;
                      v171 = *(unsigned __int8 *)Str2;
                      goto LABEL_354;
                    }
                    v318 = v317 - 1;
                    if ( !v318 )
                    {
                      v168 = *(char *)a2;
                      v169 = *(unsigned __int8 *)Str2;
                      goto LABEL_309;
                    }
                    v319 = v318 - 1;
                    if ( !v319 )
                    {
                      v166 = *(char *)a2;
                      v167 = *(unsigned __int8 *)Str2;
                      goto LABEL_306;
                    }
                    v320 = v319 - 1;
                    if ( !v320 )
                    {
                      v164 = *(char *)a2;
                      v165 = *(unsigned __int8 *)Str2;
                      goto LABEL_303;
                    }
                    if ( v320 != 1 )
                      goto LABEL_1354;
                    v162 = *(char *)a2;
                    v163 = *(unsigned __int8 *)Str2;
LABEL_300:
                    v41 = __OFSUB__(v162, v163);
                    v39 = v162 == v163;
                    v40 = v162 - v163 < 0;
                    goto LABEL_81;
                  }
                  if ( a5 != 4 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( a5 == 6 )
                      {
                        v305 = v13 - 2;
                        if ( v305 )
                        {
                          v306 = v305 - 1;
                          if ( !v306 )
                          {
                            v153 = *(char *)a2;
                            goto LABEL_283;
                          }
                          v307 = v306 - 1;
                          if ( !v307 )
                          {
                            v152 = *(char *)a2;
                            goto LABEL_280;
                          }
                          v308 = v307 - 1;
                          if ( !v308 )
                          {
                            v151 = *(char *)a2;
                            goto LABEL_277;
                          }
                          if ( v308 != 1 )
                            goto LABEL_1354;
                          v150 = *(char *)a2;
                          goto LABEL_274;
                        }
                      }
                      else
                      {
                        if ( a5 != 7 )
                          goto LABEL_1354;
                        v301 = v13 - 2;
                        if ( v301 )
                        {
                          v302 = v301 - 1;
                          if ( !v302 )
                          {
                            v144 = *(char *)a2;
                            goto LABEL_264;
                          }
                          v303 = v302 - 1;
                          if ( !v303 )
                          {
                            v143 = *(char *)a2;
                            goto LABEL_261;
                          }
                          v304 = v303 - 1;
                          if ( !v304 )
                          {
                            v142 = *(char *)a2;
                            goto LABEL_258;
                          }
                          if ( v304 != 1 )
                            goto LABEL_1354;
                          v141 = *(char *)a2;
LABEL_255:
                          v127 = v141 < *(_DWORD *)Str2;
                          v128 = v141 == *(_DWORD *)Str2;
                          goto LABEL_224;
                        }
                      }
                      v145 = *(char *)a2;
                      goto LABEL_267;
                    }
                    v309 = v13 - 2;
                    if ( v309 )
                    {
                      v310 = v309 - 1;
                      if ( v310 )
                      {
                        v311 = v310 - 1;
                        if ( v311 )
                        {
                          v312 = v311 - 1;
                          if ( v312 )
                          {
                            if ( v312 != 1 )
                              goto LABEL_1354;
                            v162 = *(char *)a2;
LABEL_428:
                            v163 = *Str2;
                            goto LABEL_300;
                          }
                          v164 = *(char *)a2;
LABEL_431:
                          v165 = *Str2;
                          goto LABEL_303;
                        }
                        v166 = *(char *)a2;
LABEL_434:
                        v167 = *Str2;
                        goto LABEL_306;
                      }
                      v168 = *(char *)a2;
LABEL_437:
                      v169 = *Str2;
                      goto LABEL_309;
                    }
                    v170 = *(char *)a2;
LABEL_440:
                    v171 = *Str2;
                    goto LABEL_354;
                  }
                  v313 = v13 - 2;
                  if ( v313 )
                  {
                    v314 = v313 - 1;
                    if ( !v314 )
                    {
                      v33 = __OFSUB__(*(char *)a2, *Str2);
                      v31 = *(char *)a2 == (__int16)*Str2;
                      v32 = (__int16)(*(char *)a2 - *Str2) < 0;
                      goto LABEL_72;
                    }
                    v315 = v314 - 1;
                    if ( !v315 )
                    {
                      v30 = __OFSUB__(*(char *)a2, *Str2);
                      v29 = (__int16)(*(char *)a2 - *Str2) < 0;
                      goto LABEL_69;
                    }
                    v316 = v315 - 1;
                    if ( !v316 )
                    {
                      v28 = __OFSUB__(*(char *)a2, *Str2);
                      v27 = (__int16)(*(char *)a2 - *Str2) < 0;
                      goto LABEL_66;
                    }
                    if ( v316 != 1 )
                      goto LABEL_1354;
                    v26 = __OFSUB__(*(char *)a2, *Str2);
                    v24 = *(char *)a2 == (__int16)*Str2;
                    v25 = (__int16)(*(char *)a2 - *Str2) < 0;
                    goto LABEL_63;
                  }
                  v268 = *(char *)a2;
LABEL_555:
                  v16 = v268 == (__int16)*Str2;
                  goto LABEL_30;
                }
                v321 = v13 - 2;
                if ( v321 )
                {
                  v322 = v321 - 1;
                  if ( !v322 )
                  {
                    v33 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                    v31 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                    v32 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                    goto LABEL_72;
                  }
                  v323 = v322 - 1;
                  if ( !v323 )
                  {
                    v30 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                    v29 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                    goto LABEL_69;
                  }
                  v324 = v323 - 1;
                  if ( !v324 )
                  {
                    v28 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                    v27 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                    goto LABEL_66;
                  }
                  if ( v324 != 1 )
                    goto LABEL_1354;
                  v26 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v24 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  v25 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_63;
                }
LABEL_29:
                v16 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_30:
                v17 = v16;
LABEL_31:
                *a8 = v17;
                goto LABEL_1357;
              }
              goto LABEL_676;
            }
            if ( a5 == 9 )
            {
              v337 = v13 - 2;
              if ( v337 )
              {
                v338 = v337 - 1;
                if ( !v338 )
                {
                  v133 = *(char *)a2;
                  goto LABEL_237;
                }
                v339 = v338 - 1;
                if ( !v339 )
                {
                  v131 = *(char *)a2;
                  goto LABEL_232;
                }
                v340 = v339 - 1;
                if ( !v340 )
                {
                  v129 = *(char *)a2;
                  goto LABEL_227;
                }
                if ( v340 != 1 )
                  goto LABEL_1354;
                v126 = *(char *)a2;
                goto LABEL_223;
              }
LABEL_713:
              v136 = *(char *)a2;
              goto LABEL_715;
            }
            if ( a5 == 10 )
            {
              v333 = v13 - 2;
              if ( !v333 )
              {
                v120 = *(char *)a2;
                goto LABEL_213;
              }
              v334 = v333 - 1;
              if ( !v334 )
              {
                v117 = *(char *)a2;
                goto LABEL_207;
              }
              v335 = v334 - 1;
              if ( !v335 )
              {
                v114 = *(char *)a2;
                goto LABEL_201;
              }
              v336 = v335 - 1;
              if ( !v336 )
              {
                v205 = *(char *)a2;
                goto LABEL_384;
              }
              if ( v336 != 1 )
                goto LABEL_1354;
              v111 = *(char *)a2;
              goto LABEL_196;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_676:
                v325 = v13 - 2;
                if ( v325 )
                {
                  v326 = v325 - 1;
                  if ( !v326 )
                  {
                    v78 = *(char *)a2;
                    goto LABEL_796;
                  }
                  v327 = v326 - 1;
                  if ( !v327 )
                  {
                    v77 = *(char *)a2;
                    goto LABEL_794;
                  }
                  v328 = v327 - 1;
                  if ( !v328 )
                  {
                    v76 = *(char *)a2;
                    goto LABEL_792;
                  }
                  if ( v328 != 1 )
                    goto LABEL_1354;
                  v75 = *(char *)a2;
                  goto LABEL_790;
                }
                goto LABEL_713;
              }
              if ( a5 != 15 )
                goto LABEL_1354;
            }
            v329 = v13 - 2;
            if ( !v329 )
            {
              v103 = *(char *)a2;
              goto LABEL_184;
            }
            v330 = v329 - 1;
            if ( !v330 )
            {
              v99 = *(char *)a2;
              goto LABEL_174;
            }
            v331 = v330 - 1;
            if ( !v331 )
            {
              v94 = *(char *)a2;
              goto LABEL_168;
            }
            v332 = v331 - 1;
            if ( !v332 )
            {
              v88 = *(char *)a2;
              goto LABEL_158;
            }
            if ( v332 != 1 )
              goto LABEL_1354;
            v84 = *(char *)a2;
            goto LABEL_153;
          }
          if ( a5 != 1 || v13 != 2 )
            goto LABEL_1354;
          if ( a2 )
            goto LABEL_12;
          v18 = Str2 == 0LL;
LABEL_36:
          if ( v18 )
            goto LABEL_13;
          goto LABEL_12;
        }
        if ( v13 - 7 > 1 )
        {
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v361 = v13 - 2;
                  if ( !v361 )
                    goto LABEL_127;
                  v362 = v361 - 1;
                  if ( !v362 )
                  {
                    v352 = *(char *)Str2;
                    goto LABEL_753;
                  }
                  v363 = v362 - 1;
                  if ( !v363 )
                  {
                    v351 = *(char *)Str2;
                    goto LABEL_750;
                  }
                  v364 = v363 - 1;
                  if ( !v364 )
                  {
                    v350 = *(char *)Str2;
                    goto LABEL_747;
                  }
                  if ( v364 != 1 )
                    goto LABEL_1354;
                  v349 = *(char *)Str2;
                  break;
                case 3u:
                  v357 = v13 - 2;
                  if ( !v357 )
                    goto LABEL_120;
                  v358 = v357 - 1;
                  if ( !v358 )
                  {
                    v352 = *(unsigned __int8 *)Str2;
                    goto LABEL_753;
                  }
                  v359 = v358 - 1;
                  if ( !v359 )
                  {
                    v351 = *(unsigned __int8 *)Str2;
                    goto LABEL_750;
                  }
                  v360 = v359 - 1;
                  if ( !v360 )
                  {
                    v350 = *(unsigned __int8 *)Str2;
                    goto LABEL_747;
                  }
                  if ( v360 != 1 )
                    goto LABEL_1354;
                  v349 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v353 = v13 - 2;
                  if ( !v353 )
                    goto LABEL_110;
                  v354 = v353 - 1;
                  if ( !v354 )
                  {
                    v352 = (__int16)*Str2;
                    goto LABEL_753;
                  }
                  v355 = v354 - 1;
                  if ( !v355 )
                  {
                    v351 = (__int16)*Str2;
                    goto LABEL_750;
                  }
                  v356 = v355 - 1;
                  if ( !v356 )
                  {
                    v350 = (__int16)*Str2;
                    goto LABEL_747;
                  }
                  if ( v356 != 1 )
                    goto LABEL_1354;
                  v349 = (__int16)*Str2;
                  break;
                case 5u:
                  v345 = v13 - 2;
                  if ( !v345 )
                  {
LABEL_100:
                    v56 = *Str2;
LABEL_128:
                    v69 = *(_DWORD *)a2 == v56;
                    goto LABEL_131;
                  }
                  v346 = v345 - 1;
                  if ( v346 )
                  {
                    v347 = v346 - 1;
                    if ( v347 )
                    {
                      v348 = v347 - 1;
                      if ( v348 )
                      {
                        if ( v348 != 1 )
                          goto LABEL_1354;
                        v349 = *Str2;
                        break;
                      }
                      v350 = *Str2;
LABEL_747:
                      v180 = *(_DWORD *)a2 < v350;
                      goto LABEL_322;
                    }
                    v351 = *Str2;
LABEL_750:
                    v182 = *(_DWORD *)a2 < v351;
                    goto LABEL_326;
                  }
                  v352 = *Str2;
LABEL_753:
                  v185 = *(_DWORD *)a2 < v352;
                  v186 = *(_DWORD *)a2 == v352;
                  goto LABEL_330;
                default:
                  v19 = a5 - 6;
                  if ( a5 == 6 )
                    goto LABEL_729;
                  goto LABEL_728;
              }
              v177 = *(_DWORD *)a2 < v349;
              v178 = *(_DWORD *)a2 == v349;
              goto LABEL_318;
            }
            goto LABEL_784;
          }
          if ( a5 == 9 )
          {
            v377 = v13 - 2;
            if ( v377 )
            {
              v378 = v377 - 1;
              if ( !v378 )
              {
                v133 = *(unsigned int *)a2;
                goto LABEL_237;
              }
              v379 = v378 - 1;
              if ( !v379 )
              {
                v131 = *(unsigned int *)a2;
                goto LABEL_232;
              }
              v380 = v379 - 1;
              if ( !v380 )
              {
                v129 = *(unsigned int *)a2;
                goto LABEL_227;
              }
              if ( v380 != 1 )
                goto LABEL_1354;
              v126 = *(unsigned int *)a2;
              goto LABEL_223;
            }
LABEL_714:
            v136 = *(unsigned int *)a2;
            goto LABEL_715;
          }
          if ( a5 != 10 )
          {
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_784:
                v365 = v13 - 2;
                if ( v365 )
                {
                  v366 = v365 - 1;
                  if ( !v366 )
                  {
                    v78 = *(unsigned int *)a2;
                    goto LABEL_796;
                  }
                  v367 = v366 - 1;
                  if ( !v367 )
                  {
                    v77 = *(unsigned int *)a2;
                    goto LABEL_794;
                  }
                  v368 = v367 - 1;
                  if ( !v368 )
                  {
                    v76 = *(unsigned int *)a2;
                    goto LABEL_792;
                  }
                  if ( v368 != 1 )
                    goto LABEL_1354;
                  v75 = *(unsigned int *)a2;
                  goto LABEL_790;
                }
                goto LABEL_714;
              }
              if ( a5 != 15 )
                goto LABEL_1354;
            }
            v369 = v13 - 2;
            if ( !v369 )
            {
              v104 = (double)*(int *)a2;
              goto LABEL_187;
            }
            v370 = v369 - 1;
            if ( !v370 )
            {
              v100 = (double)*(int *)a2;
              goto LABEL_177;
            }
            v371 = v370 - 1;
            if ( !v371 )
            {
              v95 = (double)*(int *)a2;
              goto LABEL_171;
            }
            v372 = v371 - 1;
            if ( v372 )
            {
              if ( v372 != 1 )
                goto LABEL_1354;
              v85 = (double)*(int *)a2;
              goto LABEL_155;
            }
            v89 = (double)*(int *)a2;
LABEL_161:
            v86 = v89 < *(double *)Str2;
            goto LABEL_165;
          }
          v373 = v13 - 2;
          if ( !v373 )
          {
            v121 = (float)*(int *)a2;
            goto LABEL_216;
          }
          v374 = v373 - 1;
          if ( !v374 )
          {
            v118 = (float)*(int *)a2;
            goto LABEL_210;
          }
          v375 = v374 - 1;
          if ( !v375 )
          {
            v115 = (float)*(int *)a2;
            goto LABEL_204;
          }
          v376 = v375 - 1;
          if ( v376 )
          {
            if ( v376 != 1 )
              goto LABEL_1354;
            v112 = (float)*(int *)a2;
            goto LABEL_198;
          }
          v91 = (float)*(int *)a2;
LABEL_164:
          v86 = v91 < *(float *)Str2;
          goto LABEL_165;
        }
        if ( a5 != 7 )
          goto LABEL_1354;
        if ( v13 != 7 )
        {
          v15 = *(_DWORD *)Str2 | *(_DWORD *)a2;
          goto LABEL_20;
        }
        v92 = *(_DWORD *)Str2 & *(_DWORD *)a2;
LABEL_181:
        *a8 = v92;
        goto LABEL_1357;
      }
      if ( a1 != 8 )
      {
        if ( a1 != 9 )
        {
          if ( a1 != 10 )
          {
            if ( a1 != 11 )
            {
              v381 = a5 == 12;
              goto LABEL_833;
            }
LABEL_1299:
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                switch ( a5 )
                {
                  case 2u:
                    v418 = v13 - 2;
                    if ( !v418 )
                    {
                      v405 = *(char *)Str2;
                      goto LABEL_872;
                    }
                    v419 = v418 - 1;
                    if ( !v419 )
                    {
                      v403 = *(char *)Str2;
                      goto LABEL_868;
                    }
                    v420 = v419 - 1;
                    if ( !v420 )
                    {
                      v401 = *(char *)Str2;
                      goto LABEL_864;
                    }
                    v421 = v420 - 1;
                    if ( !v421 )
                    {
                      v399 = *(char *)Str2;
                      goto LABEL_860;
                    }
                    if ( v421 != 1 )
                      goto LABEL_1354;
                    v397 = *(char *)Str2;
                    break;
                  case 3u:
                    v414 = v13 - 2;
                    if ( !v414 )
                    {
                      v405 = *(unsigned __int8 *)Str2;
                      goto LABEL_872;
                    }
                    v415 = v414 - 1;
                    if ( !v415 )
                    {
                      v403 = *(unsigned __int8 *)Str2;
                      goto LABEL_868;
                    }
                    v416 = v415 - 1;
                    if ( !v416 )
                    {
                      v401 = *(unsigned __int8 *)Str2;
                      goto LABEL_864;
                    }
                    v417 = v416 - 1;
                    if ( !v417 )
                    {
                      v399 = *(unsigned __int8 *)Str2;
                      goto LABEL_860;
                    }
                    if ( v417 != 1 )
                      goto LABEL_1354;
                    v397 = *(unsigned __int8 *)Str2;
                    break;
                  case 4u:
                    v410 = v13 - 2;
                    if ( !v410 )
                    {
                      v405 = (__int16)*Str2;
                      goto LABEL_872;
                    }
                    v411 = v410 - 1;
                    if ( !v411 )
                    {
                      v403 = (__int16)*Str2;
                      goto LABEL_868;
                    }
                    v412 = v411 - 1;
                    if ( !v412 )
                    {
                      v401 = (__int16)*Str2;
                      goto LABEL_864;
                    }
                    v413 = v412 - 1;
                    if ( !v413 )
                    {
                      v399 = (__int16)*Str2;
                      goto LABEL_860;
                    }
                    if ( v413 != 1 )
                      goto LABEL_1354;
                    v397 = (__int16)*Str2;
                    break;
                  case 5u:
                    v406 = v13 - 2;
                    if ( v406 )
                    {
                      v407 = v406 - 1;
                      if ( v407 )
                      {
                        v408 = v407 - 1;
                        if ( v408 )
                        {
                          v409 = v408 - 1;
                          if ( v409 )
                          {
                            if ( v409 != 1 )
                              goto LABEL_1354;
                            v397 = *Str2;
                            break;
                          }
                          v399 = *Str2;
LABEL_860:
                          v398 = _mm_cvtsi32_si128(v399);
LABEL_861:
                          *(_QWORD *)&v388 = *(_OWORD *)&_mm_cvtepi32_pd(v398);
                          goto LABEL_952;
                        }
                        v401 = *Str2;
LABEL_864:
                        v400 = _mm_cvtsi32_si128(v401);
LABEL_865:
                        *(_QWORD *)&v389 = *(_OWORD *)&_mm_cvtepi32_pd(v400);
                        goto LABEL_955;
                      }
                      v403 = *Str2;
LABEL_868:
                      v402 = _mm_cvtsi32_si128(v403);
LABEL_869:
                      *(_QWORD *)&v390 = *(_OWORD *)&_mm_cvtepi32_pd(v402);
                      goto LABEL_958;
                    }
                    v405 = *Str2;
LABEL_872:
                    v404 = _mm_cvtsi32_si128(v405);
LABEL_873:
                    *(_QWORD *)&v391 = *(_OWORD *)&_mm_cvtepi32_pd(v404);
                    goto LABEL_849;
                  case 6u:
                    v392 = v13 - 2;
                    if ( v392 )
                    {
                      v393 = v392 - 1;
                      if ( v393 )
                      {
                        v394 = v393 - 1;
                        if ( v394 )
                        {
                          v395 = v394 - 1;
                          if ( v395 )
                          {
                            if ( v395 != 1 )
                              goto LABEL_1354;
                            v396 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                            goto LABEL_857;
                          }
                          v398 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_861;
                        }
                        v400 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                        goto LABEL_865;
                      }
                      v402 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                      goto LABEL_869;
                    }
                    v404 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                    goto LABEL_873;
                  case 7u:
                    v383 = v13 - 2;
                    if ( !v383 )
                    {
                      v391 = (double)*(int *)Str2;
LABEL_849:
                      v18 = *(double *)a2 == v391;
                      goto LABEL_36;
                    }
                    v384 = v383 - 1;
                    if ( !v384 )
                    {
                      v390 = (double)*(int *)Str2;
LABEL_958:
                      v185 = *(double *)a2 < v390;
                      v186 = *(double *)a2 == v390;
                      goto LABEL_330;
                    }
                    v385 = v384 - 1;
                    if ( !v385 )
                    {
                      v389 = (double)*(int *)Str2;
LABEL_955:
                      v185 = v389 < *(double *)a2;
                      v186 = v389 == *(double *)a2;
                      goto LABEL_330;
                    }
                    v386 = v385 - 1;
                    if ( v386 )
                    {
                      if ( v386 != 1 )
                        goto LABEL_1354;
                      v387 = (double)*(int *)Str2;
                      goto LABEL_949;
                    }
                    v388 = (double)*(int *)Str2;
LABEL_952:
                    v180 = *(double *)a2 < v388;
                    goto LABEL_322;
                  default:
                    goto LABEL_1354;
                }
                v396 = _mm_cvtsi32_si128(v397);
LABEL_857:
                *(_QWORD *)&v387 = *(_OWORD *)&_mm_cvtepi32_pd(v396);
LABEL_949:
                v180 = v387 < *(double *)a2;
                goto LABEL_322;
              }
LABEL_914:
              v422 = v13 - 2;
              if ( !v422 )
              {
                v391 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_849;
              }
              v423 = v422 - 1;
              if ( !v423 )
              {
                v390 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_958;
              }
              v424 = v423 - 1;
              if ( !v424 )
              {
                v389 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_955;
              }
              v425 = v424 - 1;
              if ( v425 )
              {
                if ( v425 != 1 )
                  goto LABEL_1354;
                v387 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_949;
              }
              v388 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_952;
            }
            if ( a5 == 9 )
            {
              v434 = v13 - 2;
              if ( !v434 )
              {
                v391 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v391 = v391 + 1.844674407370955e19;
                goto LABEL_849;
              }
              v435 = v434 - 1;
              if ( !v435 )
              {
                v390 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v390 = v390 + 1.844674407370955e19;
                goto LABEL_958;
              }
              v436 = v435 - 1;
              if ( !v436 )
              {
                v389 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v389 = v389 + 1.844674407370955e19;
                goto LABEL_955;
              }
              v437 = v436 - 1;
              if ( v437 )
              {
                if ( v437 != 1 )
                  goto LABEL_1354;
                v387 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v387 = v387 + 1.844674407370955e19;
                goto LABEL_949;
              }
              v388 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v388 = v388 + 1.844674407370955e19;
              goto LABEL_952;
            }
            if ( a5 == 10 )
            {
              v430 = v13 - 2;
              if ( !v430 )
              {
                v391 = *(float *)Str2;
                goto LABEL_849;
              }
              v431 = v430 - 1;
              if ( !v431 )
              {
                v390 = *(float *)Str2;
                goto LABEL_958;
              }
              v432 = v431 - 1;
              if ( !v432 )
              {
                v389 = *(float *)Str2;
                goto LABEL_955;
              }
              v433 = v432 - 1;
              if ( v433 )
              {
                if ( v433 != 1 )
                  goto LABEL_1354;
                v387 = *(float *)Str2;
                goto LABEL_949;
              }
              v388 = *(float *)Str2;
              goto LABEL_952;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
                goto LABEL_914;
              if ( a5 != 15 )
                goto LABEL_1354;
            }
            v426 = v13 - 2;
            if ( v426 )
            {
              v427 = v426 - 1;
              if ( v427 )
              {
                v428 = v427 - 1;
                if ( v428 )
                {
                  v429 = v428 - 1;
                  if ( v429 )
                  {
                    if ( v429 != 1 )
                      goto LABEL_1354;
                    v86 = *(double *)Str2 < *(double *)a2;
                    goto LABEL_165;
                  }
                  v89 = *(double *)a2;
                  goto LABEL_161;
                }
                v96 = *(double *)Str2 < *(double *)a2;
                v97 = *(double *)Str2 == *(double *)a2;
LABEL_179:
                v92 = !v96 && !v97;
                goto LABEL_181;
              }
              v100 = *(double *)a2;
LABEL_177:
              v96 = v100 < *(double *)Str2;
              v97 = v100 == *(double *)Str2;
              goto LABEL_179;
            }
            v104 = *(double *)a2;
            goto LABEL_187;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v472 = v13 - 2;
                  if ( !v472 )
                  {
                    v459 = *(char *)Str2;
                    goto LABEL_1000;
                  }
                  v473 = v472 - 1;
                  if ( !v473 )
                  {
                    v457 = *(char *)Str2;
                    goto LABEL_996;
                  }
                  v474 = v473 - 1;
                  if ( !v474 )
                  {
                    v455 = *(char *)Str2;
                    goto LABEL_992;
                  }
                  v475 = v474 - 1;
                  if ( !v475 )
                  {
                    v453 = *(char *)Str2;
                    goto LABEL_988;
                  }
                  if ( v475 != 1 )
                    goto LABEL_1354;
                  v451 = *(char *)Str2;
                  break;
                case 3u:
                  v468 = v13 - 2;
                  if ( !v468 )
                  {
                    v459 = *(unsigned __int8 *)Str2;
                    goto LABEL_1000;
                  }
                  v469 = v468 - 1;
                  if ( !v469 )
                  {
                    v457 = *(unsigned __int8 *)Str2;
                    goto LABEL_996;
                  }
                  v470 = v469 - 1;
                  if ( !v470 )
                  {
                    v455 = *(unsigned __int8 *)Str2;
                    goto LABEL_992;
                  }
                  v471 = v470 - 1;
                  if ( !v471 )
                  {
                    v453 = *(unsigned __int8 *)Str2;
                    goto LABEL_988;
                  }
                  if ( v471 != 1 )
                    goto LABEL_1354;
                  v451 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v464 = v13 - 2;
                  if ( !v464 )
                  {
                    v459 = (__int16)*Str2;
                    goto LABEL_1000;
                  }
                  v465 = v464 - 1;
                  if ( !v465 )
                  {
                    v457 = (__int16)*Str2;
                    goto LABEL_996;
                  }
                  v466 = v465 - 1;
                  if ( !v466 )
                  {
                    v455 = (__int16)*Str2;
                    goto LABEL_992;
                  }
                  v467 = v466 - 1;
                  if ( !v467 )
                  {
                    v453 = (__int16)*Str2;
                    goto LABEL_988;
                  }
                  if ( v467 != 1 )
                    goto LABEL_1354;
                  v451 = (__int16)*Str2;
                  break;
                case 5u:
                  v460 = v13 - 2;
                  if ( v460 )
                  {
                    v461 = v460 - 1;
                    if ( v461 )
                    {
                      v462 = v461 - 1;
                      if ( v462 )
                      {
                        v463 = v462 - 1;
                        if ( v463 )
                        {
                          if ( v463 != 1 )
                            goto LABEL_1354;
                          v451 = *Str2;
                          break;
                        }
                        v453 = *Str2;
LABEL_988:
                        v452 = _mm_cvtsi32_si128(v453);
                        goto LABEL_989;
                      }
                      v455 = *Str2;
LABEL_992:
                      v454 = _mm_cvtsi32_si128(v455);
                      goto LABEL_993;
                    }
                    v457 = *Str2;
LABEL_996:
                    v456 = _mm_cvtsi32_si128(v457);
                    goto LABEL_997;
                  }
                  v459 = *Str2;
LABEL_1000:
                  v458 = _mm_cvtsi32_si128(v459);
                  goto LABEL_1001;
                case 6u:
                  v446 = v13 - 2;
                  if ( v446 )
                  {
                    v447 = v446 - 1;
                    if ( v447 )
                    {
                      v448 = v447 - 1;
                      if ( v448 )
                      {
                        v449 = v448 - 1;
                        if ( v449 )
                        {
                          if ( v449 != 1 )
                            goto LABEL_1354;
                          v450 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_985;
                        }
                        v452 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_989:
                        LODWORD(v443) = _mm_cvtepi32_ps(v452).m128_u32[0];
                        goto LABEL_1082;
                      }
                      v454 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_993:
                      LODWORD(v444) = _mm_cvtepi32_ps(v454).m128_u32[0];
                      goto LABEL_1085;
                    }
                    v456 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_997:
                    LODWORD(v445) = _mm_cvtepi32_ps(v456).m128_u32[0];
                    goto LABEL_1088;
                  }
                  v458 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1001:
                  LODWORD(v105) = _mm_cvtepi32_ps(v458).m128_u32[0];
                  goto LABEL_189;
                case 7u:
                  v438 = v13 - 2;
                  if ( v438 )
                  {
                    v439 = v438 - 1;
                    if ( v439 )
                    {
                      v440 = v439 - 1;
                      if ( v440 )
                      {
                        v441 = v440 - 1;
                        if ( v441 )
                        {
                          if ( v441 != 1 )
                            goto LABEL_1354;
                          v442 = (float)*(int *)Str2;
                          goto LABEL_1079;
                        }
                        v443 = (float)*(int *)Str2;
LABEL_1082:
                        v180 = *(float *)a2 < v443;
                        goto LABEL_322;
                      }
                      v444 = (float)*(int *)Str2;
LABEL_1085:
                      v185 = v444 < *(float *)a2;
                      v186 = v444 == *(float *)a2;
                      goto LABEL_330;
                    }
                    v445 = (float)*(int *)Str2;
LABEL_1088:
                    v185 = *(float *)a2 < v445;
                    v186 = *(float *)a2 == v445;
                    goto LABEL_330;
                  }
                  v105 = (float)*(int *)Str2;
LABEL_189:
                  v18 = *(float *)a2 == v105;
                  goto LABEL_36;
                default:
                  goto LABEL_1354;
              }
              v450 = _mm_cvtsi32_si128(v451);
LABEL_985:
              LODWORD(v442) = _mm_cvtepi32_ps(v450).m128_u32[0];
              goto LABEL_1079;
            }
            goto LABEL_1044;
          }
          if ( a5 == 9 )
          {
            v488 = v13 - 2;
            if ( !v488 )
            {
              v105 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v105 = v105 + 1.8446744e19;
              goto LABEL_189;
            }
            v489 = v488 - 1;
            if ( !v489 )
            {
              v445 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v445 = v445 + 1.8446744e19;
              goto LABEL_1088;
            }
            v490 = v489 - 1;
            if ( !v490 )
            {
              v444 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v444 = v444 + 1.8446744e19;
              goto LABEL_1085;
            }
            v491 = v490 - 1;
            if ( !v491 )
            {
              v443 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v443 = v443 + 1.8446744e19;
              goto LABEL_1082;
            }
            if ( v491 != 1 )
              goto LABEL_1354;
            v442 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v442 = v442 + 1.8446744e19;
            goto LABEL_1079;
          }
          if ( a5 == 10 )
          {
            v484 = v13 - 2;
            if ( !v484 )
            {
              v121 = *(float *)a2;
              goto LABEL_216;
            }
            v485 = v484 - 1;
            if ( !v485 )
            {
              v118 = *(float *)a2;
              goto LABEL_210;
            }
            v486 = v485 - 1;
            if ( !v486 )
            {
              v96 = *(float *)Str2 < *(float *)a2;
              v97 = *(float *)Str2 == *(float *)a2;
              goto LABEL_179;
            }
            v487 = v486 - 1;
            if ( v487 )
            {
              if ( v487 != 1 )
                goto LABEL_1354;
              v86 = *(float *)Str2 < *(float *)a2;
              goto LABEL_165;
            }
            v91 = *(float *)a2;
            goto LABEL_164;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_1044:
              v476 = v13 - 2;
              if ( !v476 )
              {
                v105 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_189;
              }
              v477 = v476 - 1;
              if ( !v477 )
              {
                v445 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1088;
              }
              v478 = v477 - 1;
              if ( !v478 )
              {
                v444 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1085;
              }
              v479 = v478 - 1;
              if ( !v479 )
              {
                v443 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1082;
              }
              if ( v479 != 1 )
                goto LABEL_1354;
              v442 = (float)(int)*(_QWORD *)Str2;
LABEL_1079:
              v180 = v442 < *(float *)a2;
              goto LABEL_322;
            }
            if ( a5 != 15 )
              goto LABEL_1354;
          }
          v480 = v13 - 2;
          if ( !v480 )
          {
            v104 = *(float *)a2;
            goto LABEL_187;
          }
          v481 = v480 - 1;
          if ( !v481 )
          {
            v100 = *(float *)a2;
            goto LABEL_177;
          }
          v482 = v481 - 1;
          if ( !v482 )
          {
            v95 = *(float *)a2;
            goto LABEL_171;
          }
          v483 = v482 - 1;
          if ( v483 )
          {
            if ( v483 != 1 )
              goto LABEL_1354;
            v85 = *(float *)a2;
            goto LABEL_155;
          }
          v89 = *(float *)a2;
          goto LABEL_161;
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
                      v492 = v13 - 2;
                      if ( v492 )
                      {
                        v493 = v492 - 1;
                        if ( v493 )
                        {
                          v494 = v493 - 1;
                          if ( v494 )
                          {
                            v495 = v494 - 1;
                            if ( v495 )
                            {
                              if ( v495 != 1 )
                                goto LABEL_1354;
                              v179 = *(unsigned int *)Str2;
                              goto LABEL_317;
                            }
                            v181 = *(unsigned int *)Str2;
LABEL_321:
                            v180 = *(_QWORD *)a2 < v181;
                            goto LABEL_322;
                          }
                          v183 = *(unsigned int *)Str2;
LABEL_325:
                          v182 = *(_QWORD *)a2 < v183;
                          goto LABEL_326;
                        }
                        v187 = *(unsigned int *)Str2;
LABEL_329:
                        v185 = *(_QWORD *)a2 < v187;
                        v186 = *(_QWORD *)a2 == v187;
                        goto LABEL_330;
                      }
                      goto LABEL_1105;
                    }
                    v496 = v13 - 2;
                    if ( v496 )
                    {
                      v497 = v496 - 1;
                      if ( !v497 )
                      {
                        v187 = *(int *)Str2;
                        goto LABEL_329;
                      }
                      v498 = v497 - 1;
                      if ( !v498 )
                      {
                        v183 = *(int *)Str2;
                        goto LABEL_325;
                      }
                      v499 = v498 - 1;
                      if ( !v499 )
                      {
                        v181 = *(int *)Str2;
                        goto LABEL_321;
                      }
                      if ( v499 != 1 )
                        goto LABEL_1354;
                      v179 = *(int *)Str2;
LABEL_317:
                      v177 = *(_QWORD *)a2 < v179;
                      v178 = *(_QWORD *)a2 == v179;
LABEL_318:
                      v15 = v177 || v178;
                      goto LABEL_20;
                    }
LABEL_1115:
                    v70 = *(int *)Str2;
                    goto LABEL_130;
                  }
                  v500 = v13 - 2;
                  if ( v500 )
                  {
                    v501 = v500 - 1;
                    if ( !v501 )
                    {
                      v187 = *Str2;
                      goto LABEL_329;
                    }
                    v502 = v501 - 1;
                    if ( !v502 )
                    {
                      v183 = *Str2;
                      goto LABEL_325;
                    }
                    v503 = v502 - 1;
                    if ( !v503 )
                    {
                      v181 = *Str2;
                      goto LABEL_321;
                    }
                    if ( v503 != 1 )
                      goto LABEL_1354;
                    v179 = *Str2;
                    goto LABEL_317;
                  }
LABEL_1125:
                  v70 = *Str2;
                  goto LABEL_130;
                }
                v504 = v13 - 2;
                if ( v504 )
                {
                  v505 = v504 - 1;
                  if ( !v505 )
                  {
                    v187 = (__int16)*Str2;
                    goto LABEL_329;
                  }
                  v506 = v505 - 1;
                  if ( !v506 )
                  {
                    v183 = (__int16)*Str2;
                    goto LABEL_325;
                  }
                  v507 = v506 - 1;
                  if ( !v507 )
                  {
                    v181 = (__int16)*Str2;
                    goto LABEL_321;
                  }
                  if ( v507 != 1 )
                    goto LABEL_1354;
                  v179 = (__int16)*Str2;
                  goto LABEL_317;
                }
LABEL_1135:
                v70 = (__int16)*Str2;
                goto LABEL_130;
              }
              v508 = v13 - 2;
              if ( v508 )
              {
                v509 = v508 - 1;
                if ( !v509 )
                {
                  v187 = *(unsigned __int8 *)Str2;
                  goto LABEL_329;
                }
                v510 = v509 - 1;
                if ( !v510 )
                {
                  v183 = *(unsigned __int8 *)Str2;
                  goto LABEL_325;
                }
                v511 = v510 - 1;
                if ( !v511 )
                {
                  v181 = *(unsigned __int8 *)Str2;
                  goto LABEL_321;
                }
                if ( v511 != 1 )
                  goto LABEL_1354;
                v179 = *(unsigned __int8 *)Str2;
                goto LABEL_317;
              }
LABEL_1145:
              v70 = *(unsigned __int8 *)Str2;
              goto LABEL_130;
            }
            v512 = v13 - 2;
            if ( v512 )
            {
              v513 = v512 - 1;
              if ( !v513 )
              {
                v187 = *(char *)Str2;
                goto LABEL_329;
              }
              v514 = v513 - 1;
              if ( !v514 )
              {
                v183 = *(char *)Str2;
                goto LABEL_325;
              }
              v515 = v514 - 1;
              if ( !v515 )
              {
                v181 = *(char *)Str2;
                goto LABEL_321;
              }
              if ( v515 != 1 )
                goto LABEL_1354;
              v179 = *(char *)Str2;
              goto LABEL_317;
            }
LABEL_129:
            v70 = *(char *)Str2;
LABEL_130:
            v69 = *(_QWORD *)a2 == v70;
            goto LABEL_131;
          }
          goto LABEL_1161;
        }
        if ( a5 != 9 )
        {
          if ( a5 == 10 )
          {
            v524 = v13 - 2;
            if ( !v524 )
            {
              v121 = (float)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v121 = v121 + 1.8446744e19;
              goto LABEL_216;
            }
            v525 = v524 - 1;
            if ( !v525 )
            {
              v118 = (float)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v118 = v118 + 1.8446744e19;
              goto LABEL_210;
            }
            v526 = v525 - 1;
            if ( !v526 )
            {
              v115 = (float)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v115 = v115 + 1.8446744e19;
              goto LABEL_204;
            }
            v527 = v526 - 1;
            if ( v527 )
            {
              if ( v527 != 1 )
                goto LABEL_1354;
              v112 = (float)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v112 = v112 + 1.8446744e19;
              goto LABEL_198;
            }
            v91 = (float)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v91 = v91 + 1.8446744e19;
            goto LABEL_164;
          }
          if ( a5 == 11 )
          {
LABEL_1170:
            v520 = v13 - 2;
            if ( !v520 )
            {
              v104 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v104 = v104 + 1.844674407370955e19;
              goto LABEL_187;
            }
            v521 = v520 - 1;
            if ( !v521 )
            {
              v100 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v100 = v100 + 1.844674407370955e19;
              goto LABEL_177;
            }
            v522 = v521 - 1;
            if ( !v522 )
            {
              v95 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v95 = v95 + 1.844674407370955e19;
              goto LABEL_171;
            }
            v523 = v522 - 1;
            if ( v523 )
            {
              if ( v523 != 1 )
                goto LABEL_1354;
              v85 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v85 = v85 + 1.844674407370955e19;
              goto LABEL_155;
            }
            v89 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v89 = v89 + 1.844674407370955e19;
            goto LABEL_161;
          }
          if ( a5 != 14 )
          {
            if ( a5 != 15 )
              goto LABEL_1354;
            goto LABEL_1170;
          }
        }
LABEL_1161:
        v516 = v13 - 2;
        if ( v516 )
        {
          v517 = v516 - 1;
          if ( !v517 )
          {
            v134 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            v135 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            goto LABEL_239;
          }
          v518 = v517 - 1;
          if ( !v518 )
          {
            v132 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            goto LABEL_234;
          }
          v519 = v518 - 1;
          if ( !v519 )
          {
            v130 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            goto LABEL_229;
          }
          if ( v519 != 1 )
            goto LABEL_1354;
          v127 = *(_QWORD *)a2 < *(_QWORD *)Str2;
          v128 = *(_QWORD *)a2 == *(_QWORD *)Str2;
LABEL_224:
          v17 = v127 || v128;
          goto LABEL_31;
        }
        goto LABEL_1277;
      }
LABEL_1310:
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          if ( a5 == 2 )
          {
            v548 = v13 - 2;
            if ( !v548 )
              goto LABEL_129;
            v549 = v548 - 1;
            if ( !v549 )
            {
              v55 = *(char *)Str2;
              goto LABEL_98;
            }
            v550 = v549 - 1;
            if ( !v550 )
            {
              v50 = *(char *)Str2;
              goto LABEL_92;
            }
            v551 = v550 - 1;
            if ( !v551 )
            {
              v46 = *(char *)Str2;
              goto LABEL_86;
            }
            if ( v551 != 1 )
              goto LABEL_1354;
            v42 = *(char *)Str2;
          }
          else if ( a5 == 3 )
          {
            v544 = v13 - 2;
            if ( !v544 )
              goto LABEL_1145;
            v545 = v544 - 1;
            if ( !v545 )
            {
              v55 = *(unsigned __int8 *)Str2;
              goto LABEL_98;
            }
            v546 = v545 - 1;
            if ( !v546 )
            {
              v50 = *(unsigned __int8 *)Str2;
              goto LABEL_92;
            }
            v547 = v546 - 1;
            if ( !v547 )
            {
              v46 = *(unsigned __int8 *)Str2;
              goto LABEL_86;
            }
            if ( v547 != 1 )
              goto LABEL_1354;
            v42 = *(unsigned __int8 *)Str2;
          }
          else if ( a5 == 4 )
          {
            v540 = v13 - 2;
            if ( !v540 )
              goto LABEL_1135;
            v541 = v540 - 1;
            if ( !v541 )
            {
              v55 = (__int16)*Str2;
              goto LABEL_98;
            }
            v542 = v541 - 1;
            if ( !v542 )
            {
              v50 = (__int16)*Str2;
              goto LABEL_92;
            }
            v543 = v542 - 1;
            if ( !v543 )
            {
              v46 = (__int16)*Str2;
              goto LABEL_86;
            }
            if ( v543 != 1 )
              goto LABEL_1354;
            v42 = (__int16)*Str2;
          }
          else
          {
            if ( a5 != 5 )
            {
              if ( a5 == 6 )
              {
                v532 = v13 - 2;
                if ( !v532 )
                  goto LABEL_1115;
                v533 = v532 - 1;
                if ( v533 )
                {
                  v534 = v533 - 1;
                  if ( v534 )
                  {
                    v535 = v534 - 1;
                    if ( v535 )
                    {
                      if ( v535 != 1 )
                        goto LABEL_1354;
                      v42 = *(int *)Str2;
                      goto LABEL_80;
                    }
                    v46 = *(int *)Str2;
LABEL_86:
                    v45 = __OFSUB__(*(_QWORD *)a2, v46);
                    v44 = *(_QWORD *)a2 - v46 < 0;
                    goto LABEL_87;
                  }
                  v50 = *(int *)Str2;
                  goto LABEL_92;
                }
                v55 = *(int *)Str2;
              }
              else
              {
                if ( a5 != 7 )
                  goto LABEL_1354;
                v528 = v13 - 2;
                if ( !v528 )
                {
LABEL_1105:
                  v70 = *(unsigned int *)Str2;
                  goto LABEL_130;
                }
                v529 = v528 - 1;
                if ( v529 )
                {
                  v530 = v529 - 1;
                  if ( v530 )
                  {
                    v531 = v530 - 1;
                    if ( v531 )
                    {
                      if ( v531 != 1 )
                        goto LABEL_1354;
                      v42 = *(unsigned int *)Str2;
                      goto LABEL_80;
                    }
                    v46 = *(unsigned int *)Str2;
                    goto LABEL_86;
                  }
                  v50 = *(unsigned int *)Str2;
LABEL_92:
                  v49 = __OFSUB__(*(_QWORD *)a2, v50);
                  v48 = *(_QWORD *)a2 - v50 < 0;
                  goto LABEL_93;
                }
                v55 = *(unsigned int *)Str2;
              }
LABEL_98:
              v54 = __OFSUB__(*(_QWORD *)a2, v55);
              v52 = *(_QWORD *)a2 == v55;
              v53 = *(_QWORD *)a2 - v55 < 0;
              goto LABEL_99;
            }
            v536 = v13 - 2;
            if ( !v536 )
              goto LABEL_1125;
            v537 = v536 - 1;
            if ( !v537 )
            {
              v55 = *Str2;
              goto LABEL_98;
            }
            v538 = v537 - 1;
            if ( !v538 )
            {
              v50 = *Str2;
              goto LABEL_92;
            }
            v539 = v538 - 1;
            if ( !v539 )
            {
              v46 = *Str2;
              goto LABEL_86;
            }
            if ( v539 != 1 )
              goto LABEL_1354;
            v42 = *Str2;
          }
LABEL_80:
          v41 = __OFSUB__(*(_QWORD *)a2, v42);
          v39 = *(_QWORD *)a2 == v42;
          v40 = *(_QWORD *)a2 - v42 < 0;
          goto LABEL_81;
        }
LABEL_1252:
        v552 = v13 - 2;
        if ( v552 )
        {
          v553 = v552 - 1;
          if ( !v553 )
          {
            v33 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v31 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            v32 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_72;
          }
          v554 = v553 - 1;
          if ( !v554 )
          {
            v30 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v29 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_69;
          }
          v555 = v554 - 1;
          if ( !v555 )
          {
            v28 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v27 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_66;
          }
          if ( v555 != 1 )
            goto LABEL_1354;
          v26 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v24 = *(_QWORD *)a2 == *(_QWORD *)Str2;
          v25 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_63;
        }
LABEL_1277:
        v16 = *(_QWORD *)a2 == *(_QWORD *)Str2;
        goto LABEL_30;
      }
      if ( a5 == 9 )
        goto LABEL_1161;
      if ( a5 == 10 )
      {
        v560 = v13 - 2;
        if ( !v560 )
        {
          v121 = (float)(int)*(_QWORD *)a2;
          goto LABEL_216;
        }
        v561 = v560 - 1;
        if ( !v561 )
        {
          v118 = (float)(int)*(_QWORD *)a2;
          goto LABEL_210;
        }
        v562 = v561 - 1;
        if ( !v562 )
        {
          v115 = (float)(int)*(_QWORD *)a2;
          goto LABEL_204;
        }
        v563 = v562 - 1;
        if ( v563 )
        {
          if ( v563 != 1 )
            goto LABEL_1354;
          v112 = (float)(int)*(_QWORD *)a2;
          goto LABEL_198;
        }
        v91 = (float)(int)*(_QWORD *)a2;
        goto LABEL_164;
      }
      if ( a5 != 11 )
      {
        if ( a5 == 14 )
          goto LABEL_1252;
        if ( a5 != 15 )
          goto LABEL_1354;
      }
      v556 = v13 - 2;
      if ( !v556 )
      {
        v104 = (double)(int)*(_QWORD *)a2;
        goto LABEL_187;
      }
      v557 = v556 - 1;
      if ( !v557 )
      {
        v100 = (double)(int)*(_QWORD *)a2;
        goto LABEL_177;
      }
      v558 = v557 - 1;
      if ( !v558 )
      {
        v95 = (double)(int)*(_QWORD *)a2;
        goto LABEL_171;
      }
      v559 = v558 - 1;
      if ( v559 )
      {
        if ( v559 != 1 )
          goto LABEL_1354;
        v85 = (double)(int)*(_QWORD *)a2;
        goto LABEL_155;
      }
      v89 = (double)(int)*(_QWORD *)a2;
      goto LABEL_161;
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
          v566 = v13 - 2;
          if ( v566 )
          {
            v567 = v566 - 1;
            if ( v567 )
            {
              v568 = v567 - 1;
              if ( v568 )
              {
                v569 = v568 - 1;
                if ( v569 )
                {
                  if ( v569 != 1 )
                    goto LABEL_1354;
                  v101 = CompareFileTimeType(a2, Str2) + 1;
                }
                else
                {
                  v101 = CompareFileTimeType(a2, Str2);
                }
                v92 = v101 <= 1;
                goto LABEL_181;
              }
              v565 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
            }
            else
            {
              v565 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
            }
LABEL_1289:
            v92 = v565;
            goto LABEL_181;
          }
          v564 = CompareFileTimeType(a2, Str2);
LABEL_1287:
          v565 = v564 == 0;
          goto LABEL_1289;
        case 0x11u:
          if ( a5 != 17 || v13 != 2 )
            goto LABEL_1354;
          goto LABEL_29;
      }
      if ( a5 != 18 )
        goto LABEL_1354;
      if ( v13 != 2 )
      {
        if ( v13 - 9 > 2 )
          goto LABEL_1354;
        v15 = SubstringMatch(a2, Str2);
        goto LABEL_20;
      }
      goto LABEL_1282;
    }
    if ( a1 != 21 )
    {
      switch ( a1 )
      {
        case 0x16u:
          v570 = a5 == 22;
          break;
        case 0x17u:
          v381 = a5 == 23;
LABEL_833:
          if ( !v381 )
            goto LABEL_1354;
          goto LABEL_834;
        case 0x18u:
          v570 = a5 == 24;
          break;
        default:
          if ( a1 != 25 || a5 != 25 && a5 != 18 || v13 != 2 )
            goto LABEL_1354;
LABEL_1282:
          if ( v12 )
          {
            if ( !(_DWORD)v8 || (_DWORD)v8 != a7 )
            {
              *a8 = 0;
              goto LABEL_1357;
            }
            v564 = wcsicmp(a2, Str2);
            goto LABEL_1287;
          }
LABEL_1355:
          if ( (_DWORD)v8 != a7 )
            goto LABEL_12;
          v18 = memcmp(a2, Str2, v8) == 0;
          goto LABEL_36;
      }
      if ( !v570 || v13 != 2 )
        goto LABEL_1354;
      goto LABEL_62;
    }
    if ( a5 == 21 && v13 == 2 )
    {
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Str2 + 4) )
        goto LABEL_12;
      v571 = *(_QWORD *)a2 - *(_QWORD *)Str2;
      if ( *(_QWORD *)a2 == *(_QWORD *)Str2 )
        v571 = *((_QWORD *)a2 + 1) - *((_QWORD *)Str2 + 1);
      v18 = v571 == 0;
      goto LABEL_36;
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
