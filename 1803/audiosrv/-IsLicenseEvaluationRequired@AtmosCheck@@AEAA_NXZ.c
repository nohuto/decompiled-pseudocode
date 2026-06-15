/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18004F5D4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180017334 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180026400 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     StringLengthWorkerW @ 0x18002A260 (StringLengthWorkerW.c)
 *     RtlULongLongAdd @ 0x18002A2AC (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18002A2C8 (RtlUIntAdd.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x180065584 (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 *     wcscmp_0 @ 0x18006579D (wcscmp_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1CRSABCrypt@@QEAA@XZ @ 0x18009A1C0 (--1CRSABCrypt@@QEAA@XZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x18009A1F4 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x180110138 (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1801111CC (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180113428 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  __int64 v1; // r15
  unsigned int *v2; // rdi
  AtmosCheck *v3; // rbx
  int v4; // eax
  __int64 v5; // r13
  int v6; // r14d
  HANDLE ProcessHeap; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  int v10; // r13d
  int v11; // edi
  int v12; // r12d
  char *v13; // r11
  int v14; // r10d
  char *v15; // rsi
  int v16; // eax
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  int v20; // r10d
  int v21; // r8d
  unsigned int v22; // edi
  int v23; // r10d
  unsigned int v24; // edi
  int v25; // r10d
  int v26; // edi
  unsigned int v27; // r10d
  int v28; // edi
  int v29; // r10d
  int v30; // edi
  unsigned int v31; // r10d
  int v32; // ecx
  int v33; // r10d
  unsigned int v34; // edi
  int v35; // r10d
  int v36; // edi
  int v37; // r10d
  int v38; // edi
  unsigned int v39; // edx
  int v40; // edi
  int v41; // edx
  int v42; // edi
  unsigned int v43; // edx
  int v44; // edi
  int v45; // ecx
  unsigned __int64 v46; // rax
  __m128i v47; // xmm2
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  __m128i v52; // xmm1
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  char i; // cl
  HMODULE *v56; // rdi
  unsigned int v57; // r13d
  const WCHAR *v58; // rdx
  __int64 v59; // rax
  bool v60; // zf
  _BYTE *v61; // rbx
  char *v62; // rsi
  int v63; // r12d
  __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  unsigned int v66; // r15d
  int v67; // edi
  const CHAR *v68; // rdx
  __int64 v69; // rax
  __int64 (__fastcall *ProcAddress)(); // rax
  HANDLE v71; // rax
  wchar_t *v72; // rbx
  wchar_t *v73; // rdi
  int v74; // r14d
  signed int v75; // esi
  HLOCAL v76; // rax
  void *v77; // rdi
  void *v78; // r12
  unsigned __int16 *v79; // r14
  HANDLE v80; // rax
  void *v81; // rax
  void *v82; // r15
  size_t v83; // r14
  HANDLE v84; // rax
  unsigned __int16 *v85; // rax
  unsigned __int16 *v86; // r13
  unsigned int v87; // r12d
  unsigned int v88; // eax
  int v89; // esi
  size_t v90; // rdx
  const wchar_t *v91; // rcx
  unsigned int v92; // r10d
  int v93; // r11d
  int v94; // ecx
  unsigned int v95; // eax
  unsigned int v96; // ebx
  HANDLE v97; // rax
  _DWORD *v98; // rax
  unsigned int v99; // r9d
  _DWORD *v100; // rdx
  int v101; // r8d
  unsigned int v102; // ecx
  _DWORD *v103; // rdx
  unsigned int v104; // r10d
  unsigned int v105; // ecx
  size_t v106; // rdx
  unsigned int v107; // r10d
  unsigned int v108; // r8d
  const wchar_t *v109; // rcx
  __int64 v110; // r10
  unsigned int v111; // r9d
  _DWORD *v112; // rdx
  unsigned int v113; // r8d
  unsigned int v114; // r9d
  _DWORD *v115; // rdx
  unsigned int v116; // r8d
  unsigned int v117; // r9d
  _DWORD *v118; // rdx
  unsigned int v119; // r8d
  unsigned int v120; // ecx
  unsigned int v121; // r12d
  unsigned int v122; // r14d
  unsigned int v123; // r13d
  int v124; // esi
  char *v125; // r9
  __int64 *v126; // r10
  unsigned int v127; // ecx
  unsigned int v128; // ebx
  HANDLE v129; // rax
  char *v130; // rax
  char *v131; // rbx
  unsigned int v132; // r9d
  void *v133; // rcx
  _QWORD *v134; // r15
  unsigned __int64 v135; // rbx
  HANDLE v136; // rax
  _BYTE *v137; // rax
  _BYTE *v138; // r13
  int v139; // r9d
  unsigned __int64 v140; // rcx
  __m128i v141; // xmm2
  __m128i v142; // xmm1
  __m128i v143; // xmm0
  __m128i v144; // xmm0
  __m128i v145; // xmm1
  __m128i v146; // xmm1
  __m128i v147; // xmm1
  __m128i v148; // xmm1
  unsigned __int8 *v149; // r14
  int v150; // r11d
  unsigned int v151; // edx
  _BYTE *v152; // rsi
  int v153; // eax
  int v154; // r13d
  _BYTE *v155; // rsi
  int v156; // r12d
  int v157; // r15d
  unsigned __int64 v158; // rdi
  unsigned __int8 *v159; // r14
  int v160; // ebx
  int v161; // eax
  int v162; // r10d
  int v163; // r9d
  int v164; // r10d
  int v165; // r9d
  int v166; // r11d
  int v167; // r8d
  int v168; // r11d
  int v169; // r8d
  int v170; // r11d
  unsigned int v171; // r8d
  int v172; // r11d
  int v173; // r8d
  int v174; // r11d
  int v175; // r8d
  int v176; // r11d
  int v177; // r8d
  unsigned int v178; // r11d
  unsigned int v179; // r8d
  int v180; // r11d
  int v181; // r8d
  int v182; // r11d
  int v183; // r8d
  int v184; // r11d
  int v185; // r8d
  int v186; // r11d
  int v187; // r8d
  unsigned int v188; // r11d
  int v189; // eax
  int v190; // r8d
  unsigned int v191; // esi
  HANDLE v192; // rax
  _DWORD *v193; // rax
  _DWORD *v194; // rbx
  HANDLE v195; // rax
  void *v196; // rax
  HANDLE v197; // rax
  _OWORD *v198; // rax
  HANDLE v199; // rax
  _QWORD *v200; // rax
  int v201; // esi
  void *v202; // rbx
  HANDLE v203; // rax
  const void **v204; // r14
  int v205; // esi
  unsigned int v206; // r9d
  unsigned int v207; // r9d
  int v208; // r10d
  unsigned int v209; // edx
  unsigned int v210; // ebx
  HANDLE v211; // rax
  unsigned __int16 *v212; // rax
  unsigned __int16 *v213; // r15
  void *v214; // rcx
  void *v215; // rcx
  unsigned int v216; // ebx
  int v217; // eax
  int v218; // r9d
  unsigned int v219; // ecx
  unsigned int *v220; // rcx
  unsigned int v221; // r14d
  int v222; // r9d
  int v223; // r9d
  unsigned int *v224; // rax
  unsigned int *v225; // rcx
  unsigned int v226; // r8d
  unsigned int *v227; // rdx
  unsigned int v228; // r9d
  unsigned int v229; // r10d
  void *v230; // rax
  unsigned int v231; // r11d
  unsigned int v232; // eax
  unsigned int v233; // ebx
  HANDLE v234; // rax
  unsigned int *v235; // rax
  unsigned int *v236; // rbx
  FARPROC v237; // rax
  int v238; // eax
  unsigned int v239; // edx
  __int64 v240; // r15
  char *v241; // r13
  unsigned int *v242; // r8
  SIZE_T v243; // rsi
  char *v244; // r12
  unsigned int v245; // r8d
  unsigned int *v246; // rcx
  unsigned int v247; // r9d
  SIZE_T v248; // r14
  unsigned int v249; // ecx
  HANDLE v250; // rax
  _QWORD *v251; // rax
  _QWORD *v252; // rbx
  HANDLE v253; // rax
  void *v254; // rax
  HANDLE v255; // rax
  void *v256; // rax
  void *v257; // rsi
  HANDLE v258; // rax
  void *v259; // rax
  int v260; // esi
  unsigned __int8 *v261; // r12
  SIZE_T v262; // rbx
  HANDLE v263; // rax
  _BYTE *v264; // r10
  unsigned __int8 v265; // r9
  unsigned __int8 *v266; // rsi
  _BYTE *v267; // r8
  int v268; // edx
  int v269; // ecx
  unsigned int v270; // r11d
  SIZE_T v271; // rax
  int v272; // r14d
  _BYTE *v273; // rbx
  int v274; // r13d
  int v275; // r12d
  SIZE_T v276; // rdi
  unsigned __int8 *v277; // rsi
  int v278; // r15d
  int v279; // eax
  int v280; // r10d
  int v281; // r9d
  int v282; // r10d
  int v283; // r11d
  int v284; // r9d
  unsigned int v285; // edx
  int v286; // r11d
  unsigned int v287; // edx
  int v288; // r11d
  int v289; // edx
  unsigned int v290; // r11d
  int v291; // edx
  int v292; // r11d
  int v293; // edx
  unsigned int v294; // r11d
  int v295; // edx
  int v296; // r11d
  unsigned int v297; // r8d
  int v298; // r11d
  int v299; // r8d
  int v300; // r11d
  int v301; // r8d
  unsigned int v302; // edx
  int v303; // r8d
  int v304; // edx
  int v305; // r8d
  unsigned int v306; // edx
  int v307; // r8d
  int v308; // edx
  unsigned __int64 v309; // rax
  __m128i v310; // xmm1
  __m128i v311; // xmm2
  __m128i v312; // xmm0
  __m128i v313; // xmm0
  __m128i v314; // xmm1
  __m128i v315; // xmm1
  __m128i v316; // xmm1
  __m128i v317; // xmm1
  _DWORD *v318; // r9
  size_t v319; // r15
  char *v320; // r14
  unsigned __int64 v321; // r8
  void *v322; // r12
  unsigned int v323; // ebx
  char *v324; // rcx
  unsigned int v325; // r9d
  int v326; // esi
  char *v327; // rdx
  HANDLE v328; // rax
  void *v329; // rbx
  HANDLE v330; // rax
  _QWORD *v331; // r14
  void *v332; // rbx
  HANDLE v333; // rax
  void *v334; // rbx
  HANDLE v335; // rax
  void *v336; // rbx
  HANDLE v337; // rax
  HANDLE v338; // rax
  HANDLE v339; // rax
  void *v340; // rbx
  HANDLE v341; // rax
  void *v342; // rbx
  HANDLE v343; // rax
  void *v344; // rbx
  HANDLE v345; // rax
  void *v346; // rbx
  HANDLE v347; // rax
  HANDLE v348; // rax
  void *v349; // rbx
  HANDLE v350; // rax
  int v351; // r9d
  int *v352; // rax
  int v353; // eax
  LPVOID v354; // rcx
  unsigned int v355; // r10d
  int v356; // r9d
  int v357; // r9d
  _QWORD *v358; // rax
  unsigned int *v359; // rcx
  unsigned int v360; // r8d
  unsigned int *v361; // rdx
  int v362; // r9d
  _DWORD *v363; // rax
  unsigned int *v364; // rcx
  unsigned int v365; // r8d
  unsigned int *v366; // rdx
  int v367; // eax
  unsigned int v368; // r10d
  const void *v369; // r11
  unsigned int *v370; // rcx
  unsigned int v371; // r8d
  unsigned int *v372; // rdx
  int v373; // r9d
  unsigned int *v374; // rax
  unsigned int *v375; // rcx
  unsigned int v376; // r8d
  unsigned int *v377; // rdx
  int v378; // r9d
  int *v379; // rax
  void *v380; // rbx
  HANDLE v381; // rax
  void *v382; // rbx
  HANDLE v383; // rax
  HANDLE v384; // rax
  HANDLE v385; // rax
  HMODULE *v386; // rbx
  int v387; // r14d
  int v388; // eax
  unsigned int *v389; // rax
  int v390; // ecx
  __int64 v392; // rbx
  __int64 v393; // r12
  signed int LastError; // eax
  __int64 j; // r9
  __int64 v396; // r8
  signed int v397; // eax
  DWORD CurrentThreadId; // eax
  __int64 v399; // r12
  __int64 k; // r9
  __int64 v401; // r8
  signed int v402; // eax
  HANDLE CurrentProcess; // rax
  signed int v404; // eax
  int v405; // eax
  __int64 v406; // rdx
  int v407; // eax
  int v408; // eax
  __int64 v409; // rdx
  int v410; // eax
  int v411; // eax
  int v412; // eax
  __int64 v413; // rdx
  int v414; // eax
  __int64 v415; // rdx
  int v416; // eax
  __int64 v417; // rdx
  HANDLE v418; // rax
  int v419; // r15d
  int v420; // r12d
  char v421; // r8
  int v422; // edx
  unsigned int v423; // r11d
  int v424; // ecx
  int v425; // r8d
  void *v426; // rsi
  HANDLE v427; // rax
  void *v428; // rsi
  HANDLE v429; // rax
  void *v430; // rsi
  HANDLE v431; // rax
  HANDLE v432; // rax
  void *v433; // rbx
  HANDLE v434; // rax
  void *v435; // rbx
  HANDLE v436; // rax
  void *v437; // rbx
  HANDLE v438; // rax
  HANDLE v439; // rax
  HANDLE v440; // rax
  signed int v441; // eax
  void *v442; // rsi
  HANDLE v443; // rax
  void *v444; // rsi
  HANDLE v445; // rax
  void *v446; // rsi
  HANDLE v447; // rax
  HANDLE v448; // rax
  void *v449; // r14
  HANDLE v450; // rax
  void *v451; // r14
  HANDLE v452; // rax
  void *v453; // r14
  HANDLE v454; // rax
  HANDLE v455; // rax
  int v456; // r14d
  int v457; // r15d
  int v458; // r10d
  char v459; // r9
  int v460; // eax
  unsigned int v461; // eax
  int v462; // ecx
  int v463; // r9d
  void *v464; // r14
  HANDLE v465; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v467; // r12
  void *v468; // r14
  void *v469; // r13
  HANDLE v470; // rax
  void *v471; // rax
  void *v472; // r15
  size_t v473; // rbx
  HANDLE v474; // rax
  void *v475; // rax
  void *v476; // r12
  unsigned int v477; // r14d
  unsigned int v478; // edi
  HANDLE v479; // rax
  _DWORD *v480; // rax
  _DWORD *v481; // rdi
  LPVOID v482; // r9
  int *v483; // rcx
  int v484; // r10d
  void *v485; // rdi
  HANDLE v486; // rax
  void *v487; // rdi
  HANDLE v488; // rax
  HANDLE v489; // rax
  HANDLE v490; // rax
  __int64 v491; // rax
  unsigned int v492; // edi
  int v493; // eax
  _BYTE *n; // rbx
  int v495; // r14d
  _BYTE *v496; // r12
  int v497; // edi
  int v498; // r11d
  char *v499; // r13
  __int64 v500; // rsi
  int v501; // eax
  int v502; // r10d
  int v503; // r9d
  int v504; // r10d
  int v505; // r11d
  int v506; // r9d
  int v507; // r15d
  int v508; // r11d
  unsigned int v509; // r15d
  int v510; // r11d
  int v511; // r15d
  unsigned int v512; // r11d
  int v513; // r15d
  int v514; // r11d
  int v515; // r15d
  unsigned int v516; // r11d
  int v517; // r15d
  int v518; // r11d
  unsigned int v519; // r8d
  int v520; // r11d
  int v521; // r8d
  int v522; // r11d
  int v523; // r8d
  unsigned int v524; // edx
  int v525; // r8d
  int v526; // edx
  int v527; // r8d
  unsigned int v528; // edx
  int v529; // r8d
  int v530; // ecx
  unsigned __int64 v531; // rax
  int v532; // r14d
  __m128i v533; // xmm1
  __m128i v534; // xmm2
  __m128i v535; // xmm0
  __m128i v536; // xmm0
  __m128i v537; // xmm1
  __m128i v538; // xmm1
  __m128i v539; // xmm1
  __m128i v540; // xmm1
  char m; // cl
  const WCHAR *v542; // rdx
  __int64 v543; // rax
  _BYTE *v544; // rbx
  char *v545; // r15
  __int64 v546; // rcx
  unsigned __int64 v547; // rcx
  unsigned int v548; // r13d
  unsigned int v549; // r12d
  const CHAR *v550; // rdx
  __int64 v551; // rax
  __int64 (__fastcall *v552)(); // rax
  HANDLE v553; // rax
  HMODULE *v554; // rbx
  __int64 v555; // r14
  int v556; // eax
  int v557; // r14d
  _BYTE *v558; // rax
  _BYTE *jj; // rbx
  int v560; // esi
  int v561; // r8d
  int v562; // r11d
  char *v563; // r12
  char *v564; // r15
  int v565; // edi
  __int64 v566; // r13
  int v567; // eax
  int v568; // r10d
  int v569; // r9d
  int v570; // r10d
  int v571; // r11d
  int v572; // r9d
  unsigned int v573; // r8d
  int v574; // r11d
  unsigned int v575; // r8d
  int v576; // r11d
  int v577; // r8d
  unsigned int v578; // r11d
  int v579; // r8d
  int v580; // r11d
  int v581; // r8d
  unsigned int v582; // r11d
  int v583; // ecx
  int v584; // r11d
  unsigned int v585; // r8d
  int v586; // r11d
  int v587; // r8d
  int v588; // r11d
  int v589; // r8d
  unsigned int v590; // edx
  int v591; // r8d
  int v592; // edx
  int v593; // r8d
  unsigned int v594; // edx
  int v595; // r8d
  int v596; // ecx
  unsigned __int64 v597; // rax
  __m128i v598; // xmm1
  __m128i v599; // xmm2
  __m128i v600; // xmm0
  __m128i v601; // xmm0
  __m128i v602; // xmm1
  __m128i v603; // xmm1
  __m128i v604; // xmm1
  __m128i v605; // xmm1
  char ii; // cl
  const WCHAR *v607; // rdx
  __int64 v608; // rax
  _BYTE *v609; // rbx
  char *v610; // r15
  __int64 v611; // rcx
  unsigned __int64 v612; // rcx
  unsigned int v613; // r13d
  unsigned int v614; // r12d
  const CHAR *v615; // rdx
  __int64 v616; // rax
  __int64 (__fastcall *v617)(); // rax
  HANDLE v618; // rax
  __int64 v619; // r14
  int v620; // r13d
  signed int v621; // eax
  signed int v622; // r14d
  _DWORD *v623; // rbx
  signed int v624; // eax
  LPVOID v625; // rax
  __int64 v626; // r15
  LPVOID v627; // rax
  _DWORD *v628; // rdi
  signed int v629; // eax
  _DWORD *v630; // rbx
  unsigned int v631; // r12d
  __int64 v632; // rax
  unsigned int v633; // r9d
  unsigned int v634; // r8d
  __int64 v635; // rdi
  unsigned int v636; // ecx
  unsigned int *v637; // rdx
  __int64 v638; // rdi
  const wchar_t *v639; // rcx
  __int64 v640; // r8
  unsigned __int16 **v641; // rdx
  __int64 v642; // rax
  unsigned __int16 *v643; // rbx
  __int64 v644; // rax
  unsigned __int16 *v645; // r12
  __int64 v646; // rax
  char *v647; // r15
  char *v648; // rax
  unsigned __int16 *v649; // r11
  int v650; // r13d
  int v651; // edi
  int v652; // r10d
  char *v653; // rbx
  __int64 v654; // r12
  char *v655; // r15
  int v656; // esi
  int v657; // eax
  int v658; // r9d
  int v659; // r8d
  int v660; // r9d
  int v661; // r10d
  int v662; // r8d
  unsigned int v663; // edi
  int v664; // r10d
  unsigned int v665; // edi
  int v666; // r10d
  int v667; // edi
  unsigned int v668; // r10d
  int v669; // edi
  int v670; // r10d
  int v671; // edi
  unsigned int v672; // r10d
  int v673; // ecx
  int v674; // r10d
  unsigned int v675; // edi
  int v676; // r10d
  int v677; // edi
  int v678; // r10d
  int v679; // edi
  unsigned int v680; // r10d
  int v681; // edi
  int v682; // r10d
  int v683; // edi
  unsigned int v684; // r10d
  int v685; // edi
  int v686; // ecx
  unsigned __int64 v687; // rax
  __m128i v688; // xmm2
  __m128i v689; // xmm1
  __m128i v690; // xmm0
  __m128i v691; // xmm0
  __m128i v692; // xmm1
  __m128i v693; // xmm1
  __m128i v694; // xmm1
  __m128i v695; // xmm1
  char kk; // cl
  unsigned __int16 *v697; // rdx
  unsigned __int16 **v698; // rdi
  int v699; // r9d
  __int64 v700; // r8
  unsigned int mm; // ecx
  __int64 v702; // rax
  LPVOID v703; // rax
  _QWORD *v704; // rbx
  int *v705; // r12
  unsigned int v706; // edx
  _QWORD *v707; // r13
  _WORD *v708; // rcx
  __int64 v709; // rax
  unsigned __int16 *v710; // rdi
  __int64 v711; // rax
  int v712; // eax
  int v713; // r15d
  LPVOID v714; // rax
  __int64 v715; // rcx
  signed int v716; // eax
  signed int v717; // eax
  __int64 v718; // r15
  _WORD *v719; // rdi
  __int64 v720; // rcx
  int v721; // edi
  signed int v722; // eax
  unsigned int v723; // r12d
  char *v724; // rdi
  __int64 v725; // rbx
  signed int v726; // eax
  int v727; // eax
  __int64 v728; // rax
  signed int v729; // eax
  __int64 v730; // rdi
  signed int v731; // eax
  int v732; // eax
  __int64 v733; // rax
  signed int v734; // eax
  int v735; // ebx
  unsigned int v736; // edx
  unsigned int v737; // r13d
  int v738; // r15d
  unsigned int v739; // ebx
  void *v740; // rdi
  void *v741; // rdi
  __int64 v742; // rdx
  __int64 v743; // rdi
  signed int v744; // eax
  int v745; // eax
  __int64 v746; // rax
  signed int v747; // eax
  void *v748; // rdi
  __int64 v749; // rbx
  int v750; // eax
  int v751; // r14d
  int v752; // ebx
  int v753; // edi
  __int64 v754; // rax
  int v755; // edx
  int v756; // ecx
  __int64 v757; // rax
  int v758; // eax
  HMODULE *v759; // rdi
  __int64 v760; // rbx
  unsigned int v761; // edi
  int v762; // ebx
  __int64 v763; // rax
  int v764; // eax
  void *v765; // rbx
  __int64 v766; // r13
  int v767; // edi
  __int64 v768; // rax
  __int64 v769; // r14
  signed int v770; // ebx
  signed int v771; // eax
  __int64 v772; // rax
  int v773; // eax
  int v774; // r12d
  int v775; // r8d
  int v776; // edx
  int v777; // r9d
  int v778; // ecx
  int v779; // r10d
  int v780; // r15d
  int v781; // edi
  __int64 v782; // r13
  char *v783; // r8
  int v784; // edi
  unsigned __int8 *v785; // r9
  char *v786; // r11
  int v787; // r8d
  int v788; // ecx
  int v789; // edi
  int v790; // edx
  int v791; // ecx
  int v792; // edi
  int v793; // edx
  int v794; // eax
  void *v795; // rdi
  int v796; // r12d
  int v797; // r15d
  __int64 v798; // r14
  __int64 v799; // rax
  __int64 v800; // r14
  signed int v801; // ebx
  signed int v802; // eax
  __int64 v803; // rax
  int v804; // eax
  int v805; // edx
  int v806; // edi
  int v807; // r8d
  int v808; // ecx
  int v809; // r10d
  int v810; // r15d
  int v811; // r11d
  char v812; // si
  __int64 v813; // r13
  char *v814; // rdi
  int v815; // r12d
  unsigned __int8 *v816; // r9
  char *v817; // r15
  int v818; // r8d
  int v819; // ecx
  int v820; // edi
  int v821; // edx
  int v822; // ecx
  int v823; // edi
  int v824; // edx
  int v825; // r8d
  LPVOID v826; // r13
  __int64 v827; // r12
  char v828; // al
  int v829; // eax
  unsigned int v830; // ebx
  int v831; // r9d
  int v832; // r8d
  int v833; // r12d
  int v834; // ecx
  int v835; // edi
  int v836; // r15d
  int v837; // r14d
  int v838; // r13d
  SIZE_T v839; // rax
  void *v840; // rbx
  __int64 v841; // rax
  __int64 v842; // r13
  __int64 v843; // rcx
  __int64 v844; // rcx
  __int64 v845; // rcx
  __int64 v846; // rcx
  int v847; // eax
  HMODULE *v848; // rdi
  __int64 v849; // rbx
  int v850; // r12d
  int v851; // eax
  int v852; // r15d
  int v853; // eax
  _BYTE *v854; // rax
  _BYTE *i1; // rbx
  int v856; // r12d
  int v857; // esi
  int v858; // r11d
  char *v859; // r15
  int v860; // r10d
  char *v861; // r13
  __int64 v862; // r14
  int v863; // eax
  int v864; // r9d
  int v865; // r8d
  int v866; // r9d
  int v867; // r10d
  int v868; // r8d
  unsigned int v869; // r11d
  int v870; // r10d
  unsigned int v871; // r11d
  int v872; // r10d
  int v873; // r11d
  unsigned int v874; // r10d
  int v875; // r11d
  int v876; // r10d
  int v877; // r11d
  unsigned int v878; // r10d
  int v879; // r11d
  int v880; // r10d
  unsigned int v881; // edi
  int v882; // r10d
  int v883; // edi
  int v884; // r10d
  int v885; // edi
  unsigned int v886; // edx
  int v887; // edi
  int v888; // edx
  int v889; // edi
  unsigned int v890; // edx
  int v891; // edi
  int v892; // ecx
  unsigned __int64 v893; // rax
  int v894; // r14d
  unsigned int v895; // r13d
  __m128i v896; // xmm2
  __m128i v897; // xmm1
  __m128i v898; // xmm0
  __m128i v899; // xmm0
  __m128i v900; // xmm1
  __m128i v901; // xmm1
  __m128i v902; // xmm1
  __m128i v903; // xmm1
  char nn; // cl
  const WCHAR *v905; // rdx
  __int64 v906; // rax
  _BYTE *v907; // rbx
  char *v908; // rdi
  signed int v909; // ebx
  void *v910; // rax
  signed int v911; // eax
  int v912; // eax
  void *v913; // rcx
  __int64 v914; // rax
  int v915; // edx
  int v916; // r8d
  int v917; // r9d
  int v918; // ecx
  int v919; // r10d
  int v920; // r12d
  unsigned __int8 *v921; // rdi
  __int64 v922; // rsi
  __int64 v923; // rax
  int v924; // r8d
  unsigned __int8 *v925; // r9
  __int64 v926; // r11
  int v927; // r8d
  int v928; // edi
  int v929; // edx
  int v930; // edi
  int v931; // edx
  int v932; // edi
  int v933; // ecx
  int v934; // ecx
  void *v935; // rbx
  int v936; // edi
  __int64 v937; // rax
  __int64 v938; // r12
  signed int v939; // ebx
  int v940; // r13d
  __int64 v941; // rax
  signed int v942; // eax
  int v943; // eax
  char *v944; // rcx
  __int64 v945; // rax
  int v946; // eax
  int v947; // edx
  int v948; // r8d
  int v949; // r9d
  int v950; // ecx
  __int64 v951; // r14
  int v952; // r10d
  int v953; // r11d
  int v954; // edi
  char v955; // si
  char *v956; // r15
  char *v957; // rdi
  int v958; // r13d
  unsigned __int8 *v959; // r9
  char *v960; // r14
  int v961; // r8d
  int v962; // ecx
  int v963; // edi
  int v964; // edx
  int v965; // ecx
  int v966; // edi
  int v967; // edx
  int v968; // r8d
  __int64 v969; // rcx
  unsigned __int64 v970; // rcx
  unsigned int v971; // r12d
  unsigned int v972; // r15d
  const CHAR *v973; // rdx
  __int64 v974; // rax
  __int64 (__fastcall *v975)(); // rax
  HANDLE v976; // rax
  HMODULE *v977; // rdi
  __int64 v978; // rbx
  int v979; // eax
  HMODULE *v980; // rdi
  __int64 v981; // rbx
  _DWORD *v982; // rdi
  int v983; // r9d
  unsigned int v984; // r10d
  void *v985; // rcx
  unsigned int v986; // edi
  unsigned int v987; // edi
  unsigned int *v988; // r9
  __int64 v989; // r9
  int v990; // r10d
  unsigned int *v991; // r9
  void *v992; // rcx
  unsigned int *v993; // r9
  __int64 v994; // r9
  int v995; // r10d
  _DWORD *v996; // r9
  unsigned __int64 *v997; // rax
  __int64 v998; // rcx
  unsigned int v999; // edi
  unsigned __int64 v1000; // r12
  _QWORD *v1001; // r14
  int *v1002; // r13
  int v1003; // edi
  unsigned __int64 v1004; // r9
  _QWORD *v1005; // r10
  unsigned int v1006; // ecx
  unsigned int v1007; // edi
  HANDLE v1008; // rax
  _DWORD *v1009; // rbx
  unsigned int v1010; // r9d
  void *v1011; // rcx
  HANDLE v1012; // rax
  int v1013; // edi
  unsigned __int8 *v1014; // rdi
  _QWORD *v1015; // r14
  int v1016; // edi
  unsigned __int64 v1017; // rbx
  char *v1018; // r15
  unsigned __int8 v1019; // al
  unsigned __int64 v1020; // rcx
  __m128i v1021; // xmm2
  __m128i v1022; // xmm1
  __m128i v1023; // xmm0
  __m128i v1024; // xmm0
  __m128i v1025; // xmm1
  __m128i v1026; // xmm1
  __m128i v1027; // xmm1
  __m128i v1028; // xmm1
  int v1029; // r10d
  unsigned int v1030; // edx
  unsigned __int8 *v1031; // r8
  _BYTE *v1032; // rdi
  int v1033; // eax
  int v1034; // r10d
  char v1035; // r9
  int v1036; // edx
  unsigned int v1037; // r10d
  int v1038; // ecx
  int v1039; // eax
  unsigned __int64 v1040; // r11
  int v1041; // ecx
  _BYTE *v1042; // r14
  int v1043; // esi
  int v1044; // ebx
  unsigned __int8 *v1045; // r15
  int v1046; // eax
  int v1047; // r9d
  int v1048; // r8d
  int v1049; // r9d
  int v1050; // r8d
  int v1051; // r10d
  int v1052; // edi
  int v1053; // r10d
  int v1054; // edi
  int v1055; // r10d
  unsigned int v1056; // edi
  int v1057; // r10d
  int v1058; // edi
  int v1059; // r10d
  int v1060; // edi
  int v1061; // r10d
  int v1062; // edi
  unsigned int v1063; // r10d
  unsigned int v1064; // edi
  int v1065; // r10d
  int v1066; // edi
  int v1067; // r10d
  int v1068; // edi
  int v1069; // r10d
  int v1070; // edi
  int v1071; // r10d
  int v1072; // edi
  unsigned int v1073; // r10d
  int v1074; // edi
  unsigned int v1075; // edi
  HANDLE v1076; // rax
  _DWORD *v1077; // rax
  _DWORD *v1078; // rbx
  HANDLE v1079; // rax
  void *v1080; // rax
  HANDLE v1081; // rax
  _OWORD *v1082; // rax
  HANDLE v1083; // rax
  _QWORD *v1084; // rax
  void *v1085; // rdi
  HANDLE v1086; // rax
  void *v1087; // rdi
  HANDLE v1088; // rax
  void *v1089; // rdi
  HANDLE v1090; // rax
  HANDLE v1091; // rax
  void *v1092; // rbx
  HANDLE v1093; // rax
  void *v1094; // rbx
  HANDLE v1095; // rax
  void *v1096; // rbx
  HANDLE v1097; // rax
  void *v1098; // rbx
  HANDLE v1099; // rax
  HANDLE v1100; // rax
  const void **v1101; // rbx
  unsigned int v1102; // ecx
  int v1103; // edi
  unsigned int v1104; // eax
  unsigned int v1105; // edi
  HANDLE v1106; // rax
  _DWORD *v1107; // r14
  int v1108; // r15d
  int v1109; // eax
  void *v1110; // rcx
  void *v1111; // rcx
  HANDLE v1112; // rax
  int v1113; // ebx
  int v1114; // eax
  __int64 v1115; // rcx
  int v1116; // eax
  unsigned int v1117; // r9d
  unsigned int *v1118; // rcx
  unsigned int v1119; // r14d
  unsigned int v1120; // ebx
  unsigned int *v1121; // r11
  unsigned int *v1122; // rax
  int v1123; // edx
  unsigned int *v1124; // rcx
  int v1125; // ebx
  unsigned int v1126; // r14d
  unsigned int v1127; // r9d
  unsigned int v1128; // ebx
  unsigned int *v1129; // rax
  unsigned int v1130; // r10d
  unsigned int v1131; // r11d
  unsigned int v1132; // eax
  unsigned int v1133; // edi
  HANDLE v1134; // rax
  unsigned __int16 *v1135; // rax
  signed int v1136; // eax
  unsigned int v1137; // edx
  _QWORD *v1138; // rbx
  signed int v1139; // edi
  FARPROC v1140; // rax
  int v1141; // eax
  __int64 v1142; // r11
  unsigned __int64 v1143; // r10
  unsigned __int64 v1144; // r14
  unsigned __int64 v1145; // r8
  unsigned int v1146; // r9d
  unsigned int v1147; // ecx
  SIZE_T v1148; // r12
  unsigned __int64 v1149; // r15
  unsigned int v1150; // eax
  unsigned int v1151; // eax
  unsigned int v1152; // r8d
  SIZE_T v1153; // r13
  __int64 v1154; // rcx
  unsigned int v1155; // eax
  unsigned int v1156; // ecx
  unsigned int v1157; // eax
  int v1158; // r8d
  HANDLE v1159; // rax
  _QWORD *v1160; // rdi
  HANDLE v1161; // rax
  void *v1162; // rax
  size_t v1163; // r8
  HANDLE v1164; // rax
  void *v1165; // rax
  HANDLE v1166; // rax
  void *v1167; // rax
  void *v1168; // r14
  HANDLE v1169; // rax
  void *v1170; // r14
  HANDLE v1171; // rax
  void *v1172; // r14
  HANDLE v1173; // rax
  HANDLE v1174; // rax
  void *v1175; // r14
  HANDLE v1176; // rax
  void *v1177; // r14
  HANDLE v1178; // rax
  void *v1179; // r14
  HANDLE v1180; // rax
  HANDLE v1181; // rax
  char *v1182; // rdi
  __int64 v1183; // rax
  unsigned __int64 v1184; // rbx
  int *v1185; // r11
  unsigned __int8 v1186; // r13
  char *v1187; // r9
  _BYTE *v1188; // r8
  int v1189; // edx
  int v1190; // edi
  char v1191; // r12
  int v1192; // eax
  int v1193; // ecx
  unsigned int v1194; // r10d
  unsigned int v1195; // edi
  int v1196; // eax
  int v1197; // eax
  int v1198; // edi
  unsigned __int64 v1199; // r12
  int v1200; // r14d
  _BYTE *v1201; // r11
  int v1202; // ebx
  int v1203; // esi
  unsigned __int8 *v1204; // r13
  int v1205; // eax
  int v1206; // r9d
  int v1207; // r8d
  int v1208; // r9d
  int v1209; // r10d
  int v1210; // r8d
  unsigned int v1211; // edx
  int v1212; // r10d
  unsigned int v1213; // edx
  int v1214; // r10d
  int v1215; // edx
  unsigned int v1216; // r10d
  int v1217; // edx
  int v1218; // r10d
  int v1219; // edx
  unsigned int v1220; // r10d
  int v1221; // edx
  int v1222; // r10d
  unsigned int v1223; // edi
  int v1224; // r10d
  int v1225; // edi
  int v1226; // r10d
  int v1227; // edi
  unsigned int v1228; // edx
  int v1229; // edi
  int v1230; // edx
  int v1231; // edi
  unsigned int v1232; // edx
  int v1233; // edi
  int v1234; // ecx
  unsigned __int64 v1235; // rax
  __m128i v1236; // xmm2
  __m128i v1237; // xmm1
  __m128i v1238; // xmm0
  __m128i v1239; // xmm0
  __m128i v1240; // xmm1
  __m128i v1241; // xmm1
  __m128i v1242; // xmm1
  __m128i v1243; // xmm1
  void *v1244; // rbx
  HANDLE v1245; // rax
  int v1246; // edi
  SIZE_T v1247; // r15
  unsigned int v1248; // r9d
  int v1249; // r10d
  __int64 v1250; // rdx
  void *v1251; // rbx
  void *v1252; // r12
  unsigned int v1253; // r13d
  unsigned __int64 v1254; // r9
  unsigned __int64 v1255; // r11
  unsigned int *v1256; // r9
  unsigned __int64 v1257; // r11
  int v1258; // eax
  __int64 v1259; // r9
  unsigned int v1260; // r10d
  HANDLE v1261; // rax
  LPVOID v1262; // rax
  HANDLE v1263; // rax
  _QWORD *v1264; // rbx
  void *v1265; // r15
  HANDLE v1266; // rax
  void *v1267; // r15
  HANDLE v1268; // rax
  HANDLE v1269; // rax
  HANDLE v1270; // rax
  HANDLE v1271; // rax
  HANDLE v1272; // rax
  void *v1273; // rbx
  HANDLE v1274; // rax
  void *v1275; // rbx
  HANDLE v1276; // rax
  void *v1277; // rbx
  HANDLE v1278; // rax
  HANDLE v1279; // rax
  HANDLE v1280; // rax
  unsigned int *v1281; // rdi
  unsigned int v1282; // r9d
  int v1283; // r10d
  _DWORD *v1284; // rax
  int v1285; // r9d
  unsigned int v1286; // edi
  unsigned int *v1287; // rax
  bool IsLogLicenseResult; // di
  char v1289; // r8
  char v1290; // di
  int v1291; // [rsp+60h] [rbp-A0h]
  __int64 v1292; // [rsp+68h] [rbp-98h]
  __int64 v1293; // [rsp+68h] [rbp-98h]
  _QWORD *v1294; // [rsp+68h] [rbp-98h]
  LPVOID v1295; // [rsp+70h] [rbp-90h]
  LPVOID v1296; // [rsp+70h] [rbp-90h]
  LPVOID v1297; // [rsp+70h] [rbp-90h]
  char *v1298; // [rsp+70h] [rbp-90h]
  char *v1299; // [rsp+70h] [rbp-90h]
  char *v1300; // [rsp+70h] [rbp-90h]
  char *v1301; // [rsp+70h] [rbp-90h]
  int v1302; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1303; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v1304; // [rsp+78h] [rbp-88h]
  unsigned int v1305; // [rsp+78h] [rbp-88h]
  int v1306; // [rsp+78h] [rbp-88h]
  unsigned int v1307; // [rsp+80h] [rbp-80h]
  unsigned int v1308; // [rsp+80h] [rbp-80h]
  int v1309; // [rsp+80h] [rbp-80h]
  int v1310; // [rsp+80h] [rbp-80h]
  int v1311; // [rsp+80h] [rbp-80h]
  unsigned int v1312; // [rsp+80h] [rbp-80h]
  int v1313; // [rsp+80h] [rbp-80h]
  unsigned __int8 v1314; // [rsp+80h] [rbp-80h]
  _BYTE *v1315; // [rsp+88h] [rbp-78h]
  int v1316; // [rsp+88h] [rbp-78h]
  char *v1317; // [rsp+88h] [rbp-78h]
  int v1318; // [rsp+88h] [rbp-78h]
  int v1319; // [rsp+88h] [rbp-78h]
  int v1320; // [rsp+88h] [rbp-78h]
  int v1321; // [rsp+88h] [rbp-78h]
  int v1322; // [rsp+88h] [rbp-78h]
  int v1323; // [rsp+88h] [rbp-78h]
  _DWORD *v1324; // [rsp+88h] [rbp-78h]
  int v1325; // [rsp+90h] [rbp-70h]
  int v1326; // [rsp+90h] [rbp-70h]
  unsigned int v1327; // [rsp+90h] [rbp-70h]
  int v1328; // [rsp+90h] [rbp-70h]
  int v1329; // [rsp+90h] [rbp-70h]
  int v1330; // [rsp+90h] [rbp-70h]
  int v1331; // [rsp+94h] [rbp-6Ch]
  int v1332; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 *v1333; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v1334; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v1335; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v1336; // [rsp+98h] [rbp-68h]
  int v1337; // [rsp+98h] [rbp-68h]
  int v1338; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v1339; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v1340; // [rsp+98h] [rbp-68h]
  unsigned int v1341; // [rsp+A0h] [rbp-60h]
  unsigned int v1342; // [rsp+A4h] [rbp-5Ch] BYREF
  void *v1343; // [rsp+A8h] [rbp-58h]
  LPVOID v1344; // [rsp+B0h] [rbp-50h]
  LPVOID v1345; // [rsp+B8h] [rbp-48h]
  int v1346; // [rsp+C0h] [rbp-40h]
  int v1347; // [rsp+C4h] [rbp-3Ch]
  unsigned int v1348; // [rsp+C8h] [rbp-38h]
  int v1349; // [rsp+CCh] [rbp-34h]
  LPVOID v1350; // [rsp+D0h] [rbp-30h]
  int v1351; // [rsp+D8h] [rbp-28h]
  int v1352; // [rsp+DCh] [rbp-24h]
  int v1353; // [rsp+E0h] [rbp-20h]
  __int64 v1354; // [rsp+E8h] [rbp-18h]
  unsigned int v1355; // [rsp+F0h] [rbp-10h]
  unsigned int v1356; // [rsp+F4h] [rbp-Ch]
  int v1357; // [rsp+F8h] [rbp-8h]
  int v1358; // [rsp+FCh] [rbp-4h]
  int v1359; // [rsp+100h] [rbp+0h]
  int v1360; // [rsp+104h] [rbp+4h]
  int v1361; // [rsp+108h] [rbp+8h]
  LPVOID v1362; // [rsp+110h] [rbp+10h]
  void *v1363; // [rsp+118h] [rbp+18h]
  int v1364; // [rsp+120h] [rbp+20h]
  int v1365; // [rsp+124h] [rbp+24h]
  int v1366; // [rsp+128h] [rbp+28h]
  int v1367; // [rsp+12Ch] [rbp+2Ch]
  int v1368; // [rsp+130h] [rbp+30h]
  size_t v1369; // [rsp+138h] [rbp+38h] BYREF
  LPVOID v1370; // [rsp+140h] [rbp+40h]
  unsigned int v1371; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1372; // [rsp+14Ch] [rbp+4Ch] BYREF
  unsigned int v1373; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1374; // [rsp+154h] [rbp+54h] BYREF
  __int64 v1375; // [rsp+158h] [rbp+58h]
  int v1376; // [rsp+160h] [rbp+60h]
  HLOCAL v1377; // [rsp+168h] [rbp+68h]
  unsigned int v1378; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1379; // [rsp+174h] [rbp+74h]
  unsigned int v1380; // [rsp+178h] [rbp+78h] BYREF
  unsigned int dwBytes; // [rsp+17Ch] [rbp+7Ch]
  int dwBytes_4; // [rsp+180h] [rbp+80h]
  int v1383; // [rsp+184h] [rbp+84h]
  int v1384; // [rsp+188h] [rbp+88h]
  int v1385; // [rsp+18Ch] [rbp+8Ch]
  void *v1386; // [rsp+190h] [rbp+90h]
  unsigned int v1387; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1388; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1389; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v1390; // [rsp+1A8h] [rbp+A8h]
  SIZE_T v1391; // [rsp+1B0h] [rbp+B0h]
  unsigned int v1392; // [rsp+1B8h] [rbp+B8h] BYREF
  void *v1393; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v1394; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int64 v1395; // [rsp+1D0h] [rbp+D0h]
  LPVOID v1396; // [rsp+1D8h] [rbp+D8h]
  __int64 v1397; // [rsp+1E0h] [rbp+E0h]
  unsigned __int64 v1398; // [rsp+1E8h] [rbp+E8h]
  int v1399; // [rsp+1F0h] [rbp+F0h]
  char *v1400; // [rsp+1F8h] [rbp+F8h]
  __int64 v1401; // [rsp+200h] [rbp+100h]
  unsigned int *i2; // [rsp+208h] [rbp+108h] BYREF
  unsigned int *v1403; // [rsp+210h] [rbp+110h] BYREF
  LPVOID v1404; // [rsp+218h] [rbp+118h] BYREF
  unsigned int *v1405; // [rsp+220h] [rbp+120h] BYREF
  unsigned int *v1406; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1407; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1408; // [rsp+234h] [rbp+134h]
  unsigned int v1409; // [rsp+238h] [rbp+138h]
  unsigned int v1410; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v1411; // [rsp+240h] [rbp+140h]
  unsigned int v1412; // [rsp+244h] [rbp+144h]
  unsigned int v1413; // [rsp+248h] [rbp+148h]
  int v1414; // [rsp+24Ch] [rbp+14Ch]
  unsigned int v1415; // [rsp+250h] [rbp+150h]
  int v1416; // [rsp+254h] [rbp+154h]
  unsigned int v1417; // [rsp+258h] [rbp+158h]
  unsigned int v1418; // [rsp+25Ch] [rbp+15Ch]
  __int128 v1419; // [rsp+260h] [rbp+160h]
  unsigned int v1420; // [rsp+270h] [rbp+170h]
  int v1421; // [rsp+274h] [rbp+174h]
  __int64 v1422; // [rsp+278h] [rbp+178h] BYREF
  __int64 v1423; // [rsp+280h] [rbp+180h] BYREF
  unsigned __int64 v1424; // [rsp+288h] [rbp+188h]
  LPVOID v1425; // [rsp+290h] [rbp+190h]
  unsigned int v1426; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v1427; // [rsp+29Ch] [rbp+19Ch] BYREF
  int v1428; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned int v1429; // [rsp+2A4h] [rbp+1A4h]
  unsigned int v1430; // [rsp+2A8h] [rbp+1A8h] BYREF
  int v1431; // [rsp+2ACh] [rbp+1ACh]
  int v1432; // [rsp+2B0h] [rbp+1B0h]
  unsigned int v1433; // [rsp+2B4h] [rbp+1B4h] BYREF
  unsigned int v1434; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v1435; // [rsp+2BCh] [rbp+1BCh] BYREF
  unsigned int v1436; // [rsp+2C0h] [rbp+1C0h]
  __int128 v1437; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 v1438; // [rsp+2D8h] [rbp+1D8h] BYREF
  int v1439; // [rsp+2E0h] [rbp+1E0h]
  HLOCAL hMem; // [rsp+2E8h] [rbp+1E8h]
  void *v1441; // [rsp+2F0h] [rbp+1F0h] BYREF
  void *v1442; // [rsp+2F8h] [rbp+1F8h] BYREF
  void *v1443; // [rsp+300h] [rbp+200h]
  LPVOID v1444; // [rsp+308h] [rbp+208h]
  _DWORD *v1445; // [rsp+310h] [rbp+210h] BYREF
  const void *v1446; // [rsp+318h] [rbp+218h] BYREF
  unsigned int *v1447; // [rsp+320h] [rbp+220h] BYREF
  int *v1448; // [rsp+328h] [rbp+228h] BYREF
  size_t v1449; // [rsp+330h] [rbp+230h] BYREF
  _DWORD *v1450; // [rsp+338h] [rbp+238h] BYREF
  _QWORD *v1451; // [rsp+340h] [rbp+240h] BYREF
  unsigned __int16 *v1452; // [rsp+348h] [rbp+248h] BYREF
  void *v1453; // [rsp+350h] [rbp+250h] BYREF
  LPVOID v1454; // [rsp+358h] [rbp+258h]
  void *v1455; // [rsp+360h] [rbp+260h] BYREF
  LPVOID v1456; // [rsp+368h] [rbp+268h]
  __int64 v1457; // [rsp+370h] [rbp+270h]
  __int64 v1458; // [rsp+378h] [rbp+278h]
  unsigned int v1459; // [rsp+380h] [rbp+280h] BYREF
  unsigned int v1460; // [rsp+384h] [rbp+284h] BYREF
  unsigned int v1461; // [rsp+388h] [rbp+288h] BYREF
  unsigned int v1462; // [rsp+38Ch] [rbp+28Ch] BYREF
  unsigned int v1463; // [rsp+390h] [rbp+290h] BYREF
  int v1464; // [rsp+398h] [rbp+298h]
  unsigned int v1465; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v1466; // [rsp+3A8h] [rbp+2A8h]
  unsigned int v1467; // [rsp+3B0h] [rbp+2B0h]
  int v1468; // [rsp+3B4h] [rbp+2B4h]
  unsigned int v1469; // [rsp+3B8h] [rbp+2B8h]
  unsigned int v1470; // [rsp+3BCh] [rbp+2BCh]
  int v1471; // [rsp+3C0h] [rbp+2C0h]
  unsigned int v1472; // [rsp+3C4h] [rbp+2C4h]
  int v1473; // [rsp+3C8h] [rbp+2C8h]
  int v1474; // [rsp+3CCh] [rbp+2CCh]
  int v1475; // [rsp+3D0h] [rbp+2D0h]
  unsigned int v1476; // [rsp+3D4h] [rbp+2D4h]
  int v1477; // [rsp+3D8h] [rbp+2D8h]
  int v1478; // [rsp+3DCh] [rbp+2DCh]
  unsigned int v1479; // [rsp+3E0h] [rbp+2E0h]
  int v1480; // [rsp+3E4h] [rbp+2E4h]
  unsigned int v1481; // [rsp+3E8h] [rbp+2E8h] BYREF
  unsigned int v1482; // [rsp+3ECh] [rbp+2ECh] BYREF
  unsigned int v1483; // [rsp+3F0h] [rbp+2F0h] BYREF
  unsigned int v1484; // [rsp+3F4h] [rbp+2F4h] BYREF
  int v1485; // [rsp+3F8h] [rbp+2F8h]
  unsigned int v1486; // [rsp+400h] [rbp+300h] BYREF
  unsigned int v1487; // [rsp+404h] [rbp+304h] BYREF
  unsigned int v1488; // [rsp+408h] [rbp+308h]
  unsigned int v1489; // [rsp+40Ch] [rbp+30Ch] BYREF
  unsigned int v1490; // [rsp+410h] [rbp+310h] BYREF
  unsigned int v1491; // [rsp+414h] [rbp+314h]
  unsigned int v1492; // [rsp+418h] [rbp+318h] BYREF
  LPVOID lpMem; // [rsp+420h] [rbp+320h]
  size_t pcchLength; // [rsp+428h] [rbp+328h] BYREF
  LPVOID v1495; // [rsp+430h] [rbp+330h]
  int *v1496; // [rsp+438h] [rbp+338h] BYREF
  LPVOID v1497; // [rsp+440h] [rbp+340h]
  LPVOID v1498; // [rsp+448h] [rbp+348h]
  __int64 v1499; // [rsp+450h] [rbp+350h] BYREF
  void **v1500; // [rsp+458h] [rbp+358h] BYREF
  unsigned int v1501; // [rsp+460h] [rbp+360h]
  LPVOID v1502; // [rsp+468h] [rbp+368h]
  _DWORD *v1503; // [rsp+470h] [rbp+370h] BYREF
  unsigned int *v1504; // [rsp+478h] [rbp+378h] BYREF
  unsigned int *v1505; // [rsp+480h] [rbp+380h] BYREF
  LPVOID v1506; // [rsp+488h] [rbp+388h]
  _DWORD *v1507; // [rsp+490h] [rbp+390h] BYREF
  unsigned int *v1508; // [rsp+498h] [rbp+398h]
  unsigned int v1509; // [rsp+4A0h] [rbp+3A0h]
  _DWORD v1510[2]; // [rsp+4A4h] [rbp+3A4h] BYREF
  unsigned int v1511; // [rsp+4ACh] [rbp+3ACh] BYREF
  unsigned int v1512; // [rsp+4B0h] [rbp+3B0h]
  unsigned int v1513; // [rsp+4B4h] [rbp+3B4h] BYREF
  unsigned int v1514; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned int v1515; // [rsp+4BCh] [rbp+3BCh]
  int v1516; // [rsp+4C0h] [rbp+3C0h]
  size_t Size; // [rsp+4C8h] [rbp+3C8h]
  size_t v1518; // [rsp+4D0h] [rbp+3D0h]
  size_t v1519; // [rsp+4D8h] [rbp+3D8h]
  unsigned __int64 v1520; // [rsp+4E0h] [rbp+3E0h]
  void *v1521; // [rsp+4E8h] [rbp+3E8h]
  AtmosCheck *v1522; // [rsp+4F0h] [rbp+3F0h]
  size_t v1523; // [rsp+4F8h] [rbp+3F8h]
  unsigned __int64 v1524; // [rsp+500h] [rbp+400h]
  unsigned __int64 v1525; // [rsp+508h] [rbp+408h]
  _DWORD *v1526; // [rsp+510h] [rbp+410h] BYREF
  unsigned __int64 v1527; // [rsp+518h] [rbp+418h]
  unsigned __int16 *v1528; // [rsp+520h] [rbp+420h]
  unsigned __int16 *v1529; // [rsp+528h] [rbp+428h]
  char *v1530; // [rsp+530h] [rbp+430h]
  _QWORD v1531[2]; // [rsp+538h] [rbp+438h] BYREF
  BCRYPT_KEY_HANDLE hKey[2]; // [rsp+548h] [rbp+448h] BYREF
  __int64 *v1533; // [rsp+558h] [rbp+458h]
  __int64 v1534; // [rsp+560h] [rbp+460h]
  unsigned int *v1535; // [rsp+568h] [rbp+468h]
  void *v1536; // [rsp+570h] [rbp+470h]
  HMODULE phModule; // [rsp+578h] [rbp+478h] BYREF
  SIZE_T v1538; // [rsp+580h] [rbp+480h]
  int *v1539; // [rsp+588h] [rbp+488h]
  _QWORD *v1540; // [rsp+590h] [rbp+490h]
  _DWORD *v1541; // [rsp+598h] [rbp+498h]
  const void *v1542; // [rsp+5A0h] [rbp+4A0h]
  unsigned int *v1543; // [rsp+5A8h] [rbp+4A8h]
  int *v1544; // [rsp+5B0h] [rbp+4B0h]
  __int64 v1545; // [rsp+5B8h] [rbp+4B8h]
  __int64 v1546; // [rsp+5C0h] [rbp+4C0h]
  __int64 v1547; // [rsp+5C8h] [rbp+4C8h]
  __int64 v1548; // [rsp+5D0h] [rbp+4D0h]
  __int64 v1549; // [rsp+5D8h] [rbp+4D8h] BYREF
  __int64 v1550; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v1551; // [rsp+5E8h] [rbp+4E8h] BYREF
  __int64 v1552; // [rsp+5F0h] [rbp+4F0h] BYREF
  unsigned int v1553; // [rsp+5F8h] [rbp+4F8h]
  unsigned int v1554; // [rsp+5FCh] [rbp+4FCh]
  int v1555; // [rsp+600h] [rbp+500h]
  __int64 v1556; // [rsp+608h] [rbp+508h] BYREF
  __int64 v1557; // [rsp+610h] [rbp+510h] BYREF
  void *v1558; // [rsp+618h] [rbp+518h]
  void *v1559; // [rsp+620h] [rbp+520h]
  unsigned __int64 v1560; // [rsp+628h] [rbp+528h]
  unsigned __int64 v1561; // [rsp+630h] [rbp+530h]
  _QWORD *v1562; // [rsp+638h] [rbp+538h]
  __int64 *v1563; // [rsp+640h] [rbp+540h]
  __int64 v1564; // [rsp+648h] [rbp+548h]
  _OWORD *v1565; // [rsp+650h] [rbp+550h]
  __int64 v1566; // [rsp+658h] [rbp+558h]
  unsigned int *v1567; // [rsp+660h] [rbp+560h]
  unsigned int *v1568; // [rsp+668h] [rbp+568h]
  HMODULE hModule; // [rsp+670h] [rbp+570h] BYREF
  unsigned __int64 v1570; // [rsp+678h] [rbp+578h]
  unsigned __int64 v1571; // [rsp+680h] [rbp+580h] BYREF
  unsigned __int64 v1572; // [rsp+688h] [rbp+588h] BYREF
  unsigned __int64 v1573; // [rsp+690h] [rbp+590h] BYREF
  __int64 v1574; // [rsp+698h] [rbp+598h]
  void *Src; // [rsp+6A0h] [rbp+5A0h]
  void *v1576; // [rsp+6A8h] [rbp+5A8h]
  unsigned __int64 v1577; // [rsp+6B0h] [rbp+5B0h]
  __int64 *v1578; // [rsp+6B8h] [rbp+5B8h]
  __int64 v1579; // [rsp+6C0h] [rbp+5C0h]
  __int64 *v1580; // [rsp+6C8h] [rbp+5C8h]
  __int64 v1581; // [rsp+6D0h] [rbp+5D0h]
  _QWORD v1582[2]; // [rsp+6D8h] [rbp+5D8h] BYREF
  unsigned int v1583; // [rsp+6E8h] [rbp+5E8h]
  unsigned int v1584; // [rsp+6ECh] [rbp+5ECh]
  int v1585; // [rsp+6F0h] [rbp+5F0h]
  _QWORD v1586[2]; // [rsp+6F8h] [rbp+5F8h] BYREF
  int v1587; // [rsp+708h] [rbp+608h]
  unsigned int v1588; // [rsp+70Ch] [rbp+60Ch]
  int v1589; // [rsp+710h] [rbp+610h]
  _DWORD *v1590; // [rsp+718h] [rbp+618h]
  unsigned int *v1591; // [rsp+720h] [rbp+620h]
  __int64 v1592; // [rsp+728h] [rbp+628h]
  int *v1593; // [rsp+738h] [rbp+638h] BYREF
  void *v1594; // [rsp+748h] [rbp+648h] BYREF
  void *v1595; // [rsp+758h] [rbp+658h] BYREF
  unsigned __int64 *v1596; // [rsp+768h] [rbp+668h] BYREF
  int v1597; // [rsp+770h] [rbp+670h] BYREF
  int v1598; // [rsp+774h] [rbp+674h]
  void *v1599; // [rsp+778h] [rbp+678h]
  void *v1600; // [rsp+780h] [rbp+680h]
  void *v1601; // [rsp+788h] [rbp+688h]
  char *v1602; // [rsp+790h] [rbp+690h]
  void *v1603; // [rsp+798h] [rbp+698h]
  __int64 v1604; // [rsp+7A0h] [rbp+6A0h]
  int v1605; // [rsp+7A8h] [rbp+6A8h]
  __int128 v1606; // [rsp+7ACh] [rbp+6ACh] BYREF
  __int128 v1607; // [rsp+7BCh] [rbp+6BCh] BYREF
  unsigned int v1608; // [rsp+7CCh] [rbp+6CCh] BYREF
  unsigned int v1609; // [rsp+7D0h] [rbp+6D0h]
  unsigned int v1610; // [rsp+7D4h] [rbp+6D4h]
  unsigned int v1611; // [rsp+7D8h] [rbp+6D8h]
  _BYTE v1612[4]; // [rsp+7E0h] [rbp+6E0h] BYREF
  int v1613; // [rsp+7E4h] [rbp+6E4h]
  int v1614; // [rsp+7E8h] [rbp+6E8h]
  __int16 v1615; // [rsp+7F2h] [rbp+6F2h]
  __int64 v1616; // [rsp+7F8h] [rbp+6F8h]
  _BYTE v1617[4]; // [rsp+850h] [rbp+750h] BYREF
  int v1618; // [rsp+854h] [rbp+754h]
  int v1619; // [rsp+858h] [rbp+758h]
  void *v1620; // [rsp+868h] [rbp+768h]
  _BYTE v1621[4]; // [rsp+8C0h] [rbp+7C0h] BYREF
  int v1622; // [rsp+8C4h] [rbp+7C4h]
  int v1623; // [rsp+8C8h] [rbp+7C8h]
  __int64 v1624; // [rsp+8D8h] [rbp+7D8h]
  _BYTE v1625[4]; // [rsp+930h] [rbp+830h] BYREF
  int v1626; // [rsp+934h] [rbp+834h]
  int v1627; // [rsp+938h] [rbp+838h]
  char *v1628; // [rsp+948h] [rbp+848h]
  _BYTE v1629[4]; // [rsp+9A0h] [rbp+8A0h] BYREF
  int v1630; // [rsp+9A4h] [rbp+8A4h]
  int v1631; // [rsp+9A8h] [rbp+8A8h]
  char *v1632; // [rsp+9B8h] [rbp+8B8h]
  _BYTE v1633[24]; // [rsp+A10h] [rbp+910h] BYREF
  char *v1634; // [rsp+A28h] [rbp+928h]
  _BYTE v1635[24]; // [rsp+A80h] [rbp+980h] BYREF
  __int64 v1636; // [rsp+A98h] [rbp+998h]
  _BYTE v1637[24]; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int64 v1638; // [rsp+B08h] [rbp+A08h]
  _BYTE v1639[24]; // [rsp+B60h] [rbp+A60h] BYREF
  void *v1640; // [rsp+B78h] [rbp+A78h]
  unsigned __int64 v1641; // [rsp+BD0h] [rbp+AD0h]
  __int64 v1642; // [rsp+BD8h] [rbp+AD8h]
  __int64 v1643; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int64 v1644; // [rsp+BE8h] [rbp+AE8h]
  __int64 v1645; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int64 v1646; // [rsp+BF8h] [rbp+AF8h]
  __int64 v1647; // [rsp+C00h] [rbp+B00h] BYREF
  __int64 v1648; // [rsp+C08h] [rbp+B08h]
  __int64 v1649; // [rsp+C10h] [rbp+B10h] BYREF
  __int64 v1650; // [rsp+C18h] [rbp+B18h]
  __int64 v1651; // [rsp+C20h] [rbp+B20h] BYREF
  unsigned int v1652; // [rsp+C28h] [rbp+B28h]
  int v1653; // [rsp+C2Ch] [rbp+B2Ch]
  unsigned __int64 v1654; // [rsp+C30h] [rbp+B30h]
  __int64 v1655; // [rsp+C38h] [rbp+B38h]
  _DWORD v1656[5]; // [rsp+C40h] [rbp+B40h] BYREF
  int v1657; // [rsp+C54h] [rbp+B54h] BYREF
  _DWORD v1658[3]; // [rsp+C5Ch] [rbp+B5Ch] BYREF
  _DWORD v1659[12]; // [rsp+C68h] [rbp+B68h] BYREF
  _DWORD v1660[12]; // [rsp+C98h] [rbp+B98h] BYREF
  _DWORD v1661[12]; // [rsp+CC8h] [rbp+BC8h] BYREF
  _DWORD v1662[12]; // [rsp+CF8h] [rbp+BF8h] BYREF
  _DWORD v1663[12]; // [rsp+D28h] [rbp+C28h] BYREF
  _DWORD v1664[5]; // [rsp+D58h] [rbp+C58h] BYREF
  char v1665[8]; // [rsp+D6Ch] [rbp+C6Ch] BYREF
  _DWORD v1666[3]; // [rsp+D74h] [rbp+C74h] BYREF
  _DWORD v1667[6]; // [rsp+D80h] [rbp+C80h] BYREF
  char v1668; // [rsp+D9Ah] [rbp+C9Ah]
  unsigned __int16 v1669[34]; // [rsp+D9Ch] [rbp+C9Ch] BYREF
  _DWORD v1670[6]; // [rsp+DE0h] [rbp+CE0h] BYREF
  char v1671; // [rsp+DFAh] [rbp+CFAh]
  unsigned __int16 v1672[34]; // [rsp+DFCh] [rbp+CFCh] BYREF
  _DWORD v1673[6]; // [rsp+E40h] [rbp+D40h] BYREF
  char v1674; // [rsp+E5Ah] [rbp+D5Ah]
  unsigned __int16 v1675[34]; // [rsp+E5Ch] [rbp+D5Ch] BYREF
  char v1676[12]; // [rsp+EA0h] [rbp+DA0h] BYREF
  unsigned int v1677; // [rsp+EACh] [rbp+DACh]
  _BYTE v1678[68]; // [rsp+EC0h] [rbp+DC0h] BYREF
  __int16 v1679; // [rsp+F04h] [rbp+E04h]
  unsigned __int16 v1680; // [rsp+F66h] [rbp+E66h]
  int v1681; // [rsp+F6Ch] [rbp+E6Ch]
  int v1682; // [rsp+F70h] [rbp+E70h]
  int v1683; // [rsp+FA0h] [rbp+EA0h] BYREF
  _DWORD v1684[14]; // [rsp+FA8h] [rbp+EA8h] BYREF
  unsigned __int16 *v1685[6]; // [rsp+FE0h] [rbp+EE0h] BYREF
  unsigned __int16 *v1686[20]; // [rsp+1010h] [rbp+F10h] BYREF
  int v1687; // [rsp+10B0h] [rbp+FB0h] BYREF
  __int16 v1688; // [rsp+10B4h] [rbp+FB4h]
  _BYTE v1689[176]; // [rsp+10C0h] [rbp+FC0h] BYREF
  WCHAR Filename[264]; // [rsp+1170h] [rbp+1070h] BYREF

  v1 = 0LL;
  v1522 = this;
  v2 = (unsigned int *)((char *)this + 152);
  v1438 = 0x8007049080070490uLL;
  v3 = this;
  v1439 = -2147023728;
  v1508 = (unsigned int *)((char *)this + 152);
  hMem = 0LL;
  if ( this == (AtmosCheck *)-152LL )
    goto LABEL_468;
  v1421 = 0;
  v1415 = 0;
  v1383 = 0;
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v4 = dword_18018A018;
  v1384 = -1;
  v5 = 4LL;
  if ( dword_18018A018 )
  {
LABEL_38:
    dword_18018A018 = v4 + 1;
    goto LABEL_39;
  }
  v6 = 0;
  lpMem = 0LL;
  v1574 = 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x338uLL);
  v9 = v8;
  if ( !v8 )
  {
LABEL_485:
    v63 = -1073741702;
    v56 = (HMODULE *)&unk_18018B120;
    goto LABEL_34;
  }
  v10 = -1;
  v1357 = 0;
  v11 = 0;
  v1368 = 0;
  v12 = 0;
  v13 = v8 + 7;
  v14 = 0;
  v15 = (char *)&unk_1801320F2;
  v1 = 103LL;
  do
  {
    v16 = (unsigned __int8)*(v15 - 1);
    v17 = (unsigned __int8)*(v15 - 2);
    v18 = (unsigned __int8)v15[2];
    v15 += 8;
    v19 = (unsigned __int8)*(v15 - 7) | (((unsigned __int8)*(v15 - 8) | ((v16 | (v17 << 8)) << 8)) << 8);
    v20 = v19 ^ v14;
    v21 = (unsigned __int8)*(v15 - 3) | (((unsigned __int8)*(v15 - 4) | (((unsigned __int8)*(v15 - 5) | (v18 << 8)) << 8)) << 8);
    v22 = v20 ^ v21 ^ v11 ^ 0xAC987321;
    v23 = (__ROL4__(v22, 10) + 4991 * __ROL4__(v22 + 1419157410, 5)) ^ v20;
    v24 = (43881 * __ROR4__(v23 + 133239679, 9) - __ROL4__(v23, 2)) ^ v22;
    v25 = (24670 * v24 - (v24 >> 13) - 123127970) ^ v23;
    v26 = (2033 * __ROL4__(v25 ^ 0xAB69, 6) - __ROL4__(v25, 2)) ^ v24;
    v27 = (133239679 - (v26 ^ 0xAB69605E)) ^ v25;
    v28 = (43881 * (v27 ^ 0x137F)) ^ __ROR4__(v27, 6) ^ v26;
    v29 = (__ROL4__(v28, 2) + 24670 * __ROR4__(v28 + 133239679, 15)) ^ v27;
    v30 = (2033 * __ROR4__(v29 + 1419157410, 14) - __ROL4__(v29, 8)) ^ v28;
    v31 = __ROR4__(v30, 10) ^ (4991 * __ROR4__(v30 ^ 0xAB69605E, 12)) ^ v29;
    v32 = v30 ^ (v31 >> 10) ^ (43881 * (v31 ^ 0x7F1));
    v33 = (2033 * (__ROR4__(~v32, 5) + 24670)) ^ v31;
    v34 = v32 ^ (v33 - 2033) ^ 0xAB69605E;
    v35 = ((v34 >> 2) + 4991 * __ROL4__(v32 ^ (v33 - 2033) ^ 0xAB6967AF, 2)) ^ v33;
    v36 = (__ROL4__(v35, 7) + 43881 * __ROR4__(v35 - 133239679, 6)) ^ v34;
    v37 = (24670 * (v36 ^ 0x137F) + __ROR4__(v36, 9)) ^ v35;
    v38 = (__ROL4__(v37, 7) + 2033 * __ROL4__(v37 ^ 0xAB69, 5)) ^ v36;
    v39 = v37 ^ v38 ^ 0xAC987321;
    v40 = (4991 * (__ROR4__(v39, 3) - 43881)) ^ v38;
    v41 = (24670 * __ROR4__(v40 - 133239679, 1) - __ROR4__(v40, 6)) ^ v39;
    v42 = (__ROL4__(v41, 14) + 2033 * __ROL4__(v41 - 1419157410, 3)) ^ v40;
    v43 = (4991 * __ROL4__(v42 - 1419157410, 15) - __ROR4__(v42, 14)) ^ v41;
    v13 += 8;
    v44 = (v43 >> 3) ^ (43881 * (v43 ^ 0x605E)) ^ v42;
    v1357 = v10 ^ v44;
    v10 = v21;
    v45 = v12 ^ __ROL4__(v44, 2) ^ (24670 * __ROL4__(v44 ^ 0x7F1137F, 4));
    v12 = v19;
    v1368 = v45 ^ v43;
    *(v13 - 12) = v45 ^ v43;
    v1368 = __ROR4__(v1368, 8);
    *(v13 - 8) = v1357;
    v1357 = __ROR4__(v1357, 8);
    *(v13 - 13) = v1368;
    v1368 = __ROR4__(v1368, 8);
    *(v13 - 9) = v1357;
    v1357 = __ROR4__(v1357, 8);
    *(v13 - 14) = v1368;
    v1368 = __ROR4__(v1368, 8);
    *(v13 - 10) = v1357;
    v1357 = __ROR4__(v1357, 8);
    *(v13 - 15) = v1368;
    *(v13 - 11) = v1357;
    v14 = __ROR4__(v1368, 8);
    v11 = __ROR4__(v1357, 8);
    v1368 = v14;
    v1357 = v11;
    --v1;
  }
  while ( v1 );
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  do
  {
    v47 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v9[v46]), v47);
    v49 = _mm_loadu_si128((const __m128i *)&v9[v46 + 16]);
    v46 += 32LL;
    v50 = _mm_xor_si128(v49, v48);
    v48 = v50;
  }
  while ( v46 < 0x320 );
  v51 = _mm_xor_si128(v50, v47);
  v52 = _mm_xor_si128(v51, _mm_srli_si128(v51, 8));
  v53 = _mm_xor_si128(v52, _mm_srli_si128(v52, 4));
  v54 = _mm_xor_si128(v53, _mm_srli_si128(v53, 2));
  for ( i = _mm_cvtsi128_si32(_mm_xor_si128(v54, _mm_srli_si128(v54, 1))); v46 < 0x338; ++v46 )
    i ^= v9[v46];
  if ( i != 64LL )
  {
    operator delete(v9);
    v5 = 4LL;
    goto LABEL_485;
  }
  lpMem = v9;
  v56 = (HMODULE *)&unk_18018B120;
  v1574 = 824LL;
  v9[823] = 0;
  memset_0(&unk_18018B120, 0, 0x60uLL);
  if ( !*v9 )
  {
    v63 = 0;
    goto LABEL_33;
  }
  v57 = 0;
  while ( 1 )
  {
    v58 = (const WCHAR *)v9;
    v59 = -1LL;
    do
      v60 = *(_WORD *)&v9[2 * v59++ + 2] == 0;
    while ( !v60 );
    v61 = &v9[2 * v59];
    v62 = (char *)&unk_18018B120 + 24 * v57;
    if ( !GetModuleHandleExW(0, v58, (HMODULE *)v62) )
    {
      v63 = -1073741702;
      goto LABEL_33;
    }
    v63 = 0;
    if ( **(_WORD **)v62 == 23117 )
    {
      v64 = *(int *)(*(_QWORD *)v62 + 60LL);
      if ( (unsigned int)v64 >= 0x10000000 )
      {
        v63 = -1073741701;
      }
      else
      {
        v65 = *(_QWORD *)v62 + v64;
        if ( v65 < *(_QWORD *)v62 )
        {
          v63 = -1073741701;
        }
        else if ( *(_DWORD *)v65 == 17744 )
        {
          if ( ((*(_WORD *)(v65 + 24) - 267) & 0xFEFF) != 0 )
          {
            v63 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v62 + 12) = *(_QWORD *)(v65 + 136);
            *((_DWORD *)v62 + 2) = *(_DWORD *)(v65 + 80);
          }
        }
        else
        {
          v63 = -1073741701;
        }
      }
    }
    else
    {
      v63 = -1073741701;
    }
    v66 = *(_DWORD *)(v61 + 2);
    v9 = v61 + 6;
    v67 = 0;
    if ( v66 )
      break;
LABEL_31:
    ++v57;
    v56 = (HMODULE *)&unk_18018B120;
    v1 = 0LL;
    if ( !*v9 )
      goto LABEL_32;
  }
  while ( 1 )
  {
    v68 = v9;
    v69 = -1LL;
    do
      ++v69;
    while ( v9[v69] );
    v9 += v69 + 1;
    if ( v63 < 0 )
      goto LABEL_30;
    ProcAddress = GetProcAddress(*(HMODULE *)v62, v68);
    if ( !ProcAddress )
      break;
    off_180188000[v6] = ProcAddress;
LABEL_30:
    ++v6;
    if ( ++v67 >= v66 )
      goto LABEL_31;
  }
  v1 = 0LL;
LABEL_32:
  v56 = (HMODULE *)&unk_18018B120;
LABEL_33:
  v5 = 4LL;
LABEL_34:
  if ( lpMem )
  {
    v71 = GetProcessHeap();
    HeapFree(v71, 0, lpMem);
  }
  if ( v63 >= 0 )
  {
    v4 = dword_18018A018;
    goto LABEL_38;
  }
  v392 = 4LL;
  do
  {
    if ( *v56 )
      FreeLibrary(*v56);
    v56 += 3;
    --v392;
  }
  while ( v392 );
  memset_0(&unk_18018B120, 0, 0x60uLL);
  memcpy_0(off_180188000, off_180123520, 0x170uLL);
LABEL_39:
  v72 = 0LL;
  _InterlockedExchange(&dword_18018B1A8, 0);
  v73 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( !NtCurrentPeb()->SessionId )
  {
LABEL_40:
    v1383 = v74;
    goto LABEL_41;
  }
  v393 = off_180188110[0]();
  if ( !v393 )
  {
    LastError = GetLastError();
    v75 = LastError;
    if ( LastError > 0 )
      goto LABEL_495;
    goto LABEL_496;
  }
  for ( j = 0LL; ; j = v1426 )
  {
    v1422 = v1;
    if ( v1 )
      v396 = v1;
    else
      v396 = 0LL;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))off_180188130[0])(
           v393,
           2LL,
           v396,
           j,
           &v1426) )
    {
      v72 = (wchar_t *)v1;
      v1422 = 0LL;
      goto LABEL_514;
    }
    v397 = GetLastError();
    if ( v397 != 122 )
      break;
    if ( v1 )
      goto LABEL_511;
    v1 = (__int64)operator new(v1426);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1422);
    if ( !v1 )
    {
      v1422 = 0LL;
      v75 = -2147024882;
      goto LABEL_515;
    }
  }
  if ( !v397 )
  {
LABEL_511:
    v75 = -2147467259;
    goto LABEL_514;
  }
  if ( v397 > 0 )
    v75 = (unsigned __int16)v397 | 0x80070000;
  else
    v75 = v397;
LABEL_514:
  v1 = 0LL;
LABEL_515:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1422);
  if ( v75 >= 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v399 = ((__int64 (__fastcall *)(_QWORD))off_180188128[0])(CurrentThreadId);
    if ( v399 )
    {
      v75 = 0;
      for ( k = 0LL; ; k = v1427 )
      {
        v1423 = v1;
        if ( v1 )
          v401 = v1;
        else
          v401 = 0LL;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))off_180188130[0])(
               v399,
               2LL,
               v401,
               k,
               &v1427) )
        {
          v73 = (wchar_t *)v1;
          v1423 = 0LL;
          v1 = 0LL;
          goto LABEL_536;
        }
        v402 = GetLastError();
        if ( v402 != 122 )
          break;
        if ( v1 )
          goto LABEL_533;
        v1 = (__int64)operator new(v1427);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1423);
        if ( !v1 )
        {
          v1423 = 0LL;
          v75 = -2147024882;
          goto LABEL_536;
        }
      }
      if ( !v402 )
      {
LABEL_533:
        v1 = 0LL;
        v75 = -2147467259;
        goto LABEL_536;
      }
      if ( v402 > 0 )
        v75 = (unsigned __int16)v402 | 0x80070000;
      else
        v75 = v402;
      v1 = 0LL;
LABEL_536:
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1423);
      if ( v75 >= 0 )
      {
        if ( !v72 || wcscmp_0(v72, L"WinSta0") || !v73 || wcscmp_0(v73, L"Default") )
          goto LABEL_40;
        v1428 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1428, 4LL) )
        {
          if ( (v1428 & 0xF) == 0 )
            v74 = 1;
          goto LABEL_40;
        }
        v404 = GetLastError();
        v75 = v404;
        if ( v404 > 0 )
          v75 = (unsigned __int16)v404 | 0x80070000;
        if ( v75 >= 0 )
          v75 = -2147467259;
      }
LABEL_41:
      if ( v73 )
        operator delete(v73);
    }
    else
    {
      LastError = GetLastError();
      v75 = LastError;
      if ( LastError > 0 )
LABEL_495:
        v75 = (unsigned __int16)LastError | 0x80070000;
LABEL_496:
      if ( v75 >= 0 )
        v75 = -2147467259;
    }
  }
  if ( v72 )
    operator delete(v72);
  if ( v75 < 0 )
    v1383 = 0;
  v1415 = 0;
  v76 = LocalAlloc(0x40u, 4uLL);
  v1521 = v76;
  if ( !v76 )
  {
    v77 = 0LL;
    v89 = -2147024882;
LABEL_550:
    v387 = v1376;
    v386 = (HMODULE *)&unk_18018B120;
    goto LABEL_451;
  }
  v77 = v76;
  v1377 = v76;
  v1342 = 0;
  v78 = 0LL;
  v1343 = 0LL;
  v79 = 0LL;
  v1395 = 0LL;
  v1396 = 0LL;
  Src = &unk_180189350;
  v1431 = 0;
  v1385 = 0;
  Size = 160LL;
  v80 = GetProcessHeap();
  v81 = HeapAlloc(v80, 8u, 0xA0uLL);
  v82 = v81;
  if ( !v81 )
  {
    v89 = -1073741801;
    v1291 = -1073741801;
LABEL_776:
    v1 = 0LL;
    goto LABEL_439;
  }
  memcpy_0(v81, Src, Size);
  v83 = (unsigned int)Size;
  v78 = v82;
  v1295 = v82;
  v1576 = &unk_180189298;
  v1523 = 8LL;
  v84 = GetProcessHeap();
  v85 = (unsigned __int16 *)HeapAlloc(v84, 8u, 8uLL);
  v86 = v85;
  if ( !v85 )
  {
    v79 = 0LL;
    v89 = -1073741801;
    v1291 = -1073741801;
    goto LABEL_775;
  }
  memcpy_0(v85, v1576, v1523);
  v87 = v1523;
  v1303 = v86;
  v1524 = __rdtsc();
  v88 = 8;
  dwBytes_4 = 8;
  if ( (unsigned int)v83 >= 0xFFFFFFFC )
  {
    v89 = -1073741675;
    v1291 = -1073741675;
  }
  else
  {
    v88 = v83 + 4;
    v1291 = 0;
    v89 = 0;
    dwBytes_4 = v83 + 4;
  }
  if ( v89 < 0 )
  {
LABEL_774:
    v78 = v82;
    v79 = v86;
    goto LABEL_775;
  }
  v90 = v88 + 8;
  if ( v88 >= 0xFFFFFFF8 )
    goto LABEL_772;
  if ( (unsigned int)v1523 >= 0xFFFFFFFC )
  {
    v89 = -1073741675;
    v1291 = -1073741675;
  }
  else
  {
    v88 = v1523 + 4;
    v1291 = 0;
    v89 = 0;
    dwBytes_4 = v1523 + 4;
  }
  if ( v89 < 0 )
    goto LABEL_774;
  v91 = (const wchar_t *)(v88 + (unsigned int)v90);
  if ( (unsigned int)v91 < (unsigned int)v90 )
    goto LABEL_772;
  dwBytes_4 = 12;
  if ( (int)v91 + 12 < (unsigned int)v91 )
    goto LABEL_772;
  if ( StringLengthWorkerW(v91, v90, &pcchLength) < 0 )
  {
    v78 = v82;
    v1 = 0LL;
    v89 = -1073741762;
    pcchLength = 0LL;
    v79 = v86;
    v1291 = -1073741762;
    v5 = 4LL;
    goto LABEL_439;
  }
  v94 = 2 * ++pcchLength + 4;
  if ( (unsigned int)(2 * pcchLength) >= 0xFFFFFFFC )
  {
    v94 = dwBytes_4;
    v89 = -1073741675;
    v1291 = -1073741675;
  }
  else
  {
    v89 = v93;
    v1291 = v93;
    dwBytes_4 = 2 * pcchLength + 4;
  }
  if ( v89 < 0 )
    goto LABEL_774;
  v95 = v94 + v92;
  if ( v94 + v92 < v92 || (dwBytes_4 = 8, v95 + 8 < v95) || (dwBytes_4 = 8, v95 + 16 < v95 + 8) )
  {
LABEL_772:
    v89 = -805306219;
    goto LABEL_773;
  }
  v1342 = v95 + 16;
  v96 = v95 + 16;
  v97 = GetProcessHeap();
  v98 = HeapAlloc(v97, 8u, v96);
  if ( !v98 )
  {
    v89 = -1073741801;
LABEL_773:
    v1291 = v89;
    goto LABEL_774;
  }
  v1343 = v98;
  v1516 = 0;
  if ( v98 + 1 < v98 )
  {
LABEL_565:
    v89 = -1073741675;
    goto LABEL_773;
  }
  if ( v98 + 2 > (_DWORD *)((char *)v98 + v1342) )
  {
    v89 = -1073741789;
    goto LABEL_773;
  }
  *v98 = 4;
  v98[1] = v1516;
  v99 = 1;
  v1341 = 1;
  if ( !(_DWORD)v83 )
  {
    v89 = -1073741811;
    v1291 = -1073741811;
    goto LABEL_80;
  }
  if ( !v1343 )
  {
    v405 = RtlUIntAdd(4LL, (unsigned int)v83, &v1459);
    v406 = v1413;
    v89 = v405;
    v1291 = v405;
    if ( v405 >= 0 )
      v406 = v1459;
    v1413 = v406;
    if ( v405 >= 0 )
    {
      v407 = RtlUIntAdd(v1342, v406, &v1342);
      v99 = 1;
      v89 = v407;
      v1291 = v407;
      if ( v407 >= 0 )
      {
        v99 = 2;
        v1341 = 2;
        goto LABEL_81;
      }
    }
LABEL_80:
    if ( v89 < 0 )
      goto LABEL_770;
LABEL_81:
    if ( v87 )
    {
      if ( v1343 )
      {
        v103 = v1343;
        v1 = 0LL;
        v104 = 0;
        if ( v99 )
        {
          v105 = v1412;
          while ( 1 )
          {
            if ( *v103 >= 0xFFFFFFFC )
            {
              v89 = -1073741675;
              v1291 = -1073741675;
            }
            else
            {
              v105 = *v103 + 4;
              v1291 = 0;
              v89 = 0;
              v1412 = v105;
            }
            if ( v89 < 0 )
              break;
            if ( (_DWORD *)((char *)v103 + v105) < v103 )
              goto LABEL_574;
            ++v104;
            v103 = (_DWORD *)((char *)v103 + v105);
            if ( v104 >= v99 )
              goto LABEL_90;
          }
        }
        else
        {
LABEL_90:
          if ( v103 + 1 < v103 )
          {
LABEL_574:
            v78 = v1295;
            v89 = -1073741675;
            v79 = v86;
            v1291 = -1073741675;
            v5 = 4LL;
            goto LABEL_439;
          }
          v89 = 0;
          v1291 = 0;
          if ( (char *)v103 + v87 + 4 > (char *)v1343 + v1342 )
          {
            v78 = v1295;
            v89 = -1073741789;
            v79 = v86;
            v1291 = -1073741789;
            v5 = 4LL;
            goto LABEL_439;
          }
          *v103 = v87;
          memcpy_0(v103 + 1, v86, v87);
          v99 = ++v1341;
        }
        v5 = 4LL;
        goto LABEL_94;
      }
      v5 = 4LL;
      v408 = RtlUIntAdd(4LL, v87, &v1460);
      v409 = v1412;
      v89 = v408;
      v1291 = v408;
      if ( v408 >= 0 )
        v409 = v1460;
      v1412 = v409;
      if ( v408 >= 0 )
      {
        v410 = RtlUIntAdd(v1342, v409, &v1342);
        v99 = v1341;
        v89 = v410;
        v1291 = v410;
        if ( v410 >= 0 )
        {
          v99 = ++v1341;
          v1 = 0LL;
          goto LABEL_95;
        }
      }
    }
    else
    {
      v89 = -1073741811;
      v5 = 4LL;
      v1291 = -1073741811;
    }
    v1 = 0LL;
LABEL_94:
    if ( v89 < 0 )
      goto LABEL_771;
LABEL_95:
    v1577 = v1524;
    if ( v1343 )
    {
      v106 = (size_t)v1343;
      v107 = 0;
      if ( v99 )
      {
        v108 = v1411;
        do
        {
          if ( *(_DWORD *)v106 >= 0xFFFFFFFC )
          {
            v89 = -1073741675;
            v1291 = -1073741675;
          }
          else
          {
            v108 = *(_DWORD *)v106 + 4;
            v1291 = 0;
            v89 = 0;
            v1411 = v108;
          }
          if ( v89 < 0 )
            goto LABEL_771;
          if ( v106 + v108 < v106 )
            goto LABEL_769;
          ++v107;
          v106 += v108;
        }
        while ( v107 < v99 );
      }
      if ( v106 + 4 < v106 )
        goto LABEL_769;
      v109 = (const wchar_t *)((char *)v1343 + v1342);
      v89 = 0;
      v1291 = 0;
      if ( v106 + 12 > (unsigned __int64)v109 )
      {
        v89 = -1073741789;
        goto LABEL_742;
      }
      *(_DWORD *)v106 = 8;
      *(_QWORD *)(v106 + 4) = v1577;
      ++v1341;
    }
    else
    {
      v411 = RtlUIntAdd(4LL, 8LL, &v1461);
      v106 = v1411;
      v89 = v411;
      v1291 = v411;
      if ( v411 >= 0 )
        v106 = v1461;
      v1411 = v106;
      if ( v411 >= 0 )
      {
        v1291 = RtlUIntAdd(v1342, v106, &v1342);
        v89 = v1291;
        if ( v1291 >= 0 )
        {
          ++v1341;
          goto LABEL_107;
        }
      }
    }
    if ( v89 < 0 )
      goto LABEL_771;
LABEL_107:
    if ( StringLengthWorkerW(v109, v106, &v1449) < 0 )
    {
      v1449 = 0LL;
      v89 = -1073741762;
      goto LABEL_742;
    }
    if ( v1449 + 1 < v1449 )
    {
      v1449 = -1LL;
LABEL_769:
      v89 = -1073741675;
      goto LABEL_742;
    }
    v110 = (unsigned int)(2 * ++v1449);
    if ( (_DWORD)v110 )
    {
      if ( !v1343 )
      {
        v412 = RtlUIntAdd(4LL, (unsigned int)v110, &v1462);
        v413 = v1418;
        v89 = v412;
        v1291 = v412;
        if ( v412 >= 0 )
          v413 = v1462;
        v1418 = v413;
        if ( v412 >= 0 )
        {
          v1291 = RtlUIntAdd(v1342, v413, &v1342);
          v89 = v1291;
          if ( v1291 >= 0 )
          {
            ++v1341;
            v89 = 0;
            v1291 = 0;
          }
        }
LABEL_121:
        if ( v89 < 0 )
          goto LABEL_771;
        v1464 = v1383;
        if ( v1343 )
        {
          v114 = 0;
          v115 = v1343;
          if ( v1341 )
          {
            v116 = v1417;
            do
            {
              if ( *v115 >= 0xFFFFFFFC )
              {
                v89 = -1073741675;
                v1291 = -1073741675;
              }
              else
              {
                v116 = *v115 + 4;
                v1291 = 0;
                v89 = 0;
                v1417 = v116;
              }
              if ( v89 < 0 )
                goto LABEL_743;
              if ( (_DWORD *)((char *)v115 + v116) < v115 )
                goto LABEL_769;
              ++v114;
              v115 = (_DWORD *)((char *)v115 + v116);
            }
            while ( v114 < v1341 );
          }
          if ( v115 + 1 < v115 )
            goto LABEL_769;
          v89 = 0;
          v1291 = 0;
          if ( v115 + 2 > (_DWORD *)((char *)v1343 + v1342) )
          {
            v89 = -1073741789;
            goto LABEL_742;
          }
          *v115 = 4;
          v115[1] = v1464;
          ++v1341;
        }
        else
        {
          v414 = RtlUIntAdd(4LL, 4LL, &v1463);
          v415 = v1417;
          v89 = v414;
          v1291 = v414;
          if ( v414 >= 0 )
            v415 = v1463;
          v1417 = v415;
          if ( v414 >= 0 )
          {
            v1291 = RtlUIntAdd(v1342, v415, &v1342);
            v89 = v1291;
            if ( v1291 >= 0 )
            {
              ++v1341;
LABEL_134:
              v1466 = 4;
              if ( v1343 )
              {
                v117 = 0;
                v118 = v1343;
                if ( v1341 )
                {
                  v119 = v1408;
                  do
                  {
                    if ( *v118 >= 0xFFFFFFFC )
                    {
                      v89 = -1073741675;
                      v1291 = -1073741675;
                    }
                    else
                    {
                      v119 = *v118 + 4;
                      v1291 = 0;
                      v89 = 0;
                      v1408 = v119;
                    }
                    if ( v89 < 0 )
                      goto LABEL_743;
                    if ( (_DWORD *)((char *)v118 + v119) < v118 )
                      goto LABEL_769;
                    ++v117;
                    v118 = (_DWORD *)((char *)v118 + v119);
                  }
                  while ( v117 < v1341 );
                }
                if ( v118 + 1 < v118 )
                  goto LABEL_769;
                v89 = 0;
                v1291 = 0;
                if ( v118 + 2 > (_DWORD *)((char *)v1343 + v1342) )
                {
                  v89 = -1073741789;
                  goto LABEL_742;
                }
                *v118 = 4;
                v118[1] = v1466;
                ++v1341;
              }
              else
              {
                v416 = RtlUIntAdd(4LL, 4LL, &v1465);
                v417 = v1408;
                v89 = v416;
                v1291 = v416;
                if ( v416 >= 0 )
                  v417 = v1465;
                v1408 = v417;
                if ( v416 >= 0 )
                {
                  v1291 = RtlUIntAdd(v1342, v417, &v1342);
                  v89 = v1291;
                  if ( v1291 >= 0 )
                  {
                    ++v1341;
                    goto LABEL_146;
                  }
                }
              }
              if ( v89 >= 0 )
              {
LABEL_146:
                v1374 = 8;
                v1399 = 12;
                v1291 = RtlUIntAdd(8LL, 12LL, &v1374);
                v89 = v1291;
                if ( v1291 < 0 )
                  goto LABEL_610;
                v1399 = v120;
                v1291 = RtlUIntAdd(v1374, v120, &v1374);
                v89 = v1291;
                if ( v1291 < 0 )
                  goto LABEL_610;
                v1399 = 8;
                v1291 = RtlUIntAdd(v1374, 8LL, &v1374);
                v89 = v1291;
                if ( v1291 < 0
                  || (v1399 = 8, v1291 = RtlUIntAdd(v1374, 8LL, &v1374), v89 = v1291, v1291 < 0)
                  || (v1399 = 8, v1291 = RtlUIntAdd(v1374, 8LL, &v1374), v89 = v1291, v1291 < 0) )
                {
LABEL_610:
                  v121 = v1376;
                }
                else
                {
                  v121 = v1374;
                }
                LODWORD(v1344) = v121;
                if ( v89 < 0 )
                  goto LABEL_743;
                v1345 = 0LL;
                v1350 = 0LL;
                v1416 = 0;
                v122 = 0;
                v1444 = 0LL;
                v123 = 0;
                v1333 = 0LL;
                v1362 = 0LL;
                dwBytes = 0;
                v1292 = 0LL;
                v1527 = __rdtsc();
                v1389 = 8;
                v124 = RtlUIntAdd(8LL, v1342, &v1389);
                if ( v124 >= 0 )
                {
                  v127 = (v1389 + 7) & 0xFFFFFFF8;
                  if ( v127 >= v1389 )
                  {
                    v1389 = (v1389 + 7) & 0xFFFFFFF8;
                    v128 = v127;
                    v129 = GetProcessHeap();
                    v130 = (char *)HeapAlloc(v129, 8u, v128);
                    v131 = v130;
                    if ( v130 )
                    {
                      v1441 = v130;
                      *(_DWORD *)v130 = v1341;
                      v124 = RtlULongLongAdd(v130, 4LL, &v1441);
                      if ( v124 >= 0 )
                      {
                        v133 = v1441;
                        *(_DWORD *)v1441 = v1342;
                        v124 = RtlULongLongAdd(v133, v132, &v1441);
                        if ( v124 >= 0 )
                        {
                          *(_QWORD *)&v131[v1389 - 8] = v1527;
                          memcpy_0(v1441, v1343, v1342);
                          v122 = v1389;
                          v125 = v131;
                          v1345 = v131;
LABEL_159:
                          v126 = 0LL;
                          goto LABEL_160;
                        }
                      }
                      v418 = GetProcessHeap();
                      HeapFree(v418, 0, v131);
                    }
                    else
                    {
                      v124 = -1073741801;
                    }
                    v125 = 0LL;
                    goto LABEL_159;
                  }
                  v124 = -1073741675;
                }
LABEL_160:
                v89 = v124 | 0x10000000;
                v1291 = v89;
                if ( v89 < 0 )
                  goto LABEL_335;
                v1580 = v126;
                v134 = v126;
                v1581 = (__int64)v126;
                v1533 = v126;
                v1534 = (__int64)v126;
                v1495 = v126;
                v1578 = v126;
                v1401 = (__int64)v126;
                if ( !v125 )
                {
                  v201 = -1073741811;
                  goto LABEL_187;
                }
                v135 = v122;
                v1363 = (void *)v122;
                if ( !v122
                  || (v136 = GetProcessHeap(),
                      v137 = HeapAlloc(v136, 0, v122 + 8LL),
                      v1375 = (__int64)v137,
                      (v138 = v137) == 0LL) )
                {
                  v201 = -1073741823;
LABEL_183:
                  v202 = v1495;
                  if ( v1495 )
                  {
                    v203 = GetProcessHeap();
                    HeapFree(v203, 0, v202);
                    v1495 = 0LL;
                  }
                  if ( v134 )
                  {
                    v433 = (void *)v134[1];
                    if ( v433 )
                    {
                      v434 = GetProcessHeap();
                      HeapFree(v434, 0, v433);
                      v134[1] = 0LL;
                    }
                    v435 = (void *)v134[3];
                    if ( v435 )
                    {
                      v436 = GetProcessHeap();
                      HeapFree(v436, 0, v435);
                      v134[3] = 0LL;
                    }
                    v437 = (void *)v134[5];
                    if ( v437 )
                    {
                      v438 = GetProcessHeap();
                      HeapFree(v438, 0, v437);
                      v134[5] = 0LL;
                    }
                    v439 = GetProcessHeap();
                    HeapFree(v439, 0, v134);
                  }
                  v123 = 0;
LABEL_187:
                  v89 = v201 | 0x10000000;
                  v1291 = v89;
                  if ( v89 < 0 )
                    goto LABEL_334;
                  v204 = (const void **)v1444;
                  v1380 = 4;
                  v205 = RtlUIntAdd(4LL, *(unsigned int *)v1444, &v1380);
                  if ( v205 < 0
                    || (v205 = RtlUIntAdd(v1380, v206, &v1380), v205 < 0)
                    || (v205 = RtlUIntAdd(v1380, *((unsigned int *)v204 + 4), &v1380), v205 < 0)
                    || (v205 = RtlUIntAdd(v1380, v207, &v1380), v205 < 0) )
                  {
                    v209 = v1429;
                  }
                  else
                  {
                    v209 = v1380 + *((_DWORD *)v204 + 8);
                    if ( v209 < v1380 )
                    {
                      v205 = -1073741675;
                      goto LABEL_651;
                    }
                    v205 = v208;
                    v1429 = v1380 + *((_DWORD *)v204 + 8);
                  }
                  if ( v205 >= 0 )
                  {
                    v210 = v209;
                    v211 = GetProcessHeap();
                    v212 = (unsigned __int16 *)HeapAlloc(v211, 8u, v210);
                    v213 = v212;
                    if ( v212 )
                    {
                      v1393 = v212;
                      *(_DWORD *)v212 = *(_DWORD *)v204;
                      v205 = RtlULongLongAdd(v212, 4LL, &v1393);
                      if ( v205 >= 0 )
                      {
                        memcpy_0(v1393, v204[1], *(unsigned int *)v204);
                        v205 = RtlULongLongAdd(v1393, *(unsigned int *)v204, &v1393);
                        if ( v205 >= 0 )
                        {
                          v214 = v1393;
                          *(_DWORD *)v1393 = *((_DWORD *)v204 + 4);
                          v205 = RtlULongLongAdd(v214, 4LL, &v1393);
                          if ( v205 >= 0 )
                          {
                            memcpy_0(v1393, v204[3], *((unsigned int *)v204 + 4));
                            v205 = RtlULongLongAdd(v1393, *((unsigned int *)v204 + 4), &v1393);
                            if ( v205 >= 0 )
                            {
                              v215 = v1393;
                              *(_DWORD *)v1393 = *((_DWORD *)v204 + 8);
                              v205 = RtlULongLongAdd(v215, 4LL, &v1393);
                              if ( v205 >= 0 )
                              {
                                memcpy_0(v1393, v204[5], *((unsigned int *)v204 + 8));
                                v205 = RtlULongLongAdd(v1393, *((unsigned int *)v204 + 8), &v1393);
                                if ( v205 >= 0 )
                                {
                                  v123 = v1429;
                                  v1333 = v213;
                                  goto LABEL_203;
                                }
                              }
                            }
                          }
                        }
                      }
                      v440 = GetProcessHeap();
                      HeapFree(v440, 0, v213);
                    }
                    else
                    {
                      v205 = -1073741801;
                    }
                  }
LABEL_651:
                  v213 = 0LL;
LABEL_203:
                  v89 = v205 | 0x10000000;
                  v1291 = v89;
                  if ( v89 >= 0 )
                  {
                    v1430 = 8;
                    v216 = 0;
                    v1535 = 0LL;
                    v1469 = 0;
                    v1468 = 0;
                    v1536 = 0LL;
                    v217 = RtlUIntAdd(8LL, v121, &v1430);
                    v89 = v217 | 0x10000000;
                    v1291 = v217 | 0x10000000;
                    if ( v217 < 0 )
                    {
LABEL_239:
                      if ( v89 < 0 )
                        goto LABEL_334;
                      v233 = dwBytes;
                      v234 = GetProcessHeap();
                      v235 = (unsigned int *)HeapAlloc(v234, 8u, v233);
                      if ( v235 )
                      {
                        v236 = v235;
                        v1362 = v235;
                        v89 = 0x10000000;
                      }
                      else
                      {
                        v236 = (unsigned int *)v1362;
                        v89 = -805306345;
                      }
                      v1291 = v89;
                      if ( v89 < 0 )
                        goto LABEL_334;
                      if ( !v213 )
                      {
                        v89 = -2147024809;
                        goto LABEL_333;
                      }
                      if ( !v236 )
                      {
                        v89 = -2147024809;
                        goto LABEL_333;
                      }
                      v1583 = v123;
                      v1582[0] = v213;
                      v1582[1] = v236;
                      v1584 = dwBytes;
                      v1585 = 0;
                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                        && (v237 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                      {
                        v238 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v237)(
                                 134LL,
                                 v1582,
                                 32LL,
                                 0LL);
                        v89 = v238 | 0x10000000;
                        v1291 = v238 | 0x10000000;
                        if ( v238 >= 0 )
                        {
                          v239 = v1584;
                          dwBytes = v1584;
                          goto LABEL_249;
                        }
                      }
                      else
                      {
                        v441 = GetLastError();
                        v1291 = v441;
                        v89 = v441;
                        if ( v441 > 0 )
                        {
                          v89 = (unsigned __int16)v441 | 0x80070000;
                          v1291 = v89;
                        }
                        if ( v89 >= 0 )
                        {
                          v239 = dwBytes;
                          v89 = -2147467259;
                          v1291 = -2147467259;
                          goto LABEL_250;
                        }
                      }
                      v239 = dwBytes;
LABEL_249:
                      if ( v89 == -805306333 )
                      {
                        v89 = -2147024774;
                        v1291 = -2147024774;
                        goto LABEL_672;
                      }
LABEL_250:
                      if ( v89 >= 0 )
                      {
                        v1401 = 0LL;
                        if ( v239 < 4 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        v240 = *v236;
                        v241 = (char *)(v236 + 1);
                        if ( v236 + 1 < v236 )
                          goto LABEL_700;
                        if ( v239 - 4 < (unsigned int)v240 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        v242 = (unsigned int *)&v241[v240];
                        if ( &v241[v240] < v241 || (unsigned int)v240 >= 0xFFFFFFFC )
                          goto LABEL_700;
                        if ( v239 - ((_DWORD)v240 + 4) < 4 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        v243 = *v242;
                        v244 = (char *)(v242 + 1);
                        if ( v242 + 1 < v242 )
                          goto LABEL_700;
                        v245 = v240 + 8;
                        if ( (int)v240 + 8 < (unsigned int)(v240 + 4) )
                          goto LABEL_700;
                        if ( v239 - v245 < (unsigned int)v243 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        v246 = (unsigned int *)&v244[v243];
                        if ( &v244[v243] < v244 )
                          goto LABEL_700;
                        v247 = v243 + v245;
                        if ( (unsigned int)v243 + v245 < v245 )
                          goto LABEL_700;
                        if ( v239 - v247 < 4 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        v248 = *v246;
                        v1363 = v246 + 1;
                        if ( v246 + 1 < v246 )
                          goto LABEL_700;
                        v249 = v247 + 4;
                        if ( v247 + 4 < v247 )
                          goto LABEL_700;
                        if ( v239 - v249 < (unsigned int)v248 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        if ( (unsigned int)v248 + v249 < v249 )
                        {
LABEL_700:
                          v260 = -1073741675;
                          goto LABEL_701;
                        }
                        if ( v239 != (_DWORD)v248 + v249 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        if ( (unsigned int)(v240 + v248 + v243) + 12LL != v239 )
                        {
                          v260 = -1073741762;
                          goto LABEL_701;
                        }
                        v250 = GetProcessHeap();
                        v251 = HeapAlloc(v250, 8u, 0x30uLL);
                        v252 = v251;
                        if ( !v251 )
                        {
                          v252 = (_QWORD *)v1401;
                          v260 = -1073741801;
                          goto LABEL_280;
                        }
                        if ( v241 )
                        {
                          *(_DWORD *)v251 = v240;
                          v253 = GetProcessHeap();
                          v254 = HeapAlloc(v253, 8u, (unsigned int)v240);
                          if ( !v254 )
                            goto LABEL_684;
                          v252[1] = v254;
                          memcpy_0(v254, v241, (unsigned int)v240);
                        }
                        else
                        {
                          *(_DWORD *)v251 = 0;
                          v251[1] = 0LL;
                        }
                        if ( v244 )
                        {
                          *((_DWORD *)v252 + 4) = v243;
                          v255 = GetProcessHeap();
                          v256 = HeapAlloc(v255, 8u, v243);
                          if ( !v256 )
                            goto LABEL_684;
                          v252[3] = v256;
                          memcpy_0(v256, v244, v243);
                        }
                        else
                        {
                          *((_DWORD *)v252 + 4) = 0;
                          v252[3] = 0LL;
                        }
                        v257 = v1363;
                        if ( !v1363 )
                        {
                          *((_DWORD *)v252 + 8) = 0;
                          v252[5] = 0LL;
                          goto LABEL_279;
                        }
                        *((_DWORD *)v252 + 8) = v248;
                        v258 = GetProcessHeap();
                        v259 = HeapAlloc(v258, 8u, v248);
                        if ( v259 )
                        {
                          v252[5] = v259;
                          memcpy_0(v259, v257, v248);
LABEL_279:
                          v260 = 0;
LABEL_280:
                          if ( v260 >= 0 )
                          {
                            v1 = (__int64)v252;
                            v1292 = (__int64)v252;
                            goto LABEL_282;
                          }
                          if ( v252 )
                          {
                            v449 = (void *)v252[1];
                            if ( v449 )
                            {
                              v450 = GetProcessHeap();
                              HeapFree(v450, 0, v449);
                              v252[1] = 0LL;
                            }
                            v451 = (void *)v252[3];
                            if ( v451 )
                            {
                              v452 = GetProcessHeap();
                              HeapFree(v452, 0, v451);
                              v252[3] = 0LL;
                            }
                            v453 = (void *)v252[5];
                            if ( v453 )
                            {
                              v454 = GetProcessHeap();
                              HeapFree(v454, 0, v453);
                              v252[5] = 0LL;
                            }
                            v455 = GetProcessHeap();
                            HeapFree(v455, 0, v252);
                          }
LABEL_701:
                          v1 = 0LL;
LABEL_282:
                          v89 = v260 | 0x10000000;
                          v1291 = v89;
                          if ( v89 < 0 )
                            goto LABEL_335;
                          v1443 = 0LL;
                          v1538 = 0LL;
                          if ( !v1 )
                          {
                            v89 = -805306355;
                            v1291 = -805306355;
                            goto LABEL_335;
                          }
                          v261 = *(unsigned __int8 **)(v1 + 8);
                          v1375 = (__int64)v261;
                          if ( !v261 )
                          {
                            v89 = -805306355;
                            v1291 = -805306355;
                            goto LABEL_335;
                          }
                          if ( !*(_DWORD *)v1 )
                          {
                            v89 = -805306355;
                            v1291 = -805306355;
                            goto LABEL_335;
                          }
                          v262 = *(unsigned int *)v1 - 8LL;
                          v1363 = (void *)v262;
                          v263 = GetProcessHeap();
                          v1315 = HeapAlloc(v263, 0, v262);
                          v264 = v1315;
                          if ( v1315 )
                          {
                            v265 = 0;
                            v1655 = 0x7F1137FAB69605ELL;
                            v266 = v261;
                            v267 = v1315;
                            v268 = v262 & 7;
                            if ( (v262 & 7) != 0 )
                            {
                              v1346 = -1;
                              v1351 = 0;
                              v456 = 0;
                              v1353 = 0;
                              v457 = 0;
                              v458 = 0;
                              v459 = 56;
                              do
                              {
                                v460 = *v266;
                                if ( v458 >= 4 )
                                  v456 |= v460 << v459;
                                else
                                  v457 |= v460 << (v459 - 32);
                                ++v458;
                                v459 -= 8;
                                ++v266;
                              }
                              while ( v458 < v268 );
                              v1326 = v457;
                              v1353 = v456;
                              v270 = v457 ^ 0x92F65A5;
                              v461 = v456 ^ 0x699A899C;
                              v1351 = v457 ^ 0x92F65A5;
                              v462 = 0;
                              v1346 = v456 ^ 0x699A899C;
                              if ( (v262 & 7) != 0 )
                              {
                                do
                                {
                                  if ( v462 >= 4 )
                                  {
                                    v461 = __ROL4__(v461, 8);
                                    *v267 = v461;
                                  }
                                  else
                                  {
                                    v270 = __ROL4__(v270, 8);
                                    *v267 = v270;
                                  }
                                  ++v462;
                                  ++v267;
                                }
                                while ( v462 < v268 );
                                v270 = v1351;
                                v461 = v1346;
                              }
                              v463 = v268 - 4;
                              if ( v268 - 4 <= 0 )
                              {
                                v269 = 0;
                                LODWORD(v1354) = 0;
                                v1346 = 0;
                                if ( v463 < 0 )
                                {
                                  v270 = v270 >> (-8 * v463) << (-8 * v463);
                                  v269 = 0;
                                  v1351 = v270;
                                }
                              }
                              else
                              {
                                LODWORD(v1354) = v461 >> (8 * (4 - v463)) << (8 * (4 - v463));
                                v269 = v1354;
                                v1346 = v1354;
                              }
                              v265 = 0;
                              v264 = v1315;
                            }
                            else
                            {
                              v1326 = 0;
                              v1353 = -1;
                              v269 = 0;
                              v1346 = 0;
                              v270 = 0;
                              v1351 = 0;
                            }
                            v271 = v262 >> 3;
                            if ( v262 >> 3 )
                            {
                              v272 = HIDWORD(v1655);
                              v273 = v267 + 7;
                              v274 = WORD1(v1655);
                              v275 = HIWORD(HIDWORD(v1655));
                              v276 = v271;
                              v277 = v266 + 2;
                              v278 = WORD2(v1655);
                              do
                              {
                                v279 = *(v277 - 1);
                                v280 = *(v277 - 2);
                                v281 = v277[2];
                                v277 += 8;
                                v282 = *(v277 - 7) | ((*(v277 - 8) | ((v279 | (v280 << 8)) << 8)) << 8);
                                v283 = v282 ^ v270;
                                v284 = *(v277 - 3) | ((*(v277 - 4) | ((*(v277 - 5) | (v281 << 8)) << 8)) << 8);
                                v285 = v283 ^ v284 ^ v269 ^ v272 ^ 0xAB69605E;
                                v286 = (__ROL4__(v285, 10) + v278 * __ROL4__(v285 + 1419157410, 5)) ^ v283;
                                v287 = (v274 * __ROR4__(v272 + v286, 9) - __ROL4__(v286, 2)) ^ v285;
                                v288 = (24670 * (v287 - v278) - (v287 >> 13)) ^ v286;
                                v289 = (v275 * __ROL4__(v288 ^ v274, 6) - __ROL4__(v288, 2)) ^ v287;
                                v290 = (v272 - (v289 ^ 0xAB69605E)) ^ v288;
                                v291 = (v274 * (v290 ^ v278)) ^ __ROR4__(v290, 6) ^ v289;
                                v292 = (__ROL4__(v291, 2) + 24670 * __ROR4__(v272 + v291, 15)) ^ v290;
                                v293 = (v275 * __ROR4__(v292 + 1419157410, 14) - __ROL4__(v292, 8)) ^ v291;
                                v294 = __ROR4__(v293, 10) ^ (v278 * __ROR4__(v293 ^ 0xAB69605E, 12)) ^ v292;
                                v295 = (v294 >> 10) ^ (v274 * (v294 ^ v275)) ^ v293;
                                v296 = (v275 * (__ROR4__(~v295, 5) + 24670)) ^ v294;
                                v297 = v295 ^ (v296 - v275) ^ 0xAB69605E;
                                v298 = ((v297 >> 2) + v278 * __ROL4__(v297 ^ v275, 2)) ^ v296;
                                v299 = (__ROL4__(v298, 7) + v274 * __ROR4__(v298 - v272, 6)) ^ v297;
                                v300 = (24670 * (v299 ^ v278) + __ROR4__(v299, 9)) ^ v298;
                                v301 = (__ROL4__(v300, 7) + v275 * __ROL4__(v300 ^ v274, 5)) ^ v299;
                                v302 = v300 ^ v301 ^ v272 ^ 0xAB69605E;
                                v303 = (v278 * (__ROR4__(v302, 3) - v274)) ^ v301;
                                v304 = (24670 * __ROR4__(v303 - v272, 1) - __ROR4__(v303, 6)) ^ v302;
                                v305 = (__ROL4__(v304, 14) + v275 * __ROL4__(v304 - 1419157410, 3)) ^ v303;
                                v273 += 8;
                                v306 = (v278 * __ROL4__(v305 - 1419157410, 15) - __ROR4__(v305, 14)) ^ v304;
                                v307 = (v306 >> 3) ^ (v274 * (v306 ^ 0x605E)) ^ v305;
                                v1346 = v1353 ^ v307;
                                v1353 = v284;
                                v308 = v1326 ^ __ROL4__(v307, 2) ^ (24670 * __ROL4__(v307 ^ v272, 4)) ^ v306;
                                v1326 = v282;
                                v1351 = v308;
                                *(v273 - 12) = v308;
                                v1351 = __ROR4__(v1351, 8);
                                *(v273 - 8) = v1346;
                                v1346 = __ROR4__(v1346, 8);
                                *(v273 - 13) = v1351;
                                v1351 = __ROR4__(v1351, 8);
                                *(v273 - 9) = v1346;
                                v1346 = __ROR4__(v1346, 8);
                                *(v273 - 14) = v1351;
                                v1351 = __ROR4__(v1351, 8);
                                *(v273 - 10) = v1346;
                                v1346 = __ROR4__(v1346, 8);
                                *(v273 - 15) = v1351;
                                *(v273 - 11) = v1346;
                                v270 = __ROR4__(v1351, 8);
                                v269 = __ROR4__(v1346, 8);
                                v1351 = v270;
                                v1346 = v269;
                                --v276;
                              }
                              while ( v276 );
                              v77 = v1377;
                              v262 = (SIZE_T)v1363;
                              v265 = 0;
                              v264 = v1315;
                              v261 = (unsigned __int8 *)v1375;
                            }
                            v309 = 0LL;
                            if ( v262 )
                            {
                              if ( v262 >= 0x20 )
                              {
                                v310 = 0LL;
                                v311 = 0LL;
                                do
                                {
                                  v310 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v264[v309]), v310);
                                  v312 = _mm_loadu_si128((const __m128i *)&v264[v309 + 16]);
                                  v309 += 32LL;
                                  v313 = _mm_xor_si128(v312, v311);
                                  v311 = v313;
                                }
                                while ( v309 < (v262 & 0xFFFFFFFFFFFFFFE0uLL) );
                                v314 = _mm_xor_si128(v310, v313);
                                v315 = _mm_xor_si128(v314, _mm_srli_si128(v314, 8));
                                v316 = _mm_xor_si128(v315, _mm_srli_si128(v315, 4));
                                v317 = _mm_xor_si128(v316, _mm_srli_si128(v316, 2));
                                v265 = _mm_cvtsi128_si32(_mm_xor_si128(v317, _mm_srli_si128(v317, 1)));
                              }
                              for ( ; v309 < v262; ++v309 )
                                v265 ^= v264[v309];
                            }
                            if ( v265 == *(_QWORD *)&v261[v262] )
                            {
                              v1 = v1292;
                              v89 = 0x10000000;
                              v1291 = 0x10000000;
                              v318 = v264;
                              v1538 = v262;
                              v1350 = v264;
                              v1443 = 0LL;
                              v1416 = v262;
                              goto LABEL_302;
                            }
                            operator delete(v264);
                            v1 = v1292;
                          }
                          v464 = v1443;
                          v89 = -805306367;
                          v1291 = -805306367;
                          if ( v1443 )
                          {
                            v465 = GetProcessHeap();
                            HeapFree(v465, 0, v464);
                            v1443 = 0LL;
                            v318 = 0LL;
                          }
                          else
                          {
                            v318 = v1350;
                          }
                          LODWORD(v262) = v1416;
LABEL_302:
                          if ( v89 >= 0 )
                          {
                            if ( (unsigned int)v262 >= 4 )
                            {
                              v1316 = *v318;
                              if ( v318 + 1 < v318 )
                                goto LABEL_732;
                              if ( (unsigned int)(v262 - 4) < 4 )
                              {
                                v326 = -1073741762;
                                goto LABEL_332;
                              }
                              v319 = (unsigned int)v318[1];
                              v320 = (char *)(v318 + 2);
                              if ( v318 + 2 < v318 + 1 )
                                goto LABEL_732;
                              if ( (int)v262 - 8 < (unsigned int)v319 )
                              {
                                v326 = -1073741762;
                                goto LABEL_332;
                              }
                              if ( (unsigned int)v319 >= 0xFFFFFFF8 )
                                goto LABEL_732;
                              v321 = (unsigned __int64)&v320[v319];
                              if ( (char *)v318 + (unsigned int)v262 >= &v320[v319]
                                && (unsigned __int64)(unsigned int)v262 + -(__int64)v319 - 8 < 8 )
                              {
                                v322 = 0LL;
                                v323 = 0;
                                if ( v318 == (_DWORD *)-8LL )
                                  goto LABEL_324;
                                v324 = (char *)(v318 + 2);
                                if ( v321 >= (unsigned __int64)v320 )
                                {
                                  if ( (unsigned __int64)v320 < v321 )
                                  {
                                    v325 = v1472;
                                    while ( v324 + 4 >= v324 )
                                    {
                                      if ( (unsigned __int64)(v324 + 4) > v321 )
                                        goto LABEL_730;
                                      if ( *(_DWORD *)v324 >= 0xFFFFFFFC )
                                      {
                                        v326 = -1073741675;
                                      }
                                      else
                                      {
                                        v325 = *(_DWORD *)v324 + 4;
                                        v1472 = v325;
                                        v326 = 0;
                                      }
                                      if ( v326 < 0 )
                                        goto LABEL_332;
                                      v327 = &v324[v325];
                                      if ( v327 < v324 )
                                        goto LABEL_732;
                                      v324 += v325;
                                      if ( (unsigned __int64)v327 > v321 )
                                        goto LABEL_730;
                                      ++v323;
                                      if ( (unsigned __int64)v327 >= v321 )
                                        goto LABEL_323;
                                    }
                                    goto LABEL_732;
                                  }
LABEL_323:
                                  if ( v324 == (char *)v321 )
                                  {
LABEL_324:
                                    if ( (_DWORD)v319
                                      && (v328 = GetProcessHeap(), (v322 = HeapAlloc(v328, 8u, v319)) == 0LL) )
                                    {
                                      v326 = -1073741801;
                                    }
                                    else
                                    {
                                      if ( v320 )
                                        memcpy_0(v322, v320, v319);
                                      v1396 = v322;
                                      v326 = 0;
                                      v1395 = __PAIR64__(v319, v323);
                                    }
                                    if ( v326 >= 0 && v1316 != (_DWORD)v1395 )
                                      v326 = -1073741762;
                                    goto LABEL_332;
                                  }
LABEL_730:
                                  v326 = -1073741811;
LABEL_332:
                                  v89 = v326 | 0x10000000;
LABEL_333:
                                  v1291 = v89;
                                  goto LABEL_334;
                                }
LABEL_732:
                                v326 = -1073741675;
                                goto LABEL_332;
                              }
                            }
                            v326 = -1073741762;
                            goto LABEL_332;
                          }
LABEL_335:
                          v329 = v1345;
                          if ( v1345 )
                          {
                            v330 = GetProcessHeap();
                            HeapFree(v330, 0, v329);
                          }
                          v331 = v1444;
                          if ( v1444 )
                          {
                            v332 = (void *)*((_QWORD *)v1444 + 1);
                            if ( v332 )
                            {
                              v333 = GetProcessHeap();
                              HeapFree(v333, 0, v332);
                              v331[1] = 0LL;
                            }
                            v334 = (void *)v331[3];
                            if ( v334 )
                            {
                              v335 = GetProcessHeap();
                              HeapFree(v335, 0, v334);
                              v331[3] = 0LL;
                            }
                            v336 = (void *)v331[5];
                            if ( v336 )
                            {
                              v337 = GetProcessHeap();
                              HeapFree(v337, 0, v336);
                              v331[5] = 0LL;
                            }
                            v338 = GetProcessHeap();
                            HeapFree(v338, 0, v331);
                            v1444 = 0LL;
                          }
                          if ( v1333 )
                          {
                            v339 = GetProcessHeap();
                            HeapFree(v339, 0, v1333);
                          }
                          v340 = v1362;
                          if ( v1362 )
                          {
                            v341 = GetProcessHeap();
                            HeapFree(v341, 0, v340);
                          }
                          if ( v1 )
                          {
                            v342 = *(void **)(v1 + 8);
                            if ( v342 )
                            {
                              v343 = GetProcessHeap();
                              HeapFree(v343, 0, v342);
                              *(_QWORD *)(v1 + 8) = 0LL;
                            }
                            v344 = *(void **)(v1 + 24);
                            if ( v344 )
                            {
                              v345 = GetProcessHeap();
                              HeapFree(v345, 0, v344);
                              *(_QWORD *)(v1 + 24) = 0LL;
                            }
                            v346 = *(void **)(v1 + 40);
                            if ( v346 )
                            {
                              v347 = GetProcessHeap();
                              HeapFree(v347, 0, v346);
                              *(_QWORD *)(v1 + 40) = 0LL;
                            }
                            v348 = GetProcessHeap();
                            HeapFree(v348, 0, (LPVOID)v1);
                          }
                          v349 = v1350;
                          if ( v1350 )
                          {
                            v350 = GetProcessHeap();
                            HeapFree(v350, 0, v349);
                          }
                          if ( v89 < 0 )
                          {
                            v5 = 4LL;
                            goto LABEL_767;
                          }
                          if ( (_DWORD)v1395 )
                          {
                            v5 = 4LL;
                            if ( v1396 )
                            {
                              v1496 = (int *)v1396;
                              v1 = 0LL;
                              v1291 = RtlULongLongAdd(v1396, 4LL, &v1496);
                              v89 = v1291;
                              if ( v1291 < 0 )
                              {
                                v351 = v1473;
                                v352 = v1539;
                              }
                              else
                              {
                                v1473 = v351;
                                if ( v351 )
                                {
                                  v352 = v1496;
                                }
                                else
                                {
                                  v352 = 0LL;
                                  v1496 = 0LL;
                                }
                                v1539 = v352;
                              }
                              if ( v1291 >= 0 )
                              {
                                if ( v351 != 4 )
                                {
                                  v89 = -1073741789;
                                  goto LABEL_742;
                                }
                                v353 = *v352;
                                v1385 = v353;
LABEL_369:
                                if ( v89 >= 0 )
                                {
                                  if ( v353 == -805306333 )
                                  {
                                    v1385 = -2147024774;
                                  }
                                  else if ( v353 != -2147024774 )
                                  {
                                    v1291 = v353;
                                    v89 = v353;
                                    if ( v353 < 0 )
                                      goto LABEL_767;
                                  }
                                  if ( (_DWORD)v1395 != 6 )
                                  {
LABEL_740:
                                    v89 = -1073425151;
                                    goto LABEL_742;
                                  }
                                  if ( v1396 )
                                  {
                                    v354 = v1396;
                                    v1404 = v1396;
                                    do
                                    {
                                      v1291 = RtlULongLongAdd(v354, 4LL, &v1404);
                                      v89 = v1291;
                                      if ( v1291 < 0 )
                                        goto LABEL_746;
                                      v1291 = RtlULongLongAdd(v1404, v355, &v1404);
                                      v89 = v1291;
                                      if ( v1291 < 0 )
                                        goto LABEL_746;
                                      v354 = v1404;
                                    }
                                    while ( v356 == -1 );
                                    v1291 = RtlULongLongAdd(v1404, 4LL, &v1404);
                                    v89 = v1291;
                                    if ( v1291 < 0 )
                                    {
LABEL_746:
                                      v357 = v1474;
                                      v358 = v1540;
                                      goto LABEL_383;
                                    }
                                    v1474 = v357;
                                    if ( v357 )
                                    {
                                      v358 = v1404;
                                    }
                                    else
                                    {
                                      v358 = 0LL;
                                      v1404 = 0LL;
                                    }
                                    v1540 = v358;
LABEL_383:
                                    if ( v89 < 0 )
                                      goto LABEL_767;
                                    if ( v357 != 8 )
                                    {
                                      v89 = -1073741789;
                                      goto LABEL_742;
                                    }
                                    v1545 = *v358;
                                  }
                                  else
                                  {
                                    v89 = -1073741811;
                                    v1291 = -1073741811;
                                  }
                                  if ( v89 >= 0 )
                                  {
                                    if ( v1396 )
                                    {
                                      v359 = (unsigned int *)v1396;
                                      v360 = 0;
                                      v1445 = v1396;
                                      do
                                      {
                                        v361 = v359 + 1;
                                        if ( v359 + 1 < v359
                                          || (v359 = (unsigned int *)((char *)v361 + *v359), v359 < v361) )
                                        {
                                          v89 = -1073741675;
                                          goto LABEL_753;
                                        }
                                        ++v360;
                                        v1445 = v359;
                                      }
                                      while ( v360 < 2 );
                                      v1291 = RtlULongLongAdd(v359, 4LL, &v1445);
                                      v89 = v1291;
                                      if ( v1291 < 0 )
                                      {
                                        v362 = v1475;
                                        v363 = v1541;
                                      }
                                      else
                                      {
                                        v1475 = v362;
                                        if ( v362 )
                                        {
                                          v363 = v1445;
                                        }
                                        else
                                        {
                                          v363 = 0LL;
                                          v1445 = 0LL;
                                        }
                                        v1541 = v363;
                                      }
                                      if ( v1291 >= 0 )
                                      {
                                        if ( v362 == 4 )
                                        {
                                          v1480 = *v363;
                                          goto LABEL_399;
                                        }
                                        v89 = -1073741789;
                                        goto LABEL_742;
                                      }
                                      goto LABEL_767;
                                    }
                                    v89 = -1073741811;
LABEL_753:
                                    v1291 = v89;
LABEL_399:
                                    if ( v89 >= 0 )
                                    {
                                      if ( v1396 )
                                      {
                                        v364 = (unsigned int *)v1396;
                                        v365 = 0;
                                        v1446 = v1396;
                                        while ( 1 )
                                        {
                                          v366 = v364 + 1;
                                          if ( v364 + 1 < v364 )
                                            goto LABEL_769;
                                          v364 = (unsigned int *)((char *)v366 + *v364);
                                          if ( v364 < v366 )
                                            goto LABEL_769;
                                          ++v365;
                                          v1446 = v364;
                                          if ( v365 >= 3 )
                                          {
                                            v367 = RtlULongLongAdd(v364, 4LL, &v1446);
                                            v1291 = v367;
                                            v89 = v367;
                                            if ( v367 < 0 )
                                            {
                                              v368 = v1476;
                                              v369 = v1542;
                                            }
                                            else
                                            {
                                              v1476 = v368;
                                              if ( v368 )
                                              {
                                                v369 = v1446;
                                              }
                                              else
                                              {
                                                v369 = 0LL;
                                                v1446 = 0LL;
                                              }
                                              v1542 = v369;
                                            }
                                            if ( v367 < 0 )
                                              goto LABEL_767;
                                            v370 = (unsigned int *)v1396;
                                            v371 = 0;
                                            v1447 = (unsigned int *)v1396;
                                            do
                                            {
                                              v372 = v370 + 1;
                                              if ( v370 + 1 < v370
                                                || (v370 = (unsigned int *)((char *)v372 + *v370), v370 < v372) )
                                              {
                                                v89 = -1073741675;
                                                v1291 = -1073741675;
                                                goto LABEL_421;
                                              }
                                              ++v371;
                                              v1447 = v370;
                                            }
                                            while ( v371 < 4 );
                                            v1291 = RtlULongLongAdd(v370, 4LL, &v1447);
                                            v89 = v1291;
                                            if ( v1291 < 0 )
                                            {
                                              v373 = v1477;
                                              v374 = v1543;
                                            }
                                            else
                                            {
                                              v1477 = v373;
                                              if ( v373 )
                                              {
                                                v374 = v1447;
                                              }
                                              else
                                              {
                                                v374 = 0LL;
                                                v1447 = 0LL;
                                              }
                                              v1543 = v374;
                                            }
                                            if ( v1291 < 0 )
                                              goto LABEL_767;
                                            if ( v373 != 4 )
                                            {
                                              v89 = -1073741789;
                                              goto LABEL_742;
                                            }
                                            v1479 = *v374;
LABEL_421:
                                            if ( v89 < 0 )
                                              goto LABEL_767;
                                            v375 = (unsigned int *)v1396;
                                            v376 = 0;
                                            v1448 = (int *)v1396;
                                            do
                                            {
                                              v377 = v375 + 1;
                                              if ( v375 + 1 < v375
                                                || (v375 = (unsigned int *)((char *)v377 + *v375), v375 < v377) )
                                              {
                                                v89 = -1073741675;
                                                v1291 = -1073741675;
                                                goto LABEL_433;
                                              }
                                              ++v376;
                                              v1448 = (int *)v375;
                                            }
                                            while ( v376 < 5 );
                                            v1291 = RtlULongLongAdd(v375, 4LL, &v1448);
                                            v89 = v1291;
                                            if ( v1291 < 0 )
                                            {
                                              v378 = v1478;
                                              v379 = v1544;
                                            }
                                            else
                                            {
                                              v1478 = v378;
                                              if ( v378 )
                                              {
                                                v379 = v1448;
                                              }
                                              else
                                              {
                                                v379 = 0LL;
                                                v1448 = 0LL;
                                              }
                                              v1544 = v379;
                                            }
                                            if ( v1291 < 0 )
                                              goto LABEL_767;
                                            if ( v378 != 4 )
                                            {
                                              v89 = -1073741789;
                                              goto LABEL_742;
                                            }
                                            v1431 = *v379;
LABEL_433:
                                            if ( v89 < 0 )
                                              goto LABEL_767;
                                            if ( v1524 == v1545 )
                                            {
                                              v1383 = v1431;
                                              v1421 = v1480;
                                              v1415 = v1479;
                                              if ( v1479 > 4 )
                                              {
                                                v89 = -2147024774;
                                                goto LABEL_742;
                                              }
                                              if ( v368 > 4 )
                                              {
                                                v89 = -2147024774;
                                                goto LABEL_742;
                                              }
                                              memcpy_0(v1521, v369, v368);
                                              v78 = v1295;
                                              v79 = v1303;
                                              if ( v1385 )
                                              {
                                                v89 = v1385;
                                                v1291 = v1385;
                                              }
                                              goto LABEL_439;
                                            }
                                            goto LABEL_740;
                                          }
                                        }
                                      }
                                      v89 = -1073741811;
LABEL_742:
                                      v1291 = v89;
                                      goto LABEL_743;
                                    }
                                  }
                                }
LABEL_767:
                                v78 = v1295;
                                v79 = v1303;
                                goto LABEL_776;
                              }
                            }
                            else
                            {
                              v89 = -1073741811;
                              v1 = 0LL;
                              v1291 = -1073741811;
                            }
                            v353 = v1385;
                            goto LABEL_369;
                          }
                          v78 = v1295;
                          v89 = -1073425151;
                          v79 = v1303;
                          v1291 = -1073425151;
LABEL_775:
                          v5 = 4LL;
                          goto LABEL_776;
                        }
LABEL_684:
                        v442 = (void *)v252[1];
                        if ( v442 )
                        {
                          v443 = GetProcessHeap();
                          HeapFree(v443, 0, v442);
                          v252[1] = 0LL;
                        }
                        v444 = (void *)v252[3];
                        if ( v444 )
                        {
                          v445 = GetProcessHeap();
                          HeapFree(v445, 0, v444);
                          v252[3] = 0LL;
                        }
                        v446 = (void *)v252[5];
                        if ( v446 )
                        {
                          v447 = GetProcessHeap();
                          HeapFree(v447, 0, v446);
                          v252[5] = 0LL;
                        }
                        v448 = GetProcessHeap();
                        HeapFree(v448, 0, v252);
                        v252 = (_QWORD *)v1401;
                        v260 = -1073741801;
                        goto LABEL_280;
                      }
LABEL_672:
                      v1 = 0LL;
                      goto LABEL_335;
                    }
                    v219 = (v1430 + 7) & 0xFFFFFFF8;
                    if ( v219 < v1430 )
                    {
                      v89 = -1073741675;
                      v1291 = -1073741675;
                    }
                    else
                    {
                      if ( v219 + 8 < v219 )
                      {
                        v1471 = -1;
LABEL_661:
                        v89 = -1073741675;
                        goto LABEL_662;
                      }
                      v1471 = v219 + 8;
                      v89 = v218;
                      v1291 = v218;
                      v1467 = v219 + 8;
                    }
                    if ( v89 >= 0 )
                    {
                      if ( v1343 )
                      {
                        if ( v1341 <= 1 )
                        {
                          v89 = -1073741811;
                        }
                        else
                        {
                          v220 = (unsigned int *)v1343;
                          v1403 = (unsigned int *)v1343;
                          while ( 1 )
                          {
                            v221 = *v220;
                            v1291 = RtlULongLongAdd(v220, 4LL, &v1403);
                            v89 = v1291;
                            if ( v1291 < 0 )
                              break;
                            v1291 = RtlULongLongAdd(v1403, v221, &v1403);
                            v89 = v1291;
                            if ( v1291 < 0 )
                              break;
                            v220 = v1403;
                            if ( v222 != -1 )
                            {
                              v1291 = RtlULongLongAdd(v1403, 4LL, &v1403);
                              v89 = v1291;
                              if ( v1291 >= 0 )
                              {
                                v1468 = v223;
                                if ( v223 )
                                {
                                  v224 = v1403;
                                }
                                else
                                {
                                  v224 = 0LL;
                                  v1403 = 0LL;
                                }
                                v1535 = v224;
                              }
                              break;
                            }
                          }
                          if ( v89 < 0 )
                            goto LABEL_334;
                          if ( v1341 > 2 )
                          {
                            v225 = (unsigned int *)v1343;
                            v1442 = v1343;
                            v226 = 0;
                            while ( 1 )
                            {
                              v227 = v225 + 1;
                              if ( v225 + 1 < v225 )
                                goto LABEL_661;
                              v225 = (unsigned int *)((char *)v227 + *v225);
                              if ( v225 < v227 )
                                goto LABEL_661;
                              ++v226;
                              v1442 = v225;
                              if ( v226 >= 2 )
                              {
                                v1291 = RtlULongLongAdd(v225, 4LL, &v1442);
                                v89 = v1291;
                                if ( v1291 >= 0 )
                                {
                                  v216 = v228;
                                  v1469 = v228;
                                  if ( v228 )
                                  {
                                    v230 = v1442;
                                  }
                                  else
                                  {
                                    v230 = 0LL;
                                    v1442 = 0LL;
                                  }
                                  v1536 = v230;
                                }
                                if ( v1291 < 0 )
                                  goto LABEL_334;
                                v1371 = 4;
                                v1291 = RtlUIntAdd(4LL, v229, &v1371);
                                v89 = v1291;
                                if ( v1291 < 0 )
                                  goto LABEL_658;
                                v1291 = RtlUIntAdd(v1371, 4LL, &v1371);
                                v89 = v1291;
                                if ( v1291 < 0
                                  || (v1291 = RtlUIntAdd(v1371, v231, &v1371), v89 = v1291, v1291 < 0)
                                  || (v1291 = RtlUIntAdd(v1371, 4LL, &v1371), v89 = v1291, v1291 < 0)
                                  || (v1291 = RtlUIntAdd(v1371, v216, &v1371), v89 = v1291, v1291 < 0) )
                                {
LABEL_658:
                                  v232 = v1470;
                                }
                                else
                                {
                                  v232 = v1371;
                                  v1470 = v1371;
                                }
                                if ( v89 < 0 )
                                  goto LABEL_334;
                                if ( v232 <= 0x400000 )
                                {
                                  dwBytes = v232;
                                  goto LABEL_239;
                                }
                                v89 = -2147418113;
                                goto LABEL_333;
                              }
                            }
                          }
                          v89 = -1073741811;
                        }
                      }
                      else
                      {
                        v89 = -1073741811;
                      }
LABEL_662:
                      v1291 = v89;
                      goto LABEL_239;
                    }
                  }
LABEL_334:
                  v1 = v1292;
                  goto LABEL_335;
                }
                LOBYTE(v137) = 0;
                v139 = 0;
                LODWORD(v1354) = (_DWORD)v137;
                v140 = 0LL;
                if ( v122 >= 0x20uLL )
                {
                  v141 = 0LL;
                  v142 = 0LL;
                  do
                  {
                    v141 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1345 + v140)), v141);
                    v143 = _mm_loadu_si128((const __m128i *)((char *)v1345 + v140 + 16));
                    v140 += 32LL;
                    v144 = _mm_xor_si128(v143, v142);
                    v142 = v144;
                  }
                  while ( v140 < (v122 & 0xFFFFFFE0) );
                  v145 = _mm_xor_si128(v144, v141);
                  v146 = _mm_xor_si128(v145, _mm_srli_si128(v145, 8));
                  v147 = _mm_xor_si128(v146, _mm_srli_si128(v146, 4));
                  v148 = _mm_xor_si128(v147, _mm_srli_si128(v147, 2));
                  LODWORD(v137) = _mm_cvtsi128_si32(_mm_xor_si128(v148, _mm_srli_si128(v148, 1)));
                  LODWORD(v1354) = (_DWORD)v137;
                }
                if ( v140 < v122 )
                {
                  do
                    LOBYTE(v137) = *((_BYTE *)v1345 + v140++) ^ (unsigned __int8)v137;
                  while ( v140 < v122 );
                  LODWORD(v1354) = (_DWORD)v137;
                }
                v149 = (unsigned __int8 *)v1345;
                v1654 = 0xC81ECB17B1B54A58uLL;
                v150 = -1;
                v1348 = -1;
                v1353 = 0;
                v151 = 0;
                v1355 = 0;
                v152 = v138;
                v1325 = 0;
                v153 = v135 & 7;
                if ( (v135 & 7) != 0 )
                {
                  v1353 = 0;
                  v419 = 0;
                  v420 = 0;
                  v421 = 56;
                  do
                  {
                    v422 = *v149;
                    if ( v139 >= 4 )
                      v419 |= v422 << v421;
                    else
                      v420 |= v422 << (v421 - 32);
                    ++v139;
                    v421 -= 8;
                    ++v149;
                  }
                  while ( v139 < v153 );
                  v1325 = v420;
                  v1353 = v419;
                  v151 = v420 ^ 0xB17A307A;
                  v423 = v419 ^ 0x42F6B18D;
                  v1355 = v420 ^ 0xB17A307A;
                  v1348 = v419 ^ 0x42F6B18D;
                  v424 = 0;
                  if ( (v135 & 7) != 0 )
                  {
                    do
                    {
                      if ( v424 >= 4 )
                      {
                        v423 = __ROL4__(v423, 8);
                        *v152 = v423;
                      }
                      else
                      {
                        v151 = __ROL4__(v151, 8);
                        *v152 = v151;
                      }
                      ++v424;
                      ++v152;
                    }
                    while ( v424 < v153 );
                    v151 = v1355;
                    v423 = v1348;
                  }
                  v425 = v153 - 4;
                  if ( v153 - 4 <= 0 )
                  {
                    v1348 = 0;
                    v150 = 0;
                    if ( v425 < 0 )
                    {
                      v151 = v151 >> (-8 * v425) << (-8 * v425);
                      v1355 = v151;
                    }
                  }
                  else
                  {
                    v150 = v423 >> (8 * (4 - v425)) << (8 * (4 - v425));
                    v1348 = v150;
                  }
                }
                if ( v135 >> 3 )
                {
                  v154 = HIDWORD(v1654);
                  v155 = v152 + 7;
                  v156 = WORD1(v1654);
                  v157 = HIWORD(HIDWORD(v1654));
                  v158 = v135 >> 3;
                  v159 = v149 + 2;
                  v160 = WORD2(v1654);
                  do
                  {
                    v161 = *(v159 - 1);
                    v162 = *(v159 - 2);
                    v163 = v159[2];
                    v159 += 8;
                    v164 = *(v159 - 7) | ((*(v159 - 8) | ((v161 | (v162 << 8)) << 8)) << 8);
                    v165 = *(v159 - 3) | ((*(v159 - 4) | ((*(v159 - 5) | (v163 << 8)) << 8)) << 8);
                    v166 = v165 ^ v150;
                    v167 = v154 ^ v151 ^ v164 ^ (v166 - 19032);
                    v168 = (__ROR4__(v167, 7) + v156 * __ROR4__(v151 ^ v164 ^ (v166 - 19032), 15)) ^ v166;
                    v169 = (v160 * __ROR4__(v168 - 1313519016, 9) - __ROR4__(v168, 10)) ^ v167;
                    v170 = (__ROL4__(v169, 5) + v157 * __ROL4__(v160 ^ v169, 4)) ^ v168;
                    v171 = (v154 - (v170 ^ 0xB1B54A58)) ^ v169;
                    v172 = (v156 * (v171 - 19032) - (v171 >> 6)) ^ v170;
                    v173 = (19032 * (v160 ^ __ROR4__(v172, 15))) ^ v171;
                    v174 = (v160 * (v157 + __ROR4__(~v173, 3))) ^ v172;
                    v175 = (v174 - v154 - 19032) ^ v173;
                    v176 = (v156 * (v157 ^ v175)) ^ __ROR4__(v175, 10) ^ v174;
                    v177 = __ROR4__(v176, 3) ^ (v160 * __ROL4__(v176 ^ 0x4A58, 6)) ^ v175;
                    v178 = (19032 * (__ROR4__(v177, 15) - v157)) ^ v176;
                    v179 = (v178 >> 15) ^ (19032 * __ROL4__(v178 - v160, 3)) ^ (v178 >> 1) ^ (19032 * (v157 ^ v178)) ^ v177;
                    v180 = (v156 * (v179 - v160) - (v179 >> 13)) ^ v178;
                    v181 = __ROR4__(v180, 11) ^ (v160 * __ROR4__(-1313519016 - v180, 9)) ^ v179;
                    v182 = (v181 - v157 + 1313519016) ^ v180;
                    v183 = (19032 * (v156 ^ v182) - __ROR4__(v182, 7)) ^ v181;
                    v184 = (v156 * __ROL4__(v157 ^ v183, 4) - __ROR4__(v183, 16)) ^ v182;
                    v185 = (__ROR4__(v184, 4) + v160 * __ROR4__(-1313519016 - v184, 10)) ^ v183;
                    v186 = __ROR4__(v185, 9) ^ (v157 * __ROR4__(v185 + 1313519016, 4)) ^ v184;
                    v155 += 8;
                    v187 = (19032 * __ROL4__(v154 ^ v186, 8) - __ROL4__(v186, 2)) ^ v185;
                    v188 = (v156 * __ROR4__(v154 - v187, 11) - __ROR4__(v187, 12)) ^ v186;
                    v189 = v1353 ^ v154;
                    v190 = (v188 >> 8) ^ (v160 * (v188 ^ v156)) ^ v187;
                    v1353 = v165;
                    v1355 = v1325 ^ v190;
                    v1348 = v190 ^ v188 ^ v189 ^ 0xB1B54A58;
                    *(v155 - 12) = v1325 ^ v190;
                    v1355 = __ROR4__(v1355, 8);
                    *(v155 - 8) = v1348;
                    v1348 = __ROR4__(v1348, 8);
                    *(v155 - 13) = v1355;
                    v1355 = __ROR4__(v1355, 8);
                    *(v155 - 9) = v1348;
                    v1348 = __ROR4__(v1348, 8);
                    *(v155 - 14) = v1355;
                    v1355 = __ROR4__(v1355, 8);
                    *(v155 - 10) = v1348;
                    v1348 = __ROR4__(v1348, 8);
                    *(v155 - 15) = v1355;
                    *(v155 - 11) = v1348;
                    v151 = __ROR4__(v1355, 8);
                    v150 = __ROR4__(v1348, 8);
                    v1355 = v151;
                    v1348 = v150;
                    v1325 = v164;
                    --v158;
                  }
                  while ( v158 );
                  v77 = v1377;
                  v135 = (unsigned __int64)v1363;
                  v138 = (_BYTE *)v1375;
                }
                v191 = v135 + 8;
                *(_QWORD *)&v138[v135] = (unsigned __int8)v1354;
                v1495 = v138;
                v1580 = &qword_180189340;
                v1578 = (__int64 *)(v135 + 8);
                v1581 = 8LL;
                v1533 = (__int64 *)xmmword_1801892A0;
                v1534 = 160LL;
                v192 = GetProcessHeap();
                v193 = HeapAlloc(v192, 8u, 0x30uLL);
                v194 = v193;
                if ( v193 )
                {
                  *v193 = v191;
                  v195 = GetProcessHeap();
                  v196 = HeapAlloc(v195, 8u, v191);
                  if ( v196 )
                  {
                    *((_QWORD *)v194 + 1) = v196;
                    memcpy_0(v196, v138, v191);
                    v194[4] = 160;
                    v197 = GetProcessHeap();
                    v198 = HeapAlloc(v197, 8u, 0xA0uLL);
                    if ( v198 )
                    {
                      *((_QWORD *)v194 + 3) = v198;
                      *v198 = xmmword_1801892A0[0];
                      v198[1] = xmmword_1801892A0[1];
                      v198[2] = xmmword_1801892A0[2];
                      v198[3] = xmmword_1801892A0[3];
                      v198[4] = xmmword_1801892A0[4];
                      v198[5] = xmmword_1801892A0[5];
                      v198[6] = xmmword_1801892A0[6];
                      v198[7] = xmmword_1801892A0[7];
                      v198[8] = xmmword_1801892A0[8];
                      v198[9] = xmmword_1801892A0[9];
                      v194[8] = 8;
                      v199 = GetProcessHeap();
                      v200 = HeapAlloc(v199, 8u, 8uLL);
                      if ( v200 )
                      {
                        *((_QWORD *)v194 + 5) = v200;
                        v201 = 0;
                        *v200 = qword_180189340;
                        v134 = v194;
                        goto LABEL_181;
                      }
                    }
                  }
                  v426 = (void *)*((_QWORD *)v194 + 1);
                  if ( v426 )
                  {
                    v427 = GetProcessHeap();
                    HeapFree(v427, 0, v426);
                    *((_QWORD *)v194 + 1) = 0LL;
                  }
                  v428 = (void *)*((_QWORD *)v194 + 3);
                  if ( v428 )
                  {
                    v429 = GetProcessHeap();
                    HeapFree(v429, 0, v428);
                    *((_QWORD *)v194 + 3) = 0LL;
                  }
                  v430 = (void *)*((_QWORD *)v194 + 5);
                  if ( v430 )
                  {
                    v431 = GetProcessHeap();
                    HeapFree(v431, 0, v430);
                    *((_QWORD *)v194 + 5) = 0LL;
                  }
                  v432 = GetProcessHeap();
                  HeapFree(v432, 0, v194);
                }
                v134 = (_QWORD *)v1401;
                v201 = -1073741801;
LABEL_181:
                v121 = (unsigned int)v1344;
                if ( v201 >= 0 )
                {
                  v1444 = v134;
                  v134 = 0LL;
                }
                goto LABEL_183;
              }
LABEL_743:
              v78 = v1295;
              v79 = v1303;
              goto LABEL_439;
            }
          }
        }
        if ( v89 < 0 )
          goto LABEL_743;
        goto LABEL_134;
      }
      v111 = 0;
      v112 = v1343;
      if ( v1341 )
      {
        v113 = v1418;
        do
        {
          if ( *v112 >= 0xFFFFFFFC )
          {
            v89 = -1073741675;
            v1291 = -1073741675;
          }
          else
          {
            v113 = *v112 + 4;
            v1291 = 0;
            v89 = 0;
            v1418 = v113;
          }
          if ( v89 < 0 )
            goto LABEL_771;
          if ( (_DWORD *)((char *)v112 + v113) < v112 )
            goto LABEL_592;
          ++v111;
          v112 = (_DWORD *)((char *)v112 + v113);
        }
        while ( v111 < v1341 );
      }
      if ( v112 + 1 < v112 )
      {
LABEL_592:
        v89 = -1073741675;
      }
      else
      {
        v1291 = 0;
        v89 = 0;
        if ( (char *)v112 + v110 + 4 <= (char *)v1343 + v1342 )
        {
          *v112 = v110;
          memcpy_0(v112 + 1, L"Kernel-OneCore-DeviceFamilyID", (unsigned int)v110);
          ++v1341;
          goto LABEL_121;
        }
        v89 = -1073741789;
      }
    }
    else
    {
      v89 = -1073741811;
    }
    v1291 = v89;
    goto LABEL_121;
  }
  v100 = v1343;
  v101 = 0;
  v102 = v1413;
  while ( 1 )
  {
    if ( *v100 >= 0xFFFFFFFC )
    {
      v89 = -1073741675;
      v1291 = -1073741675;
    }
    else
    {
      v102 = *v100 + 4;
      v1291 = 0;
      v89 = 0;
      v1413 = v102;
    }
    if ( v89 < 0 )
      break;
    if ( (_DWORD *)((char *)v100 + v102) < v100 )
      goto LABEL_565;
    v100 = (_DWORD *)((char *)v100 + v102);
    if ( ++v101 )
    {
      if ( v100 + 1 < v100 )
        goto LABEL_565;
      v1291 = 0;
      v89 = 0;
      if ( (char *)v100 + v83 + 4 <= (char *)v1343 + v1342 )
      {
        *v100 = v83;
        memcpy_0(v100 + 1, v82, v83);
        v99 = 2;
        v1341 = 2;
        goto LABEL_80;
      }
      v89 = -1073741789;
      goto LABEL_773;
    }
  }
LABEL_770:
  v1 = 0LL;
LABEL_771:
  v78 = v1295;
  v5 = 4LL;
  v79 = v1303;
LABEL_439:
  v380 = v1343;
  v1342 = 0;
  if ( v1343 )
  {
    v381 = GetProcessHeap();
    HeapFree(v381, 0, v380);
    v1343 = 0LL;
  }
  v382 = v1396;
  v1395 = 0LL;
  if ( v1396 )
  {
    v383 = GetProcessHeap();
    HeapFree(v383, 0, v382);
    v1396 = 0LL;
  }
  if ( v78 )
  {
    v384 = GetProcessHeap();
    HeapFree(v384, 0, v78);
  }
  if ( v79 )
  {
    v385 = GetProcessHeap();
    HeapFree(v385, 0, v79);
  }
  if ( v89 < 0 )
    goto LABEL_550;
  if ( !v1383 )
  {
    v386 = (HMODULE *)&unk_18018B120;
    goto LABEL_450;
  }
  v1557 = 0LL;
  dword_180189F40 = v1383;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
  {
LABEL_782:
    v386 = (HMODULE *)&unk_18018B120;
    goto LABEL_783;
  }
  v1293 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880F8[0])(0LL, 0LL, 1027LL);
  v467 = v1293;
  if ( !v1293 )
  {
    GetLastError();
    goto LABEL_782;
  }
  v491 = off_180188098[0]();
  v492 = dword_180189F40;
  qword_18018A010 = v491;
  v1307 = dword_180189F40;
  memset_0(&v1597, 0, 0x70uLL);
  v1345 = 0LL;
  v1397 = 0LL;
  v1398 = 0LL;
  v1432 = 1;
  v1391 = 0LL;
  memset_0(v1660, 0, 0x2CuLL);
  v1401 = 0LL;
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v493 = dword_18018A018;
  if ( dword_18018A018 )
  {
LABEL_861:
    v386 = (HMODULE *)&unk_18018B120;
    dword_18018A018 = v493 + 1;
    goto LABEL_862;
  }
  LODWORD(v1354) = 0;
  LODWORD(v1344) = 0;
  v1497 = 0LL;
  v1546 = 0LL;
  n = operator new(0x338uLL);
  if ( !n )
  {
LABEL_859:
    v532 = -1073741702;
    goto LABEL_849;
  }
  v495 = -1;
  v1361 = 0;
  v496 = n + 7;
  v497 = 0;
  v1367 = 0;
  v498 = 0;
  v499 = (char *)&unk_1801320F2;
  v500 = 103LL;
  do
  {
    v501 = (unsigned __int8)*(v499 - 1);
    v502 = (unsigned __int8)*(v499 - 2);
    v503 = (unsigned __int8)v499[2];
    v499 += 8;
    v504 = (unsigned __int8)*(v499 - 7) | (((unsigned __int8)*(v499 - 8) | ((v501 | (v502 << 8)) << 8)) << 8);
    v505 = v504 ^ v498;
    v506 = (unsigned __int8)*(v499 - 3) | (((unsigned __int8)*(v499 - 4) | (((unsigned __int8)*(v499 - 5) | (v503 << 8)) << 8)) << 8);
    v507 = v505 ^ v506 ^ v1 ^ 0xAC987321;
    v508 = (__ROL4__(v507, 10) + 4991 * __ROL4__(v507 + 1419157410, 5)) ^ v505;
    v509 = (43881 * __ROR4__(v508 + 133239679, 9) - __ROL4__(v508, 2)) ^ v507;
    v510 = (24670 * v509 - (v509 >> 13) - 123127970) ^ v508;
    v511 = (2033 * __ROL4__(v510 ^ 0xAB69, 6) - __ROL4__(v510, 2)) ^ v509;
    v512 = (133239679 - (v511 ^ 0xAB69605E)) ^ v510;
    v513 = (43881 * (v512 ^ 0x137F)) ^ __ROR4__(v512, 6) ^ v511;
    v514 = (__ROL4__(v513, 2) + 24670 * __ROR4__(v513 + 133239679, 15)) ^ v512;
    v515 = (2033 * __ROR4__(v514 + 1419157410, 14) - __ROL4__(v514, 8)) ^ v513;
    v516 = __ROR4__(v515, 10) ^ (4991 * __ROR4__(v515 ^ 0xAB69605E, 12)) ^ v514;
    v517 = (v516 >> 10) ^ (43881 * (v516 ^ 0x7F1)) ^ v515;
    v518 = (2033 * (__ROR4__(~v517, 5) + 24670)) ^ v516;
    v519 = v517 ^ (v518 - 2033) ^ 0xAB69605E;
    v520 = ((v519 >> 2) + 4991 * __ROL4__(v517 ^ (v518 - 2033) ^ 0xAB6967AF, 2)) ^ v518;
    v521 = (__ROL4__(v520, 7) + 43881 * __ROR4__(v520 - 133239679, 6)) ^ v519;
    v522 = (24670 * (v521 ^ 0x137F) + __ROR4__(v521, 9)) ^ v520;
    v523 = (__ROL4__(v522, 7) + 2033 * __ROL4__(v522 ^ 0xAB69, 5)) ^ v521;
    v524 = v522 ^ v523 ^ 0xAC987321;
    v525 = (4991 * (__ROR4__(v524, 3) - 43881)) ^ v523;
    v526 = (24670 * __ROR4__(v525 - 133239679, 1) - __ROR4__(v525, 6)) ^ v524;
    v527 = (__ROL4__(v526, 14) + 2033 * __ROL4__(v526 - 1419157410, 3)) ^ v525;
    v528 = (4991 * __ROL4__(v527 - 1419157410, 15) - __ROR4__(v527, 14)) ^ v526;
    v496 += 8;
    v529 = (v528 >> 3) ^ (43881 * (v528 ^ 0x605E)) ^ v527;
    v1361 = v495 ^ v529;
    v495 = v506;
    v530 = v497 ^ __ROL4__(v529, 2) ^ (24670 * __ROL4__(v529 ^ 0x7F1137F, 4));
    v497 = v504;
    v1367 = v530 ^ v528;
    *(v496 - 12) = v530 ^ v528;
    v1367 = __ROR4__(v1367, 8);
    *(v496 - 8) = v1361;
    v1361 = __ROR4__(v1361, 8);
    *(v496 - 13) = v1367;
    v1367 = __ROR4__(v1367, 8);
    *(v496 - 9) = v1361;
    v1361 = __ROR4__(v1361, 8);
    *(v496 - 14) = v1367;
    v1367 = __ROR4__(v1367, 8);
    *(v496 - 10) = v1361;
    v1361 = __ROR4__(v1361, 8);
    *(v496 - 15) = v1367;
    *(v496 - 11) = v1361;
    v498 = __ROR4__(v1367, 8);
    LODWORD(v1) = __ROR4__(v1361, 8);
    v1367 = v498;
    v1361 = v1;
    --v500;
  }
  while ( v500 );
  v492 = v1307;
  LODWORD(v1) = 0;
  v89 = v1291;
  v531 = 0LL;
  v532 = 0;
  v533 = 0LL;
  v534 = 0LL;
  do
  {
    v533 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&n[v531]), v533);
    v535 = _mm_loadu_si128((const __m128i *)&n[v531 + 16]);
    v531 += 32LL;
    v536 = _mm_xor_si128(v535, v534);
    v534 = v536;
  }
  while ( v531 < 0x320 );
  v537 = _mm_xor_si128(v533, v536);
  v538 = _mm_xor_si128(v537, _mm_srli_si128(v537, 8));
  v539 = _mm_xor_si128(v538, _mm_srli_si128(v538, 4));
  v540 = _mm_xor_si128(v539, _mm_srli_si128(v539, 2));
  for ( m = _mm_cvtsi128_si32(_mm_xor_si128(v540, _mm_srli_si128(v540, 1))); v531 < 0x338; ++v531 )
    m ^= n[v531];
  if ( m != 64LL )
  {
    operator delete(n);
    v467 = v1293;
    goto LABEL_859;
  }
  v1497 = n;
  v1546 = 824LL;
  n[823] = 0;
  memset_0(&unk_18018B120, 0, 0x60uLL);
  if ( *n )
  {
    while ( 1 )
    {
      v542 = (const WCHAR *)n;
      v543 = -1LL;
      do
        v60 = *(_WORD *)&n[2 * v543++ + 2] == 0;
      while ( !v60 );
      v544 = &n[2 * v543];
      v545 = (char *)&unk_18018B120 + 24 * (unsigned int)v1344;
      if ( !GetModuleHandleExW(0, v542, (HMODULE *)v545) )
        break;
      v532 = 0;
      if ( **(_WORD **)v545 == 23117 )
      {
        v546 = *(int *)(*(_QWORD *)v545 + 60LL);
        if ( (unsigned int)v546 < 0x10000000 )
        {
          v547 = *(_QWORD *)v545 + v546;
          if ( v547 >= *(_QWORD *)v545 )
          {
            if ( *(_DWORD *)v547 == 17744 )
            {
              if ( ((*(_WORD *)(v547 + 24) - 267) & 0xFEFF) != 0 )
              {
                v532 = -1073741811;
              }
              else
              {
                *(_QWORD *)(v545 + 12) = *(_QWORD *)(v547 + 136);
                *((_DWORD *)v545 + 2) = *(_DWORD *)(v547 + 80);
              }
            }
            else
            {
              v532 = -1073741701;
            }
          }
          else
          {
            v532 = -1073741701;
          }
        }
        else
        {
          v532 = -1073741701;
        }
      }
      else
      {
        v532 = -1073741701;
      }
      v548 = *(_DWORD *)(v544 + 2);
      v549 = 0;
      for ( n = v544 + 6; v549 < v548; ++v549 )
      {
        v550 = n;
        v551 = -1LL;
        do
          ++v551;
        while ( n[v551] );
        n += v551 + 1;
        if ( v532 >= 0 )
        {
          v552 = GetProcAddress(*(HMODULE *)v545, v550);
          if ( !v552 )
            goto LABEL_847;
          off_180188000[(unsigned int)v1354] = v552;
        }
        LODWORD(v1354) = v1354 + 1;
      }
      LODWORD(v1344) = (_DWORD)v1344 + 1;
      if ( !*n )
        goto LABEL_847;
    }
    v532 = -1073741702;
LABEL_847:
    LODWORD(v1) = 0;
  }
  v467 = v1293;
LABEL_849:
  if ( v1497 )
  {
    v553 = GetProcessHeap();
    HeapFree(v553, 0, v1497);
  }
  if ( v532 >= 0 )
  {
    v493 = dword_18018A018;
    goto LABEL_861;
  }
  v554 = (HMODULE *)&unk_18018B120;
  v555 = 4LL;
  do
  {
    if ( *v554 )
      FreeLibrary(*v554);
    v554 += 3;
    --v555;
  }
  while ( v555 );
  v386 = (HMODULE *)&unk_18018B120;
  memset_0(&unk_18018B120, 0, 0x60uLL);
  memcpy_0(off_180188000, off_180123520, 0x170uLL);
LABEL_862:
  v1327 = 0;
  LODWORD(v1377) = 0;
  _InterlockedExchange(&dword_18018B1A8, 0);
  v1687 = 0;
  v1528 = 0LL;
  v1529 = 0LL;
  v1530 = 0LL;
  v1457 = 0LL;
  v1458 = 0LL;
  v1688 = 0;
  v1500 = 0LL;
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v556 = dword_18018A018;
  if ( dword_18018A018 )
    goto LABEL_910;
  LODWORD(v1354) = 0;
  v557 = 0;
  LODWORD(v1344) = 0;
  v1498 = 0LL;
  v1547 = 0LL;
  v558 = operator new(0x338uLL);
  jj = v558;
  if ( !v558 )
  {
LABEL_908:
    v557 = -1073741702;
    goto LABEL_898;
  }
  v560 = 0;
  v1360 = 0;
  v561 = 0;
  v1366 = 0;
  v562 = 0;
  v563 = (char *)&unk_1801320F2;
  v564 = v558 + 7;
  v565 = -1;
  v566 = 103LL;
  do
  {
    v567 = (unsigned __int8)*(v563 - 1);
    v568 = (unsigned __int8)*(v563 - 2);
    v569 = (unsigned __int8)v563[2];
    v563 += 8;
    v570 = (unsigned __int8)*(v563 - 7) | (((unsigned __int8)*(v563 - 8) | ((v567 | (v568 << 8)) << 8)) << 8);
    v571 = v570 ^ v562;
    v572 = (unsigned __int8)*(v563 - 3) | (((unsigned __int8)*(v563 - 4) | (((unsigned __int8)*(v563 - 5) | (v569 << 8)) << 8)) << 8);
    v573 = v571 ^ v572 ^ v561 ^ 0xAC987321;
    v574 = (__ROL4__(v573, 10) + 4991 * __ROL4__(v573 + 1419157410, 5)) ^ v571;
    v575 = (43881 * __ROR4__(v574 + 133239679, 9) - __ROL4__(v574, 2)) ^ v573;
    v576 = (24670 * v575 - (v575 >> 13) - 123127970) ^ v574;
    v577 = (2033 * __ROL4__(v576 ^ 0xAB69, 6) - __ROL4__(v576, 2)) ^ v575;
    v578 = (133239679 - (v577 ^ 0xAB69605E)) ^ v576;
    v579 = (43881 * (v578 ^ 0x137F)) ^ __ROR4__(v578, 6) ^ v577;
    v580 = (__ROL4__(v579, 2) + 24670 * __ROR4__(v579 + 133239679, 15)) ^ v578;
    v581 = (2033 * __ROR4__(v580 + 1419157410, 14) - __ROL4__(v580, 8)) ^ v579;
    v582 = __ROR4__(v581, 10) ^ (4991 * __ROR4__(v581 ^ 0xAB69605E, 12)) ^ v580;
    v583 = v581 ^ (v582 >> 10) ^ (43881 * (v582 ^ 0x7F1));
    v584 = (2033 * (__ROR4__(~v583, 5) + 24670)) ^ v582;
    v585 = v583 ^ (v584 - 2033) ^ 0xAB69605E;
    v586 = ((v585 >> 2) + 4991 * __ROL4__(v583 ^ (v584 - 2033) ^ 0xAB6967AF, 2)) ^ v584;
    v587 = (__ROL4__(v586, 7) + 43881 * __ROR4__(v586 - 133239679, 6)) ^ v585;
    v588 = (24670 * (v587 ^ 0x137F) + __ROR4__(v587, 9)) ^ v586;
    v589 = (__ROL4__(v588, 7) + 2033 * __ROL4__(v588 ^ 0xAB69, 5)) ^ v587;
    v590 = v588 ^ v589 ^ 0xAC987321;
    v591 = (4991 * (__ROR4__(v590, 3) - 43881)) ^ v589;
    v592 = (24670 * __ROR4__(v591 - 133239679, 1) - __ROR4__(v591, 6)) ^ v590;
    v593 = (__ROL4__(v592, 14) + 2033 * __ROL4__(v592 - 1419157410, 3)) ^ v591;
    v594 = (4991 * __ROL4__(v593 - 1419157410, 15) - __ROR4__(v593, 14)) ^ v592;
    v564 += 8;
    v595 = (v594 >> 3) ^ (43881 * (v594 ^ 0x605E)) ^ v593;
    v1360 = v565 ^ v595;
    v565 = v572;
    v596 = v560 ^ __ROL4__(v595, 2) ^ (24670 * __ROL4__(v595 ^ 0x7F1137F, 4));
    v560 = v570;
    v1366 = v596 ^ v594;
    *(v564 - 12) = v596 ^ v594;
    v1366 = __ROR4__(v1366, 8);
    *(v564 - 8) = v1360;
    v1360 = __ROR4__(v1360, 8);
    *(v564 - 13) = v1366;
    v1366 = __ROR4__(v1366, 8);
    *(v564 - 9) = v1360;
    v1360 = __ROR4__(v1360, 8);
    *(v564 - 14) = v1366;
    v1366 = __ROR4__(v1366, 8);
    *(v564 - 10) = v1360;
    v1360 = __ROR4__(v1360, 8);
    *(v564 - 15) = v1366;
    *(v564 - 11) = v1360;
    v562 = __ROR4__(v1366, 8);
    v561 = __ROR4__(v1360, 8);
    v1366 = v562;
    v1360 = v561;
    --v566;
  }
  while ( v566 );
  v492 = v1307;
  LODWORD(v1) = 0;
  v89 = v1291;
  v597 = 0LL;
  v598 = 0LL;
  v599 = 0LL;
  do
  {
    v598 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&jj[v597]), v598);
    v600 = _mm_loadu_si128((const __m128i *)&jj[v597 + 16]);
    v597 += 32LL;
    v601 = _mm_xor_si128(v600, v599);
    v599 = v601;
  }
  while ( v597 < 0x320 );
  v602 = _mm_xor_si128(v598, v601);
  v603 = _mm_xor_si128(v602, _mm_srli_si128(v602, 8));
  v604 = _mm_xor_si128(v603, _mm_srli_si128(v603, 4));
  v605 = _mm_xor_si128(v604, _mm_srli_si128(v604, 2));
  for ( ii = _mm_cvtsi128_si32(_mm_xor_si128(v605, _mm_srli_si128(v605, 1))); v597 < 0x338; ++v597 )
    ii ^= jj[v597];
  if ( ii != 64LL )
  {
    operator delete(jj);
    v467 = v1293;
    goto LABEL_908;
  }
  v1498 = jj;
  v1547 = 824LL;
  jj[823] = 0;
  memset_0(&unk_18018B120, 0, 0x60uLL);
  if ( *jj )
  {
    while ( 1 )
    {
      v607 = (const WCHAR *)jj;
      v608 = -1LL;
      do
        v60 = *(_WORD *)&jj[2 * v608++ + 2] == 0;
      while ( !v60 );
      v609 = &jj[2 * v608];
      v610 = (char *)&unk_18018B120 + 24 * (unsigned int)v1344;
      if ( !GetModuleHandleExW(0, v607, (HMODULE *)v610) )
        break;
      v557 = 0;
      if ( **(_WORD **)v610 == 23117 )
      {
        v611 = *(int *)(*(_QWORD *)v610 + 60LL);
        if ( (unsigned int)v611 < 0x10000000 )
        {
          v612 = *(_QWORD *)v610 + v611;
          if ( v612 >= *(_QWORD *)v610 )
          {
            if ( *(_DWORD *)v612 == 17744 )
            {
              if ( ((*(_WORD *)(v612 + 24) - 267) & 0xFEFF) != 0 )
              {
                v557 = -1073741811;
              }
              else
              {
                *(_QWORD *)(v610 + 12) = *(_QWORD *)(v612 + 136);
                *((_DWORD *)v610 + 2) = *(_DWORD *)(v612 + 80);
              }
            }
            else
            {
              v557 = -1073741701;
            }
          }
          else
          {
            v557 = -1073741701;
          }
        }
        else
        {
          v557 = -1073741701;
        }
      }
      else
      {
        v557 = -1073741701;
      }
      v613 = *(_DWORD *)(v609 + 2);
      v614 = 0;
      for ( jj = v609 + 6; v614 < v613; ++v614 )
      {
        v615 = jj;
        v616 = -1LL;
        do
          ++v616;
        while ( jj[v616] );
        jj += v616 + 1;
        if ( v557 >= 0 )
        {
          v617 = GetProcAddress(*(HMODULE *)v610, v615);
          if ( !v617 )
            goto LABEL_896;
          off_180188000[(unsigned int)v1354] = v617;
        }
        LODWORD(v1354) = v1354 + 1;
      }
      LODWORD(v1344) = (_DWORD)v1344 + 1;
      if ( !*jj )
        goto LABEL_896;
    }
    v557 = -1073741702;
LABEL_896:
    LODWORD(v1) = 0;
  }
  v467 = v1293;
LABEL_898:
  if ( v1498 )
  {
    v618 = GetProcessHeap();
    HeapFree(v618, 0, v1498);
  }
  v386 = (HMODULE *)&unk_18018B120;
  if ( v557 >= 0 )
  {
    v556 = dword_18018A018;
LABEL_910:
    dword_18018A018 = v556 + 1;
    goto LABEL_911;
  }
  v619 = 4LL;
  do
  {
    if ( *v386 )
      FreeLibrary(*v386);
    v386 += 3;
    --v619;
  }
  while ( v619 );
  v386 = (HMODULE *)&unk_18018B120;
  memset_0(&unk_18018B120, 0, 0x60uLL);
  memcpy_0(off_180188000, off_180123520, 0x170uLL);
LABEL_911:
  _InterlockedExchange(&dword_18018B1A8, 0);
  memset_0(&v1597, 0, 0x70uLL);
  v1397 = 0LL;
  v620 = v492 & 0xF;
  v1331 = v620;
  LOWORD(v1687) = (v492 >> 4) & 0xF;
  v1688 = (v492 >> 12) & 0xF;
  HIWORD(v1687) = (v492 >> 8) & 0xF;
  v1297 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880F8[0])(0LL, 0LL, 1027LL);
  v1353 = 0xFFFFFF;
  if ( !v1297 )
  {
    v621 = GetLastError();
    v622 = v621;
    if ( v621 > 0 )
      v622 = (unsigned __int16)v621 | 0x80070000;
    if ( v622 >= 0 )
    {
      v622 = -2147467259;
      goto LABEL_1128;
    }
    goto LABEL_1129;
  }
  v1452 = 0LL;
  v623 = 0LL;
  v1525 = 0LL;
  v1526 = 0LL;
  v1451 = 0LL;
  v622 = 0;
  v1499 = 0LL;
  v1450 = 0LL;
  v1407 = 0;
  if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1801880A0[0])(
         8LL,
         &v1392,
         0LL,
         &v1407) )
  {
    v625 = operator new(2LL * v1407);
    SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1499, v625);
    v626 = v1499;
    if ( v1499 )
    {
      v627 = operator new(4LL * (v1392 + 1));
      SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1450, v627);
      v628 = v1450;
      if ( v1450 )
      {
        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1801880A0[0])(
               8LL,
               &v1392,
               v626,
               &v1407) )
        {
          v630 = v628;
          v631 = 0;
          if ( v1392 )
          {
            do
            {
              *v630 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1801880B0[0])(v626, 0LL);
              v632 = -1LL;
              do
                v60 = *(_WORD *)(v626 + 2 * v632++ + 2) == 0;
              while ( !v60 );
              ++v630;
              v626 += 2 * v632 + 2;
              ++v631;
            }
            while ( v631 < v1392 );
            v89 = v1291;
          }
          v467 = v1293;
          *v630 = 1033;
          v623 = v628;
          v1450 = 0LL;
          v1307 = v1392 + 1;
          v1526 = v628;
        }
        else
        {
          v629 = GetLastError();
          v622 = v629;
          if ( v629 > 0 )
            v622 = (unsigned __int16)v629 | 0x80070000;
          if ( v622 >= 0 )
            v622 = -2147467259;
        }
      }
      else
      {
        v622 = -2147024882;
      }
    }
    else
    {
      v622 = -2147024882;
    }
  }
  else
  {
    v624 = GetLastError();
    v622 = v624;
    if ( v624 > 0 )
      v622 = (unsigned __int16)v624 | 0x80070000;
    if ( v622 >= 0 )
      v622 = -2147467259;
  }
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1450);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1499);
  if ( v622 < 0 )
  {
    v643 = v1528;
    v647 = v1530;
    v1334 = v1529;
    v1304 = v1528;
  }
  else
  {
    v633 = 0;
    LODWORD(v1354) = 0;
    v634 = 0;
    if ( v1307 )
    {
      v635 = 0LL;
      while ( 2 )
      {
        v636 = 0;
        v637 = dword_180156120;
        do
        {
          if ( v623[v635] == *v637 )
          {
            v633 = v636;
            LODWORD(v1354) = v636;
            goto LABEL_945;
          }
          ++v636;
          ++v637;
        }
        while ( v636 < 0x26 );
        ++v634;
        ++v635;
        if ( v634 < v1307 )
          continue;
        break;
      }
    }
LABEL_945:
    v638 = v633;
    LODWORD(v1344) = 0;
    if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1801880A8[0])(dword_180156120[v633], v1689, 85LL)
      && ((int (__fastcall *)(_BYTE *, __int64, char *))off_180188090[0])(v1689, 88LL, v1676) > 0 )
    {
      LODWORD(v1344) = (v1677 >> 27) & 1;
    }
    v639 = L"Segoe UI Light";
    v640 = 19LL;
    v641 = v1686;
    do
    {
      *v641 = (unsigned __int16 *)v639;
      v642 = -1LL;
      do
        v60 = v639[++v642] == 0;
      while ( !v60 );
      ++v641;
      v639 += v642 + 1;
      --v640;
    }
    while ( v640 );
    v643 = v1686[byte_18013FA20[3 * v638]];
    v644 = byte_18013FA20[3 * v638 + 1];
    v1304 = v643;
    v1528 = v643;
    v645 = v1686[v644];
    v646 = byte_18013FA20[3 * v638 + 2];
    v1334 = v645;
    v1529 = v645;
    v647 = (char *)v1686[v646];
    v1317 = v647;
    v1530 = v647;
    v622 = 0;
    v648 = (char *)operator new(0x1C90uLL);
    v649 = (unsigned __int16 *)v648;
    if ( !v648 )
    {
      v467 = v1293;
      v622 = -2147024882;
      goto LABEL_1007;
    }
    v650 = 0;
    v1359 = 0;
    v651 = 0;
    v1365 = 0;
    v652 = 0;
    v653 = v648 + 7;
    v654 = 914LL;
    v655 = (char *)&unk_180154482;
    v656 = -1;
    do
    {
      v657 = (unsigned __int8)*(v655 - 1);
      v658 = (unsigned __int8)*(v655 - 2);
      v659 = (unsigned __int8)v655[2];
      v655 += 8;
      v660 = (unsigned __int8)*(v655 - 7) | (((unsigned __int8)*(v655 - 8) | ((v657 | (v658 << 8)) << 8)) << 8);
      v661 = v660 ^ v652;
      v662 = (unsigned __int8)*(v655 - 3) | (((unsigned __int8)*(v655 - 4) | (((unsigned __int8)*(v655 - 5) | (v659 << 8)) << 8)) << 8);
      v663 = v661 ^ v662 ^ v651 ^ 0xAC987321;
      v664 = (__ROL4__(v663, 10) + 4991 * __ROL4__(v663 + 1419157410, 5)) ^ v661;
      v665 = (43881 * __ROR4__(v664 + 133239679, 9) - __ROL4__(v664, 2)) ^ v663;
      v666 = (24670 * v665 - (v665 >> 13) - 123127970) ^ v664;
      v667 = (2033 * __ROL4__(v666 ^ 0xAB69, 6) - __ROL4__(v666, 2)) ^ v665;
      v668 = (133239679 - (v667 ^ 0xAB69605E)) ^ v666;
      v669 = (43881 * (v668 ^ 0x137F)) ^ __ROR4__(v668, 6) ^ v667;
      v670 = (__ROL4__(v669, 2) + 24670 * __ROR4__(v669 + 133239679, 15)) ^ v668;
      v671 = (2033 * __ROR4__(v670 + 1419157410, 14) - __ROL4__(v670, 8)) ^ v669;
      v672 = __ROR4__(v671, 10) ^ (4991 * __ROR4__(v671 ^ 0xAB69605E, 12)) ^ v670;
      v673 = v671 ^ (v672 >> 10) ^ (43881 * (v672 ^ 0x7F1));
      v674 = (2033 * (__ROR4__(~v673, 5) + 24670)) ^ v672;
      v675 = v673 ^ (v674 - 2033) ^ 0xAB69605E;
      v676 = ((v675 >> 2) + 4991 * __ROL4__(v673 ^ (v674 - 2033) ^ 0xAB6967AF, 2)) ^ v674;
      v677 = (__ROL4__(v676, 7) + 43881 * __ROR4__(v676 - 133239679, 6)) ^ v675;
      v678 = (24670 * (v677 ^ 0x137F) + __ROR4__(v677, 9)) ^ v676;
      v679 = (__ROL4__(v678, 7) + 2033 * __ROL4__(v678 ^ 0xAB69, 5)) ^ v677;
      v680 = v679 ^ v678 ^ 0xAC987321;
      v681 = (4991 * (__ROR4__(v680, 3) - 43881)) ^ v679;
      v682 = (24670 * __ROR4__(v681 - 133239679, 1) - __ROR4__(v681, 6)) ^ v680;
      v683 = (__ROL4__(v682, 14) + 2033 * __ROL4__(v682 - 1419157410, 3)) ^ v681;
      v684 = (4991 * __ROL4__(v683 - 1419157410, 15) - __ROR4__(v683, 14)) ^ v682;
      v653 += 8;
      v685 = (v684 >> 3) ^ (43881 * (v684 ^ 0x605E)) ^ v683;
      v1359 = v656 ^ v685;
      v656 = v662;
      v686 = v650 ^ __ROL4__(v685, 2) ^ (24670 * __ROL4__(v685 ^ 0x7F1137F, 4));
      v650 = v660;
      v1365 = v686 ^ v684;
      *(v653 - 12) = v686 ^ v684;
      v1365 = __ROR4__(v1365, 8);
      *(v653 - 8) = v1359;
      v1359 = __ROR4__(v1359, 8);
      *(v653 - 13) = v1365;
      v1365 = __ROR4__(v1365, 8);
      *(v653 - 9) = v1359;
      v1359 = __ROR4__(v1359, 8);
      *(v653 - 14) = v1365;
      v1365 = __ROR4__(v1365, 8);
      *(v653 - 10) = v1359;
      v1359 = __ROR4__(v1359, 8);
      *(v653 - 15) = v1365;
      *(v653 - 11) = v1359;
      v652 = __ROR4__(v1365, 8);
      v651 = __ROR4__(v1359, 8);
      v1365 = v652;
      v1359 = v651;
      --v654;
    }
    while ( v654 );
    v89 = v1291;
    v687 = 0LL;
    v688 = 0LL;
    v689 = 0LL;
    do
    {
      v688 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v649 + v687)), v688);
      v690 = _mm_loadu_si128((const __m128i *)((char *)v649 + v687 + 16));
      v687 += 32LL;
      v691 = _mm_xor_si128(v690, v689);
      v689 = v691;
    }
    while ( v687 < 0x1C80 );
    v692 = _mm_xor_si128(v691, v688);
    v693 = _mm_xor_si128(v692, _mm_srli_si128(v692, 8));
    v694 = _mm_xor_si128(v693, _mm_srli_si128(v693, 4));
    v695 = _mm_xor_si128(v694, _mm_srli_si128(v694, 2));
    for ( kk = _mm_cvtsi128_si32(_mm_xor_si128(v695, _mm_srli_si128(v695, 1))); v687 < 0x1C90; ++v687 )
      kk ^= *((_BYTE *)v649 + v687);
    if ( kk == 127LL )
    {
      v1452 = v649;
      v1525 = 7312LL;
    }
    else
    {
      v622 = -1073425151;
      operator delete(v649);
    }
    if ( v622 >= 0 )
    {
      v697 = v1452;
      v698 = v1685;
      v699 = v1354;
      v700 = 6LL;
      do
      {
        for ( mm = 0; mm < 0x26; ++mm )
        {
          if ( v699 == mm )
            *v698 = v697;
          v702 = -1LL;
          do
            ++v702;
          while ( *((_BYTE *)v697 + v702) );
          v697 = (unsigned __int16 *)((char *)v697 + v702 + 1);
        }
        ++v698;
        --v700;
      }
      while ( v700 );
      v703 = operator new(0x18uLL);
      SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1451, v703);
      v704 = v1451;
      if ( !v1451 )
      {
        v622 = -2147024882;
        goto LABEL_989;
      }
      v705 = &v1687;
      *v1451 = 0LL;
      v706 = 0;
      v704[1] = 0LL;
      v707 = v704;
      v704[2] = 0LL;
      v1308 = 0;
      while ( 2 )
      {
        v708 = &unk_1801561B8;
        v709 = 0LL;
        while ( *(_WORD *)v705 != *v708 )
        {
          v709 = (unsigned int)(v709 + 1);
          ++v708;
          if ( (unsigned int)v709 >= 6 )
            goto LABEL_987;
        }
        v710 = v1685[v709];
        v711 = -1LL;
        do
          v60 = *((_BYTE *)v710 + ++v711) == 0;
        while ( !v60 );
        v712 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int16 *, _QWORD, _QWORD, _DWORD))off_1801880C0[0])(
                 65001LL,
                 0LL,
                 v710,
                 (unsigned int)(v711 + 1),
                 0LL,
                 0);
        v713 = v712;
        if ( v712 )
        {
          v714 = operator new(2LL * v712);
          *v707 = v714;
          if ( !v714 )
          {
            v622 = -2147024882;
            goto LABEL_999;
          }
          v715 = -1LL;
          do
            v60 = *((_BYTE *)v710 + ++v715) == 0;
          while ( !v60 );
          if ( ((unsigned int (__fastcall *)(__int64, _QWORD, unsigned __int16 *, _QWORD, LPVOID, int))off_1801880C0[0])(
                 65001LL,
                 0LL,
                 v710,
                 (unsigned int)(v715 + 1),
                 v714,
                 v713) )
          {
            v706 = v1308;
LABEL_987:
            ++v706;
            v705 = (int *)((char *)v705 + 2);
            ++v707;
            v1308 = v706;
            if ( v706 < 3 )
              continue;
            v1597 = (int)v1344;
            v1451 = 0LL;
            v1500 = (void **)v704;
            goto LABEL_989;
          }
          v716 = GetLastError();
          v622 = v716;
          if ( v716 > 0 )
            v622 = (unsigned __int16)v716 | 0x80070000;
          if ( v622 < 0 )
          {
LABEL_999:
            v718 = 3LL;
            do
            {
              v719 = (_WORD *)*v704;
              if ( *v704 )
              {
                v720 = -1LL;
                do
                  v60 = v719[++v720] == 0;
                while ( !v60 );
                memset(v719, 0, 2 * v720 + 2);
                operator delete((void *)*v704);
              }
              ++v704;
              --v718;
            }
            while ( v718 );
            v89 = v1291;
            goto LABEL_989;
          }
        }
        else
        {
          v717 = GetLastError();
          v622 = v717;
          if ( v717 > 0 )
            v622 = (unsigned __int16)v717 | 0x80070000;
          if ( v622 < 0 )
            goto LABEL_999;
        }
        break;
      }
      v622 = -2147467259;
      goto LABEL_999;
    }
LABEL_989:
    v647 = v1317;
    v620 = v1331;
    v643 = v1304;
    v467 = v1293;
  }
LABEL_1007:
  if ( v1452 )
    memset(v1452, 0, v1525);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1451);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1452);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1526);
  if ( v622 < 0 )
    goto LABEL_1126;
  v1599 = *v1500;
  v1600 = v1500[1];
  v721 = 0;
  v1601 = v1500[2];
  v622 = 0;
  v1531[1] = 0LL;
  v1531[0] = 16LL;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD))off_180188168)(66LL, 0LL, v1531, 0LL) )
  {
    v721 = BYTE4(v1531[0]) & 1;
  }
  else
  {
    v722 = GetLastError();
    v622 = v722;
    if ( v722 > 0 )
      v622 = (unsigned __int16)v722 | 0x80070000;
    if ( v622 >= 0 )
      v622 = -2147467259;
  }
  v1598 = v721;
  if ( v622 < 0 )
    goto LABEL_1126;
  LODWORD(v1362) = 42;
  switch ( v620 )
  {
    case 1:
      v1327 = 42;
      goto LABEL_1023;
    case 2:
      v1327 = 15;
LABEL_1023:
      LODWORD(v1377) = 11;
      break;
    case 3:
      v1327 = 225;
      LODWORD(v1377) = 225;
      break;
  }
  v723 = 96;
  memset_0(v1678, 0, 0xDCuLL);
  v1679 = 220;
  if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1801880E0[0])(0LL, 0xFFFFFFFFLL, v1678) )
  {
    v723 = v1680;
    v1457 = 0LL;
    LODWORD(v1458) = v1681;
    if ( v1680 < 0x60u )
      v723 = 96;
    HIDWORD(v1458) = v1682;
  }
  v724 = v647;
  if ( v620 == 1 )
    v724 = (char *)v643;
  memset_0(v1667, 0, 0x5CuLL);
  v622 = 0;
  v725 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880F8[0])(0LL, 0LL, 1027LL);
  if ( !v725 )
  {
    v726 = GetLastError();
    v622 = v726;
    if ( v726 > 0 )
      v622 = (unsigned __int16)v726 | 0x80070000;
    if ( v622 >= 0 )
    {
      v622 = -2147467259;
      goto LABEL_1042;
    }
    goto LABEL_1125;
  }
  v727 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880B8[0])(v1327, v723, 72LL);
  v1667[4] = 400;
  v1668 = 5;
  v1667[0] = -v727;
  StringCchCopyW((char *)v1669, 32LL, v724);
  v728 = ((__int64 (__fastcall *)(_DWORD *))off_180188020[0])(v1667);
  if ( v728 )
  {
    v1602 = (char *)v728;
  }
  else
  {
    v729 = GetLastError();
    v622 = v729;
    if ( v729 > 0 )
      v622 = (unsigned __int16)v729 | 0x80070000;
    if ( v622 >= 0 )
      v622 = -2147467259;
  }
  ((void (__fastcall *)(_QWORD, __int64))off_180188160[0])(0LL, v725);
LABEL_1042:
  if ( v622 < 0 )
  {
LABEL_1125:
    v467 = v1293;
LABEL_1126:
    LODWORD(v1) = 0;
    goto LABEL_1127;
  }
  if ( v620 == 1 )
    v647 = (char *)v1304;
  memset_0(v1670, 0, 0x5CuLL);
  v622 = 0;
  v730 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880F8[0])(0LL, 0LL, 1027LL);
  if ( v730 )
  {
    v732 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880B8[0])((unsigned int)v1377, v723, 72LL);
    v1670[4] = 400;
    v1671 = 5;
    v1670[0] = -v732;
    StringCchCopyW((char *)v1672, 32LL, v647);
    v733 = ((__int64 (__fastcall *)(_DWORD *))off_180188020[0])(v1670);
    if ( v733 )
    {
      v1603 = (void *)v733;
    }
    else
    {
      v734 = GetLastError();
      v622 = v734;
      if ( v734 > 0 )
        v622 = (unsigned __int16)v734 | 0x80070000;
      if ( v622 >= 0 )
        v622 = -2147467259;
    }
    ((void (__fastcall *)(_QWORD, __int64))off_180188160[0])(0LL, v730);
  }
  else
  {
    v731 = GetLastError();
    v622 = v731;
    if ( v731 > 0 )
      v622 = (unsigned __int16)v731 | 0x80070000;
    if ( v622 < 0 )
      goto LABEL_1125;
    v622 = -2147467259;
  }
  if ( v622 < 0 )
    goto LABEL_1125;
  v735 = 0;
  v736 = 0;
  switch ( v620 )
  {
    case 1:
LABEL_1061:
      v735 = v1458;
      v736 = HIDWORD(v1458);
      break;
    case 2:
      v736 = 0;
      v735 = (int)v1458 / 4;
      break;
    case 3:
      goto LABEL_1061;
  }
  v1398 = __PAIR64__(v736, v735);
  if ( v620 == 1 )
  {
    v737 = 150;
    LODWORD(v1377) = 32;
LABEL_1068:
    v738 = 0;
  }
  else
  {
    if ( (unsigned int)(v620 - 2) <= 1 )
    {
      v737 = 0;
      LODWORD(v1362) = 0;
      LODWORD(v1377) = 0;
      goto LABEL_1068;
    }
    v738 = v1376;
    v737 = v1376;
    LODWORD(v1377) = v1376;
    LODWORD(v1362) = v1376;
  }
  v739 = v735 - v737 - v738;
  v622 = 0;
  v740 = v1599;
  DWORD2(v1607) = v739;
  DWORD2(v1606) = v739;
  v1363 = (void *)((__int64 (__fastcall *)(LPVOID, char *))off_180188078)(v1297, v1602);
  if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1801880D8)(
                        v1297,
                        v740,
                        0xFFFFFFFFLL,
                        &v1606,
                        3152,
                        0LL) )
    v622 = -2147467259;
  if ( v1363 )
    ((void (__fastcall *)(LPVOID, void *))off_180188078)(v1297, v1363);
  if ( v622 < 0 )
    goto LABEL_1124;
  v622 = 0;
  v741 = v1600;
  v1363 = (void *)((__int64 (__fastcall *)(LPVOID, void *))off_180188078)(v1297, v1603);
  if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1801880D8)(
                        v1297,
                        v741,
                        0xFFFFFFFFLL,
                        &v1607,
                        3152,
                        0LL) )
    v622 = -2147467259;
  if ( v1363 )
    ((void (__fastcall *)(LPVOID, void *))off_180188078)(v1297, v1363);
  if ( v622 < 0 )
  {
LABEL_1124:
    v620 = v1331;
    goto LABEL_1125;
  }
  if ( (unsigned int)(v1331 - 2) <= 1 )
  {
    v739 = DWORD2(v1607);
    if ( SDWORD2(v1606) > SDWORD2(v1607) )
      v739 = DWORD2(v1606);
  }
  if ( v1597 )
  {
    off_180188150((CPolicyConfig *)&v1606);
    v742 = v739 + v738 - DWORD2(v1607);
  }
  else
  {
    off_180188150((CPolicyConfig *)&v1606);
    v742 = v737;
  }
  ((void (__fastcall *)(__int128 *, __int64, _QWORD))off_180188150)(
    &v1607,
    v742,
    (unsigned int)(HIDWORD(v1606) + (_DWORD)v1377));
  v620 = v1331;
  if ( (unsigned int)(v1331 - 2) <= 1 )
  {
    v1398 = __PAIR64__(HIDWORD(v1607), v739);
    v1605 = -5723992;
    goto LABEL_1109;
  }
  if ( v1331 != 1 )
    goto LABEL_1109;
  v1605 = 0xFFFFFF;
  memset_0(v1673, 0, 0x5CuLL);
  LODWORD(v1) = 0;
  v622 = 0;
  v743 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880F8[0])(0LL, 0LL, 1027LL);
  if ( !v743 )
  {
    v744 = GetLastError();
    v622 = v744;
    if ( v744 > 0 )
      v622 = (unsigned __int16)v744 | 0x80070000;
    if ( v622 >= 0 )
    {
      v622 = -2147467259;
      goto LABEL_1099;
    }
    goto LABEL_1119;
  }
  v745 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1801880B8[0])(11LL, v723);
  v1673[4] = 400;
  v1673[0] = -v745;
  v1674 = 5;
  StringCchCopyW((char *)v1675, 32LL, (char *)v1334);
  v746 = ((__int64 (__fastcall *)(_DWORD *))off_180188020[0])(v1673);
  if ( v746 )
  {
    v1604 = v746;
  }
  else
  {
    v747 = GetLastError();
    v622 = v747;
    if ( v747 > 0 )
      v622 = (unsigned __int16)v747 | 0x80070000;
    if ( v622 >= 0 )
      v622 = -2147467259;
  }
  ((void (__fastcall *)(_QWORD, __int64))off_180188160[0])(0LL, v743);
LABEL_1099:
  if ( v622 >= 0 )
  {
    v622 = 0;
    v748 = v1601;
    v1610 = v739;
    v749 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180188078)(v1297, v1604);
    if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, unsigned int *, int, _QWORD))off_1801880D8)(
                          v1297,
                          v748,
                          0xFFFFFFFFLL,
                          &v1608,
                          1120,
                          0LL) )
      v622 = -2147467259;
    if ( v749 )
      ((void (__fastcall *)(LPVOID, __int64))off_180188078)(v1297, v749);
    if ( v622 < 0 )
      goto LABEL_1125;
    v750 = v1610 + 24;
    if ( (int)(v1610 + 24) < 90 )
      v750 = 90;
    v1610 = v750;
    v1611 = 32;
    v1608 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880B8[0])(v1608, v723, 96LL);
    v1609 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880B8[0])(v1609, v723, 96LL);
    v1610 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880B8[0])(v1610, v723, 96LL);
    v1611 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801880B8[0])(v1611, v723, 96LL);
    off_180188150((CPolicyConfig *)&v1608);
LABEL_1109:
    v751 = v1597;
    v752 = HIDWORD(v1398);
    v753 = v1398;
    if ( v1331 == 1 )
    {
      LODWORD(v1) = 0;
      v1397 = 0LL;
    }
    else
    {
      if ( v1331 == 2 )
      {
        memset_0(v1656, 0, 0x28uLL);
        v757 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180188148[0])(0LL, 1LL);
        v1656[0] = 40;
        if ( (unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_180188108)(v757, v1656) )
        {
          ((void (__fastcall *)(_QWORD, int *))off_180188140[0])(0LL, &v1657);
          ((void (__fastcall *)(_QWORD, _DWORD *))off_180188140[0])(0LL, v1658);
          if ( v751 )
            v755 = v1657 + 5 * v1658[0] / 100;
          else
            v755 = 95 * (v1658[0] - v753) / 100;
          v756 = 95 * (v1658[1] - v752);
LABEL_1116:
          LODWORD(v1397) = v755;
          HIDWORD(v1397) = v756 / 100;
        }
      }
      else if ( v1331 == 3 )
      {
        memset_0(v1664, 0, 0x28uLL);
        v754 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180188148[0])(0LL, 1LL);
        v1664[0] = 40;
        if ( (unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_180188108)(v754, v1664) )
        {
          ((void (__fastcall *)(_QWORD, char *))off_180188140[0])(0LL, v1665);
          ((void (__fastcall *)(_QWORD, _DWORD *))off_180188140[0])(0LL, v1666);
          v755 = 50 * (v1666[0] - v753) / 100;
          v756 = 50 * (v1666[1] - v752);
          goto LABEL_1116;
        }
      }
      LODWORD(v1) = 0;
    }
    v622 = 0;
  }
LABEL_1119:
  v467 = v1293;
LABEL_1127:
  ((void (__fastcall *)(_QWORD, LPVOID))off_180188160[0])(0LL, v1297);
LABEL_1128:
  v386 = (HMODULE *)&unk_18018B120;
LABEL_1129:
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v758 = dword_18018A018;
  if ( dword_18018A018 > 0 )
  {
    --dword_18018A018;
    if ( v758 == 1 )
    {
      v759 = (HMODULE *)&unk_18018B120;
      v760 = 4LL;
      do
      {
        if ( *v759 )
          FreeLibrary(*v759);
        v759 += 3;
        --v760;
      }
      while ( v760 );
      v386 = (HMODULE *)&unk_18018B120;
      memset_0(&unk_18018B120, 0, 0x60uLL);
      memcpy_0(off_180188000, off_180123520, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_18018B1A8, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1500);
  if ( v622 < 0 )
  {
    v798 = v1293;
    goto LABEL_1270;
  }
  v761 = v1397;
  v1548 = v1397;
  memset_0(v1612, 0, 0x68uLL);
  v762 = 1;
  v763 = ((__int64 (__fastcall *)(__int64, __int64))off_180188050[0])(v467, 7LL);
  if ( !v763
    || !((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180188068[0])(v763, 104LL, v1612)
    || v1615 != 32
    || !v1616
    || v1613 <= 0
    || v1614 <= 0 )
  {
    v762 = 0;
  }
  v1432 = v762;
  if ( v762 || v620 == 1 )
  {
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180188150)(&v1606, v761, HIDWORD(v1548));
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180188150)(&v1607, v761, HIDWORD(v1548));
    if ( v620 == 1 )
      v1401 = off_180188028();
  }
  v1305 = ((__int64 (__fastcall *)(__int64, __int64))off_180188080)(v467, 1LL);
  v764 = 2064;
  if ( v1597 )
    v764 = 133138;
  LODWORD(v1350) = v764;
  if ( !v1432 )
  {
    if ( v1598 || (v828 = -64, v620 == 1) )
      v828 = -1;
    BYTE2(v1344) = v828;
    LOWORD(v1344) = 0;
    v1419 = 0uLL;
    v1437 = 0uLL;
    BYTE3(v1344) = 1;
    v1345 = (LPVOID)((__int64 (__fastcall *)(__int64))off_180188010[0])(v467);
    if ( !v1345 )
      goto LABEL_1239;
    if ( v620 == 1 )
    {
      v829 = DWORD2(v1607) - v1607;
      v830 = DWORD2(v1607) - v1607;
      if ( DWORD2(v1607) - (int)v1607 <= DWORD2(v1606) - (int)v1606 )
        v830 = DWORD2(v1606) - v1606;
      v1312 = v830;
      v831 = 0;
      LODWORD(v1354) = HIDWORD(v1607) - DWORD1(v1606);
      v832 = 0;
      if ( v1597 )
      {
        v832 = v1606 - DWORD2(v1606) + v830;
        v831 = v1607 - DWORD2(v1607) + v830;
        LODWORD(v1419) = v832;
        LODWORD(v1437) = v831;
        v833 = v832;
      }
      else
      {
        v833 = v1419;
      }
      v834 = v831 + v829;
      v835 = HIDWORD(v1606) - DWORD1(v1606);
      v836 = DWORD1(v1607) - DWORD1(v1606);
      LODWORD(v1362) = v832 + DWORD2(v1606) - v1606;
      v837 = HIDWORD(v1607) - DWORD1(v1606);
      DWORD2(v1419) = (_DWORD)v1362;
      v838 = v1354;
      HIDWORD(v1437) = HIDWORD(v1607) - DWORD1(v1606);
      HIDWORD(v1419) = HIDWORD(v1606) - DWORD1(v1606);
      DWORD2(v1437) = v831 + v829;
      DWORD1(v1437) = DWORD1(v1607) - DWORD1(v1606);
    }
    else
    {
      v830 = v1398;
      v838 = HIDWORD(v1398);
      v1419 = v1606;
      v835 = HIDWORD(v1606);
      v833 = v1606;
      v1437 = v1607;
      v837 = HIDWORD(v1607);
      v834 = DWORD2(v1607);
      v836 = DWORD1(v1607);
      LODWORD(v1354) = HIDWORD(v1398);
      v1312 = v1398;
      LODWORD(v1362) = DWORD2(v1606);
    }
    LODWORD(v1377) = v834;
    v1551 = 0LL;
    memset_0(v1660, 0, 0x2CuLL);
    v1660[0] = 40;
    v1660[1] = v830;
    v1660[2] = -v838;
    v1660[3] = 2097153;
    v839 = ((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180188018[0])(
             v1345,
             v1660,
             0LL,
             &v1551,
             0LL,
             0);
    v1391 = v839;
    if ( !v839 )
    {
      GetLastError();
      v826 = v1345;
LABEL_1264:
      if ( v826 )
        ((void (__fastcall *)(LPVOID))off_180188030[0])(v826);
LABEL_1266:
      v798 = v1293;
      goto LABEL_1267;
    }
    ((void (__fastcall *)(LPVOID, SIZE_T))off_180188078)(v1345, v839);
    if ( v1331 == 1 && v1401 )
    {
      v1653 = v838;
      v826 = v1345;
      v1651 = 0LL;
      v1652 = v830;
      ((void (__fastcall *)(LPVOID, __int64 *, __int64))off_1801880E8[0])(v1345, &v1651, v1401);
    }
    else
    {
      v826 = v1345;
    }
    v840 = v1599;
    v1328 = v1598;
    v1400 = v1602;
    v1390 = (__int64)v1599;
    memset_0(v1621, 0, 0x68uLL);
    memset_0(v1639, 0, 0x68uLL);
    v1375 = 0LL;
    v1337 = 0;
    v1320 = 0;
    memset_0(v1661, 0, 0x2CuLL);
    v1643 = 0LL;
    v1644 = 0LL;
    if ( !v840 )
    {
LABEL_1262:
      if ( v1391 )
        ((void (__fastcall *)(SIZE_T))off_180188038)(v1391);
      goto LABEL_1264;
    }
    v841 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180188050[0])(v826, 7LL);
    if ( !v841 )
    {
LABEL_1351:
      GetLastError();
      goto LABEL_1262;
    }
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180188068[0])(v841, 104LL, v1621) )
    {
      v1375 = v1624;
      v1337 = v1622;
      v1320 = v1623;
    }
    v842 = ((__int64 (__fastcall *)(LPVOID))off_180188010[0])(v826);
    if ( !v842 )
    {
      GetLastError();
      goto LABEL_1261;
    }
    v1552 = 0LL;
    v909 = 0;
    memset_0(v1661, 0, 0x2CuLL);
    v1661[0] = 40;
    LODWORD(v1362) = (_DWORD)v1362 - v833;
    v1661[1] = (_DWORD)v1362;
    v1661[3] = 2097153;
    v1661[2] = DWORD1(v1419) - v835;
    v910 = (void *)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180188018[0])(
                     v842,
                     v1661,
                     0LL,
                     &v1552,
                     0LL,
                     0);
    v1363 = v910;
    if ( v910 )
    {
      v912 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_180188068[0])(v910, 104LL, v1639);
      v913 = 0LL;
      LODWORD(v1644) = (_DWORD)v1362;
      if ( v912 )
        v913 = v1640;
      v1386 = v913;
      HIDWORD(v1644) = v835 - DWORD1(v1419);
      ((void (__fastcall *)(__int64, void *))off_180188078)(v842, v1363);
      ((void (__fastcall *)(__int64, __int64))off_180188080)(v842, 1LL);
      v1400 = (char *)((__int64 (__fastcall *)(__int64, char *))off_180188078)(v842, v1400);
      v914 = ((__int64 (__fastcall *)(_QWORD))off_180188070[0])(0LL);
      ((void (__fastcall *)(__int64, __int64 *, __int64))off_1801880E8[0])(v842, &v1643, v914);
      ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, _DWORD, _QWORD))off_1801880D8)(
        v842,
        v1390,
        0xFFFFFFFFLL,
        &v1643,
        (_DWORD)v1350,
        0LL);
      if ( v1331 == 1 )
      {
        if ( v1328 )
          v1330 = ((__int64 (__fastcall *)(__int64))off_180188118[0])(8LL);
        else
          v1330 = 0xFFFFFF;
      }
      else
      {
        v1330 = -5723992;
      }
      v915 = -v833;
      v916 = 0;
      v917 = 0;
      if ( v833 >= 0 )
      {
        v916 = v833;
        v915 = 0;
      }
      v918 = -DWORD1(v1419);
      if ( (SDWORD1(v1419) & 0x80000000) == 0 )
      {
        v917 = DWORD1(v1419);
        v918 = 0;
      }
      v919 = v1644 - v915;
      if ( (int)v1644 - v915 >= v1337 - v916 )
        v919 = v1337 - v916;
      v920 = HIDWORD(v1644) - v918;
      if ( HIDWORD(v1644) - v918 >= v1320 - v917 )
        v920 = v1320 - v917;
      if ( v919 > 0 && v920 > 0 )
      {
        v1390 = 4LL * (int)v1644;
        v921 = (unsigned __int8 *)v1386 + 4 * v915 + 4 * (__int64)(v918 * (int)v1644);
        v1362 = v921;
        v922 = 4LL * v1337;
        v923 = v1375 + 4 * (v916 + (__int64)(v917 * v1337));
        v1338 = 0;
        v1375 = v923;
        do
        {
          v1321 = 0;
          v924 = 0;
          v925 = v921 + 2;
          v926 = v923 - (_QWORD)v921;
          do
          {
            if ( (unsigned __int8)((*v925 + *(v925 - 2) + 2 * (unsigned int)*(v925 - 1)) >> 2) != 0xFF )
            {
              v927 = (unsigned __int8)~((*v925 + *(v925 - 2) + 2 * (unsigned int)*(v925 - 1)) >> 2);
              v925[v926] -= ~((*v925 + *(v925 - 2) + 2 * (unsigned int)*(v925 - 1)) >> 2) * (v1330 - v925[v926]);
              v928 = v925[v926 - 1];
              v929 = (unsigned __int64)(2155905153LL * v927 * (BYTE1(v1330) - v928)) >> 32;
              v925[v926 - 1] = v928 + (v929 >> 7 < 0) + (v929 >> 7);
              v930 = v925[v926 - 2];
              v931 = (unsigned __int64)(2155905153LL * v927 * (BYTE2(v1330) - v930)) >> 32;
              v925[v926 - 2] = v930 + (v931 >> 7 < 0) + (v931 >> 7);
              v932 = v925[v926 + 1];
              v933 = v927 * (255 - v932);
              v924 = v1321;
              v925[v926 + 1] = v932 + v933 / 255;
            }
            ++v924;
            v925 += 4;
            v1321 = v924;
          }
          while ( v924 < v919 );
          v934 = v1338;
          v921 = (unsigned __int8 *)v1362 + v1390;
          v923 = v922 + v1375;
          v1362 = (char *)v1362 + v1390;
          v1375 += v922;
          ++v1338;
        }
        while ( v934 + 1 < v920 );
        v89 = v1291;
        v909 = 0;
      }
      ((void (__fastcall *)(void *))off_180188038)(v1363);
      if ( v1400 )
        ((void (__fastcall *)(__int64, char *))off_180188078)(v842, v1400);
    }
    else
    {
      v911 = GetLastError();
      v909 = v911;
      if ( v911 > 0 )
        v909 = (unsigned __int16)v911 | 0x80070000;
      if ( v909 >= 0 )
        v909 = -2147467259;
    }
    ((void (__fastcall *)(__int64))off_180188030[0])(v842);
    if ( v909 < 0 )
      goto LABEL_1261;
    v935 = v1600;
    v1302 = v1598;
    v1386 = v1603;
    v1390 = (__int64)v1600;
    memset_0(v1617, 0, 0x68uLL);
    memset_0(v1633, 0, 0x68uLL);
    v1363 = 0LL;
    v1322 = 0;
    v936 = 0;
    memset_0(v1662, 0, 0x2CuLL);
    v826 = v1345;
    v1649 = 0LL;
    v1650 = 0LL;
    if ( !v935 )
      goto LABEL_1262;
    v937 = ((__int64 (__fastcall *)(LPVOID, __int64))off_180188050[0])(v1345, 7LL);
    if ( !v937 )
      goto LABEL_1351;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180188068[0])(v937, 104LL, v1617) )
    {
      v936 = v1619;
      v1363 = v1620;
      v1322 = v1618;
    }
    v938 = ((__int64 (__fastcall *)(LPVOID))off_180188010[0])(v826);
    if ( !v938 )
      goto LABEL_1351;
    v1556 = 0LL;
    v939 = 0;
    memset_0(v1662, 0, 0x2CuLL);
    v940 = v1437;
    v1662[0] = 40;
    LODWORD(v1377) = (_DWORD)v1377 - v1437;
    v1662[1] = (_DWORD)v1377;
    v1662[3] = 2097153;
    v1662[2] = v836 - v837;
    v941 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180188018[0])(
             v938,
             v1662,
             0LL,
             &v1556,
             0LL,
             0);
    v1375 = v941;
    if ( !v941 )
    {
      v942 = GetLastError();
      v939 = v942;
      if ( v942 > 0 )
        v939 = (unsigned __int16)v942 | 0x80070000;
      if ( v939 >= 0 )
        v939 = -2147467259;
      goto LABEL_1384;
    }
    v943 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180188068[0])(v941, 104LL, v1633);
    v944 = 0LL;
    if ( v943 )
      v944 = v1634;
    v1400 = v944;
    LODWORD(v1650) = (_DWORD)v1377;
    HIDWORD(v1650) = v837 - v836;
    off_180188078();
    ((void (__fastcall *)(__int64, __int64))off_180188080)(v938, 1LL);
    v1339 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, void *))off_180188078)(v938, v1386);
    v945 = ((__int64 (__fastcall *)(_QWORD))off_180188070[0])(0LL);
    ((void (__fastcall *)(__int64, __int64 *, __int64))off_1801880E8[0])(v938, &v1649, v945);
    ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, _DWORD, _QWORD))off_1801880D8)(
      v938,
      v1390,
      0xFFFFFFFFLL,
      &v1649,
      (_DWORD)v1350,
      0LL);
    if ( v1331 == 1 )
    {
      if ( !v1302 )
      {
        LODWORD(v1350) = 0xFFFFFF;
LABEL_1365:
        v947 = -v940;
        v948 = 0;
        v949 = 0;
        if ( v940 >= 0 )
        {
          v947 = 0;
          v948 = v940;
        }
        v950 = -v836;
        if ( v836 >= 0 )
        {
          v950 = 0;
          v949 = v836;
        }
        v951 = v1322;
        v952 = v1650 - v947;
        if ( (int)v1650 - v947 >= v1322 - v948 )
          v952 = v1322 - v948;
        v953 = HIDWORD(v1650) - v950;
        v954 = v936 - v949;
        if ( HIDWORD(v1650) - v950 >= v954 )
          v953 = v954;
        if ( v952 > 0 && v953 > 0 )
        {
          v955 = v1353;
          v1323 = 0;
          v956 = &v1400[4 * v947 + 4 * (__int64)(v950 * (int)v1650)];
          v957 = (char *)v1363 + 4 * v948 + 4 * (__int64)(v949 * (int)v951);
          v1390 = 4 * v951;
          v1363 = v957;
          v1386 = (void *)(4LL * (int)v1650);
          do
          {
            v958 = 0;
            v959 = (unsigned __int8 *)(v956 + 2);
            v960 = (char *)(v957 - v956);
            do
            {
              if ( (unsigned __int8)((*v959 + *(v959 - 2) + 2 * (unsigned int)*(v959 - 1)) >> 2) != 0xFF )
              {
                v961 = (unsigned __int8)~((*v959 + *(v959 - 2) + 2 * (unsigned int)*(v959 - 1)) >> 2);
                v962 = BYTE1(v1350);
                v960[(_QWORD)v959] -= ~((*v959 + *(v959 - 2) + 2 * (unsigned int)*(v959 - 1)) >> 2)
                                    * (v955 - v960[(_QWORD)v959]);
                v963 = (unsigned __int8)v960[(_QWORD)v959 - 1];
                v964 = (unsigned __int64)(2155905153LL * v961 * (v962 - v963)) >> 32;
                v965 = BYTE2(v1350);
                v960[(_QWORD)v959 - 1] = v963 + (v964 >> 7 < 0) + (v964 >> 7);
                v966 = (unsigned __int8)v960[(_QWORD)v959 - 2];
                v967 = (unsigned __int64)(2155905153LL * v961 * (v965 - v966)) >> 32;
                v960[(_QWORD)v959 - 2] = v966 + (v967 >> 7 < 0) + (v967 >> 7);
                v960[(_QWORD)v959 + 1] += v961 * (255 - (unsigned __int8)v960[(_QWORD)v959 + 1]) / 255;
              }
              v959 += 4;
              ++v958;
            }
            while ( v958 < v952 );
            v968 = v1323;
            v957 = (char *)v1363 + v1390;
            v956 = &v956[(_QWORD)v1386];
            v1363 = (char *)v1363 + v1390;
            ++v1323;
          }
          while ( v968 + 1 < v953 );
          v89 = v1291;
        }
        ((void (__fastcall *)(__int64))off_180188038)(v1375);
        if ( v1339 )
          ((void (__fastcall *)(__int64, unsigned __int16 *))off_180188078)(v938, v1339);
LABEL_1384:
        ((void (__fastcall *)(__int64))off_180188030[0])(v938);
        if ( v939 >= 0 )
        {
          v826 = v1345;
          v827 = v1293;
          if ( v1331 == 1 )
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, int))off_180188000[0])(
              v1293,
              (unsigned int)v1606,
              DWORD1(v1606),
              v1312,
              v1354,
              v1345,
              0,
              0,
              13369376);
          else
            ((void (__fastcall *)(__int64, _QWORD, _QWORD))off_180188040[0])(v1293, (unsigned int)v1397, HIDWORD(v1397));
LABEL_1388:
          ((void (__fastcall *)(__int64, _QWORD))off_180188080)(v827, v1305);
          goto LABEL_1262;
        }
LABEL_1261:
        v826 = v1345;
        goto LABEL_1262;
      }
      v946 = ((__int64 (__fastcall *)(__int64))off_180188118[0])(8LL);
    }
    else
    {
      v946 = -5723992;
    }
    LODWORD(v1350) = v946;
    v1353 = v946;
    goto LABEL_1365;
  }
  v765 = v1599;
  v1318 = v1598;
  v1363 = v1602;
  v1375 = (__int64)v1599;
  memset_0(v1629, 0, 0x68uLL);
  memset_0(v1635, 0, 0x68uLL);
  v766 = 0LL;
  v1298 = 0LL;
  v1309 = 0;
  v767 = 0;
  memset_0(v1659, 0, 0x2CuLL);
  v1645 = 0LL;
  v1646 = 0LL;
  if ( !v765 )
    goto LABEL_1266;
  v768 = ((__int64 (__fastcall *)(__int64, __int64))off_180188050[0])(v467, 7LL);
  if ( !v768 )
  {
    GetLastError();
    goto LABEL_1266;
  }
  if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180188068[0])(v768, 104LL, v1629) )
  {
    LODWORD(v1) = v1630;
    v767 = v1631;
    v1298 = v1632;
    v1309 = v1630;
  }
  v769 = ((__int64 (__fastcall *)(__int64))off_180188010[0])(v467);
  if ( !v769 )
  {
LABEL_1239:
    GetLastError();
    goto LABEL_1266;
  }
  v1549 = 0LL;
  v770 = 0;
  memset_0(v1659, 0, 0x2CuLL);
  v1659[1] = DWORD2(v1606) - v1606;
  v1659[2] = DWORD1(v1606) - HIDWORD(v1606);
  v1659[0] = 40;
  v1659[3] = 2097153;
  v1335 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180188018[0])(
                                v769,
                                v1659,
                                0LL,
                                &v1549,
                                0LL,
                                0);
  if ( !v1335 )
  {
    v771 = GetLastError();
    v770 = v771;
    if ( v771 > 0 )
      v770 = (unsigned __int16)v771 | 0x80070000;
    if ( v770 >= 0 )
      v770 = -2147467259;
    goto LABEL_1193;
  }
  if ( ((unsigned int (__fastcall *)(unsigned __int16 *, __int64, _BYTE *))off_180188068[0])(v1335, 104LL, v1635) )
    v766 = v1636;
  LODWORD(v1646) = DWORD2(v1606) - v1606;
  HIDWORD(v1646) = HIDWORD(v1606) - DWORD1(v1606);
  ((void (__fastcall *)(__int64, unsigned __int16 *))off_180188078)(v769, v1335);
  ((void (__fastcall *)(__int64, __int64))off_180188080)(v769, 1LL);
  v1344 = (LPVOID)((__int64 (__fastcall *)(__int64, void *))off_180188078)(v769, v1363);
  v772 = ((__int64 (__fastcall *)(_QWORD))off_180188070[0])(0LL);
  ((void (__fastcall *)(__int64, __int64 *, __int64))off_1801880E8[0])(v769, &v1645, v772);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, _DWORD, _QWORD))off_1801880D8)(
    v769,
    v1375,
    0xFFFFFFFFLL,
    &v1645,
    (_DWORD)v1350,
    0LL);
  if ( v1331 != 1 )
  {
    v774 = -5723992;
    goto LABEL_1172;
  }
  if ( !v1318 )
  {
    v774 = 0xFFFFFF;
LABEL_1172:
    LODWORD(v1362) = v774;
    goto LABEL_1173;
  }
  v773 = ((__int64 (__fastcall *)(__int64))off_180188118[0])(8LL);
  LOBYTE(v774) = v773;
  LODWORD(v1362) = v773;
LABEL_1173:
  v775 = 0;
  v776 = -(int)v1606;
  v777 = 0;
  if ( (int)v1606 >= 0 )
  {
    v775 = v1606;
    v776 = 0;
  }
  v778 = -DWORD1(v1606);
  if ( (SDWORD1(v1606) & 0x80000000) == 0 )
  {
    v777 = DWORD1(v1606);
    v778 = 0;
  }
  v779 = v1646 - v776;
  if ( (int)v1646 - v776 >= (int)v1 - v775 )
    v779 = v1 - v775;
  v780 = HIDWORD(v1646) - v778;
  v781 = v767 - v777;
  if ( HIDWORD(v1646) - v778 >= v781 )
    v780 = v781;
  if ( v779 > 0 && v780 > 0 )
  {
    v782 = v766 + 4 * (v776 + (__int64)((int)v1646 * v778));
    v783 = &v1298[4 * v775 + 4 * (__int64)(v777 * v1309)];
    v1375 = 4LL * v1309;
    v1299 = v783;
    LODWORD(v1354) = 0;
    v1363 = (void *)(4LL * (int)v1646);
    do
    {
      v1310 = 0;
      v784 = 0;
      v785 = (unsigned __int8 *)(v782 + 2);
      v786 = &v783[-v782];
      do
      {
        if ( (unsigned __int8)((*v785 + *(v785 - 2) + 2 * (unsigned int)*(v785 - 1)) >> 2) != 0xFF )
        {
          v787 = (unsigned __int8)~((*v785 + *(v785 - 2) + 2 * (unsigned int)*(v785 - 1)) >> 2);
          v788 = BYTE1(v1362);
          v785[(_QWORD)v786] -= ~((*v785 + *(v785 - 2) + 2 * (unsigned int)*(v785 - 1)) >> 2)
                              * (v774 - v785[(_QWORD)v786]);
          v789 = v785[(_QWORD)v786 - 1];
          v790 = (unsigned __int64)(2155905153LL * v787 * (v788 - v789)) >> 32;
          v791 = BYTE2(v1362);
          v785[(_QWORD)v786 - 1] = v789 + (v790 >> 7 < 0) + (v790 >> 7);
          v792 = v785[(_QWORD)v786 - 2];
          v793 = (unsigned __int64)(2155905153LL * v787 * (v791 - v792)) >> 32;
          v785[(_QWORD)v786 - 2] = v792 + (v793 >> 7 < 0) + (v793 >> 7);
          v784 = v1310;
          v785[(_QWORD)v786 + 1] += v787 * (255 - v785[(_QWORD)v786 + 1]) / 255;
        }
        ++v784;
        v785 += 4;
        v1310 = v784;
      }
      while ( v784 < v779 );
      v794 = v1354;
      v783 = &v1299[v1375];
      v782 += (__int64)v1363;
      v1299 += v1375;
      LODWORD(v1354) = v1354 + 1;
    }
    while ( v794 + 1 < v780 );
    v89 = v1291;
  }
  ((void (__fastcall *)(unsigned __int16 *))off_180188038)(v1335);
  if ( v1344 )
    ((void (__fastcall *)(__int64, LPVOID))off_180188078)(v769, v1344);
  v766 = 0LL;
LABEL_1193:
  ((void (__fastcall *)(__int64))off_180188030[0])(v769);
  if ( v770 < 0 )
    goto LABEL_1266;
  v795 = v1600;
  v1319 = v1598;
  v1363 = v1603;
  v1375 = (__int64)v1600;
  memset_0(v1625, 0, 0x68uLL);
  memset_0(v1637, 0, 0x68uLL);
  v1300 = 0LL;
  v796 = 0;
  v797 = 0;
  memset_0(v1663, 0, 0x2CuLL);
  v798 = v1293;
  v1647 = 0LL;
  v1648 = 0LL;
  if ( !v795 )
    goto LABEL_1267;
  v799 = ((__int64 (__fastcall *)(__int64, __int64))off_180188050[0])(v1293, 7LL);
  if ( v799 )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_180188068[0])(v799, 104LL, v1625) )
    {
      v796 = v1626;
      v797 = v1627;
      v1300 = v1628;
    }
    v800 = ((__int64 (__fastcall *)(__int64))off_180188010[0])(v1293);
    if ( !v800 )
      goto LABEL_1239;
    v1550 = 0LL;
    v801 = 0;
    memset_0(v1663, 0, 0x2CuLL);
    v1663[1] = DWORD2(v1607) - v1607;
    v1663[2] = DWORD1(v1607) - HIDWORD(v1607);
    v1663[0] = 40;
    v1663[3] = 2097153;
    v1336 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_180188018[0])(
                                  v800,
                                  v1663,
                                  0LL,
                                  &v1550,
                                  0LL,
                                  0);
    if ( !v1336 )
    {
      v802 = GetLastError();
      v801 = v802;
      if ( v802 > 0 )
        v801 = (unsigned __int16)v802 | 0x80070000;
      if ( v801 >= 0 )
        v801 = -2147467259;
LABEL_1233:
      ((void (__fastcall *)(__int64))off_180188030[0])(v800);
      if ( v801 < 0 )
        goto LABEL_1266;
      v826 = v1345;
      v827 = v1293;
      goto LABEL_1388;
    }
    if ( ((unsigned int (__fastcall *)(unsigned __int16 *, __int64, _BYTE *))off_180188068[0])(v1336, 104LL, v1637) )
      v766 = v1638;
    LODWORD(v1648) = DWORD2(v1607) - v1607;
    HIDWORD(v1648) = HIDWORD(v1607) - DWORD1(v1607);
    ((void (__fastcall *)(__int64, unsigned __int16 *))off_180188078)(v800, v1336);
    ((void (__fastcall *)(__int64, __int64))off_180188080)(v800, 1LL);
    v1354 = ((__int64 (__fastcall *)(__int64, void *))off_180188078)(v800, v1363);
    v803 = ((__int64 (__fastcall *)(_QWORD))off_180188070[0])(0LL);
    ((void (__fastcall *)(__int64, __int64 *, __int64))off_1801880E8[0])(v800, &v1647, v803);
    ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, _DWORD, _QWORD))off_1801880D8)(
      v800,
      v1375,
      0xFFFFFFFFLL,
      &v1647,
      (_DWORD)v1350,
      0LL);
    if ( v1331 == 1 )
    {
      if ( !v1319 )
      {
        LODWORD(v1362) = 0xFFFFFF;
LABEL_1214:
        v805 = 0;
        v806 = -(int)v1607;
        v807 = 0;
        if ( (int)v1607 >= 0 )
        {
          v807 = v1607;
          v806 = 0;
        }
        v808 = -DWORD1(v1607);
        if ( (SDWORD1(v1607) & 0x80000000) == 0 )
        {
          v808 = 0;
          v805 = DWORD1(v1607);
        }
        v809 = v1648 - v806;
        if ( (int)v1648 - v806 >= v796 - v807 )
          v809 = v796 - v807;
        v810 = v797 - v805;
        v811 = HIDWORD(v1648) - v808;
        if ( HIDWORD(v1648) - v808 >= v810 )
          v811 = v810;
        if ( v809 > 0 && v811 > 0 )
        {
          v812 = v1353;
          v1311 = 0;
          v813 = v766 + 4 * (v806 + (__int64)(v808 * (int)v1648));
          v814 = &v1300[4 * v807 + 4 * (__int64)(v796 * v805)];
          v1375 = 4LL * v796;
          v1301 = v814;
          v1363 = (void *)(4LL * (int)v1648);
          do
          {
            v815 = 0;
            v816 = (unsigned __int8 *)(v813 + 2);
            v817 = &v814[-v813];
            do
            {
              if ( (unsigned __int8)((*v816 + *(v816 - 2) + 2 * (unsigned int)*(v816 - 1)) >> 2) != 0xFF )
              {
                v818 = (unsigned __int8)~((*v816 + *(v816 - 2) + 2 * (unsigned int)*(v816 - 1)) >> 2);
                v819 = BYTE1(v1362);
                v816[(_QWORD)v817] -= ~((*v816 + *(v816 - 2) + 2 * (unsigned int)*(v816 - 1)) >> 2)
                                    * (v812 - v816[(_QWORD)v817]);
                v820 = v816[(_QWORD)v817 - 1];
                v821 = (unsigned __int64)(2155905153LL * v818 * (v819 - v820)) >> 32;
                v822 = BYTE2(v1362);
                v816[(_QWORD)v817 - 1] = v820 + (v821 >> 7 < 0) + (v821 >> 7);
                v823 = v816[(_QWORD)v817 - 2];
                v824 = (unsigned __int64)(2155905153LL * v818 * (v822 - v823)) >> 32;
                v816[(_QWORD)v817 - 2] = v823 + (v824 >> 7 < 0) + (v824 >> 7);
                v816[(_QWORD)v817 + 1] += v818 * (255 - v816[(_QWORD)v817 + 1]) / 255;
              }
              v816 += 4;
              ++v815;
            }
            while ( v815 < v809 );
            v825 = v1311;
            v814 = &v1301[v1375];
            v813 += (__int64)v1363;
            v1301 += v1375;
            ++v1311;
          }
          while ( v825 + 1 < v811 );
          v89 = v1291;
        }
        ((void (__fastcall *)(unsigned __int16 *))off_180188038)(v1336);
        if ( v1354 )
          ((void (__fastcall *)(__int64, __int64))off_180188078)(v800, v1354);
        goto LABEL_1233;
      }
      v804 = ((__int64 (__fastcall *)(__int64))off_180188118[0])(8LL);
    }
    else
    {
      v804 = -5723992;
    }
    LODWORD(v1362) = v804;
    v1353 = v804;
    goto LABEL_1214;
  }
  GetLastError();
LABEL_1267:
  if ( v1401 )
    ((void (__fastcall *)(__int64))off_180188038)(v1401);
  v386 = (HMODULE *)&unk_18018B120;
LABEL_1270:
  if ( v1599 )
  {
    v843 = -1LL;
    do
      v60 = *((_WORD *)v1599 + ++v843) == 0;
    while ( !v60 );
    memset(v1599, 0, 2 * v843 + 2);
    operator delete(v1599);
    v1599 = 0LL;
  }
  if ( v1600 )
  {
    v844 = -1LL;
    do
      v60 = *((_WORD *)v1600 + ++v844) == 0;
    while ( !v60 );
    memset(v1600, 0, 2 * v844 + 2);
    operator delete(v1600);
    v1600 = 0LL;
  }
  if ( v1601 )
  {
    v845 = -1LL;
    do
      v60 = *((_WORD *)v1601 + ++v845) == 0;
    while ( !v60 );
    memset(v1601, 0, 2 * v845 + 2);
    operator delete(v1601);
    v1601 = 0LL;
  }
  if ( v1602 )
  {
    off_180188038();
    v1602 = 0LL;
  }
  if ( v1603 )
  {
    off_180188038();
    v1603 = 0LL;
  }
  if ( v1604 )
  {
    off_180188038();
    v1604 = 0LL;
  }
  v846 = 1LL;
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v847 = dword_18018A018;
  v5 = 4LL;
  if ( dword_18018A018 > 0 )
  {
    --dword_18018A018;
    if ( v847 == 1 )
    {
      v848 = (HMODULE *)&unk_18018B120;
      v849 = 4LL;
      do
      {
        if ( *v848 )
          FreeLibrary(*v848);
        v848 += 3;
        --v849;
      }
      while ( v849 );
      v386 = (HMODULE *)&unk_18018B120;
      memset_0(&unk_18018B120, 0, 0x60uLL);
      memcpy_0(off_180188000, off_180123520, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_18018B1A8, 0);
  v850 = dword_180189F40;
  v1329 = dword_180189F40;
  v851 = ((__int64 (__fastcall *)(__int64))off_180188098[0])(v846);
  v1683 = 0;
  v852 = v851 - qword_18018A010;
  v1345 = (LPVOID)(unsigned int)(v851 - qword_18018A010);
  memset_0(v1684, 0, sizeof(v1684));
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v853 = dword_18018A018;
  if ( dword_18018A018 )
    goto LABEL_1420;
  v1313 = 0;
  v1502 = 0LL;
  v1579 = 0LL;
  v854 = operator new(0x338uLL);
  i1 = v854;
  if ( !v854 )
  {
LABEL_1418:
    v894 = -1073741702;
    goto LABEL_1408;
  }
  v856 = 0;
  v1358 = 0;
  v857 = -1;
  v1364 = 0;
  v858 = 0;
  v859 = v854 + 7;
  v860 = 0;
  v861 = (char *)&unk_1801320F2;
  v862 = 103LL;
  do
  {
    v863 = (unsigned __int8)*(v861 - 1);
    v864 = (unsigned __int8)*(v861 - 2);
    v865 = (unsigned __int8)v861[2];
    v861 += 8;
    v866 = (unsigned __int8)*(v861 - 7) | (((unsigned __int8)*(v861 - 8) | ((v863 | (v864 << 8)) << 8)) << 8);
    v867 = v866 ^ v860;
    v868 = (unsigned __int8)*(v861 - 3) | (((unsigned __int8)*(v861 - 4) | (((unsigned __int8)*(v861 - 5) | (v865 << 8)) << 8)) << 8);
    v869 = v867 ^ v868 ^ v858 ^ 0xAC987321;
    v870 = (__ROL4__(v869, 10) + 4991 * __ROL4__(v869 + 1419157410, 5)) ^ v867;
    v871 = (43881 * __ROR4__(v870 + 133239679, 9) - __ROL4__(v870, 2)) ^ v869;
    v872 = (24670 * v871 - (v871 >> 13) - 123127970) ^ v870;
    v873 = (2033 * __ROL4__(v872 ^ 0xAB69, 6) - __ROL4__(v872, 2)) ^ v871;
    v874 = (133239679 - (v873 ^ 0xAB69605E)) ^ v872;
    v875 = (43881 * (v874 ^ 0x137F)) ^ __ROR4__(v874, 6) ^ v873;
    v876 = (__ROL4__(v875, 2) + 24670 * __ROR4__(v875 + 133239679, 15)) ^ v874;
    v877 = (2033 * __ROR4__(v876 + 1419157410, 14) - __ROL4__(v876, 8)) ^ v875;
    v878 = __ROR4__(v877, 10) ^ (4991 * __ROR4__(v877 ^ 0xAB69605E, 12)) ^ v876;
    v879 = (v878 >> 10) ^ (43881 * (v878 ^ 0x7F1)) ^ v877;
    v880 = (2033 * (__ROR4__(~v879, 5) + 24670)) ^ v878;
    v881 = v879 ^ (v880 - 2033) ^ 0xAB69605E;
    v882 = ((v881 >> 2) + 4991 * __ROL4__(v879 ^ (v880 - 2033) ^ 0xAB6967AF, 2)) ^ v880;
    v883 = (__ROL4__(v882, 7) + 43881 * __ROR4__(v882 - 133239679, 6)) ^ v881;
    v884 = (24670 * (v883 ^ 0x137F) + __ROR4__(v883, 9)) ^ v882;
    v885 = (__ROL4__(v884, 7) + 2033 * __ROL4__(v884 ^ 0xAB69, 5)) ^ v883;
    v886 = v884 ^ v885 ^ 0xAC987321;
    v887 = (4991 * (__ROR4__(v886, 3) - 43881)) ^ v885;
    v888 = (24670 * __ROR4__(v887 - 133239679, 1) - __ROR4__(v887, 6)) ^ v886;
    v889 = (__ROL4__(v888, 14) + 2033 * __ROL4__(v888 - 1419157410, 3)) ^ v887;
    v890 = (4991 * __ROL4__(v889 - 1419157410, 15) - __ROR4__(v889, 14)) ^ v888;
    v859 += 8;
    v891 = (v890 >> 3) ^ (43881 * (v890 ^ 0x605E)) ^ v889;
    v1358 = v857 ^ v891;
    v857 = v868;
    v892 = v856 ^ __ROL4__(v891, 2) ^ (24670 * __ROL4__(v891 ^ 0x7F1137F, 4));
    v856 = v866;
    v1364 = v892 ^ v890;
    *(v859 - 12) = v892 ^ v890;
    v1364 = __ROR4__(v1364, 8);
    *(v859 - 8) = v1358;
    v1358 = __ROR4__(v1358, 8);
    *(v859 - 13) = v1364;
    v1364 = __ROR4__(v1364, 8);
    *(v859 - 9) = v1358;
    v1358 = __ROR4__(v1358, 8);
    *(v859 - 14) = v1364;
    v1364 = __ROR4__(v1364, 8);
    *(v859 - 10) = v1358;
    v1358 = __ROR4__(v1358, 8);
    *(v859 - 15) = v1364;
    *(v859 - 11) = v1358;
    v860 = __ROR4__(v1364, 8);
    v858 = __ROR4__(v1358, 8);
    v1364 = v860;
    v1358 = v858;
    --v862;
  }
  while ( v862 );
  v89 = v1291;
  v893 = 0LL;
  v894 = 0;
  v895 = 0;
  v896 = 0LL;
  v897 = 0LL;
  do
  {
    v896 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&i1[v893]), v896);
    v898 = _mm_loadu_si128((const __m128i *)&i1[v893 + 16]);
    v893 += 32LL;
    v899 = _mm_xor_si128(v898, v897);
    v897 = v899;
  }
  while ( v893 < 0x320 );
  v900 = _mm_xor_si128(v899, v896);
  v901 = _mm_xor_si128(v900, _mm_srli_si128(v900, 8));
  v902 = _mm_xor_si128(v901, _mm_srli_si128(v901, 4));
  v903 = _mm_xor_si128(v902, _mm_srli_si128(v902, 2));
  for ( nn = _mm_cvtsi128_si32(_mm_xor_si128(v903, _mm_srli_si128(v903, 1))); v893 < 0x338; ++v893 )
    nn ^= i1[v893];
  if ( nn != 64LL )
  {
    operator delete(i1);
    v852 = (int)v1345;
    v850 = v1329;
    goto LABEL_1418;
  }
  v1502 = i1;
  v1579 = 824LL;
  i1[823] = 0;
  memset_0(&unk_18018B120, 0, 0x60uLL);
  if ( *i1 )
  {
    while ( 1 )
    {
      v905 = (const WCHAR *)i1;
      v906 = -1LL;
      do
        v60 = *(_WORD *)&i1[2 * v906++ + 2] == 0;
      while ( !v60 );
      v907 = &i1[2 * v906];
      v908 = (char *)&unk_18018B120 + 24 * v895;
      if ( !GetModuleHandleExW(0, v905, (HMODULE *)v908) )
        break;
      v894 = 0;
      if ( **(_WORD **)v908 == 23117 )
      {
        v969 = *(int *)(*(_QWORD *)v908 + 60LL);
        if ( (unsigned int)v969 < 0x10000000 )
        {
          v970 = *(_QWORD *)v908 + v969;
          if ( v970 >= *(_QWORD *)v908 )
          {
            if ( *(_DWORD *)v970 == 17744 )
            {
              if ( ((*(_WORD *)(v970 + 24) - 267) & 0xFEFF) != 0 )
              {
                v894 = -1073741811;
              }
              else
              {
                *(_QWORD *)(v908 + 12) = *(_QWORD *)(v970 + 136);
                *((_DWORD *)v908 + 2) = *(_DWORD *)(v970 + 80);
              }
            }
            else
            {
              v894 = -1073741701;
            }
          }
          else
          {
            v894 = -1073741701;
          }
        }
        else
        {
          v894 = -1073741701;
        }
      }
      else
      {
        v894 = -1073741701;
      }
      v971 = *(_DWORD *)(v907 + 2);
      v972 = 0;
      for ( i1 = v907 + 6; v972 < v971; ++v972 )
      {
        v973 = i1;
        v974 = -1LL;
        do
          ++v974;
        while ( i1[v974] );
        i1 += v974 + 1;
        if ( v894 >= 0 )
        {
          v975 = GetProcAddress(*(HMODULE *)v908, v973);
          if ( !v975 )
            goto LABEL_1407;
          off_180188000[v1313] = v975;
        }
        ++v1313;
      }
      ++v895;
      if ( !*i1 )
        goto LABEL_1407;
    }
    v894 = -1073741702;
  }
LABEL_1407:
  v850 = v1329;
  v852 = (int)v1345;
LABEL_1408:
  if ( v1502 )
  {
    v976 = GetProcessHeap();
    HeapFree(v976, 0, v1502);
  }
  v5 = 4LL;
  if ( v894 >= 0 )
  {
    v853 = dword_18018A018;
    v386 = (HMODULE *)&unk_18018B120;
    v798 = v1293;
LABEL_1420:
    dword_18018A018 = v853 + 1;
    goto LABEL_1421;
  }
  v977 = (HMODULE *)&unk_18018B120;
  v978 = 4LL;
  do
  {
    if ( *v977 )
      FreeLibrary(*v977);
    v977 += 3;
    --v978;
  }
  while ( v978 );
  v386 = (HMODULE *)&unk_18018B120;
  memset_0(&unk_18018B120, 0, 0x60uLL);
  memcpy_0(off_180188000, off_180123520, 0x170uLL);
  v798 = v1293;
LABEL_1421:
  _InterlockedExchange(&dword_18018B1A8, 0);
  v1684[0] = v852;
  v1683 = 1;
  v1684[4] = -1721306479;
  v1684[2] = 1;
  v1684[8] = 1;
  v1684[6] = 1;
  v1684[12] = v850;
  v1684[10] = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1801880D0)(0LL, 8225LL, 4LL, &v1683);
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v979 = dword_18018A018;
  if ( dword_18018A018 > 0 )
  {
    --dword_18018A018;
    if ( v979 == 1 )
    {
      v980 = (HMODULE *)&unk_18018B120;
      v981 = 4LL;
      do
      {
        if ( *v980 )
          FreeLibrary(*v980);
        v980 += 3;
        --v981;
      }
      while ( v981 );
      v386 = (HMODULE *)&unk_18018B120;
      memset_0(&unk_18018B120, 0, 0x60uLL);
      memcpy_0(off_180188000, off_180123520, 0x170uLL);
    }
  }
  v1 = 0LL;
  _InterlockedExchange(&dword_18018B1A8, 0);
  ((void (__fastcall *)(_QWORD, __int64))off_180188160[0])(0LL, v798);
LABEL_783:
  ATL::CHandle::Close((ATL::CHandle *)&v1557);
  if ( !v1383 )
    goto LABEL_450;
  v1376 = 0;
  v1369 = 0LL;
  v468 = 0LL;
  v1370 = 0LL;
  v469 = 0LL;
  v1424 = 0LL;
  v1425 = 0LL;
  v1558 = &unk_180189350;
  v1518 = 160LL;
  v470 = GetProcessHeap();
  v471 = HeapAlloc(v470, 8u, 0xA0uLL);
  v472 = v471;
  if ( !v471 )
  {
    v1 = 0LL;
    goto LABEL_804;
  }
  memcpy_0(v471, v1558, v1518);
  v473 = (unsigned int)v1518;
  v1559 = &unk_180189298;
  v468 = v472;
  v1296 = v472;
  v1519 = 8LL;
  v474 = GetProcessHeap();
  v475 = HeapAlloc(v474, 8u, 8uLL);
  v476 = v475;
  if ( !v475 )
    goto LABEL_802;
  memcpy_0(v475, v1559, v1519);
  v477 = v1519;
  v469 = v476;
  v1345 = v476;
  v1560 = __rdtsc();
  v1378 = 0;
  if ( (int)RtlUIntAdd(4LL, 4LL, &v1481) < 0 )
    goto LABEL_801;
  v1409 = v1481;
  if ( (int)RtlUIntAdd(0LL, v1481, &v1378) < 0 )
    goto LABEL_801;
  if ( (int)RtlUIntAdd(4LL, (unsigned int)v473, &v1482) < 0 )
    goto LABEL_801;
  v1409 = v1482;
  if ( (int)RtlUIntAdd(v1378, v1482, &v1378) < 0 )
    goto LABEL_801;
  if ( (int)RtlUIntAdd(4LL, v477, &v1483) < 0 )
    goto LABEL_801;
  v1409 = v1483;
  if ( (int)RtlUIntAdd(v1378, v1483, &v1378) < 0 )
    goto LABEL_801;
  if ( (int)RtlUIntAdd(4LL, 8LL, &v1484) < 0 )
    goto LABEL_801;
  v1409 = v1484;
  if ( (int)RtlUIntAdd(v1378, v1484, &v1378) < 0 )
    goto LABEL_801;
  HIDWORD(v1369) = v1378;
  v478 = v1378;
  v479 = GetProcessHeap();
  v480 = HeapAlloc(v479, 8u, v478);
  v481 = v480;
  if ( !v480 )
    goto LABEL_801;
  v1370 = v480;
  LODWORD(v1369) = 0;
  v1485 = 4;
  if ( (int)RtlULongLongAdd(v480, 4LL, &v1593) < 0 )
    goto LABEL_801;
  if ( v481 + 2 > (_DWORD *)((char *)v481 + HIDWORD(v1369)) )
    goto LABEL_801;
  v483 = v1593;
  *v481 = 4;
  *v483 = v1485;
  v484 = v1369 + 1;
  LODWORD(v1369) = v1369 + 1;
  if ( !(_DWORD)v473 )
    goto LABEL_801;
  if ( v1370 != v482 )
  {
    v982 = v1370;
    v1503 = v1370;
    if ( !v484 )
    {
LABEL_1435:
      if ( (int)RtlULongLongAdd(v982, 4LL, &v1594) >= 0 && (char *)v982 + v473 + 4 <= (char *)v1370 + HIDWORD(v1369) )
      {
        v985 = v1594;
        *v982 = v473;
        memcpy_0(v985, v472, v473);
        goto LABEL_1438;
      }
      goto LABEL_801;
    }
    while ( (int)RtlUIntAdd(4LL, (unsigned int)*v982, &v1487) >= 0 )
    {
      v1488 = v1487;
      if ( (int)RtlULongLongAdd(v982, v1487, &v1503) < 0 )
        goto LABEL_801;
      v982 = v1503;
      if ( v983 + 1 >= v984 )
        goto LABEL_1435;
    }
    goto LABEL_1467;
  }
  if ( (int)RtlUIntAdd((unsigned int)((_DWORD)v482 + 4), (unsigned int)v473, &v1486) < 0 )
  {
LABEL_1467:
    v1 = 0LL;
    goto LABEL_1468;
  }
  v1488 = v1486;
  if ( (int)RtlUIntAdd(HIDWORD(v1369), v1486, (char *)&v1369 + 4) < 0 )
    goto LABEL_801;
LABEL_1438:
  v986 = v1369 + 1;
  LODWORD(v1369) = v1369 + 1;
  if ( !v477 )
    goto LABEL_801;
  if ( v1370 )
  {
    v988 = (unsigned int *)v1370;
    v1 = 0LL;
    v1504 = (unsigned int *)v1370;
    if ( v986 )
    {
      while ( (int)RtlUIntAdd(4LL, *v988, &v1490) >= 0 )
      {
        v1491 = v1490;
        if ( (int)RtlULongLongAdd(v989, v1490, &v1504) < 0 )
          goto LABEL_1453;
        v988 = v1504;
        if ( v990 + 1 >= v986 )
          goto LABEL_1447;
      }
      goto LABEL_1468;
    }
LABEL_1447:
    if ( (int)RtlULongLongAdd(v988, 4LL, &v1595) < 0 || (char *)v991 + v477 + 4 > (char *)v1370 + HIDWORD(v1369) )
      goto LABEL_1453;
    v992 = v1595;
    *v991 = v477;
    memcpy_0(v992, v476, v477);
    v987 = v1369 + 1;
LABEL_1450:
    LODWORD(v1369) = v987;
    v1561 = v1560;
    if ( v1370 )
    {
      v993 = (unsigned int *)v1370;
      v1505 = (unsigned int *)v1370;
      if ( v987 )
      {
        while ( (int)RtlUIntAdd(4LL, *v993, &v1492) >= 0 )
        {
          v1515 = v1492;
          if ( (int)RtlULongLongAdd(v994, v1492, &v1505) < 0 )
            goto LABEL_1453;
          v993 = v1505;
          if ( v995 + 1 >= v987 )
            goto LABEL_1458;
        }
        goto LABEL_1468;
      }
LABEL_1458:
      if ( (int)RtlULongLongAdd(v993, 4LL, &v1596) < 0 || v996 + 3 > (_DWORD *)((char *)v1370 + HIDWORD(v1369)) )
        goto LABEL_1453;
      v997 = v1596;
      *v996 = 8;
      *v997 = v1561;
    }
    else
    {
      if ( (int)RtlUIntAdd(4LL, 8LL, &v1511) < 0 )
      {
LABEL_1468:
        v468 = v1296;
        goto LABEL_803;
      }
      v1515 = v1511;
      if ( (int)RtlUIntAdd(HIDWORD(v1369), v1511, (char *)&v1369 + 4) < 0 )
      {
LABEL_1453:
        v468 = v1296;
        goto LABEL_803;
      }
    }
    LODWORD(v1369) = v1369 + 1;
    if ( (int)RtlUIntAdd(4LL, 4LL, &v1514) < 0 )
      goto LABEL_1453;
    v999 = v1514;
    v1512 = v1514;
    v1433 = v1514;
    if ( (int)RtlUIntAdd(v998, 8LL, &v1513) < 0 )
      goto LABEL_1453;
    v1512 = v1513;
    if ( (int)RtlUIntAdd(v999, v1513, &v1433) < 0 )
      goto LABEL_1453;
    v1344 = 0LL;
    v1456 = 0LL;
    v1324 = 0LL;
    v1000 = 0LL;
    LODWORD(v1354) = 0;
    v1001 = 0LL;
    v1340 = 0LL;
    v1002 = 0LL;
    v1379 = 0;
    v1294 = 0LL;
    v1350 = 0LL;
    v1414 = 0;
    v1520 = __rdtsc();
    v1387 = 8;
    v1003 = RtlUIntAdd(8LL, HIDWORD(v1369), &v1387);
    if ( v1003 >= 0 )
    {
      v1006 = (v1387 + 7) & 0xFFFFFFF8;
      if ( v1006 >= v1387 )
      {
        v1387 = (v1387 + 7) & 0xFFFFFFF8;
        v1007 = v1006;
        v1008 = GetProcessHeap();
        v1009 = HeapAlloc(v1008, 8u, v1007);
        if ( v1009 )
        {
          v1453 = v1009;
          *v1009 = v1369;
          v1003 = RtlULongLongAdd(v1009, 4LL, &v1453);
          if ( v1003 >= 0 )
          {
            v1011 = v1453;
            *(_DWORD *)v1453 = HIDWORD(v1369);
            v1003 = RtlULongLongAdd(v1011, v1010, &v1453);
            if ( v1003 >= 0 )
            {
              *(_QWORD *)((char *)v1009 + v1387 - 8) = v1520;
              memcpy_0(v1453, v1370, HIDWORD(v1369));
              LODWORD(v1) = v1387;
              v1004 = 0LL;
              v1005 = 0LL;
              v1344 = v1009;
              goto LABEL_1477;
            }
          }
          v1012 = GetProcessHeap();
          HeapFree(v1012, 0, v1009);
        }
        else
        {
          v1003 = -1073741801;
        }
        v1005 = 0LL;
        v1004 = 0LL;
      }
      else
      {
        v1003 = -1073741675;
      }
    }
    v1009 = 0LL;
LABEL_1477:
    v1013 = v1003 | 0x10000000;
    if ( v1013 < 0 )
    {
LABEL_1800:
      v1 = 0LL;
      goto LABEL_1801;
    }
    v1014 = (unsigned __int8 *)v1344;
    v1015 = v1005;
    v1563 = v1005;
    v1564 = (__int64)v1005;
    v1565 = v1005;
    v1566 = (__int64)v1005;
    v1506 = v1005;
    v1562 = v1005;
    v1386 = v1005;
    if ( !v1344 )
    {
      v1016 = -1073741811;
      v1 = 0LL;
      goto LABEL_1539;
    }
    v1017 = (unsigned int)v1;
    v1390 = (unsigned int)v1;
    if ( (_DWORD)v1 )
    {
      v1400 = (char *)operator new((unsigned int)v1 + 8LL);
      v1018 = v1400;
      if ( v1400 )
      {
        v1019 = 0;
        v1314 = 0;
        v1020 = 0LL;
        if ( v1017 )
        {
          if ( v1017 >= 0x20 )
          {
            v1021 = 0LL;
            v1022 = 0LL;
            do
            {
              v1021 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1014[v1020]), v1021);
              v1023 = _mm_loadu_si128((const __m128i *)&v1014[v1020 + 16]);
              v1020 += 32LL;
              v1024 = _mm_xor_si128(v1023, v1022);
              v1022 = v1024;
            }
            while ( v1020 < (v1017 & 0xFFFFFFE0) );
            v1025 = _mm_xor_si128(v1024, v1021);
            v1026 = _mm_xor_si128(v1025, _mm_srli_si128(v1025, 8));
            v1027 = _mm_xor_si128(v1026, _mm_srli_si128(v1026, 4));
            v1028 = _mm_xor_si128(v1027, _mm_srli_si128(v1027, 2));
            v1019 = _mm_cvtsi128_si32(_mm_xor_si128(v1028, _mm_srli_si128(v1028, 1)));
            v1314 = v1019;
          }
          if ( v1020 < v1017 )
          {
            do
              v1019 ^= v1014[v1020++];
            while ( v1020 < v1017 );
            v1314 = v1019;
          }
        }
        v1029 = -1;
        v1641 = 0xC81ECB17B1B54A58uLL;
        v1030 = 0;
        v1356 = 0;
        v1349 = -1;
        v1031 = v1014;
        v1032 = v1400;
        v1033 = v1017 & 7;
        if ( (v1017 & 7) != 0 )
        {
          v1034 = 0;
          v1035 = 56;
          do
          {
            v1036 = *v1031;
            if ( v1034 >= 4 )
              LODWORD(v1000) = (v1036 << v1035) | v1000;
            else
              LODWORD(v1002) = (v1036 << (v1035 - 32)) | (unsigned int)v1002;
            ++v1034;
            v1035 -= 8;
            ++v1031;
          }
          while ( v1034 < v1033 );
          v1030 = (unsigned int)v1002 ^ 0xB17A307A;
          v1037 = v1000 ^ 0x42F6B18D;
          v1356 = (unsigned int)v1002 ^ 0xB17A307A;
          v1038 = 0;
          v1349 = v1000 ^ 0x42F6B18D;
          if ( (v1017 & 7) != 0 )
          {
            do
            {
              if ( v1038 >= 4 )
              {
                v1037 = __ROL4__(v1037, 8);
                *v1032 = v1037;
              }
              else
              {
                v1030 = __ROL4__(v1030, 8);
                *v1032 = v1030;
              }
              ++v1038;
              ++v1032;
            }
            while ( v1038 < v1033 );
            v1030 = v1356;
            v1037 = v1349;
          }
          v1039 = v1033 - 4;
          if ( v1039 <= 0 )
          {
            v1349 = 0;
            v1029 = 0;
            if ( v1039 < 0 )
            {
              v1030 = v1030 >> (-8 * v1039) << (-8 * v1039);
              v1356 = v1030;
            }
          }
          else
          {
            v1029 = v1037 >> (8 * (4 - v1039)) << (8 * (4 - v1039));
            v1349 = v1029;
          }
        }
        v1040 = v1017 >> 3;
        if ( v1017 >> 3 )
        {
          v1041 = HIDWORD(v1641);
          v1042 = v1032 + 7;
          v1043 = WORD2(v1641);
          v1044 = HIWORD(HIDWORD(v1641));
          v1045 = v1031 + 2;
          do
          {
            v1046 = *(v1045 - 1);
            v1047 = *(v1045 - 2);
            v1048 = v1045[2];
            v1045 += 8;
            v1049 = *(v1045 - 7) | ((*(v1045 - 8) | ((v1046 | (v1047 << 8)) << 8)) << 8);
            v1050 = *(v1045 - 3) | ((*(v1045 - 4) | ((*(v1045 - 5) | (v1048 << 8)) << 8)) << 8);
            v1051 = v1050 ^ v1029;
            v1052 = v1041 ^ v1030 ^ v1049 ^ (v1051 - 19032);
            v1053 = (__ROR4__(v1052, 7) + WORD1(v1641) * __ROR4__(v1030 ^ v1049 ^ (v1051 - 19032), 15)) ^ v1051;
            v1054 = (v1043 * __ROR4__(v1053 - 1313519016, 9) - __ROR4__(v1053, 10)) ^ v1052;
            v1055 = (__ROL4__(v1054, 5) + v1044 * __ROL4__(v1054 ^ v1043, 4)) ^ v1053;
            v1056 = (HIDWORD(v1641) - (v1055 ^ 0xB1B54A58)) ^ v1054;
            v1057 = (WORD1(v1641) * (v1056 - 19032) - (v1056 >> 6)) ^ v1055;
            v1058 = (19032 * (v1043 ^ __ROR4__(v1057, 15))) ^ v1056;
            v1059 = (v1043 * (v1044 + __ROR4__(~v1058, 3))) ^ v1057;
            v1060 = (v1059 - HIDWORD(v1641) - 19032) ^ v1058;
            v1061 = (WORD1(v1641) * (v1060 ^ v1044)) ^ __ROR4__(v1060, 10) ^ v1059;
            v1062 = __ROR4__(v1061, 3) ^ (v1043 * __ROL4__(v1061 ^ 0x4A58, 6)) ^ v1060;
            v1063 = (19032 * (__ROR4__(v1062, 15) - v1044)) ^ v1061;
            v1064 = (v1063 >> 15) ^ (19032 * __ROL4__(v1063 - v1043, 3)) ^ (v1063 >> 1) ^ (19032 * (v1063 ^ v1044)) ^ v1062;
            v1065 = (WORD1(v1641) * (v1064 - v1043) - (v1064 >> 13)) ^ v1063;
            v1066 = __ROR4__(v1065, 11) ^ (v1043 * __ROR4__(-1313519016 - v1065, 9)) ^ v1064;
            v1067 = (v1066 - v1044 + 1313519016) ^ v1065;
            v1068 = (19032 * (v1067 ^ WORD1(v1641)) - __ROR4__(v1067, 7)) ^ v1066;
            v1069 = (WORD1(v1641) * __ROL4__(v1068 ^ v1044, 4) - __ROR4__(v1068, 16)) ^ v1067;
            v1070 = (__ROR4__(v1069, 4) + v1043 * __ROR4__(-1313519016 - v1069, 10)) ^ v1068;
            v1071 = __ROR4__(v1070, 9) ^ (v1044 * __ROR4__(v1070 + 1313519016, 4)) ^ v1069;
            v1042 += 8;
            v1072 = (19032 * __ROL4__(HIDWORD(v1641) ^ v1071, 8) - __ROL4__(v1071, 2)) ^ v1070;
            v1073 = (WORD1(v1641) * __ROR4__(HIDWORD(v1641) - v1072, 11) - __ROR4__(v1072, 12)) ^ v1071;
            v1074 = (v1073 >> 8) ^ (v1043 * (WORD1(v1641) ^ v1073)) ^ v1072;
            v1041 = HIDWORD(v1641);
            v1356 = (unsigned int)v1002 ^ v1074;
            LODWORD(v1002) = v1049;
            v1349 = v1074 ^ v1073 ^ v1000 ^ HIDWORD(v1641) ^ 0xB1B54A58;
            LODWORD(v1000) = v1050;
            *(v1042 - 12) = v1356;
            v1356 = __ROR4__(v1356, 8);
            *(v1042 - 8) = v1349;
            v1349 = __ROR4__(v1349, 8);
            *(v1042 - 13) = v1356;
            v1356 = __ROR4__(v1356, 8);
            *(v1042 - 9) = v1349;
            v1349 = __ROR4__(v1349, 8);
            *(v1042 - 14) = v1356;
            v1356 = __ROR4__(v1356, 8);
            *(v1042 - 10) = v1349;
            v1349 = __ROR4__(v1349, 8);
            *(v1042 - 15) = v1356;
            *(v1042 - 11) = v1349;
            v1030 = __ROR4__(v1356, 8);
            v1029 = __ROR4__(v1349, 8);
            v1356 = v1030;
            v1349 = v1029;
            --v1040;
          }
          while ( v1040 );
          v89 = v1291;
          v1015 = v1386;
          v1017 = v1390;
          v1018 = v1400;
        }
        v1075 = v1017 + 8;
        *(_QWORD *)&v1018[v1017] = v1314;
        v1506 = v1018;
        v1563 = &qword_180189340;
        v1562 = (_QWORD *)(v1017 + 8);
        v1564 = 8LL;
        v1565 = xmmword_1801892A0;
        v1566 = 160LL;
        v1076 = GetProcessHeap();
        v1077 = HeapAlloc(v1076, 8u, 0x30uLL);
        v1078 = v1077;
        if ( v1077 )
        {
          *v1077 = v1075;
          v1079 = GetProcessHeap();
          v1080 = HeapAlloc(v1079, 8u, v1075);
          if ( v1080 )
          {
            *((_QWORD *)v1078 + 1) = v1080;
            memcpy_0(v1080, v1018, v1075);
            v1078[4] = 160;
            v1081 = GetProcessHeap();
            v1082 = HeapAlloc(v1081, 8u, 0xA0uLL);
            if ( v1082 )
            {
              *((_QWORD *)v1078 + 3) = v1082;
              *v1082 = xmmword_1801892A0[0];
              v1082[1] = xmmword_1801892A0[1];
              v1082[2] = xmmword_1801892A0[2];
              v1082[3] = xmmword_1801892A0[3];
              v1082[4] = xmmword_1801892A0[4];
              v1082[5] = xmmword_1801892A0[5];
              v1082[6] = xmmword_1801892A0[6];
              v1082[7] = xmmword_1801892A0[7];
              v1082[8] = xmmword_1801892A0[8];
              v1082[9] = xmmword_1801892A0[9];
              v1078[8] = 8;
              v1083 = GetProcessHeap();
              v1084 = HeapAlloc(v1083, 8u, 8uLL);
              if ( v1084 )
              {
                *((_QWORD *)v1078 + 5) = v1084;
                v1 = 0LL;
                v1016 = 0;
                *v1084 = qword_180189340;
                v1015 = v1078;
                goto LABEL_1525;
              }
            }
          }
          v1085 = (void *)*((_QWORD *)v1078 + 1);
          if ( v1085 )
          {
            v1086 = GetProcessHeap();
            HeapFree(v1086, 0, v1085);
            v1 = 0LL;
            *((_QWORD *)v1078 + 1) = 0LL;
          }
          else
          {
            v1 = 0LL;
          }
          v1087 = (void *)*((_QWORD *)v1078 + 3);
          if ( v1087 )
          {
            v1088 = GetProcessHeap();
            HeapFree(v1088, 0, v1087);
            *((_QWORD *)v1078 + 3) = 0LL;
          }
          v1089 = (void *)*((_QWORD *)v1078 + 5);
          if ( v1089 )
          {
            v1090 = GetProcessHeap();
            HeapFree(v1090, 0, v1089);
            *((_QWORD *)v1078 + 5) = 0LL;
          }
          v1091 = GetProcessHeap();
          HeapFree(v1091, 0, v1078);
        }
        else
        {
          v1 = 0LL;
        }
        v1016 = -1073741801;
LABEL_1525:
        v1000 = 0LL;
        v1002 = 0LL;
        v1004 = 0LL;
        if ( v1016 >= 0 )
        {
          v1456 = v1015;
          v1015 = 0LL;
        }
        goto LABEL_1529;
      }
      v1004 = 0LL;
    }
    v1016 = -1073741823;
    v1 = 0LL;
LABEL_1529:
    v1092 = v1506;
    if ( v1506 )
    {
      v1093 = GetProcessHeap();
      HeapFree(v1093, 0, v1092);
      v1004 = 0LL;
      v1506 = 0LL;
    }
    if ( v1015 )
    {
      v1094 = (void *)v1015[1];
      if ( v1094 )
      {
        v1095 = GetProcessHeap();
        HeapFree(v1095, 0, v1094);
        v1015[1] = 0LL;
      }
      v1096 = (void *)v1015[3];
      if ( v1096 )
      {
        v1097 = GetProcessHeap();
        HeapFree(v1097, 0, v1096);
        v1015[3] = 0LL;
      }
      v1098 = (void *)v1015[5];
      if ( v1098 )
      {
        v1099 = GetProcessHeap();
        HeapFree(v1099, 0, v1098);
        v1015[5] = 0LL;
      }
      v1100 = GetProcessHeap();
      HeapFree(v1100, 0, v1015);
      v1004 = 0LL;
    }
LABEL_1539:
    v1013 = v1016 | 0x10000000;
    if ( v1013 < 0 )
    {
      v1001 = 0LL;
      v1009 = v1344;
      goto LABEL_1801;
    }
    v1101 = (const void **)v1456;
    v1372 = 4;
    v1103 = RtlUIntAdd(4LL, *(unsigned int *)v1456, &v1372);
    if ( v1103 < 0
      || (v1103 = RtlUIntAdd(v1372, v1102, &v1372), v1103 < 0)
      || (v1103 = RtlUIntAdd(v1372, *((unsigned int *)v1101 + 4), &v1372), v1103 < 0)
      || (v1103 = RtlUIntAdd(v1372, 4LL, &v1372), v1103 < 0) )
    {
      v1104 = v1410;
    }
    else
    {
      v1103 = RtlUIntAdd(v1372, *((unsigned int *)v1101 + 8), &v1372);
      v1104 = v1410;
      if ( v1103 >= 0 )
        v1104 = v1372;
      v1410 = v1104;
    }
    if ( v1103 < 0 )
    {
      v1108 = v1354;
    }
    else
    {
      v1105 = v1104;
      v1106 = GetProcessHeap();
      v1107 = HeapAlloc(v1106, 8u, v1105);
      if ( v1107 )
      {
        v1109 = *(_DWORD *)v1101;
        v1394 = v1107;
        *v1107 = v1109;
        v1103 = RtlULongLongAdd(v1107, 4LL, &v1394);
        if ( v1103 < 0 )
          goto LABEL_1558;
        memcpy_0(v1394, v1101[1], *(unsigned int *)v1101);
        v1103 = RtlULongLongAdd(v1394, *(unsigned int *)v1101, &v1394);
        if ( v1103 < 0 )
          goto LABEL_1558;
        v1110 = v1394;
        *(_DWORD *)v1394 = *((_DWORD *)v1101 + 4);
        v1103 = RtlULongLongAdd(v1110, 4LL, &v1394);
        if ( v1103 < 0
          || (memcpy_0(v1394, v1101[3], *((unsigned int *)v1101 + 4)),
              v1103 = RtlULongLongAdd(v1394, *((unsigned int *)v1101 + 4), &v1394),
              v1103 < 0)
          || (v1111 = v1394,
              *(_DWORD *)v1394 = *((_DWORD *)v1101 + 8),
              v1103 = RtlULongLongAdd(v1111, 4LL, &v1394),
              v1103 < 0)
          || (memcpy_0(v1394, v1101[5], *((unsigned int *)v1101 + 8)),
              v1103 = RtlULongLongAdd(v1394, *((unsigned int *)v1101 + 8), &v1394),
              v1103 < 0) )
        {
LABEL_1558:
          v1112 = GetProcessHeap();
          HeapFree(v1112, 0, v1107);
          v1108 = v1354;
          v1004 = (unsigned int)v1354;
        }
        else
        {
          v1108 = v1410;
          v1004 = (unsigned __int64)v1107;
          v1324 = v1107;
        }
      }
      else
      {
        v1108 = v1354;
        v1103 = -1073741801;
        v1004 = (unsigned int)v1354;
      }
    }
    v1013 = v1103 | 0x10000000;
    if ( v1013 < 0 )
      goto LABEL_1799;
    v1113 = 0;
    v1434 = 8;
    v1567 = 0LL;
    v1501 = 0;
    v1568 = 0LL;
    v1509 = 0;
    v1114 = RtlUIntAdd(8LL, v1433, &v1434);
    v1013 = v1114 | 0x10000000;
    if ( v1114 < 0 )
    {
LABEL_1604:
      if ( v1013 < 0 )
        goto LABEL_1799;
      v1133 = v1379;
      v1134 = GetProcessHeap();
      v1135 = (unsigned __int16 *)HeapAlloc(v1134, 8u, v1133);
      if ( v1135 )
      {
        v1000 = (unsigned __int64)v1135;
        v1340 = v1135;
        v1013 = 0x10000000;
      }
      else
      {
        v1013 = -805306345;
      }
      v1004 = (unsigned __int64)v1324;
      if ( v1013 < 0 )
        goto LABEL_1799;
      if ( !v1324 || !v1000 )
      {
        v1013 = -2147024809;
        goto LABEL_1799;
      }
      v1587 = v1108;
      v1 = 0LL;
      v1586[0] = v1324;
      v1586[1] = v1000;
      v1588 = v1379;
      v1589 = 0;
      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
      {
        v1140 = GetProcAddress(hModule, "NtQuerySystemInformation");
        if ( v1140 )
        {
          v1141 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1140)(134LL, v1586);
          v1137 = v1379;
          v1013 = v1141 | 0x10000000;
          if ( v1141 >= 0 )
            v1137 = v1588;
          v1379 = v1137;
          goto LABEL_1626;
        }
        v1136 = GetLastError();
        v1013 = v1136;
        if ( v1136 <= 0 )
        {
LABEL_1614:
          v1137 = v1379;
          if ( v1013 >= 0 )
          {
            v1013 = -2147467259;
            goto LABEL_1616;
          }
LABEL_1626:
          if ( v1013 == -805306333 )
          {
            v1013 = -2147024774;
            goto LABEL_1628;
          }
LABEL_1616:
          if ( v1013 >= 0 )
          {
            v1138 = 0LL;
            if ( v1137 < 4 )
            {
              v1139 = -1073741762;
LABEL_1619:
              v1001 = 0LL;
              goto LABEL_1711;
            }
            v1142 = *(unsigned int *)v1000;
            v1143 = -1LL;
            v1306 = *(_DWORD *)v1000;
            v1144 = -1LL;
            if ( v1000 + 4 >= v1000 )
              v1144 = v1000 + 4;
            v1139 = v1000 + 4 < v1000 ? 0xC0000095 : 0;
            if ( v1000 + 4 < v1000 )
              goto LABEL_1619;
            if ( v1137 - 4 < (unsigned int)v1142 )
            {
              v1139 = -1073741762;
              v1001 = 0LL;
              goto LABEL_1711;
            }
            v1145 = -1LL;
            v1391 = *(unsigned int *)v1000;
            if ( v1144 + v1142 >= v1144 )
              v1145 = v1144 + v1142;
            v1139 = v1144 + v1142 < v1144 ? 0xC0000095 : 0;
            if ( v1144 + v1142 < v1144 )
              goto LABEL_1619;
            v1146 = -1;
            v1147 = -1;
            if ( (unsigned int)v1142 < 0xFFFFFFFC )
              v1147 = v1142 + 4;
            v1139 = (unsigned int)v1142 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(v1142 + 4) < 4 )
              goto LABEL_1619;
            if ( v1137 - v1147 < 4 )
            {
              v1139 = -1073741762;
              v1001 = 0LL;
              goto LABEL_1711;
            }
            v1148 = *(unsigned int *)v1145;
            v1149 = -1LL;
            if ( v1145 + 4 >= v1145 )
              v1149 = v1145 + 4;
            v1139 = v1145 + 4 < v1145 ? 0xC0000095 : 0;
            if ( v1145 + 4 < v1145 )
              goto LABEL_1651;
            v1150 = v1147 + 4;
            if ( v1147 + 4 >= v1147 )
              v1146 = v1147 + 4;
            v1139 = v1150 < v1147 ? 0xC0000095 : 0;
            if ( v1150 < v1147 )
              goto LABEL_1651;
            if ( v1137 - v1146 < (unsigned int)v1148 )
            {
              v1139 = -1073741762;
LABEL_1651:
              v1001 = 0LL;
              v1 = 0LL;
LABEL_1710:
              v1000 = (unsigned __int64)v1340;
LABEL_1711:
              v1013 = v1139 | 0x10000000;
              if ( v1013 < 0 )
                goto LABEL_1629;
              v1570 = 0LL;
              v1454 = 0LL;
              if ( !v1001 )
              {
                v1009 = v1344;
                v1013 = -805306355;
                v1004 = (unsigned __int64)v1324;
                goto LABEL_1801;
              }
              v1182 = (char *)v1001[1];
              v1400 = v1182;
              if ( !v1182 )
              {
                v1009 = v1344;
                v1013 = -805306355;
                v1004 = (unsigned __int64)v1324;
                goto LABEL_1801;
              }
              v1183 = *(unsigned int *)v1001;
              if ( !(_DWORD)v1183 )
              {
                v1009 = v1344;
                v1013 = -805306355;
                v1004 = (unsigned __int64)v1324;
                goto LABEL_1801;
              }
              v1184 = v1183 - 8;
              v1386 = (void *)(v1183 - 8);
              v1390 = (__int64)operator new(v1183 - 8);
              v1185 = (int *)v1390;
              if ( v1390 )
              {
                v1186 = 0;
                v1642 = 0x7F1137FAB69605ELL;
                v1187 = v1182;
                v1188 = (_BYTE *)v1390;
                v1189 = v1184 & 7;
                if ( (v1184 & 7) != 0 )
                {
                  v1352 = 0;
                  v1347 = -1;
                  v1190 = 0;
                  v1384 = 0;
                  v1191 = 56;
                  do
                  {
                    v1192 = (unsigned __int8)*v1187;
                    if ( v1190 >= 4 )
                    {
                      v1193 = (v1192 << v1191) | v1384;
                      v1384 = v1193;
                    }
                    else
                    {
                      v1193 = v1384;
                      LODWORD(v1) = (v1192 << (v1191 - 32)) | v1;
                    }
                    ++v1190;
                    v1191 -= 8;
                    ++v1187;
                  }
                  while ( v1190 < v1189 );
                  v1194 = v1 ^ 0x92F65A5;
                  v1195 = v1193 ^ 0x699A899C;
                  v1352 = v1 ^ 0x92F65A5;
                  v1347 = v1193 ^ 0x699A899C;
                  v1196 = 0;
                  if ( (v1184 & 7) != 0 )
                  {
                    do
                    {
                      if ( v1196 >= 4 )
                      {
                        v1195 = __ROL4__(v1195, 8);
                        *v1188 = v1195;
                      }
                      else
                      {
                        v1194 = __ROL4__(v1194, 8);
                        *v1188 = v1194;
                      }
                      ++v1196;
                      ++v1188;
                    }
                    while ( v1196 < v1189 );
                    v1194 = v1352;
                    v1195 = v1347;
                  }
                  v1197 = v1189 - 4;
                  if ( v1189 - 4 <= 0 )
                  {
                    v1347 = 0;
                    v1198 = 0;
                    if ( v1197 < 0 )
                    {
                      v1194 = v1194 >> (-8 * v1197) << (-8 * v1197);
                      v1352 = v1194;
                    }
                  }
                  else
                  {
                    v1198 = v1195 >> (8 * (4 - v1197)) << (8 * (4 - v1197));
                    v1347 = v1198;
                  }
                }
                else
                {
                  v1198 = 0;
                  v1347 = 0;
                  v1194 = 0;
                  v1352 = 0;
                }
                v1199 = v1184 >> 3;
                if ( v1184 >> 3 )
                {
                  v1200 = HIDWORD(v1642);
                  v1201 = v1188 + 7;
                  v1202 = WORD2(v1642);
                  v1203 = HIWORD(HIDWORD(v1642));
                  v1204 = (unsigned __int8 *)(v1187 + 2);
                  do
                  {
                    v1205 = *(v1204 - 1);
                    v1206 = *(v1204 - 2);
                    v1207 = v1204[2];
                    v1204 += 8;
                    v1208 = *(v1204 - 7) | ((*(v1204 - 8) | ((v1205 | (v1206 << 8)) << 8)) << 8);
                    v1209 = v1208 ^ v1194;
                    v1210 = *(v1204 - 3) | ((*(v1204 - 4) | ((*(v1204 - 5) | (v1207 << 8)) << 8)) << 8);
                    v1211 = v1209 ^ v1210 ^ v1198 ^ v1200 ^ 0xAB69605E;
                    v1212 = (__ROL4__(v1211, 10) + v1202 * __ROL4__(v1211 + 1419157410, 5)) ^ v1209;
                    v1213 = (WORD1(v1642) * __ROR4__(v1212 + v1200, 9) - __ROL4__(v1212, 2)) ^ v1211;
                    v1214 = (24670 * (v1213 - v1202) - (v1213 >> 13)) ^ v1212;
                    v1215 = (v1203 * __ROL4__(v1214 ^ WORD1(v1642), 6) - __ROL4__(v1214, 2)) ^ v1213;
                    v1216 = (v1200 - (v1215 ^ 0xAB69605E)) ^ v1214;
                    v1217 = (WORD1(v1642) * (v1216 ^ v1202)) ^ __ROR4__(v1216, 6) ^ v1215;
                    v1218 = (__ROL4__(v1217, 2) + 24670 * __ROR4__(v1217 + v1200, 15)) ^ v1216;
                    v1219 = (v1203 * __ROR4__(v1218 + 1419157410, 14) - __ROL4__(v1218, 8)) ^ v1217;
                    v1220 = __ROR4__(v1219, 10) ^ (v1202 * __ROR4__(v1219 ^ 0xAB69605E, 12)) ^ v1218;
                    v1221 = (v1220 >> 10) ^ (WORD1(v1642) * (v1220 ^ v1203)) ^ v1219;
                    v1222 = (v1203 * (__ROR4__(~v1221, 5) + 24670)) ^ v1220;
                    v1223 = v1221 ^ (v1222 - v1203) ^ 0xAB69605E;
                    v1224 = ((v1223 >> 2) + v1202 * __ROL4__(v1223 ^ v1203, 2)) ^ v1222;
                    v1225 = (__ROL4__(v1224, 7) + WORD1(v1642) * __ROR4__(v1224 - v1200, 6)) ^ v1223;
                    v1226 = (24670 * (v1225 ^ v1202) + __ROR4__(v1225, 9)) ^ v1224;
                    v1227 = (__ROL4__(v1226, 7) + v1203 * __ROL4__(v1226 ^ WORD1(v1642), 5)) ^ v1225;
                    v1228 = v1200 ^ v1226 ^ v1227 ^ 0xAB69605E;
                    v1229 = (v1202 * (__ROR4__(v1228, 3) - WORD1(v1642))) ^ v1227;
                    v1230 = (24670 * __ROR4__(v1229 - v1200, 1) - __ROR4__(v1229, 6)) ^ v1228;
                    v1201 += 8;
                    v1231 = (__ROL4__(v1230, 14) + v1203 * __ROL4__(v1230 - 1419157410, 3)) ^ v1229;
                    v1232 = (v1202 * __ROL4__(v1231 - 1419157410, 15) - __ROR4__(v1231, 14)) ^ v1230;
                    v1233 = (v1232 >> 3) ^ (WORD1(v1642) * (v1232 ^ 0x605E)) ^ v1231;
                    v1347 = v1384 ^ v1233;
                    v1384 = v1210;
                    v1234 = v1 ^ __ROL4__(v1233, 2) ^ (24670 * __ROL4__(v1200 ^ v1233, 4));
                    LODWORD(v1) = v1208;
                    v1352 = v1234 ^ v1232;
                    *(v1201 - 12) = v1234 ^ v1232;
                    v1352 = __ROR4__(v1352, 8);
                    *(v1201 - 8) = v1347;
                    v1347 = __ROR4__(v1347, 8);
                    *(v1201 - 13) = v1352;
                    v1352 = __ROR4__(v1352, 8);
                    *(v1201 - 9) = v1347;
                    v1347 = __ROR4__(v1347, 8);
                    *(v1201 - 14) = v1352;
                    v1352 = __ROR4__(v1352, 8);
                    *(v1201 - 10) = v1347;
                    v1347 = __ROR4__(v1347, 8);
                    *(v1201 - 15) = v1352;
                    *(v1201 - 11) = v1347;
                    v1194 = __ROR4__(v1352, 8);
                    v1198 = __ROR4__(v1347, 8);
                    v1352 = v1194;
                    v1347 = v1198;
                    --v1199;
                  }
                  while ( v1199 );
                  v89 = v1291;
                  v1184 = (unsigned __int64)v1386;
                  v1185 = (int *)v1390;
                  v1001 = v1294;
                  v1186 = 0;
                }
                v1 = 0LL;
                v1235 = 0LL;
                if ( v1184 )
                {
                  if ( v1184 >= 0x20 )
                  {
                    v1236 = 0LL;
                    v1237 = 0LL;
                    do
                    {
                      v1236 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v1185 + v1235)), v1236);
                      v1238 = _mm_loadu_si128((const __m128i *)((char *)v1185 + v1235 + 16));
                      v1235 += 32LL;
                      v1239 = _mm_xor_si128(v1238, v1237);
                      v1237 = v1239;
                    }
                    while ( v1235 < (v1184 & 0xFFFFFFFFFFFFFFE0uLL) );
                    v1240 = _mm_xor_si128(v1239, v1236);
                    v1241 = _mm_xor_si128(v1240, _mm_srli_si128(v1240, 8));
                    v1242 = _mm_xor_si128(v1241, _mm_srli_si128(v1241, 4));
                    v1243 = _mm_xor_si128(v1242, _mm_srli_si128(v1242, 2));
                    v1186 = _mm_cvtsi128_si32(_mm_xor_si128(v1243, _mm_srli_si128(v1243, 1)));
                  }
                  for ( ; v1235 < v1184; ++v1235 )
                    v1186 ^= *((_BYTE *)v1185 + v1235);
                }
                if ( v1186 == *(_QWORD *)&v1400[v1184] )
                {
                  v1000 = (unsigned __int64)v1340;
                  v1002 = v1185;
                  v1570 = v1184;
                  v1013 = 0x10000000;
                  v1350 = v1185;
                  v1454 = 0LL;
                  v1414 = v1184;
                  goto LABEL_1753;
                }
                operator delete(v1185);
                v1000 = (unsigned __int64)v1340;
                v1002 = 0LL;
              }
              v1244 = v1454;
              v1013 = -805306367;
              if ( v1454 )
              {
                v1245 = GetProcessHeap();
                HeapFree(v1245, 0, v1244);
                v1454 = 0LL;
              }
              LODWORD(v1184) = v1414;
LABEL_1753:
              if ( v1013 >= 0 )
              {
                v1388 = 0;
                v1455 = v1002;
                if ( (unsigned int)v1184 < 4 )
                {
                  v1246 = -1073741762;
LABEL_1784:
                  v1009 = v1344;
                  v1013 = v1246 | 0x10000000;
                  v1004 = (unsigned __int64)v1324;
                  goto LABEL_1801;
                }
                v1332 = *v1002;
                v1246 = RtlULongLongAdd(v1002, 4LL, &v1455);
                if ( v1246 < 0 )
                  goto LABEL_1784;
                v1246 = RtlUIntAdd(0LL, 4LL, &v1388);
                if ( v1246 < 0 )
                  goto LABEL_1784;
                if ( (unsigned int)v1184 - v1388 < 4 )
                {
                  v1246 = -1073741762;
                  goto LABEL_1784;
                }
                v1247 = *(unsigned int *)v1455;
                v1246 = RtlULongLongAdd(v1455, 4LL, &v1455);
                if ( v1246 < 0 || (v1246 = RtlUIntAdd(v1248, 4LL, &v1388), v1246 < 0) )
                {
LABEL_1783:
                  v1 = 0LL;
                  goto LABEL_1784;
                }
                if ( (unsigned int)v1184 - v1388 < (unsigned int)v1247 )
                {
                  v1246 = -1073741762;
                  goto LABEL_1783;
                }
                v1246 = RtlUIntAdd(v1388, (unsigned int)v1247, &v1388);
                if ( v1246 < 0 )
                  goto LABEL_1783;
                v1250 = (unsigned int)v1184;
                v1251 = v1455;
                if ( (char *)v1002 + v1250 < (char *)v1455 + v1247
                  || (unsigned __int64)(v1250 + (char *)v1002 - v1247 - (_BYTE *)v1455) >= 8 )
                {
                  v1246 = -1073741762;
                  goto LABEL_1782;
                }
                v1252 = 0LL;
                v1246 = 0;
                v1253 = 0;
                if ( v1455 )
                {
                  v1246 = RtlULongLongAdd(v1455, v1247, &v1571);
                  if ( v1246 < 0 )
                    goto LABEL_1793;
                  v1255 = v1571;
                  if ( (unsigned __int64)v1251 < v1571 )
                  {
                    while ( 1 )
                    {
                      v1246 = RtlULongLongAdd(v1254, 4LL, &v1572);
                      if ( v1246 < 0 )
                        break;
                      if ( v1572 > v1257 )
                        goto LABEL_1780;
                      v1258 = RtlUIntAdd(4LL, *v1256, v1510);
                      v1246 = v1258;
                      if ( v1258 >= 0 )
                        v1260 = v1510[0];
                      v1510[1] = v1260;
                      if ( v1258 < 0 )
                        break;
                      v1246 = RtlULongLongAdd(v1259, v1260, &v1573);
                      if ( v1246 < 0 )
                        break;
                      v1254 = v1573;
                      if ( v1573 > v1255 )
                        goto LABEL_1780;
                      ++v1253;
                      if ( v1573 >= v1255 )
                      {
                        v1249 = v1332;
                        goto LABEL_1779;
                      }
                    }
                    v1249 = v1332;
                    goto LABEL_1793;
                  }
LABEL_1779:
                  if ( v1254 != v1255 )
                  {
LABEL_1780:
                    v1246 = -1073741811;
LABEL_1781:
                    v1002 = (int *)v1350;
                    v1000 = (unsigned __int64)v1340;
LABEL_1782:
                    v1001 = v1294;
                    goto LABEL_1783;
                  }
                }
                if ( (_DWORD)v1247 )
                {
                  v1261 = GetProcessHeap();
                  v1262 = HeapAlloc(v1261, 8u, v1247);
                  v1249 = v1332;
                  v1252 = v1262;
                  if ( !v1262 )
                  {
                    v1246 = -1073741801;
                    goto LABEL_1793;
                  }
                  v1246 = 0;
                }
                if ( v1251 )
                {
                  memcpy_0(v1252, v1251, v1247);
                  v1249 = v1332;
                }
                v1425 = v1252;
                v1424 = __PAIR64__(v1247, v1253);
LABEL_1793:
                if ( v1246 >= 0 )
                {
                  v1001 = v1294;
                  v1 = 0LL;
                  v1000 = (unsigned __int64)v1340;
                  v1002 = (int *)v1350;
                  if ( v1249 != (_DWORD)v1424 )
                    v1246 = -1073741762;
                  goto LABEL_1784;
                }
                goto LABEL_1781;
              }
LABEL_1629:
              v1009 = v1344;
              v1004 = (unsigned __int64)v1324;
LABEL_1801:
              if ( v1009 )
              {
                v1263 = GetProcessHeap();
                HeapFree(v1263, 0, v1009);
                v1004 = (unsigned __int64)v1324;
              }
              v1264 = v1456;
              if ( v1456 )
              {
                v1265 = (void *)*((_QWORD *)v1456 + 1);
                if ( v1265 )
                {
                  v1266 = GetProcessHeap();
                  HeapFree(v1266, 0, v1265);
                  v1264[1] = 0LL;
                }
                v1267 = (void *)v1264[3];
                if ( v1267 )
                {
                  v1268 = GetProcessHeap();
                  HeapFree(v1268, 0, v1267);
                  v1264[3] = 0LL;
                }
                v1 = v1264[5];
                if ( v1 )
                {
                  v1269 = GetProcessHeap();
                  HeapFree(v1269, 0, (LPVOID)v1);
                  v1 = 0LL;
                  v1264[5] = 0LL;
                }
                v1270 = GetProcessHeap();
                HeapFree(v1270, 0, v1264);
                v1004 = (unsigned __int64)v1324;
                v1456 = (LPVOID)v1;
              }
              if ( v1004 )
              {
                v1271 = GetProcessHeap();
                HeapFree(v1271, 0, v1324);
              }
              if ( v1000 )
              {
                v1272 = GetProcessHeap();
                HeapFree(v1272, 0, (LPVOID)v1000);
              }
              if ( v1001 )
              {
                v1273 = (void *)v1001[1];
                if ( v1273 )
                {
                  v1274 = GetProcessHeap();
                  HeapFree(v1274, 0, v1273);
                  v1001[1] = v1;
                }
                v1275 = (void *)v1001[3];
                if ( v1275 )
                {
                  v1276 = GetProcessHeap();
                  HeapFree(v1276, 0, v1275);
                  v1001[3] = v1;
                }
                v1277 = (void *)v1001[5];
                if ( v1277 )
                {
                  v1278 = GetProcessHeap();
                  HeapFree(v1278, 0, v1277);
                  v1001[5] = v1;
                }
                v1279 = GetProcessHeap();
                HeapFree(v1279, 0, v1001);
              }
              if ( v1002 )
              {
                v1280 = GetProcessHeap();
                HeapFree(v1280, 0, v1002);
              }
              if ( v1013 >= 0 )
              {
                if ( (_DWORD)v1424 )
                {
                  v1281 = (unsigned int *)v1425;
                  if ( v1425 )
                  {
                    v1507 = v1425;
                    if ( (int)RtlULongLongAdd(v1425, 4LL, &v1507) >= 0 )
                    {
                      v1284 = v1507;
                      v1555 = v1283;
                      if ( !v1283 )
                        v1284 = (_DWORD *)v1;
                      v1507 = v1284;
                      v1590 = v1284;
                      if ( v1283 == 4 )
                      {
                        v1376 = *v1284;
                        if ( v1376 >= 0 && v1282 > 1 )
                        {
                          for ( i2 = v1281;
                                (int)RtlULongLongAdd(v1281, 4LL, &i2) >= 0 && (int)RtlULongLongAdd(i2, *v1281, &i2) >= 0;
                                v1281 = i2 )
                          {
                            if ( v1285 != -1 )
                            {
                              v1286 = *i2;
                              if ( (int)RtlULongLongAdd(i2, 4LL, &i2) >= 0 )
                              {
                                v1287 = i2;
                                v1554 = v1286;
                                if ( !v1286 )
                                  v1287 = (unsigned int *)v1;
                                i2 = v1287;
                                v1591 = v1287;
                                if ( v1286 == 8 )
                                  v1592 = *(_QWORD *)v1287;
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
              v468 = v1296;
              v469 = v1345;
              goto LABEL_803;
            }
            if ( v1149 + v1148 >= v1149 )
              v1143 = v1149 + v1148;
            v1139 = v1149 + v1148 < v1149 ? 0xC0000095 : 0;
            if ( v1149 + v1148 < v1149 )
              goto LABEL_1651;
            v1151 = v1148 + v1146;
            v1152 = -1;
            if ( (unsigned int)v1148 + v1146 >= v1146 )
              v1152 = v1148 + v1146;
            v1139 = v1151 < v1146 ? 0xC0000095 : 0;
            if ( v1151 < v1146 )
              goto LABEL_1651;
            if ( v1137 - v1152 < 4 )
            {
              v1139 = -1073741762;
              v1001 = 0LL;
              v1 = 0LL;
              goto LABEL_1710;
            }
            v1153 = *(unsigned int *)v1143;
            v1154 = -1LL;
            if ( v1143 + 4 >= v1143 )
              v1154 = v1143 + 4;
            v1139 = v1143 + 4 < v1143 ? 0xC0000095 : 0;
            v1386 = (void *)v1154;
            if ( v1143 + 4 < v1143 )
              goto LABEL_1668;
            v1155 = v1152 + 4;
            v1156 = -1;
            if ( v1152 + 4 >= v1152 )
              v1156 = v1152 + 4;
            v1139 = v1155 < v1152 ? 0xC0000095 : 0;
            if ( v1155 < v1152 )
            {
LABEL_1668:
              v1001 = 0LL;
              v1002 = 0LL;
              v1 = 0LL;
              goto LABEL_1710;
            }
            if ( v1137 - v1156 < (unsigned int)v1153 )
            {
              v1139 = -1073741762;
              goto LABEL_1668;
            }
            v1157 = v1156 + v1153;
            v1158 = -1;
            if ( v1156 + (unsigned int)v1153 >= v1156 )
              v1158 = v1156 + v1153;
            v1139 = v1157 < v1156 ? 0xC0000095 : 0;
            if ( v1157 < v1156 )
              goto LABEL_1668;
            if ( v1137 != v1158 )
            {
              v1139 = -1073741762;
              v1001 = 0LL;
              v1002 = 0LL;
              v1 = 0LL;
              goto LABEL_1710;
            }
            if ( (unsigned int)(v1142 + v1148 + v1153) + 12LL != v1137 )
            {
              v1139 = -1073741762;
              v1001 = 0LL;
              v1002 = 0LL;
              v1 = 0LL;
              goto LABEL_1710;
            }
            v1159 = GetProcessHeap();
            v1160 = HeapAlloc(v1159, 8u, 0x30uLL);
            if ( !v1160 )
            {
              v1139 = -1073741801;
              v1 = 0LL;
              goto LABEL_1699;
            }
            if ( v1144 )
            {
              *(_DWORD *)v1160 = v1306;
              v1161 = GetProcessHeap();
              v1162 = HeapAlloc(v1161, 8u, v1391);
              if ( !v1162 )
                goto LABEL_1689;
              v1163 = v1391;
              v1160[1] = v1162;
              memcpy_0(v1162, (const void *)v1144, v1163);
            }
            else
            {
              *(_DWORD *)v1160 = 0;
              v1160[1] = 0LL;
            }
            if ( v1149 )
            {
              *((_DWORD *)v1160 + 4) = v1148;
              v1164 = GetProcessHeap();
              v1165 = HeapAlloc(v1164, 8u, v1148);
              if ( !v1165 )
                goto LABEL_1689;
              v1160[3] = v1165;
              memcpy_0(v1165, (const void *)v1149, v1148);
            }
            else
            {
              *((_DWORD *)v1160 + 4) = 0;
              v1160[3] = 0LL;
            }
            v1 = (__int64)v1386;
            if ( !v1386 )
            {
              *((_DWORD *)v1160 + 8) = 0;
              v1160[5] = 0LL;
              goto LABEL_1698;
            }
            *((_DWORD *)v1160 + 8) = v1153;
            v1166 = GetProcessHeap();
            v1167 = HeapAlloc(v1166, 8u, v1153);
            if ( v1167 )
            {
              v1160[5] = v1167;
              memcpy_0(v1167, (const void *)v1, v1153);
              v1 = 0LL;
LABEL_1698:
              v1138 = v1160;
              v1139 = 0;
LABEL_1699:
              if ( v1139 < 0 )
              {
                if ( v1138 )
                {
                  v1175 = (void *)v1138[1];
                  if ( v1175 )
                  {
                    v1176 = GetProcessHeap();
                    HeapFree(v1176, 0, v1175);
                    v1138[1] = 0LL;
                  }
                  v1177 = (void *)v1138[3];
                  if ( v1177 )
                  {
                    v1178 = GetProcessHeap();
                    HeapFree(v1178, 0, v1177);
                    v1138[3] = 0LL;
                  }
                  v1179 = (void *)v1138[5];
                  if ( v1179 )
                  {
                    v1180 = GetProcessHeap();
                    HeapFree(v1180, 0, v1179);
                    v1138[5] = 0LL;
                  }
                  v1181 = GetProcessHeap();
                  HeapFree(v1181, 0, v1138);
                }
                v1001 = 0LL;
                v1002 = 0LL;
              }
              else
              {
                v1002 = (int *)v1350;
                v1001 = v1138;
                v1294 = v1138;
              }
              goto LABEL_1710;
            }
LABEL_1689:
            v1168 = (void *)v1160[1];
            if ( v1168 )
            {
              v1169 = GetProcessHeap();
              HeapFree(v1169, 0, v1168);
              v1 = 0LL;
              v1160[1] = 0LL;
            }
            else
            {
              v1 = 0LL;
            }
            v1170 = (void *)v1160[3];
            if ( v1170 )
            {
              v1171 = GetProcessHeap();
              HeapFree(v1171, 0, v1170);
              v1160[3] = 0LL;
            }
            v1172 = (void *)v1160[5];
            if ( v1172 )
            {
              v1173 = GetProcessHeap();
              HeapFree(v1173, 0, v1172);
              v1160[5] = 0LL;
            }
            v1174 = GetProcessHeap();
            HeapFree(v1174, 0, v1160);
            v1139 = -1073741801;
            goto LABEL_1699;
          }
LABEL_1628:
          v1001 = 0LL;
          goto LABEL_1629;
        }
      }
      else
      {
        v1136 = GetLastError();
        v1013 = v1136;
        if ( v1136 <= 0 )
          goto LABEL_1614;
      }
      v1013 = (unsigned __int16)v1136 | 0x80070000;
      goto LABEL_1614;
    }
    v1115 = (v1434 + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v1115 >= v1434 )
    {
      v1435 = (v1434 + 7) & 0xFFFFFFF8;
      v1116 = RtlUIntAdd(v1115, 8LL, &v1435);
      v1117 = v1436;
      v1013 = v1116;
      if ( v1116 >= 0 )
        v1117 = v1435;
      v1436 = v1117;
    }
    else
    {
      v1013 = -1073741675;
    }
    if ( v1013 >= 0 )
    {
      if ( !v1370 || (unsigned int)v1369 <= 1 )
        goto LABEL_1602;
      v1118 = (unsigned int *)v1370;
      v1405 = (unsigned int *)v1370;
      do
      {
        v1119 = *v1118;
        v1013 = RtlULongLongAdd(v1118, 4LL, &v1405);
        if ( v1013 < 0 )
          goto LABEL_1578;
        v1013 = RtlULongLongAdd(v1405, v1119, &v1405);
        if ( v1013 < 0 )
          goto LABEL_1578;
        v1118 = v1405;
        ++v1113;
      }
      while ( !v1113 );
      v1120 = *v1405;
      v1013 = RtlULongLongAdd(v1405, 4LL, &v1405);
      if ( v1013 < 0 )
      {
LABEL_1578:
        v1123 = 0;
        goto LABEL_1579;
      }
      v1122 = v1405;
      v1501 = v1120;
      if ( !v1120 )
        v1122 = v1121;
      v1123 = (int)v1121;
      v1405 = v1122;
      v1567 = v1122;
LABEL_1579:
      if ( v1013 < 0 )
        goto LABEL_1603;
      if ( (unsigned int)v1369 > 2 )
      {
        v1124 = (unsigned int *)v1370;
        v1125 = v1123;
        v1406 = (unsigned int *)v1370;
        while ( 1 )
        {
          v1126 = *v1124;
          v1013 = RtlULongLongAdd(v1124, 4LL, &v1406);
          if ( v1013 < 0 )
            break;
          v1013 = RtlULongLongAdd(v1406, v1126, &v1406);
          if ( v1013 < 0 )
            break;
          v1124 = v1406;
          if ( (unsigned int)++v1125 >= 2 )
          {
            v1128 = *v1406;
            v1013 = RtlULongLongAdd(v1406, 4LL, &v1406);
            if ( v1013 >= 0 )
            {
              v1129 = v1406;
              v1509 = v1128;
              if ( !v1128 )
                v1129 = 0LL;
              v1406 = v1129;
              v1568 = v1129;
            }
            break;
          }
        }
        if ( v1013 >= 0 )
        {
          v1373 = 4;
          v1013 = RtlUIntAdd(4LL, v1127, &v1373);
          if ( v1013 < 0
            || (v1013 = RtlUIntAdd(v1373, 4LL, &v1373), v1013 < 0)
            || (v1013 = RtlUIntAdd(v1373, v1130, &v1373), v1013 < 0)
            || (v1013 = RtlUIntAdd(v1373, 4LL, &v1373), v1013 < 0) )
          {
            v1132 = v1420;
          }
          else
          {
            v1013 = RtlUIntAdd(v1373, v1131, &v1373);
            v1132 = v1420;
            if ( v1013 >= 0 )
              v1132 = v1373;
            v1420 = v1132;
          }
          if ( v1013 >= 0 )
          {
            v1004 = (unsigned __int64)v1324;
            if ( v1132 > 0x400000 )
            {
              v1013 = -2147418113;
LABEL_1799:
              v1009 = v1344;
              v1001 = 0LL;
              goto LABEL_1800;
            }
            v1379 = v1132;
            goto LABEL_1604;
          }
        }
      }
      else
      {
LABEL_1602:
        v1013 = -1073741811;
      }
    }
LABEL_1603:
    v1004 = (unsigned __int64)v1324;
    goto LABEL_1604;
  }
  if ( (int)RtlUIntAdd(4LL, v477, &v1489) < 0 )
    goto LABEL_1467;
  v1491 = v1489;
  if ( (int)RtlUIntAdd(HIDWORD(v1369), v1489, (char *)&v1369 + 4) >= 0 )
  {
    v987 = v1369 + 1;
    v1 = 0LL;
    goto LABEL_1450;
  }
LABEL_801:
  v468 = v472;
LABEL_802:
  v1 = 0LL;
LABEL_803:
  v386 = (HMODULE *)&unk_18018B120;
LABEL_804:
  v485 = v1370;
  v1369 = 0LL;
  if ( v1370 )
  {
    v486 = GetProcessHeap();
    HeapFree(v486, 0, v485);
    v1370 = (LPVOID)v1;
  }
  v487 = v1425;
  v1424 = 0LL;
  if ( v1425 )
  {
    v488 = GetProcessHeap();
    HeapFree(v488, 0, v487);
    v1425 = (LPVOID)v1;
  }
  if ( v468 )
  {
    v489 = GetProcessHeap();
    HeapFree(v489, 0, v468);
  }
  if ( v469 )
  {
    v490 = GetProcessHeap();
    HeapFree(v490, 0, v469);
  }
  v5 = 4LL;
LABEL_450:
  v77 = (void *)v1;
  v387 = v1421;
  v1553 = v1415;
  hMem = v1521;
LABEL_451:
  while ( _InterlockedCompareExchange(&dword_18018B1A8, 1, 0) )
    ;
  v388 = dword_18018A018;
  if ( dword_18018A018 > 0 )
  {
    --dword_18018A018;
    if ( v388 == 1 )
    {
      do
      {
        if ( *v386 )
          FreeLibrary(*v386);
        v386 += 3;
        --v5;
      }
      while ( v5 );
      memset_0(&unk_18018B120, 0, 0x60uLL);
      memcpy_0(off_180188000, off_180123520, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_18018B1A8, v1);
  if ( v77 )
    LocalFree(v77);
  if ( v89 >= 0 && v387 == 4 )
  {
    v389 = (unsigned int *)hMem;
    if ( !hMem )
      v389 = (unsigned int *)v1;
    v2 = v1508;
    *v1508 = *v389;
  }
  else
  {
    v2 = v1508;
  }
  if ( hMem )
  {
    LocalFree(hMem);
    hMem = (HLOCAL)v1;
  }
  v3 = v1522;
LABEL_468:
  if ( *v2 > 0xC || (v390 = 6184, !_bittest(&v390, *v2)) )
  {
    *((_DWORD *)v3 + 37) = 2;
    v1289 = 0;
LABEL_1851:
    AtmosCheck::TraceResult(v3, 0, v1289);
    return 0;
  }
  v1438 = 0LL;
  v1439 = v1;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
    && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
  {
    *((_DWORD *)v3 + 37) = 3;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(v3, (struct DolbyLicenseResult *)&v1438);
    AtmosCheck::EnableAllAtmosCapabilities(v3);
    v1289 = IsLogLicenseResult;
    goto LABEL_1851;
  }
  if ( *v2 != 3 )
    return 1;
  *(_OWORD *)hKey = 0LL;
  if ( !DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent((DolbyOEMLicenseCheck *)hKey) )
  {
    if ( hKey[1] )
      BCryptDestroyKey(hKey[1]);
    if ( hKey[0] )
      BCryptCloseAlgorithmProvider(hKey[0], 0);
    return 1;
  }
  *((_DWORD *)v3 + 37) = 1;
  v1290 = AtmosCheck::IsLogLicenseResult(v3, (struct DolbyLicenseResult *)&v1438);
  AtmosCheck::EnableAllAtmosCapabilities(v3);
  AtmosCheck::TraceResult(v3, 0, v1290);
  CRSABCrypt::~CRSABCrypt((CRSABCrypt *)hKey);
  return 0;
}
