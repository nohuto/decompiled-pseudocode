/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180040394
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180035EF0 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180036B40 (-MemoryFree@@YAXPEAX@Z.c)
 *     StringCchLengthW @ 0x180037FC0 (StringCchLengthW.c)
 *     RtlULongLongAdd @ 0x18004035C (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180040378 (RtlUIntAdd.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180042C58 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180042C7C (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180044D00 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004675A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(STRSAFE_PCNZWCH psz)
{
  char v2; // r14
  HLOCAL v3; // rax
  void *v4; // r15
  void *v5; // rsi
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  unsigned __int8 *v8; // r11
  void *v9; // r12
  int v10; // edi
  size_t v11; // rsi
  HANDLE v12; // rax
  void *v13; // rax
  void *v14; // r13
  unsigned int v15; // r15d
  int v16; // eax
  int v17; // r11d
  int v18; // eax
  int v19; // eax
  int v20; // r11d
  int v21; // eax
  int v22; // eax
  int v23; // r11d
  int v24; // eax
  int v25; // eax
  int v26; // r11d
  int v27; // eax
  size_t v28; // rdx
  int v29; // eax
  int v30; // r11d
  int v31; // eax
  int v32; // eax
  int v33; // r11d
  int v34; // eax
  int v35; // eax
  int v36; // r11d
  int v37; // eax
  unsigned int v38; // ebx
  HANDLE v39; // rax
  void *v40; // rax
  int v41; // edx
  _DWORD *v42; // r10
  _DWORD *v43; // rcx
  int v44; // ebx
  int *v45; // r10
  int v46; // eax
  unsigned __int64 v47; // r10
  unsigned int v48; // r11d
  _DWORD *v49; // r10
  void *v50; // rcx
  int v51; // ebx
  int *v52; // r10
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int64 v55; // r10
  unsigned int v56; // r11d
  __int64 v57; // rdx
  unsigned int *v58; // r10
  void *v59; // rcx
  __int64 v60; // r13
  int v61; // ebx
  int *v62; // r10
  int v63; // eax
  size_t v64; // rdx
  unsigned __int64 v65; // r10
  unsigned int v66; // r11d
  _DWORD *v67; // r10
  _QWORD *v68; // rax
  STRSAFE_PCNZWCH v69; // r15
  __int64 v70; // rbx
  int v71; // esi
  int *v72; // r10
  int v73; // eax
  __int64 v74; // rcx
  unsigned __int64 v75; // r10
  unsigned int v76; // r11d
  _DWORD *v77; // r10
  void *v78; // rcx
  int v79; // ebx
  int *v80; // r10
  int v81; // eax
  unsigned __int64 v82; // r10
  unsigned int v83; // r11d
  _DWORD *v84; // r10
  _DWORD *v85; // rcx
  int v86; // ebx
  int *v87; // r10
  int v88; // eax
  unsigned __int64 v89; // r10
  unsigned int v90; // r11d
  _DWORD *v91; // r10
  _DWORD *v92; // rcx
  int v93; // eax
  unsigned int v94; // ecx
  int v95; // r11d
  int v96; // eax
  unsigned int v97; // r11d
  int v98; // r10d
  int v99; // eax
  int v100; // eax
  int v101; // r10d
  int v102; // eax
  int v103; // r10d
  int v104; // eax
  int v105; // r10d
  int v106; // eax
  int v107; // r10d
  int v108; // eax
  unsigned __int8 *v109; // rbx
  unsigned int v110; // r15d
  size_t v111; // r13
  unsigned int v112; // r12d
  int v113; // edi
  unsigned int v114; // eax
  unsigned int v115; // ebx
  HANDLE v116; // rax
  char *v117; // rax
  char *v118; // rbx
  __int64 v119; // rdx
  void *v120; // rcx
  _QWORD *v121; // rsi
  unsigned __int64 v122; // rdi
  void *v123; // rax
  _BYTE *v124; // r13
  unsigned __int8 v125; // al
  unsigned __int64 i; // rcx
  unsigned __int8 *v127; // r11
  int v128; // ebx
  unsigned int v129; // edx
  _BYTE *v130; // r15
  int v131; // r8d
  unsigned __int64 v132; // r12
  int v133; // esi
  _BYTE *v134; // r13
  int v135; // r15d
  unsigned __int8 *v136; // rdi
  int v137; // r11d
  int v138; // r10d
  int v139; // ecx
  int v140; // r11d
  int v141; // r10d
  int v142; // ebx
  unsigned int v143; // r9d
  int v144; // ebx
  int v145; // r9d
  int v146; // ebx
  unsigned int v147; // r9d
  int v148; // ebx
  int v149; // r9d
  int v150; // ebx
  int v151; // r9d
  int v152; // ebx
  int v153; // r9d
  unsigned int v154; // ebx
  unsigned int v155; // r9d
  int v156; // ebx
  int v157; // r9d
  int v158; // ebx
  int v159; // r9d
  int v160; // ebx
  int v161; // r9d
  int v162; // ebx
  int v163; // r9d
  unsigned int v164; // ebx
  int v165; // r9d
  unsigned int v166; // edi
  HANDLE v167; // rax
  _DWORD *v168; // rax
  _DWORD *v169; // rbx
  HANDLE v170; // rax
  void *v171; // rax
  HANDLE v172; // rax
  _OWORD *v173; // rax
  HANDLE v174; // rax
  _QWORD *v175; // rax
  int v176; // edi
  void *v177; // rbx
  HANDLE v178; // rax
  const void **v179; // rsi
  int v180; // edi
  unsigned int v181; // eax
  unsigned int v182; // ebx
  HANDLE v183; // rax
  _DWORD *v184; // rax
  void *v185; // rbx
  int v186; // eax
  void *v187; // rcx
  int v188; // eax
  void *v189; // rcx
  int v190; // eax
  int v191; // ebx
  int v192; // esi
  int v193; // eax
  int v194; // ecx
  unsigned int v195; // eax
  int v196; // eax
  unsigned int v197; // r10d
  unsigned int *v198; // rcx
  unsigned int v199; // r15d
  int v200; // r11d
  int v201; // r11d
  unsigned __int8 *v202; // rax
  bool v203; // zf
  unsigned int *v204; // rcx
  unsigned int v205; // r15d
  int v206; // r10d
  int v207; // r11d
  int v208; // r11d
  unsigned __int8 *v209; // rax
  unsigned int v210; // eax
  unsigned int v211; // ebx
  HANDLE v212; // rax
  const wchar_t *v213; // rax
  wchar_t *v214; // rsi
  FARPROC ProcAddress; // rax
  int v216; // eax
  unsigned int v217; // r10d
  unsigned int v218; // r12d
  int v219; // edx
  int v220; // edi
  int v221; // r10d
  int v222; // edx
  int v223; // r10d
  unsigned int v224; // ebx
  SIZE_T v225; // r15
  int v226; // edx
  int v227; // r10d
  void *v228; // r13
  int v229; // edx
  int v230; // r10d
  SIZE_T v231; // rsi
  int v232; // edx
  int v233; // r10d
  int v234; // r10d
  HANDLE v235; // rax
  _QWORD *v236; // rax
  _QWORD *v237; // rbx
  const void *v238; // rdi
  HANDLE v239; // rax
  void *v240; // rax
  HANDLE v241; // rax
  void *v242; // rax
  void *v243; // rdi
  HANDLE v244; // rax
  void *v245; // rax
  _DWORD *v246; // rsi
  _QWORD *v247; // rbx
  unsigned __int8 *v248; // rbx
  unsigned __int8 *v249; // rdi
  __int64 v250; // rsi
  SIZE_T v251; // rsi
  void *v252; // rax
  _BYTE *v253; // r15
  unsigned __int8 v254; // al
  unsigned __int8 *v255; // r11
  _BYTE *v256; // rbx
  int v257; // r8d
  int v258; // r13d
  int v259; // edx
  unsigned int v260; // edi
  SIZE_T v261; // r12
  int v262; // eax
  _BYTE *v263; // r15
  unsigned __int8 *v264; // rsi
  int v265; // ebx
  int v266; // r11d
  int v267; // ecx
  int v268; // ebx
  int v269; // edi
  int v270; // r11d
  unsigned int v271; // r9d
  int v272; // edi
  unsigned int v273; // r9d
  int v274; // edi
  int v275; // r9d
  unsigned int v276; // edi
  int v277; // r9d
  int v278; // edi
  int v279; // r9d
  unsigned int v280; // edi
  int v281; // r9d
  int v282; // edi
  unsigned int v283; // r10d
  int v284; // edi
  int v285; // r10d
  int v286; // edi
  int v287; // r10d
  unsigned int v288; // edi
  int v289; // r10d
  int v290; // edi
  int v291; // r10d
  unsigned int v292; // edi
  int v293; // r10d
  int v294; // edx
  SIZE_T j; // rcx
  int v296; // edi
  size_t v297; // rsi
  int v298; // edx
  int v299; // edi
  __int64 v300; // rdx
  unsigned int v301; // r10d
  SIZE_T v302; // r12
  int v303; // edx
  void *v304; // r11
  void *v305; // rbx
  void *v306; // r13
  unsigned int v307; // esi
  void *v308; // r10
  unsigned __int64 v309; // rsi
  int *v310; // r10
  int v311; // eax
  unsigned __int64 v312; // r10
  unsigned int v313; // r11d
  HANDLE v314; // rax
  void *v315; // rsi
  HANDLE v316; // rax
  _QWORD *v317; // rsi
  void *v318; // rbx
  HANDLE v319; // rax
  void *v320; // rbx
  HANDLE v321; // rax
  void *v322; // rbx
  HANDLE v323; // rax
  HANDLE v324; // rax
  void *v325; // rbx
  HANDLE v326; // rax
  wchar_t *v327; // rbx
  HANDLE v328; // rax
  _QWORD *v329; // rsi
  void *v330; // rbx
  HANDLE v331; // rax
  void *v332; // rbx
  HANDLE v333; // rax
  void *v334; // rbx
  HANDLE v335; // rax
  HANDLE v336; // rax
  void *v337; // rbx
  HANDLE v338; // rax
  int v339; // r10d
  int *v340; // rax
  LPVOID v341; // rcx
  unsigned int v342; // r11d
  int v343; // eax
  int v344; // r10d
  int v345; // r10d
  _QWORD *v346; // rax
  LPVOID v347; // rcx
  unsigned int v348; // r11d
  int v349; // eax
  int v350; // r10d
  int v351; // r10d
  _DWORD *v352; // rax
  LPVOID v353; // rcx
  unsigned int v354; // r11d
  int v355; // r10d
  int v356; // r11d
  void *v357; // rsi
  unsigned int *v358; // rcx
  unsigned int v359; // ebx
  int v360; // r10d
  int v361; // r10d
  unsigned int *v362; // rax
  unsigned int v363; // ebx
  unsigned int *v364; // rcx
  unsigned int v365; // r15d
  unsigned int v366; // r11d
  int v367; // r10d
  int v368; // r10d
  _DWORD *v369; // rax
  int v370; // ecx
  void *v371; // rbx
  HANDLE v372; // rax
  void *v373; // rbx
  HANDLE v374; // rax
  HANDLE v375; // rax
  HANDLE v376; // rax
  int v377; // ebx
  int v379; // eax
  int v380; // edx
  int v381; // eax
  int v382; // edx
  int v383; // eax
  int v384; // eax
  int v385; // edx
  int v386; // r11d
  int v387; // eax
  int v388; // edx
  int v389; // eax
  int v390; // edx
  HANDLE v391; // rax
  unsigned int v392; // ebx
  unsigned int v393; // r12d
  int v394; // r10d
  char v395; // r9
  int v396; // edx
  int v397; // ecx
  unsigned int v398; // ebx
  int v399; // r8d
  void *v400; // r15
  HANDLE v401; // rax
  void *v402; // r15
  HANDLE v403; // rax
  void *v404; // r15
  HANDLE v405; // rax
  HANDLE v406; // rax
  void *v407; // rbx
  HANDLE v408; // rax
  void *v409; // rbx
  HANDLE v410; // rax
  void *v411; // rbx
  HANDLE v412; // rax
  HANDLE v413; // rax
  HANDLE v414; // rax
  signed int LastError; // eax
  void *v416; // rsi
  HANDLE v417; // rax
  void *v418; // rsi
  HANDLE v419; // rax
  void *v420; // rsi
  HANDLE v421; // rax
  HANDLE v422; // rax
  void *v423; // rsi
  HANDLE v424; // rax
  void *v425; // rsi
  HANDLE v426; // rax
  void *v427; // rsi
  HANDLE v428; // rax
  HANDLE v429; // rax
  int v430; // edi
  int v431; // r10d
  char v432; // r9
  int v433; // edx
  unsigned int v434; // edx
  int v435; // ecx
  int v436; // r8d
  HANDLE v437; // rax
  void *v438; // r15
  void *v439; // rsi
  HANDLE v440; // rax
  void *v441; // rax
  void *v442; // r12
  size_t v443; // rsi
  HANDLE v444; // rax
  void *v445; // rax
  void *v446; // r13
  unsigned int v447; // r15d
  unsigned int v448; // r10d
  unsigned int v449; // r10d
  unsigned int v450; // r10d
  unsigned int v451; // ebx
  HANDLE v452; // rax
  void *v453; // rax
  _DWORD *v454; // r10
  _DWORD *v455; // rcx
  int v456; // r10d
  int *v457; // r11
  int v458; // ebx
  unsigned __int64 v459; // r11
  int v460; // eax
  unsigned int v461; // r10d
  int v462; // ebx
  _DWORD *v463; // r11
  void *v464; // rcx
  int *v465; // r11
  int v466; // ebx
  unsigned __int64 v467; // r11
  int v468; // eax
  unsigned int v469; // r10d
  int v470; // ebx
  unsigned int *v471; // r11
  void *v472; // rcx
  int *v473; // r11
  int v474; // ebx
  unsigned __int64 v475; // r11
  int v476; // eax
  unsigned int v477; // r10d
  _DWORD *v478; // r11
  _QWORD *v479; // rax
  unsigned int v480; // ecx
  unsigned int v481; // r10d
  unsigned int v482; // r12d
  _QWORD *v483; // r13
  int v484; // ebx
  void *v485; // r10
  unsigned int v486; // eax
  unsigned int v487; // ebx
  HANDLE v488; // rax
  char *v489; // rax
  char *v490; // rsi
  __int64 v491; // rdx
  size_t v492; // rcx
  HANDLE v493; // rax
  int v494; // ebx
  _QWORD *v495; // r15
  int v496; // ebx
  size_t v497; // rsi
  void *v498; // rax
  _BYTE *v499; // rdx
  unsigned __int8 v500; // al
  unsigned __int8 *v501; // r12
  size_t v502; // rcx
  int v503; // ebx
  _BYTE *v504; // r11
  unsigned int v505; // edx
  int v506; // r8d
  unsigned int v507; // ebx
  int v508; // r10d
  char v509; // r9
  int v510; // edx
  int v511; // ecx
  unsigned int v512; // ebx
  int v513; // ecx
  int v514; // r8d
  size_t v515; // rcx
  int v516; // r13d
  unsigned __int8 *v517; // rax
  int v518; // r15d
  _BYTE *v519; // rsi
  size_t v520; // r12
  int v521; // r11d
  int v522; // ecx
  int v523; // r10d
  int v524; // r10d
  int v525; // ebx
  unsigned int v526; // r9d
  int v527; // ebx
  int v528; // r9d
  int v529; // ebx
  unsigned int v530; // r9d
  int v531; // ebx
  int v532; // r9d
  int v533; // ebx
  int v534; // r9d
  int v535; // ebx
  int v536; // r9d
  unsigned int v537; // ebx
  unsigned int v538; // r9d
  int v539; // ebx
  int v540; // r9d
  int v541; // ebx
  int v542; // r9d
  int v543; // ebx
  int v544; // r9d
  int v545; // ebx
  int v546; // r9d
  unsigned int v547; // ebx
  int v548; // edx
  unsigned int v549; // ecx
  int v550; // ebx
  int v551; // ecx
  void *v552; // rbx
  unsigned int v553; // r12d
  HANDLE v554; // rax
  _DWORD *v555; // rax
  _DWORD *v556; // rsi
  HANDLE v557; // rax
  void *v558; // rax
  HANDLE v559; // rax
  _OWORD *v560; // rax
  HANDLE v561; // rax
  _QWORD *v562; // rax
  void *v563; // r12
  HANDLE v564; // rax
  void *v565; // r12
  HANDLE v566; // rax
  void *v567; // r12
  HANDLE v568; // rax
  HANDLE v569; // rax
  void *v570; // rsi
  HANDLE v571; // rax
  void *v572; // rsi
  HANDLE v573; // rax
  void *v574; // rsi
  HANDLE v575; // rax
  void *v576; // rsi
  HANDLE v577; // rax
  HANDLE v578; // rax
  const void **v579; // rsi
  int v580; // ebx
  unsigned int v581; // eax
  unsigned int v582; // ebx
  HANDLE v583; // rax
  _DWORD *v584; // rax
  _DWORD *v585; // r15
  int v586; // eax
  int v587; // eax
  LPVOID v588; // rcx
  int v589; // eax
  LPVOID v590; // rcx
  int v591; // eax
  HANDLE v592; // rax
  int v593; // esi
  int v594; // r15d
  int v595; // eax
  int v596; // ecx
  unsigned int v597; // eax
  int v598; // eax
  unsigned int v599; // r10d
  unsigned int *v600; // rcx
  unsigned int v601; // r12d
  int v602; // r11d
  int v603; // r11d
  unsigned __int8 *v604; // rax
  unsigned int *v605; // rcx
  unsigned int v606; // r12d
  int v607; // r10d
  int v608; // r11d
  int v609; // r11d
  unsigned __int8 *v610; // rax
  int v611; // ecx
  unsigned int v612; // eax
  unsigned int v613; // ebx
  HANDLE v614; // rax
  const wchar_t *v615; // rax
  wchar_t *v616; // r15
  FARPROC v617; // rax
  int v618; // eax
  unsigned int v619; // r10d
  signed int v620; // eax
  int v621; // ebx
  int v622; // edx
  unsigned int v623; // r15d
  int v624; // r10d
  size_t v625; // r11
  int v626; // edx
  int v627; // r10d
  SIZE_T v628; // r12
  int v629; // edx
  int v630; // r10d
  int v631; // edx
  int v632; // r10d
  SIZE_T v633; // r15
  int v634; // edx
  int v635; // r10d
  int v636; // r10d
  int v637; // r11d
  HANDLE v638; // rax
  _QWORD *v639; // rax
  _QWORD *v640; // rsi
  const void *v641; // rbx
  HANDLE v642; // rax
  void *v643; // rax
  void *v644; // rbx
  HANDLE v645; // rax
  void *v646; // rax
  const void *v647; // rbx
  HANDLE v648; // rax
  void *v649; // rax
  void *v650; // r15
  HANDLE v651; // rax
  void *v652; // r15
  HANDLE v653; // rax
  void *v654; // r15
  HANDLE v655; // rax
  HANDLE v656; // rax
  _QWORD *v657; // rsi
  void *v658; // r15
  HANDLE v659; // rax
  void *v660; // r15
  HANDLE v661; // rax
  void *v662; // r15
  HANDLE v663; // rax
  HANDLE v664; // rax
  void *v665; // rsi
  unsigned __int8 *v666; // rbx
  __int64 v667; // r12
  size_t v668; // r12
  void *v669; // rax
  _BYTE *v670; // r15
  unsigned __int8 v671; // al
  unsigned __int8 *v672; // r10
  _BYTE *v673; // r9
  unsigned int v674; // ebx
  int v675; // r8d
  int v676; // esi
  char v677; // di
  int v678; // edx
  unsigned int v679; // esi
  int v680; // ecx
  int v681; // edx
  int v682; // esi
  size_t v683; // rcx
  int v684; // r13d
  _BYTE *v685; // r15
  int v686; // edi
  unsigned __int8 *v687; // r12
  size_t v688; // rax
  int v689; // r11d
  int v690; // r10d
  int v691; // ecx
  int v692; // r11d
  int v693; // ebx
  int v694; // r10d
  unsigned int v695; // esi
  int v696; // ebx
  unsigned int v697; // esi
  int v698; // ebx
  int v699; // esi
  unsigned int v700; // ebx
  int v701; // esi
  int v702; // ebx
  int v703; // esi
  unsigned int v704; // ebx
  int v705; // esi
  int v706; // ebx
  unsigned int v707; // r9d
  int v708; // ebx
  int v709; // r9d
  int v710; // ebx
  int v711; // r9d
  unsigned int v712; // r8d
  int v713; // r9d
  int v714; // r8d
  int v715; // r9d
  unsigned int v716; // r8d
  int v717; // r9d
  int v718; // edx
  size_t m; // rcx
  int v720; // ebx
  HANDLE v721; // rax
  LPVOID v722; // r15
  int v723; // edx
  int v724; // ebx
  __int64 v725; // rdx
  unsigned int v726; // r10d
  SIZE_T v727; // r12
  int v728; // edx
  size_t v729; // r11
  const void *v730; // rsi
  void *v731; // r15
  void *v732; // r10
  unsigned __int64 v733; // r15
  int *v734; // r10
  int v735; // eax
  unsigned __int64 v736; // r10
  unsigned int v737; // r11d
  HANDLE v738; // rax
  void *v739; // rsi
  HANDLE v740; // rax
  _QWORD *v741; // rsi
  void *v742; // r15
  HANDLE v743; // rax
  void *v744; // r15
  HANDLE v745; // rax
  void *v746; // r15
  HANDLE v747; // rax
  HANDLE v748; // rax
  void *v749; // rsi
  HANDLE v750; // rax
  wchar_t *v751; // rsi
  HANDLE v752; // rax
  void *v753; // rsi
  HANDLE v754; // rax
  void *v755; // rsi
  HANDLE v756; // rax
  void *v757; // rsi
  HANDLE v758; // rax
  HANDLE v759; // rax
  void *v760; // rsi
  HANDLE v761; // rax
  unsigned int *v762; // rbx
  unsigned int v763; // r10d
  int v764; // r11d
  int *v765; // rax
  int v766; // r10d
  int v767; // r10d
  _QWORD *v768; // rax
  void *v769; // rbx
  HANDLE v770; // rax
  void *v771; // rbx
  HANDLE v772; // rax
  HANDLE v773; // rax
  HANDLE v774; // rax
  SIZE_T dwBytes; // [rsp+38h] [rbp-D0h] BYREF
  void *v776; // [rsp+40h] [rbp-C8h] BYREF
  void *k; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID v778; // [rsp+50h] [rbp-B8h]
  LPVOID v779; // [rsp+58h] [rbp-B0h]
  LPVOID v780; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v781; // [rsp+68h] [rbp-A0h]
  size_t v782; // [rsp+70h] [rbp-98h] BYREF
  size_t v783; // [rsp+78h] [rbp-90h] BYREF
  void *v784; // [rsp+80h] [rbp-88h]
  int v785; // [rsp+88h] [rbp-80h]
  int v786; // [rsp+8Ch] [rbp-7Ch]
  int v787; // [rsp+90h] [rbp-78h]
  int v788; // [rsp+94h] [rbp-74h]
  int v789; // [rsp+98h] [rbp-70h]
  int v790; // [rsp+9Ch] [rbp-6Ch]
  int v791; // [rsp+A0h] [rbp-68h]
  unsigned int v792; // [rsp+A4h] [rbp-64h]
  size_t pcchLength; // [rsp+A8h] [rbp-60h] BYREF
  size_t v794; // [rsp+B0h] [rbp-58h] BYREF
  void *v795; // [rsp+B8h] [rbp-50h]
  SIZE_T v796; // [rsp+C0h] [rbp-48h] BYREF
  void *v797; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v798; // [rsp+D0h] [rbp-38h]
  unsigned int v799; // [rsp+D4h] [rbp-34h]
  LPVOID v800; // [rsp+D8h] [rbp-30h]
  int v801; // [rsp+E0h] [rbp-28h]
  int v802; // [rsp+E4h] [rbp-24h]
  void *v803; // [rsp+E8h] [rbp-20h] BYREF
  int v804; // [rsp+F0h] [rbp-18h]
  unsigned int v805; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v806; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v807; // [rsp+100h] [rbp-8h]
  LPVOID v808; // [rsp+108h] [rbp+0h] BYREF
  int v809; // [rsp+110h] [rbp+8h]
  unsigned int v810; // [rsp+114h] [rbp+Ch]
  unsigned int v811; // [rsp+118h] [rbp+10h]
  unsigned __int64 v812; // [rsp+120h] [rbp+18h]
  LPVOID v813; // [rsp+128h] [rbp+20h]
  STRSAFE_PCNZWCH psza; // [rsp+130h] [rbp+28h]
  int v815; // [rsp+138h] [rbp+30h]
  LPVOID v816; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v817; // [rsp+148h] [rbp+40h]
  int v818; // [rsp+150h] [rbp+48h]
  int v819; // [rsp+158h] [rbp+50h]
  int v820; // [rsp+15Ch] [rbp+54h]
  int v821; // [rsp+160h] [rbp+58h]
  unsigned int v822; // [rsp+164h] [rbp+5Ch] BYREF
  unsigned int v823; // [rsp+168h] [rbp+60h]
  int v824; // [rsp+16Ch] [rbp+64h]
  int v825; // [rsp+170h] [rbp+68h]
  int v826; // [rsp+174h] [rbp+6Ch]
  unsigned int v827; // [rsp+178h] [rbp+70h]
  int v828; // [rsp+17Ch] [rbp+74h]
  int v829; // [rsp+180h] [rbp+78h]
  unsigned int v830; // [rsp+184h] [rbp+7Ch] BYREF
  unsigned __int8 *v831; // [rsp+188h] [rbp+80h]
  void *v832; // [rsp+190h] [rbp+88h]
  int v833; // [rsp+198h] [rbp+90h]
  unsigned int v834; // [rsp+19Ch] [rbp+94h] BYREF
  unsigned int v835; // [rsp+1A0h] [rbp+98h]
  unsigned int v836; // [rsp+1A4h] [rbp+9Ch]
  unsigned int v837; // [rsp+1A8h] [rbp+A0h]
  int v838; // [rsp+1ACh] [rbp+A4h]
  int v839; // [rsp+1B0h] [rbp+A8h]
  unsigned int v840; // [rsp+1B4h] [rbp+ACh] BYREF
  unsigned int v841; // [rsp+1B8h] [rbp+B0h]
  unsigned int v842; // [rsp+1BCh] [rbp+B4h]
  unsigned __int64 v843; // [rsp+1C0h] [rbp+B8h]
  LPVOID v844; // [rsp+1C8h] [rbp+C0h]
  LPVOID v845; // [rsp+1D0h] [rbp+C8h]
  LPVOID v846; // [rsp+1D8h] [rbp+D0h]
  int v847; // [rsp+1E0h] [rbp+D8h]
  unsigned int v848; // [rsp+1E4h] [rbp+DCh]
  LPVOID v849; // [rsp+1E8h] [rbp+E0h]
  int v850; // [rsp+1F0h] [rbp+E8h]
  int v851; // [rsp+1F8h] [rbp+F0h]
  int v852; // [rsp+200h] [rbp+F8h]
  int v853; // [rsp+204h] [rbp+FCh]
  unsigned int v854; // [rsp+208h] [rbp+100h]
  int v855; // [rsp+20Ch] [rbp+104h]
  int v856; // [rsp+210h] [rbp+108h]
  int v857; // [rsp+214h] [rbp+10Ch]
  int v858; // [rsp+218h] [rbp+110h]
  int v859; // [rsp+21Ch] [rbp+114h]
  unsigned int v860; // [rsp+220h] [rbp+118h]
  LPVOID lpMem; // [rsp+228h] [rbp+120h]
  int v862; // [rsp+230h] [rbp+128h]
  int v863; // [rsp+234h] [rbp+12Ch]
  int *v864; // [rsp+238h] [rbp+130h] BYREF
  int v865; // [rsp+240h] [rbp+138h]
  int v866; // [rsp+248h] [rbp+140h]
  int v867; // [rsp+24Ch] [rbp+144h]
  int v868; // [rsp+250h] [rbp+148h]
  int v869; // [rsp+254h] [rbp+14Ch]
  int v870; // [rsp+258h] [rbp+150h]
  SIZE_T v871; // [rsp+260h] [rbp+158h]
  unsigned __int64 v872; // [rsp+268h] [rbp+160h]
  size_t v873; // [rsp+270h] [rbp+168h]
  size_t v874; // [rsp+278h] [rbp+170h]
  unsigned __int64 v875; // [rsp+280h] [rbp+178h]
  size_t v876; // [rsp+288h] [rbp+180h]
  void *v877; // [rsp+290h] [rbp+188h]
  size_t Size; // [rsp+298h] [rbp+190h]
  size_t v879; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 v880; // [rsp+2A8h] [rbp+1A0h]
  unsigned int v881; // [rsp+2B0h] [rbp+1A8h]
  int v882; // [rsp+2B4h] [rbp+1ACh]
  SIZE_T v883; // [rsp+2B8h] [rbp+1B0h]
  __int64 *v884; // [rsp+2C0h] [rbp+1B8h]
  __int64 v885; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int8 *v886; // [rsp+2D0h] [rbp+1C8h]
  __int64 v887; // [rsp+2D8h] [rbp+1D0h]
  unsigned __int8 *v888; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v889; // [rsp+2E8h] [rbp+1E0h]
  HMODULE phModule; // [rsp+2F0h] [rbp+1E8h] BYREF
  int *v891; // [rsp+2F8h] [rbp+1F0h]
  _QWORD *v892; // [rsp+300h] [rbp+1F8h]
  _DWORD *v893; // [rsp+308h] [rbp+200h]
  void *v894; // [rsp+310h] [rbp+208h]
  unsigned int *v895; // [rsp+318h] [rbp+210h]
  _DWORD *v896; // [rsp+320h] [rbp+218h]
  __int64 v897; // [rsp+328h] [rbp+220h]
  void *v898; // [rsp+330h] [rbp+228h]
  void *v899; // [rsp+338h] [rbp+230h]
  unsigned __int64 v900; // [rsp+340h] [rbp+238h]
  unsigned __int64 v901; // [rsp+348h] [rbp+240h]
  unsigned __int8 *v902; // [rsp+350h] [rbp+248h]
  __int64 *v903; // [rsp+358h] [rbp+250h]
  __int64 v904; // [rsp+360h] [rbp+258h]
  unsigned __int8 *v905; // [rsp+368h] [rbp+260h]
  __int64 v906; // [rsp+370h] [rbp+268h]
  unsigned __int8 *v907; // [rsp+378h] [rbp+270h]
  unsigned __int8 *v908; // [rsp+380h] [rbp+278h]
  HMODULE hModule; // [rsp+388h] [rbp+280h] BYREF
  int v910; // [rsp+390h] [rbp+288h]
  void *Src; // [rsp+398h] [rbp+290h]
  void *v912; // [rsp+3A0h] [rbp+298h]
  unsigned __int64 v913; // [rsp+3A8h] [rbp+2A0h]
  _QWORD v914[2]; // [rsp+3B0h] [rbp+2A8h] BYREF
  int v915; // [rsp+3C0h] [rbp+2B8h]
  unsigned int v916; // [rsp+3C4h] [rbp+2BCh]
  int v917; // [rsp+3C8h] [rbp+2C0h]
  _QWORD v918[2]; // [rsp+3D0h] [rbp+2C8h] BYREF
  unsigned int v919; // [rsp+3E0h] [rbp+2D8h]
  unsigned int v920; // [rsp+3E4h] [rbp+2DCh]
  int v921; // [rsp+3E8h] [rbp+2E0h]
  _QWORD *v922; // [rsp+3F0h] [rbp+2E8h]
  int *v923; // [rsp+3F8h] [rbp+2F0h]
  __int64 v924; // [rsp+400h] [rbp+2F8h]

  psza = psz;
  v839 = 0;
  v864 = 0LL;
  v809 = 0;
  v2 = 1;
  if ( !psz )
  {
    v809 = -2147024809;
    goto LABEL_459;
  }
  v838 = 0;
  v816 = 0LL;
  v821 = 0;
  v837 = 0;
  v3 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v816, v3);
  v877 = v816;
  if ( !v816 )
  {
    v10 = -2147024882;
LABEL_1041:
    v377 = v819;
    goto LABEL_456;
  }
  v833 = 0;
  v783 = 0LL;
  v784 = 0LL;
  v4 = 0LL;
  v812 = 0LL;
  v5 = 0LL;
  v813 = 0LL;
  Src = &unk_1800BE540;
  v815 = 0;
  Size = 160LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v802 = -1;
  v8 = 0LL;
  v9 = v7;
  v10 = -1073741801;
  if ( !v7 )
  {
    LODWORD(dwBytes) = -1073741801;
    goto LABEL_445;
  }
  memcpy_0(v7, Src, Size);
  v11 = (unsigned int)Size;
  v4 = v9;
  v778 = v9;
  v879 = 8LL;
  v912 = &unk_1800BE480;
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 8u, 8uLL);
  v8 = 0LL;
  v14 = v13;
  if ( !v13 )
  {
    LODWORD(dwBytes) = -1073741801;
    v5 = 0LL;
    goto LABEL_445;
  }
  memcpy_0(v13, v912, v879);
  v15 = v879;
  v779 = v14;
  v872 = __rdtsc();
  v16 = RtlUIntAdd(4u, 4, (int *)&v776);
  v17 = v801;
  v10 = v16;
  dwBytes = (unsigned int)v16;
  if ( v16 >= 0 )
    v17 = (int)v776;
  v801 = v17;
  if ( v16 < 0 )
    goto LABEL_469;
  v18 = RtlUIntAdd(0, v17, (int *)&dwBytes + 1);
  v10 = v18 | 0x10000000;
  LODWORD(dwBytes) = v18 | 0x10000000;
  if ( v18 < 0 )
    goto LABEL_469;
  v19 = RtlUIntAdd(4u, v11, (int *)&v776);
  LODWORD(dwBytes) = v19;
  v10 = v19;
  if ( v19 >= 0 )
    v20 = (int)v776;
  v801 = v20;
  if ( v19 < 0 )
    goto LABEL_469;
  v21 = RtlUIntAdd(HIDWORD(dwBytes), v20, (int *)&dwBytes + 1);
  v10 = v21 | 0x10000000;
  LODWORD(dwBytes) = v21 | 0x10000000;
  if ( v21 < 0 )
    goto LABEL_469;
  v22 = RtlUIntAdd(4u, v15, (int *)&v776);
  LODWORD(dwBytes) = v22;
  v10 = v22;
  if ( v22 >= 0 )
    v23 = (int)v776;
  v801 = v23;
  if ( v22 < 0 )
    goto LABEL_469;
  v24 = RtlUIntAdd(HIDWORD(dwBytes), v23, (int *)&dwBytes + 1);
  v10 = v24 | 0x10000000;
  LODWORD(dwBytes) = v24 | 0x10000000;
  if ( v24 < 0 )
    goto LABEL_469;
  v25 = RtlUIntAdd(4u, 8, (int *)&v776);
  LODWORD(dwBytes) = v25;
  v10 = v25;
  if ( v25 >= 0 )
    v26 = (int)v776;
  v801 = v26;
  if ( v25 < 0
    || (v27 = RtlUIntAdd(HIDWORD(dwBytes), v26, (int *)&dwBytes + 1),
        v10 = v27 | 0x10000000,
        LODWORD(dwBytes) = v27 | 0x10000000,
        v27 < 0) )
  {
LABEL_469:
    v4 = v9;
    v5 = v14;
    v8 = 0LL;
    goto LABEL_445;
  }
  if ( StringCchLengthW(psz, v28, &pcchLength) < 0 )
  {
    v10 = -1073741762;
    LODWORD(dwBytes) = -1073741762;
    goto LABEL_469;
  }
  v29 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), (int *)&v776);
  LODWORD(dwBytes) = v29;
  v10 = v29;
  if ( v29 >= 0 )
    v30 = (int)v776;
  v801 = v30;
  if ( v29 < 0 )
    goto LABEL_469;
  v31 = RtlUIntAdd(HIDWORD(dwBytes), v30, (int *)&dwBytes + 1);
  v10 = v31 | 0x10000000;
  LODWORD(dwBytes) = v31 | 0x10000000;
  if ( v31 < 0 )
    goto LABEL_469;
  v32 = RtlUIntAdd(4u, 4, (int *)&v776);
  LODWORD(dwBytes) = v32;
  v10 = v32;
  if ( v32 >= 0 )
    v33 = (int)v776;
  v801 = v33;
  if ( v32 < 0 )
    goto LABEL_469;
  v34 = RtlUIntAdd(HIDWORD(dwBytes), v33, (int *)&dwBytes + 1);
  v10 = v34 | 0x10000000;
  LODWORD(dwBytes) = v34 | 0x10000000;
  if ( v34 < 0 )
    goto LABEL_469;
  v35 = RtlUIntAdd(4u, 4, (int *)&v776);
  LODWORD(dwBytes) = v35;
  v10 = v35;
  if ( v35 >= 0 )
    v36 = (int)v776;
  v801 = v36;
  if ( v35 < 0 )
    goto LABEL_469;
  v37 = RtlUIntAdd(HIDWORD(dwBytes), v36, (int *)&dwBytes + 1);
  v10 = v37 | 0x10000000;
  LODWORD(dwBytes) = v37 | 0x10000000;
  if ( v37 < 0 )
    goto LABEL_469;
  HIDWORD(v783) = HIDWORD(dwBytes);
  v38 = HIDWORD(dwBytes);
  v39 = GetProcessHeap();
  v40 = HeapAlloc(v39, 8u, v38);
  v8 = 0LL;
  if ( !v40 )
  {
    v10 = -1073741801;
LABEL_472:
    LODWORD(dwBytes) = v10;
    goto LABEL_473;
  }
  v784 = v40;
  LODWORD(v783) = 0;
  v850 = 0;
  LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v40, 4LL, (__int64 *)&v797);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) == 0LL )
  {
    if ( v42 + 2 > (_DWORD *)((char *)v42 + HIDWORD(v783)) )
      goto LABEL_471;
    v43 = v797;
    *v42 = v41;
    *v43 = v850;
    LODWORD(v783) = v783 + 1;
  }
  if ( v10 < 0 )
    goto LABEL_473;
  if ( !(_DWORD)v11 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
    goto LABEL_51;
  }
  if ( v784 != v8 )
  {
    v44 = (int)v8;
    v45 = (int *)v784;
    v782 = (size_t)v784;
    if ( (unsigned int)v783 > (unsigned int)v8 )
    {
      do
      {
        v46 = RtlUIntAdd(4u, *v45, (int *)&v776);
        LODWORD(dwBytes) = v46;
        v10 = v46;
        if ( v46 >= 0 )
          v48 = (unsigned int)v776;
        v829 = v48;
        if ( v46 < 0 )
          goto LABEL_50;
        LODWORD(dwBytes) = RtlULongLongAdd(v47, v48, (__int64 *)&v782);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_50;
        v45 = (int *)v782;
      }
      while ( ++v44 < (unsigned int)v783 );
    }
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v45, 4LL, (__int64 *)&v797);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
      goto LABEL_51;
    if ( (char *)v49 + v11 + 4 <= (char *)v784 + HIDWORD(v783) )
    {
      v50 = v797;
      *v49 = v11;
      memcpy_0(v50, v9, v11);
      LODWORD(v783) = v783 + 1;
LABEL_50:
      v8 = 0LL;
      goto LABEL_51;
    }
LABEL_471:
    v10 = -1073741789;
    goto LABEL_472;
  }
  v379 = RtlUIntAdd(4u, v11, (int *)&v776);
  v380 = v829;
  v10 = v379;
  LODWORD(dwBytes) = v379;
  if ( v379 >= 0 )
    v380 = (int)v776;
  v829 = v380;
  if ( v379 < 0
    || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v783), v380, (int *)&v783 + 1),
        v10 = dwBytes,
        (dwBytes & 0x80000000) != 0LL) )
  {
LABEL_51:
    if ( v10 >= 0 )
      goto LABEL_52;
LABEL_473:
    v4 = v9;
    v5 = v14;
    goto LABEL_445;
  }
  LODWORD(v783) = v783 + 1;
LABEL_52:
  if ( !v15 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
LABEL_64:
    v60 = 4LL;
    goto LABEL_65;
  }
  if ( v784 != v8 )
  {
    v51 = (int)v8;
    v52 = (int *)v784;
    v782 = (size_t)v784;
    if ( (unsigned int)v783 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v53 = RtlUIntAdd(4u, *v52, (int *)&v776);
        LODWORD(dwBytes) = v53;
        v10 = v53;
        if ( v53 >= 0 )
          v56 = (unsigned int)v776;
        v828 = v56;
        if ( v53 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v55, v56, (__int64 *)&v782);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_63;
        v52 = (int *)v782;
        if ( ++v51 >= (unsigned int)v783 )
          goto LABEL_60;
      }
      v8 = 0LL;
      v60 = v54;
      goto LABEL_65;
    }
LABEL_60:
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v52, 4LL, (__int64 *)&v797);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v60 = v57;
      goto LABEL_65;
    }
    if ( (char *)v58 + v15 + 4 <= (char *)v784 + HIDWORD(v783) )
    {
      v59 = v797;
      *v58 = v15;
      memcpy_0(v59, v14, v15);
      LODWORD(v783) = v783 + 1;
LABEL_63:
      v8 = 0LL;
      goto LABEL_64;
    }
    goto LABEL_471;
  }
  v60 = 4LL;
  v381 = RtlUIntAdd(4u, v15, (int *)&v776);
  v382 = v828;
  v10 = v381;
  LODWORD(dwBytes) = v381;
  if ( v381 >= 0 )
    v382 = (int)v776;
  v828 = v382;
  if ( v381 >= 0 )
  {
    LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v783), v382, (int *)&v783 + 1);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) == 0LL )
    {
      LODWORD(v783) = v783 + 1;
      goto LABEL_66;
    }
  }
LABEL_65:
  if ( v10 < 0 )
    goto LABEL_496;
LABEL_66:
  v913 = v872;
  if ( v784 != v8 )
  {
    v61 = (int)v8;
    v62 = (int *)v784;
    v782 = (size_t)v784;
    if ( (unsigned int)v783 <= (unsigned int)v8 )
    {
LABEL_73:
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v62, v60, (__int64 *)&v797);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        if ( v67 + 3 > (_DWORD *)((char *)v784 + HIDWORD(v783)) )
        {
          v10 = -1073741789;
LABEL_495:
          LODWORD(dwBytes) = v10;
          goto LABEL_496;
        }
        v68 = v797;
        *v67 = 8;
        *v68 = v913;
        LODWORD(v783) = v783 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v63 = RtlUIntAdd(v60, *v62, (int *)&v776);
        LODWORD(dwBytes) = v63;
        v10 = v63;
        if ( v63 >= 0 )
          v66 = (unsigned int)v776;
        v827 = v66;
        if ( v63 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v65, v66, (__int64 *)&v782);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          break;
        v62 = (int *)v782;
        if ( ++v61 >= (unsigned int)v783 )
          goto LABEL_73;
      }
      v8 = 0LL;
    }
LABEL_76:
    if ( v10 >= 0 )
      goto LABEL_77;
LABEL_496:
    v4 = v9;
    goto LABEL_444;
  }
  v383 = RtlUIntAdd(v60, 8, (int *)&v776);
  v64 = v827;
  v10 = v383;
  LODWORD(dwBytes) = v383;
  if ( v383 >= 0 )
    v64 = (unsigned int)v776;
  v827 = v64;
  if ( v383 < 0 )
    goto LABEL_76;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v783), v64, (int *)&v783 + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_76;
  LODWORD(v783) = v783 + 1;
LABEL_77:
  v69 = psza;
  if ( StringCchLengthW(psza, v64, &v782) < 0 )
  {
    v10 = -1073741762;
    goto LABEL_495;
  }
  LODWORD(dwBytes) = RtlULongLongAdd(v782, 1LL, (__int64 *)&v782);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) == 0LL )
  {
    v70 = (unsigned int)(2 * v782);
    if ( (_DWORD)v70 )
    {
      if ( v784 == v8 )
      {
        v384 = RtlUIntAdd(v60, v70, (int *)&v776);
        v385 = v825;
        v10 = v384;
        LODWORD(dwBytes) = v384;
        if ( v384 >= 0 )
          v385 = (int)v776;
        v825 = v385;
        if ( v384 >= 0 )
        {
          LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v783), v385, (int *)&v783 + 1);
          v10 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            LODWORD(v783) = v783 + 1;
            v10 = v386;
            LODWORD(dwBytes) = v386;
          }
        }
      }
      else
      {
        v71 = (int)v8;
        v72 = (int *)v784;
        v782 = (size_t)v784;
        if ( (unsigned int)v783 <= (unsigned int)v8 )
        {
LABEL_88:
          LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v72, v60, (__int64 *)&v797);
          v10 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            if ( (char *)v77 + v70 + 4 > (char *)v784 + HIDWORD(v783) )
            {
              v10 = -1073741789;
              LODWORD(dwBytes) = -1073741789;
            }
            else
            {
              v78 = v797;
              *v77 = v70;
              memcpy_0(v78, v69, (unsigned int)v70);
              LODWORD(v783) = v783 + 1;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v73 = RtlUIntAdd(4u, *v72, (int *)&v776);
            LODWORD(dwBytes) = v73;
            v10 = v73;
            if ( v73 >= 0 )
              v76 = (unsigned int)v776;
            v825 = v76;
            if ( v73 < 0 )
              break;
            LODWORD(dwBytes) = RtlULongLongAdd(v75, v76, (__int64 *)&v782);
            v10 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
            {
              v60 = 4LL;
              goto LABEL_91;
            }
            v72 = (int *)v782;
            if ( ++v71 >= (unsigned int)v783 )
            {
              v60 = 4LL;
              goto LABEL_88;
            }
          }
          v60 = v74;
        }
      }
    }
    else
    {
      v10 = -1073741811;
      LODWORD(dwBytes) = -1073741811;
    }
LABEL_91:
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_443;
  v851 = v821;
  if ( v784 == v8 )
  {
    v387 = RtlUIntAdd(v60, v60, (int *)&v776);
    v388 = v824;
    v10 = v387;
    LODWORD(dwBytes) = v387;
    if ( v387 >= 0 )
      v388 = (int)v776;
    v824 = v388;
    if ( v387 >= 0 )
    {
      LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v783), v388, (int *)&v783 + 1);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        LODWORD(v783) = v783 + 1;
        goto LABEL_104;
      }
    }
  }
  else
  {
    v79 = (int)v8;
    v80 = (int *)v784;
    v782 = (size_t)v784;
    if ( (unsigned int)v783 <= (unsigned int)v8 )
    {
LABEL_100:
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v80, v60, (__int64 *)&v797);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        if ( v84 + 2 > (_DWORD *)((char *)v784 + HIDWORD(v783)) )
          goto LABEL_512;
        v85 = v797;
        *v84 = v60;
        *v85 = v851;
        LODWORD(v783) = v783 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v81 = RtlUIntAdd(v60, *v80, (int *)&v776);
        LODWORD(dwBytes) = v81;
        v10 = v81;
        if ( v81 >= 0 )
          v83 = (unsigned int)v776;
        v824 = v83;
        if ( v81 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v82, v83, (__int64 *)&v782);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          break;
        v80 = (int *)v782;
        if ( ++v79 >= (unsigned int)v783 )
          goto LABEL_100;
      }
      v8 = 0LL;
    }
  }
  if ( v10 < 0 )
    goto LABEL_443;
LABEL_104:
  v818 = v60;
  if ( v784 == v8 )
  {
    v389 = RtlUIntAdd(v60, v60, (int *)&v776);
    v390 = v826;
    v10 = v389;
    LODWORD(dwBytes) = v389;
    if ( v389 >= 0 )
      v390 = (int)v776;
    v826 = v390;
    if ( v389 >= 0 )
    {
      LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v783), v390, (int *)&v783 + 1);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        LODWORD(v783) = v783 + 1;
        goto LABEL_115;
      }
    }
  }
  else
  {
    v86 = (int)v8;
    v87 = (int *)v784;
    v782 = (size_t)v784;
    if ( (unsigned int)v783 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v88 = RtlUIntAdd(v60, *v87, (int *)&v776);
        LODWORD(dwBytes) = v88;
        v10 = v88;
        if ( v88 >= 0 )
          v90 = (unsigned int)v776;
        v826 = v90;
        if ( v88 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v89, v90, (__int64 *)&v782);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          break;
        v87 = (int *)v782;
        if ( ++v86 >= (unsigned int)v783 )
          goto LABEL_111;
      }
      v8 = 0LL;
      goto LABEL_114;
    }
LABEL_111:
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v87, v60, (__int64 *)&v797);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) == 0LL )
    {
      if ( v91 + 2 <= (_DWORD *)((char *)v784 + HIDWORD(v783)) )
      {
        v92 = v797;
        *v91 = v60;
        *v92 = v818;
        LODWORD(v783) = v783 + 1;
        goto LABEL_114;
      }
LABEL_512:
      v10 = -1073741789;
      LODWORD(dwBytes) = -1073741789;
      goto LABEL_443;
    }
  }
LABEL_114:
  if ( v10 < 0 )
    goto LABEL_443;
LABEL_115:
  v93 = RtlUIntAdd(v60, v60, (int *)&v776);
  v95 = v804;
  v10 = v93;
  LODWORD(dwBytes) = v93;
  if ( v93 >= 0 )
    v95 = (int)v776;
  v804 = v95;
  if ( v93 < 0 )
    goto LABEL_520;
  HIDWORD(dwBytes) = v95;
  v96 = RtlUIntAdd(v94, 8, (int *)&v776);
  LODWORD(dwBytes) = v96;
  v98 = v97;
  v10 = v96;
  if ( v96 >= 0 )
    v98 = (int)v776;
  v804 = v98;
  if ( v96 < 0 )
  {
LABEL_520:
    v8 = 0LL;
LABEL_521:
    v108 = v818;
    goto LABEL_139;
  }
  v99 = RtlUIntAdd(v97, v98, (int *)&dwBytes + 1);
  v8 = 0LL;
  LODWORD(dwBytes) = v99;
  v10 = v99;
  if ( v99 < 0 )
    goto LABEL_521;
  v100 = RtlUIntAdd(v60, v60, (int *)&v776);
  LODWORD(dwBytes) = v100;
  v10 = v100;
  if ( v100 >= 0 )
    v101 = (int)v776;
  v804 = v101;
  if ( v100 < 0 )
    goto LABEL_521;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v101, (int *)&dwBytes + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_521;
  v102 = RtlUIntAdd(v60, v60, (int *)&v776);
  LODWORD(dwBytes) = v102;
  v10 = v102;
  if ( v102 >= 0 )
    v103 = (int)v776;
  v804 = v103;
  if ( v102 < 0 )
    goto LABEL_521;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v103, (int *)&dwBytes + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_521;
  v104 = RtlUIntAdd(v60, v60, (int *)&v776);
  LODWORD(dwBytes) = v104;
  v10 = v104;
  if ( v104 >= 0 )
    v105 = (int)v776;
  v804 = v105;
  if ( v104 < 0 )
    goto LABEL_521;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v105, (int *)&dwBytes + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_521;
  v106 = RtlUIntAdd(v60, v60, (int *)&v776);
  LODWORD(dwBytes) = v106;
  v10 = v106;
  if ( v106 >= 0 )
    v107 = (int)v776;
  v804 = v107;
  if ( v106 < 0 )
    goto LABEL_521;
  v10 = RtlUIntAdd(HIDWORD(dwBytes), v107, (int *)&dwBytes + 1);
  LODWORD(dwBytes) = v10;
  v108 = v818;
  if ( v10 >= 0 )
    v108 = HIDWORD(dwBytes);
LABEL_139:
  LODWORD(v808) = v108;
  if ( v10 < 0 )
    goto LABEL_443;
  v109 = v8;
  v845 = v8;
  v800 = v8;
  v110 = (unsigned int)v8;
  v111 = (size_t)v8;
  v782 = (size_t)v8;
  v112 = (unsigned int)v8;
  v807 = (unsigned int)v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v798 = (unsigned int)v8;
  v780 = v8;
  pcchLength = (size_t)v8;
  v810 = (unsigned int)v8;
  v880 = __rdtsc();
  v805 = 8;
  v113 = RtlUIntAdd(8u, SHIDWORD(v783), (int *)&v805);
  if ( v113 >= 0 )
  {
    v114 = (v805 + 7) & 0xFFFFFFF8;
    if ( v114 < v805 )
    {
      v113 = -1073741675;
    }
    else
    {
      v805 = (v805 + 7) & 0xFFFFFFF8;
      v115 = v114;
      v116 = GetProcessHeap();
      v117 = (char *)HeapAlloc(v116, 8u, v115);
      v8 = 0LL;
      v118 = v117;
      if ( v117 )
      {
        k = v117;
        *(_DWORD *)v117 = v783;
        v113 = RtlULongLongAdd((unsigned __int64)v117, 4LL, (__int64 *)&k);
        if ( v113 >= 0 )
        {
          v120 = k;
          *(_DWORD *)k = HIDWORD(v783);
          v113 = RtlULongLongAdd((unsigned __int64)v120, v119, (__int64 *)&k);
          if ( v113 >= 0 )
          {
            *(_QWORD *)&v118[v805 - 8] = v880;
            memcpy_0(k, v784, HIDWORD(v783));
            v110 = v805;
            v8 = 0LL;
            v800 = v118;
            v118 = 0LL;
          }
        }
        if ( v118 )
        {
          v391 = GetProcessHeap();
          HeapFree(v391, 0, v118);
          v8 = 0LL;
        }
        v109 = (unsigned __int8 *)v800;
      }
      else
      {
        v113 = -1073741801;
        v109 = (unsigned __int8 *)v111;
      }
    }
  }
  v10 = v113 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_336;
  v884 = (__int64 *)v8;
  v121 = v8;
  v885 = (__int64)v8;
  v886 = v8;
  v887 = (__int64)v8;
  lpMem = v8;
  v883 = (SIZE_T)v8;
  k = v8;
  if ( v109 )
  {
    v122 = v110;
    v776 = (void *)v110;
    if ( v110 && (v796 = v110 + 8LL, v123 = MemoryAlloc(v796), v8 = 0LL, v803 = v123, (v124 = v123) != 0LL) )
    {
      v125 = 0;
      for ( i = 0LL; i < v110; ++i )
        v125 ^= v109[i];
      v127 = v109;
      v128 = -1;
      v787 = -1;
      dwBytes = 0LL;
      v129 = 0;
      v791 = 0;
      v130 = v124;
      v131 = v122 & 7;
      if ( (v122 & 7) != 0 )
      {
        v392 = 0;
        dwBytes = 0LL;
        v393 = 0;
        v394 = 0;
        v395 = 56;
        do
        {
          v396 = *v127;
          if ( v394 >= 4 )
            v393 |= v396 << v395;
          else
            v392 |= v396 << (v395 - 32);
          ++v394;
          v395 -= 8;
          ++v127;
        }
        while ( v394 < v131 );
        dwBytes = __PAIR64__(v393, v392);
        v397 = 0;
        v129 = v392 ^ 0xB17A307A;
        v398 = v393 ^ 0x42F6B18D;
        v791 = v129;
        v787 = v393 ^ 0x42F6B18D;
        if ( (v122 & 7) != 0 )
        {
          do
          {
            if ( v397 >= 4 )
            {
              v398 = __ROL4__(v398, 8);
              *v130 = v398;
            }
            else
            {
              v129 = __ROL4__(v129, 8);
              *v130 = v129;
            }
            ++v397;
            ++v130;
          }
          while ( v397 < v131 );
          v129 = v791;
          v398 = v787;
        }
        v399 = v131 - 4;
        if ( v399 <= 0 )
        {
          v128 = 0;
          v787 = 0;
          if ( v399 < 0 )
          {
            v129 = v129 >> (-8 * v399) << (-8 * v399);
            v791 = v129;
          }
        }
        else
        {
          v128 = v398 >> (8 * (4 - v399)) << (8 * (4 - v399));
          v787 = v128;
        }
      }
      v132 = v122 >> 3;
      if ( v122 >> 3 )
      {
        v133 = dwBytes;
        v134 = v130 + 7;
        v135 = HIDWORD(dwBytes);
        v136 = v127 + 2;
        do
        {
          v137 = *(v136 - 1) | (*(v136 - 2) << 8);
          v138 = v136[2] << 8;
          v139 = *v136;
          v136 += 8;
          v140 = *(v136 - 7) | ((v139 | (v137 << 8)) << 8);
          v141 = *(v136 - 3) | ((*(v136 - 4) | ((*(v136 - 5) | v138) << 8)) << 8);
          v142 = v141 ^ v128;
          v143 = v129 ^ v140 ^ (v142 - 19032) ^ 0xC81ECB17;
          v144 = (__ROR4__(v143, 7) + 45493 * __ROR4__(v129 ^ v140 ^ (v142 - 19032), 15)) ^ v142;
          v145 = (51991 * __ROR4__(v144 - 1313519016, 9) - __ROR4__(v144, 10)) ^ v143;
          v146 = (__ROL4__(v145, 5) + 51230 * __ROL4__(v145 ^ 0xCB17, 4)) ^ v144;
          v147 = (-937506025 - (v146 ^ 0xB1B54A58)) ^ v145;
          v148 = (45493 * v147 - (v147 >> 6) - 865822776) ^ v146;
          v149 = (19032 * (__ROR4__(v148, 15) ^ 0xCB17)) ^ v147;
          v150 = (51991 * (__ROR4__(~v149, 3) + 51230)) ^ v148;
          v151 = (v150 + 937486993) ^ v149;
          v152 = (45493 * (v151 ^ 0xC81E)) ^ __ROR4__(v151, 10) ^ v150;
          v153 = __ROR4__(v152, 3) ^ (51991 * __ROL4__(v152 ^ 0x4A58, 6)) ^ v151;
          v154 = (19032 * (__ROR4__(v153, 15) - 51230)) ^ v152;
          v155 = (v154 >> 15) ^ (19032 * __ROL4__(v154 - 51991, 3)) ^ (v154 >> 1) ^ (19032 * (v154 ^ 0xC81E)) ^ v153;
          v156 = (45493 * v155 - (v155 >> 13) + 1929740733) ^ v154;
          v157 = __ROR4__(v156, 11) ^ (51991 * __ROR4__(-1313519016 - v156, 9)) ^ v155;
          v158 = (v157 + 1313467786) ^ v156;
          v159 = (19032 * (v158 ^ 0xB1B5) - __ROR4__(v158, 7)) ^ v157;
          v160 = (45493 * __ROL4__(v159 ^ 0xC81E, 4) - __ROR4__(v159, 16)) ^ v158;
          v161 = (__ROR4__(v160, 4) + 51991 * __ROR4__(-1313519016 - v160, 10)) ^ v159;
          v162 = __ROR4__(v161, 9) ^ (51230 * __ROR4__(v161 + 1313519016, 4)) ^ v160;
          v163 = (19032 * __ROL4__(v162 ^ 0xC81ECB17, 8) - __ROL4__(v162, 2)) ^ v161;
          v164 = (45493 * __ROR4__(-937506025 - v163, 11) - __ROR4__(v163, 12)) ^ v162;
          v165 = (v164 >> 8) ^ (51991 * (v164 ^ 0xB1B5)) ^ v163;
          v791 = v133 ^ v165;
          v133 = v140;
          v787 = v165 ^ v164 ^ v135 ^ 0x79AB814F;
          v135 = v141;
          *(v134 - 4) = v791;
          v791 = __ROR4__(v791, 8);
          *v134 = v787;
          v134 += 8;
          v787 = __ROR4__(v787, 8);
          *(v134 - 13) = v791;
          v791 = __ROR4__(v791, 8);
          *(v134 - 9) = v787;
          v787 = __ROR4__(v787, 8);
          *(v134 - 14) = v791;
          v791 = __ROR4__(v791, 8);
          *(v134 - 10) = v787;
          v787 = __ROR4__(v787, 8);
          *(v134 - 15) = v791;
          *(v134 - 11) = v787;
          v129 = __ROR4__(v791, 8);
          v128 = __ROR4__(v787, 8);
          v791 = v129;
          v787 = v128;
          --v132;
        }
        while ( v132 );
        v121 = k;
        v122 = (unsigned __int64)v776;
        v124 = v803;
      }
      *(_QWORD *)&v124[v122] = v125;
      v166 = v796;
      v883 = v796;
      lpMem = v124;
      v884 = &qword_1800BE530;
      v885 = 8LL;
      v887 = 160LL;
      v886 = (unsigned __int8 *)xmmword_1800BE490;
      v167 = GetProcessHeap();
      v168 = HeapAlloc(v167, 8u, 0x30uLL);
      v8 = 0LL;
      v169 = v168;
      if ( v168 )
      {
        *v168 = v166;
        v170 = GetProcessHeap();
        v171 = HeapAlloc(v170, 8u, v166);
        v8 = 0LL;
        if ( !v171 )
          goto LABEL_541;
        *((_QWORD *)v169 + 1) = v171;
        memcpy_0(v171, v124, v166);
        v169[4] = 160;
        v172 = GetProcessHeap();
        v173 = HeapAlloc(v172, 8u, 0xA0uLL);
        v8 = 0LL;
        if ( !v173 )
          goto LABEL_541;
        *((_QWORD *)v169 + 3) = v173;
        *v173 = xmmword_1800BE490[0];
        v173[1] = xmmword_1800BE490[1];
        v173[2] = xmmword_1800BE490[2];
        v173[3] = xmmword_1800BE490[3];
        v173[4] = xmmword_1800BE490[4];
        v173[5] = xmmword_1800BE490[5];
        v173[6] = xmmword_1800BE490[6];
        v173[7] = xmmword_1800BE490[7];
        v173[8] = xmmword_1800BE490[8];
        v173[9] = xmmword_1800BE490[9];
        v169[8] = 8;
        v174 = GetProcessHeap();
        v175 = HeapAlloc(v174, 8u, 8uLL);
        v8 = 0LL;
        if ( v175 )
        {
          *((_QWORD *)v169 + 5) = v175;
          v121 = v169;
          *v175 = qword_1800BE530;
          v176 = 0;
          v169 = 0LL;
        }
        else
        {
LABEL_541:
          v176 = -1073741801;
        }
        if ( v169 )
        {
          v400 = (void *)*((_QWORD *)v169 + 1);
          if ( v400 )
          {
            v401 = GetProcessHeap();
            HeapFree(v401, 0, v400);
            *((_QWORD *)v169 + 1) = 0LL;
          }
          v402 = (void *)*((_QWORD *)v169 + 3);
          if ( v402 )
          {
            v403 = GetProcessHeap();
            HeapFree(v403, 0, v402);
            *((_QWORD *)v169 + 3) = 0LL;
          }
          v404 = (void *)*((_QWORD *)v169 + 5);
          if ( v404 )
          {
            v405 = GetProcessHeap();
            HeapFree(v405, 0, v404);
            *((_QWORD *)v169 + 5) = 0LL;
          }
          v406 = GetProcessHeap();
          HeapFree(v406, 0, v169);
          v8 = 0LL;
        }
      }
      else
      {
        v176 = -1073741801;
      }
      v112 = v807;
      if ( v176 >= 0 )
      {
        v845 = v121;
        v121 = 0LL;
      }
    }
    else
    {
      v176 = -1073741823;
    }
    v177 = lpMem;
    if ( lpMem )
    {
      v178 = GetProcessHeap();
      HeapFree(v178, 0, v177);
      v8 = 0LL;
      lpMem = 0LL;
    }
    if ( v121 )
    {
      v407 = (void *)v121[1];
      if ( v407 )
      {
        v408 = GetProcessHeap();
        HeapFree(v408, 0, v407);
        v121[1] = 0LL;
      }
      v409 = (void *)v121[3];
      if ( v409 )
      {
        v410 = GetProcessHeap();
        HeapFree(v410, 0, v409);
        v121[3] = 0LL;
      }
      v411 = (void *)v121[5];
      if ( v411 )
      {
        v412 = GetProcessHeap();
        HeapFree(v412, 0, v411);
        v121[5] = 0LL;
      }
      v413 = GetProcessHeap();
      HeapFree(v413, 0, v121);
      v8 = 0LL;
    }
    v111 = v782;
  }
  else
  {
    v176 = -1073741811;
  }
  v10 = v176 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_336;
  v179 = (const void **)v845;
  HIDWORD(dwBytes) = 4;
  v180 = RtlUIntAdd(4u, *(_DWORD *)v845, (int *)&dwBytes + 1);
  if ( v180 < 0
    || (v180 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v180 < 0)
    || (v180 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v179 + 4), (int *)&dwBytes + 1), v180 < 0)
    || (v180 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v180 < 0) )
  {
    v181 = v823;
  }
  else
  {
    v180 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v179 + 8), (int *)&dwBytes + 1);
    v181 = v823;
    if ( v180 >= 0 )
      v181 = HIDWORD(dwBytes);
    v823 = v181;
  }
  if ( v180 >= 0 )
  {
    v182 = v181;
    v183 = GetProcessHeap();
    v184 = HeapAlloc(v183, 8u, v182);
    v8 = 0LL;
    v185 = v184;
    if ( v184 )
    {
      v776 = v184;
      *v184 = *(_DWORD *)v179;
      v180 = RtlULongLongAdd((unsigned __int64)v184, 4LL, (__int64 *)&v776);
      if ( v180 >= 0 )
      {
        memcpy_0(v776, v179[1], *(unsigned int *)v179);
        v186 = RtlULongLongAdd((unsigned __int64)v776, *(unsigned int *)v179, (__int64 *)&v776);
        v8 = 0LL;
        v180 = v186;
        if ( v186 >= 0 )
        {
          v187 = v776;
          *(_DWORD *)v776 = *((_DWORD *)v179 + 4);
          v180 = RtlULongLongAdd((unsigned __int64)v187, 4LL, (__int64 *)&v776);
          if ( v180 >= 0 )
          {
            memcpy_0(v776, v179[3], *((unsigned int *)v179 + 4));
            v188 = RtlULongLongAdd((unsigned __int64)v776, *((unsigned int *)v179 + 4), (__int64 *)&v776);
            v8 = 0LL;
            v180 = v188;
            if ( v188 >= 0 )
            {
              v189 = v776;
              *(_DWORD *)v776 = *((_DWORD *)v179 + 8);
              v180 = RtlULongLongAdd((unsigned __int64)v189, 4LL, (__int64 *)&v776);
              if ( v180 >= 0 )
              {
                memcpy_0(v776, v179[5], *((unsigned int *)v179 + 8));
                v190 = RtlULongLongAdd((unsigned __int64)v776, *((unsigned int *)v179 + 8), (__int64 *)&v776);
                v8 = 0LL;
                v180 = v190;
                if ( v190 >= 0 )
                {
                  v112 = v823;
                  v111 = (size_t)v185;
                  v782 = (size_t)v185;
                  v185 = 0LL;
                }
              }
            }
          }
        }
      }
      if ( v185 )
      {
        v414 = GetProcessHeap();
        HeapFree(v414, 0, v185);
        v8 = 0LL;
      }
    }
    else
    {
      v180 = -1073741801;
    }
  }
  v10 = v180 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_336;
  v191 = (int)v8;
  v888 = v8;
  v852 = (int)v8;
  v192 = (int)v8;
  v889 = v8;
  v853 = (int)v8;
  v822 = 8;
  v193 = RtlUIntAdd(8u, (int)v808, (int *)&v822);
  v10 = v193 | 0x10000000;
  LODWORD(dwBytes) = v193 | 0x10000000;
  if ( v193 >= 0 )
  {
    v195 = (v822 + 7) & 0xFFFFFFF8;
    if ( v195 < v822 )
    {
      v10 = -1073741675;
      LODWORD(dwBytes) = -1073741675;
    }
    else
    {
      v840 = (v822 + 7) & 0xFFFFFFF8;
      v196 = RtlUIntAdd(v195, v194, (int *)&v840);
      v197 = v841;
      v10 = v196;
      LODWORD(dwBytes) = v196;
      if ( v196 >= 0 )
        v197 = v840;
      v841 = v197;
    }
    if ( v10 < 0 )
      goto LABEL_336;
    if ( v784 == v8 || (unsigned int)v783 <= 1 )
    {
      v10 = -1073741811;
      LODWORD(dwBytes) = -1073741811;
    }
    else
    {
      v198 = (unsigned int *)v784;
      k = v784;
      do
      {
        v199 = *v198;
        LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v198, 4LL, (__int64 *)&k);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_561;
        LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, v199, (__int64 *)&k);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_561;
        v198 = (unsigned int *)k;
      }
      while ( v200 == -1 );
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
      {
LABEL_561:
        v8 = 0LL;
        goto LABEL_208;
      }
      v202 = (unsigned __int8 *)k;
      v203 = v201 == 0;
      v191 = v201;
      v8 = 0LL;
      if ( v203 )
        v202 = 0LL;
      v852 = v191;
      v888 = v202;
LABEL_208:
      if ( v10 >= 0 )
      {
        if ( (unsigned int)v783 <= 2 )
        {
          v10 = -1073741811;
          LODWORD(dwBytes) = -1073741811;
        }
        else
        {
          v204 = (unsigned int *)v784;
          k = v784;
          do
          {
            v205 = *v204;
            LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v204, 4LL, (__int64 *)&k);
            v10 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              goto LABEL_564;
            LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, v205, (__int64 *)&k);
            v10 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              goto LABEL_564;
            v204 = (unsigned int *)k;
          }
          while ( (unsigned int)(v207 + 1) < 2 );
          LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k);
          v10 = dwBytes;
          if ( (dwBytes & 0x80000000) != 0LL )
          {
LABEL_564:
            v8 = 0LL;
            goto LABEL_218;
          }
          v209 = (unsigned __int8 *)k;
          v192 = v208;
          v853 = v208;
          if ( !v208 )
            v209 = 0LL;
          v8 = 0LL;
          v889 = v209;
LABEL_218:
          if ( v10 < 0 )
            goto LABEL_336;
          HIDWORD(dwBytes) = 4;
          LODWORD(dwBytes) = RtlUIntAdd(4u, v206, (int *)&dwBytes + 1);
          v10 = dwBytes;
          if ( (dwBytes & 0x80000000) != 0LL
            || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1),
                v10 = dwBytes,
                (dwBytes & 0x80000000) != 0LL)
            || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v191, (int *)&dwBytes + 1),
                v10 = dwBytes,
                (dwBytes & 0x80000000) != 0LL)
            || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1),
                v10 = dwBytes,
                (dwBytes & 0x80000000) != 0LL) )
          {
            v210 = v842;
          }
          else
          {
            v10 = RtlUIntAdd(HIDWORD(dwBytes), v192, (int *)&dwBytes + 1);
            LODWORD(dwBytes) = v10;
            v210 = v842;
            if ( v10 >= 0 )
              v210 = HIDWORD(dwBytes);
            v842 = v210;
          }
          if ( v10 < 0 )
            goto LABEL_336;
          if ( v210 > 0x400000 )
          {
            v10 = -2147418113;
            goto LABEL_335;
          }
          v798 = v210;
        }
      }
    }
  }
  if ( v10 < 0 )
    goto LABEL_336;
  v211 = v798;
  v212 = GetProcessHeap();
  v213 = (const wchar_t *)HeapAlloc(v212, 8u, v211);
  v8 = 0LL;
  if ( v213 )
  {
    v214 = (wchar_t *)v213;
    psza = v213;
    v10 = 0x10000000;
  }
  else
  {
    v214 = (wchar_t *)psza;
    v10 = -805306345;
  }
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_336;
  if ( !v111 || !v214 )
  {
    v10 = -2147024809;
    goto LABEL_335;
  }
  v920 = v798;
  v918[0] = v111;
  v919 = v112;
  v918[1] = v214;
  v921 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
  {
    ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation");
    if ( ProcAddress )
    {
      v216 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v918);
      v217 = v798;
      v10 = v216 | 0x10000000;
      if ( v216 >= 0 )
        v217 = v920;
      v798 = v217;
      goto LABEL_240;
    }
  }
  LastError = GetLastError();
  LODWORD(dwBytes) = LastError;
  v10 = LastError;
  if ( LastError > 0 )
  {
    v10 = (unsigned __int16)LastError | 0x80070000;
    LODWORD(dwBytes) = v10;
  }
  v217 = v798;
  if ( v10 >= 0 )
  {
    v10 = -2147467259;
LABEL_240:
    LODWORD(dwBytes) = v10;
  }
  v8 = 0LL;
  if ( v10 == -805306333 )
  {
    v10 = -2147024774;
    LODWORD(dwBytes) = -2147024774;
    goto LABEL_336;
  }
  if ( v10 < 0 )
    goto LABEL_336;
  k = 0LL;
  LODWORD(dwBytes) = 0;
  v776 = v214;
  if ( v217 < 4 )
    goto LABEL_574;
  v218 = *(_DWORD *)v214;
  v220 = RtlULongLongAdd((unsigned __int64)v214, 4LL, (__int64 *)&v776);
  if ( v220 < 0 )
    goto LABEL_594;
  v220 = RtlUIntAdd(0, v219, (int *)&dwBytes);
  if ( v220 < 0 )
    goto LABEL_594;
  if ( v221 - (int)dwBytes < v218 )
    goto LABEL_574;
  v796 = (SIZE_T)v776;
  v220 = RtlULongLongAdd((unsigned __int64)v776, v218, (__int64 *)&v776);
  if ( v220 < 0 )
    goto LABEL_594;
  v220 = RtlUIntAdd(dwBytes, v222, (int *)&dwBytes);
  if ( v220 < 0 )
    goto LABEL_594;
  if ( (unsigned int)(v223 - dwBytes) < 4 )
    goto LABEL_574;
  v224 = (_DWORD)v8 + 4;
  v225 = *(unsigned int *)v776;
  v220 = RtlULongLongAdd((unsigned __int64)v776, (unsigned int)((_DWORD)v8 + 4), (__int64 *)&v776);
  if ( v220 < 0 )
    goto LABEL_594;
  v220 = RtlUIntAdd(dwBytes, v226, (int *)&dwBytes);
  if ( v220 < 0 )
    goto LABEL_594;
  if ( v227 - (int)dwBytes < (unsigned int)v225 )
    goto LABEL_574;
  v228 = v776;
  v220 = RtlULongLongAdd((unsigned __int64)v776, (unsigned int)v225, (__int64 *)&v776);
  if ( v220 < 0 )
    goto LABEL_594;
  v220 = RtlUIntAdd(dwBytes, v229, (int *)&dwBytes);
  if ( v220 < 0 )
    goto LABEL_594;
  if ( v230 - (int)dwBytes < v224 )
    goto LABEL_574;
  v231 = *(unsigned int *)v776;
  v220 = RtlULongLongAdd((unsigned __int64)v776, v224, (__int64 *)&v776);
  if ( v220 < 0 )
    goto LABEL_594;
  v220 = RtlUIntAdd(dwBytes, v232, (int *)&dwBytes);
  if ( v220 < 0 )
    goto LABEL_594;
  if ( v233 - (int)dwBytes < (unsigned int)v231 )
    goto LABEL_574;
  v220 = RtlUIntAdd(dwBytes, v231, (int *)&dwBytes);
  if ( v220 < 0 )
  {
LABEL_594:
    v246 = v780;
    goto LABEL_279;
  }
  if ( v234 != (_DWORD)dwBytes || v218 + (_DWORD)v231 + (_DWORD)v225 + 12LL != v234 )
  {
LABEL_574:
    v220 = -1073741762;
    goto LABEL_594;
  }
  v235 = GetProcessHeap();
  v236 = HeapAlloc(v235, v224 + 4, v224 + 44);
  v8 = 0LL;
  v237 = v236;
  if ( !v236 )
  {
    v220 = -1073741801;
    goto LABEL_274;
  }
  v238 = (const void *)v796;
  if ( v796 )
  {
    *(_DWORD *)v236 = v218;
    v239 = GetProcessHeap();
    v240 = HeapAlloc(v239, 8u, v218);
    v8 = 0LL;
    if ( !v240 )
      goto LABEL_576;
    v237[1] = v240;
    memcpy_0(v240, v238, v218);
    v8 = 0LL;
  }
  else
  {
    *(_DWORD *)v236 = 0;
    v236[1] = 0LL;
  }
  if ( v228 )
  {
    *((_DWORD *)v237 + 4) = v225;
    v241 = GetProcessHeap();
    v242 = HeapAlloc(v241, 8u, v225);
    v8 = 0LL;
    if ( !v242 )
      goto LABEL_576;
    v237[3] = v242;
    memcpy_0(v242, v228, v225);
    v8 = 0LL;
  }
  else
  {
    *((_DWORD *)v237 + 4) = 0;
    v237[3] = 0LL;
  }
  v243 = v776;
  if ( !v776 )
  {
    *((_DWORD *)v237 + 8) = 0;
    v237[5] = 0LL;
    goto LABEL_272;
  }
  *((_DWORD *)v237 + 8) = v231;
  v244 = GetProcessHeap();
  v245 = HeapAlloc(v244, 8u, v231);
  v8 = 0LL;
  if ( v245 )
  {
    v237[5] = v245;
    memcpy_0(v245, v243, v231);
    v8 = 0LL;
LABEL_272:
    k = v237;
    v220 = 0;
    v237 = 0LL;
    goto LABEL_273;
  }
LABEL_576:
  v220 = -1073741801;
LABEL_273:
  if ( v237 )
  {
    v416 = (void *)v237[1];
    if ( v416 )
    {
      v417 = GetProcessHeap();
      HeapFree(v417, 0, v416);
      v237[1] = 0LL;
    }
    v418 = (void *)v237[3];
    if ( v418 )
    {
      v419 = GetProcessHeap();
      HeapFree(v419, 0, v418);
      v237[3] = 0LL;
    }
    v420 = (void *)v237[5];
    if ( v420 )
    {
      v421 = GetProcessHeap();
      HeapFree(v421, 0, v420);
      v237[5] = 0LL;
    }
    v422 = GetProcessHeap();
    HeapFree(v422, 0, v237);
    v8 = 0LL;
  }
LABEL_274:
  v246 = v780;
  if ( v220 >= 0 )
    v246 = k;
  v780 = v246;
  v247 = 0LL;
  if ( v220 < 0 )
    v247 = k;
  if ( v247 )
  {
    v423 = (void *)v247[1];
    if ( v423 )
    {
      v424 = GetProcessHeap();
      HeapFree(v424, 0, v423);
      v247[1] = 0LL;
    }
    v425 = (void *)v247[3];
    if ( v425 )
    {
      v426 = GetProcessHeap();
      HeapFree(v426, 0, v425);
      v247[3] = 0LL;
    }
    v427 = (void *)v247[5];
    if ( v427 )
    {
      v428 = GetProcessHeap();
      HeapFree(v428, 0, v427);
      v247[5] = 0LL;
    }
    v429 = GetProcessHeap();
    HeapFree(v429, 0, v247);
    v8 = 0LL;
    goto LABEL_594;
  }
LABEL_279:
  v10 = v220 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_336;
  v871 = (SIZE_T)v8;
  v248 = v8;
  v831 = v8;
  if ( !v246 || (v249 = (unsigned __int8 *)*((_QWORD *)v246 + 1), (k = v249) == 0LL) || *v246 == (_DWORD)v8 )
  {
    v10 = -805306355;
    LODWORD(dwBytes) = -805306355;
    goto LABEL_302;
  }
  v250 = (unsigned int)*v246;
  LODWORD(v776) = (_DWORD)v8;
  if ( !v250 )
    goto LABEL_613;
  v251 = v250 - 8;
  v796 = v251;
  v252 = MemoryAlloc(v251);
  v8 = 0LL;
  v803 = v252;
  v253 = v252;
  if ( !v252 )
  {
    v248 = v831;
    goto LABEL_613;
  }
  v254 = 0;
  LOBYTE(v781) = 0;
  v255 = v249;
  v256 = v253;
  v257 = v251 & 7;
  if ( (v251 & 7) == 0 )
  {
    HIDWORD(dwBytes) = 0;
    v258 = -1;
    v259 = 0;
    v789 = 0;
    v260 = 0;
LABEL_287:
    v785 = v259;
    goto LABEL_288;
  }
  v785 = -1;
  v789 = 0;
  v258 = 0;
  HIDWORD(dwBytes) = 0;
  v430 = 0;
  v431 = 0;
  v432 = 56;
  do
  {
    v433 = *v255;
    if ( v431 >= 4 )
      v258 |= v433 << v432;
    else
      v430 |= v433 << (v432 - 32);
    ++v431;
    v432 -= 8;
    ++v255;
  }
  while ( v431 < v257 );
  HIDWORD(dwBytes) = v430;
  v260 = v430 ^ 0x92F65A5;
  v434 = v258 ^ 0x699A899C;
  v789 = v260;
  v785 = v258 ^ 0x699A899C;
  v435 = 0;
  if ( (v251 & 7) != 0 )
  {
    do
    {
      if ( v435 >= 4 )
      {
        v434 = __ROL4__(v434, 8);
        *v256 = v434;
      }
      else
      {
        v260 = __ROL4__(v260, 8);
        *v256 = v260;
      }
      ++v435;
      ++v256;
    }
    while ( v435 < v257 );
    v260 = v789;
    v434 = v785;
  }
  v436 = v257 - 4;
  if ( v436 > 0 )
  {
    v259 = v434 >> (8 * (4 - v436)) << (8 * (4 - v436));
    goto LABEL_287;
  }
  v259 = 0;
  v785 = 0;
  if ( v436 < 0 )
  {
    v260 = v260 >> (-8 * v436) << (-8 * v436);
    v789 = v260;
  }
LABEL_288:
  v261 = v251 >> 3;
  if ( v251 >> 3 )
  {
    v262 = HIDWORD(dwBytes);
    v263 = v256 + 7;
    v264 = v255 + 2;
    do
    {
      v265 = *(v264 - 1) | (*(v264 - 2) << 8);
      v266 = v264[2] << 8;
      v267 = *v264;
      v264 += 8;
      v268 = *(v264 - 7) | ((v267 | (v265 << 8)) << 8);
      v269 = v268 ^ v260;
      v270 = *(v264 - 3) | ((*(v264 - 4) | ((*(v264 - 5) | v266) << 8)) << 8);
      v271 = v259 ^ v269 ^ v270 ^ 0xAC987321;
      v272 = (__ROL4__(v271, 10) + 4991 * __ROL4__(v271 + 1419157410, 5)) ^ v269;
      v273 = (43881 * __ROR4__(v272 + 133239679, 9) - __ROL4__(v272, 2)) ^ v271;
      v274 = (24670 * v273 - (v273 >> 13) - 123127970) ^ v272;
      v275 = (2033 * __ROL4__(v274 ^ 0xAB69, 6) - __ROL4__(v274, 2)) ^ v273;
      v276 = (133239679 - (v275 ^ 0xAB69605E)) ^ v274;
      v277 = (43881 * (v276 ^ 0x137F)) ^ __ROR4__(v276, 6) ^ v275;
      v278 = (__ROL4__(v277, 2) + 24670 * __ROR4__(v277 + 133239679, 15)) ^ v276;
      v279 = (2033 * __ROR4__(v278 + 1419157410, 14) - __ROL4__(v278, 8)) ^ v277;
      v280 = __ROR4__(v279, 10) ^ (4991 * __ROR4__(v279 ^ 0xAB69605E, 12)) ^ v278;
      v281 = (v280 >> 10) ^ (43881 * (v280 ^ 0x7F1)) ^ v279;
      v282 = (2033 * (__ROR4__(~v281, 5) + 24670)) ^ v280;
      v283 = v281 ^ (v282 - 2033) ^ 0xAB69605E;
      v284 = ((v283 >> 2) + 4991 * __ROL4__(v281 ^ (v282 - 2033) ^ 0xAB6967AF, 2)) ^ v282;
      v285 = (__ROL4__(v284, 7) + 43881 * __ROR4__(v284 - 133239679, 6)) ^ v283;
      v286 = (24670 * (v285 ^ 0x137F) + __ROR4__(v285, 9)) ^ v284;
      v287 = (__ROL4__(v286, 7) + 2033 * __ROL4__(v286 ^ 0xAB69, 5)) ^ v285;
      v288 = v287 ^ v286 ^ 0xAC987321;
      v289 = (4991 * (__ROR4__(v288, 3) - 43881)) ^ v287;
      v290 = (24670 * __ROR4__(v289 - 133239679, 1) - __ROR4__(v289, 6)) ^ v288;
      v291 = (__ROL4__(v290, 14) + 2033 * __ROL4__(v290 - 1419157410, 3)) ^ v289;
      v292 = (4991 * __ROL4__(v291 - 1419157410, 15) - __ROR4__(v291, 14)) ^ v290;
      v293 = (v292 >> 3) ^ (43881 * (v292 ^ 0x605E)) ^ v291;
      v785 = v258 ^ v293;
      v258 = v270;
      v294 = v262 ^ __ROL4__(v293, 2) ^ (24670 * __ROL4__(v293 ^ 0x7F1137F, 4));
      v262 = v268;
      v789 = v294 ^ v292;
      *(v263 - 4) = v294 ^ v292;
      v789 = __ROR4__(v789, 8);
      *v263 = v785;
      v263 += 8;
      v785 = __ROR4__(v785, 8);
      *(v263 - 13) = v789;
      v789 = __ROR4__(v789, 8);
      *(v263 - 9) = v785;
      v785 = __ROR4__(v785, 8);
      *(v263 - 14) = v789;
      v789 = __ROR4__(v789, 8);
      *(v263 - 10) = v785;
      v785 = __ROR4__(v785, 8);
      *(v263 - 15) = v789;
      *(v263 - 11) = v785;
      v260 = __ROR4__(v789, 8);
      v259 = __ROR4__(v785, 8);
      v789 = v260;
      v785 = v259;
      --v261;
    }
    while ( v261 );
    v254 = v781;
    v251 = v796;
    v253 = v803;
  }
  v8 = 0LL;
  for ( j = 0LL; j < v251; ++j )
    v254 ^= v253[j];
  if ( v254 == *(_QWORD *)((char *)k + v251) )
  {
    v296 = (int)v776;
    v248 = v253;
    v831 = v253;
    v253 = 0LL;
    v871 = v251;
  }
  else
  {
    v248 = v831;
    v296 = -1073425151;
  }
  if ( v253 )
  {
    MemoryFree(v253);
    v248 = v831;
    v8 = 0LL;
  }
  if ( v296 >= 0 )
  {
    v10 = 0x10000000;
    pcchLength = (size_t)v248;
    v248 = 0LL;
    v831 = 0LL;
    v810 = v871;
    goto LABEL_300;
  }
LABEL_613:
  v10 = -805306367;
LABEL_300:
  LODWORD(dwBytes) = v10;
  if ( v248 )
  {
    v437 = GetProcessHeap();
    HeapFree(v437, 0, v248);
    v8 = 0LL;
    v831 = 0LL;
  }
LABEL_302:
  if ( v10 >= 0 )
  {
    v297 = pcchLength;
    HIDWORD(dwBytes) = (_DWORD)v8;
    k = (void *)pcchLength;
    if ( v810 >= 4 )
    {
      LODWORD(v808) = *(_DWORD *)pcchLength;
      v299 = RtlULongLongAdd(pcchLength, 4LL, (__int64 *)&k);
      if ( v299 < 0 )
        goto LABEL_334;
      v299 = RtlUIntAdd(0, v298, (int *)&dwBytes + 1);
      if ( v299 < 0 )
        goto LABEL_334;
      if ( v810 - HIDWORD(dwBytes) >= v301 )
      {
        v302 = *(unsigned int *)k;
        v299 = RtlULongLongAdd((unsigned __int64)k, v300, (__int64 *)&k);
        if ( v299 < 0 )
          goto LABEL_334;
        v299 = RtlUIntAdd(HIDWORD(dwBytes), v303, (int *)&dwBytes + 1);
        if ( v299 < 0 )
          goto LABEL_334;
        if ( v810 - HIDWORD(dwBytes) >= (unsigned int)v302 )
        {
          v299 = RtlUIntAdd(HIDWORD(dwBytes), v302, (int *)&dwBytes + 1);
          if ( v299 < 0 )
            goto LABEL_334;
          v305 = k;
          if ( v810 + v297 >= (unsigned __int64)k + v302 && v297 + v810 - v302 - (_QWORD)k < 8 )
          {
            HIDWORD(dwBytes) = (_DWORD)v304;
            v306 = v304;
            v299 = (int)v304;
            v307 = (unsigned int)v304;
            if ( !k )
            {
LABEL_326:
              if ( (_DWORD)v302 )
              {
                v314 = GetProcessHeap();
                v306 = HeapAlloc(v314, 8u, v302);
                if ( !v306 )
                {
                  v299 = -1073741801;
                  goto LABEL_332;
                }
                v299 = 0;
              }
              if ( v305 )
                memcpy_0(v306, v305, v302);
              v813 = v306;
              v812 = __PAIR64__(v302, v307);
LABEL_332:
              if ( v299 < 0 || (_DWORD)v808 == (_DWORD)v812 )
                goto LABEL_334;
              goto LABEL_616;
            }
            v299 = RtlULongLongAdd((unsigned __int64)k, (unsigned int)v302, (__int64 *)&v796);
            if ( v299 < 0 )
              goto LABEL_332;
            v309 = v796;
            if ( (unsigned __int64)v305 < v796 )
            {
              do
              {
                v299 = RtlULongLongAdd((unsigned __int64)v308, 4LL, (__int64 *)&v796);
                if ( v299 < 0 )
                  goto LABEL_332;
                if ( v796 > v309 )
                  goto LABEL_614;
                v311 = RtlUIntAdd(4u, *v310, (int *)&v776);
                v299 = v311;
                if ( v311 >= 0 )
                  v313 = (unsigned int)v776;
                v854 = v313;
                if ( v311 < 0 )
                  goto LABEL_334;
                v299 = RtlULongLongAdd(v312, v313, (__int64 *)&v803);
                if ( v299 < 0 )
                  goto LABEL_334;
                v308 = v803;
                if ( (unsigned __int64)v803 > v309 )
                  goto LABEL_614;
                ++HIDWORD(dwBytes);
              }
              while ( (unsigned __int64)v803 < v309 );
            }
            if ( v308 == (void *)v309 )
            {
              v307 = HIDWORD(dwBytes);
              goto LABEL_326;
            }
LABEL_614:
            v299 = -1073741811;
LABEL_334:
            v10 = v299 | 0x10000000;
            v8 = 0LL;
LABEL_335:
            LODWORD(dwBytes) = v10;
            goto LABEL_336;
          }
        }
      }
    }
LABEL_616:
    v299 = -1073741762;
    goto LABEL_334;
  }
LABEL_336:
  v315 = v800;
  if ( v800 )
  {
    v316 = GetProcessHeap();
    HeapFree(v316, 0, v315);
    v8 = 0LL;
  }
  v317 = v845;
  if ( v845 )
  {
    v318 = (void *)*((_QWORD *)v845 + 1);
    if ( v318 )
    {
      v319 = GetProcessHeap();
      HeapFree(v319, 0, v318);
      v317[1] = 0LL;
    }
    v320 = (void *)v317[3];
    if ( v320 )
    {
      v321 = GetProcessHeap();
      HeapFree(v321, 0, v320);
      v317[3] = 0LL;
    }
    v322 = (void *)v317[5];
    if ( v322 )
    {
      v323 = GetProcessHeap();
      HeapFree(v323, 0, v322);
      v317[5] = 0LL;
    }
    v324 = GetProcessHeap();
    HeapFree(v324, 0, v317);
    v8 = 0LL;
    v845 = 0LL;
  }
  v325 = (void *)v782;
  if ( v782 )
  {
    v326 = GetProcessHeap();
    HeapFree(v326, 0, v325);
    v8 = 0LL;
  }
  v327 = (wchar_t *)psza;
  if ( psza )
  {
    v328 = GetProcessHeap();
    HeapFree(v328, 0, v327);
    v8 = 0LL;
  }
  v329 = v780;
  if ( v780 )
  {
    v330 = (void *)*((_QWORD *)v780 + 1);
    if ( v330 )
    {
      v331 = GetProcessHeap();
      HeapFree(v331, 0, v330);
      v329[1] = 0LL;
    }
    v332 = (void *)v329[3];
    if ( v332 )
    {
      v333 = GetProcessHeap();
      HeapFree(v333, 0, v332);
      v329[3] = 0LL;
    }
    v334 = (void *)v329[5];
    if ( v334 )
    {
      v335 = GetProcessHeap();
      HeapFree(v335, 0, v334);
      v329[5] = 0LL;
    }
    v336 = GetProcessHeap();
    HeapFree(v336, 0, v329);
    v8 = 0LL;
  }
  v337 = (void *)pcchLength;
  if ( pcchLength )
  {
    v338 = GetProcessHeap();
    HeapFree(v338, 0, v337);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_443;
  if ( !(_DWORD)v812 )
    goto LABEL_617;
  if ( v813 == v8 || (unsigned int)v812 <= (unsigned int)v8 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
  }
  else
  {
    pcchLength = (size_t)v813;
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v813, 4LL, (__int64 *)&pcchLength);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v339 = v855;
      v340 = v891;
    }
    else
    {
      v340 = (int *)pcchLength;
      v855 = v339;
      if ( !v339 )
        v340 = (int *)v8;
      v891 = v340;
    }
    if ( (dwBytes & 0x80000000) != 0LL )
      goto LABEL_443;
    if ( v339 != 4 )
      goto LABEL_620;
    v815 = *v340;
  }
  if ( v10 < 0 )
    goto LABEL_443;
  v10 = v815;
  if ( v815 == -805306333 )
    v10 = -2147024774;
  LODWORD(dwBytes) = v10;
  v815 = v10;
  if ( v10 != -2147024774 && v10 < 0 )
    goto LABEL_443;
  if ( (_DWORD)v812 != 6 )
  {
LABEL_617:
    v10 = -1073425151;
    goto LABEL_442;
  }
  if ( v813 == v8 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
    goto LABEL_389;
  }
  v341 = v813;
  k = v813;
  do
  {
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v341, 4LL, (__int64 *)&k);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v8 = 0LL;
      goto LABEL_623;
    }
    v343 = RtlULongLongAdd((unsigned __int64)k, v342, (__int64 *)&k);
    v8 = 0LL;
    LODWORD(dwBytes) = v343;
    v10 = v343;
    if ( v343 < 0 )
      goto LABEL_623;
    v341 = k;
  }
  while ( v344 == -1 );
  LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
  {
LABEL_623:
    v345 = v856;
    v346 = v892;
    goto LABEL_386;
  }
  v346 = k;
  v856 = v345;
  if ( !v345 )
    v346 = v8;
  v892 = v346;
LABEL_386:
  if ( v10 < 0 )
    goto LABEL_443;
  if ( v345 != 8 )
    goto LABEL_620;
  v897 = *v346;
LABEL_389:
  if ( v10 < 0 )
    goto LABEL_443;
  if ( v813 == v8 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
LABEL_402:
    if ( v10 < 0 )
      goto LABEL_443;
    if ( v813 == v8 )
    {
      v10 = -1073741811;
      goto LABEL_442;
    }
    v353 = v813;
    k = v813;
    do
    {
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v353, 4LL, (__int64 *)&k);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_628;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, v354, (__int64 *)&k);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_628;
      v353 = k;
    }
    while ( (unsigned int)(v355 + 1) < 3 );
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
LABEL_628:
      v357 = v894;
      goto LABEL_412;
    }
    v357 = k;
    v858 = v356;
    if ( !v356 )
      v357 = 0LL;
    v894 = v357;
LABEL_412:
    if ( v10 < 0 )
      goto LABEL_633;
    v358 = (unsigned int *)v813;
    k = v813;
    do
    {
      v359 = *v358;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v358, 4LL, (__int64 *)&k);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_629;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, v359, (__int64 *)&k);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_629;
      v358 = (unsigned int *)k;
    }
    while ( (unsigned int)(v360 + 1) < 4 );
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
LABEL_629:
      v361 = v859;
      v362 = v895;
      goto LABEL_421;
    }
    v362 = (unsigned int *)k;
    v859 = v361;
    if ( !v361 )
      v362 = 0LL;
    v895 = v362;
LABEL_421:
    if ( v10 < 0 )
    {
      v363 = v860;
    }
    else
    {
      if ( v361 != 4 )
        goto LABEL_630;
      v363 = *v362;
      v860 = *v362;
    }
    if ( v10 < 0 )
      goto LABEL_633;
    v364 = (unsigned int *)v813;
    k = v813;
    do
    {
      v365 = *v364;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v364, 4LL, (__int64 *)&k);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_635;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, v365, (__int64 *)&k);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_635;
      v364 = (unsigned int *)k;
    }
    while ( (unsigned int)(v367 + 1) < 5 );
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
LABEL_635:
      v368 = v862;
      v369 = v896;
      goto LABEL_433;
    }
    v369 = k;
    v862 = v368;
    if ( !v368 )
      v369 = 0LL;
    v896 = v369;
LABEL_433:
    if ( v10 < 0 )
    {
      v370 = v833;
LABEL_436:
      if ( v10 >= 0 )
      {
        if ( v872 == v897 )
        {
          v838 = v863;
          v837 = v363;
          v821 = v370;
          if ( v363 <= 4 && v366 <= 4 )
          {
            memcpy_0(v877, v357, v366);
            v8 = 0LL;
            if ( v815 )
              v10 = v815;
            goto LABEL_442;
          }
          v10 = -2147024774;
        }
        else
        {
          v10 = -1073425151;
        }
        goto LABEL_632;
      }
LABEL_633:
      v8 = 0LL;
      goto LABEL_443;
    }
    if ( v368 == 4 )
    {
      v370 = *v369;
      v833 = *v369;
      goto LABEL_436;
    }
LABEL_630:
    v10 = -1073741789;
LABEL_632:
    LODWORD(dwBytes) = v10;
    goto LABEL_633;
  }
  v347 = v813;
  k = v813;
  do
  {
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v347, 4LL, (__int64 *)&k);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v8 = 0LL;
      goto LABEL_626;
    }
    v349 = RtlULongLongAdd((unsigned __int64)k, v348, (__int64 *)&k);
    v8 = 0LL;
    LODWORD(dwBytes) = v349;
    v10 = v349;
    if ( v349 < 0 )
      goto LABEL_626;
    v347 = k;
  }
  while ( (unsigned int)(v350 + 1) < 2 );
  LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
  {
LABEL_626:
    v351 = v857;
    v352 = v893;
    goto LABEL_399;
  }
  v352 = k;
  v857 = v351;
  if ( !v351 )
    v352 = v8;
  v893 = v352;
LABEL_399:
  if ( v10 >= 0 )
  {
    if ( v351 == 4 )
    {
      v863 = *v352;
      goto LABEL_402;
    }
LABEL_620:
    v10 = -1073741789;
LABEL_442:
    LODWORD(dwBytes) = v10;
  }
LABEL_443:
  v4 = v778;
LABEL_444:
  v5 = v779;
LABEL_445:
  v783 = 0LL;
  v371 = v784;
  if ( v784 )
  {
    v372 = GetProcessHeap();
    HeapFree(v372, 0, v371);
    v8 = 0LL;
    v784 = 0LL;
  }
  v812 = 0LL;
  v373 = v813;
  if ( v813 )
  {
    v374 = GetProcessHeap();
    HeapFree(v374, 0, v373);
    v8 = 0LL;
    v813 = 0LL;
  }
  if ( v4 )
  {
    v375 = GetProcessHeap();
    HeapFree(v375, 0, v4);
    v8 = 0LL;
  }
  if ( v5 )
  {
    v376 = GetProcessHeap();
    HeapFree(v376, 0, v5);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_1041;
  if ( v821 == (_DWORD)v8 )
    goto LABEL_455;
  v778 = v8;
  v794 = 0LL;
  v438 = v8;
  v795 = 0LL;
  v439 = v8;
  v843 = 0LL;
  v844 = 0LL;
  v819 = (int)v8;
  v898 = &unk_1800BE540;
  v873 = 160LL;
  v440 = GetProcessHeap();
  v441 = HeapAlloc(v440, 8u, 0xA0uLL);
  v8 = 0LL;
  v442 = v441;
  if ( !v441 )
    goto LABEL_1031;
  memcpy_0(v441, v898, v873);
  v443 = (unsigned int)v873;
  v438 = v442;
  v779 = v442;
  v874 = 8LL;
  v899 = &unk_1800BE480;
  v444 = GetProcessHeap();
  v445 = HeapAlloc(v444, 8u, 8uLL);
  v8 = 0LL;
  v446 = v445;
  if ( !v445 )
    goto LABEL_1030;
  memcpy_0(v445, v899, v874);
  v447 = v874;
  v778 = v446;
  v900 = __rdtsc();
  HIDWORD(dwBytes) = 0;
  if ( (int)RtlUIntAdd(4u, 4, (int *)&v776) < 0 )
    goto LABEL_678;
  v820 = (int)v776;
  if ( (int)RtlUIntAdd(0, (int)v776, (int *)&dwBytes + 1) < 0 )
    goto LABEL_678;
  if ( (int)RtlUIntAdd(v448, v443, (int *)&v776) < 0 )
    goto LABEL_678;
  v820 = (int)v776;
  if ( (int)RtlUIntAdd(HIDWORD(dwBytes), (int)v776, (int *)&dwBytes + 1) < 0 )
    goto LABEL_678;
  if ( (int)RtlUIntAdd(v449, v447, (int *)&v776) < 0 )
    goto LABEL_678;
  v820 = (int)v776;
  if ( (int)RtlUIntAdd(HIDWORD(dwBytes), (int)v776, (int *)&dwBytes + 1) < 0 )
    goto LABEL_678;
  if ( (int)RtlUIntAdd(v450, (int)v8 + 8, (int *)&v776) < 0 )
    goto LABEL_678;
  v820 = (int)v776;
  if ( (int)RtlUIntAdd(HIDWORD(dwBytes), (int)v776, (int *)&dwBytes + 1) < 0 )
    goto LABEL_678;
  HIDWORD(v794) = HIDWORD(dwBytes);
  v451 = HIDWORD(dwBytes);
  v452 = GetProcessHeap();
  v453 = HeapAlloc(v452, 8u, v451);
  v8 = 0LL;
  if ( !v453 )
    goto LABEL_678;
  v795 = v453;
  LODWORD(v794) = 0;
  v865 = 4;
  if ( (int)RtlULongLongAdd((unsigned __int64)v453, 4LL, (__int64 *)&v797) < 0
    || v454 + 2 > (_DWORD *)((char *)v454 + HIDWORD(v794)) )
  {
    goto LABEL_678;
  }
  v455 = v797;
  *v454 = 4;
  *v455 = v865;
  v456 = v794 + 1;
  LODWORD(v794) = v794 + 1;
  if ( !(_DWORD)v443 )
  {
    v462 = -1073741811;
    goto LABEL_664;
  }
  if ( v795 != v8 )
  {
    v457 = (int *)v795;
    pcchLength = (size_t)v795;
    v458 = 0;
    if ( v456 )
    {
      while ( (int)RtlUIntAdd(4u, *v457, (int *)&v776) >= 0 )
      {
        v866 = (int)v776;
        v460 = RtlULongLongAdd(v459, (unsigned int)v776, (__int64 *)&pcchLength);
        v8 = 0LL;
        if ( v460 < 0 )
          goto LABEL_678;
        v457 = (int *)pcchLength;
        if ( ++v458 >= v461 )
          goto LABEL_660;
      }
      goto LABEL_677;
    }
LABEL_660:
    v462 = RtlULongLongAdd((unsigned __int64)v457, 4LL, (__int64 *)&v797);
    if ( v462 < 0 )
      goto LABEL_677;
    if ( (char *)v463 + v443 + 4 > (char *)v795 + HIDWORD(v794) )
      goto LABEL_1040;
    v464 = v797;
    *v463 = v443;
    memcpy_0(v464, v442, v443);
    v456 = v794 + 1;
    LODWORD(v794) = v794 + 1;
    v8 = 0LL;
LABEL_664:
    if ( v462 < 0 )
      goto LABEL_678;
LABEL_665:
    if ( !v447 )
    {
      v470 = -1073741811;
LABEL_680:
      if ( v470 < 0 )
        goto LABEL_678;
LABEL_681:
      v901 = v900;
      if ( v795 == v8 )
      {
        if ( (int)RtlUIntAdd(4u, 8, (int *)&v776) < 0 )
          goto LABEL_678;
        v868 = (int)v776;
        if ( (int)RtlUIntAdd(HIDWORD(v794), (int)v776, (int *)&v794 + 1) < 0 )
          goto LABEL_678;
        LODWORD(v794) = v794 + 1;
        goto LABEL_692;
      }
      v473 = (int *)v795;
      pcchLength = (size_t)v795;
      v474 = 0;
      if ( v456 )
      {
        while ( (int)RtlUIntAdd(4u, *v473, (int *)&v776) >= 0 )
        {
          v868 = (int)v776;
          v476 = RtlULongLongAdd(v475, (unsigned int)v776, (__int64 *)&pcchLength);
          v8 = 0LL;
          if ( v476 < 0 )
            goto LABEL_678;
          v473 = (int *)pcchLength;
          if ( ++v474 >= v477 )
            goto LABEL_689;
        }
        goto LABEL_677;
      }
LABEL_689:
      if ( (int)RtlULongLongAdd((unsigned __int64)v473, 4LL, (__int64 *)&v797) >= 0
        && v478 + 3 <= (_DWORD *)((char *)v795 + HIDWORD(v794)) )
      {
        v479 = v797;
        *v478 = 8;
        *v479 = v901;
        LODWORD(v794) = v794 + 1;
LABEL_692:
        if ( (int)RtlUIntAdd(4u, 4, (int *)&v776) < 0 )
          goto LABEL_678;
        v869 = (int)v776;
        LODWORD(v808) = (_DWORD)v776;
        if ( (int)RtlUIntAdd(v480, 8, (int *)&v776) < 0 )
          goto LABEL_678;
        v869 = (int)v776;
        if ( (int)RtlUIntAdd(v481, (int)v776, (int *)&v808) < 0 )
          goto LABEL_678;
        k = v8;
        v482 = (unsigned int)v8;
        v846 = v8;
        pcchLength = (size_t)v8;
        v483 = v8;
        LODWORD(v776) = (_DWORD)v8;
        psza = (STRSAFE_PCNZWCH)v8;
        v799 = (unsigned int)v8;
        v800 = v8;
        v816 = v8;
        v811 = (unsigned int)v8;
        v875 = __rdtsc();
        v806 = 8;
        v484 = RtlUIntAdd(8u, SHIDWORD(v794), (int *)&v806);
        if ( v484 >= 0 )
        {
          v486 = (v806 + 7) & 0xFFFFFFF8;
          if ( v486 >= v806 )
          {
            v806 = (v806 + 7) & 0xFFFFFFF8;
            v487 = v486;
            v488 = GetProcessHeap();
            v489 = (char *)HeapAlloc(v488, 8u, v487);
            v8 = 0LL;
            v490 = v489;
            if ( v489 )
            {
              *(_DWORD *)v489 = v794;
              v782 = (size_t)v489;
              v484 = RtlULongLongAdd((unsigned __int64)v489, 4LL, (__int64 *)&v782);
              if ( v484 < 0
                || (v492 = v782,
                    *(_DWORD *)v782 = HIDWORD(v794),
                    v484 = RtlULongLongAdd(v492, v491, (__int64 *)&v782),
                    v484 < 0) )
              {
                v485 = v483;
              }
              else
              {
                *(_QWORD *)&v490[v806 - 8] = v875;
                memcpy_0((void *)v782, v795, HIDWORD(v794));
                v482 = v806;
                v8 = 0LL;
                v485 = v490;
                k = v490;
                v490 = 0LL;
              }
              if ( v490 )
              {
                v493 = GetProcessHeap();
                HeapFree(v493, 0, v490);
                v485 = k;
                v8 = 0LL;
              }
            }
            else
            {
              v484 = -1073741801;
              v485 = v483;
            }
          }
          else
          {
            v484 = -1073741675;
          }
        }
        v494 = v484 | 0x10000000;
        if ( v494 < 0 )
          goto LABEL_986;
        v903 = (__int64 *)v8;
        v495 = v8;
        v904 = (__int64)v8;
        v905 = v8;
        v906 = (__int64)v8;
        v849 = v8;
        v902 = v8;
        v803 = v8;
        if ( v485 )
        {
          v497 = v482;
          v782 = v482;
          if ( v482 && (v498 = MemoryAlloc(v482 + 8LL), v8 = 0LL, v780 = v498, (v499 = v498) != 0LL) )
          {
            v500 = 0;
            v203 = v482 == 0;
            v501 = (unsigned __int8 *)k;
            v502 = 0LL;
            LOBYTE(v781) = 0;
            if ( !v203 )
            {
              do
                v500 ^= *((_BYTE *)k + v502++);
              while ( v502 < v497 );
              LOBYTE(v781) = v500;
            }
            v503 = -1;
            v504 = v499;
            v788 = -1;
            v807 = 0;
            HIDWORD(dwBytes) = 0;
            v505 = 0;
            v792 = 0;
            v506 = v497 & 7;
            if ( (v497 & 7) != 0 )
            {
              v507 = 0;
              v807 = 0;
              v508 = 0;
              HIDWORD(dwBytes) = 0;
              v509 = 56;
              do
              {
                v510 = *v501;
                if ( v508 >= 4 )
                {
                  v511 = HIDWORD(dwBytes);
                  v507 |= v510 << v509;
                }
                else
                {
                  v511 = (v510 << (v509 - 32)) | HIDWORD(dwBytes);
                  HIDWORD(dwBytes) = v511;
                }
                ++v508;
                v509 -= 8;
                ++v501;
              }
              while ( v508 < v506 );
              v807 = v507;
              v512 = v507 ^ 0x42F6B18D;
              v505 = v511 ^ 0xB17A307A;
              v788 = v512;
              v792 = v511 ^ 0xB17A307A;
              v513 = 0;
              if ( (v497 & 7) != 0 )
              {
                do
                {
                  if ( v513 >= 4 )
                  {
                    v512 = __ROL4__(v512, 8);
                    *v504 = v512;
                  }
                  else
                  {
                    v505 = __ROL4__(v505, 8);
                    *v504 = v505;
                  }
                  ++v513;
                  ++v504;
                }
                while ( v513 < v506 );
                v505 = v792;
                v512 = v788;
              }
              v514 = v506 - 4;
              if ( v514 <= 0 )
              {
                v503 = 0;
                v788 = 0;
                if ( v514 < 0 )
                {
                  v505 = v505 >> (-8 * v514) << (-8 * v514);
                  v792 = v505;
                }
              }
              else
              {
                v503 = v512 >> (8 * (4 - v514)) << (8 * (4 - v514));
                v788 = v503;
              }
            }
            v515 = v497 >> 3;
            if ( v497 >> 3 )
            {
              v516 = v807;
              v517 = v501 + 2;
              v518 = HIDWORD(dwBytes);
              v519 = v504 + 7;
              v520 = v515;
              do
              {
                v521 = v517[1] | ((*v517 | ((*(v517 - 1) | (*(v517 - 2) << 8)) << 8)) << 8);
                v522 = v517[5];
                v523 = (v517[4] | ((v517[3] | (v517[2] << 8)) << 8)) << 8;
                v517 += 8;
                v524 = v522 | v523;
                v525 = v524 ^ v503;
                v526 = v521 ^ v505 ^ (v525 - 19032) ^ 0xC81ECB17;
                v527 = (__ROR4__(v526, 7) + 45493 * __ROR4__(v521 ^ v505 ^ (v525 - 19032), 15)) ^ v525;
                v528 = (51991 * __ROR4__(v527 - 1313519016, 9) - __ROR4__(v527, 10)) ^ v526;
                v529 = (__ROL4__(v528, 5) + 51230 * __ROL4__(v528 ^ 0xCB17, 4)) ^ v527;
                v530 = (-937506025 - (v529 ^ 0xB1B54A58)) ^ v528;
                v531 = (45493 * v530 - (v530 >> 6) - 865822776) ^ v529;
                v532 = (19032 * (__ROR4__(v531, 15) ^ 0xCB17)) ^ v530;
                v533 = (51991 * (__ROR4__(~v532, 3) + 51230)) ^ v531;
                v534 = (v533 + 937486993) ^ v532;
                v535 = (45493 * (v534 ^ 0xC81E)) ^ __ROR4__(v534, 10) ^ v533;
                v536 = __ROR4__(v535, 3) ^ (51991 * __ROL4__(v535 ^ 0x4A58, 6)) ^ v534;
                v537 = (19032 * (__ROR4__(v536, 15) - 51230)) ^ v535;
                v538 = (v537 >> 15) ^ (19032 * __ROL4__(v537 - 51991, 3)) ^ (v537 >> 1) ^ (19032 * (v537 ^ 0xC81E)) ^ v536;
                v539 = (45493 * v538 - (v538 >> 13) + 1929740733) ^ v537;
                v540 = __ROR4__(v539, 11) ^ (51991 * __ROR4__(-1313519016 - v539, 9)) ^ v538;
                v541 = (v540 + 1313467786) ^ v539;
                v542 = (19032 * (v541 ^ 0xB1B5) - __ROR4__(v541, 7)) ^ v540;
                v543 = (45493 * __ROL4__(v542 ^ 0xC81E, 4) - __ROR4__(v542, 16)) ^ v541;
                v544 = (__ROR4__(v543, 4) + 51991 * __ROR4__(-1313519016 - v543, 10)) ^ v542;
                v545 = __ROR4__(v544, 9) ^ (51230 * __ROR4__(v544 + 1313519016, 4)) ^ v543;
                v546 = (19032 * __ROL4__(v545 ^ 0xC81ECB17, 8) - __ROL4__(v545, 2)) ^ v544;
                v547 = (45493 * __ROR4__(-937506025 - v546, 11) - __ROR4__(v546, 12)) ^ v545;
                v548 = 51991 * (v547 ^ 0xB1B5);
                v549 = v547 >> 8;
                v550 = v516 ^ v547;
                v516 = v524;
                v551 = v549 ^ v548 ^ v546;
                v792 = v518 ^ v551;
                v518 = v521;
                v788 = v551 ^ v550 ^ 0x79AB814F;
                *(v519 - 4) = v792;
                v792 = __ROR4__(v792, 8);
                *v519 = v788;
                v519 += 8;
                v788 = __ROR4__(v788, 8);
                *(v519 - 13) = v792;
                v792 = __ROR4__(v792, 8);
                *(v519 - 9) = v788;
                v788 = __ROR4__(v788, 8);
                *(v519 - 14) = v792;
                v792 = __ROR4__(v792, 8);
                *(v519 - 10) = v788;
                v788 = __ROR4__(v788, 8);
                *(v519 - 15) = v792;
                *(v519 - 11) = v788;
                v505 = __ROR4__(v792, 8);
                v503 = __ROR4__(v788, 8);
                v792 = v505;
                v788 = v503;
                --v520;
              }
              while ( v520 );
              v500 = v781;
              v495 = v803;
              v483 = v800;
              v497 = v782;
            }
            v552 = v780;
            v553 = v497 + 8;
            *(_QWORD *)((char *)v780 + v497) = v500;
            v849 = v552;
            v902 = (unsigned __int8 *)(v497 + 8);
            v903 = &qword_1800BE530;
            v904 = 8LL;
            v906 = 160LL;
            v905 = (unsigned __int8 *)xmmword_1800BE490;
            v554 = GetProcessHeap();
            v555 = HeapAlloc(v554, 8u, 0x30uLL);
            v8 = 0LL;
            v556 = v555;
            if ( v555 )
            {
              *v555 = v553;
              v557 = GetProcessHeap();
              v558 = HeapAlloc(v557, 8u, v553);
              v8 = 0LL;
              if ( !v558 )
                goto LABEL_740;
              *((_QWORD *)v556 + 1) = v558;
              memcpy_0(v558, v552, v553);
              v556[4] = 160;
              v559 = GetProcessHeap();
              v560 = HeapAlloc(v559, 8u, 0xA0uLL);
              v8 = 0LL;
              if ( !v560 )
                goto LABEL_740;
              *((_QWORD *)v556 + 3) = v560;
              *v560 = xmmword_1800BE490[0];
              v560[1] = xmmword_1800BE490[1];
              v560[2] = xmmword_1800BE490[2];
              v560[3] = xmmword_1800BE490[3];
              v560[4] = xmmword_1800BE490[4];
              v560[5] = xmmword_1800BE490[5];
              v560[6] = xmmword_1800BE490[6];
              v560[7] = xmmword_1800BE490[7];
              v560[8] = xmmword_1800BE490[8];
              v560[9] = xmmword_1800BE490[9];
              v556[8] = 8;
              v561 = GetProcessHeap();
              v562 = HeapAlloc(v561, 8u, 8uLL);
              v8 = 0LL;
              if ( v562 )
              {
                *((_QWORD *)v556 + 5) = v562;
                v495 = v556;
                *v562 = qword_1800BE530;
                v496 = 0;
                v556 = 0LL;
              }
              else
              {
LABEL_740:
                v496 = -1073741801;
              }
              if ( v556 )
              {
                v563 = (void *)*((_QWORD *)v556 + 1);
                if ( v563 )
                {
                  v564 = GetProcessHeap();
                  HeapFree(v564, 0, v563);
                  *((_QWORD *)v556 + 1) = 0LL;
                }
                v565 = (void *)*((_QWORD *)v556 + 3);
                if ( v565 )
                {
                  v566 = GetProcessHeap();
                  HeapFree(v566, 0, v565);
                  *((_QWORD *)v556 + 3) = 0LL;
                }
                v567 = (void *)*((_QWORD *)v556 + 5);
                if ( v567 )
                {
                  v568 = GetProcessHeap();
                  HeapFree(v568, 0, v567);
                  *((_QWORD *)v556 + 5) = 0LL;
                }
                v569 = GetProcessHeap();
                HeapFree(v569, 0, v556);
                v8 = 0LL;
              }
            }
            else
            {
              v496 = -1073741801;
            }
            if ( v496 >= 0 )
            {
              v846 = v495;
              v495 = 0LL;
            }
          }
          else
          {
            v496 = -1073741823;
          }
          v570 = v849;
          if ( v849 )
          {
            v571 = GetProcessHeap();
            HeapFree(v571, 0, v570);
            v8 = 0LL;
            v849 = 0LL;
          }
          if ( v495 )
          {
            v572 = (void *)v495[1];
            if ( v572 )
            {
              v573 = GetProcessHeap();
              HeapFree(v573, 0, v572);
              v495[1] = 0LL;
            }
            v574 = (void *)v495[3];
            if ( v574 )
            {
              v575 = GetProcessHeap();
              HeapFree(v575, 0, v574);
              v495[3] = 0LL;
            }
            v576 = (void *)v495[5];
            if ( v576 )
            {
              v577 = GetProcessHeap();
              HeapFree(v577, 0, v576);
              v495[5] = 0LL;
            }
            v578 = GetProcessHeap();
            HeapFree(v578, 0, v495);
            v8 = 0LL;
          }
        }
        else
        {
          v496 = -1073741811;
        }
        v494 = v496 | 0x10000000;
        if ( v494 < 0 )
          goto LABEL_986;
        v579 = (const void **)v846;
        HIDWORD(dwBytes) = 4;
        v580 = RtlUIntAdd(4u, *(_DWORD *)v846, (int *)&dwBytes + 1);
        if ( v580 < 0
          || (v580 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v580 < 0)
          || (v580 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v579 + 4), (int *)&dwBytes + 1), v580 < 0)
          || (v580 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v580 < 0) )
        {
          v581 = v817;
        }
        else
        {
          v580 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v579 + 8), (int *)&dwBytes + 1);
          v581 = v817;
          if ( v580 >= 0 )
            v581 = HIDWORD(dwBytes);
          v817 = v581;
        }
        if ( v580 >= 0 )
        {
          v582 = v581;
          v583 = GetProcessHeap();
          v584 = HeapAlloc(v583, 8u, v582);
          v8 = 0LL;
          v585 = v584;
          if ( v584 )
          {
            v586 = *(_DWORD *)v579;
            v780 = v585;
            *v585 = v586;
            v580 = RtlULongLongAdd((unsigned __int64)v585, 4LL, (__int64 *)&v780);
            if ( v580 >= 0 )
            {
              memcpy_0(v780, v579[1], *(unsigned int *)v579);
              v587 = RtlULongLongAdd((unsigned __int64)v780, *(unsigned int *)v579, (__int64 *)&v780);
              v8 = 0LL;
              v580 = v587;
              if ( v587 >= 0 )
              {
                v588 = v780;
                *(_DWORD *)v780 = *((_DWORD *)v579 + 4);
                v580 = RtlULongLongAdd((unsigned __int64)v588, 4LL, (__int64 *)&v780);
                if ( v580 >= 0 )
                {
                  memcpy_0(v780, v579[3], *((unsigned int *)v579 + 4));
                  v589 = RtlULongLongAdd((unsigned __int64)v780, *((unsigned int *)v579 + 4), (__int64 *)&v780);
                  v8 = 0LL;
                  v580 = v589;
                  if ( v589 >= 0 )
                  {
                    v590 = v780;
                    *(_DWORD *)v780 = *((_DWORD *)v579 + 8);
                    v580 = RtlULongLongAdd((unsigned __int64)v590, 4LL, (__int64 *)&v780);
                    if ( v580 >= 0 )
                    {
                      memcpy_0(v780, v579[5], *((unsigned int *)v579 + 8));
                      v591 = RtlULongLongAdd((unsigned __int64)v780, *((unsigned int *)v579 + 8), (__int64 *)&v780);
                      v8 = 0LL;
                      v580 = v591;
                      if ( v591 >= 0 )
                      {
                        pcchLength = (size_t)v585;
                        v585 = 0LL;
                        LODWORD(v776) = v817;
                      }
                    }
                  }
                }
              }
            }
            if ( v585 )
            {
              v592 = GetProcessHeap();
              HeapFree(v592, 0, v585);
              v8 = 0LL;
            }
          }
          else
          {
            v580 = -1073741801;
          }
        }
        v494 = v580 | 0x10000000;
        if ( v494 < 0 )
          goto LABEL_986;
        v907 = v8;
        v593 = (int)v8;
        v870 = (int)v8;
        v594 = (int)v8;
        v908 = v8;
        v847 = (int)v8;
        v830 = 8;
        v595 = RtlUIntAdd(8u, (int)v808, (int *)&v830);
        v494 = v595 | 0x10000000;
        if ( v595 >= 0 )
        {
          v597 = (v830 + 7) & 0xFFFFFFF8;
          if ( v597 >= v830 )
          {
            v834 = (v830 + 7) & 0xFFFFFFF8;
            v598 = RtlUIntAdd(v597, v596, (int *)&v834);
            v599 = v835;
            v494 = v598;
            if ( v598 >= 0 )
              v599 = v834;
            v835 = v599;
          }
          else
          {
            v494 = -1073741675;
          }
          if ( v494 < 0 )
            goto LABEL_986;
          if ( v795 == v8 || (unsigned int)v794 <= 1 )
            goto LABEL_801;
          v600 = (unsigned int *)v795;
          v780 = v795;
          do
          {
            v601 = *v600;
            v494 = RtlULongLongAdd((unsigned __int64)v600, 4LL, (__int64 *)&v780);
            if ( v494 < 0 )
              goto LABEL_802;
            v494 = RtlULongLongAdd((unsigned __int64)v780, v601, (__int64 *)&v780);
            if ( v494 < 0 )
              goto LABEL_802;
            v600 = (unsigned int *)v780;
          }
          while ( v602 == -1 );
          v494 = RtlULongLongAdd((unsigned __int64)v780, 4LL, (__int64 *)&v780);
          if ( v494 < 0 )
          {
LABEL_802:
            v8 = 0LL;
            goto LABEL_803;
          }
          v604 = (unsigned __int8 *)v780;
          v593 = v603;
          v870 = v603;
          if ( !v603 )
            v604 = 0LL;
          v8 = 0LL;
          v907 = v604;
LABEL_803:
          if ( v494 < 0 )
            goto LABEL_986;
          if ( (unsigned int)v794 <= 2 )
          {
LABEL_801:
            v494 = -1073741811;
          }
          else
          {
            v605 = (unsigned int *)v795;
            v780 = v795;
            do
            {
              v606 = *v605;
              v494 = RtlULongLongAdd((unsigned __int64)v605, 4LL, (__int64 *)&v780);
              if ( v494 < 0 )
                goto LABEL_813;
              v494 = RtlULongLongAdd((unsigned __int64)v780, v606, (__int64 *)&v780);
              if ( v494 < 0 )
                goto LABEL_813;
              v605 = (unsigned int *)v780;
            }
            while ( (unsigned int)(v608 + 1) < 2 );
            v494 = RtlULongLongAdd((unsigned __int64)v780, 4LL, (__int64 *)&v780);
            if ( v494 < 0 )
            {
LABEL_813:
              v8 = 0LL;
              goto LABEL_814;
            }
            v610 = (unsigned __int8 *)v780;
            v594 = v609;
            v847 = v609;
            if ( !v609 )
              v610 = 0LL;
            v8 = 0LL;
            v908 = v610;
LABEL_814:
            if ( v494 < 0 )
              goto LABEL_986;
            HIDWORD(dwBytes) = 4;
            v494 = RtlUIntAdd(4u, v607, (int *)&dwBytes + 1);
            if ( v494 < 0
              || (v494 = RtlUIntAdd(HIDWORD(dwBytes), v611, (int *)&dwBytes + 1), v494 < 0)
              || (v494 = RtlUIntAdd(HIDWORD(dwBytes), v593, (int *)&dwBytes + 1), v494 < 0)
              || (v494 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v494 < 0) )
            {
              v612 = v836;
            }
            else
            {
              v494 = RtlUIntAdd(HIDWORD(dwBytes), v594, (int *)&dwBytes + 1);
              v612 = v836;
              if ( v494 >= 0 )
                v612 = HIDWORD(dwBytes);
              v836 = v612;
            }
            if ( v494 < 0 )
              goto LABEL_986;
            if ( v612 > 0x400000 )
            {
              v494 = -2147418113;
LABEL_986:
              v739 = k;
              if ( k )
              {
                v740 = GetProcessHeap();
                HeapFree(v740, 0, v739);
                v8 = 0LL;
              }
              v741 = v846;
              if ( v846 )
              {
                v742 = (void *)*((_QWORD *)v846 + 1);
                if ( v742 )
                {
                  v743 = GetProcessHeap();
                  HeapFree(v743, 0, v742);
                  v741[1] = 0LL;
                }
                v744 = (void *)v741[3];
                if ( v744 )
                {
                  v745 = GetProcessHeap();
                  HeapFree(v745, 0, v744);
                  v741[3] = 0LL;
                }
                v746 = (void *)v741[5];
                if ( v746 )
                {
                  v747 = GetProcessHeap();
                  HeapFree(v747, 0, v746);
                  v741[5] = 0LL;
                }
                v748 = GetProcessHeap();
                HeapFree(v748, 0, v741);
                v8 = 0LL;
                v846 = 0LL;
              }
              v749 = (void *)pcchLength;
              if ( pcchLength )
              {
                v750 = GetProcessHeap();
                HeapFree(v750, 0, v749);
                v8 = 0LL;
              }
              v751 = (wchar_t *)psza;
              if ( psza )
              {
                v752 = GetProcessHeap();
                HeapFree(v752, 0, v751);
                v8 = 0LL;
              }
              if ( v483 )
              {
                v753 = (void *)v483[1];
                if ( v753 )
                {
                  v754 = GetProcessHeap();
                  HeapFree(v754, 0, v753);
                  v483[1] = 0LL;
                }
                v755 = (void *)v483[3];
                if ( v755 )
                {
                  v756 = GetProcessHeap();
                  HeapFree(v756, 0, v755);
                  v483[3] = 0LL;
                }
                v757 = (void *)v483[5];
                if ( v757 )
                {
                  v758 = GetProcessHeap();
                  HeapFree(v758, 0, v757);
                  v483[5] = 0LL;
                }
                v759 = GetProcessHeap();
                HeapFree(v759, 0, v483);
                v8 = 0LL;
              }
              v760 = v816;
              if ( v816 )
              {
                v761 = GetProcessHeap();
                HeapFree(v761, 0, v760);
                v8 = 0LL;
              }
              if ( v494 >= 0 )
              {
                if ( (_DWORD)v843 )
                {
                  v762 = (unsigned int *)v844;
                  if ( v844 )
                  {
                    pcchLength = (size_t)v844;
                    if ( (int)RtlULongLongAdd((unsigned __int64)v844, 4LL, (__int64 *)&pcchLength) < 0 )
                      goto LABEL_1039;
                    v765 = (int *)pcchLength;
                    v882 = v764;
                    if ( !v764 )
                      v765 = 0LL;
                    v923 = v765;
                    if ( v764 != 4 )
                    {
LABEL_1039:
                      v438 = v779;
                      v8 = 0LL;
                      goto LABEL_1030;
                    }
                    v819 = *v765;
                    v8 = 0LL;
                    if ( v819 >= 0 && v763 > 1 )
                    {
                      for ( k = v762;
                            (int)RtlULongLongAdd((unsigned __int64)v762, 4LL, (__int64 *)&k) >= 0
                         && (int)RtlULongLongAdd((unsigned __int64)k, *v762, (__int64 *)&k) >= 0;
                            v762 = (unsigned int *)k )
                      {
                        if ( v766 != -1 )
                        {
                          if ( (int)RtlULongLongAdd((unsigned __int64)k, 4LL, (__int64 *)&k) >= 0 )
                          {
                            v768 = k;
                            v910 = v767;
                            if ( !v767 )
                              v768 = v8;
                            v922 = v768;
                            if ( v767 == 8 )
                              v924 = *v768;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
              v438 = v779;
LABEL_1030:
              v439 = v778;
              goto LABEL_1031;
            }
            v799 = v612;
          }
        }
        if ( v494 < 0 )
          goto LABEL_986;
        v613 = v799;
        v614 = GetProcessHeap();
        v615 = (const wchar_t *)HeapAlloc(v614, 8u, v613);
        v8 = 0LL;
        if ( v615 )
        {
          v616 = (wchar_t *)v615;
          psza = v615;
          v494 = 0x10000000;
        }
        else
        {
          v616 = (wchar_t *)psza;
          v494 = -805306345;
        }
        if ( v494 < 0 )
          goto LABEL_986;
        if ( !pcchLength || !v616 )
        {
          v494 = -2147024809;
          goto LABEL_986;
        }
        v914[0] = pcchLength;
        v915 = (int)v776;
        v916 = v799;
        v914[1] = v616;
        v917 = 0;
        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
          && (v617 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
        {
          v618 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v617)(134LL, v914, 32LL, 0LL);
          v619 = v799;
          v494 = v618 | 0x10000000;
          if ( v618 >= 0 )
            v619 = v916;
          v799 = v619;
        }
        else
        {
          v620 = GetLastError();
          v494 = v620;
          if ( v620 > 0 )
            v494 = (unsigned __int16)v620 | 0x80070000;
          if ( v494 >= 0 )
            v494 = -2147467259;
          v619 = v799;
        }
        v8 = 0LL;
        if ( v494 == -805306333 )
        {
          v494 = -2147024774;
          goto LABEL_986;
        }
        if ( v494 < 0 )
          goto LABEL_986;
        v808 = 0LL;
        HIDWORD(dwBytes) = 0;
        v780 = v616;
        if ( v619 < 4 )
        {
          v621 = -1073741762;
          goto LABEL_906;
        }
        LODWORD(v776) = *(_DWORD *)v616;
        v621 = RtlULongLongAdd((unsigned __int64)v616, 4LL, (__int64 *)&v780);
        if ( v621 < 0 )
          goto LABEL_905;
        v623 = v622;
        v621 = RtlUIntAdd(0, v622, (int *)&dwBytes + 1);
        if ( v621 < 0 )
          goto LABEL_905;
        if ( v624 - HIDWORD(dwBytes) < (unsigned int)v625 )
          goto LABEL_870;
        v796 = (SIZE_T)v780;
        v782 = v625;
        v621 = RtlULongLongAdd((unsigned __int64)v780, (unsigned int)v625, (__int64 *)&v780);
        if ( v621 < 0 )
          goto LABEL_905;
        v621 = RtlUIntAdd(HIDWORD(dwBytes), v626, (int *)&dwBytes + 1);
        if ( v621 < 0 )
          goto LABEL_905;
        if ( v627 - HIDWORD(dwBytes) < v623 )
          goto LABEL_870;
        v628 = *(unsigned int *)v780;
        v621 = RtlULongLongAdd((unsigned __int64)v780, v623, (__int64 *)&v780);
        if ( v621 < 0 )
          goto LABEL_905;
        v621 = RtlUIntAdd(HIDWORD(dwBytes), v629, (int *)&dwBytes + 1);
        if ( v621 < 0 )
          goto LABEL_905;
        if ( v630 - HIDWORD(dwBytes) < (unsigned int)v628 )
          goto LABEL_870;
        v803 = v780;
        v621 = RtlULongLongAdd((unsigned __int64)v780, (unsigned int)v628, (__int64 *)&v780);
        if ( v621 < 0 )
          goto LABEL_905;
        v621 = RtlUIntAdd(HIDWORD(dwBytes), v631, (int *)&dwBytes + 1);
        if ( v621 < 0 )
          goto LABEL_905;
        if ( v632 - HIDWORD(dwBytes) < v623 )
          goto LABEL_870;
        v633 = *(unsigned int *)v780;
        v621 = RtlULongLongAdd((unsigned __int64)v780, 4LL, (__int64 *)&v780);
        if ( v621 < 0 )
          goto LABEL_905;
        v621 = RtlUIntAdd(HIDWORD(dwBytes), v634, (int *)&dwBytes + 1);
        if ( v621 < 0 )
          goto LABEL_905;
        if ( v635 - HIDWORD(dwBytes) < (unsigned int)v633 )
          goto LABEL_870;
        v621 = RtlUIntAdd(HIDWORD(dwBytes), v633, (int *)&dwBytes + 1);
        if ( v621 < 0 )
          goto LABEL_905;
        if ( v636 != HIDWORD(dwBytes) || (unsigned int)(v637 + v633 + v628) + 12LL != v636 )
        {
LABEL_870:
          v621 = -1073741762;
          goto LABEL_905;
        }
        v638 = GetProcessHeap();
        v639 = HeapAlloc(v638, 8u, 0x30uLL);
        v8 = 0LL;
        v640 = v639;
        if ( !v639 )
        {
          v621 = -1073741801;
LABEL_893:
          if ( v621 >= 0 )
            v483 = v808;
          v800 = v483;
          v657 = 0LL;
          if ( v621 < 0 )
            v657 = v808;
          if ( !v657 )
          {
LABEL_906:
            v494 = v621 | 0x10000000;
            if ( v494 < 0 )
              goto LABEL_986;
            v832 = 0LL;
            v665 = 0LL;
            v876 = 0LL;
            if ( !v483 || (v666 = (unsigned __int8 *)v483[1], (v780 = v666) == 0LL) || !*(_DWORD *)v483 )
            {
              v494 = -805306355;
              goto LABEL_948;
            }
            v667 = *(unsigned int *)v483;
            LODWORD(v776) = 0;
            if ( !v667 )
              goto LABEL_945;
            v668 = v667 - 8;
            v782 = v668;
            v669 = MemoryAlloc(v668);
            v8 = 0LL;
            v803 = v669;
            v670 = v669;
            if ( !v669 )
            {
              v665 = v832;
              goto LABEL_945;
            }
            v671 = 0;
            LOBYTE(v781) = 0;
            v672 = v666;
            v673 = v670;
            v674 = 0;
            v675 = v668 & 7;
            if ( (v668 & 7) != 0 )
            {
              v790 = 0;
              v786 = -1;
              v676 = 0;
              v802 = 0;
              v807 = 0;
              v677 = 56;
              do
              {
                v678 = *v672;
                if ( (int)v8 >= 4 )
                  v676 |= v678 << v677;
                else
                  v674 |= v678 << (v677 - 32);
                LODWORD(v8) = (_DWORD)v8 + 1;
                v677 -= 8;
                ++v672;
              }
              while ( (int)v8 < v675 );
              v10 = dwBytes;
              v802 = v676;
              v807 = v674;
              v674 ^= 0x92F65A5u;
              v679 = v676 ^ 0x699A899C;
              v8 = 0LL;
              v790 = v674;
              v786 = v679;
              v680 = 0;
              if ( (v668 & 7) != 0 )
              {
                do
                {
                  if ( v680 >= 4 )
                  {
                    v679 = __ROL4__(v679, 8);
                    *v673 = v679;
                  }
                  else
                  {
                    v674 = __ROL4__(v674, 8);
                    *v673 = v674;
                  }
                  ++v680;
                  ++v673;
                }
                while ( v680 < v675 );
                v674 = v790;
                v679 = v786;
              }
              v681 = v675 - 4;
              if ( v675 - 4 > 0 )
              {
                v682 = v679 >> (8 * (4 - v681)) << (8 * (4 - v681));
                v786 = v682;
                goto LABEL_931;
              }
              v786 = 0;
              v682 = 0;
              if ( v681 >= 0 )
              {
LABEL_931:
                v683 = v668 >> 3;
                if ( v668 >> 3 )
                {
                  v684 = v807;
                  v685 = v673 + 7;
                  v686 = v802;
                  v687 = v672 + 2;
                  v688 = v683;
                  do
                  {
                    v689 = *(v687 - 1) | (*(v687 - 2) << 8);
                    v690 = v687[2] << 8;
                    v691 = *v687;
                    v687 += 8;
                    v692 = *(v687 - 7) | ((v691 | (v689 << 8)) << 8);
                    v693 = v692 ^ v674;
                    v694 = *(v687 - 3) | ((*(v687 - 4) | ((*(v687 - 5) | v690) << 8)) << 8);
                    v695 = v693 ^ v694 ^ v682 ^ 0xAC987321;
                    v696 = (__ROL4__(v695, 10) + 4991 * __ROL4__(v695 + 1419157410, 5)) ^ v693;
                    v697 = (43881 * __ROR4__(v696 + 133239679, 9) - __ROL4__(v696, 2)) ^ v695;
                    v698 = (24670 * v697 - (v697 >> 13) - 123127970) ^ v696;
                    v699 = (2033 * __ROL4__(v698 ^ 0xAB69, 6) - __ROL4__(v698, 2)) ^ v697;
                    v700 = (133239679 - (v699 ^ 0xAB69605E)) ^ v698;
                    v701 = (43881 * (v700 ^ 0x137F)) ^ __ROR4__(v700, 6) ^ v699;
                    v702 = (__ROL4__(v701, 2) + 24670 * __ROR4__(v701 + 133239679, 15)) ^ v700;
                    v703 = (2033 * __ROR4__(v702 + 1419157410, 14) - __ROL4__(v702, 8)) ^ v701;
                    v704 = __ROR4__(v703, 10) ^ (4991 * __ROR4__(v703 ^ 0xAB69605E, 12)) ^ v702;
                    v705 = (v704 >> 10) ^ (43881 * (v704 ^ 0x7F1)) ^ v703;
                    v706 = (2033 * (__ROR4__(~v705, 5) + 24670)) ^ v704;
                    v707 = v705 ^ (v706 - 2033) ^ 0xAB69605E;
                    v708 = ((v707 >> 2) + 4991 * __ROL4__(v705 ^ (v706 - 2033) ^ 0xAB6967AF, 2)) ^ v706;
                    v709 = (__ROL4__(v708, 7) + 43881 * __ROR4__(v708 - 133239679, 6)) ^ v707;
                    v710 = (24670 * (v709 ^ 0x137F) + __ROR4__(v709, 9)) ^ v708;
                    v711 = (__ROL4__(v710, 7) + 2033 * __ROL4__(v710 ^ 0xAB69, 5)) ^ v709;
                    v712 = v710 ^ v711 ^ 0xAC987321;
                    v713 = (4991 * (__ROR4__(v712, 3) - 43881)) ^ v711;
                    v714 = (24670 * __ROR4__(v713 - 133239679, 1) - __ROR4__(v713, 6)) ^ v712;
                    v715 = (__ROL4__(v714, 14) + 2033 * __ROL4__(v714 - 1419157410, 3)) ^ v713;
                    v716 = (4991 * __ROL4__(v715 - 1419157410, 15) - __ROR4__(v715, 14)) ^ v714;
                    v717 = (v716 >> 3) ^ (43881 * (v716 ^ 0x605E)) ^ v715;
                    v786 = v686 ^ v717;
                    v686 = v694;
                    v718 = v684 ^ __ROL4__(v717, 2) ^ (24670 * __ROL4__(v717 ^ 0x7F1137F, 4));
                    v684 = v692;
                    v790 = v718 ^ v716;
                    *(v685 - 4) = v718 ^ v716;
                    v790 = __ROR4__(v790, 8);
                    *v685 = v786;
                    v685 += 8;
                    v786 = __ROR4__(v786, 8);
                    *(v685 - 13) = v790;
                    v790 = __ROR4__(v790, 8);
                    *(v685 - 9) = v786;
                    v786 = __ROR4__(v786, 8);
                    *(v685 - 14) = v790;
                    v790 = __ROR4__(v790, 8);
                    *(v685 - 10) = v786;
                    v786 = __ROR4__(v786, 8);
                    *(v685 - 15) = v790;
                    *(v685 - 11) = v786;
                    v674 = __ROR4__(v790, 8);
                    v682 = __ROR4__(v786, 8);
                    v790 = v674;
                    v786 = v682;
                    --v688;
                  }
                  while ( v688 );
                  v671 = v781;
                  v8 = 0LL;
                  v10 = dwBytes;
                  v670 = v803;
                  v668 = v782;
                  v483 = v800;
                }
                for ( m = 0LL; m < v668; ++m )
                  v671 ^= v670[m];
                if ( v671 == *(_QWORD *)((char *)v780 + v668) )
                {
                  v720 = (int)v776;
                  v665 = v670;
                  v832 = v670;
                  v670 = 0LL;
                  v876 = v668;
                }
                else
                {
                  v665 = v832;
                  v720 = -1073425151;
                }
                if ( v670 )
                {
                  MemoryFree(v670);
                  v665 = v832;
                  v8 = 0LL;
                }
                if ( v720 >= 0 )
                {
                  v494 = 0x10000000;
                  v816 = v665;
                  v665 = 0LL;
                  v811 = v876;
                  v832 = 0LL;
                  goto LABEL_946;
                }
LABEL_945:
                v494 = -805306367;
LABEL_946:
                if ( v665 )
                {
                  v721 = GetProcessHeap();
                  HeapFree(v721, 0, v665);
                  v8 = 0LL;
                  v832 = 0LL;
                }
LABEL_948:
                if ( v494 < 0 )
                  goto LABEL_986;
                v722 = v816;
                HIDWORD(dwBytes) = 0;
                v782 = (size_t)v816;
                if ( v811 < 4 )
                  goto LABEL_975;
                LODWORD(v808) = *(_DWORD *)v816;
                v724 = RtlULongLongAdd((unsigned __int64)v816, 4LL, (__int64 *)&v782);
                if ( v724 < 0 )
                  goto LABEL_985;
                v724 = RtlUIntAdd(0, v723, (int *)&dwBytes + 1);
                if ( v724 < 0 )
                  goto LABEL_985;
                if ( v811 - HIDWORD(dwBytes) < v726 )
                  goto LABEL_975;
                v727 = *(unsigned int *)v782;
                v724 = RtlULongLongAdd(v782, v725, (__int64 *)&v782);
                if ( v724 < 0 )
                  goto LABEL_985;
                v724 = RtlUIntAdd(HIDWORD(dwBytes), v728, (int *)&dwBytes + 1);
                if ( v724 < 0 )
                  goto LABEL_985;
                if ( v811 - HIDWORD(dwBytes) < (unsigned int)v727 )
                {
LABEL_975:
                  v724 = -1073741762;
                }
                else
                {
                  v724 = RtlUIntAdd(HIDWORD(dwBytes), v727, (int *)&dwBytes + 1);
                  if ( v724 >= 0 )
                  {
                    v730 = (const void *)v782;
                    if ( (unsigned __int64)v722 + v811 < v782 + v727 || (unsigned __int64)v722 + v811 - v727 - v782 >= 8 )
                    {
LABEL_983:
                      v724 = -1073741762;
                      goto LABEL_984;
                    }
                    v782 = v729;
                    v731 = (void *)v729;
                    v802 = v729;
                    v724 = v729;
                    if ( v730 )
                    {
                      v724 = RtlULongLongAdd((unsigned __int64)v730, (unsigned int)v727, (__int64 *)&v796);
                      if ( v724 < 0 )
                        goto LABEL_981;
                      v733 = v796;
                      if ( (unsigned __int64)v730 < v796 )
                      {
                        do
                        {
                          v724 = RtlULongLongAdd((unsigned __int64)v732, 4LL, (__int64 *)&v796);
                          if ( v724 < 0 )
                            goto LABEL_984;
                          if ( v796 > v733 )
                            goto LABEL_976;
                          v735 = RtlUIntAdd(4u, *v734, (int *)&v776);
                          v724 = v735;
                          if ( v735 >= 0 )
                            v737 = (unsigned int)v776;
                          v848 = v737;
                          if ( v735 < 0 )
                            goto LABEL_984;
                          v724 = RtlULongLongAdd(v736, v737, (__int64 *)&v803);
                          if ( v724 < 0 )
                            goto LABEL_984;
                          v732 = v803;
                          if ( (unsigned __int64)v803 > v733 )
                            goto LABEL_976;
                          ++v802;
                        }
                        while ( (unsigned __int64)v803 < v733 );
                      }
                      if ( v732 != (void *)v733 )
                      {
LABEL_976:
                        v724 = -1073741811;
LABEL_984:
                        v483 = v800;
                        goto LABEL_985;
                      }
                      v731 = (void *)v782;
                    }
                    if ( (_DWORD)v727 )
                    {
                      v738 = GetProcessHeap();
                      v731 = HeapAlloc(v738, 8u, v727);
                      if ( !v731 )
                      {
                        v724 = -1073741801;
                        goto LABEL_981;
                      }
                      v724 = 0;
                    }
                    if ( v730 )
                      memcpy_0(v731, v730, v727);
                    v843 = __PAIR64__(v727, v802);
                    v844 = v731;
LABEL_981:
                    if ( v724 < 0 || (_DWORD)v808 == (_DWORD)v843 )
                      goto LABEL_984;
                    goto LABEL_983;
                  }
                }
LABEL_985:
                v494 = v724 | 0x10000000;
                v8 = 0LL;
                goto LABEL_986;
              }
              v674 = v674 >> (-8 * v681) << (-8 * v681);
            }
            else
            {
              v807 = 0;
              v682 = 0;
              v786 = 0;
            }
            v790 = v674;
            goto LABEL_931;
          }
          v658 = (void *)v657[1];
          if ( v658 )
          {
            v659 = GetProcessHeap();
            HeapFree(v659, 0, v658);
            v657[1] = 0LL;
          }
          v660 = (void *)v657[3];
          if ( v660 )
          {
            v661 = GetProcessHeap();
            HeapFree(v661, 0, v660);
            v657[3] = 0LL;
          }
          v662 = (void *)v657[5];
          if ( v662 )
          {
            v663 = GetProcessHeap();
            HeapFree(v663, 0, v662);
            v657[5] = 0LL;
          }
          v664 = GetProcessHeap();
          HeapFree(v664, 0, v657);
LABEL_905:
          v8 = 0LL;
          goto LABEL_906;
        }
        v641 = (const void *)v796;
        if ( v796 )
        {
          *(_DWORD *)v639 = (_DWORD)v776;
          v642 = GetProcessHeap();
          v643 = HeapAlloc(v642, 8u, v782);
          v8 = 0LL;
          if ( !v643 )
            goto LABEL_874;
          v640[1] = v643;
          memcpy_0(v643, v641, v782);
          v8 = 0LL;
        }
        else
        {
          *(_DWORD *)v639 = 0;
          v639[1] = 0LL;
        }
        v644 = v803;
        if ( v803 )
        {
          *((_DWORD *)v640 + 4) = v628;
          v645 = GetProcessHeap();
          v646 = HeapAlloc(v645, 8u, v628);
          v8 = 0LL;
          if ( !v646 )
            goto LABEL_874;
          v640[3] = v646;
          memcpy_0(v646, v644, v628);
          v8 = 0LL;
        }
        else
        {
          *((_DWORD *)v640 + 4) = 0;
          v640[3] = 0LL;
        }
        v647 = v780;
        if ( !v780 )
        {
          *((_DWORD *)v640 + 8) = 0;
          v640[5] = 0LL;
          goto LABEL_884;
        }
        *((_DWORD *)v640 + 8) = v633;
        v648 = GetProcessHeap();
        v649 = HeapAlloc(v648, 8u, v633);
        v8 = 0LL;
        if ( v649 )
        {
          v640[5] = v649;
          memcpy_0(v649, v647, v633);
          v8 = 0LL;
LABEL_884:
          v808 = v640;
          v621 = 0;
          v640 = 0LL;
LABEL_885:
          if ( v640 )
          {
            v650 = (void *)v640[1];
            if ( v650 )
            {
              v651 = GetProcessHeap();
              HeapFree(v651, 0, v650);
              v640[1] = 0LL;
            }
            v652 = (void *)v640[3];
            if ( v652 )
            {
              v653 = GetProcessHeap();
              HeapFree(v653, 0, v652);
              v640[3] = 0LL;
            }
            v654 = (void *)v640[5];
            if ( v654 )
            {
              v655 = GetProcessHeap();
              HeapFree(v655, 0, v654);
              v640[5] = 0LL;
            }
            v656 = GetProcessHeap();
            HeapFree(v656, 0, v640);
            v8 = 0LL;
          }
          goto LABEL_893;
        }
LABEL_874:
        v621 = -1073741801;
        goto LABEL_885;
      }
LABEL_1040:
      v438 = v442;
      v439 = v446;
      v8 = 0LL;
      goto LABEL_1031;
    }
    if ( v795 == v8 )
    {
      if ( (int)RtlUIntAdd(4u, v447, (int *)&v776) < 0 )
        goto LABEL_678;
      v867 = (int)v776;
      if ( (int)RtlUIntAdd(HIDWORD(v794), (int)v776, (int *)&v794 + 1) < 0 )
        goto LABEL_678;
      v456 = v794 + 1;
      LODWORD(v794) = v794 + 1;
      goto LABEL_681;
    }
    v465 = (int *)v795;
    pcchLength = (size_t)v795;
    v466 = 0;
    if ( v456 )
    {
      while ( (int)RtlUIntAdd(4u, *v465, (int *)&v776) >= 0 )
      {
        v867 = (int)v776;
        v468 = RtlULongLongAdd(v467, (unsigned int)v776, (__int64 *)&pcchLength);
        v8 = 0LL;
        if ( v468 < 0 )
          goto LABEL_678;
        v465 = (int *)pcchLength;
        if ( ++v466 >= v469 )
          goto LABEL_674;
      }
      goto LABEL_677;
    }
LABEL_674:
    v470 = RtlULongLongAdd((unsigned __int64)v465, 4LL, (__int64 *)&v797);
    if ( v470 >= 0 )
    {
      if ( (char *)v471 + v447 + 4 > (char *)v795 + HIDWORD(v794) )
        goto LABEL_1040;
      v472 = v797;
      *v471 = v447;
      memcpy_0(v472, v446, v447);
      v456 = v794 + 1;
      LODWORD(v794) = v794 + 1;
      v8 = 0LL;
      goto LABEL_680;
    }
LABEL_677:
    v8 = 0LL;
    goto LABEL_678;
  }
  if ( (int)RtlUIntAdd(4u, v443, (int *)&v776) >= 0 )
  {
    v866 = (int)v776;
    if ( (int)RtlUIntAdd(HIDWORD(v794), (int)v776, (int *)&v794 + 1) >= 0 )
    {
      v456 = v794 + 1;
      LODWORD(v794) = v794 + 1;
      goto LABEL_665;
    }
  }
LABEL_678:
  v438 = v442;
  v439 = v446;
LABEL_1031:
  v794 = 0LL;
  v769 = v795;
  if ( v795 )
  {
    v770 = GetProcessHeap();
    HeapFree(v770, 0, v769);
    v8 = 0LL;
    v795 = 0LL;
  }
  v843 = 0LL;
  v771 = v844;
  if ( v844 )
  {
    v772 = GetProcessHeap();
    HeapFree(v772, 0, v771);
    v8 = 0LL;
    v844 = 0LL;
  }
  if ( v438 )
  {
    v773 = GetProcessHeap();
    HeapFree(v773, 0, v438);
    v8 = 0LL;
  }
  if ( v439 )
  {
    v774 = GetProcessHeap();
    HeapFree(v774, 0, v439);
    v8 = 0LL;
  }
LABEL_455:
  v377 = v838;
  v881 = v837;
  v864 = (int *)v877;
  v816 = v8;
LABEL_456:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v816);
  if ( v10 < 0 )
  {
    switch ( v10 )
    {
      case -805306316:
        v10 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v10 = -1073418201;
        break;
      case -805306306:
        v10 = -1073418200;
        break;
      case -2147024774:
        goto LABEL_462;
    }
    v809 = v10;
    goto LABEL_459;
  }
  if ( v377 != 4 )
  {
LABEL_462:
    v809 = -1073418210;
    goto LABEL_459;
  }
  v839 = *v864;
LABEL_459:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v864);
  if ( v809 < 0 || !v839 )
    return 0;
  return v2;
}
