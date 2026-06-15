/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18003CFAC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ@Z @ 0x180025F94 (-TraceResult@AtmosCheck@@AEAAXJ@Z.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180026618 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180026630 (-IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$SP_HLOCAL@E@@QEAA@XZ @ 0x18002AA7C (--1-$SP_HLOCAL@E@@QEAA@XZ.c)
 *     ??$GetPtrAs@K@?$SP@EV?$SP_HLOCAL@E@@@@QEBAPEAKXZ @ 0x18002AA84 (--$GetPtrAs@K@-$SP@EV-$SP_HLOCAL@E@@@@QEBAPEAKXZ.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x18002AA88 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?IsNull@?$SP@EV?$SP_HLOCAL@E@@@@SA_NPEAE@Z @ 0x18002AAC8 (-IsNull@-$SP@EV-$SP_HLOCAL@E@@@@SA_NPEAE@Z.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x18002F484 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ??1DolbyOEMLicenseCheck@@QEAA@XZ @ 0x18002F538 (--1DolbyOEMLicenseCheck@@QEAA@XZ.c)
 *     ??0DolbyOEMLicenseCheck@@QEAA@XZ @ 0x18002F564 (--0DolbyOEMLicenseCheck@@QEAA@XZ.c)
 *     RtlULongLongAdd @ 0x180045318 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180045334 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x180045350 (StringCchLengthW.c)
 *     WARBIRD::GetFunctionAddress @ 0x1800456C0 (WARBIRD--GetFunctionAddress.c)
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180045840 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x180057D54 (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 *     _alloca_probe @ 0x180057F30 (_alloca_probe.c)
 *     wcscmp_0 @ 0x180057F8E (wcscmp_0.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??0?$SP_MEM@PEAG@@QEAA@XZ @ 0x18007C1A8 (--0-$SP_MEM@PEAG@@QEAA@XZ.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x1800D5910 (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ??1?$SP_MEM@PEAG@@QEAA@XZ @ 0x1800D8B74 (--1-$SP_MEM@PEAG@@QEAA@XZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800D8B7C (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  AtmosCheck *v1; // rdi
  int v2; // eax
  char *v3; // r14
  _BYTE *v4; // r15
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  unsigned __int8 *v8; // r12
  __int64 v9; // r13
  int v10; // r11d
  int v11; // r10d
  int v12; // r9d
  int v13; // ecx
  int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  unsigned int v17; // ebx
  int v18; // r11d
  unsigned int v19; // ebx
  int v20; // r11d
  int v21; // ebx
  unsigned int v22; // r11d
  int v23; // ebx
  int v24; // r11d
  int v25; // ebx
  unsigned int v26; // r11d
  int v27; // ebx
  int v28; // r11d
  unsigned int v29; // r8d
  int v30; // r11d
  int v31; // r8d
  int v32; // r11d
  int v33; // r8d
  unsigned int v34; // edi
  int v35; // r8d
  int v36; // edi
  int v37; // r8d
  unsigned int v38; // edi
  int v39; // r8d
  int v40; // edx
  void *v41; // r14
  char v42; // al
  unsigned __int64 v43; // rcx
  int FunctionAddress; // esi
  unsigned int v45; // r13d
  int v46; // edi
  LPCWSTR v47; // rdi
  __int64 v48; // rax
  const WCHAR *v49; // rdx
  const WCHAR *v50; // rdi
  char *v51; // rbx
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  unsigned int v54; // r15d
  unsigned int i; // r14d
  unsigned __int8 *v56; // rcx
  __int64 v57; // rax
  HANDLE ProcessHeap; // rax
  __int64 v59; // rbx
  HMODULE *v60; // rdi
  int v61; // esi
  signed int LastError; // edi
  __int64 v63; // r14
  bool v64; // sf
  wchar_t *v65; // rbx
  __int64 v66; // r9
  signed int v67; // eax
  DWORD CurrentThreadId; // eax
  __int64 v69; // r14
  wchar_t *v70; // rbx
  __int64 v71; // r9
  signed int v72; // eax
  int v73; // eax
  HLOCAL v74; // rax
  LPVOID v75; // rbx
  void *v76; // r15
  unsigned __int16 *v77; // r13
  HANDLE v78; // rax
  void *v79; // rax
  int v80; // esi
  void *v81; // r14
  size_t v82; // rbx
  HANDLE v83; // rax
  unsigned __int16 *v84; // rax
  unsigned __int16 *v85; // r12
  unsigned int v86; // r15d
  int v87; // eax
  int v88; // edi
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // r10d
  int v93; // eax
  int v94; // eax
  int v95; // r10d
  int v96; // eax
  int v97; // eax
  size_t v98; // rdx
  const wchar_t *v99; // rcx
  int v100; // r10d
  int v101; // eax
  int v102; // eax
  int v103; // r10d
  int v104; // eax
  int v105; // eax
  int v106; // r10d
  int v107; // eax
  int v108; // eax
  int v109; // r10d
  unsigned int v110; // edi
  HANDLE v111; // rax
  _DWORD *v112; // rdi
  int v113; // edx
  _DWORD *v114; // rcx
  int v115; // eax
  int v116; // edx
  int *v117; // rdi
  unsigned int v118; // r10d
  int v119; // r11d
  void *v120; // rcx
  __int64 v121; // r12
  int v122; // eax
  int v123; // edx
  int *v124; // rdi
  int v125; // eax
  __int64 v126; // rcx
  unsigned int v127; // r10d
  int v128; // r11d
  __int64 v129; // rdx
  void *v130; // rcx
  int v131; // eax
  int v132; // edx
  size_t v133; // rdx
  const wchar_t *v134; // rcx
  int *v135; // rdi
  int v136; // eax
  unsigned int v137; // r10d
  int v138; // r11d
  unsigned __int64 *v139; // rax
  int v140; // eax
  int v141; // edx
  int v142; // ebx
  int *v143; // rdi
  int v144; // eax
  unsigned int v145; // r10d
  __int64 v146; // r11
  void *v147; // rcx
  int v148; // eax
  int v149; // edx
  int *v150; // rdi
  unsigned int v151; // r10d
  int v152; // r11d
  void *v153; // rdi
  HANDLE v154; // rax
  void *v155; // rdi
  HANDLE v156; // rax
  HANDLE v157; // rax
  HANDLE v158; // rax
  char *v159; // r15
  DWORD ModuleFileNameW; // eax
  int *v161; // rcx
  int v162; // eax
  int v163; // edx
  int *v164; // rdi
  int v165; // eax
  unsigned int v166; // r10d
  int v167; // r11d
  _DWORD *v168; // rcx
  int v169; // eax
  unsigned int v170; // ecx
  int v171; // r10d
  int v172; // eax
  unsigned int v173; // r10d
  int v174; // edi
  int v175; // eax
  int v176; // eax
  int v177; // eax
  int v178; // eax
  int v179; // eax
  unsigned __int8 *v180; // rdi
  unsigned int v181; // r14d
  LPVOID v182; // r12
  unsigned int v183; // r15d
  unsigned __int64 v184; // r13
  int v185; // esi
  unsigned int v186; // eax
  unsigned int v187; // edi
  HANDLE v188; // rax
  _DWORD *v189; // rdi
  __int64 v190; // rdx
  void *v191; // rcx
  HANDLE v192; // rax
  _QWORD *v193; // rbx
  int v194; // esi
  SIZE_T v195; // rsi
  _BYTE *v196; // r12
  unsigned __int8 v197; // al
  unsigned __int64 j; // rcx
  unsigned __int8 *v199; // r10
  int v200; // r11d
  unsigned int v201; // edx
  _BYTE *v202; // r14
  int v203; // edi
  int v204; // r11d
  int v205; // r9d
  char v206; // r8
  int v207; // edx
  int v208; // ecx
  unsigned int v209; // r11d
  int v210; // edi
  SIZE_T v211; // r15
  int v212; // ebx
  unsigned __int8 *v213; // r12
  _BYTE *v214; // r14
  int v215; // r10d
  int v216; // r9d
  int v217; // ecx
  int v218; // r10d
  int v219; // r9d
  int v220; // r11d
  unsigned int v221; // r8d
  int v222; // r11d
  int v223; // r8d
  int v224; // r11d
  unsigned int v225; // r8d
  int v226; // r11d
  int v227; // r8d
  int v228; // r11d
  int v229; // r8d
  int v230; // r11d
  int v231; // r8d
  unsigned int v232; // r11d
  unsigned int v233; // r8d
  int v234; // r11d
  int v235; // r8d
  int v236; // r11d
  int v237; // r8d
  int v238; // r11d
  int v239; // r8d
  int v240; // r11d
  int v241; // r8d
  unsigned int v242; // r11d
  int v243; // r8d
  unsigned int v244; // esi
  HANDLE v245; // rax
  _QWORD *v246; // rdi
  HANDLE v247; // rax
  void *v248; // rax
  HANDLE v249; // rax
  _OWORD *v250; // rax
  HANDLE v251; // rax
  _QWORD *v252; // rax
  void *v253; // r14
  HANDLE v254; // rax
  void *v255; // r14
  HANDLE v256; // rax
  void *v257; // r14
  HANDLE v258; // rax
  HANDLE v259; // rax
  void *v260; // rdi
  HANDLE v261; // rax
  void *v262; // rdi
  HANDLE v263; // rax
  void *v264; // rdi
  HANDLE v265; // rax
  void *v266; // rdi
  HANDLE v267; // rax
  HANDLE v268; // rax
  const void **v269; // rbx
  int v270; // esi
  unsigned int v271; // eax
  unsigned int v272; // edi
  HANDLE v273; // rax
  _DWORD *v274; // rdi
  void *v275; // rcx
  void *v276; // rcx
  HANDLE v277; // rax
  int v278; // ebx
  int v279; // eax
  int v280; // ecx
  unsigned int v281; // eax
  int v282; // edi
  int v283; // eax
  unsigned int *v284; // rcx
  unsigned int v285; // r14d
  int v286; // r10d
  int v287; // r10d
  unsigned int *v288; // rax
  unsigned int *v289; // rcx
  unsigned int v290; // r14d
  int v291; // r10d
  int v292; // r10d
  unsigned int *v293; // rax
  int v294; // r10d
  int v295; // r11d
  int v296; // r10d
  unsigned int v297; // eax
  void *v298; // rbx
  HANDLE v299; // rax
  _QWORD *v300; // rbx
  void *v301; // rdi
  HANDLE v302; // rax
  void *v303; // rdi
  HANDLE v304; // rax
  void *v305; // rdi
  HANDLE v306; // rax
  HANDLE v307; // rax
  void *v308; // rdi
  HANDLE v309; // rax
  void *v310; // rdi
  HANDLE v311; // rax
  void *v312; // rdi
  HANDLE v313; // rax
  void *v314; // rdi
  HANDLE v315; // rax
  void *v316; // rdi
  HANDLE v317; // rax
  HANDLE v318; // rax
  void *v319; // rdi
  HANDLE v320; // rax
  unsigned int v321; // edi
  int v322; // esi
  HANDLE v323; // rax
  void *v324; // rax
  signed int v325; // eax
  unsigned int v326; // edi
  FARPROC ProcAddress; // rax
  int v328; // eax
  unsigned __int16 *v329; // rbx
  int v330; // esi
  int v331; // esi
  SIZE_T v332; // r12
  int v333; // eax
  int v334; // edx
  int v335; // edx
  __int64 v336; // r11
  SIZE_T v337; // r15
  int v338; // edx
  int v339; // edx
  __int64 v340; // r11
  SIZE_T v341; // r14
  int v342; // edx
  HANDLE v343; // rax
  _QWORD *v344; // rdi
  HANDLE v345; // rax
  void *v346; // rax
  HANDLE v347; // rax
  void *v348; // rax
  void *v349; // r15
  HANDLE v350; // rax
  void *v351; // rax
  void *v352; // r14
  HANDLE v353; // rax
  void *v354; // r14
  HANDLE v355; // rax
  void *v356; // r14
  HANDLE v357; // rax
  HANDLE v358; // rax
  void *v359; // rdi
  HANDLE v360; // rax
  void *v361; // rdi
  HANDLE v362; // rax
  void *v363; // rdi
  HANDLE v364; // rax
  HANDLE v365; // rax
  unsigned __int8 *v366; // rbx
  SIZE_T v367; // r14
  _BYTE *v368; // r15
  unsigned __int8 v369; // al
  unsigned __int8 *v370; // r10
  _BYTE *v371; // r12
  int v372; // ebx
  unsigned int v373; // r11d
  int v374; // edi
  int v375; // r9d
  char v376; // r8
  int v377; // edx
  unsigned int v378; // ebx
  int v379; // ecx
  int v380; // edx
  SIZE_T v381; // r13
  int v382; // eax
  unsigned __int8 *v383; // r14
  int v384; // r15d
  _BYTE *v385; // r12
  int v386; // r10d
  int v387; // r9d
  int v388; // ecx
  int v389; // r10d
  int v390; // r11d
  int v391; // r9d
  unsigned int v392; // ebx
  int v393; // r11d
  unsigned int v394; // ebx
  int v395; // r11d
  int v396; // ebx
  unsigned int v397; // r11d
  int v398; // ebx
  int v399; // r11d
  int v400; // ebx
  unsigned int v401; // r11d
  int v402; // ebx
  int v403; // r11d
  unsigned int v404; // r8d
  int v405; // r11d
  int v406; // r8d
  int v407; // r11d
  int v408; // r8d
  unsigned int v409; // edi
  int v410; // r8d
  int v411; // edi
  int v412; // r8d
  unsigned int v413; // edi
  int v414; // r8d
  int v415; // edx
  SIZE_T k; // rcx
  void *v417; // rdi
  int v418; // ebx
  HANDLE v419; // rax
  unsigned int v420; // ebx
  int v421; // edx
  int v422; // esi
  __int64 v423; // rdx
  SIZE_T v424; // r15
  int v425; // edx
  __int64 v426; // r10
  void *v427; // rdi
  void *v428; // r12
  unsigned __int64 v429; // r10
  unsigned __int64 v430; // rbx
  int *v431; // r10
  int v432; // eax
  unsigned __int64 v433; // r10
  unsigned int v434; // r11d
  HANDLE v435; // rax
  int v436; // r10d
  int *v437; // rax
  _DWORD *v438; // rcx
  int v439; // edi
  unsigned int v440; // r10d
  int v441; // edi
  _DWORD *v442; // r11
  _DWORD *v443; // rax
  _DWORD *v444; // rcx
  unsigned int v445; // edi
  unsigned int v446; // r10d
  int v447; // edi
  _DWORD *v448; // r11
  _DWORD *v449; // rax
  _DWORD *v450; // rcx
  unsigned int v451; // edi
  unsigned int v452; // r10d
  unsigned int v453; // ebx
  _DWORD *v454; // r10
  _DWORD *v455; // rcx
  unsigned int v456; // edi
  unsigned int v457; // r11d
  int v458; // edi
  _DWORD *v459; // rax
  unsigned int *v460; // rcx
  unsigned int v461; // edi
  unsigned int v462; // r14d
  const void *v463; // r10
  unsigned int v464; // r11d
  unsigned int v465; // edi
  unsigned int *v466; // rax
  int v467; // ecx
  __int64 v468; // rax
  unsigned int v469; // edi
  int v470; // eax
  char *v471; // rax
  _BYTE *v472; // rdi
  int v473; // ebx
  unsigned __int8 *v474; // r14
  __int64 v475; // r12
  int v476; // eax
  int v477; // r13d
  int v478; // r11d
  int v479; // r10d
  int v480; // ecx
  int v481; // r11d
  unsigned int v482; // r15d
  int v483; // r10d
  unsigned int v484; // r13d
  int v485; // r15d
  unsigned int v486; // r13d
  int v487; // r15d
  int v488; // r13d
  unsigned int v489; // r15d
  int v490; // r13d
  int v491; // r15d
  int v492; // r13d
  unsigned int v493; // r15d
  int v494; // r13d
  int v495; // r15d
  unsigned int v496; // r9d
  int v497; // r15d
  int v498; // r9d
  int v499; // r15d
  int v500; // r9d
  unsigned int v501; // r8d
  int v502; // r9d
  int v503; // r8d
  int v504; // r9d
  unsigned int v505; // r8d
  int v506; // r9d
  int v507; // edx
  unsigned __int64 v508; // rcx
  void *v509; // rbx
  char v510; // al
  int v511; // r14d
  int v512; // r12d
  LPCWSTR m; // rbx
  const WCHAR *v514; // rdx
  __int64 v515; // rax
  const WCHAR *v516; // rbx
  char *v517; // r15
  __int64 v518; // rcx
  unsigned __int64 v519; // rcx
  unsigned int v520; // r13d
  unsigned int v521; // r12d
  unsigned __int8 *v522; // rcx
  __int64 v523; // rax
  HANDLE v524; // rax
  HMODULE *v525; // rbx
  __int64 v526; // r14
  int v527; // eax
  char *v528; // rax
  _BYTE *v529; // rdi
  int v530; // ebx
  unsigned __int8 *v531; // r14
  __int64 v532; // r12
  int v533; // eax
  int v534; // r13d
  int v535; // r11d
  int v536; // r10d
  int v537; // ecx
  int v538; // r11d
  unsigned int v539; // r15d
  int v540; // r10d
  unsigned int v541; // r13d
  int v542; // r15d
  unsigned int v543; // r13d
  int v544; // r15d
  int v545; // r13d
  unsigned int v546; // r15d
  int v547; // r13d
  int v548; // r15d
  int v549; // r13d
  unsigned int v550; // r15d
  int v551; // r13d
  int v552; // r15d
  unsigned int v553; // r9d
  int v554; // r15d
  int v555; // r9d
  int v556; // r15d
  int v557; // r9d
  unsigned int v558; // r8d
  int v559; // r9d
  int v560; // r8d
  int v561; // r9d
  unsigned int v562; // r8d
  int v563; // r9d
  int v564; // edx
  int v565; // r14d
  char v566; // al
  unsigned __int64 v567; // rcx
  int v568; // r12d
  void *v569; // rbx
  LPCWSTR n; // rbx
  const WCHAR *v571; // rdx
  __int64 v572; // rax
  const WCHAR *v573; // rbx
  char *v574; // r15
  __int64 v575; // rcx
  unsigned __int64 v576; // rcx
  unsigned int v577; // r13d
  unsigned int v578; // r12d
  unsigned __int8 *v579; // rcx
  __int64 v580; // rax
  HANDLE v581; // rax
  HMODULE *v582; // rbx
  __int64 v583; // r14
  int v584; // r13d
  signed int v585; // eax
  signed int v586; // r14d
  signed int v587; // eax
  LPVOID v588; // rax
  __int64 v589; // rdi
  LPVOID v590; // rax
  __int64 v591; // r15
  _DWORD *v592; // rbx
  unsigned int v593; // r12d
  __int64 v594; // rax
  unsigned int v595; // r11d
  unsigned int v596; // r9d
  bool IsNull; // r10
  __int64 v598; // r8
  unsigned int v599; // edx
  unsigned int *v600; // rdi
  __int64 v601; // rcx
  __int64 v602; // rdi
  const wchar_t *v603; // rcx
  __int64 v604; // r8
  const wchar_t **v605; // rdx
  __int64 v606; // rax
  __int64 v607; // rcx
  __int64 v608; // rax
  unsigned __int16 *v609; // rdi
  __int64 v610; // rax
  void *v611; // r13
  char *v612; // rax
  int v613; // ebx
  int v614; // r11d
  int v615; // r10d
  _BYTE *v616; // r15
  int v617; // r14d
  unsigned __int8 *v618; // r12
  __int64 v619; // r13
  int v620; // r9d
  int v621; // r8d
  int v622; // eax
  int v623; // r9d
  int v624; // r11d
  int v625; // r8d
  unsigned int v626; // ebx
  int v627; // r11d
  unsigned int v628; // ebx
  int v629; // r11d
  int v630; // ebx
  unsigned int v631; // r11d
  int v632; // ebx
  int v633; // r11d
  int v634; // ebx
  unsigned int v635; // r11d
  int v636; // ebx
  int v637; // r11d
  unsigned int v638; // edi
  int v639; // r11d
  int v640; // edi
  int v641; // r11d
  int v642; // edi
  unsigned int v643; // edx
  int v644; // edi
  int v645; // edx
  int v646; // edi
  unsigned int v647; // edx
  int v648; // edi
  int v649; // ecx
  unsigned __int64 v650; // rax
  void *v651; // r10
  __m128i v652; // xmm1
  __m128i v653; // xmm0
  __m128i v654; // xmm0
  __m128i v655; // xmm1
  __m128i v656; // xmm1
  __m128i v657; // xmm1
  bool v658; // al
  __int64 v659; // rcx
  int v660; // r9d
  _QWORD *v661; // rdi
  __int64 v662; // r8
  unsigned int ii; // edx
  __int64 v664; // rax
  LPVOID v665; // rax
  __int64 v666; // rbx
  __int16 *v667; // r13
  unsigned int v668; // edx
  __int64 v669; // rdi
  _WORD *v670; // rcx
  __int64 v671; // rax
  __int64 v672; // r15
  __int64 v673; // rax
  int v674; // eax
  int v675; // r12d
  __int64 v676; // rcx
  int v677; // eax
  __int64 v678; // rax
  signed int v679; // eax
  __int64 v680; // r12
  __int64 v681; // rcx
  void *v682; // rcx
  bool v683; // zf
  void **v684; // rcx
  void **v685; // rax
  int v686; // edi
  void **v687; // rax
  signed int v688; // eax
  int v689; // ebx
  unsigned int v690; // r12d
  unsigned __int16 *v691; // r15
  unsigned __int16 *v692; // rdi
  __int64 v693; // rbx
  signed int v694; // eax
  int v695; // eax
  HMODULE *v696; // rdi
  __int64 v697; // rbx
  unsigned int v698; // edi
  LPVOID v699; // r14
  int v700; // ebx
  __int64 v701; // rax
  int v702; // eax
  void *v703; // r12
  int v704; // r13d
  __int64 v705; // rax
  int v706; // eax
  void *v707; // rax
  signed int v708; // eax
  __int64 v709; // rdi
  signed int v710; // eax
  int v711; // eax
  void *v712; // rax
  signed int v713; // eax
  int v714; // ebx
  unsigned int v715; // edx
  unsigned int v716; // r13d
  void *v717; // rdi
  unsigned int v718; // ebx
  void *v719; // rdi
  __int64 v720; // rdx
  __int64 v721; // rdi
  signed int v722; // eax
  int v723; // eax
  void *v724; // rax
  signed int v725; // eax
  void *v726; // rdi
  __int64 v727; // rbx
  int v728; // eax
  int v729; // r14d
  int v730; // ebx
  int v731; // edi
  __int64 v732; // rax
  int v733; // edx
  int v734; // ecx
  __int64 v735; // rax
  unsigned __int16 *v736; // r14
  signed int v737; // ebx
  signed int v738; // eax
  __int64 v739; // rcx
  __int64 v740; // rax
  int v741; // eax
  int v742; // r12d
  int v743; // r8d
  int v744; // edi
  int v745; // edx
  int v746; // ecx
  int v747; // r11d
  int v748; // r15d
  int v749; // r10d
  char *v750; // r13
  SIZE_T v751; // rbx
  int v752; // edi
  _BYTE *v753; // r9
  SIZE_T v754; // r15
  int v755; // r8d
  int v756; // edi
  int v757; // edx
  int v758; // edi
  int v759; // edx
  int v760; // edx
  void *v761; // rdi
  int v762; // r12d
  __int64 v763; // r13
  LPVOID v764; // r14
  __int64 v765; // rax
  void *v766; // r14
  signed int v767; // ebx
  __int64 v768; // rax
  signed int v769; // eax
  __int64 v770; // rax
  int v771; // eax
  int v772; // r8d
  int v773; // edi
  int v774; // edx
  int v775; // ecx
  int v776; // r11d
  int v777; // r15d
  int v778; // r10d
  unsigned __int16 *v779; // rdi
  char *v780; // r13
  char v781; // bl
  int v782; // r12d
  _BYTE *v783; // r9
  __int64 v784; // r15
  int v785; // r8d
  int v786; // edi
  int v787; // edx
  int v788; // edi
  int v789; // edx
  int v790; // edx
  LPVOID v791; // rdi
  char v792; // al
  int v793; // r13d
  int v794; // ecx
  unsigned __int64 v795; // kr00_8
  int v796; // edi
  int v797; // ebx
  int v798; // eax
  int v799; // r14d
  unsigned int v800; // r15d
  int v801; // r12d
  void *v802; // rax
  LPVOID v803; // r13
  void *v804; // r12
  __int64 v805; // rax
  __int64 v806; // rcx
  __int64 v807; // rcx
  __int64 v808; // rcx
  int v809; // eax
  __int64 v810; // rbx
  HMODULE *v811; // rdi
  int v812; // eax
  int v813; // eax
  char *v814; // rax
  int v815; // r13d
  int v816; // r11d
  _BYTE *v817; // r12
  unsigned __int8 *v818; // rax
  int v819; // ebx
  __int64 v820; // r14
  int v821; // r10d
  int v822; // r11d
  int v823; // ecx
  int v824; // r9d
  int v825; // r9d
  unsigned int v826; // r15d
  int v827; // r11d
  unsigned int v828; // r15d
  int v829; // r11d
  int v830; // r15d
  unsigned int v831; // r11d
  int v832; // r15d
  int v833; // r11d
  int v834; // r15d
  unsigned int v835; // r11d
  int v836; // r15d
  int v837; // r11d
  unsigned int v838; // r8d
  int v839; // r11d
  int v840; // r8d
  int v841; // r11d
  int v842; // r8d
  unsigned int v843; // edi
  int v844; // r8d
  int v845; // edi
  int v846; // r8d
  unsigned int v847; // edi
  int v848; // r8d
  int v849; // edx
  int v850; // ebx
  char v851; // al
  unsigned __int64 v852; // rcx
  int v853; // r13d
  void *v854; // r14
  signed int v855; // r13d
  int v856; // r15d
  SIZE_T v857; // rax
  signed int v858; // eax
  void *v859; // rcx
  __int64 v860; // rax
  void *v861; // rdx
  LPVOID v862; // r12
  int v863; // edx
  int v864; // ecx
  int v865; // edx
  int v866; // ecx
  __int64 v867; // r9
  int v868; // r11d
  int v869; // r10d
  char *v870; // rax
  char v871; // r12
  char *v872; // r13
  int v873; // edi
  _BYTE *v874; // r9
  char *v875; // r15
  int v876; // r8d
  int v877; // ecx
  int v878; // edi
  int v879; // edx
  int v880; // ecx
  int v881; // edi
  int v882; // edx
  int v883; // r15d
  void *v884; // rdi
  LPVOID v885; // r15
  __int64 v886; // rax
  __int64 v887; // rax
  __int64 v888; // r12
  void *v889; // rax
  bool v890; // sf
  void *v891; // rcx
  __int64 v892; // r13
  __int64 v893; // rax
  __int64 v894; // rdx
  __int64 v895; // r8
  __int64 v896; // r9
  int v897; // eax
  __int64 v898; // rdx
  int v899; // ecx
  int v900; // edx
  int v901; // ecx
  __int64 v902; // r8
  int v903; // r11d
  int v904; // r10d
  SIZE_T v905; // r14
  char v906; // r15
  int v907; // r13d
  _BYTE *v908; // r9
  char *v909; // rbx
  int v910; // edi
  int v911; // edx
  int v912; // edi
  int v913; // edx
  LPCWSTR v914; // rdi
  unsigned int v915; // r13d
  const WCHAR *v916; // rdx
  __int64 v917; // rax
  const WCHAR *v918; // rdi
  char *v919; // r14
  __int64 v920; // rcx
  unsigned __int64 v921; // rcx
  unsigned int v922; // r12d
  unsigned __int8 *v923; // rcx
  __int64 v924; // rax
  HANDLE v925; // rax
  HMODULE *v926; // rdi
  __int64 v927; // rbx
  int v928; // eax
  HMODULE *v929; // rdi
  __int64 v930; // rbx
  unsigned __int16 *v931; // r14
  HANDLE v932; // rax
  unsigned __int16 *v933; // rax
  unsigned __int16 *v934; // r12
  size_t v935; // rbx
  HANDLE v936; // rax
  char *v937; // rax
  char *v938; // r13
  unsigned int v939; // r14d
  unsigned int v940; // r10d
  int v941; // eax
  unsigned int v942; // r10d
  int v943; // r11d
  int v944; // eax
  unsigned int v945; // r10d
  int v946; // r11d
  int v947; // eax
  int v948; // r11d
  unsigned int v949; // edi
  HANDLE v950; // rax
  unsigned int *v951; // rax
  unsigned int *v952; // rdi
  unsigned int v953; // r10d
  LPVOID v954; // r11
  int *v955; // rcx
  unsigned int v956; // edi
  unsigned int *v957; // r12
  int v958; // r11d
  int v959; // ebx
  int *v960; // r10
  unsigned __int64 v961; // r10
  int v962; // r11d
  _DWORD *v963; // r10
  int v964; // r15d
  void *v965; // rcx
  unsigned int v966; // r10d
  int *v967; // r10
  unsigned __int64 v968; // r10
  int v969; // r11d
  int v970; // ebx
  unsigned int *v971; // r10
  void *v972; // rcx
  unsigned int v973; // r10d
  void *v974; // rdi
  HANDLE v975; // rax
  void *v976; // rdi
  HANDLE v977; // rax
  HANDLE v978; // rax
  HANDLE v979; // rax
  int v980; // ebx
  int *v981; // r10
  unsigned __int64 v982; // r10
  int v983; // r11d
  unsigned int v984; // edx
  _DWORD *v985; // r10
  unsigned __int64 *v986; // rax
  unsigned int v987; // ecx
  unsigned int v988; // edi
  unsigned __int8 *v989; // rdi
  unsigned int v990; // r15d
  unsigned int v991; // r13d
  int v992; // ebx
  __int64 *v993; // r10
  unsigned int v994; // eax
  unsigned int v995; // edi
  HANDLE v996; // rax
  char *v997; // rax
  char *v998; // rdi
  __int64 v999; // rdx
  void *v1000; // rcx
  HANDLE v1001; // rax
  int v1002; // ebx
  _QWORD *v1003; // r14
  int v1004; // ebx
  void *v1005; // r15
  unsigned __int64 v1006; // rbx
  char *v1007; // r12
  unsigned __int8 v1008; // al
  unsigned __int64 jj; // rcx
  unsigned __int8 *v1010; // r10
  int v1011; // r11d
  unsigned int v1012; // edx
  _BYTE *v1013; // r9
  int v1014; // r13d
  int v1015; // edi
  int v1016; // r11d
  char v1017; // r8
  int v1018; // edx
  unsigned int v1019; // r11d
  int v1020; // ecx
  int v1021; // edi
  unsigned __int64 v1022; // r15
  int v1023; // r14d
  _BYTE *v1024; // r12
  unsigned __int8 *v1025; // rbx
  int v1026; // r10d
  int v1027; // r9d
  int v1028; // ecx
  int v1029; // r10d
  int v1030; // r9d
  int v1031; // r11d
  unsigned int v1032; // r8d
  int v1033; // r11d
  int v1034; // r8d
  int v1035; // r11d
  unsigned int v1036; // r8d
  int v1037; // r11d
  int v1038; // r8d
  int v1039; // r11d
  int v1040; // r8d
  int v1041; // r11d
  int v1042; // r8d
  unsigned int v1043; // r11d
  unsigned int v1044; // r8d
  int v1045; // r11d
  int v1046; // r8d
  int v1047; // r11d
  int v1048; // r8d
  int v1049; // r11d
  int v1050; // r8d
  int v1051; // r11d
  int v1052; // r8d
  unsigned int v1053; // r11d
  int v1054; // r8d
  unsigned int v1055; // ebx
  HANDLE v1056; // rax
  _DWORD *v1057; // rax
  _DWORD *v1058; // rdi
  HANDLE v1059; // rax
  void *v1060; // rax
  HANDLE v1061; // rax
  _OWORD *v1062; // rax
  HANDLE v1063; // rax
  _QWORD *v1064; // rax
  void *v1065; // r15
  HANDLE v1066; // rax
  void *v1067; // r15
  HANDLE v1068; // rax
  HANDLE v1069; // rax
  HANDLE v1070; // rax
  void *v1071; // rdi
  HANDLE v1072; // rax
  void *v1073; // rdi
  HANDLE v1074; // rax
  void *v1075; // rdi
  HANDLE v1076; // rax
  void *v1077; // rdi
  HANDLE v1078; // rax
  HANDLE v1079; // rax
  const void **v1080; // r14
  int v1081; // ebx
  unsigned int v1082; // eax
  unsigned int v1083; // edi
  HANDLE v1084; // rax
  _DWORD *v1085; // rdi
  void *v1086; // rcx
  void *v1087; // rcx
  HANDLE v1088; // rax
  int v1089; // r14d
  int v1090; // eax
  int v1091; // ecx
  unsigned int v1092; // eax
  int v1093; // edi
  int v1094; // eax
  unsigned int *v1095; // rcx
  unsigned int v1096; // r15d
  int v1097; // eax
  int v1098; // r10d
  int v1099; // r10d
  unsigned int *v1100; // rax
  unsigned int *v1101; // rcx
  unsigned int v1102; // r15d
  int v1103; // eax
  int v1104; // r10d
  int v1105; // r10d
  unsigned int *v1106; // rax
  int v1107; // r10d
  int v1108; // r11d
  int v1109; // r10d
  unsigned int v1110; // eax
  unsigned int v1111; // edi
  int v1112; // ebx
  HANDLE v1113; // rax
  unsigned int *v1114; // rax
  signed int v1115; // eax
  unsigned int v1116; // edi
  FARPROC v1117; // rax
  int v1118; // eax
  _QWORD *v1119; // r14
  int v1120; // ebx
  SIZE_T v1121; // r13
  int v1122; // edx
  int v1123; // edx
  __int64 v1124; // r11
  SIZE_T v1125; // r12
  int v1126; // edx
  int v1127; // edx
  __int64 v1128; // r11
  SIZE_T v1129; // r15
  int v1130; // edx
  int v1131; // ebx
  void *v1132; // rdi
  HANDLE v1133; // rax
  _QWORD *v1134; // rdi
  HANDLE v1135; // rax
  void *v1136; // rax
  void *v1137; // r13
  HANDLE v1138; // rax
  void *v1139; // rax
  void *v1140; // r12
  HANDLE v1141; // rax
  void *v1142; // rax
  void *v1143; // r15
  HANDLE v1144; // rax
  void *v1145; // r15
  HANDLE v1146; // rax
  HANDLE v1147; // rax
  HANDLE v1148; // rax
  void *v1149; // rdi
  HANDLE v1150; // rax
  void *v1151; // rdi
  HANDLE v1152; // rax
  void *v1153; // rdi
  HANDLE v1154; // rax
  HANDLE v1155; // rax
  SIZE_T v1156; // r14
  __int64 v1157; // r15
  SIZE_T v1158; // r15
  void *v1159; // rax
  int v1160; // r10d
  _BYTE *v1161; // r12
  unsigned __int8 v1162; // al
  unsigned __int8 *v1163; // r9
  _BYTE *v1164; // r8
  int v1165; // r13d
  int v1166; // edi
  int v1167; // r14d
  char v1168; // r11
  int v1169; // edx
  unsigned int v1170; // r14d
  unsigned int v1171; // r11d
  int v1172; // ecx
  int v1173; // edx
  int v1174; // r14d
  SIZE_T v1175; // rcx
  int v1176; // ebx
  _BYTE *v1177; // r12
  unsigned __int8 *v1178; // r15
  SIZE_T v1179; // rax
  int v1180; // r10d
  int v1181; // r9d
  int v1182; // ecx
  int v1183; // r10d
  int v1184; // r11d
  int v1185; // r9d
  unsigned int v1186; // r14d
  int v1187; // r11d
  unsigned int v1188; // r14d
  int v1189; // r11d
  int v1190; // r14d
  unsigned int v1191; // r11d
  int v1192; // r14d
  int v1193; // r11d
  int v1194; // r14d
  unsigned int v1195; // r11d
  int v1196; // r14d
  int v1197; // r11d
  unsigned int v1198; // r8d
  int v1199; // r11d
  int v1200; // r8d
  int v1201; // r11d
  int v1202; // r8d
  unsigned int v1203; // edi
  int v1204; // r8d
  int v1205; // edi
  int v1206; // r8d
  unsigned int v1207; // edi
  int v1208; // r8d
  int v1209; // edx
  SIZE_T mm; // rcx
  int v1211; // r14d
  HANDLE v1212; // rax
  char *v1213; // r14
  int v1214; // edx
  int v1215; // ebx
  __int64 v1216; // rdx
  SIZE_T v1217; // r12
  int v1218; // edx
  void *v1219; // rdi
  void *v1220; // r13
  int v1221; // r14d
  unsigned __int64 v1222; // r10
  unsigned __int64 v1223; // r14
  int *v1224; // r10
  int v1225; // eax
  unsigned __int64 v1226; // r10
  unsigned int v1227; // r11d
  HANDLE v1228; // rax
  void *v1229; // r14
  HANDLE v1230; // rax
  _QWORD *v1231; // r14
  void *v1232; // rdi
  HANDLE v1233; // rax
  void *v1234; // rdi
  HANDLE v1235; // rax
  void *v1236; // rdi
  HANDLE v1237; // rax
  HANDLE v1238; // rax
  void *v1239; // rdi
  HANDLE v1240; // rax
  void *v1241; // rdi
  HANDLE v1242; // rax
  _QWORD *v1243; // r14
  void *v1244; // rdi
  HANDLE v1245; // rax
  void *v1246; // rdi
  HANDLE v1247; // rax
  void *v1248; // rdi
  HANDLE v1249; // rax
  HANDLE v1250; // rax
  void *v1251; // rdi
  HANDLE v1252; // rax
  __int64 *v1253; // rdi
  unsigned int v1254; // r10d
  int v1255; // r11d
  _DWORD *v1256; // rax
  int v1257; // r10d
  int v1258; // edi
  __int64 *v1259; // rax
  int v1260; // eax
  __int64 v1261; // r14
  HMODULE *v1262; // rdi
  _DWORD *Ptr; // rax
  int v1265; // [rsp+60h] [rbp-A0h]
  int v1266; // [rsp+68h] [rbp-98h]
  int v1267; // [rsp+68h] [rbp-98h]
  int v1268; // [rsp+68h] [rbp-98h]
  int v1269; // [rsp+68h] [rbp-98h]
  int v1270; // [rsp+68h] [rbp-98h]
  int v1271; // [rsp+68h] [rbp-98h]
  void *v1272; // [rsp+70h] [rbp-90h]
  __int64 v1273; // [rsp+70h] [rbp-90h]
  unsigned int v1274; // [rsp+70h] [rbp-90h]
  int v1275; // [rsp+70h] [rbp-90h]
  int v1276; // [rsp+70h] [rbp-90h]
  unsigned int v1277; // [rsp+78h] [rbp-88h]
  unsigned int v1278; // [rsp+78h] [rbp-88h]
  int v1279; // [rsp+78h] [rbp-88h]
  int v1280; // [rsp+78h] [rbp-88h]
  int v1281; // [rsp+78h] [rbp-88h]
  int v1282; // [rsp+78h] [rbp-88h]
  int v1283; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1284; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1285; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1286; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1287; // [rsp+80h] [rbp-80h]
  int v1288; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1289; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v1290; // [rsp+80h] [rbp-80h]
  int v1291; // [rsp+88h] [rbp-78h]
  int v1292; // [rsp+88h] [rbp-78h]
  int v1293; // [rsp+88h] [rbp-78h]
  int v1294; // [rsp+88h] [rbp-78h]
  int v1295; // [rsp+88h] [rbp-78h]
  int v1296; // [rsp+8Ch] [rbp-74h]
  int v1297; // [rsp+8Ch] [rbp-74h]
  int v1298; // [rsp+8Ch] [rbp-74h]
  int v1299; // [rsp+8Ch] [rbp-74h]
  int v1300; // [rsp+8Ch] [rbp-74h]
  unsigned int v1301; // [rsp+90h] [rbp-70h]
  unsigned int v1302; // [rsp+94h] [rbp-6Ch] BYREF
  LPVOID lpMem; // [rsp+98h] [rbp-68h]
  int v1304; // [rsp+A0h] [rbp-60h]
  unsigned int v1305; // [rsp+A4h] [rbp-5Ch]
  int v1306; // [rsp+A8h] [rbp-58h]
  int v1307; // [rsp+ACh] [rbp-54h]
  unsigned __int16 *v1308; // [rsp+B0h] [rbp-50h]
  LPVOID v1309; // [rsp+B8h] [rbp-48h]
  int v1310; // [rsp+C0h] [rbp-40h]
  int v1311; // [rsp+C4h] [rbp-3Ch]
  SIZE_T v1312; // [rsp+C8h] [rbp-38h]
  LPVOID v1313; // [rsp+D0h] [rbp-30h]
  unsigned int v1314; // [rsp+D8h] [rbp-28h] BYREF
  int v1315; // [rsp+DCh] [rbp-24h]
  unsigned int v1316; // [rsp+E0h] [rbp-20h] BYREF
  int v1317; // [rsp+E4h] [rbp-1Ch]
  unsigned int v1318; // [rsp+E8h] [rbp-18h]
  int v1319; // [rsp+ECh] [rbp-14h]
  int v1320; // [rsp+F0h] [rbp-10h]
  unsigned int dwBytes; // [rsp+F4h] [rbp-Ch] BYREF
  unsigned int dwBytes_4; // [rsp+F8h] [rbp-8h]
  int v1323; // [rsp+FCh] [rbp-4h]
  int v1324; // [rsp+100h] [rbp+0h]
  int v1325; // [rsp+104h] [rbp+4h]
  int v1326; // [rsp+108h] [rbp+8h]
  int v1327; // [rsp+10Ch] [rbp+Ch]
  int v1328; // [rsp+110h] [rbp+10h]
  int v1329; // [rsp+114h] [rbp+14h]
  int v1330; // [rsp+118h] [rbp+18h]
  int v1331; // [rsp+11Ch] [rbp+1Ch]
  size_t v1332; // [rsp+120h] [rbp+20h] BYREF
  LPVOID v1333; // [rsp+128h] [rbp+28h]
  int v1334; // [rsp+130h] [rbp+30h]
  void *v1335; // [rsp+138h] [rbp+38h]
  unsigned int v1336; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v1337; // [rsp+144h] [rbp+44h] BYREF
  unsigned int v1338; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1339; // [rsp+14Ch] [rbp+4Ch] BYREF
  unsigned int v1340; // [rsp+150h] [rbp+50h] BYREF
  LPVOID v1341; // [rsp+158h] [rbp+58h]
  __int64 v1342; // [rsp+160h] [rbp+60h]
  LPVOID v1343; // [rsp+168h] [rbp+68h]
  __int64 v1344; // [rsp+170h] [rbp+70h]
  unsigned int v1345; // [rsp+178h] [rbp+78h]
  unsigned int v1346; // [rsp+17Ch] [rbp+7Ch]
  void *v1347; // [rsp+180h] [rbp+80h]
  unsigned int v1348; // [rsp+188h] [rbp+88h] BYREF
  int v1349; // [rsp+18Ch] [rbp+8Ch]
  int v1350; // [rsp+190h] [rbp+90h]
  int v1351; // [rsp+194h] [rbp+94h]
  void *v1352; // [rsp+198h] [rbp+98h]
  void *v1353; // [rsp+1A0h] [rbp+A0h]
  int v1354; // [rsp+1A8h] [rbp+A8h]
  void *v1355; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v1356; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1357; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1358; // [rsp+1C4h] [rbp+C4h] BYREF
  int v1359; // [rsp+1C8h] [rbp+C8h]
  unsigned int v1360; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1361; // [rsp+1D0h] [rbp+D0h] BYREF
  int v1362; // [rsp+1D4h] [rbp+D4h]
  SIZE_T v1363; // [rsp+1D8h] [rbp+D8h]
  unsigned int v1364; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1365; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1366; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 v1367; // [rsp+1F0h] [rbp+F0h]
  LPVOID v1368; // [rsp+1F8h] [rbp+F8h]
  void *v1369; // [rsp+200h] [rbp+100h] BYREF
  void *v1370; // [rsp+208h] [rbp+108h] BYREF
  LPVOID v1371; // [rsp+210h] [rbp+110h] BYREF
  __int64 v1372; // [rsp+218h] [rbp+118h]
  int v1373; // [rsp+220h] [rbp+120h]
  _DWORD *v1374; // [rsp+228h] [rbp+128h] BYREF
  _DWORD *v1375; // [rsp+230h] [rbp+130h] BYREF
  unsigned int *v1376; // [rsp+238h] [rbp+138h] BYREF
  unsigned int *v1377; // [rsp+240h] [rbp+140h] BYREF
  unsigned int *v1378; // [rsp+248h] [rbp+148h] BYREF
  _DWORD *v1379; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v1380; // [rsp+258h] [rbp+158h] BYREF
  __int64 *kk; // [rsp+260h] [rbp+160h] BYREF
  _DWORD *v1382; // [rsp+268h] [rbp+168h] BYREF
  unsigned int *v1383; // [rsp+270h] [rbp+170h] BYREF
  __int64 v1384; // [rsp+278h] [rbp+178h]
  unsigned __int64 v1385; // [rsp+280h] [rbp+180h]
  unsigned int v1386; // [rsp+290h] [rbp+190h]
  int v1387; // [rsp+294h] [rbp+194h]
  int v1388; // [rsp+298h] [rbp+198h]
  _QWORD *v1389; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v1390; // [rsp+2A8h] [rbp+1A8h]
  unsigned int v1391; // [rsp+2ACh] [rbp+1ACh]
  int v1392; // [rsp+2B0h] [rbp+1B0h]
  int v1393; // [rsp+2B4h] [rbp+1B4h]
  int v1394; // [rsp+2B8h] [rbp+1B8h]
  int v1395; // [rsp+2BCh] [rbp+1BCh] BYREF
  unsigned int v1396; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v1397; // [rsp+2C4h] [rbp+1C4h]
  int v1398; // [rsp+2C8h] [rbp+1C8h]
  unsigned int v1399; // [rsp+2CCh] [rbp+1CCh] BYREF
  unsigned int v1400; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1401; // [rsp+2D8h] [rbp+1D8h]
  void *v1402; // [rsp+2E0h] [rbp+1E0h]
  int v1403; // [rsp+2E8h] [rbp+1E8h]
  unsigned int v1404; // [rsp+2ECh] [rbp+1ECh] BYREF
  unsigned int v1405; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned int v1406; // [rsp+2F4h] [rbp+1F4h] BYREF
  unsigned int v1407; // [rsp+2F8h] [rbp+1F8h] BYREF
  int v1408; // [rsp+2FCh] [rbp+1FCh]
  AtmosCheck *v1409; // [rsp+300h] [rbp+200h]
  int v1410; // [rsp+308h] [rbp+208h] BYREF
  unsigned int v1411; // [rsp+30Ch] [rbp+20Ch]
  int v1412; // [rsp+310h] [rbp+210h]
  wchar_t *v1413; // [rsp+318h] [rbp+218h] BYREF
  unsigned int v1414; // [rsp+320h] [rbp+220h]
  int v1415; // [rsp+324h] [rbp+224h]
  wchar_t *v1416; // [rsp+328h] [rbp+228h] BYREF
  int v1417; // [rsp+330h] [rbp+230h]
  __int128 v1418; // [rsp+338h] [rbp+238h]
  unsigned __int64 v1419; // [rsp+348h] [rbp+248h]
  LPVOID v1420; // [rsp+350h] [rbp+250h]
  __int128 v1421; // [rsp+358h] [rbp+258h]
  LPVOID v1422; // [rsp+368h] [rbp+268h]
  LPVOID v1423; // [rsp+370h] [rbp+270h]
  LPCWSTR v1424; // [rsp+378h] [rbp+278h]
  void *v1425; // [rsp+380h] [rbp+280h] BYREF
  LPCWSTR lpModuleName; // [rsp+388h] [rbp+288h]
  LPCWSTR v1427; // [rsp+390h] [rbp+290h]
  __int64 v1428; // [rsp+398h] [rbp+298h] BYREF
  SIZE_T v1429; // [rsp+3A0h] [rbp+2A0h] BYREF
  void *v1430; // [rsp+3A8h] [rbp+2A8h] BYREF
  LPCWSTR v1431; // [rsp+3B0h] [rbp+2B0h]
  void *v1432; // [rsp+3B8h] [rbp+2B8h] BYREF
  void *v1433; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v1434; // [rsp+3C8h] [rbp+2C8h] BYREF
  int v1435; // [rsp+3D0h] [rbp+2D0h]
  int v1436[2]; // [rsp+3D4h] [rbp+2D4h] BYREF
  int v1437; // [rsp+3DCh] [rbp+2DCh]
  int v1438; // [rsp+3E0h] [rbp+2E0h]
  int v1439; // [rsp+3E4h] [rbp+2E4h]
  unsigned int v1440; // [rsp+3E8h] [rbp+2E8h]
  int v1441; // [rsp+3ECh] [rbp+2ECh]
  int v1442; // [rsp+3F0h] [rbp+2F0h]
  unsigned int v1443; // [rsp+3F4h] [rbp+2F4h]
  int v1444; // [rsp+3F8h] [rbp+2F8h]
  int v1445; // [rsp+3FCh] [rbp+2FCh] BYREF
  int v1446; // [rsp+400h] [rbp+300h] BYREF
  int v1447; // [rsp+404h] [rbp+304h] BYREF
  int v1448; // [rsp+408h] [rbp+308h]
  unsigned int v1449; // [rsp+410h] [rbp+310h] BYREF
  unsigned int v1450; // [rsp+414h] [rbp+314h] BYREF
  unsigned int v1451; // [rsp+418h] [rbp+318h]
  unsigned int v1452; // [rsp+41Ch] [rbp+31Ch] BYREF
  unsigned int v1453; // [rsp+420h] [rbp+320h] BYREF
  unsigned int v1454; // [rsp+424h] [rbp+324h]
  unsigned int v1455; // [rsp+428h] [rbp+328h] BYREF
  unsigned int v1456; // [rsp+42Ch] [rbp+32Ch] BYREF
  unsigned int v1457; // [rsp+430h] [rbp+330h]
  int v1458; // [rsp+434h] [rbp+334h] BYREF
  int v1459; // [rsp+438h] [rbp+338h] BYREF
  int v1460; // [rsp+43Ch] [rbp+33Ch]
  int v1461; // [rsp+440h] [rbp+340h]
  int v1462; // [rsp+444h] [rbp+344h]
  int v1463[2]; // [rsp+448h] [rbp+348h] BYREF
  int v1464; // [rsp+450h] [rbp+350h] BYREF
  int v1465; // [rsp+454h] [rbp+354h] BYREF
  int v1466; // [rsp+458h] [rbp+358h] BYREF
  int v1467; // [rsp+45Ch] [rbp+35Ch] BYREF
  int v1468; // [rsp+460h] [rbp+360h] BYREF
  int v1469; // [rsp+464h] [rbp+364h] BYREF
  int v1470; // [rsp+468h] [rbp+368h] BYREF
  int v1471; // [rsp+46Ch] [rbp+36Ch] BYREF
  int v1472; // [rsp+470h] [rbp+370h]
  int v1473; // [rsp+478h] [rbp+378h] BYREF
  unsigned int v1474; // [rsp+47Ch] [rbp+37Ch] BYREF
  int v1475; // [rsp+480h] [rbp+380h] BYREF
  unsigned int v1476; // [rsp+484h] [rbp+384h] BYREF
  int v1477; // [rsp+488h] [rbp+388h] BYREF
  unsigned int v1478; // [rsp+48Ch] [rbp+38Ch] BYREF
  int v1479; // [rsp+490h] [rbp+390h] BYREF
  wchar_t *v1480; // [rsp+498h] [rbp+398h] BYREF
  wchar_t *String1; // [rsp+4A0h] [rbp+3A0h] BYREF
  int *v1482; // [rsp+4A8h] [rbp+3A8h] BYREF
  int *v1483; // [rsp+4B0h] [rbp+3B0h] BYREF
  int *v1484; // [rsp+4B8h] [rbp+3B8h] BYREF
  size_t v1485; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v1486; // [rsp+4C8h] [rbp+3C8h] BYREF
  int *v1487; // [rsp+4D0h] [rbp+3D0h] BYREF
  int *v1488; // [rsp+4D8h] [rbp+3D8h] BYREF
  LPVOID v1489; // [rsp+4E0h] [rbp+3E0h]
  int *v1490; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 v1491; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int64 v1492; // [rsp+4F8h] [rbp+3F8h] BYREF
  unsigned int v1493; // [rsp+500h] [rbp+400h] BYREF
  int *v1494; // [rsp+508h] [rbp+408h] BYREF
  int *v1495; // [rsp+510h] [rbp+410h] BYREF
  int *v1496; // [rsp+518h] [rbp+418h] BYREF
  LPVOID v1497; // [rsp+520h] [rbp+420h]
  _DWORD *v1498; // [rsp+528h] [rbp+428h] BYREF
  void *v1499; // [rsp+530h] [rbp+430h] BYREF
  int v1500; // [rsp+538h] [rbp+438h] BYREF
  unsigned int v1501; // [rsp+53Ch] [rbp+43Ch] BYREF
  int v1502; // [rsp+540h] [rbp+440h]
  int v1503; // [rsp+548h] [rbp+448h] BYREF
  unsigned int v1504; // [rsp+54Ch] [rbp+44Ch] BYREF
  int v1505; // [rsp+550h] [rbp+450h]
  int v1506; // [rsp+558h] [rbp+458h] BYREF
  int v1507; // [rsp+55Ch] [rbp+45Ch] BYREF
  int v1508; // [rsp+560h] [rbp+460h] BYREF
  int v1509; // [rsp+564h] [rbp+464h] BYREF
  int v1510; // [rsp+568h] [rbp+468h] BYREF
  int v1511; // [rsp+56Ch] [rbp+46Ch]
  __int64 v1512; // [rsp+570h] [rbp+470h]
  __int64 v1513; // [rsp+578h] [rbp+478h]
  unsigned __int64 v1514; // [rsp+588h] [rbp+488h]
  __int64 (__fastcall *v1515)(); // [rsp+590h] [rbp+490h] BYREF
  unsigned __int64 v1516; // [rsp+598h] [rbp+498h]
  __int64 (__fastcall *v1517)(); // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned __int64 v1518; // [rsp+5A8h] [rbp+4A8h]
  __int64 v1519; // [rsp+5B0h] [rbp+4B0h]
  SIZE_T v1520; // [rsp+5B8h] [rbp+4B8h]
  __int64 (__fastcall *v1521)(); // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned __int64 v1522; // [rsp+5C8h] [rbp+4C8h]
  unsigned __int64 v1523; // [rsp+5D0h] [rbp+4D0h]
  __int64 (__fastcall *v1524)(); // [rsp+5D8h] [rbp+4D8h] BYREF
  size_t v1525; // [rsp+5E0h] [rbp+4E0h]
  size_t v1526; // [rsp+5E8h] [rbp+4E8h]
  unsigned __int64 v1527; // [rsp+5F0h] [rbp+4F0h]
  size_t Size; // [rsp+5F8h] [rbp+4F8h]
  size_t v1529; // [rsp+600h] [rbp+500h]
  size_t pcchLength; // [rsp+608h] [rbp+508h] BYREF
  unsigned __int64 v1531; // [rsp+610h] [rbp+510h]
  SIZE_T v1532; // [rsp+618h] [rbp+518h]
  unsigned __int64 v1533; // [rsp+620h] [rbp+520h]
  unsigned __int16 *v1534; // [rsp+628h] [rbp+528h]
  unsigned __int16 *v1535; // [rsp+630h] [rbp+530h]
  void *v1536; // [rsp+638h] [rbp+538h]
  int v1537; // [rsp+640h] [rbp+540h] BYREF
  __int64 v1538; // [rsp+644h] [rbp+544h]
  int v1539; // [rsp+64Ch] [rbp+54Ch]
  __int64 v1540; // [rsp+650h] [rbp+550h]
  unsigned int *v1541; // [rsp+658h] [rbp+558h]
  unsigned int *v1542; // [rsp+660h] [rbp+560h]
  HMODULE phModule; // [rsp+668h] [rbp+568h] BYREF
  unsigned __int64 v1544; // [rsp+670h] [rbp+570h] BYREF
  unsigned __int64 v1545; // [rsp+678h] [rbp+578h] BYREF
  unsigned __int64 v1546; // [rsp+680h] [rbp+580h] BYREF
  int *v1547; // [rsp+688h] [rbp+588h]
  _DWORD *v1548; // [rsp+690h] [rbp+590h]
  _DWORD *v1549; // [rsp+698h] [rbp+598h]
  _DWORD *v1550; // [rsp+6A0h] [rbp+5A0h]
  _DWORD *v1551; // [rsp+6A8h] [rbp+5A8h]
  unsigned int *v1552; // [rsp+6B0h] [rbp+5B0h]
  __int64 v1553; // [rsp+6B8h] [rbp+5B8h]
  __int64 v1554; // [rsp+6C0h] [rbp+5C0h] BYREF
  __int64 v1555; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v1556; // [rsp+6D0h] [rbp+5D0h] BYREF
  __int64 v1557; // [rsp+6D8h] [rbp+5D8h] BYREF
  int v1558; // [rsp+6E0h] [rbp+5E0h]
  __int64 v1559; // [rsp+6E8h] [rbp+5E8h] BYREF
  __int64 v1560; // [rsp+6F0h] [rbp+5F0h] BYREF
  void *v1561; // [rsp+6F8h] [rbp+5F8h]
  void *v1562; // [rsp+700h] [rbp+600h]
  unsigned __int64 v1563; // [rsp+708h] [rbp+608h]
  unsigned __int64 v1564; // [rsp+710h] [rbp+610h]
  SIZE_T v1565; // [rsp+718h] [rbp+618h]
  __int64 *v1566; // [rsp+720h] [rbp+620h]
  __int64 v1567; // [rsp+728h] [rbp+628h]
  __int64 *v1568; // [rsp+730h] [rbp+630h]
  __int64 v1569; // [rsp+738h] [rbp+638h]
  unsigned int *v1570; // [rsp+740h] [rbp+640h]
  unsigned int *v1571; // [rsp+748h] [rbp+648h]
  HMODULE hModule; // [rsp+750h] [rbp+650h] BYREF
  unsigned __int64 v1573; // [rsp+758h] [rbp+658h] BYREF
  unsigned __int64 v1574; // [rsp+760h] [rbp+660h] BYREF
  unsigned __int64 v1575; // [rsp+768h] [rbp+668h] BYREF
  _DWORD *v1576; // [rsp+770h] [rbp+670h]
  int v1577; // [rsp+778h] [rbp+678h]
  unsigned int v1578; // [rsp+77Ch] [rbp+67Ch]
  void *Src; // [rsp+780h] [rbp+680h]
  void *v1580; // [rsp+788h] [rbp+688h]
  unsigned __int64 v1581; // [rsp+790h] [rbp+690h]
  SIZE_T v1582; // [rsp+798h] [rbp+698h]
  _BYTE v1583[16]; // [rsp+7A0h] [rbp+6A0h] BYREF
  __int64 *v1584; // [rsp+7B0h] [rbp+6B0h]
  __int64 v1585; // [rsp+7B8h] [rbp+6B8h]
  _OWORD *v1586; // [rsp+7C0h] [rbp+6C0h]
  _QWORD v1587[2]; // [rsp+7C8h] [rbp+6C8h] BYREF
  unsigned int v1588; // [rsp+7D8h] [rbp+6D8h]
  unsigned int v1589; // [rsp+7DCh] [rbp+6DCh]
  int v1590; // [rsp+7E0h] [rbp+6E0h]
  _QWORD v1591[2]; // [rsp+7E8h] [rbp+6E8h] BYREF
  unsigned int v1592; // [rsp+7F8h] [rbp+6F8h]
  unsigned int v1593; // [rsp+7FCh] [rbp+6FCh]
  int v1594; // [rsp+800h] [rbp+700h]
  __int64 v1595[4]; // [rsp+810h] [rbp+710h] BYREF
  _DWORD *v1596; // [rsp+830h] [rbp+730h] BYREF
  void *v1597; // [rsp+840h] [rbp+740h] BYREF
  void *v1598; // [rsp+850h] [rbp+750h] BYREF
  unsigned __int64 *v1599; // [rsp+860h] [rbp+760h] BYREF
  void *v1600; // [rsp+870h] [rbp+770h] BYREF
  int *v1601; // [rsp+880h] [rbp+780h] BYREF
  int *v1602; // [rsp+890h] [rbp+790h] BYREF
  void *v1603; // [rsp+8A0h] [rbp+7A0h] BYREF
  void *v1604; // [rsp+8B0h] [rbp+7B0h] BYREF
  __int64 v1605[2]; // [rsp+8C0h] [rbp+7C0h] BYREF
  void *v1606[14]; // [rsp+8D0h] [rbp+7D0h] BYREF
  _QWORD v1607[14]; // [rsp+940h] [rbp+840h] BYREF
  _QWORD v1608[14]; // [rsp+9B0h] [rbp+8B0h] BYREF
  _QWORD v1609[14]; // [rsp+A20h] [rbp+920h] BYREF
  _QWORD v1610[14]; // [rsp+A90h] [rbp+990h] BYREF
  _QWORD v1611[14]; // [rsp+B00h] [rbp+A00h] BYREF
  _QWORD v1612[14]; // [rsp+B70h] [rbp+A70h] BYREF
  _QWORD v1613[14]; // [rsp+BE0h] [rbp+AE0h] BYREF
  _QWORD v1614[14]; // [rsp+C50h] [rbp+B50h] BYREF
  _QWORD v1615[14]; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 v1616; // [rsp+D30h] [rbp+C30h] BYREF
  __int64 v1617; // [rsp+D38h] [rbp+C38h]
  __int64 v1618; // [rsp+D40h] [rbp+C40h] BYREF
  __int64 v1619; // [rsp+D48h] [rbp+C48h]
  __int64 v1620; // [rsp+D50h] [rbp+C50h] BYREF
  __int64 v1621; // [rsp+D58h] [rbp+C58h]
  __int64 v1622; // [rsp+D60h] [rbp+C60h] BYREF
  __int64 v1623; // [rsp+D68h] [rbp+C68h]
  __int64 v1624; // [rsp+D70h] [rbp+C70h] BYREF
  int v1625; // [rsp+D78h] [rbp+C78h]
  int v1626; // [rsp+D7Ch] [rbp+C7Ch]
  _DWORD v1627[10]; // [rsp+D80h] [rbp+C80h] BYREF
  _DWORD v1628[12]; // [rsp+DA8h] [rbp+CA8h] BYREF
  _DWORD v1629[12]; // [rsp+DD8h] [rbp+CD8h] BYREF
  _DWORD v1630[12]; // [rsp+E08h] [rbp+D08h] BYREF
  _DWORD v1631[12]; // [rsp+E38h] [rbp+D38h] BYREF
  _DWORD v1632[12]; // [rsp+E68h] [rbp+D68h] BYREF
  _DWORD v1633[10]; // [rsp+E98h] [rbp+D98h] BYREF
  _DWORD v1634[24]; // [rsp+EC0h] [rbp+DC0h] BYREF
  _DWORD v1635[24]; // [rsp+F20h] [rbp+E20h] BYREF
  _DWORD v1636[24]; // [rsp+F80h] [rbp+E80h] BYREF
  char v1637[12]; // [rsp+FE0h] [rbp+EE0h] BYREF
  unsigned int v1638; // [rsp+FECh] [rbp+EECh]
  _DWORD v1639[56]; // [rsp+1000h] [rbp+F00h] BYREF
  _DWORD v1640[16]; // [rsp+10E0h] [rbp+FE0h] BYREF
  _QWORD v1641[6]; // [rsp+1120h] [rbp+1020h] BYREF
  _QWORD v1642[20]; // [rsp+1150h] [rbp+1050h] BYREF
  __int16 v1643; // [rsp+11F0h] [rbp+10F0h] BYREF
  int v1644; // [rsp+11F2h] [rbp+10F2h]
  _BYTE v1645[176]; // [rsp+1200h] [rbp+1100h] BYREF
  WCHAR Filename[264]; // [rsp+12B0h] [rbp+11B0h] BYREF

  v1409 = this;
  v1499 = 0LL;
  v1576 = (_DWORD *)((char *)this + 120);
  v1 = this;
  if ( this == (AtmosCheck *)-120LL )
    goto LABEL_1723;
  v1412 = 0;
  v1391 = 0;
  v1371 = 0LL;
  v1350 = 0;
  while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
    ;
  v2 = dword_18012B824;
  v1354 = -1;
  if ( dword_18012B824 )
    goto LABEL_47;
  v1266 = 0;
  lpModuleName = 0LL;
  v1522 = 0LL;
  v3 = (char *)operator new(0x338uLL);
  v1347 = v3;
  if ( v3 )
  {
    v4 = v3 + 7;
    v5 = 0;
    v1327 = 0;
    v6 = -1;
    v1331 = 0;
    v7 = 0;
    v8 = (unsigned __int8 *)&unk_1800EDAE2;
    v9 = 103LL;
    v10 = 0;
    do
    {
      v11 = *(v8 - 1) | (*(v8 - 2) << 8);
      v12 = v8[2] << 8;
      v13 = *v8;
      v8 += 8;
      v14 = *(v8 - 7) | ((v13 | (v11 << 8)) << 8);
      v15 = v14 ^ v10;
      v16 = *(v8 - 3) | ((*(v8 - 4) | ((*(v8 - 5) | v12) << 8)) << 8);
      v17 = v15 ^ v16 ^ v7 ^ 0xAC987321;
      v18 = (__ROL4__(v17, 10) + 4991 * __ROL4__(v17 + 1419157410, 5)) ^ v15;
      v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROL4__(v18, 2)) ^ v17;
      v20 = (24670 * (v19 - 4991) - (v19 >> 13)) ^ v18;
      v21 = (2033 * __ROL4__(v20 ^ 0xAB69, 6) - __ROL4__(v20, 2)) ^ v19;
      v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
      v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
      v24 = (__ROL4__(v23, 2) + 24670 * __ROR4__(v23 + 133239679, 15)) ^ v22;
      v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROL4__(v24, 8)) ^ v23;
      v26 = __ROR4__(v25, 10) ^ (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ v24;
      v27 = (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1)) ^ v25;
      v28 = (2033 * (__ROR4__(~v27, 5) + 24670)) ^ v26;
      v29 = v27 ^ (v28 - 2033) ^ 0xAB69605E;
      v30 = ((v29 >> 2) + 4991 * __ROL4__(v27 ^ (v28 - 2033) ^ 0xAB6967AF, 2)) ^ v28;
      v31 = (__ROL4__(v30, 7) + 43881 * __ROR4__(v30 - 133239679, 6)) ^ v29;
      v32 = (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9)) ^ v30;
      v33 = (__ROL4__(v32, 7) + 2033 * __ROL4__(v32 ^ 0xAB69, 5)) ^ v31;
      v34 = v32 ^ v33 ^ 0xAC987321;
      v35 = (4991 * (__ROR4__(v34, 3) - 43881)) ^ v33;
      v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
      v37 = (__ROL4__(v36, 14) + 2033 * __ROL4__(v36 - 1419157410, 3)) ^ v35;
      v38 = (4991 * __ROL4__(v37 - 1419157410, 15) - __ROR4__(v37, 14)) ^ v36;
      v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
      v1327 = v6 ^ v39;
      v6 = v16;
      v40 = v5 ^ __ROL4__(v39, 2) ^ (24670 * __ROL4__(v39 ^ 0x7F1137F, 4));
      v5 = v14;
      v1331 = v40 ^ v38;
      *(v4 - 4) = v40 ^ v38;
      v1331 = __ROR4__(v1331, 8);
      *v4 = v1327;
      v4 += 8;
      v1327 = __ROR4__(v1327, 8);
      *(v4 - 13) = v1331;
      v1331 = __ROR4__(v1331, 8);
      *(v4 - 9) = v1327;
      v1327 = __ROR4__(v1327, 8);
      *(v4 - 14) = v1331;
      v1331 = __ROR4__(v1331, 8);
      *(v4 - 10) = v1327;
      v1327 = __ROR4__(v1327, 8);
      *(v4 - 15) = v1331;
      *(v4 - 11) = v1327;
      v10 = __ROR4__(v1331, 8);
      v7 = __ROR4__(v1327, 8);
      v1331 = v10;
      v1327 = v7;
      --v9;
    }
    while ( v9 );
    v41 = v1347;
    v42 = 0;
    v43 = 0LL;
    FunctionAddress = 0;
    v45 = 0;
    do
      v42 ^= *((_BYTE *)v1347 + v43++);
    while ( v43 < 0x338 );
    if ( v42 == 64LL )
    {
      lpModuleName = (LPCWSTR)v1347;
      v41 = 0LL;
      v1522 = 824LL;
      v46 = 0;
    }
    else
    {
      v46 = -1073425151;
    }
    if ( v41 )
      operator delete(v41);
    if ( v46 >= 0 )
    {
      v47 = lpModuleName;
      HIBYTE(lpModuleName[v1522 / 2 - 1]) = 0;
      memset(&unk_18012C460, 0, 0x60uLL);
      if ( !*(_BYTE *)v47 )
        goto LABEL_38;
      while ( 1 )
      {
        v48 = -1LL;
        v49 = v47;
        FunctionAddress = 0;
        do
          ++v48;
        while ( v47[v48] );
        v50 = &v47[v48];
        v51 = (char *)&unk_18012C460 + 24 * v45;
        if ( !GetModuleHandleExW(0, v49, (HMODULE *)v51) )
          break;
        if ( **(_WORD **)v51 == 23117
          && (v52 = *(int *)(*(_QWORD *)v51 + 60LL), (unsigned int)v52 < 0x10000000)
          && (v53 = *(_QWORD *)v51 + v52, v53 >= *(_QWORD *)v51)
          && *(_DWORD *)v53 == 17744 )
        {
          if ( ((*(_WORD *)(v53 + 24) - 267) & 0xFEFF) != 0 )
          {
            FunctionAddress = -1073741811;
          }
          else
          {
            *(_QWORD *)(v51 + 12) = *(_QWORD *)(v53 + 136);
            *((_DWORD *)v51 + 2) = *(_DWORD *)(v53 + 80);
          }
        }
        else
        {
          FunctionAddress = -1073741701;
        }
        v54 = *(_DWORD *)(v50 + 1);
        v47 = v50 + 3;
        for ( i = 0; i < v54; ++i )
        {
          v1521 = 0LL;
          v56 = (unsigned __int8 *)v47;
          v57 = -1LL;
          do
            ++v57;
          while ( *((_BYTE *)v47 + v57) );
          v47 = (LPCWSTR)((char *)v47 + v57 + 1);
          if ( FunctionAddress >= 0 )
          {
            FunctionAddress = WARBIRD::GetFunctionAddress(v56, 0, (__int64)v51, (const char **)&v1521);
            if ( FunctionAddress < 0 )
              goto LABEL_38;
            off_18012A000[v1266] = v1521;
          }
          ++v1266;
        }
        ++v45;
        if ( !*(_BYTE *)v47 )
          goto LABEL_38;
      }
    }
  }
  FunctionAddress = -1073741702;
LABEL_38:
  if ( lpModuleName )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, (LPVOID)lpModuleName);
  }
  if ( FunctionAddress >= 0 )
  {
    v2 = dword_18012B824;
LABEL_47:
    dword_18012B824 = v2 + 1;
    goto LABEL_48;
  }
  v59 = 4LL;
  v60 = (HMODULE *)&unk_18012C460;
  do
  {
    if ( *v60 )
      FreeLibrary(*v60);
    v60 += 3;
    --v59;
  }
  while ( v59 );
  memset(&unk_18012C460, 0, 0x60uLL);
  memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
LABEL_48:
  _InterlockedExchange(&dword_18012C4D8, 0);
  String1 = 0LL;
  v61 = 0;
  v1480 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
  {
LABEL_90:
    v1350 = v61;
    goto LABEL_91;
  }
  v63 = off_18012A110[0]();
  if ( !v63 )
  {
LABEL_50:
    LastError = GetLastError();
    v64 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v64 = LastError < 0;
    }
    if ( !v64 )
      LastError = -2147467259;
    goto LABEL_91;
  }
  v65 = 0LL;
  v1416 = 0LL;
  v66 = 0LL;
  while ( 1 )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_18012A130[0])(
           v63,
           2LL,
           v65,
           v66,
           &v1406) )
    {
      String1 = v65;
      goto LABEL_67;
    }
    v67 = GetLastError();
    if ( v67 != 122 )
      break;
    if ( v65 )
      goto LABEL_61;
    v65 = (wchar_t *)operator new(v1406);
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1416);
    if ( !v65 )
    {
      LastError = -2147024882;
LABEL_67:
      v1416 = 0LL;
      goto LABEL_68;
    }
    v66 = v1406;
    v1416 = v65;
  }
  if ( !v67 )
  {
LABEL_61:
    LastError = -2147467259;
    goto LABEL_68;
  }
  if ( v67 > 0 )
    LastError = (unsigned __int16)v67 | 0x80070000;
  else
    LastError = v67;
LABEL_68:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1416);
  if ( LastError >= 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v69 = ((__int64 (__fastcall *)(_QWORD))off_18012A128[0])(CurrentThreadId);
    if ( !v69 )
      goto LABEL_50;
    v70 = 0LL;
    v1413 = 0LL;
    LastError = 0;
    v71 = 0LL;
    while ( 1 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_18012A130[0])(
             v69,
             2LL,
             v70,
             v71,
             &v1405) )
      {
        v1480 = v70;
        goto LABEL_83;
      }
      v72 = GetLastError();
      if ( v72 != 122 )
        break;
      if ( v70 )
        goto LABEL_77;
      v70 = (wchar_t *)operator new(v1405);
      SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1413);
      if ( !v70 )
      {
        LastError = -2147024882;
LABEL_83:
        v1413 = 0LL;
        goto LABEL_84;
      }
      v71 = v1405;
      v1413 = v70;
    }
    if ( !v72 )
    {
LABEL_77:
      LastError = -2147467259;
      goto LABEL_84;
    }
    LastError = v72 > 0 ? (unsigned __int16)v72 | 0x80070000 : v72;
LABEL_84:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1413);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1480 && !wcscmp_0(v1480, L"Default") )
        v61 = 1;
      goto LABEL_90;
    }
  }
LABEL_91:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1480);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&String1);
  v73 = v1350;
  if ( LastError < 0 )
    v73 = 0;
  v1350 = v73;
  v1391 = 0;
  v74 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1371, (__int64)v74);
  v75 = v1371;
  v1335 = v1371;
  if ( SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull((__int64)v1371) || !v75 )
  {
    v80 = -2147024882;
LABEL_1710:
    v980 = v1349;
    goto LABEL_1711;
  }
  v76 = 0LL;
  v1302 = 0;
  v77 = 0LL;
  lpMem = 0LL;
  v1417 = 0;
  v1367 = 0LL;
  v1368 = 0LL;
  v1373 = 0;
  Src = &unk_18012ADC0;
  Size = 160LL;
  v78 = GetProcessHeap();
  v79 = HeapAlloc(v78, 8u, 0xA0uLL);
  v80 = -1073741801;
  v81 = v79;
  if ( !v79 )
    goto LABEL_96;
  memcpy_0(v79, Src, Size);
  v82 = (unsigned int)Size;
  v76 = v81;
  v1272 = v81;
  v1580 = &unk_18012AD00;
  v1529 = 8LL;
  v83 = GetProcessHeap();
  v84 = (unsigned __int16 *)HeapAlloc(v83, 8u, 8uLL);
  v85 = v84;
  if ( !v84 )
  {
LABEL_96:
    v1265 = -1073741801;
    goto LABEL_227;
  }
  memcpy_0(v84, v1580, v1529);
  v86 = v1529;
  v77 = v85;
  v1308 = v85;
  v1533 = __rdtsc();
  dwBytes = 0;
  v87 = RtlUIntAdd(4u, 4, &v1465);
  v88 = v1351;
  v80 = v87;
  v1265 = v87;
  if ( v87 >= 0 )
    v88 = v1465;
  v1351 = v88;
  if ( v87 < 0 )
    goto LABEL_117;
  v89 = RtlUIntAdd(0, v88, (int *)&dwBytes);
  v80 = v89 | 0x10000000;
  v1265 = v89 | 0x10000000;
  if ( v89 < 0 )
    goto LABEL_117;
  v90 = RtlUIntAdd(4u, v82, &v1466);
  v1265 = v90;
  v80 = v90;
  if ( v90 >= 0 )
    v88 = v1466;
  v1351 = v88;
  if ( v90 < 0 )
    goto LABEL_117;
  v91 = RtlUIntAdd(dwBytes, v88, (int *)&dwBytes);
  v80 = v92 | v91;
  v1265 = v92 | v91;
  if ( (v92 | v91) < 0 )
    goto LABEL_117;
  v93 = RtlUIntAdd(4u, v86, &v1467);
  v1265 = v93;
  v80 = v93;
  if ( v93 >= 0 )
    v88 = v1467;
  v1351 = v88;
  if ( v93 < 0 )
    goto LABEL_117;
  v94 = RtlUIntAdd(dwBytes, v88, (int *)&dwBytes);
  v80 = v95 | v94;
  v1265 = v95 | v94;
  if ( (v95 | v94) < 0 )
    goto LABEL_117;
  v96 = RtlUIntAdd(4u, 8, &v1468);
  v1265 = v96;
  v80 = v96;
  if ( v96 >= 0 )
    v88 = v1468;
  v1351 = v88;
  if ( v96 < 0 )
    goto LABEL_117;
  v97 = RtlUIntAdd(dwBytes, v88, (int *)&dwBytes);
  v80 = v100 | v97;
  v1265 = v100 | v97;
  if ( (v100 | v97) < 0 )
    goto LABEL_117;
  if ( StringCchLengthW(v99, v98, &pcchLength) < 0 )
    goto LABEL_115;
  v101 = RtlUIntAdd(4u, 2 * (int)++pcchLength, &v1469);
  v1265 = v101;
  v80 = v101;
  if ( v101 >= 0 )
    v88 = v1469;
  v1351 = v88;
  if ( v101 < 0 )
    goto LABEL_117;
  v102 = RtlUIntAdd(dwBytes, v88, (int *)&dwBytes);
  v80 = v103 | v102;
  v1265 = v103 | v102;
  if ( (v103 | v102) < 0 )
    goto LABEL_117;
  v104 = RtlUIntAdd(4u, 4, &v1470);
  v1265 = v104;
  v80 = v104;
  if ( v104 >= 0 )
    v88 = v1470;
  v1351 = v88;
  if ( v104 < 0 )
    goto LABEL_117;
  v105 = RtlUIntAdd(dwBytes, v88, (int *)&dwBytes);
  v80 = v106 | v105;
  v1265 = v106 | v105;
  if ( (v106 | v105) < 0 )
    goto LABEL_117;
  v107 = RtlUIntAdd(4u, 4, &v1471);
  v1265 = v107;
  v80 = v107;
  if ( v107 >= 0 )
    v88 = v1471;
  v1351 = v88;
  if ( v107 < 0 )
    goto LABEL_117;
  v108 = RtlUIntAdd(dwBytes, v88, (int *)&dwBytes);
  v80 = v109 | v108;
  v1265 = v109 | v108;
  if ( (v109 | v108) < 0 )
    goto LABEL_117;
  v1302 = dwBytes;
  v110 = dwBytes;
  v111 = GetProcessHeap();
  v112 = HeapAlloc(v111, 8u, v110);
  if ( !v112 )
  {
    v80 = -1073741801;
    goto LABEL_116;
  }
  lpMem = v112;
  v1472 = 0;
  v80 = RtlULongLongAdd((unsigned __int64)v112, 4LL, v1595);
  v1265 = v80;
  if ( v80 < 0 )
    goto LABEL_117;
  if ( v112 + 2 > (_DWORD *)((char *)v112 + v1302) )
  {
LABEL_134:
    v80 = -1073741789;
    goto LABEL_116;
  }
  v114 = (_DWORD *)v1595[0];
  *v112 = v113;
  *v114 = v1472;
  v1301 = 1;
  if ( !(_DWORD)v82 )
  {
    v80 = -1073741811;
    v1265 = -1073741811;
    goto LABEL_152;
  }
  if ( lpMem )
  {
    v117 = (int *)lpMem;
    v1482 = (int *)lpMem;
    while ( 1 )
    {
      v80 = RtlUIntAdd(4u, *v117, (int *)&v1474);
      v1265 = v80;
      if ( v80 >= 0 )
        v118 = v1474;
      v1393 = v118;
      if ( v80 < 0 )
        break;
      v80 = RtlULongLongAdd((unsigned __int64)v117, v118, (__int64 *)&v1482);
      v1265 = v80;
      if ( v80 < 0 )
        break;
      v117 = v1482;
      if ( v119 != -1 )
      {
        v80 = RtlULongLongAdd((unsigned __int64)v1482, 4LL, (__int64 *)&v1597);
        v1265 = v80;
        if ( v80 < 0 )
          break;
        if ( (char *)v117 + v82 + 4 <= (char *)lpMem + v1302 )
        {
          v120 = v1597;
          *v117 = v82;
          memcpy_0(v120, v81, v82);
          v1301 = 2;
          break;
        }
        goto LABEL_134;
      }
    }
LABEL_152:
    if ( v80 < 0 )
      goto LABEL_117;
    goto LABEL_153;
  }
  v115 = RtlUIntAdd(4u, v82, &v1473);
  v116 = v1393;
  v80 = v115;
  v1265 = v115;
  if ( v115 >= 0 )
    v116 = v1473;
  v1393 = v116;
  if ( v115 < 0 )
    goto LABEL_152;
  v80 = RtlUIntAdd(v1302, v116, (int *)&v1302);
  v1265 = v80;
  if ( v80 < 0 )
    goto LABEL_117;
  v1301 = 2;
LABEL_153:
  if ( !v86 )
  {
    v80 = -1073741811;
    v1265 = -1073741811;
LABEL_169:
    v121 = 4LL;
    goto LABEL_173;
  }
  if ( !lpMem )
  {
    v121 = 4LL;
    v122 = RtlUIntAdd(4u, v86, &v1475);
    v123 = v1392;
    v80 = v122;
    v1265 = v122;
    if ( v122 >= 0 )
      v123 = v1475;
    v1392 = v123;
    if ( v122 < 0 )
      goto LABEL_117;
    v1265 = RtlUIntAdd(v1302, v123, (int *)&v1302);
    v80 = v1265;
    if ( v1265 < 0 )
      goto LABEL_117;
    ++v1301;
    goto LABEL_174;
  }
  v124 = (int *)lpMem;
  v1483 = (int *)lpMem;
  do
  {
    v125 = RtlUIntAdd(4u, *v124, (int *)&v1476);
    v1265 = v125;
    v80 = v125;
    if ( v125 >= 0 )
      v127 = v1476;
    v1392 = v127;
    if ( v125 < 0 )
    {
      v121 = v126;
      goto LABEL_173;
    }
    v1265 = RtlULongLongAdd((unsigned __int64)v124, v127, (__int64 *)&v1483);
    v80 = v1265;
    if ( v1265 < 0 )
      goto LABEL_169;
    v124 = v1483;
  }
  while ( v128 + 1 < v1301 );
  v1265 = RtlULongLongAdd((unsigned __int64)v1483, 4LL, (__int64 *)&v1598);
  v80 = v1265;
  if ( v1265 >= 0 )
  {
    if ( (char *)v124 + v86 + 4 > (char *)lpMem + v1302 )
      goto LABEL_134;
    v130 = v1598;
    *v124 = v86;
    memcpy_0(v130, v85, v86);
    ++v1301;
    goto LABEL_169;
  }
  v121 = v129;
LABEL_173:
  if ( v80 < 0 )
    goto LABEL_117;
LABEL_174:
  v1581 = v1533;
  if ( lpMem )
  {
    v135 = (int *)lpMem;
    v1484 = (int *)lpMem;
    if ( v1301 )
    {
      do
      {
        v136 = RtlUIntAdd(v121, *v135, (int *)&v1478);
        v1265 = v136;
        v80 = v136;
        if ( v136 >= 0 )
          v137 = v1478;
        v1394 = v137;
        if ( v136 < 0 )
          goto LABEL_117;
        v1265 = RtlULongLongAdd((unsigned __int64)v135, v137, (__int64 *)&v1484);
        v80 = v1265;
        if ( v1265 < 0 )
          goto LABEL_117;
        v135 = v1484;
      }
      while ( v138 + 1 < v1301 );
    }
    v1265 = RtlULongLongAdd((unsigned __int64)v135, v121, (__int64 *)&v1599);
    v80 = v1265;
    if ( v1265 < 0 )
    {
LABEL_117:
      v76 = v81;
      goto LABEL_227;
    }
    v134 = (const wchar_t *)((char *)lpMem + v1302);
    if ( v135 + 3 > (int *)v134 )
      goto LABEL_134;
    v139 = v1599;
    *v135 = 8;
    *v139 = v1581;
    ++v1301;
  }
  else
  {
    v131 = RtlUIntAdd(v121, 8, &v1477);
    v132 = v1394;
    v80 = v131;
    v1265 = v131;
    if ( v131 >= 0 )
      v132 = v1477;
    v1394 = v132;
    if ( v131 < 0 )
      goto LABEL_117;
    v1265 = RtlUIntAdd(v1302, v132, (int *)&v1302);
    v80 = v1265;
    if ( v1265 < 0 )
      goto LABEL_117;
    ++v1301;
  }
  if ( StringCchLengthW(v134, v133, &v1485) < 0 )
  {
LABEL_115:
    v80 = -1073741762;
LABEL_116:
    v1265 = v80;
    goto LABEL_117;
  }
  v1265 = RtlULongLongAdd(v1485, 1LL, (__int64 *)&v1485);
  v80 = v1265;
  if ( v1265 < 0 )
    goto LABEL_226;
  if ( 2 * (_DWORD)v1485 )
  {
    if ( lpMem )
    {
      v142 = 0;
      v143 = (int *)lpMem;
      v1486 = (int *)lpMem;
      if ( v1301 )
      {
        while ( 1 )
        {
          v144 = RtlUIntAdd(v121, *v143, (int *)&v1493);
          v1265 = v144;
          v80 = v144;
          if ( v144 >= 0 )
            v145 = v1493;
          v1390 = v145;
          if ( v144 < 0 )
            break;
          v1265 = RtlULongLongAdd((unsigned __int64)v143, v145, (__int64 *)&v1486);
          v80 = v1265;
          if ( v1265 < 0 )
            break;
          v143 = v1486;
          if ( ++v142 >= v1301 )
            goto LABEL_204;
        }
      }
      else
      {
LABEL_204:
        v1265 = RtlULongLongAdd((unsigned __int64)v143, v121, (__int64 *)&v1600);
        v80 = v1265;
        if ( v1265 >= 0 )
        {
          if ( (char *)v143 + v146 + 4 <= (char *)lpMem + v1302 )
          {
            v147 = v1600;
            *v143 = v146;
            memcpy_0(v147, L"Kernel-OneCore-DeviceFamilyID", (unsigned int)v146);
            ++v1301;
          }
          else
          {
            v80 = -1073741789;
            v1265 = -1073741789;
          }
        }
      }
    }
    else
    {
      v140 = RtlUIntAdd(v121, 2 * (int)v1485, &v1479);
      v141 = v1390;
      v80 = v140;
      v1265 = v140;
      if ( v140 >= 0 )
        v141 = v1479;
      v1390 = v141;
      if ( v140 < 0 )
        goto LABEL_226;
      v80 = RtlUIntAdd(v1302, v141, (int *)&v1302);
      v1265 = v80;
      if ( v80 < 0 )
        goto LABEL_226;
      ++v1301;
      v80 = 0;
      v1265 = 0;
    }
  }
  else
  {
    v80 = -1073741811;
    v1265 = -1073741811;
  }
  if ( v80 < 0 )
    goto LABEL_226;
  v1502 = v1350;
  if ( lpMem )
  {
    v150 = (int *)lpMem;
    v1487 = (int *)lpMem;
    if ( v1301 )
    {
      do
      {
        v80 = RtlUIntAdd(v121, *v150, (int *)&v1501);
        v1265 = v80;
        if ( v80 >= 0 )
          v151 = v1501;
        v1388 = v151;
        if ( v80 < 0 )
          goto LABEL_226;
        v80 = RtlULongLongAdd((unsigned __int64)v150, v151, (__int64 *)&v1487);
        v1265 = v80;
        if ( v80 < 0 )
          goto LABEL_226;
        v150 = v1487;
      }
      while ( v152 + 1 < v1301 );
    }
    v80 = RtlULongLongAdd((unsigned __int64)v150, v121, (__int64 *)&v1601);
    v1265 = v80;
    if ( v80 < 0 )
      goto LABEL_226;
    if ( v150 + 2 > (int *)((char *)lpMem + v1302) )
    {
LABEL_225:
      v80 = -1073741789;
      v1265 = -1073741789;
      goto LABEL_226;
    }
    v161 = v1601;
    *v150 = v121;
    *v161 = v1502;
    ++v1301;
  }
  else
  {
    v148 = RtlUIntAdd(v121, v121, &v1500);
    v149 = v1388;
    v80 = v148;
    v1265 = v148;
    if ( v148 >= 0 )
      v149 = v1500;
    v1388 = v149;
    if ( v148 < 0 )
      goto LABEL_226;
    v80 = RtlUIntAdd(v1302, v149, (int *)&v1302);
    v1265 = v80;
    if ( v80 < 0 )
      goto LABEL_226;
    ++v1301;
  }
  v1505 = v121;
  if ( lpMem )
  {
    v164 = (int *)lpMem;
    v1488 = (int *)lpMem;
    if ( v1301 )
    {
      do
      {
        v165 = RtlUIntAdd(v121, *v164, (int *)&v1504);
        v1265 = v165;
        v80 = v165;
        if ( v165 >= 0 )
          v166 = v1504;
        v1387 = v166;
        if ( v165 < 0 )
          goto LABEL_226;
        v1265 = RtlULongLongAdd((unsigned __int64)v164, v166, (__int64 *)&v1488);
        v80 = v1265;
        if ( v1265 < 0 )
          goto LABEL_226;
        v164 = v1488;
      }
      while ( v167 + 1 < v1301 );
    }
    v1265 = RtlULongLongAdd((unsigned __int64)v164, v121, (__int64 *)&v1596);
    v80 = v1265;
    if ( v1265 >= 0 )
    {
      if ( v164 + 2 <= (int *)((char *)lpMem + v1302) )
      {
        v168 = v1596;
        *v164 = v121;
        *v168 = v1505;
        ++v1301;
        goto LABEL_258;
      }
      goto LABEL_225;
    }
LABEL_226:
    v76 = v81;
    goto LABEL_227;
  }
  v162 = RtlUIntAdd(v121, v121, &v1503);
  v163 = v1387;
  v80 = v162;
  v1265 = v162;
  if ( v162 >= 0 )
    v163 = v1503;
  v1387 = v163;
  if ( v162 < 0 )
    goto LABEL_226;
  v1265 = RtlUIntAdd(v1302, v163, (int *)&v1302);
  v80 = v1265;
  if ( v1265 < 0 )
    goto LABEL_226;
  ++v1301;
LABEL_258:
  v169 = RtlUIntAdd(v121, v121, &v1506);
  v171 = v1362;
  v80 = v169;
  v1265 = v169;
  if ( v169 >= 0 )
    v171 = v1506;
  v1362 = v171;
  if ( v169 < 0 )
    goto LABEL_283;
  v1336 = v171;
  v172 = RtlUIntAdd(v170, 8, &v1507);
  v1265 = v172;
  v174 = v173;
  v80 = v172;
  if ( v172 >= 0 )
    v174 = v1507;
  v1362 = v174;
  if ( v172 < 0 )
    goto LABEL_283;
  v1265 = RtlUIntAdd(v173, v174, (int *)&v1336);
  v80 = v1265;
  if ( v1265 < 0 )
    goto LABEL_283;
  v175 = RtlUIntAdd(v121, v121, &v1508);
  v1265 = v175;
  v80 = v175;
  if ( v175 >= 0 )
    v174 = v1508;
  v1362 = v174;
  if ( v175 < 0 )
    goto LABEL_283;
  v1265 = RtlUIntAdd(v1336, v174, (int *)&v1336);
  v80 = v1265;
  if ( v1265 < 0 )
    goto LABEL_283;
  v176 = RtlUIntAdd(v121, v121, &v1509);
  v1265 = v176;
  v80 = v176;
  if ( v176 >= 0 )
    v174 = v1509;
  v1362 = v174;
  if ( v176 < 0 )
    goto LABEL_283;
  v1265 = RtlUIntAdd(v1336, v174, (int *)&v1336);
  v80 = v1265;
  if ( v1265 < 0 )
    goto LABEL_283;
  v177 = RtlUIntAdd(v121, v121, &v1510);
  v1265 = v177;
  v80 = v177;
  if ( v177 >= 0 )
    v174 = v1510;
  v1362 = v174;
  if ( v177 < 0 )
    goto LABEL_283;
  v1265 = RtlUIntAdd(v1336, v174, (int *)&v1336);
  v80 = v1265;
  if ( v1265 < 0 )
    goto LABEL_283;
  v178 = RtlUIntAdd(v121, v121, &v1395);
  v1265 = v178;
  v80 = v178;
  if ( v178 >= 0 )
    v174 = v1395;
  v1362 = v174;
  if ( v178 < 0 )
  {
LABEL_283:
    v179 = v1395;
  }
  else
  {
    v80 = RtlUIntAdd(v1336, v174, (int *)&v1336);
    v1265 = v80;
    v179 = v1395;
    if ( v80 >= 0 )
      v179 = v1336;
  }
  LODWORD(v1342) = v179;
  if ( v80 < 0 )
    goto LABEL_226;
  v180 = 0LL;
  v1343 = 0LL;
  v181 = 0;
  v1423 = 0LL;
  v182 = 0LL;
  v1309 = 0LL;
  v183 = 0;
  v184 = 0LL;
  v1341 = 0LL;
  v1345 = 0;
  v1284 = 0LL;
  v1313 = 0LL;
  v1364 = 0;
  v1531 = __rdtsc();
  v1357 = 8;
  v185 = RtlUIntAdd(8u, v1302, (int *)&v1357);
  if ( v185 >= 0 )
  {
    v186 = (v1357 + 7) & 0xFFFFFFF8;
    if ( v186 >= v1357 )
    {
      v1357 = (v1357 + 7) & 0xFFFFFFF8;
      v187 = v186;
      v188 = GetProcessHeap();
      v189 = HeapAlloc(v188, 8u, v187);
      if ( v189 )
      {
        *v189 = v1301;
        v1425 = v189;
        v185 = RtlULongLongAdd((unsigned __int64)v189, 4LL, (__int64 *)&v1425);
        if ( v185 >= 0 )
        {
          v191 = v1425;
          *(_DWORD *)v1425 = v1302;
          v185 = RtlULongLongAdd((unsigned __int64)v191, v190, (__int64 *)&v1425);
          if ( v185 >= 0 )
          {
            *(_QWORD *)((char *)v189 + v1357 - 8) = v1531;
            memcpy_0(v1425, lpMem, v1302);
            v181 = v1357;
            v1343 = v189;
            v189 = 0LL;
          }
        }
        if ( v189 )
        {
          v192 = GetProcessHeap();
          HeapFree(v192, 0, v189);
        }
        v180 = (unsigned __int8 *)v1343;
      }
      else
      {
        v185 = -1073741801;
        v180 = 0LL;
      }
    }
    else
    {
      v185 = -1073741675;
    }
  }
  v80 = v185 | 0x10000000;
  v1265 = v80;
  if ( v80 < 0 )
    goto LABEL_416;
  v1584 = 0LL;
  v193 = 0LL;
  v1585 = 0LL;
  v1586 = 0LL;
  v1540 = 0LL;
  v1489 = 0LL;
  v1582 = 0LL;
  v1347 = 0LL;
  if ( v180 )
  {
    v195 = v181;
    v1312 = v181;
    if ( v181 && (v1363 = v181 + 8LL, v196 = operator new(v1363), v1344 = (__int64)v196, v197 = 0, v196) )
    {
      for ( j = 0LL; j < v181; ++j )
        v197 ^= v180[j];
      v199 = v180;
      v1267 = 0;
      v200 = -1;
      v1310 = -1;
      v201 = 0;
      v1319 = 0;
      v202 = v196;
      v203 = v195 & 7;
      if ( (v195 & 7) != 0 )
      {
        v204 = 0;
        v205 = 0;
        v206 = 56;
        do
        {
          v207 = *v199;
          if ( v205 >= 4 )
            LODWORD(v184) = (v207 << v206) | v184;
          else
            v204 |= v207 << (v206 - 32);
          ++v205;
          v206 -= 8;
          ++v199;
        }
        while ( v205 < v203 );
        v1267 = v204;
        v208 = 0;
        v201 = v204 ^ 0xB17A307A;
        v209 = v184 ^ 0x42F6B18D;
        v1319 = v201;
        v1310 = v184 ^ 0x42F6B18D;
        if ( (v195 & 7) != 0 )
        {
          do
          {
            if ( v208 >= 4 )
            {
              v209 = __ROL4__(v209, 8);
              *v202 = v209;
            }
            else
            {
              v201 = __ROL4__(v201, 8);
              *v202 = v201;
            }
            ++v208;
            ++v202;
          }
          while ( v208 < v203 );
          v201 = v1319;
          v209 = v1310;
        }
        v210 = v203 - 4;
        if ( v210 <= 0 )
        {
          v1310 = 0;
          v200 = 0;
          if ( v210 < 0 )
          {
            v201 = v201 >> (-8 * v210) << (-8 * v210);
            v1319 = v201;
          }
        }
        else
        {
          v200 = v209 >> (8 * (4 - v210)) << (8 * (4 - v210));
          v1310 = v200;
        }
      }
      v211 = v195 >> 3;
      if ( v195 >> 3 )
      {
        v212 = v1267;
        v213 = v199 + 2;
        v214 = v202 + 7;
        do
        {
          v215 = *(v213 - 1) | (*(v213 - 2) << 8);
          v216 = v213[2] << 8;
          v217 = *v213;
          v213 += 8;
          v218 = *(v213 - 7) | ((v217 | (v215 << 8)) << 8);
          v219 = *(v213 - 3) | ((*(v213 - 4) | ((*(v213 - 5) | v216) << 8)) << 8);
          v220 = v219 ^ v200;
          v221 = v201 ^ v218 ^ (v220 - 19032) ^ 0xC81ECB17;
          v222 = (__ROR4__(v221, 7) + 45493 * __ROR4__(v201 ^ v218 ^ (v220 - 19032), 15)) ^ v220;
          v223 = (51991 * __ROR4__(v222 - 1313519016, 9) - __ROR4__(v222, 10)) ^ v221;
          v224 = (__ROL4__(v223, 5) + 51230 * __ROL4__(v223 ^ 0xCB17, 4)) ^ v222;
          v225 = (-937506025 - (v224 ^ 0xB1B54A58)) ^ v223;
          v226 = (45493 * (v225 - 19032) - (v225 >> 6)) ^ v224;
          v227 = (19032 * (__ROR4__(v226, 15) ^ 0xCB17)) ^ v225;
          v228 = (51991 * (__ROR4__(~v227, 3) + 51230)) ^ v226;
          v229 = (v228 + 937486993) ^ v227;
          v230 = (45493 * (v229 ^ 0xC81E)) ^ __ROR4__(v229, 10) ^ v228;
          v231 = __ROR4__(v230, 3) ^ (51991 * __ROL4__(v230 ^ 0x4A58, 6)) ^ v229;
          v232 = (19032 * (__ROR4__(v231, 15) - 51230)) ^ v230;
          v233 = (v232 >> 15) ^ (19032 * __ROL4__(v232 - 51991, 3)) ^ (v232 >> 1) ^ (19032 * (v232 ^ 0xC81E)) ^ v231;
          v234 = (45493 * (v233 - 51991) - (v233 >> 13)) ^ v232;
          v235 = __ROR4__(v234, 11) ^ (51991 * __ROR4__(-1313519016 - v234, 9)) ^ v233;
          v236 = (v235 + 1313467786) ^ v234;
          v237 = (19032 * (v236 ^ 0xB1B5) - __ROR4__(v236, 7)) ^ v235;
          v238 = (45493 * __ROL4__(v237 ^ 0xC81E, 4) - __ROR4__(v237, 16)) ^ v236;
          v239 = (__ROR4__(v238, 4) + 51991 * __ROR4__(-1313519016 - v238, 10)) ^ v237;
          v240 = __ROR4__(v239, 9) ^ (51230 * __ROR4__(v239 + 1313519016, 4)) ^ v238;
          v241 = (19032 * __ROL4__(v240 ^ 0xC81ECB17, 8) - __ROL4__(v240, 2)) ^ v239;
          v242 = (45493 * __ROR4__(-937506025 - v241, 11) - __ROR4__(v241, 12)) ^ v240;
          v243 = (v242 >> 8) ^ (51991 * (v242 ^ 0xB1B5)) ^ v241;
          v1319 = v212 ^ v243;
          v212 = v218;
          v1310 = v184 ^ v243 ^ v242 ^ 0x79AB814F;
          LODWORD(v184) = v219;
          *(v214 - 4) = v1319;
          v1319 = __ROR4__(v1319, 8);
          *v214 = v1310;
          v214 += 8;
          v1310 = __ROR4__(v1310, 8);
          *(v214 - 13) = v1319;
          v1319 = __ROR4__(v1319, 8);
          *(v214 - 9) = v1310;
          v1310 = __ROR4__(v1310, 8);
          *(v214 - 14) = v1319;
          v1319 = __ROR4__(v1319, 8);
          *(v214 - 10) = v1310;
          v1310 = __ROR4__(v1310, 8);
          *(v214 - 15) = v1319;
          *(v214 - 11) = v1310;
          v201 = __ROR4__(v1319, 8);
          v200 = __ROR4__(v1310, 8);
          v1319 = v201;
          v1310 = v200;
          --v211;
        }
        while ( v211 );
        v193 = v1347;
        v195 = v1312;
        v196 = (_BYTE *)v1344;
      }
      *(_QWORD *)&v196[v195] = v197;
      v244 = v1363;
      v1582 = v1363;
      v1489 = v196;
      v1584 = &qword_18012ADB0;
      v1585 = 8LL;
      v1586 = xmmword_18012AD10;
      v1540 = 160LL;
      v245 = GetProcessHeap();
      v246 = HeapAlloc(v245, 8u, 0x30uLL);
      if ( v246 )
      {
        *(_DWORD *)v246 = v244;
        v247 = GetProcessHeap();
        v248 = HeapAlloc(v247, 8u, v244);
        if ( !v248 )
          goto LABEL_326;
        v246[1] = v248;
        memcpy_0(v248, v196, v244);
        *((_DWORD *)v246 + 4) = 160;
        v249 = GetProcessHeap();
        v250 = HeapAlloc(v249, 8u, 0xA0uLL);
        if ( !v250 )
          goto LABEL_326;
        v246[3] = v250;
        *v250 = xmmword_18012AD10[0];
        v250[1] = xmmword_18012AD10[1];
        v250[2] = xmmword_18012AD10[2];
        v250[3] = xmmword_18012AD10[3];
        v250[4] = xmmword_18012AD10[4];
        v250[5] = xmmword_18012AD10[5];
        v250[6] = xmmword_18012AD10[6];
        v250[7] = xmmword_18012AD10[7];
        v250[8] = xmmword_18012AD10[8];
        v250[9] = xmmword_18012AD10[9];
        *((_DWORD *)v246 + 8) = 8;
        v251 = GetProcessHeap();
        v252 = HeapAlloc(v251, 8u, 8uLL);
        if ( v252 )
        {
          v246[5] = v252;
          v193 = v246;
          *v252 = qword_18012ADB0;
          v194 = 0;
          v246 = 0LL;
        }
        else
        {
LABEL_326:
          v194 = -1073741801;
        }
        if ( v246 )
        {
          v253 = (void *)v246[1];
          if ( v253 )
          {
            v254 = GetProcessHeap();
            HeapFree(v254, 0, v253);
            v246[1] = 0LL;
          }
          v255 = (void *)v246[3];
          if ( v255 )
          {
            v256 = GetProcessHeap();
            HeapFree(v256, 0, v255);
            v246[3] = 0LL;
          }
          v257 = (void *)v246[5];
          if ( v257 )
          {
            v258 = GetProcessHeap();
            HeapFree(v258, 0, v257);
            v246[5] = 0LL;
          }
          v259 = GetProcessHeap();
          HeapFree(v259, 0, v246);
        }
      }
      else
      {
        v194 = -1073741801;
      }
      v183 = 0;
      v184 = 0LL;
      if ( v194 >= 0 )
      {
        v1423 = v193;
        v193 = 0LL;
      }
    }
    else
    {
      v194 = -1073741823;
    }
    v260 = v1489;
    if ( v1489 )
    {
      v261 = GetProcessHeap();
      HeapFree(v261, 0, v260);
      v1489 = 0LL;
    }
    if ( v193 )
    {
      v262 = (void *)v193[1];
      if ( v262 )
      {
        v263 = GetProcessHeap();
        HeapFree(v263, 0, v262);
        v193[1] = 0LL;
      }
      v264 = (void *)v193[3];
      if ( v264 )
      {
        v265 = GetProcessHeap();
        HeapFree(v265, 0, v264);
        v193[3] = 0LL;
      }
      v266 = (void *)v193[5];
      if ( v266 )
      {
        v267 = GetProcessHeap();
        HeapFree(v267, 0, v266);
        v193[5] = 0LL;
      }
      v268 = GetProcessHeap();
      HeapFree(v268, 0, v193);
    }
    v182 = v1309;
  }
  else
  {
    v194 = -1073741811;
  }
  v80 = v194 | 0x10000000;
  v1265 = v80;
  if ( v80 < 0 )
    goto LABEL_416;
  v269 = (const void **)v1423;
  v1337 = 4;
  v270 = RtlUIntAdd(4u, *(_DWORD *)v1423, (int *)&v1337);
  if ( v270 < 0
    || (v270 = RtlUIntAdd(v1337, 4, (int *)&v1337), v270 < 0)
    || (v270 = RtlUIntAdd(v1337, *((_DWORD *)v269 + 4), (int *)&v1337), v270 < 0)
    || (v270 = RtlUIntAdd(v1337, 4, (int *)&v1337), v270 < 0) )
  {
    v271 = v1386;
  }
  else
  {
    v270 = RtlUIntAdd(v1337, *((_DWORD *)v269 + 8), (int *)&v1337);
    v271 = v1386;
    if ( v270 >= 0 )
      v271 = v1337;
    v1386 = v271;
  }
  if ( v270 >= 0 )
  {
    v272 = v271;
    v273 = GetProcessHeap();
    v274 = HeapAlloc(v273, 8u, v272);
    if ( v274 )
    {
      *v274 = *(_DWORD *)v269;
      v1355 = v274;
      v270 = RtlULongLongAdd((unsigned __int64)v274, 4LL, (__int64 *)&v1355);
      if ( v270 >= 0 )
      {
        memcpy_0(v1355, v269[1], *(unsigned int *)v269);
        v270 = RtlULongLongAdd((unsigned __int64)v1355, *(unsigned int *)v269, (__int64 *)&v1355);
        if ( v270 >= 0 )
        {
          v275 = v1355;
          *(_DWORD *)v1355 = *((_DWORD *)v269 + 4);
          v270 = RtlULongLongAdd((unsigned __int64)v275, 4LL, (__int64 *)&v1355);
          if ( v270 >= 0 )
          {
            memcpy_0(v1355, v269[3], *((unsigned int *)v269 + 4));
            v270 = RtlULongLongAdd((unsigned __int64)v1355, *((unsigned int *)v269 + 4), (__int64 *)&v1355);
            if ( v270 >= 0 )
            {
              v276 = v1355;
              *(_DWORD *)v1355 = *((_DWORD *)v269 + 8);
              v270 = RtlULongLongAdd((unsigned __int64)v276, 4LL, (__int64 *)&v1355);
              if ( v270 >= 0 )
              {
                memcpy_0(v1355, v269[5], *((unsigned int *)v269 + 8));
                v270 = RtlULongLongAdd((unsigned __int64)v1355, *((unsigned int *)v269 + 8), (__int64 *)&v1355);
                if ( v270 >= 0 )
                {
                  v183 = v1386;
                  v182 = v274;
                  v1309 = v274;
                  v274 = 0LL;
                }
              }
            }
          }
        }
      }
      if ( v274 )
      {
        v277 = GetProcessHeap();
        HeapFree(v277, 0, v274);
      }
    }
    else
    {
      v270 = -1073741801;
    }
  }
  v80 = v270 | 0x10000000;
  v1265 = v80;
  if ( v80 < 0 )
    goto LABEL_416;
  v1541 = 0LL;
  v1511 = 0;
  v278 = 0;
  v1542 = 0LL;
  v1435 = 0;
  v1400 = 8;
  v279 = RtlUIntAdd(8u, v1342, (int *)&v1400);
  v80 = v279 | 0x10000000;
  v1265 = v279 | 0x10000000;
  if ( v279 >= 0 )
  {
    v281 = (v1400 + 7) & 0xFFFFFFF8;
    if ( v281 >= v1400 )
    {
      v1404 = (v1400 + 7) & 0xFFFFFFF8;
      v283 = RtlUIntAdd(v281, v280, (int *)&v1404);
      v282 = v1415;
      v80 = v283;
      if ( v283 >= 0 )
        v282 = v1404;
      v1415 = v282;
    }
    else
    {
      v282 = v1415;
      v80 = -1073741675;
    }
    v1265 = v80;
    if ( v80 < 0 )
      goto LABEL_416;
    if ( lpMem && v1301 > 1 )
    {
      v284 = (unsigned int *)lpMem;
      v1376 = (unsigned int *)lpMem;
      while ( 1 )
      {
        v285 = *v284;
        v1265 = RtlULongLongAdd((unsigned __int64)v284, 4LL, (__int64 *)&v1376);
        v80 = v1265;
        if ( v1265 < 0 )
          break;
        v1265 = RtlULongLongAdd((unsigned __int64)v1376, v285, (__int64 *)&v1376);
        v80 = v1265;
        if ( v1265 < 0 )
          break;
        v284 = v1376;
        if ( v286 != -1 )
        {
          v1265 = RtlULongLongAdd((unsigned __int64)v1376, 4LL, (__int64 *)&v1376);
          v80 = v1265;
          if ( v1265 >= 0 )
          {
            v288 = v1376;
            v1511 = v287;
            if ( !v287 )
              v288 = 0LL;
            v1376 = v288;
            v1541 = v288;
          }
          break;
        }
      }
      if ( v80 >= 0 )
      {
        if ( v1301 > 2 )
        {
          v289 = (unsigned int *)lpMem;
          v1383 = (unsigned int *)lpMem;
          while ( 1 )
          {
            v290 = *v289;
            v1265 = RtlULongLongAdd((unsigned __int64)v289, 4LL, (__int64 *)&v1383);
            v80 = v1265;
            if ( v1265 < 0 )
              break;
            v1265 = RtlULongLongAdd((unsigned __int64)v1383, v290, (__int64 *)&v1383);
            v80 = v1265;
            if ( v1265 < 0 )
              goto LABEL_403;
            v289 = v1383;
            if ( (unsigned int)(v291 + 1) >= 2 )
            {
              v1265 = RtlULongLongAdd((unsigned __int64)v1383, 4LL, (__int64 *)&v1383);
              v80 = v1265;
              if ( v1265 >= 0 )
              {
                v293 = v1383;
                v278 = v292;
                if ( !v292 )
                  v293 = 0LL;
                v1435 = v292;
                v1383 = v293;
                v1542 = v293;
              }
LABEL_403:
              if ( v80 >= 0 )
              {
                v1340 = 4;
                v1265 = RtlUIntAdd(4u, v282, (int *)&v1340);
                v80 = v1265;
                if ( v1265 < 0
                  || (v1265 = RtlUIntAdd(v1340, v294, (int *)&v1340), v80 = v1265, v1265 < 0)
                  || (v1265 = RtlUIntAdd(v1340, v295, (int *)&v1340), v80 = v1265, v1265 < 0)
                  || (v1265 = RtlUIntAdd(v1340, v296, (int *)&v1340), v80 = v1265, v1265 < 0) )
                {
                  v297 = v1414;
                }
                else
                {
                  v80 = RtlUIntAdd(v1340, v278, (int *)&v1340);
                  v1265 = v80;
                  v297 = v1414;
                  if ( v80 >= 0 )
                    v297 = v1340;
                  v1414 = v297;
                }
                if ( v80 >= 0 )
                {
                  if ( v297 > 0x400000 )
                  {
                    v80 = -2147418113;
                    goto LABEL_415;
                  }
                  v1345 = v297;
                }
              }
              break;
            }
          }
        }
        else
        {
          v80 = -1073741811;
          v1265 = -1073741811;
        }
      }
    }
    else
    {
      v80 = -1073741811;
      v1265 = -1073741811;
    }
  }
  if ( v80 < 0 )
    goto LABEL_416;
  v321 = v1345;
  v322 = 0;
  v323 = GetProcessHeap();
  v324 = HeapAlloc(v323, 8u, v321);
  if ( v324 )
  {
    v184 = (unsigned __int64)v324;
    v1341 = v324;
  }
  else
  {
    v322 = -1073741801;
  }
  v80 = v322 | 0x10000000;
  v1265 = v80;
  if ( v80 < 0 )
    goto LABEL_416;
  if ( !v182 || !v184 )
  {
    v80 = -2147024809;
LABEL_415:
    v1265 = v80;
    goto LABEL_416;
  }
  v1589 = v1345;
  v1587[0] = v182;
  v1588 = v183;
  v1587[1] = v184;
  v1590 = 0;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
    && (ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
  {
    v328 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v1587);
    v80 = v328 | 0x10000000;
    v326 = v1345;
    if ( v328 >= 0 )
      v326 = v1589;
    v1345 = v326;
  }
  else
  {
    v325 = GetLastError();
    v1265 = v325;
    v80 = v325;
    if ( v325 > 0 )
    {
      v80 = (unsigned __int16)v325 | 0x80070000;
      v1265 = v80;
    }
    v326 = v1345;
    if ( v80 < 0 )
      goto LABEL_463;
    v80 = -2147467259;
  }
  v1265 = v80;
LABEL_463:
  if ( v80 == -805306333 )
  {
    v80 = -2147024774;
    v1265 = -2147024774;
    goto LABEL_416;
  }
  if ( v80 < 0 )
    goto LABEL_416;
  v1314 = 0;
  v1369 = (void *)v184;
  v329 = 0LL;
  if ( v326 < 4 )
    goto LABEL_467;
  v332 = *(unsigned int *)v184;
  v333 = RtlULongLongAdd(v184, 4LL, (__int64 *)&v1369);
  LODWORD(v184) = 0;
  v330 = v333;
  if ( v333 >= 0 )
  {
    v330 = RtlUIntAdd(0, v334, (int *)&v1314);
    if ( v330 >= 0 )
    {
      if ( v326 - v1314 < (unsigned int)v332 )
      {
LABEL_475:
        v330 = -1073741762;
        goto LABEL_469;
      }
      v1363 = (SIZE_T)v1369;
      v330 = RtlULongLongAdd((unsigned __int64)v1369, v332, (__int64 *)&v1369);
      if ( v330 >= 0 )
      {
        v330 = RtlUIntAdd(v1314, v335, (int *)&v1314);
        if ( v330 >= 0 )
        {
          if ( v326 - v1314 < (unsigned int)v336 )
            goto LABEL_475;
          v337 = *(unsigned int *)v1369;
          v330 = RtlULongLongAdd((unsigned __int64)v1369, v336, (__int64 *)&v1369);
          if ( v330 >= 0 )
          {
            v330 = RtlUIntAdd(v1314, v338, (int *)&v1314);
            if ( v330 >= 0 )
            {
              if ( v326 - v1314 < (unsigned int)v337 )
                goto LABEL_475;
              v184 = (unsigned __int64)v1369;
              v330 = RtlULongLongAdd((unsigned __int64)v1369, (unsigned int)v337, (__int64 *)&v1369);
              if ( v330 < 0 )
                goto LABEL_468;
              v330 = RtlUIntAdd(v1314, v339, (int *)&v1314);
              if ( v330 < 0 )
                goto LABEL_468;
              if ( v326 - v1314 < (unsigned int)v340 )
                goto LABEL_467;
              v341 = *(unsigned int *)v1369;
              v330 = RtlULongLongAdd((unsigned __int64)v1369, v340, (__int64 *)&v1369);
              if ( v330 < 0 )
                goto LABEL_468;
              v330 = RtlUIntAdd(v1314, v342, (int *)&v1314);
              if ( v330 < 0 )
                goto LABEL_468;
              if ( v326 - v1314 < (unsigned int)v341 )
                goto LABEL_467;
              v330 = RtlUIntAdd(v1314, v341, (int *)&v1314);
              if ( v330 < 0 )
                goto LABEL_468;
              if ( v326 != v1314 || (unsigned int)(v332 + v341 + v337) + 12LL != v326 )
              {
LABEL_467:
                v330 = -1073741762;
LABEL_468:
                LODWORD(v184) = 0;
                goto LABEL_469;
              }
              v343 = GetProcessHeap();
              v344 = HeapAlloc(v343, 8u, 0x30uLL);
              if ( !v344 )
              {
                v330 = -1073741801;
                LODWORD(v184) = 0;
LABEL_516:
                if ( v330 >= 0 )
                {
                  v1284 = v329;
                  v329 = 0LL;
                }
                if ( v329 )
                {
                  v359 = (void *)*((_QWORD *)v329 + 1);
                  if ( v359 )
                  {
                    v360 = GetProcessHeap();
                    HeapFree(v360, 0, v359);
                    *((_QWORD *)v329 + 1) = 0LL;
                  }
                  v361 = (void *)*((_QWORD *)v329 + 3);
                  if ( v361 )
                  {
                    v362 = GetProcessHeap();
                    HeapFree(v362, 0, v361);
                    *((_QWORD *)v329 + 3) = 0LL;
                  }
                  v363 = (void *)*((_QWORD *)v329 + 5);
                  if ( v363 )
                  {
                    v364 = GetProcessHeap();
                    HeapFree(v364, 0, v363);
                    *((_QWORD *)v329 + 5) = 0LL;
                  }
                  v365 = GetProcessHeap();
                  HeapFree(v365, 0, v329);
                }
                goto LABEL_469;
              }
              v330 = 0;
              if ( v1363 )
              {
                *(_DWORD *)v344 = v332;
                v345 = GetProcessHeap();
                v346 = HeapAlloc(v345, 8u, v332);
                if ( !v346 )
                {
LABEL_495:
                  v330 = -1073741801;
                  LODWORD(v184) = 0;
                  goto LABEL_508;
                }
                v344[1] = v346;
                memcpy_0(v346, (const void *)v1363, v332);
              }
              else
              {
                *(_DWORD *)v344 = 0;
                v344[1] = 0LL;
              }
              if ( v184 )
              {
                *((_DWORD *)v344 + 4) = v337;
                v347 = GetProcessHeap();
                v348 = HeapAlloc(v347, 8u, v337);
                if ( !v348 )
                  goto LABEL_495;
                v344[3] = v348;
                v330 = 0;
                memcpy_0(v348, (const void *)v184, v337);
                LODWORD(v184) = 0;
              }
              else
              {
                *((_DWORD *)v344 + 4) = 0;
                v344[3] = 0LL;
              }
              v349 = v1369;
              if ( v1369 )
              {
                *((_DWORD *)v344 + 8) = v341;
                v350 = GetProcessHeap();
                v351 = HeapAlloc(v350, 8u, v341);
                if ( !v351 )
                {
                  v330 = -1073741801;
                  goto LABEL_508;
                }
                v344[5] = v351;
                v330 = 0;
                memcpy_0(v351, v349, v341);
              }
              else
              {
                *((_DWORD *)v344 + 8) = 0;
                v344[5] = 0LL;
              }
              v329 = (unsigned __int16 *)v344;
              v344 = 0LL;
LABEL_508:
              if ( v344 )
              {
                v352 = (void *)v344[1];
                if ( v352 )
                {
                  v353 = GetProcessHeap();
                  HeapFree(v353, 0, v352);
                  v344[1] = 0LL;
                }
                v354 = (void *)v344[3];
                if ( v354 )
                {
                  v355 = GetProcessHeap();
                  HeapFree(v355, 0, v354);
                  v344[3] = 0LL;
                }
                v356 = (void *)v344[5];
                if ( v356 )
                {
                  v357 = GetProcessHeap();
                  HeapFree(v357, 0, v356);
                  v344[5] = 0LL;
                }
                v358 = GetProcessHeap();
                HeapFree(v358, 0, v344);
              }
              goto LABEL_516;
            }
          }
        }
      }
    }
  }
LABEL_469:
  v80 = v330 | 0x10000000;
  v1265 = v80;
  if ( v80 < 0 )
    goto LABEL_416;
  v1402 = 0LL;
  v331 = 0;
  v1532 = 0LL;
  if ( !v1284 || (v366 = (unsigned __int8 *)*((_QWORD *)v1284 + 1), (v1344 = (__int64)v366) == 0) || !*(_DWORD *)v1284 )
  {
    v331 = -1073741811;
    goto LABEL_564;
  }
  v367 = *(unsigned int *)v1284 - 8LL;
  v1347 = (void *)v367;
  v1312 = (SIZE_T)operator new(v367);
  v368 = (_BYTE *)v1312;
  if ( !v1312 )
  {
    v417 = v1402;
    goto LABEL_561;
  }
  v1315 = 0;
  v369 = 0;
  v370 = v366;
  v371 = (_BYTE *)v1312;
  v372 = 0;
  v373 = 0;
  v374 = v367 & 7;
  if ( (v367 & 7) == 0 )
  {
    v1268 = -1;
    v1318 = 0;
    goto LABEL_546;
  }
  v1306 = -1;
  v375 = 0;
  v1318 = 0;
  v376 = 56;
  do
  {
    v377 = *v370;
    if ( v375 >= 4 )
      v372 |= v377 << v376;
    else
      v373 |= v377 << (v376 - 32);
    v376 -= 8;
    ++v375;
    ++v370;
  }
  while ( v375 < v374 );
  v1318 = v373;
  v1268 = v372;
  v373 ^= 0x92F65A5u;
  v378 = v372 ^ 0x699A899C;
  v1315 = v373;
  v379 = 0;
  v1306 = v378;
  if ( (v367 & 7) != 0 )
  {
    do
    {
      if ( v379 >= 4 )
      {
        v378 = __ROL4__(v378, 8);
        *v371 = v378;
      }
      else
      {
        v373 = __ROL4__(v373, 8);
        *v371 = v373;
      }
      ++v379;
      ++v371;
    }
    while ( v379 < v374 );
    v373 = v1315;
    v378 = v1306;
  }
  v380 = v374 - 4;
  if ( v374 - 4 > 0 )
  {
    v372 = v378 >> (8 * (4 - v380)) << (8 * (4 - v380));
LABEL_546:
    v1306 = v372;
    goto LABEL_547;
  }
  v372 = 0;
  v1306 = 0;
  if ( v380 < 0 )
  {
    v373 = v373 >> (-8 * v380) << (-8 * v380);
    v1315 = v373;
  }
LABEL_547:
  v381 = v367 >> 3;
  if ( v367 >> 3 )
  {
    v382 = v1268;
    v383 = v370 + 2;
    v384 = v1318;
    v385 = v371 + 7;
    do
    {
      v386 = *(v383 - 1) | (*(v383 - 2) << 8);
      v387 = v383[2] << 8;
      v388 = *v383;
      v383 += 8;
      v389 = *(v383 - 7) | ((v388 | (v386 << 8)) << 8);
      v390 = v389 ^ v373;
      v391 = *(v383 - 3) | ((*(v383 - 4) | ((*(v383 - 5) | v387) << 8)) << 8);
      v392 = v390 ^ v391 ^ v372 ^ 0xAC987321;
      v393 = (__ROL4__(v392, 10) + 4991 * __ROL4__(v392 + 1419157410, 5)) ^ v390;
      v394 = (43881 * __ROR4__(v393 + 133239679, 9) - __ROL4__(v393, 2)) ^ v392;
      v395 = (24670 * (v394 - 4991) - (v394 >> 13)) ^ v393;
      v396 = (2033 * __ROL4__(v395 ^ 0xAB69, 6) - __ROL4__(v395, 2)) ^ v394;
      v397 = (133239679 - (v396 ^ 0xAB69605E)) ^ v395;
      v398 = (43881 * (v397 ^ 0x137F)) ^ __ROR4__(v397, 6) ^ v396;
      v399 = (__ROL4__(v398, 2) + 24670 * __ROR4__(v398 + 133239679, 15)) ^ v397;
      v400 = (2033 * __ROR4__(v399 + 1419157410, 14) - __ROL4__(v399, 8)) ^ v398;
      v401 = __ROR4__(v400, 10) ^ (4991 * __ROR4__(v400 ^ 0xAB69605E, 12)) ^ v399;
      v402 = (v401 >> 10) ^ (43881 * (v401 ^ 0x7F1)) ^ v400;
      v403 = (2033 * (__ROR4__(~v402, 5) + 24670)) ^ v401;
      v404 = v402 ^ (v403 - 2033) ^ 0xAB69605E;
      v405 = ((v404 >> 2) + 4991 * __ROL4__(v402 ^ (v403 - 2033) ^ 0xAB6967AF, 2)) ^ v403;
      v406 = (__ROL4__(v405, 7) + 43881 * __ROR4__(v405 - 133239679, 6)) ^ v404;
      v407 = (24670 * (v406 ^ 0x137F) + __ROR4__(v406, 9)) ^ v405;
      v408 = (__ROL4__(v407, 7) + 2033 * __ROL4__(v407 ^ 0xAB69, 5)) ^ v406;
      v409 = v407 ^ v408 ^ 0xAC987321;
      v410 = (4991 * (__ROR4__(v409, 3) - 43881)) ^ v408;
      v411 = (24670 * __ROR4__(v410 - 133239679, 1) - __ROR4__(v410, 6)) ^ v409;
      v412 = (__ROL4__(v411, 14) + 2033 * __ROL4__(v411 - 1419157410, 3)) ^ v410;
      v413 = (4991 * __ROL4__(v412 - 1419157410, 15) - __ROR4__(v412, 14)) ^ v411;
      v414 = (v413 >> 3) ^ (43881 * (v413 ^ 0x605E)) ^ v412;
      v1306 = v382 ^ v414;
      v382 = v391;
      v415 = v384 ^ __ROL4__(v414, 2) ^ (24670 * __ROL4__(v414 ^ 0x7F1137F, 4));
      v384 = v389;
      v1315 = v415 ^ v413;
      *(v385 - 4) = v415 ^ v413;
      v1315 = __ROR4__(v1315, 8);
      *v385 = v1306;
      v385 += 8;
      v1306 = __ROR4__(v1306, 8);
      *(v385 - 13) = v1315;
      v1315 = __ROR4__(v1315, 8);
      *(v385 - 9) = v1306;
      v1306 = __ROR4__(v1306, 8);
      *(v385 - 14) = v1315;
      v1315 = __ROR4__(v1315, 8);
      *(v385 - 10) = v1306;
      v1306 = __ROR4__(v1306, 8);
      *(v385 - 15) = v1315;
      *(v385 - 11) = v1306;
      v373 = __ROR4__(v1315, 8);
      v372 = __ROR4__(v1306, 8);
      v1315 = v373;
      v1306 = v372;
      --v381;
    }
    while ( v381 );
    v369 = 0;
    v331 = 0;
    v367 = (SIZE_T)v1347;
    v368 = (_BYTE *)v1312;
  }
  LODWORD(v184) = 0;
  for ( k = 0LL; k < v367; ++k )
    v369 ^= v368[k];
  if ( v369 == *(_QWORD *)(v367 + v1344) )
  {
    v418 = 0;
    v417 = v368;
    v1402 = v368;
    v368 = 0LL;
    v1532 = v367;
  }
  else
  {
    v417 = v1402;
    v418 = -1073425151;
  }
  if ( v368 )
  {
    operator delete(v368);
    v417 = v1402;
  }
  if ( v418 >= 0 )
  {
    v1313 = v417;
    v417 = 0LL;
    v1364 = v1532;
    v1402 = 0LL;
    goto LABEL_562;
  }
LABEL_561:
  v331 = -1073741823;
LABEL_562:
  if ( v417 )
  {
    v419 = GetProcessHeap();
    HeapFree(v419, 0, v417);
    v1402 = 0LL;
  }
LABEL_564:
  v80 = v331 | 0x10000000;
  v1265 = v80;
  if ( v80 >= 0 )
  {
    v1358 = 0;
    v1430 = v1313;
    if ( v1364 >= 4 )
    {
      v420 = *(_DWORD *)v1313;
      v1305 = *(_DWORD *)v1313;
      v422 = RtlULongLongAdd((unsigned __int64)v1313, 4LL, (__int64 *)&v1430);
      if ( v422 < 0 )
        goto LABEL_600;
      v422 = RtlUIntAdd(0, v421, (int *)&v1358);
      if ( v422 < 0 )
        goto LABEL_600;
      if ( v1364 - v1358 >= 4 )
      {
        v424 = *(unsigned int *)v1430;
        v422 = RtlULongLongAdd((unsigned __int64)v1430, v423, (__int64 *)&v1430);
        if ( v422 < 0 )
          goto LABEL_600;
        v422 = RtlUIntAdd(v1358, v425, (int *)&v1358);
        if ( v422 < 0 )
          goto LABEL_600;
        if ( v1364 - v1358 >= (unsigned int)v424 )
        {
          v422 = RtlUIntAdd(v1358, v424, (int *)&v1358);
          if ( v422 < 0 )
            goto LABEL_600;
          v427 = v1430;
          if ( (unsigned __int64)v1364 + v426 >= (unsigned __int64)v1430 + v424
            && v426 + v1364 - v424 - (unsigned __int64)v1430 < 8 )
          {
            v428 = 0LL;
            v422 = 0;
            if ( !v1430 )
            {
LABEL_588:
              if ( (_DWORD)v424 )
              {
                v435 = GetProcessHeap();
                v428 = HeapAlloc(v435, 8u, v424);
                if ( !v428 )
                {
                  v422 = -1073741801;
                  goto LABEL_597;
                }
                v422 = 0;
              }
              if ( v427 )
                memcpy_0(v428, v427, v424);
              v1368 = v428;
              v1367 = __PAIR64__(v424, v184);
LABEL_597:
              if ( v422 < 0 || v420 == (_DWORD)v1367 )
                goto LABEL_600;
              goto LABEL_599;
            }
            v422 = RtlULongLongAdd((unsigned __int64)v1430, (unsigned int)v424, (__int64 *)&v1544);
            if ( v422 < 0 )
              goto LABEL_597;
            v430 = v1544;
            if ( (unsigned __int64)v427 < v1544 )
            {
              while ( 1 )
              {
                v422 = RtlULongLongAdd(v429, 4LL, (__int64 *)&v1545);
                if ( v422 < 0 )
                  break;
                if ( v1545 > v430 )
                  goto LABEL_591;
                v432 = RtlUIntAdd(4u, *v431, v1436);
                v422 = v432;
                if ( v432 >= 0 )
                  v434 = v1436[0];
                v1436[1] = v434;
                if ( v432 < 0 )
                  break;
                v422 = RtlULongLongAdd(v433, v434, (__int64 *)&v1546);
                if ( v422 < 0 )
                  break;
                v429 = v1546;
                if ( v1546 > v430 )
                  goto LABEL_591;
                LODWORD(v184) = v184 + 1;
                if ( v1546 >= v430 )
                  goto LABEL_586;
              }
              v420 = v1305;
              goto LABEL_597;
            }
LABEL_586:
            if ( v429 == v430 )
            {
              v420 = v1305;
              goto LABEL_588;
            }
LABEL_591:
            v422 = -1073741811;
LABEL_600:
            v80 = v422 | 0x10000000;
            goto LABEL_415;
          }
        }
      }
    }
LABEL_599:
    v422 = -1073741762;
    goto LABEL_600;
  }
LABEL_416:
  v298 = v1343;
  if ( v1343 )
  {
    v299 = GetProcessHeap();
    HeapFree(v299, 0, v298);
  }
  v300 = v1423;
  if ( v1423 )
  {
    v301 = (void *)*((_QWORD *)v1423 + 1);
    if ( v301 )
    {
      v302 = GetProcessHeap();
      HeapFree(v302, 0, v301);
      v300[1] = 0LL;
    }
    v303 = (void *)v300[3];
    if ( v303 )
    {
      v304 = GetProcessHeap();
      HeapFree(v304, 0, v303);
      v300[3] = 0LL;
    }
    v305 = (void *)v300[5];
    if ( v305 )
    {
      v306 = GetProcessHeap();
      HeapFree(v306, 0, v305);
      v300[5] = 0LL;
    }
    v307 = GetProcessHeap();
    HeapFree(v307, 0, v300);
    v1423 = 0LL;
  }
  v308 = v1309;
  if ( v1309 )
  {
    v309 = GetProcessHeap();
    HeapFree(v309, 0, v308);
  }
  v310 = v1341;
  if ( v1341 )
  {
    v311 = GetProcessHeap();
    HeapFree(v311, 0, v310);
  }
  if ( v1284 )
  {
    v312 = (void *)*((_QWORD *)v1284 + 1);
    if ( v312 )
    {
      v313 = GetProcessHeap();
      HeapFree(v313, 0, v312);
      *((_QWORD *)v1284 + 1) = 0LL;
    }
    v314 = (void *)*((_QWORD *)v1284 + 3);
    if ( v314 )
    {
      v315 = GetProcessHeap();
      HeapFree(v315, 0, v314);
      *((_QWORD *)v1284 + 3) = 0LL;
    }
    v316 = (void *)*((_QWORD *)v1284 + 5);
    if ( v316 )
    {
      v317 = GetProcessHeap();
      HeapFree(v317, 0, v316);
      *((_QWORD *)v1284 + 5) = 0LL;
    }
    v318 = GetProcessHeap();
    HeapFree(v318, 0, v1284);
  }
  v319 = v1313;
  if ( v1313 )
  {
    v320 = GetProcessHeap();
    HeapFree(v320, 0, v319);
  }
  if ( v80 < 0 )
    goto LABEL_683;
  if ( !(_DWORD)v1367 )
    goto LABEL_688;
  if ( v1368 )
  {
    v1490 = (int *)v1368;
    v1265 = RtlULongLongAdd((unsigned __int64)v1368, 4LL, (__int64 *)&v1490);
    v80 = v1265;
    if ( v1265 < 0 )
    {
      v436 = v1437;
      v437 = v1547;
    }
    else
    {
      v437 = v1490;
      v1437 = v436;
      if ( !v436 )
        v437 = 0LL;
      v1490 = v437;
      v1547 = v437;
    }
    if ( v1265 >= 0 )
    {
      if ( v436 != 4 )
        goto LABEL_681;
      v1373 = *v437;
    }
  }
  else
  {
    v80 = -1073741811;
    v1265 = -1073741811;
  }
  if ( v80 < 0 )
    goto LABEL_683;
  v80 = v1373;
  if ( v1373 == -805306333 )
    v80 = -2147024774;
  v1265 = v80;
  v1373 = v80;
  if ( v80 != -2147024774 && v80 < 0 )
    goto LABEL_683;
  if ( (_DWORD)v1367 != 6 )
    goto LABEL_688;
  if ( v1368 )
  {
    v438 = v1368;
    v439 = 0;
    v1375 = v1368;
    do
    {
      v1265 = RtlULongLongAdd((unsigned __int64)v438, 4LL, (__int64 *)&v1375);
      v80 = v1265;
      if ( v1265 < 0 )
        goto LABEL_625;
      v1265 = RtlULongLongAdd((unsigned __int64)v1375, v440, (__int64 *)&v1375);
      v80 = v1265;
      if ( v1265 < 0 )
        goto LABEL_625;
      v438 = v1375;
      ++v439;
    }
    while ( !v439 );
    v441 = *v1375;
    v1265 = RtlULongLongAdd((unsigned __int64)v1375, 4LL, (__int64 *)&v1375);
    v80 = v1265;
    if ( v1265 < 0 )
    {
LABEL_625:
      v441 = v1438;
      v443 = v1548;
      goto LABEL_626;
    }
    v443 = v1375;
    v1438 = v441;
    if ( !v441 )
      v443 = v442;
    v1375 = v443;
    v1548 = v443;
LABEL_626:
    if ( v80 >= 0 )
    {
      if ( v441 != 8 )
        goto LABEL_681;
      v1553 = *(_QWORD *)v443;
    }
  }
  else
  {
    v80 = -1073741811;
    v1265 = -1073741811;
  }
  if ( v80 < 0 )
    goto LABEL_683;
  if ( v1368 )
  {
    v444 = v1368;
    v445 = 0;
    v1374 = v1368;
    do
    {
      v1265 = RtlULongLongAdd((unsigned __int64)v444, 4LL, (__int64 *)&v1374);
      v80 = v1265;
      if ( v1265 < 0 )
        goto LABEL_640;
      v1265 = RtlULongLongAdd((unsigned __int64)v1374, v446, (__int64 *)&v1374);
      v80 = v1265;
      if ( v1265 < 0 )
        goto LABEL_640;
      v444 = v1374;
      ++v445;
    }
    while ( v445 < 2 );
    v447 = *v1374;
    v1265 = RtlULongLongAdd((unsigned __int64)v1374, 4LL, (__int64 *)&v1374);
    v80 = v1265;
    if ( v1265 < 0 )
    {
LABEL_640:
      v447 = v1439;
      v449 = v1549;
      goto LABEL_641;
    }
    v449 = v1374;
    v1439 = v447;
    if ( !v447 )
      v449 = v448;
    v1374 = v449;
    v1549 = v449;
LABEL_641:
    if ( v80 >= 0 )
    {
      if ( v447 != 4 )
        goto LABEL_681;
      v1444 = *v449;
    }
  }
  else
  {
    v80 = -1073741811;
    v1265 = -1073741811;
  }
  if ( v80 < 0 )
    goto LABEL_683;
  if ( !v1368 )
  {
    v80 = -1073741811;
LABEL_682:
    v1265 = v80;
    goto LABEL_683;
  }
  v450 = v1368;
  v451 = 0;
  v1382 = v1368;
  do
  {
    v1265 = RtlULongLongAdd((unsigned __int64)v450, 4LL, (__int64 *)&v1382);
    v80 = v1265;
    if ( v1265 < 0 )
      goto LABEL_655;
    v1265 = RtlULongLongAdd((unsigned __int64)v1382, v452, (__int64 *)&v1382);
    v80 = v1265;
    if ( v1265 < 0 )
      goto LABEL_655;
    v450 = v1382;
    ++v451;
  }
  while ( v451 < 3 );
  v453 = *v1382;
  v1265 = RtlULongLongAdd((unsigned __int64)v1382, 4LL, (__int64 *)&v1382);
  v80 = v1265;
  if ( v1265 < 0 )
  {
LABEL_655:
    v453 = v1440;
    goto LABEL_656;
  }
  v454 = v1382;
  v1440 = v453;
  if ( !v453 )
    v454 = 0LL;
  v1382 = v454;
  v1550 = v454;
LABEL_656:
  if ( v80 < 0 )
    goto LABEL_683;
  v455 = v1368;
  v456 = 0;
  v1379 = v1368;
  do
  {
    v1265 = RtlULongLongAdd((unsigned __int64)v455, 4LL, (__int64 *)&v1379);
    v80 = v1265;
    if ( v1265 < 0 )
      goto LABEL_665;
    v1265 = RtlULongLongAdd((unsigned __int64)v1379, v457, (__int64 *)&v1379);
    v80 = v1265;
    if ( v1265 < 0 )
      goto LABEL_665;
    v455 = v1379;
    ++v456;
  }
  while ( v456 < 4 );
  v458 = *v1379;
  v1265 = RtlULongLongAdd((unsigned __int64)v1379, 4LL, (__int64 *)&v1379);
  v80 = v1265;
  if ( v1265 < 0 )
  {
LABEL_665:
    v458 = v1441;
    v459 = v1551;
    goto LABEL_666;
  }
  v459 = v1379;
  v1441 = v458;
  if ( !v458 )
    v459 = 0LL;
  v1379 = v459;
  v1551 = v459;
LABEL_666:
  if ( v80 < 0 )
    goto LABEL_669;
  if ( v458 != 4 )
  {
LABEL_681:
    v80 = -1073741789;
    goto LABEL_682;
  }
  v1442 = *v459;
LABEL_669:
  if ( v80 >= 0 )
  {
    v460 = (unsigned int *)v1368;
    v461 = 0;
    v1380 = (unsigned int *)v1368;
    do
    {
      v462 = *v460;
      v1265 = RtlULongLongAdd((unsigned __int64)v460, 4LL, (__int64 *)&v1380);
      v80 = v1265;
      if ( v1265 < 0 )
        goto LABEL_678;
      v1265 = RtlULongLongAdd((unsigned __int64)v1380, v462, (__int64 *)&v1380);
      v80 = v1265;
      if ( v1265 < 0 )
        goto LABEL_678;
      v460 = v1380;
      ++v461;
    }
    while ( v461 < 5 );
    v465 = *v1380;
    v1265 = RtlULongLongAdd((unsigned __int64)v1380, 4LL, (__int64 *)&v1380);
    v80 = v1265;
    if ( v1265 < 0 )
    {
LABEL_678:
      v465 = v1443;
      v466 = v1552;
      goto LABEL_679;
    }
    v466 = v1380;
    v1443 = v465;
    if ( !v465 )
      v466 = 0LL;
    v1380 = v466;
    v1552 = v466;
LABEL_679:
    if ( v80 < 0 )
    {
      v467 = v1417;
    }
    else
    {
      if ( v465 != 4 )
        goto LABEL_681;
      v467 = *v466;
      v1417 = *v466;
    }
    if ( v80 < 0 )
      goto LABEL_683;
    if ( v1533 == v1553 )
    {
      v1412 = v1444;
      v1391 = v464;
      v1350 = v467;
      if ( v464 > 4 || v453 > 4 )
      {
        v80 = -2147024774;
        v1265 = -2147024774;
        goto LABEL_683;
      }
      memcpy_0(v1335, v463, v453);
      if ( v1373 )
        v80 = v1373;
      goto LABEL_682;
    }
LABEL_688:
    v80 = -1073425151;
    goto LABEL_682;
  }
LABEL_683:
  v76 = v1272;
  v77 = v1308;
LABEL_227:
  v1302 = 0;
  v153 = lpMem;
  if ( lpMem )
  {
    v154 = GetProcessHeap();
    HeapFree(v154, 0, v153);
    lpMem = 0LL;
  }
  v1367 = 0LL;
  v155 = v1368;
  if ( v1368 )
  {
    v156 = GetProcessHeap();
    HeapFree(v156, 0, v155);
    v1368 = 0LL;
  }
  if ( v76 )
  {
    v157 = GetProcessHeap();
    HeapFree(v157, 0, v76);
  }
  if ( v77 )
  {
    v158 = GetProcessHeap();
    HeapFree(v158, 0, v77);
  }
  v159 = 0LL;
  if ( v80 < 0 )
    goto LABEL_1710;
  if ( !v1350 )
    goto LABEL_1365;
  v1560 = 0LL;
  dword_18012B820 = v1350;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  if ( ModuleFileNameW && (ModuleFileNameW != 260 || GetLastError() != 122) )
  {
    v1343 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0F8[0])(0LL, 0LL, 1027LL);
    if ( !v1343 )
    {
      GetLastError();
      goto LABEL_1308;
    }
    v468 = off_18012A098[0]();
    v469 = dword_18012B820;
    qword_18012B818 = v468;
    v1277 = dword_18012B820;
    memset(v1606, 0, sizeof(v1606));
    v1403 = 1;
    v1384 = 0LL;
    v1385 = 0LL;
    v1341 = 0LL;
    v1347 = 0LL;
    memset(v1632, 0, 0x2CuLL);
    v1363 = 0LL;
    while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
      ;
    v470 = dword_18012B824;
    if ( !dword_18012B824 )
    {
      v1269 = 0;
      v1318 = 0;
      v1424 = 0LL;
      v1514 = 0LL;
      v471 = (char *)operator new(0x338uLL);
      v1312 = (SIZE_T)v471;
      if ( !v471 )
        goto LABEL_732;
      v472 = v471 + 7;
      v473 = -1;
      v474 = (unsigned __int8 *)&unk_1800EDAE2;
      v475 = 103LL;
      v1326 = 0;
      v476 = 0;
      v1334 = 0;
      v477 = 0;
      do
      {
        v478 = *(v474 - 1) | (*(v474 - 2) << 8);
        v479 = v474[2] << 8;
        v480 = *v474;
        v474 += 8;
        v481 = *(v474 - 7) | ((v480 | (v478 << 8)) << 8);
        v482 = v481 ^ (unsigned int)v159;
        v483 = *(v474 - 3) | ((*(v474 - 4) | ((*(v474 - 5) | v479) << 8)) << 8);
        v484 = v482 ^ v483 ^ v477 ^ 0xAC987321;
        v485 = (__ROL4__(v484, 10) + 4991 * __ROL4__(v484 + 1419157410, 5)) ^ v482;
        v486 = (43881 * __ROR4__(v485 + 133239679, 9) - __ROL4__(v485, 2)) ^ v484;
        v487 = (24670 * (v486 - 4991) - (v486 >> 13)) ^ v485;
        v488 = (2033 * __ROL4__(v487 ^ 0xAB69, 6) - __ROL4__(v487, 2)) ^ v486;
        v489 = (133239679 - (v488 ^ 0xAB69605E)) ^ v487;
        v490 = (43881 * (v489 ^ 0x137F)) ^ __ROR4__(v489, 6) ^ v488;
        v491 = (__ROL4__(v490, 2) + 24670 * __ROR4__(v490 + 133239679, 15)) ^ v489;
        v492 = (2033 * __ROR4__(v491 + 1419157410, 14) - __ROL4__(v491, 8)) ^ v490;
        v493 = __ROR4__(v492, 10) ^ (4991 * __ROR4__(v492 ^ 0xAB69605E, 12)) ^ v491;
        v494 = (v493 >> 10) ^ (43881 * (v493 ^ 0x7F1)) ^ v492;
        v495 = (2033 * (__ROR4__(~v494, 5) + 24670)) ^ v493;
        v496 = v494 ^ (v495 - 2033) ^ 0xAB69605E;
        v497 = ((v496 >> 2) + 4991 * __ROL4__(v494 ^ (v495 - 2033) ^ 0xAB6967AF, 2)) ^ v495;
        v498 = (__ROL4__(v497, 7) + 43881 * __ROR4__(v497 - 133239679, 6)) ^ v496;
        v499 = (24670 * (v498 ^ 0x137F) + __ROR4__(v498, 9)) ^ v497;
        v500 = (__ROL4__(v499, 7) + 2033 * __ROL4__(v499 ^ 0xAB69, 5)) ^ v498;
        v501 = v499 ^ v500 ^ 0xAC987321;
        v502 = (4991 * (__ROR4__(v501, 3) - 43881)) ^ v500;
        v503 = (24670 * __ROR4__(v502 - 133239679, 1) - __ROR4__(v502, 6)) ^ v501;
        v504 = (__ROL4__(v503, 14) + 2033 * __ROL4__(v503 - 1419157410, 3)) ^ v502;
        v505 = (4991 * __ROL4__(v504 - 1419157410, 15) - __ROR4__(v504, 14)) ^ v503;
        v506 = (v505 >> 3) ^ (43881 * (v505 ^ 0x605E)) ^ v504;
        v1326 = v473 ^ v506;
        v473 = v483;
        v507 = v476 ^ __ROL4__(v506, 2) ^ (24670 * __ROL4__(v506 ^ 0x7F1137F, 4));
        v476 = v481;
        v1334 = v507 ^ v505;
        *(v472 - 4) = v507 ^ v505;
        v1334 = __ROR4__(v1334, 8);
        *v472 = v1326;
        v472 += 8;
        v1326 = __ROR4__(v1326, 8);
        *(v472 - 13) = v1334;
        v1334 = __ROR4__(v1334, 8);
        *(v472 - 9) = v1326;
        v1326 = __ROR4__(v1326, 8);
        *(v472 - 14) = v1334;
        v1334 = __ROR4__(v1334, 8);
        *(v472 - 10) = v1326;
        v1326 = __ROR4__(v1326, 8);
        *(v472 - 15) = v1334;
        *(v472 - 11) = v1326;
        LODWORD(v159) = __ROR4__(v1334, 8);
        v477 = __ROR4__(v1326, 8);
        v1334 = (int)v159;
        v1326 = v477;
        --v475;
      }
      while ( v475 );
      v469 = v1277;
      v159 = 0LL;
      v80 = v1265;
      v508 = 0LL;
      v509 = (void *)v1312;
      v510 = 0;
      v511 = 0;
      v512 = 0;
      do
      {
        v510 ^= *(_BYTE *)(v508 + v1312);
        ++v508;
      }
      while ( v508 < 0x338 );
      if ( v510 == 64LL )
      {
        v1424 = (LPCWSTR)v1312;
        v509 = 0LL;
        v1514 = 824LL;
      }
      else
      {
        v512 = -1073425151;
      }
      if ( v509 )
        operator delete(v509);
      if ( v512 < 0 )
        goto LABEL_732;
      m = v1424;
      HIBYTE(v1424[v1514 / 2 - 1]) = 0;
      memset(&unk_18012C460, 0, 0x60uLL);
      while ( *(_BYTE *)m )
      {
        v514 = m;
        v515 = -1LL;
        do
          ++v515;
        while ( m[v515] );
        v516 = &m[v515];
        v517 = (char *)&unk_18012C460 + 24 * v1318;
        if ( !GetModuleHandleExW(0, v514, (HMODULE *)v517) )
        {
          v159 = 0LL;
LABEL_732:
          v511 = -1073741702;
          break;
        }
        v511 = 0;
        if ( **(_WORD **)v517 == 23117
          && (v518 = *(int *)(*(_QWORD *)v517 + 60LL), (unsigned int)v518 < 0x10000000)
          && (v519 = *(_QWORD *)v517 + v518, v519 >= *(_QWORD *)v517)
          && *(_DWORD *)v519 == 17744 )
        {
          if ( ((*(_WORD *)(v519 + 24) - 267) & 0xFEFF) != 0 )
          {
            v511 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v517 + 12) = *(_QWORD *)(v519 + 136);
            *((_DWORD *)v517 + 2) = *(_DWORD *)(v519 + 80);
          }
        }
        else
        {
          v511 = -1073741701;
        }
        v520 = *(_DWORD *)(v516 + 1);
        v521 = 0;
        for ( m = v516 + 3; v521 < v520; ++v521 )
        {
          v1515 = 0LL;
          v522 = (unsigned __int8 *)m;
          v523 = -1LL;
          do
            ++v523;
          while ( *((_BYTE *)m + v523) );
          m = (LPCWSTR)((char *)m + v523 + 1);
          if ( v511 >= 0 )
          {
            v511 = WARBIRD::GetFunctionAddress(v522, 0, (__int64)v517, (const char **)&v1515);
            if ( v511 < 0 )
            {
              v159 = 0LL;
              goto LABEL_733;
            }
            off_18012A000[v1269] = v1515;
          }
          ++v1269;
        }
        ++v1318;
        v159 = 0LL;
      }
LABEL_733:
      if ( v1424 )
      {
        v524 = GetProcessHeap();
        HeapFree(v524, 0, (LPVOID)v1424);
      }
      if ( v511 < 0 )
      {
        v525 = (HMODULE *)&unk_18012C460;
        v526 = 4LL;
        do
        {
          if ( *v525 )
            FreeLibrary(*v525);
          v525 += 3;
          --v526;
        }
        while ( v526 );
        memset(&unk_18012C460, 0, 0x60uLL);
        memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
LABEL_744:
        v1305 = 0;
        _InterlockedExchange(&dword_18012C4D8, 0);
        dwBytes_4 = 0;
        v1644 = 0;
        SP_MEM<unsigned short *>::SP_MEM<unsigned short *>(&v1492);
        v1534 = 0LL;
        v1512 = 0LL;
        v1513 = 0LL;
        v1535 = 0LL;
        v1536 = 0LL;
        while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
          ;
        v527 = dword_18012B824;
        if ( !dword_18012B824 )
        {
          v1270 = 0;
          LODWORD(v1313) = 0;
          v1318 = 0;
          v1427 = 0LL;
          v1516 = 0LL;
          v528 = (char *)operator new(0x338uLL);
          v1312 = (SIZE_T)v528;
          if ( !v528 )
            goto LABEL_781;
          v529 = v528 + 7;
          v530 = -1;
          v531 = (unsigned __int8 *)&unk_1800EDAE2;
          v532 = 103LL;
          v533 = 0;
          v1325 = 0;
          v534 = 0;
          v1328 = 0;
          do
          {
            v535 = *(v531 - 1) | (*(v531 - 2) << 8);
            v536 = v531[2] << 8;
            v537 = *v531;
            v531 += 8;
            v538 = *(v531 - 7) | ((v537 | (v535 << 8)) << 8);
            v539 = v538 ^ (unsigned int)v159;
            v540 = *(v531 - 3) | ((*(v531 - 4) | ((*(v531 - 5) | v536) << 8)) << 8);
            v541 = v539 ^ v540 ^ v534 ^ 0xAC987321;
            v542 = (__ROL4__(v541, 10) + 4991 * __ROL4__(v541 + 1419157410, 5)) ^ v539;
            v543 = (43881 * __ROR4__(v542 + 133239679, 9) - __ROL4__(v542, 2)) ^ v541;
            v544 = (24670 * (v543 - 4991) - (v543 >> 13)) ^ v542;
            v545 = (2033 * __ROL4__(v544 ^ 0xAB69, 6) - __ROL4__(v544, 2)) ^ v543;
            v546 = (133239679 - (v545 ^ 0xAB69605E)) ^ v544;
            v547 = (43881 * (v546 ^ 0x137F)) ^ __ROR4__(v546, 6) ^ v545;
            v548 = (__ROL4__(v547, 2) + 24670 * __ROR4__(v547 + 133239679, 15)) ^ v546;
            v549 = (2033 * __ROR4__(v548 + 1419157410, 14) - __ROL4__(v548, 8)) ^ v547;
            v550 = __ROR4__(v549, 10) ^ (4991 * __ROR4__(v549 ^ 0xAB69605E, 12)) ^ v548;
            v551 = (v550 >> 10) ^ (43881 * (v550 ^ 0x7F1)) ^ v549;
            v552 = (2033 * (__ROR4__(~v551, 5) + 24670)) ^ v550;
            v553 = v551 ^ (v552 - 2033) ^ 0xAB69605E;
            v554 = ((v553 >> 2) + 4991 * __ROL4__(v551 ^ (v552 - 2033) ^ 0xAB6967AF, 2)) ^ v552;
            v555 = (__ROL4__(v554, 7) + 43881 * __ROR4__(v554 - 133239679, 6)) ^ v553;
            v556 = (24670 * (v555 ^ 0x137F) + __ROR4__(v555, 9)) ^ v554;
            v557 = (__ROL4__(v556, 7) + 2033 * __ROL4__(v556 ^ 0xAB69, 5)) ^ v555;
            v558 = v556 ^ v557 ^ 0xAC987321;
            v559 = (4991 * (__ROR4__(v558, 3) - 43881)) ^ v557;
            v560 = (24670 * __ROR4__(v559 - 133239679, 1) - __ROR4__(v559, 6)) ^ v558;
            v561 = (__ROL4__(v560, 14) + 2033 * __ROL4__(v560 - 1419157410, 3)) ^ v559;
            v562 = (4991 * __ROL4__(v561 - 1419157410, 15) - __ROR4__(v561, 14)) ^ v560;
            v563 = (v562 >> 3) ^ (43881 * (v562 ^ 0x605E)) ^ v561;
            v1325 = v530 ^ v563;
            v530 = v540;
            v564 = v533 ^ __ROL4__(v563, 2) ^ (24670 * __ROL4__(v563 ^ 0x7F1137F, 4));
            v533 = v538;
            v1328 = v564 ^ v562;
            *(v529 - 4) = v564 ^ v562;
            v1328 = __ROR4__(v1328, 8);
            *v529 = v1325;
            v529 += 8;
            v1325 = __ROR4__(v1325, 8);
            *(v529 - 13) = v1328;
            v1328 = __ROR4__(v1328, 8);
            *(v529 - 9) = v1325;
            v1325 = __ROR4__(v1325, 8);
            *(v529 - 14) = v1328;
            v1328 = __ROR4__(v1328, 8);
            *(v529 - 10) = v1325;
            v1325 = __ROR4__(v1325, 8);
            *(v529 - 15) = v1328;
            *(v529 - 11) = v1325;
            LODWORD(v159) = __ROR4__(v1328, 8);
            v534 = __ROR4__(v1325, 8);
            v1328 = (int)v159;
            v1325 = v534;
            --v532;
          }
          while ( v532 );
          v565 = (int)v1313;
          v159 = 0LL;
          v566 = 0;
          v567 = 0LL;
          v469 = v1277;
          v568 = (int)v1313;
          v80 = v1265;
          v569 = (void *)v1312;
          do
          {
            v566 ^= *(_BYTE *)(v567 + v1312);
            ++v567;
          }
          while ( v567 < 0x338 );
          if ( v566 == 64LL )
          {
            v1427 = (LPCWSTR)v1312;
            v569 = 0LL;
            v1516 = 824LL;
          }
          else
          {
            v568 = -1073425151;
          }
          if ( v569 )
            operator delete(v569);
          if ( v568 < 0 )
            goto LABEL_781;
          n = v1427;
          HIBYTE(v1427[v1516 / 2 - 1]) = 0;
          memset(&unk_18012C460, 0, 0x60uLL);
          while ( *(_BYTE *)n )
          {
            v571 = n;
            v572 = -1LL;
            do
              ++v572;
            while ( n[v572] );
            v573 = &n[v572];
            v574 = (char *)&unk_18012C460 + 24 * v1318;
            if ( !GetModuleHandleExW(0, v571, (HMODULE *)v574) )
            {
              v159 = 0LL;
LABEL_781:
              v565 = -1073741702;
              break;
            }
            v565 = 0;
            if ( **(_WORD **)v574 == 23117
              && (v575 = *(int *)(*(_QWORD *)v574 + 60LL), (unsigned int)v575 < 0x10000000)
              && (v576 = *(_QWORD *)v574 + v575, v576 >= *(_QWORD *)v574)
              && *(_DWORD *)v576 == 17744 )
            {
              if ( ((*(_WORD *)(v576 + 24) - 267) & 0xFEFF) != 0 )
              {
                v565 = -1073741811;
              }
              else
              {
                *(_QWORD *)(v574 + 12) = *(_QWORD *)(v576 + 136);
                *((_DWORD *)v574 + 2) = *(_DWORD *)(v576 + 80);
              }
            }
            else
            {
              v565 = -1073741701;
            }
            v577 = *(_DWORD *)(v573 + 1);
            v578 = 0;
            for ( n = v573 + 3; v578 < v577; ++v578 )
            {
              v1517 = 0LL;
              v579 = (unsigned __int8 *)n;
              v580 = -1LL;
              do
                ++v580;
              while ( *((_BYTE *)n + v580) );
              n = (LPCWSTR)((char *)n + v580 + 1);
              if ( v565 >= 0 )
              {
                v565 = WARBIRD::GetFunctionAddress(v579, 0, (__int64)v574, (const char **)&v1517);
                if ( v565 < 0 )
                {
                  v159 = 0LL;
                  goto LABEL_782;
                }
                off_18012A000[v1270] = v1517;
              }
              ++v1270;
            }
            ++v1318;
            v159 = 0LL;
          }
LABEL_782:
          if ( v1427 )
          {
            v581 = GetProcessHeap();
            HeapFree(v581, 0, (LPVOID)v1427);
          }
          if ( v565 < 0 )
          {
            v582 = (HMODULE *)&unk_18012C460;
            v583 = 4LL;
            do
            {
              if ( *v582 )
                FreeLibrary(*v582);
              v582 += 3;
              --v583;
            }
            while ( v583 );
            memset(&unk_18012C460, 0, 0x60uLL);
            memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
LABEL_793:
            _InterlockedExchange(&dword_18012C4D8, 0);
            memset(v1606, 0, sizeof(v1606));
            v1384 = 0LL;
            v584 = v469 & 0xF;
            v1304 = v584;
            v1643 = (v469 >> 4) & 0xF;
            LOWORD(v1644) = (v469 >> 8) & 0xF;
            HIWORD(v1644) = (v469 >> 12) & 0xF;
            v1273 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0F8[0])(0LL, 0LL, 1027LL);
            v1359 = 0xFFFFFF;
            if ( !v1273 )
            {
              v585 = GetLastError();
              v586 = v585;
              if ( v585 > 0 )
                v586 = (unsigned __int16)v585 | 0x80070000;
              if ( v586 >= 0 )
                v586 = -2147467259;
LABEL_931:
              while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
                ;
              v695 = dword_18012B824;
              if ( dword_18012B824 > 0 )
              {
                --dword_18012B824;
                if ( v695 == 1 )
                {
                  v696 = (HMODULE *)&unk_18012C460;
                  v697 = 4LL;
                  do
                  {
                    if ( *v696 )
                      FreeLibrary(*v696);
                    v696 += 3;
                    --v697;
                  }
                  while ( v697 );
                  memset(&unk_18012C460, 0, 0x60uLL);
                  memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
                }
              }
              _InterlockedExchange(&dword_18012C4D8, 0);
              SP_MEM<unsigned short *>::~SP_MEM<unsigned short *>(&v1492);
              if ( v586 < 0 )
              {
LABEL_1146:
                if ( v1606[1] )
                {
                  v806 = -1LL;
                  do
                    ++v806;
                  while ( *((_WORD *)v1606[1] + v806) );
                  memset(v1606[1], 0, 2 * v806 + 2);
                  operator delete(v1606[1]);
                  v1606[1] = 0LL;
                }
                if ( v1606[2] )
                {
                  v807 = -1LL;
                  do
                    ++v807;
                  while ( *((_WORD *)v1606[2] + v807) );
                  memset(v1606[2], 0, 2 * v807 + 2);
                  operator delete(v1606[2]);
                  v1606[2] = 0LL;
                }
                if ( v1606[3] )
                {
                  v808 = -1LL;
                  do
                    ++v808;
                  while ( *((_WORD *)v1606[3] + v808) );
                  memset(v1606[3], 0, 2 * v808 + 2);
                  operator delete(v1606[3]);
                  v1606[3] = 0LL;
                }
                if ( v1606[4] )
                {
                  off_18012A038();
                  v1606[4] = 0LL;
                }
                if ( v1606[5] )
                {
                  off_18012A038();
                  v1606[5] = 0LL;
                }
                if ( v1606[6] )
                {
                  off_18012A038();
                  v1606[6] = 0LL;
                }
                while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
                  ;
                v809 = dword_18012B824;
                if ( dword_18012B824 > 0 )
                {
                  --dword_18012B824;
                  if ( v809 == 1 )
                  {
                    v810 = 4LL;
                    v811 = (HMODULE *)&unk_18012C460;
                    do
                    {
                      if ( *v811 )
                        FreeLibrary(*v811);
                      v811 += 3;
                      --v810;
                    }
                    while ( v810 );
                    memset(&unk_18012C460, 0, 0x60uLL);
                    memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
                  }
                }
                _InterlockedExchange(&dword_18012C4D8, 0);
                v1294 = dword_18012B820;
                v812 = off_18012A098[0]();
                v1640[0] = 0;
                v1352 = (void *)(unsigned int)(v812 - qword_18012B818);
                memset(&v1640[2], 0, 0x38uLL);
                while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
                  ;
                v813 = dword_18012B824;
                if ( !dword_18012B824 )
                {
                  v1282 = 0;
                  v1431 = 0LL;
                  v1523 = 0LL;
                  v814 = (char *)operator new(0x338uLL);
                  v1353 = v814;
                  if ( v814 )
                  {
                    v815 = -1;
                    v1323 = 0;
                    v1330 = 0;
                    v816 = 0;
                    v817 = v814 + 7;
                    v818 = (unsigned __int8 *)&unk_1800EDAE2;
                    v819 = 0;
                    v820 = 103LL;
                    do
                    {
                      v821 = v818[1] | ((*v818 | ((*(v818 - 1) | (*(v818 - 2) << 8)) << 8)) << 8);
                      v822 = v821 ^ v816;
                      v823 = v818[5];
                      v824 = (v818[4] | ((v818[3] | (v818[2] << 8)) << 8)) << 8;
                      v818 += 8;
                      v825 = v823 | v824;
                      v826 = v822 ^ v825 ^ (unsigned int)v159 ^ 0xAC987321;
                      v827 = (__ROL4__(v826, 10) + 4991 * __ROL4__(v826 + 1419157410, 5)) ^ v822;
                      v828 = (43881 * __ROR4__(v827 + 133239679, 9) - __ROL4__(v827, 2)) ^ v826;
                      v829 = (24670 * (v828 - 4991) - (v828 >> 13)) ^ v827;
                      v830 = (2033 * __ROL4__(v829 ^ 0xAB69, 6) - __ROL4__(v829, 2)) ^ v828;
                      v831 = (133239679 - (v830 ^ 0xAB69605E)) ^ v829;
                      v832 = (43881 * (v831 ^ 0x137F)) ^ __ROR4__(v831, 6) ^ v830;
                      v833 = (__ROL4__(v832, 2) + 24670 * __ROR4__(v832 + 133239679, 15)) ^ v831;
                      v834 = (2033 * __ROR4__(v833 + 1419157410, 14) - __ROL4__(v833, 8)) ^ v832;
                      v835 = __ROR4__(v834, 10) ^ (4991 * __ROR4__(v834 ^ 0xAB69605E, 12)) ^ v833;
                      v836 = (v835 >> 10) ^ (43881 * (v835 ^ 0x7F1)) ^ v834;
                      v837 = (2033 * (__ROR4__(~v836, 5) + 24670)) ^ v835;
                      v838 = v836 ^ (v837 - 2033) ^ 0xAB69605E;
                      v839 = ((v838 >> 2) + 4991 * __ROL4__(v836 ^ (v837 - 2033) ^ 0xAB6967AF, 2)) ^ v837;
                      v840 = (__ROL4__(v839, 7) + 43881 * __ROR4__(v839 - 133239679, 6)) ^ v838;
                      v841 = (24670 * (v840 ^ 0x137F) + __ROR4__(v840, 9)) ^ v839;
                      v842 = (__ROL4__(v841, 7) + 2033 * __ROL4__(v841 ^ 0xAB69, 5)) ^ v840;
                      v843 = v841 ^ v842 ^ 0xAC987321;
                      v844 = (4991 * (__ROR4__(v843, 3) - 43881)) ^ v842;
                      v845 = (24670 * __ROR4__(v844 - 133239679, 1) - __ROR4__(v844, 6)) ^ v843;
                      v846 = (__ROL4__(v845, 14) + 2033 * __ROL4__(v845 - 1419157410, 3)) ^ v844;
                      v847 = (4991 * __ROL4__(v846 - 1419157410, 15) - __ROR4__(v846, 14)) ^ v845;
                      v848 = (v847 >> 3) ^ (43881 * (v847 ^ 0x605E)) ^ v846;
                      v1323 = v815 ^ v848;
                      v815 = v825;
                      v849 = v819 ^ __ROL4__(v848, 2) ^ (24670 * __ROL4__(v848 ^ 0x7F1137F, 4));
                      v819 = v821;
                      v1330 = v849 ^ v847;
                      *(v817 - 4) = v849 ^ v847;
                      v1330 = __ROR4__(v1330, 8);
                      *v817 = v1323;
                      v817 += 8;
                      v1323 = __ROR4__(v1323, 8);
                      *(v817 - 13) = v1330;
                      v1330 = __ROR4__(v1330, 8);
                      *(v817 - 9) = v1323;
                      v1323 = __ROR4__(v1323, 8);
                      *(v817 - 14) = v1330;
                      v1330 = __ROR4__(v1330, 8);
                      *(v817 - 10) = v1323;
                      v1323 = __ROR4__(v1323, 8);
                      *(v817 - 15) = v1330;
                      *(v817 - 11) = v1323;
                      v816 = __ROR4__(v1330, 8);
                      LODWORD(v159) = __ROR4__(v1323, 8);
                      v1330 = v816;
                      v1323 = (int)v159;
                      --v820;
                    }
                    while ( v820 );
                    v850 = 0;
                    v159 = 0LL;
                    v851 = 0;
                    v852 = 0LL;
                    v80 = v1265;
                    v853 = 0;
                    v854 = v1353;
                    do
                      v851 ^= *((_BYTE *)v1353 + v852++);
                    while ( v852 < 0x338 );
                    if ( v851 == 64LL )
                    {
                      v1431 = (LPCWSTR)v1353;
                      v854 = 0LL;
                      v1523 = 824LL;
                    }
                    else
                    {
                      v853 = -1073425151;
                    }
                    if ( v854 )
                      operator delete(v854);
                    if ( v853 >= 0 )
                    {
                      v914 = v1431;
                      HIBYTE(v1431[v1523 / 2 - 1]) = 0;
                      memset(&unk_18012C460, 0, 0x60uLL);
                      if ( !*(_BYTE *)v914 )
                        goto LABEL_1288;
                      v915 = 0;
                      while ( 1 )
                      {
                        v916 = v914;
                        v917 = -1LL;
                        do
                          ++v917;
                        while ( v914[v917] );
                        v918 = &v914[v917];
                        v919 = (char *)&unk_18012C460 + 24 * v915;
                        if ( !GetModuleHandleExW(0, v916, (HMODULE *)v919) )
                          break;
                        v850 = 0;
                        if ( **(_WORD **)v919 == 23117
                          && (v920 = *(int *)(*(_QWORD *)v919 + 60LL), (unsigned int)v920 < 0x10000000)
                          && (v921 = *(_QWORD *)v919 + v920, v921 >= *(_QWORD *)v919)
                          && *(_DWORD *)v921 == 17744 )
                        {
                          if ( ((*(_WORD *)(v921 + 24) - 267) & 0xFEFF) != 0 )
                          {
                            v850 = -1073741811;
                          }
                          else
                          {
                            *(_QWORD *)(v919 + 12) = *(_QWORD *)(v921 + 136);
                            *((_DWORD *)v919 + 2) = *(_DWORD *)(v921 + 80);
                          }
                        }
                        else
                        {
                          v850 = -1073741701;
                        }
                        v922 = *(_DWORD *)(v918 + 1);
                        v914 = v918 + 3;
                        if ( v922 )
                        {
                          do
                          {
                            v1524 = 0LL;
                            v923 = (unsigned __int8 *)v914;
                            v924 = -1LL;
                            do
                              ++v924;
                            while ( *((_BYTE *)v914 + v924) );
                            v914 = (LPCWSTR)((char *)v914 + v924 + 1);
                            if ( v850 >= 0 )
                            {
                              v850 = WARBIRD::GetFunctionAddress(
                                       v923,
                                       0,
                                       (__int64)&unk_18012C460 + 24 * v915,
                                       (const char **)&v1524);
                              if ( v850 < 0 )
                              {
                                v159 = 0LL;
                                goto LABEL_1288;
                              }
                              off_18012A000[v1282] = v1524;
                            }
                            ++v1282;
                            LODWORD(v159) = (_DWORD)v159 + 1;
                          }
                          while ( (unsigned int)v159 < v922 );
                        }
                        v159 = 0LL;
                        ++v915;
                        if ( !*(_BYTE *)v914 )
                          goto LABEL_1288;
                      }
                    }
                  }
                  v850 = -1073741702;
LABEL_1288:
                  if ( v1431 )
                  {
                    v925 = GetProcessHeap();
                    HeapFree(v925, 0, (LPVOID)v1431);
                  }
                  if ( v850 < 0 )
                  {
                    v926 = (HMODULE *)&unk_18012C460;
                    v927 = 4LL;
                    do
                    {
                      if ( *v926 )
                        FreeLibrary(*v926);
                      v926 += 3;
                      --v927;
                    }
                    while ( v927 );
                    memset(&unk_18012C460, 0, 0x60uLL);
                    memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
                    goto LABEL_1298;
                  }
                  v813 = dword_18012B824;
                }
                dword_18012B824 = v813 + 1;
LABEL_1298:
                _InterlockedExchange(&dword_18012C4D8, 0);
                v1640[14] = v1294;
                v1640[2] = (_DWORD)v1352;
                v1640[0] = 1;
                v1640[6] = -1721306479;
                v1640[4] = 1;
                v1640[10] = 1;
                v1640[8] = 1;
                v1640[12] = 1;
                ((void (__fastcall *)(_QWORD, __int64, __int64, _DWORD *))qword_18012A0D0)(0LL, 8225LL, 4LL, v1640);
                while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
                  ;
                v928 = dword_18012B824;
                if ( dword_18012B824 > 0 )
                {
                  --dword_18012B824;
                  if ( v928 == 1 )
                  {
                    v929 = (HMODULE *)&unk_18012C460;
                    v930 = 4LL;
                    do
                    {
                      if ( *v929 )
                        FreeLibrary(*v929);
                      v929 += 3;
                      --v930;
                    }
                    while ( v930 );
                    memset(&unk_18012C460, 0, 0x60uLL);
                    memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
                  }
                }
                _InterlockedExchange(&dword_18012C4D8, 0);
                ((void (__fastcall *)(_QWORD, LPVOID))off_18012A160[0])(0LL, v1343);
                v1335 = v1371;
                goto LABEL_1308;
              }
              v698 = v1384;
              v1519 = v1384;
              memset(v1607, 0, 0x68uLL);
              v699 = v1343;
              v700 = 1;
              v701 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18012A050[0])(v1343, 7LL);
              if ( !v701
                || !((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18012A068[0])(v701, 104LL, v1607)
                || WORD1(v1607[2]) != 32
                || !v1607[3]
                || SHIDWORD(v1607[0]) <= 0
                || SLODWORD(v1607[1]) <= 0 )
              {
                v700 = 0;
              }
              v1403 = v700;
              if ( v700 || v584 == 1 )
              {
                ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18012A150)(
                  (char *)&v1606[7] + 4,
                  v698,
                  HIDWORD(v1519));
                ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18012A150)(
                  (char *)&v1606[9] + 4,
                  v698,
                  HIDWORD(v1519));
                if ( v584 == 1 )
                  v1363 = ((__int64 (__fastcall *)(_QWORD))off_18012A028[0])(HIDWORD(v1606[0]) == 0 ? 0xB26720 : 0);
              }
              v1274 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18012A080)(v699, 1LL);
              v702 = 2064;
              if ( LODWORD(v1606[0]) )
                v702 = 133138;
              dwBytes_4 = v702;
              if ( v1403 )
              {
                v703 = v1606[1];
                v1291 = HIDWORD(v1606[0]);
                v1312 = (SIZE_T)v1606[4];
                memset(v1608, 0, 0x68uLL);
                memset(v1615, 0, 0x68uLL);
                v1309 = 0LL;
                v1279 = 0;
                v704 = 0;
                memset(v1630, 0, 0x2CuLL);
                v1620 = 0LL;
                v1621 = 0LL;
                if ( !v1606[1] )
                  goto LABEL_957;
                v705 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18012A050[0])(v699, 7LL);
                if ( !v705 )
                  goto LABEL_956;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18012A068[0])(v705, 104LL, v1608) )
                {
                  v704 = HIDWORD(v1608[0]);
                  LODWORD(v159) = v1608[1];
                  v1309 = (LPVOID)v1608[3];
                  v1279 = HIDWORD(v1608[0]);
                }
                v1308 = (unsigned __int16 *)((__int64 (__fastcall *)(LPVOID))off_18012A010[0])(v699);
                v736 = v1308;
                if ( !v1308 )
                {
LABEL_956:
                  GetLastError();
                  goto LABEL_957;
                }
                v1554 = 0LL;
                v737 = 0;
                LODWORD(v1313) = 0;
                memset(v1630, 0, 0x2CuLL);
                v1630[1] = HIDWORD(v1606[8]) - HIDWORD(v1606[7]);
                v1630[2] = LODWORD(v1606[8]) - LODWORD(v1606[9]);
                v1630[0] = 40;
                v1630[3] = 2097153;
                v1286 = (unsigned __int16 *)((__int64 (__fastcall *)(unsigned __int16 *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18012A018[0])(
                                              v1308,
                                              v1630,
                                              0LL,
                                              &v1554,
                                              0LL,
                                              0);
                if ( !v1286 )
                {
                  v738 = GetLastError();
                  v159 = 0LL;
                  v737 = v738;
                  if ( v738 > 0 )
                    v737 = (unsigned __int16)v738 | 0x80070000;
                  if ( v737 >= 0 )
                    v737 = -2147467259;
                  goto LABEL_1077;
                }
                v683 = ((unsigned int (__fastcall *)(unsigned __int16 *, __int64, _QWORD *))off_18012A068[0])(
                         v1286,
                         104LL,
                         v1615) == 0;
                v739 = 0LL;
                if ( !v683 )
                  v739 = v1615[3];
                LODWORD(v1621) = HIDWORD(v1606[8]) - HIDWORD(v1606[7]);
                HIDWORD(v1621) = LODWORD(v1606[9]) - LODWORD(v1606[8]);
                v1344 = v739;
                ((void (__fastcall *)(unsigned __int16 *, unsigned __int16 *))off_18012A078)(v736, v1286);
                ((void (__fastcall *)(unsigned __int16 *, __int64))off_18012A080)(v736, 1LL);
                v1335 = (void *)((__int64 (__fastcall *)(unsigned __int16 *, SIZE_T))off_18012A078)(v736, v1312);
                v740 = ((__int64 (__fastcall *)(_QWORD))off_18012A070[0])(0LL);
                ((void (__fastcall *)(unsigned __int16 *, __int64 *, __int64))off_18012A0E8[0])(v736, &v1620, v740);
                ((void (__fastcall *)(unsigned __int16 *, void *, __int64, __int64 *, unsigned int, _QWORD))off_18012A0D8)(
                  v736,
                  v703,
                  0xFFFFFFFFLL,
                  &v1620,
                  dwBytes_4,
                  0LL);
                if ( v1304 == 1 )
                {
                  if ( v1291 )
                  {
                    v741 = ((__int64 (__fastcall *)(__int64))off_18012A118[0])(8LL);
                    LOBYTE(v742) = v741;
                    v1296 = v741;
LABEL_1058:
                    v743 = HIDWORD(v1606[7]);
                    v744 = 0;
                    v745 = (int)v1606[8];
                    v746 = 0;
                    if ( SHIDWORD(v1606[7]) < 0 )
                    {
                      v743 = 0;
                      v744 = -HIDWORD(v1606[7]);
                    }
                    if ( SLODWORD(v1606[8]) < 0 )
                    {
                      v745 = 0;
                      v746 = -LODWORD(v1606[8]);
                    }
                    v747 = v1621 - v744;
                    if ( (int)v1621 - v744 >= v704 - v743 )
                      v747 = v704 - v743;
                    v748 = (_DWORD)v159 - v745;
                    v749 = HIDWORD(v1621) - v746;
                    if ( HIDWORD(v1621) - v746 >= v748 )
                      v749 = v748;
                    v159 = 0LL;
                    if ( v747 > 0 && v749 > 0 )
                    {
                      v1312 = v1344 + 4 * (v744 + (__int64)((int)v1621 * v746));
                      LODWORD(v1342) = 0;
                      v750 = (char *)v1309 + 4 * v743 + 4 * (__int64)(v704 * v745);
                      v751 = v1312;
                      v1309 = (LPVOID)(4LL * v1279);
                      v1344 = 4LL * (int)v1621;
                      do
                      {
                        v1280 = 0;
                        v752 = 0;
                        v753 = v750 + 2;
                        v754 = v751 - (_QWORD)v750;
                        do
                        {
                          if ( (unsigned __int8)(((unsigned __int8)v753[v754]
                                                + (unsigned __int8)v753[v754 - 2]
                                                + 2 * (unsigned int)(unsigned __int8)v753[v754 - 1]) >> 2) != 0xFF )
                          {
                            v755 = (unsigned __int8)~(((unsigned __int8)v753[v754]
                                                     + (unsigned __int8)v753[v754 - 2]
                                                     + 2 * (unsigned int)(unsigned __int8)v753[v754 - 1]) >> 2);
                            *v753 -= ~(((unsigned __int8)v753[v754]
                                      + (unsigned __int8)v753[v754 - 2]
                                      + 2 * (unsigned int)(unsigned __int8)v753[v754 - 1]) >> 2)
                                   * (v742 - *v753);
                            v756 = (unsigned __int8)*(v753 - 1);
                            v757 = (unsigned __int64)(2155905153LL * v755 * (BYTE1(v1296) - v756)) >> 32;
                            *(v753 - 1) = v756 + (v757 >> 7 < 0) + (v757 >> 7);
                            v758 = (unsigned __int8)*(v753 - 2);
                            v759 = (unsigned __int64)(2155905153LL * v755 * (BYTE2(v1296) - v758)) >> 32;
                            *(v753 - 2) = v758 + (v759 >> 7 < 0) + (v759 >> 7);
                            v752 = v1280;
                            v753[1] += v755 * (255 - (unsigned __int8)v753[1]) / 255;
                          }
                          ++v752;
                          v753 += 4;
                          v1280 = v752;
                        }
                        while ( v752 < v747 );
                        v159 = 0LL;
                        v760 = v1342;
                        v751 += v1344;
                        v750 = &v750[(_QWORD)v1309];
                        LODWORD(v1342) = v1342 + 1;
                      }
                      while ( v760 + 1 < v749 );
                      v80 = v1265;
                      v737 = (int)v1313;
                      v736 = v1308;
                    }
                    ((void (__fastcall *)(unsigned __int16 *))off_18012A038)(v1286);
                    if ( v1335 )
                      ((void (__fastcall *)(unsigned __int16 *, void *))off_18012A078)(v736, v1335);
LABEL_1077:
                    ((void (__fastcall *)(unsigned __int16 *))off_18012A030[0])(v736);
                    if ( v737 < 0 )
                      goto LABEL_1144;
                    v761 = v1606[2];
                    v1292 = HIDWORD(v1606[0]);
                    v1312 = (SIZE_T)v1606[5];
                    memset(v1611, 0, 0x68uLL);
                    memset(v1612, 0, 0x68uLL);
                    v1309 = 0LL;
                    v762 = 0;
                    memset(v1631, 0, 0x2CuLL);
                    v763 = 0LL;
                    v1622 = 0LL;
                    v1623 = 0LL;
                    if ( v1606[2] )
                    {
                      v764 = v1343;
                      v765 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18012A050[0])(v1343, 7LL);
                      if ( v765 )
                      {
                        if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18012A068[0])(
                               v765,
                               104LL,
                               v1611) )
                        {
                          v762 = HIDWORD(v1611[0]);
                          LODWORD(v159) = v1611[1];
                          v1309 = (LPVOID)v1611[3];
                        }
                        v1335 = (void *)((__int64 (__fastcall *)(LPVOID))off_18012A010[0])(v764);
                        v766 = v1335;
                        if ( v1335 )
                        {
                          v1555 = 0LL;
                          v767 = 0;
                          LODWORD(v1313) = 0;
                          memset(v1631, 0, 0x2CuLL);
                          v1631[1] = HIDWORD(v1606[10]) - HIDWORD(v1606[9]);
                          v1631[2] = LODWORD(v1606[10]) - LODWORD(v1606[11]);
                          v1631[0] = 40;
                          v1631[3] = 2097153;
                          v768 = ((__int64 (__fastcall *)(void *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18012A018[0])(
                                   v1335,
                                   v1631,
                                   0LL,
                                   &v1555,
                                   0LL,
                                   0);
                          v1287 = (unsigned __int16 *)v768;
                          if ( !v768 )
                          {
                            v769 = GetLastError();
                            v159 = 0LL;
                            v767 = v769;
                            if ( v769 > 0 )
                              v767 = (unsigned __int16)v769 | 0x80070000;
                            if ( v767 >= 0 )
                              v767 = -2147467259;
                            goto LABEL_1115;
                          }
                          if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18012A068[0])(
                                 v768,
                                 104LL,
                                 v1612) )
                          {
                            v763 = v1612[3];
                          }
                          LODWORD(v1623) = HIDWORD(v1606[10]) - HIDWORD(v1606[9]);
                          HIDWORD(v1623) = LODWORD(v1606[11]) - LODWORD(v1606[10]);
                          ((void (__fastcall *)(void *, unsigned __int16 *))off_18012A078)(v766, v1287);
                          ((void (__fastcall *)(void *, __int64))off_18012A080)(v766, 1LL);
                          v1372 = ((__int64 (__fastcall *)(void *, SIZE_T))off_18012A078)(v766, v1312);
                          v770 = ((__int64 (__fastcall *)(_QWORD))off_18012A070[0])(0LL);
                          ((void (__fastcall *)(void *, __int64 *, __int64))off_18012A0E8[0])(v766, &v1622, v770);
                          ((void (__fastcall *)(void *, void *, __int64, __int64 *, unsigned int, _QWORD))off_18012A0D8)(
                            v766,
                            v761,
                            0xFFFFFFFFLL,
                            &v1622,
                            dwBytes_4,
                            0LL);
                          if ( v1304 == 1 )
                          {
                            if ( !v1292 )
                            {
                              v1297 = 0xFFFFFF;
LABEL_1096:
                              v772 = HIDWORD(v1606[9]);
                              v773 = 0;
                              v774 = (int)v1606[10];
                              v775 = 0;
                              if ( SHIDWORD(v1606[9]) < 0 )
                              {
                                v772 = 0;
                                v773 = -HIDWORD(v1606[9]);
                              }
                              if ( SLODWORD(v1606[10]) < 0 )
                              {
                                v774 = 0;
                                v775 = -LODWORD(v1606[10]);
                              }
                              v776 = v1623 - v773;
                              if ( (int)v1623 - v773 >= v762 - v772 )
                                v776 = v762 - v772;
                              v777 = (_DWORD)v159 - v774;
                              v778 = HIDWORD(v1623) - v775;
                              if ( HIDWORD(v1623) - v775 >= v777 )
                                v778 = v777;
                              v159 = 0LL;
                              if ( v776 > 0 && v778 > 0 )
                              {
                                v1281 = 0;
                                v779 = (unsigned __int16 *)(v763 + 4 * (v773 + (__int64)(v775 * (int)v1623)));
                                v1308 = v779;
                                v780 = (char *)v1309 + 4 * v772 + 4 * (__int64)(v774 * v762);
                                v781 = v1359;
                                v1344 = 4LL * v762;
                                v1312 = 4LL * (int)v1623;
                                do
                                {
                                  v782 = 0;
                                  v783 = v780 + 2;
                                  v784 = (char *)v779 - v780;
                                  do
                                  {
                                    if ( (unsigned __int8)(((unsigned __int8)v783[v784]
                                                          + (unsigned __int8)v783[v784 - 2]
                                                          + 2 * (unsigned int)(unsigned __int8)v783[v784 - 1]) >> 2) != 0xFF )
                                    {
                                      v785 = (unsigned __int8)~(((unsigned __int8)v783[v784]
                                                               + (unsigned __int8)v783[v784 - 2]
                                                               + 2 * (unsigned int)(unsigned __int8)v783[v784 - 1]) >> 2);
                                      *v783 -= ~(((unsigned __int8)v783[v784]
                                                + (unsigned __int8)v783[v784 - 2]
                                                + 2 * (unsigned int)(unsigned __int8)v783[v784 - 1]) >> 2)
                                             * (v781 - *v783);
                                      v786 = (unsigned __int8)*(v783 - 1);
                                      v787 = (unsigned __int64)(2155905153LL * v785 * (BYTE1(v1297) - v786)) >> 32;
                                      *(v783 - 1) = v786 + (v787 >> 7 < 0) + (v787 >> 7);
                                      v788 = (unsigned __int8)*(v783 - 2);
                                      v789 = (unsigned __int64)(2155905153LL * v785 * (BYTE2(v1297) - v788)) >> 32;
                                      *(v783 - 2) = v788 + (v789 >> 7 < 0) + (v789 >> 7);
                                      v783[1] += v785 * (255 - (unsigned __int8)v783[1]) / 255;
                                    }
                                    v783 += 4;
                                    ++v782;
                                  }
                                  while ( v782 < v776 );
                                  v159 = 0LL;
                                  v790 = v1281;
                                  v779 = (unsigned __int16 *)((char *)v1308 + v1312);
                                  v780 += v1344;
                                  v1308 = (unsigned __int16 *)((char *)v1308 + v1312);
                                  ++v1281;
                                }
                                while ( v790 + 1 < v778 );
                                v80 = v1265;
                                v767 = (int)v1313;
                                v766 = v1335;
                              }
                              ((void (__fastcall *)(unsigned __int16 *))off_18012A038)(v1287);
                              if ( v1372 )
                                ((void (__fastcall *)(void *, __int64))off_18012A078)(v766, v1372);
LABEL_1115:
                              ((void (__fastcall *)(void *))off_18012A030[0])(v766);
                              if ( v767 >= 0 )
                              {
                                v791 = v1343;
LABEL_1259:
                                ((void (__fastcall *)(LPVOID, _QWORD))off_18012A080)(v791, v1274);
LABEL_1140:
                                if ( v1347 )
                                  ((void (__fastcall *)(void *))off_18012A038)(v1347);
                                goto LABEL_1142;
                              }
LABEL_1144:
                              if ( v1363 )
                                ((void (__fastcall *)(SIZE_T))off_18012A038)(v1363);
                              goto LABEL_1146;
                            }
                            v771 = ((__int64 (__fastcall *)(__int64))off_18012A118[0])(8LL);
                          }
                          else
                          {
                            v771 = -5723992;
                          }
                          v1359 = v771;
                          v1297 = v771;
                          goto LABEL_1096;
                        }
                      }
                      goto LABEL_956;
                    }
LABEL_957:
                    v159 = 0LL;
                    goto LABEL_1144;
                  }
                  v742 = 0xFFFFFF;
                }
                else
                {
                  v742 = -5723992;
                }
                v1296 = v742;
                goto LABEL_1058;
              }
              if ( HIDWORD(v1606[0]) || (v792 = -64, v584 == 1) )
                v792 = -1;
              LOWORD(v1318) = 0;
              BYTE2(v1318) = v792;
              v1421 = 0uLL;
              v1418 = 0uLL;
              HIBYTE(v1318) = 1;
              v1341 = (LPVOID)((__int64 (__fastcall *)(LPVOID))off_18012A010[0])(v699);
              if ( !v1341 )
              {
                GetLastError();
                goto LABEL_1144;
              }
              if ( v584 == 1 )
              {
                v793 = HIDWORD(v1606[8]) - HIDWORD(v1606[7]);
                v794 = HIDWORD(v1606[10]) - HIDWORD(v1606[9]);
                if ( HIDWORD(v1606[10]) - HIDWORD(v1606[9]) > HIDWORD(v1606[8]) - HIDWORD(v1606[7]) )
                  v793 = HIDWORD(v1606[10]) - HIDWORD(v1606[9]);
                v795 = __PAIR64__(LODWORD(v1606[11]) - LODWORD(v1606[8]), v793);
                if ( LODWORD(v1606[0]) )
                {
                  v796 = v793 + HIDWORD(v1606[7]) - HIDWORD(v1606[8]);
                  v797 = v793 + HIDWORD(v1606[9]) - HIDWORD(v1606[10]);
                  LODWORD(v1421) = v796;
                  LODWORD(v1418) = v797;
                }
                else
                {
                  v796 = v1421;
                  v797 = v1418;
                }
                v798 = v797 + v794;
                v1305 = HIDWORD(v1606[8]) - HIDWORD(v1606[7]) + v796;
                v799 = LODWORD(v1606[10]) - LODWORD(v1606[8]);
                LODWORD(v1342) = LODWORD(v1606[9]) - LODWORD(v1606[8]);
                HIDWORD(v1421) = LODWORD(v1606[9]) - LODWORD(v1606[8]);
                v800 = v1305;
                v1293 = LODWORD(v1606[11]) - LODWORD(v1606[8]);
                HIDWORD(v1418) = LODWORD(v1606[11]) - LODWORD(v1606[8]);
                v801 = LODWORD(v1606[11]) - LODWORD(v1606[8]);
                DWORD2(v1421) = v1305;
                DWORD2(v1418) = v797 + v794;
                DWORD1(v1418) = LODWORD(v1606[10]) - LODWORD(v1606[8]);
              }
              else
              {
                v793 = v1385;
                v801 = HIDWORD(v1385);
                v1421 = *(_OWORD *)((char *)&v1606[7] + 4);
                v800 = HIDWORD(v1606[8]);
                v796 = HIDWORD(v1606[7]);
                v1418 = *(_OWORD *)((char *)&v1606[9] + 4);
                v799 = (int)v1606[10];
                v797 = HIDWORD(v1606[9]);
                LODWORD(v1342) = v1606[9];
                v1293 = (int)v1606[11];
                v798 = HIDWORD(v1606[10]);
                v795 = v1385;
              }
              v1298 = v798;
              LODWORD(v1313) = v799;
              v1556 = 0LL;
              memset(v1632, 0, 0x2CuLL);
              v1632[0] = 40;
              v1632[1] = v793;
              v1632[2] = -v801;
              v1632[3] = 2097153;
              v802 = (void *)((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18012A018[0])(
                               v1341,
                               v1632,
                               0LL,
                               &v1556,
                               0LL,
                               0);
              v1347 = v802;
              if ( !v802 )
              {
                GetLastError();
                v159 = 0LL;
LABEL_1142:
                if ( v1341 )
                  ((void (__fastcall *)(LPVOID))off_18012A030[0])(v1341);
                goto LABEL_1144;
              }
              ((void (__fastcall *)(LPVOID, void *))off_18012A078)(v1341, v802);
              if ( v1304 == 1 && v1363 )
              {
                v1626 = v801;
                v1625 = v793;
                v803 = v1341;
                v1624 = 0LL;
                ((void (__fastcall *)(LPVOID, __int64 *, SIZE_T))off_18012A0E8[0])(v1341, &v1624, v1363);
              }
              else
              {
                v803 = v1341;
              }
              v804 = v1606[1];
              v1288 = HIDWORD(v1606[0]);
              v1352 = v1606[4];
              memset(v1610, 0, 0x68uLL);
              memset(v1614, 0, 0x68uLL);
              v1344 = 0LL;
              LODWORD(v1372) = 0;
              LODWORD(v1335) = 0;
              memset(v1628, 0, 0x2CuLL);
              v1616 = 0LL;
              v1617 = 0LL;
              if ( !v1606[1] )
              {
LABEL_1139:
                v159 = 0LL;
                goto LABEL_1140;
              }
              v805 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18012A050[0])(v803, 7LL);
              if ( !v805 )
                goto LABEL_1138;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18012A068[0])(v805, 104LL, v1610) )
              {
                v1344 = v1610[3];
                LODWORD(v1372) = HIDWORD(v1610[0]);
                LODWORD(v1335) = v1610[1];
              }
              v1309 = (LPVOID)((__int64 (__fastcall *)(LPVOID))off_18012A010[0])(v803);
              if ( !v1309 )
                goto LABEL_1138;
              v1557 = 0LL;
              v855 = 0;
              LODWORD(v1308) = 0;
              memset(v1628, 0, 0x2CuLL);
              v1628[0] = 40;
              v1628[1] = v800 - v796;
              v1305 = v800 - v796;
              v856 = DWORD1(v1421);
              v1628[2] = DWORD1(v1421) - v1342;
              v1628[3] = 2097153;
              v857 = ((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18012A018[0])(
                       v1309,
                       v1628,
                       0LL,
                       &v1557,
                       0LL,
                       0);
              v1312 = v857;
              if ( v857 )
              {
                v683 = ((unsigned int (__fastcall *)(SIZE_T, __int64, _QWORD *))off_18012A068[0])(v857, 104LL, v1614) == 0;
                v859 = 0LL;
                if ( !v683 )
                  v859 = (void *)v1614[3];
                HIDWORD(v1617) = v1342 - v856;
                v1353 = v859;
                LODWORD(v1617) = v1305;
                ((void (__fastcall *)(LPVOID, SIZE_T))off_18012A078)(v1309, v1312);
                ((void (__fastcall *)(LPVOID, __int64))off_18012A080)(v1309, 1LL);
                v1342 = ((__int64 (__fastcall *)(LPVOID, void *))off_18012A078)(v1309, v1352);
                v860 = ((__int64 (__fastcall *)(_QWORD))off_18012A070[0])(0LL);
                ((void (__fastcall *)(LPVOID, __int64 *, __int64))off_18012A0E8[0])(v1309, &v1616, v860);
                v861 = v804;
                v862 = v1309;
                ((void (__fastcall *)(LPVOID, void *, __int64, __int64 *, unsigned int, _QWORD))off_18012A0D8)(
                  v1309,
                  v861,
                  0xFFFFFFFFLL,
                  &v1616,
                  dwBytes_4,
                  0LL);
                if ( v1304 == 1 )
                {
                  if ( v1288 )
                    v1305 = ((__int64 (__fastcall *)(__int64))off_18012A118[0])(8LL);
                  else
                    v1305 = 0xFFFFFF;
                }
                else
                {
                  v1305 = -5723992;
                }
                v863 = 0;
                v864 = 0;
                if ( v796 < 0 )
                {
                  v865 = v796;
                  v796 = 0;
                  v863 = -v865;
                }
                if ( v856 < 0 )
                {
                  v866 = v856;
                  v856 = 0;
                  v864 = -v866;
                }
                v867 = (int)v1372;
                v868 = v1617 - v863;
                if ( (int)v1617 - v863 >= (int)v1372 - v796 )
                  v868 = v1372 - v796;
                v869 = HIDWORD(v1617) - v864;
                if ( HIDWORD(v1617) - v864 >= (int)v1335 - v856 )
                  v869 = (_DWORD)v1335 - v856;
                if ( v868 > 0 && v869 > 0 )
                {
                  v1353 = (char *)v1353 + 4 * v863 + 4 * (__int64)((int)v1617 * v864);
                  v870 = (char *)(v1344 + 4 * (v796 + (__int64)((int)v1372 * v856)));
                  v1344 = (__int64)v870;
                  LODWORD(v1372) = 0;
                  v871 = v1305;
                  v872 = (char *)v1353;
                  v1352 = (void *)(4LL * (int)v1617);
                  v1289 = (unsigned __int16 *)(4 * v867);
                  do
                  {
                    LODWORD(v1335) = 0;
                    v873 = 0;
                    v874 = v870 + 2;
                    v875 = (char *)(v872 - v870);
                    do
                    {
                      if ( (unsigned __int8)(((unsigned __int8)v875[(_QWORD)v874]
                                            + (unsigned __int8)v875[(_QWORD)v874 - 2]
                                            + 2 * (unsigned int)(unsigned __int8)v875[(_QWORD)v874 - 1]) >> 2) != 0xFF )
                      {
                        v876 = (unsigned __int8)~(((unsigned __int8)v875[(_QWORD)v874]
                                                 + (unsigned __int8)v875[(_QWORD)v874 - 2]
                                                 + 2 * (unsigned int)(unsigned __int8)v875[(_QWORD)v874 - 1]) >> 2);
                        v877 = BYTE1(v1305);
                        *v874 -= ~(((unsigned __int8)v875[(_QWORD)v874]
                                  + (unsigned __int8)v875[(_QWORD)v874 - 2]
                                  + 2 * (unsigned int)(unsigned __int8)v875[(_QWORD)v874 - 1]) >> 2)
                               * (v871 - *v874);
                        v878 = (unsigned __int8)*(v874 - 1);
                        v879 = (unsigned __int64)(2155905153LL * v876 * (v877 - v878)) >> 32;
                        v880 = BYTE2(v1305);
                        *(v874 - 1) = v878 + (v879 >> 7 < 0) + (v879 >> 7);
                        v881 = (unsigned __int8)*(v874 - 2);
                        v882 = (unsigned __int64)(2155905153LL * v876 * (v880 - v881)) >> 32;
                        *(v874 - 2) = v881 + (v882 >> 7 < 0) + (v882 >> 7);
                        v873 = (int)v1335;
                        v874[1] += v876 * (255 - (unsigned __int8)v874[1]) / 255;
                      }
                      ++v873;
                      v874 += 4;
                      LODWORD(v1335) = v873;
                    }
                    while ( v873 < v868 );
                    v883 = v1372;
                    v870 = (char *)v1289 + v1344;
                    v872 = &v872[(_QWORD)v1352];
                    v1344 += (__int64)v1289;
                    LODWORD(v1372) = v1372 + 1;
                  }
                  while ( v883 + 1 < v869 );
                  v80 = v1265;
                  v799 = (int)v1313;
                  v855 = (int)v1308;
                  v862 = v1309;
                }
                ((void (__fastcall *)(SIZE_T))off_18012A038)(v1312);
                v159 = 0LL;
                if ( v1342 )
                  ((void (__fastcall *)(LPVOID, __int64))off_18012A078)(v862, v1342);
              }
              else
              {
                v858 = GetLastError();
                v159 = 0LL;
                v855 = v858;
                if ( v858 > 0 )
                  v855 = (unsigned __int16)v858 | 0x80070000;
                if ( v855 >= 0 )
                  v855 = -2147467259;
              }
              ((void (__fastcall *)(LPVOID))off_18012A030[0])(v1309);
              if ( v855 < 0 )
                goto LABEL_1140;
              v884 = v1606[2];
              LODWORD(v1308) = HIDWORD(v1606[0]);
              v1353 = v1606[5];
              memset(v1609, 0, 0x68uLL);
              memset(v1613, 0, 0x68uLL);
              v1312 = 0LL;
              LODWORD(v1313) = 0;
              LODWORD(v1335) = 0;
              memset(v1629, 0, 0x2CuLL);
              v1618 = 0LL;
              v1619 = 0LL;
              if ( !v1606[2] )
                goto LABEL_1140;
              v885 = v1341;
              v886 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18012A050[0])(v1341, 7LL);
              if ( !v886 )
              {
LABEL_1138:
                GetLastError();
                goto LABEL_1139;
              }
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18012A068[0])(v886, 104LL, v1609) )
              {
                v1312 = v1609[3];
                LODWORD(v1313) = HIDWORD(v1609[0]);
                LODWORD(v1335) = v1609[1];
              }
              v887 = ((__int64 (__fastcall *)(LPVOID))off_18012A010[0])(v885);
              v159 = 0LL;
              v888 = v887;
              if ( !v887 )
              {
                GetLastError();
                goto LABEL_1140;
              }
              v1559 = 0LL;
              memset(v1629, 0, 0x2CuLL);
              v1629[0] = 40;
              v1299 = v1298 - v797;
              v1629[1] = v1299;
              v1629[3] = 2097153;
              v1629[2] = v799 - v1293;
              v889 = (void *)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18012A018[0])(
                               v888,
                               v1629,
                               0LL,
                               &v1559,
                               0LL,
                               0);
              v1309 = v889;
              if ( !v889 )
              {
                LODWORD(v159) = GetLastError();
                v890 = (int)v159 < 0;
                if ( (int)v159 > 0 )
                {
                  LODWORD(v159) = (unsigned __int16)v159 | 0x80070000;
                  v890 = (int)v159 < 0;
                }
                if ( !v890 )
                  LODWORD(v159) = -2147467259;
                goto LABEL_1255;
              }
              v683 = ((unsigned int (__fastcall *)(void *, __int64, _QWORD *))off_18012A068[0])(v889, 104LL, v1613) == 0;
              v891 = 0LL;
              if ( !v683 )
                v891 = (void *)v1613[3];
              v1352 = v891;
              LODWORD(v1619) = v1299;
              HIDWORD(v1619) = v1293 - v799;
              ((void (__fastcall *)(__int64, LPVOID))off_18012A078)(v888, v1309);
              ((void (__fastcall *)(__int64, __int64))off_18012A080)(v888, 1LL);
              v892 = ((__int64 (__fastcall *)(__int64, void *))off_18012A078)(v888, v1353);
              v1372 = v892;
              v893 = ((__int64 (__fastcall *)(_QWORD))off_18012A070[0])(0LL);
              ((void (__fastcall *)(__int64, __int64 *, __int64))off_18012A0E8[0])(v888, &v1618, v893);
              ((void (__fastcall *)(__int64, void *, __int64, __int64 *, unsigned int, _QWORD))off_18012A0D8)(
                v888,
                v884,
                0xFFFFFFFFLL,
                &v1618,
                dwBytes_4,
                0LL);
              v896 = 0LL;
              if ( v1304 == 1 )
              {
                if ( !(_DWORD)v1308 )
                {
                  v1300 = 0xFFFFFF;
LABEL_1236:
                  v898 = 0LL;
                  v899 = 0;
                  if ( v797 < 0 )
                  {
                    v900 = v797;
                    v797 = 0;
                    v898 = (unsigned int)-v900;
                  }
                  if ( v799 < 0 )
                  {
                    v901 = v799;
                    v799 = 0;
                    v899 = -v901;
                  }
                  v902 = (int)v1313;
                  v903 = v1619 - v898;
                  if ( (int)v1619 - (int)v898 >= (int)v1313 - v797 )
                    v903 = (_DWORD)v1313 - v797;
                  v904 = HIDWORD(v1619) - v899;
                  if ( HIDWORD(v1619) - v899 >= (int)v1335 - v799 )
                    v904 = (_DWORD)v1335 - v799;
                  if ( v903 > 0 && v904 > 0 )
                  {
                    v1295 = 0;
                    v898 = (__int64)v1352 + 4 * (int)v898 + 4 * (__int64)((int)v1619 * v899);
                    v1344 = v898;
                    v905 = v1312 + 4 * (v797 + (__int64)((int)v1313 * v799));
                    v906 = v1359;
                    v1353 = (void *)(4LL * (int)v1619);
                    v1352 = (void *)(4LL * (int)v1313);
                    do
                    {
                      v907 = 0;
                      v908 = (_BYTE *)(v905 + 2);
                      v909 = (char *)(v898 - v905);
                      do
                      {
                        if ( (unsigned __int8)(((unsigned __int8)v909[(_QWORD)v908]
                                              + (unsigned __int8)v909[(_QWORD)v908 - 2]
                                              + 2 * (unsigned int)(unsigned __int8)v909[(_QWORD)v908 - 1]) >> 2) != 0xFF )
                        {
                          v902 = (unsigned __int8)~(((unsigned __int8)v909[(_QWORD)v908]
                                                   + (unsigned __int8)v909[(_QWORD)v908 - 2]
                                                   + 2 * (unsigned int)(unsigned __int8)v909[(_QWORD)v908 - 1]) >> 2);
                          *v908 -= ~(((unsigned __int8)v909[(_QWORD)v908]
                                    + (unsigned __int8)v909[(_QWORD)v908 - 2]
                                    + 2 * (unsigned int)(unsigned __int8)v909[(_QWORD)v908 - 1]) >> 2)
                                 * (v906 - *v908);
                          v910 = (unsigned __int8)*(v908 - 1);
                          v911 = (unsigned __int64)(2155905153LL * (int)(v902 * (BYTE1(v1300) - v910))) >> 32;
                          *(v908 - 1) = v910 + (v911 >> 7 < 0) + (v911 >> 7);
                          v912 = (unsigned __int8)*(v908 - 2);
                          v913 = (unsigned __int64)(2155905153LL * (int)(v902 * (BYTE2(v1300) - v912))) >> 32;
                          *(v908 - 2) = v912 + (v913 >> 7 < 0) + (v913 >> 7);
                          v908[1] += (int)(v902 * (255 - (unsigned __int8)v908[1])) / 255;
                        }
                        v908 += 4;
                        ++v907;
                      }
                      while ( v907 < v903 );
                      v898 = (__int64)v1353 + v1344;
                      v896 = (unsigned int)(v1295 + 1);
                      v905 += (SIZE_T)v1352;
                      v1344 += (__int64)v1353;
                      v1295 = v896;
                    }
                    while ( (int)v896 < v904 );
                    v80 = v1265;
                    LODWORD(v159) = 0;
                    v892 = v1372;
                  }
                  ((void (__fastcall *)(LPVOID, __int64, __int64, __int64))off_18012A038)(v1309, v898, v902, v896);
                  if ( v892 )
                    ((void (__fastcall *)(__int64, __int64))off_18012A078)(v888, v892);
LABEL_1255:
                  ((void (__fastcall *)(__int64))off_18012A030[0])(v888);
                  if ( (int)v159 >= 0 )
                  {
                    v791 = v1343;
                    v159 = 0LL;
                    if ( v1304 == 1 )
                      ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, int))off_18012A000[0])(
                        v1343,
                        HIDWORD(v1606[7]),
                        LODWORD(v1606[8]),
                        (unsigned int)v795,
                        HIDWORD(v795),
                        v1341,
                        0,
                        0,
                        13369376);
                    else
                      ((void (__fastcall *)(LPVOID, _QWORD, _QWORD))off_18012A040[0])(
                        v1343,
                        (unsigned int)v1384,
                        HIDWORD(v1384));
                    goto LABEL_1259;
                  }
                  goto LABEL_1139;
                }
                v897 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))off_18012A118[0])(
                         8LL,
                         v894,
                         v895,
                         0LL);
                v896 = 0LL;
              }
              else
              {
                v897 = -5723992;
              }
              v1300 = v897;
              v1359 = v897;
              goto LABEL_1236;
            }
            SP_MEM<unsigned short *>::SP_MEM<unsigned short *>(&v1434);
            SP_MEM<unsigned short *>::SP_MEM<unsigned short *>(&v1429);
            v1518 = 0LL;
            SP_MEM<unsigned short *>::SP_MEM<unsigned short *>(&v1389);
            SP_MEM<unsigned short *>::SP_MEM<unsigned short *>(&v1491);
            SP_MEM<unsigned short *>::SP_MEM<unsigned short *>(&v1428);
            v1399 = 0;
            v586 = 0;
            if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_18012A0A0[0])(
                    8LL,
                    &v1365,
                    0LL,
                    &v1399) )
            {
              v587 = GetLastError();
              goto LABEL_800;
            }
            v588 = operator new(2LL * v1399);
            SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1491, v588);
            v589 = v1491;
            if ( !SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1491) && v589 )
            {
              v590 = operator new(4LL * (v1365 + 1));
              SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1428, v590);
              v591 = v1428;
              if ( !SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1428) && v591 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_18012A0A0[0])(
                       8LL,
                       &v1365,
                       v589,
                       &v1399) )
                {
                  v592 = (_DWORD *)v591;
                  v593 = 0;
                  if ( v1365 )
                  {
                    do
                    {
                      *v592 = ((__int64 (__fastcall *)(__int64, _QWORD))off_18012A0B0[0])(v589, 0LL);
                      v594 = -1LL;
                      do
                        ++v594;
                      while ( *(_WORD *)(v589 + 2 * v594) );
                      ++v592;
                      v589 += 2 * v594 + 2;
                      ++v593;
                    }
                    while ( v593 < v1365 );
                    v80 = v1265;
                  }
                  *v592 = 1033;
                  v1434 = v591;
                  v1277 = v1365 + 1;
                  v159 = 0LL;
                  v1428 = 0LL;
LABEL_818:
                  SP_MEM<unsigned short *>::~SP_MEM<unsigned short *>(&v1428);
                  SP_MEM<unsigned short *>::~SP_MEM<unsigned short *>(&v1491);
                  if ( v586 < 0 )
                  {
                    v611 = v1536;
                    v1285 = v1535;
                    v1308 = v1534;
                    goto LABEL_885;
                  }
                  v595 = 0;
                  LODWORD(v1342) = 0;
                  if ( v1277 )
                  {
                    IsNull = SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1434);
                    v598 = 0LL;
LABEL_821:
                    v599 = 0;
                    v600 = dword_180104E90;
                    while ( 1 )
                    {
                      v601 = v1434;
                      if ( IsNull )
                        v601 = 0LL;
                      if ( *(_DWORD *)(v601 + v598) == *v600 )
                        break;
                      ++v600;
                      if ( ++v599 >= 0x26 )
                      {
                        ++v596;
                        v598 += 4LL;
                        if ( v596 >= v1277 )
                          goto LABEL_829;
                        goto LABEL_821;
                      }
                    }
                    v595 = v599;
                    LODWORD(v1342) = v599;
                  }
LABEL_829:
                  v602 = v595;
                  v1271 = 0;
                  if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_18012A0A8[0])(
                         dword_180104E90[v595],
                         v1645,
                         85LL)
                    && ((int (__fastcall *)(_BYTE *, __int64, char *))off_18012A090[0])(v1645, 88LL, v1637) > 0 )
                  {
                    v1271 = (v1638 >> 27) & 1;
                  }
                  v603 = L"Segoe UI Light";
                  v604 = 19LL;
                  v605 = (const wchar_t **)v1642;
                  do
                  {
                    *v605 = v603;
                    v606 = -1LL;
                    do
                      ++v606;
                    while ( v603[v606] );
                    ++v605;
                    v603 += v606 + 1;
                    --v604;
                  }
                  while ( v604 );
                  v607 = 3 * v602;
                  v608 = byte_1800F4360[3 * v602 + 1];
                  v1308 = (unsigned __int16 *)v1642[byte_1800F4360[3 * v602]];
                  v1534 = v1308;
                  v609 = (unsigned __int16 *)v1642[v608];
                  v610 = byte_1800F4360[v607 + 2];
                  v1285 = v609;
                  v1535 = v609;
                  v611 = (void *)v1642[v610];
                  v1309 = v611;
                  v1536 = v611;
                  LODWORD(v1313) = 0;
                  v612 = (char *)operator new(0x1C90uLL);
                  v1312 = (SIZE_T)v612;
                  if ( !v612 )
                  {
                    v586 = -2147024882;
LABEL_885:
                    v666 = (__int64)v1389;
                    goto LABEL_886;
                  }
                  v613 = 0;
                  v1329 = 0;
                  v614 = 0;
                  v1324 = 0;
                  v615 = 0;
                  v616 = v612 + 7;
                  v617 = -1;
                  v618 = (unsigned __int8 *)&unk_1801031F2;
                  v619 = 914LL;
                  do
                  {
                    v620 = *(v618 - 1) | (*(v618 - 2) << 8);
                    v621 = v618[2] << 8;
                    v622 = *v618;
                    v618 += 8;
                    v623 = *(v618 - 7) | ((v622 | (v620 << 8)) << 8);
                    v624 = v623 ^ v614;
                    v625 = *(v618 - 3) | ((*(v618 - 4) | ((*(v618 - 5) | v621) << 8)) << 8);
                    v626 = v624 ^ v625 ^ v613 ^ 0xAC987321;
                    v627 = (__ROL4__(v626, 10) + 4991 * __ROL4__(v626 + 1419157410, 5)) ^ v624;
                    v628 = (43881 * __ROR4__(v627 + 133239679, 9) - __ROL4__(v627, 2)) ^ v626;
                    v629 = (24670 * (v628 - 4991) - (v628 >> 13)) ^ v627;
                    v630 = (2033 * __ROL4__(v629 ^ 0xAB69, 6) - __ROL4__(v629, 2)) ^ v628;
                    v631 = (133239679 - (v630 ^ 0xAB69605E)) ^ v629;
                    v632 = (43881 * (v631 ^ 0x137F)) ^ __ROR4__(v631, 6) ^ v630;
                    v633 = (__ROL4__(v632, 2) + 24670 * __ROR4__(v632 + 133239679, 15)) ^ v631;
                    v634 = (2033 * __ROR4__(v633 + 1419157410, 14) - __ROL4__(v633, 8)) ^ v632;
                    v635 = __ROR4__(v634, 10) ^ (4991 * __ROR4__(v634 ^ 0xAB69605E, 12)) ^ v633;
                    v636 = (v635 >> 10) ^ (43881 * (v635 ^ 0x7F1)) ^ v634;
                    v637 = (2033 * (__ROR4__(~v636, 5) + 24670)) ^ v635;
                    v638 = v636 ^ (v637 - 2033) ^ 0xAB69605E;
                    v639 = ((v638 >> 2) + 4991 * __ROL4__(v636 ^ (v637 - 2033) ^ 0xAB6967AF, 2)) ^ v637;
                    v640 = (__ROL4__(v639, 7) + 43881 * __ROR4__(v639 - 133239679, 6)) ^ v638;
                    v641 = (24670 * (v640 ^ 0x137F) + __ROR4__(v640, 9)) ^ v639;
                    v642 = (__ROL4__(v641, 7) + 2033 * __ROL4__(v641 ^ 0xAB69, 5)) ^ v640;
                    v643 = v641 ^ v642 ^ 0xAC987321;
                    v644 = (4991 * (__ROR4__(v643, 3) - 43881)) ^ v642;
                    v645 = (24670 * __ROR4__(v644 - 133239679, 1) - __ROR4__(v644, 6)) ^ v643;
                    v646 = (__ROL4__(v645, 14) + 2033 * __ROL4__(v645 - 1419157410, 3)) ^ v644;
                    v647 = (4991 * __ROL4__(v646 - 1419157410, 15) - __ROR4__(v646, 14)) ^ v645;
                    v648 = (v647 >> 3) ^ (43881 * (v647 ^ 0x605E)) ^ v646;
                    v1324 = v617 ^ v648;
                    v617 = v625;
                    v649 = v615 ^ __ROL4__(v648, 2) ^ (24670 * __ROL4__(v648 ^ 0x7F1137F, 4));
                    v615 = v623;
                    v1329 = v649 ^ v647;
                    *(v616 - 4) = v649 ^ v647;
                    v1329 = __ROR4__(v1329, 8);
                    *v616 = v1324;
                    v616 += 8;
                    v1324 = __ROR4__(v1324, 8);
                    *(v616 - 13) = v1329;
                    v1329 = __ROR4__(v1329, 8);
                    *(v616 - 9) = v1324;
                    v1324 = __ROR4__(v1324, 8);
                    *(v616 - 14) = v1329;
                    v1329 = __ROR4__(v1329, 8);
                    *(v616 - 10) = v1324;
                    v1324 = __ROR4__(v1324, 8);
                    *(v616 - 15) = v1329;
                    *(v616 - 11) = v1324;
                    v614 = __ROR4__(v1329, 8);
                    v613 = __ROR4__(v1324, 8);
                    v1329 = v614;
                    v1324 = v613;
                    --v619;
                  }
                  while ( v619 );
                  v80 = v1265;
                  v159 = 0LL;
                  v586 = (int)v1313;
                  v650 = 0LL;
                  v651 = (void *)v1312;
                  v652 = 0LL;
                  do
                  {
                    v653 = _mm_loadu_si128((const __m128i *)(v650 + v1312));
                    v650 += 16LL;
                    v654 = _mm_xor_si128(v653, v652);
                    v652 = v654;
                  }
                  while ( v650 < 0x1C90 );
                  v655 = _mm_xor_si128(v654, _mm_srli_si128(v654, 8));
                  v656 = _mm_xor_si128(v655, _mm_srli_si128(v655, 4));
                  v657 = _mm_xor_si128(v656, _mm_srli_si128(v656, 2));
                  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v657, _mm_srli_si128(v657, 1))) == 127LL )
                  {
                    v1429 = v1312;
                    v651 = 0LL;
                    v1518 = 7312LL;
                  }
                  else
                  {
                    v586 = -1073425151;
                  }
                  if ( v651 )
                    operator delete(v651);
                  if ( v586 < 0 )
                  {
                    v611 = v1309;
                    goto LABEL_885;
                  }
                  v658 = SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1429);
                  v660 = v1342;
                  v661 = v1641;
                  v662 = 6LL;
                  if ( v658 )
                    v659 = 0LL;
                  do
                  {
                    for ( ii = 0; ii < 0x26; ++ii )
                    {
                      if ( v660 == ii )
                        *v661 = v659;
                      v664 = -1LL;
                      do
                        ++v664;
                      while ( *(_BYTE *)(v659 + v664) );
                      v659 += v664 + 1;
                    }
                    ++v661;
                    --v662;
                  }
                  while ( v662 );
                  v665 = operator new(0x18uLL);
                  SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1389, v665);
                  v666 = (__int64)v1389;
                  if ( !SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull((__int64)v1389) && v666 )
                  {
                    v667 = &v1643;
                    *(_QWORD *)v666 = 0LL;
                    v668 = 0;
                    *(_QWORD *)(v666 + 8) = 0LL;
                    v669 = 0LL;
                    *(_QWORD *)(v666 + 16) = 0LL;
                    v1278 = 0;
                    while ( 2 )
                    {
                      v670 = &unk_180104F28;
                      v671 = 0LL;
                      while ( *v667 != *v670 )
                      {
                        v671 = (unsigned int)(v671 + 1);
                        ++v670;
                        if ( (unsigned int)v671 >= 6 )
                          goto LABEL_872;
                      }
                      v672 = v1641[v671];
                      v673 = -1LL;
                      do
                        ++v673;
                      while ( *(_BYTE *)(v672 + v673) );
                      v674 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_18012A0C0[0])(
                               65001LL,
                               0LL,
                               v672,
                               (unsigned int)(v673 + 1),
                               0LL,
                               0);
                      v675 = v674;
                      if ( v674 )
                      {
                        *(_QWORD *)(v666 + v669) = operator new(2LL * v674);
                        if ( !*(_QWORD *)(v666 + v669) )
                        {
                          v611 = v1309;
                          v586 = -2147024882;
                          v159 = 0LL;
                          goto LABEL_886;
                        }
                        v676 = -1LL;
                        do
                          ++v676;
                        while ( *(_BYTE *)(v672 + v676) );
                        v677 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, int))off_18012A0C0[0])(
                                 65001LL,
                                 0LL,
                                 v672,
                                 (unsigned int)(v676 + 1),
                                 *(_QWORD *)(v666 + v669),
                                 v675);
                        v159 = 0LL;
                        if ( v677 )
                        {
                          v668 = v1278;
LABEL_872:
                          ++v668;
                          ++v667;
                          v669 += 8LL;
                          v1278 = v668;
                          if ( v668 < 3 )
                            continue;
                          v678 = v666;
                          v666 = 0LL;
                          v1492 = v678;
                          LODWORD(v1606[0]) = v1271;
                          v1389 = 0LL;
                          goto LABEL_881;
                        }
                        v679 = GetLastError();
                      }
                      else
                      {
                        v679 = GetLastError();
                        v159 = 0LL;
                      }
                      break;
                    }
                    v586 = v679;
                    if ( v679 > 0 )
                      v586 = (unsigned __int16)v679 | 0x80070000;
                    if ( v586 >= 0 )
                      v586 = -2147467259;
                    goto LABEL_881;
                  }
                  v586 = -2147024882;
LABEL_881:
                  v611 = v1309;
LABEL_886:
                  if ( !SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v666) && v666 )
                  {
                    v680 = 3LL;
                    do
                    {
                      if ( *(_QWORD *)&v159[v666] )
                      {
                        v681 = -1LL;
                        do
                          ++v681;
                        while ( *(_WORD *)(*(_QWORD *)&v159[v666] + 2 * v681) );
                        memset(*(void **)&v159[v666], 0, 2 * v681 + 2);
                        operator delete(*(void **)&v159[v666]);
                      }
                      v159 += 8;
                      --v680;
                    }
                    while ( v680 );
                    v159 = 0LL;
                  }
                  if ( !SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1429) && v682 )
                    memset(v682, 0, v1518);
                  SP_MEM<unsigned short *>::~SP_MEM<unsigned short *>(&v1389);
                  SP_MEM<unsigned short *>::~SP_MEM<unsigned short *>(&v1429);
                  SP_MEM<unsigned short *>::~SP_MEM<unsigned short *>(&v1434);
                  if ( v586 < 0 )
                    goto LABEL_929;
                  v683 = !SP<unsigned char,SP_HLOCAL<unsigned char>>::IsNull(v1492);
                  v685 = v684;
                  v686 = 0;
                  v586 = 0;
                  if ( !v683 )
                    v685 = 0LL;
                  v1606[1] = *v685;
                  v687 = v684;
                  if ( !v683 )
                  {
                    v687 = 0LL;
                    v684 = 0LL;
                  }
                  v1606[2] = v687[1];
                  v1606[3] = v684[2];
                  v1538 = 0LL;
                  v1539 = 0;
                  v1537 = 16;
                  if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, int *, _QWORD))off_18012A168)(
                                       66LL,
                                       0LL,
                                       &v1537,
                                       0LL) )
                  {
                    v686 = v1538 & 1;
                  }
                  else
                  {
                    v688 = GetLastError();
                    v586 = v688;
                    if ( v688 > 0 )
                      v586 = (unsigned __int16)v688 | 0x80070000;
                    if ( v586 >= 0 )
                      v586 = -2147467259;
                  }
                  HIDWORD(v1606[0]) = v686;
                  if ( v586 < 0 )
                    goto LABEL_929;
                  v689 = v1304;
                  if ( v1304 == 1 )
                  {
                    v1305 = 42;
                  }
                  else
                  {
                    if ( v1304 != 2 )
                    {
                      if ( v1304 == 3 )
                      {
                        v1305 = 225;
                        dwBytes_4 = 225;
                      }
LABEL_917:
                      v690 = 96;
                      memset(v1639, 0, 0xDCuLL);
                      LOWORD(v1639[17]) = 220;
                      if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _DWORD *))off_18012A0E0[0])(
                             0LL,
                             0xFFFFFFFFLL,
                             v1639) )
                      {
                        v690 = HIWORD(v1639[41]);
                        v1512 = 0LL;
                        LODWORD(v1513) = v1639[43];
                        if ( HIWORD(v1639[41]) < 0x60u )
                          v690 = 96;
                        HIDWORD(v1513) = v1639[44];
                      }
                      v691 = v1308;
                      v692 = (unsigned __int16 *)v611;
                      if ( v689 == 1 )
                        v692 = v1308;
                      memset(v1634, 0, 0x5CuLL);
                      v586 = 0;
                      v693 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0F8[0])(0LL, 0LL, 1027LL);
                      if ( !v693 )
                      {
                        v694 = GetLastError();
                        v586 = v694;
                        if ( v694 > 0 )
                          v586 = (unsigned __int16)v694 | 0x80070000;
                        if ( v586 >= 0 )
                          v586 = -2147467259;
LABEL_928:
                        v159 = 0LL;
LABEL_929:
                        v584 = v1304;
LABEL_930:
                        ((void (__fastcall *)(_QWORD, __int64))off_18012A160[0])(0LL, v1273);
                        goto LABEL_931;
                      }
                      v706 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0B8[0])(v1305, v690, 72LL);
                      v1634[4] = 400;
                      BYTE2(v1634[6]) = 5;
                      v1634[0] = -v706;
                      StringCchCopyW((char *)&v1634[7], 32LL, (char *)v692);
                      v707 = (void *)((__int64 (__fastcall *)(_DWORD *))off_18012A020[0])(v1634);
                      if ( v707 )
                      {
                        v1606[4] = v707;
                      }
                      else
                      {
                        v708 = GetLastError();
                        v586 = v708;
                        if ( v708 > 0 )
                          v586 = (unsigned __int16)v708 | 0x80070000;
                        if ( v586 >= 0 )
                          v586 = -2147467259;
                      }
                      ((void (__fastcall *)(_QWORD, __int64))off_18012A160[0])(0LL, v693);
                      if ( v586 < 0 )
                        goto LABEL_928;
                      if ( v1304 == 1 )
                        v611 = v691;
                      memset(v1635, 0, 0x5CuLL);
                      v159 = 0LL;
                      v586 = 0;
                      v709 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0F8[0])(0LL, 0LL, 1027LL);
                      if ( !v709 )
                      {
                        v710 = GetLastError();
                        v586 = v710;
                        if ( v710 > 0 )
                          v586 = (unsigned __int16)v710 | 0x80070000;
                        if ( v586 >= 0 )
                          v586 = -2147467259;
                        goto LABEL_929;
                      }
                      v711 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0B8[0])(dwBytes_4, v690, 72LL);
                      v1635[4] = 400;
                      BYTE2(v1635[6]) = 5;
                      v1635[0] = -v711;
                      StringCchCopyW((char *)&v1635[7], 32LL, (char *)v611);
                      v712 = (void *)((__int64 (__fastcall *)(_DWORD *))off_18012A020[0])(v1635);
                      if ( v712 )
                      {
                        v1606[5] = v712;
                      }
                      else
                      {
                        v713 = GetLastError();
                        v586 = v713;
                        if ( v713 > 0 )
                          v586 = (unsigned __int16)v713 | 0x80070000;
                        if ( v586 >= 0 )
                          v586 = -2147467259;
                      }
                      ((void (__fastcall *)(_QWORD, __int64))off_18012A160[0])(0LL, v709);
                      if ( v586 < 0 )
                        goto LABEL_929;
                      v714 = 0;
                      v715 = 0;
                      if ( v1304 != 1 )
                      {
                        if ( v1304 == 2 )
                        {
                          v715 = 0;
                          v714 = (int)v1513 / 4;
LABEL_983:
                          v1385 = __PAIR64__(v715, v714);
                          if ( v1304 == 1 )
                          {
                            v716 = 150;
                            dwBytes_4 = 32;
                          }
                          else if ( (unsigned int)(v1304 - 2) > 1 )
                          {
                            LODWORD(v159) = v1349;
                            v716 = v1349;
                            dwBytes_4 = v1349;
                          }
                          else
                          {
                            v716 = 0;
                            dwBytes_4 = 0;
                          }
                          v586 = 0;
                          v717 = v1606[1];
                          v718 = v714 - v716 - (_DWORD)v159;
                          HIDWORD(v1606[10]) = v718;
                          HIDWORD(v1606[8]) = v718;
                          v1312 = ((__int64 (__fastcall *)(__int64, void *))off_18012A078)(v1273, v1606[4]);
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, void *, __int64, char *, int, _QWORD))off_18012A0D8)(
                                                v1273,
                                                v717,
                                                0xFFFFFFFFLL,
                                                (char *)&v1606[7] + 4,
                                                3152,
                                                0LL) )
                            v586 = -2147467259;
                          if ( v1312 )
                            ((void (__fastcall *)(__int64, SIZE_T))off_18012A078)(v1273, v1312);
                          if ( v586 < 0 )
                            goto LABEL_928;
                          v586 = 0;
                          v719 = v1606[2];
                          v1312 = ((__int64 (__fastcall *)(__int64, void *))off_18012A078)(v1273, v1606[5]);
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, void *, __int64, char *, int, _QWORD))off_18012A0D8)(
                                                v1273,
                                                v719,
                                                0xFFFFFFFFLL,
                                                (char *)&v1606[9] + 4,
                                                3152,
                                                0LL) )
                            v586 = -2147467259;
                          if ( v1312 )
                            ((void (__fastcall *)(__int64, SIZE_T))off_18012A078)(v1273, v1312);
                          if ( v586 < 0 )
                            goto LABEL_928;
                          if ( (unsigned int)(v1304 - 2) <= 1 )
                          {
                            v718 = HIDWORD(v1606[10]);
                            if ( SHIDWORD(v1606[8]) > SHIDWORD(v1606[10]) )
                              v718 = HIDWORD(v1606[8]);
                          }
                          if ( LODWORD(v1606[0]) )
                          {
                            off_18012A150((CPolicyConfig *)((char *)&v1606[7] + 4));
                            v720 = v718 + (_DWORD)v159 - HIDWORD(v1606[10]);
                          }
                          else
                          {
                            off_18012A150((CPolicyConfig *)((char *)&v1606[7] + 4));
                            v720 = v716;
                          }
                          ((void (__fastcall *)(char *, __int64, _QWORD))off_18012A150)(
                            (char *)&v1606[9] + 4,
                            v720,
                            dwBytes_4 + LODWORD(v1606[9]));
                          v584 = v1304;
                          if ( (unsigned int)(v1304 - 2) <= 1 )
                          {
                            v1385 = __PAIR64__((unsigned int)v1606[11], v718);
                            LODWORD(v1606[7]) = -5723992;
                          }
                          else if ( v1304 == 1 )
                          {
                            LODWORD(v1606[7]) = 0xFFFFFF;
                            memset(v1636, 0, 0x5CuLL);
                            v159 = 0LL;
                            v586 = 0;
                            v721 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0F8[0])(0LL, 0LL, 1027LL);
                            if ( !v721 )
                            {
                              v722 = GetLastError();
                              v586 = v722;
                              if ( v722 > 0 )
                                v586 = (unsigned __int16)v722 | 0x80070000;
                              if ( v586 >= 0 )
                                v586 = -2147467259;
                              goto LABEL_930;
                            }
                            v723 = ((__int64 (__fastcall *)(__int64, _QWORD))off_18012A0B8[0])(11LL, v690);
                            v1636[4] = 400;
                            v1636[0] = -v723;
                            BYTE2(v1636[6]) = 5;
                            StringCchCopyW((char *)&v1636[7], 32LL, (char *)v1285);
                            v724 = (void *)((__int64 (__fastcall *)(_DWORD *))off_18012A020[0])(v1636);
                            if ( v724 )
                            {
                              v1606[6] = v724;
                            }
                            else
                            {
                              v725 = GetLastError();
                              v586 = v725;
                              if ( v725 > 0 )
                                v586 = (unsigned __int16)v725 | 0x80070000;
                              if ( v586 >= 0 )
                                v586 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_18012A160[0])(0LL, v721);
                            if ( v586 < 0 )
                              goto LABEL_930;
                            v586 = 0;
                            v726 = v1606[3];
                            HIDWORD(v1606[12]) = v718;
                            v727 = ((__int64 (__fastcall *)(__int64, void *))off_18012A078)(v1273, v1606[6]);
                            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, void *, __int64, char *, int, _QWORD))off_18012A0D8)(
                                                  v1273,
                                                  v726,
                                                  0xFFFFFFFFLL,
                                                  (char *)&v1606[11] + 4,
                                                  1120,
                                                  0LL) )
                              v586 = -2147467259;
                            if ( v727 )
                              ((void (__fastcall *)(__int64, __int64))off_18012A078)(v1273, v727);
                            v159 = 0LL;
                            if ( v586 < 0 )
                              goto LABEL_930;
                            v728 = HIDWORD(v1606[12]) + 24;
                            if ( HIDWORD(v1606[12]) + 24 < 90 )
                              v728 = 90;
                            HIDWORD(v1606[12]) = v728;
                            LODWORD(v1606[13]) = 32;
                            HIDWORD(v1606[11]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0B8[0])(
                                                   HIDWORD(v1606[11]),
                                                   v690,
                                                   96LL);
                            LODWORD(v1606[12]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0B8[0])(
                                                   LODWORD(v1606[12]),
                                                   v690,
                                                   96LL);
                            HIDWORD(v1606[12]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0B8[0])(
                                                   HIDWORD(v1606[12]),
                                                   v690,
                                                   96LL);
                            LODWORD(v1606[13]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18012A0B8[0])(
                                                   LODWORD(v1606[13]),
                                                   v690,
                                                   96LL);
                            off_18012A150((CPolicyConfig *)((char *)&v1606[11] + 4));
LABEL_1029:
                            v729 = (int)v1606[0];
                            v730 = HIDWORD(v1385);
                            v731 = v1385;
                            switch ( v584 )
                            {
                              case 1:
                                v1384 = 0LL;
                                goto LABEL_1041;
                              case 2:
                                memset(v1627, 0, sizeof(v1627));
                                v735 = ((__int64 (__fastcall *)(_QWORD, __int64))off_18012A148[0])(0LL, 1LL);
                                v1627[0] = 40;
                                if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_18012A108)(
                                                      v735,
                                                      v1627) )
                                {
LABEL_1041:
                                  v586 = 0;
                                  goto LABEL_930;
                                }
                                ((void (__fastcall *)(_QWORD, _DWORD *))off_18012A140[0])(0LL, &v1627[5]);
                                ((void (__fastcall *)(_QWORD, _DWORD *))off_18012A140[0])(0LL, &v1627[7]);
                                if ( v729 )
                                  v733 = v1627[5] + 5 * v1627[7] / 100;
                                else
                                  v733 = 95 * (v1627[7] - v731) / 100;
                                v734 = 95 * (v1627[8] - v730);
                                break;
                              case 3:
                                memset(v1633, 0, sizeof(v1633));
                                v732 = ((__int64 (__fastcall *)(_QWORD, __int64))off_18012A148[0])(0LL, 1LL);
                                v1633[0] = 40;
                                if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_18012A108)(
                                                      v732,
                                                      v1633) )
                                  goto LABEL_1041;
                                ((void (__fastcall *)(_QWORD, _DWORD *))off_18012A140[0])(0LL, &v1633[5]);
                                ((void (__fastcall *)(_QWORD, _DWORD *))off_18012A140[0])(0LL, &v1633[7]);
                                v733 = 50 * (v1633[7] - v731) / 100;
                                v734 = 50 * (v1633[8] - v730);
                                break;
                              default:
                                goto LABEL_1041;
                            }
                            LODWORD(v1384) = v733;
                            HIDWORD(v1384) = v734 / 100;
                            goto LABEL_1041;
                          }
                          v159 = 0LL;
                          goto LABEL_1029;
                        }
                        if ( v1304 != 3 )
                          goto LABEL_983;
                      }
                      v714 = v1513;
                      v715 = HIDWORD(v1513);
                      goto LABEL_983;
                    }
                    v1305 = 15;
                  }
                  dwBytes_4 = 11;
                  goto LABEL_917;
                }
                v587 = GetLastError();
                v159 = 0LL;
LABEL_800:
                v586 = v587;
                if ( v587 > 0 )
                  v586 = (unsigned __int16)v587 | 0x80070000;
                if ( v586 >= 0 )
                  v586 = -2147467259;
                goto LABEL_818;
              }
              v159 = 0LL;
            }
            v586 = -2147024882;
            goto LABEL_818;
          }
          v527 = dword_18012B824;
        }
        dword_18012B824 = v527 + 1;
        goto LABEL_793;
      }
      v470 = dword_18012B824;
    }
    dword_18012B824 = v470 + 1;
    goto LABEL_744;
  }
LABEL_1308:
  ATL::CHandle::Close((ATL::CHandle *)&v1560);
  if ( v1350 )
  {
    v1332 = 0LL;
    v1333 = 0LL;
    v931 = 0LL;
    v1419 = 0LL;
    v1420 = 0LL;
    v1561 = &unk_18012ADC0;
    v1349 = 0;
    v1525 = 160LL;
    v932 = GetProcessHeap();
    v933 = (unsigned __int16 *)HeapAlloc(v932, 8u, 0xA0uLL);
    v934 = v933;
    if ( !v933 )
      goto LABEL_1357;
    memcpy_0(v933, v1561, v1525);
    v935 = (unsigned int)v1525;
    v931 = v934;
    v1290 = v934;
    v1526 = 8LL;
    v1562 = &unk_18012AD00;
    v936 = GetProcessHeap();
    v937 = (char *)HeapAlloc(v936, 8u, 8uLL);
    v938 = v937;
    if ( !v937 )
      goto LABEL_1357;
    memcpy_0(v937, v1562, v1526);
    v939 = v1526;
    v159 = v938;
    v1313 = v938;
    v1563 = __rdtsc();
    v1348 = 0;
    if ( (int)RtlUIntAdd(4u, 4, &v1445) >= 0 )
    {
      v1398 = v1445;
      if ( (int)RtlUIntAdd(0, v1445, (int *)&v1348) >= 0 && (int)RtlUIntAdd(v940, v935, &v1446) >= 0 )
      {
        v1398 = v1446;
        v941 = RtlUIntAdd(v1348, v1446, (int *)&v1348);
        if ( (v943 | v941) >= 0 && (int)RtlUIntAdd(v942, v939, &v1464) >= 0 )
        {
          v1398 = v1464;
          v944 = RtlUIntAdd(v1348, v1464, (int *)&v1348);
          if ( (v946 | v944) >= 0 && (int)RtlUIntAdd(v945, 8, &v1447) >= 0 )
          {
            v1398 = v1447;
            v947 = RtlUIntAdd(v1348, v1447, (int *)&v1348);
            if ( (v948 | v947) >= 0 )
            {
              HIDWORD(v1332) = v1348;
              v949 = v1348;
              v950 = GetProcessHeap();
              v951 = (unsigned int *)HeapAlloc(v950, 8u, v949);
              v952 = v951;
              if ( v951 )
              {
                v1333 = v951;
                LODWORD(v1332) = 0;
                v1448 = 4;
                if ( (int)RtlULongLongAdd((unsigned __int64)v951, 4LL, (__int64 *)&v1602) >= 0
                  && v952 + 2 <= (unsigned int *)((char *)v952 + HIDWORD(v1332)) )
                {
                  v955 = v1602;
                  *v952 = v953;
                  *v955 = v1448;
                  v956 = v1332 + 1;
                  LODWORD(v1332) = v1332 + 1;
                  if ( !(_DWORD)v935 )
                  {
                    v959 = 1;
                    v964 = -1073741811;
                    goto LABEL_1337;
                  }
                  if ( v1333 == v954 )
                  {
                    v957 = 0LL;
                    if ( (int)RtlUIntAdd(v953, v935, (int *)&v1449) < 0 )
                      goto LABEL_1356;
                    v1451 = v1449;
                    if ( (int)RtlUIntAdd(HIDWORD(v1332), v1449, (int *)&v1332 + 1) < 0 )
                      goto LABEL_1356;
                    v959 = v958 + 1;
                    v956 = v958 + 1 + v1332;
                    LODWORD(v1332) = v956;
                    goto LABEL_1338;
                  }
                  v960 = (int *)v1333;
                  v1494 = (int *)v1333;
                  if ( v956 )
                  {
                    while ( (int)RtlUIntAdd(4u, *v960, (int *)&v1450) >= 0 )
                    {
                      v1451 = v1450;
                      if ( (int)RtlULongLongAdd(v961, v1450, (__int64 *)&v1494) < 0 )
                        goto LABEL_1335;
                      v960 = v1494;
                      if ( v962 + 1 >= v956 )
                        goto LABEL_1331;
                    }
                    goto LABEL_1356;
                  }
LABEL_1331:
                  v964 = RtlULongLongAdd((unsigned __int64)v960, 4LL, (__int64 *)&v1603);
                  if ( v964 >= 0 )
                  {
                    if ( (char *)v963 + v935 + 4 > (char *)v1333 + HIDWORD(v1332) )
                    {
                      v931 = v934;
                      v159 = v938;
                      goto LABEL_1357;
                    }
                    v965 = v1603;
                    *v963 = v935;
                    memcpy_0(v965, v934, v935);
                    v959 = 1;
                    v956 = v1332 + 1;
                    LODWORD(v1332) = v1332 + 1;
                    v953 = 4;
LABEL_1337:
                    v957 = 0LL;
                    v64 = v964 < 0;
                    v159 = v938;
                    if ( v64 )
                      goto LABEL_1356;
LABEL_1338:
                    if ( v939 )
                    {
                      if ( !v1333 )
                      {
                        if ( (int)RtlUIntAdd(v953, v939, (int *)&v1452) < 0 )
                          goto LABEL_1356;
                        v1454 = v1452;
                        if ( (int)RtlUIntAdd(HIDWORD(v1332), v1452, (int *)&v1332 + 1) < 0 )
                          goto LABEL_1356;
                        v956 = v959 + v1332;
                        LODWORD(v1332) = v959 + v1332;
                        goto LABEL_1353;
                      }
                      v967 = (int *)v1333;
                      v1495 = (int *)v1333;
                      if ( v956 )
                      {
                        while ( (int)RtlUIntAdd(4u, *v967, (int *)&v1453) >= 0 )
                        {
                          v1454 = v1453;
                          if ( (int)RtlULongLongAdd(v968, v1453, (__int64 *)&v1495) < 0 )
                            break;
                          v967 = v1495;
                          if ( v959 + v969 >= v956 )
                            goto LABEL_1347;
                        }
                        goto LABEL_1356;
                      }
LABEL_1347:
                      v970 = RtlULongLongAdd((unsigned __int64)v967, 4LL, (__int64 *)&v1604);
                      if ( v970 < 0 || (char *)v971 + v939 + 4 > (char *)v1333 + HIDWORD(v1332) )
                        goto LABEL_1356;
                      v972 = v1604;
                      *v971 = v939;
                      memcpy_0(v972, v938, v939);
                      v956 = v1332 + 1;
                      LODWORD(v1332) = v1332 + 1;
                    }
                    else
                    {
                      v970 = -1073741811;
                    }
                    if ( v970 < 0 )
                      goto LABEL_1356;
                    v959 = 1;
                    v966 = 4;
LABEL_1353:
                    v1564 = v1563;
                    if ( v1333 )
                    {
                      v981 = (int *)v1333;
                      v1496 = (int *)v1333;
                      if ( v956 )
                      {
                        while ( (int)RtlUIntAdd(4u, *v981, (int *)&v1456) >= 0 )
                        {
                          v1457 = v1456;
                          if ( (int)RtlULongLongAdd(v982, v1456, (__int64 *)&v1496) < 0 )
                            break;
                          v981 = v1496;
                          if ( v959 + v983 >= v956 )
                            goto LABEL_1370;
                        }
                        goto LABEL_1356;
                      }
LABEL_1370:
                      if ( (int)RtlULongLongAdd((unsigned __int64)v981, 4LL, v1605) < 0
                        || v985 + 3 > (_DWORD *)((char *)v1333 + HIDWORD(v1332)) )
                      {
                        goto LABEL_1356;
                      }
                      v986 = (unsigned __int64 *)v1605[0];
                      *v985 = 8;
                      v973 = v984;
                      *v986 = v1564;
                    }
                    else
                    {
                      if ( (int)RtlUIntAdd(v966, 8, (int *)&v1455) < 0 )
                        goto LABEL_1356;
                      v1457 = v1455;
                      if ( (int)RtlUIntAdd(HIDWORD(v1332), v1455, (int *)&v1332 + 1) < 0 )
                        goto LABEL_1356;
                    }
                    LODWORD(v1332) = v959 + v1332;
                    if ( (int)RtlUIntAdd(v973, v973, &v1458) >= 0 )
                    {
                      v988 = v1458;
                      v1460 = v1458;
                      v1410 = v1458;
                      if ( (int)RtlUIntAdd(v987, 8, &v1459) >= 0 )
                      {
                        v1460 = v1459;
                        if ( (int)RtlUIntAdd(v988, v1459, &v1410) >= 0 )
                        {
                          v1343 = 0LL;
                          v1346 = 0;
                          v989 = 0LL;
                          v1309 = 0LL;
                          v990 = 0;
                          v1341 = 0LL;
                          v991 = 0;
                          v1366 = 0;
                          v1422 = 0LL;
                          v1363 = 0LL;
                          v1371 = 0LL;
                          v1527 = __rdtsc();
                          v1360 = 8;
                          v992 = RtlUIntAdd(8u, SHIDWORD(v1332), (int *)&v1360);
                          if ( v992 >= 0 )
                          {
                            v994 = (v1360 + 7) & 0xFFFFFFF8;
                            if ( v994 >= v1360 )
                            {
                              v1360 = (v1360 + 7) & 0xFFFFFFF8;
                              v995 = v994;
                              v996 = GetProcessHeap();
                              v997 = (char *)HeapAlloc(v996, 8u, v995);
                              v993 = 0LL;
                              v998 = v997;
                              if ( v997 )
                              {
                                *(_DWORD *)v997 = v1332;
                                v1432 = v997;
                                v992 = RtlULongLongAdd((unsigned __int64)v997, 4LL, (__int64 *)&v1432);
                                if ( v992 >= 0 )
                                {
                                  v1000 = v1432;
                                  *(_DWORD *)v1432 = HIDWORD(v1332);
                                  v992 = RtlULongLongAdd((unsigned __int64)v1000, v999, (__int64 *)&v1432);
                                  if ( v992 >= 0 )
                                  {
                                    *(_QWORD *)&v998[v1360 - 8] = v1527;
                                    memcpy_0(v1432, v1333, HIDWORD(v1332));
                                    v990 = v1360;
                                    v993 = 0LL;
                                    v1343 = v998;
                                    v998 = 0LL;
                                  }
                                }
                                if ( v998 )
                                {
                                  v1001 = GetProcessHeap();
                                  HeapFree(v1001, 0, v998);
                                  v993 = 0LL;
                                }
                                v989 = (unsigned __int8 *)v1343;
                              }
                              else
                              {
                                v992 = -1073741801;
                                v989 = 0LL;
                              }
                            }
                            else
                            {
                              v992 = -1073741675;
                            }
                          }
                          v1002 = v992 | 0x10000000;
                          if ( v1002 < 0 )
                            goto LABEL_1664;
                          v1566 = v993;
                          v1003 = v993;
                          v1567 = (__int64)v993;
                          v1568 = v993;
                          v1569 = (__int64)v993;
                          v1497 = v993;
                          v1565 = (SIZE_T)v993;
                          v1353 = v993;
                          if ( v989 )
                          {
                            v1006 = v990;
                            v1005 = 0LL;
                            v1352 = (void *)v1006;
                            if ( v1006
                              && (v1312 = v1006 + 8, v1347 = operator new(v1006 + 8), (v1007 = (char *)v1347) != 0LL) )
                            {
                              v1008 = 0;
                              for ( jj = 0LL; jj < v1006; ++jj )
                                v1008 ^= v989[jj];
                              v1010 = v989;
                              v1283 = 0;
                              v1011 = -1;
                              v1311 = -1;
                              v1012 = 0;
                              v1320 = 0;
                              v1013 = v1347;
                              v1014 = 0;
                              v1015 = v1006 & 7;
                              if ( (v1006 & 7) != 0 )
                              {
                                v1016 = 0;
                                v1017 = 56;
                                do
                                {
                                  v1018 = *v1010;
                                  if ( v1016 >= 4 )
                                    v1014 |= v1018 << v1017;
                                  else
                                    LODWORD(v1005) = (v1018 << (v1017 - 32)) | (unsigned int)v1005;
                                  v1017 -= 8;
                                  ++v1016;
                                  ++v1010;
                                }
                                while ( v1016 < v1015 );
                                v1283 = (int)v1005;
                                v1012 = (unsigned int)v1005 ^ 0xB17A307A;
                                v1019 = v1014 ^ 0x42F6B18D;
                                v1320 = (unsigned int)v1005 ^ 0xB17A307A;
                                v1020 = 0;
                                v1311 = v1014 ^ 0x42F6B18D;
                                if ( (v1006 & 7) != 0 )
                                {
                                  do
                                  {
                                    if ( v1020 >= 4 )
                                    {
                                      v1019 = __ROL4__(v1019, 8);
                                      *v1013 = v1019;
                                    }
                                    else
                                    {
                                      v1012 = __ROL4__(v1012, 8);
                                      *v1013 = v1012;
                                    }
                                    ++v1020;
                                    ++v1013;
                                  }
                                  while ( v1020 < v1015 );
                                  v1012 = v1320;
                                  v1019 = v1311;
                                }
                                v1021 = v1015 - 4;
                                if ( v1021 <= 0 )
                                {
                                  v1311 = 0;
                                  v1011 = 0;
                                  if ( v1021 < 0 )
                                  {
                                    v1012 = v1012 >> (-8 * v1021) << (-8 * v1021);
                                    v1320 = v1012;
                                  }
                                }
                                else
                                {
                                  v1011 = v1019 >> (8 * (4 - v1021)) << (8 * (4 - v1021));
                                  v1311 = v1011;
                                }
                              }
                              v1022 = v1006 >> 3;
                              if ( v1006 >> 3 )
                              {
                                v1023 = v1283;
                                v1024 = v1013 + 7;
                                v1025 = v1010 + 2;
                                do
                                {
                                  v1026 = *(v1025 - 1) | (*(v1025 - 2) << 8);
                                  v1027 = v1025[2] << 8;
                                  v1028 = *v1025;
                                  v1025 += 8;
                                  v1029 = *(v1025 - 7) | ((v1028 | (v1026 << 8)) << 8);
                                  v1030 = *(v1025 - 3) | ((*(v1025 - 4) | ((*(v1025 - 5) | v1027) << 8)) << 8);
                                  v1031 = v1030 ^ v1011;
                                  v1032 = v1012 ^ v1029 ^ (v1031 - 19032) ^ 0xC81ECB17;
                                  v1033 = (__ROR4__(v1032, 7) + 45493 * __ROR4__(v1012 ^ v1029 ^ (v1031 - 19032), 15)) ^ v1031;
                                  v1034 = (51991 * __ROR4__(v1033 - 1313519016, 9) - __ROR4__(v1033, 10)) ^ v1032;
                                  v1035 = (__ROL4__(v1034, 5) + 51230 * __ROL4__(v1034 ^ 0xCB17, 4)) ^ v1033;
                                  v1036 = (-937506025 - (v1035 ^ 0xB1B54A58)) ^ v1034;
                                  v1037 = (45493 * (v1036 - 19032) - (v1036 >> 6)) ^ v1035;
                                  v1038 = (19032 * (__ROR4__(v1037, 15) ^ 0xCB17)) ^ v1036;
                                  v1039 = (51991 * (__ROR4__(~v1038, 3) + 51230)) ^ v1037;
                                  v1040 = (v1039 + 937486993) ^ v1038;
                                  v1041 = (45493 * (v1040 ^ 0xC81E)) ^ __ROR4__(v1040, 10) ^ v1039;
                                  v1042 = __ROR4__(v1041, 3) ^ (51991 * __ROL4__(v1041 ^ 0x4A58, 6)) ^ v1040;
                                  v1043 = (19032 * (__ROR4__(v1042, 15) - 51230)) ^ v1041;
                                  v1044 = (v1043 >> 15) ^ (19032 * __ROL4__(v1043 - 51991, 3)) ^ (v1043 >> 1) ^ (19032 * (v1043 ^ 0xC81E)) ^ v1042;
                                  v1045 = (45493 * (v1044 - 51991) - (v1044 >> 13)) ^ v1043;
                                  v1046 = __ROR4__(v1045, 11) ^ (51991 * __ROR4__(-1313519016 - v1045, 9)) ^ v1044;
                                  v1047 = (v1046 + 1313467786) ^ v1045;
                                  v1048 = (19032 * (v1047 ^ 0xB1B5) - __ROR4__(v1047, 7)) ^ v1046;
                                  v1049 = (45493 * __ROL4__(v1048 ^ 0xC81E, 4) - __ROR4__(v1048, 16)) ^ v1047;
                                  v1050 = (__ROR4__(v1049, 4) + 51991 * __ROR4__(-1313519016 - v1049, 10)) ^ v1048;
                                  v1051 = __ROR4__(v1050, 9) ^ (51230 * __ROR4__(v1050 + 1313519016, 4)) ^ v1049;
                                  v1052 = (19032 * __ROL4__(v1051 ^ 0xC81ECB17, 8) - __ROL4__(v1051, 2)) ^ v1050;
                                  v1053 = (45493 * __ROR4__(-937506025 - v1052, 11) - __ROR4__(v1052, 12)) ^ v1051;
                                  v1054 = (v1053 >> 8) ^ (51991 * (v1053 ^ 0xB1B5)) ^ v1052;
                                  v1320 = v1023 ^ v1054;
                                  v1023 = v1029;
                                  v1311 = v1014 ^ v1054 ^ v1053 ^ 0x79AB814F;
                                  v1014 = v1030;
                                  *(v1024 - 4) = v1320;
                                  v1320 = __ROR4__(v1320, 8);
                                  *v1024 = v1311;
                                  v1024 += 8;
                                  v1311 = __ROR4__(v1311, 8);
                                  *(v1024 - 13) = v1320;
                                  v1320 = __ROR4__(v1320, 8);
                                  *(v1024 - 9) = v1311;
                                  v1311 = __ROR4__(v1311, 8);
                                  *(v1024 - 14) = v1320;
                                  v1320 = __ROR4__(v1320, 8);
                                  *(v1024 - 10) = v1311;
                                  v1311 = __ROR4__(v1311, 8);
                                  *(v1024 - 15) = v1320;
                                  *(v1024 - 11) = v1311;
                                  v1012 = __ROR4__(v1320, 8);
                                  v1011 = __ROR4__(v1311, 8);
                                  v1320 = v1012;
                                  v1311 = v1011;
                                  --v1022;
                                }
                                while ( v1022 );
                                v80 = v1265;
                                v1003 = v1353;
                                v1006 = (unsigned __int64)v1352;
                                v1007 = (char *)v1347;
                              }
                              *(_QWORD *)&v1007[v1006] = v1008;
                              v1055 = v1312;
                              v1565 = v1312;
                              v1497 = v1007;
                              v1567 = 8LL;
                              v1566 = &qword_18012ADB0;
                              v1569 = 160LL;
                              v1568 = (__int64 *)xmmword_18012AD10;
                              v1056 = GetProcessHeap();
                              v1057 = HeapAlloc(v1056, 8u, 0x30uLL);
                              v1058 = v1057;
                              if ( v1057 )
                              {
                                *v1057 = v1055;
                                v1059 = GetProcessHeap();
                                v1060 = HeapAlloc(v1059, 8u, v1055);
                                if ( v1060
                                  && (*((_QWORD *)v1058 + 1) = v1060,
                                      memcpy_0(v1060, v1007, v1055),
                                      v1058[4] = 160,
                                      v1061 = GetProcessHeap(),
                                      (v1062 = HeapAlloc(v1061, 8u, 0xA0uLL)) != 0LL) )
                                {
                                  *((_QWORD *)v1058 + 3) = v1062;
                                  *v1062 = xmmword_18012AD10[0];
                                  v1062[1] = xmmword_18012AD10[1];
                                  v1062[2] = xmmword_18012AD10[2];
                                  v1062[3] = xmmword_18012AD10[3];
                                  v1062[4] = xmmword_18012AD10[4];
                                  v1062[5] = xmmword_18012AD10[5];
                                  v1062[6] = xmmword_18012AD10[6];
                                  v1062[7] = xmmword_18012AD10[7];
                                  v1062[8] = xmmword_18012AD10[8];
                                  v1062[9] = xmmword_18012AD10[9];
                                  v1058[8] = 8;
                                  v1063 = GetProcessHeap();
                                  v1064 = HeapAlloc(v1063, 8u, 8uLL);
                                  v1005 = 0LL;
                                  if ( v1064 )
                                  {
                                    *((_QWORD *)v1058 + 5) = v1064;
                                    v1003 = v1058;
                                    *v1064 = qword_18012ADB0;
                                    v1004 = 0;
                                    v1058 = 0LL;
                                  }
                                  else
                                  {
                                    v1004 = -1073741801;
                                  }
                                }
                                else
                                {
                                  v1004 = -1073741801;
                                  v1005 = 0LL;
                                }
                                if ( v1058 )
                                {
                                  v1065 = (void *)*((_QWORD *)v1058 + 1);
                                  if ( v1065 )
                                  {
                                    v1066 = GetProcessHeap();
                                    HeapFree(v1066, 0, v1065);
                                    *((_QWORD *)v1058 + 1) = 0LL;
                                  }
                                  v1067 = (void *)*((_QWORD *)v1058 + 3);
                                  if ( v1067 )
                                  {
                                    v1068 = GetProcessHeap();
                                    HeapFree(v1068, 0, v1067);
                                    *((_QWORD *)v1058 + 3) = 0LL;
                                  }
                                  v1005 = (void *)*((_QWORD *)v1058 + 5);
                                  if ( v1005 )
                                  {
                                    v1069 = GetProcessHeap();
                                    HeapFree(v1069, 0, v1005);
                                    v1005 = 0LL;
                                    *((_QWORD *)v1058 + 5) = 0LL;
                                  }
                                  v1070 = GetProcessHeap();
                                  HeapFree(v1070, 0, v1058);
                                }
                              }
                              else
                              {
                                v1004 = -1073741801;
                                v1005 = 0LL;
                              }
                              v991 = 0;
                              if ( v1004 >= 0 )
                              {
                                v1422 = v1003;
                                v1003 = v1005;
                              }
                            }
                            else
                            {
                              v1004 = -1073741823;
                            }
                            v1071 = v1497;
                            if ( v1497 )
                            {
                              v1072 = GetProcessHeap();
                              HeapFree(v1072, 0, v1071);
                              v1497 = v1005;
                            }
                            if ( v1003 )
                            {
                              v1073 = (void *)v1003[1];
                              if ( v1073 )
                              {
                                v1074 = GetProcessHeap();
                                HeapFree(v1074, 0, v1073);
                                v1003[1] = v1005;
                              }
                              v1075 = (void *)v1003[3];
                              if ( v1075 )
                              {
                                v1076 = GetProcessHeap();
                                HeapFree(v1076, 0, v1075);
                                v1003[3] = v1005;
                              }
                              v1077 = (void *)v1003[5];
                              if ( v1077 )
                              {
                                v1078 = GetProcessHeap();
                                HeapFree(v1078, 0, v1077);
                                v1003[5] = v1005;
                              }
                              v1079 = GetProcessHeap();
                              HeapFree(v1079, 0, v1003);
                            }
                            v957 = (unsigned int *)v1371;
                          }
                          else
                          {
                            v1004 = -1073741811;
                            v1005 = 0LL;
                          }
                          v1002 = v1004 | 0x10000000;
                          if ( v1002 < 0 )
                            goto LABEL_1664;
                          v1080 = (const void **)v1422;
                          v1338 = 4;
                          v1081 = RtlUIntAdd(4u, *(_DWORD *)v1422, (int *)&v1338);
                          if ( v1081 < 0
                            || (v1081 = RtlUIntAdd(v1338, 4, (int *)&v1338), v1081 < 0)
                            || (v1081 = RtlUIntAdd(v1338, *((_DWORD *)v1080 + 4), (int *)&v1338), v1081 < 0)
                            || (v1081 = RtlUIntAdd(v1338, 4, (int *)&v1338), v1081 < 0) )
                          {
                            v1082 = v1397;
                          }
                          else
                          {
                            v1081 = RtlUIntAdd(v1338, *((_DWORD *)v1080 + 8), (int *)&v1338);
                            v1082 = v1397;
                            if ( v1081 >= 0 )
                              v1082 = v1338;
                            v1397 = v1082;
                          }
                          if ( v1081 >= 0 )
                          {
                            v1083 = v1082;
                            v1084 = GetProcessHeap();
                            v1085 = HeapAlloc(v1084, 8u, v1083);
                            if ( v1085 )
                            {
                              *v1085 = *(_DWORD *)v1080;
                              v1356 = v1085;
                              v1081 = RtlULongLongAdd((unsigned __int64)v1085, 4LL, (__int64 *)&v1356);
                              if ( v1081 >= 0 )
                              {
                                memcpy_0(v1356, v1080[1], *(unsigned int *)v1080);
                                v1081 = RtlULongLongAdd(
                                          (unsigned __int64)v1356,
                                          *(unsigned int *)v1080,
                                          (__int64 *)&v1356);
                                if ( v1081 >= 0 )
                                {
                                  v1086 = v1356;
                                  *(_DWORD *)v1356 = *((_DWORD *)v1080 + 4);
                                  v1081 = RtlULongLongAdd((unsigned __int64)v1086, 4LL, (__int64 *)&v1356);
                                  if ( v1081 >= 0 )
                                  {
                                    memcpy_0(v1356, v1080[3], *((unsigned int *)v1080 + 4));
                                    v1081 = RtlULongLongAdd(
                                              (unsigned __int64)v1356,
                                              *((unsigned int *)v1080 + 4),
                                              (__int64 *)&v1356);
                                    if ( v1081 >= 0 )
                                    {
                                      v1087 = v1356;
                                      *(_DWORD *)v1356 = *((_DWORD *)v1080 + 8);
                                      v1081 = RtlULongLongAdd((unsigned __int64)v1087, 4LL, (__int64 *)&v1356);
                                      if ( v1081 >= 0 )
                                      {
                                        memcpy_0(v1356, v1080[5], *((unsigned int *)v1080 + 8));
                                        v1081 = RtlULongLongAdd(
                                                  (unsigned __int64)v1356,
                                                  *((unsigned int *)v1080 + 8),
                                                  (__int64 *)&v1356);
                                        if ( v1081 >= 0 )
                                        {
                                          v991 = v1397;
                                          v1363 = (SIZE_T)v1085;
                                          v1085 = v1005;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              if ( v1085 )
                              {
                                v1088 = GetProcessHeap();
                                HeapFree(v1088, 0, v1085);
                              }
                            }
                            else
                            {
                              v1081 = -1073741801;
                            }
                          }
                          v1002 = v1081 | 0x10000000;
                          if ( v1002 < 0 )
                            goto LABEL_1664;
                          v1570 = (unsigned int *)v1005;
                          v1461 = (int)v1005;
                          v1089 = (int)v1005;
                          v1571 = (unsigned int *)v1005;
                          v1462 = (int)v1005;
                          v1396 = 8;
                          v1090 = RtlUIntAdd(8u, v1410, (int *)&v1396);
                          v1002 = v1090 | 0x10000000;
                          if ( v1090 >= 0 )
                          {
                            v1092 = (v1396 + 7) & 0xFFFFFFF8;
                            if ( v1092 >= v1396 )
                            {
                              v1407 = (v1396 + 7) & 0xFFFFFFF8;
                              v1094 = RtlUIntAdd(v1092, v1091, (int *)&v1407);
                              v1093 = v1408;
                              v1002 = v1094;
                              if ( v1094 >= 0 )
                                v1093 = v1407;
                              v1408 = v1093;
                            }
                            else
                            {
                              v1093 = v1408;
                              v1002 = -1073741675;
                            }
                            if ( v1002 < 0 )
                              goto LABEL_1664;
                            if ( v1333 == v1005 || (unsigned int)v1332 <= 1 )
                              goto LABEL_1474;
                            v1095 = (unsigned int *)v1333;
                            v1378 = (unsigned int *)v1333;
                            do
                            {
                              v1096 = *v1095;
                              v1002 = RtlULongLongAdd((unsigned __int64)v1095, 4LL, (__int64 *)&v1378);
                              if ( v1002 < 0 )
                              {
                                v1005 = 0LL;
                                goto LABEL_1485;
                              }
                              v1097 = RtlULongLongAdd((unsigned __int64)v1378, v1096, (__int64 *)&v1378);
                              v1005 = 0LL;
                              v1002 = v1097;
                              if ( v1097 < 0 )
                                goto LABEL_1485;
                              v1095 = v1378;
                            }
                            while ( v1098 == -1 );
                            v1002 = RtlULongLongAdd((unsigned __int64)v1378, 4LL, (__int64 *)&v1378);
                            if ( v1002 >= 0 )
                            {
                              v1100 = v1378;
                              v1461 = v1099;
                              if ( !v1099 )
                                v1100 = 0LL;
                              v1378 = v1100;
                              v1570 = v1100;
                            }
LABEL_1485:
                            if ( v1002 < 0 )
                              goto LABEL_1664;
                            if ( (unsigned int)v1332 <= 2 )
                            {
LABEL_1474:
                              v1002 = -1073741811;
                            }
                            else
                            {
                              v1101 = (unsigned int *)v1333;
                              v1377 = (unsigned int *)v1333;
                              do
                              {
                                v1102 = *v1101;
                                v1002 = RtlULongLongAdd((unsigned __int64)v1101, 4LL, (__int64 *)&v1377);
                                if ( v1002 < 0 )
                                {
                                  v1005 = 0LL;
                                  goto LABEL_1496;
                                }
                                v1103 = RtlULongLongAdd((unsigned __int64)v1377, v1102, (__int64 *)&v1377);
                                v1005 = 0LL;
                                v1002 = v1103;
                                if ( v1103 < 0 )
                                  goto LABEL_1496;
                                v1101 = v1377;
                              }
                              while ( (unsigned int)(v1104 + 1) < 2 );
                              v1002 = RtlULongLongAdd((unsigned __int64)v1377, 4LL, (__int64 *)&v1377);
                              if ( v1002 >= 0 )
                              {
                                v1106 = v1377;
                                v1089 = v1105;
                                v1462 = v1105;
                                if ( !v1105 )
                                  v1106 = 0LL;
                                v1377 = v1106;
                                v1571 = v1106;
                              }
LABEL_1496:
                              if ( v1002 < 0 )
                                goto LABEL_1664;
                              v1339 = 4;
                              v1002 = RtlUIntAdd(4u, v1093, (int *)&v1339);
                              if ( v1002 < 0
                                || (v1002 = RtlUIntAdd(v1339, v1107, (int *)&v1339), v1002 < 0)
                                || (v1002 = RtlUIntAdd(v1339, v1108, (int *)&v1339), v1002 < 0)
                                || (v1002 = RtlUIntAdd(v1339, v1109, (int *)&v1339), v1002 < 0) )
                              {
                                v1110 = v1411;
                              }
                              else
                              {
                                v1002 = RtlUIntAdd(v1339, v1089, (int *)&v1339);
                                v1110 = v1411;
                                if ( v1002 >= 0 )
                                  v1110 = v1339;
                                v1411 = v1110;
                              }
                              if ( v1002 < 0 )
                                goto LABEL_1664;
                              if ( v1110 > 0x400000 )
                              {
                                v1002 = -2147418113;
LABEL_1664:
                                v1229 = v1343;
                                if ( v1343 )
                                {
                                  v1230 = GetProcessHeap();
                                  HeapFree(v1230, 0, v1229);
                                }
                                v1231 = v1422;
                                if ( v1422 )
                                {
                                  v1232 = (void *)*((_QWORD *)v1422 + 1);
                                  if ( v1232 )
                                  {
                                    v1233 = GetProcessHeap();
                                    HeapFree(v1233, 0, v1232);
                                    v1231[1] = 0LL;
                                  }
                                  v1234 = (void *)v1231[3];
                                  if ( v1234 )
                                  {
                                    v1235 = GetProcessHeap();
                                    HeapFree(v1235, 0, v1234);
                                    v1231[3] = 0LL;
                                  }
                                  v1236 = (void *)v1231[5];
                                  if ( v1236 )
                                  {
                                    v1237 = GetProcessHeap();
                                    HeapFree(v1237, 0, v1236);
                                    v1231[5] = 0LL;
                                  }
                                  v1238 = GetProcessHeap();
                                  HeapFree(v1238, 0, v1231);
                                  v1422 = 0LL;
                                }
                                v1239 = (void *)v1363;
                                if ( v1363 )
                                {
                                  v1240 = GetProcessHeap();
                                  HeapFree(v1240, 0, v1239);
                                }
                                v1241 = v1371;
                                if ( v1371 )
                                {
                                  v1242 = GetProcessHeap();
                                  HeapFree(v1242, 0, v1241);
                                }
                                v1243 = v1309;
                                if ( v1309 )
                                {
                                  v1244 = (void *)*((_QWORD *)v1309 + 1);
                                  if ( v1244 )
                                  {
                                    v1245 = GetProcessHeap();
                                    HeapFree(v1245, 0, v1244);
                                    v1243[1] = 0LL;
                                  }
                                  v1246 = (void *)v1243[3];
                                  if ( v1246 )
                                  {
                                    v1247 = GetProcessHeap();
                                    HeapFree(v1247, 0, v1246);
                                    v1243[3] = 0LL;
                                  }
                                  v1248 = (void *)v1243[5];
                                  if ( v1248 )
                                  {
                                    v1249 = GetProcessHeap();
                                    HeapFree(v1249, 0, v1248);
                                    v1243[5] = 0LL;
                                  }
                                  v1250 = GetProcessHeap();
                                  HeapFree(v1250, 0, v1243);
                                }
                                v1251 = v1341;
                                if ( v1341 )
                                {
                                  v1252 = GetProcessHeap();
                                  HeapFree(v1252, 0, v1251);
                                }
                                if ( v1002 >= 0 )
                                {
                                  if ( (_DWORD)v1419 )
                                  {
                                    v1253 = (__int64 *)v1420;
                                    if ( v1420 )
                                    {
                                      v1498 = v1420;
                                      if ( (int)RtlULongLongAdd((unsigned __int64)v1420, 4LL, (__int64 *)&v1498) >= 0 )
                                      {
                                        v1256 = v1498;
                                        v1577 = v1255;
                                        if ( !v1255 )
                                          v1256 = 0LL;
                                        v1498 = v1256;
                                        v1605[1] = (__int64)v1256;
                                        if ( v1255 == 4 )
                                        {
                                          v1349 = *v1256;
                                          if ( v1349 >= 0 && v1254 > 1 )
                                          {
                                            for ( kk = v1253;
                                                  (int)RtlULongLongAdd((unsigned __int64)v1253, 4LL, (__int64 *)&kk) >= 0
                                               && (int)RtlULongLongAdd(
                                                         (unsigned __int64)kk,
                                                         *(unsigned int *)v1253,
                                                         (__int64 *)&kk) >= 0;
                                                  v1253 = kk )
                                            {
                                              if ( v1257 != -1 )
                                              {
                                                v1258 = *(_DWORD *)kk;
                                                if ( (int)RtlULongLongAdd((unsigned __int64)kk, 4LL, (__int64 *)&kk) >= 0 )
                                                {
                                                  v1259 = kk;
                                                  v1558 = v1258;
                                                  if ( !v1258 )
                                                    v1259 = 0LL;
                                                  kk = v1259;
                                                  v1595[1] = (__int64)v1259;
                                                  if ( v1258 == 8 )
                                                    v1595[2] = *v1259;
                                                }
                                                break;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                v159 = (char *)v1313;
                                goto LABEL_1356;
                              }
                              v1346 = v1110;
                            }
                          }
                          if ( v1002 < 0 )
                            goto LABEL_1664;
                          v1111 = v1346;
                          v1112 = (int)v1005;
                          v1113 = GetProcessHeap();
                          v1114 = (unsigned int *)HeapAlloc(v1113, 8u, v1111);
                          if ( v1114 )
                          {
                            v957 = v1114;
                            v1371 = v1114;
                          }
                          else
                          {
                            v1112 = -1073741801;
                          }
                          v1002 = v1112 | 0x10000000;
                          if ( v1002 < 0 )
                            goto LABEL_1664;
                          if ( !v1363 || !v957 )
                          {
                            v1002 = -2147024809;
                            goto LABEL_1664;
                          }
                          v1591[0] = v1363;
                          v1593 = v1346;
                          v1592 = v991;
                          v1591[1] = v957;
                          v1594 = (int)v1005;
                          if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                            && (v1117 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                          {
                            v1118 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1117)(134LL, v1591);
                            v1002 = v1118 | 0x10000000;
                            v1116 = v1346;
                            if ( v1118 >= 0 )
                              v1116 = v1593;
                            v1346 = v1116;
                          }
                          else
                          {
                            v1115 = GetLastError();
                            v1002 = v1115;
                            if ( v1115 > 0 )
                              v1002 = (unsigned __int16)v1115 | 0x80070000;
                            if ( v1002 >= 0 )
                              v1002 = -2147467259;
                            v1116 = v1346;
                          }
                          if ( v1002 == -805306333 )
                          {
                            v1002 = -2147024774;
                            goto LABEL_1664;
                          }
                          if ( v1002 < 0 )
                            goto LABEL_1664;
                          v1316 = (unsigned int)v1005;
                          v1370 = v957;
                          v1119 = v1005;
                          if ( v1116 < 4 )
                            goto LABEL_1531;
                          v1121 = *v957;
                          v1120 = RtlULongLongAdd((unsigned __int64)v957, 4LL, (__int64 *)&v1370);
                          if ( v1120 < 0 || (v1120 = RtlUIntAdd(0, v1122, (int *)&v1316), v1120 < 0) )
                          {
LABEL_1549:
                            v1002 = v1120 | 0x10000000;
                            if ( v1002 < 0 )
                              goto LABEL_1664;
                            v1131 = (int)v1005;
                            v1401 = v1005;
                            v1132 = v1005;
                            v1520 = (SIZE_T)v1005;
                            v1275 = (int)v1005;
                            if ( !v1309
                              || (v1156 = *((_QWORD *)v1309 + 1), (v1312 = v1156) == 0)
                              || *(_DWORD *)v1309 == (_DWORD)v1005 )
                            {
                              v1131 = -1073741811;
                              goto LABEL_1628;
                            }
                            v1157 = *(unsigned int *)v1309;
                            LODWORD(v1308) = 0;
                            if ( v1157 )
                            {
                              v1158 = v1157 - 8;
                              v1352 = (void *)v1158;
                              v1159 = operator new(v1158);
                              v1160 = 0;
                              v1347 = v1159;
                              v1161 = v1159;
                              if ( v1159 )
                              {
                                v1317 = 0;
                                v1162 = 0;
                                v1163 = (unsigned __int8 *)v1156;
                                v1164 = v1161;
                                v1165 = 0;
                                v1166 = v1158 & 7;
                                if ( (v1158 & 7) != 0 )
                                {
                                  v1354 = 0;
                                  v1307 = -1;
                                  v1167 = 0;
                                  v1168 = 56;
                                  do
                                  {
                                    v1169 = *v1163;
                                    if ( v1160 >= 4 )
                                      v1167 |= v1169 << v1168;
                                    else
                                      v1165 |= v1169 << (v1168 - 32);
                                    v1168 -= 8;
                                    ++v1160;
                                    ++v1163;
                                  }
                                  while ( v1160 < v1166 );
                                  v1354 = v1167;
                                  v1170 = v1167 ^ 0x699A899C;
                                  v1307 = v1170;
                                  v1171 = v1165 ^ 0x92F65A5;
                                  v1172 = 0;
                                  v1317 = v1165 ^ 0x92F65A5;
                                  if ( (v1158 & 7) != 0 )
                                  {
                                    do
                                    {
                                      if ( v1172 >= 4 )
                                      {
                                        v1170 = __ROL4__(v1170, 8);
                                        *v1164 = v1170;
                                      }
                                      else
                                      {
                                        v1171 = __ROL4__(v1171, 8);
                                        *v1164 = v1171;
                                      }
                                      ++v1172;
                                      ++v1164;
                                    }
                                    while ( v1172 < v1166 );
                                    v1171 = v1317;
                                    v1170 = v1307;
                                  }
                                  v1173 = v1166 - 4;
                                  if ( v1166 - 4 <= 0 )
                                  {
                                    v1307 = 0;
                                    v1174 = 0;
                                    if ( v1173 < 0 )
                                    {
                                      v1171 = v1171 >> (-8 * v1173) << (-8 * v1173);
                                      v1317 = v1171;
                                    }
                                  }
                                  else
                                  {
                                    v1174 = v1170 >> (8 * (4 - v1173)) << (8 * (4 - v1173));
                                    v1307 = v1174;
                                  }
                                }
                                else
                                {
                                  v1174 = 0;
                                  v1307 = 0;
                                  v1171 = 0;
                                }
                                v1175 = v1158 >> 3;
                                if ( v1158 >> 3 )
                                {
                                  v1176 = v1354;
                                  v1177 = v1164 + 7;
                                  v1178 = v1163 + 2;
                                  v1179 = v1175;
                                  do
                                  {
                                    v1180 = *(v1178 - 1) | (*(v1178 - 2) << 8);
                                    v1181 = v1178[2] << 8;
                                    v1182 = *v1178;
                                    v1178 += 8;
                                    v1183 = *(v1178 - 7) | ((v1182 | (v1180 << 8)) << 8);
                                    v1184 = v1183 ^ v1171;
                                    v1185 = *(v1178 - 3) | ((*(v1178 - 4) | ((*(v1178 - 5) | v1181) << 8)) << 8);
                                    v1186 = v1184 ^ v1185 ^ v1174 ^ 0xAC987321;
                                    v1187 = (__ROL4__(v1186, 10) + 4991 * __ROL4__(v1186 + 1419157410, 5)) ^ v1184;
                                    v1188 = (43881 * __ROR4__(v1187 + 133239679, 9) - __ROL4__(v1187, 2)) ^ v1186;
                                    v1189 = (24670 * (v1188 - 4991) - (v1188 >> 13)) ^ v1187;
                                    v1190 = (2033 * __ROL4__(v1189 ^ 0xAB69, 6) - __ROL4__(v1189, 2)) ^ v1188;
                                    v1191 = (133239679 - (v1190 ^ 0xAB69605E)) ^ v1189;
                                    v1192 = (43881 * (v1191 ^ 0x137F)) ^ __ROR4__(v1191, 6) ^ v1190;
                                    v1193 = (__ROL4__(v1192, 2) + 24670 * __ROR4__(v1192 + 133239679, 15)) ^ v1191;
                                    v1194 = (2033 * __ROR4__(v1193 + 1419157410, 14) - __ROL4__(v1193, 8)) ^ v1192;
                                    v1195 = __ROR4__(v1194, 10) ^ (4991 * __ROR4__(v1194 ^ 0xAB69605E, 12)) ^ v1193;
                                    v1196 = (v1195 >> 10) ^ (43881 * (v1195 ^ 0x7F1)) ^ v1194;
                                    v1197 = (2033 * (__ROR4__(~v1196, 5) + 24670)) ^ v1195;
                                    v1198 = v1196 ^ (v1197 - 2033) ^ 0xAB69605E;
                                    v1199 = ((v1198 >> 2) + 4991 * __ROL4__(v1196 ^ (v1197 - 2033) ^ 0xAB6967AF, 2)) ^ v1197;
                                    v1200 = (__ROL4__(v1199, 7) + 43881 * __ROR4__(v1199 - 133239679, 6)) ^ v1198;
                                    v1201 = (24670 * (v1200 ^ 0x137F) + __ROR4__(v1200, 9)) ^ v1199;
                                    v1202 = (__ROL4__(v1201, 7) + 2033 * __ROL4__(v1201 ^ 0xAB69, 5)) ^ v1200;
                                    v1203 = v1201 ^ v1202 ^ 0xAC987321;
                                    v1204 = (4991 * (__ROR4__(v1203, 3) - 43881)) ^ v1202;
                                    v1205 = (24670 * __ROR4__(v1204 - 133239679, 1) - __ROR4__(v1204, 6)) ^ v1203;
                                    v1206 = (__ROL4__(v1205, 14) + 2033 * __ROL4__(v1205 - 1419157410, 3)) ^ v1204;
                                    v1207 = (4991 * __ROL4__(v1206 - 1419157410, 15) - __ROR4__(v1206, 14)) ^ v1205;
                                    v1208 = (v1207 >> 3) ^ (43881 * (v1207 ^ 0x605E)) ^ v1206;
                                    v1307 = v1176 ^ v1208;
                                    v1176 = v1185;
                                    v1209 = v1165 ^ __ROL4__(v1208, 2) ^ (24670 * __ROL4__(v1208 ^ 0x7F1137F, 4));
                                    v1165 = v1183;
                                    v1317 = v1209 ^ v1207;
                                    *(v1177 - 4) = v1209 ^ v1207;
                                    v1317 = __ROR4__(v1317, 8);
                                    *v1177 = v1307;
                                    v1177 += 8;
                                    v1307 = __ROR4__(v1307, 8);
                                    *(v1177 - 13) = v1317;
                                    v1317 = __ROR4__(v1317, 8);
                                    *(v1177 - 9) = v1307;
                                    v1307 = __ROR4__(v1307, 8);
                                    *(v1177 - 14) = v1317;
                                    v1317 = __ROR4__(v1317, 8);
                                    *(v1177 - 10) = v1307;
                                    v1307 = __ROR4__(v1307, 8);
                                    *(v1177 - 15) = v1317;
                                    *(v1177 - 11) = v1307;
                                    v1171 = __ROR4__(v1317, 8);
                                    v1174 = __ROR4__(v1307, 8);
                                    v1317 = v1171;
                                    v1307 = v1174;
                                    --v1179;
                                  }
                                  while ( v1179 );
                                  v1162 = 0;
                                  v80 = v1265;
                                  v1131 = v1275;
                                  v1158 = (SIZE_T)v1352;
                                  v1161 = v1347;
                                }
                                for ( mm = 0LL; mm < v1158; ++mm )
                                  v1162 ^= v1161[mm];
                                if ( v1162 == *(_QWORD *)(v1158 + v1312) )
                                {
                                  v1211 = (int)v1308;
                                  v1132 = v1161;
                                  v1401 = v1161;
                                  v1161 = 0LL;
                                  v1520 = v1158;
                                }
                                else
                                {
                                  v1132 = v1401;
                                  v1211 = -1073425151;
                                }
                                LODWORD(v1005) = 0;
                                if ( v1161 )
                                {
                                  operator delete(v1161);
                                  v1132 = v1401;
                                }
                                if ( v1211 >= 0 )
                                {
                                  v1341 = v1132;
                                  v1132 = 0LL;
                                  v1366 = v1520;
                                  v1401 = 0LL;
                                  goto LABEL_1626;
                                }
LABEL_1625:
                                v1131 = -1073741823;
LABEL_1626:
                                if ( v1132 )
                                {
                                  v1212 = GetProcessHeap();
                                  HeapFree(v1212, 0, v1132);
                                  v1401 = 0LL;
                                }
LABEL_1628:
                                v1002 = v1131 | 0x10000000;
                                if ( v1002 < 0 )
                                  goto LABEL_1664;
                                v1213 = (char *)v1341;
                                v1361 = (unsigned int)v1005;
                                v1433 = v1341;
                                if ( v1366 >= 4 )
                                {
                                  v1276 = *(_DWORD *)v1341;
                                  v1215 = RtlULongLongAdd((unsigned __int64)v1341, 4LL, (__int64 *)&v1433);
                                  if ( v1215 < 0 )
                                    goto LABEL_1663;
                                  v1215 = RtlUIntAdd(0, v1214, (int *)&v1361);
                                  if ( v1215 < 0 )
                                    goto LABEL_1663;
                                  if ( v1366 - v1361 >= 4 )
                                  {
                                    v1217 = *(unsigned int *)v1433;
                                    v1215 = RtlULongLongAdd((unsigned __int64)v1433, v1216, (__int64 *)&v1433);
                                    if ( v1215 < 0 )
                                      goto LABEL_1663;
                                    v1215 = RtlUIntAdd(v1361, v1218, (int *)&v1361);
                                    if ( v1215 < 0 )
                                      goto LABEL_1663;
                                    if ( v1366 - v1361 >= (unsigned int)v1217 )
                                    {
                                      v1215 = RtlUIntAdd(v1361, v1217, (int *)&v1361);
                                      if ( v1215 < 0 )
                                        goto LABEL_1663;
                                      v1219 = v1433;
                                      if ( &v1213[v1366] >= (char *)v1433 + v1217
                                        && (unsigned __int64)&v1213[v1366 - v1217 - (_QWORD)v1433] < 8 )
                                      {
                                        v1354 = 0;
                                        v1220 = 0LL;
                                        v1215 = 0;
                                        v1221 = 0;
                                        if ( !v1433 )
                                        {
LABEL_1652:
                                          if ( (_DWORD)v1217 )
                                          {
                                            v1228 = GetProcessHeap();
                                            v1220 = HeapAlloc(v1228, 8u, v1217);
                                            if ( !v1220 )
                                            {
                                              v1215 = -1073741801;
                                              goto LABEL_1660;
                                            }
                                            v1215 = 0;
                                          }
                                          if ( v1219 )
                                            memcpy_0(v1220, v1219, v1217);
                                          v1420 = v1220;
                                          v1419 = __PAIR64__(v1217, v1221);
LABEL_1660:
                                          if ( v1215 < 0 || v1276 == (_DWORD)v1419 )
                                            goto LABEL_1663;
                                          goto LABEL_1662;
                                        }
                                        v1215 = RtlULongLongAdd(
                                                  (unsigned __int64)v1433,
                                                  (unsigned int)v1217,
                                                  (__int64 *)&v1573);
                                        if ( v1215 < 0 )
                                          goto LABEL_1660;
                                        v1223 = v1573;
                                        if ( (unsigned __int64)v1219 < v1573 )
                                        {
                                          do
                                          {
                                            v1215 = RtlULongLongAdd(v1222, 4LL, (__int64 *)&v1574);
                                            if ( v1215 < 0 )
                                              goto LABEL_1663;
                                            if ( v1574 > v1223 )
                                              goto LABEL_1655;
                                            v1225 = RtlUIntAdd(4u, *v1224, v1463);
                                            v1215 = v1225;
                                            if ( v1225 >= 0 )
                                              v1227 = v1463[0];
                                            v1463[1] = v1227;
                                            if ( v1225 < 0 )
                                              goto LABEL_1663;
                                            v1215 = RtlULongLongAdd(v1226, v1227, (__int64 *)&v1575);
                                            if ( v1215 < 0 )
                                              goto LABEL_1663;
                                            v1222 = v1575;
                                            if ( v1575 > v1223 )
                                              goto LABEL_1655;
                                            ++v1354;
                                          }
                                          while ( v1575 < v1223 );
                                        }
                                        if ( v1222 == v1223 )
                                        {
                                          v1221 = v1354;
                                          goto LABEL_1652;
                                        }
LABEL_1655:
                                        v1215 = -1073741811;
LABEL_1663:
                                        v1002 = v1215 | 0x10000000;
                                        goto LABEL_1664;
                                      }
                                    }
                                  }
                                }
LABEL_1662:
                                v1215 = -1073741762;
                                goto LABEL_1663;
                              }
                              v1132 = v1401;
                            }
                            LODWORD(v1005) = 0;
                            goto LABEL_1625;
                          }
                          if ( v1116 - v1316 < (unsigned int)v1121 )
                            goto LABEL_1531;
                          v1347 = v1370;
                          v1120 = RtlULongLongAdd((unsigned __int64)v1370, (unsigned int)v1121, (__int64 *)&v1370);
                          if ( v1120 < 0 )
                            goto LABEL_1549;
                          v1120 = RtlUIntAdd(v1316, v1123, (int *)&v1316);
                          if ( v1120 < 0 )
                            goto LABEL_1549;
                          if ( v1116 - v1316 < (unsigned int)v1124 )
                            goto LABEL_1531;
                          v1125 = *(unsigned int *)v1370;
                          v1120 = RtlULongLongAdd((unsigned __int64)v1370, v1124, (__int64 *)&v1370);
                          if ( v1120 < 0 )
                            goto LABEL_1549;
                          v1120 = RtlUIntAdd(v1316, v1126, (int *)&v1316);
                          if ( v1120 < 0 )
                            goto LABEL_1549;
                          if ( v1116 - v1316 < (unsigned int)v1125 )
                            goto LABEL_1531;
                          v1352 = v1370;
                          v1120 = RtlULongLongAdd((unsigned __int64)v1370, (unsigned int)v1125, (__int64 *)&v1370);
                          if ( v1120 < 0 )
                            goto LABEL_1549;
                          v1120 = RtlUIntAdd(v1316, v1127, (int *)&v1316);
                          if ( v1120 < 0 )
                            goto LABEL_1549;
                          if ( v1116 - v1316 < (unsigned int)v1128 )
                          {
LABEL_1531:
                            v1120 = -1073741762;
                            goto LABEL_1549;
                          }
                          v1129 = *(unsigned int *)v1370;
                          v1120 = RtlULongLongAdd((unsigned __int64)v1370, v1128, (__int64 *)&v1370);
                          if ( v1120 < 0 )
                            goto LABEL_1548;
                          v1120 = RtlUIntAdd(v1316, v1130, (int *)&v1316);
                          if ( v1120 < 0 )
                            goto LABEL_1548;
                          if ( v1116 - v1316 < (unsigned int)v1129 )
                            goto LABEL_1547;
                          v1120 = RtlUIntAdd(v1316, v1129, (int *)&v1316);
                          if ( v1120 < 0 )
                            goto LABEL_1548;
                          if ( v1116 != v1316 || (unsigned int)(v1121 + v1129 + v1125) + 12LL != v1116 )
                          {
LABEL_1547:
                            v1120 = -1073741762;
LABEL_1548:
                            v1005 = 0LL;
                            goto LABEL_1549;
                          }
                          v1133 = GetProcessHeap();
                          v1134 = HeapAlloc(v1133, 8u, 0x30uLL);
                          if ( !v1134 )
                          {
                            v1120 = -1073741801;
                            v1005 = 0LL;
LABEL_1579:
                            if ( v1120 >= 0 )
                            {
                              v1309 = v1119;
                              v1119 = v1005;
                            }
                            if ( v1119 )
                            {
                              v1149 = (void *)v1119[1];
                              if ( v1149 )
                              {
                                v1150 = GetProcessHeap();
                                HeapFree(v1150, 0, v1149);
                                v1119[1] = v1005;
                              }
                              v1151 = (void *)v1119[3];
                              if ( v1151 )
                              {
                                v1152 = GetProcessHeap();
                                HeapFree(v1152, 0, v1151);
                                v1119[3] = v1005;
                              }
                              v1153 = (void *)v1119[5];
                              if ( v1153 )
                              {
                                v1154 = GetProcessHeap();
                                HeapFree(v1154, 0, v1153);
                                v1119[5] = v1005;
                              }
                              v1155 = GetProcessHeap();
                              HeapFree(v1155, 0, v1119);
                            }
                            goto LABEL_1549;
                          }
                          v1120 = 0;
                          if ( v1347 )
                          {
                            *(_DWORD *)v1134 = v1121;
                            v1135 = GetProcessHeap();
                            v1136 = HeapAlloc(v1135, 8u, v1121);
                            if ( !v1136 )
                            {
LABEL_1559:
                              v1120 = -1073741801;
                              v1005 = 0LL;
                              goto LABEL_1571;
                            }
                            v1134[1] = v1136;
                            memcpy_0(v1136, v1347, v1121);
                          }
                          else
                          {
                            *(_DWORD *)v1134 = 0;
                            v1134[1] = 0LL;
                          }
                          v1137 = v1352;
                          if ( v1352 )
                          {
                            *((_DWORD *)v1134 + 4) = v1125;
                            v1138 = GetProcessHeap();
                            v1139 = HeapAlloc(v1138, 8u, v1125);
                            if ( !v1139 )
                              goto LABEL_1559;
                            v1134[3] = v1139;
                            v1120 = 0;
                            memcpy_0(v1139, v1137, v1125);
                          }
                          else
                          {
                            *((_DWORD *)v1134 + 4) = 0;
                            v1134[3] = 0LL;
                          }
                          v1140 = v1370;
                          if ( v1370 )
                          {
                            *((_DWORD *)v1134 + 8) = v1129;
                            v1141 = GetProcessHeap();
                            v1142 = HeapAlloc(v1141, 8u, v1129);
                            if ( !v1142 )
                              goto LABEL_1559;
                            v1134[5] = v1142;
                            v1120 = 0;
                            memcpy_0(v1142, v1140, v1129);
                            v1005 = 0LL;
                          }
                          else
                          {
                            v1005 = 0LL;
                            *((_DWORD *)v1134 + 8) = 0;
                            v1134[5] = 0LL;
                          }
                          v1119 = v1134;
                          v1134 = 0LL;
LABEL_1571:
                          if ( v1134 )
                          {
                            v1143 = (void *)v1134[1];
                            if ( v1143 )
                            {
                              v1144 = GetProcessHeap();
                              HeapFree(v1144, 0, v1143);
                              v1134[1] = 0LL;
                            }
                            v1145 = (void *)v1134[3];
                            if ( v1145 )
                            {
                              v1146 = GetProcessHeap();
                              HeapFree(v1146, 0, v1145);
                              v1134[3] = 0LL;
                            }
                            v1005 = (void *)v1134[5];
                            if ( v1005 )
                            {
                              v1147 = GetProcessHeap();
                              HeapFree(v1147, 0, v1005);
                              v1005 = 0LL;
                              v1134[5] = 0LL;
                            }
                            v1148 = GetProcessHeap();
                            HeapFree(v1148, 0, v1134);
                          }
                          goto LABEL_1579;
                        }
                      }
                    }
LABEL_1356:
                    v931 = v1290;
                    goto LABEL_1357;
                  }
                  v159 = v938;
                }
              }
            }
          }
        }
      }
    }
LABEL_1335:
    v931 = v934;
LABEL_1357:
    v974 = v1333;
    v1332 = 0LL;
    if ( v1333 )
    {
      v975 = GetProcessHeap();
      HeapFree(v975, 0, v974);
      v1333 = 0LL;
    }
    v976 = v1420;
    v1419 = 0LL;
    if ( v1420 )
    {
      v977 = GetProcessHeap();
      HeapFree(v977, 0, v976);
      v1420 = 0LL;
    }
    if ( v931 )
    {
      v978 = GetProcessHeap();
      HeapFree(v978, 0, v931);
    }
    if ( v159 )
    {
      v979 = GetProcessHeap();
      HeapFree(v979, 0, v159);
    }
  }
LABEL_1365:
  v980 = v1412;
  v1578 = v1391;
  v1499 = v1335;
  v1371 = 0LL;
LABEL_1711:
  while ( _InterlockedCompareExchange(&dword_18012C4D8, 1, 0) )
    ;
  v1260 = dword_18012B824;
  if ( dword_18012B824 > 0 )
  {
    --dword_18012B824;
    if ( v1260 == 1 )
    {
      v1261 = 4LL;
      v1262 = (HMODULE *)&unk_18012C460;
      do
      {
        if ( *v1262 )
          FreeLibrary(*v1262);
        v1262 += 3;
        --v1261;
      }
      while ( v1261 );
      memset(&unk_18012C460, 0, 0x60uLL);
      memcpy_0(off_18012A000, off_1800DE760, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_18012C4D8, 0);
  SP_HLOCAL<unsigned char>::~SP_HLOCAL<unsigned char>();
  if ( v80 >= 0 && v980 == 4 )
  {
    Ptr = (_DWORD *)SP<unsigned char,SP_HLOCAL<unsigned char>>::GetPtrAs<unsigned long>((__int64)&v1499);
    *v1576 = *Ptr;
  }
  v1 = v1409;
LABEL_1723:
  SP_HLOCAL<unsigned char>::~SP_HLOCAL<unsigned char>();
  if ( !AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(v1) )
  {
    *((_DWORD *)v1 + 29) = 2;
LABEL_1725:
    AtmosCheck::TraceResult(v1, 0);
    return 0;
  }
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
  {
    *((_DWORD *)v1 + 29) = 3;
    AtmosCheck::EnableAllAtmosCapabilities(v1);
    goto LABEL_1725;
  }
  if ( AtmosCheck::IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform(v1) )
  {
    DolbyOEMLicenseCheck::DolbyOEMLicenseCheck((DolbyOEMLicenseCheck *)v1583);
    if ( DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent((DolbyOEMLicenseCheck *)v1583) )
    {
      *((_DWORD *)v1 + 29) = 1;
      AtmosCheck::EnableAllAtmosCapabilities(v1);
      AtmosCheck::TraceResult(v1, 0);
      DolbyOEMLicenseCheck::~DolbyOEMLicenseCheck((DolbyOEMLicenseCheck *)v1583);
      return 0;
    }
    DolbyOEMLicenseCheck::~DolbyOEMLicenseCheck((DolbyOEMLicenseCheck *)v1583);
  }
  return 1;
}
