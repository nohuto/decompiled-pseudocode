/*
 * XREFs of PropertyEval @ 0x1404FDEB8
 * Callers:
 *     FilterEvalStrict @ 0x1404FDC24 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x140572A2C (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ArrayContains @ 0x1402C814C (ArrayContains.c)
 *     StringListContains @ 0x140577B88 (StringListContains.c)
 *     CompareFileTimeType @ 0x1407F471C (CompareFileTimeType.c)
 *     StringListElementSubstringMatch @ 0x1407F5464 (StringListElementSubstringMatch.c)
 *     SubstringMatch @ 0x1407F555C (SubstringMatch.c)
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
  int v17; // ecx
  bool v18; // zf
  int v19; // eax
  bool v20; // zf
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  bool v26; // cf
  unsigned int v27; // r9d
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  bool v31; // zf
  bool v32; // sf
  bool v33; // of
  bool v34; // cf
  bool v35; // zf
  bool v36; // cf
  bool v37; // cf
  bool v38; // zf
  bool v39; // sf
  bool v40; // of
  bool v41; // sf
  bool v42; // of
  bool v43; // zf
  bool v44; // sf
  bool v45; // of
  unsigned int v46; // r9d
  unsigned int v47; // r9d
  unsigned int v48; // r9d
  unsigned int v49; // r9d
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  unsigned int v55; // r9d
  unsigned int v56; // r9d
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
  bool v67; // zf
  bool v68; // sf
  bool v69; // of
  bool v70; // sf
  bool v71; // of
  __int64 v72; // rcx
  bool v73; // sf
  bool v74; // of
  __int64 v75; // rcx
  bool v76; // zf
  bool v77; // sf
  bool v78; // of
  __int64 v79; // rcx
  bool v80; // zf
  __int64 v81; // rcx
  unsigned int v82; // r9d
  unsigned int v83; // r9d
  unsigned int v84; // r9d
  unsigned int v85; // r9d
  __m128i v86; // xmm1
  unsigned int v87; // r9d
  unsigned int v88; // r9d
  unsigned int v89; // r9d
  unsigned int v90; // r9d
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  unsigned int v95; // eax
  double v96; // xmm1_8
  bool v97; // cf
  __m128i v98; // xmm0
  unsigned int v99; // eax
  double v100; // xmm0_8
  __m128i v101; // xmm1
  unsigned int v102; // eax
  double v103; // xmm1_8
  bool v104; // cf
  bool v105; // zf
  __m128i v106; // xmm0
  unsigned int v107; // eax
  double v108; // xmm0_8
  __m128i v109; // xmm0
  unsigned int v110; // eax
  double v111; // xmm0_8
  float v112; // xmm1_4
  unsigned int v113; // r9d
  unsigned int v114; // r9d
  unsigned int v115; // r9d
  unsigned int v116; // r9d
  __m128i v117; // xmm1
  unsigned int v118; // eax
  float v119; // xmm1_4
  __m128i v120; // xmm0
  float v121; // xmm0_4
  __m128i v122; // xmm1
  unsigned int v123; // eax
  float v124; // xmm1_4
  __m128i v125; // xmm0
  float v126; // xmm0_4
  __m128i v127; // xmm0
  unsigned int v128; // eax
  float v129; // xmm0_4
  unsigned int v130; // r9d
  unsigned int v131; // r9d
  unsigned int v132; // r9d
  unsigned int v133; // r9d
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // rcx
  unsigned __int64 v137; // rcx
  __int64 v138; // rcx
  unsigned int v139; // r9d
  unsigned int v140; // r9d
  unsigned int v141; // r9d
  unsigned int v142; // r9d
  unsigned int v143; // ecx
  unsigned int v144; // ecx
  unsigned int v145; // ecx
  unsigned int v146; // ecx
  int v147; // ecx
  unsigned int v148; // r9d
  unsigned int v149; // r9d
  unsigned int v150; // r9d
  unsigned int v151; // r9d
  int v152; // ecx
  int v153; // ecx
  int v154; // ecx
  int v155; // ecx
  unsigned int v156; // r9d
  unsigned int v157; // r9d
  unsigned int v158; // r9d
  unsigned int v159; // r9d
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  unsigned int v162; // r9d
  unsigned int v163; // r9d
  int v164; // edx
  int v165; // ecx
  int v166; // edx
  int v167; // ecx
  int v168; // edx
  int v169; // ecx
  int v170; // edx
  int v171; // ecx
  int v172; // edx
  int v173; // ecx
  unsigned int v174; // r9d
  unsigned int v175; // r9d
  unsigned int v176; // r9d
  unsigned int v177; // r9d
  wchar_t v178; // cx
  bool v179; // cf
  bool v180; // zf
  bool v181; // cf
  unsigned __int64 v182; // rcx
  bool v183; // cf
  unsigned __int64 v184; // rcx
  wchar_t v185; // cx
  bool v186; // cf
  bool v187; // zf
  unsigned __int64 v188; // rcx
  wchar_t v189; // cx
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
  unsigned int v205; // r9d
  unsigned int v206; // eax
  unsigned int v207; // eax
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
  unsigned int v230; // r9d
  unsigned int v231; // r9d
  wchar_t v232; // cx
  __int16 v233; // cx
  __int16 v234; // cx
  wchar_t v235; // cx
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
  unsigned int v266; // r9d
  unsigned int v267; // r9d
  wchar_t v268; // cx
  wchar_t v269; // cx
  __int16 v270; // cx
  unsigned int v271; // r9d
  unsigned int v272; // r9d
  unsigned int v273; // r9d
  unsigned int v274; // r9d
  __int16 v275; // dx
  __int16 v276; // dx
  __int16 v277; // dx
  __int16 v278; // dx
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
  unsigned int v348; // ecx
  unsigned int v349; // ecx
  unsigned int v350; // ecx
  unsigned int v351; // ecx
  unsigned int v352; // r9d
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
  int v380; // edx
  int v381; // ecx
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
  __m128i v398; // xmm1
  __m128i v399; // xmm0
  __m128i v400; // xmm1
  __m128i v401; // xmm1
  unsigned int v402; // ecx
  unsigned int v403; // r9d
  unsigned int v404; // r9d
  unsigned int v405; // r9d
  unsigned int v406; // r9d
  unsigned int v407; // ecx
  unsigned int v408; // ecx
  unsigned int v409; // ecx
  unsigned int v410; // ecx
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
  __m128i v452; // xmm1
  __m128i v453; // xmm0
  __m128i v454; // xmm1
  __m128i v455; // xmm1
  unsigned int v456; // ecx
  unsigned int v457; // r9d
  unsigned int v458; // r9d
  unsigned int v459; // r9d
  unsigned int v460; // r9d
  unsigned int v461; // ecx
  unsigned int v462; // ecx
  unsigned int v463; // ecx
  unsigned int v464; // ecx
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
  unsigned __int64 v497; // rcx
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
  __int64 v534; // rcx
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
  unsigned int v567; // eax
  unsigned int v568; // r9d
  unsigned int v569; // r9d
  unsigned int v570; // r9d
  unsigned int v571; // r9d
  bool v572; // zf
  __int64 v573; // rcx

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
    goto LABEL_1347;
  }
  v14 = 1;
  if ( v13 == 1 )
  {
    *a8 = a1 != 0;
    goto LABEL_1347;
  }
  if ( a1 && a5 )
  {
    if ( a1 > 0x1003 )
    {
      if ( a1 == 4109 )
      {
        if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
          goto LABEL_384;
        if ( v13 == 2 )
          goto LABEL_839;
        if ( v13 != 0x10000000 )
          goto LABEL_384;
        v19 = ArrayContains((__int64)a2, v8, (__int64)Str2, a7);
      }
      else
      {
        if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
          goto LABEL_384;
        switch ( v13 )
        {
          case 0x1000u:
            v19 = StringListContains(a2);
            break;
          case 2u:
            v383 = v12 == 0;
LABEL_838:
            if ( !v383 )
              goto LABEL_384;
            goto LABEL_839;
          case 0x2000u:
          case 0x3000u:
          case 0x4000u:
            v19 = StringListElementSubstringMatch((_DWORD)a2, a5, (_DWORD)Str2, v12, v13);
            break;
          default:
            goto LABEL_384;
        }
      }
      goto LABEL_42;
    }
    if ( a1 == 4099 )
    {
LABEL_836:
      v383 = v13 == 2;
      goto LABEL_838;
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
            goto LABEL_34;
          }
LABEL_13:
          v14 = 0;
LABEL_14:
          *a8 = v14;
          goto LABEL_1347;
        }
LABEL_384:
        v10 = -1073741637;
        goto LABEL_1347;
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
                        v22 = a5 - 6;
                        if ( a5 == 6 )
                          goto LABEL_59;
                        goto LABEL_58;
                      }
                      v344 = v13 - 2;
                      if ( v344 )
                      {
                        v345 = v344 - 1;
                        if ( v345 )
                        {
                          v346 = v345 - 1;
                          if ( v346 )
                          {
                            v347 = v346 - 1;
                            if ( v347 )
                            {
                              if ( v347 != 1 )
                                goto LABEL_384;
                              v348 = *Str2;
                              goto LABEL_774;
                            }
                            v349 = *Str2;
                            goto LABEL_776;
                          }
                          v350 = *Str2;
                          goto LABEL_778;
                        }
                        v351 = *Str2;
                        goto LABEL_780;
                      }
                      goto LABEL_105;
                    }
                    v352 = v13 - 2;
                    if ( v352 )
                    {
                      v353 = v352 - 1;
                      if ( v353 )
                      {
                        v354 = v353 - 1;
                        if ( v354 )
                        {
                          v355 = v354 - 1;
                          if ( v355 )
                          {
                            if ( v355 != 1 )
                              goto LABEL_384;
                            v348 = (__int16)*Str2;
                            goto LABEL_774;
                          }
                          v349 = (__int16)*Str2;
LABEL_776:
                          v181 = *(_DWORD *)a2 < v349;
                          goto LABEL_334;
                        }
                        v350 = (__int16)*Str2;
LABEL_778:
                        v183 = *(_DWORD *)a2 < v350;
                        goto LABEL_338;
                      }
                      v351 = (__int16)*Str2;
LABEL_780:
                      v186 = *(_DWORD *)a2 < v351;
                      v187 = *(_DWORD *)a2 == v351;
                      goto LABEL_342;
                    }
LABEL_115:
                    v54 = (__int16)*Str2;
                    goto LABEL_151;
                  }
                  v356 = v13 - 2;
                  if ( v356 )
                  {
                    v357 = v356 - 1;
                    if ( !v357 )
                    {
                      v351 = *(unsigned __int8 *)Str2;
                      goto LABEL_780;
                    }
                    v358 = v357 - 1;
                    if ( !v358 )
                    {
                      v350 = *(unsigned __int8 *)Str2;
                      goto LABEL_778;
                    }
                    v359 = v358 - 1;
                    if ( !v359 )
                    {
                      v349 = *(unsigned __int8 *)Str2;
                      goto LABEL_776;
                    }
                    if ( v359 != 1 )
                      goto LABEL_384;
                    v348 = *(unsigned __int8 *)Str2;
LABEL_774:
                    v179 = *(_DWORD *)a2 < v348;
                    v180 = *(_DWORD *)a2 == v348;
                    goto LABEL_330;
                  }
LABEL_125:
                  v54 = *(unsigned __int8 *)Str2;
                  goto LABEL_151;
                }
                v360 = v13 - 2;
                if ( v360 )
                {
                  v361 = v360 - 1;
                  if ( !v361 )
                  {
                    v351 = *(char *)Str2;
                    goto LABEL_780;
                  }
                  v362 = v361 - 1;
                  if ( !v362 )
                  {
                    v350 = *(char *)Str2;
                    goto LABEL_778;
                  }
                  v363 = v362 - 1;
                  if ( !v363 )
                  {
                    v349 = *(char *)Str2;
                    goto LABEL_776;
                  }
                  if ( v363 != 1 )
                    goto LABEL_384;
                  v348 = *(char *)Str2;
                  goto LABEL_774;
                }
LABEL_150:
                v54 = *(char *)Str2;
                goto LABEL_151;
              }
LABEL_792:
              v368 = v13 - 2;
              if ( v368 )
              {
                v369 = v368 - 1;
                if ( v369 )
                {
                  v370 = v369 - 1;
                  if ( v370 )
                  {
                    v371 = v370 - 1;
                    if ( v371 )
                    {
                      if ( v371 != 1 )
                        goto LABEL_384;
                      v91 = *(unsigned int *)a2;
LABEL_172:
                      v33 = __OFSUB__(v91, *(_QWORD *)Str2);
                      v31 = v91 == *(_QWORD *)Str2;
                      v32 = v91 - *(_QWORD *)Str2 < 0;
LABEL_173:
                      v21 = v32 ^ v33 | v31;
                      goto LABEL_47;
                    }
                    v92 = *(unsigned int *)a2;
                    goto LABEL_176;
                  }
                  v93 = *(unsigned int *)a2;
                  goto LABEL_181;
                }
                v94 = *(unsigned int *)a2;
                goto LABEL_186;
              }
              goto LABEL_732;
            }
            if ( a5 != 9 )
            {
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                    goto LABEL_792;
                  if ( a5 != 15 )
                    goto LABEL_384;
                }
                v364 = v13 - 2;
                if ( v364 )
                {
                  v365 = v364 - 1;
                  if ( v365 )
                  {
                    v366 = v365 - 1;
                    if ( v366 )
                    {
                      v367 = v366 - 1;
                      if ( v367 )
                      {
                        if ( v367 != 1 )
                          goto LABEL_384;
                        v96 = (double)*(int *)a2;
                        goto LABEL_193;
                      }
                      v100 = (double)*(int *)a2;
LABEL_199:
                      v97 = v100 < *(double *)Str2;
                      goto LABEL_233;
                    }
                    v103 = (double)*(int *)a2;
                    goto LABEL_205;
                  }
                  v108 = (double)*(int *)a2;
LABEL_211:
                  v104 = v108 < *(double *)Str2;
                  v105 = v108 == *(double *)Str2;
                  goto LABEL_243;
                }
                v111 = (double)*(int *)a2;
                goto LABEL_217;
              }
              v372 = v13 - 2;
              if ( v372 )
              {
                v373 = v372 - 1;
                if ( v373 )
                {
                  v374 = v373 - 1;
                  if ( v374 )
                  {
                    v375 = v374 - 1;
                    if ( v375 )
                    {
                      if ( v375 != 1 )
                        goto LABEL_384;
                      v119 = (float)*(int *)a2;
                      goto LABEL_229;
                    }
                    v121 = (float)*(int *)a2;
LABEL_232:
                    v97 = v121 < *(float *)Str2;
                    goto LABEL_233;
                  }
                  v124 = (float)*(int *)a2;
LABEL_239:
                  v104 = *(float *)Str2 < v124;
                  v105 = *(float *)Str2 == v124;
                  goto LABEL_243;
                }
                v126 = (float)*(int *)a2;
LABEL_242:
                v104 = v126 < *(float *)Str2;
                v105 = v126 == *(float *)Str2;
                goto LABEL_243;
              }
              v129 = (float)*(int *)a2;
              goto LABEL_249;
            }
            v376 = v13 - 2;
            if ( !v376 )
            {
LABEL_732:
              v138 = *(unsigned int *)a2;
              goto LABEL_733;
            }
            v377 = v376 - 1;
            if ( v377 )
            {
              v378 = v377 - 1;
              if ( v378 )
              {
                v379 = v378 - 1;
                if ( v379 )
                {
                  if ( v379 != 1 )
                    goto LABEL_384;
                  v134 = *(unsigned int *)a2;
LABEL_818:
                  v34 = v134 < *(_QWORD *)Str2;
                  v35 = v134 == *(_QWORD *)Str2;
                  goto LABEL_86;
                }
                v135 = *(unsigned int *)a2;
                goto LABEL_820;
              }
              v136 = *(unsigned int *)a2;
              goto LABEL_822;
            }
            v137 = *(unsigned int *)a2;
            goto LABEL_824;
          }
          if ( a5 != 7 )
            goto LABEL_384;
          v380 = *(_DWORD *)a2;
          v381 = *(_DWORD *)Str2;
          if ( v13 == 7 )
            v17 = v380 & v381;
          else
            v17 = v380 | v381;
LABEL_30:
          *a8 = v17;
          goto LABEL_1347;
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
                          v63 = v13 - 2;
                          if ( !v63 )
                            goto LABEL_150;
                          v64 = v63 - 1;
                          if ( !v64 )
                          {
                            v53 = *(char *)Str2;
                            goto LABEL_146;
                          }
                          v65 = v64 - 1;
                          if ( !v65 )
                          {
                            v52 = *(char *)Str2;
                            goto LABEL_141;
                          }
                          v66 = v65 - 1;
                          if ( !v66 )
                          {
                            v51 = *(char *)Str2;
                            goto LABEL_136;
                          }
                          if ( v66 != 1 )
                            goto LABEL_384;
                          v50 = *(char *)Str2;
                          break;
                        case 3u:
                          v59 = v13 - 2;
                          if ( !v59 )
                            goto LABEL_125;
                          v60 = v59 - 1;
                          if ( !v60 )
                          {
                            v53 = *(unsigned __int8 *)Str2;
                            goto LABEL_146;
                          }
                          v61 = v60 - 1;
                          if ( !v61 )
                          {
                            v52 = *(unsigned __int8 *)Str2;
                            goto LABEL_141;
                          }
                          v62 = v61 - 1;
                          if ( !v62 )
                          {
                            v51 = *(unsigned __int8 *)Str2;
                            goto LABEL_136;
                          }
                          if ( v62 != 1 )
                            goto LABEL_384;
                          v50 = *(unsigned __int8 *)Str2;
                          break;
                        case 4u:
                          v55 = v13 - 2;
                          if ( !v55 )
                            goto LABEL_115;
                          v56 = v55 - 1;
                          if ( v56 )
                          {
                            v57 = v56 - 1;
                            if ( v57 )
                            {
                              v58 = v57 - 1;
                              if ( v58 )
                              {
                                if ( v58 != 1 )
                                  goto LABEL_384;
                                v50 = (__int16)*Str2;
                                break;
                              }
                              v51 = (__int16)*Str2;
LABEL_136:
                              v71 = __OFSUB__(*(_DWORD *)a2, v51);
                              v70 = *(_DWORD *)a2 - v51 < 0;
                              goto LABEL_139;
                            }
                            v52 = (__int16)*Str2;
LABEL_141:
                            v74 = __OFSUB__(*(_DWORD *)a2, v52);
                            v73 = *(_DWORD *)a2 - v52 < 0;
                            goto LABEL_144;
                          }
                          v53 = (__int16)*Str2;
LABEL_146:
                          v78 = __OFSUB__(*(_DWORD *)a2, v53);
                          v76 = *(_DWORD *)a2 == v53;
                          v77 = *(_DWORD *)a2 - v53 < 0;
                          goto LABEL_149;
                        case 5u:
                          v46 = v13 - 2;
                          if ( !v46 )
                          {
LABEL_105:
                            v54 = *Str2;
LABEL_151:
                            v80 = *(_DWORD *)a2 == v54;
LABEL_154:
                            v19 = v80;
                            goto LABEL_42;
                          }
                          v47 = v46 - 1;
                          if ( v47 )
                          {
                            v48 = v47 - 1;
                            if ( v48 )
                            {
                              v49 = v48 - 1;
                              if ( v49 )
                              {
                                if ( v49 != 1 )
                                  goto LABEL_384;
                                v50 = *Str2;
                                break;
                              }
                              v51 = *Str2;
                              goto LABEL_136;
                            }
                            v52 = *Str2;
                            goto LABEL_141;
                          }
                          v53 = *Str2;
                          goto LABEL_146;
                        default:
                          v22 = a5 - 6;
                          if ( a5 != 6 )
                          {
LABEL_58:
                            if ( v22 != 1 )
                              goto LABEL_384;
LABEL_59:
                            v23 = v13 - 2;
                            if ( v23 )
                            {
                              v24 = v23 - 1;
                              if ( v24 )
                              {
                                v25 = v24 - 1;
                                if ( !v25 )
                                {
                                  v26 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_63:
                                  v21 = v26;
                                  goto LABEL_47;
                                }
                                v343 = v25 - 1;
                                if ( v343 )
                                {
                                  if ( v343 != 1 )
                                    goto LABEL_384;
                                  v34 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                                  v35 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                  goto LABEL_86;
                                }
                                v36 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_89:
                                v21 = !v36;
                                goto LABEL_47;
                              }
                              v37 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                              v38 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                              goto LABEL_92;
                            }
                            goto LABEL_1331;
                          }
                          v27 = v13 - 2;
                          if ( v27 )
                          {
                            v28 = v27 - 1;
                            if ( !v28 )
                            {
                              v45 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                              v43 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                              v44 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_188:
                              v21 = !(v44 ^ v45 | v43);
                              goto LABEL_47;
                            }
                            v29 = v28 - 1;
                            if ( !v29 )
                            {
                              v42 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                              v41 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_183:
                              v21 = v41 ^ v42;
                              goto LABEL_47;
                            }
                            v30 = v29 - 1;
                            if ( v30 )
                            {
                              if ( v30 != 1 )
                                goto LABEL_384;
                              v33 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                              v31 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                              v32 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                              goto LABEL_173;
                            }
                            v40 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                            v39 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_178:
                            v21 = v39 == v40;
                            goto LABEL_47;
                          }
LABEL_1331:
                          v20 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                          goto LABEL_46;
                      }
                      v69 = __OFSUB__(*(_DWORD *)a2, v50);
                      v67 = *(_DWORD *)a2 == v50;
                      v68 = *(_DWORD *)a2 - v50 < 0;
LABEL_134:
                      v19 = v68 ^ v69 | v67;
                      goto LABEL_42;
                    }
LABEL_166:
                    v87 = v13 - 2;
                    if ( v87 )
                    {
                      v88 = v87 - 1;
                      if ( v88 )
                      {
                        v89 = v88 - 1;
                        if ( v89 )
                        {
                          v90 = v89 - 1;
                          if ( v90 )
                          {
                            if ( v90 != 1 )
                              goto LABEL_384;
                            v91 = *(int *)a2;
                            goto LABEL_172;
                          }
                          v92 = *(int *)a2;
LABEL_176:
                          v40 = __OFSUB__(v92, *(_QWORD *)Str2);
                          v39 = v92 - *(_QWORD *)Str2 < 0;
                          goto LABEL_178;
                        }
                        v93 = *(int *)a2;
                        goto LABEL_181;
                      }
                      v94 = *(int *)a2;
                      goto LABEL_186;
                    }
                    goto LABEL_259;
                  }
                  if ( a5 == 9 )
                  {
                    v130 = v13 - 2;
                    if ( v130 )
                    {
                      v131 = v130 - 1;
                      if ( v131 )
                      {
                        v132 = v131 - 1;
                        if ( v132 )
                        {
                          v133 = v132 - 1;
                          if ( v133 )
                          {
                            if ( v133 != 1 )
                              goto LABEL_384;
                            v134 = *(int *)a2;
                            goto LABEL_818;
                          }
                          v135 = *(int *)a2;
                          goto LABEL_820;
                        }
                        v136 = *(int *)a2;
                        goto LABEL_822;
                      }
                      v137 = *(int *)a2;
                      goto LABEL_824;
                    }
LABEL_259:
                    v138 = *(int *)a2;
LABEL_733:
                    v20 = v138 == *(_QWORD *)Str2;
                    goto LABEL_46;
                  }
                  if ( a5 != 10 )
                  {
                    if ( a5 != 11 )
                    {
                      if ( a5 == 14 )
                        goto LABEL_166;
                      if ( a5 != 15 )
                        goto LABEL_384;
                    }
                    v82 = v13 - 2;
                    if ( v82 )
                    {
                      v83 = v82 - 1;
                      if ( v83 )
                      {
                        v84 = v83 - 1;
                        if ( v84 )
                        {
                          v85 = v84 - 1;
                          if ( v85 )
                          {
                            if ( v85 != 1 )
                              goto LABEL_384;
                            v86 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                            goto LABEL_191;
                          }
                          v98 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_197:
                          *(_QWORD *)&v100 = *(_OWORD *)&_mm_cvtepi32_pd(v98);
                          goto LABEL_199;
                        }
                        v101 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_203;
                      }
                      v106 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_209:
                      *(_QWORD *)&v108 = *(_OWORD *)&_mm_cvtepi32_pd(v106);
                      goto LABEL_211;
                    }
                    v109 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                    goto LABEL_215;
                  }
                  v113 = v13 - 2;
                  if ( v113 )
                  {
                    v114 = v113 - 1;
                    if ( v114 )
                    {
                      v115 = v114 - 1;
                      if ( v115 )
                      {
                        v116 = v115 - 1;
                        if ( v116 )
                        {
                          if ( v116 != 1 )
                            goto LABEL_384;
                          v117 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_227;
                        }
                        v120 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_231:
                        LODWORD(v121) = _mm_cvtepi32_ps(v120).m128_u32[0];
                        goto LABEL_232;
                      }
                      v122 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_237:
                      LODWORD(v124) = _mm_cvtepi32_ps(v122).m128_u32[0];
                      goto LABEL_239;
                    }
                    v125 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_241:
                    LODWORD(v126) = _mm_cvtepi32_ps(v125).m128_u32[0];
                    goto LABEL_242;
                  }
                  v127 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                  goto LABEL_247;
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
                                goto LABEL_384;
                              v139 = v13 - 2;
                              if ( v139 )
                              {
                                v140 = v139 - 1;
                                if ( v140 )
                                {
                                  v141 = v140 - 1;
                                  if ( v141 )
                                  {
                                    v142 = v141 - 1;
                                    if ( v142 )
                                    {
                                      if ( v142 != 1 )
                                        goto LABEL_384;
                                      v143 = *a2;
                                      goto LABEL_274;
                                    }
                                    v144 = *a2;
LABEL_277:
                                    v36 = v144 < *(_DWORD *)Str2;
                                    goto LABEL_89;
                                  }
                                  v145 = *a2;
LABEL_280:
                                  v26 = v145 < *(_DWORD *)Str2;
                                  goto LABEL_63;
                                }
                                v146 = *a2;
LABEL_283:
                                v37 = v146 < *(_DWORD *)Str2;
                                v38 = v146 == *(_DWORD *)Str2;
                                goto LABEL_92;
                              }
                              goto LABEL_284;
                            }
                            v148 = v13 - 2;
                            if ( !v148 )
                            {
LABEL_284:
                              v147 = *a2;
LABEL_286:
                              v20 = v147 == *(_DWORD *)Str2;
                              goto LABEL_46;
                            }
                            v149 = v148 - 1;
                            if ( v149 )
                            {
                              v150 = v149 - 1;
                              if ( v150 )
                              {
                                v151 = v150 - 1;
                                if ( v151 )
                                {
                                  if ( v151 != 1 )
                                    goto LABEL_384;
                                  v152 = *a2;
                                  goto LABEL_293;
                                }
                                v153 = *a2;
LABEL_296:
                                v40 = __OFSUB__(v153, *(_DWORD *)Str2);
                                v39 = v153 - *(_DWORD *)Str2 < 0;
                                goto LABEL_178;
                              }
                              v154 = *a2;
LABEL_299:
                              v42 = __OFSUB__(v154, *(_DWORD *)Str2);
                              v41 = v154 - *(_DWORD *)Str2 < 0;
                              goto LABEL_183;
                            }
                            v155 = *a2;
LABEL_302:
                            v45 = __OFSUB__(v155, *(_DWORD *)Str2);
                            v43 = v155 == *(_DWORD *)Str2;
                            v44 = v155 - *(_DWORD *)Str2 < 0;
                            goto LABEL_188;
                          }
                          v156 = v13 - 2;
                          if ( v156 )
                          {
                            v157 = v156 - 1;
                            if ( v157 )
                            {
                              v158 = v157 - 1;
                              if ( !v158 )
                              {
                                v26 = *a2 < *Str2;
                                goto LABEL_63;
                              }
                              v159 = v158 - 1;
                              if ( v159 )
                              {
                                if ( v159 != 1 )
                                  goto LABEL_384;
                                v34 = *a2 < *Str2;
                                v35 = *a2 == *Str2;
                                goto LABEL_86;
                              }
                              v36 = *a2 < *Str2;
                              goto LABEL_89;
                            }
                            v37 = *a2 < *Str2;
                            v38 = *a2 == *Str2;
                            goto LABEL_92;
                          }
LABEL_312:
                          v20 = *a2 == *Str2;
                          goto LABEL_46;
                        }
                        v160 = v13 - 2;
                        if ( v160 )
                        {
                          v161 = v160 - 1;
                          if ( v161 )
                          {
                            v162 = v161 - 1;
                            if ( v162 )
                            {
                              v163 = v162 - 1;
                              if ( v163 )
                              {
                                if ( v163 != 1 )
                                  goto LABEL_384;
                                v164 = *a2;
                                v165 = (__int16)*Str2;
                                goto LABEL_353;
                              }
                              v166 = *a2;
                              v167 = (__int16)*Str2;
LABEL_358:
                              v71 = __OFSUB__(v166, v167);
                              v70 = v166 - v167 < 0;
                              goto LABEL_139;
                            }
                            v168 = *a2;
                            v169 = (__int16)*Str2;
LABEL_363:
                            v74 = __OFSUB__(v168, v169);
                            v73 = v168 - v169 < 0;
                            goto LABEL_144;
                          }
                          v170 = *a2;
                          v171 = (__int16)*Str2;
LABEL_368:
                          v78 = __OFSUB__(v170, v171);
                          v76 = v170 == v171;
                          v77 = v170 - v171 < 0;
                          goto LABEL_149;
                        }
                        v172 = *a2;
                        v173 = (__int16)*Str2;
LABEL_373:
                        v80 = v172 == v173;
                        goto LABEL_154;
                      }
                      v174 = v13 - 2;
                      if ( v174 )
                      {
                        v175 = v174 - 1;
                        if ( v175 )
                        {
                          v176 = v175 - 1;
                          if ( v176 )
                          {
                            v177 = v176 - 1;
                            if ( v177 )
                            {
                              if ( v177 != 1 )
                                goto LABEL_384;
                              v178 = *(unsigned __int8 *)Str2;
                              v179 = *a2 < v178;
                              v180 = *a2 == v178;
                              goto LABEL_330;
                            }
                            v181 = *a2 < *(unsigned __int8 *)Str2;
LABEL_334:
                            v19 = !v181;
                            goto LABEL_42;
                          }
                          v183 = *a2 < *(unsigned __int8 *)Str2;
LABEL_338:
                          v19 = v183;
                          goto LABEL_42;
                        }
                        v185 = *(unsigned __int8 *)Str2;
                        v186 = *a2 < v185;
                        v187 = *a2 == v185;
LABEL_342:
                        v19 = !v186 && !v187;
                        goto LABEL_42;
                      }
                      goto LABEL_343;
                    }
                    v190 = v13 - 2;
                    if ( v190 )
                    {
                      v191 = v190 - 1;
                      if ( v191 )
                      {
                        v192 = v191 - 1;
                        if ( v192 )
                        {
                          v193 = v192 - 1;
                          if ( v193 )
                          {
                            if ( v193 != 1 )
                              goto LABEL_384;
                            v164 = *a2;
                            goto LABEL_352;
                          }
                          v166 = *a2;
                          goto LABEL_356;
                        }
                        v168 = *a2;
                        goto LABEL_361;
                      }
                      v170 = *a2;
                      goto LABEL_366;
                    }
                    v172 = *a2;
                    goto LABEL_371;
                  }
                  goto LABEL_385;
                }
                if ( a5 == 9 )
                {
                  v208 = v13 - 2;
                  if ( v208 )
                  {
                    v209 = v208 - 1;
                    if ( v209 )
                    {
                      v210 = v209 - 1;
                      if ( v210 )
                      {
                        v211 = v210 - 1;
                        if ( v211 )
                        {
                          if ( v211 != 1 )
                            goto LABEL_384;
                          v134 = *a2;
                          goto LABEL_818;
                        }
                        v135 = *a2;
                        goto LABEL_820;
                      }
                      v136 = *a2;
                      goto LABEL_822;
                    }
                    v137 = *a2;
                    goto LABEL_824;
                  }
LABEL_415:
                  v138 = *a2;
                  goto LABEL_733;
                }
                if ( a5 != 10 )
                {
                  if ( a5 != 11 )
                  {
                    if ( a5 == 14 )
                    {
LABEL_385:
                      v198 = v13 - 2;
                      if ( v198 )
                      {
                        v199 = v198 - 1;
                        if ( v199 )
                        {
                          v200 = v199 - 1;
                          if ( v200 )
                          {
                            v201 = v200 - 1;
                            if ( v201 )
                            {
                              if ( v201 != 1 )
                                goto LABEL_384;
                              v91 = *a2;
                              goto LABEL_172;
                            }
                            v92 = *a2;
                            goto LABEL_176;
                          }
                          v93 = *a2;
LABEL_181:
                          v42 = __OFSUB__(v93, *(_QWORD *)Str2);
                          v41 = v93 - *(_QWORD *)Str2 < 0;
                          goto LABEL_183;
                        }
                        v94 = *a2;
LABEL_186:
                        v45 = __OFSUB__(v94, *(_QWORD *)Str2);
                        v43 = v94 == *(_QWORD *)Str2;
                        v44 = v94 - *(_QWORD *)Str2 < 0;
                        goto LABEL_188;
                      }
                      goto LABEL_415;
                    }
                    if ( a5 != 15 )
                      goto LABEL_384;
                  }
                  v194 = v13 - 2;
                  if ( v194 )
                  {
                    v195 = v194 - 1;
                    if ( v195 )
                    {
                      v196 = v195 - 1;
                      if ( v196 )
                      {
                        v197 = v196 - 1;
                        if ( v197 )
                        {
                          if ( v197 != 1 )
                            goto LABEL_384;
                          v95 = *a2;
                          goto LABEL_190;
                        }
                        v99 = *a2;
LABEL_196:
                        v98 = _mm_cvtsi32_si128(v99);
                        goto LABEL_197;
                      }
                      v102 = *a2;
LABEL_202:
                      v101 = _mm_cvtsi32_si128(v102);
LABEL_203:
                      *(_QWORD *)&v103 = *(_OWORD *)&_mm_cvtepi32_pd(v101);
LABEL_205:
                      v104 = *(double *)Str2 < v103;
                      v105 = *(double *)Str2 == v103;
                      goto LABEL_243;
                    }
                    v107 = *a2;
LABEL_208:
                    v106 = _mm_cvtsi32_si128(v107);
                    goto LABEL_209;
                  }
                  v110 = *a2;
LABEL_214:
                  v109 = _mm_cvtsi32_si128(v110);
LABEL_215:
                  *(_QWORD *)&v111 = *(_OWORD *)&_mm_cvtepi32_pd(v109);
LABEL_217:
                  v18 = v111 == *(double *)Str2;
                  goto LABEL_34;
                }
                v202 = v13 - 2;
                if ( v202 )
                {
                  v203 = v202 - 1;
                  if ( v203 )
                  {
                    v204 = v203 - 1;
                    if ( v204 )
                    {
                      v205 = v204 - 1;
                      if ( v205 )
                      {
                        if ( v205 != 1 )
                          goto LABEL_384;
                        v118 = *a2;
                        goto LABEL_226;
                      }
                      v206 = *a2;
LABEL_402:
                      v120 = _mm_cvtsi32_si128(v206);
                      goto LABEL_231;
                    }
                    v123 = *a2;
LABEL_236:
                    v122 = _mm_cvtsi32_si128(v123);
                    goto LABEL_237;
                  }
                  v207 = *a2;
LABEL_405:
                  v125 = _mm_cvtsi32_si128(v207);
                  goto LABEL_241;
                }
                v128 = *a2;
LABEL_246:
                v127 = _mm_cvtsi32_si128(v128);
LABEL_247:
                LODWORD(v129) = _mm_cvtepi32_ps(v127).m128_u32[0];
LABEL_249:
                v18 = v129 == *(float *)Str2;
                goto LABEL_34;
              }
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  switch ( a5 )
                  {
                    case 2u:
                      v236 = v13 - 2;
                      if ( !v236 )
                      {
                        v189 = *(char *)Str2;
                        goto LABEL_345;
                      }
                      v237 = v236 - 1;
                      if ( v237 )
                      {
                        v238 = v237 - 1;
                        if ( v238 )
                        {
                          v239 = v238 - 1;
                          if ( v239 )
                          {
                            if ( v239 != 1 )
                              goto LABEL_384;
                            v232 = *(char *)Str2;
LABEL_486:
                            v69 = __OFSUB__(*a2, v232);
                            v67 = *a2 == v232;
                            v68 = (__int16)(*a2 - v232) < 0;
                            goto LABEL_134;
                          }
                          v233 = *(char *)Str2;
LABEL_488:
                          v71 = __OFSUB__(*a2, v233);
                          v70 = (__int16)(*a2 - v233) < 0;
                          goto LABEL_139;
                        }
                        v234 = *(char *)Str2;
LABEL_490:
                        v74 = __OFSUB__(*a2, v234);
                        v73 = (__int16)(*a2 - v234) < 0;
                        goto LABEL_144;
                      }
                      v235 = *(char *)Str2;
                      break;
                    case 3u:
                      v228 = v13 - 2;
                      if ( !v228 )
                      {
LABEL_343:
                        v189 = *(unsigned __int8 *)Str2;
LABEL_345:
                        v80 = *a2 == v189;
                        goto LABEL_154;
                      }
                      v229 = v228 - 1;
                      if ( v229 )
                      {
                        v230 = v229 - 1;
                        if ( v230 )
                        {
                          v231 = v230 - 1;
                          if ( v231 )
                          {
                            if ( v231 != 1 )
                              goto LABEL_384;
                            v232 = *(unsigned __int8 *)Str2;
                            goto LABEL_486;
                          }
                          v233 = *(unsigned __int8 *)Str2;
                          goto LABEL_488;
                        }
                        v234 = *(unsigned __int8 *)Str2;
                        goto LABEL_490;
                      }
                      v235 = *(unsigned __int8 *)Str2;
                      break;
                    case 4u:
                      v224 = v13 - 2;
                      if ( v224 )
                      {
                        v225 = v224 - 1;
                        if ( !v225 )
                        {
                          v45 = __OFSUB__(*a2, *Str2);
                          v43 = *a2 == *Str2;
                          v44 = (__int16)(*a2 - *Str2) < 0;
                          goto LABEL_188;
                        }
                        v226 = v225 - 1;
                        if ( !v226 )
                        {
                          v42 = __OFSUB__(*a2, *Str2);
                          v41 = (__int16)(*a2 - *Str2) < 0;
                          goto LABEL_183;
                        }
                        v227 = v226 - 1;
                        if ( v227 )
                        {
                          if ( v227 != 1 )
                            goto LABEL_384;
                          v33 = __OFSUB__(*a2, *Str2);
                          v31 = *a2 == *Str2;
                          v32 = (__int16)(*a2 - *Str2) < 0;
                          goto LABEL_173;
                        }
                        v40 = __OFSUB__(*a2, *Str2);
                        v39 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_178;
                      }
                      goto LABEL_312;
                    case 5u:
                      v220 = v13 - 2;
                      if ( v220 )
                      {
                        v221 = v220 - 1;
                        if ( v221 )
                        {
                          v222 = v221 - 1;
                          if ( v222 )
                          {
                            v223 = v222 - 1;
                            if ( v223 )
                            {
                              if ( v223 != 1 )
                                goto LABEL_384;
                              v164 = (__int16)*a2;
                              goto LABEL_449;
                            }
                            v166 = (__int16)*a2;
                            goto LABEL_452;
                          }
                          v168 = (__int16)*a2;
                          goto LABEL_455;
                        }
                        v170 = (__int16)*a2;
                        goto LABEL_458;
                      }
                      v172 = (__int16)*a2;
                      goto LABEL_461;
                    case 6u:
                      v216 = v13 - 2;
                      if ( !v216 )
                        goto LABEL_433;
                      v217 = v216 - 1;
                      if ( !v217 )
                      {
                        v155 = (__int16)*a2;
                        goto LABEL_302;
                      }
                      v218 = v217 - 1;
                      if ( !v218 )
                      {
                        v154 = (__int16)*a2;
                        goto LABEL_299;
                      }
                      v219 = v218 - 1;
                      if ( !v219 )
                      {
                        v153 = (__int16)*a2;
                        goto LABEL_296;
                      }
                      if ( v219 != 1 )
                        goto LABEL_384;
                      v152 = (__int16)*a2;
LABEL_293:
                      v33 = __OFSUB__(v152, *(_DWORD *)Str2);
                      v31 = v152 == *(_DWORD *)Str2;
                      v32 = v152 - *(_DWORD *)Str2 < 0;
                      goto LABEL_173;
                    case 7u:
                      v212 = v13 - 2;
                      if ( v212 )
                      {
                        v213 = v212 - 1;
                        if ( !v213 )
                        {
                          v146 = (__int16)*a2;
                          goto LABEL_283;
                        }
                        v214 = v213 - 1;
                        if ( !v214 )
                        {
                          v145 = (__int16)*a2;
                          goto LABEL_280;
                        }
                        v215 = v214 - 1;
                        if ( !v215 )
                        {
                          v144 = (__int16)*a2;
                          goto LABEL_277;
                        }
                        if ( v215 != 1 )
                          goto LABEL_384;
                        v143 = (__int16)*a2;
                        goto LABEL_274;
                      }
LABEL_433:
                      v147 = (__int16)*a2;
                      goto LABEL_286;
                    default:
                      goto LABEL_384;
                  }
                  v78 = __OFSUB__(*a2, v235);
                  v76 = *a2 == v235;
                  v77 = (__int16)(*a2 - v235) < 0;
                  goto LABEL_149;
                }
                goto LABEL_504;
              }
              if ( a5 == 9 )
              {
                v252 = v13 - 2;
                if ( v252 )
                {
                  v253 = v252 - 1;
                  if ( v253 )
                  {
                    v254 = v253 - 1;
                    if ( v254 )
                    {
                      v255 = v254 - 1;
                      if ( v255 )
                      {
                        if ( v255 != 1 )
                          goto LABEL_384;
                        v134 = (__int16)*a2;
                        goto LABEL_818;
                      }
                      v135 = (__int16)*a2;
                      goto LABEL_820;
                    }
                    v136 = (__int16)*a2;
                    goto LABEL_822;
                  }
                  v137 = (__int16)*a2;
                  goto LABEL_824;
                }
LABEL_536:
                v138 = (__int16)*a2;
                goto LABEL_733;
              }
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                  {
LABEL_504:
                    v244 = v13 - 2;
                    if ( v244 )
                    {
                      v245 = v244 - 1;
                      if ( v245 )
                      {
                        v246 = v245 - 1;
                        if ( v246 )
                        {
                          v247 = v246 - 1;
                          if ( v247 )
                          {
                            if ( v247 != 1 )
                              goto LABEL_384;
                            v91 = (__int16)*a2;
                            goto LABEL_172;
                          }
                          v92 = (__int16)*a2;
                          goto LABEL_176;
                        }
                        v93 = (__int16)*a2;
                        goto LABEL_181;
                      }
                      v94 = (__int16)*a2;
                      goto LABEL_186;
                    }
                    goto LABEL_536;
                  }
                  if ( a5 != 15 )
                    goto LABEL_384;
                }
                v240 = v13 - 2;
                if ( !v240 )
                {
                  v110 = (__int16)*a2;
                  goto LABEL_214;
                }
                v241 = v240 - 1;
                if ( !v241 )
                {
                  v107 = (__int16)*a2;
                  goto LABEL_208;
                }
                v242 = v241 - 1;
                if ( !v242 )
                {
                  v102 = (__int16)*a2;
                  goto LABEL_202;
                }
                v243 = v242 - 1;
                if ( !v243 )
                {
                  v99 = (__int16)*a2;
                  goto LABEL_196;
                }
                if ( v243 != 1 )
                  goto LABEL_384;
                v95 = (__int16)*a2;
LABEL_190:
                v86 = _mm_cvtsi32_si128(v95);
LABEL_191:
                *(_QWORD *)&v96 = *(_OWORD *)&_mm_cvtepi32_pd(v86);
                goto LABEL_193;
              }
              v248 = v13 - 2;
              if ( !v248 )
              {
                v128 = (__int16)*a2;
                goto LABEL_246;
              }
              v249 = v248 - 1;
              if ( !v249 )
              {
                v207 = (__int16)*a2;
                goto LABEL_405;
              }
              v250 = v249 - 1;
              if ( !v250 )
              {
                v123 = (__int16)*a2;
                goto LABEL_236;
              }
              v251 = v250 - 1;
              if ( !v251 )
              {
                v206 = (__int16)*a2;
                goto LABEL_402;
              }
              if ( v251 != 1 )
                goto LABEL_384;
              v118 = (__int16)*a2;
LABEL_226:
              v117 = _mm_cvtsi32_si128(v118);
LABEL_227:
              LODWORD(v119) = _mm_cvtepi32_ps(v117).m128_u32[0];
              goto LABEL_229;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                if ( a5 == 2 )
                {
                  v283 = v13 - 2;
                  if ( v283 )
                  {
                    v284 = v283 - 1;
                    if ( v284 )
                    {
                      v285 = v284 - 1;
                      if ( v285 )
                      {
                        v286 = v285 - 1;
                        if ( v286 )
                        {
                          if ( v286 != 1 )
                            goto LABEL_384;
                          v164 = *(unsigned __int8 *)a2;
LABEL_352:
                          v165 = *(char *)Str2;
                          goto LABEL_353;
                        }
                        v166 = *(unsigned __int8 *)a2;
LABEL_356:
                        v167 = *(char *)Str2;
                        goto LABEL_358;
                      }
                      v168 = *(unsigned __int8 *)a2;
LABEL_361:
                      v169 = *(char *)Str2;
                      goto LABEL_363;
                    }
                    v170 = *(unsigned __int8 *)a2;
LABEL_366:
                    v171 = *(char *)Str2;
                    goto LABEL_368;
                  }
                  v172 = *(unsigned __int8 *)a2;
LABEL_371:
                  v173 = *(char *)Str2;
                  goto LABEL_373;
                }
                if ( a5 != 3 )
                {
                  if ( a5 == 4 )
                  {
                    v271 = v13 - 2;
                    if ( !v271 )
                    {
                      v80 = (unsigned __int16)*(unsigned __int8 *)a2 == *Str2;
                      goto LABEL_154;
                    }
                    v272 = v271 - 1;
                    if ( v272 )
                    {
                      v273 = v272 - 1;
                      if ( v273 )
                      {
                        v274 = v273 - 1;
                        if ( v274 )
                        {
                          if ( v274 != 1 )
                            goto LABEL_384;
                          v275 = *(unsigned __int8 *)a2;
                          v69 = __OFSUB__(v275, *Str2);
                          v67 = v275 == (__int16)*Str2;
                          v68 = (__int16)(v275 - *Str2) < 0;
                          goto LABEL_134;
                        }
                        v276 = *(unsigned __int8 *)a2;
                        v71 = __OFSUB__(v276, *Str2);
                        v70 = (__int16)(v276 - *Str2) < 0;
LABEL_139:
                        v19 = v70 == v71;
                        goto LABEL_42;
                      }
                      v277 = *(unsigned __int8 *)a2;
                      v74 = __OFSUB__(v277, *Str2);
                      v73 = (__int16)(v277 - *Str2) < 0;
LABEL_144:
                      v19 = v73 ^ v74;
                      goto LABEL_42;
                    }
                    v278 = *(unsigned __int8 *)a2;
                    v78 = __OFSUB__(v278, *Str2);
                    v76 = v278 == (__int16)*Str2;
                    v77 = (__int16)(v278 - *Str2) < 0;
LABEL_149:
                    v19 = !(v77 ^ v78 | v76);
                    goto LABEL_42;
                  }
                  if ( a5 != 5 )
                  {
                    if ( a5 == 6 )
                    {
                      v260 = v13 - 2;
                      if ( v260 )
                      {
                        v261 = v260 - 1;
                        if ( !v261 )
                        {
                          v155 = *(unsigned __int8 *)a2;
                          goto LABEL_302;
                        }
                        v262 = v261 - 1;
                        if ( !v262 )
                        {
                          v154 = *(unsigned __int8 *)a2;
                          goto LABEL_299;
                        }
                        v263 = v262 - 1;
                        if ( !v263 )
                        {
                          v153 = *(unsigned __int8 *)a2;
                          goto LABEL_296;
                        }
                        if ( v263 != 1 )
                          goto LABEL_384;
                        v152 = *(unsigned __int8 *)a2;
                        goto LABEL_293;
                      }
                    }
                    else
                    {
                      if ( a5 != 7 )
                        goto LABEL_384;
                      v256 = v13 - 2;
                      if ( v256 )
                      {
                        v257 = v256 - 1;
                        if ( !v257 )
                        {
                          v146 = *(unsigned __int8 *)a2;
                          goto LABEL_283;
                        }
                        v258 = v257 - 1;
                        if ( !v258 )
                        {
                          v145 = *(unsigned __int8 *)a2;
                          goto LABEL_280;
                        }
                        v259 = v258 - 1;
                        if ( !v259 )
                        {
                          v144 = *(unsigned __int8 *)a2;
                          goto LABEL_277;
                        }
                        if ( v259 != 1 )
                          goto LABEL_384;
                        v143 = *(unsigned __int8 *)a2;
                        goto LABEL_274;
                      }
                    }
                    v147 = *(unsigned __int8 *)a2;
                    goto LABEL_286;
                  }
                  v264 = v13 - 2;
                  if ( v264 )
                  {
                    v265 = v264 - 1;
                    if ( v265 )
                    {
                      v266 = v265 - 1;
                      if ( !v266 )
                      {
                        v26 = *(unsigned __int8 *)a2 < *Str2;
                        goto LABEL_63;
                      }
                      v267 = v266 - 1;
                      if ( v267 )
                      {
                        if ( v267 != 1 )
                          goto LABEL_384;
                        v268 = *(unsigned __int8 *)a2;
                        v34 = v268 < *Str2;
                        v35 = v268 == *Str2;
                        goto LABEL_86;
                      }
                      v36 = *(unsigned __int8 *)a2 < *Str2;
                      goto LABEL_89;
                    }
                    v269 = *(unsigned __int8 *)a2;
                    v37 = v269 < *Str2;
                    v38 = v269 == *Str2;
                    goto LABEL_92;
                  }
                  v270 = *(unsigned __int8 *)a2;
                  goto LABEL_575;
                }
                v279 = v13 - 2;
                if ( v279 )
                {
                  v280 = v279 - 1;
                  if ( v280 )
                  {
                    v281 = v280 - 1;
                    if ( !v281 )
                    {
                      v26 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                      goto LABEL_63;
                    }
                    v282 = v281 - 1;
                    if ( v282 )
                    {
                      if ( v282 != 1 )
                        goto LABEL_384;
                      v34 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                      v35 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                      goto LABEL_86;
                    }
                    v36 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    goto LABEL_89;
                  }
                  v37 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                  v38 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  goto LABEL_92;
                }
                goto LABEL_45;
              }
              goto LABEL_610;
            }
            if ( a5 == 9 )
            {
              v299 = v13 - 2;
              if ( v299 )
              {
                v300 = v299 - 1;
                if ( v300 )
                {
                  v301 = v300 - 1;
                  if ( v301 )
                  {
                    v302 = v301 - 1;
                    if ( v302 )
                    {
                      if ( v302 != 1 )
                        goto LABEL_384;
                      v134 = *(unsigned __int8 *)a2;
                      goto LABEL_818;
                    }
                    v135 = *(unsigned __int8 *)a2;
                    goto LABEL_820;
                  }
                  v136 = *(unsigned __int8 *)a2;
                  goto LABEL_822;
                }
                v137 = *(unsigned __int8 *)a2;
                goto LABEL_824;
              }
LABEL_642:
              v138 = *(unsigned __int8 *)a2;
              goto LABEL_733;
            }
            if ( a5 == 10 )
            {
              v295 = v13 - 2;
              if ( !v295 )
              {
                v128 = *(unsigned __int8 *)a2;
                goto LABEL_246;
              }
              v296 = v295 - 1;
              if ( !v296 )
              {
                v207 = *(unsigned __int8 *)a2;
                goto LABEL_405;
              }
              v297 = v296 - 1;
              if ( !v297 )
              {
                v123 = *(unsigned __int8 *)a2;
                goto LABEL_236;
              }
              v298 = v297 - 1;
              if ( !v298 )
              {
                v206 = *(unsigned __int8 *)a2;
                goto LABEL_402;
              }
              if ( v298 != 1 )
                goto LABEL_384;
              v118 = *(unsigned __int8 *)a2;
              goto LABEL_226;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_610:
                v291 = v13 - 2;
                if ( v291 )
                {
                  v292 = v291 - 1;
                  if ( v292 )
                  {
                    v293 = v292 - 1;
                    if ( v293 )
                    {
                      v294 = v293 - 1;
                      if ( v294 )
                      {
                        if ( v294 != 1 )
                          goto LABEL_384;
                        v91 = *(unsigned __int8 *)a2;
                        goto LABEL_172;
                      }
                      v92 = *(unsigned __int8 *)a2;
                      goto LABEL_176;
                    }
                    v93 = *(unsigned __int8 *)a2;
                    goto LABEL_181;
                  }
                  v94 = *(unsigned __int8 *)a2;
                  goto LABEL_186;
                }
                goto LABEL_642;
              }
              if ( a5 != 15 )
                goto LABEL_384;
            }
            v287 = v13 - 2;
            if ( !v287 )
            {
              v110 = *(unsigned __int8 *)a2;
              goto LABEL_214;
            }
            v288 = v287 - 1;
            if ( !v288 )
            {
              v107 = *(unsigned __int8 *)a2;
              goto LABEL_208;
            }
            v289 = v288 - 1;
            if ( !v289 )
            {
              v102 = *(unsigned __int8 *)a2;
              goto LABEL_202;
            }
            v290 = v289 - 1;
            if ( !v290 )
            {
              v99 = *(unsigned __int8 *)a2;
              goto LABEL_196;
            }
            if ( v290 != 1 )
              goto LABEL_384;
            v95 = *(unsigned __int8 *)a2;
            goto LABEL_190;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 != 2 )
              {
                if ( a5 == 3 )
                {
                  v319 = v13 - 2;
                  if ( !v319 )
                  {
                    v172 = *(char *)a2;
                    v173 = *(unsigned __int8 *)Str2;
                    goto LABEL_373;
                  }
                  v320 = v319 - 1;
                  if ( !v320 )
                  {
                    v170 = *(char *)a2;
                    v171 = *(unsigned __int8 *)Str2;
                    goto LABEL_368;
                  }
                  v321 = v320 - 1;
                  if ( !v321 )
                  {
                    v168 = *(char *)a2;
                    v169 = *(unsigned __int8 *)Str2;
                    goto LABEL_363;
                  }
                  v322 = v321 - 1;
                  if ( !v322 )
                  {
                    v166 = *(char *)a2;
                    v167 = *(unsigned __int8 *)Str2;
                    goto LABEL_358;
                  }
                  if ( v322 != 1 )
                    goto LABEL_384;
                  v164 = *(char *)a2;
                  v165 = *(unsigned __int8 *)Str2;
LABEL_353:
                  v69 = __OFSUB__(v164, v165);
                  v67 = v164 == v165;
                  v68 = v164 - v165 < 0;
                  goto LABEL_134;
                }
                if ( a5 != 4 )
                {
                  if ( a5 != 5 )
                  {
                    if ( a5 == 6 )
                    {
                      v307 = v13 - 2;
                      if ( v307 )
                      {
                        v308 = v307 - 1;
                        if ( !v308 )
                        {
                          v155 = *(char *)a2;
                          goto LABEL_302;
                        }
                        v309 = v308 - 1;
                        if ( !v309 )
                        {
                          v154 = *(char *)a2;
                          goto LABEL_299;
                        }
                        v310 = v309 - 1;
                        if ( !v310 )
                        {
                          v153 = *(char *)a2;
                          goto LABEL_296;
                        }
                        if ( v310 != 1 )
                          goto LABEL_384;
                        v152 = *(char *)a2;
                        goto LABEL_293;
                      }
                    }
                    else
                    {
                      if ( a5 != 7 )
                        goto LABEL_384;
                      v303 = v13 - 2;
                      if ( v303 )
                      {
                        v304 = v303 - 1;
                        if ( !v304 )
                        {
                          v146 = *(char *)a2;
                          goto LABEL_283;
                        }
                        v305 = v304 - 1;
                        if ( !v305 )
                        {
                          v145 = *(char *)a2;
                          goto LABEL_280;
                        }
                        v306 = v305 - 1;
                        if ( !v306 )
                        {
                          v144 = *(char *)a2;
                          goto LABEL_277;
                        }
                        if ( v306 != 1 )
                          goto LABEL_384;
                        v143 = *(char *)a2;
LABEL_274:
                        v34 = v143 < *(_DWORD *)Str2;
                        v35 = v143 == *(_DWORD *)Str2;
LABEL_86:
                        v21 = v34 || v35;
                        goto LABEL_47;
                      }
                    }
                    v147 = *(char *)a2;
                    goto LABEL_286;
                  }
                  v311 = v13 - 2;
                  if ( v311 )
                  {
                    v312 = v311 - 1;
                    if ( v312 )
                    {
                      v313 = v312 - 1;
                      if ( v313 )
                      {
                        v314 = v313 - 1;
                        if ( v314 )
                        {
                          if ( v314 != 1 )
                            goto LABEL_384;
                          v164 = *(char *)a2;
LABEL_449:
                          v165 = *Str2;
                          goto LABEL_353;
                        }
                        v166 = *(char *)a2;
LABEL_452:
                        v167 = *Str2;
                        goto LABEL_358;
                      }
                      v168 = *(char *)a2;
LABEL_455:
                      v169 = *Str2;
                      goto LABEL_363;
                    }
                    v170 = *(char *)a2;
LABEL_458:
                    v171 = *Str2;
                    goto LABEL_368;
                  }
                  v172 = *(char *)a2;
LABEL_461:
                  v173 = *Str2;
                  goto LABEL_373;
                }
                v315 = v13 - 2;
                if ( v315 )
                {
                  v316 = v315 - 1;
                  if ( !v316 )
                  {
                    v45 = __OFSUB__(*(char *)a2, *Str2);
                    v43 = *(char *)a2 == (__int16)*Str2;
                    v44 = (__int16)(*(char *)a2 - *Str2) < 0;
                    goto LABEL_188;
                  }
                  v317 = v316 - 1;
                  if ( !v317 )
                  {
                    v42 = __OFSUB__(*(char *)a2, *Str2);
                    v41 = (__int16)(*(char *)a2 - *Str2) < 0;
                    goto LABEL_183;
                  }
                  v318 = v317 - 1;
                  if ( v318 )
                  {
                    if ( v318 != 1 )
                      goto LABEL_384;
                    v33 = __OFSUB__(*(char *)a2, *Str2);
                    v31 = *(char *)a2 == (__int16)*Str2;
                    v32 = (__int16)(*(char *)a2 - *Str2) < 0;
                    goto LABEL_173;
                  }
                  v40 = __OFSUB__(*(char *)a2, *Str2);
                  v39 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_178;
                }
                v270 = *(char *)a2;
LABEL_575:
                v20 = v270 == (__int16)*Str2;
                goto LABEL_46;
              }
              v323 = v13 - 2;
              if ( v323 )
              {
                v324 = v323 - 1;
                if ( !v324 )
                {
                  v45 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v43 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  v44 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_188;
                }
                v325 = v324 - 1;
                if ( !v325 )
                {
                  v42 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v41 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_183;
                }
                v326 = v325 - 1;
                if ( v326 )
                {
                  if ( v326 != 1 )
                    goto LABEL_384;
                  v33 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                  v31 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                  v32 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                  goto LABEL_173;
                }
                v40 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v39 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_178;
              }
LABEL_45:
              v20 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_46:
              v21 = v20;
LABEL_47:
              *a8 = v21;
              goto LABEL_1347;
            }
            goto LABEL_701;
          }
          if ( a5 == 9 )
          {
            v339 = v13 - 2;
            if ( v339 )
            {
              v340 = v339 - 1;
              if ( v340 )
              {
                v341 = v340 - 1;
                if ( v341 )
                {
                  v342 = v341 - 1;
                  if ( v342 )
                  {
                    if ( v342 != 1 )
                      goto LABEL_384;
                    v134 = *(char *)a2;
                    goto LABEL_818;
                  }
                  v135 = *(char *)a2;
LABEL_820:
                  v36 = v135 < *(_QWORD *)Str2;
                  goto LABEL_89;
                }
                v136 = *(char *)a2;
LABEL_822:
                v26 = v136 < *(_QWORD *)Str2;
                goto LABEL_63;
              }
              v137 = *(char *)a2;
LABEL_824:
              v37 = v137 < *(_QWORD *)Str2;
              v38 = v137 == *(_QWORD *)Str2;
              goto LABEL_92;
            }
LABEL_731:
            v138 = *(char *)a2;
            goto LABEL_733;
          }
          if ( a5 == 10 )
          {
            v335 = v13 - 2;
            if ( !v335 )
            {
              v128 = *(char *)a2;
              goto LABEL_246;
            }
            v336 = v335 - 1;
            if ( !v336 )
            {
              v207 = *(char *)a2;
              goto LABEL_405;
            }
            v337 = v336 - 1;
            if ( !v337 )
            {
              v123 = *(char *)a2;
              goto LABEL_236;
            }
            v338 = v337 - 1;
            if ( !v338 )
            {
              v206 = *(char *)a2;
              goto LABEL_402;
            }
            if ( v338 != 1 )
              goto LABEL_384;
            v118 = *(char *)a2;
            goto LABEL_226;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_701:
              v331 = v13 - 2;
              if ( v331 )
              {
                v332 = v331 - 1;
                if ( v332 )
                {
                  v333 = v332 - 1;
                  if ( v333 )
                  {
                    v334 = v333 - 1;
                    if ( v334 )
                    {
                      if ( v334 != 1 )
                        goto LABEL_384;
                      v91 = *(char *)a2;
                      goto LABEL_172;
                    }
                    v92 = *(char *)a2;
                    goto LABEL_176;
                  }
                  v93 = *(char *)a2;
                  goto LABEL_181;
                }
                v94 = *(char *)a2;
                goto LABEL_186;
              }
              goto LABEL_731;
            }
            if ( a5 != 15 )
              goto LABEL_384;
          }
          v327 = v13 - 2;
          if ( !v327 )
          {
            v110 = *(char *)a2;
            goto LABEL_214;
          }
          v328 = v327 - 1;
          if ( !v328 )
          {
            v107 = *(char *)a2;
            goto LABEL_208;
          }
          v329 = v328 - 1;
          if ( !v329 )
          {
            v102 = *(char *)a2;
            goto LABEL_202;
          }
          v330 = v329 - 1;
          if ( !v330 )
          {
            v99 = *(char *)a2;
            goto LABEL_196;
          }
          if ( v330 != 1 )
            goto LABEL_384;
          v95 = *(char *)a2;
          goto LABEL_190;
        }
        if ( a5 != 1 || v13 != 2 )
          goto LABEL_384;
        if ( a2 )
          goto LABEL_13;
        v18 = Str2 == 0LL;
LABEL_34:
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
              goto LABEL_835;
            }
LABEL_1295:
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
                      v402 = *(char *)Str2;
                      goto LABEL_864;
                    }
                    v420 = v419 - 1;
                    if ( !v420 )
                    {
                      v410 = *(char *)Str2;
                      goto LABEL_910;
                    }
                    v421 = v420 - 1;
                    if ( !v421 )
                    {
                      v409 = *(char *)Str2;
                      goto LABEL_907;
                    }
                    v422 = v421 - 1;
                    if ( !v422 )
                    {
                      v408 = *(char *)Str2;
                      goto LABEL_904;
                    }
                    if ( v422 != 1 )
                      goto LABEL_384;
                    v407 = *(char *)Str2;
                    break;
                  case 3u:
                    v415 = v13 - 2;
                    if ( !v415 )
                    {
                      v402 = *(unsigned __int8 *)Str2;
                      goto LABEL_864;
                    }
                    v416 = v415 - 1;
                    if ( !v416 )
                    {
                      v410 = *(unsigned __int8 *)Str2;
                      goto LABEL_910;
                    }
                    v417 = v416 - 1;
                    if ( !v417 )
                    {
                      v409 = *(unsigned __int8 *)Str2;
                      goto LABEL_907;
                    }
                    v418 = v417 - 1;
                    if ( !v418 )
                    {
                      v408 = *(unsigned __int8 *)Str2;
                      goto LABEL_904;
                    }
                    if ( v418 != 1 )
                      goto LABEL_384;
                    v407 = *(unsigned __int8 *)Str2;
                    break;
                  case 4u:
                    v411 = v13 - 2;
                    if ( !v411 )
                    {
                      v402 = (__int16)*Str2;
                      goto LABEL_864;
                    }
                    v412 = v411 - 1;
                    if ( !v412 )
                    {
                      v410 = (__int16)*Str2;
                      goto LABEL_910;
                    }
                    v413 = v412 - 1;
                    if ( !v413 )
                    {
                      v409 = (__int16)*Str2;
                      goto LABEL_907;
                    }
                    v414 = v413 - 1;
                    if ( !v414 )
                    {
                      v408 = (__int16)*Str2;
                      goto LABEL_904;
                    }
                    if ( v414 != 1 )
                      goto LABEL_384;
                    v407 = (__int16)*Str2;
                    break;
                  case 5u:
                    v403 = v13 - 2;
                    if ( v403 )
                    {
                      v404 = v403 - 1;
                      if ( v404 )
                      {
                        v405 = v404 - 1;
                        if ( v405 )
                        {
                          v406 = v405 - 1;
                          if ( v406 )
                          {
                            if ( v406 != 1 )
                              goto LABEL_384;
                            v407 = *Str2;
                            break;
                          }
                          v408 = *Str2;
LABEL_904:
                          v398 = _mm_cvtsi32_si128(v408);
LABEL_905:
                          *(_QWORD *)&v389 = *(_OWORD *)&_mm_cvtepi32_pd(v398);
                          goto LABEL_944;
                        }
                        v409 = *Str2;
LABEL_907:
                        v399 = _mm_cvtsi32_si128(v409);
LABEL_908:
                        *(_QWORD *)&v390 = *(_OWORD *)&_mm_cvtepi32_pd(v399);
                        goto LABEL_946;
                      }
                      v410 = *Str2;
LABEL_910:
                      v400 = _mm_cvtsi32_si128(v410);
LABEL_911:
                      *(_QWORD *)&v391 = *(_OWORD *)&_mm_cvtepi32_pd(v400);
                      goto LABEL_948;
                    }
                    v402 = *Str2;
LABEL_864:
                    v401 = _mm_cvtsi32_si128(v402);
LABEL_865:
                    *(_QWORD *)&v392 = *(_OWORD *)&_mm_cvtepi32_pd(v401);
                    goto LABEL_852;
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
                              goto LABEL_384;
                            v397 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                            goto LABEL_902;
                          }
                          v398 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_905;
                        }
                        v399 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                        goto LABEL_908;
                      }
                      v400 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                      goto LABEL_911;
                    }
                    v401 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                    goto LABEL_865;
                  case 7u:
                    v384 = v13 - 2;
                    if ( !v384 )
                    {
                      v392 = (double)*(int *)Str2;
LABEL_852:
                      v18 = *(double *)a2 == v392;
                      goto LABEL_34;
                    }
                    v385 = v384 - 1;
                    if ( !v385 )
                    {
                      v391 = (double)*(int *)Str2;
LABEL_948:
                      v186 = *(double *)a2 < v391;
                      v187 = *(double *)a2 == v391;
                      goto LABEL_342;
                    }
                    v386 = v385 - 1;
                    if ( !v386 )
                    {
                      v390 = (double)*(int *)Str2;
LABEL_946:
                      v186 = v390 < *(double *)a2;
                      v187 = v390 == *(double *)a2;
                      goto LABEL_342;
                    }
                    v387 = v386 - 1;
                    if ( v387 )
                    {
                      if ( v387 != 1 )
                        goto LABEL_384;
                      v388 = (double)*(int *)Str2;
                      goto LABEL_942;
                    }
                    v389 = (double)*(int *)Str2;
LABEL_944:
                    v181 = *(double *)a2 < v389;
                    goto LABEL_334;
                  default:
                    goto LABEL_384;
                }
                v397 = _mm_cvtsi32_si128(v407);
LABEL_902:
                *(_QWORD *)&v388 = *(_OWORD *)&_mm_cvtepi32_pd(v397);
LABEL_942:
                v181 = v388 < *(double *)a2;
                goto LABEL_334;
              }
LABEL_924:
              v427 = v13 - 2;
              if ( !v427 )
              {
                v392 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_852;
              }
              v428 = v427 - 1;
              if ( !v428 )
              {
                v391 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_948;
              }
              v429 = v428 - 1;
              if ( !v429 )
              {
                v390 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_946;
              }
              v430 = v429 - 1;
              if ( v430 )
              {
                if ( v430 != 1 )
                  goto LABEL_384;
                v388 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_942;
              }
              v389 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_944;
            }
            if ( a5 == 9 )
            {
              v435 = v13 - 2;
              if ( !v435 )
              {
                v392 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v392 = v392 + 1.844674407370955e19;
                goto LABEL_852;
              }
              v436 = v435 - 1;
              if ( !v436 )
              {
                v391 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v391 = v391 + 1.844674407370955e19;
                goto LABEL_948;
              }
              v437 = v436 - 1;
              if ( !v437 )
              {
                v390 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v390 = v390 + 1.844674407370955e19;
                goto LABEL_946;
              }
              v438 = v437 - 1;
              if ( v438 )
              {
                if ( v438 != 1 )
                  goto LABEL_384;
                v388 = (double)(int)*(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                  v388 = v388 + 1.844674407370955e19;
                goto LABEL_942;
              }
              v389 = (double)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v389 = v389 + 1.844674407370955e19;
              goto LABEL_944;
            }
            if ( a5 == 10 )
            {
              v431 = v13 - 2;
              if ( !v431 )
              {
                v392 = *(float *)Str2;
                goto LABEL_852;
              }
              v432 = v431 - 1;
              if ( !v432 )
              {
                v391 = *(float *)Str2;
                goto LABEL_948;
              }
              v433 = v432 - 1;
              if ( !v433 )
              {
                v390 = *(float *)Str2;
                goto LABEL_946;
              }
              v434 = v433 - 1;
              if ( v434 )
              {
                if ( v434 != 1 )
                  goto LABEL_384;
                v388 = *(float *)Str2;
                goto LABEL_942;
              }
              v389 = *(float *)Str2;
              goto LABEL_944;
            }
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
                goto LABEL_924;
              if ( a5 != 15 )
                goto LABEL_384;
            }
            v423 = v13 - 2;
            if ( v423 )
            {
              v424 = v423 - 1;
              if ( v424 )
              {
                v425 = v424 - 1;
                if ( v425 )
                {
                  v426 = v425 - 1;
                  if ( v426 )
                  {
                    if ( v426 != 1 )
                      goto LABEL_384;
                    v97 = *(double *)Str2 < *(double *)a2;
                    goto LABEL_233;
                  }
                  v100 = *(double *)a2;
                  goto LABEL_199;
                }
                v104 = *(double *)Str2 < *(double *)a2;
                v105 = *(double *)Str2 == *(double *)a2;
LABEL_243:
                v17 = !v104 && !v105;
                goto LABEL_30;
              }
              v108 = *(double *)a2;
              goto LABEL_211;
            }
            v111 = *(double *)a2;
            goto LABEL_217;
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
                    v456 = *(char *)Str2;
                    goto LABEL_993;
                  }
                  v474 = v473 - 1;
                  if ( !v474 )
                  {
                    v464 = *(char *)Str2;
                    goto LABEL_1039;
                  }
                  v475 = v474 - 1;
                  if ( !v475 )
                  {
                    v463 = *(char *)Str2;
                    goto LABEL_1036;
                  }
                  v476 = v475 - 1;
                  if ( !v476 )
                  {
                    v462 = *(char *)Str2;
                    goto LABEL_1033;
                  }
                  if ( v476 != 1 )
                    goto LABEL_384;
                  v461 = *(char *)Str2;
                  break;
                case 3u:
                  v469 = v13 - 2;
                  if ( !v469 )
                  {
                    v456 = *(unsigned __int8 *)Str2;
                    goto LABEL_993;
                  }
                  v470 = v469 - 1;
                  if ( !v470 )
                  {
                    v464 = *(unsigned __int8 *)Str2;
                    goto LABEL_1039;
                  }
                  v471 = v470 - 1;
                  if ( !v471 )
                  {
                    v463 = *(unsigned __int8 *)Str2;
                    goto LABEL_1036;
                  }
                  v472 = v471 - 1;
                  if ( !v472 )
                  {
                    v462 = *(unsigned __int8 *)Str2;
                    goto LABEL_1033;
                  }
                  if ( v472 != 1 )
                    goto LABEL_384;
                  v461 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v465 = v13 - 2;
                  if ( !v465 )
                  {
                    v456 = (__int16)*Str2;
                    goto LABEL_993;
                  }
                  v466 = v465 - 1;
                  if ( !v466 )
                  {
                    v464 = (__int16)*Str2;
                    goto LABEL_1039;
                  }
                  v467 = v466 - 1;
                  if ( !v467 )
                  {
                    v463 = (__int16)*Str2;
                    goto LABEL_1036;
                  }
                  v468 = v467 - 1;
                  if ( !v468 )
                  {
                    v462 = (__int16)*Str2;
                    goto LABEL_1033;
                  }
                  if ( v468 != 1 )
                    goto LABEL_384;
                  v461 = (__int16)*Str2;
                  break;
                case 5u:
                  v457 = v13 - 2;
                  if ( v457 )
                  {
                    v458 = v457 - 1;
                    if ( v458 )
                    {
                      v459 = v458 - 1;
                      if ( v459 )
                      {
                        v460 = v459 - 1;
                        if ( v460 )
                        {
                          if ( v460 != 1 )
                            goto LABEL_384;
                          v461 = *Str2;
                          break;
                        }
                        v462 = *Str2;
LABEL_1033:
                        v452 = _mm_cvtsi32_si128(v462);
                        goto LABEL_1034;
                      }
                      v463 = *Str2;
LABEL_1036:
                      v453 = _mm_cvtsi32_si128(v463);
                      goto LABEL_1037;
                    }
                    v464 = *Str2;
LABEL_1039:
                    v454 = _mm_cvtsi32_si128(v464);
                    goto LABEL_1040;
                  }
                  v456 = *Str2;
LABEL_993:
                  v455 = _mm_cvtsi32_si128(v456);
                  goto LABEL_994;
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
                            goto LABEL_384;
                          v451 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_1031;
                        }
                        v452 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1034:
                        LODWORD(v444) = _mm_cvtepi32_ps(v452).m128_u32[0];
                        goto LABEL_1061;
                      }
                      v453 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1037:
                      LODWORD(v445) = _mm_cvtepi32_ps(v453).m128_u32[0];
                      goto LABEL_1063;
                    }
                    v454 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1040:
                    LODWORD(v446) = _mm_cvtepi32_ps(v454).m128_u32[0];
                    goto LABEL_1065;
                  }
                  v455 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_994:
                  LODWORD(v112) = _mm_cvtepi32_ps(v455).m128_u32[0];
                  goto LABEL_219;
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
                            goto LABEL_384;
                          v443 = (float)*(int *)Str2;
                          goto LABEL_1059;
                        }
                        v444 = (float)*(int *)Str2;
LABEL_1061:
                        v181 = *(float *)a2 < v444;
                        goto LABEL_334;
                      }
                      v445 = (float)*(int *)Str2;
LABEL_1063:
                      v186 = v445 < *(float *)a2;
                      v187 = v445 == *(float *)a2;
                      goto LABEL_342;
                    }
                    v446 = (float)*(int *)Str2;
LABEL_1065:
                    v186 = *(float *)a2 < v446;
                    v187 = *(float *)a2 == v446;
                    goto LABEL_342;
                  }
                  v112 = (float)*(int *)Str2;
LABEL_219:
                  v18 = *(float *)a2 == v112;
                  goto LABEL_34;
                default:
                  goto LABEL_384;
              }
              v451 = _mm_cvtsi32_si128(v461);
LABEL_1031:
              LODWORD(v443) = _mm_cvtepi32_ps(v451).m128_u32[0];
              goto LABEL_1059;
            }
            goto LABEL_1053;
          }
          if ( a5 == 9 )
          {
            v489 = v13 - 2;
            if ( !v489 )
            {
              v112 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v112 = v112 + 1.8446744e19;
              goto LABEL_219;
            }
            v490 = v489 - 1;
            if ( !v490 )
            {
              v446 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v446 = v446 + 1.8446744e19;
              goto LABEL_1065;
            }
            v491 = v490 - 1;
            if ( !v491 )
            {
              v445 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v445 = v445 + 1.8446744e19;
              goto LABEL_1063;
            }
            v492 = v491 - 1;
            if ( !v492 )
            {
              v444 = (float)(int)*(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
                v444 = v444 + 1.8446744e19;
              goto LABEL_1061;
            }
            if ( v492 != 1 )
              goto LABEL_384;
            v443 = (float)(int)*(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
              v443 = v443 + 1.8446744e19;
            goto LABEL_1059;
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
                  v104 = *(float *)Str2 < *(float *)a2;
                  v105 = *(float *)Str2 == *(float *)a2;
                  goto LABEL_243;
                }
                v488 = v487 - 1;
                if ( v488 )
                {
                  if ( v488 != 1 )
                    goto LABEL_384;
                  v97 = *(float *)Str2 < *(float *)a2;
                  goto LABEL_233;
                }
                v121 = *(float *)a2;
                goto LABEL_232;
              }
              v126 = *(float *)a2;
              goto LABEL_242;
            }
            v129 = *(float *)a2;
            goto LABEL_249;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_1053:
              v481 = v13 - 2;
              if ( !v481 )
              {
                v112 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_219;
              }
              v482 = v481 - 1;
              if ( !v482 )
              {
                v446 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1065;
              }
              v483 = v482 - 1;
              if ( !v483 )
              {
                v445 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1063;
              }
              v484 = v483 - 1;
              if ( !v484 )
              {
                v444 = (float)(int)*(_QWORD *)Str2;
                goto LABEL_1061;
              }
              if ( v484 != 1 )
                goto LABEL_384;
              v443 = (float)(int)*(_QWORD *)Str2;
LABEL_1059:
              v181 = v443 < *(float *)a2;
              goto LABEL_334;
            }
            if ( a5 != 15 )
              goto LABEL_384;
          }
          v477 = v13 - 2;
          if ( !v477 )
          {
            v111 = *(float *)a2;
            goto LABEL_217;
          }
          v478 = v477 - 1;
          if ( !v478 )
          {
            v108 = *(float *)a2;
            goto LABEL_211;
          }
          v479 = v478 - 1;
          if ( !v479 )
          {
            v103 = *(float *)a2;
            goto LABEL_205;
          }
          v480 = v479 - 1;
          if ( !v480 )
          {
            v100 = *(float *)a2;
            goto LABEL_199;
          }
          if ( v480 != 1 )
            goto LABEL_384;
          v96 = *(float *)a2;
LABEL_193:
          v97 = *(double *)Str2 < v96;
LABEL_233:
          v17 = !v97;
          goto LABEL_30;
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
                        goto LABEL_384;
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
                                goto LABEL_384;
                              v497 = *(unsigned int *)Str2;
                              goto LABEL_329;
                            }
                            v182 = *(unsigned int *)Str2;
LABEL_333:
                            v181 = *(_QWORD *)a2 < v182;
                            goto LABEL_334;
                          }
                          v184 = *(unsigned int *)Str2;
LABEL_337:
                          v183 = *(_QWORD *)a2 < v184;
                          goto LABEL_338;
                        }
                        v188 = *(unsigned int *)Str2;
LABEL_341:
                        v186 = *(_QWORD *)a2 < v188;
                        v187 = *(_QWORD *)a2 == v188;
                        goto LABEL_342;
                      }
                      goto LABEL_1113;
                    }
                    v498 = v13 - 2;
                    if ( v498 )
                    {
                      v499 = v498 - 1;
                      if ( !v499 )
                      {
                        v188 = *(int *)Str2;
                        goto LABEL_341;
                      }
                      v500 = v499 - 1;
                      if ( !v500 )
                      {
                        v184 = *(int *)Str2;
                        goto LABEL_337;
                      }
                      v501 = v500 - 1;
                      if ( !v501 )
                      {
                        v182 = *(int *)Str2;
                        goto LABEL_333;
                      }
                      if ( v501 != 1 )
                        goto LABEL_384;
                      v497 = *(int *)Str2;
                      goto LABEL_329;
                    }
LABEL_1123:
                    v81 = *(int *)Str2;
                    goto LABEL_153;
                  }
                  v502 = v13 - 2;
                  if ( v502 )
                  {
                    v503 = v502 - 1;
                    if ( !v503 )
                    {
                      v188 = *Str2;
                      goto LABEL_341;
                    }
                    v504 = v503 - 1;
                    if ( !v504 )
                    {
                      v184 = *Str2;
                      goto LABEL_337;
                    }
                    v505 = v504 - 1;
                    if ( !v505 )
                    {
                      v182 = *Str2;
                      goto LABEL_333;
                    }
                    if ( v505 != 1 )
                      goto LABEL_384;
                    v497 = *Str2;
                    goto LABEL_329;
                  }
LABEL_1133:
                  v81 = *Str2;
                  goto LABEL_153;
                }
                v506 = v13 - 2;
                if ( v506 )
                {
                  v507 = v506 - 1;
                  if ( !v507 )
                  {
                    v188 = (__int16)*Str2;
                    goto LABEL_341;
                  }
                  v508 = v507 - 1;
                  if ( !v508 )
                  {
                    v184 = (__int16)*Str2;
                    goto LABEL_337;
                  }
                  v509 = v508 - 1;
                  if ( !v509 )
                  {
                    v182 = (__int16)*Str2;
                    goto LABEL_333;
                  }
                  if ( v509 != 1 )
                    goto LABEL_384;
                  v497 = (__int16)*Str2;
                  goto LABEL_329;
                }
LABEL_1143:
                v81 = (__int16)*Str2;
                goto LABEL_153;
              }
              v510 = v13 - 2;
              if ( v510 )
              {
                v511 = v510 - 1;
                if ( !v511 )
                {
                  v188 = *(unsigned __int8 *)Str2;
                  goto LABEL_341;
                }
                v512 = v511 - 1;
                if ( !v512 )
                {
                  v184 = *(unsigned __int8 *)Str2;
                  goto LABEL_337;
                }
                v513 = v512 - 1;
                if ( !v513 )
                {
                  v182 = *(unsigned __int8 *)Str2;
                  goto LABEL_333;
                }
                if ( v513 != 1 )
                  goto LABEL_384;
                v497 = *(unsigned __int8 *)Str2;
                goto LABEL_329;
              }
LABEL_1153:
              v81 = *(unsigned __int8 *)Str2;
              goto LABEL_153;
            }
            v514 = v13 - 2;
            if ( v514 )
            {
              v515 = v514 - 1;
              if ( !v515 )
              {
                v188 = *(char *)Str2;
                goto LABEL_341;
              }
              v516 = v515 - 1;
              if ( !v516 )
              {
                v184 = *(char *)Str2;
                goto LABEL_337;
              }
              v517 = v516 - 1;
              if ( !v517 )
              {
                v182 = *(char *)Str2;
                goto LABEL_333;
              }
              if ( v517 != 1 )
                goto LABEL_384;
              v497 = *(char *)Str2;
LABEL_329:
              v179 = *(_QWORD *)a2 < v497;
              v180 = *(_QWORD *)a2 == v497;
LABEL_330:
              v19 = v179 || v180;
              goto LABEL_42;
            }
LABEL_152:
            v81 = *(char *)Str2;
LABEL_153:
            v80 = *(_QWORD *)a2 == v81;
            goto LABEL_154;
          }
          goto LABEL_1172;
        }
        if ( a5 == 9 )
          goto LABEL_1172;
        if ( a5 != 10 )
        {
          if ( a5 == 11 )
          {
LABEL_1165:
            v518 = v13 - 2;
            if ( !v518 )
            {
              v111 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v111 = v111 + 1.844674407370955e19;
              goto LABEL_217;
            }
            v519 = v518 - 1;
            if ( !v519 )
            {
              v108 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v108 = v108 + 1.844674407370955e19;
              goto LABEL_211;
            }
            v520 = v519 - 1;
            if ( !v520 )
            {
              v103 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v103 = v103 + 1.844674407370955e19;
              goto LABEL_205;
            }
            v521 = v520 - 1;
            if ( !v521 )
            {
              v100 = (double)(int)*(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v100 = v100 + 1.844674407370955e19;
              goto LABEL_199;
            }
            if ( v521 != 1 )
              goto LABEL_384;
            v96 = (double)(int)*(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v96 = v96 + 1.844674407370955e19;
            goto LABEL_193;
          }
          if ( a5 != 14 )
          {
            if ( a5 != 15 )
              goto LABEL_384;
            goto LABEL_1165;
          }
LABEL_1172:
          v522 = v13 - 2;
          if ( v522 )
          {
            v523 = v522 - 1;
            if ( v523 )
            {
              v524 = v523 - 1;
              if ( !v524 )
              {
                v26 = *(_QWORD *)a2 < *(_QWORD *)Str2;
                goto LABEL_63;
              }
              v525 = v524 - 1;
              if ( v525 )
              {
                if ( v525 != 1 )
                  goto LABEL_384;
                v34 = *(_QWORD *)a2 < *(_QWORD *)Str2;
                v35 = *(_QWORD *)a2 == *(_QWORD *)Str2;
                goto LABEL_86;
              }
              v36 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              goto LABEL_89;
            }
            v37 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            v38 = *(_QWORD *)a2 == *(_QWORD *)Str2;
LABEL_92:
            v21 = !v37 && !v38;
            goto LABEL_47;
          }
          goto LABEL_1280;
        }
        v526 = v13 - 2;
        if ( !v526 )
        {
          v129 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v129 = v129 + 1.8446744e19;
          goto LABEL_249;
        }
        v527 = v526 - 1;
        if ( !v527 )
        {
          v126 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v126 = v126 + 1.8446744e19;
          goto LABEL_242;
        }
        v528 = v527 - 1;
        if ( !v528 )
        {
          v124 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v124 = v124 + 1.8446744e19;
          goto LABEL_239;
        }
        v529 = v528 - 1;
        if ( !v529 )
        {
          v121 = (float)(int)*(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v121 = v121 + 1.8446744e19;
          goto LABEL_232;
        }
        if ( v529 != 1 )
          goto LABEL_384;
        v119 = (float)(int)*(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v119 = v119 + 1.8446744e19;
LABEL_229:
        v97 = *(float *)Str2 < v119;
        goto LABEL_233;
      }
LABEL_1303:
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          if ( a5 == 2 )
          {
            v551 = v13 - 2;
            if ( !v551 )
              goto LABEL_152;
            v552 = v551 - 1;
            if ( !v552 )
            {
              v79 = *(char *)Str2;
              goto LABEL_148;
            }
            v553 = v552 - 1;
            if ( !v553 )
            {
              v75 = *(char *)Str2;
              goto LABEL_143;
            }
            v554 = v553 - 1;
            if ( !v554 )
            {
              v72 = *(char *)Str2;
              goto LABEL_138;
            }
            if ( v554 != 1 )
              goto LABEL_384;
            v534 = *(char *)Str2;
          }
          else if ( a5 == 3 )
          {
            v547 = v13 - 2;
            if ( !v547 )
              goto LABEL_1153;
            v548 = v547 - 1;
            if ( !v548 )
            {
              v79 = *(unsigned __int8 *)Str2;
              goto LABEL_148;
            }
            v549 = v548 - 1;
            if ( !v549 )
            {
              v75 = *(unsigned __int8 *)Str2;
              goto LABEL_143;
            }
            v550 = v549 - 1;
            if ( !v550 )
            {
              v72 = *(unsigned __int8 *)Str2;
              goto LABEL_138;
            }
            if ( v550 != 1 )
              goto LABEL_384;
            v534 = *(unsigned __int8 *)Str2;
          }
          else if ( a5 == 4 )
          {
            v543 = v13 - 2;
            if ( !v543 )
              goto LABEL_1143;
            v544 = v543 - 1;
            if ( !v544 )
            {
              v79 = (__int16)*Str2;
              goto LABEL_148;
            }
            v545 = v544 - 1;
            if ( !v545 )
            {
              v75 = (__int16)*Str2;
              goto LABEL_143;
            }
            v546 = v545 - 1;
            if ( !v546 )
            {
              v72 = (__int16)*Str2;
              goto LABEL_138;
            }
            if ( v546 != 1 )
              goto LABEL_384;
            v534 = (__int16)*Str2;
          }
          else
          {
            if ( a5 != 5 )
            {
              if ( a5 == 6 )
              {
                v535 = v13 - 2;
                if ( !v535 )
                  goto LABEL_1123;
                v536 = v535 - 1;
                if ( v536 )
                {
                  v537 = v536 - 1;
                  if ( v537 )
                  {
                    v538 = v537 - 1;
                    if ( v538 )
                    {
                      if ( v538 != 1 )
                        goto LABEL_384;
                      v534 = *(int *)Str2;
                      goto LABEL_133;
                    }
                    v72 = *(int *)Str2;
LABEL_138:
                    v71 = __OFSUB__(*(_QWORD *)a2, v72);
                    v70 = *(_QWORD *)a2 - v72 < 0;
                    goto LABEL_139;
                  }
                  v75 = *(int *)Str2;
                  goto LABEL_143;
                }
                v79 = *(int *)Str2;
              }
              else
              {
                if ( a5 != 7 )
                  goto LABEL_384;
                v530 = v13 - 2;
                if ( !v530 )
                {
LABEL_1113:
                  v81 = *(unsigned int *)Str2;
                  goto LABEL_153;
                }
                v531 = v530 - 1;
                if ( v531 )
                {
                  v532 = v531 - 1;
                  if ( v532 )
                  {
                    v533 = v532 - 1;
                    if ( v533 )
                    {
                      if ( v533 != 1 )
                        goto LABEL_384;
                      v534 = *(unsigned int *)Str2;
                      goto LABEL_133;
                    }
                    v72 = *(unsigned int *)Str2;
                    goto LABEL_138;
                  }
                  v75 = *(unsigned int *)Str2;
LABEL_143:
                  v74 = __OFSUB__(*(_QWORD *)a2, v75);
                  v73 = *(_QWORD *)a2 - v75 < 0;
                  goto LABEL_144;
                }
                v79 = *(unsigned int *)Str2;
              }
LABEL_148:
              v78 = __OFSUB__(*(_QWORD *)a2, v79);
              v76 = *(_QWORD *)a2 == v79;
              v77 = *(_QWORD *)a2 - v79 < 0;
              goto LABEL_149;
            }
            v539 = v13 - 2;
            if ( !v539 )
              goto LABEL_1133;
            v540 = v539 - 1;
            if ( !v540 )
            {
              v79 = *Str2;
              goto LABEL_148;
            }
            v541 = v540 - 1;
            if ( !v541 )
            {
              v75 = *Str2;
              goto LABEL_143;
            }
            v542 = v541 - 1;
            if ( !v542 )
            {
              v72 = *Str2;
              goto LABEL_138;
            }
            if ( v542 != 1 )
              goto LABEL_384;
            v534 = *Str2;
          }
LABEL_133:
          v69 = __OFSUB__(*(_QWORD *)a2, v534);
          v67 = *(_QWORD *)a2 == v534;
          v68 = *(_QWORD *)a2 - v534 < 0;
          goto LABEL_134;
        }
LABEL_1267:
        v559 = v13 - 2;
        if ( v559 )
        {
          v560 = v559 - 1;
          if ( !v560 )
          {
            v45 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v43 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            v44 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_188;
          }
          v561 = v560 - 1;
          if ( !v561 )
          {
            v42 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v41 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_183;
          }
          v562 = v561 - 1;
          if ( v562 )
          {
            if ( v562 != 1 )
              goto LABEL_384;
            v33 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v31 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            v32 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
            goto LABEL_173;
          }
          v40 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v39 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_178;
        }
LABEL_1280:
        v20 = *(_QWORD *)a2 == *(_QWORD *)Str2;
        goto LABEL_46;
      }
      if ( a5 == 9 )
        goto LABEL_1172;
      if ( a5 == 10 )
      {
        v568 = v13 - 2;
        if ( !v568 )
        {
          v129 = (float)(int)*(_QWORD *)a2;
          goto LABEL_249;
        }
        v569 = v568 - 1;
        if ( !v569 )
        {
          v126 = (float)(int)*(_QWORD *)a2;
          goto LABEL_242;
        }
        v570 = v569 - 1;
        if ( !v570 )
        {
          v124 = (float)(int)*(_QWORD *)a2;
          goto LABEL_239;
        }
        v571 = v570 - 1;
        if ( !v571 )
        {
          v121 = (float)(int)*(_QWORD *)a2;
          goto LABEL_232;
        }
        if ( v571 != 1 )
          goto LABEL_384;
        v119 = (float)(int)*(_QWORD *)a2;
        goto LABEL_229;
      }
      if ( a5 != 11 )
      {
        if ( a5 == 14 )
          goto LABEL_1267;
        if ( a5 != 15 )
          goto LABEL_384;
      }
      v555 = v13 - 2;
      if ( !v555 )
      {
        v111 = (double)(int)*(_QWORD *)a2;
        goto LABEL_217;
      }
      v556 = v555 - 1;
      if ( !v556 )
      {
        v108 = (double)(int)*(_QWORD *)a2;
        goto LABEL_211;
      }
      v557 = v556 - 1;
      if ( !v557 )
      {
        v103 = (double)(int)*(_QWORD *)a2;
        goto LABEL_205;
      }
      v558 = v557 - 1;
      if ( !v558 )
      {
        v100 = (double)(int)*(_QWORD *)a2;
        goto LABEL_199;
      }
      if ( v558 != 1 )
        goto LABEL_384;
      v96 = (double)(int)*(_QWORD *)a2;
      goto LABEL_193;
    }
    if ( a1 <= 0x14 )
    {
      if ( a1 >= 0x13 )
        goto LABEL_384;
      switch ( a1 )
      {
        case 0xEu:
          goto LABEL_1303;
        case 0xFu:
          goto LABEL_1295;
        case 0x10u:
          if ( a5 != 16 )
            goto LABEL_384;
          v563 = v13 - 2;
          if ( v563 )
          {
            v564 = v563 - 1;
            if ( v564 )
            {
              v565 = v564 - 1;
              if ( v565 )
              {
                v566 = v565 - 1;
                if ( v566 )
                {
                  if ( v566 != 1 )
                    goto LABEL_384;
                  v567 = CompareFileTimeType(a2, Str2) + 1;
                }
                else
                {
                  v567 = CompareFileTimeType(a2, Str2);
                }
                v17 = v567 <= 1;
                goto LABEL_30;
              }
              v16 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
            }
            else
            {
              v16 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
            }
LABEL_29:
            v17 = v16;
            goto LABEL_30;
          }
          v15 = CompareFileTimeType(a2, Str2);
LABEL_28:
          v16 = v15 == 0;
          goto LABEL_29;
        case 0x11u:
          if ( a5 != 17 || v13 != 2 )
            goto LABEL_384;
          goto LABEL_45;
      }
      if ( a5 != 18 )
        goto LABEL_384;
      if ( v13 == 2 )
        goto LABEL_24;
      if ( v13 - 9 > 2 )
        goto LABEL_384;
      v19 = SubstringMatch(a2, Str2);
LABEL_42:
      *a8 = v19;
      goto LABEL_1347;
    }
    if ( a1 != 21 )
    {
      switch ( a1 )
      {
        case 0x16u:
          v572 = a5 == 22;
          break;
        case 0x17u:
          v382 = a5 == 23;
LABEL_835:
          if ( !v382 )
            goto LABEL_384;
          goto LABEL_836;
        case 0x18u:
          v572 = a5 == 24;
          break;
        default:
          if ( a1 != 25 || a5 != 25 && a5 != 18 || v13 != 2 )
            goto LABEL_384;
LABEL_24:
          if ( v12 )
          {
            if ( !(_DWORD)v8 || (_DWORD)v8 != a7 )
            {
              *a8 = 0;
              goto LABEL_1347;
            }
            v15 = wcsicmp(a2, Str2);
            goto LABEL_28;
          }
LABEL_839:
          if ( (_DWORD)v8 != a7 )
            goto LABEL_13;
          v18 = memcmp(a2, Str2, v8) == 0;
          goto LABEL_34;
      }
      if ( !v572 || v13 != 2 )
        goto LABEL_384;
      goto LABEL_1331;
    }
    if ( a5 == 21 && v13 == 2 )
    {
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Str2 + 4) )
        goto LABEL_13;
      v573 = *(_QWORD *)a2 - *(_QWORD *)Str2;
      if ( *(_QWORD *)a2 == *(_QWORD *)Str2 )
        v573 = *((_QWORD *)a2 + 1) - *((_QWORD *)Str2 + 1);
      v18 = v573 == 0;
      goto LABEL_34;
    }
  }
LABEL_1347:
  if ( v11 )
  {
    LOBYTE(v9) = *a8 == 0;
    *a8 = v9;
  }
  return v10;
}
