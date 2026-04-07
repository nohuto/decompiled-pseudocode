/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180042FD4
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18003818C (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     StringCchLengthW @ 0x180033C20 (StringCchLengthW.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180039708 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x180042FA0 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180042FBC (RtlUIntAdd.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180045950 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180045974 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180048A08 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004B35A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(STRSAFE_PCNZWCH psz)
{
  char v2; // si
  HLOCAL v3; // rax
  void *v4; // r15
  void *v5; // r14
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  unsigned __int8 *v8; // r10
  void *v9; // r12
  int v10; // edi
  size_t v11; // r14
  HANDLE v12; // rax
  void *v13; // rax
  void *v14; // r13
  unsigned int v15; // r15d
  int v16; // eax
  int v17; // r11d
  int v18; // eax
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // r11d
  int v22; // eax
  unsigned int v23; // r9d
  int v24; // eax
  int v25; // r11d
  int v26; // eax
  unsigned int v27; // r9d
  int v28; // eax
  int v29; // r11d
  int v30; // eax
  size_t v31; // rdx
  HRESULT v32; // eax
  int v33; // eax
  int v34; // r11d
  int v35; // eax
  unsigned int v36; // r9d
  int v37; // eax
  int v38; // r11d
  int v39; // eax
  unsigned int v40; // r9d
  int v41; // eax
  int v42; // r11d
  int v43; // eax
  unsigned int v44; // ebx
  HANDLE v45; // rax
  void *v46; // rax
  unsigned int *v47; // r9
  unsigned int v48; // r11d
  _DWORD *v49; // rcx
  int v50; // eax
  int *v51; // r9
  int v52; // eax
  unsigned __int64 v53; // r9
  unsigned int v54; // r10d
  int v55; // r11d
  _DWORD *v56; // r9
  void *v57; // rcx
  int *v58; // r9
  int v59; // eax
  __int64 v60; // rcx
  unsigned __int64 v61; // r9
  unsigned int v62; // r10d
  int v63; // r11d
  unsigned int *v64; // r9
  void *v65; // rcx
  __int64 v66; // r13
  int *v67; // r9
  int v68; // eax
  size_t v69; // rdx
  unsigned __int64 v70; // r9
  unsigned int v71; // r10d
  int v72; // r11d
  _DWORD *v73; // r9
  _QWORD *v74; // rax
  STRSAFE_PCNZWCH v75; // r14
  HRESULT v76; // eax
  int v77; // ebx
  int *v78; // r9
  int v79; // eax
  unsigned __int64 v80; // r9
  unsigned int v81; // r10d
  _DWORD *v82; // r9
  __int64 v83; // r11
  void *v84; // rcx
  int *v85; // r9
  int v86; // eax
  unsigned __int64 v87; // r9
  unsigned int v88; // r10d
  int v89; // r11d
  _DWORD *v90; // r9
  _DWORD *v91; // rcx
  int *v92; // r9
  int v93; // eax
  unsigned __int64 v94; // r9
  unsigned int v95; // r10d
  int v96; // r11d
  _DWORD *v97; // r9
  _DWORD *v98; // rcx
  int v99; // eax
  unsigned int v100; // ecx
  unsigned int v101; // r10d
  int v102; // eax
  unsigned int v103; // r10d
  int v104; // r9d
  int v105; // eax
  int v106; // eax
  int v107; // r9d
  int v108; // eax
  int v109; // r9d
  int v110; // eax
  int v111; // r9d
  int v112; // eax
  int v113; // r9d
  int v114; // eax
  unsigned __int8 *v115; // r13
  unsigned int v116; // r15d
  unsigned int v117; // r12d
  int v118; // edi
  unsigned int v119; // eax
  unsigned int v120; // ebx
  HANDLE v121; // rax
  char *v122; // rax
  char *v123; // rbx
  unsigned int v124; // r9d
  size_t v125; // rcx
  _QWORD *v126; // r14
  unsigned __int64 v127; // rdi
  void *v128; // rax
  _BYTE *v129; // r15
  unsigned __int8 v130; // al
  unsigned __int64 v131; // rcx
  int v132; // ebx
  unsigned int v133; // edx
  unsigned __int8 *v134; // r10
  _BYTE *v135; // r9
  int v136; // r13d
  int v137; // r8d
  unsigned __int64 v138; // r12
  int v139; // r8d
  _BYTE *v140; // rdi
  int v141; // r14d
  unsigned __int8 *v142; // rax
  int v143; // r15d
  int v144; // r11d
  int v145; // ecx
  int v146; // r10d
  int v147; // r10d
  int v148; // ebx
  int v149; // r9d
  int v150; // ebx
  int v151; // r9d
  int v152; // ebx
  unsigned int v153; // r9d
  int v154; // ebx
  int v155; // r9d
  int v156; // ebx
  int v157; // r9d
  int v158; // ebx
  int v159; // r9d
  unsigned int v160; // ebx
  unsigned int v161; // r9d
  int v162; // ebx
  int v163; // r9d
  int v164; // ebx
  int v165; // r9d
  int v166; // ebx
  int v167; // r9d
  int v168; // ebx
  int v169; // r9d
  unsigned int v170; // ebx
  int v171; // ecx
  int v172; // r9d
  unsigned int v173; // edi
  HANDLE v174; // rax
  _DWORD *v175; // rax
  _DWORD *v176; // rbx
  HANDLE v177; // rax
  void *v178; // rax
  HANDLE v179; // rax
  _OWORD *v180; // rax
  HANDLE v181; // rax
  _QWORD *v182; // rax
  int v183; // edi
  void *v184; // rbx
  HANDLE v185; // rax
  const void **v186; // r14
  int v187; // edi
  unsigned int v188; // eax
  unsigned int v189; // ebx
  HANDLE v190; // rax
  _DWORD *v191; // rax
  void *v192; // rbx
  int v193; // eax
  void *v194; // rcx
  int v195; // eax
  void *v196; // rcx
  int v197; // eax
  int v198; // ebx
  int v199; // eax
  int v200; // ecx
  unsigned int v201; // eax
  int v202; // eax
  unsigned int v203; // r9d
  unsigned int *v204; // rcx
  unsigned int v205; // r14d
  int v206; // r10d
  int v207; // r10d
  size_t v208; // rax
  unsigned int *v209; // rcx
  unsigned int v210; // r14d
  int v211; // r9d
  int v212; // r10d
  int v213; // r10d
  size_t v214; // rax
  bool v215; // zf
  int v216; // r11d
  unsigned int v217; // eax
  unsigned int v218; // ebx
  HANDLE v219; // rax
  _DWORD *v220; // rax
  _DWORD *v221; // r14
  FARPROC ProcAddress; // rax
  int v223; // eax
  unsigned int v224; // r9d
  unsigned int v225; // r12d
  int v226; // edi
  int v227; // r9d
  int v228; // r9d
  SIZE_T v229; // r14
  int v230; // r9d
  void *v231; // r13
  int v232; // r9d
  SIZE_T v233; // r15
  int v234; // r11d
  int v235; // r9d
  int v236; // r9d
  HANDLE v237; // rax
  _QWORD *v238; // rax
  size_t v239; // rbx
  const void *v240; // rdi
  HANDLE v241; // rax
  void *v242; // rax
  HANDLE v243; // rax
  void *v244; // rax
  void *v245; // rdi
  HANDLE v246; // rax
  void *v247; // rax
  _DWORD *v248; // r14
  _QWORD *v249; // rbx
  wchar_t *v250; // rbx
  unsigned __int8 *v251; // r15
  __int64 v252; // rdi
  unsigned __int64 v253; // rdi
  _BYTE *v254; // rax
  _BYTE *v255; // r14
  unsigned __int8 v256; // al
  unsigned __int8 *v257; // r10
  _BYTE *v258; // r9
  int v259; // r8d
  unsigned int v260; // ebx
  int v261; // r13d
  int v262; // edx
  unsigned __int64 v263; // r15
  int v264; // r12d
  _BYTE *v265; // rdi
  unsigned __int8 *v266; // r8
  unsigned int v267; // r14d
  int v268; // eax
  int v269; // r11d
  int v270; // ebx
  int v271; // r10d
  int v272; // r8d
  int v273; // ebx
  unsigned int v274; // r8d
  int v275; // ebx
  int v276; // r8d
  unsigned int v277; // ebx
  int v278; // r8d
  int v279; // ebx
  int v280; // r8d
  unsigned int v281; // ebx
  int v282; // edx
  int v283; // ebx
  unsigned int v284; // r9d
  int v285; // ebx
  int v286; // r9d
  int v287; // ebx
  int v288; // r9d
  int v289; // ebx
  int v290; // r9d
  int v291; // ebx
  int v292; // r9d
  unsigned int v293; // ebx
  int v294; // r9d
  int v295; // edx
  unsigned __int64 i; // rcx
  int v297; // edi
  unsigned int v298; // r9d
  STRSAFE_PCNZWCH v299; // r12
  int v300; // edi
  int v301; // r11d
  int v302; // r9d
  unsigned int v303; // r11d
  SIZE_T v304; // r15
  int v305; // r11d
  int v306; // r9d
  unsigned int v307; // r9d
  void *v308; // r10
  const void *v309; // rbx
  void *v310; // r12
  unsigned int v311; // r13d
  void *v312; // r9
  SIZE_T v313; // r11
  int *v314; // r9
  SIZE_T v315; // r11
  int v316; // eax
  unsigned __int64 v317; // r9
  unsigned int v318; // r10d
  HANDLE v319; // rax
  void *v320; // rbx
  HANDLE v321; // rax
  _QWORD *v322; // r14
  void *v323; // rbx
  HANDLE v324; // rax
  void *v325; // rbx
  HANDLE v326; // rax
  void *v327; // rbx
  HANDLE v328; // rax
  HANDLE v329; // rax
  void *v330; // rbx
  HANDLE v331; // rax
  void *v332; // rbx
  HANDLE v333; // rax
  _QWORD *v334; // r14
  void *v335; // rbx
  HANDLE v336; // rax
  void *v337; // rbx
  HANDLE v338; // rax
  void *v339; // rbx
  HANDLE v340; // rax
  HANDLE v341; // rax
  wchar_t *v342; // rbx
  HANDLE v343; // rax
  int v344; // r9d
  int *v345; // rax
  unsigned __int64 v346; // rcx
  unsigned int v347; // r10d
  int v348; // eax
  int v349; // r9d
  int v350; // r9d
  _QWORD *v351; // rax
  unsigned __int64 v352; // rcx
  unsigned int v353; // r10d
  int v354; // eax
  int v355; // r9d
  int v356; // r9d
  _DWORD *v357; // rax
  unsigned __int64 v358; // rcx
  unsigned int v359; // r10d
  int v360; // r9d
  int v361; // r10d
  size_t v362; // r11
  unsigned int *v363; // rcx
  unsigned int v364; // ebx
  int v365; // r9d
  int v366; // r9d
  unsigned int *v367; // rax
  unsigned int v368; // ebx
  unsigned int *v369; // rcx
  unsigned int v370; // r14d
  unsigned int v371; // r10d
  const void *v372; // r11
  int v373; // r9d
  int v374; // r9d
  _DWORD *v375; // rax
  int v376; // ecx
  void *v377; // rbx
  HANDLE v378; // rax
  void *v379; // rbx
  HANDLE v380; // rax
  HANDLE v381; // rax
  HANDLE v382; // rax
  int v383; // ebx
  int v385; // eax
  int v386; // edx
  int v387; // eax
  int v388; // edx
  int v389; // eax
  int v390; // eax
  int v391; // edx
  int v392; // r10d
  int v393; // eax
  int v394; // edx
  int v395; // eax
  int v396; // edx
  HANDLE v397; // rax
  int v398; // r12d
  int v399; // ebx
  char v400; // r11
  int v401; // edx
  unsigned int v402; // ebx
  int v403; // ecx
  int v404; // r8d
  void *v405; // r15
  HANDLE v406; // rax
  void *v407; // r15
  HANDLE v408; // rax
  void *v409; // r15
  HANDLE v410; // rax
  HANDLE v411; // rax
  void *v412; // rbx
  HANDLE v413; // rax
  void *v414; // rbx
  HANDLE v415; // rax
  void *v416; // rbx
  HANDLE v417; // rax
  HANDLE v418; // rax
  HANDLE v419; // rax
  signed int LastError; // eax
  void *v421; // r14
  HANDLE v422; // rax
  void *v423; // r14
  HANDLE v424; // rax
  void *v425; // r14
  HANDLE v426; // rax
  HANDLE v427; // rax
  void *v428; // r14
  HANDLE v429; // rax
  void *v430; // r14
  HANDLE v431; // rax
  void *v432; // r14
  HANDLE v433; // rax
  HANDLE v434; // rax
  int v435; // r12d
  int v436; // ebx
  char v437; // r11
  int v438; // edx
  unsigned int v439; // edx
  int v440; // ecx
  int v441; // r8d
  HANDLE v442; // rax
  void *v443; // r15
  void *v444; // r14
  HANDLE v445; // rax
  void *v446; // rax
  void *v447; // r12
  size_t v448; // r14
  HANDLE v449; // rax
  void *v450; // rax
  void *v451; // r13
  unsigned int v452; // r15d
  unsigned int v453; // r11d
  int v454; // eax
  unsigned int v455; // r11d
  int v456; // r9d
  int v457; // eax
  unsigned int v458; // r11d
  int v459; // r9d
  int v460; // eax
  int v461; // r9d
  unsigned int v462; // ebx
  HANDLE v463; // rax
  void *v464; // rax
  unsigned int *v465; // r9
  unsigned int v466; // r11d
  _DWORD *v467; // rcx
  int v468; // r9d
  int *v469; // r10
  unsigned __int64 v470; // r10
  int v471; // eax
  unsigned int v472; // r9d
  int v473; // r11d
  int v474; // ebx
  _DWORD *v475; // r10
  void *v476; // rcx
  unsigned int v477; // r11d
  int *v478; // r10
  unsigned __int64 v479; // r10
  int v480; // eax
  unsigned int v481; // r9d
  int v482; // r11d
  int v483; // ebx
  unsigned int *v484; // r10
  void *v485; // rcx
  unsigned int v486; // r11d
  int *v487; // r10
  unsigned __int64 v488; // r10
  int v489; // eax
  unsigned int v490; // r9d
  int v491; // r11d
  _DWORD *v492; // r10
  _QWORD *v493; // rax
  unsigned int v494; // ecx
  unsigned int v495; // r9d
  unsigned int v496; // r12d
  _QWORD *v497; // r15
  int *v498; // r13
  int v499; // ebx
  size_t v500; // r9
  unsigned int v501; // eax
  unsigned int v502; // ebx
  HANDLE v503; // rax
  char *v504; // rax
  char *v505; // r14
  unsigned int v506; // r11d
  void *v507; // rcx
  HANDLE v508; // rax
  int v509; // ebx
  _QWORD *v510; // r13
  int v511; // ebx
  unsigned __int64 v512; // r14
  void *v513; // rax
  _BYTE *v514; // r12
  unsigned __int8 *v515; // r8
  unsigned __int8 v516; // al
  unsigned __int64 v517; // rcx
  int v518; // ebx
  _BYTE *v519; // r9
  signed int v520; // r11d
  signed int v521; // edx
  int v522; // ebx
  char v523; // r10
  size_t v524; // rcx
  int v525; // r8d
  int v526; // ecx
  unsigned int v527; // ebx
  int v528; // ecx
  int v529; // edx
  int v530; // edx
  _BYTE *v531; // r14
  SIZE_T v532; // r15
  int v533; // r13d
  unsigned int v534; // r12d
  unsigned __int8 *v535; // rax
  int v536; // r8d
  int v537; // edi
  int v538; // r10d
  int v539; // ecx
  int v540; // r9d
  int v541; // r9d
  int v542; // ebx
  int v543; // r11d
  int v544; // ebx
  int v545; // r11d
  int v546; // ebx
  unsigned int v547; // r11d
  int v548; // ebx
  int v549; // r11d
  int v550; // ebx
  int v551; // r11d
  int v552; // ebx
  int v553; // r11d
  unsigned int v554; // ebx
  unsigned int v555; // r11d
  int v556; // ebx
  int v557; // r11d
  int v558; // ebx
  int v559; // r11d
  int v560; // ebx
  int v561; // r11d
  int v562; // ebx
  int v563; // r11d
  unsigned int v564; // ebx
  int v565; // ecx
  int v566; // ecx
  unsigned int v567; // ebx
  HANDLE v568; // rax
  _DWORD *v569; // rax
  _DWORD *v570; // r14
  HANDLE v571; // rax
  void *v572; // rax
  HANDLE v573; // rax
  _OWORD *v574; // rax
  HANDLE v575; // rax
  _QWORD *v576; // rax
  void *v577; // r12
  HANDLE v578; // rax
  void *v579; // r12
  HANDLE v580; // rax
  void *v581; // r12
  HANDLE v582; // rax
  HANDLE v583; // rax
  void *v584; // r14
  HANDLE v585; // rax
  void *v586; // r14
  HANDLE v587; // rax
  void *v588; // r14
  HANDLE v589; // rax
  void *v590; // r14
  HANDLE v591; // rax
  HANDLE v592; // rax
  const void **v593; // r14
  int v594; // ebx
  unsigned int v595; // eax
  unsigned int v596; // ebx
  HANDLE v597; // rax
  _DWORD *v598; // rax
  void *v599; // r12
  int v600; // eax
  void *v601; // rcx
  int v602; // eax
  void *v603; // rcx
  int v604; // eax
  HANDLE v605; // rax
  int v606; // eax
  int v607; // ecx
  unsigned int v608; // eax
  int v609; // eax
  unsigned int v610; // r9d
  unsigned int *v611; // rcx
  int v612; // r14d
  unsigned int v613; // r12d
  int v614; // r14d
  unsigned __int8 *v615; // rax
  unsigned int *v616; // rcx
  int v617; // r14d
  unsigned int v618; // r12d
  int v619; // r9d
  int v620; // r14d
  void *v621; // rax
  unsigned int v622; // ebx
  HANDLE v623; // rax
  _DWORD *v624; // rax
  _DWORD *v625; // r14
  int v626; // r10d
  int v627; // eax
  int v628; // r11d
  unsigned int v629; // eax
  void *v630; // r14
  HANDLE v631; // rax
  _QWORD *v632; // r14
  void *v633; // r12
  HANDLE v634; // rax
  void *v635; // r12
  HANDLE v636; // rax
  void *v637; // r12
  HANDLE v638; // rax
  HANDLE v639; // rax
  void *v640; // r14
  HANDLE v641; // rax
  void *v642; // r14
  HANDLE v643; // rax
  void *v644; // r14
  HANDLE v645; // rax
  void *v646; // r14
  HANDLE v647; // rax
  void *v648; // r14
  HANDLE v649; // rax
  HANDLE v650; // rax
  HANDLE v651; // rax
  unsigned int *v652; // rbx
  unsigned int v653; // r9d
  int v654; // r10d
  __int64 v655; // r11
  int *v656; // rax
  int v657; // r9d
  FARPROC v658; // rax
  int v659; // eax
  unsigned int v660; // r9d
  signed int v661; // eax
  int v662; // ebx
  int v663; // r9d
  SIZE_T v664; // r10
  int v665; // r10d
  int v666; // r9d
  SIZE_T v667; // r12
  int v668; // r9d
  int v669; // r9d
  SIZE_T v670; // r13
  int v671; // r9d
  int v672; // r9d
  int v673; // r10d
  HANDLE v674; // rax
  _QWORD *v675; // rax
  size_t v676; // r14
  void *v677; // rbx
  HANDLE v678; // rax
  SIZE_T v679; // r15
  void *v680; // rax
  void *v681; // rbx
  HANDLE v682; // rax
  void *v683; // rax
  void *v684; // rbx
  HANDLE v685; // rax
  void *v686; // rax
  void *v687; // r15
  HANDLE v688; // rax
  void *v689; // r15
  HANDLE v690; // rax
  void *v691; // r15
  HANDLE v692; // rax
  HANDLE v693; // rax
  _QWORD *v694; // r14
  void *v695; // r12
  HANDLE v696; // rax
  void *v697; // r12
  HANDLE v698; // rax
  void *v699; // r12
  HANDLE v700; // rax
  HANDLE v701; // rax
  int *v702; // r14
  size_t v703; // rbx
  __int64 v704; // r12
  SIZE_T v705; // r12
  void *v706; // rax
  _BYTE *v707; // r13
  unsigned __int8 v708; // al
  unsigned __int8 *v709; // r10
  _BYTE *v710; // r9
  int v711; // r8d
  int v712; // r14d
  int v713; // r11d
  char v714; // di
  int v715; // edx
  int v716; // ecx
  unsigned int v717; // edx
  unsigned int v718; // ebx
  int v719; // ecx
  int v720; // r8d
  int v721; // edx
  int v722; // r13d
  _BYTE *v723; // r12
  unsigned __int8 *v724; // r15
  char *v725; // rax
  int v726; // edi
  int v727; // r11d
  int v728; // r10d
  int v729; // ecx
  int v730; // r11d
  int v731; // ebx
  int v732; // r10d
  unsigned int v733; // r8d
  int v734; // ebx
  unsigned int v735; // r8d
  int v736; // ebx
  int v737; // r8d
  unsigned int v738; // ebx
  int v739; // r8d
  int v740; // ebx
  int v741; // r8d
  unsigned int v742; // ebx
  int v743; // edx
  int v744; // ebx
  unsigned int v745; // r9d
  int v746; // ebx
  int v747; // r9d
  int v748; // ebx
  int v749; // r9d
  unsigned int v750; // r8d
  int v751; // r9d
  int v752; // r8d
  int v753; // r9d
  unsigned int v754; // r8d
  int v755; // r9d
  int v756; // edx
  SIZE_T k; // rcx
  int v758; // ebx
  unsigned int v759; // r9d
  HANDLE v760; // rax
  int v761; // ebx
  int v762; // r9d
  SIZE_T v763; // r13
  int v764; // r9d
  unsigned int v765; // r9d
  const wchar_t *v766; // r10
  void *v767; // r14
  wchar_t *v768; // rax
  SIZE_T v769; // r9
  void *v770; // r11
  int *v771; // r9
  unsigned __int64 v772; // r11
  int v773; // eax
  unsigned __int64 v774; // r9
  unsigned int v775; // r10d
  HANDLE v776; // rax
  int v777; // r9d
  _QWORD *v778; // rax
  void *v779; // rbx
  HANDLE v780; // rax
  void *v781; // rbx
  HANDLE v782; // rax
  HANDLE v783; // rax
  HANDLE v784; // rax
  int v785; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int dwBytes; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int dwBytes_4; // [rsp+40h] [rbp-C8h] BYREF
  size_t j; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID v789; // [rsp+50h] [rbp-B8h]
  __int64 v790; // [rsp+58h] [rbp-B0h]
  LPVOID v791; // [rsp+60h] [rbp-A8h] BYREF
  void *v792; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v793; // [rsp+70h] [rbp-98h]
  size_t v794; // [rsp+78h] [rbp-90h] BYREF
  void *v795; // [rsp+80h] [rbp-88h]
  int v796; // [rsp+88h] [rbp-80h]
  int v797; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v798; // [rsp+90h] [rbp-78h]
  unsigned int v799; // [rsp+94h] [rbp-74h]
  int v800; // [rsp+98h] [rbp-70h]
  int v801; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v802; // [rsp+A0h] [rbp-68h]
  unsigned int v803; // [rsp+A4h] [rbp-64h]
  int v804; // [rsp+A8h] [rbp-60h]
  unsigned int v805; // [rsp+ACh] [rbp-5Ch] BYREF
  size_t v806; // [rsp+B0h] [rbp-58h] BYREF
  void *v807; // [rsp+B8h] [rbp-50h]
  STRSAFE_PCNZWCH psza; // [rsp+C0h] [rbp-48h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v810; // [rsp+D0h] [rbp-38h]
  unsigned int v811; // [rsp+D4h] [rbp-34h]
  SIZE_T v812; // [rsp+D8h] [rbp-30h] BYREF
  int v813; // [rsp+E0h] [rbp-28h]
  void *v814; // [rsp+E8h] [rbp-20h] BYREF
  void *v815; // [rsp+F0h] [rbp-18h] BYREF
  void *v816; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v817; // [rsp+100h] [rbp-8h]
  unsigned int v818; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v819; // [rsp+108h] [rbp+0h] BYREF
  void *v820; // [rsp+110h] [rbp+8h] BYREF
  int v821; // [rsp+118h] [rbp+10h]
  int v822; // [rsp+11Ch] [rbp+14h]
  unsigned __int64 v823; // [rsp+120h] [rbp+18h]
  LPVOID v824; // [rsp+128h] [rbp+20h]
  int v825; // [rsp+130h] [rbp+28h]
  unsigned __int64 v826; // [rsp+138h] [rbp+30h] BYREF
  int v827; // [rsp+140h] [rbp+38h]
  int v828; // [rsp+144h] [rbp+3Ch]
  unsigned int v829; // [rsp+148h] [rbp+40h]
  int v830; // [rsp+14Ch] [rbp+44h]
  int v831; // [rsp+150h] [rbp+48h]
  int v832; // [rsp+154h] [rbp+4Ch]
  LPVOID v833; // [rsp+158h] [rbp+50h]
  unsigned int v834; // [rsp+160h] [rbp+58h] BYREF
  unsigned int v835; // [rsp+164h] [rbp+5Ch]
  unsigned int v836; // [rsp+168h] [rbp+60h]
  unsigned int v837; // [rsp+16Ch] [rbp+64h]
  unsigned int v838; // [rsp+170h] [rbp+68h] BYREF
  int v839; // [rsp+174h] [rbp+6Ch]
  int v840; // [rsp+178h] [rbp+70h]
  unsigned int v841; // [rsp+180h] [rbp+78h]
  int v842; // [rsp+184h] [rbp+7Ch]
  unsigned int v843; // [rsp+188h] [rbp+80h]
  LPVOID v844; // [rsp+190h] [rbp+88h]
  int *v845; // [rsp+198h] [rbp+90h]
  wchar_t *v846; // [rsp+1A0h] [rbp+98h]
  unsigned int v847; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v848; // [rsp+1ACh] [rbp+A4h]
  unsigned int v849; // [rsp+1B0h] [rbp+A8h]
  int v850; // [rsp+1B4h] [rbp+ACh]
  unsigned int v851; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned int v852; // [rsp+1BCh] [rbp+B4h]
  unsigned int v853; // [rsp+1C0h] [rbp+B8h]
  unsigned int v854; // [rsp+1C4h] [rbp+BCh]
  int v855; // [rsp+1C8h] [rbp+C0h]
  int v856; // [rsp+1CCh] [rbp+C4h]
  unsigned __int64 v857; // [rsp+1D0h] [rbp+C8h]
  LPVOID v858; // [rsp+1D8h] [rbp+D0h]
  LPVOID v859; // [rsp+1E0h] [rbp+D8h]
  LPVOID v860; // [rsp+1E8h] [rbp+E0h]
  unsigned int v861; // [rsp+1F0h] [rbp+E8h]
  int *v862; // [rsp+1F8h] [rbp+F0h] BYREF
  int v863; // [rsp+200h] [rbp+F8h]
  int v864; // [rsp+208h] [rbp+100h]
  int v865; // [rsp+210h] [rbp+108h]
  int v866; // [rsp+214h] [rbp+10Ch]
  unsigned int v867; // [rsp+218h] [rbp+110h]
  int v868; // [rsp+21Ch] [rbp+114h]
  int v869; // [rsp+220h] [rbp+118h]
  int v870; // [rsp+224h] [rbp+11Ch]
  int v871; // [rsp+228h] [rbp+120h]
  LPVOID lpMem; // [rsp+230h] [rbp+128h]
  int v873; // [rsp+238h] [rbp+130h]
  unsigned int v874; // [rsp+23Ch] [rbp+134h]
  int v875; // [rsp+240h] [rbp+138h]
  LPVOID v876; // [rsp+248h] [rbp+140h]
  int v877; // [rsp+250h] [rbp+148h]
  int v878; // [rsp+258h] [rbp+150h]
  unsigned int v879; // [rsp+260h] [rbp+158h]
  unsigned int v880; // [rsp+264h] [rbp+15Ch]
  unsigned int v881; // [rsp+268h] [rbp+160h]
  unsigned int v882; // [rsp+26Ch] [rbp+164h]
  int v883; // [rsp+270h] [rbp+168h]
  int v884; // [rsp+274h] [rbp+16Ch]
  void *v885; // [rsp+278h] [rbp+170h]
  unsigned __int64 v886; // [rsp+280h] [rbp+178h]
  size_t v887; // [rsp+288h] [rbp+180h]
  size_t v888; // [rsp+290h] [rbp+188h]
  unsigned __int64 v889; // [rsp+298h] [rbp+190h]
  SIZE_T v890; // [rsp+2A0h] [rbp+198h]
  size_t Size; // [rsp+2A8h] [rbp+1A0h]
  size_t v892; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int64 v893; // [rsp+2B8h] [rbp+1B0h]
  unsigned __int64 v894; // [rsp+2C0h] [rbp+1B8h]
  unsigned __int64 v895; // [rsp+2C8h] [rbp+1C0h]
  unsigned int v896; // [rsp+2D0h] [rbp+1C8h]
  int v897; // [rsp+2D4h] [rbp+1CCh]
  __int64 *v898; // [rsp+2D8h] [rbp+1D0h]
  __int64 v899; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v900; // [rsp+2E8h] [rbp+1E0h]
  __int64 v901; // [rsp+2F0h] [rbp+1E8h]
  size_t v902; // [rsp+2F8h] [rbp+1F0h]
  size_t v903; // [rsp+300h] [rbp+1F8h]
  HMODULE phModule; // [rsp+308h] [rbp+200h] BYREF
  int *v905; // [rsp+310h] [rbp+208h]
  _QWORD *v906; // [rsp+318h] [rbp+210h]
  _DWORD *v907; // [rsp+320h] [rbp+218h]
  size_t v908; // [rsp+328h] [rbp+220h]
  unsigned int *v909; // [rsp+330h] [rbp+228h]
  _DWORD *v910; // [rsp+338h] [rbp+230h]
  __int64 v911; // [rsp+340h] [rbp+238h]
  void *v912; // [rsp+348h] [rbp+240h]
  void *v913; // [rsp+350h] [rbp+248h]
  unsigned __int64 v914; // [rsp+358h] [rbp+250h]
  unsigned __int64 v915; // [rsp+360h] [rbp+258h]
  int v916; // [rsp+368h] [rbp+260h]
  STRSAFE_PCNZWCH v917; // [rsp+370h] [rbp+268h]
  __int64 *v918; // [rsp+378h] [rbp+270h]
  __int64 v919; // [rsp+380h] [rbp+278h]
  unsigned __int8 *v920; // [rsp+388h] [rbp+280h]
  __int64 v921; // [rsp+390h] [rbp+288h]
  unsigned __int8 *v922; // [rsp+398h] [rbp+290h]
  void *v923; // [rsp+3A0h] [rbp+298h]
  HMODULE hModule; // [rsp+3A8h] [rbp+2A0h] BYREF
  SIZE_T v925; // [rsp+3B0h] [rbp+2A8h]
  void *Src; // [rsp+3B8h] [rbp+2B0h]
  void *v927; // [rsp+3C0h] [rbp+2B8h]
  _QWORD v928[2]; // [rsp+3C8h] [rbp+2C0h] BYREF
  unsigned int v929; // [rsp+3D8h] [rbp+2D0h]
  unsigned int v930; // [rsp+3DCh] [rbp+2D4h]
  int v931; // [rsp+3E0h] [rbp+2D8h]
  _QWORD v932[2]; // [rsp+3E8h] [rbp+2E0h] BYREF
  unsigned int v933; // [rsp+3F8h] [rbp+2F0h]
  unsigned int v934; // [rsp+3FCh] [rbp+2F4h]
  int v935; // [rsp+400h] [rbp+2F8h]
  int *v936; // [rsp+408h] [rbp+300h]
  _QWORD *v937; // [rsp+410h] [rbp+308h]
  __int64 v938; // [rsp+418h] [rbp+310h]
  void *v939; // [rsp+420h] [rbp+318h] BYREF

  psza = psz;
  v855 = 0;
  v862 = 0LL;
  v822 = 0;
  v2 = 1;
  if ( !psz )
  {
    v822 = -2147024809;
    goto LABEL_452;
  }
  v856 = 0;
  v816 = 0LL;
  v842 = 0;
  v852 = 0;
  v3 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v816, v3);
  v885 = v816;
  if ( !v816 )
  {
    v10 = -2147024882;
LABEL_1029:
    v383 = v839;
    goto LABEL_449;
  }
  v850 = 0;
  v794 = 0LL;
  v795 = 0LL;
  v4 = 0LL;
  v823 = 0LL;
  v5 = 0LL;
  v824 = 0LL;
  Src = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
  v825 = 0;
  Size = 160LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v805 = -1;
  v8 = 0LL;
  v9 = v7;
  v10 = -1073741801;
  if ( !v7 )
  {
    v785 = -1073741801;
    goto LABEL_438;
  }
  memcpy_0(v7, Src, Size);
  v11 = (unsigned int)Size;
  v4 = v9;
  v789 = v9;
  v892 = 8LL;
  v927 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 8u, 8uLL);
  v8 = 0LL;
  v14 = v13;
  if ( !v13 )
  {
    v785 = -1073741801;
    v5 = 0LL;
    goto LABEL_438;
  }
  memcpy_0(v13, v927, v892);
  v15 = v892;
  v791 = v14;
  v886 = __rdtsc();
  dwBytes = 0;
  v16 = RtlUIntAdd(4u, 4, (int *)&dwBytes_4);
  v17 = v813;
  v10 = v16;
  v785 = v16;
  if ( v16 >= 0 )
    v17 = dwBytes_4;
  v813 = v17;
  if ( v16 < 0 )
    goto LABEL_464;
  v18 = RtlUIntAdd(0, v17, (int *)&dwBytes);
  v10 = v18 | 0x10000000;
  v785 = v18 | 0x10000000;
  if ( v18 < 0 )
    goto LABEL_464;
  v20 = RtlUIntAdd(v19, v11, (int *)&dwBytes_4);
  v785 = v20;
  v10 = v20;
  if ( v20 >= 0 )
    v21 = dwBytes_4;
  v813 = v21;
  if ( v20 < 0 )
    goto LABEL_464;
  v22 = RtlUIntAdd(dwBytes, v21, (int *)&dwBytes);
  v10 = v22 | 0x10000000;
  v785 = v22 | 0x10000000;
  if ( v22 < 0 )
    goto LABEL_464;
  v24 = RtlUIntAdd(v23, v15, (int *)&dwBytes_4);
  v785 = v24;
  v10 = v24;
  if ( v24 >= 0 )
    v25 = dwBytes_4;
  v813 = v25;
  if ( v24 < 0 )
    goto LABEL_464;
  v26 = RtlUIntAdd(dwBytes, v25, (int *)&dwBytes);
  v10 = v26 | 0x10000000;
  v785 = v26 | 0x10000000;
  if ( v26 < 0 )
    goto LABEL_464;
  v28 = RtlUIntAdd(v27, 8, (int *)&dwBytes_4);
  v785 = v28;
  v10 = v28;
  if ( v28 >= 0 )
    v29 = dwBytes_4;
  v813 = v29;
  if ( v28 < 0 )
    goto LABEL_464;
  v30 = RtlUIntAdd(dwBytes, v29, (int *)&dwBytes);
  v10 = v30 | 0x10000000;
  v785 = v30 | 0x10000000;
  if ( v30 < 0 )
    goto LABEL_464;
  v32 = StringCchLengthW(psz, v31, &pcchLength);
  v8 = 0LL;
  if ( v32 < 0 )
  {
    v10 = -1073741762;
LABEL_463:
    v785 = v10;
    goto LABEL_464;
  }
  v33 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), (int *)&dwBytes_4);
  v785 = v33;
  v10 = v33;
  if ( v33 >= 0 )
    v34 = dwBytes_4;
  v813 = v34;
  if ( v33 < 0 )
    goto LABEL_464;
  v35 = RtlUIntAdd(dwBytes, v34, (int *)&dwBytes);
  v10 = v35 | 0x10000000;
  v785 = v35 | 0x10000000;
  if ( v35 < 0 )
    goto LABEL_464;
  v37 = RtlUIntAdd(v36, v36, (int *)&dwBytes_4);
  v785 = v37;
  v10 = v37;
  if ( v37 >= 0 )
    v38 = dwBytes_4;
  v813 = v38;
  if ( v37 < 0 )
    goto LABEL_464;
  v39 = RtlUIntAdd(dwBytes, v38, (int *)&dwBytes);
  v10 = v39 | 0x10000000;
  v785 = v39 | 0x10000000;
  if ( v39 < 0 )
    goto LABEL_464;
  v41 = RtlUIntAdd(v40, v40, (int *)&dwBytes_4);
  v785 = v41;
  v10 = v41;
  if ( v41 >= 0 )
    v42 = dwBytes_4;
  v813 = v42;
  if ( v41 < 0 )
    goto LABEL_464;
  v43 = RtlUIntAdd(dwBytes, v42, (int *)&dwBytes);
  v10 = v43 | 0x10000000;
  v785 = v43 | 0x10000000;
  if ( v43 < 0 )
    goto LABEL_464;
  HIDWORD(v794) = dwBytes;
  v44 = dwBytes;
  v45 = GetProcessHeap();
  v46 = HeapAlloc(v45, 8u, v44);
  v8 = 0LL;
  if ( !v46 )
  {
    v10 = -1073741801;
    goto LABEL_463;
  }
  v795 = v46;
  LODWORD(v794) = 0;
  v863 = 0;
  v10 = RtlULongLongAdd((unsigned __int64)v46, 4LL, (__int64 *)&v815);
  v785 = v10;
  if ( v10 < 0 )
    goto LABEL_464;
  if ( v47 + 2 > (unsigned int *)((char *)v47 + HIDWORD(v794)) )
    goto LABEL_462;
  v49 = v815;
  *v47 = v48;
  *v49 = v863;
  v50 = v794 + 1;
  LODWORD(v794) = v794 + 1;
  if ( !(_DWORD)v11 )
  {
    v10 = -1073741811;
    v785 = -1073741811;
    goto LABEL_49;
  }
  if ( v795 != v8 )
  {
    v51 = (int *)v795;
    j = (size_t)v795;
    if ( v50 )
    {
      do
      {
        v52 = RtlUIntAdd(4u, *v51, (int *)&dwBytes_4);
        v785 = v52;
        v10 = v52;
        if ( v52 >= 0 )
          v54 = dwBytes_4;
        v827 = v54;
        if ( v52 < 0 )
          goto LABEL_48;
        v785 = RtlULongLongAdd(v53, v54, (__int64 *)&j);
        v10 = v785;
        if ( v785 < 0 )
          goto LABEL_48;
        v51 = (int *)j;
      }
      while ( v55 + 1 < (unsigned int)v794 );
    }
    v785 = RtlULongLongAdd((unsigned __int64)v51, 4LL, (__int64 *)&v815);
    v10 = v785;
    if ( v785 < 0 )
      goto LABEL_49;
    if ( (char *)v56 + v11 + 4 <= (char *)v795 + HIDWORD(v794) )
    {
      v57 = v815;
      *v56 = v11;
      memcpy_0(v57, v9, v11);
      LODWORD(v794) = v794 + 1;
LABEL_48:
      v8 = 0LL;
      goto LABEL_49;
    }
LABEL_462:
    v10 = -1073741789;
    goto LABEL_463;
  }
  v385 = RtlUIntAdd(v48, v11, (int *)&dwBytes_4);
  v386 = v827;
  v10 = v385;
  v785 = v385;
  if ( v385 >= 0 )
    v386 = dwBytes_4;
  v827 = v386;
  if ( v385 < 0 || (v785 = RtlUIntAdd(HIDWORD(v794), v386, (int *)&v794 + 1), v10 = v785, v785 < 0) )
  {
LABEL_49:
    if ( v10 >= 0 )
      goto LABEL_50;
LABEL_464:
    v4 = v9;
    v5 = v14;
    goto LABEL_438;
  }
  LODWORD(v794) = v794 + 1;
LABEL_50:
  if ( !v15 )
  {
    v10 = -1073741811;
    v785 = -1073741811;
    goto LABEL_62;
  }
  if ( v795 != v8 )
  {
    v58 = (int *)v795;
    j = (size_t)v795;
    if ( (unsigned int)v794 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v59 = RtlUIntAdd(4u, *v58, (int *)&dwBytes_4);
        v785 = v59;
        v10 = v59;
        if ( v59 >= 0 )
          v62 = dwBytes_4;
        v828 = v62;
        if ( v59 < 0 )
          break;
        v785 = RtlULongLongAdd(v61, v62, (__int64 *)&j);
        v10 = v785;
        if ( v785 < 0 )
          goto LABEL_61;
        v58 = (int *)j;
        if ( v63 + 1 >= (unsigned int)v794 )
          goto LABEL_58;
      }
      v8 = 0LL;
      v66 = v60;
      goto LABEL_63;
    }
LABEL_58:
    v785 = RtlULongLongAdd((unsigned __int64)v58, 4LL, (__int64 *)&v815);
    v10 = v785;
    if ( v785 >= 0 )
    {
      if ( (char *)v64 + v15 + 4 <= (char *)v795 + HIDWORD(v794) )
      {
        v65 = v815;
        *v64 = v15;
        memcpy_0(v65, v14, v15);
        LODWORD(v794) = v794 + 1;
LABEL_61:
        v8 = 0LL;
        goto LABEL_62;
      }
      goto LABEL_462;
    }
LABEL_62:
    v66 = 4LL;
    goto LABEL_63;
  }
  v66 = 4LL;
  v387 = RtlUIntAdd(4u, v15, (int *)&dwBytes_4);
  v388 = v828;
  v10 = v387;
  v785 = v387;
  if ( v387 >= 0 )
    v388 = dwBytes_4;
  v828 = v388;
  if ( v387 >= 0 )
  {
    v785 = RtlUIntAdd(HIDWORD(v794), v388, (int *)&v794 + 1);
    v10 = v785;
    if ( v785 >= 0 )
    {
      LODWORD(v794) = v794 + 1;
      goto LABEL_64;
    }
  }
LABEL_63:
  if ( v10 < 0 )
    goto LABEL_487;
LABEL_64:
  v895 = v886;
  if ( v795 != v8 )
  {
    v67 = (int *)v795;
    j = (size_t)v795;
    if ( (unsigned int)v794 <= (unsigned int)v8 )
    {
LABEL_71:
      v785 = RtlULongLongAdd((unsigned __int64)v67, v66, (__int64 *)&v815);
      v10 = v785;
      if ( v785 >= 0 )
      {
        if ( v73 + 3 > (_DWORD *)((char *)v795 + HIDWORD(v794)) )
        {
          v10 = -1073741789;
LABEL_486:
          v785 = v10;
          goto LABEL_487;
        }
        v74 = v815;
        *v73 = 8;
        *v74 = v895;
        LODWORD(v794) = v794 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v68 = RtlUIntAdd(v66, *v67, (int *)&dwBytes_4);
        v785 = v68;
        v10 = v68;
        if ( v68 >= 0 )
          v71 = dwBytes_4;
        v829 = v71;
        if ( v68 < 0 )
          break;
        v785 = RtlULongLongAdd(v70, v71, (__int64 *)&j);
        v10 = v785;
        if ( v785 < 0 )
          break;
        v67 = (int *)j;
        if ( v72 + 1 >= (unsigned int)v794 )
          goto LABEL_71;
      }
      v8 = 0LL;
    }
LABEL_74:
    if ( v10 >= 0 )
      goto LABEL_75;
LABEL_487:
    v4 = v9;
    goto LABEL_437;
  }
  v389 = RtlUIntAdd(v66, 8, (int *)&dwBytes_4);
  v69 = v829;
  v10 = v389;
  v785 = v389;
  if ( v389 >= 0 )
    v69 = dwBytes_4;
  v829 = v69;
  if ( v389 < 0 )
    goto LABEL_74;
  v785 = RtlUIntAdd(HIDWORD(v794), v69, (int *)&v794 + 1);
  v10 = v785;
  if ( v785 < 0 )
    goto LABEL_74;
  LODWORD(v794) = v794 + 1;
LABEL_75:
  v75 = psza;
  v76 = StringCchLengthW(psza, v69, &j);
  v8 = 0LL;
  if ( v76 < 0 )
  {
    v10 = -1073741762;
    goto LABEL_486;
  }
  v785 = RtlULongLongAdd(j, 1LL, (__int64 *)&j);
  v10 = v785;
  if ( v785 >= 0 )
  {
    if ( 2 * (_DWORD)j )
    {
      if ( v795 == v8 )
      {
        v390 = RtlUIntAdd(v66, 2 * (int)j, (int *)&dwBytes_4);
        v391 = v830;
        v10 = v390;
        v785 = v390;
        if ( v390 >= 0 )
          v391 = dwBytes_4;
        v830 = v391;
        if ( v390 >= 0 )
        {
          v785 = RtlUIntAdd(HIDWORD(v794), v391, (int *)&v794 + 1);
          v10 = v785;
          if ( v785 >= 0 )
          {
            LODWORD(v794) = v794 + 1;
            v10 = v392;
            v785 = v392;
          }
        }
      }
      else
      {
        v77 = (int)v8;
        v78 = (int *)v795;
        j = (size_t)v795;
        if ( (unsigned int)v794 <= (unsigned int)v8 )
        {
LABEL_85:
          v785 = RtlULongLongAdd((unsigned __int64)v78, v66, (__int64 *)&v815);
          v10 = v785;
          if ( v785 >= 0 )
          {
            if ( (char *)v82 + v83 + 4 > (char *)v795 + HIDWORD(v794) )
            {
              v10 = -1073741789;
              v785 = -1073741789;
            }
            else
            {
              v84 = v815;
              *v82 = v83;
              memcpy_0(v84, v75, (unsigned int)v83);
              LODWORD(v794) = v794 + 1;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v79 = RtlUIntAdd(v66, *v78, (int *)&dwBytes_4);
            v785 = v79;
            v10 = v79;
            if ( v79 >= 0 )
              v81 = dwBytes_4;
            v830 = v81;
            if ( v79 < 0 )
              break;
            v785 = RtlULongLongAdd(v80, v81, (__int64 *)&j);
            v10 = v785;
            if ( v785 < 0 )
              break;
            v78 = (int *)j;
            if ( ++v77 >= (unsigned int)v794 )
              goto LABEL_85;
          }
        }
      }
    }
    else
    {
      v10 = -1073741811;
      v785 = -1073741811;
    }
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_436;
  v864 = v842;
  if ( v795 == v8 )
  {
    v393 = RtlUIntAdd(v66, v66, (int *)&dwBytes_4);
    v394 = v831;
    v10 = v393;
    v785 = v393;
    if ( v393 >= 0 )
      v394 = dwBytes_4;
    v831 = v394;
    if ( v393 >= 0 )
    {
      v785 = RtlUIntAdd(HIDWORD(v794), v394, (int *)&v794 + 1);
      v10 = v785;
      if ( v785 >= 0 )
      {
        LODWORD(v794) = v794 + 1;
        goto LABEL_101;
      }
    }
  }
  else
  {
    v85 = (int *)v795;
    j = (size_t)v795;
    if ( (unsigned int)v794 <= (unsigned int)v8 )
    {
LABEL_97:
      v785 = RtlULongLongAdd((unsigned __int64)v85, v66, (__int64 *)&v815);
      v10 = v785;
      if ( v785 >= 0 )
      {
        if ( v90 + 2 > (_DWORD *)((char *)v795 + HIDWORD(v794)) )
          goto LABEL_501;
        v91 = v815;
        *v90 = v66;
        *v91 = v864;
        LODWORD(v794) = v794 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v86 = RtlUIntAdd(v66, *v85, (int *)&dwBytes_4);
        v785 = v86;
        v10 = v86;
        if ( v86 >= 0 )
          v88 = dwBytes_4;
        v831 = v88;
        if ( v86 < 0 )
          break;
        v785 = RtlULongLongAdd(v87, v88, (__int64 *)&j);
        v10 = v785;
        if ( v785 < 0 )
          break;
        v85 = (int *)j;
        if ( v89 + 1 >= (unsigned int)v794 )
          goto LABEL_97;
      }
      v8 = 0LL;
    }
  }
  if ( v10 < 0 )
    goto LABEL_436;
LABEL_101:
  v840 = v66;
  if ( v795 == v8 )
  {
    v395 = RtlUIntAdd(v66, v66, (int *)&dwBytes_4);
    v396 = v832;
    v10 = v395;
    v785 = v395;
    if ( v395 >= 0 )
      v396 = dwBytes_4;
    v832 = v396;
    if ( v395 >= 0 )
    {
      v785 = RtlUIntAdd(HIDWORD(v794), v396, (int *)&v794 + 1);
      v10 = v785;
      if ( v785 >= 0 )
      {
        LODWORD(v794) = v794 + 1;
        goto LABEL_112;
      }
    }
  }
  else
  {
    v92 = (int *)v795;
    j = (size_t)v795;
    if ( (unsigned int)v794 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v93 = RtlUIntAdd(v66, *v92, (int *)&dwBytes_4);
        v785 = v93;
        v10 = v93;
        if ( v93 >= 0 )
          v95 = dwBytes_4;
        v832 = v95;
        if ( v93 < 0 )
          break;
        v785 = RtlULongLongAdd(v94, v95, (__int64 *)&j);
        v10 = v785;
        if ( v785 < 0 )
          break;
        v92 = (int *)j;
        if ( v96 + 1 >= (unsigned int)v794 )
          goto LABEL_108;
      }
      v8 = 0LL;
      goto LABEL_111;
    }
LABEL_108:
    v785 = RtlULongLongAdd((unsigned __int64)v92, v66, (__int64 *)&v815);
    v10 = v785;
    if ( v785 >= 0 )
    {
      if ( v97 + 2 <= (_DWORD *)((char *)v795 + HIDWORD(v794)) )
      {
        v98 = v815;
        *v97 = v66;
        *v98 = v840;
        LODWORD(v794) = v794 + 1;
        goto LABEL_111;
      }
LABEL_501:
      v10 = -1073741789;
      v785 = -1073741789;
      goto LABEL_436;
    }
  }
LABEL_111:
  if ( v10 < 0 )
    goto LABEL_436;
LABEL_112:
  v99 = RtlUIntAdd(v66, v66, (int *)&dwBytes_4);
  v101 = v817;
  v10 = v99;
  v785 = v99;
  if ( v99 >= 0 )
    v101 = dwBytes_4;
  v817 = v101;
  if ( v99 < 0 )
    goto LABEL_509;
  dwBytes = v101;
  v102 = RtlUIntAdd(v100, 8, (int *)&dwBytes_4);
  v785 = v102;
  v104 = v103;
  v10 = v102;
  if ( v102 >= 0 )
    v104 = dwBytes_4;
  v817 = v104;
  if ( v102 < 0 )
  {
LABEL_509:
    v8 = 0LL;
LABEL_510:
    v114 = v840;
    goto LABEL_136;
  }
  v105 = RtlUIntAdd(v103, v104, (int *)&dwBytes);
  v8 = 0LL;
  v785 = v105;
  v10 = v105;
  if ( v105 < 0 )
    goto LABEL_510;
  v106 = RtlUIntAdd(v66, v66, (int *)&dwBytes_4);
  v785 = v106;
  v10 = v106;
  if ( v106 >= 0 )
    v107 = dwBytes_4;
  v817 = v107;
  if ( v106 < 0 )
    goto LABEL_510;
  v785 = RtlUIntAdd(dwBytes, v107, (int *)&dwBytes);
  v10 = v785;
  if ( v785 < 0 )
    goto LABEL_510;
  v108 = RtlUIntAdd(v66, v66, (int *)&dwBytes_4);
  v785 = v108;
  v10 = v108;
  if ( v108 >= 0 )
    v109 = dwBytes_4;
  v817 = v109;
  if ( v108 < 0 )
    goto LABEL_510;
  v785 = RtlUIntAdd(dwBytes, v109, (int *)&dwBytes);
  v10 = v785;
  if ( v785 < 0 )
    goto LABEL_510;
  v110 = RtlUIntAdd(v66, v66, (int *)&dwBytes_4);
  v785 = v110;
  v10 = v110;
  if ( v110 >= 0 )
    v111 = dwBytes_4;
  v817 = v111;
  if ( v110 < 0 )
    goto LABEL_510;
  v785 = RtlUIntAdd(dwBytes, v111, (int *)&dwBytes);
  v10 = v785;
  if ( v785 < 0 )
    goto LABEL_510;
  v112 = RtlUIntAdd(v66, v66, (int *)&dwBytes_4);
  v785 = v112;
  v10 = v112;
  if ( v112 >= 0 )
    v113 = dwBytes_4;
  v817 = v113;
  if ( v112 < 0 )
    goto LABEL_510;
  v10 = RtlUIntAdd(dwBytes, v113, (int *)&dwBytes);
  v785 = v10;
  v114 = v840;
  if ( v10 >= 0 )
    v114 = dwBytes;
LABEL_136:
  v821 = v114;
  if ( v10 < 0 )
    goto LABEL_436;
  v115 = v8;
  pcchLength = (size_t)v8;
  v116 = (unsigned int)v8;
  v859 = v8;
  v844 = v8;
  v117 = (unsigned int)v8;
  v804 = (int)v8;
  v833 = v8;
  v810 = (unsigned int)v8;
  v793 = v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v843 = (unsigned int)v8;
  v893 = __rdtsc();
  v818 = 8;
  v118 = RtlUIntAdd(8u, SHIDWORD(v794), (int *)&v818);
  if ( v118 >= 0 )
  {
    v119 = (v818 + 7) & 0xFFFFFFF8;
    if ( v119 < v818 )
    {
      v118 = -1073741675;
    }
    else
    {
      v818 = (v818 + 7) & 0xFFFFFFF8;
      v120 = v119;
      v121 = GetProcessHeap();
      v122 = (char *)HeapAlloc(v121, 8u, v120);
      v8 = 0LL;
      v123 = v122;
      if ( v122 )
      {
        j = (size_t)v122;
        *(_DWORD *)v122 = v794;
        v118 = RtlULongLongAdd((unsigned __int64)v122, 4LL, (__int64 *)&j);
        if ( v118 >= 0 )
        {
          v125 = j;
          *(_DWORD *)j = HIDWORD(v794);
          v118 = RtlULongLongAdd(v125, v124, (__int64 *)&j);
          if ( v118 >= 0 )
          {
            *(_QWORD *)&v123[v818 - 8] = v893;
            memcpy_0((void *)j, v795, HIDWORD(v794));
            v116 = v818;
            v8 = 0LL;
            v115 = (unsigned __int8 *)v123;
            pcchLength = (size_t)v123;
            v123 = 0LL;
          }
        }
        if ( v123 )
        {
          v397 = GetProcessHeap();
          HeapFree(v397, 0, v123);
          v8 = 0LL;
        }
      }
      else
      {
        v118 = -1073741801;
      }
    }
  }
  v10 = v118 | 0x10000000;
  v785 = v10;
  if ( v10 < 0 )
    goto LABEL_329;
  v898 = (__int64 *)v8;
  v126 = v8;
  v899 = (__int64)v8;
  v900 = v8;
  v901 = (__int64)v8;
  lpMem = v8;
  v925 = (SIZE_T)v8;
  v792 = v8;
  if ( v115 )
  {
    v127 = v116;
    v826 = v116;
    if ( v116 && (v812 = v116 + 8LL, v128 = MemoryAlloc(v812), v8 = 0LL, v820 = v128, (v129 = v128) != 0LL) )
    {
      v130 = 0;
      v131 = 0LL;
      LOBYTE(v790) = 0;
      if ( v127 )
      {
        do
          v130 ^= v115[v131++];
        while ( v131 < v127 );
        LOBYTE(v790) = v130;
      }
      v132 = -1;
      v798 = -1;
      v785 = 0;
      v133 = 0;
      v802 = 0;
      v939 = (void *)0xC81ECB17B1B54A58LL;
      v134 = v115;
      v135 = v129;
      v136 = 0;
      v137 = v127 & 7;
      if ( (v127 & 7) != 0 )
      {
        v785 = 0;
        v398 = 0;
        v399 = 0;
        v400 = 56;
        do
        {
          v401 = *v134;
          j = (size_t)(v134 + 1);
          if ( v399 >= 4 )
            v136 |= v401 << v400;
          else
            v398 |= v401 << (v400 - 32);
          ++v399;
          v400 -= 8;
          v134 = (unsigned __int8 *)j;
        }
        while ( v399 < v137 );
        v785 = v398;
        v133 = v398 ^ 0xB17A307A;
        v402 = v136 ^ 0x42F6B18D;
        v802 = v398 ^ 0xB17A307A;
        v403 = 0;
        v798 = v136 ^ 0x42F6B18D;
        if ( (v127 & 7) != 0 )
        {
          do
          {
            if ( v403 >= 4 )
            {
              v402 = __ROL4__(v402, 8);
              *v135 = v402;
            }
            else
            {
              v133 = __ROL4__(v133, 8);
              *v135 = v133;
            }
            ++v403;
            ++v135;
          }
          while ( v403 < v137 );
          v133 = v802;
          v402 = v798;
        }
        v404 = v137 - 4;
        if ( v404 <= 0 )
        {
          v132 = 0;
          v798 = 0;
          if ( v404 < 0 )
          {
            v133 = v133 >> (-8 * v404) << (-8 * v404);
            v802 = v133;
          }
        }
        else
        {
          v132 = v402 >> (8 * (4 - v404)) << (8 * (4 - v404));
          v798 = v132;
        }
      }
      v138 = v127 >> 3;
      if ( v127 >> 3 )
      {
        v139 = HIDWORD(v939);
        v140 = v135 + 7;
        v141 = v785;
        dwBytes_4 = WORD1(v939);
        v142 = v134 + 2;
        dwBytes = HIWORD(HIDWORD(v939));
        v143 = WORD2(v939);
        do
        {
          v144 = v142[1] | ((*v142 | ((*(v142 - 1) | (*(v142 - 2) << 8)) << 8)) << 8);
          v145 = v142[5];
          v146 = (v142[4] | ((v142[3] | (v142[2] << 8)) << 8)) << 8;
          v142 += 8;
          v147 = v145 | v146;
          v148 = v147 ^ v132;
          v149 = v139 ^ v133 ^ v144 ^ (v148 - 19032);
          v150 = (__ROR4__(v149, 7) + WORD1(v939) * __ROR4__(v133 ^ v144 ^ (v148 - 19032), 15)) ^ v148;
          v151 = (v143 * __ROR4__(v150 - 1313519016, 9) - __ROR4__(v150, 10)) ^ v149;
          v152 = (__ROL4__(v151, 5) + dwBytes * __ROL4__(v151 ^ v143, 4)) ^ v150;
          v153 = (v139 - (v152 ^ 0xB1B54A58)) ^ v151;
          v154 = (WORD1(v939) * (v153 - 19032) - (v153 >> 6)) ^ v152;
          v155 = (19032 * (v143 ^ __ROR4__(v154, 15))) ^ v153;
          v156 = (v143 * (dwBytes + __ROR4__(~v155, 3))) ^ v154;
          v157 = (v156 - v139 - 19032) ^ v155;
          v158 = (dwBytes_4 * (v157 ^ dwBytes)) ^ __ROR4__(v157, 10) ^ v156;
          v159 = __ROR4__(v158, 3) ^ (v143 * __ROL4__(v158 ^ 0x4A58, 6)) ^ v157;
          v160 = (19032 * (__ROR4__(v159, 15) - dwBytes)) ^ v158;
          v161 = (v160 >> 15) ^ (19032 * __ROL4__(v160 - v143, 3)) ^ (v160 >> 1) ^ (19032 * (v160 ^ dwBytes)) ^ v159;
          v162 = (WORD1(v939) * (v161 - v143) - (v161 >> 13)) ^ v160;
          v163 = __ROR4__(v162, 11) ^ (v143 * __ROR4__(-1313519016 - v162, 9)) ^ v161;
          v164 = (v163 - dwBytes + 1313519016) ^ v162;
          v165 = (19032 * (v164 ^ WORD1(v939)) - __ROR4__(v164, 7)) ^ v163;
          v166 = (WORD1(v939) * __ROL4__(v165 ^ dwBytes, 4) - __ROR4__(v165, 16)) ^ v164;
          v167 = (__ROR4__(v166, 4) + v143 * __ROR4__(-1313519016 - v166, 10)) ^ v165;
          v139 = HIDWORD(v939);
          v168 = __ROR4__(v167, 9) ^ (dwBytes * __ROR4__(v167 + 1313519016, 4)) ^ v166;
          v169 = (19032 * __ROL4__(HIDWORD(v939) ^ v168, 8) - __ROL4__(v168, 2)) ^ v167;
          v170 = (WORD1(v939) * __ROR4__(HIDWORD(v939) - v169, 11) - __ROR4__(v169, 12)) ^ v168;
          v171 = v136 ^ HIDWORD(v939);
          v172 = (v170 >> 8) ^ (v143 * (v170 ^ WORD1(v939))) ^ v169;
          v136 = v147;
          v802 = v141 ^ v172;
          v798 = v172 ^ v170 ^ v171 ^ 0xB1B54A58;
          v141 = v144;
          *(v140 - 4) = v802;
          v802 = __ROR4__(v802, 8);
          *v140 = v798;
          v140 += 8;
          v798 = __ROR4__(v798, 8);
          *(v140 - 13) = v802;
          v802 = __ROR4__(v802, 8);
          *(v140 - 9) = v798;
          v798 = __ROR4__(v798, 8);
          *(v140 - 14) = v802;
          v802 = __ROR4__(v802, 8);
          *(v140 - 10) = v798;
          v798 = __ROR4__(v798, 8);
          *(v140 - 15) = v802;
          *(v140 - 11) = v798;
          v133 = __ROR4__(v802, 8);
          v132 = __ROR4__(v798, 8);
          v802 = v133;
          v798 = v132;
          --v138;
        }
        while ( v138 );
        v130 = v790;
        v126 = v792;
        v127 = v826;
        v129 = v820;
      }
      *(_QWORD *)&v129[v127] = v130;
      v173 = v812;
      v925 = v812;
      lpMem = v129;
      v898 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
      v899 = 8LL;
      v901 = 160LL;
      v900 = (unsigned __int8 *)`WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
      v174 = GetProcessHeap();
      v175 = HeapAlloc(v174, 8u, 0x30uLL);
      v8 = 0LL;
      v176 = v175;
      if ( v175 )
      {
        *v175 = v173;
        v177 = GetProcessHeap();
        v178 = HeapAlloc(v177, 8u, v173);
        v8 = 0LL;
        if ( !v178 )
          goto LABEL_530;
        *((_QWORD *)v176 + 1) = v178;
        memcpy_0(v178, v129, v173);
        v176[4] = 160;
        v179 = GetProcessHeap();
        v180 = HeapAlloc(v179, 8u, 0xA0uLL);
        v8 = 0LL;
        if ( !v180 )
          goto LABEL_530;
        *((_QWORD *)v176 + 3) = v180;
        *v180 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
        v180[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
        v180[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
        v180[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
        v180[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
        v180[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
        v180[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
        v180[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
        v180[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
        v180[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
        v176[8] = 8;
        v181 = GetProcessHeap();
        v182 = HeapAlloc(v181, 8u, 8uLL);
        v8 = 0LL;
        if ( v182 )
        {
          *((_QWORD *)v176 + 5) = v182;
          v126 = v176;
          *v182 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
          v183 = 0;
          v176 = 0LL;
        }
        else
        {
LABEL_530:
          v183 = -1073741801;
        }
        if ( v176 )
        {
          v405 = (void *)*((_QWORD *)v176 + 1);
          if ( v405 )
          {
            v406 = GetProcessHeap();
            HeapFree(v406, 0, v405);
            *((_QWORD *)v176 + 1) = 0LL;
          }
          v407 = (void *)*((_QWORD *)v176 + 3);
          if ( v407 )
          {
            v408 = GetProcessHeap();
            HeapFree(v408, 0, v407);
            *((_QWORD *)v176 + 3) = 0LL;
          }
          v409 = (void *)*((_QWORD *)v176 + 5);
          if ( v409 )
          {
            v410 = GetProcessHeap();
            HeapFree(v410, 0, v409);
            *((_QWORD *)v176 + 5) = 0LL;
          }
          v411 = GetProcessHeap();
          HeapFree(v411, 0, v176);
          v8 = 0LL;
        }
      }
      else
      {
        v183 = -1073741801;
      }
      v117 = v804;
      if ( v183 >= 0 )
      {
        v859 = v126;
        v126 = 0LL;
      }
    }
    else
    {
      v183 = -1073741823;
    }
    v184 = lpMem;
    if ( lpMem )
    {
      v185 = GetProcessHeap();
      HeapFree(v185, 0, v184);
      v8 = 0LL;
      lpMem = 0LL;
    }
    if ( v126 )
    {
      v412 = (void *)v126[1];
      if ( v412 )
      {
        v413 = GetProcessHeap();
        HeapFree(v413, 0, v412);
        v126[1] = 0LL;
      }
      v414 = (void *)v126[3];
      if ( v414 )
      {
        v415 = GetProcessHeap();
        HeapFree(v415, 0, v414);
        v126[3] = 0LL;
      }
      v416 = (void *)v126[5];
      if ( v416 )
      {
        v417 = GetProcessHeap();
        HeapFree(v417, 0, v416);
        v126[5] = 0LL;
      }
      v418 = GetProcessHeap();
      HeapFree(v418, 0, v126);
      v8 = 0LL;
    }
  }
  else
  {
    v183 = -1073741811;
  }
  v10 = v183 | 0x10000000;
  v785 = v10;
  if ( v10 < 0 )
    goto LABEL_329;
  v186 = (const void **)v859;
  dwBytes = 4;
  v187 = RtlUIntAdd(4u, *(_DWORD *)v859, (int *)&dwBytes);
  if ( v187 < 0
    || (v187 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v187 < 0)
    || (v187 = RtlUIntAdd(dwBytes, *((_DWORD *)v186 + 4), (int *)&dwBytes), v187 < 0)
    || (v187 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v187 < 0) )
  {
    v188 = v837;
  }
  else
  {
    v187 = RtlUIntAdd(dwBytes, *((_DWORD *)v186 + 8), (int *)&dwBytes);
    v188 = v837;
    if ( v187 >= 0 )
      v188 = dwBytes;
    v837 = v188;
  }
  if ( v187 >= 0 )
  {
    v189 = v188;
    v190 = GetProcessHeap();
    v191 = HeapAlloc(v190, 8u, v189);
    v8 = 0LL;
    v192 = v191;
    if ( v191 )
    {
      v792 = v191;
      *v191 = *(_DWORD *)v186;
      v187 = RtlULongLongAdd((unsigned __int64)v191, 4LL, (__int64 *)&v792);
      if ( v187 >= 0 )
      {
        memcpy_0(v792, v186[1], *(unsigned int *)v186);
        v193 = RtlULongLongAdd((unsigned __int64)v792, *(unsigned int *)v186, (__int64 *)&v792);
        v8 = 0LL;
        v187 = v193;
        if ( v193 >= 0 )
        {
          v194 = v792;
          *(_DWORD *)v792 = *((_DWORD *)v186 + 4);
          v187 = RtlULongLongAdd((unsigned __int64)v194, 4LL, (__int64 *)&v792);
          if ( v187 >= 0 )
          {
            memcpy_0(v792, v186[3], *((unsigned int *)v186 + 4));
            v195 = RtlULongLongAdd((unsigned __int64)v792, *((unsigned int *)v186 + 4), (__int64 *)&v792);
            v8 = 0LL;
            v187 = v195;
            if ( v195 >= 0 )
            {
              v196 = v792;
              *(_DWORD *)v792 = *((_DWORD *)v186 + 8);
              v187 = RtlULongLongAdd((unsigned __int64)v196, 4LL, (__int64 *)&v792);
              if ( v187 >= 0 )
              {
                memcpy_0(v792, v186[5], *((unsigned int *)v186 + 8));
                v197 = RtlULongLongAdd((unsigned __int64)v792, *((unsigned int *)v186 + 8), (__int64 *)&v792);
                v8 = 0LL;
                v187 = v197;
                if ( v197 >= 0 )
                {
                  v117 = v837;
                  v844 = v192;
                  v192 = 0LL;
                }
              }
            }
          }
        }
      }
      if ( v192 )
      {
        v419 = GetProcessHeap();
        HeapFree(v419, 0, v192);
        v8 = 0LL;
      }
    }
    else
    {
      v187 = -1073741801;
    }
  }
  v10 = v187 | 0x10000000;
  v785 = v10;
  if ( v10 < 0 )
    goto LABEL_329;
  v198 = (int)v8;
  v902 = (size_t)v8;
  v866 = (int)v8;
  v865 = (int)v8;
  v903 = (size_t)v8;
  v834 = 8;
  v199 = RtlUIntAdd(8u, v821, (int *)&v834);
  v10 = v199 | 0x10000000;
  v785 = v199 | 0x10000000;
  if ( v199 >= 0 )
  {
    v201 = (v834 + 7) & 0xFFFFFFF8;
    if ( v201 < v834 )
    {
      v10 = -1073741675;
      v785 = -1073741675;
    }
    else
    {
      v847 = (v834 + 7) & 0xFFFFFFF8;
      v202 = RtlUIntAdd(v201, v200, (int *)&v847);
      v203 = v848;
      v10 = v202;
      v785 = v202;
      if ( v202 >= 0 )
        v203 = v847;
      v848 = v203;
    }
    if ( v10 < 0 )
      goto LABEL_329;
    if ( v795 == v8 || (unsigned int)v794 <= 1 )
      goto LABEL_549;
    v204 = (unsigned int *)v795;
    j = (size_t)v795;
    do
    {
      v205 = *v204;
      v785 = RtlULongLongAdd((unsigned __int64)v204, 4LL, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        goto LABEL_550;
      v785 = RtlULongLongAdd(j, v205, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        goto LABEL_550;
      v204 = (unsigned int *)j;
    }
    while ( v206 == -1 );
    v785 = RtlULongLongAdd(j, 4LL, (__int64 *)&j);
    v10 = v785;
    if ( v785 < 0 )
    {
LABEL_550:
      v8 = 0LL;
      goto LABEL_204;
    }
    v208 = j;
    v865 = v207;
    if ( !v207 )
      v208 = 0LL;
    v8 = 0LL;
    v902 = v208;
LABEL_204:
    if ( v10 < 0 )
      goto LABEL_329;
    if ( (unsigned int)v794 <= 2 )
    {
LABEL_549:
      v10 = -1073741811;
      v785 = -1073741811;
    }
    else
    {
      v209 = (unsigned int *)v795;
      j = (size_t)v795;
      do
      {
        v210 = *v209;
        v785 = RtlULongLongAdd((unsigned __int64)v209, 4LL, (__int64 *)&j);
        v10 = v785;
        if ( v785 < 0 )
          goto LABEL_551;
        v785 = RtlULongLongAdd(j, v210, (__int64 *)&j);
        v10 = v785;
        if ( v785 < 0 )
          goto LABEL_551;
        v209 = (unsigned int *)j;
      }
      while ( (unsigned int)(v212 + 1) < 2 );
      v785 = RtlULongLongAdd(j, 4LL, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
      {
LABEL_551:
        v8 = 0LL;
        goto LABEL_214;
      }
      v214 = j;
      v215 = v213 == 0;
      v198 = v213;
      v8 = 0LL;
      if ( v215 )
        v214 = 0LL;
      v866 = v198;
      v903 = v214;
LABEL_214:
      if ( v10 < 0 )
        goto LABEL_329;
      dwBytes = 4;
      v785 = RtlUIntAdd(4u, v211, (int *)&dwBytes);
      v10 = v785;
      if ( v785 < 0
        || (v785 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v10 = v785, v785 < 0)
        || (v785 = RtlUIntAdd(dwBytes, v216, (int *)&dwBytes), v10 = v785, v785 < 0)
        || (v785 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v10 = v785, v785 < 0) )
      {
        v217 = v849;
      }
      else
      {
        v10 = RtlUIntAdd(dwBytes, v198, (int *)&dwBytes);
        v785 = v10;
        v217 = v849;
        if ( v10 >= 0 )
          v217 = dwBytes;
        v849 = v217;
      }
      if ( v10 < 0 )
        goto LABEL_329;
      if ( v217 > 0x400000 )
      {
        v10 = -2147418113;
        goto LABEL_328;
      }
      v810 = v217;
    }
  }
  if ( v10 < 0 )
    goto LABEL_329;
  v218 = v810;
  v219 = GetProcessHeap();
  v220 = HeapAlloc(v219, 8u, v218);
  v8 = 0LL;
  if ( v220 )
  {
    v221 = v220;
    v833 = v220;
    v10 = 0x10000000;
  }
  else
  {
    v221 = v833;
    v10 = -805306345;
  }
  v785 = v10;
  if ( v10 < 0 )
    goto LABEL_329;
  if ( !v844 || !v221 )
  {
    v10 = -2147024809;
    goto LABEL_328;
  }
  v932[0] = v844;
  v934 = v810;
  v933 = v117;
  v932[1] = v221;
  v935 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
  {
    ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation");
    if ( ProcAddress )
    {
      v223 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v932);
      v224 = v810;
      v10 = v223 | 0x10000000;
      if ( v223 >= 0 )
        v224 = v934;
      v810 = v224;
      goto LABEL_236;
    }
  }
  LastError = GetLastError();
  v785 = LastError;
  v10 = LastError;
  if ( LastError > 0 )
  {
    v10 = (unsigned __int16)LastError | 0x80070000;
    v785 = v10;
  }
  v224 = v810;
  if ( v10 >= 0 )
  {
    v10 = -2147467259;
LABEL_236:
    v785 = v10;
  }
  v8 = 0LL;
  if ( v10 == -805306333 )
  {
    v10 = -2147024774;
    v785 = -2147024774;
    goto LABEL_329;
  }
  if ( v10 < 0 )
    goto LABEL_329;
  j = 0LL;
  v785 = 0;
  v939 = v221;
  if ( v224 < 4 )
    goto LABEL_561;
  v225 = *v221;
  v226 = RtlULongLongAdd((unsigned __int64)v221, 4LL, (__int64 *)&v939);
  if ( v226 < 0 )
    goto LABEL_562;
  v226 = RtlUIntAdd(0, 4, &v785);
  if ( v226 < 0 )
    goto LABEL_562;
  if ( v227 - v785 < v225 )
    goto LABEL_561;
  v812 = (SIZE_T)v939;
  v226 = RtlULongLongAdd((unsigned __int64)v939, v225, (__int64 *)&v939);
  if ( v226 < 0 )
    goto LABEL_562;
  v226 = RtlUIntAdd(v785, v225, &v785);
  if ( v226 < 0 )
    goto LABEL_562;
  if ( (unsigned int)(v228 - v785) < 4 )
    goto LABEL_561;
  v229 = *(unsigned int *)v939;
  v226 = RtlULongLongAdd((unsigned __int64)v939, 4LL, (__int64 *)&v939);
  if ( v226 < 0 )
    goto LABEL_562;
  v226 = RtlUIntAdd(v785, 4, &v785);
  if ( v226 < 0 )
    goto LABEL_562;
  if ( v230 - v785 < (unsigned int)v229 )
    goto LABEL_561;
  v231 = v939;
  v226 = RtlULongLongAdd((unsigned __int64)v939, (unsigned int)v229, (__int64 *)&v939);
  if ( v226 < 0 )
    goto LABEL_562;
  v226 = RtlUIntAdd(v785, v229, &v785);
  if ( v226 < 0 )
    goto LABEL_562;
  if ( v232 - v785 < (unsigned int)((_DWORD)v8 + 4) )
    goto LABEL_561;
  v233 = *(unsigned int *)v939;
  v226 = RtlULongLongAdd((unsigned __int64)v939, (unsigned int)((_DWORD)v8 + 4), (__int64 *)&v939);
  if ( v226 < 0 )
    goto LABEL_562;
  v226 = RtlUIntAdd(v785, v234, &v785);
  if ( v226 < 0 )
    goto LABEL_562;
  if ( v235 - v785 < (unsigned int)v233 )
    goto LABEL_561;
  v226 = RtlUIntAdd(v785, v233, &v785);
  if ( v226 < 0 )
  {
LABEL_562:
    v248 = v793;
    goto LABEL_273;
  }
  if ( v236 != v785 || v225 + (_DWORD)v233 + (_DWORD)v229 + 12LL != v236 )
  {
LABEL_561:
    v226 = -1073741762;
    goto LABEL_562;
  }
  v237 = GetProcessHeap();
  v238 = HeapAlloc(v237, 8u, 0x30uLL);
  v8 = 0LL;
  v239 = (size_t)v238;
  if ( v238 )
  {
    v240 = (const void *)v812;
    if ( v812 )
    {
      *(_DWORD *)v238 = v225;
      v241 = GetProcessHeap();
      v242 = HeapAlloc(v241, 8u, v225);
      v8 = 0LL;
      if ( !v242 )
        goto LABEL_564;
      *(_QWORD *)(v239 + 8) = v242;
      memcpy_0(v242, v240, v225);
      v8 = 0LL;
    }
    else
    {
      *(_DWORD *)v238 = 0;
      v238[1] = 0LL;
    }
    if ( v231 )
    {
      *(_DWORD *)(v239 + 16) = v229;
      v243 = GetProcessHeap();
      v244 = HeapAlloc(v243, 8u, v229);
      v8 = 0LL;
      if ( !v244 )
        goto LABEL_564;
      *(_QWORD *)(v239 + 24) = v244;
      memcpy_0(v244, v231, v229);
      v8 = 0LL;
    }
    else
    {
      *(_DWORD *)(v239 + 16) = 0;
      *(_QWORD *)(v239 + 24) = 0LL;
    }
    v245 = v939;
    if ( !v939 )
    {
      *(_DWORD *)(v239 + 32) = 0;
      *(_QWORD *)(v239 + 40) = 0LL;
      goto LABEL_268;
    }
    *(_DWORD *)(v239 + 32) = v233;
    v246 = GetProcessHeap();
    v247 = HeapAlloc(v246, 8u, v233);
    v8 = 0LL;
    if ( v247 )
    {
      *(_QWORD *)(v239 + 40) = v247;
      memcpy_0(v247, v245, v233);
      v8 = 0LL;
LABEL_268:
      j = v239;
      v226 = 0;
      v239 = 0LL;
      goto LABEL_269;
    }
LABEL_564:
    v226 = -1073741801;
LABEL_269:
    if ( v239 )
    {
      v421 = *(void **)(v239 + 8);
      if ( v421 )
      {
        v422 = GetProcessHeap();
        HeapFree(v422, 0, v421);
        *(_QWORD *)(v239 + 8) = 0LL;
      }
      v423 = *(void **)(v239 + 24);
      if ( v423 )
      {
        v424 = GetProcessHeap();
        HeapFree(v424, 0, v423);
        *(_QWORD *)(v239 + 24) = 0LL;
      }
      v425 = *(void **)(v239 + 40);
      if ( v425 )
      {
        v426 = GetProcessHeap();
        HeapFree(v426, 0, v425);
        *(_QWORD *)(v239 + 40) = 0LL;
      }
      v427 = GetProcessHeap();
      HeapFree(v427, 0, (LPVOID)v239);
      v8 = 0LL;
    }
    goto LABEL_270;
  }
  v226 = -1073741801;
LABEL_270:
  v248 = (_DWORD *)j;
  v249 = 0LL;
  if ( v226 < 0 )
  {
    v249 = (_QWORD *)j;
    v248 = 0LL;
  }
  v793 = v248;
  if ( v249 )
  {
    v428 = (void *)v249[1];
    if ( v428 )
    {
      v429 = GetProcessHeap();
      HeapFree(v429, 0, v428);
      v249[1] = 0LL;
    }
    v430 = (void *)v249[3];
    if ( v430 )
    {
      v431 = GetProcessHeap();
      HeapFree(v431, 0, v430);
      v249[3] = 0LL;
    }
    v432 = (void *)v249[5];
    if ( v432 )
    {
      v433 = GetProcessHeap();
      HeapFree(v433, 0, v432);
      v249[5] = 0LL;
    }
    v434 = GetProcessHeap();
    HeapFree(v434, 0, v249);
    v248 = v793;
    v8 = 0LL;
  }
LABEL_273:
  v10 = v226 | 0x10000000;
  v785 = v10;
  if ( v10 >= 0 )
  {
    v894 = (unsigned __int64)v8;
    v250 = (wchar_t *)v8;
    v846 = (wchar_t *)v8;
    if ( !v248 || (v251 = (unsigned __int8 *)*((_QWORD *)v248 + 1), (v792 = v251) == 0LL) || *v248 == (_DWORD)v8 )
    {
      v10 = -805306355;
      goto LABEL_328;
    }
    v252 = (unsigned int)*v248;
    LODWORD(v826) = (_DWORD)v8;
    if ( !v252 )
      goto LABEL_600;
    v253 = v252 - 8;
    v820 = (void *)v253;
    v254 = MemoryAlloc(v253);
    v8 = 0LL;
    j = (size_t)v254;
    v255 = v254;
    if ( !v254 )
    {
      v250 = v846;
      goto LABEL_600;
    }
    v256 = 0;
    LOBYTE(v790) = 0;
    v939 = (void *)0x7F1137FAB69605ELL;
    v257 = v251;
    v258 = v255;
    v259 = v253 & 7;
    if ( (v253 & 7) != 0 )
    {
      v796 = -1;
      v800 = 0;
      v261 = 0;
      v804 = 0;
      v435 = 0;
      v436 = 0;
      v437 = 56;
      do
      {
        v438 = *v257;
        if ( v436 >= 4 )
          v261 |= v438 << v437;
        else
          v435 |= v438 << (v437 - 32);
        ++v436;
        v437 -= 8;
        ++v257;
      }
      while ( v436 < v259 );
      v804 = v435;
      v260 = v435 ^ 0x92F65A5;
      v439 = v261 ^ 0x699A899C;
      v800 = v435 ^ 0x92F65A5;
      v440 = 0;
      v796 = v261 ^ 0x699A899C;
      if ( (v253 & 7) != 0 )
      {
        do
        {
          if ( v440 >= 4 )
          {
            v439 = __ROL4__(v439, 8);
            *v258 = v439;
          }
          else
          {
            v260 = __ROL4__(v260, 8);
            *v258 = v260;
          }
          ++v440;
          ++v258;
        }
        while ( v440 < v259 );
        v260 = v800;
        v439 = v796;
      }
      v441 = v259 - 4;
      if ( v441 <= 0 )
      {
        v262 = 0;
        v796 = 0;
        if ( v441 < 0 )
        {
          v260 = v260 >> (-8 * v441) << (-8 * v441);
          v800 = v260;
        }
LABEL_282:
        v263 = v253 >> 3;
        if ( v253 >> 3 )
        {
          v264 = HIDWORD(v939);
          v265 = v258 + 7;
          v266 = v257 + 2;
          v785 = WORD2(v939);
          dwBytes_4 = WORD1(v939);
          v267 = HIDWORD(v939) ^ 0xAB69605E;
          v268 = v804;
          dwBytes = HIWORD(HIDWORD(v939));
          do
          {
            v269 = v266[1] | ((*v266 | ((*(v266 - 1) | (*(v266 - 2) << 8)) << 8)) << 8);
            v270 = v269 ^ v260;
            v271 = v266[5] | ((v266[4] | ((v266[3] | (v266[2] << 8)) << 8)) << 8);
            v812 = (SIZE_T)(v266 + 8);
            v272 = v270 ^ v271 ^ v262 ^ v267;
            v273 = (__ROL4__(v272, 10) + v785 * __ROL4__(v272 + 1419157410, 5)) ^ v270;
            v274 = (WORD1(v939) * __ROR4__(v264 + v273, 9) - __ROL4__(v273, 2)) ^ v272;
            v275 = (24670 * (v274 - v785) - (v274 >> 13)) ^ v273;
            v276 = (dwBytes * __ROL4__(v275 ^ WORD1(v939), 6) - __ROL4__(v275, 2)) ^ v274;
            v277 = (v264 - (v276 ^ 0xAB69605E)) ^ v275;
            v278 = (dwBytes_4 * (v277 ^ v785)) ^ __ROR4__(v277, 6) ^ v276;
            v279 = (__ROL4__(v278, 2) + 24670 * __ROR4__(v264 + v278, 15)) ^ v277;
            v280 = (dwBytes * __ROR4__(v279 + 1419157410, 14) - __ROL4__(v279, 8)) ^ v278;
            v281 = __ROR4__(v280, 10) ^ (v785 * __ROR4__(v280 ^ 0xAB69605E, 12)) ^ v279;
            v282 = v280 ^ (v281 >> 10) ^ (WORD1(v939) * (v281 ^ dwBytes));
            v283 = (dwBytes * (__ROR4__(~v282, 5) + 24670)) ^ v281;
            v284 = v282 ^ (v283 - dwBytes) ^ 0xAB69605E;
            v285 = ((v284 >> 2) + v785 * __ROL4__(v284 ^ dwBytes, 2)) ^ v283;
            v286 = (__ROL4__(v285, 7) + WORD1(v939) * __ROR4__(v285 - v264, 6)) ^ v284;
            v287 = (24670 * (v286 ^ v785) + __ROR4__(v286, 9)) ^ v285;
            v288 = (__ROL4__(v287, 7) + dwBytes * __ROL4__(v287 ^ WORD1(v939), 5)) ^ v286;
            v289 = v288 ^ v267 ^ v287;
            v290 = (v785 * (__ROR4__(v289, 3) - WORD1(v939))) ^ v288;
            v291 = (24670 * __ROR4__(v290 - v264, 1) - __ROR4__(v290, 6)) ^ v289;
            v266 = (unsigned __int8 *)v812;
            v292 = (__ROL4__(v291, 14) + dwBytes * __ROL4__(v291 - 1419157410, 3)) ^ v290;
            v293 = (v785 * __ROL4__(v292 - 1419157410, 15) - __ROR4__(v292, 14)) ^ v291;
            v294 = (v293 >> 3) ^ (WORD1(v939) * (v293 ^ 0x605E)) ^ v292;
            v796 = v261 ^ v294;
            v261 = v271;
            v295 = v268 ^ __ROL4__(v294, 2) ^ (24670 * __ROL4__(v294 ^ v264, 4));
            v268 = v269;
            v800 = v295 ^ v293;
            *(v265 - 4) = v295 ^ v293;
            v800 = __ROR4__(v800, 8);
            *v265 = v796;
            v265 += 8;
            v796 = __ROR4__(v796, 8);
            *(v265 - 13) = v800;
            v800 = __ROR4__(v800, 8);
            *(v265 - 9) = v796;
            v796 = __ROR4__(v796, 8);
            *(v265 - 14) = v800;
            v800 = __ROR4__(v800, 8);
            *(v265 - 10) = v796;
            v796 = __ROR4__(v796, 8);
            *(v265 - 15) = v800;
            *(v265 - 11) = v796;
            v260 = __ROR4__(v800, 8);
            v262 = __ROR4__(v796, 8);
            v800 = v260;
            v796 = v262;
            --v263;
          }
          while ( v263 );
          v256 = v790;
          v253 = (unsigned __int64)v820;
          v255 = (_BYTE *)j;
        }
        v8 = 0LL;
        for ( i = 0LL; i < v253; ++i )
          v256 ^= v255[i];
        if ( v256 == *(_QWORD *)((char *)v792 + v253) )
        {
          v250 = (wchar_t *)v255;
          v894 = v253;
          v297 = v826;
          v255 = 0LL;
          v846 = v250;
        }
        else
        {
          v250 = v846;
          v297 = -1073425151;
        }
        if ( v255 )
        {
          MemoryFree(v255);
          v250 = v846;
          v8 = 0LL;
        }
        if ( v297 >= 0 )
        {
          v298 = v894;
          v299 = v250;
          psza = v250;
          v10 = 0x10000000;
          v250 = 0LL;
          v843 = v894;
          v846 = 0LL;
          goto LABEL_294;
        }
LABEL_600:
        v298 = v843;
        v10 = -805306367;
        v299 = psza;
LABEL_294:
        v785 = v10;
        if ( v250 )
        {
          v442 = GetProcessHeap();
          HeapFree(v442, 0, v250);
          v298 = v843;
          v8 = 0LL;
          v846 = 0LL;
        }
        if ( v10 < 0 )
          goto LABEL_329;
        dwBytes = (unsigned int)v8;
        j = (size_t)v299;
        if ( v298 >= 4 )
        {
          LODWORD(v826) = *(_DWORD *)v299;
          v300 = RtlULongLongAdd((unsigned __int64)v299, 4LL, (__int64 *)&j);
          if ( v300 < 0 )
            goto LABEL_327;
          v300 = RtlUIntAdd(0, v301, (int *)&dwBytes);
          if ( v300 < 0 )
            goto LABEL_327;
          if ( v302 - dwBytes >= v303 )
          {
            v304 = *(unsigned int *)j;
            v300 = RtlULongLongAdd(j, v303, (__int64 *)&j);
            if ( v300 < 0 )
              goto LABEL_327;
            v300 = RtlUIntAdd(dwBytes, v305, (int *)&dwBytes);
            if ( v300 < 0 )
              goto LABEL_327;
            if ( v306 - dwBytes >= (unsigned int)v304 )
            {
              v300 = RtlUIntAdd(dwBytes, v304, (int *)&dwBytes);
              if ( v300 < 0 )
                goto LABEL_327;
              v309 = (const void *)j;
              if ( (unsigned __int64)v299 + v307 >= v304 + j && (unsigned __int64)v299 + v307 - v304 - j < 8 )
              {
                v310 = v308;
                v300 = (int)v308;
                v311 = (unsigned int)v308;
                if ( !j )
                  goto LABEL_319;
                v300 = RtlULongLongAdd(j, (unsigned int)v304, (__int64 *)&v812);
                if ( v300 < 0 )
                  goto LABEL_325;
                v313 = v812;
                if ( (unsigned __int64)v309 < v812 )
                {
                  do
                  {
                    v300 = RtlULongLongAdd((unsigned __int64)v312, 4LL, (__int64 *)&v812);
                    if ( v300 < 0 )
                      goto LABEL_327;
                    if ( v812 > v315 )
                      goto LABEL_601;
                    v316 = RtlUIntAdd(4u, *v314, (int *)&dwBytes_4);
                    v300 = v316;
                    if ( v316 >= 0 )
                      v318 = dwBytes_4;
                    v867 = v318;
                    if ( v316 < 0 )
                      goto LABEL_327;
                    v300 = RtlULongLongAdd(v317, v318, (__int64 *)&v820);
                    if ( v300 < 0 )
                      goto LABEL_327;
                    v312 = v820;
                    if ( (unsigned __int64)v820 > v313 )
                      goto LABEL_601;
                    ++v311;
                  }
                  while ( (unsigned __int64)v820 < v313 );
                }
                if ( v312 == (void *)v313 )
                {
LABEL_319:
                  if ( (_DWORD)v304 )
                  {
                    v319 = GetProcessHeap();
                    v310 = HeapAlloc(v319, 8u, v304);
                    if ( !v310 )
                    {
                      v300 = -1073741801;
                      goto LABEL_325;
                    }
                    v300 = 0;
                  }
                  if ( v309 )
                    memcpy_0(v310, v309, v304);
                  v824 = v310;
                  v823 = __PAIR64__(v304, v311);
LABEL_325:
                  if ( v300 < 0 || (_DWORD)v826 == (_DWORD)v823 )
                    goto LABEL_327;
                  goto LABEL_603;
                }
LABEL_601:
                v300 = -1073741811;
LABEL_327:
                v10 = v300 | 0x10000000;
                v8 = 0LL;
LABEL_328:
                v785 = v10;
                goto LABEL_329;
              }
            }
          }
        }
LABEL_603:
        v300 = -1073741762;
        goto LABEL_327;
      }
      v262 = v439 >> (8 * (4 - v441)) << (8 * (4 - v441));
    }
    else
    {
      v260 = 0;
      v804 = 0;
      v800 = 0;
      v261 = -1;
      v262 = 0;
    }
    v796 = v262;
    goto LABEL_282;
  }
LABEL_329:
  v320 = (void *)pcchLength;
  if ( pcchLength )
  {
    v321 = GetProcessHeap();
    HeapFree(v321, 0, v320);
    v8 = 0LL;
  }
  v322 = v859;
  if ( v859 )
  {
    v323 = (void *)*((_QWORD *)v859 + 1);
    if ( v323 )
    {
      v324 = GetProcessHeap();
      HeapFree(v324, 0, v323);
      v322[1] = 0LL;
    }
    v325 = (void *)v322[3];
    if ( v325 )
    {
      v326 = GetProcessHeap();
      HeapFree(v326, 0, v325);
      v322[3] = 0LL;
    }
    v327 = (void *)v322[5];
    if ( v327 )
    {
      v328 = GetProcessHeap();
      HeapFree(v328, 0, v327);
      v322[5] = 0LL;
    }
    v329 = GetProcessHeap();
    HeapFree(v329, 0, v322);
    v8 = 0LL;
    v859 = 0LL;
  }
  v330 = v844;
  if ( v844 )
  {
    v331 = GetProcessHeap();
    HeapFree(v331, 0, v330);
    v8 = 0LL;
  }
  v332 = v833;
  if ( v833 )
  {
    v333 = GetProcessHeap();
    HeapFree(v333, 0, v332);
    v8 = 0LL;
  }
  v334 = v793;
  if ( v793 )
  {
    v335 = (void *)*((_QWORD *)v793 + 1);
    if ( v335 )
    {
      v336 = GetProcessHeap();
      HeapFree(v336, 0, v335);
      v334[1] = 0LL;
    }
    v337 = (void *)v334[3];
    if ( v337 )
    {
      v338 = GetProcessHeap();
      HeapFree(v338, 0, v337);
      v334[3] = 0LL;
    }
    v339 = (void *)v334[5];
    if ( v339 )
    {
      v340 = GetProcessHeap();
      HeapFree(v340, 0, v339);
      v334[5] = 0LL;
    }
    v341 = GetProcessHeap();
    HeapFree(v341, 0, v334);
    v8 = 0LL;
  }
  v342 = (wchar_t *)psza;
  if ( psza )
  {
    v343 = GetProcessHeap();
    HeapFree(v343, 0, v342);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_436;
  if ( !(_DWORD)v823 )
    goto LABEL_604;
  if ( v824 == v8 || (unsigned int)v823 <= (unsigned int)v8 )
  {
    v10 = -1073741811;
    v785 = -1073741811;
  }
  else
  {
    pcchLength = (size_t)v824;
    v785 = RtlULongLongAdd((unsigned __int64)v824, 4LL, (__int64 *)&pcchLength);
    v10 = v785;
    if ( v785 < 0 )
    {
      v344 = v868;
      v345 = v905;
    }
    else
    {
      v345 = (int *)pcchLength;
      v868 = v344;
      if ( !v344 )
        v345 = (int *)v8;
      v905 = v345;
    }
    if ( v785 < 0 )
      goto LABEL_436;
    if ( v344 != 4 )
      goto LABEL_607;
    v825 = *v345;
  }
  if ( v10 < 0 )
    goto LABEL_436;
  v10 = v825;
  if ( v825 == -805306333 )
    v10 = -2147024774;
  v785 = v10;
  v825 = v10;
  if ( v10 != -2147024774 && v10 < 0 )
    goto LABEL_436;
  if ( (_DWORD)v823 != 6 )
  {
LABEL_604:
    v10 = -1073425151;
    goto LABEL_435;
  }
  if ( v824 == v8 )
  {
    v10 = -1073741811;
    v785 = -1073741811;
    goto LABEL_382;
  }
  v346 = (unsigned __int64)v824;
  j = (size_t)v824;
  do
  {
    v785 = RtlULongLongAdd(v346, 4LL, (__int64 *)&j);
    v10 = v785;
    if ( v785 < 0 )
    {
      v8 = 0LL;
      goto LABEL_610;
    }
    v348 = RtlULongLongAdd(j, v347, (__int64 *)&j);
    v8 = 0LL;
    v785 = v348;
    v10 = v348;
    if ( v348 < 0 )
      goto LABEL_610;
    v346 = j;
  }
  while ( v349 == -1 );
  v785 = RtlULongLongAdd(j, 4LL, (__int64 *)&j);
  v10 = v785;
  if ( v785 < 0 )
  {
LABEL_610:
    v350 = v869;
    v351 = v906;
    goto LABEL_379;
  }
  v351 = (_QWORD *)j;
  v869 = v350;
  if ( !v350 )
    v351 = v8;
  v906 = v351;
LABEL_379:
  if ( v10 < 0 )
    goto LABEL_436;
  if ( v350 != 8 )
    goto LABEL_607;
  v911 = *v351;
LABEL_382:
  if ( v10 < 0 )
    goto LABEL_436;
  if ( v824 == v8 )
  {
    v10 = -1073741811;
    v785 = -1073741811;
LABEL_395:
    if ( v10 < 0 )
      goto LABEL_436;
    if ( v824 == v8 )
    {
      v10 = -1073741811;
      goto LABEL_435;
    }
    v358 = (unsigned __int64)v824;
    j = (size_t)v824;
    while ( 1 )
    {
      v785 = RtlULongLongAdd(v358, 4LL, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        break;
      v785 = RtlULongLongAdd(j, v359, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        break;
      v358 = j;
      if ( (unsigned int)(v360 + 1) >= 3 )
      {
        v785 = RtlULongLongAdd(j, 4LL, (__int64 *)&j);
        v10 = v785;
        if ( v785 >= 0 )
        {
          v362 = j;
          v871 = v361;
          if ( !v361 )
            v362 = 0LL;
          v908 = v362;
        }
        break;
      }
    }
    if ( v10 < 0 )
      goto LABEL_621;
    v363 = (unsigned int *)v824;
    j = (size_t)v824;
    do
    {
      v364 = *v363;
      v785 = RtlULongLongAdd((unsigned __int64)v363, 4LL, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        goto LABEL_616;
      v785 = RtlULongLongAdd(j, v364, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        goto LABEL_616;
      v363 = (unsigned int *)j;
    }
    while ( (unsigned int)(v365 + 1) < 4 );
    v785 = RtlULongLongAdd(j, 4LL, (__int64 *)&j);
    v10 = v785;
    if ( v785 < 0 )
    {
LABEL_616:
      v366 = v873;
      v367 = v909;
      goto LABEL_414;
    }
    v367 = (unsigned int *)j;
    v873 = v366;
    if ( !v366 )
      v367 = 0LL;
    v909 = v367;
LABEL_414:
    if ( v10 < 0 )
    {
      v368 = v874;
    }
    else
    {
      if ( v366 != 4 )
        goto LABEL_617;
      v368 = *v367;
      v874 = *v367;
    }
    if ( v10 < 0 )
      goto LABEL_621;
    v369 = (unsigned int *)v824;
    j = (size_t)v824;
    do
    {
      v370 = *v369;
      v785 = RtlULongLongAdd((unsigned __int64)v369, 4LL, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        goto LABEL_623;
      v785 = RtlULongLongAdd(j, v370, (__int64 *)&j);
      v10 = v785;
      if ( v785 < 0 )
        goto LABEL_623;
      v369 = (unsigned int *)j;
    }
    while ( (unsigned int)(v373 + 1) < 5 );
    v785 = RtlULongLongAdd(j, 4LL, (__int64 *)&j);
    v10 = v785;
    if ( v785 < 0 )
    {
LABEL_623:
      v374 = v875;
      v375 = v910;
      goto LABEL_426;
    }
    v375 = (_DWORD *)j;
    v875 = v374;
    if ( !v374 )
      v375 = 0LL;
    v910 = v375;
LABEL_426:
    if ( v10 < 0 )
    {
      v376 = v850;
LABEL_429:
      if ( v10 >= 0 )
      {
        if ( v886 == v911 )
        {
          v856 = v877;
          v852 = v368;
          v842 = v376;
          if ( v368 <= 4 && v371 <= 4 )
          {
            memcpy_0(v885, v372, v371);
            v8 = 0LL;
            if ( v825 )
              v10 = v825;
            goto LABEL_435;
          }
          v10 = -2147024774;
          v785 = -2147024774;
          goto LABEL_621;
        }
        v10 = -1073425151;
        goto LABEL_619;
      }
LABEL_621:
      v8 = 0LL;
      goto LABEL_436;
    }
    if ( v374 == 4 )
    {
      v376 = *v375;
      v850 = *v375;
      goto LABEL_429;
    }
LABEL_617:
    v10 = -1073741789;
LABEL_619:
    v785 = v10;
    goto LABEL_621;
  }
  v352 = (unsigned __int64)v824;
  j = (size_t)v824;
  do
  {
    v785 = RtlULongLongAdd(v352, 4LL, (__int64 *)&j);
    v10 = v785;
    if ( v785 < 0 )
    {
      v8 = 0LL;
      goto LABEL_613;
    }
    v354 = RtlULongLongAdd(j, v353, (__int64 *)&j);
    v8 = 0LL;
    v785 = v354;
    v10 = v354;
    if ( v354 < 0 )
      goto LABEL_613;
    v352 = j;
  }
  while ( (unsigned int)(v355 + 1) < 2 );
  v785 = RtlULongLongAdd(j, 4LL, (__int64 *)&j);
  v10 = v785;
  if ( v785 < 0 )
  {
LABEL_613:
    v356 = v870;
    v357 = v907;
    goto LABEL_392;
  }
  v357 = (_DWORD *)j;
  v870 = v356;
  if ( !v356 )
    v357 = v8;
  v907 = v357;
LABEL_392:
  if ( v10 >= 0 )
  {
    if ( v356 == 4 )
    {
      v877 = *v357;
      goto LABEL_395;
    }
LABEL_607:
    v10 = -1073741789;
LABEL_435:
    v785 = v10;
  }
LABEL_436:
  v4 = v789;
LABEL_437:
  v5 = v791;
LABEL_438:
  v794 = 0LL;
  v377 = v795;
  if ( v795 )
  {
    v378 = GetProcessHeap();
    HeapFree(v378, 0, v377);
    v8 = 0LL;
    v795 = 0LL;
  }
  v823 = 0LL;
  v379 = v824;
  if ( v824 )
  {
    v380 = GetProcessHeap();
    HeapFree(v380, 0, v379);
    v8 = 0LL;
    v824 = 0LL;
  }
  if ( v4 )
  {
    v381 = GetProcessHeap();
    HeapFree(v381, 0, v4);
    v8 = 0LL;
  }
  if ( v5 )
  {
    v382 = GetProcessHeap();
    HeapFree(v382, 0, v5);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_1029;
  if ( v842 == (_DWORD)v8 )
    goto LABEL_448;
  v789 = v8;
  v806 = 0LL;
  v443 = v8;
  v807 = 0LL;
  v444 = v8;
  v857 = 0LL;
  v858 = 0LL;
  v839 = (int)v8;
  v912 = &`WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher;
  v887 = 160LL;
  v445 = GetProcessHeap();
  v446 = HeapAlloc(v445, 8u, 0xA0uLL);
  v8 = 0LL;
  v447 = v446;
  if ( !v446 )
    goto LABEL_1019;
  memcpy_0(v446, v912, v887);
  v448 = (unsigned int)v887;
  v443 = v447;
  v792 = v447;
  v888 = 8LL;
  v913 = &`WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v449 = GetProcessHeap();
  v450 = HeapAlloc(v449, 8u, 8uLL);
  v8 = 0LL;
  v451 = v450;
  if ( !v450 )
    goto LABEL_1018;
  memcpy_0(v450, v913, v888);
  v452 = v888;
  v789 = v451;
  v914 = __rdtsc();
  dwBytes = 0;
  if ( (int)RtlUIntAdd(4u, 4, (int *)&dwBytes_4) < 0 )
    goto LABEL_665;
  v836 = dwBytes_4;
  if ( (int)RtlUIntAdd(0, dwBytes_4, (int *)&dwBytes) < 0 )
    goto LABEL_665;
  if ( (int)RtlUIntAdd(v453, v448, (int *)&dwBytes_4) < 0 )
    goto LABEL_665;
  v836 = dwBytes_4;
  v454 = RtlUIntAdd(dwBytes, dwBytes_4, (int *)&dwBytes);
  if ( (v456 | v454) < 0 )
    goto LABEL_665;
  if ( (int)RtlUIntAdd(v455, v452, (int *)&dwBytes_4) < 0 )
    goto LABEL_665;
  v836 = dwBytes_4;
  v457 = RtlUIntAdd(dwBytes, dwBytes_4, (int *)&dwBytes);
  if ( (v459 | v457) < 0 )
    goto LABEL_665;
  if ( (int)RtlUIntAdd(v458, (int)v8 + 8, (int *)&dwBytes_4) < 0 )
    goto LABEL_665;
  v836 = dwBytes_4;
  v460 = RtlUIntAdd(dwBytes, dwBytes_4, (int *)&dwBytes);
  if ( (v461 | v460) < 0 )
    goto LABEL_665;
  HIDWORD(v806) = dwBytes;
  v462 = dwBytes;
  v463 = GetProcessHeap();
  v464 = HeapAlloc(v463, 8u, v462);
  v8 = 0LL;
  if ( !v464 )
    goto LABEL_665;
  v807 = v464;
  LODWORD(v806) = 0;
  v878 = 4;
  if ( (int)RtlULongLongAdd((unsigned __int64)v464, 4LL, (__int64 *)&v815) < 0
    || v465 + 2 > (unsigned int *)((char *)v465 + HIDWORD(v806)) )
  {
    goto LABEL_665;
  }
  v467 = v815;
  *v465 = v466;
  *v467 = v878;
  v468 = v806 + 1;
  LODWORD(v806) = v806 + 1;
  if ( !(_DWORD)v448 )
  {
    v474 = -1073741811;
    goto LABEL_651;
  }
  if ( v807 != v8 )
  {
    v469 = (int *)v807;
    psza = (STRSAFE_PCNZWCH)v807;
    if ( v468 )
    {
      while ( (int)RtlUIntAdd(4u, *v469, (int *)&dwBytes_4) >= 0 )
      {
        v879 = dwBytes_4;
        v471 = RtlULongLongAdd(v470, dwBytes_4, (__int64 *)&psza);
        v8 = 0LL;
        if ( v471 < 0 )
          goto LABEL_665;
        v469 = (int *)psza;
        if ( v473 + 1 >= v472 )
          goto LABEL_647;
      }
      goto LABEL_664;
    }
LABEL_647:
    v474 = RtlULongLongAdd((unsigned __int64)v469, 4LL, (__int64 *)&v815);
    if ( v474 < 0 )
      goto LABEL_664;
    if ( (char *)v475 + v448 + 4 > (char *)v807 + HIDWORD(v806) )
      goto LABEL_1028;
    v476 = v815;
    *v475 = v448;
    memcpy_0(v476, v447, v448);
    v468 = v806 + 1;
    v8 = 0LL;
    LODWORD(v806) = v806 + 1;
    v466 = 4;
LABEL_651:
    if ( v474 < 0 )
      goto LABEL_665;
LABEL_652:
    if ( !v452 )
    {
      v483 = -1073741811;
LABEL_667:
      if ( v483 < 0 )
        goto LABEL_665;
      v477 = 4;
LABEL_669:
      v915 = v914;
      if ( v807 == v8 )
      {
        if ( (int)RtlUIntAdd(v477, 8, (int *)&dwBytes_4) < 0 )
          goto LABEL_665;
        v881 = dwBytes_4;
        if ( (int)RtlUIntAdd(HIDWORD(v806), dwBytes_4, (int *)&v806 + 1) < 0 )
          goto LABEL_665;
        LODWORD(v806) = v806 + 1;
        goto LABEL_680;
      }
      v487 = (int *)v807;
      psza = (STRSAFE_PCNZWCH)v807;
      if ( v468 )
      {
        while ( (int)RtlUIntAdd(4u, *v487, (int *)&dwBytes_4) >= 0 )
        {
          v881 = dwBytes_4;
          v489 = RtlULongLongAdd(v488, dwBytes_4, (__int64 *)&psza);
          v8 = 0LL;
          if ( v489 < 0 )
            goto LABEL_665;
          v487 = (int *)psza;
          if ( v491 + 1 >= v490 )
            goto LABEL_677;
        }
        goto LABEL_664;
      }
LABEL_677:
      if ( (int)RtlULongLongAdd((unsigned __int64)v487, 4LL, (__int64 *)&v815) >= 0
        && v492 + 3 <= (_DWORD *)((char *)v807 + HIDWORD(v806)) )
      {
        v493 = v815;
        *v492 = 8;
        *v493 = v915;
        LODWORD(v806) = v806 + 1;
LABEL_680:
        if ( (int)RtlUIntAdd(v486, v486, (int *)&dwBytes_4) < 0 )
          goto LABEL_665;
        v882 = dwBytes_4;
        LODWORD(v826) = dwBytes_4;
        if ( (int)RtlUIntAdd(v494, 8, (int *)&dwBytes_4) < 0 )
          goto LABEL_665;
        v882 = dwBytes_4;
        if ( (int)RtlUIntAdd(v495, dwBytes_4, (int *)&v826) < 0 )
          goto LABEL_665;
        j = (size_t)v8;
        v496 = (unsigned int)v8;
        v860 = v8;
        v833 = v8;
        v497 = v8;
        dwBytes_4 = (unsigned int)v8;
        v498 = (int *)v8;
        v844 = v8;
        v811 = (unsigned int)v8;
        v816 = v8;
        v793 = v8;
        v835 = (unsigned int)v8;
        v889 = __rdtsc();
        v819 = 8;
        v499 = RtlUIntAdd(8u, SHIDWORD(v806), (int *)&v819);
        if ( v499 >= 0 )
        {
          v501 = (v819 + 7) & 0xFFFFFFF8;
          if ( v501 >= v819 )
          {
            v819 = (v819 + 7) & 0xFFFFFFF8;
            v502 = v501;
            v503 = GetProcessHeap();
            v504 = (char *)HeapAlloc(v503, 8u, v502);
            v8 = 0LL;
            v505 = v504;
            if ( v504 )
            {
              v939 = v504;
              *(_DWORD *)v504 = v806;
              v499 = RtlULongLongAdd((unsigned __int64)v504, 4LL, (__int64 *)&v939);
              if ( v499 < 0
                || (v507 = v939,
                    *(_DWORD *)v939 = HIDWORD(v806),
                    v499 = RtlULongLongAdd((unsigned __int64)v507, v506, (__int64 *)&v939),
                    v499 < 0) )
              {
                v500 = (size_t)v498;
              }
              else
              {
                *(_QWORD *)&v505[v819 - 8] = v889;
                memcpy_0(v939, v807, HIDWORD(v806));
                v496 = v819;
                v8 = 0LL;
                v500 = (size_t)v505;
                j = (size_t)v505;
                v505 = 0LL;
              }
              if ( v505 )
              {
                v508 = GetProcessHeap();
                HeapFree(v508, 0, v505);
                v500 = j;
                v8 = 0LL;
              }
            }
            else
            {
              v499 = -1073741801;
              v500 = (size_t)v498;
            }
          }
          else
          {
            v499 = -1073741675;
          }
        }
        v509 = v499 | 0x10000000;
        if ( v509 < 0 )
          goto LABEL_818;
        v918 = (__int64 *)v8;
        v510 = v8;
        v919 = (__int64)v8;
        v920 = v8;
        v921 = (__int64)v8;
        v876 = v8;
        v917 = (STRSAFE_PCNZWCH)v8;
        v820 = v8;
        if ( v500 )
        {
          v512 = v496;
          psza = (STRSAFE_PCNZWCH)v496;
          if ( v496 && (v513 = MemoryAlloc(v496 + 8LL), v8 = 0LL, v814 = v513, (v514 = v513) != 0LL) )
          {
            v515 = (unsigned __int8 *)j;
            v516 = 0;
            LOBYTE(v790) = 0;
            v517 = 0LL;
            if ( v512 )
            {
              do
              {
                v516 ^= *(_BYTE *)(v517 + j);
                ++v517;
              }
              while ( v517 < v512 );
              LOBYTE(v790) = v516;
            }
            v518 = -1;
            v803 = 0;
            v799 = -1;
            v804 = 0;
            v939 = (void *)0xC81ECB17B1B54A58LL;
            v519 = v514;
            dwBytes = 0;
            v520 = 0;
            v521 = v512 & 7;
            if ( (v512 & 7) != 0 )
            {
              v522 = 0;
              v804 = 0;
              dwBytes = 0;
              v523 = 56;
              do
              {
                v524 = (size_t)(v515 + 1);
                v525 = *v515;
                pcchLength = v524;
                if ( v520 >= 4 )
                {
                  v526 = dwBytes;
                  v522 |= v525 << v523;
                }
                else
                {
                  v526 = (v525 << (v523 - 32)) | dwBytes;
                  dwBytes = v526;
                }
                v515 = (unsigned __int8 *)pcchLength;
                ++v520;
                v523 -= 8;
              }
              while ( v520 < v521 );
              v804 = v522;
              v527 = v522 ^ 0x42F6B18D;
              v520 = v526 ^ 0xB17A307A;
              v799 = v527;
              v803 = v526 ^ 0xB17A307A;
              v528 = 0;
              if ( (v512 & 7) != 0 )
              {
                do
                {
                  if ( v528 >= 4 )
                  {
                    v527 = __ROL4__(v527, 8);
                    *v519 = v527;
                  }
                  else
                  {
                    v520 = __ROL4__(v520, 8);
                    *v519 = v520;
                  }
                  ++v528;
                  ++v519;
                }
                while ( v528 < v521 );
                v520 = v803;
                v527 = v799;
              }
              v529 = v521 - 4;
              if ( v529 <= 0 )
              {
                v518 = 0;
                v799 = 0;
                if ( v529 < 0 )
                {
                  v520 = (unsigned int)v520 >> (-8 * v529) << (-8 * v529);
                  v803 = v520;
                }
              }
              else
              {
                v518 = v527 >> (8 * (4 - v529)) << (8 * (4 - v529));
                v799 = v518;
              }
            }
            v812 = v512 >> 3;
            if ( v512 >> 3 )
            {
              v530 = HIDWORD(v939);
              v531 = v519 + 7;
              v532 = v812;
              v533 = v804;
              v534 = dwBytes;
              LODWORD(v791) = WORD1(v939);
              v535 = v515 + 2;
              v821 = HIWORD(HIDWORD(v939));
              v536 = HIWORD(HIDWORD(v939));
              v537 = WORD2(v939);
              do
              {
                v538 = v535[1] | ((*v535 | ((*(v535 - 1) | (*(v535 - 2) << 8)) << 8)) << 8);
                v539 = v535[5];
                v540 = (v535[4] | ((v535[3] | (v535[2] << 8)) << 8)) << 8;
                v535 += 8;
                v541 = v539 | v540;
                v542 = v541 ^ v518;
                v543 = v538 ^ v530 ^ (v542 - 19032) ^ v520;
                v544 = (__ROR4__(v543, 7) + WORD1(v939) * __ROR4__(v543 ^ v530, 15)) ^ v542;
                v545 = (v537 * __ROR4__(v544 - 1313519016, 9) - __ROR4__(v544, 10)) ^ v543;
                v546 = (__ROL4__(v545, 5) + v536 * __ROL4__(v545 ^ v537, 4)) ^ v544;
                v547 = (HIDWORD(v939) - (v546 ^ 0xB1B54A58)) ^ v545;
                v548 = (WORD1(v939) * (v547 - 19032) - (v547 >> 6)) ^ v546;
                v549 = (19032 * (v537 ^ __ROR4__(v548, 15))) ^ v547;
                v550 = (v537 * (v536 + __ROR4__(~v549, 3))) ^ v548;
                v551 = (v550 - HIDWORD(v939) - 19032) ^ v549;
                v552 = ((_DWORD)v791 * (v551 ^ v536)) ^ __ROR4__(v551, 10) ^ v550;
                v553 = __ROR4__(v552, 3) ^ (v537 * __ROL4__(v552 ^ 0x4A58, 6)) ^ v551;
                v554 = (19032 * (__ROR4__(v553, 15) - v536)) ^ v552;
                v555 = (v554 >> 15) ^ (19032 * __ROL4__(v554 - v537, 3)) ^ (v554 >> 1) ^ (19032 * (v554 ^ v536)) ^ v553;
                v556 = (WORD1(v939) * (v555 - v537) - (v555 >> 13)) ^ v554;
                v557 = __ROR4__(v556, 11) ^ (v537 * __ROR4__(-1313519016 - v556, 9)) ^ v555;
                v558 = (v557 - v536 + 1313519016) ^ v556;
                v536 = v821;
                v559 = (19032 * (v558 ^ WORD1(v939)) - __ROR4__(v558, 7)) ^ v557;
                v560 = (WORD1(v939) * __ROL4__(v559 ^ v821, 4) - __ROR4__(v559, 16)) ^ v558;
                v561 = (__ROR4__(v560, 4) + v537 * __ROR4__(-1313519016 - v560, 10)) ^ v559;
                v562 = __ROR4__(v561, 9) ^ (v821 * __ROR4__(v561 + 1313519016, 4)) ^ v560;
                v563 = (19032 * __ROL4__(v562 ^ HIDWORD(v939), 8) - __ROL4__(v562, 2)) ^ v561;
                v564 = (WORD1(v939) * __ROR4__(HIDWORD(v939) - v563, 11) - __ROR4__(v563, 12)) ^ v562;
                v530 = HIDWORD(v939);
                v565 = (v564 >> 8) ^ (v537 * (WORD1(v939) ^ v564)) ^ v563;
                v803 = v534 ^ v565;
                v534 = v538;
                v566 = HIDWORD(v939) ^ v533 ^ v564 ^ v565;
                v533 = v541;
                v799 = v566 ^ 0xB1B54A58;
                *(v531 - 4) = v803;
                v803 = __ROR4__(v803, 8);
                *v531 = v799;
                v531 += 8;
                v799 = __ROR4__(v799, 8);
                *(v531 - 13) = v803;
                v803 = __ROR4__(v803, 8);
                *(v531 - 9) = v799;
                v799 = __ROR4__(v799, 8);
                *(v531 - 14) = v803;
                v803 = __ROR4__(v803, 8);
                *(v531 - 10) = v799;
                v799 = __ROR4__(v799, 8);
                *(v531 - 15) = v803;
                *(v531 - 11) = v799;
                v520 = __ROR4__(v803, 8);
                v518 = __ROR4__(v799, 8);
                v803 = v520;
                v799 = v518;
                --v532;
              }
              while ( v532 );
              v516 = v790;
              v10 = v785;
              v497 = v816;
              v510 = v820;
              v512 = (unsigned __int64)psza;
              v514 = v814;
            }
            v567 = v512 + 8;
            *(_QWORD *)&v514[v512] = v516;
            v876 = v514;
            v917 = (STRSAFE_PCNZWCH)(v512 + 8);
            v918 = &`WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
            v919 = 8LL;
            v921 = 160LL;
            v920 = (unsigned __int8 *)`WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher;
            v568 = GetProcessHeap();
            v569 = HeapAlloc(v568, 8u, 0x30uLL);
            v8 = 0LL;
            v570 = v569;
            if ( v569 )
            {
              *v569 = v567;
              v571 = GetProcessHeap();
              v572 = HeapAlloc(v571, 8u, v567);
              v8 = 0LL;
              if ( !v572 )
                goto LABEL_728;
              *((_QWORD *)v570 + 1) = v572;
              memcpy_0(v572, v514, v567);
              v570[4] = 160;
              v573 = GetProcessHeap();
              v574 = HeapAlloc(v573, 8u, 0xA0uLL);
              v8 = 0LL;
              if ( !v574 )
                goto LABEL_728;
              *((_QWORD *)v570 + 3) = v574;
              *v574 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
              v574[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
              v574[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
              v574[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
              v574[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
              v574[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
              v574[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
              v574[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
              v574[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
              v574[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
              v570[8] = 8;
              v575 = GetProcessHeap();
              v576 = HeapAlloc(v575, 8u, 8uLL);
              v8 = 0LL;
              if ( v576 )
              {
                *((_QWORD *)v570 + 5) = v576;
                v510 = v570;
                *v576 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                v511 = 0;
                v570 = 0LL;
              }
              else
              {
LABEL_728:
                v511 = -1073741801;
              }
              if ( v570 )
              {
                v577 = (void *)*((_QWORD *)v570 + 1);
                if ( v577 )
                {
                  v578 = GetProcessHeap();
                  HeapFree(v578, 0, v577);
                  *((_QWORD *)v570 + 1) = 0LL;
                }
                v579 = (void *)*((_QWORD *)v570 + 3);
                if ( v579 )
                {
                  v580 = GetProcessHeap();
                  HeapFree(v580, 0, v579);
                  *((_QWORD *)v570 + 3) = 0LL;
                }
                v581 = (void *)*((_QWORD *)v570 + 5);
                if ( v581 )
                {
                  v582 = GetProcessHeap();
                  HeapFree(v582, 0, v581);
                  *((_QWORD *)v570 + 5) = 0LL;
                }
                v583 = GetProcessHeap();
                HeapFree(v583, 0, v570);
                v8 = 0LL;
              }
            }
            else
            {
              v511 = -1073741801;
            }
            if ( v511 >= 0 )
            {
              v860 = v510;
              v510 = 0LL;
            }
          }
          else
          {
            v511 = -1073741823;
          }
          v584 = v876;
          if ( v876 )
          {
            v585 = GetProcessHeap();
            HeapFree(v585, 0, v584);
            v8 = 0LL;
            v876 = 0LL;
          }
          if ( v510 )
          {
            v586 = (void *)v510[1];
            if ( v586 )
            {
              v587 = GetProcessHeap();
              HeapFree(v587, 0, v586);
              v510[1] = 0LL;
            }
            v588 = (void *)v510[3];
            if ( v588 )
            {
              v589 = GetProcessHeap();
              HeapFree(v589, 0, v588);
              v510[3] = 0LL;
            }
            v590 = (void *)v510[5];
            if ( v590 )
            {
              v591 = GetProcessHeap();
              HeapFree(v591, 0, v590);
              v510[5] = 0LL;
            }
            v592 = GetProcessHeap();
            HeapFree(v592, 0, v510);
            v8 = 0LL;
          }
        }
        else
        {
          v511 = -1073741811;
        }
        v509 = v511 | 0x10000000;
        if ( v509 < 0 )
          goto LABEL_817;
        v593 = (const void **)v860;
        dwBytes = 4;
        v594 = RtlUIntAdd(4u, *(_DWORD *)v860, (int *)&dwBytes);
        if ( v594 < 0
          || (v594 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v594 < 0)
          || (v594 = RtlUIntAdd(dwBytes, *((_DWORD *)v593 + 4), (int *)&dwBytes), v594 < 0)
          || (v594 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v594 < 0) )
        {
          v595 = v841;
        }
        else
        {
          v594 = RtlUIntAdd(dwBytes, *((_DWORD *)v593 + 8), (int *)&dwBytes);
          v595 = v841;
          if ( v594 >= 0 )
            v595 = dwBytes;
          v841 = v595;
        }
        if ( v594 >= 0 )
        {
          v596 = v595;
          v597 = GetProcessHeap();
          v598 = HeapAlloc(v597, 8u, v596);
          v8 = 0LL;
          v599 = v598;
          if ( v598 )
          {
            *v598 = *(_DWORD *)v593;
            v939 = v598;
            v594 = RtlULongLongAdd((unsigned __int64)v598, 4LL, (__int64 *)&v939);
            if ( v594 >= 0 )
            {
              memcpy_0(v939, v593[1], *(unsigned int *)v593);
              v600 = RtlULongLongAdd((unsigned __int64)v939, *(unsigned int *)v593, (__int64 *)&v939);
              v8 = 0LL;
              v594 = v600;
              if ( v600 >= 0 )
              {
                v601 = v939;
                *(_DWORD *)v939 = *((_DWORD *)v593 + 4);
                v594 = RtlULongLongAdd((unsigned __int64)v601, 4LL, (__int64 *)&v939);
                if ( v594 >= 0 )
                {
                  memcpy_0(v939, v593[3], *((unsigned int *)v593 + 4));
                  v602 = RtlULongLongAdd((unsigned __int64)v939, *((unsigned int *)v593 + 4), (__int64 *)&v939);
                  v8 = 0LL;
                  v594 = v602;
                  if ( v602 >= 0 )
                  {
                    v603 = v939;
                    *(_DWORD *)v939 = *((_DWORD *)v593 + 8);
                    v594 = RtlULongLongAdd((unsigned __int64)v603, 4LL, (__int64 *)&v939);
                    if ( v594 >= 0 )
                    {
                      memcpy_0(v939, v593[5], *((unsigned int *)v593 + 8));
                      v604 = RtlULongLongAdd((unsigned __int64)v939, *((unsigned int *)v593 + 8), (__int64 *)&v939);
                      v8 = 0LL;
                      v594 = v604;
                      if ( v604 >= 0 )
                      {
                        v833 = v599;
                        v599 = 0LL;
                        dwBytes_4 = v841;
                      }
                    }
                  }
                }
              }
            }
            if ( v599 )
            {
              v605 = GetProcessHeap();
              HeapFree(v605, 0, v599);
              v8 = 0LL;
            }
          }
          else
          {
            v594 = -1073741801;
          }
        }
        v509 = v594 | 0x10000000;
        if ( v509 < 0 )
          goto LABEL_817;
        v922 = v8;
        v923 = 0LL;
        v884 = 0;
        v883 = (int)v8;
        v838 = 8;
        v606 = RtlUIntAdd(8u, v826, (int *)&v838);
        v509 = v606 | 0x10000000;
        if ( v606 < 0 )
          goto LABEL_800;
        v608 = (v838 + 7) & 0xFFFFFFF8;
        if ( v608 >= v838 )
        {
          v851 = (v838 + 7) & 0xFFFFFFF8;
          v609 = RtlUIntAdd(v608, v607, (int *)&v851);
          v610 = v854;
          v509 = v609;
          if ( v609 >= 0 )
            v610 = v851;
          v854 = v610;
        }
        else
        {
          v509 = -1073741675;
        }
        if ( v509 < 0 )
          goto LABEL_800;
        if ( !v807 || (unsigned int)v806 <= 1 )
          goto LABEL_799;
        v611 = (unsigned int *)v807;
        v612 = 0;
        v939 = v807;
        while ( 1 )
        {
          v613 = *v611;
          v509 = RtlULongLongAdd((unsigned __int64)v611, 4LL, (__int64 *)&v939);
          if ( v509 < 0 )
            break;
          v509 = RtlULongLongAdd((unsigned __int64)v939, v613, (__int64 *)&v939);
          if ( v509 < 0 )
            break;
          v611 = (unsigned int *)v939;
          if ( ++v612 )
          {
            v614 = *(_DWORD *)v939;
            v509 = RtlULongLongAdd((unsigned __int64)v939, 4LL, (__int64 *)&v939);
            if ( v509 >= 0 )
            {
              v615 = (unsigned __int8 *)v939;
              v883 = v614;
              if ( !v614 )
                v615 = 0LL;
              v922 = v615;
            }
            break;
          }
        }
        if ( v509 < 0 )
          goto LABEL_800;
        if ( (unsigned int)v806 > 2 )
        {
          v616 = (unsigned int *)v807;
          v617 = 0;
          v939 = v807;
          while ( 1 )
          {
            v618 = *v616;
            v509 = RtlULongLongAdd((unsigned __int64)v616, 4LL, (__int64 *)&v939);
            if ( v509 < 0 )
              break;
            v509 = RtlULongLongAdd((unsigned __int64)v939, v618, (__int64 *)&v939);
            if ( v509 < 0 )
              break;
            v616 = (unsigned int *)v939;
            if ( (unsigned int)++v617 >= 2 )
            {
              v620 = *(_DWORD *)v939;
              v509 = RtlULongLongAdd((unsigned __int64)v939, 4LL, (__int64 *)&v939);
              if ( v509 >= 0 )
              {
                v621 = v939;
                v884 = v620;
                if ( !v620 )
                  v621 = 0LL;
                v923 = v621;
              }
              break;
            }
          }
          if ( v509 >= 0 )
          {
            dwBytes = 4;
            v509 = RtlUIntAdd(4u, v619, (int *)&dwBytes);
            if ( v509 < 0 || (v509 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes), v509 < 0) )
            {
              v8 = 0LL;
            }
            else
            {
              v627 = RtlUIntAdd(dwBytes, v626, (int *)&dwBytes);
              v8 = 0LL;
              v509 = v627;
              if ( v627 >= 0 )
              {
                v509 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
                if ( v509 >= 0 )
                {
                  v509 = RtlUIntAdd(dwBytes, v628, (int *)&dwBytes);
                  v629 = v853;
                  if ( v509 >= 0 )
                    v629 = dwBytes;
                  v853 = v629;
                  goto LABEL_814;
                }
              }
            }
            v629 = v853;
LABEL_814:
            if ( v509 < 0 )
            {
LABEL_817:
              v498 = (int *)v793;
LABEL_818:
              v630 = (void *)j;
              if ( j )
              {
                v631 = GetProcessHeap();
                HeapFree(v631, 0, v630);
                v8 = 0LL;
              }
              v632 = v860;
              if ( v860 )
              {
                v633 = (void *)*((_QWORD *)v860 + 1);
                if ( v633 )
                {
                  v634 = GetProcessHeap();
                  HeapFree(v634, 0, v633);
                  v632[1] = 0LL;
                }
                v635 = (void *)v632[3];
                if ( v635 )
                {
                  v636 = GetProcessHeap();
                  HeapFree(v636, 0, v635);
                  v632[3] = 0LL;
                }
                v637 = (void *)v632[5];
                if ( v637 )
                {
                  v638 = GetProcessHeap();
                  HeapFree(v638, 0, v637);
                  v632[5] = 0LL;
                }
                v639 = GetProcessHeap();
                HeapFree(v639, 0, v632);
                v8 = 0LL;
                v860 = 0LL;
              }
              v640 = v833;
              if ( v833 )
              {
                v641 = GetProcessHeap();
                HeapFree(v641, 0, v640);
                v8 = 0LL;
              }
              v642 = v844;
              if ( v844 )
              {
                v643 = GetProcessHeap();
                HeapFree(v643, 0, v642);
                v8 = 0LL;
              }
              if ( v497 )
              {
                v644 = (void *)v497[1];
                if ( v644 )
                {
                  v645 = GetProcessHeap();
                  HeapFree(v645, 0, v644);
                  v497[1] = 0LL;
                }
                v646 = (void *)v497[3];
                if ( v646 )
                {
                  v647 = GetProcessHeap();
                  HeapFree(v647, 0, v646);
                  v497[3] = 0LL;
                }
                v648 = (void *)v497[5];
                if ( v648 )
                {
                  v649 = GetProcessHeap();
                  HeapFree(v649, 0, v648);
                  v497[5] = 0LL;
                }
                v650 = GetProcessHeap();
                HeapFree(v650, 0, v497);
                v8 = 0LL;
              }
              if ( v498 )
              {
                v651 = GetProcessHeap();
                HeapFree(v651, 0, v498);
                v8 = 0LL;
              }
              if ( v509 >= 0 )
              {
                if ( (_DWORD)v857 )
                {
                  v652 = (unsigned int *)v858;
                  if ( v858 )
                  {
                    pcchLength = (size_t)v858;
                    if ( (int)RtlULongLongAdd((unsigned __int64)v858, 4LL, (__int64 *)&pcchLength) < 0 )
                      goto LABEL_1027;
                    v656 = (int *)pcchLength;
                    v916 = v654;
                    if ( !v654 )
                      v656 = 0LL;
                    v936 = v656;
                    if ( v654 != (_DWORD)v655 )
                    {
LABEL_1027:
                      v443 = v792;
                      v8 = 0LL;
                      goto LABEL_1018;
                    }
                    v839 = *v656;
                    v8 = 0LL;
                    if ( v839 >= 0 && v653 > 1 )
                    {
                      for ( j = (size_t)v652;
                            (int)RtlULongLongAdd((unsigned __int64)v652, v655, (__int64 *)&j) >= 0
                         && (int)RtlULongLongAdd(j, *v652, (__int64 *)&j) >= 0;
                            v652 = (unsigned int *)j )
                      {
                        if ( v657 != -1 )
                        {
                          if ( (int)RtlULongLongAdd(j, v655, (__int64 *)&j) >= 0 )
                          {
                            v778 = (_QWORD *)j;
                            v897 = v777;
                            if ( !v777 )
                              v778 = v8;
                            v937 = v778;
                            if ( v777 == 8 )
                              v938 = *v778;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
              v443 = v792;
LABEL_1018:
              v444 = v789;
              goto LABEL_1019;
            }
            if ( v629 > 0x400000 )
            {
              v509 = -2147418113;
              goto LABEL_817;
            }
            v811 = v629;
            goto LABEL_801;
          }
        }
        else
        {
LABEL_799:
          v509 = -1073741811;
        }
LABEL_800:
        v8 = 0LL;
LABEL_801:
        if ( v509 < 0 )
          goto LABEL_817;
        v622 = v811;
        v623 = GetProcessHeap();
        v624 = HeapAlloc(v623, 8u, v622);
        v8 = 0LL;
        if ( v624 )
        {
          v625 = v624;
          v844 = v624;
          v509 = 0x10000000;
        }
        else
        {
          v625 = v844;
          v509 = -805306345;
        }
        if ( v509 < 0 )
          goto LABEL_817;
        if ( !v833 || !v625 )
        {
          v509 = -2147024809;
          goto LABEL_817;
        }
        v928[0] = v833;
        v929 = dwBytes_4;
        v930 = v811;
        v928[1] = v625;
        v931 = 0;
        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
          && (v658 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
        {
          v659 = ((__int64 (__fastcall *)(__int64, _QWORD *))v658)(134LL, v928);
          v660 = v811;
          v509 = v659 | 0x10000000;
          if ( v659 >= 0 )
            v660 = v930;
          v811 = v660;
        }
        else
        {
          v661 = GetLastError();
          v509 = v661;
          if ( v661 > 0 )
            v509 = (unsigned __int16)v661 | 0x80070000;
          if ( v509 >= 0 )
            v509 = -2147467259;
          v660 = v811;
        }
        v8 = 0LL;
        if ( v509 == -805306333 )
        {
          v509 = -2147024774;
          goto LABEL_817;
        }
        if ( v509 < 0 )
          goto LABEL_817;
        pcchLength = 0LL;
        dwBytes = 0;
        v939 = v625;
        if ( v660 < 4 )
        {
          v662 = -1073741762;
          goto LABEL_931;
        }
        LODWORD(v791) = *v625;
        v662 = RtlULongLongAdd((unsigned __int64)v625, 4LL, (__int64 *)&v939);
        if ( v662 < 0 )
          goto LABEL_930;
        v662 = RtlUIntAdd(0, 4, (int *)&dwBytes);
        if ( v662 < 0 )
          goto LABEL_930;
        if ( v663 - dwBytes < (unsigned int)v664 )
          goto LABEL_897;
        v814 = v939;
        v812 = v664;
        v662 = RtlULongLongAdd((unsigned __int64)v939, (unsigned int)v664, (__int64 *)&v939);
        if ( v662 < 0 )
          goto LABEL_930;
        v662 = RtlUIntAdd(dwBytes, v665, (int *)&dwBytes);
        if ( v662 < 0 )
          goto LABEL_930;
        if ( v666 - dwBytes < 4 )
          goto LABEL_897;
        v667 = *(unsigned int *)v939;
        v662 = RtlULongLongAdd((unsigned __int64)v939, 4LL, (__int64 *)&v939);
        if ( v662 < 0 )
          goto LABEL_930;
        v662 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
        if ( v662 < 0 )
          goto LABEL_930;
        if ( v668 - dwBytes < (unsigned int)v667 )
          goto LABEL_897;
        v820 = v939;
        v662 = RtlULongLongAdd((unsigned __int64)v939, (unsigned int)v667, (__int64 *)&v939);
        if ( v662 < 0 )
          goto LABEL_930;
        v662 = RtlUIntAdd(dwBytes, v667, (int *)&dwBytes);
        if ( v662 < 0 )
          goto LABEL_930;
        if ( v669 - dwBytes < 4 )
          goto LABEL_897;
        v670 = *(unsigned int *)v939;
        v662 = RtlULongLongAdd((unsigned __int64)v939, 4LL, (__int64 *)&v939);
        if ( v662 < 0 )
          goto LABEL_930;
        v662 = RtlUIntAdd(dwBytes, 4, (int *)&dwBytes);
        if ( v662 < 0 )
          goto LABEL_930;
        if ( v671 - dwBytes < (unsigned int)v670 )
          goto LABEL_897;
        v662 = RtlUIntAdd(dwBytes, v670, (int *)&dwBytes);
        if ( v662 < 0 )
          goto LABEL_930;
        if ( v672 != dwBytes || (unsigned int)(v670 + v667 + v673) + 12LL != v672 )
        {
LABEL_897:
          v662 = -1073741762;
          goto LABEL_930;
        }
        v674 = GetProcessHeap();
        v675 = HeapAlloc(v674, 8u, 0x30uLL);
        v8 = 0LL;
        v676 = (size_t)v675;
        if ( !v675 )
        {
          v662 = -1073741801;
LABEL_920:
          v497 = (_QWORD *)pcchLength;
          v694 = 0LL;
          if ( v662 < 0 )
          {
            v694 = (_QWORD *)pcchLength;
            v497 = 0LL;
          }
          v816 = v497;
          if ( !v694 )
          {
LABEL_931:
            v509 = v662 | 0x10000000;
            if ( v509 < 0 )
              goto LABEL_817;
            v845 = 0LL;
            v702 = 0LL;
            v890 = 0LL;
            if ( !v497 || (v703 = v497[1], (pcchLength = v703) == 0) || !*(_DWORD *)v497 )
            {
              v509 = -805306355;
              goto LABEL_817;
            }
            v704 = *(unsigned int *)v497;
            dwBytes_4 = 0;
            if ( !v704 )
              goto LABEL_970;
            v705 = v704 - 8;
            v812 = v705;
            v706 = MemoryAlloc(v705);
            v8 = 0LL;
            v820 = v706;
            v707 = v706;
            if ( !v706 )
            {
              v702 = v845;
              goto LABEL_970;
            }
            v708 = 0;
            LOBYTE(v790) = 0;
            v939 = (void *)0x7F1137FAB69605ELL;
            v709 = (unsigned __int8 *)v703;
            v710 = v707;
            v711 = v705 & 7;
            if ( (v705 & 7) != 0 )
            {
              v797 = -1;
              v801 = 0;
              v712 = 0;
              v805 = 0;
              v713 = 0;
              v714 = 56;
              do
              {
                v715 = *v709;
                if ( v713 >= 4 )
                {
                  v716 = (v715 << v714) | v805;
                  v805 = v716;
                }
                else
                {
                  v716 = v805;
                  v712 |= v715 << (v714 - 32);
                }
                ++v713;
                v714 -= 8;
                ++v709;
              }
              while ( v713 < v711 );
              v10 = v785;
              v717 = v716 ^ 0x699A899C;
              v718 = v712 ^ 0x92F65A5;
              v797 = v716 ^ 0x699A899C;
              v801 = v712 ^ 0x92F65A5;
              v719 = 0;
              if ( (v705 & 7) != 0 )
              {
                do
                {
                  if ( v719 >= 4 )
                  {
                    v717 = __ROL4__(v717, 8);
                    *v710 = v717;
                  }
                  else
                  {
                    v718 = __ROL4__(v718, 8);
                    *v710 = v718;
                  }
                  ++v719;
                  ++v710;
                }
                while ( v719 < v711 );
                v718 = v801;
                v717 = v797;
              }
              v720 = v711 - 4;
              if ( v720 <= 0 )
              {
                v721 = 0;
                v797 = 0;
                if ( v720 < 0 )
                {
                  v718 = v718 >> (-8 * v720) << (-8 * v720);
                  v801 = v718;
                }
LABEL_956:
                v814 = (void *)(v705 >> 3);
                if ( v705 >> 3 )
                {
                  v722 = HIDWORD(v939);
                  v723 = v710 + 7;
                  v724 = v709 + 2;
                  LODWORD(v791) = WORD1(v939);
                  v725 = (char *)v814;
                  dwBytes = HIWORD(HIDWORD(v939));
                  v726 = WORD2(v939);
                  do
                  {
                    v727 = *(v724 - 1) | (*(v724 - 2) << 8);
                    v728 = v724[2] << 8;
                    v729 = *v724;
                    v724 += 8;
                    v730 = *(v724 - 7) | ((v729 | (v727 << 8)) << 8);
                    v731 = v730 ^ v718;
                    v732 = *(v724 - 3) | ((*(v724 - 4) | ((*(v724 - 5) | v728) << 8)) << 8);
                    v733 = v731 ^ v732 ^ v721 ^ v722 ^ 0xAB69605E;
                    v734 = (__ROL4__(v733, 10) + v726 * __ROL4__(v733 + 1419157410, 5)) ^ v731;
                    v735 = (WORD1(v939) * __ROR4__(v734 + v722, 9) - __ROL4__(v734, 2)) ^ v733;
                    v736 = (24670 * (v735 - v726) - (v735 >> 13)) ^ v734;
                    v737 = (dwBytes * __ROL4__(v736 ^ WORD1(v939), 6) - __ROL4__(v736, 2)) ^ v735;
                    v738 = (v722 - (v737 ^ 0xAB69605E)) ^ v736;
                    v739 = ((_DWORD)v791 * (v738 ^ v726)) ^ __ROR4__(v738, 6) ^ v737;
                    v740 = (__ROL4__(v739, 2) + 24670 * __ROR4__(v739 + v722, 15)) ^ v738;
                    v741 = (dwBytes * __ROR4__(v740 + 1419157410, 14) - __ROL4__(v740, 8)) ^ v739;
                    v742 = __ROR4__(v741, 10) ^ (v726 * __ROR4__(v741 ^ 0xAB69605E, 12)) ^ v740;
                    v743 = v741 ^ (v742 >> 10) ^ (WORD1(v939) * (dwBytes ^ v742));
                    v744 = (dwBytes * (__ROR4__(~v743, 5) + 24670)) ^ v742;
                    v745 = v743 ^ (v744 - dwBytes) ^ 0xAB69605E;
                    v746 = ((v745 >> 2) + v726 * __ROL4__(v745 ^ dwBytes, 2)) ^ v744;
                    v747 = (__ROL4__(v746, 7) + WORD1(v939) * __ROR4__(v746 - v722, 6)) ^ v745;
                    v748 = (24670 * (v747 ^ v726) + __ROR4__(v747, 9)) ^ v746;
                    v749 = (__ROL4__(v748, 7) + dwBytes * __ROL4__(v748 ^ WORD1(v939), 5)) ^ v747;
                    v750 = v722 ^ v748 ^ v749 ^ 0xAB69605E;
                    v751 = (v726 * (__ROR4__(v750, 3) - WORD1(v939))) ^ v749;
                    v752 = (24670 * __ROR4__(v751 - v722, 1) - __ROR4__(v751, 6)) ^ v750;
                    v753 = (__ROL4__(v752, 14) + dwBytes * __ROL4__(v752 - 1419157410, 3)) ^ v751;
                    v754 = (v726 * __ROL4__(v753 - 1419157410, 15) - __ROR4__(v753, 14)) ^ v752;
                    v755 = (v754 >> 3) ^ (WORD1(v939) * (v754 ^ 0x605E)) ^ v753;
                    v797 = v805 ^ v755;
                    v805 = v732;
                    v756 = v712 ^ __ROL4__(v755, 2) ^ (24670 * __ROL4__(v755 ^ v722, 4));
                    v712 = v730;
                    v801 = v756 ^ v754;
                    *(v723 - 4) = v756 ^ v754;
                    v801 = __ROR4__(v801, 8);
                    *v723 = v797;
                    v723 += 8;
                    v797 = __ROR4__(v797, 8);
                    *(v723 - 13) = v801;
                    v801 = __ROR4__(v801, 8);
                    *(v723 - 9) = v797;
                    v797 = __ROR4__(v797, 8);
                    *(v723 - 14) = v801;
                    v801 = __ROR4__(v801, 8);
                    *(v723 - 10) = v797;
                    v797 = __ROR4__(v797, 8);
                    *(v723 - 15) = v801;
                    *(v723 - 11) = v797;
                    v718 = __ROR4__(v801, 8);
                    v721 = __ROR4__(v797, 8);
                    v801 = v718;
                    v797 = v721;
                    --v725;
                  }
                  while ( v725 );
                  v708 = v790;
                  v10 = v785;
                  v497 = v816;
                  v705 = v812;
                  v707 = v820;
                }
                v8 = 0LL;
                for ( k = 0LL; k < v705; ++k )
                  v708 ^= v707[k];
                if ( v708 == *(_QWORD *)(v705 + pcchLength) )
                {
                  v758 = dwBytes_4;
                  v702 = (int *)v707;
                  v845 = (int *)v707;
                  v707 = 0LL;
                  v890 = v705;
                }
                else
                {
                  v702 = v845;
                  v758 = -1073425151;
                }
                if ( v707 )
                {
                  MemoryFree(v707);
                  v702 = v845;
                  v8 = 0LL;
                }
                if ( v758 >= 0 )
                {
                  v759 = v890;
                  v498 = v702;
                  v793 = v702;
                  v509 = 0x10000000;
                  v702 = 0LL;
                  v835 = v890;
                  v845 = 0LL;
LABEL_971:
                  if ( v702 )
                  {
                    v760 = GetProcessHeap();
                    HeapFree(v760, 0, v702);
                    v759 = v835;
                    v8 = 0LL;
                    v845 = 0LL;
                  }
                  if ( v509 < 0 )
                    goto LABEL_818;
                  v805 = 0;
                  v816 = v498;
                  if ( v759 < 4 )
                    goto LABEL_1010;
                  dwBytes_4 = *v498;
                  v761 = RtlULongLongAdd((unsigned __int64)v498, 4LL, (__int64 *)&v816);
                  if ( v761 < 0 )
                    goto LABEL_983;
                  v761 = RtlUIntAdd(0, 4, (int *)&v805);
                  if ( v761 < 0 )
                    goto LABEL_983;
                  if ( v762 - v805 < 4 )
                    goto LABEL_1010;
                  v763 = *(unsigned int *)v816;
                  v761 = RtlULongLongAdd((unsigned __int64)v816, 4LL, (__int64 *)&v816);
                  if ( v761 < 0 )
                    goto LABEL_982;
                  v761 = RtlUIntAdd(v805, 4, (int *)&v805);
                  if ( v761 < 0 )
                    goto LABEL_982;
                  if ( v764 - v805 < (unsigned int)v763 )
                  {
                    v761 = -1073741762;
LABEL_982:
                    v498 = (int *)v793;
LABEL_983:
                    v509 = v761 | 0x10000000;
                    v8 = 0LL;
                    goto LABEL_818;
                  }
                  v761 = RtlUIntAdd(v805, v763, (int *)&v805);
                  if ( v761 < 0 )
                    goto LABEL_982;
                  v767 = v816;
                  if ( (char *)v793 + v765 < (char *)v816 + v763
                    || (unsigned __int64)v793 + v765 - (_QWORD)v816 - v763 >= 8 )
                  {
                    v761 = -1073741762;
                    v498 = (int *)v793;
                    goto LABEL_983;
                  }
                  v804 = (int)v766;
                  v768 = (wchar_t *)v766;
                  psza = v766;
                  v761 = (int)v766;
                  if ( v816 )
                  {
                    v761 = RtlULongLongAdd((unsigned __int64)v816, v763, (__int64 *)&v814);
                    if ( v761 < 0 )
                    {
LABEL_1008:
                      if ( v761 < 0 )
                        goto LABEL_982;
                      v498 = (int *)v793;
                      if ( dwBytes_4 == (_DWORD)v857 )
                        goto LABEL_983;
LABEL_1010:
                      v761 = -1073741762;
                      goto LABEL_983;
                    }
                    v770 = v814;
                    if ( v767 < v814 )
                    {
                      do
                      {
                        v761 = RtlULongLongAdd(v769, 4LL, (__int64 *)&v814);
                        if ( v761 < 0 )
                          goto LABEL_982;
                        if ( (unsigned __int64)v814 > v772 )
                          goto LABEL_1003;
                        v773 = RtlUIntAdd(4u, *v771, (int *)&v791);
                        v761 = v773;
                        if ( v773 >= 0 )
                          v775 = (unsigned int)v791;
                        v861 = v775;
                        if ( v773 < 0 )
                          goto LABEL_982;
                        v761 = RtlULongLongAdd(v774, v775, (__int64 *)&v812);
                        if ( v761 < 0 )
                          goto LABEL_982;
                        v769 = v812;
                        if ( v812 > (unsigned __int64)v770 )
                          goto LABEL_1003;
                        ++v804;
                      }
                      while ( v812 < (unsigned __int64)v770 );
                    }
                    if ( (void *)v769 != v770 )
                    {
LABEL_1003:
                      v761 = -1073741811;
                      goto LABEL_982;
                    }
                    v768 = (wchar_t *)psza;
                  }
                  if ( (_DWORD)v763 )
                  {
                    v776 = GetProcessHeap();
                    v768 = (wchar_t *)HeapAlloc(v776, 8u, v763);
                    psza = v768;
                    if ( !v768 )
                    {
                      v761 = -1073741801;
                      goto LABEL_1008;
                    }
                    v761 = 0;
                  }
                  if ( v767 )
                  {
                    memcpy_0(v768, v767, v763);
                    v768 = (wchar_t *)psza;
                  }
                  v858 = v768;
                  v857 = __PAIR64__(v763, v804);
                  goto LABEL_1008;
                }
LABEL_970:
                v759 = v835;
                v509 = -805306367;
                v498 = (int *)v793;
                goto LABEL_971;
              }
              v721 = v717 >> (8 * (4 - v720)) << (8 * (4 - v720));
            }
            else
            {
              v718 = 0;
              v712 = 0;
              v801 = 0;
              v721 = 0;
            }
            v797 = v721;
            goto LABEL_956;
          }
          v695 = (void *)v694[1];
          if ( v695 )
          {
            v696 = GetProcessHeap();
            HeapFree(v696, 0, v695);
            v694[1] = 0LL;
          }
          v697 = (void *)v694[3];
          if ( v697 )
          {
            v698 = GetProcessHeap();
            HeapFree(v698, 0, v697);
            v694[3] = 0LL;
          }
          v699 = (void *)v694[5];
          if ( v699 )
          {
            v700 = GetProcessHeap();
            HeapFree(v700, 0, v699);
            v694[5] = 0LL;
          }
          v701 = GetProcessHeap();
          HeapFree(v701, 0, v694);
          v816 = v497;
LABEL_930:
          v8 = 0LL;
          goto LABEL_931;
        }
        v677 = v814;
        if ( v814 )
        {
          *(_DWORD *)v675 = (_DWORD)v791;
          v678 = GetProcessHeap();
          v679 = v812;
          v680 = HeapAlloc(v678, 8u, v812);
          v8 = 0LL;
          if ( !v680 )
            goto LABEL_901;
          *(_QWORD *)(v676 + 8) = v680;
          memcpy_0(v680, v677, v679);
          v8 = 0LL;
        }
        else
        {
          *(_DWORD *)v675 = 0;
          v675[1] = 0LL;
        }
        v681 = v820;
        if ( v820 )
        {
          *(_DWORD *)(v676 + 16) = v667;
          v682 = GetProcessHeap();
          v683 = HeapAlloc(v682, 8u, v667);
          v8 = 0LL;
          if ( !v683 )
            goto LABEL_901;
          *(_QWORD *)(v676 + 24) = v683;
          memcpy_0(v683, v681, v667);
          v8 = 0LL;
        }
        else
        {
          *(_DWORD *)(v676 + 16) = 0;
          *(_QWORD *)(v676 + 24) = 0LL;
        }
        v684 = v939;
        if ( !v939 )
        {
          *(_DWORD *)(v676 + 32) = 0;
          *(_QWORD *)(v676 + 40) = 0LL;
          goto LABEL_911;
        }
        *(_DWORD *)(v676 + 32) = v670;
        v685 = GetProcessHeap();
        v686 = HeapAlloc(v685, 8u, v670);
        v8 = 0LL;
        if ( v686 )
        {
          *(_QWORD *)(v676 + 40) = v686;
          memcpy_0(v686, v684, v670);
          v8 = 0LL;
LABEL_911:
          pcchLength = v676;
          v662 = 0;
          v676 = 0LL;
LABEL_912:
          if ( v676 )
          {
            v687 = *(void **)(v676 + 8);
            if ( v687 )
            {
              v688 = GetProcessHeap();
              HeapFree(v688, 0, v687);
              *(_QWORD *)(v676 + 8) = 0LL;
            }
            v689 = *(void **)(v676 + 24);
            if ( v689 )
            {
              v690 = GetProcessHeap();
              HeapFree(v690, 0, v689);
              *(_QWORD *)(v676 + 24) = 0LL;
            }
            v691 = *(void **)(v676 + 40);
            if ( v691 )
            {
              v692 = GetProcessHeap();
              HeapFree(v692, 0, v691);
              *(_QWORD *)(v676 + 40) = 0LL;
            }
            v693 = GetProcessHeap();
            HeapFree(v693, 0, (LPVOID)v676);
            v8 = 0LL;
          }
          goto LABEL_920;
        }
LABEL_901:
        v662 = -1073741801;
        goto LABEL_912;
      }
LABEL_1028:
      v443 = v447;
      v444 = v451;
      v8 = 0LL;
      goto LABEL_1019;
    }
    if ( v807 == v8 )
    {
      if ( (int)RtlUIntAdd(v466, v452, (int *)&dwBytes_4) < 0 )
        goto LABEL_665;
      v880 = dwBytes_4;
      if ( (int)RtlUIntAdd(HIDWORD(v806), dwBytes_4, (int *)&v806 + 1) < 0 )
        goto LABEL_665;
      v468 = v806 + 1;
      LODWORD(v806) = v806 + 1;
      goto LABEL_669;
    }
    v478 = (int *)v807;
    psza = (STRSAFE_PCNZWCH)v807;
    if ( v468 )
    {
      while ( (int)RtlUIntAdd(4u, *v478, (int *)&dwBytes_4) >= 0 )
      {
        v880 = dwBytes_4;
        v480 = RtlULongLongAdd(v479, dwBytes_4, (__int64 *)&psza);
        v8 = 0LL;
        if ( v480 < 0 )
          goto LABEL_665;
        v478 = (int *)psza;
        if ( v482 + 1 >= v481 )
          goto LABEL_661;
      }
      goto LABEL_664;
    }
LABEL_661:
    v483 = RtlULongLongAdd((unsigned __int64)v478, 4LL, (__int64 *)&v815);
    if ( v483 >= 0 )
    {
      if ( (char *)v484 + v452 + 4 > (char *)v807 + HIDWORD(v806) )
        goto LABEL_1028;
      v485 = v815;
      *v484 = v452;
      memcpy_0(v485, v451, v452);
      v468 = v806 + 1;
      LODWORD(v806) = v806 + 1;
      v8 = 0LL;
      goto LABEL_667;
    }
LABEL_664:
    v8 = 0LL;
    goto LABEL_665;
  }
  if ( (int)RtlUIntAdd(v466, v448, (int *)&dwBytes_4) >= 0 )
  {
    v879 = dwBytes_4;
    if ( (int)RtlUIntAdd(HIDWORD(v806), dwBytes_4, (int *)&v806 + 1) >= 0 )
    {
      v468 = v806 + 1;
      LODWORD(v806) = v806 + 1;
      goto LABEL_652;
    }
  }
LABEL_665:
  v443 = v447;
  v444 = v451;
LABEL_1019:
  v806 = 0LL;
  v779 = v807;
  if ( v807 )
  {
    v780 = GetProcessHeap();
    HeapFree(v780, 0, v779);
    v8 = 0LL;
    v807 = 0LL;
  }
  v857 = 0LL;
  v781 = v858;
  if ( v858 )
  {
    v782 = GetProcessHeap();
    HeapFree(v782, 0, v781);
    v8 = 0LL;
    v858 = 0LL;
  }
  if ( v443 )
  {
    v783 = GetProcessHeap();
    HeapFree(v783, 0, v443);
    v8 = 0LL;
  }
  if ( v444 )
  {
    v784 = GetProcessHeap();
    HeapFree(v784, 0, v444);
    v8 = 0LL;
  }
LABEL_448:
  v383 = v856;
  v896 = v852;
  v862 = (int *)v885;
  v816 = v8;
LABEL_449:
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
        goto LABEL_455;
    }
    v822 = v10;
    goto LABEL_452;
  }
  if ( v383 != 4 )
  {
LABEL_455:
    v822 = -1073418210;
    goto LABEL_452;
  }
  v855 = *v862;
LABEL_452:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v862);
  if ( v822 < 0 || !v855 )
    return 0;
  return v2;
}
