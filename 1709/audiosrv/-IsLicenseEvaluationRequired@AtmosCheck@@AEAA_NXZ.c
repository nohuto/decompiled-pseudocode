/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x1800020F0
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800E3C7C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180001730 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180001B70 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     WARBIRD::GetFunctionAddress @ 0x1800050F0 (WARBIRD--GetFunctionAddress.c)
 *     StringLengthWorkerW @ 0x180005E10 (StringLengthWorkerW.c)
 *     RtlULongLongAdd @ 0x180005E60 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180005E80 (RtlUIntAdd.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?Attach@?$SP@EV?$SP_MEM@E@@@@QEAAXPEAE@Z @ 0x180036964 (-Attach@-$SP@EV-$SP_MEM@E@@@@QEAAXPEAE@Z.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     wcscmp_0 @ 0x180036B7D (wcscmp_0.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1CRSABCrypt@@QEAA@XZ @ 0x18005CA68 (--1CRSABCrypt@@QEAA@XZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x18005CA9C (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x1800E30F8 (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1800E4210 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800E64C8 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  wchar_t *v1; // rsi
  unsigned int *v2; // rdi
  AtmosCheck *v3; // rbx
  int v4; // eax
  __int64 v5; // r13
  HANDLE ProcessHeap; // rax
  _BYTE *v7; // rax
  _BYTE *j; // rbx
  int v9; // r12d
  int v10; // r11d
  int v11; // r10d
  char *v12; // r14
  char *v13; // rsi
  int v14; // r15d
  __int64 v15; // r13
  int v16; // eax
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  int v20; // r10d
  int v21; // r8d
  unsigned int v22; // r11d
  int v23; // r10d
  unsigned int v24; // r11d
  int v25; // r10d
  int v26; // r11d
  unsigned int v27; // r10d
  int v28; // r11d
  int v29; // r10d
  int v30; // r11d
  unsigned int v31; // r10d
  int v32; // r11d
  int v33; // r10d
  unsigned int v34; // edi
  int v35; // r10d
  int v36; // edi
  int v37; // r10d
  int v38; // edi
  unsigned int v39; // r10d
  int v40; // edi
  int v41; // r10d
  int v42; // edi
  unsigned int v43; // r10d
  int v44; // edi
  int v45; // ecx
  __m128i v46; // xmm2
  unsigned __int64 v47; // rax
  int FunctionAddress; // r15d
  int v49; // r12d
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __m128i v55; // xmm1
  __m128i v56; // xmm1
  char i; // cl
  HMODULE *v58; // rdi
  unsigned int v59; // r13d
  const WCHAR *v60; // rdx
  __int64 v61; // rax
  bool v62; // zf
  _BYTE *v63; // rbx
  char *v64; // rsi
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  unsigned int v67; // r14d
  unsigned int v68; // edi
  _BYTE *v69; // rcx
  __int64 v70; // rax
  HANDLE v71; // rax
  wchar_t *v72; // rbx
  wchar_t *v73; // rdi
  int v74; // r15d
  signed int v75; // r14d
  HLOCAL v76; // rax
  void *v77; // rdi
  void *v78; // r12
  void *v79; // r14
  HANDLE v80; // rax
  void *v81; // rax
  void *v82; // r15
  size_t v83; // r14
  HANDLE v84; // rax
  void *v85; // rax
  void *v86; // r13
  unsigned int v87; // r12d
  unsigned int v88; // eax
  size_t v89; // rdx
  __int64 v90; // rcx
  unsigned int v91; // r10d
  unsigned int v92; // r11d
  int v93; // ecx
  unsigned int v94; // edx
  unsigned int v95; // eax
  unsigned int v96; // ecx
  unsigned int v97; // ebx
  HANDLE v98; // rax
  _DWORD *v99; // rax
  unsigned int v100; // r9d
  _DWORD *v101; // rdx
  int v102; // r8d
  unsigned int v103; // ecx
  _DWORD *v104; // rdx
  unsigned int v105; // r14d
  unsigned int v106; // r10d
  unsigned int v107; // r8d
  size_t v108; // rdx
  unsigned int v109; // r10d
  unsigned int v110; // r8d
  const wchar_t *v111; // rcx
  __int64 v112; // r10
  unsigned int v113; // r9d
  _DWORD *v114; // rdx
  unsigned int v115; // r8d
  unsigned int v116; // r9d
  _DWORD *v117; // rdx
  unsigned int v118; // r8d
  unsigned int v119; // r9d
  _DWORD *v120; // rdx
  unsigned int v121; // r8d
  unsigned int v122; // ecx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rdx
  unsigned int v126; // r12d
  unsigned int v127; // r13d
  unsigned __int16 *v128; // r15
  int v129; // esi
  _QWORD *v130; // r10
  unsigned int v131; // ecx
  unsigned int v132; // ebx
  HANDLE v133; // rax
  char *v134; // rax
  char *v135; // rbx
  __int64 v136; // rdx
  void *v137; // rcx
  unsigned __int8 *v138; // rsi
  _QWORD *v139; // r15
  unsigned __int64 v140; // r13
  HANDLE v141; // rax
  char *v142; // r9
  unsigned __int8 v143; // al
  unsigned __int64 v144; // rcx
  __m128i v145; // xmm2
  __m128i v146; // xmm1
  __m128i v147; // xmm0
  __m128i v148; // xmm0
  __m128i v149; // xmm1
  __m128i v150; // xmm1
  __m128i v151; // xmm1
  __m128i v152; // xmm1
  int v153; // r11d
  unsigned int v154; // edx
  char *v155; // rbx
  int v156; // r15d
  int v157; // r12d
  int v158; // r8d
  unsigned __int64 v159; // r14
  _BYTE *v160; // rbx
  unsigned __int8 *v161; // rsi
  int v162; // eax
  int v163; // r10d
  int v164; // r9d
  int v165; // r10d
  int v166; // r9d
  int v167; // r11d
  unsigned int v168; // r8d
  int v169; // r11d
  int v170; // r8d
  int v171; // r11d
  unsigned int v172; // r8d
  int v173; // r11d
  int v174; // r8d
  int v175; // r11d
  int v176; // r8d
  int v177; // r11d
  int v178; // r8d
  unsigned int v179; // r11d
  unsigned int v180; // r8d
  int v181; // r11d
  int v182; // r8d
  int v183; // r11d
  int v184; // r8d
  int v185; // r11d
  int v186; // r8d
  int v187; // r11d
  int v188; // r8d
  unsigned int v189; // r11d
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
  _DWORD *v212; // rax
  void *v213; // r15
  void *v214; // rcx
  void *v215; // rcx
  unsigned int v216; // ebx
  unsigned int v217; // r14d
  int v218; // eax
  int v219; // r11d
  unsigned int v220; // ecx
  void *v221; // rcx
  unsigned int v222; // r11d
  int v223; // r9d
  unsigned int v224; // r9d
  void *v225; // rax
  unsigned int *v226; // rcx
  unsigned int v227; // r8d
  unsigned int *v228; // rdx
  unsigned int v229; // r9d
  unsigned int v230; // r10d
  void *v231; // r11
  void *v232; // rax
  unsigned __int16 *v233; // r11
  unsigned int v234; // eax
  unsigned int v235; // ebx
  HANDLE v236; // rax
  unsigned int *v237; // rax
  unsigned int *v238; // rbx
  FARPROC ProcAddress; // rax
  int v240; // eax
  unsigned int v241; // edx
  __int64 v242; // r15
  char *v243; // r13
  unsigned int *v244; // r8
  SIZE_T v245; // r14
  char *v246; // r12
  unsigned int v247; // r8d
  unsigned int *v248; // rcx
  unsigned int v249; // r9d
  SIZE_T v250; // rsi
  unsigned int v251; // ecx
  HANDLE v252; // rax
  _QWORD *v253; // rax
  _QWORD *v254; // rbx
  HANDLE v255; // rax
  void *v256; // rax
  HANDLE v257; // rax
  void *v258; // rax
  void *v259; // r14
  HANDLE v260; // rax
  void *v261; // rax
  int v262; // esi
  unsigned __int8 *v263; // rsi
  __int64 v264; // rax
  SIZE_T v265; // rbx
  HANDLE v266; // rax
  unsigned int *v267; // rax
  unsigned int *v268; // r9
  unsigned __int8 v269; // cl
  unsigned __int8 *v270; // r14
  unsigned int *v271; // rsi
  unsigned __int64 v272; // r8
  int v273; // edx
  int v274; // r13d
  int v275; // r12d
  int v276; // ebx
  unsigned int v277; // r11d
  unsigned __int64 v278; // r15
  _BYTE *v279; // rsi
  unsigned __int8 *v280; // r14
  int v281; // eax
  int v282; // r10d
  int v283; // r9d
  int v284; // r10d
  int v285; // r11d
  int v286; // r9d
  unsigned int v287; // ebx
  int v288; // r11d
  unsigned int v289; // ebx
  int v290; // r11d
  int v291; // ebx
  unsigned int v292; // r11d
  int v293; // ebx
  int v294; // r11d
  int v295; // ebx
  unsigned int v296; // r11d
  int v297; // ebx
  int v298; // r11d
  unsigned int v299; // r8d
  int v300; // r11d
  int v301; // r8d
  int v302; // r11d
  int v303; // r8d
  unsigned int v304; // edx
  int v305; // r8d
  int v306; // edx
  int v307; // r8d
  unsigned int v308; // edx
  int v309; // r8d
  int v310; // ecx
  unsigned __int64 v311; // rax
  __m128i v312; // xmm2
  __m128i v313; // xmm1
  __m128i v314; // xmm0
  __m128i v315; // xmm0
  __m128i v316; // xmm1
  __m128i v317; // xmm1
  __m128i v318; // xmm1
  __m128i v319; // xmm1
  size_t v320; // r15
  char *v321; // r14
  unsigned __int64 v322; // r8
  void *v323; // r12
  unsigned int v324; // ebx
  char *v325; // rcx
  unsigned int v326; // r9d
  int v327; // esi
  char *v328; // rdx
  HANDLE v329; // rax
  HANDLE v330; // rax
  _QWORD *v331; // r14
  void *v332; // rbx
  HANDLE v333; // rax
  void *v334; // rbx
  HANDLE v335; // rax
  void *v336; // rbx
  HANDLE v337; // rax
  HANDLE v338; // rax
  void *v339; // rbx
  HANDLE v340; // rax
  void *v341; // rbx
  HANDLE v342; // rax
  void *v343; // rbx
  HANDLE v344; // rax
  void *v345; // rbx
  HANDLE v346; // rax
  void *v347; // rbx
  HANDLE v348; // rax
  HANDLE v349; // rax
  HANDLE v350; // rax
  int v351; // edx
  int v352; // r9d
  int *v353; // rax
  int v354; // eax
  LPVOID v355; // rcx
  unsigned int v356; // r10d
  int v357; // r9d
  int v358; // r9d
  _QWORD *v359; // rax
  unsigned int *v360; // rcx
  unsigned int v361; // r8d
  unsigned int *v362; // rdx
  int v363; // r9d
  _DWORD *v364; // rax
  unsigned int *v365; // rcx
  unsigned int v366; // r8d
  unsigned int *v367; // rdx
  int v368; // eax
  unsigned int v369; // r10d
  const void *v370; // r11
  unsigned int *v371; // rcx
  unsigned int v372; // r8d
  unsigned int *v373; // rdx
  int v374; // r9d
  unsigned int *v375; // rax
  unsigned int *v376; // rcx
  unsigned int v377; // r8d
  unsigned int *v378; // rdx
  int v379; // r9d
  int *v380; // rax
  void *v381; // rbx
  HANDLE v382; // rax
  void *v383; // rbx
  HANDLE v384; // rax
  HANDLE v385; // rax
  HANDLE v386; // rax
  unsigned int v387; // r12d
  int v388; // r14d
  int v389; // eax
  HMODULE *v390; // rbx
  unsigned int *v391; // rax
  int v392; // ecx
  __int64 v394; // rbx
  __int64 v395; // r12
  signed int v396; // eax
  __int64 k; // r9
  signed int LastError; // eax
  DWORD CurrentThreadId; // eax
  __int64 v400; // r12
  signed int v401; // eax
  __int64 m; // r9
  signed int v403; // eax
  HANDLE CurrentProcess; // rax
  signed int v405; // eax
  int v406; // eax
  __int64 v407; // rdx
  int v408; // eax
  int v409; // eax
  __int64 v410; // rdx
  int v411; // eax
  int v412; // eax
  int v413; // eax
  __int64 v414; // rdx
  int v415; // eax
  __int64 v416; // rdx
  int v417; // eax
  __int64 v418; // rdx
  HANDLE v419; // rax
  int v420; // r9d
  char v421; // dl
  int v422; // eax
  unsigned int v423; // r11d
  int v424; // eax
  int v425; // eax
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
  int v456; // r9d
  char v457; // r8
  int v458; // eax
  unsigned int v459; // ebx
  int v460; // eax
  int v461; // eax
  void *v462; // rbx
  HANDLE v463; // rax
  DWORD ModuleFileNameW; // eax
  LPVOID v465; // rbx
  unsigned __int16 *v466; // r14
  void *v467; // r13
  HANDLE v468; // rax
  unsigned __int16 *v469; // rax
  unsigned __int16 *v470; // r15
  size_t v471; // rbx
  HANDLE v472; // rax
  void *v473; // rax
  void *v474; // r12
  unsigned int v475; // r14d
  unsigned int v476; // edi
  HANDLE v477; // rax
  _DWORD *v478; // rax
  _DWORD *v479; // rdi
  int v480; // edx
  LPVOID v481; // r10
  int *v482; // rcx
  int v483; // r9d
  unsigned int v484; // edi
  __int64 v485; // rax
  unsigned int v486; // edi
  int v487; // eax
  const WCHAR *v488; // rax
  int v489; // r14d
  int v490; // ebx
  char *v491; // r13
  int v492; // r15d
  int v493; // r11d
  char *v494; // r12
  __int64 v495; // rdi
  int v496; // eax
  int v497; // r10d
  int v498; // r9d
  int v499; // r10d
  int v500; // r11d
  int v501; // r9d
  unsigned int v502; // r15d
  int v503; // r11d
  unsigned int v504; // r15d
  int v505; // r11d
  int v506; // r15d
  unsigned int v507; // r11d
  int v508; // r15d
  int v509; // r11d
  int v510; // r15d
  unsigned int v511; // r11d
  int v512; // r15d
  int v513; // r11d
  unsigned int v514; // r8d
  int v515; // r11d
  int v516; // r8d
  int v517; // r11d
  int v518; // r8d
  unsigned int v519; // r11d
  int v520; // r8d
  int v521; // r11d
  int v522; // r8d
  unsigned int v523; // r11d
  int v524; // r8d
  int v525; // ecx
  LPCWSTR v526; // rbx
  unsigned __int64 v527; // rax
  int v528; // r14d
  __m128i v529; // xmm1
  __m128i v530; // xmm2
  __m128i v531; // xmm0
  __m128i v532; // xmm0
  __m128i v533; // xmm1
  __m128i v534; // xmm1
  __m128i v535; // xmm1
  __m128i v536; // xmm1
  char n; // cl
  const WCHAR *v538; // rdx
  __int64 v539; // rax
  const WCHAR *v540; // rbx
  char *v541; // r15
  __int64 v542; // rcx
  unsigned __int64 v543; // rcx
  unsigned int v544; // r13d
  LPCWSTR v545; // rcx
  __int64 v546; // rax
  int v547; // eax
  HANDLE v548; // rax
  HMODULE *v549; // rbx
  __int64 v550; // r14
  int v551; // eax
  const WCHAR *v552; // rax
  int v553; // r14d
  int v554; // ebx
  char *v555; // r13
  int v556; // r15d
  int v557; // r11d
  char *v558; // r12
  __int64 v559; // rdi
  int v560; // eax
  int v561; // r10d
  int v562; // r9d
  int v563; // r10d
  int v564; // r11d
  int v565; // r9d
  unsigned int v566; // r15d
  int v567; // r11d
  unsigned int v568; // r15d
  int v569; // r11d
  int v570; // r15d
  unsigned int v571; // r11d
  int v572; // r15d
  int v573; // r11d
  int v574; // r15d
  unsigned int v575; // r11d
  int v576; // r15d
  int v577; // r11d
  unsigned int v578; // r8d
  int v579; // r11d
  int v580; // r8d
  int v581; // r11d
  int v582; // r8d
  unsigned int v583; // edx
  int v584; // r8d
  int v585; // edx
  int v586; // r8d
  unsigned int v587; // edx
  int v588; // r8d
  int v589; // ecx
  LPCWSTR v590; // rbx
  unsigned __int64 v591; // rax
  int v592; // r14d
  __m128i v593; // xmm1
  __m128i v594; // xmm2
  __m128i v595; // xmm0
  __m128i v596; // xmm0
  __m128i v597; // xmm1
  __m128i v598; // xmm1
  __m128i v599; // xmm1
  __m128i v600; // xmm1
  char ii; // cl
  const WCHAR *v602; // rdx
  __int64 v603; // rax
  const WCHAR *v604; // rbx
  char *v605; // r15
  __int64 v606; // rcx
  unsigned __int64 v607; // rcx
  unsigned int v608; // r13d
  LPCWSTR v609; // rcx
  __int64 v610; // rax
  int v611; // eax
  HANDLE v612; // rax
  HMODULE *v613; // rbx
  __int64 v614; // r14
  int v615; // r13d
  signed int v616; // eax
  signed int v617; // r14d
  _DWORD *v618; // rbx
  signed int v619; // eax
  void *v620; // rax
  __int64 v621; // r15
  void *v622; // rax
  _DWORD *v623; // rdi
  signed int v624; // eax
  _DWORD *v625; // rbx
  __int64 v626; // rax
  unsigned int v627; // r9d
  unsigned int v628; // r8d
  __int64 v629; // rdi
  unsigned int v630; // ecx
  _DWORD *v631; // rdx
  __int64 v632; // rdi
  const wchar_t *v633; // rcx
  __int64 v634; // r8
  unsigned __int16 **v635; // rdx
  __int64 v636; // rax
  unsigned __int16 *v637; // r12
  __int64 v638; // rax
  unsigned __int16 *v639; // rbx
  __int64 v640; // rax
  const unsigned __int16 *v641; // r15
  int v642; // ebx
  int v643; // r14d
  char *v644; // r15
  int v645; // r11d
  int v646; // r10d
  char *v647; // r12
  __int64 v648; // r13
  int v649; // eax
  int v650; // r9d
  int v651; // r8d
  int v652; // r9d
  int v653; // r11d
  int v654; // r8d
  unsigned int v655; // ebx
  int v656; // r11d
  unsigned int v657; // ebx
  int v658; // r11d
  int v659; // ebx
  unsigned int v660; // r11d
  int v661; // ebx
  int v662; // r11d
  int v663; // ebx
  unsigned int v664; // r11d
  int v665; // ebx
  int v666; // r11d
  unsigned int v667; // edi
  int v668; // r11d
  int v669; // edi
  int v670; // r11d
  int v671; // edi
  unsigned int v672; // r11d
  int v673; // edi
  int v674; // r11d
  int v675; // edi
  unsigned int v676; // r11d
  int v677; // edi
  int v678; // ecx
  unsigned __int64 v679; // rax
  __m128i v680; // xmm2
  __m128i v681; // xmm1
  __m128i v682; // xmm0
  __m128i v683; // xmm0
  __m128i v684; // xmm1
  __m128i v685; // xmm1
  __m128i v686; // xmm1
  __m128i v687; // xmm1
  char jj; // cl
  WCHAR *v689; // rdx
  unsigned __int16 **v690; // rdi
  int v691; // r9d
  __int64 v692; // r8
  unsigned int kk; // ecx
  __int64 v694; // rax
  void *v695; // rax
  _QWORD *v696; // rbx
  __int16 *v697; // r12
  unsigned int v698; // edx
  _QWORD *v699; // r13
  _WORD *v700; // rcx
  __int64 v701; // rax
  unsigned __int16 *v702; // rdi
  __int64 v703; // rax
  int v704; // eax
  int v705; // r15d
  void *v706; // rax
  __int64 v707; // rcx
  signed int v708; // eax
  signed int v709; // r14d
  int v710; // r14d
  signed int v711; // eax
  signed int v712; // r14d
  __int64 v713; // r15
  _WORD *v714; // rdi
  __int64 v715; // rcx
  int v716; // edi
  signed int v717; // eax
  unsigned int v718; // r13d
  const unsigned __int16 *v719; // rdi
  __int64 v720; // rbx
  signed int v721; // eax
  int v722; // eax
  void *v723; // rax
  signed int v724; // eax
  unsigned int v725; // r12d
  __int64 v726; // rdi
  signed int v727; // eax
  int v728; // eax
  void *v729; // rax
  signed int v730; // eax
  int v731; // ebx
  unsigned int v732; // edx
  int v733; // r15d
  unsigned int v734; // ebx
  void *v735; // rdi
  void *v736; // rdi
  __int64 v737; // rdx
  __int64 v738; // rdi
  signed int v739; // eax
  int v740; // eax
  void *v741; // rax
  signed int v742; // eax
  void *v743; // rdi
  __int64 v744; // rbx
  int v745; // eax
  int v746; // r14d
  int v747; // ebx
  int v748; // edi
  __int64 v749; // rax
  int v750; // edx
  int v751; // ecx
  __int64 v752; // rax
  int v753; // eax
  HMODULE *v754; // rdi
  __int64 v755; // rbx
  unsigned int v756; // edi
  int v757; // ebx
  __int64 v758; // rax
  int v759; // eax
  int v760; // r15d
  void *v761; // r12
  __int64 v762; // r14
  int v763; // r13d
  __int64 v764; // rax
  signed int v765; // ebx
  signed int v766; // eax
  int v767; // r12d
  int v768; // eax
  void *v769; // rcx
  __int64 v770; // rax
  int v771; // eax
  int v772; // r15d
  int v773; // r8d
  int v774; // edx
  int v775; // edi
  int v776; // ecx
  int v777; // r11d
  int v778; // r13d
  int v779; // r10d
  char *v780; // r13
  char *v781; // rcx
  int v782; // edi
  unsigned __int8 *v783; // r9
  signed __int64 v784; // r12
  int v785; // r8d
  int v786; // edi
  int v787; // edx
  int v788; // edi
  int v789; // edx
  int v790; // edx
  void *v791; // rdi
  int v792; // r15d
  __int64 v793; // rax
  __int64 v794; // r13
  signed int v795; // ebx
  __int64 v796; // rax
  signed int v797; // eax
  __int64 v798; // rax
  int v799; // eax
  int v800; // r8d
  int v801; // edx
  int v802; // edi
  int v803; // ecx
  int v804; // r11d
  int v805; // r10d
  int v806; // r15d
  __int64 v807; // r13
  char *v808; // rax
  int v809; // r12d
  unsigned __int8 *v810; // r9
  char *v811; // r15
  int v812; // r8d
  int v813; // edi
  int v814; // edx
  int v815; // edi
  int v816; // edx
  int v817; // ecx
  LPVOID v818; // r13
  char v819; // al
  int v820; // r13d
  int v821; // ecx
  unsigned __int64 v822; // kr00_8
  int v823; // edi
  int v824; // ebx
  int v825; // eax
  int v826; // r14d
  int v827; // r15d
  int v828; // r12d
  __int64 v829; // rax
  void *v830; // r12
  __int64 v831; // rax
  signed int v832; // r13d
  int v833; // r15d
  const WCHAR *v834; // rax
  signed int v835; // eax
  int v836; // eax
  SIZE_T v837; // rcx
  __int64 v838; // rax
  void *v839; // rdx
  LPVOID v840; // r12
  int v841; // edx
  int v842; // ecx
  int v843; // edx
  int v844; // ecx
  int v845; // r11d
  int v846; // r10d
  __int64 v847; // rax
  __int64 v848; // rdx
  SIZE_T v849; // r8
  __int64 v850; // rcx
  char *v851; // rdx
  int v852; // edi
  unsigned __int8 *v853; // r9
  char *v854; // r12
  int v855; // r8d
  int v856; // edi
  int v857; // edx
  int v858; // edi
  int v859; // edx
  void *v860; // rdi
  __int64 v861; // rax
  void *v862; // r13
  signed int v863; // r15d
  void *v864; // rax
  signed int v865; // eax
  unsigned int v866; // r12d
  int v867; // eax
  SIZE_T v868; // rcx
  __int64 v869; // rax
  int v870; // eax
  int v871; // edx
  int v872; // ecx
  int v873; // edx
  int v874; // ecx
  int v875; // r11d
  int v876; // r10d
  SIZE_T v877; // r12
  const WCHAR *v878; // rax
  int v879; // r14d
  unsigned __int8 *v880; // r9
  char *v881; // rbx
  int v882; // r8d
  int v883; // edi
  int v884; // edx
  int v885; // edi
  int v886; // edx
  int v887; // ecx
  __int64 v888; // rcx
  __int64 v889; // rcx
  __int64 v890; // rcx
  __int64 v891; // rcx
  int v892; // eax
  HMODULE *v893; // rdi
  __int64 v894; // rbx
  int v895; // r12d
  int v896; // eax
  int v897; // r15d
  int v898; // eax
  const WCHAR *v899; // rax
  int v900; // r12d
  int v901; // r13d
  int v902; // r11d
  char *v903; // r15
  int v904; // r10d
  char *v905; // r14
  __int64 v906; // rbx
  int v907; // eax
  int v908; // r9d
  int v909; // r8d
  int v910; // r9d
  int v911; // r10d
  int v912; // r8d
  unsigned int v913; // r11d
  int v914; // r10d
  unsigned int v915; // r11d
  int v916; // r10d
  int v917; // r11d
  unsigned int v918; // r10d
  int v919; // r11d
  int v920; // r10d
  int v921; // r11d
  unsigned int v922; // r10d
  int v923; // r11d
  int v924; // r10d
  unsigned int v925; // edi
  int v926; // r10d
  int v927; // edi
  int v928; // r10d
  int v929; // edi
  unsigned int v930; // edx
  int v931; // edi
  int v932; // edx
  int v933; // edi
  unsigned int v934; // edx
  int v935; // edi
  int v936; // ecx
  LPCWSTR nn; // rbx
  unsigned __int64 v938; // rax
  int v939; // r14d
  __m128i v940; // xmm1
  __m128i v941; // xmm2
  __m128i v942; // xmm0
  __m128i v943; // xmm0
  __m128i v944; // xmm1
  __m128i v945; // xmm1
  __m128i v946; // xmm1
  __m128i v947; // xmm1
  char mm; // cl
  unsigned int v949; // r13d
  const WCHAR *v950; // rdx
  __int64 v951; // rax
  const WCHAR *v952; // rbx
  char *v953; // rdi
  __int64 v954; // rcx
  unsigned __int64 v955; // rcx
  unsigned int v956; // r12d
  unsigned int v957; // r15d
  LPCWSTR v958; // rcx
  __int64 v959; // rax
  int v960; // eax
  HANDLE v961; // rax
  __int64 v962; // rbx
  int v963; // eax
  __int64 v964; // rbx
  _DWORD *v965; // rdi
  unsigned int v966; // r9d
  int v967; // r10d
  void *v968; // rcx
  void *v969; // rdi
  HANDLE v970; // rax
  void *v971; // rdi
  HANDLE v972; // rax
  HANDLE v973; // rax
  HANDLE v974; // rax
  unsigned int *v975; // r9
  __int64 v976; // r9
  int v977; // r10d
  unsigned int *v978; // r9
  void *v979; // rcx
  unsigned int v980; // edi
  unsigned int *v981; // r12
  unsigned int *v982; // r9
  __int64 v983; // r9
  int v984; // r10d
  _DWORD *v985; // r9
  unsigned __int64 *v986; // rax
  __int64 v987; // rcx
  unsigned int v988; // edi
  _QWORD *v989; // r14
  int *v990; // r13
  unsigned int v991; // r15d
  int v992; // edi
  _DWORD *v993; // r9
  WCHAR *v994; // r10
  unsigned int v995; // ecx
  unsigned int v996; // edi
  HANDLE v997; // rax
  _DWORD *v998; // rbx
  __int64 v999; // rdx
  void *v1000; // rcx
  HANDLE v1001; // rax
  int v1002; // edi
  unsigned __int8 *v1003; // rdi
  WCHAR *v1004; // r14
  int v1005; // edi
  unsigned __int64 v1006; // rbx
  char *v1007; // r9
  unsigned __int8 v1008; // al
  unsigned __int64 v1009; // rcx
  __m128i v1010; // xmm2
  __m128i v1011; // xmm1
  __m128i v1012; // xmm0
  __m128i v1013; // xmm0
  __m128i v1014; // xmm1
  __m128i v1015; // xmm1
  __m128i v1016; // xmm1
  __m128i v1017; // xmm1
  unsigned __int8 *v1018; // r11
  int v1019; // r10d
  unsigned int v1020; // edx
  _BYTE *v1021; // r8
  int v1022; // r12d
  int v1023; // edi
  int v1024; // r9d
  char v1025; // dl
  int v1026; // eax
  unsigned int v1027; // r10d
  int v1028; // eax
  int v1029; // eax
  unsigned __int64 v1030; // r15
  _BYTE *v1031; // r14
  unsigned __int8 *v1032; // r11
  int v1033; // eax
  int v1034; // r9d
  int v1035; // r8d
  int v1036; // r9d
  int v1037; // r8d
  int v1038; // r10d
  unsigned int v1039; // edi
  int v1040; // r10d
  int v1041; // edi
  int v1042; // r10d
  unsigned int v1043; // edi
  int v1044; // r10d
  int v1045; // edi
  int v1046; // r10d
  int v1047; // edi
  int v1048; // r10d
  int v1049; // edi
  unsigned int v1050; // r10d
  unsigned int v1051; // edi
  int v1052; // r10d
  int v1053; // edi
  int v1054; // r10d
  int v1055; // edi
  int v1056; // r10d
  int v1057; // edi
  int v1058; // r10d
  int v1059; // edi
  unsigned int v1060; // r10d
  int v1061; // edi
  unsigned int v1062; // edi
  HANDLE v1063; // rax
  _DWORD *v1064; // rax
  _DWORD *v1065; // rbx
  HANDLE v1066; // rax
  void *v1067; // rax
  const void *v1068; // rdx
  HANDLE v1069; // rax
  _OWORD *v1070; // rax
  HANDLE v1071; // rax
  _QWORD *v1072; // rax
  void *v1073; // rdi
  HANDLE v1074; // rax
  void *v1075; // rdi
  HANDLE v1076; // rax
  void *v1077; // rdi
  HANDLE v1078; // rax
  HANDLE v1079; // rax
  void *v1080; // rbx
  HANDLE v1081; // rax
  void *v1082; // rbx
  HANDLE v1083; // rax
  void *v1084; // rbx
  HANDLE v1085; // rax
  void *v1086; // rbx
  HANDLE v1087; // rax
  HANDLE v1088; // rax
  const void **v1089; // rbx
  unsigned int v1090; // ecx
  int v1091; // edi
  unsigned int *v1092; // r10
  unsigned int v1093; // eax
  unsigned int v1094; // edi
  HANDLE v1095; // rax
  _DWORD *v1096; // r14
  int v1097; // eax
  void *v1098; // rcx
  void *v1099; // rcx
  unsigned int v1100; // r15d
  HANDLE v1101; // rax
  unsigned int v1102; // ebx
  int v1103; // eax
  __int64 v1104; // rcx
  int v1105; // eax
  unsigned int v1106; // r9d
  unsigned int *v1107; // rcx
  unsigned int v1108; // r14d
  int v1109; // r10d
  int v1110; // r10d
  unsigned int *v1111; // rax
  unsigned int *v1112; // rcx
  unsigned int v1113; // r14d
  unsigned int v1114; // r9d
  int v1115; // r10d
  unsigned int v1116; // r10d
  unsigned int *v1117; // rax
  unsigned int v1118; // r11d
  unsigned int v1119; // eax
  unsigned int v1120; // edi
  HANDLE v1121; // rax
  unsigned int *v1122; // rax
  signed int v1123; // eax
  unsigned int v1124; // edx
  _QWORD *v1125; // rbx
  signed int v1126; // edi
  FARPROC v1127; // rax
  int v1128; // eax
  SIZE_T v1129; // r13
  __int64 v1130; // r11
  unsigned __int64 v1131; // r14
  unsigned __int64 v1132; // r8
  unsigned int v1133; // r9d
  unsigned int v1134; // ecx
  SIZE_T v1135; // r10
  unsigned __int64 v1136; // r15
  unsigned int v1137; // eax
  unsigned int v1138; // r8d
  unsigned __int64 v1139; // rcx
  unsigned int v1140; // eax
  SIZE_T v1141; // r12
  unsigned int v1142; // eax
  int v1143; // r8d
  unsigned int v1144; // ecx
  unsigned int v1145; // eax
  HANDLE v1146; // rax
  _QWORD *v1147; // rax
  _QWORD *v1148; // rdi
  HANDLE v1149; // rax
  void *v1150; // rax
  HANDLE v1151; // rax
  SIZE_T v1152; // r14
  void *v1153; // rax
  void *v1154; // r15
  HANDLE v1155; // rax
  void *v1156; // rax
  void *v1157; // r14
  HANDLE v1158; // rax
  void *v1159; // r14
  HANDLE v1160; // rax
  void *v1161; // r14
  HANDLE v1162; // rax
  HANDLE v1163; // rax
  void *v1164; // r14
  HANDLE v1165; // rax
  void *v1166; // r14
  HANDLE v1167; // rax
  void *v1168; // r14
  HANDLE v1169; // rax
  HANDLE v1170; // rax
  unsigned __int8 *v1171; // r13
  __int64 v1172; // rax
  LPCWSTR v1173; // rbx
  int *v1174; // rax
  int *v1175; // r14
  unsigned __int8 v1176; // cl
  unsigned __int8 *v1177; // r8
  int *v1178; // rdi
  int v1179; // edx
  int v1180; // r11d
  int v1181; // r15d
  int v1182; // r9d
  char v1183; // r10
  int v1184; // eax
  unsigned int v1185; // r11d
  unsigned int v1186; // r10d
  int v1187; // eax
  int v1188; // eax
  int v1189; // r11d
  unsigned __int64 v1190; // r12
  int v1191; // ebx
  _BYTE *v1192; // r13
  unsigned __int8 *v1193; // r14
  int v1194; // eax
  int v1195; // r9d
  int v1196; // r8d
  int v1197; // r9d
  int v1198; // r10d
  int v1199; // r8d
  unsigned int v1200; // r11d
  int v1201; // r10d
  unsigned int v1202; // r11d
  int v1203; // r10d
  int v1204; // r11d
  unsigned int v1205; // r10d
  int v1206; // r11d
  int v1207; // r10d
  int v1208; // r11d
  unsigned int v1209; // r10d
  int v1210; // r11d
  int v1211; // r10d
  unsigned int v1212; // edi
  int v1213; // r10d
  int v1214; // edi
  int v1215; // r10d
  int v1216; // edi
  unsigned int v1217; // r10d
  int v1218; // edi
  int v1219; // r10d
  int v1220; // edi
  unsigned int v1221; // r10d
  int v1222; // edi
  int v1223; // ecx
  unsigned __int64 v1224; // rax
  __m128i v1225; // xmm2
  __m128i v1226; // xmm1
  __m128i v1227; // xmm0
  __m128i v1228; // xmm0
  __m128i v1229; // xmm1
  __m128i v1230; // xmm1
  __m128i v1231; // xmm1
  __m128i v1232; // xmm1
  void *v1233; // rbx
  HANDLE v1234; // rax
  int v1235; // edi
  __int64 v1236; // rdx
  __int64 v1237; // rdx
  SIZE_T v1238; // r15
  __int64 v1239; // rdx
  unsigned int v1240; // r9d
  int v1241; // r10d
  void *v1242; // rbx
  void *v1243; // r12
  unsigned int v1244; // r13d
  unsigned __int64 v1245; // r9
  unsigned __int64 v1246; // r11
  unsigned int *v1247; // r9
  unsigned __int64 v1248; // r11
  int v1249; // eax
  __int64 v1250; // r9
  unsigned int v1251; // r10d
  HANDLE v1252; // rax
  _QWORD *v1253; // rbx
  void *v1254; // r14
  HANDLE v1255; // rax
  void *v1256; // r14
  HANDLE v1257; // rax
  void *v1258; // r14
  HANDLE v1259; // rax
  HANDLE v1260; // rax
  HANDLE v1261; // rax
  HANDLE v1262; // rax
  void *v1263; // rbx
  HANDLE v1264; // rax
  HANDLE v1265; // rax
  LPVOID v1266; // rax
  void *v1267; // rbx
  HANDLE v1268; // rax
  void *v1269; // rbx
  HANDLE v1270; // rax
  HANDLE v1271; // rax
  HANDLE v1272; // rax
  unsigned int *v1273; // rdi
  int v1274; // edx
  unsigned int v1275; // r9d
  int v1276; // r10d
  _DWORD *v1277; // rax
  int v1278; // r9d
  unsigned int v1279; // edi
  unsigned int *v1280; // rax
  bool IsLogLicenseResult; // di
  char v1282; // r8
  char v1283; // di
  LPVOID v1284; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v1285; // [rsp+60h] [rbp-A0h]
  LPVOID v1286; // [rsp+60h] [rbp-A0h]
  LPVOID v1287; // [rsp+60h] [rbp-A0h]
  int v1288; // [rsp+60h] [rbp-A0h]
  _QWORD *v1289; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v1290; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1291; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1292; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1293; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1294; // [rsp+68h] [rbp-98h]
  int v1295; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v1296; // [rsp+70h] [rbp-90h]
  LPVOID v1297; // [rsp+70h] [rbp-90h]
  _DWORD *v1298; // [rsp+70h] [rbp-90h]
  LPVOID v1299; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v1300; // [rsp+78h] [rbp-88h]
  unsigned int v1301; // [rsp+78h] [rbp-88h]
  int v1302; // [rsp+78h] [rbp-88h]
  unsigned __int8 v1303; // [rsp+80h] [rbp-80h]
  int v1304; // [rsp+80h] [rbp-80h]
  int v1305; // [rsp+80h] [rbp-80h]
  unsigned int v1306; // [rsp+84h] [rbp-7Ch]
  unsigned int v1307; // [rsp+84h] [rbp-7Ch]
  int v1308; // [rsp+84h] [rbp-7Ch]
  int v1309; // [rsp+84h] [rbp-7Ch]
  int v1310; // [rsp+84h] [rbp-7Ch]
  int v1311; // [rsp+84h] [rbp-7Ch]
  signed int v1312; // [rsp+88h] [rbp-78h]
  int v1313; // [rsp+88h] [rbp-78h]
  int v1314; // [rsp+88h] [rbp-78h]
  int v1315; // [rsp+88h] [rbp-78h]
  char *v1316; // [rsp+90h] [rbp-70h]
  unsigned int *v1317; // [rsp+90h] [rbp-70h]
  unsigned int v1318; // [rsp+90h] [rbp-70h]
  int v1319; // [rsp+90h] [rbp-70h]
  int v1320; // [rsp+90h] [rbp-70h]
  int v1321; // [rsp+90h] [rbp-70h]
  int *v1322; // [rsp+90h] [rbp-70h]
  unsigned int v1323; // [rsp+98h] [rbp-68h]
  int v1324; // [rsp+98h] [rbp-68h]
  int v1325; // [rsp+98h] [rbp-68h]
  int v1326; // [rsp+98h] [rbp-68h]
  int v1327; // [rsp+98h] [rbp-68h]
  int v1328; // [rsp+98h] [rbp-68h]
  int v1329; // [rsp+98h] [rbp-68h]
  unsigned int *v1330; // [rsp+A0h] [rbp-60h]
  LPVOID v1331; // [rsp+A0h] [rbp-60h]
  LPVOID v1332; // [rsp+A0h] [rbp-60h]
  char *v1333; // [rsp+A0h] [rbp-60h]
  char *v1334; // [rsp+A0h] [rbp-60h]
  char *v1335; // [rsp+A0h] [rbp-60h]
  char *v1336; // [rsp+A0h] [rbp-60h]
  LPVOID v1337; // [rsp+A0h] [rbp-60h]
  LPVOID v1338; // [rsp+A0h] [rbp-60h]
  int v1339; // [rsp+A0h] [rbp-60h]
  unsigned int v1340; // [rsp+A8h] [rbp-58h]
  char v1341; // [rsp+ACh] [rbp-54h]
  int v1342; // [rsp+ACh] [rbp-54h]
  unsigned __int8 v1343; // [rsp+ACh] [rbp-54h]
  unsigned int v1344; // [rsp+B0h] [rbp-50h]
  unsigned int v1345; // [rsp+B4h] [rbp-4Ch] BYREF
  void *v1346; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1347; // [rsp+C0h] [rbp-40h]
  int v1348; // [rsp+C8h] [rbp-38h]
  int v1349; // [rsp+CCh] [rbp-34h]
  int v1350; // [rsp+D0h] [rbp-30h]
  int v1351; // [rsp+D4h] [rbp-2Ch]
  int v1352; // [rsp+D8h] [rbp-28h]
  int v1353; // [rsp+DCh] [rbp-24h]
  unsigned int v1354; // [rsp+E0h] [rbp-20h]
  LPVOID v1355; // [rsp+E8h] [rbp-18h]
  unsigned int v1356; // [rsp+F0h] [rbp-10h]
  unsigned int v1357; // [rsp+F4h] [rbp-Ch]
  LPVOID v1358; // [rsp+F8h] [rbp-8h]
  LPCWSTR lpModuleName; // [rsp+100h] [rbp+0h]
  int v1360; // [rsp+108h] [rbp+8h]
  int v1361; // [rsp+10Ch] [rbp+Ch]
  int v1362; // [rsp+110h] [rbp+10h]
  int v1363; // [rsp+114h] [rbp+14h]
  int v1364; // [rsp+118h] [rbp+18h]
  int v1365; // [rsp+11Ch] [rbp+1Ch]
  int v1366; // [rsp+120h] [rbp+20h]
  int v1367; // [rsp+124h] [rbp+24h]
  int v1368; // [rsp+128h] [rbp+28h]
  int v1369; // [rsp+12Ch] [rbp+2Ch]
  size_t v1370; // [rsp+130h] [rbp+30h] BYREF
  LPVOID v1371; // [rsp+138h] [rbp+38h]
  unsigned int v1372; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v1373; // [rsp+144h] [rbp+44h] BYREF
  unsigned int v1374; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1375; // [rsp+14Ch] [rbp+4Ch] BYREF
  unsigned int v1376; // [rsp+150h] [rbp+50h]
  unsigned int v1377; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1378; // [rsp+158h] [rbp+58h]
  unsigned int v1379; // [rsp+15Ch] [rbp+5Ch] BYREF
  char *v1380; // [rsp+160h] [rbp+60h]
  int v1381; // [rsp+168h] [rbp+68h]
  int v1382; // [rsp+16Ch] [rbp+6Ch]
  unsigned int dwBytes; // [rsp+170h] [rbp+70h]
  int dwBytes_4; // [rsp+174h] [rbp+74h]
  int v1385; // [rsp+178h] [rbp+78h]
  void *v1386; // [rsp+180h] [rbp+80h]
  LPCWSTR v1387; // [rsp+188h] [rbp+88h]
  unsigned int v1388; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1389; // [rsp+194h] [rbp+94h]
  unsigned int v1390; // [rsp+198h] [rbp+98h] BYREF
  SIZE_T v1391; // [rsp+1A0h] [rbp+A0h]
  void *v1392; // [rsp+1A8h] [rbp+A8h] BYREF
  void *v1393; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1394; // [rsp+1B8h] [rbp+B8h]
  unsigned int v1395; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1396; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v1397; // [rsp+1C8h] [rbp+C8h]
  LPVOID v1398; // [rsp+1D0h] [rbp+D0h]
  __int64 v1399; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 v1400; // [rsp+1E0h] [rbp+E0h]
  __int64 v1401; // [rsp+1E8h] [rbp+E8h]
  SIZE_T v1402; // [rsp+1F0h] [rbp+F0h]
  void *v1403; // [rsp+1F8h] [rbp+F8h]
  int v1404; // [rsp+200h] [rbp+100h]
  unsigned int *i1; // [rsp+208h] [rbp+108h] BYREF
  void *v1406; // [rsp+210h] [rbp+110h] BYREF
  LPVOID v1407; // [rsp+218h] [rbp+118h] BYREF
  unsigned int *v1408; // [rsp+220h] [rbp+120h] BYREF
  unsigned int *v1409; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1410; // [rsp+230h] [rbp+130h]
  unsigned int v1411; // [rsp+234h] [rbp+134h]
  unsigned int v1412; // [rsp+238h] [rbp+138h]
  unsigned int v1413; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v1414; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1415; // [rsp+244h] [rbp+144h]
  unsigned int v1416; // [rsp+248h] [rbp+148h]
  unsigned int v1417; // [rsp+24Ch] [rbp+14Ch]
  int v1418; // [rsp+250h] [rbp+150h]
  unsigned int v1419; // [rsp+254h] [rbp+154h]
  unsigned int v1420; // [rsp+258h] [rbp+158h]
  __int64 v1421; // [rsp+260h] [rbp+160h]
  unsigned int v1422; // [rsp+268h] [rbp+168h] BYREF
  int v1423; // [rsp+26Ch] [rbp+16Ch]
  int v1424; // [rsp+270h] [rbp+170h]
  unsigned int v1425; // [rsp+274h] [rbp+174h] BYREF
  unsigned int v1426; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1427; // [rsp+27Ch] [rbp+17Ch] BYREF
  unsigned int v1428; // [rsp+280h] [rbp+180h]
  unsigned int v1429; // [rsp+284h] [rbp+184h]
  int v1430; // [rsp+288h] [rbp+188h]
  unsigned __int64 v1431; // [rsp+290h] [rbp+190h]
  LPVOID v1432; // [rsp+298h] [rbp+198h]
  __int128 v1433; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v1434; // [rsp+2B0h] [rbp+1B0h]
  unsigned int v1435; // [rsp+2B4h] [rbp+1B4h] BYREF
  unsigned int v1436; // [rsp+2B8h] [rbp+1B8h] BYREF
  int v1437; // [rsp+2BCh] [rbp+1BCh] BYREF
  wchar_t *v1438; // [rsp+2C0h] [rbp+1C0h] BYREF
  wchar_t *v1439; // [rsp+2C8h] [rbp+1C8h] BYREF
  void *v1440; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD *v1441; // [rsp+2D8h] [rbp+1D8h] BYREF
  const void *v1442; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int *v1443; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v1444; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v1445; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int64 v1446; // [rsp+308h] [rbp+208h] BYREF
  int v1447; // [rsp+310h] [rbp+210h]
  size_t v1448; // [rsp+318h] [rbp+218h] BYREF
  _DWORD *v1449; // [rsp+320h] [rbp+220h] BYREF
  _QWORD *v1450; // [rsp+328h] [rbp+228h] BYREF
  WCHAR *v1451; // [rsp+330h] [rbp+230h] BYREF
  void *v1452; // [rsp+338h] [rbp+238h] BYREF
  LPVOID v1453; // [rsp+340h] [rbp+240h]
  void *v1454; // [rsp+348h] [rbp+248h] BYREF
  LPVOID v1455; // [rsp+350h] [rbp+250h]
  HLOCAL hMem; // [rsp+358h] [rbp+258h]
  void *v1457; // [rsp+360h] [rbp+260h] BYREF
  LPVOID v1458; // [rsp+368h] [rbp+268h]
  LPVOID v1459; // [rsp+370h] [rbp+270h]
  __int64 v1460; // [rsp+378h] [rbp+278h]
  __int64 v1461; // [rsp+380h] [rbp+280h]
  unsigned int v1462; // [rsp+388h] [rbp+288h] BYREF
  unsigned int v1463; // [rsp+38Ch] [rbp+28Ch] BYREF
  unsigned int v1464; // [rsp+390h] [rbp+290h] BYREF
  unsigned int v1465; // [rsp+394h] [rbp+294h] BYREF
  unsigned int v1466; // [rsp+398h] [rbp+298h] BYREF
  int v1467; // [rsp+3A0h] [rbp+2A0h]
  unsigned int v1468; // [rsp+3A8h] [rbp+2A8h] BYREF
  int v1469; // [rsp+3B0h] [rbp+2B0h]
  unsigned int v1470; // [rsp+3B8h] [rbp+2B8h]
  unsigned int v1471; // [rsp+3BCh] [rbp+2BCh]
  unsigned int v1472; // [rsp+3C0h] [rbp+2C0h]
  unsigned int v1473; // [rsp+3C4h] [rbp+2C4h]
  int v1474; // [rsp+3C8h] [rbp+2C8h]
  unsigned int v1475; // [rsp+3CCh] [rbp+2CCh]
  int v1476; // [rsp+3D0h] [rbp+2D0h]
  int v1477; // [rsp+3D4h] [rbp+2D4h]
  int v1478; // [rsp+3D8h] [rbp+2D8h]
  unsigned int v1479; // [rsp+3DCh] [rbp+2DCh]
  int v1480; // [rsp+3E0h] [rbp+2E0h]
  int v1481; // [rsp+3E4h] [rbp+2E4h]
  unsigned int v1482; // [rsp+3E8h] [rbp+2E8h]
  int v1483; // [rsp+3ECh] [rbp+2ECh]
  unsigned int v1484; // [rsp+3F0h] [rbp+2F0h] BYREF
  unsigned int v1485; // [rsp+3F4h] [rbp+2F4h] BYREF
  unsigned int v1486; // [rsp+3F8h] [rbp+2F8h] BYREF
  unsigned int v1487; // [rsp+3FCh] [rbp+2FCh] BYREF
  int v1488; // [rsp+400h] [rbp+300h]
  unsigned int v1489; // [rsp+408h] [rbp+308h] BYREF
  unsigned int v1490; // [rsp+40Ch] [rbp+30Ch] BYREF
  unsigned int v1491; // [rsp+410h] [rbp+310h]
  unsigned int v1492; // [rsp+414h] [rbp+314h] BYREF
  unsigned int v1493; // [rsp+418h] [rbp+318h] BYREF
  LPVOID lpMem; // [rsp+420h] [rbp+320h]
  size_t pcchLength; // [rsp+428h] [rbp+328h] BYREF
  LPVOID v1496; // [rsp+430h] [rbp+330h]
  int *v1497; // [rsp+438h] [rbp+338h] BYREF
  LPVOID v1498; // [rsp+440h] [rbp+340h]
  LPVOID v1499; // [rsp+448h] [rbp+348h]
  __int64 v1500; // [rsp+450h] [rbp+350h] BYREF
  void **v1501; // [rsp+458h] [rbp+358h] BYREF
  unsigned int v1502; // [rsp+460h] [rbp+360h]
  LPVOID v1503; // [rsp+468h] [rbp+368h]
  _DWORD *v1504; // [rsp+470h] [rbp+370h] BYREF
  unsigned int *v1505; // [rsp+478h] [rbp+378h] BYREF
  unsigned int *v1506; // [rsp+480h] [rbp+380h] BYREF
  LPVOID v1507; // [rsp+488h] [rbp+388h]
  _DWORD *v1508; // [rsp+490h] [rbp+390h] BYREF
  unsigned int *v1509; // [rsp+498h] [rbp+398h]
  unsigned int v1510; // [rsp+4A0h] [rbp+3A0h]
  unsigned int v1511; // [rsp+4A4h] [rbp+3A4h]
  unsigned int v1512; // [rsp+4A8h] [rbp+3A8h] BYREF
  unsigned int v1513; // [rsp+4ACh] [rbp+3ACh]
  int v1514; // [rsp+4B0h] [rbp+3B0h]
  unsigned int v1515; // [rsp+4B4h] [rbp+3B4h] BYREF
  unsigned int v1516; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned int v1517; // [rsp+4BCh] [rbp+3BCh]
  unsigned int v1518; // [rsp+4C0h] [rbp+3C0h] BYREF
  unsigned int v1519; // [rsp+4C4h] [rbp+3C4h] BYREF
  int v1520; // [rsp+4C8h] [rbp+3C8h]
  size_t Size; // [rsp+4D0h] [rbp+3D0h]
  __int64 (__fastcall *v1522)(); // [rsp+4D8h] [rbp+3D8h] BYREF
  size_t v1523; // [rsp+4E0h] [rbp+3E0h]
  size_t v1524; // [rsp+4E8h] [rbp+3E8h]
  unsigned __int64 v1525; // [rsp+4F0h] [rbp+3F0h]
  size_t v1526; // [rsp+4F8h] [rbp+3F8h]
  unsigned __int64 v1527; // [rsp+500h] [rbp+400h]
  unsigned __int64 v1528; // [rsp+508h] [rbp+408h]
  AtmosCheck *v1529; // [rsp+510h] [rbp+410h]
  __int64 (__fastcall *v1530)(); // [rsp+518h] [rbp+418h] BYREF
  __int64 (__fastcall *v1531)(); // [rsp+520h] [rbp+420h] BYREF
  unsigned __int64 v1532; // [rsp+528h] [rbp+428h]
  _DWORD *v1533; // [rsp+530h] [rbp+430h] BYREF
  void *v1534; // [rsp+538h] [rbp+438h]
  __int64 (__fastcall *v1535)(); // [rsp+540h] [rbp+440h] BYREF
  unsigned __int16 *v1536; // [rsp+548h] [rbp+448h]
  unsigned __int16 *v1537; // [rsp+550h] [rbp+450h]
  const unsigned __int16 *v1538; // [rsp+558h] [rbp+458h]
  int v1539; // [rsp+560h] [rbp+460h] BYREF
  __int64 v1540; // [rsp+564h] [rbp+464h]
  int v1541; // [rsp+56Ch] [rbp+46Ch]
  BCRYPT_KEY_HANDLE hKey[2]; // [rsp+570h] [rbp+470h] BYREF
  HMODULE phModule; // [rsp+580h] [rbp+480h] BYREF
  unsigned __int64 v1544; // [rsp+588h] [rbp+488h]
  int *v1545; // [rsp+590h] [rbp+490h]
  _QWORD *v1546; // [rsp+598h] [rbp+498h]
  _DWORD *v1547; // [rsp+5A0h] [rbp+4A0h]
  const void *v1548; // [rsp+5A8h] [rbp+4A8h]
  unsigned int *v1549; // [rsp+5B0h] [rbp+4B0h]
  int *v1550; // [rsp+5B8h] [rbp+4B8h]
  __int64 v1551; // [rsp+5C0h] [rbp+4C0h]
  __int64 v1552; // [rsp+5C8h] [rbp+4C8h]
  __int64 v1553; // [rsp+5D0h] [rbp+4D0h]
  __int64 v1554; // [rsp+5D8h] [rbp+4D8h]
  __int64 v1555; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v1556; // [rsp+5E8h] [rbp+4E8h] BYREF
  __int64 v1557; // [rsp+5F0h] [rbp+4F0h] BYREF
  __int64 v1558; // [rsp+5F8h] [rbp+4F8h] BYREF
  int v1559; // [rsp+600h] [rbp+500h]
  unsigned int v1560; // [rsp+604h] [rbp+504h]
  __int64 v1561; // [rsp+608h] [rbp+508h] BYREF
  __int64 v1562; // [rsp+610h] [rbp+510h]
  __int64 v1563; // [rsp+618h] [rbp+518h] BYREF
  void *v1564; // [rsp+620h] [rbp+520h]
  void *v1565; // [rsp+628h] [rbp+528h]
  unsigned __int64 v1566; // [rsp+630h] [rbp+530h]
  unsigned __int64 v1567; // [rsp+638h] [rbp+538h]
  WCHAR *v1568; // [rsp+640h] [rbp+540h]
  __int64 *v1569; // [rsp+648h] [rbp+548h]
  __int64 v1570; // [rsp+650h] [rbp+550h]
  WCHAR *v1571; // [rsp+658h] [rbp+558h]
  __int64 v1572; // [rsp+660h] [rbp+560h]
  unsigned int *v1573; // [rsp+668h] [rbp+568h]
  unsigned int *v1574; // [rsp+670h] [rbp+570h]
  HMODULE hModule; // [rsp+678h] [rbp+578h] BYREF
  LPCWSTR v1576; // [rsp+680h] [rbp+580h]
  unsigned __int64 v1577; // [rsp+688h] [rbp+588h] BYREF
  unsigned __int64 v1578; // [rsp+690h] [rbp+590h] BYREF
  unsigned __int64 v1579; // [rsp+698h] [rbp+598h] BYREF
  unsigned int v1580; // [rsp+6A0h] [rbp+5A0h]
  __int64 v1581; // [rsp+6A8h] [rbp+5A8h]
  void *Src; // [rsp+6B0h] [rbp+5B0h]
  void *v1583; // [rsp+6B8h] [rbp+5B8h]
  unsigned __int64 v1584; // [rsp+6C0h] [rbp+5C0h]
  _QWORD *v1585; // [rsp+6C8h] [rbp+5C8h]
  __int64 *v1586; // [rsp+6D0h] [rbp+5D0h]
  __int64 v1587; // [rsp+6D8h] [rbp+5D8h]
  void *v1588; // [rsp+6E0h] [rbp+5E0h]
  __int64 v1589; // [rsp+6E8h] [rbp+5E8h]
  void *v1590; // [rsp+6F0h] [rbp+5F0h]
  void *v1591; // [rsp+6F8h] [rbp+5F8h]
  _QWORD v1592[2]; // [rsp+700h] [rbp+600h] BYREF
  unsigned int v1593; // [rsp+710h] [rbp+610h]
  unsigned int v1594; // [rsp+714h] [rbp+614h]
  int v1595; // [rsp+718h] [rbp+618h]
  _QWORD v1596[2]; // [rsp+720h] [rbp+620h] BYREF
  unsigned int v1597; // [rsp+730h] [rbp+630h]
  unsigned int v1598; // [rsp+734h] [rbp+634h]
  int v1599; // [rsp+738h] [rbp+638h]
  void *v1600[4]; // [rsp+748h] [rbp+648h] BYREF
  int *v1601; // [rsp+768h] [rbp+668h] BYREF
  void *v1602; // [rsp+778h] [rbp+678h] BYREF
  _QWORD v1603[3]; // [rsp+788h] [rbp+688h] BYREF
  void *v1604[14]; // [rsp+7A0h] [rbp+6A0h] BYREF
  _QWORD v1605[14]; // [rsp+810h] [rbp+710h] BYREF
  _QWORD v1606[14]; // [rsp+880h] [rbp+780h] BYREF
  _QWORD v1607[14]; // [rsp+8F0h] [rbp+7F0h] BYREF
  _QWORD v1608[14]; // [rsp+960h] [rbp+860h] BYREF
  _QWORD v1609[14]; // [rsp+9D0h] [rbp+8D0h] BYREF
  _QWORD v1610[14]; // [rsp+A40h] [rbp+940h] BYREF
  _QWORD v1611[14]; // [rsp+AB0h] [rbp+9B0h] BYREF
  _QWORD v1612[14]; // [rsp+B20h] [rbp+A20h] BYREF
  _QWORD v1613[14]; // [rsp+B90h] [rbp+A90h] BYREF
  __int64 v1614; // [rsp+C00h] [rbp+B00h] BYREF
  __int64 v1615; // [rsp+C08h] [rbp+B08h]
  __int64 v1616; // [rsp+C10h] [rbp+B10h] BYREF
  __int64 v1617; // [rsp+C18h] [rbp+B18h]
  __int64 v1618; // [rsp+C20h] [rbp+B20h] BYREF
  __int64 v1619; // [rsp+C28h] [rbp+B28h]
  __int64 v1620; // [rsp+C30h] [rbp+B30h] BYREF
  __int64 v1621; // [rsp+C38h] [rbp+B38h]
  __int64 v1622; // [rsp+C40h] [rbp+B40h] BYREF
  int v1623; // [rsp+C48h] [rbp+B48h]
  int v1624; // [rsp+C4Ch] [rbp+B4Ch]
  _DWORD v1625[10]; // [rsp+C50h] [rbp+B50h] BYREF
  _DWORD v1626[12]; // [rsp+C78h] [rbp+B78h] BYREF
  _DWORD v1627[12]; // [rsp+CA8h] [rbp+BA8h] BYREF
  _DWORD v1628[12]; // [rsp+CD8h] [rbp+BD8h] BYREF
  _DWORD v1629[12]; // [rsp+D08h] [rbp+C08h] BYREF
  _DWORD v1630[12]; // [rsp+D38h] [rbp+C38h] BYREF
  _DWORD v1631[10]; // [rsp+D68h] [rbp+C68h] BYREF
  _DWORD v1632[24]; // [rsp+D90h] [rbp+C90h] BYREF
  _DWORD v1633[24]; // [rsp+DF0h] [rbp+CF0h] BYREF
  _DWORD v1634[24]; // [rsp+E50h] [rbp+D50h] BYREF
  char v1635[12]; // [rsp+EB0h] [rbp+DB0h] BYREF
  unsigned int v1636; // [rsp+EBCh] [rbp+DBCh]
  _DWORD v1637[56]; // [rsp+ED0h] [rbp+DD0h] BYREF
  _DWORD v1638[16]; // [rsp+FB0h] [rbp+EB0h] BYREF
  unsigned __int16 *v1639[6]; // [rsp+FF0h] [rbp+EF0h] BYREF
  unsigned __int16 *v1640[20]; // [rsp+1020h] [rbp+F20h] BYREF
  __int16 v1641; // [rsp+10C0h] [rbp+FC0h] BYREF
  int v1642; // [rsp+10C2h] [rbp+FC2h]
  _BYTE v1643[176]; // [rsp+10D0h] [rbp+FD0h] BYREF
  WCHAR Filename[264]; // [rsp+1180h] [rbp+1080h] BYREF

  v1 = 0LL;
  v1529 = this;
  v2 = (unsigned int *)((char *)this + 128);
  v1446 = 0x8007049080070490uLL;
  v3 = this;
  v1447 = -2147023728;
  v1509 = (unsigned int *)((char *)this + 128);
  hMem = 0LL;
  if ( this == (AtmosCheck *)-128LL )
    goto LABEL_480;
  v1430 = 0;
  v1410 = 0;
  v1385 = 0;
  while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
    ;
  v4 = dword_18014BF38;
  v5 = 4LL;
  v1418 = -1;
  if ( dword_18014BF38 )
    goto LABEL_39;
  lpMem = 0LL;
  v1581 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x338uLL);
  j = v7;
  if ( !v7 )
    goto LABEL_497;
  v9 = 0;
  v1360 = 0;
  v10 = 0;
  v1367 = 0;
  v11 = 0;
  v12 = (char *)&unk_180103702;
  v13 = v7 + 7;
  v14 = -1;
  v15 = 103LL;
  do
  {
    v16 = (unsigned __int8)*(v12 - 1);
    v17 = (unsigned __int8)*(v12 - 2);
    v18 = (unsigned __int8)v12[2];
    v12 += 8;
    v19 = (unsigned __int8)*(v12 - 7) | (((unsigned __int8)*(v12 - 8) | ((v16 | (v17 << 8)) << 8)) << 8);
    v20 = v19 ^ v11;
    v21 = (unsigned __int8)*(v12 - 3) | (((unsigned __int8)*(v12 - 4) | (((unsigned __int8)*(v12 - 5) | (v18 << 8)) << 8)) << 8);
    v22 = v20 ^ v21 ^ v10 ^ 0xAC987321;
    v23 = (__ROL4__(v22, 10) + 4991 * __ROL4__(v22 + 1419157410, 5)) ^ v20;
    v24 = (43881 * __ROR4__(v23 + 133239679, 9) - __ROL4__(v23, 2)) ^ v22;
    v25 = (24670 * v24 - (v24 >> 13) - 123127970) ^ v23;
    v26 = (2033 * __ROL4__(v25 ^ 0xAB69, 6) - __ROL4__(v25, 2)) ^ v24;
    v27 = (133239679 - (v26 ^ 0xAB69605E)) ^ v25;
    v28 = (43881 * (v27 ^ 0x137F)) ^ __ROR4__(v27, 6) ^ v26;
    v29 = (__ROL4__(v28, 2) + 24670 * __ROR4__(v28 + 133239679, 15)) ^ v27;
    v30 = (2033 * __ROR4__(v29 + 1419157410, 14) - __ROL4__(v29, 8)) ^ v28;
    v31 = __ROR4__(v30, 10) ^ (4991 * __ROR4__(v30 ^ 0xAB69605E, 12)) ^ v29;
    v32 = (v31 >> 10) ^ (43881 * (v31 ^ 0x7F1)) ^ v30;
    v33 = (2033 * (__ROR4__(~v32, 5) + 24670)) ^ v31;
    v34 = v32 ^ (v33 - 2033) ^ 0xAB69605E;
    v35 = ((v34 >> 2) + 4991 * __ROL4__(v32 ^ (v33 - 2033) ^ 0xAB6967AF, 2)) ^ v33;
    v36 = (__ROL4__(v35, 7) + 43881 * __ROR4__(v35 - 133239679, 6)) ^ v34;
    v37 = (24670 * (v36 ^ 0x137F) + __ROR4__(v36, 9)) ^ v35;
    v38 = (__ROL4__(v37, 7) + 2033 * __ROL4__(v37 ^ 0xAB69, 5)) ^ v36;
    v39 = v38 ^ v37 ^ 0xAC987321;
    v40 = (4991 * (__ROR4__(v39, 3) - 43881)) ^ v38;
    v41 = (24670 * __ROR4__(v40 - 133239679, 1) - __ROR4__(v40, 6)) ^ v39;
    v42 = (__ROL4__(v41, 14) + 2033 * __ROL4__(v41 - 1419157410, 3)) ^ v40;
    v43 = (4991 * __ROL4__(v42 - 1419157410, 15) - __ROR4__(v42, 14)) ^ v41;
    v13 += 8;
    v44 = (v43 >> 3) ^ (43881 * (v43 ^ 0x605E)) ^ v42;
    v1360 = v14 ^ v44;
    v14 = v21;
    v45 = v9 ^ __ROL4__(v44, 2) ^ (24670 * __ROL4__(v44 ^ 0x7F1137F, 4));
    v9 = v19;
    v1367 = v45 ^ v43;
    *(v13 - 12) = v45 ^ v43;
    v1367 = __ROR4__(v1367, 8);
    *(v13 - 8) = v1360;
    v1360 = __ROR4__(v1360, 8);
    *(v13 - 13) = v1367;
    v1367 = __ROR4__(v1367, 8);
    *(v13 - 9) = v1360;
    v1360 = __ROR4__(v1360, 8);
    *(v13 - 14) = v1367;
    v1367 = __ROR4__(v1367, 8);
    *(v13 - 10) = v1360;
    v1360 = __ROR4__(v1360, 8);
    *(v13 - 15) = v1367;
    *(v13 - 11) = v1360;
    v11 = __ROR4__(v1367, 8);
    v10 = __ROR4__(v1360, 8);
    v1367 = v11;
    v1360 = v10;
    --v15;
  }
  while ( v15 );
  v1 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  FunctionAddress = 0;
  v49 = 0;
  v50 = 0LL;
  do
  {
    v46 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&j[v47]), v46);
    v51 = _mm_loadu_si128((const __m128i *)&j[v47 + 16]);
    v47 += 32LL;
    v52 = _mm_xor_si128(v51, v50);
    v50 = v52;
  }
  while ( v47 < 0x320 );
  v53 = _mm_xor_si128(v52, v46);
  v54 = _mm_xor_si128(v53, _mm_srli_si128(v53, 8));
  v55 = _mm_xor_si128(v54, _mm_srli_si128(v54, 4));
  v56 = _mm_xor_si128(v55, _mm_srli_si128(v55, 2));
  for ( i = _mm_cvtsi128_si32(_mm_xor_si128(v56, _mm_srli_si128(v56, 1))); v47 < 0x338; ++v47 )
    i ^= j[v47];
  if ( i != 64LL )
  {
    operator delete(j);
    v5 = 4LL;
LABEL_497:
    FunctionAddress = -1073741702;
    v58 = (HMODULE *)&unk_18014C330;
    goto LABEL_35;
  }
  lpMem = j;
  v58 = (HMODULE *)&unk_18014C330;
  v1581 = 824LL;
  j[823] = 0;
  memset(&unk_18014C330, 0, 0x60uLL);
  if ( *j )
  {
    v59 = 0;
    while ( 1 )
    {
      v60 = (const WCHAR *)j;
      v61 = -1LL;
      do
        v62 = *(_WORD *)&j[2 * v61++ + 2] == 0;
      while ( !v62 );
      v63 = &j[2 * v61];
      v64 = (char *)&unk_18014C330 + 24 * v59;
      if ( !GetModuleHandleExW(0, v60, (HMODULE *)v64) )
        break;
      FunctionAddress = 0;
      if ( **(_WORD **)v64 == 23117 )
      {
        v65 = *(int *)(*(_QWORD *)v64 + 60LL);
        if ( (unsigned int)v65 >= 0x10000000 )
        {
          FunctionAddress = -1073741701;
        }
        else
        {
          v66 = *(_QWORD *)v64 + v65;
          if ( v66 < *(_QWORD *)v64 )
          {
            FunctionAddress = -1073741701;
          }
          else if ( *(_DWORD *)v66 == 17744 )
          {
            if ( ((*(_WORD *)(v66 + 24) - 267) & 0xFEFF) != 0 )
            {
              FunctionAddress = -1073741811;
            }
            else
            {
              *(_QWORD *)(v64 + 12) = *(_QWORD *)(v66 + 136);
              *((_DWORD *)v64 + 2) = *(_DWORD *)(v66 + 80);
            }
          }
          else
          {
            FunctionAddress = -1073741701;
          }
        }
      }
      else
      {
        FunctionAddress = -1073741701;
      }
      v67 = *(_DWORD *)(v63 + 2);
      v68 = 0;
      for ( j = v63 + 6; v68 < v67; ++v68 )
      {
        v1535 = 0LL;
        v69 = j;
        v70 = -1LL;
        do
          ++v70;
        while ( j[v70] );
        j += v70 + 1;
        if ( FunctionAddress >= 0 )
        {
          FunctionAddress = WARBIRD::GetFunctionAddress(v69, 0LL, v64, &v1535);
          if ( FunctionAddress < 0 )
            goto LABEL_32;
          off_18014A000[v49] = v1535;
        }
        ++v49;
      }
      ++v59;
      v58 = (HMODULE *)&unk_18014C330;
      if ( !*j )
      {
LABEL_32:
        v58 = (HMODULE *)&unk_18014C330;
        goto LABEL_33;
      }
    }
    FunctionAddress = -1073741702;
LABEL_33:
    v1 = 0LL;
  }
  v5 = 4LL;
LABEL_35:
  if ( lpMem )
  {
    v71 = GetProcessHeap();
    HeapFree(v71, 0, lpMem);
  }
  if ( FunctionAddress >= 0 )
  {
    v4 = dword_18014BF38;
LABEL_39:
    dword_18014BF38 = v4 + 1;
    goto LABEL_40;
  }
  v394 = 4LL;
  do
  {
    if ( *v58 )
      FreeLibrary(*v58);
    v58 += 3;
    --v394;
  }
  while ( v394 );
  memset(&unk_18014C330, 0, 0x60uLL);
  memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
LABEL_40:
  v72 = 0LL;
  _InterlockedExchange(&dword_18014C670, 0);
  v73 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_41;
  v395 = off_18014A110[0]();
  if ( v395 )
  {
    v75 = 0;
    for ( k = 0LL; ; k = v1435 )
    {
      v1438 = v1;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_18014A130[0])(
             v395,
             2LL,
             v1,
             k,
             &v1435) )
      {
        v72 = v1;
        goto LABEL_522;
      }
      LastError = GetLastError();
      if ( LastError != 122 )
        break;
      if ( v1 )
        goto LABEL_519;
      v1 = (wchar_t *)operator new(v1435);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1438);
      if ( !v1 )
      {
        v75 = -2147024882;
LABEL_522:
        v1 = 0LL;
        v1438 = 0LL;
        goto LABEL_523;
      }
    }
    if ( !LastError )
    {
LABEL_519:
      v1 = 0LL;
      v75 = -2147467259;
      goto LABEL_523;
    }
    if ( LastError > 0 )
      v75 = (unsigned __int16)LastError | 0x80070000;
    else
      v75 = LastError;
    v1 = 0LL;
LABEL_523:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1438);
    if ( v75 >= 0 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v400 = ((__int64 (__fastcall *)(_QWORD))off_18014A128[0])(CurrentThreadId);
      if ( v400 )
      {
        v75 = 0;
        for ( m = 0LL; ; m = v1436 )
        {
          v1439 = v1;
          if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_18014A130[0])(
                 v400,
                 2LL,
                 v1,
                 m,
                 &v1436) )
          {
            v73 = v1;
            goto LABEL_543;
          }
          v403 = GetLastError();
          if ( v403 != 122 )
            break;
          if ( v1 )
            goto LABEL_540;
          v1 = (wchar_t *)operator new(v1436);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1439);
          if ( !v1 )
          {
            v75 = -2147024882;
LABEL_543:
            LODWORD(v1) = 0;
            v1439 = 0LL;
            goto LABEL_544;
          }
        }
        if ( !v403 )
        {
LABEL_540:
          LODWORD(v1) = 0;
          v75 = -2147467259;
          goto LABEL_544;
        }
        if ( v403 > 0 )
          v75 = (unsigned __int16)v403 | 0x80070000;
        else
          v75 = v403;
        LODWORD(v1) = 0;
LABEL_544:
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1439);
        if ( v75 < 0 )
          goto LABEL_42;
        if ( v72 && !wcscmp_0(v72, L"WinSta0") && v73 && !wcscmp_0(v73, L"Default") )
        {
          v1437 = 0;
          CurrentProcess = GetCurrentProcess();
          if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1437, 4LL) )
          {
            v405 = GetLastError();
            v75 = v405;
            if ( v405 > 0 )
              v75 = (unsigned __int16)v405 | 0x80070000;
            if ( v75 >= 0 )
              v75 = -2147467259;
            goto LABEL_42;
          }
          if ( (v1437 & 0xF) == 0 )
            v74 = 1;
        }
LABEL_41:
        v1385 = v74;
LABEL_42:
        if ( v73 )
          operator delete(v73);
        goto LABEL_44;
      }
      v401 = GetLastError();
      v75 = v401;
      if ( v401 > 0 )
        v75 = (unsigned __int16)v401 | 0x80070000;
      if ( v75 >= 0 )
        v75 = -2147467259;
    }
  }
  else
  {
    v396 = GetLastError();
    v75 = v396;
    if ( v396 > 0 )
      v75 = (unsigned __int16)v396 | 0x80070000;
    if ( v75 >= 0 )
      v75 = -2147467259;
  }
LABEL_44:
  if ( v72 )
    operator delete(v72);
  if ( v75 < 0 )
    v1385 = 0;
  v1410 = 0;
  v76 = LocalAlloc(0x40u, 4uLL);
  v1534 = v76;
  if ( !v76 )
  {
    v77 = 0LL;
    LODWORD(v1) = -2147024882;
LABEL_558:
    v388 = v1381;
    goto LABEL_462;
  }
  v77 = v76;
  v1423 = 0;
  v1345 = 0;
  v78 = 0LL;
  v1346 = 0LL;
  v79 = 0LL;
  v1397 = 0LL;
  v1398 = 0LL;
  Src = &unk_18014B120;
  dwBytes_4 = 0;
  Size = 160LL;
  v80 = GetProcessHeap();
  v81 = HeapAlloc(v80, 8u, 0xA0uLL);
  v82 = v81;
  if ( !v81 )
  {
    LODWORD(v1) = -1073741801;
    goto LABEL_451;
  }
  memcpy_0(v81, Src, Size);
  v83 = (unsigned int)Size;
  v78 = v82;
  v1284 = v82;
  v1583 = &unk_18014B060;
  v1526 = 8LL;
  v84 = GetProcessHeap();
  v85 = HeapAlloc(v84, 8u, 8uLL);
  v86 = v85;
  if ( !v85 )
  {
    v79 = 0LL;
    LODWORD(v1) = -1073741801;
LABEL_786:
    v5 = 4LL;
    goto LABEL_451;
  }
  memcpy_0(v85, v1583, v1526);
  v87 = v1526;
  v1299 = v86;
  v1528 = __rdtsc();
  v88 = 8;
  v1382 = 8;
  if ( (unsigned int)v83 >= 0xFFFFFFFC )
  {
    LODWORD(v1) = -1073741675;
  }
  else
  {
    v88 = v83 + 4;
    v1382 = v83 + 4;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  v89 = v88 + 8;
  if ( v88 >= 0xFFFFFFF8 )
  {
    v89 = 0xFFFFFFFFLL;
    LODWORD(v1) = -805306219;
  }
  else
  {
    LODWORD(v1) = 0x10000000;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  if ( (unsigned int)v1526 >= 0xFFFFFFFC )
  {
    LODWORD(v1) = -1073741675;
  }
  else
  {
    v88 = v1526 + 4;
    v1382 = v1526 + 4;
    LODWORD(v1) = 0;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  v90 = v88 + (unsigned int)v89;
  if ( (unsigned int)v90 < (unsigned int)v89 )
  {
    v90 = 0xFFFFFFFFLL;
    LODWORD(v1) = -805306219;
  }
  else
  {
    LODWORD(v1) = 0x10000000;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  v1382 = 12;
  LODWORD(v1) = (int)v90 + 12 < (unsigned int)v90 ? -805306219 : 0x10000000;
  if ( (int)v1 < 0 )
    goto LABEL_784;
  if ( StringLengthWorkerW((STRSAFE_PCNZWCH)v90, v89, &pcchLength) < 0 )
  {
    pcchLength = 0LL;
    LODWORD(v1) = -1073741762;
    goto LABEL_784;
  }
  v93 = 2 * ++pcchLength + 4;
  if ( (unsigned int)(2 * pcchLength) >= 0xFFFFFFFC )
  {
    v93 = v1382;
    LODWORD(v1) = -1073741675;
  }
  else
  {
    LODWORD(v1) = 0;
    v1382 = 2 * pcchLength + 4;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  v94 = v93 + v91;
  if ( v93 + v91 < v91 )
  {
    v94 = v92;
    LODWORD(v1) = -805306219;
  }
  else
  {
    LODWORD(v1) = 0x10000000;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  v1382 = 8;
  v95 = v94 + 8;
  if ( v94 + 8 < v94 )
  {
    v95 = v92;
    LODWORD(v1) = -805306219;
  }
  else
  {
    LODWORD(v1) = 0x10000000;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  v1382 = 8;
  v96 = v95 + 8;
  if ( v95 + 8 < v95 )
  {
    v96 = v92;
    LODWORD(v1) = -805306219;
  }
  else
  {
    LODWORD(v1) = 0x10000000;
  }
  if ( (int)v1 < 0 )
    goto LABEL_784;
  v1345 = v96;
  v97 = v96;
  v98 = GetProcessHeap();
  v99 = HeapAlloc(v98, 8u, v97);
  if ( !v99 )
  {
    LODWORD(v1) = -1073741801;
    goto LABEL_784;
  }
  LODWORD(v1) = 0;
  v1346 = v99;
  v1520 = 0;
  if ( v99 + 1 < v99 )
  {
LABEL_783:
    LODWORD(v1) = -1073741675;
    goto LABEL_784;
  }
  if ( v99 + 2 > (_DWORD *)((char *)v99 + v1345) )
  {
    LODWORD(v1) = -1073741789;
    goto LABEL_784;
  }
  *v99 = 4;
  v99[1] = v1520;
  v100 = 1;
  v1344 = 1;
  if ( (_DWORD)v83 )
  {
    if ( v1346 )
    {
      v101 = v1346;
      v102 = 0;
      v103 = v1419;
      while ( 1 )
      {
        if ( *v101 >= 0xFFFFFFFC )
        {
          LODWORD(v1) = -1073741675;
        }
        else
        {
          v103 = *v101 + 4;
          v1419 = v103;
        }
        if ( (int)v1 < 0 )
          goto LABEL_782;
        if ( (_DWORD *)((char *)v101 + v103) < v101 )
          goto LABEL_783;
        ++v102;
        LODWORD(v1) = 0;
        v101 = (_DWORD *)((char *)v101 + v103);
        if ( v102 )
        {
          if ( v101 + 1 < v101 )
            goto LABEL_783;
          if ( (char *)v101 + v83 + 4 <= (char *)v1346 + v1345 )
          {
            *v101 = v83;
            memcpy_0(v101 + 1, v82, v83);
            v100 = 2;
            v1344 = 2;
            goto LABEL_93;
          }
          LODWORD(v1) = -1073741789;
          goto LABEL_784;
        }
      }
    }
    v406 = RtlUIntAdd(4LL, (unsigned int)v83, &v1462);
    v407 = v1419;
    LODWORD(v1) = v406;
    if ( v406 >= 0 )
      v407 = v1462;
    v1419 = v407;
    if ( v406 >= 0 )
    {
      v408 = RtlUIntAdd(v1345, v407, &v1345);
      v100 = 1;
      LODWORD(v1) = v408;
      if ( v408 >= 0 )
      {
        v100 = 2;
        v1344 = 2;
        goto LABEL_94;
      }
    }
  }
  else
  {
    LODWORD(v1) = -1073741811;
  }
LABEL_93:
  if ( (int)v1 < 0 )
    goto LABEL_782;
LABEL_94:
  if ( v87 )
  {
    if ( v1346 )
    {
      v104 = v1346;
      v105 = 0;
      v106 = 0;
      if ( v100 )
      {
        v107 = v1417;
        do
        {
          if ( *v104 >= 0xFFFFFFFC )
          {
            LODWORD(v1) = -1073741675;
          }
          else
          {
            v107 = *v104 + 4;
            v1417 = v107;
            LODWORD(v1) = 0;
          }
          if ( (int)v1 < 0 )
            goto LABEL_106;
          if ( (_DWORD *)((char *)v104 + v107) < v104 )
            goto LABEL_783;
          ++v106;
          v104 = (_DWORD *)((char *)v104 + v107);
        }
        while ( v106 < v100 );
      }
      if ( v104 + 1 >= v104 )
      {
        LODWORD(v1) = 0;
        if ( (char *)v104 + v87 + 4 <= (char *)v1346 + v1345 )
        {
          *v104 = v87;
          memcpy_0(v104 + 1, v86, v87);
          v100 = ++v1344;
LABEL_106:
          v5 = 4LL;
          goto LABEL_107;
        }
        LODWORD(v1) = -1073741789;
LABEL_784:
        v79 = v86;
        goto LABEL_785;
      }
      goto LABEL_783;
    }
    v5 = 4LL;
    v409 = RtlUIntAdd(4LL, v87, &v1463);
    v410 = v1417;
    LODWORD(v1) = v409;
    if ( v409 >= 0 )
      v410 = v1463;
    v1417 = v410;
    if ( v409 >= 0 )
    {
      v411 = RtlUIntAdd(v1345, v410, &v1345);
      v100 = v1344;
      LODWORD(v1) = v411;
      if ( v411 >= 0 )
      {
        v100 = ++v1344;
        v105 = 0;
        goto LABEL_108;
      }
    }
  }
  else
  {
    LODWORD(v1) = -1073741811;
    v5 = 4LL;
  }
  v105 = 0;
LABEL_107:
  if ( (int)v1 < 0 )
    goto LABEL_782;
LABEL_108:
  v1584 = v1528;
  if ( v1346 )
  {
    v108 = (size_t)v1346;
    v109 = 0;
    if ( v100 )
    {
      v110 = v1416;
      do
      {
        if ( *(_DWORD *)v108 >= 0xFFFFFFFC )
        {
          LODWORD(v1) = -1073741675;
        }
        else
        {
          v110 = *(_DWORD *)v108 + 4;
          v1416 = v110;
          LODWORD(v1) = 0;
        }
        if ( (int)v1 < 0 )
          goto LABEL_782;
        if ( v108 + v110 < v108 )
          goto LABEL_781;
        ++v109;
        v108 += v110;
      }
      while ( v109 < v100 );
    }
    if ( v108 + 4 < v108 )
      goto LABEL_781;
    v111 = (const wchar_t *)((char *)v1346 + v1345);
    LODWORD(v1) = 0;
    if ( v108 + 12 > (unsigned __int64)v111 )
    {
      LODWORD(v1) = -1073741789;
      goto LABEL_597;
    }
    *(_DWORD *)v108 = 8;
    *(_QWORD *)(v108 + 4) = v1584;
    ++v1344;
  }
  else
  {
    v412 = RtlUIntAdd(4LL, 8LL, &v1464);
    v108 = v1416;
    LODWORD(v1) = v412;
    if ( v412 >= 0 )
      v108 = v1464;
    v1416 = v108;
    if ( v412 >= 0 )
    {
      LODWORD(v1) = RtlUIntAdd(v1345, v108, &v1345);
      if ( (int)v1 >= 0 )
      {
        ++v1344;
        goto LABEL_120;
      }
    }
  }
  if ( (int)v1 < 0 )
    goto LABEL_782;
LABEL_120:
  if ( StringLengthWorkerW(v111, v108, &v1448) < 0 )
  {
    v1448 = 0LL;
    LODWORD(v1) = -1073741762;
    v79 = v1299;
    v78 = v82;
    goto LABEL_451;
  }
  if ( v1448 + 1 < v1448 )
  {
    v1448 = -1LL;
    goto LABEL_781;
  }
  v112 = (unsigned int)(2 * ++v1448);
  if ( (_DWORD)v112 )
  {
    if ( v1346 )
    {
      v113 = 0;
      v114 = v1346;
      if ( v1344 )
      {
        v115 = v1415;
        do
        {
          if ( *v114 >= 0xFFFFFFFC )
          {
            LODWORD(v1) = -1073741675;
          }
          else
          {
            v115 = *v114 + 4;
            v1415 = v115;
            LODWORD(v1) = 0;
          }
          if ( (int)v1 < 0 )
            goto LABEL_782;
          if ( (_DWORD *)((char *)v114 + v115) < v114 )
            goto LABEL_606;
          ++v113;
          v114 = (_DWORD *)((char *)v114 + v115);
        }
        while ( v113 < v1344 );
      }
      if ( v114 + 1 < v114 )
      {
LABEL_606:
        LODWORD(v1) = -1073741675;
      }
      else
      {
        LODWORD(v1) = 0;
        if ( (char *)v114 + v112 + 4 > (char *)v1346 + v1345 )
        {
          LODWORD(v1) = -1073741789;
        }
        else
        {
          *v114 = v112;
          memcpy_0(v114 + 1, L"Kernel-OneCore-DeviceFamilyID", (unsigned int)v112);
          ++v1344;
        }
      }
    }
    else
    {
      v413 = RtlUIntAdd(4LL, (unsigned int)v112, &v1465);
      v414 = v1415;
      LODWORD(v1) = v413;
      if ( v413 >= 0 )
        v414 = v1465;
      v1415 = v414;
      if ( v413 >= 0 )
      {
        LODWORD(v1) = RtlUIntAdd(v1345, v414, &v1345);
        if ( (int)v1 >= 0 )
        {
          ++v1344;
          LODWORD(v1) = 0;
        }
      }
    }
  }
  else
  {
    LODWORD(v1) = -1073741811;
  }
  if ( (int)v1 < 0 )
  {
LABEL_782:
    v79 = v1299;
LABEL_785:
    v78 = v82;
    goto LABEL_786;
  }
  v1467 = v1385;
  if ( v1346 )
  {
    v116 = 0;
    v117 = v1346;
    if ( v1344 )
    {
      v118 = v1412;
      do
      {
        if ( *v117 >= 0xFFFFFFFC )
        {
          LODWORD(v1) = -1073741675;
        }
        else
        {
          v118 = *v117 + 4;
          v1412 = v118;
          LODWORD(v1) = 0;
        }
        if ( (int)v1 < 0 )
          goto LABEL_597;
        if ( (_DWORD *)((char *)v117 + v118) < v117 )
          goto LABEL_781;
        ++v116;
        v117 = (_DWORD *)((char *)v117 + v118);
      }
      while ( v116 < v1344 );
    }
    if ( v117 + 1 < v117 )
      goto LABEL_781;
    LODWORD(v1) = 0;
    if ( v117 + 2 > (_DWORD *)((char *)v1346 + v1345) )
    {
      v79 = v1299;
      LODWORD(v1) = -1073741789;
      v78 = v82;
      goto LABEL_451;
    }
    *v117 = 4;
    v117[1] = v1467;
    ++v1344;
  }
  else
  {
    v415 = RtlUIntAdd(4LL, 4LL, &v1466);
    v416 = v1412;
    LODWORD(v1) = v415;
    if ( v415 >= 0 )
      v416 = v1466;
    v1412 = v416;
    if ( v415 >= 0 )
    {
      LODWORD(v1) = RtlUIntAdd(v1345, v416, &v1345);
      if ( (int)v1 >= 0 )
      {
        ++v1344;
        goto LABEL_147;
      }
    }
  }
  if ( (int)v1 < 0 )
  {
LABEL_597:
    v79 = v1299;
    v78 = v82;
    goto LABEL_451;
  }
LABEL_147:
  v1469 = 4;
  if ( v1346 )
  {
    v119 = 0;
    v120 = v1346;
    if ( v1344 )
    {
      v121 = v1411;
      do
      {
        if ( *v120 >= 0xFFFFFFFC )
        {
          LODWORD(v1) = -1073741675;
        }
        else
        {
          v121 = *v120 + 4;
          v1411 = v121;
          LODWORD(v1) = 0;
        }
        if ( (int)v1 < 0 )
          goto LABEL_597;
        if ( (_DWORD *)((char *)v120 + v121) < v120 )
          goto LABEL_781;
        ++v119;
        v120 = (_DWORD *)((char *)v120 + v121);
      }
      while ( v119 < v1344 );
    }
    if ( v120 + 1 >= v120 )
    {
      LODWORD(v1) = 0;
      if ( v120 + 2 > (_DWORD *)((char *)v1346 + v1345) )
      {
        v79 = v1299;
        LODWORD(v1) = -1073741789;
        v78 = v82;
        goto LABEL_451;
      }
      *v120 = 4;
      v120[1] = v1469;
      ++v1344;
      goto LABEL_158;
    }
LABEL_781:
    v79 = v1299;
    LODWORD(v1) = -1073741675;
    v78 = v82;
    goto LABEL_451;
  }
  v417 = RtlUIntAdd(4LL, 4LL, &v1468);
  v418 = v1411;
  LODWORD(v1) = v417;
  if ( v417 >= 0 )
    v418 = v1468;
  v1411 = v418;
  if ( v417 >= 0 )
  {
    LODWORD(v1) = RtlUIntAdd(v1345, v418, &v1345);
    if ( (int)v1 >= 0 )
    {
      ++v1344;
      goto LABEL_159;
    }
  }
LABEL_158:
  if ( (int)v1 < 0 )
    goto LABEL_597;
LABEL_159:
  v1372 = 8;
  v1404 = 12;
  LODWORD(v1) = RtlUIntAdd(8LL, 12LL, &v1372);
  if ( (int)v1 < 0 )
    goto LABEL_622;
  v1404 = v122;
  LODWORD(v1) = RtlUIntAdd(v1372, v122, &v1372);
  if ( (int)v1 < 0
    || (v1404 = v123, LODWORD(v1) = RtlUIntAdd(v1372, v123, &v1372), (int)v1 < 0)
    || (v1404 = v124, LODWORD(v1) = RtlUIntAdd(v1372, v124, &v1372), (int)v1 < 0)
    || (v1404 = v125, LODWORD(v1) = RtlUIntAdd(v1372, v125, &v1372), (int)v1 < 0) )
  {
LABEL_622:
    v126 = v1381;
  }
  else
  {
    v126 = v1372;
  }
  v1354 = v126;
  if ( (int)v1 < 0 )
    goto LABEL_597;
  v1296 = 0LL;
  v1459 = 0LL;
  v127 = 0;
  v1358 = 0LL;
  v128 = 0LL;
  v1355 = 0LL;
  dwBytes = 0;
  v1290 = 0LL;
  v1330 = 0LL;
  v1389 = 0;
  v1527 = __rdtsc();
  v1388 = 8;
  v129 = RtlUIntAdd(8LL, v1345, &v1388);
  if ( v129 >= 0 )
  {
    v131 = (v1388 + 7) & 0xFFFFFFF8;
    if ( v131 < v1388 )
    {
      v129 = -1073741675;
    }
    else
    {
      v1388 = (v1388 + 7) & 0xFFFFFFF8;
      v132 = v131;
      v133 = GetProcessHeap();
      v134 = (char *)HeapAlloc(v133, 8u, v132);
      v135 = v134;
      if ( v134 )
      {
        v1457 = v134;
        *(_DWORD *)v134 = v1344;
        v129 = RtlULongLongAdd(v134, 4LL, &v1457);
        if ( v129 >= 0 )
        {
          v137 = v1457;
          *(_DWORD *)v1457 = v1345;
          v129 = RtlULongLongAdd(v137, v136, &v1457);
          if ( v129 >= 0 )
          {
            *(_QWORD *)&v135[v1388 - 8] = v1527;
            memcpy_0(v1457, v1346, v1345);
            v105 = v1388;
            v130 = 0LL;
            v1296 = (unsigned __int8 *)v135;
            goto LABEL_172;
          }
        }
        v419 = GetProcessHeap();
        HeapFree(v419, 0, v135);
      }
      else
      {
        v129 = -1073741801;
      }
      v130 = 0LL;
    }
  }
  v135 = 0LL;
LABEL_172:
  LODWORD(v1) = v129 | 0x10000000;
  if ( (int)v1 < 0 )
    goto LABEL_347;
  v138 = v1296;
  v139 = v130;
  v1586 = v130;
  v1587 = (__int64)v130;
  v1588 = v130;
  v1589 = (__int64)v130;
  v1496 = v130;
  v1585 = v130;
  v1401 = (__int64)v130;
  if ( !v1296 )
  {
    v201 = -1073741811;
    goto LABEL_199;
  }
  v140 = v105;
  if ( v105 )
  {
    v141 = GetProcessHeap();
    v1316 = (char *)HeapAlloc(v141, 0, v105 + 8LL);
    v142 = v1316;
    if ( v1316 )
    {
      v143 = 0;
      v144 = 0LL;
      v1303 = 0;
      if ( v105 >= 0x20uLL )
      {
        v145 = 0LL;
        v146 = 0LL;
        do
        {
          v145 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1296[v144]), v145);
          v147 = _mm_loadu_si128((const __m128i *)&v1296[v144 + 16]);
          v144 += 32LL;
          v148 = _mm_xor_si128(v147, v146);
          v146 = v148;
        }
        while ( v144 < (v105 & 0xFFFFFFE0) );
        v149 = _mm_xor_si128(v148, v145);
        v150 = _mm_xor_si128(v149, _mm_srli_si128(v149, 8));
        v151 = _mm_xor_si128(v150, _mm_srli_si128(v150, 4));
        v152 = _mm_xor_si128(v151, _mm_srli_si128(v151, 2));
        v143 = _mm_cvtsi128_si32(_mm_xor_si128(v152, _mm_srli_si128(v152, 1)));
        v1303 = v143;
      }
      if ( v144 < v105 )
      {
        do
          v143 ^= v1296[v144++];
        while ( v144 < v105 );
        v1303 = v143;
      }
      v153 = -1;
      v1350 = -1;
      v154 = 0;
      v1356 = 0;
      v155 = v1316;
      v156 = 0;
      v157 = 0;
      v158 = v105 & 7;
      if ( (v105 & 7) != 0 )
      {
        v420 = 0;
        v421 = 56;
        do
        {
          v422 = *v138;
          if ( v420 >= 4 )
            v156 |= v422 << v421;
          else
            v157 |= v422 << (v421 - 32);
          ++v420;
          v421 -= 8;
          ++v138;
        }
        while ( v420 < v158 );
        v154 = v157 ^ 0xB17A307A;
        v423 = v156 ^ 0x42F6B18D;
        v1356 = v157 ^ 0xB17A307A;
        v424 = 0;
        v1350 = v156 ^ 0x42F6B18D;
        if ( (v105 & 7) != 0 )
        {
          do
          {
            if ( v424 >= 4 )
            {
              v423 = __ROL4__(v423, 8);
              *v155 = v423;
            }
            else
            {
              v154 = __ROL4__(v154, 8);
              *v155 = v154;
            }
            ++v424;
            ++v155;
          }
          while ( v424 < v158 );
          v154 = v1356;
          v423 = v1350;
        }
        v425 = v158 - 4;
        if ( v158 - 4 <= 0 )
        {
          v1350 = 0;
          v153 = 0;
          if ( v425 < 0 )
          {
            v154 = v154 >> (-8 * v425) << (-8 * v425);
            v1356 = v154;
          }
        }
        else
        {
          v153 = v423 >> (8 * (4 - v425)) << (8 * (4 - v425));
          v1350 = v153;
        }
        v142 = v1316;
      }
      v159 = (unsigned __int64)v105 >> 3;
      if ( v140 >> 3 )
      {
        v160 = v155 + 7;
        v161 = v138 + 2;
        do
        {
          v162 = *(v161 - 1);
          v163 = *(v161 - 2);
          v164 = v161[2];
          v161 += 8;
          v165 = *(v161 - 7) | ((*(v161 - 8) | ((v162 | (v163 << 8)) << 8)) << 8);
          v166 = *(v161 - 3) | ((*(v161 - 4) | ((*(v161 - 5) | (v164 << 8)) << 8)) << 8);
          v167 = v166 ^ v153;
          v168 = v154 ^ v165 ^ (v167 - 19032) ^ 0xC81ECB17;
          v169 = (__ROR4__(v168, 7) + 45493 * __ROR4__(v154 ^ v165 ^ (v167 - 19032), 15)) ^ v167;
          v170 = (51991 * __ROR4__(v169 - 1313519016, 9) - __ROR4__(v169, 10)) ^ v168;
          v171 = (__ROL4__(v170, 5) + 51230 * __ROL4__(v170 ^ 0xCB17, 4)) ^ v169;
          v172 = (-937506025 - (v171 ^ 0xB1B54A58)) ^ v170;
          v173 = (45493 * v172 - (v172 >> 6) - 865822776) ^ v171;
          v174 = (19032 * (__ROR4__(v173, 15) ^ 0xCB17)) ^ v172;
          v175 = (51991 * (__ROR4__(~v174, 3) + 51230)) ^ v173;
          v176 = (v175 + 937486993) ^ v174;
          v177 = (45493 * (v176 ^ 0xC81E)) ^ __ROR4__(v176, 10) ^ v175;
          v178 = __ROR4__(v177, 3) ^ (51991 * __ROL4__(v177 ^ 0x4A58, 6)) ^ v176;
          v179 = (19032 * (__ROR4__(v178, 15) - 51230)) ^ v177;
          v180 = (v179 >> 15) ^ (19032 * __ROL4__(v179 - 51991, 3)) ^ (v179 >> 1) ^ (19032 * (v179 ^ 0xC81E)) ^ v178;
          v181 = (45493 * v180 - (v180 >> 13) + 1929740733) ^ v179;
          v182 = __ROR4__(v181, 11) ^ (51991 * __ROR4__(-1313519016 - v181, 9)) ^ v180;
          v183 = (v182 + 1313467786) ^ v181;
          v184 = (19032 * (v183 ^ 0xB1B5) - __ROR4__(v183, 7)) ^ v182;
          v185 = (45493 * __ROL4__(v184 ^ 0xC81E, 4) - __ROR4__(v184, 16)) ^ v183;
          v186 = (__ROR4__(v185, 4) + 51991 * __ROR4__(-1313519016 - v185, 10)) ^ v184;
          v187 = __ROR4__(v186, 9) ^ (51230 * __ROR4__(v186 + 1313519016, 4)) ^ v185;
          v188 = (19032 * __ROL4__(v187 ^ 0xC81ECB17, 8) - __ROL4__(v187, 2)) ^ v186;
          v160 += 8;
          v189 = (45493 * __ROR4__(-937506025 - v188, 11) - __ROR4__(v188, 12)) ^ v187;
          v190 = (v189 >> 8) ^ (51991 * (v189 ^ 0xB1B5)) ^ v188;
          v1356 = v157 ^ v190;
          v157 = v165;
          v1350 = v156 ^ v190 ^ v189 ^ 0x79AB814F;
          v156 = v166;
          *(v160 - 12) = v1356;
          v1356 = __ROR4__(v1356, 8);
          *(v160 - 8) = v1350;
          v1350 = __ROR4__(v1350, 8);
          *(v160 - 13) = v1356;
          v1356 = __ROR4__(v1356, 8);
          *(v160 - 9) = v1350;
          v1350 = __ROR4__(v1350, 8);
          *(v160 - 14) = v1356;
          v1356 = __ROR4__(v1356, 8);
          *(v160 - 10) = v1350;
          v1350 = __ROR4__(v1350, 8);
          *(v160 - 15) = v1356;
          *(v160 - 11) = v1350;
          v154 = __ROR4__(v1356, 8);
          v153 = __ROR4__(v1350, 8);
          v1356 = v154;
          v1350 = v153;
          --v159;
        }
        while ( v159 );
        v142 = v1316;
      }
      v191 = v140 + 8;
      *(_QWORD *)&v142[v140] = v1303;
      v1496 = v142;
      v1586 = &qword_18014B110;
      v1585 = (_QWORD *)(v140 + 8);
      v1587 = 8LL;
      v1588 = &xmmword_18014B070;
      v1589 = 160LL;
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
          memcpy_0(v196, v1316, v191);
          v194[4] = 160;
          v197 = GetProcessHeap();
          v198 = HeapAlloc(v197, 8u, 0xA0uLL);
          if ( v198 )
          {
            *((_QWORD *)v194 + 3) = v198;
            *v198 = xmmword_18014B070;
            v198[1] = *((_OWORD *)&xmmword_18014B070 + 1);
            v198[2] = *((_OWORD *)&xmmword_18014B070 + 2);
            v198[3] = *((_OWORD *)&xmmword_18014B070 + 3);
            v198[4] = *((_OWORD *)&xmmword_18014B070 + 4);
            v198[5] = *((_OWORD *)&xmmword_18014B070 + 5);
            v198[6] = *((_OWORD *)&xmmword_18014B070 + 6);
            v198[7] = *((_OWORD *)&xmmword_18014B070 + 7);
            v198[8] = *((_OWORD *)&xmmword_18014B070 + 8);
            v198[9] = *((_OWORD *)&xmmword_18014B070 + 9);
            v194[8] = 8;
            v199 = GetProcessHeap();
            v200 = HeapAlloc(v199, 8u, 8uLL);
            if ( v200 )
            {
              *((_QWORD *)v194 + 5) = v200;
              v201 = 0;
              *v200 = qword_18014B110;
              v139 = v194;
              goto LABEL_193;
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
      v139 = (_QWORD *)v1401;
      v201 = -1073741801;
LABEL_193:
      v126 = v1354;
      if ( v201 >= 0 )
      {
        v1459 = v139;
        v139 = 0LL;
      }
      goto LABEL_195;
    }
  }
  v201 = -1073741823;
LABEL_195:
  v202 = v1496;
  if ( v1496 )
  {
    v203 = GetProcessHeap();
    HeapFree(v203, 0, v202);
    v1496 = 0LL;
  }
  if ( v139 )
  {
    v433 = (void *)v139[1];
    if ( v433 )
    {
      v434 = GetProcessHeap();
      HeapFree(v434, 0, v433);
      v139[1] = 0LL;
    }
    v435 = (void *)v139[3];
    if ( v435 )
    {
      v436 = GetProcessHeap();
      HeapFree(v436, 0, v435);
      v139[3] = 0LL;
    }
    v437 = (void *)v139[5];
    if ( v437 )
    {
      v438 = GetProcessHeap();
      HeapFree(v438, 0, v437);
      v139[5] = 0LL;
    }
    v439 = GetProcessHeap();
    HeapFree(v439, 0, v139);
  }
  v127 = 0;
LABEL_199:
  LODWORD(v1) = v201 | 0x10000000;
  if ( (int)v1 < 0 )
    goto LABEL_345;
  v204 = (const void **)v1459;
  v1377 = 4;
  v205 = RtlUIntAdd(4LL, *(unsigned int *)v1459, &v1377);
  if ( v205 < 0
    || (v205 = RtlUIntAdd(v1377, v206, &v1377), v205 < 0)
    || (v205 = RtlUIntAdd(v1377, *((unsigned int *)v204 + 4), &v1377), v205 < 0)
    || (v205 = RtlUIntAdd(v1377, v207, &v1377), v205 < 0) )
  {
    v209 = v1434;
  }
  else
  {
    v209 = v1377 + *((_DWORD *)v204 + 8);
    if ( v209 < v1377 )
    {
      v205 = -1073741675;
      goto LABEL_665;
    }
    v1377 += *((_DWORD *)v204 + 8);
    v205 = v208;
    v1434 = v209;
  }
  if ( v205 < 0 )
  {
LABEL_665:
    v213 = v1358;
    goto LABEL_215;
  }
  v210 = v209;
  v211 = GetProcessHeap();
  v212 = HeapAlloc(v211, 8u, v210);
  v213 = v212;
  if ( !v212 )
  {
    v205 = -1073741801;
    goto LABEL_665;
  }
  v1392 = v212;
  *v212 = *(_DWORD *)v204;
  v205 = RtlULongLongAdd(v212, 4LL, &v1392);
  if ( v205 < 0 )
    goto LABEL_664;
  memcpy_0(v1392, v204[1], *(unsigned int *)v204);
  v205 = RtlULongLongAdd(v1392, *(unsigned int *)v204, &v1392);
  if ( v205 < 0 )
    goto LABEL_664;
  v214 = v1392;
  *(_DWORD *)v1392 = *((_DWORD *)v204 + 4);
  v205 = RtlULongLongAdd(v214, 4LL, &v1392);
  if ( v205 < 0
    || (memcpy_0(v1392, v204[3], *((unsigned int *)v204 + 4)),
        v205 = RtlULongLongAdd(v1392, *((unsigned int *)v204 + 4), &v1392),
        v205 < 0)
    || (v215 = v1392, *(_DWORD *)v1392 = *((_DWORD *)v204 + 8), v205 = RtlULongLongAdd(v215, 4LL, &v1392), v205 < 0)
    || (memcpy_0(v1392, v204[5], *((unsigned int *)v204 + 8)),
        v205 = RtlULongLongAdd(v1392, *((unsigned int *)v204 + 8), &v1392),
        v205 < 0) )
  {
LABEL_664:
    v440 = GetProcessHeap();
    HeapFree(v440, 0, v213);
    goto LABEL_665;
  }
  v127 = v1434;
  v1358 = v213;
LABEL_215:
  LODWORD(v1) = v205 | 0x10000000;
  if ( (int)v1 < 0 )
    goto LABEL_345;
  v1422 = 8;
  v216 = 0;
  v1590 = 0LL;
  v1471 = 0;
  v217 = 0;
  v1591 = 0LL;
  v1472 = 0;
  v218 = RtlUIntAdd(8LL, v126, &v1422);
  LODWORD(v1) = v218 | 0x10000000;
  if ( v218 < 0 )
    goto LABEL_251;
  v220 = (v1422 + 7) & 0xFFFFFFF8;
  if ( v220 < v1422 )
  {
    LODWORD(v1) = -1073741675;
  }
  else
  {
    if ( v220 + 8 < v220 )
    {
      v1474 = -1;
LABEL_675:
      LODWORD(v1) = -1073741675;
      goto LABEL_251;
    }
    v1474 = v220 + 8;
    LODWORD(v1) = v219;
    v1470 = v220 + 8;
  }
  if ( (int)v1 < 0 )
  {
LABEL_345:
    v128 = v1290;
    goto LABEL_346;
  }
  if ( v1346 )
  {
    if ( v1344 <= 1 )
    {
      LODWORD(v1) = -1073741811;
    }
    else
    {
      v221 = v1346;
      v1406 = v1346;
      while ( 1 )
      {
        LODWORD(v1) = RtlULongLongAdd(v221, 4LL, &v1406);
        if ( (int)v1 < 0 )
          break;
        LODWORD(v1) = RtlULongLongAdd(v1406, v222, &v1406);
        if ( (int)v1 < 0 )
          break;
        v221 = v1406;
        if ( v223 != -1 )
        {
          LODWORD(v1) = RtlULongLongAdd(v1406, 4LL, &v1406);
          if ( (int)v1 >= 0 )
          {
            v216 = v224;
            v1471 = v224;
            if ( v224 )
            {
              v225 = v1406;
            }
            else
            {
              v225 = 0LL;
              v1406 = 0LL;
            }
            v1590 = v225;
          }
          break;
        }
      }
      if ( (int)v1 < 0 )
        goto LABEL_345;
      if ( v1344 > 2 )
      {
        v226 = (unsigned int *)v1346;
        v1440 = v1346;
        v227 = 0;
        while ( 1 )
        {
          v228 = v226 + 1;
          if ( v226 + 1 < v226 )
            goto LABEL_675;
          v226 = (unsigned int *)((char *)v228 + *v226);
          v1440 = v228;
          if ( v226 < v228 )
            goto LABEL_675;
          ++v227;
          v1440 = v226;
          if ( v227 >= 2 )
          {
            LODWORD(v1) = RtlULongLongAdd(v226, 4LL, &v1440);
            if ( (int)v1 >= 0 )
            {
              v1472 = v229;
              v217 = v229;
              if ( v229 )
              {
                v232 = v1440;
              }
              else
              {
                v232 = v231;
                v1440 = v231;
              }
              v1591 = v232;
            }
            if ( (int)v1 < 0 )
              goto LABEL_345;
            v1375 = 4;
            LODWORD(v1) = RtlUIntAdd(4LL, v230, &v1375);
            if ( (int)v1 < 0
              || (LODWORD(v1) = RtlUIntAdd(v1375, 4LL, &v1375), (int)v1 < 0)
              || (LODWORD(v1) = RtlUIntAdd(v1375, v216, &v1375), (int)v1 < 0)
              || (LODWORD(v1) = RtlUIntAdd(v1375, 4LL, &v1375), (int)v1 < 0)
              || (LODWORD(v1) = RtlUIntAdd(v1375, v217, &v1375), (int)v1 < 0) )
            {
              v234 = v1473;
            }
            else
            {
              v234 = v1375;
              v1473 = v1375;
            }
            if ( (int)v1 < 0 )
              goto LABEL_345;
            if ( v234 <= 0x400000 )
            {
              dwBytes = v234;
              goto LABEL_251;
            }
            LODWORD(v1) = -2147418113;
            v128 = v233;
            goto LABEL_346;
          }
        }
      }
      LODWORD(v1) = -1073741811;
    }
  }
  else
  {
    LODWORD(v1) = -1073741811;
  }
LABEL_251:
  if ( (int)v1 < 0 )
    goto LABEL_345;
  v235 = dwBytes;
  v236 = GetProcessHeap();
  v237 = (unsigned int *)HeapAlloc(v236, 8u, v235);
  if ( v237 )
  {
    v238 = v237;
    v1355 = v237;
    LODWORD(v1) = 0x10000000;
  }
  else
  {
    v238 = (unsigned int *)v1355;
    LODWORD(v1) = -805306345;
  }
  if ( (int)v1 < 0 )
    goto LABEL_345;
  if ( !v213 )
  {
    LODWORD(v1) = -2147024809;
    goto LABEL_345;
  }
  if ( !v238 )
  {
    LODWORD(v1) = -2147024809;
    goto LABEL_345;
  }
  v1594 = dwBytes;
  v1592[0] = v213;
  v1593 = v127;
  v1592[1] = v238;
  v1595 = 0;
  if ( !GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
  {
    v441 = GetLastError();
    LODWORD(v1) = v441;
    if ( v441 <= 0 )
      goto LABEL_681;
    goto LABEL_680;
  }
  ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation");
  if ( !ProcAddress )
  {
    v441 = GetLastError();
    LODWORD(v1) = v441;
    if ( v441 <= 0 )
    {
LABEL_681:
      if ( (int)v1 >= 0 )
      {
        v241 = dwBytes;
        LODWORD(v1) = -2147467259;
        goto LABEL_262;
      }
      goto LABEL_685;
    }
LABEL_680:
    LODWORD(v1) = (unsigned __int16)v441 | 0x80070000;
    goto LABEL_681;
  }
  v240 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v1592);
  LODWORD(v1) = v240 | 0x10000000;
  if ( v240 >= 0 )
  {
    v241 = v1594;
    dwBytes = v1594;
    goto LABEL_261;
  }
LABEL_685:
  v241 = dwBytes;
LABEL_261:
  if ( (_DWORD)v1 == -805306333 )
  {
    LODWORD(v1) = -2147024774;
    goto LABEL_345;
  }
LABEL_262:
  if ( (int)v1 < 0 )
    goto LABEL_345;
  v1401 = 0LL;
  if ( v241 < 4 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  v242 = *v238;
  v243 = (char *)(v238 + 1);
  if ( v238 + 1 < v238 )
    goto LABEL_715;
  if ( v241 - 4 < (unsigned int)v242 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  v244 = (unsigned int *)&v243[v242];
  if ( &v243[v242] < v243 || (unsigned int)v242 >= 0xFFFFFFFC )
    goto LABEL_715;
  if ( v241 - ((_DWORD)v242 + 4) < 4 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  v245 = *v244;
  v246 = (char *)(v244 + 1);
  if ( v244 + 1 < v244 )
    goto LABEL_715;
  v247 = v242 + 8;
  if ( (int)v242 + 8 < (unsigned int)(v242 + 4) )
    goto LABEL_715;
  if ( v241 - v247 < (unsigned int)v245 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  v248 = (unsigned int *)&v246[v245];
  if ( &v246[v245] < v246 )
    goto LABEL_715;
  v249 = v245 + v247;
  if ( (unsigned int)v245 + v247 < v247 )
    goto LABEL_715;
  if ( v241 - v249 < 4 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  v250 = *v248;
  v1386 = v248 + 1;
  if ( v248 + 1 < v248 )
    goto LABEL_715;
  v251 = v249 + 4;
  if ( v249 + 4 < v249 )
    goto LABEL_715;
  if ( v241 - v251 < (unsigned int)v250 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  if ( (unsigned int)v250 + v251 < v251 )
  {
LABEL_715:
    v262 = -1073741675;
    v128 = 0LL;
    goto LABEL_294;
  }
  if ( v241 != (_DWORD)v250 + v251 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  if ( (unsigned int)(v242 + v250 + v245) + 12LL != v241 )
  {
    v262 = -1073741762;
    v128 = 0LL;
    goto LABEL_294;
  }
  v252 = GetProcessHeap();
  v253 = HeapAlloc(v252, 8u, 0x30uLL);
  v254 = v253;
  if ( v253 )
  {
    if ( v243 )
    {
      *(_DWORD *)v253 = v242;
      v255 = GetProcessHeap();
      v256 = HeapAlloc(v255, 8u, (unsigned int)v242);
      if ( !v256 )
        goto LABEL_698;
      v254[1] = v256;
      memcpy_0(v256, v243, (unsigned int)v242);
    }
    else
    {
      *(_DWORD *)v253 = 0;
      v253[1] = 0LL;
    }
    if ( v246 )
    {
      *((_DWORD *)v254 + 4) = v245;
      v257 = GetProcessHeap();
      v258 = HeapAlloc(v257, 8u, v245);
      if ( !v258 )
        goto LABEL_698;
      v254[3] = v258;
      memcpy_0(v258, v246, v245);
    }
    else
    {
      *((_DWORD *)v254 + 4) = 0;
      v254[3] = 0LL;
    }
    v259 = v1386;
    if ( !v1386 )
    {
      *((_DWORD *)v254 + 8) = 0;
      v254[5] = 0LL;
      goto LABEL_291;
    }
    *((_DWORD *)v254 + 8) = v250;
    v260 = GetProcessHeap();
    v261 = HeapAlloc(v260, 8u, v250);
    if ( v261 )
    {
      v254[5] = v261;
      memcpy_0(v261, v259, v250);
LABEL_291:
      v262 = 0;
      goto LABEL_292;
    }
LABEL_698:
    v442 = (void *)v254[1];
    if ( v442 )
    {
      v443 = GetProcessHeap();
      HeapFree(v443, 0, v442);
      v254[1] = 0LL;
    }
    v444 = (void *)v254[3];
    if ( v444 )
    {
      v445 = GetProcessHeap();
      HeapFree(v445, 0, v444);
      v254[3] = 0LL;
    }
    v446 = (void *)v254[5];
    if ( v446 )
    {
      v447 = GetProcessHeap();
      HeapFree(v447, 0, v446);
      v254[5] = 0LL;
    }
    v448 = GetProcessHeap();
    HeapFree(v448, 0, v254);
    v254 = (_QWORD *)v1401;
    v262 = -1073741801;
    goto LABEL_292;
  }
  v254 = (_QWORD *)v1401;
  v262 = -1073741801;
LABEL_292:
  if ( v262 < 0 )
  {
    if ( v254 )
    {
      v449 = (void *)v254[1];
      if ( v449 )
      {
        v450 = GetProcessHeap();
        HeapFree(v450, 0, v449);
        v254[1] = 0LL;
      }
      v451 = (void *)v254[3];
      if ( v451 )
      {
        v452 = GetProcessHeap();
        HeapFree(v452, 0, v451);
        v254[3] = 0LL;
      }
      v453 = (void *)v254[5];
      if ( v453 )
      {
        v454 = GetProcessHeap();
        HeapFree(v454, 0, v453);
        v254[5] = 0LL;
      }
      v455 = GetProcessHeap();
      HeapFree(v455, 0, v254);
    }
    v128 = 0LL;
  }
  else
  {
    v128 = (unsigned __int16 *)v254;
    v1290 = (unsigned __int16 *)v254;
  }
LABEL_294:
  LODWORD(v1) = v262 | 0x10000000;
  if ( (int)v1 < 0 )
    goto LABEL_346;
  v1544 = 0LL;
  v1458 = 0LL;
  if ( v128
    && (v263 = (unsigned __int8 *)*((_QWORD *)v128 + 1), (v1421 = (__int64)v263) != 0)
    && (v264 = *(unsigned int *)v128, (_DWORD)v264) )
  {
    v265 = v264 - 8;
    v1347 = v264 - 8;
    v266 = GetProcessHeap();
    v267 = (unsigned int *)HeapAlloc(v266, 0, v265);
    v1317 = v267;
    v268 = v267;
    if ( v267 )
    {
      v269 = 0;
      v270 = v263;
      v271 = v267;
      v272 = v265;
      v273 = v265 & 7;
      if ( (v265 & 7) != 0 )
      {
        v1348 = -1;
        v1352 = 0;
        v275 = 0;
        v274 = 0;
        v456 = 0;
        v457 = 56;
        do
        {
          v458 = *v270;
          if ( v456 >= 4 )
            v275 |= v458 << v457;
          else
            v274 |= v458 << (v457 - 32);
          ++v456;
          v457 -= 8;
          ++v270;
        }
        while ( v456 < v273 );
        v272 = v1347;
        v277 = v274 ^ 0x92F65A5;
        v459 = v275 ^ 0x699A899C;
        v1352 = v274 ^ 0x92F65A5;
        v460 = 0;
        v1348 = v275 ^ 0x699A899C;
        if ( v273 > 0 )
        {
          do
          {
            if ( v460 >= 4 )
            {
              v459 = __ROL4__(v459, 8);
              *(_BYTE *)v271 = v459;
            }
            else
            {
              v277 = __ROL4__(v277, 8);
              *(_BYTE *)v271 = v277;
            }
            ++v460;
            v271 = (unsigned int *)((char *)v271 + 1);
          }
          while ( v460 < v273 );
          v277 = v1352;
          v459 = v1348;
        }
        v461 = v273 - 4;
        if ( v273 - 4 <= 0 )
        {
          v276 = 0;
          v1348 = 0;
          if ( v461 < 0 )
          {
            v277 = v277 >> (-8 * v461) << (-8 * v461);
            v1352 = v277;
          }
        }
        else
        {
          v276 = v459 >> (8 * (4 - v461)) << (8 * (4 - v461));
          v1348 = v276;
        }
        v268 = v1317;
      }
      else
      {
        v274 = 0;
        v1348 = 0;
        v275 = -1;
        v1352 = 0;
        v276 = 0;
        v277 = 0;
      }
      v278 = v272 >> 3;
      if ( v272 >> 3 )
      {
        v279 = (char *)v271 + 7;
        v280 = v270 + 2;
        do
        {
          v281 = *(v280 - 1);
          v282 = *(v280 - 2);
          v283 = v280[2];
          v280 += 8;
          v284 = *(v280 - 7) | ((*(v280 - 8) | ((v281 | (v282 << 8)) << 8)) << 8);
          v285 = v284 ^ v277;
          v286 = *(v280 - 3) | ((*(v280 - 4) | ((*(v280 - 5) | (v283 << 8)) << 8)) << 8);
          v287 = v285 ^ v286 ^ v276 ^ 0xAC987321;
          v288 = (__ROL4__(v287, 10) + 4991 * __ROL4__(v287 + 1419157410, 5)) ^ v285;
          v289 = (43881 * __ROR4__(v288 + 133239679, 9) - __ROL4__(v288, 2)) ^ v287;
          v290 = (24670 * v289 - (v289 >> 13) - 123127970) ^ v288;
          v291 = (2033 * __ROL4__(v290 ^ 0xAB69, 6) - __ROL4__(v290, 2)) ^ v289;
          v292 = (133239679 - (v291 ^ 0xAB69605E)) ^ v290;
          v293 = (43881 * (v292 ^ 0x137F)) ^ __ROR4__(v292, 6) ^ v291;
          v294 = (__ROL4__(v293, 2) + 24670 * __ROR4__(v293 + 133239679, 15)) ^ v292;
          v295 = (2033 * __ROR4__(v294 + 1419157410, 14) - __ROL4__(v294, 8)) ^ v293;
          v296 = __ROR4__(v295, 10) ^ (4991 * __ROR4__(v295 ^ 0xAB69605E, 12)) ^ v294;
          v297 = (v296 >> 10) ^ (43881 * (v296 ^ 0x7F1)) ^ v295;
          v298 = (2033 * (__ROR4__(~v297, 5) + 24670)) ^ v296;
          v299 = v297 ^ (v298 - 2033) ^ 0xAB69605E;
          v300 = ((v299 >> 2) + 4991 * __ROL4__(v297 ^ (v298 - 2033) ^ 0xAB6967AF, 2)) ^ v298;
          v301 = (__ROL4__(v300, 7) + 43881 * __ROR4__(v300 - 133239679, 6)) ^ v299;
          v302 = (24670 * (v301 ^ 0x137F) + __ROR4__(v301, 9)) ^ v300;
          v303 = (__ROL4__(v302, 7) + 2033 * __ROL4__(v302 ^ 0xAB69, 5)) ^ v301;
          v304 = v302 ^ v303 ^ 0xAC987321;
          v305 = (4991 * (__ROR4__(v304, 3) - 43881)) ^ v303;
          v306 = (24670 * __ROR4__(v305 - 133239679, 1) - __ROR4__(v305, 6)) ^ v304;
          v307 = (__ROL4__(v306, 14) + 2033 * __ROL4__(v306 - 1419157410, 3)) ^ v305;
          v308 = (4991 * __ROL4__(v307 - 1419157410, 15) - __ROR4__(v307, 14)) ^ v306;
          v279 += 8;
          v309 = (v308 >> 3) ^ (43881 * (v308 ^ 0x605E)) ^ v307;
          v1348 = v275 ^ v309;
          v275 = v286;
          v310 = v274 ^ __ROL4__(v309, 2) ^ (24670 * __ROL4__(v309 ^ 0x7F1137F, 4));
          v274 = v284;
          v1352 = v310 ^ v308;
          *(v279 - 12) = v310 ^ v308;
          v1352 = __ROR4__(v1352, 8);
          *(v279 - 8) = v1348;
          v1348 = __ROR4__(v1348, 8);
          *(v279 - 13) = v1352;
          v1352 = __ROR4__(v1352, 8);
          *(v279 - 9) = v1348;
          v1348 = __ROR4__(v1348, 8);
          *(v279 - 14) = v1352;
          v1352 = __ROR4__(v1352, 8);
          *(v279 - 10) = v1348;
          v1348 = __ROR4__(v1348, 8);
          *(v279 - 15) = v1352;
          *(v279 - 11) = v1348;
          v277 = __ROR4__(v1352, 8);
          v276 = __ROR4__(v1348, 8);
          v1352 = v277;
          v1348 = v276;
          --v278;
        }
        while ( v278 );
        v272 = v1347;
        v268 = v1317;
        v269 = 0;
      }
      v311 = 0LL;
      if ( v272 )
      {
        if ( v272 >= 0x20 )
        {
          v312 = 0LL;
          v313 = 0LL;
          do
          {
            v312 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v268 + v311)), v312);
            v314 = _mm_loadu_si128((const __m128i *)((char *)v268 + v311 + 16));
            v311 += 32LL;
            v315 = _mm_xor_si128(v314, v313);
            v313 = v315;
          }
          while ( v311 < (v272 & 0xFFFFFFFFFFFFFFE0uLL) );
          v316 = _mm_xor_si128(v315, v312);
          v317 = _mm_xor_si128(v316, _mm_srli_si128(v316, 8));
          v318 = _mm_xor_si128(v317, _mm_srli_si128(v317, 4));
          v319 = _mm_xor_si128(v318, _mm_srli_si128(v318, 2));
          v269 = _mm_cvtsi128_si32(_mm_xor_si128(v319, _mm_srli_si128(v319, 1)));
        }
        for ( ; v311 < v272; ++v311 )
          v269 ^= *((_BYTE *)v268 + v311);
      }
      if ( v269 == *(_QWORD *)(v272 + v1421) )
      {
        v128 = v1290;
        LODWORD(v1) = 0x10000000;
        v1544 = v272;
        v1330 = v268;
        v1458 = 0LL;
        v1389 = v272;
        goto LABEL_314;
      }
      operator delete(v268);
      v128 = v1290;
    }
    v462 = v1458;
    LODWORD(v1) = -805306367;
    if ( v1458 )
    {
      v463 = GetProcessHeap();
      HeapFree(v463, 0, v462);
      v1458 = 0LL;
      v268 = 0LL;
      goto LABEL_314;
    }
  }
  else
  {
    LODWORD(v1) = -805306355;
  }
  v268 = 0LL;
LABEL_314:
  if ( (int)v1 >= 0 )
  {
    if ( v1389 >= 4 )
    {
      v1318 = *v268;
      if ( v268 + 1 < v268 )
        goto LABEL_743;
      if ( v1389 - 4 < 4 )
      {
        v327 = -1073741762;
        goto LABEL_344;
      }
      v320 = v268[1];
      v321 = (char *)(v268 + 2);
      if ( v268 + 2 < v268 + 1 )
        goto LABEL_743;
      if ( v1389 - 8 < (unsigned int)v320 )
      {
        v327 = -1073741762;
        goto LABEL_344;
      }
      if ( (unsigned int)v320 >= 0xFFFFFFF8 )
        goto LABEL_743;
      v322 = (unsigned __int64)&v321[v320];
      if ( (char *)v268 + v1389 >= &v321[v320] && v1389 - v320 - 8 < 8 )
      {
        v323 = 0LL;
        v324 = 0;
        if ( v268 == (unsigned int *)-8LL )
          goto LABEL_336;
        v325 = (char *)(v268 + 2);
        if ( v322 >= (unsigned __int64)v321 )
        {
          if ( (unsigned __int64)v321 < v322 )
          {
            v326 = v1475;
            while ( v325 + 4 >= v325 )
            {
              if ( (unsigned __int64)(v325 + 4) > v322 )
                goto LABEL_741;
              if ( *(_DWORD *)v325 >= 0xFFFFFFFC )
              {
                v327 = -1073741675;
              }
              else
              {
                v326 = *(_DWORD *)v325 + 4;
                v1475 = v326;
                v327 = 0;
              }
              if ( v327 < 0 )
                goto LABEL_344;
              v328 = &v325[v326];
              if ( v328 < v325 )
                goto LABEL_743;
              v325 += v326;
              if ( (unsigned __int64)v328 > v322 )
                goto LABEL_741;
              ++v324;
              if ( (unsigned __int64)v328 >= v322 )
                goto LABEL_335;
            }
            goto LABEL_743;
          }
LABEL_335:
          if ( v325 == (char *)v322 )
          {
LABEL_336:
            if ( (_DWORD)v320 && (v329 = GetProcessHeap(), (v323 = HeapAlloc(v329, 8u, v320)) == 0LL) )
            {
              v327 = -1073741801;
            }
            else
            {
              if ( v321 )
                memcpy_0(v323, v321, v320);
              v1398 = v323;
              v327 = 0;
              v1397 = __PAIR64__(v320, v324);
            }
            if ( v327 >= 0 && v1318 != (_DWORD)v1397 )
              v327 = -1073741762;
            goto LABEL_344;
          }
LABEL_741:
          v327 = -1073741811;
LABEL_344:
          LODWORD(v1) = v327 | 0x10000000;
          goto LABEL_345;
        }
LABEL_743:
        v327 = -1073741675;
        goto LABEL_344;
      }
    }
    v327 = -1073741762;
    goto LABEL_344;
  }
LABEL_346:
  v135 = (char *)v1296;
LABEL_347:
  if ( v135 )
  {
    v330 = GetProcessHeap();
    HeapFree(v330, 0, v135);
  }
  v331 = v1459;
  if ( v1459 )
  {
    v332 = (void *)*((_QWORD *)v1459 + 1);
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
    v1459 = 0LL;
  }
  v339 = v1358;
  if ( v1358 )
  {
    v340 = GetProcessHeap();
    HeapFree(v340, 0, v339);
  }
  v341 = v1355;
  if ( v1355 )
  {
    v342 = GetProcessHeap();
    HeapFree(v342, 0, v341);
  }
  if ( v128 )
  {
    v343 = (void *)*((_QWORD *)v128 + 1);
    if ( v343 )
    {
      v344 = GetProcessHeap();
      HeapFree(v344, 0, v343);
      *((_QWORD *)v128 + 1) = 0LL;
    }
    v345 = (void *)*((_QWORD *)v128 + 3);
    if ( v345 )
    {
      v346 = GetProcessHeap();
      HeapFree(v346, 0, v345);
      *((_QWORD *)v128 + 3) = 0LL;
    }
    v347 = (void *)*((_QWORD *)v128 + 5);
    if ( v347 )
    {
      v348 = GetProcessHeap();
      HeapFree(v348, 0, v347);
      *((_QWORD *)v128 + 5) = 0LL;
    }
    v349 = GetProcessHeap();
    HeapFree(v349, 0, v128);
  }
  if ( v1330 )
  {
    v350 = GetProcessHeap();
    HeapFree(v350, 0, v1330);
  }
  if ( (int)v1 < 0 )
  {
    v5 = 4LL;
    goto LABEL_779;
  }
  if ( !(_DWORD)v1397 )
  {
    v78 = v1284;
    LODWORD(v1) = -1073425151;
    v79 = v1299;
    goto LABEL_786;
  }
  v5 = 4LL;
  if ( v1398 )
  {
    v1497 = (int *)v1398;
    LODWORD(v1) = RtlULongLongAdd(v1398, 4LL, &v1497);
    if ( (int)v1 < 0 )
    {
      v352 = v1476;
      v353 = v1545;
    }
    else
    {
      v1476 = v352;
      if ( v352 )
      {
        v353 = v1497;
      }
      else
      {
        v353 = 0LL;
        v1497 = 0LL;
      }
      v1545 = v353;
    }
    if ( (int)v1 >= 0 )
    {
      if ( v352 != v351 )
      {
        v78 = v1284;
        LODWORD(v1) = -1073741789;
        v79 = v1299;
        goto LABEL_451;
      }
      v354 = *v353;
      dwBytes_4 = v354;
      goto LABEL_381;
    }
  }
  else
  {
    LODWORD(v1) = -1073741811;
  }
  v354 = dwBytes_4;
LABEL_381:
  if ( (int)v1 < 0 )
    goto LABEL_779;
  if ( v354 == -805306333 )
  {
    dwBytes_4 = -2147024774;
  }
  else if ( v354 != -2147024774 )
  {
    LODWORD(v1) = v354;
    if ( v354 < 0 )
      goto LABEL_779;
  }
  if ( (_DWORD)v1397 != 6 )
  {
    v78 = v1284;
    LODWORD(v1) = -1073425151;
    v79 = v1299;
    goto LABEL_451;
  }
  if ( v1398 )
  {
    v355 = v1398;
    v1407 = v1398;
    do
    {
      LODWORD(v1) = RtlULongLongAdd(v355, 4LL, &v1407);
      if ( (int)v1 < 0 )
        goto LABEL_756;
      LODWORD(v1) = RtlULongLongAdd(v1407, v356, &v1407);
      if ( (int)v1 < 0 )
        goto LABEL_756;
      v355 = v1407;
    }
    while ( v357 == -1 );
    LODWORD(v1) = RtlULongLongAdd(v1407, 4LL, &v1407);
    if ( (int)v1 < 0 )
    {
LABEL_756:
      v358 = v1477;
      v359 = v1546;
      goto LABEL_395;
    }
    v1477 = v358;
    if ( v358 )
    {
      v359 = v1407;
    }
    else
    {
      v359 = 0LL;
      v1407 = 0LL;
    }
    v1546 = v359;
LABEL_395:
    if ( (int)v1 < 0 )
      goto LABEL_779;
    if ( v358 != 8 )
    {
      v78 = v1284;
      LODWORD(v1) = -1073741789;
      v79 = v1299;
      goto LABEL_451;
    }
    v1551 = *v359;
  }
  else
  {
    LODWORD(v1) = -1073741811;
  }
  if ( (int)v1 < 0 )
  {
LABEL_779:
    v78 = v1284;
    v79 = v1299;
    goto LABEL_451;
  }
  if ( !v1398 )
  {
    LODWORD(v1) = -1073741811;
LABEL_411:
    if ( (int)v1 >= 0 )
    {
      if ( !v1398 )
      {
        v78 = v1284;
        LODWORD(v1) = -1073741811;
        v79 = v1299;
        goto LABEL_451;
      }
      v365 = (unsigned int *)v1398;
      v366 = 0;
      v1442 = v1398;
      do
      {
        v367 = v365 + 1;
        if ( v365 + 1 < v365 || (v365 = (unsigned int *)((char *)v367 + *v365), v1442 = v367, v365 < v367) )
        {
          v78 = v1284;
          LODWORD(v1) = -1073741675;
          v79 = v1299;
          goto LABEL_451;
        }
        ++v366;
        v1442 = v365;
      }
      while ( v366 < 3 );
      v368 = RtlULongLongAdd(v365, 4LL, &v1442);
      LODWORD(v1) = v368;
      if ( v368 < 0 )
      {
        v369 = v1479;
        v370 = v1548;
      }
      else
      {
        v1479 = v369;
        if ( v369 )
        {
          v370 = v1442;
        }
        else
        {
          v370 = 0LL;
          v1442 = 0LL;
        }
        v1548 = v370;
      }
      if ( v368 >= 0 )
      {
        v371 = (unsigned int *)v1398;
        v372 = 0;
        v1443 = (unsigned int *)v1398;
        do
        {
          v373 = v371 + 1;
          if ( v371 + 1 < v371 || (v371 = (unsigned int *)((char *)v373 + *v371), v1443 = v373, v371 < v373) )
          {
            LODWORD(v1) = -1073741675;
            goto LABEL_433;
          }
          ++v372;
          v1443 = v371;
        }
        while ( v372 < 4 );
        LODWORD(v1) = RtlULongLongAdd(v371, 4LL, &v1443);
        if ( (int)v1 < 0 )
        {
          v374 = v1480;
          v375 = v1549;
        }
        else
        {
          v1480 = v374;
          if ( v374 )
          {
            v375 = v1443;
          }
          else
          {
            v375 = 0LL;
            v1443 = 0LL;
          }
          v1549 = v375;
        }
        if ( (int)v1 < 0 )
          goto LABEL_779;
        if ( v374 != 4 )
        {
          v78 = v1284;
          LODWORD(v1) = -1073741789;
          v79 = v1299;
          goto LABEL_451;
        }
        v1482 = *v375;
LABEL_433:
        if ( (int)v1 < 0 )
          goto LABEL_779;
        v376 = (unsigned int *)v1398;
        v377 = 0;
        v1444 = (int *)v1398;
        do
        {
          v378 = v376 + 1;
          if ( v376 + 1 < v376 || (v376 = (unsigned int *)((char *)v378 + *v376), v1444 = (int *)v378, v376 < v378) )
          {
            LODWORD(v1) = -1073741675;
            goto LABEL_445;
          }
          ++v377;
          v1444 = (int *)v376;
        }
        while ( v377 < 5 );
        LODWORD(v1) = RtlULongLongAdd(v376, 4LL, &v1444);
        if ( (int)v1 < 0 )
        {
          v379 = v1481;
          v380 = v1550;
        }
        else
        {
          v1481 = v379;
          if ( v379 )
          {
            v380 = v1444;
          }
          else
          {
            v380 = 0LL;
            v1444 = 0LL;
          }
          v1550 = v380;
        }
        if ( (int)v1 < 0 )
          goto LABEL_779;
        if ( v379 != 4 )
        {
          v78 = v1284;
          LODWORD(v1) = -1073741789;
          v79 = v1299;
          goto LABEL_451;
        }
        v1423 = *v380;
LABEL_445:
        if ( (int)v1 < 0 )
          goto LABEL_779;
        if ( v1528 == v1551 )
        {
          v1385 = v1423;
          v1430 = v1483;
          v1410 = v1482;
          if ( v1482 > 4 )
          {
            v78 = v1284;
            LODWORD(v1) = -2147024774;
            v79 = v1299;
          }
          else if ( v369 > 4 )
          {
            v78 = v1284;
            LODWORD(v1) = -2147024774;
            v79 = v1299;
          }
          else
          {
            memcpy_0(v77, v370, v369);
            v78 = v1284;
            v79 = v1299;
            if ( dwBytes_4 )
              LODWORD(v1) = dwBytes_4;
          }
        }
        else
        {
          v78 = v1284;
          LODWORD(v1) = -1073425151;
          v79 = v1299;
        }
        goto LABEL_451;
      }
    }
    goto LABEL_779;
  }
  v360 = (unsigned int *)v1398;
  v361 = 0;
  v1441 = v1398;
  do
  {
    v362 = v360 + 1;
    if ( v360 + 1 < v360 || (v360 = (unsigned int *)((char *)v362 + *v360), v1441 = v362, v360 < v362) )
    {
      LODWORD(v1) = -1073741675;
      goto LABEL_411;
    }
    ++v361;
    v1441 = v360;
  }
  while ( v361 < 2 );
  LODWORD(v1) = RtlULongLongAdd(v360, 4LL, &v1441);
  if ( (int)v1 < 0 )
  {
    v363 = v1478;
    v364 = v1547;
  }
  else
  {
    v1478 = v363;
    if ( v363 )
    {
      v364 = v1441;
    }
    else
    {
      v364 = 0LL;
      v1441 = 0LL;
    }
    v1547 = v364;
  }
  if ( (int)v1 < 0 )
    goto LABEL_779;
  if ( v363 == 4 )
  {
    v1483 = *v364;
    goto LABEL_411;
  }
  v78 = v1284;
  LODWORD(v1) = -1073741789;
  v79 = v1299;
LABEL_451:
  v1345 = 0;
  v381 = v1346;
  if ( v1346 )
  {
    v382 = GetProcessHeap();
    HeapFree(v382, 0, v381);
    v1346 = 0LL;
  }
  v383 = v1398;
  v1397 = 0LL;
  if ( v1398 )
  {
    v384 = GetProcessHeap();
    HeapFree(v384, 0, v383);
    v1398 = 0LL;
  }
  if ( v78 )
  {
    v385 = GetProcessHeap();
    HeapFree(v385, 0, v78);
  }
  if ( v79 )
  {
    v386 = GetProcessHeap();
    HeapFree(v386, 0, v79);
  }
  if ( (int)v1 < 0 )
    goto LABEL_558;
  v387 = 0;
  if ( v1385 )
  {
    v1563 = 0LL;
    dword_18014BE20 = v1385;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
      goto LABEL_792;
    v1297 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0F8[0])(0LL, 0LL, 1027LL);
    v465 = v1297;
    if ( !v1297 )
    {
      GetLastError();
      goto LABEL_792;
    }
    v485 = off_18014A098[0]();
    v486 = dword_18014BE20;
    qword_18014BF30 = v485;
    v1306 = dword_18014BE20;
    memset(v1604, 0, sizeof(v1604));
    v1358 = 0LL;
    v1399 = 0LL;
    v1400 = 0LL;
    v1424 = 1;
    v1421 = 0LL;
    memset(v1626, 0, 0x2CuLL);
    v1401 = 0LL;
    while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
      ;
    v487 = dword_18014BF38;
    if ( dword_18014BF38 )
      goto LABEL_860;
    v1304 = 0;
    v1354 = 0;
    v1498 = 0LL;
    v1552 = 0LL;
    v488 = (const WCHAR *)operator new(0x338uLL);
    lpModuleName = v488;
    if ( v488 )
    {
      v489 = 0;
      v490 = -1;
      v491 = (char *)&unk_180103702;
      v492 = 0;
      v1361 = 0;
      v493 = 0;
      v1368 = 0;
      v494 = (char *)v488 + 7;
      v495 = 103LL;
      do
      {
        v496 = (unsigned __int8)*(v491 - 1);
        v497 = (unsigned __int8)*(v491 - 2);
        v498 = (unsigned __int8)v491[2];
        v491 += 8;
        v499 = (unsigned __int8)*(v491 - 7) | (((unsigned __int8)*(v491 - 8) | ((v496 | (v497 << 8)) << 8)) << 8);
        v500 = v499 ^ v493;
        v501 = (unsigned __int8)*(v491 - 3) | (((unsigned __int8)*(v491 - 4) | (((unsigned __int8)*(v491 - 5) | (v498 << 8)) << 8)) << 8);
        v502 = v500 ^ v501 ^ v492 ^ 0xAC987321;
        v503 = (__ROL4__(v502, 10) + 4991 * __ROL4__(v502 + 1419157410, 5)) ^ v500;
        v504 = (43881 * __ROR4__(v503 + 133239679, 9) - __ROL4__(v503, 2)) ^ v502;
        v505 = (24670 * v504 - (v504 >> 13) - 123127970) ^ v503;
        v506 = (2033 * __ROL4__(v505 ^ 0xAB69, 6) - __ROL4__(v505, 2)) ^ v504;
        v507 = (133239679 - (v506 ^ 0xAB69605E)) ^ v505;
        v508 = (43881 * (v507 ^ 0x137F)) ^ __ROR4__(v507, 6) ^ v506;
        v509 = (__ROL4__(v508, 2) + 24670 * __ROR4__(v508 + 133239679, 15)) ^ v507;
        v510 = (2033 * __ROR4__(v509 + 1419157410, 14) - __ROL4__(v509, 8)) ^ v508;
        v511 = __ROR4__(v510, 10) ^ (4991 * __ROR4__(v510 ^ 0xAB69605E, 12)) ^ v509;
        v512 = (v511 >> 10) ^ (43881 * (v511 ^ 0x7F1)) ^ v510;
        v513 = (2033 * (__ROR4__(~v512, 5) + 24670)) ^ v511;
        v514 = v512 ^ (v513 - 2033) ^ 0xAB69605E;
        v515 = ((v514 >> 2) + 4991 * __ROL4__(v512 ^ (v513 - 2033) ^ 0xAB6967AF, 2)) ^ v513;
        v516 = (__ROL4__(v515, 7) + 43881 * __ROR4__(v515 - 133239679, 6)) ^ v514;
        v517 = (24670 * (v516 ^ 0x137F) + __ROR4__(v516, 9)) ^ v515;
        v518 = (__ROL4__(v517, 7) + 2033 * __ROL4__(v517 ^ 0xAB69, 5)) ^ v516;
        v519 = v518 ^ v517 ^ 0xAC987321;
        v520 = (4991 * (__ROR4__(v519, 3) - 43881)) ^ v518;
        v521 = (24670 * __ROR4__(v520 - 133239679, 1) - __ROR4__(v520, 6)) ^ v519;
        v522 = (__ROL4__(v521, 14) + 2033 * __ROL4__(v521 - 1419157410, 3)) ^ v520;
        v523 = (4991 * __ROL4__(v522 - 1419157410, 15) - __ROR4__(v522, 14)) ^ v521;
        v494 += 8;
        v524 = (v523 >> 3) ^ (43881 * (v523 ^ 0x605E)) ^ v522;
        v1361 = v490 ^ v524;
        v490 = v501;
        v525 = v489 ^ __ROL4__(v524, 2) ^ (24670 * __ROL4__(v524 ^ 0x7F1137F, 4));
        v489 = v499;
        v1368 = v525 ^ v523;
        *(v494 - 12) = v525 ^ v523;
        v1368 = __ROR4__(v1368, 8);
        *(v494 - 8) = v1361;
        v1361 = __ROR4__(v1361, 8);
        *(v494 - 13) = v1368;
        v1368 = __ROR4__(v1368, 8);
        *(v494 - 9) = v1361;
        v1361 = __ROR4__(v1361, 8);
        *(v494 - 14) = v1368;
        v1368 = __ROR4__(v1368, 8);
        *(v494 - 10) = v1361;
        v1361 = __ROR4__(v1361, 8);
        *(v494 - 15) = v1368;
        *(v494 - 11) = v1361;
        v493 = __ROR4__(v1368, 8);
        v492 = __ROR4__(v1361, 8);
        v1368 = v493;
        v1361 = v492;
        --v495;
      }
      while ( v495 );
      v486 = v1306;
      v387 = 0;
      v526 = lpModuleName;
      v527 = 0LL;
      v528 = 0;
      v529 = 0LL;
      v530 = 0LL;
      do
      {
        v529 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)lpModuleName + v527)), v529);
        v531 = _mm_loadu_si128((const __m128i *)((char *)lpModuleName + v527 + 16));
        v527 += 32LL;
        v532 = _mm_xor_si128(v531, v530);
        v530 = v532;
      }
      while ( v527 < 0x320 );
      v533 = _mm_xor_si128(v529, v532);
      v534 = _mm_xor_si128(v533, _mm_srli_si128(v533, 8));
      v535 = _mm_xor_si128(v534, _mm_srli_si128(v534, 4));
      v536 = _mm_xor_si128(v535, _mm_srli_si128(v535, 2));
      for ( n = _mm_cvtsi128_si32(_mm_xor_si128(v536, _mm_srli_si128(v536, 1))); v527 < 0x338; ++v527 )
        n ^= *((_BYTE *)lpModuleName + v527);
      if ( n == 64LL )
      {
        v1498 = (LPVOID)lpModuleName;
        v1552 = 824LL;
        *((_BYTE *)lpModuleName + 823) = 0;
        memset(&unk_18014C330, 0, 0x60uLL);
        if ( !*(_BYTE *)v526 )
          goto LABEL_851;
        do
        {
          v538 = v526;
          v539 = -1LL;
          do
            v62 = v526[++v539] == 0;
          while ( !v62 );
          v540 = &v526[v539];
          v541 = (char *)&unk_18014C330 + 24 * v1354;
          if ( !GetModuleHandleExW(0, v538, (HMODULE *)v541) )
          {
            v528 = -1073741702;
            break;
          }
          v528 = 0;
          if ( **(_WORD **)v541 == 23117 )
          {
            v542 = *(int *)(*(_QWORD *)v541 + 60LL);
            if ( (unsigned int)v542 < 0x10000000 )
            {
              v543 = *(_QWORD *)v541 + v542;
              if ( v543 >= *(_QWORD *)v541 )
              {
                if ( *(_DWORD *)v543 == 17744 )
                {
                  if ( ((*(_WORD *)(v543 + 24) - 267) & 0xFEFF) != 0 )
                  {
                    v528 = -1073741811;
                  }
                  else
                  {
                    *(_QWORD *)(v541 + 12) = *(_QWORD *)(v543 + 136);
                    *((_DWORD *)v541 + 2) = *(_DWORD *)(v543 + 80);
                  }
                }
                else
                {
                  v528 = -1073741701;
                }
              }
              else
              {
                v528 = -1073741701;
              }
            }
            else
            {
              v528 = -1073741701;
            }
          }
          else
          {
            v528 = -1073741701;
          }
          v544 = *(_DWORD *)(v540 + 1);
          v526 = v540 + 3;
          if ( v544 )
          {
            do
            {
              v545 = v526;
              v1530 = 0LL;
              v546 = -1LL;
              do
                ++v546;
              while ( *((_BYTE *)v526 + v546) );
              v526 = (LPCWSTR)((char *)v526 + v546 + 1);
              if ( v528 < 0 )
              {
                v547 = v1304;
              }
              else
              {
                v528 = WARBIRD::GetFunctionAddress(v545, 0LL, v541, &v1530);
                if ( v528 < 0 )
                {
                  v387 = 0;
                  goto LABEL_851;
                }
                v547 = v1304;
                off_18014A000[v1304] = v1530;
              }
              ++v387;
              v1304 = v547 + 1;
            }
            while ( v387 < v544 );
          }
          ++v1354;
          v387 = 0;
        }
        while ( *(_BYTE *)v526 );
LABEL_851:
        if ( v1498 )
        {
          v548 = GetProcessHeap();
          HeapFree(v548, 0, v1498);
        }
        if ( v528 < 0 )
        {
          v549 = (HMODULE *)&unk_18014C330;
          v550 = 4LL;
          do
          {
            if ( *v549 )
              FreeLibrary(*v549);
            v549 += 3;
            --v550;
          }
          while ( v550 );
          memset(&unk_18014C330, 0, 0x60uLL);
          memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
          v465 = v1297;
LABEL_861:
          v1376 = 0;
          _InterlockedExchange(&dword_18014C670, 0);
          v1323 = 0;
          v1642 = 0;
          v1536 = 0LL;
          v1537 = 0LL;
          v1538 = 0LL;
          v1460 = 0LL;
          v1461 = 0LL;
          v1501 = 0LL;
          while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
            ;
          v551 = dword_18014BF38;
          if ( dword_18014BF38 )
            goto LABEL_910;
          v1305 = 0;
          LODWORD(v1347) = 0;
          v1354 = 0;
          v1499 = 0LL;
          v1553 = 0LL;
          v552 = (const WCHAR *)operator new(0x338uLL);
          lpModuleName = v552;
          if ( v552 )
          {
            v553 = 0;
            v554 = -1;
            v555 = (char *)&unk_180103702;
            v556 = 0;
            v1362 = 0;
            v557 = 0;
            v1366 = 0;
            v558 = (char *)v552 + 7;
            v559 = 103LL;
            do
            {
              v560 = (unsigned __int8)*(v555 - 1);
              v561 = (unsigned __int8)*(v555 - 2);
              v562 = (unsigned __int8)v555[2];
              v555 += 8;
              v563 = (unsigned __int8)*(v555 - 7) | (((unsigned __int8)*(v555 - 8) | ((v560 | (v561 << 8)) << 8)) << 8);
              v564 = v563 ^ v557;
              v565 = (unsigned __int8)*(v555 - 3) | (((unsigned __int8)*(v555 - 4) | (((unsigned __int8)*(v555 - 5) | (v562 << 8)) << 8)) << 8);
              v566 = v564 ^ v565 ^ v556 ^ 0xAC987321;
              v567 = (__ROL4__(v566, 10) + 4991 * __ROL4__(v566 + 1419157410, 5)) ^ v564;
              v568 = (43881 * __ROR4__(v567 + 133239679, 9) - __ROL4__(v567, 2)) ^ v566;
              v569 = (24670 * v568 - (v568 >> 13) - 123127970) ^ v567;
              v570 = (2033 * __ROL4__(v569 ^ 0xAB69, 6) - __ROL4__(v569, 2)) ^ v568;
              v571 = (133239679 - (v570 ^ 0xAB69605E)) ^ v569;
              v572 = (43881 * (v571 ^ 0x137F)) ^ __ROR4__(v571, 6) ^ v570;
              v573 = (__ROL4__(v572, 2) + 24670 * __ROR4__(v572 + 133239679, 15)) ^ v571;
              v574 = (2033 * __ROR4__(v573 + 1419157410, 14) - __ROL4__(v573, 8)) ^ v572;
              v575 = __ROR4__(v574, 10) ^ (4991 * __ROR4__(v574 ^ 0xAB69605E, 12)) ^ v573;
              v576 = (v575 >> 10) ^ (43881 * (v575 ^ 0x7F1)) ^ v574;
              v577 = (2033 * (__ROR4__(~v576, 5) + 24670)) ^ v575;
              v578 = v576 ^ (v577 - 2033) ^ 0xAB69605E;
              v579 = ((v578 >> 2) + 4991 * __ROL4__(v576 ^ (v577 - 2033) ^ 0xAB6967AF, 2)) ^ v577;
              v580 = (__ROL4__(v579, 7) + 43881 * __ROR4__(v579 - 133239679, 6)) ^ v578;
              v581 = (24670 * (v580 ^ 0x137F) + __ROR4__(v580, 9)) ^ v579;
              v582 = (__ROL4__(v581, 7) + 2033 * __ROL4__(v581 ^ 0xAB69, 5)) ^ v580;
              v583 = v581 ^ v582 ^ 0xAC987321;
              v584 = (4991 * (__ROR4__(v583, 3) - 43881)) ^ v582;
              v585 = (24670 * __ROR4__(v584 - 133239679, 1) - __ROR4__(v584, 6)) ^ v583;
              v586 = (__ROL4__(v585, 14) + 2033 * __ROL4__(v585 - 1419157410, 3)) ^ v584;
              v587 = (4991 * __ROL4__(v586 - 1419157410, 15) - __ROR4__(v586, 14)) ^ v585;
              v558 += 8;
              v588 = (v587 >> 3) ^ (43881 * (v587 ^ 0x605E)) ^ v586;
              v1362 = v554 ^ v588;
              v554 = v565;
              v589 = v553 ^ __ROL4__(v588, 2) ^ (24670 * __ROL4__(v588 ^ 0x7F1137F, 4));
              v553 = v563;
              v1366 = v589 ^ v587;
              *(v558 - 12) = v589 ^ v587;
              v1366 = __ROR4__(v1366, 8);
              *(v558 - 8) = v1362;
              v1362 = __ROR4__(v1362, 8);
              *(v558 - 13) = v1366;
              v1366 = __ROR4__(v1366, 8);
              *(v558 - 9) = v1362;
              v1362 = __ROR4__(v1362, 8);
              *(v558 - 14) = v1366;
              v1366 = __ROR4__(v1366, 8);
              *(v558 - 10) = v1362;
              v1362 = __ROR4__(v1362, 8);
              *(v558 - 15) = v1366;
              *(v558 - 11) = v1362;
              v557 = __ROR4__(v1366, 8);
              v556 = __ROR4__(v1362, 8);
              v1366 = v557;
              v1362 = v556;
              --v559;
            }
            while ( v559 );
            v486 = v1306;
            v387 = 0;
            v590 = lpModuleName;
            v591 = 0LL;
            v592 = v1347;
            v593 = 0LL;
            v594 = 0LL;
            do
            {
              v593 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)lpModuleName + v591)), v593);
              v595 = _mm_loadu_si128((const __m128i *)((char *)lpModuleName + v591 + 16));
              v591 += 32LL;
              v596 = _mm_xor_si128(v595, v594);
              v594 = v596;
            }
            while ( v591 < 0x320 );
            v597 = _mm_xor_si128(v593, v596);
            v598 = _mm_xor_si128(v597, _mm_srli_si128(v597, 8));
            v599 = _mm_xor_si128(v598, _mm_srli_si128(v598, 4));
            v600 = _mm_xor_si128(v599, _mm_srli_si128(v599, 2));
            for ( ii = _mm_cvtsi128_si32(_mm_xor_si128(v600, _mm_srli_si128(v600, 1))); v591 < 0x338; ++v591 )
              ii ^= *((_BYTE *)lpModuleName + v591);
            if ( ii == 64LL )
            {
              v1499 = (LPVOID)lpModuleName;
              v1553 = 824LL;
              *((_BYTE *)lpModuleName + 823) = 0;
              memset(&unk_18014C330, 0, 0x60uLL);
              if ( !*(_BYTE *)v590 )
                goto LABEL_901;
              do
              {
                v602 = v590;
                v603 = -1LL;
                do
                  v62 = v590[++v603] == 0;
                while ( !v62 );
                v604 = &v590[v603];
                v605 = (char *)&unk_18014C330 + 24 * v1354;
                if ( !GetModuleHandleExW(0, v602, (HMODULE *)v605) )
                {
                  v592 = -1073741702;
                  break;
                }
                v592 = 0;
                if ( **(_WORD **)v605 == 23117 )
                {
                  v606 = *(int *)(*(_QWORD *)v605 + 60LL);
                  if ( (unsigned int)v606 < 0x10000000 )
                  {
                    v607 = *(_QWORD *)v605 + v606;
                    if ( v607 >= *(_QWORD *)v605 )
                    {
                      if ( *(_DWORD *)v607 == 17744 )
                      {
                        if ( ((*(_WORD *)(v607 + 24) - 267) & 0xFEFF) != 0 )
                        {
                          v592 = -1073741811;
                        }
                        else
                        {
                          *(_QWORD *)(v605 + 12) = *(_QWORD *)(v607 + 136);
                          *((_DWORD *)v605 + 2) = *(_DWORD *)(v607 + 80);
                        }
                      }
                      else
                      {
                        v592 = -1073741701;
                      }
                    }
                    else
                    {
                      v592 = -1073741701;
                    }
                  }
                  else
                  {
                    v592 = -1073741701;
                  }
                }
                else
                {
                  v592 = -1073741701;
                }
                v608 = *(_DWORD *)(v604 + 1);
                v590 = v604 + 3;
                if ( v608 )
                {
                  do
                  {
                    v609 = v590;
                    v1531 = 0LL;
                    v610 = -1LL;
                    do
                      ++v610;
                    while ( *((_BYTE *)v590 + v610) );
                    v590 = (LPCWSTR)((char *)v590 + v610 + 1);
                    if ( v592 < 0 )
                    {
                      v611 = v1305;
                    }
                    else
                    {
                      v592 = WARBIRD::GetFunctionAddress(v609, 0LL, v605, &v1531);
                      if ( v592 < 0 )
                      {
                        v387 = 0;
                        goto LABEL_901;
                      }
                      v611 = v1305;
                      off_18014A000[v1305] = v1531;
                    }
                    ++v387;
                    v1305 = v611 + 1;
                  }
                  while ( v387 < v608 );
                }
                ++v1354;
                v387 = 0;
              }
              while ( *(_BYTE *)v590 );
LABEL_901:
              if ( v1499 )
              {
                v612 = GetProcessHeap();
                HeapFree(v612, 0, v1499);
              }
              if ( v592 < 0 )
              {
                v613 = (HMODULE *)&unk_18014C330;
                v614 = 4LL;
                do
                {
                  if ( *v613 )
                    FreeLibrary(*v613);
                  v613 += 3;
                  --v614;
                }
                while ( v614 );
                memset(&unk_18014C330, 0, 0x60uLL);
                memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
                v465 = v1297;
LABEL_911:
                _InterlockedExchange(&dword_18014C670, 0);
                memset(v1604, 0, sizeof(v1604));
                v1399 = 0LL;
                v615 = v486 & 0xF;
                v1340 = v615;
                v1641 = (v486 >> 4) & 0xF;
                HIWORD(v1642) = (v486 >> 12) & 0xF;
                LOWORD(v1642) = (v486 >> 8) & 0xF;
                v1332 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0F8[0])(0LL, 0LL, 1027LL);
                v1341 = -1;
                if ( !v1332 )
                {
                  v616 = GetLastError();
                  v617 = v616;
                  if ( v616 > 0 )
                    v617 = (unsigned __int16)v616 | 0x80070000;
                  if ( v617 >= 0 )
                    v617 = -2147467259;
                  goto LABEL_1125;
                }
                v1451 = 0LL;
                v618 = 0LL;
                v1532 = 0LL;
                v1533 = 0LL;
                v1450 = 0LL;
                v617 = 0;
                v1500 = 0LL;
                v1449 = 0LL;
                v1414 = 0;
                if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_18014A0A0[0])(
                       8LL,
                       &v1390,
                       0LL,
                       &v1414) )
                {
                  v620 = operator new(2LL * v1414);
                  SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1500, v620);
                  v621 = v1500;
                  if ( v1500 )
                  {
                    v622 = operator new(4LL * (v1390 + 1));
                    SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1449, v622);
                    v623 = v1449;
                    if ( v1449 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_18014A0A0[0])(
                             8LL,
                             &v1390,
                             v621,
                             &v1414) )
                      {
                        v625 = v623;
                        if ( v1390 )
                        {
                          do
                          {
                            *v625 = ((__int64 (__fastcall *)(__int64, _QWORD))off_18014A0B0[0])(v621, 0LL);
                            v626 = -1LL;
                            do
                              v62 = *(_WORD *)(v621 + 2 * v626++ + 2) == 0;
                            while ( !v62 );
                            ++v625;
                            v621 += 2 * v626 + 2;
                            ++v387;
                          }
                          while ( v387 < v1390 );
                        }
                        *v625 = 1033;
                        v618 = v623;
                        v1449 = 0LL;
                        v1306 = v1390 + 1;
                        v1533 = v623;
                      }
                      else
                      {
                        v624 = GetLastError();
                        v617 = v624;
                        if ( v624 > 0 )
                          v617 = (unsigned __int16)v624 | 0x80070000;
                        if ( v617 >= 0 )
                          v617 = -2147467259;
                      }
                    }
                    else
                    {
                      v617 = -2147024882;
                    }
                  }
                  else
                  {
                    v617 = -2147024882;
                  }
                }
                else
                {
                  v619 = GetLastError();
                  v617 = v619;
                  if ( v619 > 0 )
                    v617 = (unsigned __int16)v619 | 0x80070000;
                  if ( v617 >= 0 )
                    v617 = -2147467259;
                }
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1449);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1500);
                if ( v617 < 0 )
                {
                  v641 = v1538;
                  v637 = v1536;
                  v1292 = v1537;
                  goto LABEL_1007;
                }
                v627 = 0;
                LODWORD(v1380) = 0;
                v628 = 0;
                if ( v1306 )
                {
                  v629 = 0LL;
                  while ( 2 )
                  {
                    v630 = 0;
                    v631 = &dword_1801219D0;
                    do
                    {
                      if ( v618[v629] == *v631 )
                      {
                        v627 = v630;
                        LODWORD(v1380) = v630;
                        goto LABEL_944;
                      }
                      ++v630;
                      ++v631;
                    }
                    while ( v630 < 0x26 );
                    ++v628;
                    ++v629;
                    if ( v628 < v1306 )
                      continue;
                    break;
                  }
                }
LABEL_944:
                v632 = v627;
                LODWORD(v1402) = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_18014A0A8[0])(
                       *((unsigned int *)&dword_1801219D0 + v627),
                       v1643,
                       85LL)
                  && ((int (__fastcall *)(_BYTE *, __int64, char *))off_18014A090[0])(v1643, 88LL, &v1635) > 0 )
                {
                  LODWORD(v1402) = (v1636 >> 27) & 1;
                }
                v633 = L"Segoe UI Light";
                v634 = 19LL;
                v635 = v1640;
                do
                {
                  *v635 = (unsigned __int16 *)v633;
                  v636 = -1LL;
                  do
                    v62 = v633[++v636] == 0;
                  while ( !v62 );
                  ++v635;
                  v633 += v636 + 1;
                  --v634;
                }
                while ( v634 );
                v637 = v1640[*((unsigned __int8 *)&byte_18010E540 + 3 * v632)];
                v638 = *((unsigned __int8 *)&MEMORY[0x18010E541] + 3 * v632);
                v1285 = v637;
                v1536 = v637;
                v639 = v1640[v638];
                v640 = *((unsigned __int8 *)&MEMORY[0x18010E542] + 3 * v632);
                v1292 = v639;
                v1537 = v639;
                v641 = v1640[v640];
                v1300 = v641;
                v1538 = v641;
                v642 = 0;
                lpModuleName = (LPCWSTR)operator new(0x1C90uLL);
                if ( !lpModuleName )
                {
                  v617 = -2147024882;
                  goto LABEL_1007;
                }
                v643 = -1;
                v1363 = 0;
                v644 = (char *)lpModuleName + 7;
                v645 = 0;
                v1365 = 0;
                v646 = 0;
                v647 = (char *)&unk_18011FD32;
                v648 = 914LL;
                do
                {
                  v649 = (unsigned __int8)*(v647 - 1);
                  v650 = (unsigned __int8)*(v647 - 2);
                  v651 = (unsigned __int8)v647[2];
                  v647 += 8;
                  v652 = (unsigned __int8)*(v647 - 7) | (((unsigned __int8)*(v647 - 8) | ((v649 | (v650 << 8)) << 8)) << 8);
                  v653 = v652 ^ v645;
                  v654 = (unsigned __int8)*(v647 - 3) | (((unsigned __int8)*(v647 - 4) | (((unsigned __int8)*(v647 - 5) | (v651 << 8)) << 8)) << 8);
                  v655 = v653 ^ v654 ^ v642 ^ 0xAC987321;
                  v656 = (__ROL4__(v655, 10) + 4991 * __ROL4__(v655 + 1419157410, 5)) ^ v653;
                  v657 = (43881 * __ROR4__(v656 + 133239679, 9) - __ROL4__(v656, 2)) ^ v655;
                  v658 = (24670 * v657 - (v657 >> 13) - 123127970) ^ v656;
                  v659 = (2033 * __ROL4__(v658 ^ 0xAB69, 6) - __ROL4__(v658, 2)) ^ v657;
                  v660 = (133239679 - (v659 ^ 0xAB69605E)) ^ v658;
                  v661 = (43881 * (v660 ^ 0x137F)) ^ __ROR4__(v660, 6) ^ v659;
                  v662 = (__ROL4__(v661, 2) + 24670 * __ROR4__(v661 + 133239679, 15)) ^ v660;
                  v663 = (2033 * __ROR4__(v662 + 1419157410, 14) - __ROL4__(v662, 8)) ^ v661;
                  v664 = __ROR4__(v663, 10) ^ (4991 * __ROR4__(v663 ^ 0xAB69605E, 12)) ^ v662;
                  v665 = (v664 >> 10) ^ (43881 * (v664 ^ 0x7F1)) ^ v663;
                  v666 = (2033 * (__ROR4__(~v665, 5) + 24670)) ^ v664;
                  v667 = v665 ^ (v666 - 2033) ^ 0xAB69605E;
                  v668 = ((v667 >> 2) + 4991 * __ROL4__(v665 ^ (v666 - 2033) ^ 0xAB6967AF, 2)) ^ v666;
                  v669 = (__ROL4__(v668, 7) + 43881 * __ROR4__(v668 - 133239679, 6)) ^ v667;
                  v670 = (24670 * (v669 ^ 0x137F) + __ROR4__(v669, 9)) ^ v668;
                  v671 = (__ROL4__(v670, 7) + 2033 * __ROL4__(v670 ^ 0xAB69, 5)) ^ v669;
                  v672 = v671 ^ v670 ^ 0xAC987321;
                  v673 = (4991 * (__ROR4__(v672, 3) - 43881)) ^ v671;
                  v674 = (24670 * __ROR4__(v673 - 133239679, 1) - __ROR4__(v673, 6)) ^ v672;
                  v675 = (__ROL4__(v674, 14) + 2033 * __ROL4__(v674 - 1419157410, 3)) ^ v673;
                  v676 = (4991 * __ROL4__(v675 - 1419157410, 15) - __ROR4__(v675, 14)) ^ v674;
                  v644 += 8;
                  v677 = (v676 >> 3) ^ (43881 * (v676 ^ 0x605E)) ^ v675;
                  v1363 = v643 ^ v677;
                  v643 = v654;
                  v678 = v646 ^ __ROL4__(v677, 2) ^ (24670 * __ROL4__(v677 ^ 0x7F1137F, 4));
                  v646 = v652;
                  v1365 = v678 ^ v676;
                  *(v644 - 12) = v678 ^ v676;
                  v1365 = __ROR4__(v1365, 8);
                  *(v644 - 8) = v1363;
                  v1363 = __ROR4__(v1363, 8);
                  *(v644 - 13) = v1365;
                  v1365 = __ROR4__(v1365, 8);
                  *(v644 - 9) = v1363;
                  v1363 = __ROR4__(v1363, 8);
                  *(v644 - 14) = v1365;
                  v1365 = __ROR4__(v1365, 8);
                  *(v644 - 10) = v1363;
                  v1363 = __ROR4__(v1363, 8);
                  *(v644 - 15) = v1365;
                  *(v644 - 11) = v1363;
                  v645 = __ROR4__(v1365, 8);
                  v642 = __ROR4__(v1363, 8);
                  v1365 = v645;
                  v1363 = v642;
                  --v648;
                }
                while ( v648 );
                v617 = 0;
                v679 = 0LL;
                v680 = 0LL;
                v681 = 0LL;
                do
                {
                  v680 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)lpModuleName + v679)), v680);
                  v682 = _mm_loadu_si128((const __m128i *)((char *)lpModuleName + v679 + 16));
                  v679 += 32LL;
                  v683 = _mm_xor_si128(v682, v681);
                  v681 = v683;
                }
                while ( v679 < 0x1C80 );
                v684 = _mm_xor_si128(v683, v680);
                v685 = _mm_xor_si128(v684, _mm_srli_si128(v684, 8));
                v686 = _mm_xor_si128(v685, _mm_srli_si128(v685, 4));
                v687 = _mm_xor_si128(v686, _mm_srli_si128(v686, 2));
                for ( jj = _mm_cvtsi128_si32(_mm_xor_si128(v687, _mm_srli_si128(v687, 1))); v679 < 0x1C90; ++v679 )
                  jj ^= *((_BYTE *)lpModuleName + v679);
                if ( jj == 127LL )
                {
                  v1451 = (WCHAR *)lpModuleName;
                  v1532 = 7312LL;
                }
                else
                {
                  v617 = -1073425151;
                  operator delete((void *)lpModuleName);
                }
                if ( v617 < 0 )
                {
                  v641 = v1300;
                  v637 = v1285;
                  v615 = v1340;
                  goto LABEL_1007;
                }
                v689 = v1451;
                v690 = v1639;
                v691 = (int)v1380;
                v692 = 6LL;
                do
                {
                  for ( kk = 0; kk < 0x26; ++kk )
                  {
                    if ( v691 == kk )
                      *v690 = v689;
                    v694 = -1LL;
                    do
                      ++v694;
                    while ( *((_BYTE *)v689 + v694) );
                    v689 = (WCHAR *)((char *)v689 + v694 + 1);
                  }
                  ++v690;
                  --v692;
                }
                while ( v692 );
                v695 = operator new(0x18uLL);
                SP<unsigned char,SP_MEM<unsigned char>>::Attach(&v1450, v695);
                v696 = v1450;
                if ( !v1450 )
                {
                  v641 = v1300;
                  v617 = -2147024882;
                  v637 = v1285;
                  v615 = v1340;
                  goto LABEL_1007;
                }
                v697 = &v1641;
                *v1450 = 0LL;
                v698 = 0;
                v696[1] = 0LL;
                v1307 = 0;
                v699 = v696;
                v696[2] = 0LL;
                while ( 2 )
                {
                  v700 = &unk_180121A68;
                  v701 = 0LL;
                  while ( *v697 != *v700 )
                  {
                    v701 = (unsigned int)(v701 + 1);
                    ++v700;
                    if ( (unsigned int)v701 >= 6 )
                      goto LABEL_986;
                  }
                  v702 = v1639[v701];
                  v703 = -1LL;
                  do
                    v62 = *((_BYTE *)v702 + ++v703) == 0;
                  while ( !v62 );
                  v704 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int16 *, _QWORD, _QWORD, _DWORD))off_18014A0C0[0])(
                           65001LL,
                           0LL,
                           v702,
                           (unsigned int)(v703 + 1),
                           0LL,
                           0);
                  v705 = v704;
                  if ( v704 )
                  {
                    v706 = operator new(2LL * v704);
                    *v699 = v706;
                    if ( !v706 )
                    {
                      v710 = -2147024882;
LABEL_997:
                      v1312 = v710;
                      goto LABEL_998;
                    }
                    v707 = -1LL;
                    do
                      v62 = *((_BYTE *)v702 + ++v707) == 0;
                    while ( !v62 );
                    if ( ((unsigned int (__fastcall *)(__int64, _QWORD, unsigned __int16 *, _QWORD, void *, int))off_18014A0C0[0])(
                           65001LL,
                           0LL,
                           v702,
                           (unsigned int)(v707 + 1),
                           v706,
                           v705) )
                    {
                      v698 = v1307;
LABEL_986:
                      ++v698;
                      ++v697;
                      ++v699;
                      v1307 = v698;
                      if ( v698 < 3 )
                        continue;
                      v641 = v1300;
                      v637 = v1285;
                      v615 = v1340;
                      LODWORD(v1604[0]) = v1402;
                      v1450 = 0LL;
                      v1501 = (void **)v696;
LABEL_1007:
                      if ( v1451 )
                        memset(v1451, 0, v1532);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1450);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1451);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1533);
                      if ( v617 < 0 )
                        goto LABEL_1124;
                      v716 = 0;
                      v617 = 0;
                      v1604[1] = *v1501;
                      v1604[2] = v1501[1];
                      v1604[3] = v1501[2];
                      v1540 = 0LL;
                      v1541 = 0;
                      v1539 = 16;
                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, int *, _QWORD))off_18014A168)(
                                           66LL,
                                           0LL,
                                           &v1539,
                                           0LL) )
                      {
                        v716 = v1540 & 1;
                      }
                      else
                      {
                        v717 = GetLastError();
                        v617 = v717;
                        if ( v717 > 0 )
                          v617 = (unsigned __int16)v717 | 0x80070000;
                        if ( v617 >= 0 )
                          v617 = -2147467259;
                      }
                      HIDWORD(v1604[0]) = v716;
                      if ( v617 < 0 )
                        goto LABEL_1124;
                      if ( v615 == 1 )
                      {
                        v1376 = 42;
                      }
                      else
                      {
                        if ( v615 != 2 )
                        {
                          if ( v615 == 3 )
                          {
                            v1376 = 225;
                            v1323 = 225;
                          }
LABEL_1024:
                          v718 = 96;
                          memset(v1637, 0, 0xDCuLL);
                          LOWORD(v1637[17]) = 220;
                          if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _DWORD *))off_18014A0E0[0])(
                                 0LL,
                                 0xFFFFFFFFLL,
                                 v1637) )
                          {
                            v718 = HIWORD(v1637[41]);
                            LODWORD(v1461) = v1637[43];
                            if ( HIWORD(v1637[41]) < 0x60u )
                              v718 = 96;
                            v1460 = 0LL;
                            HIDWORD(v1461) = v1637[44];
                          }
                          v719 = v641;
                          if ( v1340 == 1 )
                            v719 = v637;
                          memset(v1632, 0, 0x5CuLL);
                          v617 = 0;
                          v720 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0F8[0])(0LL, 0LL, 1027LL);
                          if ( v720 )
                          {
                            v722 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0B8[0])(
                                     v1376,
                                     v718,
                                     72LL);
                            v1632[4] = 400;
                            BYTE2(v1632[6]) = 5;
                            v1632[0] = -v722;
                            StringCchCopyW((unsigned __int16 *)&v1632[7], 0x20uLL, v719);
                            v723 = (void *)((__int64 (__fastcall *)(_DWORD *))off_18014A020[0])(v1632);
                            if ( v723 )
                            {
                              v1604[4] = v723;
                            }
                            else
                            {
                              v724 = GetLastError();
                              v617 = v724;
                              if ( v724 > 0 )
                                v617 = (unsigned __int16)v724 | 0x80070000;
                              if ( v617 >= 0 )
                                v617 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_18014A160[0])(0LL, v720);
                          }
                          else
                          {
                            v721 = GetLastError();
                            v617 = v721;
                            if ( v721 > 0 )
                              v617 = (unsigned __int16)v721 | 0x80070000;
                            if ( v617 < 0 )
                              goto LABEL_1123;
                            v617 = -2147467259;
                          }
                          if ( v617 < 0 )
                          {
LABEL_1123:
                            v615 = v1340;
                            goto LABEL_1124;
                          }
                          if ( v1340 == 1 )
                            v641 = v637;
                          memset(v1633, 0, 0x5CuLL);
                          v725 = 0;
                          v617 = 0;
                          v726 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0F8[0])(0LL, 0LL, 1027LL);
                          if ( v726 )
                          {
                            v728 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0B8[0])(
                                     v1323,
                                     v718,
                                     72LL);
                            v1633[4] = 400;
                            BYTE2(v1633[6]) = 5;
                            v1633[0] = -v728;
                            StringCchCopyW((unsigned __int16 *)&v1633[7], 0x20uLL, v641);
                            v729 = (void *)((__int64 (__fastcall *)(_DWORD *))off_18014A020[0])(v1633);
                            if ( v729 )
                            {
                              v1604[5] = v729;
                            }
                            else
                            {
                              v730 = GetLastError();
                              v617 = v730;
                              if ( v730 > 0 )
                                v617 = (unsigned __int16)v730 | 0x80070000;
                              if ( v617 >= 0 )
                                v617 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_18014A160[0])(0LL, v726);
                          }
                          else
                          {
                            v727 = GetLastError();
                            v617 = v727;
                            if ( v727 > 0 )
                              v617 = (unsigned __int16)v727 | 0x80070000;
                            if ( v617 < 0 )
                              goto LABEL_1122;
                            v617 = -2147467259;
                          }
                          if ( v617 < 0 )
                            goto LABEL_1122;
                          v731 = 0;
                          v732 = 0;
                          if ( v1340 != 1 )
                          {
                            if ( v1340 == 2 )
                            {
                              v732 = 0;
                              v731 = (int)v1461 / 4;
LABEL_1062:
                              v1400 = __PAIR64__(v732, v731);
                              if ( v1340 == 1 )
                              {
                                v725 = 150;
                                v1324 = 32;
                                v733 = 0;
                              }
                              else if ( v1340 <= 1 || v1340 > 3 )
                              {
                                v733 = v1381;
                                v725 = v1381;
                                v1324 = v1381;
                              }
                              else
                              {
                                v733 = 0;
                                v1324 = 0;
                              }
                              v734 = v731 - v725 - v733;
                              v617 = 0;
                              v735 = v1604[1];
                              HIDWORD(v1604[10]) = v734;
                              HIDWORD(v1604[8]) = v734;
                              lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, void *))off_18014A078)(
                                                        v1332,
                                                        v1604[4]);
                              if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, char *, int, _QWORD))off_18014A0D8)(
                                                    v1332,
                                                    v735,
                                                    0xFFFFFFFFLL,
                                                    (char *)&v1604[7] + 4,
                                                    3152,
                                                    0LL) )
                                v617 = -2147467259;
                              if ( lpModuleName )
                                ((void (__fastcall *)(LPVOID, LPCWSTR))off_18014A078)(v1332, lpModuleName);
                              if ( v617 >= 0 )
                              {
                                v617 = 0;
                                v736 = v1604[2];
                                lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, void *))off_18014A078)(
                                                          v1332,
                                                          v1604[5]);
                                if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, char *, int, _QWORD))off_18014A0D8)(
                                                      v1332,
                                                      v736,
                                                      0xFFFFFFFFLL,
                                                      (char *)&v1604[9] + 4,
                                                      3152,
                                                      0LL) )
                                  v617 = -2147467259;
                                if ( lpModuleName )
                                  ((void (__fastcall *)(LPVOID, LPCWSTR))off_18014A078)(v1332, lpModuleName);
                                if ( v617 >= 0 )
                                {
                                  if ( v1340 - 2 <= 1 )
                                  {
                                    v734 = HIDWORD(v1604[10]);
                                    if ( SHIDWORD(v1604[8]) > SHIDWORD(v1604[10]) )
                                      v734 = HIDWORD(v1604[8]);
                                  }
                                  if ( LODWORD(v1604[0]) )
                                  {
                                    off_18014A150((CPolicyConfig *)((char *)&v1604[7] + 4));
                                    v737 = v734 + v733 - HIDWORD(v1604[10]);
                                  }
                                  else
                                  {
                                    off_18014A150((CPolicyConfig *)((char *)&v1604[7] + 4));
                                    v737 = v725;
                                  }
                                  ((void (__fastcall *)(char *, __int64, _QWORD))off_18014A150)(
                                    (char *)&v1604[9] + 4,
                                    v737,
                                    (unsigned int)(LODWORD(v1604[9]) + v1324));
                                  if ( v1340 - 2 <= 1 )
                                  {
                                    v1400 = __PAIR64__((unsigned int)v1604[11], v734);
                                    LODWORD(v1604[7]) = -5723992;
                                    goto LABEL_1109;
                                  }
                                  if ( v1340 != 1 )
                                    goto LABEL_1109;
                                  LODWORD(v1604[7]) = 0xFFFFFF;
                                  memset(v1634, 0, 0x5CuLL);
                                  v617 = 0;
                                  v738 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0F8[0])(
                                           0LL,
                                           0LL,
                                           1027LL);
                                  if ( v738 )
                                  {
                                    v740 = ((__int64 (__fastcall *)(__int64, _QWORD))off_18014A0B8[0])(11LL, v718);
                                    v1634[4] = 400;
                                    v1634[0] = -v740;
                                    BYTE2(v1634[6]) = 5;
                                    StringCchCopyW((unsigned __int16 *)&v1634[7], 0x20uLL, v1292);
                                    v741 = (void *)((__int64 (__fastcall *)(_DWORD *))off_18014A020[0])(v1634);
                                    if ( v741 )
                                    {
                                      v1604[6] = v741;
                                    }
                                    else
                                    {
                                      v742 = GetLastError();
                                      v617 = v742;
                                      if ( v742 > 0 )
                                        v617 = (unsigned __int16)v742 | 0x80070000;
                                      if ( v617 >= 0 )
                                        v617 = -2147467259;
                                    }
                                    ((void (__fastcall *)(_QWORD, __int64))off_18014A160[0])(0LL, v738);
                                  }
                                  else
                                  {
                                    v739 = GetLastError();
                                    v617 = v739;
                                    if ( v739 > 0 )
                                      v617 = (unsigned __int16)v739 | 0x80070000;
                                    if ( v617 < 0 )
                                      goto LABEL_1122;
                                    v617 = -2147467259;
                                  }
                                  if ( v617 >= 0 )
                                  {
                                    v617 = 0;
                                    v743 = v1604[3];
                                    HIDWORD(v1604[12]) = v734;
                                    v744 = ((__int64 (__fastcall *)(LPVOID, void *))off_18014A078)(v1332, v1604[6]);
                                    if ( !(unsigned int)((__int64 (__fastcall *)(LPVOID, void *, __int64, char *, int, _QWORD))off_18014A0D8)(
                                                          v1332,
                                                          v743,
                                                          0xFFFFFFFFLL,
                                                          (char *)&v1604[11] + 4,
                                                          1120,
                                                          0LL) )
                                      v617 = -2147467259;
                                    if ( v744 )
                                      ((void (__fastcall *)(LPVOID, __int64))off_18014A078)(v1332, v744);
                                    if ( v617 >= 0 )
                                    {
                                      v745 = HIDWORD(v1604[12]) + 24;
                                      if ( HIDWORD(v1604[12]) + 24 < 90 )
                                        v745 = 90;
                                      HIDWORD(v1604[12]) = v745;
                                      LODWORD(v1604[13]) = 32;
                                      HIDWORD(v1604[11]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0B8[0])(
                                                             HIDWORD(v1604[11]),
                                                             v718,
                                                             96LL);
                                      LODWORD(v1604[12]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0B8[0])(
                                                             LODWORD(v1604[12]),
                                                             v718,
                                                             96LL);
                                      HIDWORD(v1604[12]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0B8[0])(
                                                             HIDWORD(v1604[12]),
                                                             v718,
                                                             96LL);
                                      LODWORD(v1604[13]) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_18014A0B8[0])(
                                                             LODWORD(v1604[13]),
                                                             v718,
                                                             96LL);
                                      off_18014A150((CPolicyConfig *)((char *)&v1604[11] + 4));
LABEL_1109:
                                      v615 = v1340;
                                      v746 = (int)v1604[0];
                                      v747 = HIDWORD(v1400);
                                      v748 = v1400;
                                      switch ( v1340 )
                                      {
                                        case 1u:
                                          v1399 = 0LL;
                                          goto LABEL_1121;
                                        case 2u:
                                          memset(v1625, 0, sizeof(v1625));
                                          v752 = ((__int64 (__fastcall *)(_QWORD, __int64))off_18014A148[0])(0LL, 1LL);
                                          v1625[0] = 40;
                                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_18014A108)(
                                                                v752,
                                                                v1625) )
                                          {
LABEL_1121:
                                            v617 = 0;
LABEL_1124:
                                            ((void (__fastcall *)(_QWORD, LPVOID))off_18014A160[0])(0LL, v1332);
                                            v465 = v1297;
LABEL_1125:
                                            while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
                                              ;
                                            v753 = dword_18014BF38;
                                            if ( dword_18014BF38 > 0 )
                                            {
                                              --dword_18014BF38;
                                              if ( v753 == 1 )
                                              {
                                                v754 = (HMODULE *)&unk_18014C330;
                                                v755 = 4LL;
                                                do
                                                {
                                                  if ( *v754 )
                                                    FreeLibrary(*v754);
                                                  v754 += 3;
                                                  --v755;
                                                }
                                                while ( v755 );
                                                memset(&unk_18014C330, 0, 0x60uLL);
                                                memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
                                                v465 = v1297;
                                              }
                                            }
                                            _InterlockedExchange(&dword_18014C670, 0);
                                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1501);
                                            if ( v617 < 0 )
                                            {
                                              LODWORD(v762) = 0;
                                              goto LABEL_1339;
                                            }
                                            v756 = v1399;
                                            v1554 = v1399;
                                            memset(v1605, 0, 0x68uLL);
                                            v757 = 1;
                                            v758 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18014A050[0])(
                                                     v1297,
                                                     7LL);
                                            if ( !v758
                                              || !((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18014A068[0])(
                                                    v758,
                                                    104LL,
                                                    v1605)
                                              || WORD1(v1605[2]) != 32
                                              || !v1605[3]
                                              || SHIDWORD(v1605[0]) <= 0
                                              || SLODWORD(v1605[1]) <= 0 )
                                            {
                                              v757 = 0;
                                            }
                                            v1424 = v757;
                                            if ( v757 || v615 == 1 )
                                            {
                                              ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18014A150)(
                                                (char *)&v1604[7] + 4,
                                                v756,
                                                HIDWORD(v1554));
                                              ((void (__fastcall *)(char *, _QWORD, _QWORD))off_18014A150)(
                                                (char *)&v1604[9] + 4,
                                                v756,
                                                HIDWORD(v1554));
                                              if ( v615 == 1 )
                                                v1401 = off_18014A028();
                                            }
                                            v465 = v1297;
                                            v1301 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18014A080)(v1297, 1LL);
                                            v759 = 2064;
                                            if ( LODWORD(v1604[0]) )
                                              v759 = 133138;
                                            v1376 = v759;
                                            if ( v1424 )
                                            {
                                              v760 = HIDWORD(v1604[0]);
                                              v761 = v1604[1];
                                              lpModuleName = (LPCWSTR)v1604[4];
                                              memset(v1609, 0, 0x68uLL);
                                              memset(v1612, 0, 0x68uLL);
                                              LODWORD(v762) = 0;
                                              v1333 = 0LL;
                                              v1308 = 0;
                                              v763 = 0;
                                              memset(v1628, 0, 0x2CuLL);
                                              v1614 = 0LL;
                                              v1615 = 0LL;
                                              if ( !v1604[1] )
                                                goto LABEL_1336;
                                              v764 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18014A050[0])(
                                                       v1297,
                                                       7LL);
                                              if ( !v764 )
                                                goto LABEL_1193;
                                              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18014A068[0])(
                                                     v764,
                                                     104LL,
                                                     v1609) )
                                              {
                                                v763 = v1609[1];
                                                v1333 = (char *)v1609[3];
                                                v1308 = HIDWORD(v1609[0]);
                                              }
                                              v762 = ((__int64 (__fastcall *)(LPVOID))off_18014A010[0])(v1297);
                                              if ( !v762 )
                                              {
LABEL_1193:
                                                GetLastError();
                                                goto LABEL_1336;
                                              }
                                              v1555 = 0LL;
                                              v765 = 0;
                                              memset(v1628, 0, 0x2CuLL);
                                              v1628[1] = HIDWORD(v1604[8]) - HIDWORD(v1604[7]);
                                              v1628[2] = LODWORD(v1604[8]) - LODWORD(v1604[9]);
                                              v1628[0] = 40;
                                              v1628[3] = 2097153;
                                              v1286 = (LPVOID)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18014A018[0])(
                                                                v762,
                                                                v1628,
                                                                0LL,
                                                                &v1555,
                                                                0LL,
                                                                0);
                                              if ( !v1286 )
                                              {
                                                v766 = GetLastError();
                                                v765 = v766;
                                                if ( v766 > 0 )
                                                  v765 = (unsigned __int16)v766 | 0x80070000;
                                                v767 = 0;
                                                if ( v765 >= 0 )
                                                  v765 = -2147467259;
                                                goto LABEL_1187;
                                              }
                                              v768 = ((__int64 (__fastcall *)(LPVOID, __int64, _QWORD *))off_18014A068[0])(
                                                       v1286,
                                                       104LL,
                                                       v1612);
                                              v769 = 0LL;
                                              if ( v768 )
                                                v769 = (void *)v1612[3];
                                              LODWORD(v1615) = HIDWORD(v1604[8]) - HIDWORD(v1604[7]);
                                              HIDWORD(v1615) = LODWORD(v1604[9]) - LODWORD(v1604[8]);
                                              v1386 = v769;
                                              ((void (__fastcall *)(__int64, LPVOID))off_18014A078)(v762, v1286);
                                              ((void (__fastcall *)(__int64, __int64))off_18014A080)(v762, 1LL);
                                              v1293 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, LPCWSTR))off_18014A078)(
                                                                            v762,
                                                                            lpModuleName);
                                              v770 = ((__int64 (__fastcall *)(_QWORD))off_18014A070[0])(0LL);
                                              ((void (__fastcall *)(__int64, __int64 *, __int64))off_18014A0E8[0])(
                                                v762,
                                                &v1614,
                                                v770);
                                              ((void (__fastcall *)(__int64, void *, __int64, __int64 *, unsigned int, _QWORD))off_18014A0D8)(
                                                v762,
                                                v761,
                                                0xFFFFFFFFLL,
                                                &v1614,
                                                v1376,
                                                0LL);
                                              if ( v1340 == 1 )
                                              {
                                                if ( v760 )
                                                {
                                                  v771 = ((__int64 (__fastcall *)(__int64))off_18014A118[0])(8LL);
                                                  LOBYTE(v772) = v771;
                                                  v1325 = v771;
LABEL_1167:
                                                  v773 = HIDWORD(v1604[7]);
                                                  v774 = (int)v1604[8];
                                                  v775 = 0;
                                                  v776 = 0;
                                                  if ( SHIDWORD(v1604[7]) < 0 )
                                                  {
                                                    v773 = 0;
                                                    v775 = -HIDWORD(v1604[7]);
                                                  }
                                                  if ( SLODWORD(v1604[8]) < 0 )
                                                  {
                                                    v774 = 0;
                                                    v776 = -LODWORD(v1604[8]);
                                                  }
                                                  v777 = v1615 - v775;
                                                  if ( (int)v1615 - v775 >= v1308 - v773 )
                                                    v777 = v1308 - v773;
                                                  v778 = v763 - v774;
                                                  v779 = HIDWORD(v1615) - v776;
                                                  if ( HIDWORD(v1615) - v776 >= v778 )
                                                    v779 = v778;
                                                  if ( v777 <= 0 || v779 <= 0 )
                                                  {
                                                    v767 = 0;
                                                  }
                                                  else
                                                  {
                                                    v780 = (char *)v1386 + 4 * v775 + 4 * (__int64)(v776 * (int)v1615);
                                                    v781 = &v1333[4 * v773 + 4 * (__int64)(v1308 * v774)];
                                                    v1334 = v781;
                                                    LODWORD(v1380) = 0;
                                                    lpModuleName = (LPCWSTR)(4LL * (int)v1615);
                                                    v1386 = (void *)(4LL * v1308);
                                                    do
                                                    {
                                                      v1309 = 0;
                                                      v782 = 0;
                                                      v783 = (unsigned __int8 *)(v780 + 2);
                                                      v784 = v781 - v780;
                                                      do
                                                      {
                                                        if ( (unsigned __int8)((*v783
                                                                              + *(v783 - 2)
                                                                              + 2 * (unsigned int)*(v783 - 1)) >> 2) != 0xFF )
                                                        {
                                                          v785 = (unsigned __int8)~((*v783
                                                                                   + *(v783 - 2)
                                                                                   + 2 * (unsigned int)*(v783 - 1)) >> 2);
                                                          v783[v784] -= ~((*v783
                                                                         + *(v783 - 2)
                                                                         + 2 * (unsigned int)*(v783 - 1)) >> 2)
                                                                      * (v772 - v783[v784]);
                                                          v786 = v783[v784 - 1];
                                                          v787 = (unsigned __int64)(2155905153LL
                                                                                  * v785
                                                                                  * (BYTE1(v1325) - v786)) >> 32;
                                                          v783[v784 - 1] = v786 + (v787 >> 7 < 0) + (v787 >> 7);
                                                          v788 = v783[v784 - 2];
                                                          v789 = (unsigned __int64)(2155905153LL
                                                                                  * v785
                                                                                  * (BYTE2(v1325) - v788)) >> 32;
                                                          v783[v784 - 2] = v788 + (v789 >> 7 < 0) + (v789 >> 7);
                                                          v782 = v1309;
                                                          v783[v784 + 1] += v785 * (255 - v783[v784 + 1]) / 255;
                                                        }
                                                        ++v782;
                                                        v783 += 4;
                                                        v1309 = v782;
                                                      }
                                                      while ( v782 < v777 );
                                                      v767 = 0;
                                                      v790 = (int)v1380;
                                                      v781 = &v1334[(_QWORD)v1386];
                                                      v780 = &v780[(_QWORD)lpModuleName];
                                                      v1334 = &v1334[(_QWORD)v1386];
                                                      LODWORD(v1380) = (_DWORD)v1380 + 1;
                                                    }
                                                    while ( v790 + 1 < v779 );
                                                  }
                                                  ((void (__fastcall *)(LPVOID))off_18014A038)(v1286);
                                                  if ( v1293 )
                                                    ((void (__fastcall *)(__int64, unsigned __int16 *))off_18014A078)(
                                                      v762,
                                                      v1293);
LABEL_1187:
                                                  ((void (__fastcall *)(__int64))off_18014A030[0])(v762);
                                                  if ( v765 < 0 )
                                                  {
LABEL_1228:
                                                    v465 = v1297;
                                                    LODWORD(v762) = 0;
                                                    goto LABEL_1336;
                                                  }
                                                  v791 = v1604[2];
                                                  v1319 = HIDWORD(v1604[0]);
                                                  lpModuleName = (LPCWSTR)v1604[5];
                                                  memset(v1608, 0, 0x68uLL);
                                                  memset(v1611, 0, 0x68uLL);
                                                  LODWORD(v762) = 0;
                                                  v1335 = 0LL;
                                                  v792 = 0;
                                                  memset(v1627, 0, 0x2CuLL);
                                                  v465 = v1297;
                                                  v1616 = 0LL;
                                                  v1617 = 0LL;
                                                  if ( !v1604[2] )
                                                    goto LABEL_1336;
                                                  v793 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18014A050[0])(
                                                           v1297,
                                                           7LL);
                                                  if ( !v793 )
                                                    goto LABEL_1193;
                                                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18014A068[0])(
                                                         v793,
                                                         104LL,
                                                         v1608) )
                                                  {
                                                    v767 = HIDWORD(v1608[0]);
                                                    v792 = v1608[1];
                                                    v1335 = (char *)v1608[3];
                                                  }
                                                  v762 = ((__int64 (__fastcall *)(LPVOID))off_18014A010[0])(v1297);
                                                  if ( !v762 )
                                                    goto LABEL_1193;
                                                  v794 = 0LL;
                                                  v795 = 0;
                                                  v1556 = 0LL;
                                                  LODWORD(v1347) = 0;
                                                  memset(v1627, 0, 0x2CuLL);
                                                  v1627[1] = HIDWORD(v1604[10]) - HIDWORD(v1604[9]);
                                                  v1627[2] = LODWORD(v1604[10]) - LODWORD(v1604[11]);
                                                  v1627[0] = 40;
                                                  v1627[3] = 2097153;
                                                  v796 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18014A018[0])(
                                                           v762,
                                                           v1627,
                                                           0LL,
                                                           &v1556,
                                                           0LL,
                                                           0);
                                                  v1287 = (LPVOID)v796;
                                                  if ( !v796 )
                                                  {
                                                    v797 = GetLastError();
                                                    v795 = v797;
                                                    if ( v797 > 0 )
                                                      v795 = (unsigned __int16)v797 | 0x80070000;
                                                    if ( v795 >= 0 )
                                                      v795 = -2147467259;
                                                    goto LABEL_1226;
                                                  }
                                                  if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18014A068[0])(
                                                         v796,
                                                         104LL,
                                                         v1611) )
                                                  {
                                                    v794 = v1611[3];
                                                  }
                                                  LODWORD(v1617) = HIDWORD(v1604[10]) - HIDWORD(v1604[9]);
                                                  HIDWORD(v1617) = LODWORD(v1604[11]) - LODWORD(v1604[10]);
                                                  ((void (__fastcall *)(__int64, LPVOID))off_18014A078)(v762, v1287);
                                                  ((void (__fastcall *)(__int64, __int64))off_18014A080)(v762, 1LL);
                                                  v1294 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, LPCWSTR))off_18014A078)(
                                                                                v762,
                                                                                lpModuleName);
                                                  v798 = ((__int64 (__fastcall *)(_QWORD))off_18014A070[0])(0LL);
                                                  ((void (__fastcall *)(__int64, __int64 *, __int64))off_18014A0E8[0])(
                                                    v762,
                                                    &v1616,
                                                    v798);
                                                  ((void (__fastcall *)(__int64, void *, __int64, __int64 *, unsigned int, _QWORD))off_18014A0D8)(
                                                    v762,
                                                    v791,
                                                    0xFFFFFFFFLL,
                                                    &v1616,
                                                    v1376,
                                                    0LL);
                                                  if ( v1340 == 1 )
                                                  {
                                                    if ( !v1319 )
                                                    {
                                                      v1326 = 0xFFFFFF;
LABEL_1207:
                                                      v800 = HIDWORD(v1604[9]);
                                                      v801 = (int)v1604[10];
                                                      v802 = 0;
                                                      v803 = 0;
                                                      if ( SHIDWORD(v1604[9]) < 0 )
                                                      {
                                                        v800 = 0;
                                                        v802 = -HIDWORD(v1604[9]);
                                                      }
                                                      if ( SLODWORD(v1604[10]) < 0 )
                                                      {
                                                        v801 = 0;
                                                        v803 = -LODWORD(v1604[10]);
                                                      }
                                                      v804 = v1617 - v802;
                                                      if ( (int)v1617 - v802 >= v767 - v800 )
                                                        v804 = v767 - v800;
                                                      v805 = HIDWORD(v1617) - v803;
                                                      v806 = v792 - v801;
                                                      if ( HIDWORD(v1617) - v803 >= v806 )
                                                        v805 = v806;
                                                      if ( v804 > 0 && v805 > 0 )
                                                      {
                                                        v807 = v794 + 4 * (v802 + (__int64)((int)v1617 * v803));
                                                        v1310 = 0;
                                                        v808 = &v1335[4 * v800 + 4 * (__int64)(v767 * v801)];
                                                        v1336 = v808;
                                                        v1386 = (void *)(4LL * v767);
                                                        lpModuleName = (LPCWSTR)(4LL * (int)v1617);
                                                        do
                                                        {
                                                          v809 = 0;
                                                          v810 = (unsigned __int8 *)(v807 + 2);
                                                          v811 = &v808[-v807];
                                                          do
                                                          {
                                                            if ( (unsigned __int8)((*v810
                                                                                  + *(v810 - 2)
                                                                                  + 2 * (unsigned int)*(v810 - 1)) >> 2) != 0xFF )
                                                            {
                                                              v812 = (unsigned __int8)~((*v810
                                                                                       + *(v810 - 2)
                                                                                       + 2 * (unsigned int)*(v810 - 1)) >> 2);
                                                              v810[(_QWORD)v811] -= ~((*v810
                                                                                     + *(v810 - 2)
                                                                                     + 2 * (unsigned int)*(v810 - 1)) >> 2)
                                                                                  * (v1341 - v810[(_QWORD)v811]);
                                                              v813 = (unsigned __int8)v811[(_QWORD)v810 - 1];
                                                              v814 = (unsigned __int64)(2155905153LL
                                                                                      * v812
                                                                                      * (BYTE1(v1326) - v813)) >> 32;
                                                              v811[(_QWORD)v810 - 1] = v813
                                                                                     + (v814 >> 7 < 0)
                                                                                     + (v814 >> 7);
                                                              v815 = (unsigned __int8)v811[(_QWORD)v810 - 2];
                                                              v816 = (unsigned __int64)(2155905153LL
                                                                                      * v812
                                                                                      * (BYTE2(v1326) - v815)) >> 32;
                                                              v811[(_QWORD)v810 - 2] = v815
                                                                                     + (v816 >> 7 < 0)
                                                                                     + (v816 >> 7);
                                                              v811[(_QWORD)v810 + 1] += v812
                                                                                      * (255
                                                                                       - (unsigned __int8)v811[(_QWORD)v810 + 1])
                                                                                      / 255;
                                                            }
                                                            v810 += 4;
                                                            ++v809;
                                                          }
                                                          while ( v809 < v804 );
                                                          v817 = v1310;
                                                          v808 = &v1336[(_QWORD)v1386];
                                                          v807 += (__int64)lpModuleName;
                                                          v1336 = &v1336[(_QWORD)v1386];
                                                          ++v1310;
                                                        }
                                                        while ( v817 + 1 < v805 );
                                                        v795 = v1347;
                                                      }
                                                      ((void (__fastcall *)(LPVOID))off_18014A038)(v1287);
                                                      if ( v1294 )
                                                        ((void (__fastcall *)(__int64, unsigned __int16 *))off_18014A078)(
                                                          v762,
                                                          v1294);
LABEL_1226:
                                                      ((void (__fastcall *)(__int64))off_18014A030[0])(v762);
                                                      if ( v795 >= 0 )
                                                      {
                                                        v818 = v1358;
                                                        LODWORD(v762) = 0;
                                                        v465 = v1297;
LABEL_1328:
                                                        ((void (__fastcall *)(LPVOID, _QWORD))off_18014A080)(
                                                          v465,
                                                          v1301);
                                                        goto LABEL_1332;
                                                      }
                                                      goto LABEL_1228;
                                                    }
                                                    v799 = ((__int64 (__fastcall *)(__int64))off_18014A118[0])(8LL);
                                                  }
                                                  else
                                                  {
                                                    v799 = -5723992;
                                                  }
                                                  v1326 = v799;
                                                  v1341 = v799;
                                                  goto LABEL_1207;
                                                }
                                                v772 = 0xFFFFFF;
                                              }
                                              else
                                              {
                                                v772 = -5723992;
                                              }
                                              v1325 = v772;
                                              goto LABEL_1167;
                                            }
                                            if ( HIDWORD(v1604[0]) || (v819 = -64, v615 == 1) )
                                              v819 = -1;
                                            BYTE2(v1354) = v819;
                                            LOWORD(v1354) = 0;
                                            v1445 = 0uLL;
                                            v1433 = 0uLL;
                                            HIBYTE(v1354) = 1;
                                            v1358 = (LPVOID)((__int64 (__fastcall *)(LPVOID))off_18014A010[0])(v1297);
                                            if ( !v1358 )
                                            {
                                              GetLastError();
                                              LODWORD(v762) = 0;
LABEL_1336:
                                              if ( v1401 )
                                                ((void (__fastcall *)(__int64))off_18014A038)(v1401);
LABEL_1339:
                                              if ( v1604[1] )
                                              {
                                                v888 = -1LL;
                                                do
                                                  v62 = *((_WORD *)v1604[1] + ++v888) == 0;
                                                while ( !v62 );
                                                memset(v1604[1], 0, 2 * v888 + 2);
                                                operator delete(v1604[1]);
                                                v1604[1] = 0LL;
                                              }
                                              if ( v1604[2] )
                                              {
                                                v889 = -1LL;
                                                do
                                                  v62 = *((_WORD *)v1604[2] + ++v889) == 0;
                                                while ( !v62 );
                                                memset(v1604[2], 0, 2 * v889 + 2);
                                                operator delete(v1604[2]);
                                                v1604[2] = 0LL;
                                              }
                                              if ( v1604[3] )
                                              {
                                                v890 = -1LL;
                                                do
                                                  v62 = *((_WORD *)v1604[3] + ++v890) == 0;
                                                while ( !v62 );
                                                memset(v1604[3], 0, 2 * v890 + 2);
                                                operator delete(v1604[3]);
                                                v1604[3] = 0LL;
                                              }
                                              if ( v1604[4] )
                                              {
                                                off_18014A038();
                                                v1604[4] = 0LL;
                                              }
                                              if ( v1604[5] )
                                              {
                                                off_18014A038();
                                                v1604[5] = 0LL;
                                              }
                                              if ( v1604[6] )
                                              {
                                                off_18014A038();
                                                v1604[6] = 0LL;
                                              }
                                              v891 = 1LL;
                                              while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
                                                ;
                                              v892 = dword_18014BF38;
                                              v893 = (HMODULE *)&unk_18014C330;
                                              v5 = 4LL;
                                              if ( dword_18014BF38 > 0 )
                                              {
                                                --dword_18014BF38;
                                                if ( v892 == 1 )
                                                {
                                                  v894 = 4LL;
                                                  do
                                                  {
                                                    if ( *v893 )
                                                      FreeLibrary(*v893);
                                                    v893 += 3;
                                                    --v894;
                                                  }
                                                  while ( v894 );
                                                  v893 = (HMODULE *)&unk_18014C330;
                                                  memset(&unk_18014C330, 0, 0x60uLL);
                                                  memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
                                                  v465 = v1297;
                                                }
                                              }
                                              _InterlockedExchange(&dword_18014C670, 0);
                                              v895 = dword_18014BE20;
                                              v1342 = dword_18014BE20;
                                              v896 = ((__int64 (__fastcall *)(__int64))off_18014A098[0])(v891);
                                              v1638[0] = 0;
                                              v897 = v896 - qword_18014BF30;
                                              v1339 = v896 - qword_18014BF30;
                                              memset(&v1638[2], 0, 0x38uLL);
                                              while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
                                                ;
                                              v898 = dword_18014BF38;
                                              if ( dword_18014BF38 )
                                                goto LABEL_1416;
                                              v1311 = 0;
                                              v1503 = 0LL;
                                              v1562 = 0LL;
                                              v899 = (const WCHAR *)operator new(0x338uLL);
                                              v1387 = v899;
                                              if ( v899 )
                                              {
                                                v900 = 0;
                                                v1364 = 0;
                                                v901 = -1;
                                                v1369 = 0;
                                                v902 = 0;
                                                v903 = (char *)v899 + 7;
                                                v904 = 0;
                                                v905 = (char *)&unk_180103702;
                                                v906 = 103LL;
                                                do
                                                {
                                                  v907 = (unsigned __int8)*(v905 - 1);
                                                  v908 = (unsigned __int8)*(v905 - 2);
                                                  v909 = (unsigned __int8)v905[2];
                                                  v905 += 8;
                                                  v910 = (unsigned __int8)*(v905 - 7) | (((unsigned __int8)*(v905 - 8) | ((v907 | (v908 << 8)) << 8)) << 8);
                                                  v911 = v910 ^ v904;
                                                  v912 = (unsigned __int8)*(v905 - 3) | (((unsigned __int8)*(v905 - 4) | (((unsigned __int8)*(v905 - 5) | (v909 << 8)) << 8)) << 8);
                                                  v913 = v911 ^ v912 ^ v902 ^ 0xAC987321;
                                                  v914 = (__ROL4__(v913, 10) + 4991 * __ROL4__(v913 + 1419157410, 5)) ^ v911;
                                                  v915 = (43881 * __ROR4__(v914 + 133239679, 9) - __ROL4__(v914, 2)) ^ v913;
                                                  v916 = (24670 * v915 - (v915 >> 13) - 123127970) ^ v914;
                                                  v917 = (2033 * __ROL4__(v916 ^ 0xAB69, 6) - __ROL4__(v916, 2)) ^ v915;
                                                  v918 = (133239679 - (v917 ^ 0xAB69605E)) ^ v916;
                                                  v919 = (43881 * (v918 ^ 0x137F)) ^ __ROR4__(v918, 6) ^ v917;
                                                  v920 = (__ROL4__(v919, 2) + 24670 * __ROR4__(v919 + 133239679, 15)) ^ v918;
                                                  v921 = (2033 * __ROR4__(v920 + 1419157410, 14) - __ROL4__(v920, 8)) ^ v919;
                                                  v922 = __ROR4__(v921, 10) ^ (4991 * __ROR4__(v921 ^ 0xAB69605E, 12)) ^ v920;
                                                  v923 = (v922 >> 10) ^ (43881 * (v922 ^ 0x7F1)) ^ v921;
                                                  v924 = (2033 * (__ROR4__(~v923, 5) + 24670)) ^ v922;
                                                  v925 = v923 ^ (v924 - 2033) ^ 0xAB69605E;
                                                  v926 = ((v925 >> 2)
                                                        + 4991 * __ROL4__(v923 ^ (v924 - 2033) ^ 0xAB6967AF, 2)) ^ v924;
                                                  v927 = (__ROL4__(v926, 7) + 43881 * __ROR4__(v926 - 133239679, 6)) ^ v925;
                                                  v928 = (24670 * (v927 ^ 0x137F) + __ROR4__(v927, 9)) ^ v926;
                                                  v929 = (__ROL4__(v928, 7) + 2033 * __ROL4__(v928 ^ 0xAB69, 5)) ^ v927;
                                                  v930 = v928 ^ v929 ^ 0xAC987321;
                                                  v931 = (4991 * (__ROR4__(v930, 3) - 43881)) ^ v929;
                                                  v932 = (24670 * __ROR4__(v931 - 133239679, 1) - __ROR4__(v931, 6)) ^ v930;
                                                  v933 = (__ROL4__(v932, 14) + 2033 * __ROL4__(v932 - 1419157410, 3)) ^ v931;
                                                  v934 = (4991 * __ROL4__(v933 - 1419157410, 15) - __ROR4__(v933, 14)) ^ v932;
                                                  v903 += 8;
                                                  v935 = (v934 >> 3) ^ (43881 * (v934 ^ 0x605E)) ^ v933;
                                                  v1364 = v901 ^ v935;
                                                  v901 = v912;
                                                  v936 = v900 ^ __ROL4__(v935, 2) ^ (24670
                                                                                   * __ROL4__(v935 ^ 0x7F1137F, 4));
                                                  v900 = v910;
                                                  v1369 = v936 ^ v934;
                                                  *(v903 - 12) = v936 ^ v934;
                                                  v1369 = __ROR4__(v1369, 8);
                                                  *(v903 - 8) = v1364;
                                                  v1364 = __ROR4__(v1364, 8);
                                                  *(v903 - 13) = v1369;
                                                  v1369 = __ROR4__(v1369, 8);
                                                  *(v903 - 9) = v1364;
                                                  v1364 = __ROR4__(v1364, 8);
                                                  *(v903 - 14) = v1369;
                                                  v1369 = __ROR4__(v1369, 8);
                                                  *(v903 - 10) = v1364;
                                                  v1364 = __ROR4__(v1364, 8);
                                                  *(v903 - 15) = v1369;
                                                  *(v903 - 11) = v1364;
                                                  v904 = __ROR4__(v1369, 8);
                                                  v902 = __ROR4__(v1364, 8);
                                                  v1369 = v904;
                                                  v1364 = v902;
                                                  --v906;
                                                }
                                                while ( v906 );
                                                nn = v1387;
                                                v938 = 0LL;
                                                v939 = 0;
                                                v940 = 0LL;
                                                v941 = 0LL;
                                                do
                                                {
                                                  v940 = _mm_xor_si128(
                                                           _mm_loadu_si128((const __m128i *)((char *)v1387 + v938)),
                                                           v940);
                                                  v942 = _mm_loadu_si128((const __m128i *)((char *)v1387 + v938 + 16));
                                                  v938 += 32LL;
                                                  v943 = _mm_xor_si128(v942, v941);
                                                  v941 = v943;
                                                }
                                                while ( v938 < 0x320 );
                                                v944 = _mm_xor_si128(v940, v943);
                                                v945 = _mm_xor_si128(v944, _mm_srli_si128(v944, 8));
                                                v946 = _mm_xor_si128(v945, _mm_srli_si128(v945, 4));
                                                v947 = _mm_xor_si128(v946, _mm_srli_si128(v946, 2));
                                                for ( mm = _mm_cvtsi128_si32(_mm_xor_si128(v947, _mm_srli_si128(v947, 1)));
                                                      v938 < 0x338;
                                                      ++v938 )
                                                {
                                                  mm ^= *((_BYTE *)v1387 + v938);
                                                }
                                                if ( mm == 64LL )
                                                {
                                                  v1503 = (LPVOID)v1387;
                                                  v893 = (HMODULE *)&unk_18014C330;
                                                  v1562 = 824LL;
                                                  *((_BYTE *)v1387 + 823) = 0;
                                                  memset(&unk_18014C330, 0, 0x60uLL);
                                                  if ( *(_BYTE *)nn )
                                                  {
                                                    v949 = 0;
                                                    while ( 1 )
                                                    {
                                                      v950 = nn;
                                                      v951 = -1LL;
                                                      do
                                                        v62 = nn[++v951] == 0;
                                                      while ( !v62 );
                                                      v952 = &nn[v951];
                                                      v953 = (char *)&unk_18014C330 + 24 * v949;
                                                      if ( !GetModuleHandleExW(0, v950, (HMODULE *)v953) )
                                                        break;
                                                      v939 = 0;
                                                      if ( **(_WORD **)v953 == 23117 )
                                                      {
                                                        v954 = *(int *)(*(_QWORD *)v953 + 60LL);
                                                        if ( (unsigned int)v954 < 0x10000000 )
                                                        {
                                                          v955 = *(_QWORD *)v953 + v954;
                                                          if ( v955 >= *(_QWORD *)v953 )
                                                          {
                                                            if ( *(_DWORD *)v955 == 17744 )
                                                            {
                                                              if ( ((*(_WORD *)(v955 + 24) - 267) & 0xFEFF) != 0 )
                                                              {
                                                                v939 = -1073741811;
                                                              }
                                                              else
                                                              {
                                                                *(_QWORD *)(v953 + 12) = *(_QWORD *)(v955 + 136);
                                                                *((_DWORD *)v953 + 2) = *(_DWORD *)(v955 + 80);
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v939 = -1073741701;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            v939 = -1073741701;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v939 = -1073741701;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v939 = -1073741701;
                                                      }
                                                      v956 = *(_DWORD *)(v952 + 1);
                                                      v957 = 0;
                                                      for ( nn = v952 + 3; v957 < v956; v1311 = v960 + 1 )
                                                      {
                                                        v1522 = 0LL;
                                                        v958 = nn;
                                                        v959 = -1LL;
                                                        do
                                                          ++v959;
                                                        while ( *((_BYTE *)nn + v959) );
                                                        nn = (LPCWSTR)((char *)nn + v959 + 1);
                                                        if ( v939 < 0 )
                                                        {
                                                          v960 = v1311;
                                                        }
                                                        else
                                                        {
                                                          v939 = WARBIRD::GetFunctionAddress(v958, 0LL, v953, &v1522);
                                                          if ( v939 < 0 )
                                                            goto LABEL_1402;
                                                          v960 = v1311;
                                                          off_18014A000[v1311] = v1522;
                                                        }
                                                        ++v957;
                                                      }
                                                      ++v949;
                                                      if ( !*(_BYTE *)nn )
                                                        goto LABEL_1402;
                                                    }
                                                    v939 = -1073741702;
LABEL_1402:
                                                    v893 = (HMODULE *)&unk_18014C330;
                                                  }
                                                  v895 = v1342;
                                                  v5 = 4LL;
                                                  v897 = v1339;
                                                  goto LABEL_1404;
                                                }
                                                operator delete((void *)v1387);
                                                v897 = v1339;
                                                v5 = 4LL;
                                                v895 = v1342;
                                              }
                                              v939 = -1073741702;
                                              v893 = (HMODULE *)&unk_18014C330;
LABEL_1404:
                                              if ( v1503 )
                                              {
                                                v961 = GetProcessHeap();
                                                HeapFree(v961, 0, v1503);
                                              }
                                              if ( v939 < 0 )
                                              {
                                                v962 = 4LL;
                                                do
                                                {
                                                  if ( *v893 )
                                                    FreeLibrary(*v893);
                                                  v893 += 3;
                                                  --v962;
                                                }
                                                while ( v962 );
                                                v893 = (HMODULE *)&unk_18014C330;
                                                memset(&unk_18014C330, 0, 0x60uLL);
                                                memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
                                                v465 = v1297;
                                                LODWORD(v762) = 0;
                                                goto LABEL_1417;
                                              }
                                              v898 = dword_18014BF38;
                                              LODWORD(v762) = 0;
                                              v465 = v1297;
LABEL_1416:
                                              dword_18014BF38 = v898 + 1;
LABEL_1417:
                                              _InterlockedExchange(&dword_18014C670, v762);
                                              v1638[2] = v897;
                                              v1638[0] = 1;
                                              v1638[6] = -1721306479;
                                              v1638[4] = 1;
                                              v1638[10] = 1;
                                              v1638[8] = 1;
                                              v1638[14] = v895;
                                              v1638[12] = 1;
                                              ((void (__fastcall *)(_QWORD, __int64, __int64, _DWORD *))qword_18014A0D0)(
                                                0LL,
                                                8225LL,
                                                4LL,
                                                v1638);
                                              while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
                                                ;
                                              v963 = dword_18014BF38;
                                              if ( dword_18014BF38 > 0 )
                                              {
                                                --dword_18014BF38;
                                                if ( v963 == 1 )
                                                {
                                                  v964 = 4LL;
                                                  do
                                                  {
                                                    if ( *v893 )
                                                      FreeLibrary(*v893);
                                                    v893 += 3;
                                                    --v964;
                                                  }
                                                  while ( v964 );
                                                  memset(&unk_18014C330, 0, 0x60uLL);
                                                  memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
                                                  v465 = v1297;
                                                }
                                              }
                                              _InterlockedExchange(&dword_18014C670, 0);
                                              ((void (__fastcall *)(_QWORD, LPVOID))off_18014A160[0])(0LL, v465);
LABEL_792:
                                              ATL::CHandle::Close((ATL::CHandle *)&v1563);
                                              if ( !v1385 )
                                                goto LABEL_461;
                                              v1381 = 0;
                                              v1370 = 0LL;
                                              v466 = 0LL;
                                              v1371 = 0LL;
                                              v467 = 0LL;
                                              v1431 = 0LL;
                                              v1432 = 0LL;
                                              v1564 = &unk_18014B120;
                                              v1523 = 160LL;
                                              v468 = GetProcessHeap();
                                              v469 = (unsigned __int16 *)HeapAlloc(v468, 8u, 0xA0uLL);
                                              v470 = v469;
                                              if ( !v469 )
                                                goto LABEL_1439;
                                              memcpy_0(v469, v1564, v1523);
                                              v471 = (unsigned int)v1523;
                                              v1565 = &unk_18014B060;
                                              v466 = v470;
                                              v1291 = v470;
                                              v1524 = 8LL;
                                              v472 = GetProcessHeap();
                                              v473 = HeapAlloc(v472, 8u, 8uLL);
                                              v474 = v473;
                                              if ( !v473 )
                                              {
LABEL_1439:
                                                v969 = v1371;
                                                v1370 = 0LL;
                                                if ( v1371 )
                                                {
                                                  v970 = GetProcessHeap();
                                                  HeapFree(v970, 0, v969);
                                                  v1371 = 0LL;
                                                }
                                                v971 = v1432;
                                                v1431 = 0LL;
                                                if ( v1432 )
                                                {
                                                  v972 = GetProcessHeap();
                                                  HeapFree(v972, 0, v971);
                                                  v1432 = 0LL;
                                                }
                                                if ( v466 )
                                                {
                                                  v973 = GetProcessHeap();
                                                  HeapFree(v973, 0, v466);
                                                }
                                                if ( v467 )
                                                {
                                                  v974 = GetProcessHeap();
                                                  HeapFree(v974, 0, v467);
                                                }
                                                v5 = 4LL;
                                                goto LABEL_461;
                                              }
                                              memcpy_0(v473, v1565, v1524);
                                              v475 = v1524;
                                              v467 = v474;
                                              v1331 = v474;
                                              v1566 = __rdtsc();
                                              v1379 = 0;
                                              if ( (int)RtlUIntAdd(4LL, 4LL, &v1484) < 0 )
                                                goto LABEL_1438;
                                              v1413 = v1484;
                                              if ( (int)RtlUIntAdd(0LL, v1484, &v1379) < 0 )
                                                goto LABEL_1438;
                                              if ( (int)RtlUIntAdd(4LL, (unsigned int)v471, &v1485) < 0 )
                                                goto LABEL_1438;
                                              v1413 = v1485;
                                              if ( (int)RtlUIntAdd(v1379, v1485, &v1379) < 0 )
                                                goto LABEL_1438;
                                              if ( (int)RtlUIntAdd(4LL, v475, &v1486) < 0 )
                                                goto LABEL_1438;
                                              v1413 = v1486;
                                              if ( (int)RtlUIntAdd(v1379, v1486, &v1379) < 0 )
                                                goto LABEL_1438;
                                              if ( (int)RtlUIntAdd(4LL, 8LL, &v1487) < 0 )
                                                goto LABEL_1438;
                                              v1413 = v1487;
                                              if ( (int)RtlUIntAdd(v1379, v1487, &v1379) < 0 )
                                                goto LABEL_1438;
                                              HIDWORD(v1370) = v1379;
                                              v476 = v1379;
                                              v477 = GetProcessHeap();
                                              v478 = HeapAlloc(v477, 8u, v476);
                                              v479 = v478;
                                              if ( !v478 )
                                                goto LABEL_1438;
                                              v1371 = v478;
                                              LODWORD(v1370) = 0;
                                              v1488 = 4;
                                              if ( (int)RtlULongLongAdd(v478, 4LL, &v1601) < 0 )
                                                goto LABEL_1438;
                                              if ( v479 + 2 > (_DWORD *)((char *)v479 + HIDWORD(v1370)) )
                                                goto LABEL_1438;
                                              v482 = v1601;
                                              *v479 = v480;
                                              *v482 = v1488;
                                              v483 = v1370 + 1;
                                              LODWORD(v1370) = v1370 + 1;
                                              if ( !(_DWORD)v471 )
                                                goto LABEL_1438;
                                              if ( v1371 == v481 )
                                              {
                                                if ( (int)RtlUIntAdd(
                                                            (unsigned int)((_DWORD)v481 + 4),
                                                            (unsigned int)v471,
                                                            &v1489) < 0 )
                                                  goto LABEL_1472;
                                                v1491 = v1489;
                                                if ( (int)RtlUIntAdd(HIDWORD(v1370), v1489, (char *)&v1370 + 4) < 0 )
                                                  goto LABEL_1438;
                                                v484 = v1370 + 1;
                                              }
                                              else
                                              {
                                                v965 = v1371;
                                                v1504 = v1371;
                                                if ( v483 )
                                                {
                                                  while ( (int)RtlUIntAdd(4LL, (unsigned int)*v965, &v1490) >= 0 )
                                                  {
                                                    v1491 = v1490;
                                                    if ( (int)RtlULongLongAdd(v965, v1490, &v1504) < 0 )
                                                      goto LABEL_1438;
                                                    v965 = v1504;
                                                    if ( v967 + 1 >= v966 )
                                                      goto LABEL_1431;
                                                  }
                                                  goto LABEL_1472;
                                                }
LABEL_1431:
                                                if ( (int)RtlULongLongAdd(v965, 4LL, &v1602) < 0
                                                  || (char *)v965 + v471 + 4 > (char *)v1371 + HIDWORD(v1370) )
                                                {
                                                  goto LABEL_1438;
                                                }
                                                v968 = v1602;
                                                *v965 = v471;
                                                memcpy_0(v968, v470, v471);
                                                v484 = v1370 + 1;
                                              }
                                              LODWORD(v1370) = v484;
                                              if ( v475 )
                                              {
                                                if ( v1371 )
                                                {
                                                  v975 = (unsigned int *)v1371;
                                                  v1505 = (unsigned int *)v1371;
                                                  if ( v484 )
                                                  {
                                                    while ( (int)RtlUIntAdd(4LL, *v975, &v1493) >= 0 )
                                                    {
                                                      v1511 = v1493;
                                                      if ( (int)RtlULongLongAdd(v976, v1493, &v1505) < 0 )
                                                        goto LABEL_1438;
                                                      v975 = v1505;
                                                      if ( v977 + 1 >= v484 )
                                                        goto LABEL_1452;
                                                    }
                                                    goto LABEL_1472;
                                                  }
LABEL_1452:
                                                  if ( (int)RtlULongLongAdd(v975, 4LL, v1600) < 0
                                                    || (char *)v978 + v475 + 4 > (char *)v1371 + HIDWORD(v1370) )
                                                  {
                                                    goto LABEL_1438;
                                                  }
                                                  v979 = v1600[0];
                                                  *v978 = v475;
                                                  memcpy_0(v979, v474, v475);
                                                }
                                                else
                                                {
                                                  if ( (int)RtlUIntAdd(4LL, v475, &v1492) < 0 )
                                                    goto LABEL_1472;
                                                  v1511 = v1492;
                                                  if ( (int)RtlUIntAdd(HIDWORD(v1370), v1492, (char *)&v1370 + 4) < 0 )
                                                    goto LABEL_1438;
                                                }
                                                v980 = v1370 + 1;
                                                LODWORD(v1370) = v1370 + 1;
                                                v1567 = v1566;
                                                if ( v1371 )
                                                {
                                                  v982 = (unsigned int *)v1371;
                                                  v981 = 0LL;
                                                  v1506 = (unsigned int *)v1371;
                                                  if ( v980 )
                                                  {
                                                    while ( (int)RtlUIntAdd(4LL, *v982, &v1518) >= 0 )
                                                    {
                                                      v1517 = v1518;
                                                      if ( (int)RtlULongLongAdd(v983, v1518, &v1506) < 0 )
                                                        break;
                                                      v982 = v1506;
                                                      if ( v984 + 1 >= v980 )
                                                        goto LABEL_1463;
                                                    }
                                                    goto LABEL_1472;
                                                  }
LABEL_1463:
                                                  if ( (int)RtlULongLongAdd(v982, 4LL, v1603) < 0
                                                    || v985 + 3 > (_DWORD *)((char *)v1371 + HIDWORD(v1370)) )
                                                  {
LABEL_1472:
                                                    v466 = v470;
                                                    goto LABEL_1439;
                                                  }
                                                  v986 = (unsigned __int64 *)v1603[0];
                                                  *v985 = 8;
                                                  *v986 = v1567;
                                                  LODWORD(v1370) = v1370 + 1;
                                                }
                                                else
                                                {
                                                  if ( (int)RtlUIntAdd(4LL, 8LL, &v1519) < 0 )
                                                    goto LABEL_1472;
                                                  v1517 = v1519;
                                                  if ( (int)RtlUIntAdd(HIDWORD(v1370), v1519, (char *)&v1370 + 4) < 0 )
                                                    goto LABEL_1438;
                                                  LODWORD(v1370) = v1370 + 1;
                                                  v981 = 0LL;
                                                }
                                                if ( (int)RtlUIntAdd(4LL, 4LL, &v1516) >= 0 )
                                                {
                                                  v988 = v1516;
                                                  v1510 = v1516;
                                                  v1425 = v1516;
                                                  if ( (int)RtlUIntAdd(v987, 8LL, &v1515) >= 0 )
                                                  {
                                                    v1510 = v1515;
                                                    if ( (int)RtlUIntAdd(v988, v1515, &v1425) >= 0 )
                                                    {
                                                      v1355 = 0LL;
                                                      v1378 = 0;
                                                      v989 = 0LL;
                                                      v1289 = 0LL;
                                                      v990 = 0LL;
                                                      v1322 = 0LL;
                                                      v991 = 0;
                                                      v1394 = 0;
                                                      v1455 = 0LL;
                                                      v1298 = 0LL;
                                                      v1347 = 0LL;
                                                      v1525 = __rdtsc();
                                                      v1396 = 8;
                                                      v992 = RtlUIntAdd(8LL, HIDWORD(v1370), &v1396);
                                                      if ( v992 >= 0 )
                                                      {
                                                        v995 = (v1396 + 7) & 0xFFFFFFF8;
                                                        if ( v995 >= v1396 )
                                                        {
                                                          v1396 = (v1396 + 7) & 0xFFFFFFF8;
                                                          v996 = v995;
                                                          v997 = GetProcessHeap();
                                                          v998 = HeapAlloc(v997, 8u, v996);
                                                          if ( v998 )
                                                          {
                                                            *v998 = v1370;
                                                            v1452 = v998;
                                                            v992 = RtlULongLongAdd(v998, 4LL, &v1452);
                                                            if ( v992 >= 0 )
                                                            {
                                                              v1000 = v1452;
                                                              *(_DWORD *)v1452 = HIDWORD(v1370);
                                                              v992 = RtlULongLongAdd(v1000, v999, &v1452);
                                                              if ( v992 >= 0 )
                                                              {
                                                                *(_QWORD *)((char *)v998 + v1396 - 8) = v1525;
                                                                memcpy_0(v1452, v1371, HIDWORD(v1370));
                                                                v991 = v1396;
                                                                v993 = 0LL;
                                                                v994 = 0LL;
                                                                v1355 = v998;
                                                                goto LABEL_1481;
                                                              }
                                                            }
                                                            v1001 = GetProcessHeap();
                                                            HeapFree(v1001, 0, v998);
                                                          }
                                                          else
                                                          {
                                                            v992 = -1073741801;
                                                          }
                                                          v994 = 0LL;
                                                          v993 = 0LL;
                                                        }
                                                        else
                                                        {
                                                          v992 = -1073741675;
                                                        }
                                                      }
                                                      v998 = 0LL;
LABEL_1481:
                                                      v1002 = v992 | 0x10000000;
                                                      if ( v1002 < 0 )
                                                      {
LABEL_1788:
                                                        if ( v998 )
                                                        {
                                                          v1252 = GetProcessHeap();
                                                          HeapFree(v1252, 0, v998);
                                                          v993 = v1298;
                                                        }
                                                        v1253 = v1455;
                                                        if ( v1455 )
                                                        {
                                                          v1254 = (void *)*((_QWORD *)v1455 + 1);
                                                          if ( v1254 )
                                                          {
                                                            v1255 = GetProcessHeap();
                                                            HeapFree(v1255, 0, v1254);
                                                            v1253[1] = 0LL;
                                                          }
                                                          v1256 = (void *)v1253[3];
                                                          if ( v1256 )
                                                          {
                                                            v1257 = GetProcessHeap();
                                                            HeapFree(v1257, 0, v1256);
                                                            v1253[3] = 0LL;
                                                          }
                                                          v1258 = (void *)v1253[5];
                                                          if ( v1258 )
                                                          {
                                                            v1259 = GetProcessHeap();
                                                            HeapFree(v1259, 0, v1258);
                                                            v1253[5] = 0LL;
                                                          }
                                                          v1260 = GetProcessHeap();
                                                          HeapFree(v1260, 0, v1253);
                                                          v989 = v1289;
                                                          v993 = v1298;
                                                          v1455 = 0LL;
                                                        }
                                                        if ( v993 )
                                                        {
                                                          v1261 = GetProcessHeap();
                                                          HeapFree(v1261, 0, v1298);
                                                        }
                                                        if ( v981 )
                                                        {
                                                          v1262 = GetProcessHeap();
                                                          HeapFree(v1262, 0, v981);
                                                        }
                                                        if ( v989 )
                                                        {
                                                          v1263 = (void *)v989[1];
                                                          if ( v1263 )
                                                          {
                                                            v1264 = GetProcessHeap();
                                                            HeapFree(v1264, 0, v1263);
                                                            v989[1] = 0LL;
                                                          }
                                                          v1267 = (void *)v989[3];
                                                          if ( v1267 )
                                                          {
                                                            v1268 = GetProcessHeap();
                                                            HeapFree(v1268, 0, v1267);
                                                            v989[3] = 0LL;
                                                          }
                                                          v1269 = (void *)v989[5];
                                                          if ( v1269 )
                                                          {
                                                            v1270 = GetProcessHeap();
                                                            HeapFree(v1270, 0, v1269);
                                                            v989[5] = 0LL;
                                                          }
                                                          v1271 = GetProcessHeap();
                                                          HeapFree(v1271, 0, v989);
                                                        }
                                                        if ( v990 )
                                                        {
                                                          v1272 = GetProcessHeap();
                                                          HeapFree(v1272, 0, v990);
                                                        }
                                                        if ( v1002 >= 0 )
                                                        {
                                                          if ( (_DWORD)v1431 )
                                                          {
                                                            v1273 = (unsigned int *)v1432;
                                                            if ( v1432 )
                                                            {
                                                              v1508 = v1432;
                                                              if ( (int)RtlULongLongAdd(v1432, 4LL, &v1508) >= 0 )
                                                              {
                                                                v1277 = v1508;
                                                                v1559 = v1276;
                                                                if ( !v1276 )
                                                                  v1277 = 0LL;
                                                                v1508 = v1277;
                                                                v1600[1] = v1277;
                                                                if ( v1276 == v1274 )
                                                                {
                                                                  v1381 = *v1277;
                                                                  if ( v1381 >= 0 && v1275 > 1 )
                                                                  {
                                                                    for ( i1 = v1273;
                                                                          (int)RtlULongLongAdd(v1273, 4LL, &i1) >= 0
                                                                       && (int)RtlULongLongAdd(i1, *v1273, &i1) >= 0;
                                                                          v1273 = i1 )
                                                                    {
                                                                      if ( v1278 != -1 )
                                                                      {
                                                                        v1279 = *i1;
                                                                        if ( (int)RtlULongLongAdd(i1, 4LL, &i1) >= 0 )
                                                                        {
                                                                          v1280 = i1;
                                                                          v1580 = v1279;
                                                                          if ( !v1279 )
                                                                            v1280 = 0LL;
                                                                          i1 = v1280;
                                                                          v1600[2] = v1280;
                                                                          if ( v1279 == 8 )
                                                                            v1603[1] = *(_QWORD *)v1280;
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
                                                        v466 = v1291;
                                                        v467 = v1331;
                                                        goto LABEL_1439;
                                                      }
                                                      v1003 = (unsigned __int8 *)v1355;
                                                      v1004 = v994;
                                                      v1569 = (__int64 *)v994;
                                                      v1570 = (__int64)v994;
                                                      v1571 = v994;
                                                      v1572 = (__int64)v994;
                                                      v1507 = v994;
                                                      v1568 = v994;
                                                      v1387 = v994;
                                                      if ( !v1355 )
                                                      {
                                                        v1005 = -1073741811;
                                                        goto LABEL_1541;
                                                      }
                                                      v1006 = v991;
                                                      if ( v991 )
                                                      {
                                                        v1358 = operator new(v991 + 8LL);
                                                        v1007 = (char *)v1358;
                                                        if ( v1358 )
                                                        {
                                                          v1008 = 0;
                                                          v1343 = 0;
                                                          v1009 = 0LL;
                                                          if ( v991 >= 0x20uLL )
                                                          {
                                                            v1010 = 0LL;
                                                            v1011 = 0LL;
                                                            do
                                                            {
                                                              v1010 = _mm_xor_si128(
                                                                        _mm_loadu_si128((const __m128i *)&v1003[v1009]),
                                                                        v1010);
                                                              v1012 = _mm_loadu_si128((const __m128i *)&v1003[v1009 + 16]);
                                                              v1009 += 32LL;
                                                              v1013 = _mm_xor_si128(v1012, v1011);
                                                              v1011 = v1013;
                                                            }
                                                            while ( v1009 < (v991 & 0xFFFFFFE0) );
                                                            v1014 = _mm_xor_si128(v1013, v1010);
                                                            v1015 = _mm_xor_si128(v1014, _mm_srli_si128(v1014, 8));
                                                            v1016 = _mm_xor_si128(v1015, _mm_srli_si128(v1015, 4));
                                                            v1017 = _mm_xor_si128(v1016, _mm_srli_si128(v1016, 2));
                                                            v1008 = _mm_cvtsi128_si32(_mm_xor_si128(v1017, _mm_srli_si128(v1017, 1)));
                                                            v1343 = v1008;
                                                          }
                                                          if ( v1009 < v991 )
                                                          {
                                                            do
                                                              v1008 ^= v1003[v1009++];
                                                            while ( v1009 < v991 );
                                                            v1343 = v1008;
                                                          }
                                                          v1018 = v1003;
                                                          v1019 = -1;
                                                          v1351 = -1;
                                                          v1020 = 0;
                                                          v1021 = v1358;
                                                          v1357 = 0;
                                                          v1022 = 0;
                                                          v1023 = v991 & 7;
                                                          if ( (v991 & 7) != 0 )
                                                          {
                                                            v1024 = 0;
                                                            v1025 = 56;
                                                            do
                                                            {
                                                              v1026 = *v1018;
                                                              if ( v1024 >= 4 )
                                                                v1022 |= v1026 << v1025;
                                                              else
                                                                LODWORD(v990) = (v1026 << (v1025 - 32)) | (unsigned int)v990;
                                                              ++v1024;
                                                              v1025 -= 8;
                                                              ++v1018;
                                                            }
                                                            while ( v1024 < v1023 );
                                                            v1020 = (unsigned int)v990 ^ 0xB17A307A;
                                                            v1027 = v1022 ^ 0x42F6B18D;
                                                            v1357 = (unsigned int)v990 ^ 0xB17A307A;
                                                            v1028 = 0;
                                                            v1351 = v1022 ^ 0x42F6B18D;
                                                            if ( (v991 & 7) != 0 )
                                                            {
                                                              do
                                                              {
                                                                if ( v1028 >= 4 )
                                                                {
                                                                  v1027 = __ROL4__(v1027, 8);
                                                                  *v1021 = v1027;
                                                                }
                                                                else
                                                                {
                                                                  v1020 = __ROL4__(v1020, 8);
                                                                  *v1021 = v1020;
                                                                }
                                                                ++v1028;
                                                                ++v1021;
                                                              }
                                                              while ( v1028 < v1023 );
                                                              v1020 = v1357;
                                                              v1027 = v1351;
                                                            }
                                                            v1029 = v1023 - 4;
                                                            if ( v1023 - 4 <= 0 )
                                                            {
                                                              v1351 = 0;
                                                              v1019 = 0;
                                                              if ( v1029 < 0 )
                                                              {
                                                                v1020 = v1020 >> (-8 * v1029) << (-8 * v1029);
                                                                v1357 = v1020;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v1019 = v1027 >> (8 * (4 - v1029)) << (8 * (4 - v1029));
                                                              v1351 = v1019;
                                                            }
                                                            v1007 = (char *)v1358;
                                                            v1008 = v1343;
                                                          }
                                                          v1030 = (unsigned __int64)v991 >> 3;
                                                          if ( v1006 >> 3 )
                                                          {
                                                            v1031 = v1021 + 7;
                                                            v1032 = v1018 + 2;
                                                            do
                                                            {
                                                              v1033 = *(v1032 - 1);
                                                              v1034 = *(v1032 - 2);
                                                              v1035 = v1032[2];
                                                              v1032 += 8;
                                                              v1036 = *(v1032 - 7) | ((*(v1032 - 8) | ((v1033 | (v1034 << 8)) << 8)) << 8);
                                                              v1037 = *(v1032 - 3) | ((*(v1032 - 4) | ((*(v1032 - 5) | (v1035 << 8)) << 8)) << 8);
                                                              v1038 = v1037 ^ v1019;
                                                              v1039 = v1020 ^ v1036 ^ (v1038 - 19032) ^ 0xC81ECB17;
                                                              v1040 = (__ROR4__(v1039, 7)
                                                                     + 45493
                                                                     * __ROR4__(v1020 ^ v1036 ^ (v1038 - 19032), 15)) ^ v1038;
                                                              v1041 = (51991 * __ROR4__(v1040 - 1313519016, 9)
                                                                     - __ROR4__(v1040, 10)) ^ v1039;
                                                              v1042 = (__ROL4__(v1041, 5)
                                                                     + 51230 * __ROL4__(v1041 ^ 0xCB17, 4)) ^ v1040;
                                                              v1043 = (-937506025 - (v1042 ^ 0xB1B54A58)) ^ v1041;
                                                              v1044 = (45493 * v1043 - (v1043 >> 6) - 865822776) ^ v1042;
                                                              v1045 = (19032 * (__ROR4__(v1044, 15) ^ 0xCB17)) ^ v1043;
                                                              v1046 = (51991 * (__ROR4__(~v1045, 3) + 51230)) ^ v1044;
                                                              v1047 = (v1046 + 937486993) ^ v1045;
                                                              v1048 = (45493 * (v1047 ^ 0xC81E)) ^ __ROR4__(v1047, 10) ^ v1046;
                                                              v1049 = __ROR4__(v1048, 3) ^ (51991
                                                                                          * __ROL4__(v1048 ^ 0x4A58, 6)) ^ v1047;
                                                              v1050 = (19032 * (__ROR4__(v1049, 15) - 51230)) ^ v1048;
                                                              v1051 = (v1050 >> 15) ^ (19032 * __ROL4__(
                                                                                                 v1050 - 51991,
                                                                                                 3)) ^ (v1050 >> 1) ^ (19032 * (v1050 ^ 0xC81E)) ^ v1049;
                                                              v1052 = (45493 * v1051 - (v1051 >> 13) + 1929740733) ^ v1050;
                                                              v1053 = __ROR4__(v1052, 11) ^ (51991
                                                                                           * __ROR4__(
                                                                                               -1313519016 - v1052,
                                                                                               9)) ^ v1051;
                                                              v1054 = (v1053 + 1313467786) ^ v1052;
                                                              v1055 = (19032 * (v1054 ^ 0xB1B5) - __ROR4__(v1054, 7)) ^ v1053;
                                                              v1056 = (45493 * __ROL4__(v1055 ^ 0xC81E, 4)
                                                                     - __ROR4__(v1055, 16)) ^ v1054;
                                                              v1057 = (__ROR4__(v1056, 4)
                                                                     + 51991 * __ROR4__(-1313519016 - v1056, 10)) ^ v1055;
                                                              v1058 = __ROR4__(v1057, 9) ^ (51230
                                                                                          * __ROR4__(
                                                                                              v1057 + 1313519016,
                                                                                              4)) ^ v1056;
                                                              v1059 = (19032 * __ROL4__(v1058 ^ 0xC81ECB17, 8)
                                                                     - __ROL4__(v1058, 2)) ^ v1057;
                                                              v1031 += 8;
                                                              v1060 = (45493 * __ROR4__(-937506025 - v1059, 11)
                                                                     - __ROR4__(v1059, 12)) ^ v1058;
                                                              v1061 = (v1060 >> 8) ^ (51991 * (v1060 ^ 0xB1B5)) ^ v1059;
                                                              v1357 = (unsigned int)v990 ^ v1061;
                                                              LODWORD(v990) = v1036;
                                                              v1351 = v1022 ^ v1061 ^ v1060 ^ 0x79AB814F;
                                                              v1022 = v1037;
                                                              *(v1031 - 12) = v1357;
                                                              v1357 = __ROR4__(v1357, 8);
                                                              *(v1031 - 8) = v1351;
                                                              v1351 = __ROR4__(v1351, 8);
                                                              *(v1031 - 13) = v1357;
                                                              v1357 = __ROR4__(v1357, 8);
                                                              *(v1031 - 9) = v1351;
                                                              v1351 = __ROR4__(v1351, 8);
                                                              *(v1031 - 14) = v1357;
                                                              v1357 = __ROR4__(v1357, 8);
                                                              *(v1031 - 10) = v1351;
                                                              v1351 = __ROR4__(v1351, 8);
                                                              *(v1031 - 15) = v1357;
                                                              *(v1031 - 11) = v1351;
                                                              v1020 = __ROR4__(v1357, 8);
                                                              v1019 = __ROR4__(v1351, 8);
                                                              v1357 = v1020;
                                                              v1351 = v1019;
                                                              --v1030;
                                                            }
                                                            while ( v1030 );
                                                            v1004 = (WCHAR *)v1387;
                                                            v1007 = (char *)v1358;
                                                            v1008 = v1343;
                                                          }
                                                          v1062 = v1006 + 8;
                                                          *(_QWORD *)&v1007[v1006] = v1008;
                                                          v1507 = v1007;
                                                          v1569 = &qword_18014B110;
                                                          v1568 = (WCHAR *)(v1006 + 8);
                                                          v1570 = 8LL;
                                                          v1571 = (WCHAR *)&xmmword_18014B070;
                                                          v1572 = 160LL;
                                                          v1063 = GetProcessHeap();
                                                          v1064 = HeapAlloc(v1063, 8u, 0x30uLL);
                                                          v1065 = v1064;
                                                          if ( v1064 )
                                                          {
                                                            *v1064 = v1062;
                                                            v1066 = GetProcessHeap();
                                                            v1067 = HeapAlloc(v1066, 8u, v1062);
                                                            if ( v1067 )
                                                            {
                                                              v1068 = v1358;
                                                              *((_QWORD *)v1065 + 1) = v1067;
                                                              memcpy_0(v1067, v1068, v1062);
                                                              v1065[4] = 160;
                                                              v1069 = GetProcessHeap();
                                                              v1070 = HeapAlloc(v1069, 8u, 0xA0uLL);
                                                              if ( v1070 )
                                                              {
                                                                *((_QWORD *)v1065 + 3) = v1070;
                                                                *v1070 = xmmword_18014B070;
                                                                v1070[1] = *((_OWORD *)&xmmword_18014B070 + 1);
                                                                v1070[2] = *((_OWORD *)&xmmword_18014B070 + 2);
                                                                v1070[3] = *((_OWORD *)&xmmword_18014B070 + 3);
                                                                v1070[4] = *((_OWORD *)&xmmword_18014B070 + 4);
                                                                v1070[5] = *((_OWORD *)&xmmword_18014B070 + 5);
                                                                v1070[6] = *((_OWORD *)&xmmword_18014B070 + 6);
                                                                v1070[7] = *((_OWORD *)&xmmword_18014B070 + 7);
                                                                v1070[8] = *((_OWORD *)&xmmword_18014B070 + 8);
                                                                v1070[9] = *((_OWORD *)&xmmword_18014B070 + 9);
                                                                v1065[8] = 8;
                                                                v1071 = GetProcessHeap();
                                                                v1072 = HeapAlloc(v1071, 8u, 8uLL);
                                                                if ( v1072 )
                                                                {
                                                                  *((_QWORD *)v1065 + 5) = v1072;
                                                                  v1005 = 0;
                                                                  *v1072 = qword_18014B110;
                                                                  v1004 = (WCHAR *)v1065;
                                                                  goto LABEL_1527;
                                                                }
                                                              }
                                                            }
                                                            v1073 = (void *)*((_QWORD *)v1065 + 1);
                                                            if ( v1073 )
                                                            {
                                                              v1074 = GetProcessHeap();
                                                              HeapFree(v1074, 0, v1073);
                                                              *((_QWORD *)v1065 + 1) = 0LL;
                                                            }
                                                            v1075 = (void *)*((_QWORD *)v1065 + 3);
                                                            if ( v1075 )
                                                            {
                                                              v1076 = GetProcessHeap();
                                                              HeapFree(v1076, 0, v1075);
                                                              *((_QWORD *)v1065 + 3) = 0LL;
                                                            }
                                                            v1077 = (void *)*((_QWORD *)v1065 + 5);
                                                            if ( v1077 )
                                                            {
                                                              v1078 = GetProcessHeap();
                                                              HeapFree(v1078, 0, v1077);
                                                              *((_QWORD *)v1065 + 5) = 0LL;
                                                            }
                                                            v1079 = GetProcessHeap();
                                                            HeapFree(v1079, 0, v1065);
                                                          }
                                                          v1005 = -1073741801;
LABEL_1527:
                                                          v981 = (unsigned int *)v1347;
                                                          v990 = 0LL;
                                                          v993 = (_DWORD *)v1347;
                                                          if ( v1005 >= 0 )
                                                          {
                                                            v1455 = v1004;
                                                            v1004 = 0LL;
                                                          }
                                                          goto LABEL_1531;
                                                        }
                                                        v993 = 0LL;
                                                      }
                                                      v1005 = -1073741823;
LABEL_1531:
                                                      v1080 = v1507;
                                                      if ( v1507 )
                                                      {
                                                        v1081 = GetProcessHeap();
                                                        HeapFree(v1081, 0, v1080);
                                                        v993 = 0LL;
                                                        v1507 = 0LL;
                                                      }
                                                      if ( v1004 )
                                                      {
                                                        v1082 = (void *)*((_QWORD *)v1004 + 1);
                                                        if ( v1082 )
                                                        {
                                                          v1083 = GetProcessHeap();
                                                          HeapFree(v1083, 0, v1082);
                                                          *((_QWORD *)v1004 + 1) = 0LL;
                                                        }
                                                        v1084 = (void *)*((_QWORD *)v1004 + 3);
                                                        if ( v1084 )
                                                        {
                                                          v1085 = GetProcessHeap();
                                                          HeapFree(v1085, 0, v1084);
                                                          *((_QWORD *)v1004 + 3) = 0LL;
                                                        }
                                                        v1086 = (void *)*((_QWORD *)v1004 + 5);
                                                        if ( v1086 )
                                                        {
                                                          v1087 = GetProcessHeap();
                                                          HeapFree(v1087, 0, v1086);
                                                          *((_QWORD *)v1004 + 5) = 0LL;
                                                        }
                                                        v1088 = GetProcessHeap();
                                                        HeapFree(v1088, 0, v1004);
                                                        v993 = 0LL;
                                                      }
LABEL_1541:
                                                      v1002 = v1005 | 0x10000000;
                                                      if ( v1002 < 0 )
                                                        goto LABEL_1603;
                                                      v1089 = (const void **)v1455;
                                                      v1374 = 4;
                                                      v1091 = RtlUIntAdd(4LL, *(unsigned int *)v1455, &v1374);
                                                      if ( v1091 < 0
                                                        || (v1091 = RtlUIntAdd(v1374, v1090, &v1374), v1091 < 0)
                                                        || (v1091 = RtlUIntAdd(
                                                                      v1374,
                                                                      *((unsigned int *)v1089 + 4),
                                                                      &v1374),
                                                            v1091 < 0)
                                                        || (v1091 = RtlUIntAdd(v1374, 4LL, &v1374), v1091 < 0) )
                                                      {
                                                        v1093 = v1420;
                                                      }
                                                      else
                                                      {
                                                        v1091 = RtlUIntAdd(v1374, *((unsigned int *)v1089 + 8), &v1374);
                                                        v1093 = v1420;
                                                        if ( v1091 >= 0 )
                                                          v1093 = v1374;
                                                        v1420 = v1093;
                                                      }
                                                      if ( v1091 >= 0 )
                                                      {
                                                        v1094 = v1093;
                                                        v1095 = GetProcessHeap();
                                                        v1096 = HeapAlloc(v1095, 8u, v1094);
                                                        if ( v1096 )
                                                        {
                                                          v1097 = *(_DWORD *)v1089;
                                                          v1393 = v1096;
                                                          *v1096 = v1097;
                                                          v1091 = RtlULongLongAdd(v1096, 4LL, &v1393);
                                                          if ( v1091 >= 0 )
                                                          {
                                                            memcpy_0(v1393, v1089[1], *(unsigned int *)v1089);
                                                            v1091 = RtlULongLongAdd(
                                                                      v1393,
                                                                      *(unsigned int *)v1089,
                                                                      &v1393);
                                                            if ( v1091 >= 0 )
                                                            {
                                                              v1098 = v1393;
                                                              *(_DWORD *)v1393 = *((_DWORD *)v1089 + 4);
                                                              v1091 = RtlULongLongAdd(v1098, 4LL, &v1393);
                                                              if ( v1091 >= 0 )
                                                              {
                                                                memcpy_0(v1393, v1089[3], *((unsigned int *)v1089 + 4));
                                                                v1091 = RtlULongLongAdd(
                                                                          v1393,
                                                                          *((unsigned int *)v1089 + 4),
                                                                          &v1393);
                                                                if ( v1091 >= 0 )
                                                                {
                                                                  v1099 = v1393;
                                                                  *(_DWORD *)v1393 = *((_DWORD *)v1089 + 8);
                                                                  v1091 = RtlULongLongAdd(v1099, 4LL, &v1393);
                                                                  if ( v1091 >= 0 )
                                                                  {
                                                                    memcpy_0(
                                                                      v1393,
                                                                      v1089[5],
                                                                      *((unsigned int *)v1089 + 8));
                                                                    v1091 = RtlULongLongAdd(
                                                                              v1393,
                                                                              *((unsigned int *)v1089 + 8),
                                                                              &v1393);
                                                                    if ( v1091 >= 0 )
                                                                    {
                                                                      v1100 = v1420;
                                                                      v993 = v1096;
                                                                      v1298 = v1096;
                                                                      v1092 = 0LL;
                                                                      goto LABEL_1563;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                          v1101 = GetProcessHeap();
                                                          HeapFree(v1101, 0, v1096);
                                                        }
                                                        else
                                                        {
                                                          v1091 = -1073741801;
                                                        }
                                                        v993 = 0LL;
                                                        v1092 = 0LL;
                                                      }
                                                      v1100 = 0;
LABEL_1563:
                                                      v1002 = v1091 | 0x10000000;
                                                      if ( v1002 >= 0 )
                                                      {
                                                        v1102 = (unsigned int)v1092;
                                                        v1573 = v1092;
                                                        v1513 = (unsigned int)v1092;
                                                        v1514 = (int)v1092;
                                                        v1574 = v1092;
                                                        v1426 = 8;
                                                        v1103 = RtlUIntAdd(8LL, v1425, &v1426);
                                                        v1002 = v1103 | 0x10000000;
                                                        if ( v1103 < 0 )
                                                          goto LABEL_1607;
                                                        v1104 = (v1426 + 7) & 0xFFFFFFF8;
                                                        if ( (unsigned int)v1104 >= v1426 )
                                                        {
                                                          v1427 = (v1426 + 7) & 0xFFFFFFF8;
                                                          v1105 = RtlUIntAdd(v1104, 8LL, &v1427);
                                                          v1106 = v1428;
                                                          v1002 = v1105;
                                                          if ( v1105 >= 0 )
                                                            v1106 = v1427;
                                                          v1428 = v1106;
                                                        }
                                                        else
                                                        {
                                                          v1002 = -1073741675;
                                                        }
                                                        if ( v1002 >= 0 )
                                                        {
                                                          if ( !v1371 || (unsigned int)v1370 <= 1 )
                                                            goto LABEL_1605;
                                                          v1107 = (unsigned int *)v1371;
                                                          v1408 = (unsigned int *)v1371;
                                                          while ( 1 )
                                                          {
                                                            v1108 = *v1107;
                                                            v1002 = RtlULongLongAdd(v1107, 4LL, &v1408);
                                                            if ( v1002 < 0 )
                                                              break;
                                                            v1002 = RtlULongLongAdd(v1408, v1108, &v1408);
                                                            if ( v1002 < 0 )
                                                              break;
                                                            v1107 = v1408;
                                                            if ( v1109 != -1 )
                                                            {
                                                              v1002 = RtlULongLongAdd(v1408, 4LL, &v1408);
                                                              if ( v1002 >= 0 )
                                                              {
                                                                v1111 = v1408;
                                                                v1514 = v1110;
                                                                if ( !v1110 )
                                                                  v1111 = 0LL;
                                                                v1408 = v1111;
                                                                v1573 = v1111;
                                                              }
                                                              break;
                                                            }
                                                          }
                                                          if ( v1002 < 0 )
                                                            goto LABEL_1606;
                                                          if ( (unsigned int)v1370 > 2 )
                                                          {
                                                            v1112 = (unsigned int *)v1371;
                                                            v1409 = (unsigned int *)v1371;
                                                            while ( 1 )
                                                            {
                                                              v1113 = *v1112;
                                                              v1002 = RtlULongLongAdd(v1112, 4LL, &v1409);
                                                              if ( v1002 < 0 )
                                                                break;
                                                              v1002 = RtlULongLongAdd(v1409, v1113, &v1409);
                                                              if ( v1002 < 0 )
                                                                break;
                                                              v1112 = v1409;
                                                              if ( (unsigned int)(v1115 + 1) >= 2 )
                                                              {
                                                                v1002 = RtlULongLongAdd(v1409, 4LL, &v1409);
                                                                if ( v1002 >= 0 )
                                                                {
                                                                  v1117 = v1409;
                                                                  v1102 = v1116;
                                                                  if ( !v1116 )
                                                                    v1117 = 0LL;
                                                                  v1513 = v1116;
                                                                  v1409 = v1117;
                                                                  v1574 = v1117;
                                                                }
                                                                break;
                                                              }
                                                            }
                                                            if ( v1002 >= 0 )
                                                            {
                                                              v1373 = 4;
                                                              v1002 = RtlUIntAdd(4LL, v1114, &v1373);
                                                              if ( v1002 < 0
                                                                || (v1002 = RtlUIntAdd(v1373, 4LL, &v1373), v1002 < 0)
                                                                || (v1002 = RtlUIntAdd(v1373, v1118, &v1373), v1002 < 0)
                                                                || (v1002 = RtlUIntAdd(v1373, 4LL, &v1373), v1002 < 0) )
                                                              {
                                                                v1119 = v1429;
                                                              }
                                                              else
                                                              {
                                                                v1002 = RtlUIntAdd(v1373, v1102, &v1373);
                                                                v1119 = v1429;
                                                                if ( v1002 >= 0 )
                                                                  v1119 = v1373;
                                                                v1429 = v1119;
                                                              }
                                                              if ( v1002 >= 0 )
                                                              {
                                                                v993 = v1298;
                                                                if ( v1119 > 0x400000 )
                                                                {
                                                                  v1002 = -2147418113;
                                                                  goto LABEL_1603;
                                                                }
                                                                v1378 = v1119;
LABEL_1607:
                                                                if ( v1002 < 0 )
                                                                  goto LABEL_1603;
                                                                v1120 = v1378;
                                                                v1121 = GetProcessHeap();
                                                                v1122 = (unsigned int *)HeapAlloc(v1121, 8u, v1120);
                                                                if ( v1122 )
                                                                {
                                                                  v981 = v1122;
                                                                  v1347 = (unsigned __int64)v1122;
                                                                  v1002 = 0x10000000;
                                                                }
                                                                else
                                                                {
                                                                  v1002 = -805306345;
                                                                }
                                                                v993 = v1298;
                                                                if ( v1002 < 0 )
                                                                  goto LABEL_1603;
                                                                if ( !v1298 )
                                                                {
                                                                  v989 = 0LL;
                                                                  v1002 = -2147024809;
                                                                  goto LABEL_1787;
                                                                }
                                                                if ( !v981 )
                                                                {
                                                                  v989 = 0LL;
                                                                  v1002 = -2147024809;
                                                                  goto LABEL_1787;
                                                                }
                                                                v1597 = v1100;
                                                                v1596[0] = v1298;
                                                                v1596[1] = v981;
                                                                v1598 = v1378;
                                                                v1599 = 0;
                                                                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                                                                {
                                                                  v1127 = GetProcAddress(
                                                                            hModule,
                                                                            "NtQuerySystemInformation");
                                                                  if ( v1127 )
                                                                  {
                                                                    v1128 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1127)(
                                                                              134LL,
                                                                              v1596);
                                                                    v1124 = v1378;
                                                                    v1002 = v1128 | 0x10000000;
                                                                    if ( v1128 >= 0 )
                                                                      v1124 = v1598;
                                                                    v1378 = v1124;
                                                                    goto LABEL_1630;
                                                                  }
                                                                  v1123 = GetLastError();
                                                                  v1002 = v1123;
                                                                  if ( v1123 <= 0 )
                                                                  {
LABEL_1619:
                                                                    v1124 = v1378;
                                                                    if ( v1002 >= 0 )
                                                                    {
                                                                      v1002 = -2147467259;
                                                                      goto LABEL_1621;
                                                                    }
LABEL_1630:
                                                                    if ( v1002 == -805306333 )
                                                                    {
                                                                      v1002 = -2147024774;
LABEL_1632:
                                                                      v998 = v1355;
                                                                      v989 = 0LL;
                                                                      v993 = v1298;
                                                                      goto LABEL_1788;
                                                                    }
LABEL_1621:
                                                                    if ( v1002 >= 0 )
                                                                    {
                                                                      v1125 = 0LL;
                                                                      if ( v1124 < 4 )
                                                                      {
                                                                        v1126 = -1073741762;
                                                                        v989 = 0LL;
                                                                        goto LABEL_1714;
                                                                      }
                                                                      v1129 = *v981;
                                                                      v1130 = -1LL;
                                                                      v1131 = -1LL;
                                                                      if ( v981 + 1 >= v981 )
                                                                        v1131 = (unsigned __int64)(v981 + 1);
                                                                      v1126 = v981 + 1 < v981 ? 0xC0000095 : 0;
                                                                      if ( v981 + 1 < v981 )
                                                                        goto LABEL_1638;
                                                                      if ( v1124 - 4 < (unsigned int)v1129 )
                                                                      {
                                                                        v1126 = -1073741762;
LABEL_1638:
                                                                        v989 = 0LL;
                                                                        v990 = 0LL;
                                                                        goto LABEL_1714;
                                                                      }
                                                                      v1132 = -1LL;
                                                                      if ( v1131 + v1129 >= v1131 )
                                                                        v1132 = v1131 + v1129;
                                                                      v1126 = v1131 + v1129 < v1131 ? 0xC0000095 : 0;
                                                                      if ( v1131 + v1129 < v1131 )
                                                                        goto LABEL_1638;
                                                                      v1133 = -1;
                                                                      v1134 = -1;
                                                                      if ( (unsigned int)v1129 < 0xFFFFFFFC )
                                                                        v1134 = v1129 + 4;
                                                                      v1126 = (unsigned int)v1129 >= 0xFFFFFFFC
                                                                            ? 0xC0000095
                                                                            : 0;
                                                                      if ( (unsigned int)(v1129 + 4) < 4 )
                                                                        goto LABEL_1638;
                                                                      if ( v1124 - v1134 < 4 )
                                                                      {
                                                                        v1126 = -1073741762;
                                                                        v989 = 0LL;
                                                                        v990 = 0LL;
                                                                        goto LABEL_1714;
                                                                      }
                                                                      v1135 = *(unsigned int *)v1132;
                                                                      v1302 = *(_DWORD *)v1132;
                                                                      v1136 = -1LL;
                                                                      if ( v1132 + 4 >= v1132 )
                                                                        v1136 = v1132 + 4;
                                                                      v1126 = v1132 + 4 < v1132 ? 0xC0000095 : 0;
                                                                      if ( v1132 + 4 < v1132 )
                                                                        goto LABEL_1655;
                                                                      v1137 = v1134 + 4;
                                                                      v1138 = -1;
                                                                      if ( v1134 + 4 >= v1134 )
                                                                        v1138 = v1134 + 4;
                                                                      v1126 = v1137 < v1134 ? 0xC0000095 : 0;
                                                                      if ( v1137 < v1134 )
                                                                        goto LABEL_1655;
                                                                      if ( v1124 - v1138 < (unsigned int)v1135 )
                                                                      {
                                                                        v1126 = -1073741762;
LABEL_1655:
                                                                        v989 = 0LL;
                                                                        v990 = 0LL;
                                                                        goto LABEL_1714;
                                                                      }
                                                                      v1139 = -1LL;
                                                                      v1391 = v1135;
                                                                      if ( v1136 + v1135 >= v1136 )
                                                                        v1139 = v1136 + v1135;
                                                                      v1126 = v1136 + v1135 < v1136 ? 0xC0000095 : 0;
                                                                      if ( v1136 + v1135 < v1136 )
                                                                        goto LABEL_1655;
                                                                      v1140 = v1135 + v1138;
                                                                      if ( (unsigned int)v1135 + v1138 >= v1138 )
                                                                        v1133 = v1135 + v1138;
                                                                      v1126 = v1140 < v1138 ? 0xC0000095 : 0;
                                                                      if ( v1140 < v1138 )
                                                                        goto LABEL_1655;
                                                                      if ( v1124 - v1133 < 4 )
                                                                      {
                                                                        v1126 = -1073741762;
                                                                        v989 = 0LL;
                                                                        v990 = 0LL;
                                                                        goto LABEL_1714;
                                                                      }
                                                                      v1141 = *(unsigned int *)v1139;
                                                                      if ( v1139 + 4 >= v1139 )
                                                                        v1130 = v1139 + 4;
                                                                      v1126 = v1139 + 4 < v1139 ? 0xC0000095 : 0;
                                                                      v1403 = (void *)v1130;
                                                                      if ( v1139 + 4 < v1139 )
                                                                        goto LABEL_1672;
                                                                      v1142 = v1133 + 4;
                                                                      v1143 = -1;
                                                                      v1144 = -1;
                                                                      if ( v1133 + 4 >= v1133 )
                                                                        v1144 = v1133 + 4;
                                                                      v1126 = v1142 < v1133 ? 0xC0000095 : 0;
                                                                      if ( v1142 < v1133 )
                                                                        goto LABEL_1672;
                                                                      if ( v1124 - v1144 < (unsigned int)v1141 )
                                                                      {
                                                                        v1126 = -1073741762;
LABEL_1672:
                                                                        v989 = 0LL;
                                                                        v990 = 0LL;
LABEL_1713:
                                                                        v981 = (unsigned int *)v1347;
LABEL_1714:
                                                                        v1002 = v1126 | 0x10000000;
                                                                        if ( v1002 < 0 )
                                                                          goto LABEL_1786;
                                                                        v1576 = 0LL;
                                                                        v1453 = 0LL;
                                                                        if ( !v989 )
                                                                        {
                                                                          v1002 = -805306355;
                                                                          goto LABEL_1755;
                                                                        }
                                                                        v1171 = (unsigned __int8 *)v989[1];
                                                                        v1403 = v1171;
                                                                        if ( v1171
                                                                          && (v1172 = *(unsigned int *)v989,
                                                                              (_DWORD)v1172) )
                                                                        {
                                                                          v1173 = (LPCWSTR)(v1172 - 8);
                                                                          v1387 = (LPCWSTR)(v1172 - 8);
                                                                          v1174 = (int *)operator new(v1172 - 8);
                                                                          v1391 = (SIZE_T)v1174;
                                                                          v1175 = v1174;
                                                                          if ( v1174 )
                                                                          {
                                                                            v1176 = 0;
                                                                            v1177 = v1171;
                                                                            v1178 = v1174;
                                                                            v1179 = (unsigned __int8)v1173 & 7;
                                                                            if ( ((unsigned __int8)v1173 & 7) != 0 )
                                                                            {
                                                                              v1349 = -1;
                                                                              v1180 = 0;
                                                                              v1353 = 0;
                                                                              v1181 = 0;
                                                                              v1418 = 0;
                                                                              v1182 = 0;
                                                                              v1183 = 56;
                                                                              do
                                                                              {
                                                                                v1184 = *v1177;
                                                                                if ( v1182 >= 4 )
                                                                                  v1180 |= v1184 << v1183;
                                                                                else
                                                                                  v1181 |= v1184 << (v1183 - 32);
                                                                                ++v1182;
                                                                                v1183 -= 8;
                                                                                ++v1177;
                                                                              }
                                                                              while ( v1182 < v1179 );
                                                                              v1418 = v1180;
                                                                              v1185 = v1180 ^ 0x699A899C;
                                                                              v1186 = v1181 ^ 0x92F65A5;
                                                                              v1349 = v1185;
                                                                              v1353 = v1181 ^ 0x92F65A5;
                                                                              v1187 = 0;
                                                                              if ( ((unsigned __int8)v1173 & 7) != 0 )
                                                                              {
                                                                                do
                                                                                {
                                                                                  if ( v1187 >= 4 )
                                                                                  {
                                                                                    v1185 = __ROL4__(v1185, 8);
                                                                                    *(_BYTE *)v1178 = v1185;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v1186 = __ROL4__(v1186, 8);
                                                                                    *(_BYTE *)v1178 = v1186;
                                                                                  }
                                                                                  ++v1187;
                                                                                  v1178 = (int *)((char *)v1178 + 1);
                                                                                }
                                                                                while ( v1187 < v1179 );
                                                                                v1186 = v1353;
                                                                                v1185 = v1349;
                                                                              }
                                                                              v1188 = v1179 - 4;
                                                                              if ( v1179 - 4 <= 0 )
                                                                              {
                                                                                v1349 = 0;
                                                                                v1189 = 0;
                                                                                if ( v1188 < 0 )
                                                                                {
                                                                                  v1186 = v1186 >> (-8 * v1188) << (-8 * v1188);
                                                                                  v1353 = v1186;
                                                                                }
                                                                              }
                                                                              else
                                                                              {
                                                                                v1189 = v1185 >> (8 * (4 - v1188)) << (8 * (4 - v1188));
                                                                                v1349 = v1189;
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              v1181 = 0;
                                                                              v1349 = 0;
                                                                              v1189 = 0;
                                                                              v1353 = 0;
                                                                              v1186 = 0;
                                                                            }
                                                                            v1190 = (unsigned __int64)v1173 >> 3;
                                                                            if ( (unsigned __int64)v1173 >> 3 )
                                                                            {
                                                                              v1191 = v1418;
                                                                              v1192 = (char *)v1178 + 7;
                                                                              v1193 = v1177 + 2;
                                                                              do
                                                                              {
                                                                                v1194 = *(v1193 - 1);
                                                                                v1195 = *(v1193 - 2);
                                                                                v1196 = v1193[2];
                                                                                v1193 += 8;
                                                                                v1197 = *(v1193 - 7) | ((*(v1193 - 8) | ((v1194 | (v1195 << 8)) << 8)) << 8);
                                                                                v1198 = v1197 ^ v1186;
                                                                                v1199 = *(v1193 - 3) | ((*(v1193 - 4) | ((*(v1193 - 5) | (v1196 << 8)) << 8)) << 8);
                                                                                v1200 = v1198 ^ v1199 ^ v1189 ^ 0xAC987321;
                                                                                v1201 = (__ROL4__(v1200, 10)
                                                                                       + 4991
                                                                                       * __ROL4__(v1200 + 1419157410, 5)) ^ v1198;
                                                                                v1202 = (43881
                                                                                       * __ROR4__(v1201 + 133239679, 9)
                                                                                       - __ROL4__(v1201, 2)) ^ v1200;
                                                                                v1203 = (24670 * v1202
                                                                                       - (v1202 >> 13)
                                                                                       - 123127970) ^ v1201;
                                                                                v1204 = (2033
                                                                                       * __ROL4__(v1203 ^ 0xAB69, 6)
                                                                                       - __ROL4__(v1203, 2)) ^ v1202;
                                                                                v1205 = (133239679 - (v1204 ^ 0xAB69605E)) ^ v1203;
                                                                                v1206 = (43881 * (v1205 ^ 0x137F)) ^ __ROR4__(v1205, 6) ^ v1204;
                                                                                v1207 = (__ROL4__(v1206, 2)
                                                                                       + 24670
                                                                                       * __ROR4__(v1206 + 133239679, 15)) ^ v1205;
                                                                                v1208 = (2033
                                                                                       * __ROR4__(
                                                                                           v1207 + 1419157410,
                                                                                           14)
                                                                                       - __ROL4__(v1207, 8)) ^ v1206;
                                                                                v1209 = __ROR4__(v1208, 10) ^ (4991 * __ROR4__(v1208 ^ 0xAB69605E, 12)) ^ v1207;
                                                                                v1210 = (v1209 >> 10) ^ (43881 * (v1209 ^ 0x7F1)) ^ v1208;
                                                                                v1211 = (2033
                                                                                       * (__ROR4__(~v1210, 5) + 24670)) ^ v1209;
                                                                                v1212 = v1210 ^ (v1211 - 2033) ^ 0xAB69605E;
                                                                                v1213 = ((v1212 >> 2)
                                                                                       + 4991
                                                                                       * __ROL4__(
                                                                                           v1210 ^ (v1211 - 2033) ^ 0xAB6967AF,
                                                                                           2)) ^ v1211;
                                                                                v1214 = (__ROL4__(v1213, 7)
                                                                                       + 43881
                                                                                       * __ROR4__(v1213 - 133239679, 6)) ^ v1212;
                                                                                v1215 = (24670 * (v1214 ^ 0x137F)
                                                                                       + __ROR4__(v1214, 9)) ^ v1213;
                                                                                v1216 = (__ROL4__(v1215, 7)
                                                                                       + 2033
                                                                                       * __ROL4__(v1215 ^ 0xAB69, 5)) ^ v1214;
                                                                                v1217 = v1216 ^ v1215 ^ 0xAC987321;
                                                                                v1218 = (4991
                                                                                       * (__ROR4__(v1217, 3) - 43881)) ^ v1216;
                                                                                v1219 = (24670
                                                                                       * __ROR4__(v1218 - 133239679, 1)
                                                                                       - __ROR4__(v1218, 6)) ^ v1217;
                                                                                v1220 = (__ROL4__(v1219, 14)
                                                                                       + 2033
                                                                                       * __ROL4__(v1219 - 1419157410, 3)) ^ v1218;
                                                                                v1221 = (4991
                                                                                       * __ROL4__(
                                                                                           v1220 - 1419157410,
                                                                                           15)
                                                                                       - __ROR4__(v1220, 14)) ^ v1219;
                                                                                v1192 += 8;
                                                                                v1222 = (v1221 >> 3) ^ (43881 * (v1221 ^ 0x605E)) ^ v1220;
                                                                                v1349 = v1191 ^ v1222;
                                                                                v1191 = v1199;
                                                                                v1223 = v1181 ^ __ROL4__(v1222, 2) ^ (24670 * __ROL4__(v1222 ^ 0x7F1137F, 4));
                                                                                v1181 = v1197;
                                                                                v1353 = v1223 ^ v1221;
                                                                                *(v1192 - 12) = v1223 ^ v1221;
                                                                                v1353 = __ROR4__(v1353, 8);
                                                                                *(v1192 - 8) = v1349;
                                                                                v1349 = __ROR4__(v1349, 8);
                                                                                *(v1192 - 13) = v1353;
                                                                                v1353 = __ROR4__(v1353, 8);
                                                                                *(v1192 - 9) = v1349;
                                                                                v1349 = __ROR4__(v1349, 8);
                                                                                *(v1192 - 14) = v1353;
                                                                                v1353 = __ROR4__(v1353, 8);
                                                                                *(v1192 - 10) = v1349;
                                                                                v1349 = __ROR4__(v1349, 8);
                                                                                *(v1192 - 15) = v1353;
                                                                                *(v1192 - 11) = v1349;
                                                                                v1186 = __ROR4__(v1353, 8);
                                                                                v1189 = __ROR4__(v1349, 8);
                                                                                v1353 = v1186;
                                                                                v1349 = v1189;
                                                                                --v1190;
                                                                              }
                                                                              while ( v1190 );
                                                                              v1173 = v1387;
                                                                              v1175 = (int *)v1391;
                                                                              v1176 = 0;
                                                                              v1171 = (unsigned __int8 *)v1403;
                                                                            }
                                                                            v1224 = 0LL;
                                                                            if ( v1173 )
                                                                            {
                                                                              if ( (unsigned __int64)v1173 >= 0x20 )
                                                                              {
                                                                                v1225 = 0LL;
                                                                                v1226 = 0LL;
                                                                                do
                                                                                {
                                                                                  v1225 = _mm_xor_si128(
                                                                                            _mm_loadu_si128((const __m128i *)((char *)v1175 + v1224)),
                                                                                            v1225);
                                                                                  v1227 = _mm_loadu_si128((const __m128i *)((char *)v1175 + v1224 + 16));
                                                                                  v1224 += 32LL;
                                                                                  v1228 = _mm_xor_si128(v1227, v1226);
                                                                                  v1226 = v1228;
                                                                                }
                                                                                while ( v1224 < ((unsigned __int64)v1173 & 0xFFFFFFFFFFFFFFE0uLL) );
                                                                                v1229 = _mm_xor_si128(v1228, v1225);
                                                                                v1230 = _mm_xor_si128(
                                                                                          v1229,
                                                                                          _mm_srli_si128(v1229, 8));
                                                                                v1231 = _mm_xor_si128(
                                                                                          v1230,
                                                                                          _mm_srli_si128(v1230, 4));
                                                                                v1232 = _mm_xor_si128(
                                                                                          v1231,
                                                                                          _mm_srli_si128(v1231, 2));
                                                                                v1176 = _mm_cvtsi128_si32(
                                                                                          _mm_xor_si128(
                                                                                            v1232,
                                                                                            _mm_srli_si128(v1232, 1)));
                                                                              }
                                                                              for ( ;
                                                                                    v1224 < (unsigned __int64)v1173;
                                                                                    ++v1224 )
                                                                              {
                                                                                v1176 ^= *((_BYTE *)v1175 + v1224);
                                                                              }
                                                                            }
                                                                            if ( v1176 == *(_QWORD *)&v1171[(_QWORD)v1173] )
                                                                            {
                                                                              v981 = (unsigned int *)v1347;
                                                                              v990 = v1175;
                                                                              v1322 = v1175;
                                                                              v1002 = 0x10000000;
                                                                              v989 = v1289;
                                                                              v1576 = v1173;
                                                                              v1453 = 0LL;
                                                                              v1394 = (unsigned int)v1173;
                                                                              goto LABEL_1755;
                                                                            }
                                                                            operator delete(v1175);
                                                                            v981 = (unsigned int *)v1347;
                                                                          }
                                                                          v989 = v1289;
                                                                          v1233 = v1453;
                                                                          v1002 = -805306367;
                                                                          if ( v1453 )
                                                                          {
                                                                            v1234 = GetProcessHeap();
                                                                            HeapFree(v1234, 0, v1233);
                                                                            v1453 = 0LL;
                                                                            v990 = 0LL;
                                                                            goto LABEL_1755;
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          v1002 = -805306355;
                                                                        }
                                                                        v990 = 0LL;
LABEL_1755:
                                                                        if ( v1002 >= 0 )
                                                                        {
                                                                          v1395 = 0;
                                                                          v1454 = v990;
                                                                          if ( v1394 < 4 )
                                                                          {
                                                                            v1235 = -1073741762;
LABEL_1785:
                                                                            v1002 = v1235 | 0x10000000;
                                                                            goto LABEL_1786;
                                                                          }
                                                                          v1315 = *v990;
                                                                          v1235 = RtlULongLongAdd(v990, 4LL, &v1454);
                                                                          if ( v1235 < 0 )
                                                                            goto LABEL_1785;
                                                                          v1235 = RtlUIntAdd(0LL, v1236, &v1395);
                                                                          if ( v1235 < 0 )
                                                                            goto LABEL_1785;
                                                                          if ( v1394 - v1395 < (unsigned int)v1237 )
                                                                          {
                                                                            v1235 = -1073741762;
                                                                            goto LABEL_1785;
                                                                          }
                                                                          v1238 = *(unsigned int *)v1454;
                                                                          v1235 = RtlULongLongAdd(v1454, v1237, &v1454);
                                                                          if ( v1235 < 0 )
                                                                            goto LABEL_1785;
                                                                          v1235 = RtlUIntAdd(v1240, v1239, &v1395);
                                                                          if ( v1235 < 0 )
                                                                            goto LABEL_1785;
                                                                          if ( v1394 - v1395 < (unsigned int)v1238 )
                                                                          {
                                                                            v1235 = -1073741762;
                                                                            goto LABEL_1785;
                                                                          }
                                                                          v1235 = RtlUIntAdd(
                                                                                    v1395,
                                                                                    (unsigned int)v1238,
                                                                                    &v1395);
                                                                          if ( v1235 < 0 )
                                                                            goto LABEL_1785;
                                                                          v1242 = v1454;
                                                                          if ( (char *)v990 + v1394 < (char *)v1454 + v1238
                                                                            || (unsigned __int64)v990
                                                                             + v1394
                                                                             - v1238
                                                                             - (_QWORD)v1454 >= 8 )
                                                                          {
                                                                            v1235 = -1073741762;
                                                                            goto LABEL_1784;
                                                                          }
                                                                          v1243 = 0LL;
                                                                          v1235 = 0;
                                                                          v1244 = 0;
                                                                          if ( v1454 )
                                                                          {
                                                                            v1235 = RtlULongLongAdd(
                                                                                      v1454,
                                                                                      v1238,
                                                                                      &v1577);
                                                                            if ( v1235 < 0 )
                                                                            {
LABEL_1813:
                                                                              if ( v1235 >= 0 && v1241 != (_DWORD)v1431 )
                                                                                v1235 = -1073741762;
                                                                              goto LABEL_1783;
                                                                            }
                                                                            v1246 = v1577;
                                                                            if ( (unsigned __int64)v1242 < v1577 )
                                                                            {
                                                                              while ( 1 )
                                                                              {
                                                                                v1235 = RtlULongLongAdd(
                                                                                          v1245,
                                                                                          4LL,
                                                                                          &v1578);
                                                                                if ( v1235 < 0 )
                                                                                  break;
                                                                                if ( v1578 > v1248 )
                                                                                  goto LABEL_1782;
                                                                                v1249 = RtlUIntAdd(4LL, *v1247, &v1512);
                                                                                v1235 = v1249;
                                                                                if ( v1249 >= 0 )
                                                                                  v1251 = v1512;
                                                                                v1502 = v1251;
                                                                                if ( v1249 < 0 )
                                                                                  break;
                                                                                v1235 = RtlULongLongAdd(
                                                                                          v1250,
                                                                                          v1251,
                                                                                          &v1579);
                                                                                if ( v1235 < 0 )
                                                                                  break;
                                                                                v1245 = v1579;
                                                                                if ( v1579 > v1246 )
                                                                                  goto LABEL_1782;
                                                                                ++v1244;
                                                                                if ( v1579 >= v1246 )
                                                                                {
                                                                                  v1241 = v1315;
                                                                                  goto LABEL_1781;
                                                                                }
                                                                              }
                                                                              v1241 = v1315;
                                                                              goto LABEL_1813;
                                                                            }
LABEL_1781:
                                                                            if ( v1245 != v1246 )
                                                                            {
LABEL_1782:
                                                                              v1235 = -1073741811;
LABEL_1783:
                                                                              v990 = v1322;
                                                                              v981 = (unsigned int *)v1347;
LABEL_1784:
                                                                              v989 = v1289;
                                                                              goto LABEL_1785;
                                                                            }
                                                                          }
                                                                          if ( (_DWORD)v1238 )
                                                                          {
                                                                            v1265 = GetProcessHeap();
                                                                            v1266 = HeapAlloc(v1265, 8u, v1238);
                                                                            v1241 = v1315;
                                                                            v1243 = v1266;
                                                                            if ( !v1266 )
                                                                            {
                                                                              v1235 = -1073741801;
                                                                              goto LABEL_1813;
                                                                            }
                                                                            v1235 = 0;
                                                                          }
                                                                          if ( v1242 )
                                                                          {
                                                                            memcpy_0(v1243, v1242, v1238);
                                                                            v1241 = v1315;
                                                                          }
                                                                          v1432 = v1243;
                                                                          v1431 = __PAIR64__(v1238, v1244);
                                                                          goto LABEL_1813;
                                                                        }
LABEL_1786:
                                                                        v993 = v1298;
                                                                        goto LABEL_1787;
                                                                      }
                                                                      v1145 = v1141 + v1144;
                                                                      if ( (unsigned int)v1141 + v1144 >= v1144 )
                                                                        v1143 = v1141 + v1144;
                                                                      v1126 = v1145 < v1144 ? 0xC0000095 : 0;
                                                                      if ( v1145 < v1144 )
                                                                        goto LABEL_1672;
                                                                      if ( v1124 != v1143 )
                                                                      {
                                                                        v1126 = -1073741762;
                                                                        v989 = 0LL;
                                                                        v990 = 0LL;
                                                                        goto LABEL_1713;
                                                                      }
                                                                      if ( (unsigned int)(v1129 + v1141 + v1135) + 12LL != v1124 )
                                                                      {
                                                                        v1126 = -1073741762;
                                                                        v989 = 0LL;
                                                                        v990 = 0LL;
                                                                        goto LABEL_1713;
                                                                      }
                                                                      v1146 = GetProcessHeap();
                                                                      v1147 = HeapAlloc(v1146, 8u, 0x30uLL);
                                                                      v1148 = v1147;
                                                                      if ( !v1147 )
                                                                      {
                                                                        v1126 = -1073741801;
                                                                        goto LABEL_1702;
                                                                      }
                                                                      if ( v1131 )
                                                                      {
                                                                        *(_DWORD *)v1147 = v1129;
                                                                        v1149 = GetProcessHeap();
                                                                        v1150 = HeapAlloc(v1149, 8u, v1129);
                                                                        if ( !v1150 )
                                                                          goto LABEL_1693;
                                                                        v1148[1] = v1150;
                                                                        memcpy_0(v1150, (const void *)v1131, v1129);
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_DWORD *)v1147 = 0;
                                                                        v1147[1] = 0LL;
                                                                      }
                                                                      if ( v1136 )
                                                                      {
                                                                        *((_DWORD *)v1148 + 4) = v1302;
                                                                        v1151 = GetProcessHeap();
                                                                        v1152 = v1391;
                                                                        v1153 = HeapAlloc(v1151, 8u, v1391);
                                                                        if ( !v1153 )
                                                                          goto LABEL_1693;
                                                                        v1148[3] = v1153;
                                                                        memcpy_0(v1153, (const void *)v1136, v1152);
                                                                      }
                                                                      else
                                                                      {
                                                                        *((_DWORD *)v1148 + 4) = 0;
                                                                        v1148[3] = 0LL;
                                                                      }
                                                                      v1154 = v1403;
                                                                      if ( !v1403 )
                                                                      {
                                                                        *((_DWORD *)v1148 + 8) = 0;
                                                                        v1148[5] = 0LL;
                                                                        goto LABEL_1701;
                                                                      }
                                                                      *((_DWORD *)v1148 + 8) = v1141;
                                                                      v1155 = GetProcessHeap();
                                                                      v1156 = HeapAlloc(v1155, 8u, v1141);
                                                                      if ( v1156 )
                                                                      {
                                                                        v1148[5] = v1156;
                                                                        memcpy_0(v1156, v1154, v1141);
LABEL_1701:
                                                                        v1125 = v1148;
                                                                        v1126 = 0;
LABEL_1702:
                                                                        if ( v1126 < 0 )
                                                                        {
                                                                          if ( v1125 )
                                                                          {
                                                                            v1164 = (void *)v1125[1];
                                                                            if ( v1164 )
                                                                            {
                                                                              v1165 = GetProcessHeap();
                                                                              HeapFree(v1165, 0, v1164);
                                                                              v1125[1] = 0LL;
                                                                            }
                                                                            v1166 = (void *)v1125[3];
                                                                            if ( v1166 )
                                                                            {
                                                                              v1167 = GetProcessHeap();
                                                                              HeapFree(v1167, 0, v1166);
                                                                              v1125[3] = 0LL;
                                                                            }
                                                                            v1168 = (void *)v1125[5];
                                                                            if ( v1168 )
                                                                            {
                                                                              v1169 = GetProcessHeap();
                                                                              HeapFree(v1169, 0, v1168);
                                                                              v1125[5] = 0LL;
                                                                            }
                                                                            v1170 = GetProcessHeap();
                                                                            HeapFree(v1170, 0, v1125);
                                                                          }
                                                                          v989 = 0LL;
                                                                          v990 = 0LL;
                                                                        }
                                                                        else
                                                                        {
                                                                          v990 = 0LL;
                                                                          v989 = v1125;
                                                                          v1289 = v1125;
                                                                        }
                                                                        goto LABEL_1713;
                                                                      }
LABEL_1693:
                                                                      v1157 = (void *)v1148[1];
                                                                      if ( v1157 )
                                                                      {
                                                                        v1158 = GetProcessHeap();
                                                                        HeapFree(v1158, 0, v1157);
                                                                        v1148[1] = 0LL;
                                                                      }
                                                                      v1159 = (void *)v1148[3];
                                                                      if ( v1159 )
                                                                      {
                                                                        v1160 = GetProcessHeap();
                                                                        HeapFree(v1160, 0, v1159);
                                                                        v1148[3] = 0LL;
                                                                      }
                                                                      v1161 = (void *)v1148[5];
                                                                      if ( v1161 )
                                                                      {
                                                                        v1162 = GetProcessHeap();
                                                                        HeapFree(v1162, 0, v1161);
                                                                        v1148[5] = 0LL;
                                                                      }
                                                                      v1163 = GetProcessHeap();
                                                                      HeapFree(v1163, 0, v1148);
                                                                      v1126 = -1073741801;
                                                                      goto LABEL_1702;
                                                                    }
                                                                    goto LABEL_1632;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  v1123 = GetLastError();
                                                                  v1002 = v1123;
                                                                  if ( v1123 <= 0 )
                                                                    goto LABEL_1619;
                                                                }
                                                                v1002 = (unsigned __int16)v1123 | 0x80070000;
                                                                goto LABEL_1619;
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
LABEL_1605:
                                                            v1002 = -1073741811;
                                                          }
                                                        }
LABEL_1606:
                                                        v993 = v1298;
                                                        goto LABEL_1607;
                                                      }
LABEL_1603:
                                                      v989 = 0LL;
LABEL_1787:
                                                      v998 = v1355;
                                                      goto LABEL_1788;
                                                    }
                                                  }
                                                }
                                                goto LABEL_1472;
                                              }
LABEL_1438:
                                              v466 = v470;
                                              goto LABEL_1439;
                                            }
                                            if ( v615 == 1 )
                                            {
                                              v820 = HIDWORD(v1604[8]) - HIDWORD(v1604[7]);
                                              v821 = HIDWORD(v1604[10]) - HIDWORD(v1604[9]);
                                              if ( HIDWORD(v1604[10]) - HIDWORD(v1604[9]) > HIDWORD(v1604[8])
                                                                                          - HIDWORD(v1604[7]) )
                                                v820 = HIDWORD(v1604[10]) - HIDWORD(v1604[9]);
                                              v822 = __PAIR64__(LODWORD(v1604[11]) - LODWORD(v1604[8]), v820);
                                              if ( LODWORD(v1604[0]) )
                                              {
                                                v823 = v820 + HIDWORD(v1604[7]) - HIDWORD(v1604[8]);
                                                v824 = v820 + HIDWORD(v1604[9]) - HIDWORD(v1604[10]);
                                                LODWORD(v1445) = v823;
                                                LODWORD(v1433) = v824;
                                              }
                                              else
                                              {
                                                v823 = v1445;
                                                v824 = v1433;
                                              }
                                              v825 = v824 + v821;
                                              v826 = LODWORD(v1604[10]) - LODWORD(v1604[8]);
                                              LODWORD(v1402) = LODWORD(v1604[9]) - LODWORD(v1604[8]);
                                              HIDWORD(v1445) = LODWORD(v1604[9]) - LODWORD(v1604[8]);
                                              v1320 = LODWORD(v1604[11]) - LODWORD(v1604[8]);
                                              v827 = v823 + HIDWORD(v1604[8]) - HIDWORD(v1604[7]);
                                              HIDWORD(v1433) = LODWORD(v1604[11]) - LODWORD(v1604[8]);
                                              v828 = LODWORD(v1604[11]) - LODWORD(v1604[8]);
                                              DWORD2(v1445) = v827;
                                              DWORD2(v1433) = v824 + v821;
                                              DWORD1(v1433) = LODWORD(v1604[10]) - LODWORD(v1604[8]);
                                            }
                                            else
                                            {
                                              v820 = v1400;
                                              v828 = HIDWORD(v1400);
                                              v1445 = *(_OWORD *)((char *)&v1604[7] + 4);
                                              v827 = HIDWORD(v1604[8]);
                                              v823 = HIDWORD(v1604[7]);
                                              v1433 = *(_OWORD *)((char *)&v1604[9] + 4);
                                              v826 = (int)v1604[10];
                                              v824 = HIDWORD(v1604[9]);
                                              LODWORD(v1402) = v1604[9];
                                              v1320 = (int)v1604[11];
                                              v825 = HIDWORD(v1604[10]);
                                              v822 = v1400;
                                            }
                                            v1327 = v825;
                                            LODWORD(v1347) = v826;
                                            v1557 = 0LL;
                                            memset(v1626, 0, 0x2CuLL);
                                            v1626[0] = 40;
                                            v1626[1] = v820;
                                            v1626[2] = -v828;
                                            v1626[3] = 2097153;
                                            v829 = ((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18014A018[0])(
                                                     v1358,
                                                     v1626,
                                                     0LL,
                                                     &v1557,
                                                     0LL,
                                                     0);
                                            v1421 = v829;
                                            if ( !v829 )
                                            {
                                              GetLastError();
                                              v818 = v1358;
                                              LODWORD(v762) = 0;
                                              v465 = v1297;
LABEL_1334:
                                              if ( v818 )
                                                ((void (__fastcall *)(LPVOID))off_18014A030[0])(v818);
                                              goto LABEL_1336;
                                            }
                                            ((void (__fastcall *)(LPVOID, __int64))off_18014A078)(v1358, v829);
                                            if ( v1340 == 1 && v1401 )
                                            {
                                              v1624 = v828;
                                              v1623 = v820;
                                              v818 = v1358;
                                              v1622 = 0LL;
                                              ((void (__fastcall *)(LPVOID, __int64 *, __int64))off_18014A0E8[0])(
                                                v1358,
                                                &v1622,
                                                v1401);
                                            }
                                            else
                                            {
                                              v818 = v1358;
                                            }
                                            v830 = v1604[1];
                                            v1295 = HIDWORD(v1604[0]);
                                            v1403 = v1604[4];
                                            memset(v1607, 0, 0x68uLL);
                                            memset(v1613, 0, 0x68uLL);
                                            v1386 = 0LL;
                                            LODWORD(v1380) = 0;
                                            LODWORD(v1355) = 0;
                                            memset(v1630, 0, 0x2CuLL);
                                            v1618 = 0LL;
                                            v1619 = 0LL;
                                            if ( !v1604[1] )
                                              goto LABEL_1330;
                                            v831 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18014A050[0])(
                                                     v818,
                                                     7LL);
                                            if ( !v831 )
                                              goto LABEL_1329;
                                            if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18014A068[0])(
                                                   v831,
                                                   104LL,
                                                   v1607) )
                                            {
                                              v1386 = (void *)v1607[3];
                                              LODWORD(v1380) = HIDWORD(v1607[0]);
                                              LODWORD(v1355) = v1607[1];
                                            }
                                            v1337 = (LPVOID)((__int64 (__fastcall *)(LPVOID))off_18014A010[0])(v818);
                                            if ( !v1337 )
                                              goto LABEL_1329;
                                            v1558 = 0LL;
                                            v832 = 0;
                                            memset(v1630, 0, 0x2CuLL);
                                            v1630[0] = 40;
                                            v1630[1] = v827 - v823;
                                            v1313 = v827 - v823;
                                            v833 = DWORD1(v1445);
                                            v1630[2] = DWORD1(v1445) - v1402;
                                            v1630[3] = 2097153;
                                            v834 = (const WCHAR *)((__int64 (__fastcall *)(LPVOID, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18014A018[0])(
                                                                    v1337,
                                                                    v1630,
                                                                    0LL,
                                                                    &v1558,
                                                                    0LL,
                                                                    0);
                                            lpModuleName = v834;
                                            if ( v834 )
                                            {
                                              v836 = ((__int64 (__fastcall *)(const WCHAR *, __int64, _QWORD *))off_18014A068[0])(
                                                       v834,
                                                       104LL,
                                                       v1613);
                                              v837 = 0LL;
                                              LODWORD(v1619) = v1313;
                                              if ( v836 )
                                                v837 = v1613[3];
                                              HIDWORD(v1619) = v1402 - v833;
                                              v1391 = v837;
                                              ((void (__fastcall *)(LPVOID, LPCWSTR))off_18014A078)(v1337, lpModuleName);
                                              ((void (__fastcall *)(LPVOID, __int64))off_18014A080)(v1337, 1LL);
                                              v1387 = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, void *))off_18014A078)(
                                                                 v1337,
                                                                 v1403);
                                              v838 = ((__int64 (__fastcall *)(_QWORD))off_18014A070[0])(0LL);
                                              ((void (__fastcall *)(LPVOID, __int64 *, __int64))off_18014A0E8[0])(
                                                v1337,
                                                &v1618,
                                                v838);
                                              v839 = v830;
                                              v840 = v1337;
                                              ((void (__fastcall *)(LPVOID, void *, __int64, __int64 *, unsigned int, _QWORD))off_18014A0D8)(
                                                v1337,
                                                v839,
                                                0xFFFFFFFFLL,
                                                &v1618,
                                                v1376,
                                                0LL);
                                              if ( v1340 == 1 )
                                              {
                                                if ( v1295 )
                                                  v1314 = ((__int64 (__fastcall *)(__int64))off_18014A118[0])(8LL);
                                                else
                                                  v1314 = 0xFFFFFF;
                                              }
                                              else
                                              {
                                                v1314 = -5723992;
                                              }
                                              v841 = 0;
                                              v842 = 0;
                                              if ( v823 < 0 )
                                              {
                                                v843 = v823;
                                                v823 = 0;
                                                v841 = -v843;
                                              }
                                              if ( v833 < 0 )
                                              {
                                                v844 = v833;
                                                v833 = 0;
                                                v842 = -v844;
                                              }
                                              v845 = v1619 - v841;
                                              if ( (int)v1619 - v841 >= (int)v1380 - v823 )
                                                v845 = (_DWORD)v1380 - v823;
                                              v846 = HIDWORD(v1619) - v842;
                                              if ( HIDWORD(v1619) - v842 >= (int)v1355 - v833 )
                                                v846 = (_DWORD)v1355 - v833;
                                              if ( v845 > 0 && v846 > 0 )
                                              {
                                                v847 = v841;
                                                v848 = (int)v1380;
                                                v849 = v1391 + 4 * (v847 + (int)v1619 * v842);
                                                v1402 = v849;
                                                v1380 = (char *)v1386 + 4 * v823 + 4 * (__int64)((int)v1380 * v833);
                                                v850 = v848;
                                                v851 = v1380;
                                                v1391 = 4LL * (int)v1619;
                                                v1403 = (void *)(4 * v850);
                                                do
                                                {
                                                  LODWORD(v1355) = 0;
                                                  v852 = 0;
                                                  v853 = (unsigned __int8 *)(v849 + 2);
                                                  v854 = &v851[-v849];
                                                  do
                                                  {
                                                    if ( (unsigned __int8)((*v853
                                                                          + *(v853 - 2)
                                                                          + 2 * (unsigned int)*(v853 - 1)) >> 2) != 0xFF )
                                                    {
                                                      v855 = (unsigned __int8)~((*v853
                                                                               + *(v853 - 2)
                                                                               + 2 * (unsigned int)*(v853 - 1)) >> 2);
                                                      v853[(_QWORD)v854] -= ~((*v853
                                                                             + *(v853 - 2)
                                                                             + 2 * (unsigned int)*(v853 - 1)) >> 2)
                                                                          * (v1314 - v853[(_QWORD)v854]);
                                                      v856 = (unsigned __int8)v854[(_QWORD)v853 - 1];
                                                      v857 = (unsigned __int64)(2155905153LL
                                                                              * v855
                                                                              * (BYTE1(v1314) - v856)) >> 32;
                                                      v854[(_QWORD)v853 - 1] = v856 + (v857 >> 7 < 0) + (v857 >> 7);
                                                      v858 = (unsigned __int8)v854[(_QWORD)v853 - 2];
                                                      v859 = (unsigned __int64)(2155905153LL
                                                                              * v855
                                                                              * (BYTE2(v1314) - v858)) >> 32;
                                                      v854[(_QWORD)v853 - 2] = v858 + (v859 >> 7 < 0) + (v859 >> 7);
                                                      v852 = (int)v1355;
                                                      v854[(_QWORD)v853 + 1] += v855
                                                                              * (255
                                                                               - (unsigned __int8)v854[(_QWORD)v853 + 1])
                                                                              / 255;
                                                    }
                                                    ++v852;
                                                    v853 += 4;
                                                    LODWORD(v1355) = v852;
                                                  }
                                                  while ( v852 < v845 );
                                                  v849 = v1391 + v1402;
                                                  v851 = &v1380[(_QWORD)v1403];
                                                  ++v832;
                                                  v1402 += v1391;
                                                  v1380 = &v1380[(_QWORD)v1403];
                                                }
                                                while ( v832 < v846 );
                                                v826 = v1347;
                                                v832 = 0;
                                                v840 = v1337;
                                              }
                                              ((void (__fastcall *)(LPCWSTR))off_18014A038)(lpModuleName);
                                              if ( v1387 )
                                                ((void (__fastcall *)(LPVOID, LPCWSTR))off_18014A078)(v840, v1387);
                                            }
                                            else
                                            {
                                              v835 = GetLastError();
                                              v832 = v835;
                                              if ( v835 > 0 )
                                                v832 = (unsigned __int16)v835 | 0x80070000;
                                              if ( v832 >= 0 )
                                                v832 = -2147467259;
                                            }
                                            ((void (__fastcall *)(LPVOID))off_18014A030[0])(v1337);
                                            if ( v832 < 0 )
                                              goto LABEL_1291;
                                            v860 = v1604[2];
                                            v1288 = HIDWORD(v1604[0]);
                                            v1387 = (LPCWSTR)v1604[5];
                                            memset(v1606, 0, 0x68uLL);
                                            memset(v1610, 0, 0x68uLL);
                                            lpModuleName = 0LL;
                                            LODWORD(v1347) = 0;
                                            LODWORD(v1355) = 0;
                                            memset(v1629, 0, 0x2CuLL);
                                            v818 = v1358;
                                            v1620 = 0LL;
                                            v1621 = 0LL;
                                            if ( !v1604[2] )
                                            {
LABEL_1330:
                                              LODWORD(v762) = 0;
                                              goto LABEL_1331;
                                            }
                                            v861 = ((__int64 (__fastcall *)(LPVOID, __int64))off_18014A050[0])(
                                                     v1358,
                                                     7LL);
                                            if ( !v861 )
                                            {
LABEL_1329:
                                              GetLastError();
                                              goto LABEL_1330;
                                            }
                                            if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD *))off_18014A068[0])(
                                                   v861,
                                                   104LL,
                                                   v1606) )
                                            {
                                              lpModuleName = (LPCWSTR)v1606[3];
                                              LODWORD(v1347) = HIDWORD(v1606[0]);
                                              LODWORD(v1355) = v1606[1];
                                            }
                                            v1403 = (void *)((__int64 (__fastcall *)(LPVOID))off_18014A010[0])(v818);
                                            v862 = v1403;
                                            if ( !v1403 )
                                            {
                                              GetLastError();
LABEL_1291:
                                              v818 = v1358;
                                              goto LABEL_1330;
                                            }
                                            v1561 = 0LL;
                                            v863 = 0;
                                            memset(v1629, 0, 0x2CuLL);
                                            v1629[0] = 40;
                                            v1328 = v1327 - v824;
                                            v1629[1] = v1328;
                                            v1629[3] = 2097153;
                                            v1629[2] = v826 - v1320;
                                            v864 = (void *)((__int64 (__fastcall *)(void *, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_18014A018[0])(
                                                             v1403,
                                                             v1629,
                                                             0LL,
                                                             &v1561,
                                                             0LL,
                                                             0);
                                            v1386 = v864;
                                            if ( !v864 )
                                            {
                                              v865 = GetLastError();
                                              v863 = v865;
                                              if ( v865 > 0 )
                                                v863 = (unsigned __int16)v865 | 0x80070000;
                                              v866 = v1340;
                                              LODWORD(v762) = 0;
                                              if ( v863 >= 0 )
                                                v863 = -2147467259;
                                              goto LABEL_1324;
                                            }
                                            v867 = ((__int64 (__fastcall *)(void *, __int64, _QWORD *))off_18014A068[0])(
                                                     v864,
                                                     104LL,
                                                     v1610);
                                            v868 = 0LL;
                                            LODWORD(v1621) = v1328;
                                            if ( v867 )
                                              v868 = v1610[3];
                                            v1391 = v868;
                                            HIDWORD(v1621) = v1320 - v826;
                                            ((void (__fastcall *)(void *, void *))off_18014A078)(v862, v1386);
                                            ((void (__fastcall *)(void *, __int64))off_18014A080)(v862, 1LL);
                                            v1338 = (LPVOID)((__int64 (__fastcall *)(void *, LPCWSTR))off_18014A078)(
                                                              v862,
                                                              v1387);
                                            v869 = ((__int64 (__fastcall *)(_QWORD))off_18014A070[0])(0LL);
                                            ((void (__fastcall *)(void *, __int64 *, __int64))off_18014A0E8[0])(
                                              v862,
                                              &v1620,
                                              v869);
                                            ((void (__fastcall *)(void *, void *, __int64, __int64 *, unsigned int, _QWORD))off_18014A0D8)(
                                              v862,
                                              v860,
                                              0xFFFFFFFFLL,
                                              &v1620,
                                              v1376,
                                              0LL);
                                            v866 = v1340;
                                            if ( v1340 == 1 )
                                            {
                                              if ( !v1288 )
                                              {
                                                v1329 = 0xFFFFFF;
LABEL_1305:
                                                v871 = 0;
                                                v872 = 0;
                                                if ( v824 < 0 )
                                                {
                                                  v873 = v824;
                                                  v824 = 0;
                                                  v871 = -v873;
                                                }
                                                if ( v826 < 0 )
                                                {
                                                  v874 = v826;
                                                  v826 = 0;
                                                  v872 = -v874;
                                                }
                                                v875 = v1621 - v871;
                                                if ( (int)v1621 - v871 >= (int)v1347 - v824 )
                                                  v875 = v1347 - v824;
                                                v876 = HIDWORD(v1621) - v872;
                                                if ( HIDWORD(v1621) - v872 >= (int)v1355 - v826 )
                                                  v876 = (_DWORD)v1355 - v826;
                                                if ( v875 > 0 && v876 > 0 )
                                                {
                                                  v877 = v1391 + 4 * (v871 + (__int64)((int)v1621 * v872));
                                                  v878 = &lpModuleName[2 * v824 + 2 * (__int64)((int)v1347 * v826)];
                                                  v1321 = 0;
                                                  lpModuleName = v878;
                                                  v1387 = (LPCWSTR)(4LL * (int)v1621);
                                                  v1391 = 4LL * (int)v1347;
                                                  do
                                                  {
                                                    v879 = 0;
                                                    v880 = (unsigned __int8 *)(v877 + 2);
                                                    v881 = (char *)v878 - v877;
                                                    do
                                                    {
                                                      if ( (unsigned __int8)((*v880
                                                                            + *(v880 - 2)
                                                                            + 2 * (unsigned int)*(v880 - 1)) >> 2) != 0xFF )
                                                      {
                                                        v882 = (unsigned __int8)~((*v880
                                                                                 + *(v880 - 2)
                                                                                 + 2 * (unsigned int)*(v880 - 1)) >> 2);
                                                        v880[(_QWORD)v881] -= ~((*v880
                                                                               + *(v880 - 2)
                                                                               + 2 * (unsigned int)*(v880 - 1)) >> 2)
                                                                            * (v1341 - v880[(_QWORD)v881]);
                                                        v883 = (unsigned __int8)v881[(_QWORD)v880 - 1];
                                                        v884 = (unsigned __int64)(2155905153LL
                                                                                * v882
                                                                                * (BYTE1(v1329) - v883)) >> 32;
                                                        v881[(_QWORD)v880 - 1] = v883 + (v884 >> 7 < 0) + (v884 >> 7);
                                                        v885 = (unsigned __int8)v881[(_QWORD)v880 - 2];
                                                        v886 = (unsigned __int64)(2155905153LL
                                                                                * v882
                                                                                * (BYTE2(v1329) - v885)) >> 32;
                                                        v881[(_QWORD)v880 - 2] = v885 + (v886 >> 7 < 0) + (v886 >> 7);
                                                        v881[(_QWORD)v880 + 1] += v882
                                                                                * (255
                                                                                 - (unsigned __int8)v881[(_QWORD)v880 + 1])
                                                                                / 255;
                                                      }
                                                      v880 += 4;
                                                      ++v879;
                                                    }
                                                    while ( v879 < v875 );
                                                    v887 = v1321;
                                                    v878 = (LPCWSTR)((char *)lpModuleName + v1391);
                                                    v877 += (SIZE_T)v1387;
                                                    lpModuleName = (LPCWSTR)((char *)lpModuleName + v1391);
                                                    ++v1321;
                                                  }
                                                  while ( v887 + 1 < v876 );
                                                  v863 = 0;
                                                  v862 = v1403;
                                                  v866 = v1340;
                                                }
                                                LODWORD(v762) = 0;
                                                ((void (__fastcall *)(void *))off_18014A038)(v1386);
                                                if ( v1338 )
                                                  ((void (__fastcall *)(void *, LPVOID))off_18014A078)(v862, v1338);
LABEL_1324:
                                                ((void (__fastcall *)(void *))off_18014A030[0])(v862);
                                                v818 = v1358;
                                                if ( v863 >= 0 )
                                                {
                                                  v465 = v1297;
                                                  if ( v866 == 1 )
                                                    ((void (__fastcall *)(LPVOID, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, int))off_18014A000[0])(
                                                      v1297,
                                                      HIDWORD(v1604[7]),
                                                      LODWORD(v1604[8]),
                                                      (unsigned int)v822,
                                                      HIDWORD(v822),
                                                      v1358,
                                                      0,
                                                      0,
                                                      13369376);
                                                  else
                                                    ((void (__fastcall *)(LPVOID, _QWORD, _QWORD))off_18014A040[0])(
                                                      v1297,
                                                      (unsigned int)v1399,
                                                      HIDWORD(v1399));
                                                  goto LABEL_1328;
                                                }
LABEL_1331:
                                                v465 = v1297;
LABEL_1332:
                                                if ( v1421 )
                                                  ((void (__fastcall *)(__int64))off_18014A038)(v1421);
                                                goto LABEL_1334;
                                              }
                                              v870 = ((__int64 (__fastcall *)(__int64))off_18014A118[0])(8LL);
                                            }
                                            else
                                            {
                                              v870 = -5723992;
                                            }
                                            v1329 = v870;
                                            v1341 = v870;
                                            goto LABEL_1305;
                                          }
                                          ((void (__fastcall *)(_QWORD, _DWORD *))off_18014A140[0])(0LL, &v1625[5]);
                                          ((void (__fastcall *)(_QWORD, _DWORD *))off_18014A140[0])(0LL, &v1625[7]);
                                          if ( v746 )
                                            v750 = v1625[5] + 5 * v1625[7] / 100;
                                          else
                                            v750 = 95 * (v1625[7] - v748) / 100;
                                          v751 = 95 * (v1625[8] - v747);
                                          break;
                                        case 3u:
                                          memset(v1631, 0, sizeof(v1631));
                                          v749 = ((__int64 (__fastcall *)(_QWORD, __int64))off_18014A148[0])(0LL, 1LL);
                                          v1631[0] = 40;
                                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))off_18014A108)(
                                                                v749,
                                                                v1631) )
                                            goto LABEL_1121;
                                          ((void (__fastcall *)(_QWORD, _DWORD *))off_18014A140[0])(0LL, &v1631[5]);
                                          ((void (__fastcall *)(_QWORD, _DWORD *))off_18014A140[0])(0LL, &v1631[7]);
                                          v750 = 50 * (v1631[7] - v748) / 100;
                                          v751 = 50 * (v1631[8] - v747);
                                          break;
                                        default:
                                          goto LABEL_1121;
                                      }
                                      LODWORD(v1399) = v750;
                                      HIDWORD(v1399) = v751 / 100;
                                      goto LABEL_1121;
                                    }
                                  }
LABEL_1122:
                                  v615 = v1340;
                                  goto LABEL_1124;
                                }
                              }
                              goto LABEL_1123;
                            }
                            if ( v1340 != 3 )
                              goto LABEL_1062;
                          }
                          v731 = v1461;
                          v732 = HIDWORD(v1461);
                          goto LABEL_1062;
                        }
                        v1376 = 15;
                      }
                      v1323 = 11;
                      goto LABEL_1024;
                    }
                    v708 = GetLastError();
                    v1312 = v708;
                    v709 = v708;
                    if ( v708 > 0 )
                    {
                      v709 = (unsigned __int16)v708 | 0x80070000;
                      v1312 = v709;
                    }
                    if ( v709 < 0 )
                    {
LABEL_998:
                      v713 = 3LL;
                      do
                      {
                        v714 = (_WORD *)*v696;
                        if ( *v696 )
                        {
                          v715 = -1LL;
                          do
                            v62 = v714[++v715] == 0;
                          while ( !v62 );
                          memset(v714, 0, 2 * v715 + 2);
                          operator delete((void *)*v696);
                        }
                        ++v696;
                        --v713;
                      }
                      while ( v713 );
                      v617 = v1312;
                      v641 = v1300;
                      v637 = v1285;
                      v615 = v1340;
                      goto LABEL_1007;
                    }
                  }
                  else
                  {
                    v711 = GetLastError();
                    v1312 = v711;
                    v712 = v711;
                    if ( v711 > 0 )
                    {
                      v712 = (unsigned __int16)v711 | 0x80070000;
                      v1312 = v712;
                    }
                    if ( v712 < 0 )
                      goto LABEL_998;
                  }
                  break;
                }
                v710 = -2147467259;
                goto LABEL_997;
              }
              v551 = dword_18014BF38;
              v465 = v1297;
LABEL_910:
              dword_18014BF38 = v551 + 1;
              goto LABEL_911;
            }
            operator delete((void *)lpModuleName);
          }
          v592 = -1073741702;
          goto LABEL_901;
        }
        v487 = dword_18014BF38;
        v465 = v1297;
LABEL_860:
        dword_18014BF38 = v487 + 1;
        goto LABEL_861;
      }
      operator delete((void *)lpModuleName);
    }
    v528 = -1073741702;
    goto LABEL_851;
  }
LABEL_461:
  v77 = 0LL;
  v388 = v1430;
  v1560 = v1410;
  hMem = v1534;
LABEL_462:
  while ( _InterlockedCompareExchange(&dword_18014C670, 1, 0) )
    ;
  v389 = dword_18014BF38;
  if ( dword_18014BF38 > 0 )
  {
    --dword_18014BF38;
    if ( v389 == 1 )
    {
      v390 = (HMODULE *)&unk_18014C330;
      do
      {
        if ( *v390 )
          FreeLibrary(*v390);
        v390 += 3;
        --v5;
      }
      while ( v5 );
      memset(&unk_18014C330, 0, 0x60uLL);
      memcpy_0(off_18014A000, off_1800F4B40, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_18014C670, 0);
  if ( v77 )
    LocalFree(v77);
  if ( (int)v1 >= 0 && v388 == 4 )
  {
    v391 = (unsigned int *)hMem;
    if ( !hMem )
      v391 = 0LL;
    v2 = v1509;
    *v1509 = *v391;
  }
  else
  {
    v2 = v1509;
  }
  if ( hMem )
  {
    LocalFree(hMem);
    hMem = 0LL;
  }
  v3 = v1529;
LABEL_480:
  if ( *v2 > 0xC || (v392 = 6184, !_bittest(&v392, *v2)) )
  {
    *((_DWORD *)v3 + 31) = 2;
    v1282 = 0;
    goto LABEL_1850;
  }
  v1446 = 0LL;
  v1447 = 0;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
    && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
  {
    *((_DWORD *)v3 + 31) = 3;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(v3, (struct DolbyLicenseResult *)&v1446);
    AtmosCheck::EnableAllAtmosCapabilities(v3);
    v1282 = IsLogLicenseResult;
LABEL_1850:
    AtmosCheck::TraceResult(v3, 0, v1282);
    return 0;
  }
  if ( *v2 != 3 )
    return 1;
  *(_OWORD *)hKey = 0LL;
  if ( !(unsigned __int8)DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent((DolbyOEMLicenseCheck *)hKey) )
  {
    if ( hKey[1] )
      BCryptDestroyKey(hKey[1]);
    if ( hKey[0] )
      BCryptCloseAlgorithmProvider(hKey[0], 0);
    return 1;
  }
  *((_DWORD *)v3 + 31) = 1;
  v1283 = AtmosCheck::IsLogLicenseResult(v3, (struct DolbyLicenseResult *)&v1446);
  AtmosCheck::EnableAllAtmosCapabilities(v3);
  AtmosCheck::TraceResult(v3, 0, v1283);
  CRSABCrypt::~CRSABCrypt((CRSABCrypt *)hKey);
  return 0;
}
