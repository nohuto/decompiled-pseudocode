/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x1800466B8
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x1800168A4 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180017490 (-MemoryFree@@YAXPEAX@Z.c)
 *     StringCchLengthW @ 0x18001A820 (StringCchLengthW.c)
 *     RtlULongLongAdd @ 0x180046680 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18004669C (RtlUIntAdd.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180048FA0 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180048FC4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18004A3EC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(STRSAFE_PCNZWCH psz)
{
  char v2; // r15
  HLOCAL v3; // rax
  void *v4; // r14
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
  unsigned int v15; // r14d
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
  STRSAFE_PCNZWCH v69; // r14
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
  unsigned int v110; // r14d
  size_t v111; // r13
  int v112; // r12d
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
  _BYTE *v130; // r14
  int v131; // r8d
  unsigned __int64 v132; // r12
  int v133; // esi
  unsigned __int8 *v134; // rdi
  int v135; // r13d
  _BYTE *v136; // r14
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
  unsigned int v199; // r14d
  int v200; // r11d
  int v201; // r11d
  unsigned __int8 *v202; // rax
  bool v203; // zf
  unsigned int *v204; // rcx
  unsigned int v205; // r14d
  int v206; // r10d
  int v207; // r11d
  int v208; // r11d
  unsigned __int8 *v209; // rax
  unsigned int v210; // eax
  unsigned int v211; // ebx
  int v212; // edi
  HANDLE v213; // rax
  _DWORD *v214; // rax
  _DWORD *v215; // rbx
  _QWORD *v216; // rsi
  FARPROC ProcAddress; // rax
  int v218; // eax
  unsigned int v219; // r10d
  unsigned int v220; // r13d
  int v221; // edx
  int v222; // edi
  int v223; // r10d
  int v224; // edx
  int v225; // r10d
  SIZE_T v226; // r12
  int v227; // edx
  int v228; // r10d
  int v229; // edx
  int v230; // r10d
  SIZE_T v231; // r14
  int v232; // edx
  int v233; // r10d
  int v234; // r10d
  HANDLE v235; // rax
  _QWORD *v236; // rax
  _QWORD *v237; // rbx
  HANDLE v238; // rax
  void *v239; // rax
  void *v240; // r13
  HANDLE v241; // rax
  void *v242; // rax
  void *v243; // r12
  HANDLE v244; // rax
  void *v245; // rax
  wchar_t *v246; // rbx
  int v247; // edi
  unsigned __int8 *v248; // rsi
  __int64 v249; // r14
  unsigned __int64 v250; // r14
  _BYTE *v251; // rax
  _BYTE *v252; // r12
  unsigned __int8 v253; // al
  unsigned __int8 *v254; // r11
  _BYTE *v255; // r13
  int v256; // r8d
  int v257; // esi
  unsigned int v258; // ebx
  unsigned __int64 v259; // rcx
  int v260; // eax
  _BYTE *v261; // r14
  int v262; // r12d
  unsigned __int8 *v263; // rdi
  unsigned __int64 v264; // r13
  int v265; // r11d
  int v266; // r10d
  int v267; // ecx
  int v268; // r11d
  int v269; // ebx
  int v270; // r10d
  unsigned int v271; // esi
  int v272; // ebx
  unsigned int v273; // esi
  int v274; // ebx
  int v275; // esi
  unsigned int v276; // ebx
  int v277; // esi
  int v278; // ebx
  int v279; // esi
  unsigned int v280; // ebx
  int v281; // esi
  int v282; // ebx
  unsigned int v283; // r9d
  int v284; // ebx
  int v285; // r9d
  int v286; // ebx
  int v287; // r9d
  unsigned int v288; // r8d
  int v289; // r9d
  int v290; // r8d
  int v291; // r9d
  unsigned int v292; // r8d
  int v293; // r9d
  int v294; // edx
  unsigned __int64 j; // rcx
  int v296; // esi
  STRSAFE_PCNZWCH v297; // rsi
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
  void *v327; // rbx
  HANDLE v328; // rax
  _QWORD *v329; // rsi
  void *v330; // rbx
  HANDLE v331; // rax
  void *v332; // rbx
  HANDLE v333; // rax
  void *v334; // rbx
  HANDLE v335; // rax
  HANDLE v336; // rax
  wchar_t *v337; // rbx
  HANDLE v338; // rax
  int v339; // r10d
  STRSAFE_PCNZWCH v340; // rax
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
  void *v357; // rbx
  unsigned int *v358; // rcx
  unsigned int v359; // esi
  int v360; // r10d
  int v361; // r10d
  unsigned int *v362; // rax
  unsigned int v363; // esi
  unsigned int *v364; // rcx
  unsigned int v365; // r14d
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
  unsigned int v397; // ebx
  int v398; // ecx
  int v399; // r8d
  void *v400; // r14
  HANDLE v401; // rax
  void *v402; // r14
  HANDLE v403; // rax
  void *v404; // r14
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
  void *v416; // r14
  HANDLE v417; // rax
  void *v418; // r14
  HANDLE v419; // rax
  void *v420; // r14
  HANDLE v421; // rax
  HANDLE v422; // rax
  void *v423; // rbx
  HANDLE v424; // rax
  void *v425; // rbx
  HANDLE v426; // rax
  void *v427; // rbx
  HANDLE v428; // rax
  HANDLE v429; // rax
  int v430; // ebx
  int v431; // esi
  int v432; // r10d
  char v433; // r9
  int v434; // edx
  unsigned int v435; // esi
  int v436; // ecx
  int v437; // edx
  HANDLE v438; // rax
  void *v439; // r14
  void *v440; // rsi
  HANDLE v441; // rax
  void *v442; // rax
  void *v443; // r12
  size_t v444; // rsi
  HANDLE v445; // rax
  void *v446; // rax
  void *v447; // r13
  unsigned int v448; // r14d
  unsigned int v449; // r10d
  unsigned int v450; // r10d
  unsigned int v451; // r10d
  unsigned int v452; // ebx
  HANDLE v453; // rax
  void *v454; // rax
  __int64 v455; // rdx
  _DWORD *v456; // r10
  _DWORD *v457; // rcx
  int v458; // r10d
  __int64 v459; // r12
  int *v460; // r11
  int v461; // ebx
  unsigned __int64 v462; // r11
  int v463; // eax
  unsigned int v464; // r10d
  int v465; // ebx
  _DWORD *v466; // r11
  void *v467; // rcx
  int *v468; // r11
  int v469; // ebx
  unsigned __int64 v470; // r11
  int v471; // eax
  unsigned int v472; // r10d
  int v473; // ebx
  unsigned int *v474; // r11
  void *v475; // rcx
  int *v476; // r11
  int v477; // ebx
  unsigned __int64 v478; // r11
  int v479; // eax
  unsigned int v480; // r10d
  _DWORD *v481; // r11
  _QWORD *v482; // rax
  unsigned int v483; // ecx
  unsigned int v484; // r10d
  unsigned __int8 *v485; // rbx
  unsigned int v486; // r12d
  unsigned __int8 *v487; // r13
  int v488; // esi
  unsigned int v489; // eax
  unsigned int v490; // ebx
  HANDLE v491; // rax
  char *v492; // rax
  char *v493; // rbx
  __int64 v494; // rdx
  size_t v495; // rcx
  HANDLE v496; // rax
  int v497; // esi
  _QWORD *v498; // r14
  int v499; // esi
  size_t v500; // rsi
  _BYTE *v501; // rax
  _BYTE *v502; // r12
  unsigned __int8 v503; // al
  size_t v504; // rcx
  unsigned __int8 *v505; // r13
  int v506; // ebx
  unsigned int v507; // edx
  _BYTE *v508; // r11
  int v509; // r8d
  int v510; // ebx
  int v511; // r10d
  char v512; // r9
  int v513; // edx
  int v514; // ecx
  unsigned int v515; // ebx
  int v516; // ecx
  int v517; // r8d
  size_t v518; // rcx
  int v519; // r14d
  unsigned __int8 *v520; // rax
  int v521; // r12d
  _BYTE *v522; // rsi
  size_t v523; // r13
  int v524; // r11d
  int v525; // ecx
  int v526; // r10d
  int v527; // r10d
  int v528; // ebx
  unsigned int v529; // r9d
  int v530; // ebx
  int v531; // r9d
  int v532; // ebx
  unsigned int v533; // r9d
  int v534; // ebx
  int v535; // r9d
  int v536; // ebx
  int v537; // r9d
  int v538; // ebx
  int v539; // r9d
  unsigned int v540; // ebx
  unsigned int v541; // r9d
  int v542; // ebx
  int v543; // r9d
  int v544; // ebx
  int v545; // r9d
  int v546; // ebx
  int v547; // r9d
  int v548; // ebx
  int v549; // r9d
  unsigned int v550; // ebx
  int v551; // r9d
  unsigned int v552; // esi
  HANDLE v553; // rax
  _DWORD *v554; // rax
  _DWORD *v555; // rbx
  HANDLE v556; // rax
  void *v557; // rax
  HANDLE v558; // rax
  _OWORD *v559; // rax
  HANDLE v560; // rax
  _QWORD *v561; // rax
  void *v562; // r12
  HANDLE v563; // rax
  void *v564; // r12
  HANDLE v565; // rax
  void *v566; // r12
  HANDLE v567; // rax
  HANDLE v568; // rax
  void *v569; // rbx
  HANDLE v570; // rax
  void *v571; // rbx
  HANDLE v572; // rax
  void *v573; // rbx
  HANDLE v574; // rax
  void *v575; // rbx
  HANDLE v576; // rax
  HANDLE v577; // rax
  const void **v578; // r14
  int v579; // esi
  unsigned int v580; // eax
  unsigned int v581; // ebx
  HANDLE v582; // rax
  wchar_t *v583; // rax
  wchar_t *v584; // rbx
  int v585; // eax
  void *v586; // rcx
  int v587; // eax
  void *v588; // rcx
  int v589; // eax
  HANDLE v590; // rax
  int v591; // ebx
  int v592; // r14d
  int v593; // eax
  int v594; // ecx
  unsigned int v595; // eax
  int v596; // eax
  unsigned int v597; // r10d
  unsigned int *v598; // rcx
  unsigned int v599; // r12d
  int v600; // r11d
  int v601; // r11d
  unsigned __int8 *v602; // rax
  unsigned int v603; // ebx
  int v604; // esi
  HANDLE v605; // rax
  unsigned __int8 *v606; // rax
  unsigned int *v607; // rcx
  unsigned int v608; // r12d
  int v609; // r10d
  int v610; // r11d
  int v611; // r11d
  unsigned __int8 *v612; // rax
  unsigned int v613; // eax
  FARPROC v614; // rax
  int v615; // eax
  unsigned int v616; // r10d
  signed int v617; // eax
  _QWORD *v618; // r14
  int v619; // esi
  int v620; // edx
  int v621; // r10d
  size_t v622; // r11
  int v623; // edx
  int v624; // r10d
  SIZE_T v625; // r13
  int v626; // edx
  int v627; // r10d
  int v628; // edx
  int v629; // r10d
  SIZE_T v630; // r12
  int v631; // edx
  int v632; // r10d
  int v633; // r10d
  int v634; // r11d
  HANDLE v635; // rax
  _QWORD *v636; // rax
  _QWORD *v637; // rbx
  HANDLE v638; // rax
  void *v639; // rax
  HANDLE v640; // rax
  void *v641; // rax
  void *v642; // r13
  HANDLE v643; // rax
  void *v644; // rax
  void *v645; // r12
  HANDLE v646; // rax
  void *v647; // r12
  HANDLE v648; // rax
  void *v649; // r12
  HANDLE v650; // rax
  HANDLE v651; // rax
  void *v652; // rbx
  HANDLE v653; // rax
  void *v654; // rbx
  HANDLE v655; // rax
  void *v656; // rbx
  HANDLE v657; // rax
  HANDLE v658; // rax
  void *v659; // rbx
  int v660; // esi
  size_t v661; // r14
  __int64 v662; // r13
  unsigned __int64 v663; // r13
  _BYTE *v664; // rax
  _BYTE *v665; // r12
  unsigned __int8 v666; // al
  unsigned __int8 *v667; // r10
  _BYTE *v668; // r9
  unsigned int v669; // ebx
  int v670; // r8d
  int v671; // r14d
  char v672; // di
  int v673; // edx
  unsigned int v674; // r14d
  int v675; // ecx
  int v676; // edx
  int v677; // r14d
  unsigned __int64 v678; // rcx
  int v679; // eax
  _BYTE *v680; // r13
  int v681; // edi
  unsigned __int8 *v682; // rsi
  unsigned __int64 v683; // r12
  int v684; // r11d
  int v685; // r10d
  int v686; // ecx
  int v687; // r11d
  int v688; // ebx
  int v689; // r10d
  unsigned int v690; // r14d
  int v691; // ebx
  unsigned int v692; // r14d
  int v693; // ebx
  int v694; // r14d
  unsigned int v695; // ebx
  int v696; // r14d
  int v697; // ebx
  int v698; // r14d
  unsigned int v699; // ebx
  int v700; // r14d
  int v701; // ebx
  unsigned int v702; // r9d
  int v703; // ebx
  int v704; // r9d
  int v705; // ebx
  int v706; // r9d
  unsigned int v707; // r8d
  int v708; // r9d
  int v709; // r8d
  int v710; // r9d
  unsigned int v711; // r8d
  int v712; // r9d
  int v713; // edx
  unsigned __int64 k; // rcx
  int v715; // r14d
  HANDLE v716; // rax
  LPVOID v717; // r14
  int v718; // edx
  int v719; // esi
  __int64 v720; // rdx
  unsigned int v721; // r10d
  SIZE_T v722; // r12
  int v723; // edx
  void *v724; // r11
  const void *v725; // rbx
  void *v726; // r14
  SIZE_T v727; // r10
  SIZE_T v728; // r14
  int *v729; // r10
  int v730; // eax
  unsigned __int64 v731; // r10
  unsigned int v732; // r11d
  HANDLE v733; // rax
  void *v734; // r14
  HANDLE v735; // rax
  _QWORD *v736; // r14
  void *v737; // rbx
  HANDLE v738; // rax
  void *v739; // rbx
  HANDLE v740; // rax
  void *v741; // rbx
  HANDLE v742; // rax
  HANDLE v743; // rax
  wchar_t *v744; // rbx
  HANDLE v745; // rax
  void *v746; // rbx
  HANDLE v747; // rax
  _QWORD *v748; // r14
  void *v749; // rbx
  HANDLE v750; // rax
  void *v751; // rbx
  HANDLE v752; // rax
  void *v753; // rbx
  HANDLE v754; // rax
  HANDLE v755; // rax
  void *v756; // rbx
  HANDLE v757; // rax
  unsigned int *v758; // rbx
  unsigned int v759; // r10d
  int v760; // r11d
  int *v761; // rax
  int v762; // r10d
  int v763; // r10d
  _QWORD *v764; // rax
  void *v765; // rbx
  HANDLE v766; // rax
  void *v767; // rbx
  HANDLE v768; // rax
  HANDLE v769; // rax
  HANDLE v770; // rax
  SIZE_T dwBytes; // [rsp+38h] [rbp-D0h] BYREF
  void *m; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID v773; // [rsp+48h] [rbp-C0h]
  LPVOID v774; // [rsp+50h] [rbp-B8h]
  __int64 v775; // [rsp+58h] [rbp-B0h]
  size_t v776; // [rsp+60h] [rbp-A8h] BYREF
  size_t v777; // [rsp+68h] [rbp-A0h] BYREF
  void *v778; // [rsp+70h] [rbp-98h]
  void *v779; // [rsp+78h] [rbp-90h] BYREF
  int v780; // [rsp+80h] [rbp-88h]
  int v781; // [rsp+84h] [rbp-84h]
  void *v782; // [rsp+88h] [rbp-80h] BYREF
  int v783; // [rsp+90h] [rbp-78h]
  int v784; // [rsp+94h] [rbp-74h]
  int v785; // [rsp+98h] [rbp-70h]
  int v786; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v787; // [rsp+A0h] [rbp-68h]
  unsigned int v788; // [rsp+A4h] [rbp-64h]
  size_t v789; // [rsp+A8h] [rbp-60h] BYREF
  void *v790; // [rsp+B0h] [rbp-58h]
  STRSAFE_PCNZWCH psza; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v792; // [rsp+C0h] [rbp-48h]
  unsigned int v793; // [rsp+C4h] [rbp-44h]
  size_t pcchLength; // [rsp+C8h] [rbp-40h] BYREF
  int v795; // [rsp+D0h] [rbp-38h]
  int v796; // [rsp+D4h] [rbp-34h]
  SIZE_T v797; // [rsp+D8h] [rbp-30h] BYREF
  SIZE_T v798; // [rsp+E0h] [rbp-28h] BYREF
  void *v799; // [rsp+E8h] [rbp-20h] BYREF
  int v800; // [rsp+F0h] [rbp-18h]
  unsigned int v801; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v802; // [rsp+F8h] [rbp-10h] BYREF
  void *v803; // [rsp+100h] [rbp-8h] BYREF
  LPVOID v804; // [rsp+108h] [rbp+0h]
  unsigned int v805; // [rsp+110h] [rbp+8h]
  int v806; // [rsp+114h] [rbp+Ch]
  unsigned int v807; // [rsp+118h] [rbp+10h]
  unsigned __int64 v808; // [rsp+120h] [rbp+18h]
  LPVOID v809; // [rsp+128h] [rbp+20h]
  int v810; // [rsp+130h] [rbp+28h]
  LPVOID v811; // [rsp+138h] [rbp+30h] BYREF
  int v812; // [rsp+140h] [rbp+38h]
  unsigned int v813; // [rsp+144h] [rbp+3Ch]
  int v814; // [rsp+148h] [rbp+40h]
  int v815; // [rsp+14Ch] [rbp+44h]
  int v816; // [rsp+150h] [rbp+48h]
  unsigned int v817; // [rsp+154h] [rbp+4Ch] BYREF
  int v818; // [rsp+158h] [rbp+50h]
  LPVOID v819; // [rsp+160h] [rbp+58h]
  LPVOID v820; // [rsp+168h] [rbp+60h]
  int v821; // [rsp+170h] [rbp+68h]
  unsigned int v822; // [rsp+174h] [rbp+6Ch]
  unsigned int v823; // [rsp+178h] [rbp+70h] BYREF
  int v824; // [rsp+17Ch] [rbp+74h]
  int v825; // [rsp+180h] [rbp+78h]
  int v826; // [rsp+184h] [rbp+7Ch]
  int v827; // [rsp+188h] [rbp+80h]
  void *v828; // [rsp+190h] [rbp+88h]
  wchar_t *v829; // [rsp+198h] [rbp+90h]
  unsigned int v830; // [rsp+1A0h] [rbp+98h] BYREF
  unsigned int v831; // [rsp+1A4h] [rbp+9Ch]
  int v832; // [rsp+1A8h] [rbp+A0h]
  int v833; // [rsp+1ACh] [rbp+A4h]
  unsigned int v834; // [rsp+1B0h] [rbp+A8h]
  unsigned int v835; // [rsp+1B4h] [rbp+ACh]
  int v836; // [rsp+1B8h] [rbp+B0h]
  unsigned int v837; // [rsp+1BCh] [rbp+B4h] BYREF
  unsigned int v838; // [rsp+1C0h] [rbp+B8h]
  unsigned int v839; // [rsp+1C4h] [rbp+BCh]
  unsigned __int64 v840; // [rsp+1C8h] [rbp+C0h]
  LPVOID v841; // [rsp+1D0h] [rbp+C8h]
  LPVOID v842; // [rsp+1D8h] [rbp+D0h]
  LPVOID v843; // [rsp+1E0h] [rbp+D8h]
  unsigned int v844; // [rsp+1E8h] [rbp+E0h]
  int *v845; // [rsp+1F0h] [rbp+E8h] BYREF
  int v846; // [rsp+1F8h] [rbp+F0h]
  int v847; // [rsp+200h] [rbp+F8h]
  int v848; // [rsp+208h] [rbp+100h]
  int v849; // [rsp+20Ch] [rbp+104h]
  unsigned int v850; // [rsp+210h] [rbp+108h]
  int v851; // [rsp+214h] [rbp+10Ch]
  int v852; // [rsp+218h] [rbp+110h]
  int v853; // [rsp+21Ch] [rbp+114h]
  int v854; // [rsp+220h] [rbp+118h]
  LPVOID lpMem; // [rsp+228h] [rbp+120h]
  int v856; // [rsp+230h] [rbp+128h]
  unsigned int v857; // [rsp+234h] [rbp+12Ch]
  int v858; // [rsp+238h] [rbp+130h]
  LPVOID v859; // [rsp+240h] [rbp+138h]
  int v860; // [rsp+248h] [rbp+140h]
  int v861; // [rsp+250h] [rbp+148h]
  int v862; // [rsp+258h] [rbp+150h]
  int v863; // [rsp+25Ch] [rbp+154h]
  int v864; // [rsp+260h] [rbp+158h]
  int v865; // [rsp+264h] [rbp+15Ch]
  int v866; // [rsp+268h] [rbp+160h]
  int v867; // [rsp+26Ch] [rbp+164h]
  size_t v868; // [rsp+270h] [rbp+168h]
  size_t v869; // [rsp+278h] [rbp+170h]
  unsigned __int64 v870; // [rsp+280h] [rbp+178h]
  size_t Size; // [rsp+288h] [rbp+180h]
  unsigned __int64 v872; // [rsp+290h] [rbp+188h]
  void *v873; // [rsp+298h] [rbp+190h]
  size_t v874; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 v875; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v876; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int64 v877; // [rsp+2B8h] [rbp+1B0h]
  unsigned int v878; // [rsp+2C0h] [rbp+1B8h]
  int v879; // [rsp+2C4h] [rbp+1BCh]
  SIZE_T v880; // [rsp+2C8h] [rbp+1C0h]
  __int64 *v881; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int8 *v882; // [rsp+2D8h] [rbp+1D0h]
  __int64 v883; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v884; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int8 *v885; // [rsp+2F0h] [rbp+1E8h]
  HMODULE phModule; // [rsp+2F8h] [rbp+1F0h] BYREF
  const wchar_t *v887; // [rsp+300h] [rbp+1F8h]
  _QWORD *v888; // [rsp+308h] [rbp+200h]
  _DWORD *v889; // [rsp+310h] [rbp+208h]
  void *v890; // [rsp+318h] [rbp+210h]
  unsigned int *v891; // [rsp+320h] [rbp+218h]
  _DWORD *v892; // [rsp+328h] [rbp+220h]
  __int64 v893; // [rsp+330h] [rbp+228h]
  void *v894; // [rsp+338h] [rbp+230h]
  void *v895; // [rsp+340h] [rbp+238h]
  unsigned __int64 v896; // [rsp+348h] [rbp+240h]
  unsigned __int64 v897; // [rsp+350h] [rbp+248h]
  __int64 v898; // [rsp+358h] [rbp+250h]
  SIZE_T v899; // [rsp+360h] [rbp+258h]
  __int64 *v900; // [rsp+368h] [rbp+260h]
  __int64 v901; // [rsp+370h] [rbp+268h]
  unsigned __int8 *v902; // [rsp+378h] [rbp+270h]
  __int64 v903; // [rsp+380h] [rbp+278h]
  unsigned __int8 *v904; // [rsp+388h] [rbp+280h]
  unsigned __int8 *v905; // [rsp+390h] [rbp+288h]
  HMODULE hModule; // [rsp+398h] [rbp+290h] BYREF
  int v907; // [rsp+3A0h] [rbp+298h]
  void *Src; // [rsp+3A8h] [rbp+2A0h]
  void *v909; // [rsp+3B0h] [rbp+2A8h]
  unsigned __int64 v910; // [rsp+3B8h] [rbp+2B0h]
  _QWORD v911[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  int v912; // [rsp+3D0h] [rbp+2C8h]
  unsigned int v913; // [rsp+3D4h] [rbp+2CCh]
  int v914; // [rsp+3D8h] [rbp+2D0h]
  _QWORD v915[2]; // [rsp+3E0h] [rbp+2D8h] BYREF
  int v916; // [rsp+3F0h] [rbp+2E8h]
  unsigned int v917; // [rsp+3F4h] [rbp+2ECh]
  int v918; // [rsp+3F8h] [rbp+2F0h]
  _QWORD *v919; // [rsp+400h] [rbp+2F8h]
  int *v920; // [rsp+408h] [rbp+300h]
  __int64 v921; // [rsp+410h] [rbp+308h]

  psza = psz;
  v833 = 0;
  v845 = 0LL;
  v806 = 0;
  v2 = 1;
  if ( !psz )
  {
    v806 = -2147024809;
    goto LABEL_457;
  }
  v832 = 0;
  v811 = 0LL;
  v818 = 0;
  v831 = 0;
  v3 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v811, v3);
  v873 = v811;
  if ( !v811 )
  {
    v10 = -2147024882;
LABEL_1042:
    v377 = v812;
    goto LABEL_454;
  }
  v836 = 0;
  v777 = 0LL;
  v778 = 0LL;
  v4 = 0LL;
  v808 = 0LL;
  v5 = 0LL;
  v809 = 0LL;
  Src = &unk_1800C0570;
  v810 = 0;
  Size = 160LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
  v796 = -1;
  v8 = 0LL;
  v9 = v7;
  v10 = -1073741801;
  if ( !v7 )
  {
    LODWORD(dwBytes) = -1073741801;
    goto LABEL_443;
  }
  memcpy_0(v7, Src, Size);
  v11 = (unsigned int)Size;
  v4 = v9;
  v774 = v9;
  v874 = 8LL;
  v909 = &unk_1800C04B8;
  v12 = GetProcessHeap();
  v13 = HeapAlloc(v12, 8u, 8uLL);
  v8 = 0LL;
  v14 = v13;
  if ( !v13 )
  {
    LODWORD(dwBytes) = -1073741801;
    v5 = 0LL;
    goto LABEL_443;
  }
  memcpy_0(v13, v909, v874);
  v15 = v874;
  v773 = v14;
  v877 = __rdtsc();
  v16 = RtlUIntAdd(4u, 4, (int *)&m);
  v17 = v795;
  v10 = v16;
  dwBytes = (unsigned int)v16;
  if ( v16 >= 0 )
    v17 = (int)m;
  v795 = v17;
  if ( v16 < 0 )
    goto LABEL_467;
  v18 = RtlUIntAdd(0, v17, (int *)&dwBytes + 1);
  v10 = v18 | 0x10000000;
  LODWORD(dwBytes) = v18 | 0x10000000;
  if ( v18 < 0 )
    goto LABEL_467;
  v19 = RtlUIntAdd(4u, v11, (int *)&m);
  LODWORD(dwBytes) = v19;
  v10 = v19;
  if ( v19 >= 0 )
    v20 = (int)m;
  v795 = v20;
  if ( v19 < 0 )
    goto LABEL_467;
  v21 = RtlUIntAdd(HIDWORD(dwBytes), v20, (int *)&dwBytes + 1);
  v10 = v21 | 0x10000000;
  LODWORD(dwBytes) = v21 | 0x10000000;
  if ( v21 < 0 )
    goto LABEL_467;
  v22 = RtlUIntAdd(4u, v15, (int *)&m);
  LODWORD(dwBytes) = v22;
  v10 = v22;
  if ( v22 >= 0 )
    v23 = (int)m;
  v795 = v23;
  if ( v22 < 0 )
    goto LABEL_467;
  v24 = RtlUIntAdd(HIDWORD(dwBytes), v23, (int *)&dwBytes + 1);
  v10 = v24 | 0x10000000;
  LODWORD(dwBytes) = v24 | 0x10000000;
  if ( v24 < 0 )
    goto LABEL_467;
  v25 = RtlUIntAdd(4u, 8, (int *)&m);
  LODWORD(dwBytes) = v25;
  v10 = v25;
  if ( v25 >= 0 )
    v26 = (int)m;
  v795 = v26;
  if ( v25 < 0
    || (v27 = RtlUIntAdd(HIDWORD(dwBytes), v26, (int *)&dwBytes + 1),
        v10 = v27 | 0x10000000,
        LODWORD(dwBytes) = v27 | 0x10000000,
        v27 < 0) )
  {
LABEL_467:
    v4 = v9;
    v5 = v14;
    v8 = 0LL;
    goto LABEL_443;
  }
  if ( StringCchLengthW(psz, v28, &pcchLength) < 0 )
  {
    v10 = -1073741762;
    LODWORD(dwBytes) = -1073741762;
    goto LABEL_467;
  }
  v29 = RtlUIntAdd(4u, 2 * ((int)pcchLength + 1), (int *)&m);
  LODWORD(dwBytes) = v29;
  v10 = v29;
  if ( v29 >= 0 )
    v30 = (int)m;
  v795 = v30;
  if ( v29 < 0 )
    goto LABEL_467;
  v31 = RtlUIntAdd(HIDWORD(dwBytes), v30, (int *)&dwBytes + 1);
  v10 = v31 | 0x10000000;
  LODWORD(dwBytes) = v31 | 0x10000000;
  if ( v31 < 0 )
    goto LABEL_467;
  v32 = RtlUIntAdd(4u, 4, (int *)&m);
  LODWORD(dwBytes) = v32;
  v10 = v32;
  if ( v32 >= 0 )
    v33 = (int)m;
  v795 = v33;
  if ( v32 < 0 )
    goto LABEL_467;
  v34 = RtlUIntAdd(HIDWORD(dwBytes), v33, (int *)&dwBytes + 1);
  v10 = v34 | 0x10000000;
  LODWORD(dwBytes) = v34 | 0x10000000;
  if ( v34 < 0 )
    goto LABEL_467;
  v35 = RtlUIntAdd(4u, 4, (int *)&m);
  LODWORD(dwBytes) = v35;
  v10 = v35;
  if ( v35 >= 0 )
    v36 = (int)m;
  v795 = v36;
  if ( v35 < 0 )
    goto LABEL_467;
  v37 = RtlUIntAdd(HIDWORD(dwBytes), v36, (int *)&dwBytes + 1);
  v10 = v37 | 0x10000000;
  LODWORD(dwBytes) = v37 | 0x10000000;
  if ( v37 < 0 )
    goto LABEL_467;
  HIDWORD(v777) = HIDWORD(dwBytes);
  v38 = HIDWORD(dwBytes);
  v39 = GetProcessHeap();
  v40 = HeapAlloc(v39, 8u, v38);
  v8 = 0LL;
  if ( !v40 )
  {
    v10 = -1073741801;
LABEL_470:
    LODWORD(dwBytes) = v10;
    goto LABEL_471;
  }
  v778 = v40;
  LODWORD(v777) = 0;
  v846 = 0;
  LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v40, 4LL, (__int64 *)&v799);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) == 0LL )
  {
    if ( v42 + 2 > (_DWORD *)((char *)v42 + HIDWORD(v777)) )
      goto LABEL_469;
    v43 = v799;
    *v42 = v41;
    *v43 = v846;
    LODWORD(v777) = v777 + 1;
  }
  if ( v10 < 0 )
    goto LABEL_471;
  if ( !(_DWORD)v11 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
    goto LABEL_51;
  }
  if ( v778 != v8 )
  {
    v44 = (int)v8;
    v45 = (int *)v778;
    v776 = (size_t)v778;
    if ( (unsigned int)v777 > (unsigned int)v8 )
    {
      do
      {
        v46 = RtlUIntAdd(4u, *v45, (int *)&m);
        LODWORD(dwBytes) = v46;
        v10 = v46;
        if ( v46 >= 0 )
          v48 = (unsigned int)m;
        v825 = v48;
        if ( v46 < 0 )
          goto LABEL_50;
        LODWORD(dwBytes) = RtlULongLongAdd(v47, v48, (__int64 *)&v776);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_50;
        v45 = (int *)v776;
      }
      while ( ++v44 < (unsigned int)v777 );
    }
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v45, 4LL, (__int64 *)&v799);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
      goto LABEL_51;
    if ( (char *)v49 + v11 + 4 <= (char *)v778 + HIDWORD(v777) )
    {
      v50 = v799;
      *v49 = v11;
      memcpy_0(v50, v9, v11);
      LODWORD(v777) = v777 + 1;
LABEL_50:
      v8 = 0LL;
      goto LABEL_51;
    }
LABEL_469:
    v10 = -1073741789;
    goto LABEL_470;
  }
  v379 = RtlUIntAdd(4u, v11, (int *)&m);
  v380 = v825;
  v10 = v379;
  LODWORD(dwBytes) = v379;
  if ( v379 >= 0 )
    v380 = (int)m;
  v825 = v380;
  if ( v379 < 0
    || (LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v777), v380, (int *)&v777 + 1),
        v10 = dwBytes,
        (dwBytes & 0x80000000) != 0LL) )
  {
LABEL_51:
    if ( v10 >= 0 )
      goto LABEL_52;
LABEL_471:
    v4 = v9;
    v5 = v14;
    goto LABEL_443;
  }
  LODWORD(v777) = v777 + 1;
LABEL_52:
  if ( !v15 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
LABEL_64:
    v60 = 4LL;
    goto LABEL_65;
  }
  if ( v778 != v8 )
  {
    v51 = (int)v8;
    v52 = (int *)v778;
    v776 = (size_t)v778;
    if ( (unsigned int)v777 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v53 = RtlUIntAdd(4u, *v52, (int *)&m);
        LODWORD(dwBytes) = v53;
        v10 = v53;
        if ( v53 >= 0 )
          v56 = (unsigned int)m;
        v826 = v56;
        if ( v53 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v55, v56, (__int64 *)&v776);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_63;
        v52 = (int *)v776;
        if ( ++v51 >= (unsigned int)v777 )
          goto LABEL_60;
      }
      v8 = 0LL;
      v60 = v54;
      goto LABEL_65;
    }
LABEL_60:
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v52, 4LL, (__int64 *)&v799);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v60 = v57;
      goto LABEL_65;
    }
    if ( (char *)v58 + v15 + 4 <= (char *)v778 + HIDWORD(v777) )
    {
      v59 = v799;
      *v58 = v15;
      memcpy_0(v59, v14, v15);
      LODWORD(v777) = v777 + 1;
LABEL_63:
      v8 = 0LL;
      goto LABEL_64;
    }
    goto LABEL_469;
  }
  v60 = 4LL;
  v381 = RtlUIntAdd(4u, v15, (int *)&m);
  v382 = v826;
  v10 = v381;
  LODWORD(dwBytes) = v381;
  if ( v381 >= 0 )
    v382 = (int)m;
  v826 = v382;
  if ( v381 >= 0 )
  {
    LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v777), v382, (int *)&v777 + 1);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) == 0LL )
    {
      LODWORD(v777) = v777 + 1;
      goto LABEL_66;
    }
  }
LABEL_65:
  if ( v10 < 0 )
    goto LABEL_494;
LABEL_66:
  v910 = v877;
  if ( v778 != v8 )
  {
    v61 = (int)v8;
    v62 = (int *)v778;
    v776 = (size_t)v778;
    if ( (unsigned int)v777 <= (unsigned int)v8 )
    {
LABEL_73:
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v62, v60, (__int64 *)&v799);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        if ( v67 + 3 > (_DWORD *)((char *)v778 + HIDWORD(v777)) )
        {
          v10 = -1073741789;
LABEL_493:
          LODWORD(dwBytes) = v10;
          goto LABEL_494;
        }
        v68 = v799;
        *v67 = 8;
        *v68 = v910;
        LODWORD(v777) = v777 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v63 = RtlUIntAdd(v60, *v62, (int *)&m);
        LODWORD(dwBytes) = v63;
        v10 = v63;
        if ( v63 >= 0 )
          v66 = (unsigned int)m;
        v813 = v66;
        if ( v63 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v65, v66, (__int64 *)&v776);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          break;
        v62 = (int *)v776;
        if ( ++v61 >= (unsigned int)v777 )
          goto LABEL_73;
      }
      v8 = 0LL;
    }
LABEL_76:
    if ( v10 >= 0 )
      goto LABEL_77;
LABEL_494:
    v4 = v9;
    goto LABEL_442;
  }
  v383 = RtlUIntAdd(v60, 8, (int *)&m);
  v64 = v813;
  v10 = v383;
  LODWORD(dwBytes) = v383;
  if ( v383 >= 0 )
    v64 = (unsigned int)m;
  v813 = v64;
  if ( v383 < 0 )
    goto LABEL_76;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v777), v64, (int *)&v777 + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_76;
  LODWORD(v777) = v777 + 1;
LABEL_77:
  v69 = psza;
  if ( StringCchLengthW(psza, v64, &v776) < 0 )
  {
    v10 = -1073741762;
    goto LABEL_493;
  }
  LODWORD(dwBytes) = RtlULongLongAdd(v776, 1LL, (__int64 *)&v776);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) == 0LL )
  {
    v70 = (unsigned int)(2 * v776);
    if ( (_DWORD)v70 )
    {
      if ( v778 == v8 )
      {
        v384 = RtlUIntAdd(v60, v70, (int *)&m);
        v385 = v814;
        v10 = v384;
        LODWORD(dwBytes) = v384;
        if ( v384 >= 0 )
          v385 = (int)m;
        v814 = v385;
        if ( v384 >= 0 )
        {
          LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v777), v385, (int *)&v777 + 1);
          v10 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            LODWORD(v777) = v777 + 1;
            v10 = v386;
            LODWORD(dwBytes) = v386;
          }
        }
      }
      else
      {
        v71 = (int)v8;
        v72 = (int *)v778;
        v776 = (size_t)v778;
        if ( (unsigned int)v777 <= (unsigned int)v8 )
        {
LABEL_88:
          LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v72, v60, (__int64 *)&v799);
          v10 = dwBytes;
          if ( (dwBytes & 0x80000000) == 0LL )
          {
            if ( (char *)v77 + v70 + 4 > (char *)v778 + HIDWORD(v777) )
            {
              v10 = -1073741789;
              LODWORD(dwBytes) = -1073741789;
            }
            else
            {
              v78 = v799;
              *v77 = v70;
              memcpy_0(v78, v69, (unsigned int)v70);
              LODWORD(v777) = v777 + 1;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v73 = RtlUIntAdd(4u, *v72, (int *)&m);
            LODWORD(dwBytes) = v73;
            v10 = v73;
            if ( v73 >= 0 )
              v76 = (unsigned int)m;
            v814 = v76;
            if ( v73 < 0 )
              break;
            LODWORD(dwBytes) = RtlULongLongAdd(v75, v76, (__int64 *)&v776);
            v10 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
            {
              v60 = 4LL;
              goto LABEL_91;
            }
            v72 = (int *)v776;
            if ( ++v71 >= (unsigned int)v777 )
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
    goto LABEL_441;
  v847 = v818;
  if ( v778 == v8 )
  {
    v387 = RtlUIntAdd(v60, v60, (int *)&m);
    v388 = v815;
    v10 = v387;
    LODWORD(dwBytes) = v387;
    if ( v387 >= 0 )
      v388 = (int)m;
    v815 = v388;
    if ( v387 >= 0 )
    {
      LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v777), v388, (int *)&v777 + 1);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        LODWORD(v777) = v777 + 1;
        goto LABEL_104;
      }
    }
  }
  else
  {
    v79 = (int)v8;
    v80 = (int *)v778;
    v776 = (size_t)v778;
    if ( (unsigned int)v777 <= (unsigned int)v8 )
    {
LABEL_100:
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v80, v60, (__int64 *)&v799);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        if ( v84 + 2 > (_DWORD *)((char *)v778 + HIDWORD(v777)) )
          goto LABEL_510;
        v85 = v799;
        *v84 = v60;
        *v85 = v847;
        LODWORD(v777) = v777 + 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v81 = RtlUIntAdd(v60, *v80, (int *)&m);
        LODWORD(dwBytes) = v81;
        v10 = v81;
        if ( v81 >= 0 )
          v83 = (unsigned int)m;
        v815 = v83;
        if ( v81 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v82, v83, (__int64 *)&v776);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          break;
        v80 = (int *)v776;
        if ( ++v79 >= (unsigned int)v777 )
          goto LABEL_100;
      }
      v8 = 0LL;
    }
  }
  if ( v10 < 0 )
    goto LABEL_441;
LABEL_104:
  v827 = v60;
  if ( v778 == v8 )
  {
    v389 = RtlUIntAdd(v60, v60, (int *)&m);
    v390 = v824;
    v10 = v389;
    LODWORD(dwBytes) = v389;
    if ( v389 >= 0 )
      v390 = (int)m;
    v824 = v390;
    if ( v389 >= 0 )
    {
      LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(v777), v390, (int *)&v777 + 1);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) == 0LL )
      {
        LODWORD(v777) = v777 + 1;
        goto LABEL_115;
      }
    }
  }
  else
  {
    v86 = (int)v8;
    v87 = (int *)v778;
    v776 = (size_t)v778;
    if ( (unsigned int)v777 > (unsigned int)v8 )
    {
      while ( 1 )
      {
        v88 = RtlUIntAdd(v60, *v87, (int *)&m);
        LODWORD(dwBytes) = v88;
        v10 = v88;
        if ( v88 >= 0 )
          v90 = (unsigned int)m;
        v824 = v90;
        if ( v88 < 0 )
          break;
        LODWORD(dwBytes) = RtlULongLongAdd(v89, v90, (__int64 *)&v776);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          break;
        v87 = (int *)v776;
        if ( ++v86 >= (unsigned int)v777 )
          goto LABEL_111;
      }
      v8 = 0LL;
      goto LABEL_114;
    }
LABEL_111:
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v87, v60, (__int64 *)&v799);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) == 0LL )
    {
      if ( v91 + 2 <= (_DWORD *)((char *)v778 + HIDWORD(v777)) )
      {
        v92 = v799;
        *v91 = v60;
        *v92 = v827;
        LODWORD(v777) = v777 + 1;
        goto LABEL_114;
      }
LABEL_510:
      v10 = -1073741789;
      LODWORD(dwBytes) = -1073741789;
      goto LABEL_441;
    }
  }
LABEL_114:
  if ( v10 < 0 )
    goto LABEL_441;
LABEL_115:
  v93 = RtlUIntAdd(v60, v60, (int *)&m);
  v95 = v800;
  v10 = v93;
  LODWORD(dwBytes) = v93;
  if ( v93 >= 0 )
    v95 = (int)m;
  v800 = v95;
  if ( v93 < 0 )
    goto LABEL_518;
  HIDWORD(dwBytes) = v95;
  v96 = RtlUIntAdd(v94, 8, (int *)&m);
  LODWORD(dwBytes) = v96;
  v98 = v97;
  v10 = v96;
  if ( v96 >= 0 )
    v98 = (int)m;
  v800 = v98;
  if ( v96 < 0 )
  {
LABEL_518:
    v8 = 0LL;
LABEL_519:
    v108 = v827;
    goto LABEL_139;
  }
  v99 = RtlUIntAdd(v97, v98, (int *)&dwBytes + 1);
  v8 = 0LL;
  LODWORD(dwBytes) = v99;
  v10 = v99;
  if ( v99 < 0 )
    goto LABEL_519;
  v100 = RtlUIntAdd(v60, v60, (int *)&m);
  LODWORD(dwBytes) = v100;
  v10 = v100;
  if ( v100 >= 0 )
    v101 = (int)m;
  v800 = v101;
  if ( v100 < 0 )
    goto LABEL_519;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v101, (int *)&dwBytes + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_519;
  v102 = RtlUIntAdd(v60, v60, (int *)&m);
  LODWORD(dwBytes) = v102;
  v10 = v102;
  if ( v102 >= 0 )
    v103 = (int)m;
  v800 = v103;
  if ( v102 < 0 )
    goto LABEL_519;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v103, (int *)&dwBytes + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_519;
  v104 = RtlUIntAdd(v60, v60, (int *)&m);
  LODWORD(dwBytes) = v104;
  v10 = v104;
  if ( v104 >= 0 )
    v105 = (int)m;
  v800 = v105;
  if ( v104 < 0 )
    goto LABEL_519;
  LODWORD(dwBytes) = RtlUIntAdd(HIDWORD(dwBytes), v105, (int *)&dwBytes + 1);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
    goto LABEL_519;
  v106 = RtlUIntAdd(v60, v60, (int *)&m);
  LODWORD(dwBytes) = v106;
  v10 = v106;
  if ( v106 >= 0 )
    v107 = (int)m;
  v800 = v107;
  if ( v106 < 0 )
    goto LABEL_519;
  v10 = RtlUIntAdd(HIDWORD(dwBytes), v107, (int *)&dwBytes + 1);
  LODWORD(dwBytes) = v10;
  v108 = v827;
  if ( v10 >= 0 )
    v108 = HIDWORD(dwBytes);
LABEL_139:
  LODWORD(v779) = v108;
  if ( v10 < 0 )
    goto LABEL_441;
  v109 = v8;
  v842 = v8;
  v804 = v8;
  v110 = (unsigned int)v8;
  v111 = (size_t)v8;
  v776 = (size_t)v8;
  v112 = (int)v8;
  LODWORD(v782) = (_DWORD)v8;
  v819 = v8;
  v792 = (unsigned int)v8;
  v820 = v8;
  psza = (STRSAFE_PCNZWCH)v8;
  v805 = (unsigned int)v8;
  v875 = __rdtsc();
  v801 = 8;
  v113 = RtlUIntAdd(8u, SHIDWORD(v777), (int *)&v801);
  if ( v113 >= 0 )
  {
    v114 = (v801 + 7) & 0xFFFFFFF8;
    if ( v114 < v801 )
    {
      v113 = -1073741675;
    }
    else
    {
      v801 = (v801 + 7) & 0xFFFFFFF8;
      v115 = v114;
      v116 = GetProcessHeap();
      v117 = (char *)HeapAlloc(v116, 8u, v115);
      v8 = 0LL;
      v118 = v117;
      if ( v117 )
      {
        m = v117;
        *(_DWORD *)v117 = v777;
        v113 = RtlULongLongAdd((unsigned __int64)v117, 4LL, (__int64 *)&m);
        if ( v113 >= 0 )
        {
          v120 = m;
          *(_DWORD *)m = HIDWORD(v777);
          v113 = RtlULongLongAdd((unsigned __int64)v120, v119, (__int64 *)&m);
          if ( v113 >= 0 )
          {
            *(_QWORD *)&v118[v801 - 8] = v875;
            memcpy_0(m, v778, HIDWORD(v777));
            v110 = v801;
            v8 = 0LL;
            v804 = v118;
            v118 = 0LL;
          }
        }
        if ( v118 )
        {
          v391 = GetProcessHeap();
          HeapFree(v391, 0, v118);
          v8 = 0LL;
        }
        v109 = (unsigned __int8 *)v804;
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
    goto LABEL_334;
  v881 = (__int64 *)v8;
  v121 = v8;
  v898 = (__int64)v8;
  v882 = v8;
  v883 = (__int64)v8;
  lpMem = v8;
  v880 = (SIZE_T)v8;
  pcchLength = (size_t)v8;
  if ( v109 )
  {
    v122 = v110;
    m = (void *)v110;
    if ( v110 && (v797 = v110 + 8LL, v123 = MemoryAlloc(v797), v8 = 0LL, v803 = v123, (v124 = v123) != 0LL) )
    {
      v125 = 0;
      for ( i = 0LL; i < v110; ++i )
        v125 ^= v109[i];
      v127 = v109;
      v128 = -1;
      v783 = -1;
      dwBytes = 0LL;
      v129 = 0;
      v787 = 0;
      v130 = v124;
      v131 = v122 & 7;
      if ( (v122 & 7) != 0 )
      {
        dwBytes = 0LL;
        v392 = 0;
        v393 = 0;
        v394 = 0;
        v395 = 56;
        do
        {
          v396 = *v127;
          if ( v394 >= 4 )
            v392 |= v396 << v395;
          else
            v393 |= v396 << (v395 - 32);
          ++v394;
          v395 -= 8;
          ++v127;
        }
        while ( v394 < v131 );
        dwBytes = __PAIR64__(v392, v393);
        v397 = v392 ^ 0x42F6B18D;
        v129 = v393 ^ 0xB17A307A;
        v783 = v397;
        v787 = v393 ^ 0xB17A307A;
        v398 = 0;
        if ( (v122 & 7) != 0 )
        {
          do
          {
            if ( v398 >= 4 )
            {
              v397 = __ROL4__(v397, 8);
              *v130 = v397;
            }
            else
            {
              v129 = __ROL4__(v129, 8);
              *v130 = v129;
            }
            ++v398;
            ++v130;
          }
          while ( v398 < v131 );
          v129 = v787;
          v397 = v783;
        }
        v399 = v131 - 4;
        if ( v399 <= 0 )
        {
          v128 = 0;
          v783 = 0;
          if ( v399 < 0 )
          {
            v129 = v129 >> (-8 * v399) << (-8 * v399);
            v787 = v129;
          }
        }
        else
        {
          v128 = v397 >> (8 * (4 - v399)) << (8 * (4 - v399));
          v783 = v128;
        }
      }
      v132 = v122 >> 3;
      if ( v122 >> 3 )
      {
        v133 = HIDWORD(dwBytes);
        v134 = v127 + 2;
        v135 = dwBytes;
        v136 = v130 + 7;
        do
        {
          v137 = *(v134 - 1) | (*(v134 - 2) << 8);
          v138 = v134[2] << 8;
          v139 = *v134;
          v134 += 8;
          v140 = *(v134 - 7) | ((v139 | (v137 << 8)) << 8);
          v141 = *(v134 - 3) | ((*(v134 - 4) | ((*(v134 - 5) | v138) << 8)) << 8);
          v142 = v141 ^ v128;
          v143 = v129 ^ v140 ^ (v142 - 19032) ^ 0xC81ECB17;
          v144 = (__ROR4__(v143, 7) + 45493 * __ROR4__(v129 ^ v140 ^ (v142 - 19032), 15)) ^ v142;
          v145 = (51991 * __ROR4__(v144 - 1313519016, 9) - __ROR4__(v144, 10)) ^ v143;
          v146 = (__ROL4__(v145, 5) + 51230 * __ROL4__(v145 ^ 0xCB17, 4)) ^ v144;
          v147 = (-937506025 - (v146 ^ 0xB1B54A58)) ^ v145;
          v148 = (45493 * (v147 - 19032) - (v147 >> 6)) ^ v146;
          v149 = (19032 * (__ROR4__(v148, 15) ^ 0xCB17)) ^ v147;
          v150 = (51991 * (__ROR4__(~v149, 3) + 51230)) ^ v148;
          v151 = (v150 + 937486993) ^ v149;
          v152 = (45493 * (v151 ^ 0xC81E)) ^ __ROR4__(v151, 10) ^ v150;
          v153 = __ROR4__(v152, 3) ^ (51991 * __ROL4__(v152 ^ 0x4A58, 6)) ^ v151;
          v154 = (19032 * (__ROR4__(v153, 15) - 51230)) ^ v152;
          v155 = (v154 >> 15) ^ (19032 * __ROL4__(v154 - 51991, 3)) ^ (v154 >> 1) ^ (19032 * (v154 ^ 0xC81E)) ^ v153;
          v156 = (45493 * (v155 - 51991) - (v155 >> 13)) ^ v154;
          v157 = __ROR4__(v156, 11) ^ (51991 * __ROR4__(-1313519016 - v156, 9)) ^ v155;
          v158 = (v157 + 1313467786) ^ v156;
          v159 = (19032 * (v158 ^ 0xB1B5) - __ROR4__(v158, 7)) ^ v157;
          v160 = (45493 * __ROL4__(v159 ^ 0xC81E, 4) - __ROR4__(v159, 16)) ^ v158;
          v161 = (__ROR4__(v160, 4) + 51991 * __ROR4__(-1313519016 - v160, 10)) ^ v159;
          v162 = __ROR4__(v161, 9) ^ (51230 * __ROR4__(v161 + 1313519016, 4)) ^ v160;
          v163 = (19032 * __ROL4__(v162 ^ 0xC81ECB17, 8) - __ROL4__(v162, 2)) ^ v161;
          v164 = (45493 * __ROR4__(-937506025 - v163, 11) - __ROR4__(v163, 12)) ^ v162;
          v165 = (v164 >> 8) ^ (51991 * (v164 ^ 0xB1B5)) ^ v163;
          v787 = v135 ^ v165;
          v135 = v140;
          v783 = v133 ^ v165 ^ v164 ^ 0x79AB814F;
          v133 = v141;
          *(v136 - 4) = v787;
          v787 = __ROR4__(v787, 8);
          *v136 = v783;
          v136 += 8;
          v783 = __ROR4__(v783, 8);
          *(v136 - 13) = v787;
          v787 = __ROR4__(v787, 8);
          *(v136 - 9) = v783;
          v783 = __ROR4__(v783, 8);
          *(v136 - 14) = v787;
          v787 = __ROR4__(v787, 8);
          *(v136 - 10) = v783;
          v783 = __ROR4__(v783, 8);
          *(v136 - 15) = v787;
          *(v136 - 11) = v783;
          v129 = __ROR4__(v787, 8);
          v128 = __ROR4__(v783, 8);
          v787 = v129;
          v783 = v128;
          --v132;
        }
        while ( v132 );
        v121 = (_QWORD *)pcchLength;
        v122 = (unsigned __int64)m;
        v124 = v803;
      }
      *(_QWORD *)&v124[v122] = v125;
      v166 = v797;
      v880 = v797;
      lpMem = v124;
      v881 = &qword_1800C0560;
      v898 = 8LL;
      v883 = 160LL;
      v882 = (unsigned __int8 *)xmmword_1800C04C0;
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
          goto LABEL_539;
        *((_QWORD *)v169 + 1) = v171;
        memcpy_0(v171, v124, v166);
        v169[4] = 160;
        v172 = GetProcessHeap();
        v173 = HeapAlloc(v172, 8u, 0xA0uLL);
        v8 = 0LL;
        if ( !v173 )
          goto LABEL_539;
        *((_QWORD *)v169 + 3) = v173;
        *v173 = xmmword_1800C04C0[0];
        v173[1] = xmmword_1800C04C0[1];
        v173[2] = xmmword_1800C04C0[2];
        v173[3] = xmmword_1800C04C0[3];
        v173[4] = xmmword_1800C04C0[4];
        v173[5] = xmmword_1800C04C0[5];
        v173[6] = xmmword_1800C04C0[6];
        v173[7] = xmmword_1800C04C0[7];
        v173[8] = xmmword_1800C04C0[8];
        v173[9] = xmmword_1800C04C0[9];
        v169[8] = 8;
        v174 = GetProcessHeap();
        v175 = HeapAlloc(v174, 8u, 8uLL);
        v8 = 0LL;
        if ( v175 )
        {
          *((_QWORD *)v169 + 5) = v175;
          v121 = v169;
          *v175 = qword_1800C0560;
          v176 = 0;
          v169 = 0LL;
        }
        else
        {
LABEL_539:
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
      v112 = (int)v782;
      if ( v176 >= 0 )
      {
        v842 = v121;
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
    v111 = v776;
  }
  else
  {
    v176 = -1073741811;
  }
  v10 = v176 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_334;
  v179 = (const void **)v842;
  HIDWORD(dwBytes) = 4;
  v180 = RtlUIntAdd(4u, *(_DWORD *)v842, (int *)&dwBytes + 1);
  if ( v180 < 0
    || (v180 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v180 < 0)
    || (v180 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v179 + 4), (int *)&dwBytes + 1), v180 < 0)
    || (v180 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v180 < 0) )
  {
    v181 = v816;
  }
  else
  {
    v180 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v179 + 8), (int *)&dwBytes + 1);
    v181 = v816;
    if ( v180 >= 0 )
      v181 = HIDWORD(dwBytes);
    v816 = v181;
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
      m = v184;
      *v184 = *(_DWORD *)v179;
      v180 = RtlULongLongAdd((unsigned __int64)v184, 4LL, (__int64 *)&m);
      if ( v180 >= 0 )
      {
        memcpy_0(m, v179[1], *(unsigned int *)v179);
        v186 = RtlULongLongAdd((unsigned __int64)m, *(unsigned int *)v179, (__int64 *)&m);
        v8 = 0LL;
        v180 = v186;
        if ( v186 >= 0 )
        {
          v187 = m;
          *(_DWORD *)m = *((_DWORD *)v179 + 4);
          v180 = RtlULongLongAdd((unsigned __int64)v187, 4LL, (__int64 *)&m);
          if ( v180 >= 0 )
          {
            memcpy_0(m, v179[3], *((unsigned int *)v179 + 4));
            v188 = RtlULongLongAdd((unsigned __int64)m, *((unsigned int *)v179 + 4), (__int64 *)&m);
            v8 = 0LL;
            v180 = v188;
            if ( v188 >= 0 )
            {
              v189 = m;
              *(_DWORD *)m = *((_DWORD *)v179 + 8);
              v180 = RtlULongLongAdd((unsigned __int64)v189, 4LL, (__int64 *)&m);
              if ( v180 >= 0 )
              {
                memcpy_0(m, v179[5], *((unsigned int *)v179 + 8));
                v190 = RtlULongLongAdd((unsigned __int64)m, *((unsigned int *)v179 + 8), (__int64 *)&m);
                v8 = 0LL;
                v180 = v190;
                if ( v190 >= 0 )
                {
                  v112 = v816;
                  v111 = (size_t)v185;
                  v776 = (size_t)v185;
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
    goto LABEL_334;
  v191 = (int)v8;
  v884 = v8;
  v848 = (int)v8;
  v192 = (int)v8;
  v885 = v8;
  v849 = (int)v8;
  v817 = 8;
  v193 = RtlUIntAdd(8u, (int)v779, (int *)&v817);
  v10 = v193 | 0x10000000;
  LODWORD(dwBytes) = v193 | 0x10000000;
  if ( v193 >= 0 )
  {
    v195 = (v817 + 7) & 0xFFFFFFF8;
    if ( v195 < v817 )
    {
      v10 = -1073741675;
      LODWORD(dwBytes) = -1073741675;
    }
    else
    {
      v830 = (v817 + 7) & 0xFFFFFFF8;
      v196 = RtlUIntAdd(v195, v194, (int *)&v830);
      v197 = v834;
      v10 = v196;
      LODWORD(dwBytes) = v196;
      if ( v196 >= 0 )
        v197 = v830;
      v834 = v197;
    }
    if ( v10 < 0 )
      goto LABEL_334;
    if ( v778 == v8 || (unsigned int)v777 <= 1 )
    {
      v10 = -1073741811;
      LODWORD(dwBytes) = -1073741811;
    }
    else
    {
      v198 = (unsigned int *)v778;
      m = v778;
      do
      {
        v199 = *v198;
        LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v198, 4LL, (__int64 *)&m);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_559;
        LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, v199, (__int64 *)&m);
        v10 = dwBytes;
        if ( (dwBytes & 0x80000000) != 0LL )
          goto LABEL_559;
        v198 = (unsigned int *)m;
      }
      while ( v200 == -1 );
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
      {
LABEL_559:
        v8 = 0LL;
        goto LABEL_208;
      }
      v202 = (unsigned __int8 *)m;
      v203 = v201 == 0;
      v191 = v201;
      v8 = 0LL;
      if ( v203 )
        v202 = 0LL;
      v848 = v191;
      v884 = v202;
LABEL_208:
      if ( v10 >= 0 )
      {
        if ( (unsigned int)v777 <= 2 )
        {
          v10 = -1073741811;
          LODWORD(dwBytes) = -1073741811;
        }
        else
        {
          v204 = (unsigned int *)v778;
          m = v778;
          do
          {
            v205 = *v204;
            LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v204, 4LL, (__int64 *)&m);
            v10 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              goto LABEL_562;
            LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, v205, (__int64 *)&m);
            v10 = dwBytes;
            if ( (dwBytes & 0x80000000) != 0LL )
              goto LABEL_562;
            v204 = (unsigned int *)m;
          }
          while ( (unsigned int)(v207 + 1) < 2 );
          LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
          v10 = dwBytes;
          if ( (dwBytes & 0x80000000) != 0LL )
          {
LABEL_562:
            v8 = 0LL;
            goto LABEL_218;
          }
          v209 = (unsigned __int8 *)m;
          v192 = v208;
          v849 = v208;
          if ( !v208 )
            v209 = 0LL;
          v8 = 0LL;
          v885 = v209;
LABEL_218:
          if ( v10 < 0 )
            goto LABEL_334;
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
            v210 = v835;
          }
          else
          {
            v10 = RtlUIntAdd(HIDWORD(dwBytes), v192, (int *)&dwBytes + 1);
            LODWORD(dwBytes) = v10;
            v210 = v835;
            if ( v10 >= 0 )
              v210 = HIDWORD(dwBytes);
            v835 = v210;
          }
          if ( v10 < 0 )
            goto LABEL_334;
          if ( v210 > 0x400000 )
          {
            v10 = -2147418113;
            goto LABEL_333;
          }
          v792 = v210;
        }
      }
    }
  }
  if ( v10 < 0 )
    goto LABEL_334;
  v211 = v792;
  v212 = (int)v8;
  v213 = GetProcessHeap();
  v214 = HeapAlloc(v213, 8u, v211);
  v8 = 0LL;
  if ( v214 )
  {
    v215 = v214;
    v819 = v214;
  }
  else
  {
    v215 = v819;
    v212 = -1073741801;
  }
  v10 = v212 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_334;
  if ( !v111 || !v215 )
  {
    v10 = -2147024809;
    goto LABEL_333;
  }
  v917 = v792;
  v915[0] = v111;
  v916 = v112;
  v915[1] = v215;
  v918 = 0;
  v216 = 0LL;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
    && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
  {
    v218 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))ProcAddress)(134LL, v915, 32LL, 0LL);
    v219 = v792;
    v10 = v218 | 0x10000000;
    if ( v218 >= 0 )
      v219 = v917;
    v792 = v219;
  }
  else
  {
    LastError = GetLastError();
    LODWORD(dwBytes) = LastError;
    v10 = LastError;
    if ( LastError > 0 )
    {
      v10 = (unsigned __int16)LastError | 0x80070000;
      LODWORD(dwBytes) = v10;
    }
    v219 = v792;
    if ( v10 < 0 )
      goto LABEL_241;
    v10 = -2147467259;
  }
  LODWORD(dwBytes) = v10;
LABEL_241:
  v8 = 0LL;
  if ( v10 == -805306333 )
  {
    v10 = -2147024774;
    LODWORD(dwBytes) = -2147024774;
    goto LABEL_334;
  }
  if ( v10 < 0 )
    goto LABEL_334;
  LODWORD(dwBytes) = 0;
  m = v215;
  if ( v219 < 4 )
    goto LABEL_572;
  v220 = *v215;
  v222 = RtlULongLongAdd((unsigned __int64)v215, 4LL, (__int64 *)&m);
  if ( v222 < 0 )
    goto LABEL_277;
  v222 = RtlUIntAdd(0, v221, (int *)&dwBytes);
  if ( v222 < 0 )
    goto LABEL_277;
  if ( v223 - (int)dwBytes < v220 )
    goto LABEL_572;
  v779 = m;
  v222 = RtlULongLongAdd((unsigned __int64)m, v220, (__int64 *)&m);
  if ( v222 < 0 )
    goto LABEL_277;
  v222 = RtlUIntAdd(dwBytes, v224, (int *)&dwBytes);
  if ( v222 < 0 )
    goto LABEL_277;
  if ( (unsigned int)(v225 - dwBytes) < 4 )
    goto LABEL_572;
  v226 = *(unsigned int *)m;
  v222 = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
  if ( v222 < 0 )
    goto LABEL_277;
  v222 = RtlUIntAdd(dwBytes, v227, (int *)&dwBytes);
  if ( v222 < 0 )
    goto LABEL_277;
  if ( v228 - (int)dwBytes < (unsigned int)v226 )
    goto LABEL_572;
  v803 = m;
  v222 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v226, (__int64 *)&m);
  if ( v222 < 0 )
    goto LABEL_277;
  v222 = RtlUIntAdd(dwBytes, v229, (int *)&dwBytes);
  if ( v222 < 0 )
    goto LABEL_277;
  if ( (unsigned int)(v230 - dwBytes) < 4 )
    goto LABEL_572;
  v231 = *(unsigned int *)m;
  v222 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)((_DWORD)v8 + 4), (__int64 *)&m);
  if ( v222 < 0 )
    goto LABEL_277;
  v222 = RtlUIntAdd(dwBytes, v232, (int *)&dwBytes);
  if ( v222 < 0 )
    goto LABEL_277;
  if ( v233 - (int)dwBytes < (unsigned int)v231 )
    goto LABEL_572;
  v222 = RtlUIntAdd(dwBytes, v231, (int *)&dwBytes);
  if ( v222 < 0 )
    goto LABEL_277;
  if ( v234 != (_DWORD)dwBytes || v220 + (_DWORD)v231 + (_DWORD)v226 + 12LL != v234 )
  {
LABEL_572:
    v222 = -1073741762;
    goto LABEL_277;
  }
  v235 = GetProcessHeap();
  v236 = HeapAlloc(v235, 8u, 0x30uLL);
  v8 = 0LL;
  v237 = v236;
  if ( v236 )
  {
    v222 = 0;
    if ( v779 )
    {
      *(_DWORD *)v236 = v220;
      v238 = GetProcessHeap();
      v239 = HeapAlloc(v238, 8u, v220);
      v8 = 0LL;
      if ( !v239 )
        goto LABEL_574;
      v237[1] = v239;
      memcpy_0(v239, v779, v220);
      v8 = 0LL;
    }
    else
    {
      *(_DWORD *)v236 = 0;
      v236[1] = 0LL;
    }
    v240 = v803;
    if ( v803 )
    {
      *((_DWORD *)v237 + 4) = v226;
      v241 = GetProcessHeap();
      v242 = HeapAlloc(v241, 8u, v226);
      v8 = 0LL;
      if ( !v242 )
        goto LABEL_574;
      v237[3] = v242;
      v222 = 0;
      memcpy_0(v242, v240, v226);
      v8 = 0LL;
    }
    else
    {
      *((_DWORD *)v237 + 4) = 0;
      v237[3] = 0LL;
    }
    v243 = m;
    if ( !m )
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
      v222 = 0;
      memcpy_0(v245, v243, v231);
      v8 = 0LL;
LABEL_272:
      v216 = v237;
      v237 = 0LL;
      goto LABEL_273;
    }
LABEL_574:
    v222 = -1073741801;
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
    goto LABEL_274;
  }
  v222 = -1073741801;
LABEL_274:
  if ( v222 >= 0 )
  {
    v820 = v216;
    v216 = 0LL;
  }
  if ( v216 )
  {
    v423 = (void *)v216[1];
    if ( v423 )
    {
      v424 = GetProcessHeap();
      HeapFree(v424, 0, v423);
      v216[1] = 0LL;
    }
    v425 = (void *)v216[3];
    if ( v425 )
    {
      v426 = GetProcessHeap();
      HeapFree(v426, 0, v425);
      v216[3] = 0LL;
    }
    v427 = (void *)v216[5];
    if ( v427 )
    {
      v428 = GetProcessHeap();
      HeapFree(v428, 0, v427);
      v216[5] = 0LL;
    }
    v429 = GetProcessHeap();
    HeapFree(v429, 0, v216);
    v8 = 0LL;
  }
LABEL_277:
  v10 = v222 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 < 0 )
    goto LABEL_334;
  v246 = (wchar_t *)v8;
  v829 = (wchar_t *)v8;
  v247 = (int)v8;
  v876 = (unsigned __int64)v8;
  LODWORD(dwBytes) = (_DWORD)v8;
  if ( !v820 || (v248 = (unsigned __int8 *)*((_QWORD *)v820 + 1), (v779 = v248) == 0LL) || *(_DWORD *)v820 == (_DWORD)v8 )
  {
    v247 = -1073741811;
    goto LABEL_300;
  }
  v249 = *(unsigned int *)v820;
  LODWORD(m) = (_DWORD)v8;
  if ( !v249 )
    goto LABEL_610;
  v250 = v249 - 8;
  v803 = (void *)v250;
  v251 = MemoryAlloc(v250);
  v8 = 0LL;
  pcchLength = (size_t)v251;
  v252 = v251;
  if ( !v251 )
  {
    v246 = v829;
    goto LABEL_610;
  }
  v253 = 0;
  LOBYTE(v775) = 0;
  v254 = v248;
  v255 = v252;
  v256 = v250 & 7;
  if ( (v250 & 7) == 0 )
  {
    HIDWORD(dwBytes) = -1;
    v257 = 0;
    LODWORD(v782) = 0;
    v258 = 0;
    v780 = 0;
LABEL_285:
    v785 = v258;
    goto LABEL_286;
  }
  v780 = -1;
  v785 = 0;
  v430 = 0;
  LODWORD(v782) = 0;
  v431 = 0;
  HIDWORD(dwBytes) = 0;
  v432 = 0;
  v433 = 56;
  do
  {
    v434 = *v254;
    if ( v432 >= 4 )
      v431 |= v434 << v433;
    else
      v430 |= v434 << (v433 - 32);
    ++v432;
    v433 -= 8;
    ++v254;
  }
  while ( v432 < v256 );
  LODWORD(v782) = v430;
  HIDWORD(dwBytes) = v431;
  v258 = v430 ^ 0x92F65A5;
  v435 = v431 ^ 0x699A899C;
  v785 = v258;
  v436 = 0;
  v780 = v435;
  if ( (v250 & 7) != 0 )
  {
    do
    {
      if ( v436 >= 4 )
      {
        v435 = __ROL4__(v435, 8);
        *v255 = v435;
      }
      else
      {
        v258 = __ROL4__(v258, 8);
        *v255 = v258;
      }
      ++v436;
      ++v255;
    }
    while ( v436 < v256 );
    v258 = v785;
    v435 = v780;
  }
  v437 = v256 - 4;
  if ( v256 - 4 <= 0 )
  {
    v780 = 0;
    v257 = 0;
    if ( v437 < 0 )
    {
      v258 = v258 >> (-8 * v437) << (-8 * v437);
      goto LABEL_285;
    }
  }
  else
  {
    v257 = v435 >> (8 * (4 - v437)) << (8 * (4 - v437));
    v780 = v257;
  }
LABEL_286:
  v259 = v250 >> 3;
  if ( v250 >> 3 )
  {
    v260 = HIDWORD(dwBytes);
    v261 = v255 + 7;
    v262 = (int)v782;
    v263 = v254 + 2;
    v264 = v259;
    do
    {
      v265 = *(v263 - 1) | (*(v263 - 2) << 8);
      v266 = v263[2] << 8;
      v267 = *v263;
      v263 += 8;
      v268 = *(v263 - 7) | ((v267 | (v265 << 8)) << 8);
      v269 = v268 ^ v258;
      v270 = *(v263 - 3) | ((*(v263 - 4) | ((*(v263 - 5) | v266) << 8)) << 8);
      v271 = v269 ^ v270 ^ v257 ^ 0xAC987321;
      v272 = (__ROL4__(v271, 10) + 4991 * __ROL4__(v271 + 1419157410, 5)) ^ v269;
      v273 = (43881 * __ROR4__(v272 + 133239679, 9) - __ROL4__(v272, 2)) ^ v271;
      v274 = (24670 * (v273 - 4991) - (v273 >> 13)) ^ v272;
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
      v288 = v286 ^ v287 ^ 0xAC987321;
      v289 = (4991 * (__ROR4__(v288, 3) - 43881)) ^ v287;
      v290 = (24670 * __ROR4__(v289 - 133239679, 1) - __ROR4__(v289, 6)) ^ v288;
      v291 = (__ROL4__(v290, 14) + 2033 * __ROL4__(v290 - 1419157410, 3)) ^ v289;
      v292 = (4991 * __ROL4__(v291 - 1419157410, 15) - __ROR4__(v291, 14)) ^ v290;
      v293 = (v292 >> 3) ^ (43881 * (v292 ^ 0x605E)) ^ v291;
      v780 = v260 ^ v293;
      v260 = v270;
      v294 = v262 ^ __ROL4__(v293, 2) ^ (24670 * __ROL4__(v293 ^ 0x7F1137F, 4));
      v262 = v268;
      v785 = v294 ^ v292;
      *(v261 - 4) = v294 ^ v292;
      v785 = __ROR4__(v785, 8);
      *v261 = v780;
      v261 += 8;
      v780 = __ROR4__(v780, 8);
      *(v261 - 13) = v785;
      v785 = __ROR4__(v785, 8);
      *(v261 - 9) = v780;
      v780 = __ROR4__(v780, 8);
      *(v261 - 14) = v785;
      v785 = __ROR4__(v785, 8);
      *(v261 - 10) = v780;
      v780 = __ROR4__(v780, 8);
      *(v261 - 15) = v785;
      *(v261 - 11) = v780;
      v258 = __ROR4__(v785, 8);
      v257 = __ROR4__(v780, 8);
      v785 = v258;
      v780 = v257;
      --v264;
    }
    while ( v264 );
    v253 = v775;
    v247 = dwBytes;
    v250 = (unsigned __int64)v803;
    v252 = (_BYTE *)pcchLength;
  }
  v8 = 0LL;
  for ( j = 0LL; j < v250; ++j )
    v253 ^= v252[j];
  if ( v253 == *(_QWORD *)((char *)v779 + v250) )
  {
    v296 = (int)m;
    v246 = (wchar_t *)v252;
    v829 = (wchar_t *)v252;
    v252 = 0LL;
    v876 = v250;
  }
  else
  {
    v246 = v829;
    v296 = -1073425151;
  }
  if ( v252 )
  {
    MemoryFree(v252);
    v246 = v829;
    v8 = 0LL;
  }
  if ( v296 >= 0 )
  {
    psza = v246;
    v246 = 0LL;
    v829 = 0LL;
    v805 = v876;
    goto LABEL_298;
  }
LABEL_610:
  v247 = -1073741823;
LABEL_298:
  if ( v246 )
  {
    v438 = GetProcessHeap();
    HeapFree(v438, 0, v246);
    v8 = 0LL;
    v829 = 0LL;
  }
LABEL_300:
  v10 = v247 | 0x10000000;
  LODWORD(dwBytes) = v10;
  if ( v10 >= 0 )
  {
    v297 = psza;
    HIDWORD(dwBytes) = (_DWORD)v8;
    m = (void *)psza;
    if ( v805 >= 4 )
    {
      LODWORD(v779) = *(_DWORD *)psza;
      v299 = RtlULongLongAdd((unsigned __int64)psza, 4LL, (__int64 *)&m);
      if ( v299 < 0 )
        goto LABEL_332;
      v299 = RtlUIntAdd(0, v298, (int *)&dwBytes + 1);
      if ( v299 < 0 )
        goto LABEL_332;
      if ( v805 - HIDWORD(dwBytes) >= v301 )
      {
        v302 = *(unsigned int *)m;
        v299 = RtlULongLongAdd((unsigned __int64)m, v300, (__int64 *)&m);
        if ( v299 < 0 )
          goto LABEL_332;
        v299 = RtlUIntAdd(HIDWORD(dwBytes), v303, (int *)&dwBytes + 1);
        if ( v299 < 0 )
          goto LABEL_332;
        if ( v805 - HIDWORD(dwBytes) >= (unsigned int)v302 )
        {
          v299 = RtlUIntAdd(HIDWORD(dwBytes), v302, (int *)&dwBytes + 1);
          if ( v299 < 0 )
            goto LABEL_332;
          v305 = m;
          if ( (char *)v297 + v805 >= (char *)m + v302 && (unsigned __int64)v805 + (char *)v297 - v302 - (_BYTE *)m < 8 )
          {
            LODWORD(v782) = (_DWORD)v304;
            v306 = v304;
            v299 = (int)v304;
            v307 = (unsigned int)v304;
            if ( !m )
            {
LABEL_324:
              if ( (_DWORD)v302 )
              {
                v314 = GetProcessHeap();
                v306 = HeapAlloc(v314, 8u, v302);
                if ( !v306 )
                {
                  v299 = -1073741801;
                  goto LABEL_330;
                }
                v299 = 0;
              }
              if ( v305 )
                memcpy_0(v306, v305, v302);
              v809 = v306;
              v808 = __PAIR64__(v302, v307);
LABEL_330:
              if ( v299 < 0 || (_DWORD)v779 == (_DWORD)v808 )
                goto LABEL_332;
              goto LABEL_613;
            }
            v299 = RtlULongLongAdd((unsigned __int64)m, (unsigned int)v302, (__int64 *)&v797);
            if ( v299 < 0 )
              goto LABEL_330;
            v309 = v797;
            if ( (unsigned __int64)v305 < v797 )
            {
              do
              {
                v299 = RtlULongLongAdd((unsigned __int64)v308, 4LL, (__int64 *)&v797);
                if ( v299 < 0 )
                  goto LABEL_330;
                if ( v797 > v309 )
                  goto LABEL_611;
                v311 = RtlUIntAdd(4u, *v310, (int *)&m);
                v299 = v311;
                if ( v311 >= 0 )
                  v313 = (unsigned int)m;
                v850 = v313;
                if ( v311 < 0 )
                  goto LABEL_332;
                v299 = RtlULongLongAdd(v312, v313, (__int64 *)&v803);
                if ( v299 < 0 )
                  goto LABEL_332;
                v308 = v803;
                if ( (unsigned __int64)v803 > v309 )
                  goto LABEL_611;
                LODWORD(v782) = (_DWORD)v782 + 1;
              }
              while ( (unsigned __int64)v803 < v309 );
            }
            if ( v308 == (void *)v309 )
            {
              v307 = (unsigned int)v782;
              goto LABEL_324;
            }
LABEL_611:
            v299 = -1073741811;
LABEL_332:
            v10 = v299 | 0x10000000;
            v8 = 0LL;
LABEL_333:
            LODWORD(dwBytes) = v10;
            goto LABEL_334;
          }
        }
      }
    }
LABEL_613:
    v299 = -1073741762;
    goto LABEL_332;
  }
LABEL_334:
  v315 = v804;
  if ( v804 )
  {
    v316 = GetProcessHeap();
    HeapFree(v316, 0, v315);
    v8 = 0LL;
  }
  v317 = v842;
  if ( v842 )
  {
    v318 = (void *)*((_QWORD *)v842 + 1);
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
    v842 = 0LL;
  }
  v325 = (void *)v776;
  if ( v776 )
  {
    v326 = GetProcessHeap();
    HeapFree(v326, 0, v325);
    v8 = 0LL;
  }
  v327 = v819;
  if ( v819 )
  {
    v328 = GetProcessHeap();
    HeapFree(v328, 0, v327);
    v8 = 0LL;
  }
  v329 = v820;
  if ( v820 )
  {
    v330 = (void *)*((_QWORD *)v820 + 1);
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
  v337 = (wchar_t *)psza;
  if ( psza )
  {
    v338 = GetProcessHeap();
    HeapFree(v338, 0, v337);
    v8 = 0LL;
  }
  if ( v10 < 0 )
    goto LABEL_441;
  if ( !(_DWORD)v808 )
    goto LABEL_614;
  if ( v809 == v8 || (unsigned int)v808 <= (unsigned int)v8 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
  }
  else
  {
    psza = (STRSAFE_PCNZWCH)v809;
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v809, 4LL, (__int64 *)&psza);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v339 = v851;
      v340 = v887;
    }
    else
    {
      v340 = psza;
      v851 = v339;
      if ( !v339 )
        v340 = (STRSAFE_PCNZWCH)v8;
      v887 = v340;
    }
    if ( (dwBytes & 0x80000000) != 0LL )
      goto LABEL_441;
    if ( v339 != 4 )
      goto LABEL_617;
    v810 = *(_DWORD *)v340;
  }
  if ( v10 < 0 )
    goto LABEL_441;
  v10 = v810;
  if ( v810 == -805306333 )
    v10 = -2147024774;
  LODWORD(dwBytes) = v10;
  v810 = v10;
  if ( v10 != -2147024774 && v10 < 0 )
    goto LABEL_441;
  if ( (_DWORD)v808 != 6 )
  {
LABEL_614:
    v10 = -1073425151;
    goto LABEL_440;
  }
  if ( v809 == v8 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
    goto LABEL_387;
  }
  v341 = v809;
  m = v809;
  do
  {
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v341, 4LL, (__int64 *)&m);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v8 = 0LL;
      goto LABEL_620;
    }
    v343 = RtlULongLongAdd((unsigned __int64)m, v342, (__int64 *)&m);
    v8 = 0LL;
    LODWORD(dwBytes) = v343;
    v10 = v343;
    if ( v343 < 0 )
      goto LABEL_620;
    v341 = m;
  }
  while ( v344 == -1 );
  LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
  {
LABEL_620:
    v345 = v852;
    v346 = v888;
    goto LABEL_384;
  }
  v346 = m;
  v852 = v345;
  if ( !v345 )
    v346 = v8;
  v888 = v346;
LABEL_384:
  if ( v10 < 0 )
    goto LABEL_441;
  if ( v345 != 8 )
    goto LABEL_617;
  v893 = *v346;
LABEL_387:
  if ( v10 < 0 )
    goto LABEL_441;
  if ( v809 == v8 )
  {
    v10 = -1073741811;
    LODWORD(dwBytes) = -1073741811;
LABEL_400:
    if ( v10 < 0 )
      goto LABEL_441;
    if ( v809 == v8 )
    {
      v10 = -1073741811;
      goto LABEL_440;
    }
    v353 = v809;
    m = v809;
    do
    {
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v353, 4LL, (__int64 *)&m);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_625;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, v354, (__int64 *)&m);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_625;
      v353 = m;
    }
    while ( (unsigned int)(v355 + 1) < 3 );
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
LABEL_625:
      v357 = v890;
      goto LABEL_410;
    }
    v357 = m;
    v854 = v356;
    if ( !v356 )
      v357 = 0LL;
    v890 = v357;
LABEL_410:
    if ( v10 < 0 )
      goto LABEL_630;
    v358 = (unsigned int *)v809;
    m = v809;
    do
    {
      v359 = *v358;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v358, 4LL, (__int64 *)&m);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_626;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, v359, (__int64 *)&m);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_626;
      v358 = (unsigned int *)m;
    }
    while ( (unsigned int)(v360 + 1) < 4 );
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
LABEL_626:
      v361 = v856;
      v362 = v891;
      goto LABEL_419;
    }
    v362 = (unsigned int *)m;
    v856 = v361;
    if ( !v361 )
      v362 = 0LL;
    v891 = v362;
LABEL_419:
    if ( v10 < 0 )
    {
      v363 = v857;
    }
    else
    {
      if ( v361 != 4 )
        goto LABEL_627;
      v363 = *v362;
      v857 = *v362;
    }
    if ( v10 < 0 )
      goto LABEL_630;
    v364 = (unsigned int *)v809;
    m = v809;
    do
    {
      v365 = *v364;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v364, 4LL, (__int64 *)&m);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_632;
      LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, v365, (__int64 *)&m);
      v10 = dwBytes;
      if ( (dwBytes & 0x80000000) != 0LL )
        goto LABEL_632;
      v364 = (unsigned int *)m;
    }
    while ( (unsigned int)(v367 + 1) < 5 );
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
LABEL_632:
      v368 = v858;
      v369 = v892;
      goto LABEL_431;
    }
    v369 = m;
    v858 = v368;
    if ( !v368 )
      v369 = 0LL;
    v892 = v369;
LABEL_431:
    if ( v10 < 0 )
    {
      v370 = v836;
LABEL_434:
      if ( v10 >= 0 )
      {
        if ( v877 == v893 )
        {
          v832 = v860;
          v831 = v363;
          v818 = v370;
          if ( v363 <= 4 && v366 <= 4 )
          {
            memcpy_0(v873, v357, v366);
            v8 = 0LL;
            if ( v810 )
              v10 = v810;
            goto LABEL_440;
          }
          v10 = -2147024774;
        }
        else
        {
          v10 = -1073425151;
        }
        goto LABEL_629;
      }
LABEL_630:
      v8 = 0LL;
      goto LABEL_441;
    }
    if ( v368 == 4 )
    {
      v370 = *v369;
      v836 = *v369;
      goto LABEL_434;
    }
LABEL_627:
    v10 = -1073741789;
LABEL_629:
    LODWORD(dwBytes) = v10;
    goto LABEL_630;
  }
  v347 = v809;
  m = v809;
  do
  {
    LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)v347, 4LL, (__int64 *)&m);
    v10 = dwBytes;
    if ( (dwBytes & 0x80000000) != 0LL )
    {
      v8 = 0LL;
      goto LABEL_623;
    }
    v349 = RtlULongLongAdd((unsigned __int64)m, v348, (__int64 *)&m);
    v8 = 0LL;
    LODWORD(dwBytes) = v349;
    v10 = v349;
    if ( v349 < 0 )
      goto LABEL_623;
    v347 = m;
  }
  while ( (unsigned int)(v350 + 1) < 2 );
  LODWORD(dwBytes) = RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m);
  v10 = dwBytes;
  if ( (dwBytes & 0x80000000) != 0LL )
  {
LABEL_623:
    v351 = v853;
    v352 = v889;
    goto LABEL_397;
  }
  v352 = m;
  v853 = v351;
  if ( !v351 )
    v352 = v8;
  v889 = v352;
LABEL_397:
  if ( v10 >= 0 )
  {
    if ( v351 == 4 )
    {
      v860 = *v352;
      goto LABEL_400;
    }
LABEL_617:
    v10 = -1073741789;
LABEL_440:
    LODWORD(dwBytes) = v10;
  }
LABEL_441:
  v4 = v774;
LABEL_442:
  v5 = v773;
LABEL_443:
  v777 = 0LL;
  v371 = v778;
  if ( v778 )
  {
    v372 = GetProcessHeap();
    HeapFree(v372, 0, v371);
    v8 = 0LL;
    v778 = 0LL;
  }
  v808 = 0LL;
  v373 = v809;
  if ( v809 )
  {
    v374 = GetProcessHeap();
    HeapFree(v374, 0, v373);
    v8 = 0LL;
    v809 = 0LL;
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
    goto LABEL_1042;
  if ( v818 == (_DWORD)v8 )
    goto LABEL_453;
  v774 = v8;
  v789 = 0LL;
  v439 = v8;
  v790 = 0LL;
  v440 = v8;
  v840 = 0LL;
  v841 = 0LL;
  v812 = (int)v8;
  v894 = &unk_1800C0570;
  v868 = 160LL;
  v441 = GetProcessHeap();
  v442 = HeapAlloc(v441, 8u, 0xA0uLL);
  v8 = 0LL;
  v443 = v442;
  if ( !v442 )
    goto LABEL_1030;
  memcpy_0(v442, v894, v868);
  v444 = (unsigned int)v868;
  v439 = v443;
  v773 = v443;
  v869 = 8LL;
  v895 = &unk_1800C04B8;
  v445 = GetProcessHeap();
  v446 = HeapAlloc(v445, 8u, 8uLL);
  v8 = 0LL;
  v447 = v446;
  if ( !v446 )
    goto LABEL_1029;
  memcpy_0(v446, v895, v869);
  v448 = v869;
  v774 = v447;
  v896 = __rdtsc();
  HIDWORD(dwBytes) = 0;
  if ( (int)RtlUIntAdd(4u, 4, (int *)&m) < 0 )
    goto LABEL_662;
  v821 = (int)m;
  if ( (int)RtlUIntAdd(0, (int)m, (int *)&dwBytes + 1) < 0 )
    goto LABEL_662;
  if ( (int)RtlUIntAdd(v449, v444, (int *)&m) < 0 )
    goto LABEL_662;
  v821 = (int)m;
  if ( (int)RtlUIntAdd(HIDWORD(dwBytes), (int)m, (int *)&dwBytes + 1) < 0 )
    goto LABEL_662;
  if ( (int)RtlUIntAdd(v450, v448, (int *)&m) < 0 )
    goto LABEL_662;
  v821 = (int)m;
  if ( (int)RtlUIntAdd(HIDWORD(dwBytes), (int)m, (int *)&dwBytes + 1) < 0 )
    goto LABEL_662;
  if ( (int)RtlUIntAdd(v451, (int)v8 + 8, (int *)&m) < 0 )
    goto LABEL_662;
  v821 = (int)m;
  if ( (int)RtlUIntAdd(HIDWORD(dwBytes), (int)m, (int *)&dwBytes + 1) < 0 )
    goto LABEL_662;
  HIDWORD(v789) = HIDWORD(dwBytes);
  v452 = HIDWORD(dwBytes);
  v453 = GetProcessHeap();
  v454 = HeapAlloc(v453, 8u, v452);
  v8 = 0LL;
  if ( !v454 )
    goto LABEL_662;
  v790 = v454;
  LODWORD(v789) = 0;
  v861 = 4;
  if ( (int)RtlULongLongAdd((unsigned __int64)v454, 4LL, (__int64 *)&v799) < 0
    || v456 + 2 > (_DWORD *)((char *)v456 + HIDWORD(v789)) )
  {
    goto LABEL_662;
  }
  v457 = v799;
  *v456 = v455;
  *v457 = v861;
  v458 = v789 + 1;
  LODWORD(v789) = v789 + 1;
  if ( !(_DWORD)v444 )
  {
    v465 = -1073741811;
LABEL_664:
    if ( v465 >= 0 )
    {
      v459 = 4LL;
LABEL_666:
      if ( v448 )
      {
        if ( v790 == v8 )
        {
          if ( (int)RtlUIntAdd(v459, v448, (int *)&m) < 0 )
            goto LABEL_679;
          v863 = (int)m;
          if ( (int)RtlUIntAdd(HIDWORD(v789), (int)m, (int *)&v789 + 1) < 0 )
            goto LABEL_679;
          v458 = v789 + 1;
          LODWORD(v789) = v789 + 1;
          goto LABEL_683;
        }
        v468 = (int *)v790;
        psza = (STRSAFE_PCNZWCH)v790;
        v469 = 0;
        if ( v458 )
        {
          while ( (int)RtlUIntAdd(v459, *v468, (int *)&m) >= 0 )
          {
            v863 = (int)m;
            v471 = RtlULongLongAdd(v470, (unsigned int)m, (__int64 *)&psza);
            v8 = 0LL;
            if ( v471 < 0 )
              goto LABEL_679;
            v468 = (int *)psza;
            if ( ++v469 >= v472 )
              goto LABEL_675;
          }
          goto LABEL_678;
        }
LABEL_675:
        v473 = RtlULongLongAdd((unsigned __int64)v468, v459, (__int64 *)&v799);
        if ( v473 < 0 )
        {
LABEL_678:
          v8 = 0LL;
          goto LABEL_679;
        }
        if ( (char *)v474 + v448 + 4 > (char *)v790 + HIDWORD(v789) )
          goto LABEL_1040;
        v475 = v799;
        *v474 = v448;
        memcpy_0(v475, v447, v448);
        v458 = v789 + 1;
        LODWORD(v789) = v789 + 1;
        v8 = 0LL;
      }
      else
      {
        v473 = -1073741811;
      }
      if ( v473 < 0 )
        goto LABEL_679;
LABEL_683:
      v897 = v896;
      if ( v790 == v8 )
      {
        if ( (int)RtlUIntAdd(v459, 8, (int *)&m) < 0 )
          goto LABEL_679;
        v864 = (int)m;
        if ( (int)RtlUIntAdd(HIDWORD(v789), (int)m, (int *)&v789 + 1) < 0 )
          goto LABEL_679;
        LODWORD(v789) = v789 + 1;
LABEL_694:
        if ( (int)RtlUIntAdd(v459, v459, (int *)&m) < 0 )
          goto LABEL_679;
        v865 = (int)m;
        LODWORD(v779) = (_DWORD)m;
        if ( (int)RtlUIntAdd(v483, 8, (int *)&m) < 0 )
          goto LABEL_679;
        v865 = (int)m;
        if ( (int)RtlUIntAdd(v484, (int)m, (int *)&v779) < 0 )
          goto LABEL_679;
        v485 = v8;
        v843 = v8;
        v804 = v8;
        v486 = (unsigned int)v8;
        psza = (STRSAFE_PCNZWCH)v8;
        v487 = v8;
        LODWORD(m) = (_DWORD)v8;
        v811 = v8;
        v793 = (unsigned int)v8;
        v820 = v8;
        v819 = v8;
        v807 = (unsigned int)v8;
        v870 = __rdtsc();
        v802 = 8;
        v488 = RtlUIntAdd(8u, SHIDWORD(v789), (int *)&v802);
        if ( v488 >= 0 )
        {
          v489 = (v802 + 7) & 0xFFFFFFF8;
          if ( v489 >= v802 )
          {
            v802 = (v802 + 7) & 0xFFFFFFF8;
            v490 = v489;
            v491 = GetProcessHeap();
            v492 = (char *)HeapAlloc(v491, 8u, v490);
            v8 = 0LL;
            v493 = v492;
            if ( v492 )
            {
              *(_DWORD *)v492 = v789;
              v776 = (size_t)v492;
              v488 = RtlULongLongAdd((unsigned __int64)v492, 4LL, (__int64 *)&v776);
              if ( v488 >= 0 )
              {
                v495 = v776;
                *(_DWORD *)v776 = HIDWORD(v789);
                v488 = RtlULongLongAdd(v495, v494, (__int64 *)&v776);
                if ( v488 >= 0 )
                {
                  *(_QWORD *)&v493[v802 - 8] = v870;
                  memcpy_0((void *)v776, v790, HIDWORD(v789));
                  v486 = v802;
                  v8 = 0LL;
                  v804 = v493;
                  v493 = 0LL;
                }
              }
              if ( v493 )
              {
                v496 = GetProcessHeap();
                HeapFree(v496, 0, v493);
                v8 = 0LL;
              }
              v485 = (unsigned __int8 *)v804;
            }
            else
            {
              v488 = -1073741801;
              v485 = v487;
            }
          }
          else
          {
            v488 = -1073741675;
          }
        }
        v497 = v488 | 0x10000000;
        if ( v497 < 0 )
          goto LABEL_985;
        v900 = (__int64 *)v8;
        v498 = v8;
        v901 = (__int64)v8;
        v902 = v8;
        v903 = (__int64)v8;
        v859 = v8;
        v899 = (SIZE_T)v8;
        v803 = v8;
        if ( v485 )
        {
          v500 = v486;
          pcchLength = v486;
          if ( v486
            && (v798 = v486 + 8LL, v501 = MemoryAlloc(v798), v8 = 0LL, v776 = (size_t)v501, (v502 = v501) != 0LL) )
          {
            v503 = 0;
            v504 = 0LL;
            LOBYTE(v775) = 0;
            if ( v500 )
            {
              do
                v503 ^= v485[v504++];
              while ( v504 < v500 );
              LOBYTE(v775) = v503;
            }
            v505 = v485;
            v506 = -1;
            LODWORD(v782) = 0;
            v784 = -1;
            HIDWORD(dwBytes) = 0;
            v507 = 0;
            v788 = 0;
            v508 = v502;
            v509 = v500 & 7;
            if ( (v500 & 7) != 0 )
            {
              v510 = 0;
              LODWORD(v782) = 0;
              v511 = 0;
              HIDWORD(dwBytes) = 0;
              v512 = 56;
              do
              {
                v513 = *v505;
                if ( v511 >= 4 )
                {
                  v514 = HIDWORD(dwBytes);
                  v510 |= v513 << v512;
                }
                else
                {
                  v514 = (v513 << (v512 - 32)) | HIDWORD(dwBytes);
                  HIDWORD(dwBytes) = v514;
                }
                ++v511;
                v512 -= 8;
                ++v505;
              }
              while ( v511 < v509 );
              LODWORD(v782) = v510;
              v515 = v510 ^ 0x42F6B18D;
              v507 = v514 ^ 0xB17A307A;
              v784 = v515;
              v788 = v514 ^ 0xB17A307A;
              v516 = 0;
              if ( (v500 & 7) != 0 )
              {
                do
                {
                  if ( v516 >= 4 )
                  {
                    v515 = __ROL4__(v515, 8);
                    *v508 = v515;
                  }
                  else
                  {
                    v507 = __ROL4__(v507, 8);
                    *v508 = v507;
                  }
                  ++v516;
                  ++v508;
                }
                while ( v516 < v509 );
                v507 = v788;
                v515 = v784;
              }
              v517 = v509 - 4;
              if ( v517 <= 0 )
              {
                v506 = 0;
                v784 = 0;
                if ( v517 < 0 )
                {
                  v507 = v507 >> (-8 * v517) << (-8 * v517);
                  v788 = v507;
                }
              }
              else
              {
                v506 = v515 >> (8 * (4 - v517)) << (8 * (4 - v517));
                v784 = v506;
              }
            }
            v518 = v500 >> 3;
            if ( v500 >> 3 )
            {
              v519 = (int)v782;
              v520 = v505 + 2;
              v521 = HIDWORD(dwBytes);
              v522 = v508 + 7;
              v523 = v518;
              do
              {
                v524 = v520[1] | ((*v520 | ((*(v520 - 1) | (*(v520 - 2) << 8)) << 8)) << 8);
                v525 = v520[5];
                v526 = (v520[4] | ((v520[3] | (v520[2] << 8)) << 8)) << 8;
                v520 += 8;
                v527 = v525 | v526;
                v528 = v527 ^ v506;
                v529 = v507 ^ v524 ^ (v528 - 19032) ^ 0xC81ECB17;
                v530 = (__ROR4__(v529, 7) + 45493 * __ROR4__(v507 ^ v524 ^ (v528 - 19032), 15)) ^ v528;
                v531 = (51991 * __ROR4__(v530 - 1313519016, 9) - __ROR4__(v530, 10)) ^ v529;
                v532 = (__ROL4__(v531, 5) + 51230 * __ROL4__(v531 ^ 0xCB17, 4)) ^ v530;
                v533 = (-937506025 - (v532 ^ 0xB1B54A58)) ^ v531;
                v534 = (45493 * (v533 - 19032) - (v533 >> 6)) ^ v532;
                v535 = (19032 * (__ROR4__(v534, 15) ^ 0xCB17)) ^ v533;
                v536 = (51991 * (__ROR4__(~v535, 3) + 51230)) ^ v534;
                v537 = (v536 + 937486993) ^ v535;
                v538 = (45493 * (v537 ^ 0xC81E)) ^ __ROR4__(v537, 10) ^ v536;
                v539 = __ROR4__(v538, 3) ^ (51991 * __ROL4__(v538 ^ 0x4A58, 6)) ^ v537;
                v540 = (19032 * (__ROR4__(v539, 15) - 51230)) ^ v538;
                v541 = (v540 >> 15) ^ (19032 * __ROL4__(v540 - 51991, 3)) ^ (v540 >> 1) ^ (19032 * (v540 ^ 0xC81E)) ^ v539;
                v542 = (45493 * (v541 - 51991) - (v541 >> 13)) ^ v540;
                v543 = __ROR4__(v542, 11) ^ (51991 * __ROR4__(-1313519016 - v542, 9)) ^ v541;
                v544 = (v543 + 1313467786) ^ v542;
                v545 = (19032 * (v544 ^ 0xB1B5) - __ROR4__(v544, 7)) ^ v543;
                v546 = (45493 * __ROL4__(v545 ^ 0xC81E, 4) - __ROR4__(v545, 16)) ^ v544;
                v547 = (__ROR4__(v546, 4) + 51991 * __ROR4__(-1313519016 - v546, 10)) ^ v545;
                v548 = __ROR4__(v547, 9) ^ (51230 * __ROR4__(v547 + 1313519016, 4)) ^ v546;
                v549 = (19032 * __ROL4__(v548 ^ 0xC81ECB17, 8) - __ROL4__(v548, 2)) ^ v547;
                v550 = (45493 * __ROR4__(-937506025 - v549, 11) - __ROR4__(v549, 12)) ^ v548;
                v551 = (v550 >> 8) ^ (51991 * (v550 ^ 0xB1B5)) ^ v549;
                v788 = v521 ^ v551;
                v521 = v524;
                v784 = v519 ^ v551 ^ v550 ^ 0x79AB814F;
                v519 = v527;
                *(v522 - 4) = v788;
                v788 = __ROR4__(v788, 8);
                *v522 = v784;
                v522 += 8;
                v784 = __ROR4__(v784, 8);
                *(v522 - 13) = v788;
                v788 = __ROR4__(v788, 8);
                *(v522 - 9) = v784;
                v784 = __ROR4__(v784, 8);
                *(v522 - 14) = v788;
                v788 = __ROR4__(v788, 8);
                *(v522 - 10) = v784;
                v784 = __ROR4__(v784, 8);
                *(v522 - 15) = v788;
                *(v522 - 11) = v784;
                v507 = __ROR4__(v788, 8);
                v506 = __ROR4__(v784, 8);
                v788 = v507;
                v784 = v506;
                --v523;
              }
              while ( v523 );
              v503 = v775;
              v498 = v803;
              v500 = pcchLength;
              v502 = (_BYTE *)v776;
            }
            *(_QWORD *)&v502[v500] = v503;
            v552 = v798;
            v899 = v798;
            v859 = v502;
            v900 = &qword_1800C0560;
            v901 = 8LL;
            v903 = 160LL;
            v902 = (unsigned __int8 *)xmmword_1800C04C0;
            v553 = GetProcessHeap();
            v554 = HeapAlloc(v553, 8u, 0x30uLL);
            v8 = 0LL;
            v555 = v554;
            if ( v554 )
            {
              *v554 = v552;
              v556 = GetProcessHeap();
              v557 = HeapAlloc(v556, 8u, v552);
              v8 = 0LL;
              if ( !v557 )
                goto LABEL_742;
              *((_QWORD *)v555 + 1) = v557;
              memcpy_0(v557, v502, v552);
              v555[4] = 160;
              v558 = GetProcessHeap();
              v559 = HeapAlloc(v558, 8u, 0xA0uLL);
              v8 = 0LL;
              if ( !v559 )
                goto LABEL_742;
              *((_QWORD *)v555 + 3) = v559;
              *v559 = xmmword_1800C04C0[0];
              v559[1] = xmmword_1800C04C0[1];
              v559[2] = xmmword_1800C04C0[2];
              v559[3] = xmmword_1800C04C0[3];
              v559[4] = xmmword_1800C04C0[4];
              v559[5] = xmmword_1800C04C0[5];
              v559[6] = xmmword_1800C04C0[6];
              v559[7] = xmmword_1800C04C0[7];
              v559[8] = xmmword_1800C04C0[8];
              v559[9] = xmmword_1800C04C0[9];
              v555[8] = 8;
              v560 = GetProcessHeap();
              v561 = HeapAlloc(v560, 8u, 8uLL);
              v8 = 0LL;
              if ( v561 )
              {
                *((_QWORD *)v555 + 5) = v561;
                v498 = v555;
                *v561 = qword_1800C0560;
                v499 = 0;
                v555 = 0LL;
              }
              else
              {
LABEL_742:
                v499 = -1073741801;
              }
              if ( v555 )
              {
                v562 = (void *)*((_QWORD *)v555 + 1);
                if ( v562 )
                {
                  v563 = GetProcessHeap();
                  HeapFree(v563, 0, v562);
                  *((_QWORD *)v555 + 1) = 0LL;
                }
                v564 = (void *)*((_QWORD *)v555 + 3);
                if ( v564 )
                {
                  v565 = GetProcessHeap();
                  HeapFree(v565, 0, v564);
                  *((_QWORD *)v555 + 3) = 0LL;
                }
                v566 = (void *)*((_QWORD *)v555 + 5);
                if ( v566 )
                {
                  v567 = GetProcessHeap();
                  HeapFree(v567, 0, v566);
                  *((_QWORD *)v555 + 5) = 0LL;
                }
                v568 = GetProcessHeap();
                HeapFree(v568, 0, v555);
                v8 = 0LL;
              }
            }
            else
            {
              v499 = -1073741801;
            }
            v487 = (unsigned __int8 *)v811;
            if ( v499 >= 0 )
            {
              v843 = v498;
              v498 = 0LL;
            }
          }
          else
          {
            v499 = -1073741823;
          }
          v569 = v859;
          if ( v859 )
          {
            v570 = GetProcessHeap();
            HeapFree(v570, 0, v569);
            v8 = 0LL;
            v859 = 0LL;
          }
          if ( v498 )
          {
            v571 = (void *)v498[1];
            if ( v571 )
            {
              v572 = GetProcessHeap();
              HeapFree(v572, 0, v571);
              v498[1] = 0LL;
            }
            v573 = (void *)v498[3];
            if ( v573 )
            {
              v574 = GetProcessHeap();
              HeapFree(v574, 0, v573);
              v498[3] = 0LL;
            }
            v575 = (void *)v498[5];
            if ( v575 )
            {
              v576 = GetProcessHeap();
              HeapFree(v576, 0, v575);
              v498[5] = 0LL;
            }
            v577 = GetProcessHeap();
            HeapFree(v577, 0, v498);
            v8 = 0LL;
          }
        }
        else
        {
          v499 = -1073741811;
        }
        v497 = v499 | 0x10000000;
        if ( v497 < 0 )
          goto LABEL_985;
        v578 = (const void **)v843;
        HIDWORD(dwBytes) = 4;
        v579 = RtlUIntAdd(4u, *(_DWORD *)v843, (int *)&dwBytes + 1);
        if ( v579 < 0
          || (v579 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v579 < 0)
          || (v579 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v578 + 4), (int *)&dwBytes + 1), v579 < 0)
          || (v579 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v579 < 0) )
        {
          v580 = v822;
        }
        else
        {
          v579 = RtlUIntAdd(HIDWORD(dwBytes), *((_DWORD *)v578 + 8), (int *)&dwBytes + 1);
          v580 = v822;
          if ( v579 >= 0 )
            v580 = HIDWORD(dwBytes);
          v822 = v580;
        }
        if ( v579 >= 0 )
        {
          v581 = v580;
          v582 = GetProcessHeap();
          v583 = (wchar_t *)HeapAlloc(v582, 8u, v581);
          v8 = 0LL;
          v584 = v583;
          if ( v583 )
          {
            *(_DWORD *)v583 = *(_DWORD *)v578;
            v782 = v583;
            v579 = RtlULongLongAdd((unsigned __int64)v583, 4LL, (__int64 *)&v782);
            if ( v579 >= 0 )
            {
              memcpy_0(v782, v578[1], *(unsigned int *)v578);
              v585 = RtlULongLongAdd((unsigned __int64)v782, *(unsigned int *)v578, (__int64 *)&v782);
              v8 = 0LL;
              v579 = v585;
              if ( v585 >= 0 )
              {
                v586 = v782;
                *(_DWORD *)v782 = *((_DWORD *)v578 + 4);
                v579 = RtlULongLongAdd((unsigned __int64)v586, 4LL, (__int64 *)&v782);
                if ( v579 >= 0 )
                {
                  memcpy_0(v782, v578[3], *((unsigned int *)v578 + 4));
                  v587 = RtlULongLongAdd((unsigned __int64)v782, *((unsigned int *)v578 + 4), (__int64 *)&v782);
                  v8 = 0LL;
                  v579 = v587;
                  if ( v587 >= 0 )
                  {
                    v588 = v782;
                    *(_DWORD *)v782 = *((_DWORD *)v578 + 8);
                    v579 = RtlULongLongAdd((unsigned __int64)v588, 4LL, (__int64 *)&v782);
                    if ( v579 >= 0 )
                    {
                      memcpy_0(v782, v578[5], *((unsigned int *)v578 + 8));
                      v589 = RtlULongLongAdd((unsigned __int64)v782, *((unsigned int *)v578 + 8), (__int64 *)&v782);
                      v8 = 0LL;
                      v579 = v589;
                      if ( v589 >= 0 )
                      {
                        psza = v584;
                        v584 = 0LL;
                        LODWORD(m) = v822;
                      }
                    }
                  }
                }
              }
            }
            if ( v584 )
            {
              v590 = GetProcessHeap();
              HeapFree(v590, 0, v584);
              v8 = 0LL;
            }
          }
          else
          {
            v579 = -1073741801;
          }
        }
        v497 = v579 | 0x10000000;
        if ( v497 < 0 )
          goto LABEL_985;
        v591 = (int)v8;
        v904 = v8;
        v866 = (int)v8;
        v592 = (int)v8;
        v905 = v8;
        v867 = (int)v8;
        v823 = 8;
        v593 = RtlUIntAdd(8u, (int)v779, (int *)&v823);
        v497 = v593 | 0x10000000;
        if ( v593 >= 0 )
        {
          v595 = (v823 + 7) & 0xFFFFFFF8;
          if ( v595 >= v823 )
          {
            v837 = (v823 + 7) & 0xFFFFFFF8;
            v596 = RtlUIntAdd(v595, v594, (int *)&v837);
            v597 = v838;
            v497 = v596;
            if ( v596 >= 0 )
              v597 = v837;
            v838 = v597;
          }
          else
          {
            v497 = -1073741675;
          }
          if ( v497 < 0 )
            goto LABEL_985;
          if ( v790 == v8 || (unsigned int)v789 <= 1 )
          {
            v497 = -1073741811;
          }
          else
          {
            v598 = (unsigned int *)v790;
            v779 = v790;
            do
            {
              v599 = *v598;
              v497 = RtlULongLongAdd((unsigned __int64)v598, 4LL, (__int64 *)&v779);
              if ( v497 < 0 )
                goto LABEL_804;
              v497 = RtlULongLongAdd((unsigned __int64)v779, v599, (__int64 *)&v779);
              if ( v497 < 0 )
                goto LABEL_804;
              v598 = (unsigned int *)v779;
            }
            while ( v600 == -1 );
            v497 = RtlULongLongAdd((unsigned __int64)v779, 4LL, (__int64 *)&v779);
            if ( v497 < 0 )
            {
LABEL_804:
              v8 = 0LL;
              goto LABEL_805;
            }
            v602 = (unsigned __int8 *)v779;
            v203 = v601 == 0;
            v591 = v601;
            v8 = 0LL;
            if ( v203 )
              v602 = 0LL;
            v866 = v591;
            v904 = v602;
LABEL_805:
            if ( v497 >= 0 )
            {
              if ( (unsigned int)v789 > 2 )
              {
                v607 = (unsigned int *)v790;
                v779 = v790;
                do
                {
                  v608 = *v607;
                  v497 = RtlULongLongAdd((unsigned __int64)v607, 4LL, (__int64 *)&v779);
                  if ( v497 < 0 )
                    goto LABEL_819;
                  v497 = RtlULongLongAdd((unsigned __int64)v779, v608, (__int64 *)&v779);
                  if ( v497 < 0 )
                    goto LABEL_819;
                  v607 = (unsigned int *)v779;
                }
                while ( (unsigned int)(v610 + 1) < 2 );
                v497 = RtlULongLongAdd((unsigned __int64)v779, 4LL, (__int64 *)&v779);
                if ( v497 < 0 )
                {
LABEL_819:
                  v8 = 0LL;
                  goto LABEL_820;
                }
                v612 = (unsigned __int8 *)v779;
                v592 = v611;
                v867 = v611;
                if ( !v611 )
                  v612 = 0LL;
                v8 = 0LL;
                v905 = v612;
LABEL_820:
                if ( v497 < 0 )
                  goto LABEL_985;
                HIDWORD(dwBytes) = 4;
                v497 = RtlUIntAdd(4u, v609, (int *)&dwBytes + 1);
                if ( v497 < 0
                  || (v497 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v497 < 0)
                  || (v497 = RtlUIntAdd(HIDWORD(dwBytes), v591, (int *)&dwBytes + 1), v497 < 0)
                  || (v497 = RtlUIntAdd(HIDWORD(dwBytes), 4, (int *)&dwBytes + 1), v497 < 0) )
                {
                  v613 = v839;
                }
                else
                {
                  v497 = RtlUIntAdd(HIDWORD(dwBytes), v592, (int *)&dwBytes + 1);
                  v613 = v839;
                  if ( v497 >= 0 )
                    v613 = HIDWORD(dwBytes);
                  v839 = v613;
                }
                if ( v497 < 0 )
                  goto LABEL_985;
                if ( v613 > 0x400000 )
                {
                  v497 = -2147418113;
                  goto LABEL_985;
                }
                v793 = v613;
              }
              else
              {
                v497 = -1073741811;
              }
            }
          }
        }
        if ( v497 < 0 )
          goto LABEL_985;
        v603 = v793;
        v604 = (int)v8;
        v605 = GetProcessHeap();
        v606 = (unsigned __int8 *)HeapAlloc(v605, 8u, v603);
        v8 = 0LL;
        if ( v606 )
        {
          v487 = v606;
          v811 = v606;
        }
        else
        {
          v604 = -1073741801;
        }
        v497 = v604 | 0x10000000;
        if ( v497 < 0 )
          goto LABEL_985;
        if ( psza && v487 )
        {
          v911[0] = psza;
          v912 = (int)m;
          v913 = v793;
          v911[1] = v487;
          v914 = 0;
          if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
            && (v614 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
          {
            v615 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v614)(134LL, v911, 32LL, 0LL);
            v616 = v793;
            v497 = v615 | 0x10000000;
            if ( v615 >= 0 )
              v616 = v913;
            v793 = v616;
          }
          else
          {
            v617 = GetLastError();
            v497 = v617;
            if ( v617 > 0 )
              v497 = (unsigned __int16)v617 | 0x80070000;
            if ( v497 >= 0 )
              v497 = -2147467259;
            v616 = v793;
          }
          v8 = 0LL;
          if ( v497 == -805306333 )
          {
            v497 = -2147024774;
            goto LABEL_985;
          }
          if ( v497 < 0 )
            goto LABEL_985;
          HIDWORD(dwBytes) = 0;
          v618 = 0LL;
          v779 = v487;
          if ( v616 < 4 )
          {
            v619 = -1073741762;
            goto LABEL_907;
          }
          LODWORD(m) = *(_DWORD *)v487;
          v619 = RtlULongLongAdd((unsigned __int64)v487, 4LL, (__int64 *)&v779);
          if ( v619 < 0 )
            goto LABEL_906;
          v619 = RtlUIntAdd(0, v620, (int *)&dwBytes + 1);
          if ( v619 < 0 )
            goto LABEL_906;
          if ( v621 - HIDWORD(dwBytes) < (unsigned int)v622 )
            goto LABEL_873;
          v782 = v779;
          v776 = v622;
          v619 = RtlULongLongAdd((unsigned __int64)v779, (unsigned int)v622, (__int64 *)&v779);
          if ( v619 < 0 )
            goto LABEL_906;
          v619 = RtlUIntAdd(HIDWORD(dwBytes), v623, (int *)&dwBytes + 1);
          if ( v619 < 0 )
            goto LABEL_906;
          if ( (unsigned int)(v624 - HIDWORD(dwBytes)) < 4 )
            goto LABEL_873;
          v625 = *(unsigned int *)v779;
          v619 = RtlULongLongAdd((unsigned __int64)v779, 4LL, (__int64 *)&v779);
          if ( v619 < 0 )
            goto LABEL_906;
          v619 = RtlUIntAdd(HIDWORD(dwBytes), v626, (int *)&dwBytes + 1);
          if ( v619 < 0 )
            goto LABEL_906;
          if ( v627 - HIDWORD(dwBytes) < (unsigned int)v625 )
            goto LABEL_873;
          pcchLength = (size_t)v779;
          v619 = RtlULongLongAdd((unsigned __int64)v779, (unsigned int)v625, (__int64 *)&v779);
          if ( v619 < 0 )
            goto LABEL_906;
          v619 = RtlUIntAdd(HIDWORD(dwBytes), v628, (int *)&dwBytes + 1);
          if ( v619 < 0 )
            goto LABEL_906;
          if ( (unsigned int)(v629 - HIDWORD(dwBytes)) < 4 )
            goto LABEL_873;
          v630 = *(unsigned int *)v779;
          v619 = RtlULongLongAdd((unsigned __int64)v779, 4LL, (__int64 *)&v779);
          if ( v619 < 0 )
            goto LABEL_906;
          v619 = RtlUIntAdd(HIDWORD(dwBytes), v631, (int *)&dwBytes + 1);
          if ( v619 < 0 )
            goto LABEL_906;
          if ( v632 - HIDWORD(dwBytes) < (unsigned int)v630 )
            goto LABEL_873;
          v619 = RtlUIntAdd(HIDWORD(dwBytes), v630, (int *)&dwBytes + 1);
          if ( v619 < 0 )
            goto LABEL_906;
          if ( v633 != HIDWORD(dwBytes) || (unsigned int)(v634 + v630 + v625) + 12LL != v633 )
          {
LABEL_873:
            v619 = -1073741762;
            goto LABEL_906;
          }
          v635 = GetProcessHeap();
          v636 = HeapAlloc(v635, 8u, 0x30uLL);
          v8 = 0LL;
          v637 = v636;
          if ( !v636 )
          {
            v619 = -1073741801;
LABEL_896:
            if ( v619 >= 0 )
            {
              v820 = v618;
              v618 = 0LL;
            }
            if ( !v618 )
            {
LABEL_907:
              v497 = v619 | 0x10000000;
              if ( v497 < 0 )
                goto LABEL_985;
              v659 = 0LL;
              v828 = 0LL;
              v660 = 0;
              v872 = 0LL;
              LODWORD(m) = 0;
              if ( !v820 || (v661 = *((_QWORD *)v820 + 1), (pcchLength = v661) == 0) || !*(_DWORD *)v820 )
              {
                v660 = -1073741811;
                goto LABEL_949;
              }
              v662 = *(unsigned int *)v820;
              LODWORD(v779) = 0;
              if ( !v662 )
                goto LABEL_946;
              v663 = v662 - 8;
              v803 = (void *)v663;
              v664 = MemoryAlloc(v663);
              v8 = 0LL;
              v797 = (SIZE_T)v664;
              v665 = v664;
              if ( !v664 )
              {
                v659 = v828;
                goto LABEL_946;
              }
              v666 = 0;
              LOBYTE(v775) = 0;
              v667 = (unsigned __int8 *)v661;
              v668 = v665;
              v669 = 0;
              v670 = v663 & 7;
              if ( (v663 & 7) != 0 )
              {
                v786 = 0;
                v781 = -1;
                v671 = 0;
                v796 = 0;
                LODWORD(v782) = 0;
                v672 = 56;
                do
                {
                  v673 = *v667;
                  if ( (int)v8 >= 4 )
                    v671 |= v673 << v672;
                  else
                    v669 |= v673 << (v672 - 32);
                  LODWORD(v8) = (_DWORD)v8 + 1;
                  v672 -= 8;
                  ++v667;
                }
                while ( (int)v8 < v670 );
                v10 = dwBytes;
                v796 = v671;
                LODWORD(v782) = v669;
                v669 ^= 0x92F65A5u;
                v674 = v671 ^ 0x699A899C;
                v8 = 0LL;
                v786 = v669;
                v781 = v674;
                v675 = 0;
                if ( (v663 & 7) != 0 )
                {
                  do
                  {
                    if ( v675 >= 4 )
                    {
                      v674 = __ROL4__(v674, 8);
                      *v668 = v674;
                    }
                    else
                    {
                      v669 = __ROL4__(v669, 8);
                      *v668 = v669;
                    }
                    ++v675;
                    ++v668;
                  }
                  while ( v675 < v670 );
                  v669 = v786;
                  v674 = v781;
                }
                v676 = v670 - 4;
                if ( v670 - 4 > 0 )
                {
                  v677 = v674 >> (8 * (4 - v676)) << (8 * (4 - v676));
                  v781 = v677;
                  goto LABEL_932;
                }
                v781 = 0;
                v677 = 0;
                if ( v676 >= 0 )
                {
LABEL_932:
                  v678 = v663 >> 3;
                  if ( v663 >> 3 )
                  {
                    v679 = (int)v782;
                    v680 = v668 + 7;
                    v681 = v796;
                    v682 = v667 + 2;
                    v683 = v678;
                    do
                    {
                      v684 = *(v682 - 1) | (*(v682 - 2) << 8);
                      v685 = v682[2] << 8;
                      v686 = *v682;
                      v682 += 8;
                      v687 = *(v682 - 7) | ((v686 | (v684 << 8)) << 8);
                      v688 = v687 ^ v669;
                      v689 = *(v682 - 3) | ((*(v682 - 4) | ((*(v682 - 5) | v685) << 8)) << 8);
                      v690 = v688 ^ v689 ^ v677 ^ 0xAC987321;
                      v691 = (__ROL4__(v690, 10) + 4991 * __ROL4__(v690 + 1419157410, 5)) ^ v688;
                      v692 = (43881 * __ROR4__(v691 + 133239679, 9) - __ROL4__(v691, 2)) ^ v690;
                      v693 = (24670 * (v692 - 4991) - (v692 >> 13)) ^ v691;
                      v694 = (2033 * __ROL4__(v693 ^ 0xAB69, 6) - __ROL4__(v693, 2)) ^ v692;
                      v695 = (133239679 - (v694 ^ 0xAB69605E)) ^ v693;
                      v696 = (43881 * (v695 ^ 0x137F)) ^ __ROR4__(v695, 6) ^ v694;
                      v697 = (__ROL4__(v696, 2) + 24670 * __ROR4__(v696 + 133239679, 15)) ^ v695;
                      v698 = (2033 * __ROR4__(v697 + 1419157410, 14) - __ROL4__(v697, 8)) ^ v696;
                      v699 = __ROR4__(v698, 10) ^ (4991 * __ROR4__(v698 ^ 0xAB69605E, 12)) ^ v697;
                      v700 = (v699 >> 10) ^ (43881 * (v699 ^ 0x7F1)) ^ v698;
                      v701 = (2033 * (__ROR4__(~v700, 5) + 24670)) ^ v699;
                      v702 = v700 ^ (v701 - 2033) ^ 0xAB69605E;
                      v703 = ((v702 >> 2) + 4991 * __ROL4__(v700 ^ (v701 - 2033) ^ 0xAB6967AF, 2)) ^ v701;
                      v704 = (__ROL4__(v703, 7) + 43881 * __ROR4__(v703 - 133239679, 6)) ^ v702;
                      v705 = (24670 * (v704 ^ 0x137F) + __ROR4__(v704, 9)) ^ v703;
                      v706 = (__ROL4__(v705, 7) + 2033 * __ROL4__(v705 ^ 0xAB69, 5)) ^ v704;
                      v707 = v705 ^ v706 ^ 0xAC987321;
                      v708 = (4991 * (__ROR4__(v707, 3) - 43881)) ^ v706;
                      v709 = (24670 * __ROR4__(v708 - 133239679, 1) - __ROR4__(v708, 6)) ^ v707;
                      v710 = (__ROL4__(v709, 14) + 2033 * __ROL4__(v709 - 1419157410, 3)) ^ v708;
                      v711 = (4991 * __ROL4__(v710 - 1419157410, 15) - __ROR4__(v710, 14)) ^ v709;
                      v712 = (v711 >> 3) ^ (43881 * (v711 ^ 0x605E)) ^ v710;
                      v781 = v681 ^ v712;
                      v681 = v689;
                      v713 = v679 ^ __ROL4__(v712, 2) ^ (24670 * __ROL4__(v712 ^ 0x7F1137F, 4));
                      v679 = v687;
                      v786 = v713 ^ v711;
                      *(v680 - 4) = v713 ^ v711;
                      v786 = __ROR4__(v786, 8);
                      *v680 = v781;
                      v680 += 8;
                      v781 = __ROR4__(v781, 8);
                      *(v680 - 13) = v786;
                      v786 = __ROR4__(v786, 8);
                      *(v680 - 9) = v781;
                      v781 = __ROR4__(v781, 8);
                      *(v680 - 14) = v786;
                      v786 = __ROR4__(v786, 8);
                      *(v680 - 10) = v781;
                      v781 = __ROR4__(v781, 8);
                      *(v680 - 15) = v786;
                      *(v680 - 11) = v781;
                      v669 = __ROR4__(v786, 8);
                      v677 = __ROR4__(v781, 8);
                      v786 = v669;
                      v781 = v677;
                      --v683;
                    }
                    while ( v683 );
                    v666 = v775;
                    v8 = 0LL;
                    v10 = dwBytes;
                    v660 = (int)m;
                    v665 = (_BYTE *)v797;
                    v663 = (unsigned __int64)v803;
                  }
                  for ( k = 0LL; k < v663; ++k )
                    v666 ^= v665[k];
                  if ( v666 == *(_QWORD *)(pcchLength + v663) )
                  {
                    v715 = (int)v779;
                    v659 = v665;
                    v828 = v665;
                    v665 = 0LL;
                    v872 = v663;
                  }
                  else
                  {
                    v659 = v828;
                    v715 = -1073425151;
                  }
                  if ( v665 )
                  {
                    MemoryFree(v665);
                    v659 = v828;
                    v8 = 0LL;
                  }
                  if ( v715 >= 0 )
                  {
                    v819 = v659;
                    v659 = 0LL;
                    v828 = 0LL;
                    v807 = v872;
                    goto LABEL_947;
                  }
LABEL_946:
                  v660 = -1073741823;
LABEL_947:
                  if ( v659 )
                  {
                    v716 = GetProcessHeap();
                    HeapFree(v716, 0, v659);
                    v8 = 0LL;
                    v828 = 0LL;
                  }
LABEL_949:
                  v497 = v660 | 0x10000000;
                  if ( v497 < 0 )
                    goto LABEL_985;
                  v717 = v819;
                  HIDWORD(dwBytes) = 0;
                  v776 = (size_t)v819;
                  if ( v807 >= 4 )
                  {
                    LODWORD(v779) = *(_DWORD *)v819;
                    v719 = RtlULongLongAdd((unsigned __int64)v819, 4LL, (__int64 *)&v776);
                    if ( v719 < 0 )
                      goto LABEL_984;
                    v719 = RtlUIntAdd(0, v718, (int *)&dwBytes + 1);
                    if ( v719 < 0 )
                      goto LABEL_984;
                    if ( v807 - HIDWORD(dwBytes) >= v721 )
                    {
                      v722 = *(unsigned int *)v776;
                      v719 = RtlULongLongAdd(v776, v720, (__int64 *)&v776);
                      if ( v719 < 0 )
                        goto LABEL_984;
                      v719 = RtlUIntAdd(HIDWORD(dwBytes), v723, (int *)&dwBytes + 1);
                      if ( v719 < 0 )
                        goto LABEL_984;
                      if ( v807 - HIDWORD(dwBytes) >= (unsigned int)v722 )
                      {
                        v719 = RtlUIntAdd(HIDWORD(dwBytes), v722, (int *)&dwBytes + 1);
                        if ( v719 < 0 )
                          goto LABEL_984;
                        v725 = (const void *)v776;
                        if ( (unsigned __int64)v717 + v807 >= v776 + v722
                          && (unsigned __int64)v717 + v807 - v776 - v722 < 8 )
                        {
                          v803 = v724;
                          v726 = v724;
                          v796 = (int)v724;
                          v719 = (int)v724;
                          if ( !v776 )
                          {
LABEL_973:
                            if ( (_DWORD)v722 )
                            {
                              v733 = GetProcessHeap();
                              v726 = HeapAlloc(v733, 8u, v722);
                              if ( !v726 )
                              {
                                v719 = -1073741801;
                                goto LABEL_981;
                              }
                              v719 = 0;
                            }
                            if ( v725 )
                              memcpy_0(v726, v725, v722);
                            v840 = __PAIR64__(v722, v796);
                            v841 = v726;
LABEL_981:
                            if ( v719 < 0 || (_DWORD)v779 == (_DWORD)v840 )
                              goto LABEL_984;
                            goto LABEL_983;
                          }
                          v719 = RtlULongLongAdd(v776, (unsigned int)v722, (__int64 *)&v798);
                          if ( v719 < 0 )
                            goto LABEL_981;
                          v728 = v798;
                          if ( (unsigned __int64)v725 < v798 )
                          {
                            do
                            {
                              v719 = RtlULongLongAdd(v727, 4LL, (__int64 *)&v798);
                              if ( v719 < 0 )
                                goto LABEL_984;
                              if ( v798 > v728 )
                                goto LABEL_976;
                              v730 = RtlUIntAdd(4u, *v729, (int *)&m);
                              v719 = v730;
                              if ( v730 >= 0 )
                                v732 = (unsigned int)m;
                              v844 = v732;
                              if ( v730 < 0 )
                                goto LABEL_984;
                              v719 = RtlULongLongAdd(v731, v732, (__int64 *)&v797);
                              if ( v719 < 0 )
                                goto LABEL_984;
                              v727 = v797;
                              if ( v797 > v728 )
                                goto LABEL_976;
                              ++v796;
                            }
                            while ( v797 < v728 );
                          }
                          if ( v727 == v728 )
                          {
                            v726 = v803;
                            goto LABEL_973;
                          }
LABEL_976:
                          v719 = -1073741811;
LABEL_984:
                          v497 = v719 | 0x10000000;
                          v8 = 0LL;
                          goto LABEL_985;
                        }
                      }
                    }
                  }
LABEL_983:
                  v719 = -1073741762;
                  goto LABEL_984;
                }
                v669 = v669 >> (-8 * v676) << (-8 * v676);
              }
              else
              {
                LODWORD(v782) = 0;
                v677 = 0;
                v781 = 0;
              }
              v786 = v669;
              goto LABEL_932;
            }
            v652 = (void *)v618[1];
            if ( v652 )
            {
              v653 = GetProcessHeap();
              HeapFree(v653, 0, v652);
              v618[1] = 0LL;
            }
            v654 = (void *)v618[3];
            if ( v654 )
            {
              v655 = GetProcessHeap();
              HeapFree(v655, 0, v654);
              v618[3] = 0LL;
            }
            v656 = (void *)v618[5];
            if ( v656 )
            {
              v657 = GetProcessHeap();
              HeapFree(v657, 0, v656);
              v618[5] = 0LL;
            }
            v658 = GetProcessHeap();
            HeapFree(v658, 0, v618);
LABEL_906:
            v8 = 0LL;
            goto LABEL_907;
          }
          v619 = 0;
          if ( v782 )
          {
            *(_DWORD *)v636 = (_DWORD)m;
            v638 = GetProcessHeap();
            v639 = HeapAlloc(v638, 8u, v776);
            v8 = 0LL;
            if ( !v639 )
              goto LABEL_877;
            v637[1] = v639;
            memcpy_0(v639, v782, v776);
            v8 = 0LL;
          }
          else
          {
            *(_DWORD *)v636 = 0;
            v636[1] = 0LL;
          }
          if ( pcchLength )
          {
            *((_DWORD *)v637 + 4) = v625;
            v640 = GetProcessHeap();
            v641 = HeapAlloc(v640, 8u, v625);
            v8 = 0LL;
            if ( !v641 )
              goto LABEL_877;
            v637[3] = v641;
            v619 = 0;
            memcpy_0(v641, (const void *)pcchLength, v625);
            v8 = 0LL;
          }
          else
          {
            *((_DWORD *)v637 + 4) = 0;
            v637[3] = 0LL;
          }
          v642 = v779;
          if ( !v779 )
          {
            *((_DWORD *)v637 + 8) = 0;
            v637[5] = 0LL;
            goto LABEL_887;
          }
          *((_DWORD *)v637 + 8) = v630;
          v643 = GetProcessHeap();
          v644 = HeapAlloc(v643, 8u, v630);
          v8 = 0LL;
          if ( v644 )
          {
            v637[5] = v644;
            v619 = 0;
            memcpy_0(v644, v642, v630);
            v8 = 0LL;
LABEL_887:
            v618 = v637;
            v637 = 0LL;
LABEL_888:
            if ( v637 )
            {
              v645 = (void *)v637[1];
              if ( v645 )
              {
                v646 = GetProcessHeap();
                HeapFree(v646, 0, v645);
                v637[1] = 0LL;
              }
              v647 = (void *)v637[3];
              if ( v647 )
              {
                v648 = GetProcessHeap();
                HeapFree(v648, 0, v647);
                v637[3] = 0LL;
              }
              v649 = (void *)v637[5];
              if ( v649 )
              {
                v650 = GetProcessHeap();
                HeapFree(v650, 0, v649);
                v637[5] = 0LL;
              }
              v651 = GetProcessHeap();
              HeapFree(v651, 0, v637);
              v8 = 0LL;
            }
            goto LABEL_896;
          }
LABEL_877:
          v619 = -1073741801;
          goto LABEL_888;
        }
        v497 = -2147024809;
LABEL_985:
        v734 = v804;
        if ( v804 )
        {
          v735 = GetProcessHeap();
          HeapFree(v735, 0, v734);
          v8 = 0LL;
        }
        v736 = v843;
        if ( v843 )
        {
          v737 = (void *)*((_QWORD *)v843 + 1);
          if ( v737 )
          {
            v738 = GetProcessHeap();
            HeapFree(v738, 0, v737);
            v736[1] = 0LL;
          }
          v739 = (void *)v736[3];
          if ( v739 )
          {
            v740 = GetProcessHeap();
            HeapFree(v740, 0, v739);
            v736[3] = 0LL;
          }
          v741 = (void *)v736[5];
          if ( v741 )
          {
            v742 = GetProcessHeap();
            HeapFree(v742, 0, v741);
            v736[5] = 0LL;
          }
          v743 = GetProcessHeap();
          HeapFree(v743, 0, v736);
          v8 = 0LL;
          v843 = 0LL;
        }
        v744 = (wchar_t *)psza;
        if ( psza )
        {
          v745 = GetProcessHeap();
          HeapFree(v745, 0, v744);
          v8 = 0LL;
        }
        v746 = v811;
        if ( v811 )
        {
          v747 = GetProcessHeap();
          HeapFree(v747, 0, v746);
          v8 = 0LL;
        }
        v748 = v820;
        if ( v820 )
        {
          v749 = (void *)*((_QWORD *)v820 + 1);
          if ( v749 )
          {
            v750 = GetProcessHeap();
            HeapFree(v750, 0, v749);
            v748[1] = 0LL;
          }
          v751 = (void *)v748[3];
          if ( v751 )
          {
            v752 = GetProcessHeap();
            HeapFree(v752, 0, v751);
            v748[3] = 0LL;
          }
          v753 = (void *)v748[5];
          if ( v753 )
          {
            v754 = GetProcessHeap();
            HeapFree(v754, 0, v753);
            v748[5] = 0LL;
          }
          v755 = GetProcessHeap();
          HeapFree(v755, 0, v748);
          v8 = 0LL;
        }
        v756 = v819;
        if ( v819 )
        {
          v757 = GetProcessHeap();
          HeapFree(v757, 0, v756);
          v8 = 0LL;
        }
        if ( v497 >= 0 )
        {
          if ( (_DWORD)v840 )
          {
            v758 = (unsigned int *)v841;
            if ( v841 )
            {
              pcchLength = (size_t)v841;
              if ( (int)RtlULongLongAdd((unsigned __int64)v841, 4LL, (__int64 *)&pcchLength) < 0 )
                goto LABEL_1038;
              v761 = (int *)pcchLength;
              v879 = v760;
              if ( !v760 )
                v761 = 0LL;
              v920 = v761;
              if ( v760 != 4 )
              {
LABEL_1038:
                v439 = v773;
                v8 = 0LL;
                goto LABEL_1029;
              }
              v812 = *v761;
              v8 = 0LL;
              if ( v812 >= 0 && v759 > 1 )
              {
                for ( m = v758;
                      (int)RtlULongLongAdd((unsigned __int64)v758, 4LL, (__int64 *)&m) >= 0
                   && (int)RtlULongLongAdd((unsigned __int64)m, *v758, (__int64 *)&m) >= 0;
                      v758 = (unsigned int *)m )
                {
                  if ( v762 != -1 )
                  {
                    if ( (int)RtlULongLongAdd((unsigned __int64)m, 4LL, (__int64 *)&m) >= 0 )
                    {
                      v764 = m;
                      v907 = v763;
                      if ( !v763 )
                        v764 = v8;
                      v919 = v764;
                      if ( v763 == 8 )
                        v921 = *v764;
                    }
                    break;
                  }
                }
              }
            }
          }
        }
        v439 = v773;
LABEL_1029:
        v440 = v774;
        goto LABEL_1030;
      }
      v476 = (int *)v790;
      psza = (STRSAFE_PCNZWCH)v790;
      v477 = 0;
      if ( v458 )
      {
        while ( (int)RtlUIntAdd(v459, *v476, (int *)&m) >= 0 )
        {
          v864 = (int)m;
          v479 = RtlULongLongAdd(v478, (unsigned int)m, (__int64 *)&psza);
          v8 = 0LL;
          if ( v479 < 0 )
            goto LABEL_679;
          v476 = (int *)psza;
          if ( ++v477 >= v480 )
            goto LABEL_691;
        }
        goto LABEL_678;
      }
LABEL_691:
      if ( (int)RtlULongLongAdd((unsigned __int64)v476, v459, (__int64 *)&v799) >= 0
        && v481 + 3 <= (_DWORD *)((char *)v790 + HIDWORD(v789)) )
      {
        v482 = v799;
        *v481 = 8;
        *v482 = v897;
        LODWORD(v789) = v789 + 1;
        goto LABEL_694;
      }
LABEL_1040:
      v439 = v773;
      goto LABEL_1041;
    }
LABEL_662:
    v439 = v443;
    goto LABEL_680;
  }
  if ( v790 != v8 )
  {
    v460 = (int *)v790;
    psza = (STRSAFE_PCNZWCH)v790;
    v461 = 0;
    if ( v458 )
    {
      while ( (int)RtlUIntAdd(4u, *v460, (int *)&m) >= 0 )
      {
        v862 = (int)m;
        v463 = RtlULongLongAdd(v462, (unsigned int)m, (__int64 *)&psza);
        v8 = 0LL;
        if ( v463 < 0 )
          goto LABEL_662;
        v460 = (int *)psza;
        if ( ++v461 >= v464 )
        {
          v455 = 4LL;
          goto LABEL_658;
        }
      }
      goto LABEL_678;
    }
LABEL_658:
    v465 = RtlULongLongAdd((unsigned __int64)v460, v455, (__int64 *)&v799);
    if ( v465 < 0 )
    {
      v8 = 0LL;
      goto LABEL_662;
    }
    if ( (char *)v466 + v444 + 4 > (char *)v790 + HIDWORD(v789) )
    {
      v439 = v443;
LABEL_1041:
      v440 = v447;
      v8 = 0LL;
      goto LABEL_1030;
    }
    v467 = v799;
    *v466 = v444;
    memcpy_0(v467, v443, v444);
    v458 = v789 + 1;
    LODWORD(v789) = v789 + 1;
    v8 = 0LL;
    goto LABEL_664;
  }
  v459 = (unsigned int)((_DWORD)v8 + 4);
  if ( (int)RtlUIntAdd((int)v8 + 4, v444, (int *)&m) >= 0 )
  {
    v862 = (int)m;
    if ( (int)RtlUIntAdd(HIDWORD(v789), (int)m, (int *)&v789 + 1) >= 0 )
    {
      v458 = v789 + 1;
      LODWORD(v789) = v789 + 1;
      goto LABEL_666;
    }
  }
LABEL_679:
  v439 = v773;
LABEL_680:
  v440 = v447;
LABEL_1030:
  v789 = 0LL;
  v765 = v790;
  if ( v790 )
  {
    v766 = GetProcessHeap();
    HeapFree(v766, 0, v765);
    v8 = 0LL;
    v790 = 0LL;
  }
  v840 = 0LL;
  v767 = v841;
  if ( v841 )
  {
    v768 = GetProcessHeap();
    HeapFree(v768, 0, v767);
    v8 = 0LL;
    v841 = 0LL;
  }
  if ( v439 )
  {
    v769 = GetProcessHeap();
    HeapFree(v769, 0, v439);
    v8 = 0LL;
  }
  if ( v440 )
  {
    v770 = GetProcessHeap();
    HeapFree(v770, 0, v440);
    v8 = 0LL;
  }
LABEL_453:
  v377 = v832;
  v878 = v831;
  v845 = (int *)v873;
  v811 = v8;
LABEL_454:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v811);
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
        goto LABEL_460;
    }
    v806 = v10;
    goto LABEL_457;
  }
  if ( v377 != 4 )
  {
LABEL_460:
    v806 = -1073418210;
    goto LABEL_457;
  }
  v833 = *v845;
LABEL_457:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v845);
  if ( v806 < 0 || !v833 )
    return 0;
  return v2;
}
