/*
 * XREFs of sub_1401947F0 @ 0x1401947F0
 * Callers:
 *     <none>
 * Callees:
 *     KeVerifyGroupAffinity @ 0x140004C4C (KeVerifyGroupAffinity.c)
 *     KeCheckProcessorGroupAffinity @ 0x140040750 (KeCheckProcessorGroupAffinity.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAreApcsDisabled @ 0x140074200 (KeAreApcsDisabled.c)
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     sub_14019FEBC @ 0x14019FEBC (sub_14019FEBC.c)
 *     sub_14019FF9C @ 0x14019FF9C (sub_14019FF9C.c)
 *     sub_1401A0EC4 @ 0x1401A0EC4 (sub_1401A0EC4.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     KiGetNtDdiVersion @ 0x1402410DC (KiGetNtDdiVersion.c)
 *     sub_1402E68D4 @ 0x1402E68D4 (sub_1402E68D4.c)
 *     sub_1402E732C @ 0x1402E732C (sub_1402E732C.c)
 *     sub_1402E7BC8 @ 0x1402E7BC8 (sub_1402E7BC8.c)
 *     KiGetGdtIdt @ 0x1402E9440 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x1402E9450 (KiGetLdtr.c)
 *     KiGetTr @ 0x1402E9460 (KiGetTr.c)
 *     KiErrata704Present @ 0x1402E9470 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x1402E9520 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x1402E97E0 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x1402E9954 (RtlInitMinimalBarrier.c)
 *     ExFreePool @ 0x1402EA010 (ExFreePool.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     sub_14087CF84 @ 0x14087CF84 (sub_14087CF84.c)
 */

__int64 __fastcall sub_1401947F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v5; // rsi
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rax
  SIZE_T v13; // rbx
  _SLIST_ENTRY *PoolWithTag; // rax
  PSLIST_ENTRY v15; // rax
  PSLIST_ENTRY v16; // r13
  PSLIST_ENTRY v17; // r15
  __int64 v18; // rdx
  _SLIST_ENTRY *v19; // rcx
  _SLIST_ENTRY *v20; // rax
  _SLIST_ENTRY v21; // xmm1
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // esi
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int128 v33; // rax
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int128 v38; // rax
  unsigned __int64 v39; // rbx
  _BYTE *v40; // rax
  int v41; // ecx
  unsigned int Next; // ecx
  unsigned int v43; // ebx
  unsigned int v44; // r12d
  unsigned __int64 *v45; // r15
  int v46; // eax
  __int64 v47; // r9
  int v48; // r8d
  char *v49; // r13
  unsigned int v50; // ecx
  __int64 v51; // r10
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rax
  int v59; // r8d
  unsigned __int64 v60; // rcx
  int v61; // edx
  __int64 v62; // r9
  bool v63; // zf
  int v64; // ecx
  __int64 v65; // r8
  __int64 v66; // rcx
  unsigned __int64 *v67; // rdx
  unsigned __int64 v68; // r11
  int v69; // eax
  int v70; // r9d
  unsigned __int64 v71; // r10
  unsigned int *v72; // rcx
  int v73; // r14d
  int v74; // ecx
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r13
  __int64 v78; // r8
  _QWORD *v79; // r9
  const char *v80; // rax
  int v81; // r11d
  __int64 v82; // r15
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rbx
  unsigned int v85; // r10d
  __int64 v86; // rax
  __int64 v87; // rbx
  unsigned __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // r8
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int64 i16; // rax
  __int64 v94; // rsi
  unsigned int v95; // ecx
  unsigned int v96; // ebx
  unsigned __int8 v97; // r12
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // r13
  unsigned __int64 v100; // r15
  int v101; // eax
  int *v102; // rcx
  bool v103; // zf
  __int64 v104; // rax
  __int64 v105; // rcx
  __int16 v106; // ax
  _QWORD *v107; // rsi
  __int64 v108; // r8
  _QWORD *v109; // r9
  const char *v110; // rax
  int v111; // r11d
  unsigned __int64 v112; // r14
  unsigned __int64 v113; // rbx
  unsigned int v114; // r10d
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rbx
  unsigned __int64 v118; // rcx
  __int64 v119; // rdx
  unsigned int v120; // r8d
  unsigned __int64 v121; // rdx
  __int64 v122; // rax
  unsigned __int64 i20; // rax
  unsigned int v124; // ebx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // r8
  unsigned __int8 v128; // r12
  unsigned __int64 v129; // rsi
  unsigned __int64 v130; // r13
  unsigned __int64 v131; // r14
  int v132; // eax
  __int16 v133; // ax
  __int64 v134; // rcx
  int (__fastcall *v135)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64); // rax
  __int64 v136; // rcx
  int v137; // eax
  __int64 v138; // rcx
  unsigned int i15; // r10d
  __int64 v140; // rcx
  unsigned __int64 v141; // rdx
  __int64 v142; // r9
  __int64 v143; // r8
  unsigned __int64 v144; // rdx
  unsigned __int64 v145; // r9
  int v146; // ecx
  int v147; // r13d
  bool v148; // zf
  unsigned __int64 v149; // rax
  unsigned __int128 v150; // rax
  void (*v151)(void); // rax
  __int64 v152; // rbx
  int v153; // r14d
  unsigned int v154; // ecx
  unsigned __int8 v155; // si
  volatile signed __int8 **v156; // rcx
  volatile signed __int8 *v157; // rax
  unsigned int **v158; // rax
  unsigned __int64 v159; // rbx
  int *v160; // r14
  __int64 v161; // r15
  unsigned __int64 v162; // r12
  __int64 *v163; // rax
  __int64 v164; // r9
  __int64 *v165; // r8
  unsigned __int64 v166; // rcx
  char v167; // dl
  __int64 v168; // rax
  bool v169; // zf
  int v170; // r14d
  int v171; // r14d
  int v172; // r14d
  __int64 v173; // rsi
  unsigned int v174; // ecx
  void (__fastcall *v175)(__int64, _QWORD); // rax
  __int64 **v176; // r9
  __int64 *v177; // r8
  __int64 v178; // rcx
  __int64 v179; // rsi
  _QWORD **v180; // r9
  _QWORD *v181; // rdx
  volatile signed __int8 *v182; // rcx
  _QWORD *v183; // rsi
  __int64 v184; // r8
  _QWORD *v185; // r9
  const char *v186; // rax
  int v187; // r11d
  unsigned __int64 v188; // r14
  unsigned __int64 v189; // rbx
  unsigned int v190; // r10d
  __int64 v191; // rdx
  __int64 v192; // rax
  __int64 v193; // rbx
  unsigned __int64 v194; // rcx
  __int64 v195; // rdx
  unsigned int v196; // r8d
  unsigned __int64 v197; // rdx
  __int64 v198; // rax
  unsigned __int64 i14; // rax
  unsigned int v200; // ebx
  __int64 v201; // rcx
  __int64 v202; // rdx
  __int64 v203; // r8
  unsigned __int8 v204; // r12
  unsigned __int64 v205; // rsi
  unsigned __int64 v206; // r13
  unsigned __int64 v207; // r14
  int v208; // eax
  int v209; // eax
  __int64 v210; // rcx
  __int64 v211; // rax
  __int64 v212; // rcx
  unsigned int v213; // edx
  int v214; // ecx
  unsigned __int64 v215; // rbx
  unsigned __int64 i24; // rsi
  _QWORD *v217; // rsi
  __int64 v218; // r8
  _QWORD *v219; // r9
  const char *v220; // rax
  int v221; // r11d
  __int64 v222; // r14
  unsigned __int64 v223; // rbx
  unsigned int v224; // r10d
  __int64 v225; // rax
  __int64 v226; // rbx
  unsigned __int64 v227; // rcx
  __int64 v228; // rdx
  unsigned int v229; // r8d
  unsigned __int64 v230; // rax
  __int64 v231; // rax
  unsigned __int64 i25; // rax
  unsigned int v233; // edx
  unsigned int v234; // ebx
  __int64 v235; // rcx
  __int64 v236; // r8
  unsigned __int8 v237; // r15
  unsigned __int64 v238; // rsi
  __int64 v239; // r13
  unsigned __int64 v240; // r12
  int v241; // eax
  void (*v242)(void); // rax
  _QWORD *v243; // r12
  __int64 v244; // rsi
  __int64 v245; // r15
  unsigned int v246; // ecx
  volatile signed __int8 **v247; // rcx
  volatile signed __int8 *v248; // rax
  _QWORD **v249; // r9
  _QWORD *v250; // r8
  __int64 v251; // rdx
  __int64 v252; // rcx
  _QWORD **v253; // r15
  __int64 (*v254)(void); // rax
  __int64 v255; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v257; // rdx
  unsigned int v258; // r13d
  unsigned int *v259; // rcx
  __int64 v260; // r12
  _QWORD *v261; // rax
  __int64 v262; // r8
  unsigned __int64 v263; // rax
  __int64 v264; // rcx
  unsigned __int128 v265; // rt2
  int v266; // ebx
  unsigned __int64 v267; // rax
  unsigned __int128 v268; // rax
  unsigned __int64 v269; // rsi
  __int64 v270; // rax
  __int64 v271; // r11
  int v272; // r10d
  _QWORD *v273; // r9
  unsigned __int64 v274; // r8
  unsigned __int64 v275; // rax
  unsigned __int128 v276; // rax
  unsigned __int64 v277; // rax
  unsigned __int128 v278; // rax
  unsigned __int64 v279; // rdx
  unsigned int v280; // ebx
  _QWORD *v281; // r8
  unsigned __int64 v282; // rax
  unsigned __int128 v283; // rax
  unsigned __int64 v284; // rax
  unsigned __int128 v285; // rax
  unsigned __int64 v286; // rdx
  __int64 v287; // r14
  _QWORD *v288; // rbx
  __int64 v289; // rsi
  unsigned __int64 v290; // rsi
  unsigned __int64 v291; // r15
  unsigned __int64 v292; // rbx
  int v293; // edx
  int v294; // r8d
  int v295; // ecx
  unsigned __int64 v296; // r9
  int *v297; // rcx
  unsigned __int64 v298; // rax
  unsigned __int128 v299; // rax
  __int64 v300; // r12
  int v301; // ecx
  int v302; // ecx
  int v303; // ecx
  int v304; // ecx
  int v305; // ecx
  _QWORD *v306; // rbx
  unsigned int v307; // r13d
  unsigned int v308; // esi
  __int64 v309; // r14
  _QWORD *v310; // rcx
  int v311; // edx
  __int64 v312; // r8
  char v313; // al
  __int64 v314; // rax
  __int64 v315; // rcx
  __int64 (__fastcall *v316)(_QWORD); // rax
  __int64 v317; // r14
  char *v318; // r12
  char *v319; // rbx
  int v320; // r15d
  __int64 v321; // rsi
  _QWORD *v322; // rcx
  int v323; // edx
  __int64 v324; // r8
  char v325; // al
  __int64 v326; // rax
  __int64 v327; // rax
  __int64 (__fastcall *v328)(__int64); // rax
  _BYTE *v329; // r12
  __int64 *v330; // rax
  __int64 v331; // rbx
  int *v332; // rcx
  __int64 v333; // rax
  __int64 v334; // rax
  __int64 v335; // rax
  __int64 (__fastcall *v336)(__int64, unsigned __int64, unsigned __int64); // rax
  __int64 v337; // rax
  __int64 v338; // r9
  __int64 v339; // r13
  int v340; // ecx
  __int64 v341; // r14
  _BYTE *v342; // rax
  int v343; // r15d
  __int64 v344; // rdx
  int v345; // ecx
  unsigned int v346; // esi
  int v347; // r10d
  unsigned int v348; // r11d
  __int64 v349; // rbx
  int *v350; // r8
  __int64 v351; // r9
  int v352; // ecx
  int v353; // ecx
  int v354; // ecx
  int v355; // ecx
  __int64 v356; // rax
  int v357; // eax
  unsigned __int64 v358; // rcx
  __int64 v359; // r11
  int v360; // eax
  __int64 v361; // rdx
  int v362; // esi
  int v363; // eax
  __int64 (__fastcall *v364)(__int64, __int64, _QWORD, unsigned __int64); // rax
  __int64 v365; // rcx
  __int64 v366; // rax
  __int64 v367; // rcx
  __int64 v368; // rdx
  __int64 (__fastcall *v369)(__int64, __int64, __int64, unsigned __int64); // rax
  __int64 v370; // rax
  __int64 v371; // rdx
  int v372; // ecx
  __int64 (__fastcall *v373)(_QWORD, __int64, __int64, unsigned __int64); // rax
  __int64 v374; // rax
  __int64 v375; // rcx
  int v376; // edx
  __int64 (__fastcall *v377)(__int64); // rax
  __int64 v378; // rax
  __int64 v379; // r14
  __int64 v380; // r8
  unsigned int v381; // eax
  int v382; // r9d
  __int64 v383; // rax
  __int64 v384; // rbx
  int v385; // edx
  unsigned int v386; // ecx
  __int64 v387; // r9
  _QWORD *v388; // rax
  int v389; // r8d
  unsigned __int64 v390; // rdx
  int v391; // esi
  int v392; // ecx
  __int64 v393; // r15
  _QWORD *v394; // r13
  unsigned int *v395; // rdi
  __int64 v396; // r12
  int v397; // ecx
  _QWORD *v398; // r14
  _QWORD *v399; // rax
  __int64 v400; // rdx
  _QWORD *v401; // r10
  const char *v402; // rax
  int v403; // esi
  __int64 v404; // r11
  unsigned __int64 v405; // r8
  unsigned int v406; // r9d
  __int64 v407; // rdx
  __int64 v408; // rax
  __int64 v409; // r8
  unsigned __int64 v410; // rcx
  __int64 v411; // rdx
  unsigned int v412; // edx
  unsigned __int64 v413; // r9
  __int64 v414; // rax
  unsigned __int64 i7; // rax
  __int64 v416; // rcx
  __int64 v417; // rax
  int v418; // r13d
  __int64 v419; // r9
  int v420; // r8d
  __int64 v421; // rdx
  unsigned int v422; // r9d
  _BYTE *v423; // rcx
  _QWORD *v424; // rbx
  _BYTE *v425; // r15
  int v426; // ecx
  _QWORD *v427; // rax
  __int64 v428; // rdx
  _QWORD *v429; // r10
  const char *v430; // rax
  int v431; // esi
  __int64 v432; // r14
  unsigned __int64 v433; // rcx
  unsigned __int64 v434; // r8
  unsigned int v435; // r11d
  __int64 v436; // rax
  __int64 v437; // r8
  unsigned __int64 v438; // rcx
  unsigned __int64 v439; // r9
  unsigned __int64 v440; // rax
  __int64 v441; // rax
  unsigned __int64 i8; // rax
  int *v443; // rcx
  int v444; // r15d
  __int64 v445; // r14
  unsigned int v446; // eax
  _BYTE *v447; // rbx
  int v448; // ecx
  unsigned int v449; // eax
  __int64 v450; // r8
  int v451; // edx
  unsigned __int64 v452; // rcx
  int v453; // esi
  int v454; // ecx
  _BYTE *v455; // r14
  _QWORD *v456; // rax
  int v457; // ecx
  __int64 v458; // rdx
  const char *v459; // r12
  __int64 v460; // r15
  int v461; // r11d
  __int64 v462; // rsi
  const char *v463; // rax
  unsigned int v464; // r10d
  __int64 v465; // rax
  __int64 v466; // r8
  unsigned __int64 v467; // rcx
  __int64 v468; // rdx
  unsigned __int64 v469; // rax
  __int64 v470; // rax
  unsigned __int64 i9; // rax
  __int64 v472; // rax
  __int64 v473; // rsi
  unsigned __int64 v474; // r14
  __int64 v475; // r15
  __int64 v476; // rax
  __int64 v477; // rcx
  unsigned __int64 v478; // rcx
  _QWORD *v479; // rax
  _QWORD *v480; // rax
  ULONG_PTR v481; // rsi
  __int64 v482; // rax
  __int64 v483; // r14
  unsigned __int16 v484; // r12
  unsigned __int128 v485; // rax
  unsigned int v486; // r9d
  unsigned int v487; // ecx
  unsigned int *v488; // r15
  __int64 v489; // r13
  __int64 v490; // r8
  _DWORD *v491; // r13
  unsigned int v492; // r12d
  unsigned int v493; // edx
  unsigned int v494; // r12d
  unsigned int v495; // eax
  __int64 v496; // rax
  unsigned int v497; // esi
  unsigned int v498; // r14d
  unsigned int v499; // esi
  unsigned int *v500; // rax
  ULONG_PTR v501; // r10
  unsigned int *v502; // rax
  unsigned int v503; // eax
  __int64 v504; // r10
  __int64 v505; // r14
  __int16 v506; // r12
  __int64 v507; // r13
  __int64 v508; // rsi
  unsigned int v509; // eax
  __int64 v510; // rax
  _BYTE *v511; // r11
  int v512; // edx
  unsigned int v513; // ecx
  __int64 v514; // r9
  int v515; // r8d
  unsigned __int64 v516; // rax
  int v517; // ebx
  int v518; // ecx
  _BYTE *v519; // rdx
  _QWORD *v520; // rax
  int v521; // ecx
  __int64 v522; // r8
  __int64 v523; // rax
  unsigned __int64 v524; // rcx
  unsigned __int64 i10; // rax
  __int64 v526; // r15
  __int64 v527; // rax
  __int64 v528; // rcx
  __int64 v529; // rax
  unsigned __int64 v530; // r12
  unsigned int *v531; // r10
  unsigned __int64 v532; // r8
  __int64 v533; // rcx
  __int64 v534; // rdx
  _DWORD *v535; // rax
  __int64 v536; // rcx
  unsigned __int8 *v537; // r13
  int v538; // r14d
  int v539; // ecx
  __int16 v540; // ax
  unsigned __int8 *v541; // r8
  unsigned __int8 *v542; // r9
  __int64 *v543; // r10
  unsigned __int8 *v544; // rbx
  unsigned __int8 *v545; // rsi
  int v546; // r11d
  __int64 v547; // rdx
  __int64 v548; // rax
  unsigned int v549; // r8d
  __int64 *v550; // r9
  __int64 v551; // rcx
  __int64 v552; // rax
  __int64 v553; // rdx
  __int64 v554; // rax
  int v555; // r9d
  unsigned __int8 *v556; // r8
  __int64 v557; // rdx
  __int64 v558; // rax
  int v559; // r9d
  unsigned __int8 *v560; // r8
  __int64 v561; // rdx
  __int64 v562; // rax
  int v563; // ecx
  unsigned int v564; // ecx
  unsigned int v565; // esi
  unsigned int *v566; // r8
  unsigned int v567; // ecx
  unsigned int v568; // r15d
  unsigned int v569; // r12d
  unsigned int v570; // r13d
  ULONG_PTR v571; // r14
  unsigned int *v572; // rax
  unsigned __int64 *v573; // r8
  unsigned int v574; // r10d
  unsigned int *v575; // rdx
  __int64 v576; // rax
  unsigned int v577; // r9d
  unsigned __int64 v578; // rbx
  unsigned __int64 v579; // r11
  __int64 v580; // rsi
  _QWORD *v581; // r10
  const char *v582; // rax
  int v583; // r14d
  unsigned __int64 v584; // rsi
  unsigned __int64 v585; // r8
  unsigned int v586; // r11d
  __int64 v587; // rdx
  __int64 v588; // rax
  __int64 v589; // r8
  unsigned __int64 v590; // rcx
  __int64 v591; // rdx
  unsigned int v592; // r9d
  unsigned __int64 v593; // rdx
  __int64 v594; // rax
  unsigned __int64 i11; // rax
  bool v596; // cc
  int v597; // r12d
  unsigned int *v598; // rsi
  unsigned int v599; // r15d
  char *v600; // rax
  char v601; // r8
  __int64 v602; // rcx
  unsigned __int64 v603; // rbx
  unsigned int v604; // r9d
  unsigned __int64 *v605; // r8
  unsigned int v606; // r10d
  unsigned __int64 v607; // r11
  unsigned int *v608; // rdx
  __int64 v609; // rsi
  _QWORD *v610; // r10
  const char *v611; // rax
  int v612; // r14d
  unsigned __int64 v613; // rsi
  unsigned int v614; // r11d
  unsigned __int64 v615; // r8
  __int64 v616; // rax
  __int64 v617; // r8
  unsigned __int64 v618; // rcx
  __int64 v619; // rdx
  unsigned int v620; // r9d
  unsigned __int64 v621; // rax
  __int64 v622; // rax
  unsigned __int64 i12; // rax
  _DWORD *v624; // r12
  unsigned __int64 *v625; // r8
  __int64 v626; // rax
  unsigned int v627; // r10d
  unsigned int v628; // r9d
  unsigned int *v629; // rdx
  unsigned __int64 v630; // rbx
  unsigned __int64 v631; // r11
  __int64 v632; // rax
  _QWORD *v633; // r10
  int v634; // esi
  unsigned __int64 v635; // r14
  const char *v636; // rax
  unsigned __int64 v637; // r8
  unsigned int v638; // r11d
  __int64 v639; // rdx
  __int64 v640; // rax
  __int64 v641; // r8
  unsigned __int64 v642; // rcx
  __int64 v643; // rdx
  unsigned int v644; // r9d
  unsigned __int64 v645; // rdx
  __int64 v646; // rax
  unsigned __int64 i13; // rax
  unsigned int *v648; // rdx
  unsigned int *v649; // rcx
  _BYTE *v650; // rax
  _DWORD *v651; // r12
  char *v652; // rdx
  _BYTE *v653; // rax
  char *v654; // rdx
  char *v655; // rbx
  __int64 v656; // r12
  __int64 v657; // rdx
  __int64 v658; // r8
  __int64 v659; // rsi
  __int64 v660; // r14
  __int64 v661; // r8
  _QWORD *v662; // rcx
  int v663; // edx
  __int64 v664; // r8
  char v665; // al
  __int64 v666; // rax
  __int64 v667; // rax
  _QWORD *v668; // rbx
  __int64 v669; // r14
  __int64 v670; // rsi
  _QWORD *v671; // rcx
  int v672; // edx
  __int64 v673; // r8
  char v674; // al
  __int64 v675; // rax
  __int64 v676; // rax
  _QWORD *v677; // rbx
  _QWORD *v678; // rcx
  int v679; // edx
  __int64 v680; // r8
  char v681; // al
  __int64 v682; // rax
  __int64 v683; // rax
  __int64 v684; // rsi
  int v685; // ebx
  unsigned __int64 v686; // rbx
  unsigned __int64 v687; // rcx
  __int64 v688; // rdx
  unsigned __int64 v689; // r8
  __int64 v690; // rcx
  __int64 v691; // rsi
  __int64 v692; // rbx
  unsigned __int64 v693; // rax
  __int64 v694; // rcx
  unsigned __int64 v695; // rcx
  unsigned int v696; // ecx
  _QWORD *v697; // rsi
  __int64 v698; // r8
  _QWORD *v699; // r9
  const char *v700; // rax
  int v701; // r10d
  __int64 v702; // r14
  unsigned __int64 v703; // rbx
  unsigned int v704; // r11d
  __int64 v705; // rax
  __int64 v706; // rbx
  unsigned __int128 v707; // rax
  unsigned int v708; // r8d
  unsigned __int64 v709; // rax
  __int64 v710; // rax
  unsigned __int64 i6; // rax
  unsigned int v712; // ebx
  __int64 v713; // rcx
  __int64 v714; // rdx
  __int64 v715; // r8
  unsigned __int8 v716; // r15
  unsigned __int64 v717; // rsi
  __int64 v718; // r13
  unsigned __int64 v719; // r12
  unsigned __int64 v720; // r14
  int v721; // eax
  __int64 v722; // r8
  unsigned int v723; // r8d
  __int64 *v724; // r9
  __int64 *v725; // r10
  __int64 v726; // rcx
  __int64 v727; // rax
  __int64 v728; // rdx
  __int64 v729; // rax
  int v730; // eax
  int v731; // eax
  __int64 v732; // rcx
  __int64 v733; // rdx
  __int64 v734; // rcx
  __int64 v735; // r8
  unsigned __int8 v736; // r14
  unsigned __int64 v737; // rbx
  __int64 v738; // r12
  unsigned __int64 v739; // r15
  unsigned __int64 v740; // rsi
  int v741; // eax
  __int64 v742; // r12
  void (*v743)(void); // rax
  _QWORD *v744; // r15
  __int64 v745; // rsi
  unsigned int v746; // ecx
  void (__fastcall *v747)(__int64, _QWORD); // rax
  _QWORD **v748; // r8
  _QWORD *i5; // rcx
  __int64 v750; // rdx
  _QWORD **v751; // r10
  _QWORD *v752; // r8
  _QWORD *v753; // rdx
  _QWORD *v754; // rax
  unsigned int v755; // edx
  unsigned int v756; // ecx
  int v757; // edx
  unsigned __int64 v758; // rbx
  unsigned __int64 k; // rsi
  _QWORD *v760; // rsi
  __int64 v761; // r8
  _QWORD *v762; // r9
  const char *v763; // rax
  int v764; // r10d
  __int64 v765; // r14
  unsigned __int64 v766; // rbx
  unsigned int v767; // r11d
  __int64 v768; // rax
  __int64 v769; // rbx
  unsigned __int128 v770; // rax
  unsigned int v771; // r8d
  unsigned __int64 v772; // rax
  __int64 v773; // rax
  unsigned __int64 m; // rax
  unsigned int v775; // edx
  unsigned int v776; // ebx
  __int64 v777; // rcx
  __int64 v778; // r8
  unsigned __int8 v779; // r15
  unsigned __int64 v780; // rsi
  __int64 v781; // r13
  unsigned __int64 v782; // r12
  unsigned __int64 v783; // r14
  int v784; // eax
  int v785; // eax
  __int64 v786; // rdx
  __int64 v787; // r8
  __int64 v788; // rcx
  __int64 v789; // rax
  int v790; // eax
  __int64 v791; // rcx
  __int64 v792; // r8
  __int64 v793; // rcx
  __int64 v794; // rax
  int v795; // eax
  __int64 v796; // rcx
  int v797; // eax
  __int64 v798; // rcx
  __int64 v799; // rax
  __int64 v800; // rcx
  _QWORD *v801; // rsi
  __int64 v802; // r8
  _QWORD *v803; // r9
  const char *v804; // rax
  int v805; // r10d
  __int64 v806; // r14
  unsigned __int64 v807; // rbx
  unsigned int v808; // r11d
  __int64 v809; // rax
  __int64 v810; // rbx
  unsigned __int128 v811; // rax
  unsigned int v812; // r8d
  unsigned __int64 v813; // rax
  __int64 v814; // rax
  unsigned __int64 n; // rax
  unsigned int v816; // ebx
  __int64 v817; // rcx
  __int64 v818; // rdx
  __int64 v819; // r8
  unsigned __int8 v820; // r12
  unsigned __int64 v821; // rsi
  unsigned __int64 v822; // r13
  int v823; // eax
  int v824; // eax
  __int64 v825; // rbx
  __int64 (__fastcall *v826)(_QWORD); // rax
  int v827; // r12d
  __int64 v828; // rax
  __int64 v829; // r14
  char *v830; // rsi
  unsigned __int8 v831; // bl
  unsigned __int8 v832; // r13
  char *v833; // r10
  char v834; // dl
  char v835; // r9
  __int64 v836; // r8
  unsigned __int64 v837; // rcx
  char v838; // al
  unsigned __int64 v839; // rdx
  unsigned __int64 v840; // rcx
  unsigned __int64 *v841; // rbx
  __int64 v842; // r15
  unsigned __int64 v843; // rcx
  __int64 v844; // rdx
  unsigned __int64 v845; // r12
  unsigned __int64 v846; // rcx
  _QWORD *v847; // rcx
  __int64 v848; // r8
  char v849; // al
  char *v850; // rsi
  unsigned __int8 v851; // bl
  unsigned __int8 v852; // r13
  char *v853; // r10
  char v854; // dl
  char v855; // r9
  __int64 v856; // r8
  unsigned __int64 v857; // rcx
  unsigned __int64 v858; // rcx
  unsigned __int64 *v859; // rbx
  __int64 v860; // r15
  unsigned __int64 v861; // rcx
  __int64 v862; // rdx
  unsigned __int64 v863; // r12
  unsigned __int64 v864; // rcx
  _QWORD *v865; // rcx
  __int64 v866; // r8
  char v867; // al
  __int64 (__fastcall *v868)(__int64); // rax
  __int64 v869; // r14
  unsigned __int8 v870; // bl
  unsigned __int8 v871; // r12
  __int64 v872; // r13
  int *v873; // r10
  char v874; // dl
  char v875; // r9
  __int64 v876; // r8
  unsigned __int64 v877; // rcx
  unsigned __int64 *v878; // rsi
  unsigned __int64 v879; // rcx
  unsigned __int64 *v880; // rbx
  char *v881; // rsi
  __int64 v882; // rdx
  unsigned __int64 v883; // r15
  unsigned __int64 v884; // rcx
  _QWORD *v885; // rcx
  int v886; // edx
  __int64 v887; // r8
  char v888; // al
  int v889; // ecx
  __int64 v890; // rbx
  __int64 v891; // r8
  unsigned __int64 v892; // rcx
  __int64 v893; // r9
  _DWORD *v894; // r10
  unsigned __int64 v895; // r11
  __int64 v896; // rax
  char *v897; // r14
  unsigned __int64 v898; // rdx
  __int64 v899; // rax
  unsigned int v900; // eax
  unsigned __int64 v901; // r12
  __int64 v902; // r9
  _QWORD *v903; // r10
  int v904; // ebx
  const char *v905; // rax
  unsigned __int64 v906; // rsi
  __int64 v907; // r15
  unsigned __int64 v908; // r8
  unsigned int v909; // r11d
  __int64 v910; // rdx
  __int64 v911; // rax
  __int64 v912; // r8
  unsigned __int64 v913; // rcx
  __int64 v914; // rdx
  unsigned int v915; // r9d
  unsigned __int64 v916; // rdx
  __int64 v917; // rax
  unsigned __int64 ii; // rax
  char v919; // cl
  unsigned int v920; // r13d
  unsigned __int8 v921; // r14
  unsigned __int64 v922; // rbx
  __int64 v923; // r12
  unsigned __int64 v924; // r15
  unsigned __int64 v925; // rsi
  int v926; // eax
  unsigned int v927; // ebx
  unsigned __int64 v928; // rcx
  unsigned int *v929; // r15
  __int64 v930; // r13
  unsigned __int64 v931; // rdx
  __int64 v932; // r14
  __int64 v933; // r8
  __int64 v934; // r12
  unsigned __int64 v935; // r14
  _QWORD *v936; // r9
  int v937; // r11d
  const char *v938; // rax
  unsigned __int64 v939; // rsi
  unsigned __int64 v940; // rbx
  unsigned int v941; // r10d
  __int64 v942; // rdx
  __int64 v943; // rax
  __int64 v944; // rbx
  unsigned __int64 v945; // rcx
  __int64 v946; // rdx
  unsigned int v947; // r8d
  __int64 v948; // rax
  unsigned __int64 jj; // rax
  unsigned int v950; // ecx
  unsigned int v951; // ebx
  __int64 v952; // r8
  unsigned __int8 v953; // r15
  unsigned __int64 v954; // rsi
  __int64 v955; // r13
  unsigned __int64 v956; // r12
  unsigned __int64 v957; // r14
  int v958; // eax
  __int64 v959; // rax
  int *v960; // rcx
  __int64 v961; // rcx
  _QWORD *v962; // rsi
  __int64 v963; // r8
  _QWORD *v964; // r9
  const char *v965; // rax
  int v966; // r10d
  __int64 v967; // r14
  unsigned __int64 v968; // rbx
  unsigned int v969; // r11d
  __int64 v970; // rax
  __int64 v971; // rbx
  unsigned __int128 v972; // rax
  __int64 v973; // r8
  unsigned __int64 v974; // rax
  __int64 v975; // rax
  unsigned __int64 j; // rax
  unsigned int v977; // ebx
  __int64 v978; // rcx
  __int64 v979; // rdx
  unsigned __int8 v980; // r12
  unsigned __int64 v981; // rsi
  unsigned __int64 v982; // r13
  unsigned __int64 v983; // r14
  int v984; // eax
  __int64 **v985; // r15
  unsigned int v986; // eax
  __int64 v987; // r13
  int v988; // r12d
  char *v989; // rbx
  __int64 v990; // r14
  __int64 v991; // rsi
  _QWORD *v992; // rcx
  int v993; // edx
  __int64 v994; // r8
  char v995; // al
  __int64 v996; // rax
  __int64 v997; // rax
  int v998; // eax
  __int64 v999; // rcx
  __int64 v1000; // r8
  __int16 v1001; // ax
  __int64 v1002; // rcx
  int (__fastcall *v1003)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64); // rax
  __int64 v1004; // rax
  __int64 v1005; // rax
  __int64 v1006; // rcx
  unsigned __int64 v1007; // r10
  unsigned __int8 v1008; // dl
  unsigned __int64 v1009; // r11
  __int64 v1010; // r15
  unsigned __int64 v1011; // r9
  _QWORD *v1012; // rsi
  __int64 v1013; // r9
  _QWORD *v1014; // r10
  const char *v1015; // rax
  int v1016; // r11d
  __int64 v1017; // r14
  unsigned int v1018; // ebx
  unsigned __int64 v1019; // r8
  __int64 v1020; // rax
  __int64 v1021; // r8
  unsigned __int128 v1022; // rax
  unsigned int v1023; // r9d
  unsigned __int64 v1024; // rax
  __int64 v1025; // rax
  unsigned __int64 nn; // rax
  unsigned int v1027; // r10d
  const char *v1028; // rsi
  unsigned __int8 v1029; // r8
  unsigned int v1030; // r9d
  unsigned __int64 v1031; // r11
  unsigned __int64 v1032; // rbx
  unsigned __int64 v1033; // rcx
  const char *v1034; // r9
  int v1035; // r11d
  const char *v1036; // rax
  __int64 v1037; // r14
  const char *v1038; // rcx
  unsigned int v1039; // ebx
  unsigned __int64 v1040; // r8
  __int64 v1041; // rax
  __int64 v1042; // r8
  unsigned __int128 v1043; // rax
  __int64 v1044; // rax
  unsigned int v1045; // r10d
  unsigned __int64 v1046; // rax
  __int64 v1047; // rax
  unsigned __int64 i1; // rax
  _QWORD *v1049; // rcx
  int v1050; // edx
  __int64 v1051; // r8
  char v1052; // al
  __int64 v1053; // rax
  __int64 v1054; // rcx
  _QWORD *v1055; // rsi
  _QWORD *v1056; // r9
  int v1057; // r10d
  const char *v1058; // rax
  __int64 v1059; // r14
  unsigned __int64 v1060; // rbx
  unsigned int v1061; // r11d
  __int64 v1062; // rax
  __int64 v1063; // rbx
  unsigned __int128 v1064; // rax
  unsigned int v1065; // r8d
  unsigned __int64 v1066; // rax
  __int64 v1067; // rax
  unsigned __int64 kk; // rax
  unsigned int v1069; // ebx
  __int64 v1070; // rcx
  __int64 v1071; // rdx
  __int64 v1072; // r8
  unsigned __int8 v1073; // r12
  unsigned __int64 v1074; // rsi
  unsigned __int64 v1075; // r13
  unsigned __int64 v1076; // r14
  int v1077; // eax
  unsigned int v1078; // r9d
  __int64 v1079; // rax
  const char *v1080; // r14
  const char *v1081; // r10
  int v1082; // r11d
  const char *v1083; // rax
  __int64 v1084; // rsi
  const char *v1085; // rcx
  unsigned __int64 v1086; // r8
  unsigned int v1087; // ebx
  __int64 v1088; // rax
  __int64 v1089; // r8
  unsigned __int128 v1090; // rax
  int v1091; // eax
  __int64 v1092; // rcx
  unsigned int v1093; // r9d
  unsigned __int64 v1094; // rax
  __int64 v1095; // rax
  unsigned __int64 mm; // rax
  unsigned __int64 v1097; // rcx
  unsigned int v1098; // r8d
  _QWORD *v1099; // rsi
  __int64 v1100; // r8
  _QWORD *v1101; // r9
  const char *v1102; // rax
  int v1103; // r11d
  unsigned __int64 v1104; // r14
  unsigned __int64 v1105; // rbx
  unsigned int v1106; // r10d
  __int64 v1107; // rdx
  __int64 v1108; // rax
  __int64 v1109; // rbx
  unsigned __int64 v1110; // rcx
  __int64 v1111; // rdx
  char v1112; // r11
  __int64 v1113; // r8
  unsigned __int64 v1114; // rdx
  __int64 v1115; // rax
  unsigned __int64 i; // rax
  unsigned int v1117; // ebx
  __int64 v1118; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v1120; // rsi
  unsigned __int64 v1121; // r13
  unsigned __int64 v1122; // r14
  int v1123; // eax
  int v1124; // eax
  __int64 v1125; // rcx
  __int64 v1126; // rcx
  unsigned __int8 v1127; // r14
  __int64 v1128; // rdx
  unsigned int *v1129; // rcx
  unsigned int *v1130; // rbx
  char v1131; // r15
  unsigned __int64 v1132; // r12
  __int64 v1133; // r8
  __int64 *v1134; // r9
  unsigned int *v1135; // r10
  __int64 v1136; // rcx
  __int64 v1137; // rax
  __int64 v1138; // rax
  __int64 v1139; // rcx
  unsigned __int8 v1140; // r14
  unsigned __int64 v1141; // rdx
  unsigned int *v1142; // rcx
  unsigned int *v1143; // rbx
  unsigned __int64 v1144; // rsi
  unsigned __int64 v1145; // rcx
  unsigned __int64 v1146; // rax
  int v1147; // esi
  __int64 v1148; // rcx
  int v1149; // eax
  __int64 v1150; // rcx
  unsigned int v1151; // ebx
  __int64 v1152; // rax
  _QWORD *v1153; // rcx
  int v1154; // edx
  __int64 v1155; // r8
  char v1156; // al
  __int64 v1157; // rcx
  int v1158; // esi
  __int64 v1159; // r14
  unsigned int v1160; // ecx
  char v1161; // bl
  volatile signed __int8 **v1162; // rcx
  volatile signed __int8 *v1163; // rax
  unsigned __int8 v1164; // bl
  int v1165; // ecx
  int v1166; // ecx
  unsigned int v1167; // edx
  unsigned int v1168; // ecx
  int v1169; // edx
  unsigned __int64 v1170; // rbx
  unsigned __int64 i2; // rsi
  _QWORD *v1172; // rsi
  __int64 v1173; // r8
  _QWORD *v1174; // r9
  const char *v1175; // rax
  int v1176; // r10d
  __int64 v1177; // r14
  unsigned __int64 v1178; // rbx
  unsigned int v1179; // r11d
  __int64 v1180; // rax
  __int64 v1181; // rbx
  unsigned __int128 v1182; // rax
  unsigned int v1183; // r8d
  unsigned __int64 v1184; // rax
  __int64 v1185; // rax
  unsigned __int64 i3; // rax
  unsigned int v1187; // edx
  unsigned int v1188; // ebx
  __int64 v1189; // rcx
  __int64 v1190; // r8
  unsigned __int8 v1191; // r15
  unsigned __int64 v1192; // rsi
  __int64 v1193; // r13
  unsigned __int64 v1194; // r12
  unsigned __int64 v1195; // r14
  int v1196; // eax
  __int64 v1197; // r13
  __int64 v1198; // rax
  _DWORD *v1199; // r15
  _DWORD *v1200; // rax
  unsigned int v1201; // r14d
  int v1202; // eax
  __int64 v1203; // rcx
  _QWORD *v1204; // rsi
  __int64 v1205; // r8
  _QWORD *v1206; // r9
  const char *v1207; // rax
  int v1208; // r10d
  __int64 v1209; // r14
  unsigned __int64 v1210; // rbx
  unsigned int v1211; // r11d
  __int64 v1212; // rax
  __int64 v1213; // rbx
  unsigned __int128 v1214; // rax
  unsigned int v1215; // r8d
  unsigned __int64 v1216; // rax
  __int64 v1217; // rax
  unsigned __int64 i4; // rax
  unsigned int v1219; // ebx
  __int64 v1220; // rcx
  __int64 v1221; // rdx
  __int64 v1222; // r8
  unsigned __int8 v1223; // r12
  unsigned __int64 v1224; // rsi
  unsigned __int64 v1225; // r13
  int v1226; // eax
  int v1227; // eax
  int v1228; // edi
  unsigned int v1229; // ecx
  unsigned int v1230; // r11d
  unsigned int v1231; // r12d
  int v1232; // ecx
  __int16 v1233; // ax
  _QWORD *v1234; // rcx
  unsigned __int8 *v1235; // r8
  __int128 v1236; // xmm1
  int v1237; // r10d
  unsigned __int8 *v1238; // r9
  __int64 v1239; // rdx
  __int64 v1240; // rax
  __int64 v1241; // r8
  _DWORD *v1242; // rax
  __int64 *v1243; // r9
  unsigned int v1244; // r8d
  __int64 *v1245; // r10
  __int64 v1246; // rcx
  __int64 v1247; // rax
  __int64 v1248; // rdx
  __int64 v1249; // rax
  unsigned __int8 *v1250; // r8
  int v1251; // r10d
  unsigned __int8 *v1252; // r9
  __int64 v1253; // rdx
  __int64 v1254; // rax
  unsigned __int8 *v1255; // r8
  int v1256; // r10d
  unsigned __int8 *v1257; // r9
  __int64 v1258; // rdx
  __int64 v1259; // rax
  int v1260; // eax
  BOOL v1261; // esi
  __int64 v1262; // rbx
  int v1263; // eax
  int *v1264; // rcx
  unsigned __int64 v1265; // rax
  __int64 v1266; // rcx
  unsigned __int8 v1267; // bl
  int v1268; // eax
  unsigned int v1269; // edx
  int v1270; // ecx
  __int64 v1271; // r14
  __int64 v1272; // rbx
  unsigned __int64 v1273; // rsi
  __int64 v1274; // rbx
  unsigned __int64 v1275; // rbx
  __int64 v1276; // rcx
  unsigned __int8 v1277; // r15
  __int64 v1278; // rdx
  unsigned int *v1279; // rcx
  unsigned int *v1280; // rbx
  char v1281; // r12
  unsigned __int64 v1282; // r14
  __int64 v1283; // r8
  __int64 *v1284; // r9
  unsigned int *v1285; // r10
  __int64 v1286; // rcx
  __int64 v1287; // rax
  __int64 v1288; // rax
  int v1289; // ecx
  unsigned __int64 v1290; // rbx
  unsigned __int64 v1291; // rsi
  _QWORD *v1292; // rsi
  __int64 v1293; // r8
  _QWORD *v1294; // r9
  const char *v1295; // rax
  int v1296; // r10d
  __int64 v1297; // r14
  unsigned __int64 v1298; // rbx
  unsigned int v1299; // r11d
  __int64 v1300; // rax
  __int64 v1301; // rbx
  unsigned __int128 v1302; // rax
  unsigned int v1303; // r8d
  unsigned __int64 v1304; // rax
  __int64 v1305; // rax
  unsigned __int64 i22; // rax
  unsigned int v1307; // edx
  unsigned int v1308; // ebx
  __int64 v1309; // rcx
  __int64 v1310; // r8
  unsigned __int8 v1311; // r15
  unsigned __int64 v1312; // rsi
  __int64 v1313; // r13
  unsigned __int64 v1314; // r12
  unsigned __int64 v1315; // r14
  int v1316; // eax
  __int64 v1317; // r9
  __int64 v1318; // r8
  unsigned __int64 v1319; // rcx
  unsigned int *v1320; // rsi
  unsigned int *v1321; // rdx
  int *v1322; // rcx
  int *v1323; // rbx
  unsigned int v1324; // r12d
  unsigned __int64 v1325; // r13
  _QWORD *v1326; // r8
  __int64 v1327; // r9
  const char *v1328; // rax
  __int64 v1329; // r11
  unsigned __int64 v1330; // rcx
  unsigned __int64 v1331; // r15
  unsigned int v1332; // r10d
  __int64 v1333; // rax
  __int64 v1334; // r15
  unsigned __int128 v1335; // rax
  unsigned int v1336; // edx
  unsigned __int64 v1337; // rax
  __int64 v1338; // rax
  unsigned __int64 i21; // rax
  int v1340; // eax
  __int64 v1341; // rcx
  _QWORD *v1342; // rsi
  __int64 v1343; // r8
  _QWORD *v1344; // r9
  const char *v1345; // rax
  int v1346; // r10d
  __int64 v1347; // r14
  unsigned __int64 v1348; // rbx
  unsigned int v1349; // r11d
  __int64 v1350; // rax
  __int64 v1351; // rbx
  unsigned __int128 v1352; // rax
  unsigned int v1353; // r8d
  unsigned __int64 v1354; // rax
  __int64 v1355; // rax
  unsigned __int64 i23; // rax
  unsigned int v1357; // ebx
  __int64 v1358; // rcx
  __int64 v1359; // rdx
  __int64 v1360; // r8
  unsigned __int8 v1361; // r12
  unsigned __int64 v1362; // rsi
  unsigned __int64 v1363; // r13
  int v1364; // eax
  int v1365; // eax
  __int64 v1366; // rcx
  unsigned int v1367; // r15d
  _BYTE *v1368; // rsi
  _BYTE *v1369; // rbx
  char v1370; // al
  volatile signed __int32 *v1371; // r14
  __int64 v1372; // rdx
  _QWORD *v1373; // rax
  int v1374; // ecx
  __int128 v1375; // xmm0
  unsigned __int64 v1376; // rcx
  BOOL v1377; // r8d
  unsigned int v1378; // ecx
  __int64 v1379; // r8
  unsigned __int8 v1380; // r14
  unsigned __int64 v1381; // rbx
  __int64 v1382; // r13
  unsigned __int64 v1383; // r12
  unsigned __int64 v1384; // rsi
  int v1385; // eax
  bool v1386; // zf
  __int64 v1387; // rcx
  unsigned __int8 v1388; // r15
  __int64 v1389; // rdx
  int *v1390; // r13
  unsigned int *v1391; // rcx
  unsigned int *v1392; // rbx
  char v1393; // r12
  unsigned __int64 v1394; // r14
  __int64 v1395; // r8
  __int64 *v1396; // r9
  unsigned int *v1397; // r10
  __int64 v1398; // rcx
  __int64 v1399; // rax
  __int64 v1400; // rax
  int v1401; // ecx
  __int64 v1402; // rax
  int *v1403; // rcx
  __int64 v1404; // r9
  _QWORD *v1405; // rbx
  int v1406; // r11d
  _QWORD *v1407; // r10
  __int64 v1408; // r14
  const char *v1409; // rax
  __int64 v1410; // r8
  unsigned int v1411; // esi
  __int64 v1412; // rax
  __int64 v1413; // r8
  unsigned __int128 v1414; // rax
  unsigned int v1415; // r9d
  unsigned __int64 v1416; // rax
  __int64 v1417; // rax
  __int64 v1418; // rcx
  int v1419; // eax
  __int64 v1420; // rcx
  int v1421; // r14d
  int v1422; // r14d
  __int64 v1423; // rsi
  unsigned int v1424; // ebx
  unsigned __int64 v1425; // rax
  unsigned int v1426; // esi
  unsigned __int64 v1427; // rax
  void (__fastcall *v1428)(unsigned __int64); // rax
  unsigned __int64 v1429; // rdx
  unsigned __int64 v1430; // rcx
  __int64 v1431; // rcx
  unsigned __int64 v1432; // rcx
  _QWORD *v1433; // r14
  __int64 v1434; // rsi
  __int64 v1435; // rdx
  _QWORD *v1436; // rax
  int v1437; // ecx
  __int128 v1438; // xmm0
  unsigned __int64 v1439; // rcx
  unsigned __int16 Ldtr; // r15
  unsigned __int16 Tr; // ax
  __int64 v1442; // r9
  unsigned __int16 v1443; // r12
  unsigned __int64 v1444; // r11
  _QWORD *v1445; // r8
  const char *v1446; // rcx
  unsigned __int64 v1447; // rbx
  unsigned int v1448; // r10d
  __int64 v1449; // rax
  __int64 v1450; // rbx
  unsigned __int128 v1451; // rax
  unsigned int v1452; // esi
  unsigned __int64 v1453; // rax
  __int64 v1454; // rax
  unsigned __int64 i17; // rax
  unsigned int v1456; // ebx
  _QWORD *v1457; // rcx
  int v1458; // edx
  __int64 v1459; // r8
  char v1460; // al
  __int64 v1461; // rax
  int v1462; // eax
  __int64 v1463; // rcx
  __int64 v1464; // rdx
  void (__fastcall *v1465)(unsigned __int64, __int64); // rax
  __int64 v1466; // rcx
  unsigned int v1467; // r10d
  unsigned __int16 *v1468; // rcx
  __int64 v1469; // r9
  __int64 v1470; // rsi
  unsigned __int64 v1471; // r13
  __int64 v1472; // r12
  __int64 v1473; // r15
  unsigned __int8 v1474; // r14
  int v1475; // eax
  __int64 v1476; // rcx
  unsigned __int64 v1477; // rbx
  __int64 v1478; // r8
  __int64 v1479; // rdx
  bool v1480; // cf
  __int64 v1481; // r15
  __int64 v1482; // rax
  __int64 v1483; // rax
  __int64 v1484; // r12
  unsigned __int64 v1485; // rdx
  __int64 v1486; // rcx
  __int64 v1487; // r8
  __int64 (__fastcall *v1488)(__int64, unsigned __int64, __int64); // rax
  __int64 v1489; // rax
  __int16 *v1490; // rax
  unsigned int *v1491; // rax
  __int64 v1492; // rcx
  __int64 v1493; // rcx
  unsigned __int64 v1494; // rbx
  unsigned __int64 v1495; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _QWORD *v1497; // r14
  _QWORD *v1498; // r8
  int v1499; // ebx
  const char *v1500; // rax
  int v1501; // r9d
  __int64 v1502; // r11
  unsigned __int64 v1503; // rsi
  int v1504; // r10d
  __int64 v1505; // rdx
  __int64 v1506; // rax
  __int64 v1507; // rsi
  unsigned __int64 v1508; // rcx
  __int64 v1509; // rdx
  int v1510; // r15d
  int v1511; // edx
  __int64 v1512; // r10
  __int64 v1513; // rax
  unsigned __int64 i18; // rax
  unsigned int *v1515; // rax
  __int64 v1516; // rdx
  __int64 v1517; // rcx
  __int64 (__fastcall *v1518)(__int64, __int64, _QWORD); // rax
  __int64 v1519; // rax
  unsigned int v1520; // esi
  _QWORD *v1521; // rdx
  int v1522; // r10d
  unsigned __int64 v1523; // rbx
  const char *v1524; // rax
  int v1525; // r8d
  __int64 v1526; // r9
  __int64 v1527; // rax
  unsigned __int64 i19; // rax
  unsigned int v1529; // ebx
  int *v1530; // r9
  __int64 v1531; // r8
  __int64 v1532; // rdx
  int v1533; // ecx
  unsigned __int64 v1534; // rcx
  __int64 v1535; // rcx
  __int64 v1536; // rax
  __int64 v1537; // rdx
  int v1538; // eax
  _KPROCESS *Process; // rbx
  __int64 v1540; // rbx
  int v1541; // eax
  __int64 v1542; // r13
  _SLIST_ENTRY *v1543; // rbx
  _SLIST_ENTRY *v1544; // rdi
  __int64 v1545; // r14
  struct _KPRCB *v1546; // rax
  struct _KTHREAD *v1547; // r15
  unsigned __int64 DpcStack; // rsi
  __int64 v1549; // rdx
  unsigned __int64 v1550; // r12
  unsigned __int64 v1551; // r10
  unsigned __int64 v1552; // r14
  unsigned int v1553; // r9d
  _QWORD *v1554; // r8
  unsigned __int64 v1555; // rcx
  unsigned __int64 v1556; // rax
  __int64 v1557; // rdi
  _QWORD *v1558; // rcx
  char *v1559; // r9
  int v1560; // r11d
  unsigned __int64 v1561; // rbx
  signed __int64 v1562; // r9
  int v1563; // ecx
  int v1564; // ecx
  int v1565; // ecx
  int v1566; // ecx
  int v1567; // ecx
  volatile signed __int32 *v1568; // rax
  unsigned int v1569; // ebx
  unsigned int v1570; // ebx
  unsigned __int8 EffectiveIrql; // al
  unsigned int v1572; // ebx
  unsigned __int8 v1573; // al
  unsigned int v1574; // ebx
  unsigned __int8 v1575; // al
  ULONG_PTR v1576; // r8
  unsigned int v1577; // ebx
  unsigned __int8 v1578; // al
  signed __int32 v1579[8]; // [rsp+A30h] [rbp+A30h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A50h] [rbp+A50h]
  __int64 v1581; // [rsp+A58h] [rbp+A58h]
  __int64 v1582; // [rsp+A60h] [rbp+A60h]
  __int64 v1583; // [rsp+A68h] [rbp+A68h]
  _BYTE v1584[2608]; // [rsp+B00h] [rbp+B00h] BYREF

  v2 = (unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL;
  v3 = a2;
  if ( !KpgApiRegistered )
    KeBugCheck(0x33u);
  v5 = qword_14044C208;
  _InterlockedOr(v1579, 0);
  if ( !v5 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_QWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v3 + 16)
    || *(_QWORD *)(v3 + 24)
    || *(_QWORD *)(v3 + 32)
    || *(_DWORD *)(v3 + 4) >= *(_DWORD *)(v5 + 1708) )
  {
    return 3221225485LL;
  }
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 20) & 1;
  v9 = *(unsigned int *)(a1 + 52);
  if ( v7 )
  {
    if ( v7 <= 0 )
      return 3221225485LL;
    if ( v7 > 4 )
    {
      if ( v7 == 5 && !*(_DWORD *)(a1 + 52) )
      {
        if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
        {
          v1570 = KeAreAllApcsDisabled();
          EffectiveIrql = KeGetEffectiveIrql();
          KeBugCheckEx(0xC8u, (EffectiveIrql << 16) | 0xFFu, v1570, 0LL, 0LL);
        }
        goto LABEL_35;
      }
      return 3221225485LL;
    }
    if ( v9 != 16 || !KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
      return 3221225485LL;
    v10 = *(_DWORD *)(a1 + 20);
    v11 = KeGetEffectiveIrql();
    if ( v10 >= 0 )
    {
      if ( v11 || KeAreApcsDisabled() )
      {
        v1574 = KeAreAllApcsDisabled();
        v1575 = KeGetEffectiveIrql();
        KeBugCheckEx(0xC8u, (v1575 << 16) | 0xFFu, v1574, 0LL, 0LL);
      }
    }
    else if ( v11 > 1u )
    {
      v1572 = KeAreAllApcsDisabled();
      v1573 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, (v1573 << 16) | 0xFFu, v1572, 0LL, 0LL);
    }
  }
  else
  {
    if ( v9 != 16 )
      return 3221225485LL;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
    if ( !v12 || v12 > 0xFFFFFFFF )
      return 3221225485LL;
    if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
    {
      v1577 = KeAreAllApcsDisabled();
      v1578 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, (v1578 << 16) | 0xFFu, v1577, 0LL, 0LL);
    }
  }
LABEL_35:
  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = 2424LL;
  if ( !v8
    || (v13 = *(_QWORD *)(v5 + 2328) + 2431LL,
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = v13,
        v13 == 2424) )
  {
    ++dword_14039D414;
    v15 = RtlpInterlockedPopEntrySList(&Lookaside);
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v15;
    v16 = v15;
    if ( v15 )
      goto LABEL_41;
    ++dword_14039D418;
    PoolWithTag = (_SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14039D430)(
                                    (unsigned int)dword_14039D424,
                                    (unsigned int)dword_14039D42C,
                                    (unsigned int)dword_14039D428);
  }
  else
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x746E494Bu);
  }
  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = PoolWithTag;
  v16 = PoolWithTag;
LABEL_41:
  if ( !v16 )
    return 3221225626LL;
  v17 = v16 + 2;
  v18 = 18LL;
  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0) = v16 + 2;
  v19 = v16 + 2;
  v20 = (_SLIST_ENTRY *)v5;
  do
  {
    *v19 = *v20;
    v19[1] = v20[1];
    v19[2] = v20[2];
    v19[3] = v20[3];
    v19[4] = v20[4];
    v19[5] = v20[5];
    v19[6] = v20[6];
    v19 += 8;
    v21 = v20[7];
    v20 += 8;
    v19[-1] = v21;
    --v18;
  }
  while ( v18 );
  *v19 = *v20;
  v19[1] = v20[1];
  v19[2].Next = v20[2].Next;
  v16[146].Next = (_SLIST_ENTRY *)v5;
  *((_QWORD *)&v16[146].Next + 1) = (char *)v16 + 2376;
  LODWORD(v16[110].Next) = *(_DWORD *)v3;
  HIDWORD(v16[110].Next) = *(_DWORD *)(v3 + 4);
  *((_DWORD *)&v16[110].Next + 2) = 0;
  LODWORD(v16[111].Next) = 0;
  *((_DWORD *)&v16[132].Next + 3) |= 0x1000u;
  if ( v8 )
    v16[147].Next = (_SLIST_ENTRY *)(((unsigned __int64)&v16[151].Next + 15) & 0xFFFFFFFFFFFFFFF8uLL);
  v22 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v17;
  if ( v22 > 0x80000 )
    v22 = 0x80000;
  *((_DWORD *)&v16[110].Next + 3) = v22;
  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 0;
  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x104) = 0;
  if ( !v22 )
    v22 = 1;
  *((_DWORD *)&v16[110].Next + 3) = v22;
  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x200) = a1;
  v23 = (__int64)&v16[2];
  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) = v3;
  v24 = *((unsigned int *)&v16[130].Next + 2);
  if ( (_DWORD)v24 != -1 )
  {
    v25 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))&v16[41].Next + 1))(
            v24,
            0LL,
            0x7010008004002001LL,
            3LL);
    if ( v25 || (v25 = ((__int64 (__fastcall *)(_QWORD))v16[42].Next)(0LL)) != 0 )
    {
      v26 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v16[43].Next)(v25, v2 + 1536);
      if ( v26 >= 0 )
      {
        *((_QWORD *)&v16[131].Next + 1) = v25;
        v27 = (*((__int64 (**)(void))&v16[45].Next + 1))();
        v28 = (*((__int64 (__fastcall **)(__int64))&v16[47].Next + 1))(v27);
        if ( v28 )
        {
          (*((void (__fastcall **)(__int64, __int64))&v16[48].Next + 1))(v27, v28);
          v29 = 0;
        }
        else
        {
          v29 = 4;
        }
        v26 = 0;
        *((_DWORD *)&v16[132].Next + 3) = v29 | *((_DWORD *)&v16[132].Next + 3) & 0xFFFFFFFB;
        *((_DWORD *)&v16[110].Next + 2) += 0x10000;
      }
      else
      {
        (*((void (__fastcall **)(__int64))&v16[42].Next + 1))(v25);
      }
      if ( v26 >= 0 )
      {
        v30 = 1LL;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x104) = 1;
        goto LABEL_82;
      }
    }
  }
  v31 = *((_DWORD *)&v16[132].Next + 3);
  if ( (v31 & 8) != 0 && (v31 & 0x1000) == 0 )
  {
    v32 = __rdtsc();
    v33 = (__ROR8__(v32, 3) ^ v32) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x468) = *((_QWORD *)&v33 + 1);
    BYTE8(v33) ^= v33;
    if ( (BYTE8(v33) & 3) == 0 )
    {
      v34 = *((unsigned int *)&v16[83].Next[2].Next + 3);
      if ( (_DWORD)v34 )
      {
        v35 = __rdtsc();
        v33 = (__ROR8__(v35, 3) ^ v35) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x470) = *((_QWORD *)&v33 + 1);
        *((_QWORD *)&v33 + 1) = (*((_QWORD *)&v33 + 1) ^ (unsigned __int64)v33) % v34;
        LODWORD(v34) = DWORD2(v33);
      }
      v36 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))v16[61].Next)(
              0LL,
              *((_QWORD *)&v33 + 1),
              0x7010008004002001LL);
      if ( !v36 )
      {
LABEL_73:
        if ( v36 )
        {
          (*((void (__fastcall **)(__int64, unsigned __int64))&v16[69].Next + 1))(v36, v2 + 1536);
          ((void (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD))v16[30].Next)(v36, v2 + 2432, 0LL, 0LL);
          v37 = __rdtsc();
          v38 = (__ROR8__(v37, 3) ^ v37) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x478) = *((_QWORD *)&v38 + 1);
          v39 = ((unsigned __int64)v38 ^ *((_QWORD *)&v38 + 1))
              % (*((unsigned int (__fastcall **)(unsigned __int64))&v16[29].Next + 1))(v2 + 2432);
          (*((void (__fastcall **)(struct _KTHREAD *, unsigned __int64))&v16[30].Next + 1))(
            KeGetCurrentThread(),
            v2 + 824);
          (*((void (__fastcall **)(unsigned __int64, unsigned __int64))&v16[28].Next + 1))(v2 + 1456, v2 + 2432);
          while ( ((int (__fastcall *)(unsigned __int64, unsigned __int64))v16[29].Next)(v2 + 248, v2 + 1456) >= 0 )
          {
            if ( !(_DWORD)v39 )
            {
              ((void (__fastcall *)(unsigned __int64, _QWORD))v16[28].Next)(
                v2 + 824,
                *(unsigned int *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8));
              break;
            }
            LODWORD(v39) = v39 - 1;
          }
          ((void (__fastcall *)(unsigned __int64, unsigned __int64))v16[31].Next)(v2 + 824, v2 + 1432);
          v30 = 1LL;
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 1;
          goto LABEL_82;
        }
        goto LABEL_81;
      }
      do
      {
        if ( !(_DWORD)v34 )
          break;
        LODWORD(v34) = v34 - 1;
        v36 = ((__int64 (__fastcall *)(__int64))v16[61].Next)(v36);
      }
      while ( v36 );
      v23 = (__int64)&v16[2];
      if ( v36 )
      {
        if ( ((int (__fastcall *)(__int64))v16[60].Next)(v36) < 0 )
        {
          (*((void (__fastcall **)(__int64))&v16[61].Next + 1))(v36);
          v36 = 0LL;
        }
        goto LABEL_73;
      }
    }
  }
LABEL_81:
  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 0;
  v30 = 1LL;
LABEL_82:
  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = 0LL;
  v40 = (_BYTE *)(v2 + 280);
  v41 = 4;
  do
  {
    *v40++ = 0;
    --v41;
  }
  while ( v41 );
  Next = (unsigned int)v16[110].Next;
  if ( *((_DWORD *)&v16[110].Next + 2) >= *((_DWORD *)&v16[110].Next + 3) )
    goto LABEL_2339;
  v43 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x260);
  v44 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x264);
  v45 = 0LL;
  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xBC) = v43;
  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) = v44;
  while ( 1 )
  {
    v46 = *(_DWORD *)(v23 + 2088) & 0x110000;
    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = Next;
    if ( v46 != 1114112 )
      __writedr(7u, 0LL);
    if ( Next == *(_DWORD *)(v23 + 1708) )
      break;
    v47 = v23;
    v48 = 0;
    if ( *(_QWORD *)(v23 + 2304) )
      v47 = *(_QWORD *)(v23 + 2304);
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v47;
    v49 = (char *)(v47 + *(unsigned int *)(v47 + 1704));
    *(_QWORD *)v2 = v49;
    if ( *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x110)
      && *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x114) <= Next )
    {
      v48 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x114);
      v49 = (char *)(v47 + *(unsigned int *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x118));
      *(_QWORD *)v2 = v49;
    }
    if ( v48 != Next )
    {
      v50 = Next - v48;
      v51 = v50;
      v48 += v50;
      while ( 1 )
      {
        v52 = *(_DWORD *)v49;
        if ( *(int *)v49 > 12 )
          break;
        if ( v52 == 12 )
          goto LABEL_110;
        v53 = v52 - 1;
        if ( !v53 )
          goto LABEL_110;
        v54 = v53 - 6;
        if ( v54 )
        {
          v55 = v54 - 1;
          if ( !v55 )
          {
            v57 = *((unsigned __int16 *)v49 + 16);
LABEL_116:
            v56 = (v57 + 55) & 0xFFFFFFF8;
            goto LABEL_117;
          }
          if ( v55 != 2 )
          {
LABEL_113:
            v56 = 48LL;
            goto LABEL_117;
          }
          v56 = (unsigned int)(16 * (*((_DWORD *)v49 + 7) + 3));
        }
        else
        {
          v56 = (unsigned int)(24 * (*((_DWORD *)v49 + 6) + 2));
        }
LABEL_117:
        v49 += v56;
        if ( !--v51 )
        {
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          v47 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          v44 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
          v43 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xBC);
          *(_QWORD *)v2 = v49;
          goto LABEL_119;
        }
      }
      if ( v52 == 28 )
      {
        v57 = *((unsigned __int16 *)v49 + 20);
        goto LABEL_116;
      }
      if ( v52 == 30 )
      {
        v56 = (((*((_DWORD *)v49 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v49 + 20) + 2);
      }
      else
      {
        if ( v52 <= 32 )
          goto LABEL_113;
        if ( v52 <= 34 )
        {
          v56 = 20
              * (unsigned int)(((*((_DWORD *)v49 + 8) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v49 + 10) + 4095) >> 12)
              + 48;
        }
        else
        {
          if ( v52 != 43 )
            goto LABEL_113;
LABEL_110:
          v56 = 4 * (*((_DWORD *)v49 + 4) / 0xCu) + 48;
        }
      }
      v30 = 1LL;
      goto LABEL_117;
    }
LABEL_119:
    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = 1;
    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x114) = v48;
    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) = (_DWORD)v49 - v47;
    if ( !*(_DWORD *)(v23 + 1732) )
    {
      v58 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x200);
      v59 = 0;
      v60 = *(int *)v49;
      v61 = *(_DWORD *)(v58 + 48);
      v62 = *(_QWORD *)(v58 + 56);
      if ( (int)v60 > 21 )
      {
        if ( (_DWORD)v60 == 24 )
          goto LABEL_163;
        if ( (int)v60 <= 27 )
          goto LABEL_144;
        if ( (int)v60 <= 29 )
          goto LABEL_163;
        if ( (unsigned int)v60 > 0x23 || (v65 = 0x940000000LL, !_bittest64(&v65, v60)) )
        {
          if ( (unsigned int)(v60 - 43) > 1 )
            goto LABEL_144;
        }
LABEL_155:
        if ( v61 )
          goto LABEL_144;
      }
      else
      {
        if ( (_DWORD)v60 == 21 )
          goto LABEL_136;
        if ( (v60 & 0x80000000) != 0LL )
          goto LABEL_144;
        if ( (int)v60 <= 1 )
          goto LABEL_155;
        if ( (int)v60 > 3 )
        {
          if ( (_DWORD)v60 != 7 )
          {
            if ( (_DWORD)v60 != 8 )
            {
              if ( (_DWORD)v60 != 9 && (unsigned int)(v60 - 11) > 3 )
                goto LABEL_144;
              goto LABEL_155;
            }
LABEL_163:
            if ( v61 != 5 )
              goto LABEL_144;
LABEL_164:
            v30 = 1LL;
            ++*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) + 8LL);
            goto LABEL_165;
          }
          v59 = *((_DWORD *)v49 + 7);
          v63 = v61 == 1;
LABEL_134:
          if ( !v63 )
            goto LABEL_144;
          goto LABEL_143;
        }
        if ( v61 )
        {
LABEL_136:
          if ( (_DWORD)v60 == 21 )
          {
            v59 = *((_DWORD *)v49 + 11);
            v63 = v61 == 4;
            goto LABEL_134;
          }
          if ( (unsigned int)(v60 - 2) <= 1 )
          {
            v59 = *((_DWORD *)v49 + 10);
            if ( (_DWORD)v60 == 3 && v61 != 2 )
              goto LABEL_144;
            if ( (_DWORD)v60 == 2 && v61 != 3 )
              goto LABEL_144;
          }
LABEL_143:
          if ( !(unsigned int)KeCheckProcessorGroupAffinity(v62, v59) )
            goto LABEL_144;
          goto LABEL_164;
        }
      }
      v66 = *((unsigned int *)v49 + 4);
      if ( !(_DWORD)v66 )
        goto LABEL_144;
      v67 = (unsigned __int64 *)(v2 + 616);
      v68 = *((_QWORD *)v49 + 1);
      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x268) = *(_QWORD *)v62;
      v69 = *(_DWORD *)(v62 + 8);
      v70 = 0;
      *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x150) = v69;
      v71 = v68 + v66;
      v72 = (unsigned int *)(v2 + 336);
      while ( v68 >= *v67 + *v72 || v71 <= *v67 )
      {
        ++v70;
        ++v67;
        ++v72;
        if ( v70 )
          goto LABEL_144;
      }
      goto LABEL_164;
    }
LABEL_165:
    v73 = *(_DWORD *)v49;
    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = *(_DWORD *)v49;
    if ( v73 > 27 )
    {
      if ( v73 <= 36 )
      {
        if ( v73 == 36 )
        {
          v1099 = (_QWORD *)*((_QWORD *)v49 + 1);
          v1100 = *((unsigned int *)v49 + 4);
          v1101 = v1099;
          *(_DWORD *)(v23 + 1736) += v1100;
          v1102 = (const char *)v1099;
          v1103 = *(_DWORD *)(v23 + 1716);
          v1104 = *(_QWORD *)(v23 + 1720);
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1100;
          if ( v1099 < (_QWORD *)((char *)v1099 + v1100) )
          {
            do
            {
              _mm_prefetch(v1102, 0);
              v1102 += 64;
            }
            while ( v1102 < (const char *)v1099 + v1100 );
          }
          v1105 = v1104;
          v1106 = (unsigned int)v1100 >> 7;
          if ( (unsigned int)v1100 >> 7 )
          {
            do
            {
              v1107 = 8LL;
              do
              {
                v1108 = v1105 ^ *v1101;
                v1109 = v1101[1];
                v1101 += 2;
                v1105 = __ROL8__(__ROL8__(v1108, v1103) ^ v1109, v1103);
                --v1107;
              }
              while ( v1107 );
              v1110 = __ROL8__(v1104 ^ ((char *)v1101 - (char *)v1099), 17) ^ v1104 ^ ((char *)v1101 - (char *)v1099);
              v1111 = (v1110 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F8) = v1111;
              v1112 = v1111 ^ v1110 ^ v1103;
              v30 = 1LL;
              v1103 = v1112 & 0x3F;
              if ( !v1103 )
                LOBYTE(v1103) = 1;
              --v1106;
            }
            while ( v1106 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            LODWORD(v1100) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
          }
          v1113 = v1100 & 0x7F;
          if ( (unsigned int)v1113 >= 8 )
          {
            v1114 = (unsigned __int64)(unsigned int)v1113 >> 3;
            do
            {
              v1105 = __ROL8__(*v1101++ ^ v1105, v1103);
              v1113 = (unsigned int)(v1113 - 8);
              --v1114;
            }
            while ( v1114 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v30 = 1LL;
          }
          for ( ; (_DWORD)v1113; v1113 = (unsigned int)(v1113 - 1) )
          {
            v1115 = *(unsigned __int8 *)v1101;
            v1101 = (_QWORD *)((char *)v1101 + 1);
            v1105 = __ROL8__(v1115 ^ v1105, v1103);
          }
          for ( i = v1105; ; LODWORD(v1105) = i ^ v1105 )
          {
            i >>= 31;
            if ( !i )
              break;
          }
          v1117 = v1105 & 0x7FFFFFFF;
          if ( v1117 == *((_DWORD *)v49 + 5) )
            goto LABEL_1706;
          if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
            LODWORD(v45) = 1;
          v1118 = *((unsigned int *)v49 + 4);
          v30 = *((_QWORD *)v49 + 1);
          if ( *((_DWORD *)v49 + 4) )
          {
            v1113 = 64LL;
            if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1120 = v30 & 0xFFFFFFFFFFFFF000uLL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v30 + v1118 - 1) | 0xFFF;
              v1121 = (v30 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1122 = CurrentIrql;
                while ( 1 )
                {
                  v1123 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                            v1120,
                            0LL,
                            v1113,
                            v1101);
                  if ( v1123 != -1073741267 )
                    break;
                  if ( (_DWORD)v45 )
                    goto LABEL_1701;
                  if ( CurrentIrql > 1u )
                    goto LABEL_1699;
                  v1122 = CurrentIrql;
                  __writecr8(CurrentIrql);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1123 < 0 )
                  break;
LABEL_1699:
                v1120 += 4096LL;
                v1121 += 4096LL;
                if ( v1121 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                {
                  __writecr8(v1122);
                  v49 = *(char **)v2;
LABEL_1706:
                  v1126 = *(_QWORD *)(v23 + 1336);
                  v1127 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v23 + 336))(v1126, v30, v1113, v1101);
                  v1129 = **(unsigned int ***)(v23 + 1544);
                  v1130 = v1129 + 4;
                  v1131 = *((_BYTE *)v1129 + 12);
                  v1132 = (unsigned __int64)&v1129[6 * *v1129 + 4];
                  do
                  {
                    v1133 = 24LL;
                    v1134 = (__int64 *)(v49 + 24);
                    v1135 = v1130;
                    do
                    {
                      v1136 = *(_QWORD *)v1135;
                      v1135 += 2;
                      v1137 = *v1134++;
                      if ( v1136 != v1137 )
                        goto LABEL_1714;
                      v1133 = (unsigned int)(v1133 - 8);
                    }
                    while ( (unsigned int)v1133 >= 8 );
                    if ( !(_DWORD)v1133 )
                      break;
                    while ( 1 )
                    {
                      v1128 = *(unsigned __int8 *)v1135;
                      v1135 = (unsigned int *)((char *)v1135 + 1);
                      v1138 = *(unsigned __int8 *)v1134;
                      v1134 = (__int64 *)((char *)v1134 + 1);
                      if ( v1128 != v1138 )
                        break;
                      v63 = (_DWORD)v1133 == 1;
                      v1133 = (unsigned int)(v1133 - 1);
                      if ( v63 )
                        goto LABEL_1715;
                    }
LABEL_1714:
                    v1130 += 6;
                  }
                  while ( (unsigned __int64)v1130 < v1132 );
LABEL_1715:
                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v23 + 400))(
                    *(_QWORD *)(v23 + 1336),
                    v1128,
                    v1133,
                    v1134);
                  __writecr8(v1127);
                  if ( !v1131 )
                    goto LABEL_1722;
                  if ( (*(_DWORD *)(v23 + 2092) & 0x10) != 0 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v49;
                    *(_QWORD *)(v23 + 1968) = 1LL;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  if ( *((_QWORD *)v49 + 3) == 1LL )
                  {
                    v45 = 0LL;
                  }
                  else
                  {
LABEL_1722:
                    v45 = 0LL;
                    if ( v1130 == (unsigned int *)v1132 && !*(_DWORD *)(v23 + 1936) )
                    {
                      *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v23 + 1960) = *(int *)v49;
                      *(_QWORD *)(v23 + 1968) = v1130;
                      *(_DWORD *)(v23 + 1936) = 1;
                    }
                  }
                  v1139 = *(_QWORD *)(v23 + 1336);
                  v1140 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64))(v23 + 336))(v1139);
                  v1141 = 0LL;
                  v1142 = **(unsigned int ***)(v23 + 1544);
                  v1143 = v1142 + 4;
                  v1144 = (unsigned __int64)&v1142[6 * *v1142 + 4];
                  while ( 1 )
                  {
                    v1143 += 6;
                    if ( (unsigned __int64)v1143 >= v1144 )
                      break;
                    v1145 = *((_QWORD *)v1143 + 1);
                    if ( v1145 < v1141 )
                      break;
                    if ( (v1145 & 0xFFFFFFFFFFFFF000uLL) != v1145 )
                      break;
                    v1146 = v1145 + v1143[4];
                    if ( v1146 <= v1145 || v1146 == v1141 )
                      break;
                    v1141 = v1145 + v1143[4];
                  }
                  (*(void (__fastcall **)(_QWORD))(v23 + 400))(*(_QWORD *)(v23 + 1336));
                  __writecr8(v1140);
                  if ( v1143 == (unsigned int *)v1144 || *(_DWORD *)(v23 + 1936) )
                    goto LABEL_144;
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = *(int *)v49;
                  *(_QWORD *)(v23 + 1968) = v1143;
LABEL_390:
                  *(_DWORD *)(v23 + 1936) = 1;
                  goto LABEL_144;
                }
              }
LABEL_1701:
              v49 = *(char **)v2;
              __writecr8(v1122);
            }
          }
          v1124 = *(_DWORD *)(v23 + 1936);
          if ( !v1124 )
          {
            *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1117 ^ (unsigned __int64)*((unsigned int *)v49 + 5);
            v1124 = *(_DWORD *)(v23 + 1936);
          }
          v1125 = *((_QWORD *)v49 + 1);
          if ( !v1124 )
          {
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v1125;
            *(_DWORD *)(v23 + 1936) = 1;
          }
          goto LABEL_1706;
        }
        if ( v73 != 28 )
        {
          if ( v73 == 29 )
          {
            v962 = (_QWORD *)*((_QWORD *)v49 + 1);
            v963 = *((unsigned int *)v49 + 4);
            v964 = v962;
            *(_DWORD *)(v23 + 1736) += v963;
            v965 = (const char *)v962;
            v966 = *(_DWORD *)(v23 + 1716);
            v967 = *(_QWORD *)(v23 + 1720);
            if ( v962 < (_QWORD *)((char *)v962 + v963) )
            {
              do
              {
                _mm_prefetch(v965, 0);
                v965 += 64;
              }
              while ( v965 < (const char *)v962 + v963 );
            }
            v968 = *(_QWORD *)(v23 + 1720);
            v969 = (unsigned int)v963 >> 7;
            if ( (unsigned int)v963 >> 7 )
            {
              do
              {
                v970 = 8LL;
                do
                {
                  v971 = v964[1] ^ __ROL8__(*v964 ^ v968, v966);
                  v964 += 2;
                  v968 = __ROL8__(v971, v966);
                  --v970;
                }
                while ( v970 );
                v972 = (__ROL8__(v967 ^ ((char *)v964 - (char *)v962), 17) ^ v967 ^ (unsigned __int64)((char *)v964 - (char *)v962))
                     * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C8) = *((_QWORD *)&v972 + 1);
                v966 = (BYTE8(v972) ^ (unsigned __int8)(v972 ^ v966)) & 0x3F;
                if ( !v966 )
                  LOBYTE(v966) = 1;
                --v969;
              }
              while ( v969 );
              v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            }
            v973 = v963 & 0x7F;
            if ( (unsigned int)v973 >= 8 )
            {
              v974 = (unsigned __int64)(unsigned int)v973 >> 3;
              do
              {
                v968 = __ROL8__(*v964++ ^ v968, v966);
                v973 = (unsigned int)(v973 - 8);
                --v974;
              }
              while ( v974 );
            }
            for ( ; (_DWORD)v973; v973 = (unsigned int)(v973 - 1) )
            {
              v975 = *(unsigned __int8 *)v964;
              v964 = (_QWORD *)((char *)v964 + 1);
              v968 = __ROL8__(v975 ^ v968, v966);
            }
            for ( j = v968; ; LODWORD(v968) = j ^ v968 )
            {
              j >>= 31;
              if ( !j )
                break;
            }
            v977 = v968 & 0x7FFFFFFF;
            if ( v977 == *((_DWORD *)v49 + 5) )
              goto LABEL_1503;
            if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
              LODWORD(v45) = 1;
            v978 = *((unsigned int *)v49 + 4);
            v979 = *((_QWORD *)v49 + 1);
            if ( *((_DWORD *)v49 + 4) )
            {
              v973 = 64LL;
              if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
              {
                v980 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v981 = v979 & 0xFFFFFFFFFFFFF000uLL;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v979 + v978 - 1) | 0xFFF;
                v982 = (v979 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v983 = v980;
                  while ( 1 )
                  {
                    v984 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                             v981,
                             0LL,
                             v973,
                             v964);
                    if ( v984 != -1073741267 )
                      break;
                    if ( (_DWORD)v45 )
                      goto LABEL_1520;
                    if ( v980 > 1u )
                      goto LABEL_1501;
                    v983 = v980;
                    __writecr8(v980);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v984 < 0 )
                    break;
LABEL_1501:
                  v973 = 4096LL;
                  v981 += 4096LL;
                  v982 += 4096LL;
                  if ( v982 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                  {
                    __writecr8(v983);
                    v49 = *(char **)v2;
LABEL_1503:
                    v985 = (__int64 **)*((_QWORD *)v49 + 1);
                    v986 = *((_DWORD *)v49 + 4) >> 4;
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v985;
                    if ( !v986 )
                    {
                      v45 = 0LL;
                      goto LABEL_144;
                    }
                    v987 = v986;
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v986;
                    do
                    {
                      v988 = 1;
                      v989 = *(char **)v2;
                      v990 = **v985;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8) = 0LL;
                      v991 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))(v23 + 784))(
                               v990,
                               v2 + 488,
                               v973,
                               v964);
                      if ( v991 )
                      {
                        do
                        {
                          ++v988;
                          if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 520))(v991, v2 + 976) )
                          {
                            if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
                            {
                              v992 = *(_QWORD **)(v23 + 2312);
                              v993 = 48;
                              v994 = 6LL;
                              do
                              {
                                v993 -= 8;
                                *v992 = *(_QWORD *)v989;
                                v989 += 8;
                                ++v992;
                                --v994;
                              }
                              while ( v994 );
                              if ( v993 )
                              {
                                do
                                {
                                  v995 = *v989++;
                                  *(_BYTE *)v992 = v995;
                                  v992 = (_QWORD *)((char *)v992 + 1);
                                  --v993;
                                }
                                while ( v993 );
                                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              }
                              v989 = *(char **)(v23 + 2312);
                            }
                            *((_QWORD *)v989 + 3) = v991;
                            *((_QWORD *)v989 + 4) = v990;
                            v996 = *(_QWORD *)(v23 + 1416);
                            *(_QWORD *)v996 = v989;
                            *(_DWORD *)(v996 + 16) = 48;
                            v997 = *(_QWORD *)(v23 + 1416);
                            *(_QWORD *)(v997 + 8) = v991;
                            *(_DWORD *)(v997 + 20) = 4096;
                            if ( !*(_DWORD *)(v23 + 1936) )
                            {
                              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v23 + 1952) = v989 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v23 + 1960) = *(int *)v989;
                              *(_QWORD *)(v23 + 1968) = 6LL;
                              *(_DWORD *)(v23 + 1936) = 1;
                            }
                          }
                          v991 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 784))(v990, v2 + 488);
                        }
                        while ( v991 );
                        v985 = *(__int64 ***)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        v987 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      }
                      v985 += 2;
                      --v987;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v985;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v987;
                    }
                    while ( v987 );
                    goto LABEL_328;
                  }
                }
LABEL_1520:
                v49 = *(char **)v2;
                __writecr8(v983);
              }
            }
            v998 = *(_DWORD *)(v23 + 1936);
            if ( !v998 )
            {
              *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = *((unsigned int *)v49 + 5) ^ (unsigned __int64)v977;
              v998 = *(_DWORD *)(v23 + 1936);
            }
            v999 = *((_QWORD *)v49 + 1);
            if ( !v998 )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = v999;
              *(_DWORD *)(v23 + 1936) = 1;
            }
            goto LABEL_1503;
          }
          if ( v73 != 30 )
          {
            if ( v73 != 31 )
            {
              if ( v73 == 32 )
              {
                sub_1401A0EC4(v23, v49);
                goto LABEL_144;
              }
              if ( v73 == 33 )
              {
                sub_14019FF9C(v23, v49);
                goto LABEL_144;
              }
              if ( v73 != 35 )
                goto LABEL_2168;
              if ( (*((_DWORD *)v49 + 10) & 1) != 0 && (!*(_QWORD *)(v23 + 2072) || (*(_DWORD *)(v23 + 2092) & 4) != 0) )
                goto LABEL_392;
              if ( (*((_DWORD *)v49 + 10) & 1) != 0 )
              {
                v755 = *(_DWORD *)(v23 + 2092);
                v756 = v755;
                if ( *(_DWORD *)(v23 + 1732) )
                {
                  if ( (((unsigned __int8)v755 ^ (unsigned __int8)(v755 >> 3)) & 4) != 0 )
                    goto LABEL_392;
                }
                else
                {
                  v756 = v755 ^ ((unsigned __int8)v755 ^ (unsigned __int8)(8 * v755)) & 0x20;
                  *(_DWORD *)(v23 + 2092) = v756;
                }
                if ( !*(_QWORD *)(v23 + 2072) )
                {
LABEL_1149:
                  *(_DWORD *)(v23 + 1732) = 0;
                  goto LABEL_1189;
                }
                LOBYTE(v757) = v756;
                if ( *(_DWORD *)(v23 + 1732) )
                {
                  if ( (((unsigned __int8)v756 ^ (unsigned __int8)(v756 >> 3)) & 4) != 0 )
                    goto LABEL_1149;
                }
                else
                {
                  v757 = v756 ^ ((unsigned __int8)v756 ^ (unsigned __int8)(8 * v756)) & 0x20;
                  *(_DWORD *)(v23 + 2092) = v757;
                }
                if ( (v757 & 4) != 0 )
                {
                  v758 = *((_QWORD *)v49 + 1) & 0xFFFFFFFFFFFFF000uLL;
                  for ( k = ((*((_QWORD *)v49 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v49 + 4) + 4095) >> 12;
                        k;
                        v758 += 4096LL )
                  {
                    --k;
                    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v23 + 688))(v758)
                      && !*(_DWORD *)(v23 + 1936) )
                    {
                      *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v23 + 1960) = *(int *)v49;
                      *(_QWORD *)(v23 + 1968) = v758;
                      *(_DWORD *)(v23 + 1936) = 1;
                    }
                    *(_DWORD *)(v23 + 1736) += 256;
                  }
                  goto LABEL_1189;
                }
                v760 = (_QWORD *)*((_QWORD *)v49 + 1);
                v761 = *((unsigned int *)v49 + 4);
                v762 = v760;
                *(_DWORD *)(v23 + 1736) += v761;
                v763 = (const char *)v760;
                v764 = *(_DWORD *)(v23 + 1716);
                v765 = *(_QWORD *)(v23 + 1720);
                if ( v760 < (_QWORD *)((char *)v760 + v761) )
                {
                  do
                  {
                    _mm_prefetch(v763, 0);
                    v763 += 64;
                  }
                  while ( v763 < (const char *)v760 + v761 );
                }
                v766 = *(_QWORD *)(v23 + 1720);
                v767 = (unsigned int)v761 >> 7;
                if ( (unsigned int)v761 >> 7 )
                {
                  do
                  {
                    v768 = 8LL;
                    do
                    {
                      v769 = v762[1] ^ __ROL8__(*v762 ^ v766, v764);
                      v762 += 2;
                      v766 = __ROL8__(v769, v764);
                      --v768;
                    }
                    while ( v768 );
                    v770 = (__ROL8__(v765 ^ ((char *)v762 - (char *)v760), 17) ^ v765 ^ (unsigned __int64)((char *)v762 - (char *)v760))
                         * (unsigned __int128)0x7010008004002001uLL;
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A8) = *((_QWORD *)&v770 + 1);
                    v764 = (BYTE8(v770) ^ (unsigned __int8)(v770 ^ v764)) & 0x3F;
                    if ( !v764 )
                      LOBYTE(v764) = 1;
                    --v767;
                  }
                  while ( v767 );
                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v771 = v761 & 0x7F;
                if ( v771 >= 8 )
                {
                  v772 = (unsigned __int64)v771 >> 3;
                  do
                  {
                    v766 = __ROL8__(*v762++ ^ v766, v764);
                    v771 -= 8;
                    --v772;
                  }
                  while ( v772 );
                }
                for ( ; v771; --v771 )
                {
                  v773 = *(unsigned __int8 *)v762;
                  v762 = (_QWORD *)((char *)v762 + 1);
                  v766 = __ROL8__(v773 ^ v766, v764);
                }
                for ( m = v766; ; LODWORD(v766) = m ^ v766 )
                {
                  m >>= 31;
                  if ( !m )
                    break;
                }
                v775 = *((_DWORD *)v49 + 5);
                v776 = v766 & 0x7FFFFFFF;
                if ( v776 != v775 )
                {
                  v777 = *((unsigned int *)v49 + 4);
                  v778 = *((_QWORD *)v49 + 1);
                  if ( *((_DWORD *)v49 + 4) && (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
                  {
                    v779 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v780 = v778 & 0xFFFFFFFFFFFFF000uLL;
                    v781 = (v778 + v777 - 1) | 0xFFF;
                    v782 = (v778 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v783 = v779;
                      while ( 1 )
                      {
                        v784 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v23 + 1128))(v780, 0LL);
                        if ( v784 != -1073741267 )
                          break;
                        if ( v779 > 1u )
                          goto LABEL_1186;
                        v783 = v779;
                        __writecr8(v779);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v784 < 0 )
                        break;
LABEL_1186:
                      v780 += 4096LL;
                      v782 += 4096LL;
                      if ( v782 == v781 )
                        goto LABEL_1187;
                    }
                    __writecr8(v783);
                    v49 = *(char **)v2;
                    v45 = 0LL;
                    v775 = *(_DWORD *)(*(_QWORD *)v2 + 20LL);
                  }
                  v797 = *(_DWORD *)(v23 + 1936);
                  if ( !v797 )
                  {
                    v798 = v776;
                    v799 = v775;
                    goto LABEL_1206;
                  }
                  goto LABEL_1207;
                }
              }
              else
              {
                v801 = (_QWORD *)*((_QWORD *)v49 + 1);
                v802 = *((unsigned int *)v49 + 4);
                v803 = v801;
                *(_DWORD *)(v23 + 1736) += v802;
                v804 = (const char *)v801;
                v805 = *(_DWORD *)(v23 + 1716);
                v806 = *(_QWORD *)(v23 + 1720);
                if ( v801 < (_QWORD *)((char *)v801 + v802) )
                {
                  do
                  {
                    _mm_prefetch(v804, 0);
                    v804 += 64;
                  }
                  while ( v804 < (const char *)v801 + v802 );
                }
                v807 = *(_QWORD *)(v23 + 1720);
                v808 = (unsigned int)v802 >> 7;
                if ( (unsigned int)v802 >> 7 )
                {
                  do
                  {
                    v809 = 8LL;
                    do
                    {
                      v810 = v803[1] ^ __ROL8__(*v803 ^ v807, v805);
                      v803 += 2;
                      v807 = __ROL8__(v810, v805);
                      --v809;
                    }
                    while ( v809 );
                    v811 = (__ROL8__(v806 ^ ((char *)v803 - (char *)v801), 17) ^ v806 ^ (unsigned __int64)((char *)v803 - (char *)v801))
                         * (unsigned __int128)0x7010008004002001uLL;
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B0) = *((_QWORD *)&v811 + 1);
                    v805 = (BYTE8(v811) ^ (unsigned __int8)(v811 ^ v805)) & 0x3F;
                    if ( !v805 )
                      LOBYTE(v805) = 1;
                    --v808;
                  }
                  while ( v808 );
                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v812 = v802 & 0x7F;
                if ( v812 >= 8 )
                {
                  v813 = (unsigned __int64)v812 >> 3;
                  do
                  {
                    v807 = __ROL8__(*v803++ ^ v807, v805);
                    v812 -= 8;
                    --v813;
                  }
                  while ( v813 );
                }
                for ( ; v812; --v812 )
                {
                  v814 = *(unsigned __int8 *)v803;
                  v803 = (_QWORD *)((char *)v803 + 1);
                  v807 = __ROL8__(v814 ^ v807, v805);
                }
                for ( n = v807; ; LODWORD(v807) = n ^ v807 )
                {
                  n >>= 31;
                  if ( !n )
                    break;
                }
                v816 = v807 & 0x7FFFFFFF;
                if ( v816 == *((_DWORD *)v49 + 5) )
                {
LABEL_1188:
                  v45 = 0LL;
                  goto LABEL_1189;
                }
                if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
                  LODWORD(v45) = 1;
                v817 = *((unsigned int *)v49 + 4);
                v818 = *((_QWORD *)v49 + 1);
                if ( *((_DWORD *)v49 + 4) )
                {
                  v819 = 64LL;
                  if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
                  {
                    v820 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v821 = v818 & 0xFFFFFFFFFFFFF000uLL;
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v818 + v817 - 1) | 0xFFF;
                    v822 = (v818 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v783 = v820;
                      while ( 1 )
                      {
                        v823 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                                 v821,
                                 0LL,
                                 v819,
                                 v803);
                        if ( v823 != -1073741267 )
                          break;
                        if ( (_DWORD)v45 )
                          goto LABEL_1241;
                        if ( v820 > 1u )
                          goto LABEL_1239;
                        v783 = v820;
                        __writecr8(v820);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v823 < 0 )
                        break;
LABEL_1239:
                      v819 = 4096LL;
                      v821 += 4096LL;
                      v822 += 4096LL;
                      if ( v822 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                      {
LABEL_1187:
                        __writecr8(v783);
                        v49 = *(char **)v2;
                        goto LABEL_1188;
                      }
                    }
LABEL_1241:
                    v49 = *(char **)v2;
                    __writecr8(v783);
                  }
                }
                v797 = *(_DWORD *)(v23 + 1936);
                v45 = 0LL;
                v798 = *((unsigned int *)v49 + 5);
                if ( !v797 )
                {
                  v799 = v816;
LABEL_1206:
                  *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v799 ^ v798;
                  v797 = *(_DWORD *)(v23 + 1936);
                }
LABEL_1207:
                v800 = *((_QWORD *)v49 + 1);
                if ( !v797 )
                {
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = *(int *)v49;
                  *(_QWORD *)(v23 + 1968) = v800;
                  *(_DWORD *)(v23 + 1936) = 1;
                }
              }
LABEL_1189:
              v785 = *((_DWORD *)v49 + 10);
              if ( (v785 & 2) == 0 )
                goto LABEL_144;
              v786 = *((_QWORD *)v49 + 1);
              if ( (v785 & 4) != 0 )
              {
                v787 = *((_QWORD *)v49 + 3);
                v788 = **(_QWORD **)(v786 + 112);
                if ( v788 != v787 )
                {
                  v789 = *(_QWORD *)(v23 + 1416);
                  *(_QWORD *)v789 = v788;
                  *(_DWORD *)(v789 + 16) = 256;
                  v790 = *(_DWORD *)(v23 + 1936);
                  if ( !v790 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v787 ^ v788;
                    v790 = *(_DWORD *)(v23 + 1936);
                  }
                  v791 = *(_QWORD *)(v786 + 112);
                  if ( !v790 )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v49;
                    *(_QWORD *)(v23 + 1968) = v791;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                }
              }
              if ( (*((_DWORD *)v49 + 10) & 8) == 0 )
                goto LABEL_144;
              v792 = *((_QWORD *)v49 + 4);
              v793 = **(_QWORD **)(v786 + 120);
              if ( v793 == v792 )
                goto LABEL_144;
              v794 = *(_QWORD *)(v23 + 1416);
              *(_QWORD *)v794 = v793;
              *(_DWORD *)(v794 + 16) = 256;
              v795 = *(_DWORD *)(v23 + 1936);
              if ( !v795 )
              {
                *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v792 ^ v793;
                v795 = *(_DWORD *)(v23 + 1936);
              }
              v796 = *(_QWORD *)(v786 + 120);
              if ( v795 )
                goto LABEL_144;
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = v796;
LABEL_1202:
              *(_DWORD *)(v23 + 1936) = 1;
              goto LABEL_144;
            }
            if ( (*(_DWORD *)(v23 + 1744) & 1) == 0 )
              goto LABEL_144;
            if ( !*(_QWORD *)(v23 + 2072) || (*(_DWORD *)(v23 + 2092) & 4) != 0 )
            {
              v825 = 0LL;
            }
            else
            {
              v824 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(v23 + 976))(26LL, v2 + 648, 0LL);
              v825 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x288);
              if ( v824 < 0 )
                v825 = 0LL;
            }
            v826 = *(__int64 (__fastcall **)(_QWORD))(v23 + 944);
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v825;
            v827 = 0;
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = 0;
            v828 = v826(0LL);
            while ( 2 )
            {
              v829 = v828;
              if ( !v828 )
              {
                v869 = *(_QWORD *)(v23 + 1240);
                if ( (*(int (__fastcall **)(__int64))(v23 + 928))(v869) >= 0 )
                {
                  v870 = (*(__int64 (__fastcall **)(__int64))(v23 + 992))(v869);
                  *(_BYTE *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xBA) = v870;
                  v871 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 1000))(v869, v2 + 91);
                  v872 = (*(__int64 (__fastcall **)(__int64))(v23 + 1008))(v869);
                  if ( v870 == 114
                    || *(_DWORD *)(v23 + 1936)
                    || (*(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v870 ^ 0x72LL, *(_DWORD *)(v23 + 1936)) )
                  {
                    v873 = *(int **)v2;
                  }
                  else
                  {
                    v873 = *(int **)v2;
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = (char *)v873 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *v873;
                    *(_QWORD *)(v23 + 1968) = v869;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  v874 = 0;
                  v875 = 0;
                  if ( (v870 & 7) == 1 )
                  {
                    v874 = 48;
                  }
                  else if ( (v870 & 7) == 2 )
                  {
                    v874 = 16;
                    v875 = 16;
                  }
                  else if ( (v870 & 7) != 0 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = (char *)v873 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *v873;
                    *(_QWORD *)(v23 + 1968) = v869;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  v876 = *(_QWORD *)(v23 + 1472);
                  v877 = (unsigned __int64)v870 >> 4;
                  if ( (*(_BYTE *)(v876 + 2 * v877) | (unsigned __int8)v874) != v871 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = (char *)v873 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *v873;
                    *(_QWORD *)(v23 + 1968) = v869;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  if ( ((unsigned __int8)v875 | *(_BYTE *)(v876 + 2 * v877 + 1)) != *(_BYTE *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                             + 0x5B)
                    && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = (char *)v873 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *v873;
                    *(_QWORD *)(v23 + 1968) = v869;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  if ( v869 == *(_QWORD *)(v23 + 1240) )
                    v878 = 0LL;
                  else
                    v878 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v23 + 984))(v869, 1LL);
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v878;
                  if ( v878 )
                  {
                    v879 = *v878;
                    v880 = v878;
                    if ( *v878 )
                    {
                      v881 = *(char **)v2;
                      do
                      {
                        *v880 = v879 & 0xFFFFFFFFFFFFFFFCuLL;
                        (*(void (**)(void))(v23 + 480))();
                        v882 = *(unsigned __int8 *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5B);
                        v883 = v880[1] & 0xFFFFFFFFFFFF0000uLL;
                        if ( v883 == v872 )
                          v882 = v871;
                        v884 = v880[1] >> 6;
                        LOBYTE(v884) = v884 & 0xF;
                        if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v23 + 1016))(v884, v882) )
                        {
                          v45 = 0LL;
                        }
                        else
                        {
                          if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
                          {
                            v885 = *(_QWORD **)(v23 + 2312);
                            v886 = 48;
                            v887 = 6LL;
                            do
                            {
                              v886 -= 8;
                              *v885 = *(_QWORD *)v881;
                              v881 += 8;
                              ++v885;
                              --v887;
                            }
                            while ( v887 );
                            if ( v886 )
                            {
                              do
                              {
                                v888 = *v881++;
                                *(_BYTE *)v885 = v888;
                                v885 = (_QWORD *)((char *)v885 + 1);
                                --v886;
                              }
                              while ( v886 );
                              v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                            }
                            v881 = *(char **)(v23 + 2312);
                          }
                          *((_QWORD *)v881 + 3) = v883;
                          v45 = 0LL;
                          *((_QWORD *)v881 + 4) = *v880;
                          v881[40] = ((unsigned __int64)*((unsigned int *)v880 + 2) >> 6) & 0xF;
                          if ( !*(_DWORD *)(v23 + 1936) )
                          {
                            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v23 + 1952) = v881 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v23 + 1960) = *(int *)v881;
                            *(_QWORD *)(v23 + 1968) = v869;
                            *(_DWORD *)(v23 + 1936) = 1;
                          }
                        }
                        v880 += 6;
                        v879 = *v880;
                      }
                      while ( *v880 );
                      v878 = *(unsigned __int64 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    }
                    (*(void (__fastcall **)(unsigned __int64 *))(v23 + 256))(v878);
                  }
                  (*(void (__fastcall **)(__int64))(v23 + 936))(v869);
                  v827 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  *(_DWORD *)(v23 + 1736) += 0x8000;
                }
                if ( *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                  (*(void (**)(void))(v23 + 480))();
                *(_DWORD *)(v23 + 1736) += v827 << 8;
                goto LABEL_144;
              }
              if ( v825 == v828 )
              {
                v830 = v49;
                if ( (*(int (__fastcall **)(__int64))(v23 + 928))(v828) >= 0 )
                {
                  v831 = (*(__int64 (__fastcall **)(__int64))(v23 + 992))(v829);
                  *(_BYTE *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v831;
                  v832 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 1000))(v829, v2 + 89);
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = (*(__int64 (__fastcall **)(__int64))(v23 + 1008))(v829);
                  if ( v831 == 97
                    || *(_DWORD *)(v23 + 1936)
                    || (*(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v831 ^ 0x61LL, *(_DWORD *)(v23 + 1936)) )
                  {
                    v833 = *(char **)v2;
                  }
                  else
                  {
                    v833 = *(char **)v2;
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v830 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v833;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  v834 = 0;
                  v835 = 0;
                  if ( (v831 & 7) == 1 )
                  {
                    v834 = 48;
                  }
                  else if ( (v831 & 7) == 2 )
                  {
                    v834 = 16;
                    v835 = 16;
                  }
                  else if ( (v831 & 7) != 0 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v830 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v833;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  v836 = *(_QWORD *)(v23 + 1472);
                  v837 = (unsigned __int64)v831 >> 4;
                  v838 = v834 | *(_BYTE *)(v836 + 2 * v837);
                  v839 = 0xA3A03F5891C8B4E8uLL;
                  if ( v838 != v832 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v830 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v833;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  if ( ((unsigned __int8)v835 | *(_BYTE *)(v836 + 2 * v837 + 1)) != *(_BYTE *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                             + 0x59)
                    && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v830 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v833;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  if ( v829 != *(_QWORD *)(v23 + 1240) )
                    v45 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v23 + 984))(v829, 1LL);
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v45;
                  if ( v45 )
                  {
                    v840 = *v45;
                    v841 = v45;
                    if ( *v45 )
                    {
                      v842 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      do
                      {
                        v843 = v840 & 0xFFFFFFFFFFFFFFFCuLL;
                        *v841 = v843;
                        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 480))(v843, v839);
                        v844 = *(unsigned __int8 *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x59);
                        v845 = v841[1] & 0xFFFFFFFFFFFF0000uLL;
                        if ( v845 == v842 )
                          v844 = v832;
                        v846 = v841[1] >> 6;
                        LOBYTE(v846) = v846 & 0xF;
                        if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v23 + 1016))(v846, v844) )
                        {
                          if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
                          {
                            v847 = *(_QWORD **)(v23 + 2312);
                            LODWORD(v839) = 48;
                            v848 = 6LL;
                            do
                            {
                              v839 = (unsigned int)(v839 - 8);
                              *v847 = *(_QWORD *)v830;
                              v830 += 8;
                              ++v847;
                              --v848;
                            }
                            while ( v848 );
                            if ( (_DWORD)v839 )
                            {
                              do
                              {
                                v849 = *v830++;
                                *(_BYTE *)v847 = v849;
                                v847 = (_QWORD *)((char *)v847 + 1);
                                v839 = (unsigned int)(v839 - 1);
                              }
                              while ( (_DWORD)v839 );
                              v842 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                            }
                            v830 = *(char **)(v23 + 2312);
                          }
                          *((_QWORD *)v830 + 3) = v845;
                          *((_QWORD *)v830 + 4) = *v841;
                          v830[40] = ((unsigned __int64)*((unsigned int *)v841 + 2) >> 6) & 0xF;
                          if ( !*(_DWORD *)(v23 + 1936) )
                          {
                            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v23 + 1952) = v830 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v23 + 1960) = *(int *)v830;
                            *(_QWORD *)(v23 + 1968) = v829;
                            *(_DWORD *)(v23 + 1936) = 1;
                          }
                        }
                        v841 += 6;
                        v840 = *v841;
                      }
                      while ( *v841 );
                      goto LABEL_1332;
                    }
                    goto LABEL_1333;
                  }
                  goto LABEL_1334;
                }
              }
              else if ( (*(unsigned int (__fastcall **)(__int64))(v23 + 968))(v828) )
              {
                v850 = v49;
                if ( (*(int (__fastcall **)(__int64))(v23 + 928))(v829) >= 0 )
                {
                  v851 = (*(__int64 (__fastcall **)(__int64))(v23 + 992))(v829);
                  *(_BYTE *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xB9) = v851;
                  v852 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 1000))(v829, v2 + 90);
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = (*(__int64 (__fastcall **)(__int64))(v23 + 1008))(v829);
                  if ( v851 == 97
                    || *(_DWORD *)(v23 + 1936)
                    || (*(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v851 ^ 0x61LL, *(_DWORD *)(v23 + 1936)) )
                  {
                    v853 = *(char **)v2;
                  }
                  else
                  {
                    v853 = *(char **)v2;
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v850 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v853;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  v854 = 0;
                  v855 = 0;
                  if ( (v851 & 7) == 1 )
                  {
                    v854 = 48;
                  }
                  else if ( (v851 & 7) == 2 )
                  {
                    v854 = 16;
                    v855 = 16;
                  }
                  else if ( (v851 & 7) != 0 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v850 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v853;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  v856 = *(_QWORD *)(v23 + 1472);
                  v857 = (unsigned __int64)v851 >> 4;
                  v63 = (*(_BYTE *)(v856 + 2 * v857) | (unsigned __int8)v854) == v852;
                  v839 = 0xA3A03F5891C8B4E8uLL;
                  if ( !v63 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v850 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v853;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  if ( ((unsigned __int8)v855 | *(_BYTE *)(v856 + 2 * v857 + 1)) != *(_BYTE *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                             + 0x5A)
                    && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v850 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v853;
                    *(_QWORD *)(v23 + 1968) = v829;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  if ( v829 != *(_QWORD *)(v23 + 1240) )
                    v45 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v23 + 984))(v829, 1LL);
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v45;
                  if ( v45 )
                  {
                    v858 = *v45;
                    v859 = v45;
                    if ( *v45 )
                    {
                      v860 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      do
                      {
                        v861 = v858 & 0xFFFFFFFFFFFFFFFCuLL;
                        *v859 = v861;
                        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 480))(v861, v839);
                        v862 = *(unsigned __int8 *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5A);
                        v863 = v859[1] & 0xFFFFFFFFFFFF0000uLL;
                        if ( v863 == v860 )
                          v862 = v852;
                        v864 = v859[1] >> 6;
                        LOBYTE(v864) = v864 & 0xF;
                        if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v23 + 1016))(v864, v862) )
                        {
                          if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
                          {
                            v865 = *(_QWORD **)(v23 + 2312);
                            LODWORD(v839) = 48;
                            v866 = 6LL;
                            do
                            {
                              v839 = (unsigned int)(v839 - 8);
                              *v865 = *(_QWORD *)v850;
                              v850 += 8;
                              ++v865;
                              --v866;
                            }
                            while ( v866 );
                            if ( (_DWORD)v839 )
                            {
                              do
                              {
                                v867 = *v850++;
                                *(_BYTE *)v865 = v867;
                                v865 = (_QWORD *)((char *)v865 + 1);
                                v839 = (unsigned int)(v839 - 1);
                              }
                              while ( (_DWORD)v839 );
                              v860 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                            }
                            v850 = *(char **)(v23 + 2312);
                          }
                          *((_QWORD *)v850 + 3) = v863;
                          *((_QWORD *)v850 + 4) = *v859;
                          v850[40] = ((unsigned __int64)*((unsigned int *)v859 + 2) >> 6) & 0xF;
                          if ( !*(_DWORD *)(v23 + 1936) )
                          {
                            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v23 + 1952) = v850 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v23 + 1960) = *(int *)v850;
                            *(_QWORD *)(v23 + 1968) = v829;
                            *(_DWORD *)(v23 + 1936) = 1;
                          }
                        }
                        v859 += 6;
                        v858 = *v859;
                      }
                      while ( *v859 );
LABEL_1332:
                      v45 = *(unsigned __int64 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      v827 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    }
LABEL_1333:
                    (*(void (__fastcall **)(unsigned __int64 *, unsigned __int64))(v23 + 256))(v45, v839);
                  }
LABEL_1334:
                  (*(void (__fastcall **)(__int64, unsigned __int64))(v23 + 936))(v829, v839);
                  v49 = *(char **)v2;
                  *(_DWORD *)(v23 + 1736) += 0x8000;
                  v825 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  v45 = 0LL;
                }
              }
              v868 = *(__int64 (__fastcall **)(__int64))(v23 + 944);
              *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = ++v827;
              v828 = v868(v829);
              continue;
            }
          }
          if ( (v49[42] & 1) != 0 )
          {
            if ( !*(_QWORD *)(v23 + 2072) )
              goto LABEL_392;
            v889 = *(_DWORD *)(v23 + 2092);
            if ( (v889 & 4) != 0 )
              goto LABEL_392;
            if ( *(_DWORD *)(v23 + 1732) )
            {
              if ( (v889 & 0x20) != 0 )
                goto LABEL_392;
            }
            else
            {
              *(_DWORD *)(v23 + 2092) = v889 ^ ((unsigned __int8)v889 ^ (unsigned __int8)(8 * v889)) & 0x20;
            }
          }
          v890 = *((_QWORD *)v49 + 1);
          v891 = *(unsigned int *)(v23 + 1732);
          v892 = *((unsigned int *)v49 + 9);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v890;
          v893 = v890 + 12 * v891;
          v894 = (_DWORD *)(v893 + 12);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v893;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v893 + 12;
          v895 = v892 / 0xC;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v892 / 0xC;
          v896 = v890 + 12LL * (unsigned int)(v892 / 0xC);
          LODWORD(v890) = v892 / 0xC - 1;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v896;
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v890;
          v897 = &v49[v891 + 48];
          v898 = (unsigned __int64)&v49[(((unsigned int)v890 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v897;
          v899 = *((unsigned __int16 *)v49 + 20);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v898;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v898 + 24 * v899;
          if ( (unsigned int)v891 >= (unsigned int)v890 )
            goto LABEL_1424;
          while ( 2 )
          {
            if ( *v897 < 0 )
              goto LABEL_1421;
            v900 = *(_DWORD *)(v893 + 4);
            v901 = *((_QWORD *)v49 + 3) + v900;
            v902 = *v894 - v900;
            *(_DWORD *)(v23 + 1736) += v902;
            v903 = (_QWORD *)v901;
            v904 = *(_DWORD *)(v23 + 1716);
            v905 = (const char *)v901;
            v906 = *(_QWORD *)(v23 + 1720);
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v901;
            v907 = (unsigned int)v902;
            if ( v901 < v901 + v902 )
            {
              do
              {
                _mm_prefetch(v905, 0);
                v905 += 64;
              }
              while ( (unsigned __int64)v905 < v901 + v902 );
            }
            v908 = v906;
            v909 = (unsigned int)v902 >> 7;
            if ( (unsigned int)v902 >> 7 )
            {
              do
              {
                v910 = 8LL;
                do
                {
                  v911 = v908 ^ *v903;
                  v912 = v903[1];
                  v903 += 2;
                  v908 = __ROL8__(__ROL8__(v911, v904) ^ v912, v904);
                  --v910;
                }
                while ( v910 );
                v913 = __ROL8__(v906 ^ ((unsigned __int64)v903 - v901), 17) ^ v906 ^ ((unsigned __int64)v903 - v901);
                v914 = (v913 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B8) = v914;
                v904 = ((unsigned __int8)(v914 ^ v913) ^ (unsigned __int8)v904) & 0x3F;
                if ( !v904 )
                  LOBYTE(v904) = 1;
                --v909;
              }
              while ( v909 );
              v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            }
            v915 = v902 & 0x7F;
            if ( v915 >= 8 )
            {
              v916 = (unsigned __int64)v915 >> 3;
              do
              {
                v908 = __ROL8__(*v903++ ^ v908, v904);
                v915 -= 8;
                --v916;
              }
              while ( v916 );
            }
            if ( v915 )
            {
              do
              {
                v917 = *(unsigned __int8 *)v903;
                v903 = (_QWORD *)((char *)v903 + 1);
                v908 = __ROL8__(v917 ^ v908, v904);
                --v915;
              }
              while ( v915 );
              v897 = *(char **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            }
            for ( ii = v908; ; LOBYTE(v908) = ii ^ v908 )
            {
              ii >>= 7;
              if ( !ii )
                break;
            }
            v919 = *v897;
            v920 = v908 & 0x7F;
            if ( v920 == (*v897 & 0x7F) )
            {
LABEL_1418:
              v45 = 0LL;
            }
            else
            {
              if ( v907 && (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
              {
                v921 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v922 = v901 & 0xFFFFFFFFFFFFF000uLL;
                v923 = (v907 - 1 + v901) | 0xFFF;
                v924 = v922 - 1;
                while ( 1 )
                {
                  v925 = v921;
                  while ( 1 )
                  {
                    v926 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v23 + 1128))(v922, 0LL);
                    if ( v926 != -1073741267 )
                      break;
                    if ( v921 > 1u )
                      goto LABEL_1416;
                    v925 = v921;
                    __writecr8(v921);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v926 < 0 )
                    break;
LABEL_1416:
                  v922 += 4096LL;
                  v924 += 4096LL;
                  if ( v924 == v923 )
                  {
                    __writecr8(v925);
                    goto LABEL_1418;
                  }
                }
                __writecr8(v925);
                v901 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                v919 = **(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              }
              v45 = 0LL;
              if ( !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v919 & 0x7F ^ (unsigned __int64)v920;
                if ( !*(_DWORD *)(v23 + 1936) )
                {
                  v49 = *(char **)v2;
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = *(int *)v49;
                  *(_QWORD *)(v23 + 1968) = v901;
                  *(_DWORD *)(v23 + 1936) = 1;
LABEL_1420:
                  v893 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  *(_DWORD *)(v23 + 1736) += 64;
                  v897 = *(char **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  v894 = *(_DWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
LABEL_1421:
                  ++v897;
                  v893 += 12LL;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v897;
                  v894 += 3;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v893;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v894;
                  if ( (unsigned __int64)v894 >= *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0)
                    || *(_DWORD *)(v23 + 1736) >= *(_DWORD *)(v23 + 1740) )
                  {
                    v927 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    v895 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    LODWORD(v891) = ((int)v893 - *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68))
                                  / 12;
                    *(_DWORD *)(v23 + 1732) = v891;
                    v898 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    if ( (unsigned int)v891 < v927 )
                      goto LABEL_144;
LABEL_1424:
                    if ( *(_DWORD *)(v23 + 1736) >= *(_DWORD *)(v23 + 1740) )
                      goto LABEL_144;
                    v928 = v898 + 24LL * (unsigned int)(v891 - v895 + 1);
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v928;
                    do
                    {
                      v929 = (unsigned int *)(v928 + 8);
                      v930 = 2LL;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 2LL;
                      LODWORD(v931) = 0;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v928 + 8;
                      do
                      {
                        if ( (int)*v929 >= (int)v931 )
                        {
                          v932 = *(v929 - 2);
                          v933 = *(v929 - 1) - (unsigned int)v932;
                          v934 = (unsigned int)v933;
                          v935 = *(_QWORD *)(*(_QWORD *)v2 + 24LL) + v932;
                          *(_DWORD *)(v23 + 1736) += v933;
                          v936 = (_QWORD *)v935;
                          v937 = *(_DWORD *)(v23 + 1716);
                          v938 = (const char *)v935;
                          v939 = *(_QWORD *)(v23 + 1720);
                          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v935;
                          if ( v935 < v935 + v933 )
                          {
                            do
                            {
                              _mm_prefetch(v938, 0);
                              v938 += 64;
                            }
                            while ( (unsigned __int64)v938 < v935 + v933 );
                          }
                          v940 = v939;
                          v941 = (unsigned int)v933 >> 7;
                          if ( (unsigned int)v933 >> 7 )
                          {
                            do
                            {
                              v942 = 8LL;
                              do
                              {
                                v943 = v940 ^ *v936;
                                v944 = v936[1];
                                v936 += 2;
                                v940 = __ROL8__(__ROL8__(v943, v937) ^ v944, v937);
                                --v942;
                              }
                              while ( v942 );
                              v945 = __ROL8__(v939 ^ ((unsigned __int64)v936 - v935), 17) ^ v939 ^ ((unsigned __int64)v936
                                                                                                  - v935);
                              v946 = (v945 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C0) = v946;
                              v937 = ((unsigned __int8)(v946 ^ v945) ^ (unsigned __int8)v937) & 0x3F;
                              if ( !v937 )
                                LOBYTE(v937) = 1;
                              --v941;
                            }
                            while ( v941 );
                            v929 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                            LODWORD(v931) = 0;
                            v930 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                          }
                          v947 = v933 & 0x7F;
                          if ( v947 >= 8 )
                          {
                            v931 = (unsigned __int64)v947 >> 3;
                            do
                            {
                              v940 = __ROL8__(*v936++ ^ v940, v937);
                              v947 -= 8;
                              --v931;
                            }
                            while ( v931 );
                          }
                          if ( v947 )
                          {
                            do
                            {
                              v948 = *(unsigned __int8 *)v936;
                              v936 = (_QWORD *)((char *)v936 + 1);
                              v940 = __ROL8__(v948 ^ v940, v937);
                              --v947;
                            }
                            while ( v947 );
                            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          }
                          for ( jj = v940; ; LODWORD(v940) = jj ^ v940 )
                          {
                            jj >>= 31;
                            if ( !jj )
                              break;
                          }
                          v950 = *v929;
                          v951 = v940 & 0x7FFFFFFF;
                          if ( v951 != (*v929 & 0x7FFFFFFF) )
                          {
                            if ( !v934 )
                              goto LABEL_1460;
                            v952 = 64LL;
                            if ( (*(_DWORD *)(v23 + 2092) & 0x40) == 0 )
                              goto LABEL_1460;
                            v953 = KeGetCurrentIrql();
                            __writecr8(2uLL);
                            v954 = v935 & 0xFFFFFFFFFFFFF000uLL;
                            v955 = (v935 + v934 - 1) | 0xFFF;
                            v956 = (v935 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1454:
                            v957 = v953;
                            while ( 1 )
                            {
                              v958 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                                       v954,
                                       0LL,
                                       v952,
                                       v936);
                              if ( v958 != -1073741267 )
                                break;
                              if ( v953 > 1u )
                              {
                                LODWORD(v931) = 0;
LABEL_1464:
                                v952 = 4096LL;
                                v954 += 4096LL;
                                v956 += 4096LL;
                                if ( v956 == v955 )
                                {
                                  __writecr8(v957);
                                  v929 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                                  v930 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                                  goto LABEL_1466;
                                }
                                goto LABEL_1454;
                              }
                              v957 = v953;
                              __writecr8(v953);
                              KeGetCurrentIrql();
                              __writecr8(2uLL);
                            }
                            LODWORD(v931) = 0;
                            if ( v958 >= 0 )
                              goto LABEL_1464;
                            __writecr8(v957);
                            v929 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                            v935 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                            v930 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                            v950 = *v929;
LABEL_1460:
                            v959 = v950;
                            if ( !*(_DWORD *)(v23 + 1936) )
                            {
                              LODWORD(v959) = v950 & 0x7FFFFFFF;
                              *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v959 ^ v951;
                              if ( !*(_DWORD *)(v23 + 1936) )
                              {
                                v960 = *(int **)v2;
                                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v23 + 1952) = (char *)v960 - 0x4C48B4211BBACBEBLL;
                                *(_QWORD *)(v23 + 1960) = *v960;
                                *(_QWORD *)(v23 + 1968) = v935;
                                *(_DWORD *)(v23 + 1936) = 1;
                              }
                            }
                          }
                        }
LABEL_1466:
                        v929 += 3;
                        --v930;
                        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v929;
                        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v930;
                      }
                      while ( v930 );
                      v961 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      ++*(_DWORD *)(v23 + 1732);
                      v928 = v961 + 24;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v928;
                      if ( v928 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) )
                      {
                        v45 = 0LL;
                        *(_DWORD *)(v23 + 1732) = 0;
                        goto LABEL_144;
                      }
                    }
                    while ( *(_DWORD *)(v23 + 1736) < *(_DWORD *)(v23 + 1740) );
LABEL_328:
                    v45 = 0LL;
                    goto LABEL_144;
                  }
                  continue;
                }
              }
            }
            break;
          }
          v49 = *(char **)v2;
          goto LABEL_1420;
        }
        v1000 = *((unsigned int *)v49 + 4);
        if ( (_DWORD)v1000 )
        {
          v1055 = (_QWORD *)*((_QWORD *)v49 + 1);
          *(_DWORD *)(v23 + 1736) += v1000;
          v1056 = v1055;
          v1057 = *(_DWORD *)(v23 + 1716);
          v1058 = (const char *)v1055;
          v1059 = *(_QWORD *)(v23 + 1720);
          if ( v1055 < (_QWORD *)((char *)v1055 + v1000) )
          {
            do
            {
              _mm_prefetch(v1058, 0);
              v1058 += 64;
            }
            while ( v1058 < (const char *)v1055 + v1000 );
          }
          v1060 = *(_QWORD *)(v23 + 1720);
          v1061 = (unsigned int)v1000 >> 7;
          if ( (unsigned int)v1000 >> 7 )
          {
            do
            {
              v1062 = 8LL;
              do
              {
                v1063 = v1056[1] ^ __ROL8__(*v1056 ^ v1060, v1057);
                v1056 += 2;
                v1060 = __ROL8__(v1063, v1057);
                --v1062;
              }
              while ( v1062 );
              v1064 = (__ROL8__(v1059 ^ ((char *)v1056 - (char *)v1055), 17) ^ v1059 ^ (unsigned __int64)((char *)v1056 - (char *)v1055))
                    * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E8) = *((_QWORD *)&v1064 + 1);
              v1057 = (BYTE8(v1064) ^ (unsigned __int8)(v1064 ^ v1057)) & 0x3F;
              if ( !v1057 )
                LOBYTE(v1057) = 1;
              --v1061;
            }
            while ( v1061 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          }
          v1065 = v1000 & 0x7F;
          if ( v1065 >= 8 )
          {
            v1066 = (unsigned __int64)v1065 >> 3;
            do
            {
              v1060 = __ROL8__(*v1056++ ^ v1060, v1057);
              v1065 -= 8;
              --v1066;
            }
            while ( v1066 );
          }
          for ( ; v1065; --v1065 )
          {
            v1067 = *(unsigned __int8 *)v1056;
            v1056 = (_QWORD *)((char *)v1056 + 1);
            v1060 = __ROL8__(v1067 ^ v1060, v1057);
          }
          for ( kk = v1060; ; LODWORD(v1060) = kk ^ v1060 )
          {
            kk >>= 31;
            if ( !kk )
              break;
          }
          v1069 = v1060 & 0x7FFFFFFF;
          if ( v1069 == *((_DWORD *)v49 + 5) )
          {
LABEL_1639:
            v45 = 0LL;
          }
          else
          {
            if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
              LODWORD(v45) = 1;
            v1070 = *((unsigned int *)v49 + 4);
            v1071 = *((_QWORD *)v49 + 1);
            if ( *((_DWORD *)v49 + 4) )
            {
              v1072 = 64LL;
              if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
              {
                v1073 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1074 = v1071 & 0xFFFFFFFFFFFFF000uLL;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v1071 + v1070 - 1) | 0xFFF;
                v1075 = (v1071 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1076 = v1073;
                  while ( 1 )
                  {
                    v1077 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                              v1074,
                              0LL,
                              v1072,
                              v1056);
                    if ( v1077 != -1073741267 )
                      break;
                    if ( (_DWORD)v45 )
                      goto LABEL_1651;
                    if ( v1073 > 1u )
                      goto LABEL_1637;
                    v1076 = v1073;
                    __writecr8(v1073);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1077 < 0 )
                    break;
LABEL_1637:
                  v1074 += 4096LL;
                  v1075 += 4096LL;
                  if ( v1075 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                  {
                    __writecr8(v1076);
                    v49 = *(char **)v2;
                    goto LABEL_1639;
                  }
                }
LABEL_1651:
                v49 = *(char **)v2;
                __writecr8(v1076);
              }
            }
            v1091 = *(_DWORD *)(v23 + 1936);
            v45 = 0LL;
            if ( !v1091 )
            {
              *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1069 ^ (unsigned __int64)*((unsigned int *)v49 + 5);
              v1091 = *(_DWORD *)(v23 + 1936);
            }
            v1092 = *((_QWORD *)v49 + 1);
            if ( !v1091 )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = v1092;
              *(_DWORD *)(v23 + 1936) = 1;
            }
          }
          v1078 = 0;
          v1079 = *((_QWORD *)v49 + 1) - 112LL;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v1079;
          v1080 = *(const char **)(v1079 + 80);
          if ( v1080 )
            v1078 = *(_DWORD *)v1080;
          *(_DWORD *)(v23 + 1736) += v1078;
          v1081 = v1080;
          v1082 = *(_DWORD *)(v23 + 1716);
          v1083 = v1080;
          v1084 = *(_QWORD *)(v23 + 1720);
          v1085 = &v1080[v1078];
          if ( v1080 < v1085 )
          {
            do
            {
              _mm_prefetch(v1083, 0);
              v1083 += 64;
            }
            while ( v1083 < v1085 );
          }
          v1086 = *(_QWORD *)(v23 + 1720);
          v1087 = v1078 >> 7;
          if ( v1078 >> 7 )
          {
            do
            {
              v1088 = 8LL;
              do
              {
                v1089 = *((_QWORD *)v1081 + 1) ^ __ROL8__(*(_QWORD *)v1081 ^ v1086, v1082);
                v1081 += 16;
                v1086 = __ROL8__(v1089, v1082);
                --v1088;
              }
              while ( v1088 );
              v1090 = (__ROL8__(v1084 ^ (v1081 - v1080), 17) ^ v1084 ^ (unsigned __int64)(v1081 - v1080))
                    * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F0) = *((_QWORD *)&v1090 + 1);
              v1082 = (BYTE8(v1090) ^ (unsigned __int8)(v1090 ^ v1082)) & 0x3F;
              if ( !v1082 )
                LOBYTE(v1082) = 1;
              --v1087;
            }
            while ( v1087 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          }
          v1093 = v1078 & 0x7F;
          if ( v1093 >= 8 )
          {
            v1094 = (unsigned __int64)v1093 >> 3;
            do
            {
              v1086 = __ROL8__(*(_QWORD *)v1081 ^ v1086, v1082);
              v1081 += 8;
              v1093 -= 8;
              --v1094;
            }
            while ( v1094 );
          }
          for ( ; v1093; --v1093 )
          {
            v1095 = *(unsigned __int8 *)v1081++;
            v1086 = __ROL8__(v1095 ^ v1086, v1082);
          }
          for ( mm = v1086; ; LODWORD(v1086) = mm ^ v1086 )
          {
            mm >>= 31;
            if ( !mm )
              break;
          }
          v1097 = *((unsigned int *)v49 + 11);
          v1098 = v1086 & 0x7FFFFFFF;
          if ( v1098 == (_DWORD)v1097 )
            goto LABEL_144;
          if ( *(_DWORD *)(v23 + 1936) )
            goto LABEL_144;
          *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1098 ^ v1097;
          if ( *(_DWORD *)(v23 + 1936) )
            goto LABEL_144;
          *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v23 + 1960) = *(int *)v49;
          *(_QWORD *)(v23 + 1968) = v1080;
          goto LABEL_1202;
        }
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B0) = v49 + 48;
        v1001 = *((_WORD *)v49 + 20);
        v1583 = v2 + 216;
        *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A8) = v1001;
        *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2AA) = v1001;
        v1002 = *(_QWORD *)(v23 + 1288);
        v1003 = *(int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64))(v23 + 488);
        LOBYTE(v1581) = 0;
        if ( v1003(v2 + 680, 0LL, 0LL, 0LL, v1002, v1581, 0LL, v1583) < 0 )
          goto LABEL_144;
        if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) + 16LL) & 0x10) == 0 )
        {
          v136 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
          goto LABEL_272;
        }
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v23 + 512))(
               *(_QWORD *)(v23 + 488),
               v2 + 400,
               v2 + 636) )
        {
          v1004 = (*(__int64 (__fastcall **)(_QWORD))(v23 + 504))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                            + 0x190));
          if ( v1004 )
          {
            v43 = *(_DWORD *)(v1004 + 80);
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xBC) = v43;
          }
        }
        if ( (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v23 + 512))(
               *((_QWORD *)v49 + 3),
               v2 + 408,
               v2 + 656) )
        {
          v1005 = (*(__int64 (__fastcall **)(_QWORD))(v23 + 504))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                            + 0x198));
          if ( v1005 )
          {
            v44 = *(_DWORD *)(v1005 + 80);
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) = v44;
          }
        }
        if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) == 0 )
        {
          *((_QWORD *)v49 + 1) = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) + 112LL;
          *((_DWORD *)v49 + 4) = 224;
        }
        v1006 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
        v1007 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
        v1008 = 0;
        v1009 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x198);
        v1010 = v43;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v43;
        do
        {
          v1011 = *(_QWORD *)(v1006 + 8LL * v1008 + 112);
          if ( (!v43 || v1011 < v1007 || v1011 > v43 + v1007 - 1) && (!v44 || v1011 < v1009 || v1011 > v44 + v1009 - 1) )
          {
            if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
            {
              v1049 = *(_QWORD **)(v23 + 2312);
              v1050 = 48;
              v1051 = 6LL;
              do
              {
                v1050 -= 8;
                *v1049 = *(_QWORD *)v49;
                v49 += 8;
                ++v1049;
                --v1051;
              }
              while ( v1051 );
              v45 = 0LL;
              if ( v1050 )
              {
                do
                {
                  v1052 = *v49++;
                  *(_BYTE *)v1049 = v1052;
                  v1049 = (_QWORD *)((char *)v1049 + 1);
                  --v1050;
                }
                while ( v1050 );
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              v49 = *(char **)(v23 + 2312);
            }
            else
            {
              v45 = 0LL;
            }
            *((_QWORD *)v49 + 4) = v1011;
            v1053 = *(_QWORD *)(v23 + 1416);
            *(_QWORD *)v1053 = v49;
            *(_DWORD *)(v1053 + 16) = 48;
            v1054 = *((_QWORD *)v49 + 1);
            if ( !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = v1054;
              *(_DWORD *)(v23 + 1936) = 1;
            }
            goto LABEL_144;
          }
          ++v1008;
        }
        while ( v1008 < 0x1Cu );
        if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
        {
          (*(void (**)(void))(v23 + 480))();
          goto LABEL_328;
        }
        v1012 = (_QWORD *)*((_QWORD *)v49 + 1);
        v1013 = *((unsigned int *)v49 + 4);
        v1014 = v1012;
        *(_DWORD *)(v23 + 1736) += v1013;
        v1015 = (const char *)v1012;
        v1016 = *(_DWORD *)(v23 + 1716);
        v1017 = *(_QWORD *)(v23 + 1720);
        if ( v1012 < (_QWORD *)((char *)v1012 + v1013) )
        {
          do
          {
            _mm_prefetch(v1015, 0);
            v1015 += 64;
          }
          while ( v1015 < (const char *)v1012 + v1013 );
        }
        v1018 = (unsigned int)v1013 >> 7;
        v1019 = *(_QWORD *)(v23 + 1720);
        if ( (unsigned int)v1013 >> 7 )
        {
          do
          {
            v1020 = 8LL;
            do
            {
              v1021 = v1014[1] ^ __ROL8__(*v1014 ^ v1019, v1016);
              v1014 += 2;
              v1019 = __ROL8__(v1021, v1016);
              --v1020;
            }
            while ( v1020 );
            v1022 = (__ROL8__(v1017 ^ ((char *)v1014 - (char *)v1012), 17) ^ v1017 ^ (unsigned __int64)((char *)v1014 - (char *)v1012))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D8) = *((_QWORD *)&v1022 + 1);
            v1016 = (BYTE8(v1022) ^ (unsigned __int8)(v1022 ^ v1016)) & 0x3F;
            if ( !v1016 )
              LOBYTE(v1016) = 1;
            --v1018;
          }
          while ( v1018 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          v1010 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
          v44 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
        }
        v1023 = v1013 & 0x7F;
        if ( v1023 >= 8 )
        {
          v1024 = (unsigned __int64)v1023 >> 3;
          do
          {
            v1019 = __ROL8__(*v1014++ ^ v1019, v1016);
            v1023 -= 8;
            --v1024;
          }
          while ( v1024 );
        }
        if ( v1023 )
        {
          do
          {
            v1025 = *(unsigned __int8 *)v1014;
            v1014 = (_QWORD *)((char *)v1014 + 1);
            v1019 = __ROL8__(v1025 ^ v1019, v1016);
            --v1023;
          }
          while ( v1023 );
          v44 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
        }
        for ( nn = v1019; ; LODWORD(v1019) = nn ^ v1019 )
        {
          nn >>= 31;
          if ( !nn )
            break;
        }
        v1027 = 0;
        *((_DWORD *)v49 + 5) = v1019 & 0x7FFFFFFF;
        v1028 = *(const char **)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) + 80LL);
        if ( !v1028 || (v1027 = *(_DWORD *)v1028, v1029 = 0, (v1030 = (unsigned int)(*(_DWORD *)v1028 - 8) >> 3) == 0) )
        {
LABEL_1576:
          *(_DWORD *)(v23 + 1736) += v1027;
          v1034 = v1028;
          v1035 = *(_DWORD *)(v23 + 1716);
          v1036 = v1028;
          v1037 = *(_QWORD *)(v23 + 1720);
          v1038 = &v1028[v1027];
          if ( v1028 < v1038 )
          {
            do
            {
              _mm_prefetch(v1036, 0);
              v1036 += 64;
            }
            while ( v1036 < v1038 );
          }
          v45 = 0LL;
          v1039 = v1027 >> 7;
          v1040 = *(_QWORD *)(v23 + 1720);
          if ( v1027 >> 7 )
          {
            do
            {
              v1041 = 8LL;
              do
              {
                v1042 = *((_QWORD *)v1034 + 1) ^ __ROL8__(*(_QWORD *)v1034 ^ v1040, v1035);
                v1034 += 16;
                v1040 = __ROL8__(v1042, v1035);
                --v1041;
              }
              while ( v1041 );
              v1043 = (__ROL8__(v1037 ^ (v1034 - v1028), 17) ^ v1037 ^ (unsigned __int64)(v1034 - v1028))
                    * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0) = *((_QWORD *)&v1043 + 1);
              v1035 = (BYTE8(v1043) ^ (unsigned __int8)(v1043 ^ v1035)) & 0x3F;
              if ( !v1035 )
                LOBYTE(v1035) = 1;
              --v1039;
            }
            while ( v1039 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          }
          v1045 = v1027 & 0x7F;
          if ( v1045 >= 8 )
          {
            v1046 = (unsigned __int64)v1045 >> 3;
            do
            {
              v1040 = __ROL8__(*(_QWORD *)v1034 ^ v1040, v1035);
              v1034 += 8;
              v1045 -= 8;
              --v1046;
            }
            while ( v1046 );
          }
          for ( ; v1045; --v1045 )
          {
            v1047 = *(unsigned __int8 *)v1034++;
            v1040 = __ROL8__(v1047 ^ v1040, v1035);
          }
          for ( i1 = v1040; ; LODWORD(v1040) = i1 ^ v1040 )
          {
            i1 >>= 31;
            if ( !i1 )
              break;
          }
          *((_DWORD *)v49 + 11) = v1040 & 0x7FFFFFFF;
          goto LABEL_144;
        }
        v1031 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
        v1032 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x198);
        while ( 1 )
        {
          v1033 = *(_QWORD *)&v1028[8 * v1029 + 8];
          if ( v1033
            && (!v1010 || v1033 < v1031 || v1033 > v1010 + v1031 - 1)
            && (!v44 || v1033 < v1032 || v1033 > v44 + v1032 - 1) )
          {
            break;
          }
          if ( ++v1029 >= v1030 )
            goto LABEL_1576;
        }
        *((_QWORD *)v49 + 4) = v1033;
        v45 = 0LL;
        v1044 = *(_QWORD *)(v23 + 1416);
        *(_QWORD *)v1044 = v49;
        *(_DWORD *)(v1044 + 16) = 48;
        if ( *(_DWORD *)(v23 + 1936) )
          goto LABEL_144;
        *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v23 + 1960) = *(int *)v49;
        *(_QWORD *)(v23 + 1968) = v1028;
LABEL_1587:
        *(_DWORD *)(v23 + 1936) = 1;
        goto LABEL_144;
      }
      if ( v73 == 37 )
      {
        if ( (*(_DWORD *)(v23 + 2092) & 2) != 0
          || !(*(unsigned __int8 (**)(void))(v23 + 1064))()
          || *(_DWORD *)(v23 + 1936) )
        {
          goto LABEL_144;
        }
        *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v23 + 1960) = *(int *)v49;
        *(_QWORD *)(v23 + 1968) = 0LL;
        goto LABEL_390;
      }
      if ( v73 == 38 )
      {
        (*(void (__fastcall **)(unsigned __int64, _QWORD))(v23 + 416))(v2 + 1400, *((unsigned int *)v49 + 11));
        v1536 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 464))(v2 + 1400, v2 + 1416);
        __asm { xgetbv }
        v687 = v2 + 1416;
        v686 = v1536 | (v1537 << 32);
        goto LABEL_1028;
      }
      if ( v73 <= 42 )
      {
        *(_DWORD *)(v23 + 1736) += *((_DWORD *)v49 + 9);
        v1404 = *((unsigned int *)v49 + 9);
        v1405 = (_QWORD *)(v23 + *((unsigned int *)v49 + 8));
        v1406 = *(_DWORD *)(v23 + 1716);
        v1407 = v1405;
        v1408 = *(_QWORD *)(v23 + 1720);
        v1409 = (const char *)v1405;
        if ( v1405 < (_QWORD *)((char *)v1405 + v1404) )
        {
          do
          {
            _mm_prefetch(v1409, 0);
            v1409 += 64;
          }
          while ( v1409 < (const char *)v1405 + v1404 );
        }
        v1410 = *(_QWORD *)(v23 + 1720);
        v1411 = (unsigned int)v1404 >> 7;
        if ( (unsigned int)v1404 >> 7 )
        {
          do
          {
            v1412 = 8LL;
            do
            {
              v1413 = v1407[1] ^ __ROL8__(*v1407 ^ v1410, v1406);
              v1407 += 2;
              v1410 = __ROL8__(v1413, v1406);
              --v1412;
            }
            while ( v1412 );
            v1414 = (__ROL8__(v1408 ^ ((char *)v1407 - (char *)v1405), 17) ^ v1408 ^ (unsigned __int64)((char *)v1407 - (char *)v1405))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x440) = *((_QWORD *)&v1414 + 1);
            v1406 = (BYTE8(v1414) ^ (unsigned __int8)(v1414 ^ v1406)) & 0x3F;
            if ( !v1406 )
              LOBYTE(v1406) = 1;
            --v1411;
          }
          while ( v1411 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1415 = v1404 & 0x7F;
        if ( v1415 >= 8 )
        {
          v1416 = (unsigned __int64)v1415 >> 3;
          do
          {
            v1410 = __ROL8__(*v1407++ ^ v1410, v1406);
            v1415 -= 8;
            --v1416;
          }
          while ( v1416 );
        }
        for ( ; v1415; --v1415 )
        {
          v1417 = *(unsigned __int8 *)v1407;
          v1407 = (_QWORD *)((char *)v1407 + 1);
          v1410 = __ROL8__(v1417 ^ v1410, v1406);
        }
        v1418 = *((_QWORD *)v49 + 3);
        if ( v1410 == v1418 )
          goto LABEL_144;
        v1419 = *(_DWORD *)(v23 + 1936);
        if ( !v1419 )
        {
          *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1410 ^ v1418;
          v1419 = *(_DWORD *)(v23 + 1936);
        }
        v1420 = v23 + *((unsigned int *)v49 + 8);
        if ( v1419 )
          goto LABEL_144;
        *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v23 + 1960) = *(int *)v49;
        *(_QWORD *)(v23 + 1968) = v1420;
LABEL_2167:
        *(_DWORD *)(v23 + 1936) = 1;
        goto LABEL_144;
      }
      if ( v73 == 43 )
        goto LABEL_1975;
      if ( v73 != 44 )
      {
        if ( v73 == 46 )
        {
          if ( (*(_DWORD *)(v23 + 1744) & 1) == 0 )
          {
            v1158 = 0;
            v1159 = *(_QWORD *)(v23 + 1344);
            (*(void (**)(void))(v23 + 376))();
            if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 || (v1160 = *(_DWORD *)(v23 + 2024), v1160 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 296))(*(_QWORD *)(v23 + 2200), 0LL);
              v1161 = 0x80;
            }
            else
            {
              v1161 = 1 << v1160;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v23 + 312))(v1159, 0LL);
            if ( v1161 == (char)0x80 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 304))(*(_QWORD *)(v23 + 2200), 0LL);
            }
            else
            {
              v1162 = *(volatile signed __int8 ***)(v23 + 1304);
              v1163 = *v1162;
              if ( *v1162 != (volatile signed __int8 *)v1162 )
              {
                v1164 = ~v1161;
                do
                {
                  _InterlockedAnd8(v1163 - 298, v1164);
                  v1163 = *(volatile signed __int8 **)v1163;
                  ++v1158;
                }
                while ( v1163 != (volatile signed __int8 *)v1162 );
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 320))(*(_QWORD *)(v23 + 1344), 0LL);
            (*(void (**)(void))(v23 + 384))();
            *(_DWORD *)(v23 + 1736) += v1158 << 7;
          }
          goto LABEL_144;
        }
        if ( v73 != 47 )
          goto LABEL_2168;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = KeGetCurrentThread()->ApcState.Process;
        v1147 = (*(__int64 (**)(void))(v23 + 1168))();
        if ( v1147 == -1 )
        {
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = 0LL;
          v1148 = *(_QWORD *)(v23 + 2080);
          if ( !v1148 )
            goto LABEL_1746;
          v1149 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 1152))(v1148, v2 + 136);
          v1150 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
          if ( v1149 < 0 )
            v1150 = 0LL;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v1150;
          if ( !v1150 )
LABEL_1746:
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = (*(__int64 (__fastcall **)(_QWORD))(v23 + 960))(0LL);
          *(_QWORD *)(v23 + 2080) = 0LL;
          v1151 = 0;
          if ( !*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) )
            goto LABEL_1754;
          while ( 1 )
          {
            ++v1151;
            if ( (*(int (**)(void))(v23 + 928))() >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, unsigned __int64))(v23 + 1080))(
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88),
                v2 + 1608);
              v1147 = (*(__int64 (**)(void))(v23 + 1168))();
              (*(void (__fastcall **)(unsigned __int64))(v23 + 1088))(v2 + 1608);
              (*(void (__fastcall **)(_QWORD))(v23 + 936))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                     + 0x88));
              if ( v1147 != -1 || v1151 > 0x100 )
                break;
            }
            v1152 = (*(__int64 (__fastcall **)(_QWORD))(v23 + 960))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                              + 0x88));
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88) = v1152;
            if ( !v1152 )
              goto LABEL_1754;
          }
          *(_QWORD *)(v23 + 2080) = (*(__int64 (__fastcall **)(_QWORD))(v23 + 1160))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                               + 0x88));
          (*(void (__fastcall **)(_QWORD))(v23 + 480))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x88));
          if ( v1147 == -1 )
          {
LABEL_1754:
            *(_DWORD *)(v23 + 1736) += v1151 << 12;
            goto LABEL_144;
          }
        }
        if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
        {
          v1153 = *(_QWORD **)(v23 + 2312);
          v1154 = 48;
          v1155 = 6LL;
          do
          {
            v1154 -= 8;
            *v1153 = *(_QWORD *)v49;
            v49 += 8;
            ++v1153;
            --v1155;
          }
          while ( v1155 );
          for ( ; v1154; --v1154 )
          {
            v1156 = *v49++;
            *(_BYTE *)v1153 = v1156;
            v1153 = (_QWORD *)((char *)v1153 + 1);
          }
          v49 = *(char **)(v23 + 2312);
        }
        *((_DWORD *)v49 + 6) = v1147;
        v1157 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
        if ( *(_DWORD *)(v23 + 1936) )
          goto LABEL_144;
        *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v23 + 1960) = *(int *)v49;
        *(_QWORD *)(v23 + 1968) = v1157;
        goto LABEL_1587;
      }
      v1165 = *((_DWORD *)v49 + 8) >> 1;
      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v23;
      v1166 = v1165 & 1;
      if ( v1166 && (!*(_QWORD *)(v23 + 2072) || (*(_DWORD *)(v23 + 2092) & 4) != 0) )
        goto LABEL_392;
      if ( v1166 )
      {
        v1167 = *(_DWORD *)(v23 + 2092);
        v1168 = v1167;
        if ( *(_DWORD *)(v23 + 1732) )
        {
          if ( (((unsigned __int8)v1167 ^ (unsigned __int8)(v1167 >> 3)) & 4) != 0 )
            goto LABEL_392;
        }
        else
        {
          v1168 = v1167 ^ ((unsigned __int8)v1167 ^ (unsigned __int8)(8 * v1167)) & 0x20;
          *(_DWORD *)(v23 + 2092) = v1168;
        }
        if ( !*(_QWORD *)(v23 + 2072) )
        {
LABEL_1783:
          *(_DWORD *)(v23 + 1732) = 0;
          goto LABEL_1823;
        }
        LOBYTE(v1169) = v1168;
        if ( *(_DWORD *)(v23 + 1732) )
        {
          if ( (((unsigned __int8)v1168 ^ (unsigned __int8)(v1168 >> 3)) & 4) != 0 )
            goto LABEL_1783;
        }
        else
        {
          v1169 = v1168 ^ ((unsigned __int8)v1168 ^ (unsigned __int8)(8 * v1168)) & 0x20;
          *(_DWORD *)(v23 + 2092) = v1169;
        }
        if ( (v1169 & 4) != 0 )
        {
          v1170 = *((_QWORD *)v49 + 1) & 0xFFFFFFFFFFFFF000uLL;
          for ( i2 = ((*((_QWORD *)v49 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v49 + 4) + 4095) >> 12;
                i2;
                v1170 += 4096LL )
          {
            --i2;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v23 + 688))(v1170) && !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = v1170;
              *(_DWORD *)(v23 + 1936) = 1;
            }
            *(_DWORD *)(v23 + 1736) += 256;
          }
          goto LABEL_1823;
        }
        v1172 = (_QWORD *)*((_QWORD *)v49 + 1);
        v1173 = *((unsigned int *)v49 + 4);
        v1174 = v1172;
        *(_DWORD *)(v23 + 1736) += v1173;
        v1175 = (const char *)v1172;
        v1176 = *(_DWORD *)(v23 + 1716);
        v1177 = *(_QWORD *)(v23 + 1720);
        if ( v1172 < (_QWORD *)((char *)v1172 + v1173) )
        {
          do
          {
            _mm_prefetch(v1175, 0);
            v1175 += 64;
          }
          while ( v1175 < (const char *)v1172 + v1173 );
        }
        v1178 = *(_QWORD *)(v23 + 1720);
        v1179 = (unsigned int)v1173 >> 7;
        if ( (unsigned int)v1173 >> 7 )
        {
          do
          {
            v1180 = 8LL;
            do
            {
              v1181 = v1174[1] ^ __ROL8__(*v1174 ^ v1178, v1176);
              v1174 += 2;
              v1178 = __ROL8__(v1181, v1176);
              --v1180;
            }
            while ( v1180 );
            v1182 = (__ROL8__(v1177 ^ ((char *)v1174 - (char *)v1172), 17) ^ v1177 ^ (unsigned __int64)((char *)v1174 - (char *)v1172))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x400) = *((_QWORD *)&v1182 + 1);
            v1176 = (BYTE8(v1182) ^ (unsigned __int8)(v1182 ^ v1176)) & 0x3F;
            if ( !v1176 )
              LOBYTE(v1176) = 1;
            --v1179;
          }
          while ( v1179 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1183 = v1173 & 0x7F;
        if ( v1183 >= 8 )
        {
          v1184 = (unsigned __int64)v1183 >> 3;
          do
          {
            v1178 = __ROL8__(*v1174++ ^ v1178, v1176);
            v1183 -= 8;
            --v1184;
          }
          while ( v1184 );
        }
        for ( ; v1183; --v1183 )
        {
          v1185 = *(unsigned __int8 *)v1174;
          v1174 = (_QWORD *)((char *)v1174 + 1);
          v1178 = __ROL8__(v1185 ^ v1178, v1176);
        }
        for ( i3 = v1178; ; LODWORD(v1178) = i3 ^ v1178 )
        {
          i3 >>= 31;
          if ( !i3 )
            break;
        }
        v1187 = *((_DWORD *)v49 + 5);
        v1188 = v1178 & 0x7FFFFFFF;
        if ( v1188 != v1187 )
        {
          v1189 = *((unsigned int *)v49 + 4);
          v1190 = *((_QWORD *)v49 + 1);
          if ( *((_DWORD *)v49 + 4) && (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
          {
            v1191 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1192 = v1190 & 0xFFFFFFFFFFFFF000uLL;
            v1193 = (v1190 + v1189 - 1) | 0xFFF;
            v1194 = (v1190 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v1195 = v1191;
              while ( 1 )
              {
                v1196 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v23 + 1128))(v1192, 0LL);
                if ( v1196 != -1073741267 )
                  break;
                if ( v1191 > 1u )
                  goto LABEL_1820;
                v1195 = v1191;
                __writecr8(v1191);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1196 < 0 )
                break;
LABEL_1820:
              v1192 += 4096LL;
              v1194 += 4096LL;
              if ( v1194 == v1193 )
                goto LABEL_1821;
            }
            __writecr8(v1195);
            v49 = *(char **)v2;
            v45 = 0LL;
            v1187 = *(_DWORD *)(*(_QWORD *)v2 + 20LL);
          }
          v1202 = *(_DWORD *)(v23 + 1936);
          if ( !v1202 )
          {
            *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1187 ^ (unsigned __int64)v1188;
            v1202 = *(_DWORD *)(v23 + 1936);
          }
          v1203 = *((_QWORD *)v49 + 1);
          if ( !v1202 )
          {
LABEL_1834:
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v1203;
            *(_DWORD *)(v23 + 1936) = 1;
          }
        }
      }
      else
      {
        v1204 = (_QWORD *)*((_QWORD *)v49 + 1);
        v1205 = *((unsigned int *)v49 + 4);
        v1206 = v1204;
        *(_DWORD *)(v23 + 1736) += v1205;
        v1207 = (const char *)v1204;
        v1208 = *(_DWORD *)(v23 + 1716);
        v1209 = *(_QWORD *)(v23 + 1720);
        if ( v1204 < (_QWORD *)((char *)v1204 + v1205) )
        {
          do
          {
            _mm_prefetch(v1207, 0);
            v1207 += 64;
          }
          while ( v1207 < (const char *)v1204 + v1205 );
        }
        v1210 = *(_QWORD *)(v23 + 1720);
        v1211 = (unsigned int)v1205 >> 7;
        if ( (unsigned int)v1205 >> 7 )
        {
          do
          {
            v1212 = 8LL;
            do
            {
              v1213 = v1206[1] ^ __ROL8__(*v1206 ^ v1210, v1208);
              v1206 += 2;
              v1210 = __ROL8__(v1213, v1208);
              --v1212;
            }
            while ( v1212 );
            v1214 = (__ROL8__(v1209 ^ ((char *)v1206 - (char *)v1204), 17) ^ v1209 ^ (unsigned __int64)((char *)v1206 - (char *)v1204))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x408) = *((_QWORD *)&v1214 + 1);
            v1208 = (BYTE8(v1214) ^ (unsigned __int8)(v1214 ^ v1208)) & 0x3F;
            if ( !v1208 )
              LOBYTE(v1208) = 1;
            --v1211;
          }
          while ( v1211 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1215 = v1205 & 0x7F;
        if ( v1215 >= 8 )
        {
          v1216 = (unsigned __int64)v1215 >> 3;
          do
          {
            v1210 = __ROL8__(*v1206++ ^ v1210, v1208);
            v1215 -= 8;
            --v1216;
          }
          while ( v1216 );
        }
        for ( ; v1215; --v1215 )
        {
          v1217 = *(unsigned __int8 *)v1206;
          v1206 = (_QWORD *)((char *)v1206 + 1);
          v1210 = __ROL8__(v1217 ^ v1210, v1208);
        }
        for ( i4 = v1210; ; LODWORD(v1210) = i4 ^ v1210 )
        {
          i4 >>= 31;
          if ( !i4 )
            break;
        }
        v1219 = v1210 & 0x7FFFFFFF;
        if ( v1219 == *((_DWORD *)v49 + 5) )
        {
LABEL_1822:
          v45 = 0LL;
          goto LABEL_1823;
        }
        if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
          LODWORD(v45) = 1;
        v1220 = *((unsigned int *)v49 + 4);
        v1221 = *((_QWORD *)v49 + 1);
        if ( *((_DWORD *)v49 + 4) )
        {
          v1222 = 64LL;
          if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
          {
            v1223 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1224 = v1221 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v1221 + v1220 - 1) | 0xFFF;
            v1225 = (v1221 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v1195 = v1223;
              while ( 1 )
              {
                v1226 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                          v1224,
                          0LL,
                          v1222,
                          v1206);
                if ( v1226 != -1073741267 )
                  break;
                if ( (_DWORD)v45 )
                  goto LABEL_1867;
                if ( v1223 > 1u )
                  goto LABEL_1865;
                v1195 = v1223;
                __writecr8(v1223);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1226 < 0 )
                break;
LABEL_1865:
              v1222 = 4096LL;
              v1224 += 4096LL;
              v1225 += 4096LL;
              if ( v1225 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
              {
LABEL_1821:
                __writecr8(v1195);
                v49 = *(char **)v2;
                goto LABEL_1822;
              }
            }
LABEL_1867:
            v49 = *(char **)v2;
            __writecr8(v1195);
          }
        }
        v1227 = *(_DWORD *)(v23 + 1936);
        v45 = 0LL;
        if ( !v1227 )
        {
          *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = *((unsigned int *)v49 + 5) ^ (unsigned __int64)v1219;
          v1227 = *(_DWORD *)(v23 + 1936);
        }
        v1203 = *((_QWORD *)v49 + 1);
        if ( !v1227 )
          goto LABEL_1834;
      }
LABEL_1823:
      if ( (*((_DWORD *)v49 + 8) & 1) == 0 )
        goto LABEL_144;
      v1197 = *((_QWORD *)v49 + 3);
      v1198 = (*(__int64 (__fastcall **)(__int64))(v23 + 504))(v1197);
      v1199 = (_DWORD *)(v1198 + *(unsigned __int16 *)(v1198 + 20) + 24LL);
      v1200 = &v1199[10 * *(unsigned __int16 *)(v1198 + 6)];
      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1200;
      if ( v1199 == v1200 )
        goto LABEL_328;
      v1201 = *(_DWORD *)(v23 + 1732);
      if ( !v1201 )
      {
        *(_DWORD *)(v23 + 1732) = 4096;
        v1201 = 4096;
      }
      *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1197 == *(_QWORD *)(v23 + 1504)
                                                                           || v1197 == *(_QWORD *)(v23 + 1512);
      v1228 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      while ( 2 )
      {
        v1229 = v1199[4];
        v1230 = v1199[3];
        if ( v1229 <= v1199[2] )
          v1229 = v1199[2];
        v1231 = (v1229 + v1230 + 4095) & 0xFFFFF000;
        if ( v1201 >= v1231 )
          goto LABEL_1893;
        if ( (v1199[9] & 0x2000000) != 0 )
          goto LABEL_1892;
        v1232 = *v1199;
        if ( *v1199 == 1414090313 && v1199[1] == 1195525195 )
          goto LABEL_1892;
        if ( v1232 == 1162297680 )
        {
          v1233 = *((_WORD *)v1199 + 2);
          if ( v1233 == 30839 || v1233 == 29303 || v1233 == 30583 )
            goto LABEL_1892;
        }
        if ( v1232 == 1095914053 && *((_WORD *)v1199 + 2) == 16724 )
          goto LABEL_1892;
        v1234 = *(_QWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        if ( v1234 )
        {
          v1235 = (unsigned __int8 *)v1234[249];
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) = v1234[250];
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = v1234[251];
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x228) = v1234[252];
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x210) = v1235;
        }
        else
        {
          v1236 = *(_OWORD *)off_140399BC0;
          *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x210) = *(_OWORD *)VfExcludeSections;
          v1235 = *(unsigned __int8 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x210);
          *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = v1236;
        }
        v1237 = 7;
        v1238 = (unsigned __int8 *)v1199;
        while ( 1 )
        {
          v1239 = *v1238++;
          v1240 = *v1235++;
          if ( v1239 != v1240 )
            break;
          if ( !--v1237 )
            goto LABEL_1892;
        }
        v1243 = *(__int64 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x218);
        v1244 = 8;
        v1245 = (__int64 *)v1199;
        do
        {
          v1246 = *v1245++;
          v1247 = *v1243++;
          if ( v1246 != v1247 )
            goto LABEL_1903;
          v1244 -= 8;
        }
        while ( v1244 >= 8 );
        if ( !v1244 )
          goto LABEL_1892;
        while ( 1 )
        {
          v1248 = *(unsigned __int8 *)v1245;
          v1245 = (__int64 *)((char *)v1245 + 1);
          v1249 = *(unsigned __int8 *)v1243;
          v1243 = (__int64 *)((char *)v1243 + 1);
          if ( v1248 != v1249 )
            break;
          if ( !--v1244 )
            goto LABEL_1892;
        }
LABEL_1903:
        v1250 = *(unsigned __int8 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x220);
        v1251 = 4;
        v1252 = (unsigned __int8 *)v1199;
        while ( 1 )
        {
          v1253 = *v1252++;
          v1254 = *v1250++;
          if ( v1253 != v1254 )
            break;
          if ( !--v1251 )
            goto LABEL_1892;
        }
        v1255 = *(unsigned __int8 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x228);
        v1256 = 6;
        v1257 = (unsigned __int8 *)v1199;
        while ( 1 )
        {
          v1258 = *v1257++;
          v1259 = *v1255++;
          if ( v1258 != v1259 )
            break;
          if ( !--v1256 )
            goto LABEL_1892;
        }
        v1260 = v1199[9];
        if ( v1260 < 0 || (v1260 & 0x20000000) == 0 )
        {
LABEL_1892:
          v1201 = v1231;
LABEL_1893:
          v1241 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
          goto LABEL_1894;
        }
        v1261 = 1;
        if ( v1228 && *v1199 != 778396769 )
          v1261 = *v1199 == 1162297680;
        v1241 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        if ( v1201 >= v1230 )
          v1230 = v1201;
        v1201 = v1230;
LABEL_1919:
        v1262 = v1197 + v1201;
        if ( (*(_BYTE *)(v1241 + 1819) & 4) != 0 )
        {
          __asm { xbegin  $+6 }
          __asm { xend }
          ++*(_DWORD *)(v1241 + 1756);
          *(_DWORD *)(v1241 + 1736) += 256;
          goto LABEL_1930;
        }
        if ( v1261 )
        {
          v1263 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, unsigned __int8 *))(v1241 + 1104))(
                    v2 + 768,
                    v1197 + v1201,
                    v1241,
                    v1257);
          if ( v1263 < 0 )
          {
            v1241 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
            if ( v1263 == -1073741819 && !*(_DWORD *)(v1241 + 1936) )
            {
              v1264 = *(int **)v2;
              *(_QWORD *)(v1241 + 1944) = v1241 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v1241 + 1952) = (char *)v1264 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v1241 + 1960) = *v1264;
              *(_QWORD *)(v1241 + 1968) = v1262;
              *(_DWORD *)(v1241 + 1936) = 1;
            }
            goto LABEL_1930;
          }
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x300) = 0LL;
          *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30A) = 0;
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x328) = 4096;
          *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x308) = 8
                                                                                * (((unsigned __int16)((v1262 & 0xFFF) + 0x1FFF) >> 12)
                                                                                 + 6);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x320) = v1262 & 0xFFFFFFFFFFFFF000uLL;
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x32C) = v1262 & 0xFFF;
          v1265 = (*(__int64 (__fastcall **)(__int64))(v1241 + 1112))(v1197 + v1201);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x418) = v1265;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x330) = v1265 >> 12;
        }
        v1266 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        ++*(_DWORD *)(v1266 + 1760);
        *(_QWORD *)(v1266 + 2288) = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x320)
                                  + *(unsigned int *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x32C);
        *(_QWORD *)(v1266 + 2280) = *(_QWORD *)v2;
        v1267 = KeGetCurrentIrql();
        __writecr8(2uLL);
        RtlInitMinimalBarrier(v1266 + 2248, **(unsigned int **)(v1266 + 1520), 0LL);
        v1241 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48)
                                                  + 1096LL))(
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48)
                + *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) + 1684LL));
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v1241;
        __writecr8(v1267);
        if ( v1261 )
        {
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(v1241 + 1120))(v2 + 768, 0LL);
          v1241 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
        }
        *(_DWORD *)(v1241 + 1736) += 81920;
LABEL_1930:
        v1268 = *(_DWORD *)(v1241 + 1736);
        v1201 += 4096;
        if ( v1201 >= v1231 || v1268 >= *(_DWORD *)(v1241 + 1740) )
        {
          if ( v1268 >= *(_DWORD *)(v1241 + 1740) )
          {
            v1242 = *(_DWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            goto LABEL_1934;
          }
LABEL_1894:
          v1242 = *(_DWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          v1199 += 10;
          if ( v1199 == v1242 )
          {
LABEL_1934:
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            if ( v1199 == v1242 && v1201 >= v1231 )
            {
              v45 = 0LL;
              *(_DWORD *)(v1241 + 1732) = 0;
              goto LABEL_144;
            }
            *(_DWORD *)(v1241 + 1732) = v1201;
            goto LABEL_328;
          }
          continue;
        }
        goto LABEL_1919;
      }
    }
    if ( v73 == 27 )
    {
      if ( (*(_DWORD *)(v23 + 1744) & 1) == 0 )
        goto LABEL_144;
      v742 = *(_QWORD *)(v23 + 1440);
      v171 = 0;
      v743 = *(void (**)(void))(v23 + 376);
      v744 = *(_QWORD **)(v23 + 1448);
      v745 = *(_QWORD *)(v23 + 1344);
      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v742;
      v743();
      if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 || (v746 = *(_DWORD *)(v23 + 2024), v746 >= 7) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 296))(*(_QWORD *)(v23 + 2200), 0LL);
        LOBYTE(v43) = 0x80;
      }
      else
      {
        v43 = 1;
        LOBYTE(v43) = 1 << v746;
      }
      v747 = *(void (__fastcall **)(__int64, _QWORD))(v23 + 312);
      *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v43;
      v747(v745, 0LL);
      (*(void (__fastcall **)(__int64, _QWORD))(v23 + 312))(v742, 0LL);
      v748 = *(_QWORD ***)(v23 + 1432);
      for ( i5 = *v748; i5 != v748; i5 = (_QWORD *)*i5 )
      {
        if ( i5 - 3 != v744 )
        {
          v750 = *(i5 - 1);
          if ( (*(_DWORD *)(v750 + 772) & 0x4000000) != 0 )
            _InterlockedOr8((volatile signed __int8 *)(v750 + 446), v43);
        }
      }
      v751 = *(_QWORD ***)(v23 + 1304);
      v752 = *v751;
      if ( *v751 != v751 )
      {
        do
        {
          v753 = v752 - 93;
          if ( (*((char *)v752 - 298) & (unsigned __int8)v43) == 0 )
          {
            v754 = (_QWORD *)v753[131];
            if ( v754 )
            {
              if ( v754 != v744 && (*((_DWORD *)v753 + 193) & 0x4000000) != 0 && !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v49;
                *(_QWORD *)(v23 + 1968) = v753;
                *(_DWORD *)(v23 + 1936) = 1;
              }
            }
          }
          _InterlockedAnd8((volatile signed __int8 *)v753 + 446, ~(_BYTE)v43);
          v752 = (_QWORD *)*v752;
          ++v171;
        }
        while ( v752 != v751 );
        v43 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        v742 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
      }
      v252 = v742;
      goto LABEL_459;
    }
    if ( v73 > 11 )
    {
      if ( v73 == 12 )
      {
        if ( !*(_QWORD *)(v23 + 2072) )
          goto LABEL_392;
        v1269 = *(_DWORD *)(v23 + 2092);
        LOBYTE(v1270) = v1269;
        if ( *(_DWORD *)(v23 + 1732) )
        {
          if ( (((unsigned __int8)v1269 ^ (unsigned __int8)(v1269 >> 3)) & 4) != 0 )
            goto LABEL_392;
        }
        else
        {
          v1270 = v1269 ^ ((unsigned __int8)v1269 ^ (unsigned __int8)(8 * v1269)) & 0x20;
          *(_DWORD *)(v23 + 2092) = v1270;
        }
        if ( (v1270 & 4) != 0 )
        {
          v1271 = *((_QWORD *)v49 + 4);
          if ( v1271 )
          {
            v1272 = *(unsigned int *)(v23 + 1732);
            v1273 = ((((int)v1272 + (int)v1271) & 0xFFFLL)
                   + (unsigned __int64)(unsigned int)(*((_DWORD *)v49 + 10) - v1272)
                   + 4095) >> 12;
            v1274 = v1271 + v1272;
          }
          else
          {
            v1274 = *((_QWORD *)v49 + 1);
            v1273 = ((v1274 & 0xFFF) + (unsigned __int64)*((unsigned int *)v49 + 4) + 4095) >> 12;
          }
          v1275 = v1274 & 0xFFFFFFFFFFFFF000uLL;
          while ( v1273 )
          {
            --v1273;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v23 + 688))(v1275) && !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = v1275;
              *(_DWORD *)(v23 + 1936) = 1;
            }
            *(_DWORD *)(v23 + 1736) += 256;
            v1275 += 4096LL;
            if ( v1271 )
            {
              *(_DWORD *)(v23 + 1732) += 4096;
              if ( *(_DWORD *)(v23 + 1736) >= *(_DWORD *)(v23 + 1740) )
                break;
            }
          }
          if ( v1271 && !v1273 )
            *(_DWORD *)(v23 + 1732) = 0;
          if ( *(_DWORD *)(v23 + 1732) )
            goto LABEL_144;
          v1276 = *(_QWORD *)(v23 + 1336);
          v1277 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v23 + 336))(v1276);
          v1279 = **(unsigned int ***)(v23 + 1544);
          v1280 = v1279 + 4;
          v1281 = *((_BYTE *)v1279 + 12);
          v1282 = (unsigned __int64)&v1279[6 * *v1279 + 4];
          while ( 1 )
          {
            v1283 = 24LL;
            v1284 = (__int64 *)(v49 + 24);
            v1285 = v1280;
            do
            {
              v1286 = *(_QWORD *)v1285;
              v1285 += 2;
              v1287 = *v1284++;
              if ( v1286 != v1287 )
                goto LABEL_1966;
              v1283 = (unsigned int)(v1283 - 8);
            }
            while ( (unsigned int)v1283 >= 8 );
            if ( (_DWORD)v1283 )
            {
              while ( 1 )
              {
                v1278 = *(unsigned __int8 *)v1285;
                v1285 = (unsigned int *)((char *)v1285 + 1);
                v1288 = *(unsigned __int8 *)v1284;
                v1284 = (__int64 *)((char *)v1284 + 1);
                if ( v1278 != v1288 )
                  break;
                v63 = (_DWORD)v1283 == 1;
                v1283 = (unsigned int)(v1283 - 1);
                if ( v63 )
                  goto LABEL_1967;
              }
LABEL_1966:
              v1280 += 6;
              if ( (unsigned __int64)v1280 < v1282 )
                continue;
            }
LABEL_1967:
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v23 + 400))(
              *(_QWORD *)(v23 + 1336),
              v1278,
              v1283,
              v1284);
            __writecr8(v1277);
            v45 = 0LL;
            if ( !v1281 )
              goto LABEL_2414;
            if ( (*(_DWORD *)(v23 + 2092) & 0x10) != 0 && !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = 1LL;
              *(_DWORD *)(v23 + 1936) = 1;
            }
            if ( *((_QWORD *)v49 + 3) != 1LL )
            {
LABEL_2414:
              if ( v1280 == (unsigned int *)v1282 && !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v49;
                *(_QWORD *)(v23 + 1968) = v1280;
                *(_DWORD *)(v23 + 1936) = 1;
              }
            }
            goto LABEL_144;
          }
        }
        goto LABEL_1975;
      }
      if ( v73 <= 14 )
      {
        if ( v73 == 14 )
        {
          if ( !*(_QWORD *)(v23 + 2072) )
            goto LABEL_392;
          v696 = *(_DWORD *)(v23 + 2092);
          if ( ((v696 >> 2) & 1) != 0 )
            goto LABEL_392;
          if ( *(_DWORD *)(v23 + 1732) )
          {
            if ( ((v696 >> 5) & 1) != 0 )
              goto LABEL_392;
          }
          else
          {
            *(_DWORD *)(v23 + 2092) = v696 ^ ((unsigned __int8)v696 ^ (unsigned __int8)(8 * v696)) & 0x20;
          }
        }
        v697 = (_QWORD *)*((_QWORD *)v49 + 1);
        v698 = *((unsigned int *)v49 + 4);
        v699 = v697;
        *(_DWORD *)(v23 + 1736) += v698;
        v700 = (const char *)v697;
        v701 = *(_DWORD *)(v23 + 1716);
        v702 = *(_QWORD *)(v23 + 1720);
        if ( v697 < (_QWORD *)((char *)v697 + v698) )
        {
          do
          {
            _mm_prefetch(v700, 0);
            v700 += 64;
          }
          while ( v700 < (const char *)v697 + v698 );
        }
        v703 = *(_QWORD *)(v23 + 1720);
        v704 = (unsigned int)v698 >> 7;
        if ( (unsigned int)v698 >> 7 )
        {
          do
          {
            v705 = 8LL;
            do
            {
              v706 = v699[1] ^ __ROL8__(*v699 ^ v703, v701);
              v699 += 2;
              v703 = __ROL8__(v706, v701);
              --v705;
            }
            while ( v705 );
            v707 = (__ROL8__(v702 ^ ((char *)v699 - (char *)v697), 17) ^ v702 ^ (unsigned __int64)((char *)v699
                                                                                                 - (char *)v697))
                 * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x3A0) = *((_QWORD *)&v707 + 1);
            v701 = (BYTE8(v707) ^ (unsigned __int8)(v707 ^ v701)) & 0x3F;
            if ( !v701 )
              LOBYTE(v701) = 1;
            --v704;
          }
          while ( v704 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v708 = v698 & 0x7F;
        if ( v708 >= 8 )
        {
          v709 = (unsigned __int64)v708 >> 3;
          do
          {
            v703 = __ROL8__(*v699++ ^ v703, v701);
            v708 -= 8;
            --v709;
          }
          while ( v709 );
        }
        for ( ; v708; --v708 )
        {
          v710 = *(unsigned __int8 *)v699;
          v699 = (_QWORD *)((char *)v699 + 1);
          v703 = __ROL8__(v710 ^ v703, v701);
        }
        for ( i6 = v703; ; LODWORD(v703) = i6 ^ v703 )
        {
          i6 >>= 31;
          if ( !i6 )
            break;
        }
        v712 = v703 & 0x7FFFFFFF;
        if ( v712 == *((_DWORD *)v49 + 5) )
          goto LABEL_1081;
        _InterlockedOr(v1579, 0);
        if ( (*((_DWORD *)v49 + 6) & 1) != 0 )
        {
          if ( **(_BYTE **)(v23 + 1400) )
            goto LABEL_1081;
        }
        v713 = *((unsigned int *)v49 + 4);
        v714 = *((_QWORD *)v49 + 1);
        if ( *((_DWORD *)v49 + 4) )
        {
          v715 = 64LL;
          if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
          {
            v716 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v717 = v714 & 0xFFFFFFFFFFFFF000uLL;
            v718 = (v714 + v713 - 1) | 0xFFF;
            v719 = (v714 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v720 = v716;
              while ( 1 )
              {
                v721 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                         v717,
                         0LL,
                         v715,
                         v699);
                if ( v721 != -1073741267 )
                  break;
                if ( v716 > 1u )
                  goto LABEL_1079;
                v720 = v716;
                __writecr8(v716);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v721 < 0 )
                break;
LABEL_1079:
              v715 = 4096LL;
              v717 += 4096LL;
              v719 += 4096LL;
              if ( v719 == v718 )
              {
                __writecr8(v720);
                v49 = *(char **)v2;
                v45 = 0LL;
LABEL_1081:
                if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) == 0 )
                  goto LABEL_144;
                v722 = *((unsigned int *)v49 + 4);
                if ( !(_DWORD)v722 )
                  goto LABEL_144;
                sub_14019FEBC(v23, *((_QWORD *)v49 + 1), v722, v2 + 1288);
                v723 = 16;
                v724 = (__int64 *)(v49 + 28);
                v725 = (__int64 *)(v2 + 1288);
                do
                {
                  v726 = *v725++;
                  v727 = *v724++;
                  if ( v726 != v727 )
                    goto LABEL_1096;
                  v723 -= 8;
                }
                while ( v723 >= 8 );
                if ( !v723 )
                  goto LABEL_1089;
                while ( 1 )
                {
                  v728 = *(unsigned __int8 *)v725;
                  v725 = (__int64 *)((char *)v725 + 1);
                  v729 = *(unsigned __int8 *)v724;
                  v724 = (__int64 *)((char *)v724 + 1);
                  if ( v728 != v729 )
                    break;
                  if ( !--v723 )
                    goto LABEL_1089;
                }
LABEL_1096:
                _InterlockedOr(v1579, 0);
                if ( (*((_DWORD *)v49 + 6) & 1) == 0 || !**(_BYTE **)(v23 + 1400) )
                {
                  v733 = *((unsigned int *)v49 + 4);
                  v734 = *((_QWORD *)v49 + 1);
                  if ( *((_DWORD *)v49 + 4) )
                  {
                    v735 = 64LL;
                    if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
                    {
                      v736 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v737 = v734 & 0xFFFFFFFFFFFFF000uLL;
                      v738 = (v734 + v733 - 1) | 0xFFF;
                      v739 = (v734 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v740 = v736;
                        while ( 1 )
                        {
                          v741 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v23 + 1128))(
                                   v737,
                                   0LL,
                                   v735,
                                   v724);
                          if ( v741 != -1073741267 )
                            break;
                          if ( v736 > 1u )
                            goto LABEL_1106;
                          v740 = v736;
                          __writecr8(v736);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v741 < 0 )
                          break;
LABEL_1106:
                        v735 = 4096LL;
                        v737 += 4096LL;
                        v739 += 4096LL;
                        if ( v739 == v738 )
                        {
                          __writecr8(v740);
                          v45 = 0LL;
                          goto LABEL_1089;
                        }
                      }
                      __writecr8(v740);
                      v734 = *((_QWORD *)v49 + 1);
                      v45 = 0LL;
                    }
                  }
                  if ( !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v49;
                    *(_QWORD *)(v23 + 1968) = v734;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                }
LABEL_1089:
                v730 = 16 * *((_DWORD *)v49 + 4);
LABEL_1090:
                *(_DWORD *)(v23 + 1736) += v730;
                goto LABEL_144;
              }
            }
            __writecr8(v720);
            v49 = *(char **)v2;
            v45 = 0LL;
          }
        }
        v731 = *(_DWORD *)(v23 + 1936);
        if ( !v731 )
        {
          *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = *((unsigned int *)v49 + 5) ^ (unsigned __int64)v712;
          v731 = *(_DWORD *)(v23 + 1936);
        }
        v732 = *((_QWORD *)v49 + 1);
        if ( !v731 )
        {
          *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v23 + 1960) = *(int *)v49;
          *(_QWORD *)(v23 + 1968) = v732;
          *(_DWORD *)(v23 + 1936) = 1;
        }
        goto LABEL_1081;
      }
      if ( v73 == 15 )
      {
        if ( *(_DWORD *)(v23 + 2028) == 11 )
        {
          *(_DWORD *)(v23 + 1736) += 256;
          v691 = *(_QWORD *)(v23 + 1408);
          v692 = (*(__int64 (__fastcall **)(__int64))(v23 + 728))(v691);
          if ( v692 )
          {
            v693 = (*(__int64 (__fastcall **)(__int64))(v23 + 736))(v692);
            v694 = *((_QWORD *)v49 + 3);
            if ( v694 )
            {
              if ( v694 != v693 && !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v49;
                *(_QWORD *)(v23 + 1968) = v693;
                *(_DWORD *)(v23 + 1936) = 1;
              }
            }
            else
            {
              v695 = *(_QWORD *)(v23 + 2064);
              if ( (!*(_DWORD *)(v23 + 2060) || v693 < v695 || v693 > v695 + *(unsigned int *)(v23 + 2060) - 1LL)
                && !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v49;
                *(_QWORD *)(v23 + 1968) = v693;
                *(_DWORD *)(v23 + 1936) = 1;
              }
              *((_QWORD *)v49 + 3) = v693;
            }
            (*(void (__fastcall **)(__int64, __int64))(v23 + 744))(v691, v692);
          }
        }
        goto LABEL_144;
      }
      if ( v73 != 21 )
      {
        if ( v73 != 24 )
        {
          if ( v73 != 25 )
          {
            if ( v73 != 26 )
              goto LABEL_2168;
            if ( (*(_DWORD *)(v23 + 1744) & 1) != 0 )
              goto LABEL_144;
            v242 = *(void (**)(void))(v23 + 376);
            v171 = 0;
            v243 = *(_QWORD **)(v23 + 1448);
            v244 = *(_QWORD *)(v23 + 1344);
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
            v245 = *(_QWORD *)(v23 + 1440);
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v245;
            v242();
            if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 || (v246 = *(_DWORD *)(v23 + 2024), v246 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 296))(*(_QWORD *)(v23 + 2200), 0LL);
              LOBYTE(v43) = 0x80;
            }
            else
            {
              LOBYTE(v43) = 1 << v246;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v23 + 312))(v244, 0LL);
            v247 = *(volatile signed __int8 ***)(v23 + 1304);
            v248 = *v247;
            if ( *v247 != (volatile signed __int8 *)v247 )
            {
              do
              {
                _InterlockedOr8(v248 - 298, v43);
                v248 = *(volatile signed __int8 **)v248;
                ++v171;
              }
              while ( v248 != (volatile signed __int8 *)v247 );
              *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v171;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v23 + 312))(v245, 0LL);
            v249 = *(_QWORD ***)(v23 + 1432);
            v250 = *v249;
            if ( *v249 != v249 )
            {
              do
              {
                if ( v250 - 3 != v243 )
                {
                  v251 = *(v250 - 1);
                  if ( ((unsigned __int8)v43 & *(_BYTE *)(v251 + 446)) == 0
                    && (*(_DWORD *)(v251 + 772) & 0x4000000) != 0
                    && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v49;
                    *(_QWORD *)(v23 + 1968) = v251;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  _InterlockedAnd8((volatile signed __int8 *)(v251 + 446), ~(_BYTE)v43);
                }
                v250 = (_QWORD *)*v250;
              }
              while ( v250 != v249 );
              v171 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
              v245 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            }
            v252 = v245;
LABEL_459:
            (*(void (__fastcall **)(__int64, _QWORD))(v23 + 320))(v252, 0LL);
            if ( (_BYTE)v43 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 304))(*(_QWORD *)(v23 + 2200), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 320))(*(_QWORD *)(v23 + 1344), 0LL);
            (*(void (**)(void))(v23 + 384))();
LABEL_327:
            *(_DWORD *)(v23 + 1736) += v171 << 8;
            goto LABEL_328;
          }
          v253 = *(_QWORD ***)(v23 + 1320);
          v254 = *(__int64 (**)(void))(v23 + 888);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v253;
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = 0;
          v255 = v254();
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v255;
          (*(void (__fastcall **)(struct _KTHREAD *))(v23 + 360))(CurrentThread);
          LOBYTE(v257) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v23 + 240))(*(_QWORD *)(v23 + 1328), v257);
          v258 = 0;
          v259 = **(unsigned int ***)(v23 + 1544);
          v260 = *v259;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v259 + 4;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = &v259[6 * v260 + 4];
          if ( *((_BYTE *)v259 + 12) )
          {
            v261 = *v253;
            LODWORD(v260) = 0;
            while ( v261 != v253 )
            {
              v261 = (_QWORD *)*v261;
              LODWORD(v260) = v260 + 1;
            }
          }
          v262 = *(unsigned int *)(v23 + 1712);
          v263 = __rdtsc();
          v264 = __ROR8__(v263, 3);
          v265 = (v264 ^ v263) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A8) = *((_QWORD *)&v265 + 1);
          v266 = (WORD4(v265) ^ (unsigned __int16)(8193 * (v264 ^ v263))) & 0x7FF;
          v267 = __rdtsc();
          v268 = (__ROR8__(v267, 3) ^ v267) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B0) = *((_QWORD *)&v268 + 1);
          v269 = (*((_QWORD *)&v268 + 1) ^ (unsigned __int64)v268) % (unsigned int)(v266 + 1);
          v270 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v23 + 248))(
                   512LL,
                   (unsigned int)(v266 + 8 * v260),
                   v262);
          v271 = v270;
          if ( !v270 )
          {
            ++*(_DWORD *)(v23 + 2224);
            goto LABEL_482;
          }
          v272 = v269;
          v273 = (_QWORD *)v270;
          if ( (unsigned int)v269 >= 8 )
          {
            v274 = (unsigned __int64)(unsigned int)v269 >> 3;
            do
            {
              v275 = __rdtsc();
              v272 -= 8;
              v276 = (__ROR8__(v275, 3) ^ v275) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B8) = *((_QWORD *)&v276 + 1);
              *v273++ = v276 ^ *((_QWORD *)&v276 + 1);
              --v274;
            }
            while ( v274 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v253 = *(_QWORD ***)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          }
          if ( v272 )
          {
            v277 = __rdtsc();
            v278 = (__ROR8__(v277, 3) ^ v277) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C0) = *((_QWORD *)&v278 + 1);
            v279 = v278 ^ *((_QWORD *)&v278 + 1);
            do
            {
              *(_BYTE *)v273 = v279;
              v273 = (_QWORD *)((char *)v273 + 1);
              v279 >>= 8;
              --v272;
            }
            while ( v272 );
          }
          v280 = v266 - v269;
          v281 = (_QWORD *)((unsigned int)v269 + v271 + (unsigned int)(8 * v260));
          if ( v280 >= 8 )
          {
            v273 = (_QWORD *)((unsigned __int64)v280 >> 3);
            do
            {
              v282 = __rdtsc();
              v280 -= 8;
              v283 = (__ROR8__(v282, 3) ^ v282) * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5A8) = *((_QWORD *)&v283 + 1);
              *v281++ = v283 ^ *((_QWORD *)&v283 + 1);
              v273 = (_QWORD *)((char *)v273 - 1);
            }
            while ( v273 );
          }
          if ( v280 )
          {
            v284 = __rdtsc();
            v285 = (__ROR8__(v284, 3) ^ v284) * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C8) = *((_QWORD *)&v285 + 1);
            v286 = v285 ^ *((_QWORD *)&v285 + 1);
            do
            {
              *(_BYTE *)v281 = v286;
              v281 = (_QWORD *)((char *)v281 + 1);
              v286 >>= 8;
              --v280;
            }
            while ( v280 );
          }
          v287 = v271 + (unsigned int)v269;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x180) = v271;
          if ( v287 )
          {
            v288 = *v253;
            while ( v288 != v253 )
            {
              v289 = v288[6];
              if ( !(*(unsigned int (__fastcall **)(__int64))(v23 + 680))(v289) && v258 < (unsigned int)v260 )
                *(_QWORD *)(v287 + 8LL * v258++) = v289;
              v288 = (_QWORD *)*v288;
              ++*(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            }
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD *))(v23 + 920))(v287, v258, v281, v273);
            v290 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
            v291 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
            do
            {
              v292 = *(_QWORD *)(v290 + 8);
              if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v23 + 680))(v292) )
              {
                v293 = v258 - 1;
                v294 = 0;
                if ( (int)(v258 - 1) < 0 )
                  goto LABEL_499;
                do
                {
                  v295 = (v293 + v294) >> 1;
                  v296 = *(_QWORD *)(v287 + 8LL * v295);
                  if ( v292 >= v296 )
                  {
                    if ( v292 <= v296 )
                      break;
                    v294 = v295 + 1;
                  }
                  else
                  {
                    if ( !v295 )
                      goto LABEL_499;
                    v293 = v295 - 1;
                  }
                }
                while ( v293 >= v294 );
                if ( v293 < v294 )
                {
LABEL_499:
                  if ( !*(_DWORD *)(v23 + 1936) )
                  {
                    v297 = *(int **)v2;
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = (char *)v297 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *v297;
                    *(_QWORD *)(v23 + 1968) = v292;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                }
              }
              v290 += 24LL;
            }
            while ( v290 < v291 );
            v45 = 0LL;
          }
          else
          {
LABEL_482:
            v45 = 0LL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x180) = 0LL;
          }
          (*(void (__fastcall **)(_QWORD))(v23 + 280))(*(_QWORD *)(v23 + 1328));
          (*(void (**)(void))(v23 + 368))();
          (*(void (__fastcall **)(_QWORD))(v23 + 896))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x68));
          if ( *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x180) )
          {
            *(_DWORD *)(v23 + 1736) += *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) << 9;
            (*(void (__fastcall **)(_QWORD))(v23 + 256))(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                   + 0x180));
          }
          goto LABEL_144;
        }
        if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 && (*(_DWORD *)(v23 + 2092) & 0x1000) == 0 )
        {
          v298 = __rdtsc();
          v299 = (__ROR8__(v298, 3) ^ v298) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5D0) = *((_QWORD *)&v299 + 1);
          *(_DWORD *)(v23 + 1732) = ((unsigned __int64)v299 ^ *((_QWORD *)&v299 + 1)) % 5;
        }
        v300 = 1LL;
LABEL_509:
        v301 = *(_DWORD *)(v23 + 1732);
        if ( !v301 )
        {
          v677 = v49;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = 0LL;
          v307 = 0;
          while ( 1 )
          {
            v684 = (*(__int64 (__fastcall **)(unsigned __int64))(v23 + 768))(v2 + 480);
            if ( !v684 )
              break;
            v307 += v300;
            if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 520))(v684, v2 + 920) )
            {
              if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
              {
                v678 = *(_QWORD **)(v23 + 2312);
                v679 = 48;
                v680 = 6LL;
                do
                {
                  v679 -= 8;
                  *v678++ = *v677++;
                  v680 -= v300;
                }
                while ( v680 );
                if ( v679 )
                {
                  do
                  {
                    v681 = *(_BYTE *)v677;
                    v677 = (_QWORD *)((char *)v677 + v300);
                    *(_BYTE *)v678 = v681;
                    v678 = (_QWORD *)((char *)v678 + v300);
                    --v679;
                  }
                  while ( v679 );
                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v677 = *(_QWORD **)(v23 + 2312);
              }
              v677[3] = v684;
              v682 = *(_QWORD *)(v23 + 1416);
              *(_QWORD *)v682 = v677;
              *(_DWORD *)(v682 + 16) = 48;
              v683 = *(_QWORD *)(v23 + 1416);
              *(_QWORD *)(v683 + 8) = v684;
              *(_DWORD *)(v683 + 20) = 4096;
              if ( !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = (char *)v677 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v677;
                *(_QWORD *)(v23 + 1968) = 3LL;
                *(_DWORD *)(v23 + 1936) = v300;
              }
            }
          }
          goto LABEL_1020;
        }
        v302 = v301 - 1;
        if ( !v302 )
        {
          v668 = v49;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8) = 0LL;
          v307 = 0;
          v669 = KeGetCurrentIrql();
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v669;
          __writecr8(0xCuLL);
          v670 = (*(__int64 (__fastcall **)(unsigned __int64))(v23 + 776))(v2 + 472);
          if ( v670 )
          {
            do
            {
              v307 += v300;
              if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 520))(v670, v2 + 912) )
              {
                if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
                {
                  v671 = *(_QWORD **)(v23 + 2312);
                  v672 = 48;
                  v673 = 6LL;
                  do
                  {
                    v672 -= 8;
                    *v671++ = *v668++;
                    v673 -= v300;
                  }
                  while ( v673 );
                  if ( v672 )
                  {
                    do
                    {
                      v674 = *(_BYTE *)v668;
                      v668 = (_QWORD *)((char *)v668 + v300);
                      *(_BYTE *)v671 = v674;
                      v671 = (_QWORD *)((char *)v671 + v300);
                      --v672;
                    }
                    while ( v672 );
                    v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  }
                  v668 = *(_QWORD **)(v23 + 2312);
                }
                v668[3] = v670;
                v675 = *(_QWORD *)(v23 + 1416);
                *(_QWORD *)v675 = v668;
                *(_DWORD *)(v675 + 16) = 48;
                v676 = *(_QWORD *)(v23 + 1416);
                *(_QWORD *)(v676 + 8) = v670;
                *(_DWORD *)(v676 + 20) = 4096;
                if ( !*(_DWORD *)(v23 + 1936) )
                {
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = (char *)v668 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = *(int *)v668;
                  *(_QWORD *)(v23 + 1968) = 4LL;
                  *(_DWORD *)(v23 + 1936) = v300;
                }
              }
              v670 = (*(__int64 (__fastcall **)(unsigned __int64))(v23 + 776))(v2 + 472);
            }
            while ( v670 );
            v669 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
          }
          __writecr8((unsigned __int8)v669);
          goto LABEL_1020;
        }
        v303 = v302 - 1;
        if ( !v303 )
        {
          v655 = v49;
          v656 = 0LL;
          v307 = 0;
          do
          {
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) = 0;
            while ( 1 )
            {
              do
              {
                if ( !(*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v23 + 760))(
                        (unsigned int)v45,
                        v2 + 256,
                        v2 + 392) )
                  goto LABEL_992;
                v659 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v23 + 728))(
                         *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x188),
                         v657,
                         v658,
                         0LL);
              }
              while ( !v659 );
              ++v307;
              v660 = (*(__int64 (__fastcall **)(__int64))(v23 + 736))(v659);
              if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 520))(v660, v2 + 904) )
                break;
              (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v23 + 744))(
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x188),
                v659,
                v661,
                0LL);
            }
            if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
            {
              v662 = *(_QWORD **)(v23 + 2312);
              v663 = 48;
              v664 = 6LL;
              do
              {
                v663 -= 8;
                *v662 = *(_QWORD *)v655;
                v655 += 8;
                ++v662;
                --v664;
              }
              while ( v664 );
              if ( v663 )
              {
                do
                {
                  v665 = *v655++;
                  *(_BYTE *)v662 = v665;
                  v662 = (_QWORD *)((char *)v662 + 1);
                  --v663;
                }
                while ( v663 );
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              v655 = *(char **)(v23 + 2312);
            }
            *((_QWORD *)v655 + 3) = v660;
            v666 = *(_QWORD *)(v23 + 1416);
            *(_QWORD *)v666 = v655;
            *(_DWORD *)(v666 + 16) = 48;
            v667 = *(_QWORD *)(v23 + 1416);
            *(_QWORD *)(v667 + 8) = v660;
            *(_DWORD *)(v667 + 20) = 4096;
            if ( !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v655 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v655;
              *(_QWORD *)(v23 + 1968) = v656;
              *(_DWORD *)(v23 + 1936) = 1;
            }
LABEL_992:
            LODWORD(v45) = (_DWORD)v45 + 1;
            ++v656;
          }
          while ( (unsigned int)v45 < 3 );
LABEL_993:
          v300 = 1LL;
          goto LABEL_1020;
        }
        v304 = v303 - 1;
        if ( v304 )
        {
          v305 = v304 - 1;
          if ( v305 )
          {
            if ( v305 == 1 )
            {
              v306 = v49;
              *(_BYTE *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = -1;
              v307 = 0;
              v308 = 0;
              v309 = 0LL;
              do
              {
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8) = 0LL;
                while ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, unsigned __int64))(v23 + 1072))(
                          v308,
                          v2 + 504,
                          v2 + 88,
                          v2 + 320) )
                {
                  v307 += v300;
                  if ( !(*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(v23 + 520))(
                          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x140),
                          v2 + 1496) )
                  {
                    if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
                    {
                      v310 = *(_QWORD **)(v23 + 2312);
                      v311 = 48;
                      v312 = 6LL;
                      do
                      {
                        v311 -= 8;
                        *v310++ = *v306++;
                        v312 -= v300;
                      }
                      while ( v312 );
                      if ( v311 )
                      {
                        do
                        {
                          v313 = *(_BYTE *)v306;
                          v306 = (_QWORD *)((char *)v306 + v300);
                          *(_BYTE *)v310 = v313;
                          v310 = (_QWORD *)((char *)v310 + v300);
                          --v311;
                        }
                        while ( v311 );
                        v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      }
                      v306 = *(_QWORD **)(v23 + 2312);
                    }
                    v306[3] = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x140);
                    v314 = *(_QWORD *)(v23 + 1416);
                    *(_QWORD *)v314 = v306;
                    *(_DWORD *)(v314 + 16) = 48;
                    v315 = *(_QWORD *)(v23 + 1416);
                    *(_QWORD *)(v315 + 8) = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x140);
                    *(_DWORD *)(v315 + 20) = 4096;
                    if ( !*(_DWORD *)(v23 + 1936) )
                    {
                      *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v23 + 1952) = (char *)v306 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v23 + 1960) = *(int *)v306;
                      *(_QWORD *)(v23 + 1968) = v309;
                      *(_DWORD *)(v23 + 1936) = v300;
                    }
                  }
                }
                v308 += v300;
                v309 += v300;
              }
              while ( v308 < 3 );
              goto LABEL_1020;
            }
            *(_DWORD *)(v23 + 1732) = 0;
            goto LABEL_1023;
          }
          v316 = *(__int64 (__fastcall **)(_QWORD))(v23 + 792);
          v307 = 0;
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 0;
          v317 = v316(0LL);
          if ( v317 )
          {
            v318 = *(char **)v2;
            do
            {
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) = 0LL;
              v319 = v318;
              v320 = 1;
              v321 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 784))(v317, v2 + 456);
              if ( v321 )
              {
                do
                {
                  ++v320;
                  if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 520))(v321, v2 + 840) )
                  {
                    if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
                    {
                      v322 = *(_QWORD **)(v23 + 2312);
                      v323 = 48;
                      v324 = 6LL;
                      do
                      {
                        v323 -= 8;
                        *v322 = *(_QWORD *)v319;
                        v319 += 8;
                        ++v322;
                        --v324;
                      }
                      while ( v324 );
                      if ( v323 )
                      {
                        do
                        {
                          v325 = *v319++;
                          *(_BYTE *)v322 = v325;
                          v322 = (_QWORD *)((char *)v322 + 1);
                          --v323;
                        }
                        while ( v323 );
                        v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      }
                      v319 = *(char **)(v23 + 2312);
                    }
                    *((_QWORD *)v319 + 3) = v321;
                    *((_QWORD *)v319 + 4) = v317;
                    v326 = *(_QWORD *)(v23 + 1416);
                    *(_QWORD *)v326 = v319;
                    *(_DWORD *)(v326 + 16) = 48;
                    v327 = *(_QWORD *)(v23 + 1416);
                    *(_QWORD *)(v327 + 8) = v321;
                    *(_DWORD *)(v327 + 20) = 4096;
                    if ( !*(_DWORD *)(v23 + 1936) )
                    {
                      *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v23 + 1952) = v319 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v23 + 1960) = *(int *)v319;
                      *(_QWORD *)(v23 + 1968) = 6LL;
                      *(_DWORD *)(v23 + 1936) = 1;
                    }
                  }
                  v321 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 784))(v317, v2 + 456);
                }
                while ( v321 );
                v307 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                v318 = *(char **)v2;
              }
              v328 = *(__int64 (__fastcall **)(__int64))(v23 + 792);
              v307 += v320;
              *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = v307;
              v317 = v328(v317);
            }
            while ( v317 );
          }
          goto LABEL_993;
        }
        v329 = (_BYTE *)v23;
        v330 = *(__int64 **)(v23 + 1256);
        v307 = 0;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v23;
        v331 = *v330;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = *v330;
        if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
          goto LABEL_993;
        v332 = *(int **)v2;
        v333 = *(_QWORD *)(*(_QWORD *)v2 + 40LL);
        if ( v333 )
        {
          v300 = 1LL;
          v307 = 1;
          if ( v331 != v333 )
          {
            *((_QWORD *)v332 + 3) = v331;
            v334 = *(_QWORD *)(v23 + 1416);
            *(_QWORD *)v334 = v332;
            *(_DWORD *)(v334 + 16) = 48;
            v335 = *(_QWORD *)(v23 + 1416);
            *(_QWORD *)(v335 + 8) = v331;
            *(_DWORD *)(v335 + 20) = 4096;
            if ( !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = (char *)v332 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *v332;
              *(_QWORD *)(v23 + 1968) = 5LL;
              *(_DWORD *)(v23 + 1936) = 1;
            }
          }
          goto LABEL_1020;
        }
        if ( !v331 )
          goto LABEL_993;
        v336 = *(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(v23 + 512);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v23;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 1;
        v337 = v336(v331, v2 + 144, v2 + 92);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v337;
        v339 = v337;
        if ( !v337 )
        {
LABEL_554:
          v340 = -1073741701;
          goto LABEL_973;
        }
        v341 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        v342 = (_BYTE *)(v2 + 304);
        v343 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C);
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v343;
        v344 = 0xFFFFFFFFLL;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v341;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = 0LL;
        v345 = 4;
        do
        {
          *v342++ = 0;
          --v345;
        }
        while ( v345 );
        v346 = 0;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
        if ( *(_DWORD *)(v23 + 1708) )
        {
          LODWORD(v344) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x130);
          LODWORD(v338) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x12C);
          v347 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x128);
          while ( 1 )
          {
            v348 = 0;
            v349 = v23;
            if ( *(_QWORD *)(v23 + 2304) )
              v349 = *(_QWORD *)(v23 + 2304);
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v349;
            v350 = (int *)(v349 + *(unsigned int *)(v349 + 1704));
            if ( v347 && (unsigned int)v338 <= v346 )
            {
              v348 = v338;
              v350 = (int *)(v349 + (unsigned int)v344);
            }
            if ( v348 != v346 )
              break;
LABEL_588:
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = 1;
            v344 = (unsigned int)((_DWORD)v350 - v349);
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x12C) = v348;
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) = v344;
            v347 = 1;
            v358 = *v350;
            v338 = v348;
            if ( (unsigned int)v358 <= 0x2B )
            {
              v359 = 0x80000001002LL;
              if ( _bittest64(&v359, v358) )
              {
                if ( *((_QWORD *)v350 + 1) == v339 && v350[4] == v343 )
                  goto LABEL_598;
              }
            }
            if ( (unsigned int)(v358 - 33) <= 1 && *((_QWORD *)v350 + 4) == v341 )
              goto LABEL_598;
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = ++v346;
            if ( v346 >= *(_DWORD *)(v23 + 1708) )
              goto LABEL_597;
          }
          v351 = v346 - v348;
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v346;
          while ( 2 )
          {
            v352 = *v350;
            if ( *v350 > 12 )
            {
              if ( v352 == 28 )
              {
                v357 = *((unsigned __int16 *)v350 + 20);
                goto LABEL_585;
              }
              if ( v352 == 30 )
              {
                v356 = (((v350[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v350 + 20) + 2);
                goto LABEL_586;
              }
              if ( v352 <= 32 )
                goto LABEL_582;
              if ( v352 <= 34 )
              {
                v356 = 20
                     * (unsigned int)(((v350[8] & 0xFFFLL) + (unsigned __int64)(unsigned int)v350[10] + 4095) >> 12)
                     + 48;
                goto LABEL_586;
              }
              if ( v352 != 43 )
                goto LABEL_582;
            }
            else if ( v352 != 12 )
            {
              v353 = v352 - 1;
              if ( v353 )
              {
                v354 = v353 - 6;
                if ( !v354 )
                {
                  v356 = (unsigned int)(24 * (v350[6] + 2));
                  goto LABEL_586;
                }
                v355 = v354 - 1;
                if ( v355 )
                {
                  if ( v355 == 2 )
                  {
                    v356 = (unsigned int)(16 * (v350[7] + 3));
                    goto LABEL_586;
                  }
LABEL_582:
                  v356 = 48LL;
LABEL_586:
                  v350 = (int *)((char *)v350 + v356);
                  if ( !--v351 )
                  {
                    v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    v348 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                    v349 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    v346 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    v341 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    v343 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    v339 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                    goto LABEL_588;
                  }
                  continue;
                }
                v357 = *((unsigned __int16 *)v350 + 16);
LABEL_585:
                v356 = (v357 + 55) & 0xFFFFFFF8;
                goto LABEL_586;
              }
            }
            break;
          }
          v356 = 4 * (v350[4] / 0xCu) + 48;
          goto LABEL_586;
        }
LABEL_597:
        v350 = 0LL;
LABEL_598:
        v331 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = v350;
        if ( v350 )
        {
          v340 = -1073741554;
          goto LABEL_973;
        }
        v360 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(v23 + 680))(v331, v344, 0LL, v338);
        v63 = (*(_DWORD *)(v23 + 2088) & 0x40000000) == 0;
        v362 = v360;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v360;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                          + 0x5C);
        if ( !v63 )
        {
          v363 = sub_14087CF84(v2 + 192, *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90), 9LL);
          v329 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
          v340 = v363;
          goto LABEL_973;
        }
        v364 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64))(v23 + 496);
        v365 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D8) = 0LL;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) = 0;
        LOBYTE(v361) = 1;
        v366 = v364(v365, v361, 0LL, v2 + 92);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C0) = v366;
        v367 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        v368 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C) & (unsigned int)-(v366 != 0);
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C) = v368;
        v369 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v23 + 496);
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A4) = v368;
        LOBYTE(v368) = 1;
        v370 = v369(v367, v368, 12LL, v2 + 92);
        v371 = v370;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v370;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8) = v370;
        LOBYTE(v371) = 1;
        v372 = v370 != 0 ? *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C) : 0;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C) = v372;
        v373 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64))(v23 + 496);
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v372;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = v372;
        v374 = v373(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90), v371, 10LL, v2 + 92);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D0) = v374;
        v375 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
        v376 = v374 != 0 ? *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C) : 0;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C) = v376;
        v377 = *(__int64 (__fastcall **)(__int64))(v23 + 504);
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1AC) = v376;
        v378 = v377(v375);
        if ( !v378 )
          goto LABEL_554;
        v379 = *(unsigned int *)(v23 + 1668);
        v380 = *(unsigned int *)(v23 + 1980);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B8) = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                           + 0x90);
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = *(_DWORD *)(v378 + 84);
        v381 = v379 + 240;
        v382 = v362 != 0 ? 0xB : 0;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v382;
        if ( (unsigned int)(v379 + 240) <= *(_DWORD *)(v23 + 2228) )
        {
          v384 = v23;
          *(_DWORD *)(v23 + 1668) = v381;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v23;
          goto LABEL_623;
        }
        v383 = sub_1402E732C(v23, v381, v380);
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v383;
        v384 = v383;
        if ( v383 )
        {
          v385 = *(_DWORD *)(v23 + 2088);
          if ( (v385 & 4) == 0 )
          {
            v386 = *(_DWORD *)(v23 + 1668);
            v387 = *(_QWORD *)(v23 + 1640);
            v388 = (_QWORD *)v23;
            v389 = (v385 & 0x20000000) != 0 ? *(_DWORD *)(v23 + 1980) : 0;
            if ( v386 >= 8 )
            {
              v390 = (unsigned __int64)v386 >> 3;
              do
              {
                *v388 = 0LL;
                v386 -= 8;
                ++v388;
                --v390;
              }
              while ( v390 );
            }
            for ( ; v386; --v386 )
            {
              *(_BYTE *)v388 = 0;
              v388 = (_QWORD *)((char *)v388 + 1);
            }
            v391 = *(_DWORD *)(v384 + 1980);
            *(_DWORD *)(v384 + 1980) = v389;
            if ( v389 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v384 + 872))(v387);
            }
            else
            {
              v392 = 0;
              if ( (*(_DWORD *)(v384 + 2088) & 0x10000000) == 0 )
                v392 = v389;
              if ( v392 )
                (*(void (__fastcall **)(__int64, _QWORD))(v384 + 552))(v387 - 8, *(_QWORD *)(v387 - 8));
              else
                (*(void (__fastcall **)(__int64))(v384 + 256))(v387);
            }
            *(_DWORD *)(v384 + 1980) = v391;
          }
          *(_DWORD *)(v384 + 2088) &= ~4u;
          v382 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
LABEL_623:
          *(_DWORD *)(v384 + 1708) += 5;
          v393 = v384 + v379;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = v384 + v379;
          v394 = (_QWORD *)(v2 + 696);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = v384 + v379;
          v395 = (unsigned int *)(v2 + 416);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 5LL;
          do
          {
            v396 = *v395;
            v397 = 48;
            v398 = (_QWORD *)*v394;
            v399 = (_QWORD *)v393;
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v396;
            v400 = 6LL;
            do
            {
              *v399 = 0LL;
              v397 -= 8;
              ++v399;
              --v400;
            }
            while ( v400 );
            for ( ; v397; --v397 )
            {
              *(_BYTE *)v399 = 0;
              v399 = (_QWORD *)((char *)v399 + 1);
            }
            *(_DWORD *)v393 = v382;
            *(_QWORD *)(v393 + 8) = v398;
            v401 = v398;
            *(_DWORD *)(v393 + 16) = v396;
            v402 = (const char *)v398;
            *(_DWORD *)(v384 + 1736) += v396;
            v403 = *(_DWORD *)(v384 + 1716);
            v404 = *(_QWORD *)(v384 + 1720);
            if ( v398 < (_QWORD *)((char *)v398 + v396) )
            {
              do
              {
                _mm_prefetch(v402, 0);
                v402 += 64;
              }
              while ( v402 < (const char *)v398 + v396 );
            }
            v405 = *(_QWORD *)(v384 + 1720);
            v406 = (unsigned int)v396 >> 7;
            if ( (unsigned int)v396 >> 7 )
            {
              do
              {
                v407 = 8LL;
                do
                {
                  v408 = v405 ^ *v401;
                  v409 = v401[1];
                  v401 += 2;
                  v405 = __ROL8__(__ROL8__(v408, v403) ^ v409, v403);
                  --v407;
                }
                while ( v407 );
                v410 = __ROL8__(v404 ^ ((char *)v401 - (char *)v398), 17) ^ v404 ^ ((char *)v401 - (char *)v398);
                v411 = (v410 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x350) = v411;
                v403 = ((unsigned __int8)(v411 ^ v410) ^ (unsigned __int8)v403) & 0x3F;
                if ( !v403 )
                  LOBYTE(v403) = 1;
                --v406;
              }
              while ( v406 );
              v384 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              LODWORD(v396) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
            }
            v412 = v396 & 0x7F;
            if ( v412 >= 8 )
            {
              v413 = (unsigned __int64)(v396 & 0x7F) >> 3;
              do
              {
                v405 = __ROL8__(*v401++ ^ v405, v403);
                v412 -= 8;
                --v413;
              }
              while ( v413 );
            }
            if ( v412 )
            {
              do
              {
                v414 = *(unsigned __int8 *)v401;
                v401 = (_QWORD *)((char *)v401 + 1);
                v405 = __ROL8__(v414 ^ v405, v403);
                --v412;
              }
              while ( v412 );
              v384 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            }
            for ( i7 = v405; ; LODWORD(v405) = i7 ^ v405 )
            {
              i7 >>= 31;
              if ( !i7 )
                break;
            }
            v382 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            *(_DWORD *)(v393 + 20) = v405 & 0x7FFFFFFF;
            ++v395;
            *(_DWORD *)(v384 + 1736) += v396;
            ++v394;
            v393 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) + 48LL;
            v63 = (*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28))-- == 1LL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D0) = v393;
          }
          while ( !v63 );
          v416 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0);
          v417 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          v418 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
          *(_DWORD *)v416 = 44;
          *(_QWORD *)(v416 + 24) = v417;
          if ( (*(_DWORD *)(v384 + 2088) & 0x10200000) != 0 )
          {
LABEL_651:
            if ( !v418 )
              goto LABEL_653;
          }
          else if ( !v418 )
          {
            if ( (*(_DWORD *)(v384 + 2092) & 0x8000) != 0 )
            {
              *(_DWORD *)(v416 + 32) |= 1u;
              goto LABEL_651;
            }
LABEL_653:
            v419 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
            v420 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            v421 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
            v329 = (_BYTE *)v384;
            v1583 = v2 + 340;
            v1582 = v2 + 252;
            LODWORD(v1581) = 9;
            LODWORD(BugCheckParameter4) = v418;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v384;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v384;
            v340 = sub_1402E68D4((int)v2 + 168, v421, v420, v419, BugCheckParameter4, v1581, v1582, v1583);
            if ( v340 < 0 )
              goto LABEL_972;
            v329 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
            v422 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x154)
                 - *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC);
            v423 = &v329[*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) - v384];
            v424 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90)
                            + *(unsigned int *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC));
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = v423;
            v425 = v423 + 192;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v329;
            v426 = 48;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v425;
            v427 = v425;
            v428 = 6LL;
            do
            {
              *v427 = 0LL;
              v426 -= 8;
              ++v427;
              --v428;
            }
            while ( v428 );
            for ( ; v426; --v426 )
            {
              *(_BYTE *)v427 = 0;
              v427 = (_QWORD *)((char *)v427 + 1);
            }
            v429 = v424;
            *(_DWORD *)v425 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            v430 = (const char *)v424;
            *((_QWORD *)v425 + 1) = v424;
            *((_DWORD *)v425 + 4) = v422;
            *((_DWORD *)v329 + 434) += v422;
            v431 = *((_DWORD *)v329 + 429);
            v432 = *((_QWORD *)v329 + 215);
            v433 = (unsigned __int64)v424 + v422;
            if ( (unsigned __int64)v424 < v433 )
            {
              do
              {
                _mm_prefetch(v430, 0);
                v430 += 64;
              }
              while ( (unsigned __int64)v430 < v433 );
            }
            v434 = *((_QWORD *)v329 + 215);
            v435 = v422 >> 7;
            if ( v422 >> 7 )
            {
              do
              {
                v436 = 8LL;
                do
                {
                  v437 = v429[1] ^ __ROL8__(*v429 ^ v434, v431);
                  v429 += 2;
                  v434 = __ROL8__(v437, v431);
                  --v436;
                }
                while ( v436 );
                v438 = __ROL8__(v432 ^ ((char *)v429 - (char *)v424), 17) ^ v432 ^ ((char *)v429 - (char *)v424);
                v428 = (v438 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x358) = v428;
                v431 = ((unsigned __int8)(v428 ^ v438) ^ (unsigned __int8)v431) & 0x3F;
                if ( !v431 )
                  LOBYTE(v431) = 1;
                --v435;
              }
              while ( v435 );
              v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              v425 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              v418 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
            }
            v439 = v422 & 0x7F;
            if ( (unsigned int)v439 >= 8 )
            {
              v440 = (unsigned __int64)(unsigned int)v439 >> 3;
              do
              {
                v434 = __ROL8__(*v429++ ^ v434, v431);
                v439 = (unsigned int)(v439 - 8);
                --v440;
              }
              while ( v440 );
            }
            if ( (_DWORD)v439 )
            {
              do
              {
                v441 = *(unsigned __int8 *)v429;
                v429 = (_QWORD *)((char *)v429 + 1);
                v434 = __ROL8__(v441 ^ v434, v431);
                v439 = (unsigned int)(v439 - 1);
              }
              while ( (_DWORD)v439 );
              v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            }
            for ( i8 = v434 >> 31; i8; i8 >>= 31 )
              v434 = (unsigned int)i8 ^ (unsigned int)v434;
            LODWORD(v434) = v434 & 0x7FFFFFFF;
            *((_DWORD *)v425 + 5) = v434;
            v443 = (int *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) + 96LL);
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = v443;
            v444 = (v418 != 0) + 13;
            if ( v443 )
            {
              v447 = v329;
              *v443 = v444;
              LODWORD(v460) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
              v459 = *(const char **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
              goto LABEL_721;
            }
            v445 = *((unsigned int *)v329 + 417);
            v446 = v445 + 48;
            if ( (unsigned int)(v445 + 48) <= *((_DWORD *)v329 + 557) )
            {
              v447 = v329;
              *((_DWORD *)v329 + 417) = v446;
              goto LABEL_696;
            }
            v447 = (_BYTE *)sub_1402E732C(v329, v446, *((unsigned int *)v329 + 495));
            if ( v447 )
            {
              v448 = *((_DWORD *)v329 + 522);
              if ( (v448 & 4) == 0 )
              {
                v449 = *((_DWORD *)v329 + 417);
                v450 = *((_QWORD *)v329 + 205);
                v451 = (v448 & 0x20000000) != 0 ? *((_DWORD *)v329 + 495) : 0;
                if ( v449 >= 8 )
                {
                  v452 = (unsigned __int64)v449 >> 3;
                  do
                  {
                    *(_QWORD *)v329 = 0LL;
                    v449 -= 8;
                    v329 += 8;
                    --v452;
                  }
                  while ( v452 );
                }
                for ( ; v449; --v449 )
                  *v329++ = 0;
                v453 = *((_DWORD *)v447 + 495);
                *((_DWORD *)v447 + 495) = v451;
                if ( v451 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v447 + 109))(v450);
                }
                else
                {
                  v454 = 0;
                  if ( (*((_DWORD *)v447 + 522) & 0x10000000) == 0 )
                    v454 = v451;
                  if ( v454 )
                    (*((void (__fastcall **)(__int64, _QWORD))v447 + 69))(v450 - 8, *(_QWORD *)(v450 - 8));
                  else
                    (*((void (__fastcall **)(__int64))v447 + 32))(v450);
                }
                *((_DWORD *)v447 + 495) = v453;
              }
              *((_DWORD *)v447 + 522) &= ~4u;
LABEL_696:
              ++*((_DWORD *)v447 + 427);
              v455 = &v447[v445];
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x270) = v455;
              v456 = v455;
              v457 = 48;
              v458 = 6LL;
              do
              {
                *v456 = 0LL;
                v457 -= 8;
                ++v456;
                --v458;
              }
              while ( v458 );
              for ( ; v457; --v457 )
              {
                *(_BYTE *)v456 = 0;
                v456 = (_QWORD *)((char *)v456 + 1);
              }
              v459 = *(const char **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
              *(_DWORD *)v455 = v444;
              v439 = (unsigned __int64)v459;
              v460 = *(unsigned int *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
              *((_QWORD *)v455 + 1) = v459;
              *((_DWORD *)v455 + 4) = v460;
              *((_DWORD *)v447 + 434) += v460;
              v461 = *((_DWORD *)v447 + 429);
              v462 = *((_QWORD *)v447 + 215);
              if ( v459 < &v459[v460] )
              {
                v463 = v459;
                do
                {
                  _mm_prefetch(v463, 0);
                  v463 += 64;
                }
                while ( v463 < &v459[v460] );
              }
              v434 = *((_QWORD *)v447 + 215);
              v464 = (unsigned int)v460 >> 7;
              if ( (unsigned int)v460 >> 7 )
              {
                do
                {
                  v465 = 8LL;
                  do
                  {
                    v466 = *(_QWORD *)(v439 + 8) ^ __ROL8__(*(_QWORD *)v439 ^ v434, v461);
                    v439 += 16LL;
                    v434 = __ROL8__(v466, v461);
                    --v465;
                  }
                  while ( v465 );
                  v467 = __ROL8__(v462 ^ (v439 - (_QWORD)v459), 17) ^ v462 ^ (v439 - (_QWORD)v459);
                  v468 = (v467 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x360) = v468;
                  v461 = ((unsigned __int8)(v468 ^ v467) ^ (unsigned __int8)v461) & 0x3F;
                  if ( !v461 )
                    LOBYTE(v461) = 1;
                  --v464;
                }
                while ( v464 );
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                LODWORD(v460) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                v418 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
              }
              v428 = v460 & 0x7F;
              if ( (unsigned int)v428 >= 8 )
              {
                v469 = (unsigned __int64)(v460 & 0x7F) >> 3;
                do
                {
                  v434 = __ROL8__(*(_QWORD *)v439 ^ v434, v461);
                  v439 += 8LL;
                  v428 = (unsigned int)(v428 - 8);
                  --v469;
                }
                while ( v469 );
              }
              if ( (_DWORD)v428 )
              {
                do
                {
                  v470 = *(unsigned __int8 *)v439++;
                  v434 = __ROL8__(v470 ^ v434, v461);
                  v428 = (unsigned int)(v428 - 1);
                }
                while ( (_DWORD)v428 );
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              for ( i9 = v434; ; v434 = (unsigned int)i9 ^ (unsigned int)v434 )
              {
                i9 >>= 31;
                if ( !i9 )
                  break;
              }
              LODWORD(v434) = v434 & 0x7FFFFFFF;
              *((_DWORD *)v455 + 5) = v434;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                                 + 0x270);
              *((_DWORD *)v447 + 434) += v460;
LABEL_721:
              if ( (*((_DWORD *)v447 + 522) & 0x40000000) != 0 && (_DWORD)v460 )
                sub_14019FEBC(
                  v447,
                  v459,
                  (unsigned int)v460,
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) + 28LL);
              v472 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x148);
              v329 = v447;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v447;
              *(_DWORD *)(v472 + 24) = 0;
              *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) + 24LL) |= 1u;
              v473 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0);
              v474 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
              *(_DWORD *)(v473 + 144) = 35;
              *(_DWORD *)(v473 + 184) = *(_DWORD *)(v473 + 184) & 0xFFFFFFFE | (v418 != 0);
              if ( *(_DWORD *)(v473 + 160) >= 0x94u )
              {
                v475 = *(_QWORD *)(v473 + 152);
                v476 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, unsigned __int64))v447
                        + 63))(
                         v474,
                         v428,
                         v434,
                         v439);
                if ( !v476 )
                {
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0LL;
                  goto LABEL_621;
                }
                v477 = *(unsigned int *)(v476 + 80);
                *(_DWORD *)(v473 + 184) |= 2u;
                v478 = v474 + v477;
                v479 = *(_QWORD **)(v475 + 112);
                if ( (unsigned __int64)v479 >= v474 && (unsigned __int64)v479 < v478 )
                {
                  *(_QWORD *)(v473 + 168) = *v479;
                  *(_DWORD *)(v473 + 184) |= 4u;
                }
                v480 = *(_QWORD **)(v475 + 120);
                if ( (unsigned __int64)v480 >= v474 && (unsigned __int64)v480 < v478 )
                {
                  *(_QWORD *)(v473 + 176) = *v480;
                  *(_DWORD *)(v473 + 184) |= 8u;
                }
              }
              v63 = (*((_DWORD *)v447 + 522) & 0x400000) == 0;
              v481 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v481;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v447;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v447;
              if ( !v63 )
              {
                v482 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, unsigned __int64))v447 + 63))(
                         v481,
                         v428,
                         v434,
                         v439);
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v482;
                v483 = v482;
                if ( !v482 )
                {
                  v340 = -1073741701;
                  goto LABEL_972;
                }
                v484 = *(_WORD *)(v482 + 6);
                v485 = *(unsigned int *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10)
                     * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v484;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *((_QWORD *)&v485 + 1) >> 3;
                if ( !v484 )
                {
                  if ( (*((_DWORD *)v447 + 522) & 0x200000) == 0 )
                  {
                    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x15C) = 1329605744;
                    KeBugCheckEx(
                      __ROR4__(*(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x15C) ^ 0x2C70, 86),
                      0xAuLL,
                      v481,
                      0LL,
                      0LL);
                  }
                  goto LABEL_738;
                }
                v486 = v484;
                v487 = 0;
                v488 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 0;
                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v484;
                v489 = 3LL * (unsigned int)(*((_QWORD *)&v485 + 1) >> 3);
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v489 * 4;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = &v488[v489];
                v490 = *(unsigned __int16 *)(v483 + 20) + v483 + 24;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v490;
                v491 = (_DWORD *)v490;
                do
                {
                  v492 = v491[4];
                  v493 = v491[3];
                  if ( v492 <= v491[2] )
                    v492 = v491[2];
                  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v493;
                  v494 = v493 + v492;
                  if ( v487 )
                  {
                    if ( v494 < *(_DWORD *)(v490 + 40LL * (v487 - 1) + 12) )
                    {
                      if ( (*((_DWORD *)v447 + 522) & 0x200000) == 0 )
                      {
                        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x174) = 1329605744;
                        KeBugCheckEx(
                          __ROR4__(*(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x174) ^ 0x2C70, 86),
                          0xAuLL,
                          v481,
                          1uLL,
                          0LL);
                      }
                      if ( !*((_DWORD *)v447 + 484) )
                      {
                        *((_QWORD *)v447 + 243) = v447 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v447 + 244) = 0LL;
                        *((_QWORD *)v447 + 245) = 271LL;
                        *((_QWORD *)v447 + 246) = v481;
                        *((_DWORD *)v447 + 484) = 1;
                      }
                      goto LABEL_740;
                    }
                    v487 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                  }
                  if ( v488 != *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) )
                  {
                    do
                    {
                      v495 = v488[1];
                      if ( *v488 >= v494 || v495 <= v493 )
                        break;
                      if ( *v488 < v493 || v495 > v494 )
                      {
                        if ( (*((_DWORD *)v447 + 522) & 0x200000) == 0 )
                        {
                          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = 1329605744;
                          KeBugCheckEx(
                            __ROR4__(
                              *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) ^ 0x2C70,
                              86),
                            0xAuLL,
                            v481,
                            2uLL,
                            0LL);
                        }
LABEL_738:
                        if ( !*((_DWORD *)v447 + 484) )
                        {
                          *((_QWORD *)v447 + 243) = v447 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v447 + 244) = 0LL;
                          *((_QWORD *)v447 + 245) = 271LL;
                          *((_QWORD *)v447 + 246) = v481;
                          *((_DWORD *)v447 + 484) = 1;
                        }
LABEL_740:
                        v340 = -1073741701;
LABEL_971:
                        v329 = v447;
LABEL_972:
                        v331 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
LABEL_973:
                        v652 = *(char **)v2;
                        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v329;
                        v653 = &v329[-v23];
                        v23 = (__int64)v329;
                        v654 = &v652[(_QWORD)v653];
                        *(_QWORD *)v2 = v654;
                        if ( (int)(v340 + 0x80000000) < 0 || v340 == -1073741554 )
                          *((_QWORD *)v654 + 5) = v331;
                        v307 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                        v300 = v307;
LABEL_1020:
                        v45 = 0LL;
                        *(_DWORD *)(v23 + 1736) += v307 << 12;
                        *(_DWORD *)(v23 + 1732) += v300;
                        if ( *(_DWORD *)(v23 + 1736) < *(_DWORD *)(v23 + 1740) )
                        {
                          v49 = *(char **)v2;
                          goto LABEL_509;
                        }
LABEL_1023:
                        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v23;
                        goto LABEL_144;
                      }
                      v496 = v488[2];
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x368) = v488;
                      if ( (v496 & 1) != 0 || (*(_BYTE *)(v496 + v481) & 0x20) != 0 )
                      {
                        v497 = v491[4];
                        v498 = v491[3];
                        if ( v497 <= v491[2] )
                          v497 = v491[2];
                        v499 = v498 + v497;
                        v500 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, _QWORD))v447 + 131))(
                                                 v488,
                                                 *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48));
                        if ( *v500 >= v498 && v500[1] < v499 )
                        {
                          v501 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                        }
                        else
                        {
                          v501 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                          if ( (*((_DWORD *)v447 + 522) & 0x200000) == 0 )
                          {
                            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x164) = 1329605744;
                            KeBugCheckEx(
                              __ROR4__(
                                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x164) ^ 0x2C70,
                                86),
                              0xAuLL,
                              v501,
                              ((_DWORD)v500 - (_DWORD)v501) | 0x80000000,
                              0LL);
                          }
                          if ( !*((_DWORD *)v447 + 484) )
                          {
                            *((_QWORD *)v447 + 243) = v447 - 0x5C5FC0A76E374B18LL;
                            *((_QWORD *)v447 + 244) = 0LL;
                            *((_QWORD *)v447 + 245) = 271LL;
                            *((_QWORD *)v447 + 246) = v501;
                            *((_DWORD *)v447 + 484) = 1;
                          }
                        }
                        v502 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v447
                                                + 132))(
                                                 v500,
                                                 v501,
                                                 v501 + *v500);
                        if ( *v502 >= v498 && v502[1] < v499 )
                        {
                          v493 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                          v481 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                        }
                        else
                        {
                          v481 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                          v503 = ((_DWORD)v502 - v481) | 0x80000000;
                          if ( (*((_DWORD *)v447 + 522) & 0x200000) == 0 )
                          {
                            v1576 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) = 1329605744;
                            KeBugCheckEx(
                              __ROR4__(
                                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) ^ 0x2C70,
                                86),
                              0xAuLL,
                              v1576,
                              v503,
                              0LL);
                          }
                          v493 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                          if ( !*((_DWORD *)v447 + 484) )
                          {
                            *((_QWORD *)v447 + 243) = v447 - 0x5C5FC0A76E374B18LL;
                            *((_QWORD *)v447 + 244) = 0LL;
                            *((_QWORD *)v447 + 245) = 271LL;
                            *((_QWORD *)v447 + 246) = v481;
                            *((_DWORD *)v447 + 484) = 1;
                          }
                        }
                      }
                      v488 += 3;
                    }
                    while ( v488 != *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) );
                    v487 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v486 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    v490 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  }
                  ++v487;
                  v491 += 10;
                  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v487;
                }
                while ( v487 < v486 );
                v504 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                v505 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                v506 = *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v507 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                if ( v488 != *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) )
                {
                  if ( (*((_DWORD *)v447 + 522) & 0x200000) == 0 )
                  {
                    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C) = 1329605744;
                    KeBugCheckEx(
                      __ROR4__(*(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C) ^ 0x2C70, 86),
                      0xAuLL,
                      v481,
                      3uLL,
                      0LL);
                  }
                  goto LABEL_738;
                }
                v508 = *((unsigned int *)v447 + 417);
                v509 = v508 + ((v504 + 6) & 0xFFFFFFF8) + 24 * (v486 + 2);
                if ( v509 <= *((_DWORD *)v447 + 557) )
                {
                  v511 = v447;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v447;
                  *((_DWORD *)v447 + 417) = v509;
                }
                else
                {
                  v510 = sub_1402E732C(v447, v509, *((unsigned int *)v447 + 495));
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v510;
                  v511 = (_BYTE *)v510;
                  if ( !v510 )
                  {
                    v340 = -1073741670;
                    goto LABEL_971;
                  }
                  v512 = *((_DWORD *)v447 + 522);
                  if ( (v512 & 4) == 0 )
                  {
                    v513 = *((_DWORD *)v447 + 417);
                    v514 = *((_QWORD *)v447 + 205);
                    v515 = (v512 & 0x20000000) != 0 ? *((_DWORD *)v447 + 495) : 0;
                    if ( v513 >= 8 )
                    {
                      v516 = (unsigned __int64)v513 >> 3;
                      do
                      {
                        *(_QWORD *)v447 = 0LL;
                        v513 -= 8;
                        v447 += 8;
                        --v516;
                      }
                      while ( v516 );
                    }
                    for ( ; v513; --v513 )
                      *v447++ = 0;
                    v517 = *((_DWORD *)v511 + 495);
                    *((_DWORD *)v511 + 495) = v515;
                    if ( v515 == 3 )
                    {
                      (*((void (__fastcall **)(__int64, __int64))v511 + 109))(v514, 1LL);
                    }
                    else
                    {
                      v518 = 0;
                      if ( (*((_DWORD *)v511 + 522) & 0x10000000) == 0 )
                        v518 = v515;
                      if ( v518 )
                        (*((void (__fastcall **)(__int64, _QWORD))v511 + 69))(v514 - 8, *(_QWORD *)(v514 - 8));
                      else
                        (*((void (__fastcall **)(__int64, __int64))v511 + 32))(v514, 1LL);
                    }
                    v511 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    *((_DWORD *)v511 + 495) = v517;
                  }
                  *((_DWORD *)v511 + 522) &= ~4u;
                  v486 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                  v504 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                }
                v519 = &v511[v508];
                ++*((_DWORD *)v511 + 427);
                v520 = &v511[v508];
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x280) = &v511[v508];
                v521 = 48;
                v522 = 6LL;
                do
                {
                  *v520 = 0LL;
                  v521 -= 8;
                  ++v520;
                  --v522;
                }
                while ( v522 );
                for ( ; v521; --v521 )
                {
                  *(_BYTE *)v520 = 0;
                  v520 = (_QWORD *)((char *)v520 + 1);
                }
                v523 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                *(_DWORD *)v519 = 30;
                *((_QWORD *)v519 + 1) = v523;
                *((_DWORD *)v519 + 4) = 0;
                v524 = *((_QWORD *)v511 + 215);
                for ( i10 = v524; ; LODWORD(v524) = i10 ^ v524 )
                {
                  i10 >>= 31;
                  if ( !i10 )
                    break;
                }
                v526 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                *((_DWORD *)v519 + 5) = v524 & 0x7FFFFFFF;
                v527 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x280);
                v447 = v511;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) = v527;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v511;
                *(_QWORD *)(v527 + 24) = v526;
                *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) + 32LL) = *(_DWORD *)(v505 + 80);
                *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) + 36LL) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) + 40LL) = v506;
                *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) + 42LL) = *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) + 42LL) & 0xFFFE | (*(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) != 0);
                v528 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x108);
                v529 = *(unsigned __int16 *)(v528 + 40);
                v530 = v528 + 48 + (((unsigned int)(v504 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v528 + 48;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v530;
                v63 = (_DWORD)v504 == 0;
                v531 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                v532 = v530 + 24 * v529;
                v533 = 12LL;
                if ( v63 )
                  v533 = v507;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v532;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (char *)v531 + v533;
                if ( v486 )
                {
                  v534 = v486;
                  v535 = (_DWORD *)(v530 + 8);
                  do
                  {
                    v536 = 2LL;
                    do
                    {
                      *(v535 - 2) = 0;
                      *(v535 - 1) = 0;
                      *v535 = 0x80000000;
                      v535 += 3;
                      --v536;
                    }
                    while ( v536 );
                    --v534;
                  }
                  while ( v534 );
                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                if ( v530 != v532 )
                {
                  v537 = *(unsigned __int8 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  do
                  {
                    v538 = 0;
                    if ( (*((_DWORD *)v537 + 9) & 0x2000000) != 0
                      || (v539 = *(_DWORD *)v537, *(_DWORD *)v537 == 1414090313) && *((_DWORD *)v537 + 1) == 1195525195
                      || v539 == 1162297680
                      && ((v540 = *((_WORD *)v537 + 2), v540 == 30839) || v540 == 29303 || v540 == 30583)
                      || v539 == 1095914053 && *((_WORD *)v537 + 2) == 16724 )
                    {
                      v538 = 1;
                    }
                    else
                    {
                      v541 = (unsigned __int8 *)*((_QWORD *)v511 + 249);
                      v542 = v537;
                      v543 = (__int64 *)*((_QWORD *)v511 + 250);
                      v544 = (unsigned __int8 *)*((_QWORD *)v511 + 251);
                      v545 = (unsigned __int8 *)*((_QWORD *)v511 + 252);
                      v546 = 7;
                      while ( 1 )
                      {
                        v547 = *v542++;
                        v548 = *v541++;
                        if ( v547 != v548 )
                          break;
                        if ( !--v546 )
                          goto LABEL_842;
                      }
                      v549 = 8;
                      v550 = (__int64 *)v537;
                      do
                      {
                        v551 = *v550++;
                        v552 = *v543++;
                        if ( v551 != v552 )
                          goto LABEL_835;
                        v549 -= 8;
                      }
                      while ( v549 >= 8 );
                      if ( v549 )
                      {
                        while ( 1 )
                        {
                          v553 = *(unsigned __int8 *)v550;
                          v550 = (__int64 *)((char *)v550 + 1);
                          v554 = *(unsigned __int8 *)v543;
                          v543 = (__int64 *)((char *)v543 + 1);
                          if ( v553 != v554 )
                            break;
                          if ( !--v549 )
                            goto LABEL_842;
                        }
LABEL_835:
                        v555 = 4;
                        v556 = v537;
                        while ( 1 )
                        {
                          v557 = *v556++;
                          v558 = *v544++;
                          if ( v557 != v558 )
                            break;
                          if ( !--v555 )
                            goto LABEL_842;
                        }
                        v559 = 6;
                        v560 = v537;
                        while ( 1 )
                        {
                          v561 = *v560++;
                          v562 = *v545++;
                          if ( v561 != v562 )
                            break;
                          if ( !--v559 )
                            goto LABEL_842;
                        }
                      }
                      else
                      {
LABEL_842:
                        v538 = 1;
                      }
                      v531 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                      v511 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    }
                    v563 = *((_DWORD *)v537 + 9);
                    if ( v563 < 0 )
                      v538 = 1;
                    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v538;
                    if ( v538 && *(_DWORD *)v537 == 1414090313 && *((_DWORD *)v537 + 1) == 1195525195 )
                    {
                      if ( (*((_DWORD *)v511 + 523) & 0x2000) != 0 )
                        v538 = 0;
                      *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v538;
                    }
                    if ( (*((_DWORD *)v511 + 523) & 0x4000) != 0
                      && (v563 & 0x20000000) != 0
                      && (v526 == *((_QWORD *)v511 + 188) || v526 == *((_QWORD *)v511 + 189)) )
                    {
                      v538 = 1;
                      *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = 1;
                    }
                    v564 = *((_DWORD *)v537 + 4);
                    v565 = *((_DWORD *)v537 + 3);
                    v566 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    if ( v564 <= *((_DWORD *)v537 + 2) )
                      v564 = *((_DWORD *)v537 + 2);
                    v567 = v565 + v564;
                    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v565;
                    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v567;
                    if ( v531 == v566 )
                    {
                      v568 = 0;
                      v569 = 0;
                    }
                    else
                    {
                      v568 = *v531;
                      v569 = v531[1];
                    }
                    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v569;
                    v570 = v565;
                    if ( v531 == v566 || v568 <= v565 || v569 > v567 )
                    {
LABEL_890:
                      v571 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    }
                    else
                    {
                      v63 = v538 == 0;
                      v571 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                      if ( v63 )
                      {
                        v572 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                        v573 = (unsigned __int64 *)(v2 + 696);
                        v574 = 0;
                        v570 = v568;
                        v575 = (unsigned int *)(v2 + 416);
                        *v572 = v565;
                        v572[1] = v568;
                        v576 = *v572;
                        v577 = v568 - v576;
                        v578 = v571 + v576;
                        v579 = v571 + v576 + v568 - (unsigned int)v576;
                        while ( v578 >= *v573 + *v575 || v579 <= *v573 )
                        {
                          ++v574;
                          ++v573;
                          ++v575;
                          if ( v574 >= 5 )
                          {
                            v580 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                            v581 = (_QWORD *)(v571 + v576);
                            v582 = (const char *)(v571 + v576);
                            *(_DWORD *)(v580 + 1736) += v577;
                            v583 = *(_DWORD *)(v580 + 1716);
                            v584 = *(_QWORD *)(v580 + 1720);
                            if ( v578 < v579 )
                            {
                              do
                              {
                                _mm_prefetch(v582, 0);
                                v582 += 64;
                              }
                              while ( (unsigned __int64)v582 < v579 );
                            }
                            v585 = v584;
                            v586 = v577 >> 7;
                            if ( v577 >> 7 )
                            {
                              do
                              {
                                v587 = 8LL;
                                do
                                {
                                  v588 = v585 ^ *v581;
                                  v589 = v581[1];
                                  v581 += 2;
                                  v585 = __ROL8__(__ROL8__(v588, v583) ^ v589, v583);
                                  --v587;
                                }
                                while ( v587 );
                                v590 = __ROL8__(v584 ^ ((unsigned __int64)v581 - v578), 17) ^ v584 ^ ((unsigned __int64)v581 - v578);
                                v591 = (v590 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x370) = v591;
                                v583 = ((unsigned __int8)(v591 ^ v590) ^ (unsigned __int8)v583) & 0x3F;
                                if ( !v583 )
                                  LOBYTE(v583) = 1;
                                --v586;
                              }
                              while ( v586 );
                              v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              v569 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                            }
                            v592 = v577 & 0x7F;
                            if ( v592 >= 8 )
                            {
                              v593 = (unsigned __int64)v592 >> 3;
                              do
                              {
                                v585 = __ROL8__(*v581++ ^ v585, v583);
                                v592 -= 8;
                                --v593;
                              }
                              while ( v593 );
                            }
                            if ( v592 )
                            {
                              do
                              {
                                v594 = *(unsigned __int8 *)v581;
                                v581 = (_QWORD *)((char *)v581 + 1);
                                v585 = __ROL8__(v594 ^ v585, v583);
                                --v592;
                              }
                              while ( v592 );
                              v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                            }
                            for ( i11 = v585; ; LODWORD(v585) = i11 ^ v585 )
                            {
                              i11 >>= 31;
                              if ( !i11 )
                                break;
                            }
                            v567 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                            v565 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                            v511 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                            v531 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                            *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) + 8LL) = v585 & 0x7FFFFFFF;
                            v566 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                            goto LABEL_890;
                          }
                        }
                        v567 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                        v511 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                        v566 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                        v531 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                      }
                    }
                    if ( v568 < v565 )
                    {
                      v597 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                    }
                    else
                    {
                      v596 = v569 <= v567;
                      v597 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      if ( v596 && v531 != v566 )
                      {
                        v598 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        v599 = v598[1];
                        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v599;
                        if ( v599 <= v567 )
                        {
                          v600 = *(char **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                          while ( v598 != v566 )
                          {
                            if ( v597 )
                            {
                              v601 = 0x80;
                            }
                            else
                            {
                              v602 = v531[1];
                              v570 = *v598;
                              if ( *v598 < (unsigned int)v602 )
                              {
                                if ( (*((_DWORD *)v511 + 522) & 0x200000) == 0 )
                                {
                                  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) = 1329605744;
                                  KeBugCheckEx(
                                    __ROR4__(
                                      *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) ^ 0x2C70,
                                      86),
                                    0xAuLL,
                                    v571,
                                    6uLL,
                                    0LL);
                                }
                                if ( !*((_DWORD *)v511 + 484) )
                                {
                                  *((_QWORD *)v511 + 243) = v511 - 0x5C5FC0A76E374B18LL;
                                  *((_QWORD *)v511 + 244) = 0LL;
                                  *((_QWORD *)v511 + 245) = 271LL;
                                  *((_QWORD *)v511 + 246) = v571;
                                  *((_DWORD *)v511 + 484) = 1;
                                }
                              }
                              v603 = v571 + v602;
                              v604 = v570 - v602;
                              v605 = (unsigned __int64 *)(v2 + 696);
                              v606 = 0;
                              v607 = v571 + v602 + v570 - (unsigned int)v602;
                              v608 = (unsigned int *)(v2 + 416);
                              do
                              {
                                if ( v603 < *v605 + *v608 && v607 > *v605 )
                                  goto LABEL_929;
                                ++v606;
                                ++v605;
                                ++v608;
                              }
                              while ( v606 < 5 );
                              if ( v604 < 4 )
                              {
LABEL_929:
                                v601 = 0x80;
                              }
                              else
                              {
                                v609 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                                v610 = (_QWORD *)(v571 + v602);
                                v611 = (const char *)(v571 + v602);
                                *(_DWORD *)(v609 + 1736) += v604;
                                v612 = *(_DWORD *)(v609 + 1716);
                                v613 = *(_QWORD *)(v609 + 1720);
                                if ( v603 < v607 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v611, 0);
                                    v611 += 64;
                                  }
                                  while ( (unsigned __int64)v611 < v607 );
                                }
                                v614 = v604 >> 7;
                                v615 = v613;
                                if ( v604 >> 7 )
                                {
                                  do
                                  {
                                    v616 = 8LL;
                                    do
                                    {
                                      v617 = v610[1] ^ __ROL8__(*v610 ^ v615, v612);
                                      v610 += 2;
                                      v615 = __ROL8__(v617, v612);
                                      --v616;
                                    }
                                    while ( v616 );
                                    v618 = __ROL8__(v613 ^ ((unsigned __int64)v610 - v603), 17) ^ v613 ^ ((unsigned __int64)v610 - v603);
                                    v619 = (v618 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x378) = v619;
                                    v612 = ((unsigned __int8)(v619 ^ v618) ^ (unsigned __int8)v612) & 0x3F;
                                    if ( !v612 )
                                      LOBYTE(v612) = 1;
                                    --v614;
                                  }
                                  while ( v614 );
                                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                                  v599 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                  v597 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                }
                                v620 = v604 & 0x7F;
                                if ( v620 >= 8 )
                                {
                                  v621 = (unsigned __int64)v620 >> 3;
                                  do
                                  {
                                    v615 = __ROL8__(*v610++ ^ v615, v612);
                                    v620 -= 8;
                                    --v621;
                                  }
                                  while ( v621 );
                                }
                                if ( v620 )
                                {
                                  do
                                  {
                                    v622 = *(unsigned __int8 *)v610;
                                    v610 = (_QWORD *)((char *)v610 + 1);
                                    v615 = __ROL8__(v622 ^ v615, v612);
                                    --v620;
                                  }
                                  while ( v620 );
                                  v597 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                }
                                for ( i12 = v615; ; LOBYTE(v615) = i12 ^ v615 )
                                {
                                  i12 >>= 7;
                                  if ( !i12 )
                                    break;
                                }
                                v571 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                                v601 = v615 & 0x7F;
                                v598 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                              }
                              v531 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                              v567 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                              v600 = *(char **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                            }
                            *v600 = v601;
                            v531 += 3;
                            v598 += 3;
                            v566 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                            v600 = (char *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) + 1LL);
                            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v531;
                            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v600;
                            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v598;
                            if ( v598 != v566 )
                            {
                              v599 = v598[1];
                              *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v599;
                            }
                            if ( v599 > v567 )
                              break;
                            v511 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                          }
                        }
                      }
                    }
                    v63 = v597 == 0;
                    v624 = *(_DWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                    if ( v63 && v570 != v567 )
                    {
                      v624[3] = v570;
                      v625 = (unsigned __int64 *)(v2 + 696);
                      v624[4] = v567;
                      v626 = (unsigned int)v624[3];
                      v627 = 0;
                      v628 = v567 - v626;
                      v629 = (unsigned int *)(v2 + 416);
                      v630 = v571 + v626;
                      v631 = v571 + v626 + v567 - (unsigned int)v626;
                      do
                      {
                        if ( v630 < *v625 + *v629 && v631 > *v625 )
                          goto LABEL_961;
                        ++v627;
                        ++v625;
                        ++v629;
                      }
                      while ( v627 < 5 );
                      v632 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                      v633 = (_QWORD *)v630;
                      *(_DWORD *)(v632 + 1736) += v628;
                      v634 = *(_DWORD *)(v632 + 1716);
                      v635 = *(_QWORD *)(v632 + 1720);
                      v636 = (const char *)v630;
                      if ( v630 < v631 )
                      {
                        do
                        {
                          _mm_prefetch(v636, 0);
                          v636 += 64;
                        }
                        while ( (unsigned __int64)v636 < v631 );
                      }
                      v637 = v635;
                      v638 = v628 >> 7;
                      if ( v628 >> 7 )
                      {
                        do
                        {
                          v639 = 8LL;
                          do
                          {
                            v640 = v637 ^ *v633;
                            v641 = v633[1];
                            v633 += 2;
                            v637 = __ROL8__(__ROL8__(v640, v634) ^ v641, v634);
                            --v639;
                          }
                          while ( v639 );
                          v642 = __ROL8__(v635 ^ ((unsigned __int64)v633 - v630), 17) ^ v635 ^ ((unsigned __int64)v633
                                                                                              - v630);
                          v643 = (v642 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x380) = v643;
                          v634 = ((unsigned __int8)v642 ^ (unsigned __int8)(v643 ^ v634)) & 0x3F;
                          if ( !v634 )
                            LOBYTE(v634) = 1;
                          --v638;
                        }
                        while ( v638 );
                        v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      }
                      v644 = v628 & 0x7F;
                      if ( v644 >= 8 )
                      {
                        v645 = (unsigned __int64)v644 >> 3;
                        do
                        {
                          v637 = __ROL8__(*v633++ ^ v637, v634);
                          v644 -= 8;
                          --v645;
                        }
                        while ( v645 );
                      }
                      if ( v644 )
                      {
                        do
                        {
                          v646 = *(unsigned __int8 *)v633;
                          v633 = (_QWORD *)((char *)v633 + 1);
                          v637 = __ROL8__(v646 ^ v637, v634);
                          --v644;
                        }
                        while ( v644 );
                        v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      }
                      for ( i13 = v637; ; LODWORD(v637) = i13 ^ v637 )
                      {
                        i13 >>= 31;
                        if ( !i13 )
                          break;
                      }
                      v624[5] = v637 & 0x7FFFFFFF;
LABEL_961:
                      v531 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                    }
                    v648 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                    if ( v531 != v648
                      && *v531 >= *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x70)
                      && v531[1] <= *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) )
                    {
                      v649 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      if ( v649 != v648 )
                      {
                        v650 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                        *v650 = 0x80;
                        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v650 + 1;
                        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v649 + 3;
                      }
                      v531 += 3;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v531;
                    }
                    v651 = v624 + 6;
                    v511 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v537 = (unsigned __int8 *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28)
                                             + 40LL);
                    v526 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v651;
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v537;
                  }
                  while ( v651 != *(_DWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) );
                  v447 = *(_BYTE **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                }
              }
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v447;
              v340 = 0;
              goto LABEL_971;
            }
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0LL;
LABEL_621:
            v340 = -1073741670;
            goto LABEL_972;
          }
          *(_DWORD *)(v416 + 32) |= 2u;
          goto LABEL_653;
        }
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0LL;
        goto LABEL_621;
      }
      v685 = *((_DWORD *)v49 + 10);
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(v23 + 416))(v2 + 1256, *((unsigned int *)v49 + 11));
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 464))(v2 + 1256, v2 + 1272);
      if ( v685 )
        v686 = __readcr4();
      else
        v686 = __readcr0();
      v687 = v2 + 1272;
LABEL_1028:
      (*(void (__fastcall **)(unsigned __int64))(v23 + 408))(v687);
      v688 = *((_QWORD *)v49 + 4);
      v689 = v686 & *((_QWORD *)v49 + 3);
      if ( v689 != v688 )
      {
        v690 = *((_QWORD *)v49 + 5);
        if ( !*(_DWORD *)(v23 + 1936) )
        {
          *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v689 ^ v688;
          if ( !*(_DWORD *)(v23 + 1936) )
          {
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v690;
            *(_DWORD *)(v23 + 1936) = 1;
          }
        }
      }
      goto LABEL_144;
    }
    if ( v73 != 11 )
    {
      if ( !v73 )
      {
        v183 = (_QWORD *)*((_QWORD *)v49 + 1);
        v184 = *((unsigned int *)v49 + 4);
        v185 = v183;
        *(_DWORD *)(v23 + 1736) += v184;
        v186 = (const char *)v183;
        v187 = *(_DWORD *)(v23 + 1716);
        v188 = *(_QWORD *)(v23 + 1720);
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v184;
        if ( v183 < (_QWORD *)((char *)v183 + v184) )
        {
          do
          {
            _mm_prefetch(v186, 0);
            v186 += 64;
          }
          while ( v186 < (const char *)v183 + v184 );
        }
        v189 = v188;
        v190 = (unsigned int)v184 >> 7;
        if ( (unsigned int)v184 >> 7 )
        {
          do
          {
            v191 = 8LL;
            do
            {
              v192 = v189 ^ *v185;
              v193 = v185[1];
              v185 += 2;
              v189 = __ROL8__(__ROL8__(v192, v187) ^ v193, v187);
              --v191;
            }
            while ( v191 );
            v194 = __ROL8__(v188 ^ ((char *)v185 - (char *)v183), 17) ^ v188 ^ ((char *)v185 - (char *)v183);
            v195 = (v194 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x498) = v195;
            v187 = ((unsigned __int8)(v195 ^ v194) ^ (unsigned __int8)v187) & 0x3F;
            if ( !v187 )
              LOBYTE(v187) = 1;
            --v190;
          }
          while ( v190 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          LODWORD(v184) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        }
        v196 = v184 & 0x7F;
        if ( v196 >= 8 )
        {
          v197 = (unsigned __int64)v196 >> 3;
          do
          {
            v189 = __ROL8__(*v185++ ^ v189, v187);
            v196 -= 8;
            --v197;
          }
          while ( v197 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        for ( ; v196; --v196 )
        {
          v198 = *(unsigned __int8 *)v185;
          v185 = (_QWORD *)((char *)v185 + 1);
          v189 = __ROL8__(v198 ^ v189, v187);
        }
        for ( i14 = v189; ; LODWORD(v189) = i14 ^ v189 )
        {
          i14 >>= 31;
          if ( !i14 )
            break;
        }
        v200 = v189 & 0x7FFFFFFF;
        if ( v200 == *((_DWORD *)v49 + 5) )
          goto LABEL_328;
        if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
          LODWORD(v45) = 1;
        v201 = *((unsigned int *)v49 + 4);
        v202 = *((_QWORD *)v49 + 1);
        if ( *((_DWORD *)v49 + 4) )
        {
          v203 = 64LL;
          if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
          {
            v204 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v205 = v202 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (v202 + v201 - 1) | 0xFFF;
            v206 = (v202 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v207 = v204;
              while ( 1 )
              {
                v208 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                         v205,
                         0LL,
                         v203,
                         v185);
                if ( v208 != -1073741267 )
                  break;
                if ( (_DWORD)v45 )
                  goto LABEL_384;
                if ( v204 > 1u )
                  goto LABEL_382;
                v207 = v204;
                __writecr8(v204);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v208 < 0 )
                break;
LABEL_382:
              v205 += 4096LL;
              v206 += 4096LL;
              if ( v206 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                goto LABEL_383;
            }
LABEL_384:
            v49 = *(char **)v2;
            __writecr8(v207);
          }
        }
        v209 = *(_DWORD *)(v23 + 1936);
        v45 = 0LL;
        v210 = *((unsigned int *)v49 + 5);
        if ( !v209 )
        {
          v211 = v200;
          goto LABEL_387;
        }
        goto LABEL_388;
      }
      if ( v73 != 1 )
      {
        if ( v73 == 4 )
        {
          if ( (*(_DWORD *)(v23 + 1744) & 1) == 0 )
          {
            v172 = 0;
            v173 = *(_QWORD *)(v23 + 1344);
            (*(void (**)(void))(v23 + 376))();
            if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 || (v174 = *(_DWORD *)(v23 + 2024), v174 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 296))(*(_QWORD *)(v23 + 2200), 0LL);
              LOBYTE(v43) = 0x80;
            }
            else
            {
              v43 = 1;
              LOBYTE(v43) = 1 << v174;
            }
            v175 = *(void (__fastcall **)(__int64, _QWORD))(v23 + 312);
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v43;
            v175(v173, 0LL);
            v176 = *(__int64 ***)(v23 + 1304);
            v177 = *v176;
            while ( v177 != (__int64 *)v176 )
            {
              if ( (_BYTE)v43 != 0x80
                && ((unsigned __int8)v43 & *((_BYTE *)v177 - 298)) != 0
                && (*((_DWORD *)v177 + 7) & 0x4000000) != 0
                && !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v49;
                *(_QWORD *)(v23 + 1968) = (unsigned __int64)(v177 - 93) | 1;
                *(_DWORD *)(v23 + 1936) = 1;
              }
              _InterlockedOr8((volatile signed __int8 *)v177 - 298, v43);
              v177 = (__int64 *)*v177;
              ++v172;
            }
            v178 = *(_QWORD *)(v23 + 1272);
            v179 = KeGetCurrentIrql();
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v179;
            __writecr8(0xCuLL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(v23 + 328))(v178, v2 + 1584);
            v180 = *(_QWORD ***)(v23 + 1264);
            v181 = *v180;
            if ( *v180 != v180 )
            {
              do
              {
                v182 = (volatile signed __int8 *)(v181 - 72);
                if ( (*((char *)v181 - 130) & (unsigned __int8)v43) == 0 && !*(_DWORD *)(v23 + 1936) )
                {
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = *(int *)v49;
                  *(_QWORD *)(v23 + 1968) = v182;
                  *(_DWORD *)(v23 + 1936) = 1;
                }
                _InterlockedAnd8(v182 + 446, ~(_BYTE)v43);
                v181 = (_QWORD *)*v181;
              }
              while ( v181 != v180 );
              v43 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
              v179 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            }
            (*(void (__fastcall **)(unsigned __int64))(v23 + 392))(v2 + 1584);
            __writecr8((unsigned __int8)v179);
            if ( (_BYTE)v43 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 304))(*(_QWORD *)(v23 + 2200), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 320))(*(_QWORD *)(v23 + 1344), 0LL);
            (*(void (**)(void))(v23 + 384))();
            *(_DWORD *)(v23 + 1736) += v172 << 8;
          }
          goto LABEL_144;
        }
        if ( v73 != 5 )
        {
          if ( v73 == 7 )
          {
            (*(void (__fastcall **)(unsigned __int64, _QWORD))(v23 + 416))(v2 + 1224, *((unsigned int *)v49 + 7));
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 464))(v2 + 1224, v2 + 1240);
            for ( i15 = 0; i15 < *((_DWORD *)v49 + 6); ++i15 )
            {
              v140 = *(unsigned int *)&v49[24 * i15 + 64];
              if ( (*(_BYTE *)(v23 + 1819) & 2) != 0
                && (_DWORD)v140 == -1073741694
                && KeGetPcr()->Prcb.Number == *(_DWORD *)(v23 + 1928) )
              {
                v141 = *(_QWORD *)(v23 + 1920);
              }
              else
              {
                v141 = __readmsr(v140);
              }
              v142 = *(_QWORD *)&v49[24 * i15 + 48];
              v143 = *(_QWORD *)&v49[24 * i15 + 56];
              v144 = v142 & v141;
              if ( v144 == v143 )
              {
                if ( (*(_DWORD *)(v23 + 2092) & 0x200) != 0 && v142 == -1 )
                  __writemsr(v140, v144);
              }
              else
              {
                v145 = v140 | ((unsigned __int64)*((unsigned int *)v49 + 7) << 32);
                if ( !*(_DWORD *)(v23 + 1936) )
                {
                  *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v144 ^ v143;
                  if ( !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *(int *)v49;
                    *(_QWORD *)(v23 + 1968) = v145;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                }
              }
            }
            (*(void (__fastcall **)(unsigned __int64))(v23 + 408))(v2 + 1240);
            *(_DWORD *)(v23 + 1736) += *((_DWORD *)v49 + 6) << 15;
            goto LABEL_144;
          }
          if ( v73 != 8 )
          {
            if ( v73 == 10 )
            {
              if ( *((_DWORD *)v49 + 6) )
              {
                if ( !*(_QWORD *)(v23 + 2072) )
                  goto LABEL_200;
                v74 = *(_DWORD *)(v23 + 2092);
                if ( (v74 & 4) != 0 )
                  goto LABEL_200;
                if ( *(_DWORD *)(v23 + 1732) )
                {
                  if ( (v74 & 0x20) != 0 )
                    goto LABEL_200;
                }
                else
                {
                  *(_DWORD *)(v23 + 2092) = v74 ^ ((unsigned __int8)v74 ^ (unsigned __int8)(8 * v74)) & 0x20;
                }
              }
              v75 = (unsigned __int64)&v49[16 * *(unsigned int *)(v23 + 1732) + 48];
              v76 = (unsigned __int64)&v49[16 * *((unsigned int *)v49 + 7) + 48];
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v75;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v76;
              while ( 2 )
              {
                if ( *(int *)v75 < 0 )
                  goto LABEL_215;
                v77 = *(_QWORD *)(v75 + 8);
                v78 = *(unsigned int *)(v75 + 4);
                v79 = (_QWORD *)v77;
                *(_DWORD *)(v23 + 1736) += v78;
                v80 = (const char *)v77;
                v81 = *(_DWORD *)(v23 + 1716);
                v82 = (unsigned int)v78;
                v83 = *(_QWORD *)(v23 + 1720);
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v77;
                if ( v77 < v78 + v77 )
                {
                  do
                  {
                    _mm_prefetch(v80, 0);
                    v80 += 64;
                  }
                  while ( (unsigned __int64)v80 < v78 + v77 );
                }
                v84 = v83;
                v85 = (unsigned int)v78 >> 7;
                if ( (unsigned int)v78 >> 7 )
                {
                  do
                  {
                    v86 = 8LL;
                    do
                    {
                      v87 = v79[1] ^ __ROL8__(*v79 ^ v84, v81);
                      v79 += 2;
                      v84 = __ROL8__(v87, v81);
                      --v86;
                    }
                    while ( v86 );
                    v88 = __ROL8__(v83 ^ ((unsigned __int64)v79 - v77), 17) ^ v83 ^ ((unsigned __int64)v79 - v77);
                    v89 = (v88 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x480) = v89;
                    v81 = ((unsigned __int8)(v89 ^ v88) ^ (unsigned __int8)v81) & 0x3F;
                    if ( !v81 )
                      LOBYTE(v81) = 1;
                    --v85;
                  }
                  while ( v85 );
                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                  v82 = v78;
                  v75 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  v76 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                }
                v90 = v78 & 0x7F;
                if ( (unsigned int)v90 >= 8 )
                {
                  v91 = (unsigned __int64)(unsigned int)v90 >> 3;
                  do
                  {
                    v84 = __ROL8__(*v79++ ^ v84, v81);
                    v90 = (unsigned int)(v90 - 8);
                    --v91;
                  }
                  while ( v91 );
                }
                if ( (_DWORD)v90 )
                {
                  do
                  {
                    v92 = *(unsigned __int8 *)v79;
                    v79 = (_QWORD *)((char *)v79 + 1);
                    v84 = __ROL8__(v92 ^ v84, v81);
                    v90 = (unsigned int)(v90 - 1);
                  }
                  while ( (_DWORD)v90 );
                  v77 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                }
                for ( i16 = v84; ; LODWORD(v84) = i16 ^ v84 )
                {
                  i16 >>= 31;
                  if ( !i16 )
                    break;
                }
                v95 = *(_DWORD *)v75;
                v96 = v84 & 0x7FFFFFFF;
                if ( v96 == (*(_DWORD *)v75 & 0x7FFFFFFF) )
                  goto LABEL_214;
                if ( v82 && (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
                {
                  v97 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v98 = v77 & 0xFFFFFFFFFFFFF000uLL;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (v82 + v77 - 1) | 0xFFF;
                  v99 = (v77 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 2 )
                  {
                    v100 = v97;
                    while ( 1 )
                    {
                      v101 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                               v98,
                               0LL,
                               v90,
                               v79);
                      if ( v101 != -1073741267 )
                        break;
                      if ( v97 > 1u )
                        goto LABEL_212;
                      v100 = v97;
                      __writecr8(v97);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v101 < 0 )
                    {
                      __writecr8(v100);
                      v95 = *(_DWORD *)v75;
                      v77 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      goto LABEL_223;
                    }
LABEL_212:
                    v98 += 4096LL;
                    v99 += 4096LL;
                    if ( v99 != *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) )
                      continue;
                    break;
                  }
                  __writecr8(v100);
                  v76 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
LABEL_214:
                  v45 = 0LL;
LABEL_215:
                  v102 = *(int **)v2;
                }
                else
                {
LABEL_223:
                  v104 = v95;
                  v45 = 0LL;
                  if ( *(_DWORD *)(v23 + 1936)
                    || (LODWORD(v104) = v95 & 0x7FFFFFFF,
                        *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v104 ^ v96,
                        *(_DWORD *)(v23 + 1936)) )
                  {
                    v76 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    goto LABEL_215;
                  }
                  v102 = *(int **)v2;
                  v76 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = (char *)v102 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = *v102;
                  *(_QWORD *)(v23 + 1968) = v77;
                  *(_DWORD *)(v23 + 1936) = 1;
                }
                v75 += 16LL;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v75;
                v103 = v75 == v76;
                if ( v75 >= v76 )
                  goto LABEL_219;
                if ( *(_DWORD *)(v23 + 1736) >= *(_DWORD *)(v23 + 1740) )
                {
                  v103 = v75 == v76;
LABEL_219:
                  if ( !v103 )
                  {
                    v94 = (__int64)(v75 - (_QWORD)(v102 + 12)) >> 4;
LABEL_221:
                    *(_DWORD *)(v23 + 1732) = v94;
                    goto LABEL_144;
                  }
LABEL_200:
                  LODWORD(v94) = 0;
                  goto LABEL_221;
                }
                continue;
              }
            }
LABEL_2168:
            v1421 = v73 - 2;
            if ( v1421 )
            {
              v1422 = v1421 - 1;
              if ( v1422 )
              {
                if ( v1422 != 20 )
                {
                  if ( *(_DWORD *)(v23 + 1936) )
                    goto LABEL_144;
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = 257LL;
                  *(_QWORD *)(v23 + 1968) = 0LL;
                  goto LABEL_2167;
                }
                (*(void (__fastcall **)(unsigned __int64, _QWORD))(v23 + 416))(v2 + 1304, *((unsigned int *)v49 + 10));
                (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 464))(v2 + 1304, v2 + 1320);
                v1423 = *(_QWORD *)(v23 + 2216);
                if ( v1423 )
                {
                  v1424 = *(_DWORD *)(v1423 + 800);
                  v1423 = *(_QWORD *)(v23 + 2216);
                }
                else
                {
                  v1425 = __readmsr(0x832u);
                  v1424 = v1425;
                }
                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x278) = v1424;
                if ( v1423 )
                {
                  v1426 = *(_DWORD *)(v1423 + 832);
                }
                else
                {
                  v1427 = __readmsr(0x834u);
                  v1426 = v1427;
                }
                v1428 = *(void (__fastcall **)(unsigned __int64))(v23 + 408);
                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x294) = v1426;
                v1428(v2 + 1320);
                v1429 = *((unsigned int *)v49 + 6);
                if ( (v1424 & *((_DWORD *)v49 + 7)) != (_DWORD)v1429
                  || (v1424 & 0x10000) == 0 && (_BYTE)v1424 != 0xD1 && (unsigned __int8)(v1424 + 3) > 1u )
                {
                  v1430 = v1429 | ((unsigned __int64)*((unsigned int *)v49 + 10) << 48) | 0x32000000000LL;
                  if ( !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1424 ^ v1429;
                    if ( !*(_DWORD *)(v23 + 1936) )
                    {
                      *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v23 + 1960) = *(int *)v49;
                      *(_QWORD *)(v23 + 1968) = v1430;
                      *(_DWORD *)(v23 + 1936) = 1;
                    }
                  }
                }
                v1431 = *((unsigned int *)v49 + 8);
                if ( (v1426 & *((_DWORD *)v49 + 9)) != (_DWORD)v1431
                  || (v1426 & 0x10000) == 0 && (_BYTE)v1426 != 0xD1 && (unsigned __int8)(v1426 + 3) > 1u )
                {
                  v1432 = v1431 | ((unsigned __int64)*((unsigned int *)v49 + 10) << 48) | 0x34000000000LL;
                  if ( !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1426 ^ (unsigned __int64)*((unsigned int *)v49 + 8);
                    if ( !*(_DWORD *)(v23 + 1936) )
                    {
                      *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v23 + 1960) = *(int *)v49;
                      *(_QWORD *)(v23 + 1968) = v1432;
                      *(_DWORD *)(v23 + 1936) = 1;
                    }
                  }
                }
LABEL_2193:
                v730 = 0x8000;
                goto LABEL_1090;
              }
              (*(void (__fastcall **)(unsigned __int64, _QWORD))(v23 + 416))(v2 + 1336, *((unsigned int *)v49 + 10));
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 464))(v2 + 1336, v2 + 1352);
              KiGetGdtIdt(v2 + 440, v2 + 1504);
              v1433 = *(_QWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1BA);
              v1434 = *((unsigned int *)v49 + 4);
              if ( (*(_BYTE *)(v23 + 1819) & 2) != 0 )
              {
                v1435 = 38LL;
                v1436 = (_QWORD *)(v2 + 1664);
                v1437 = 304;
                do
                {
                  *v1436 = 0LL;
                  v1437 -= 8;
                  ++v1436;
                  --v1435;
                }
                while ( v1435 );
                if ( v1437 )
                {
                  v1435 = 0xFFFFFFFFLL;
                  do
                  {
                    *(_BYTE *)v1436 = 0;
                    v1436 = (_QWORD *)((char *)v1436 + 1);
                    --v1437;
                  }
                  while ( v1437 );
                }
                *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = *(_OWORD *)(v23 + 1768);
                *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x6A0) = *(_OWORD *)(v23 + 1784);
                v1438 = *(_OWORD *)(v23 + 1800);
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x232) = ((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                       + 1664;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = v23 + 1816;
                *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = v23 + 1816;
                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x698) = (unsigned __int64)(v23 + 1816) >> 32;
                *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x7A0) = v1438;
                *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x230) = 304;
                *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x696) = (unsigned int)(v23 + 1816) >> 16;
                _disable();
                __sidt((void *)(v2 + 752));
                __lidt((void *)(v2 + 560));
                __writedr(7u, 0LL);
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = v23 + 1822;
                *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = v23 + 1822;
                v1439 = (unsigned __int64)(v23 + 1822) >> 16;
                *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x696) = v1439;
                *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x698) = (unsigned __int64)(v23 + 1822) >> 32;
                *(_QWORD *)(v23 + 1920) = KiErrata704Present(v1439, v1435, 1LL);
                *(_DWORD *)(v23 + 1928) = KeGetPcr()->Prcb.Number;
                __lidt((void *)(v2 + 752));
                _enable();
              }
              Ldtr = KiGetLdtr();
              Tr = KiGetTr();
              *(_DWORD *)(v23 + 1736) += v1434;
              v1442 = *(unsigned int *)(v23 + 1716);
              v1443 = Tr;
              v1444 = *(_QWORD *)(v23 + 1720);
              v1445 = v1433;
              *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = Tr;
              v1446 = (const char *)v1433;
              if ( v1433 < (_QWORD *)((char *)v1433 + v1434) )
              {
                do
                {
                  _mm_prefetch(v1446, 0);
                  v1446 += 64;
                }
                while ( v1446 < (const char *)v1433 + v1434 );
              }
              v1447 = v1444;
              v1448 = (unsigned int)v1434 >> 7;
              if ( (unsigned int)v1434 >> 7 )
              {
                do
                {
                  v1449 = 8LL;
                  do
                  {
                    v1450 = v1445[1] ^ __ROL8__(*v1445 ^ v1447, v1442);
                    v1445 += 2;
                    v1447 = __ROL8__(v1450, v1442);
                    --v1449;
                  }
                  while ( v1449 );
                  v1451 = (__ROL8__(v1444 ^ ((char *)v1445 - (char *)v1433), 17) ^ v1444 ^ ((char *)v1445 - (char *)v1433))
                        * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x448) = *((_QWORD *)&v1451 + 1);
                  v1442 = (BYTE8(v1451) ^ (unsigned __int8)(v1451 ^ v1442)) & 0x3F;
                  if ( !(_DWORD)v1442 )
                    v1442 = 1LL;
                  --v1448;
                }
                while ( v1448 );
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                v1443 = *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              }
              v1452 = v1434 & 0x7F;
              if ( v1452 >= 8 )
              {
                v1453 = (unsigned __int64)v1452 >> 3;
                do
                {
                  v1447 = __ROL8__(*v1445++ ^ v1447, v1442);
                  v1452 -= 8;
                  --v1453;
                }
                while ( v1453 );
              }
              if ( v1452 )
              {
                do
                {
                  v1454 = *(unsigned __int8 *)v1445;
                  v1445 = (_QWORD *)((char *)v1445 + 1);
                  v1447 = __ROL8__(v1454 ^ v1447, v1442);
                  --v1452;
                }
                while ( v1452 );
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              for ( i17 = v1447; ; LODWORD(v1447) = i17 ^ v1447 )
              {
                i17 >>= 31;
                if ( !i17 )
                  break;
              }
              v1456 = v1447 & 0x7FFFFFFF;
              (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *, __int64))(v23 + 408))(
                v2 + 1352,
                1LL,
                v1445,
                v1442);
              if ( v1456 == *((_DWORD *)v49 + 5)
                && *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) == *((_WORD *)v49 + 22)
                && !Ldtr
                && v1443 == 64 )
              {
                v45 = 0LL;
                goto LABEL_2193;
              }
              if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
              {
                v1457 = *(_QWORD **)(v23 + 2312);
                v1458 = 48;
                v1459 = 6LL;
                do
                {
                  v1458 -= 8;
                  *v1457 = *(_QWORD *)v49;
                  v49 += 8;
                  ++v1457;
                  --v1459;
                }
                while ( v1459 );
                if ( v1458 )
                {
                  do
                  {
                    v1460 = *v49++;
                    *(_BYTE *)v1457 = v1460;
                    v1457 = (_QWORD *)((char *)v1457 + 1);
                    --v1458;
                  }
                  while ( v1458 );
                  v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                }
                v49 = *(char **)(v23 + 2312);
              }
              *((_QWORD *)v49 + 3) = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1BA);
              *((_QWORD *)v49 + 4) = v1456;
              if ( Ldtr )
              {
                v1461 = Ldtr;
                goto LABEL_2234;
              }
              if ( v1443 != 64 )
              {
                v1461 = v1443;
LABEL_2234:
                *((_QWORD *)v49 + 3) = v1461;
              }
              v1462 = *(_DWORD *)(v23 + 1936);
              v45 = 0LL;
              if ( !v1462 )
              {
                *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1456 ^ (unsigned __int64)*((unsigned int *)v49 + 5);
                v1462 = *(_DWORD *)(v23 + 1936);
              }
              v1463 = *((_QWORD *)v49 + 1);
              if ( !v1462 )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v49;
                *(_QWORD *)(v23 + 1968) = v1463;
                *(_DWORD *)(v23 + 1936) = 1;
              }
              goto LABEL_2193;
            }
            v1464 = *((unsigned int *)v49 + 10);
            v1465 = *(void (__fastcall **)(unsigned __int64, __int64))(v23 + 416);
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 0;
            v1465(v2 + 1368, v1464);
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(v23 + 464))(v2 + 1368, v2 + 1384);
            KiGetGdtIdt(v2 + 1520, v2 + 576);
            v1466 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x242);
            v1467 = 0;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1466;
            v1468 = (unsigned __int16 *)(v1466 + 4);
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1468;
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = 0;
            while ( 2 )
            {
              v1469 = 0LL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x120) = *(_QWORD *)(v23 + 1896);
              v1470 = 0LL;
              v1471 = *(_QWORD *)(v23 + 1904);
              v1472 = *(unsigned int *)(v23 + 1872);
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0LL;
              v1473 = *(unsigned int *)(v23 + 1868);
              v1474 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              v1478 = *v1468;
              *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = *(v1468 - 2);
              *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xCA) = v1468[1];
              v1475 = *((_DWORD *)v1468 + 1);
              v1476 = *(_QWORD *)(v23 + 1552);
              *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xCC) = v1475;
              v1477 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
              LOWORD(v1478) = ((unsigned __int16)v1478 >> 13) & 3;
              *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v1478;
              v1479 = v1476 + 8LL * v1467;
              if ( v1477 == v1479 )
              {
                if ( (_WORD)v1478 )
                {
                  __writecr8(v1474);
                  goto LABEL_2248;
                }
                v1470 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v23 + 1136))(
                                     v1467,
                                     v1479,
                                     v1478,
                                     0LL);
                if ( v1470 )
                {
                  v1480 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) < 0x30u;
                  v1481 = *(_QWORD *)(v1473 + v1470);
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1481;
                  if ( v1480 )
                  {
                    __writecr8(v1474);
LABEL_2247:
                    v1469 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
LABEL_2248:
                    v1482 = *(_QWORD *)(v23 + 1416);
                    *(_QWORD *)v1482 = v1477;
                    *(_DWORD *)(v1482 + 16) = 128;
                    if ( v1469 )
                    {
                      v1483 = *(_QWORD *)(v23 + 1416);
                      *(_QWORD *)(v1483 + 8) = v1469;
                      *(_DWORD *)(v1483 + 20) = 128;
                    }
                    *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 1;
                    goto LABEL_2267;
                  }
                  v1484 = *(_QWORD *)(v1472 + v1470);
LABEL_2255:
                  __writecr8(v1474);
                  if ( !v1470 )
                  {
                    v1485 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
                    if ( v1477 < v1485 )
                      goto LABEL_2247;
                    if ( v1477 > v1471 )
                      goto LABEL_2247;
                    v1486 = *(_QWORD *)(v23 + 1912);
                    v1487 = (unsigned int)(*(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) - v1485);
                    v1488 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(v23 + 528);
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x450) = v1485;
                    v1489 = v1488(v1486, v1485, v1487);
                    if ( !v1489 || (*(_DWORD *)(v1489 + 36) & 0x2000000) != 0 )
                      goto LABEL_2247;
                  }
                  v1490 = *(__int16 **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  if ( *(v1490 - 1) != 16 || (*v1490 & 0x1F00) != 0xE00 || *v1490 >= 0 )
                    goto LABEL_2247;
                  v1491 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(v23 + 608))(
                                            v1477,
                                            v2 + 288,
                                            0LL);
                  if ( v1491
                    && (v1492 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x120),
                        v1492 + *v1491 == v1477)
                    && v1492 == *(_QWORD *)(v23 + 1896) )
                  {
                    if ( !v1470 )
                      goto LABEL_2267;
                  }
                  else if ( !v1470 )
                  {
                    goto LABEL_2247;
                  }
                  if ( *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) )
                    goto LABEL_2247;
                  if ( v1470 != -1 )
                  {
                    v1515 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(v23 + 608))(
                                              v1481,
                                              v2 + 288,
                                              0LL);
                    if ( !v1515 )
                      goto LABEL_2247;
                    v1516 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
                    if ( v1516 + *v1515 != v1481 )
                      goto LABEL_2247;
                    if ( v1516 != *(_QWORD *)(v23 + 1896) )
                      goto LABEL_2247;
                    v1517 = *(_QWORD *)(v23 + 1912);
                    v1518 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v23 + 528);
                    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x458) = v1516;
                    v1519 = v1518(v1517, v1516, (unsigned int)(v1481 - v1516));
                    if ( !v1519
                      || (*(_DWORD *)(v1519 + 36) & 0x2000000) != 0
                      || *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) == 254
                      && v1484 != *(_QWORD *)(v23 + 1880) )
                    {
                      goto LABEL_2247;
                    }
                  }
LABEL_2267:
                  v1467 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) + 1;
                  v1468 = (unsigned __int16 *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) + 16LL);
                  *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1467;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1468;
                  if ( v1467 > 0xFF )
                  {
                    if ( (*(_BYTE *)(v23 + 1819) & 1) != 0 )
                    {
                      _disable();
                      v1493 = 3221225602LL;
                      v1494 = __readmsr(0xC0000082);
                      v1495 = (unsigned __int64)(v23 + 1818) >> 32;
                      __writemsr(0xC0000082, v23 + 1818);
                      if ( (*(_DWORD *)(v23 + 2092) & 0x20000) == 0 )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        v1495 = v23 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v23 + 1208) = v23 - 0x5C5FC0A76E374B18LL;
                        **(_QWORD **)(v23 + 1216) = CurrentPrcb;
                        **(_QWORD **)(v23 + 1224) = 3221225602LL;
                        v1493 = *(_QWORD *)(v23 + 1232);
                        *(_QWORD *)v1493 = 274LL;
                      }
                      ((void (__fastcall *)(__int64, unsigned __int64))(v23 + 1820))(v1493, v1495);
                      if ( (*(_DWORD *)(v23 + 2092) & 0x20000) == 0 )
                      {
                        **(_QWORD **)(v23 + 1208) = 0xA3A03F5891C8B4E8uLL;
                        **(_QWORD **)(v23 + 1216) = 0LL;
                        **(_QWORD **)(v23 + 1224) = 0LL;
                        **(_QWORD **)(v23 + 1232) = 0LL;
                      }
                      __writemsr(0xC0000082, v1494);
                      _enable();
                    }
                    v1497 = *(_QWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                    *(_DWORD *)(v23 + 1736) += 848;
                    v1498 = v1497;
                    v1499 = *(_DWORD *)(v23 + 1736);
                    v1500 = (const char *)v1497;
                    v1501 = *(_DWORD *)(v23 + 1716);
                    v1502 = *(_QWORD *)(v23 + 1720);
                    if ( v1497 < v1497 + 106 )
                    {
                      do
                      {
                        _mm_prefetch(v1500, 0);
                        v1500 += 64;
                      }
                      while ( v1500 < (const char *)v1497 + 848 );
                    }
                    v1503 = *(_QWORD *)(v23 + 1720);
                    v1504 = 6;
                    do
                    {
                      v1505 = 8LL;
                      do
                      {
                        v1506 = v1503 ^ *v1498;
                        v1507 = v1498[1];
                        v1498 += 2;
                        v1503 = __ROL8__(__ROL8__(v1506, v1501) ^ v1507, v1501);
                        --v1505;
                      }
                      while ( v1505 );
                      v1508 = __ROL8__(v1502 ^ ((char *)v1498 - (char *)v1497), 17) ^ v1502 ^ ((char *)v1498
                                                                                             - (char *)v1497);
                      v1509 = (v1508 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x460) = v1509;
                      v1501 = ((unsigned __int8)v1509 ^ (unsigned __int8)(v1508 ^ v1501)) & 0x3F;
                      if ( !v1501 )
                        LOBYTE(v1501) = 1;
                      --v1504;
                    }
                    while ( v1504 );
                    v1510 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                    v1511 = 80;
                    v1512 = 10LL;
                    do
                    {
                      v1503 = __ROL8__(*v1498++ ^ v1503, v1501);
                      v1511 -= 8;
                      --v1512;
                    }
                    while ( v1512 );
                    for ( ; v1511; --v1511 )
                    {
                      v1513 = *(unsigned __int8 *)v1498;
                      v1498 = (_QWORD *)((char *)v1498 + 1);
                      v1503 = __ROL8__(v1513 ^ v1503, v1501);
                    }
                    for ( i18 = v1503; ; LODWORD(v1503) = i18 ^ v1503 )
                    {
                      i18 >>= 31;
                      if ( !i18 )
                        break;
                    }
                    v1520 = v1503 & 0x7FFFFFFF;
                    *(_DWORD *)(v23 + 1736) = v1499 + 16;
                    v1521 = v1497 + 450;
                    v1522 = *(_DWORD *)(v23 + 1716);
                    v1523 = *(_QWORD *)(v23 + 1720);
                    v1524 = (const char *)(v1497 + 450);
                    if ( v1497 + 450 < v1497 + 452 )
                    {
                      do
                      {
                        _mm_prefetch(v1524, 0);
                        v1524 += 64;
                      }
                      while ( v1524 < (const char *)v1497 + 3616 );
                    }
                    v1525 = 16;
                    v1526 = 2LL;
                    do
                    {
                      v1523 = __ROL8__(*v1521++ ^ v1523, v1522);
                      v1525 -= 8;
                      --v1526;
                    }
                    while ( v1526 );
                    for ( ; v1525; --v1525 )
                    {
                      v1527 = *(unsigned __int8 *)v1521;
                      v1521 = (_QWORD *)((char *)v1521 + 1);
                      v1523 = __ROL8__(v1527 ^ v1523, v1522);
                    }
                    for ( i19 = v1523; ; LODWORD(v1523) = i19 ^ v1523 )
                    {
                      i19 >>= 31;
                      if ( !i19 )
                        break;
                    }
                    v1529 = v1523 & 0x7FFFFFFF;
                    (*(void (__fastcall **)(unsigned __int64, _QWORD *))(v23 + 408))(v2 + 1384, v1521);
                    v1530 = *(int **)v2;
                    v1531 = *(unsigned int *)(*(_QWORD *)v2 + 20LL);
                    if ( v1520 == (_DWORD)v1531
                      && v1529 == *((_QWORD *)v1530 + 3)
                      && *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x240) == *((_WORD *)v1530 + 22)
                      && !v1510 )
                    {
                      v45 = 0LL;
                    }
                    else
                    {
                      if ( v1510 )
                      {
                        v45 = 0LL;
                      }
                      else
                      {
                        v1532 = *((_QWORD *)v1530 + 3);
                        v45 = 0LL;
                        v1533 = *(_DWORD *)(v23 + 1936);
                        if ( v1529 == v1532 )
                        {
                          if ( !v1533 )
                          {
                            v1534 = v1531 ^ v1520;
                            goto LABEL_2317;
                          }
                        }
                        else if ( !v1533 )
                        {
                          v1534 = v1529 ^ (unsigned __int64)(unsigned int)v1532;
LABEL_2317:
                          *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1534;
                        }
                      }
                      v1535 = *((_QWORD *)v1530 + 1);
                      if ( !*(_DWORD *)(v23 + 1936) )
                      {
                        *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v23 + 1952) = (char *)v1530 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v23 + 1960) = *v1530;
                        *(_QWORD *)(v23 + 1968) = v1535;
                        *(_DWORD *)(v23 + 1936) = 1;
                      }
                    }
                    *(_DWORD *)(v23 + 1736) += 0x10000;
                    goto LABEL_144;
                  }
                  continue;
                }
                v1470 = -1LL;
                v1484 = 0LL;
              }
              else
              {
                v1484 = 0LL;
              }
              break;
            }
            v1481 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            goto LABEL_2255;
          }
          v105 = *((_QWORD *)v49 + 3);
          v106 = *((_WORD *)v49 + 17);
          if ( *(_WORD *)(v105 + 66) != v106 && !*(_DWORD *)(v23 + 1936) )
          {
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v105;
            *(_DWORD *)(v23 + 1936) = 1;
            v106 = *((_WORD *)v49 + 17);
          }
          if ( (v106 & 0x40) == 0 && *(_QWORD *)(v105 + 200) != v105 + 200 && !*(_DWORD *)(v23 + 1936) )
          {
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v105;
            *(_DWORD *)(v23 + 1936) = 1;
          }
          v107 = (_QWORD *)*((_QWORD *)v49 + 1);
          v108 = *((unsigned int *)v49 + 4);
          v109 = v107;
          *(_DWORD *)(v23 + 1736) += v108;
          v110 = (const char *)v107;
          v111 = *(_DWORD *)(v23 + 1716);
          v112 = *(_QWORD *)(v23 + 1720);
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v108;
          if ( v107 < (_QWORD *)((char *)v107 + v108) )
          {
            do
            {
              _mm_prefetch(v110, 0);
              v110 += 64;
            }
            while ( v110 < (const char *)v107 + v108 );
          }
          v113 = v112;
          v114 = (unsigned int)v108 >> 7;
          if ( (unsigned int)v108 >> 7 )
          {
            do
            {
              v115 = 8LL;
              do
              {
                v116 = v113 ^ *v109;
                v117 = v109[1];
                v109 += 2;
                v113 = __ROL8__(__ROL8__(v116, v111) ^ v117, v111);
                --v115;
              }
              while ( v115 );
              v118 = __ROL8__(v112 ^ ((char *)v109 - (char *)v107), 17) ^ v112 ^ ((char *)v109 - (char *)v107);
              v119 = (v118 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x488) = v119;
              v111 = ((unsigned __int8)(v119 ^ v118) ^ (unsigned __int8)v111) & 0x3F;
              if ( !v111 )
                LOBYTE(v111) = 1;
              --v114;
            }
            while ( v114 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            LODWORD(v108) = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
          }
          v120 = v108 & 0x7F;
          if ( v120 >= 8 )
          {
            v121 = (unsigned __int64)v120 >> 3;
            do
            {
              v113 = __ROL8__(*v109++ ^ v113, v111);
              v120 -= 8;
              --v121;
            }
            while ( v121 );
            v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          }
          for ( ; v120; --v120 )
          {
            v122 = *(unsigned __int8 *)v109;
            v109 = (_QWORD *)((char *)v109 + 1);
            v113 = __ROL8__(v122 ^ v113, v111);
          }
          for ( i20 = v113; ; LODWORD(v113) = i20 ^ v113 )
          {
            i20 >>= 31;
            if ( !i20 )
              break;
          }
          v124 = v113 & 0x7FFFFFFF;
          if ( v124 == *((_DWORD *)v49 + 5) )
          {
LABEL_267:
            v45 = 0LL;
          }
          else
          {
            if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
              LODWORD(v45) = 1;
            v125 = *((unsigned int *)v49 + 4);
            v126 = *((_QWORD *)v49 + 1);
            if ( *((_DWORD *)v49 + 4) )
            {
              v127 = 64LL;
              if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
              {
                v128 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v129 = v126 & 0xFFFFFFFFFFFFF000uLL;
                *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = (v126 + v125 - 1) | 0xFFF;
                v130 = (v126 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v131 = v128;
                  while ( 1 )
                  {
                    v132 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                             v129,
                             0LL,
                             v127,
                             v109);
                    if ( v132 != -1073741267 )
                      break;
                    if ( (_DWORD)v45 )
                      goto LABEL_273;
                    if ( v128 > 1u )
                      goto LABEL_265;
                    v131 = v128;
                    __writecr8(v128);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v132 < 0 )
                    break;
LABEL_265:
                  v129 += 4096LL;
                  v130 += 4096LL;
                  if ( v130 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) )
                  {
                    __writecr8(v131);
                    v49 = *(char **)v2;
                    goto LABEL_267;
                  }
                }
LABEL_273:
                v49 = *(char **)v2;
                __writecr8(v131);
              }
            }
            v137 = *(_DWORD *)(v23 + 1936);
            v45 = 0LL;
            if ( !v137 )
            {
              *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = *((unsigned int *)v49 + 5) ^ (unsigned __int64)v124;
              v137 = *(_DWORD *)(v23 + 1936);
            }
            v138 = *((_QWORD *)v49 + 1);
            if ( !v137 )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *(int *)v49;
              *(_QWORD *)(v23 + 1968) = v138;
              *(_DWORD *)(v23 + 1936) = 1;
            }
          }
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0) = v49 + 48;
          v133 = *((_WORD *)v49 + 16);
          v1583 = v2 + 496;
          *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x298) = v133;
          *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x29A) = v133;
          v134 = *(_QWORD *)(v23 + 1280);
          v135 = *(int (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64))(v23 + 488);
          LOBYTE(v1581) = 0;
          if ( v135(v2 + 664, 0LL, 0LL, 0LL, v134, v1581, 0LL, v1583) < 0 )
            goto LABEL_144;
          v136 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0);
          if ( v136 != *((_QWORD *)v49 + 3) && !*(_DWORD *)(v23 + 1936) )
          {
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v136;
            *(_DWORD *)(v23 + 1936) = 1;
            v136 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0);
          }
LABEL_272:
          (*(void (__fastcall **)(__int64))(v23 + 480))(v136);
          goto LABEL_144;
        }
        v146 = *(_DWORD *)(v23 + 1744);
        if ( (v146 & 1) == 0 )
          goto LABEL_144;
        v147 = 0;
        if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 )
        {
          v149 = __rdtsc();
          v150 = (__ROR8__(v149, 3) ^ v149) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x490) = *((_QWORD *)&v150 + 1);
          v148 = ((unsigned __int64)v150 ^ *((_QWORD *)&v150 + 1)) == 3
                                                                    * (((unsigned __int64)v150 ^ *((_QWORD *)&v150 + 1))
                                                                     / 3);
        }
        else
        {
          v148 = (v146 & 3) == 3;
        }
        v151 = *(void (**)(void))(v23 + 376);
        LOBYTE(v147) = v148;
        v152 = *(_QWORD *)(v23 + 1344);
        v153 = 0;
        *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = 0;
        v151();
        if ( (*(_DWORD *)(v23 + 2088) & 0x40000000) != 0 || (v154 = *(_DWORD *)(v23 + 2024), v154 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 296))(*(_QWORD *)(v23 + 2200), 0LL);
          v155 = 0x80;
        }
        else
        {
          v155 = 1 << v154;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v23 + 312))(v152, 0LL);
        v156 = *(volatile signed __int8 ***)(v23 + 1304);
        v157 = *v156;
        if ( *v156 != (volatile signed __int8 *)v156 )
        {
          do
          {
            _InterlockedOr8(v157 - 298, v155);
            v157 = *(volatile signed __int8 **)v157;
            ++v153;
          }
          while ( v157 != (volatile signed __int8 *)v156 );
          *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v153;
        }
        v158 = *(unsigned int ***)(v23 + 1352);
        v159 = 4LL;
        v160 = *(int **)v2;
        v161 = (__int64)*v158;
        v162 = **v158;
        while ( 2 )
        {
          v163 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v23 + 264))(v161, v159);
          v164 = 0LL;
          v165 = v163;
          if ( v163 )
          {
            v166 = (*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
            v167 = *(_BYTE *)v166 & 0x7F;
            if ( v167 == 3 )
            {
              if ( (v155 & *(_BYTE *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x1BE)) == 0
                && (*(_DWORD *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x4000000) != 0
                && !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = (char *)v160 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *v160;
                *(_QWORD *)(v23 + 1968) = v166;
                *(_DWORD *)(v23 + 1936) = 1;
              }
              _InterlockedAnd8((volatile signed __int8 *)(v166 + 446), ~v155);
              goto LABEL_322;
            }
            if ( v167 != 6 )
            {
              v169 = v167 == 0;
              goto LABEL_319;
            }
            if ( !v147 )
              goto LABEL_322;
            v168 = *(_QWORD *)(((*v163 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2A8);
            if ( (v168 == *(_QWORD *)(v23 + 800) || v168 == *(_QWORD *)(v23 + 808))
              && *(_QWORD *)(v166 + 696) == *(_QWORD *)(v23 + 816) )
            {
              v169 = *(_QWORD *)(v166 + 688) == *(_QWORD *)(v23 + 824);
LABEL_319:
              if ( v169 )
                goto LABEL_322;
            }
            if ( !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = (char *)v160 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *v160;
              *(_QWORD *)(v23 + 1968) = v166;
              *(_DWORD *)(v23 + 1936) = 1;
            }
LABEL_322:
            (*(void (__fastcall **)(__int64, __int64 *))(v23 + 288))(v161, v165);
          }
          v159 += 4LL;
          if ( v159 >= v162 )
          {
            v170 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            if ( v155 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(v23 + 304))(
                *(_QWORD *)(v23 + 2200),
                0LL,
                v165,
                v164);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(v23 + 320))(
              *(_QWORD *)(v23 + 1344),
              0LL,
              v165,
              v164);
            (*(void (**)(void))(v23 + 384))();
            v171 = (v162 >> 2) + v170;
            goto LABEL_327;
          }
          continue;
        }
      }
LABEL_1975:
      if ( *(_DWORD *)(v23 + 1732) )
        goto LABEL_2016;
      if ( v73 == 12 )
      {
        if ( !*(_QWORD *)(v23 + 2072) )
        {
          *(_DWORD *)(v23 + 1732) = 0;
          goto LABEL_2016;
        }
        v1289 = *(_DWORD *)(v23 + 2092) ^ ((unsigned __int8)*(_DWORD *)(v23 + 2092) ^ (unsigned __int8)(8 * *(_DWORD *)(v23 + 2092))) & 0x20;
        *(_DWORD *)(v23 + 2092) = v1289;
        if ( (v1289 & 4) != 0 )
        {
          v1290 = *((_QWORD *)v49 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v1291 = ((*((_QWORD *)v49 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v49 + 4) + 4095) >> 12;
          if ( v1291 )
          {
            do
            {
              --v1291;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v23 + 688))(v1290) && !*(_DWORD *)(v23 + 1936) )
              {
                *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v23 + 1960) = *(int *)v49;
                *(_QWORD *)(v23 + 1968) = v1290;
                *(_DWORD *)(v23 + 1936) = 1;
              }
              *(_DWORD *)(v23 + 1736) += 256;
              v1290 += 4096LL;
            }
            while ( v1291 );
            goto LABEL_2015;
          }
LABEL_2016:
          v1317 = *((_QWORD *)v49 + 1);
          v1318 = *(unsigned int *)(v23 + 1732);
          v1319 = *((unsigned int *)v49 + 4);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v1317;
          v1320 = (unsigned int *)(v1317 + 12 * v1318);
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1320;
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1317 + 12 * (v1319 / 0xC);
          v1321 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          v1322 = (int *)&v49[4 * v1318 + 48];
          *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1322;
          while ( 2 )
          {
            if ( *v1322 < 0 )
              goto LABEL_2121;
            v1323 = *(int **)v2;
            v1324 = v1320[1] - *v1320;
            v1325 = *(_QWORD *)(*(_QWORD *)v2 + 32LL) + *v1320;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1325;
            if ( v73 != 43 )
            {
              *(_DWORD *)(v23 + 1736) += v1324;
              v1326 = (_QWORD *)v1325;
              v1327 = *(unsigned int *)(v23 + 1716);
              v1328 = (const char *)v1325;
              v1329 = *(_QWORD *)(v23 + 1720);
              v1330 = v1325 + v1324;
              if ( v1325 < v1330 )
              {
                do
                {
                  _mm_prefetch(v1328, 0);
                  v1328 += 64;
                }
                while ( (unsigned __int64)v1328 < v1330 );
              }
              v1331 = *(_QWORD *)(v23 + 1720);
              v1332 = v1324 >> 7;
              if ( v1324 >> 7 )
              {
                do
                {
                  v1333 = 8LL;
                  do
                  {
                    v1334 = v1326[1] ^ __ROL8__(*v1326 ^ v1331, v1327);
                    v1326 += 2;
                    v1331 = __ROL8__(v1334, v1327);
                    --v1333;
                  }
                  while ( v1333 );
                  v1335 = (__ROL8__(v1329 ^ ((unsigned __int64)v1326 - v1325), 17) ^ v1329 ^ ((unsigned __int64)v1326
                                                                                            - v1325))
                        * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x430) = *((_QWORD *)&v1335 + 1);
                  v1327 = (BYTE8(v1335) ^ (unsigned __int8)(v1335 ^ v1327)) & 0x3F;
                  if ( !(_DWORD)v1327 )
                    v1327 = 1LL;
                  --v1332;
                }
                while ( v1332 );
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              }
              v1336 = v1324 & 0x7F;
              if ( v1336 >= 8 )
              {
                v1337 = (unsigned __int64)(v1324 & 0x7F) >> 3;
                do
                {
                  v1331 = __ROL8__(*v1326++ ^ v1331, v1327);
                  v1336 -= 8;
                  --v1337;
                }
                while ( v1337 );
              }
              for ( ; v1336; --v1336 )
              {
                v1338 = *(unsigned __int8 *)v1326;
                v1326 = (_QWORD *)((char *)v1326 + 1);
                v1331 = __ROL8__(v1338 ^ v1331, v1327);
              }
              for ( i21 = v1331; ; LODWORD(v1331) = i21 ^ v1331 )
              {
                i21 >>= 31;
                if ( !i21 )
                  break;
              }
              v1367 = v1331 & 0x7FFFFFFF;
LABEL_2108:
              v1378 = **(_DWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
              if ( v1367 == (v1378 & 0x7FFFFFFF) )
                goto LABEL_2119;
              if ( !v1324 )
                goto LABEL_2134;
              v1379 = 64LL;
              if ( (*(_DWORD *)(v23 + 2092) & 0x40) == 0 )
                goto LABEL_2134;
              v1380 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1381 = v1325 & 0xFFFFFFFFFFFFF000uLL;
              v1382 = (v1324 + v1325 - 1) | 0xFFF;
              v1383 = v1381 - 1;
              do
              {
                v1384 = v1380;
                while ( 1 )
                {
                  v1385 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v23 + 1128))(
                            v1381,
                            0LL,
                            v1379,
                            v1327);
                  if ( v1385 != -1073741267 )
                    break;
                  if ( v1380 > 1u )
                    goto LABEL_2117;
                  v1384 = v1380;
                  __writecr8(v1380);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1385 < 0 )
                {
                  __writecr8(v1384);
                  v1325 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                  v1378 = **(_DWORD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
LABEL_2134:
                  v1402 = v1378;
                  v1401 = *(_DWORD *)(v23 + 1936);
                  LODWORD(v1402) = v1402 & 0x7FFFFFFF;
                  if ( !v1401 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1402 ^ v1367;
                    v1401 = *(_DWORD *)(v23 + 1936);
                  }
                  v1320 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                  v45 = 0LL;
                  v1321 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  if ( !v1401 )
                  {
                    v1403 = *(int **)v2;
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = (char *)v1403 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *v1403;
                    *(_QWORD *)(v23 + 1968) = v1325;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                  goto LABEL_2120;
                }
LABEL_2117:
                v1381 += 4096LL;
                v1383 += 4096LL;
              }
              while ( v1383 != v1382 );
              __writecr8(v1384);
              v1320 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
LABEL_2119:
              v1321 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
              v45 = 0LL;
LABEL_2120:
              v1322 = *(int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
LABEL_2121:
              ++v1322;
              v1320 += 3;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1322;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v1320;
              v1386 = v1320 == v1321;
              if ( v1320 >= v1321 )
              {
LABEL_2124:
                if ( !v1386 )
                {
                  *(_DWORD *)(v23 + 1732) = ((__int64)v1320
                                           - *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0))
                                          / 12;
                  goto LABEL_144;
                }
                v1387 = *(_QWORD *)(v23 + 1336);
                v1388 = KeGetCurrentIrql();
                __writecr8(0xFuLL);
                (*(void (__fastcall **)(__int64))(v23 + 336))(v1387);
                v1390 = *(int **)v2;
                v1391 = **(unsigned int ***)(v23 + 1544);
                v1392 = v1391 + 4;
                v1393 = *((_BYTE *)v1391 + 12);
                v1394 = (unsigned __int64)&v1391[6 * *v1391 + 4];
                do
                {
                  v1395 = 24LL;
                  v1396 = (__int64 *)(v1390 + 6);
                  v1397 = v1392;
                  do
                  {
                    v1398 = *(_QWORD *)v1397;
                    v1397 += 2;
                    v1399 = *v1396++;
                    if ( v1398 != v1399 )
                      goto LABEL_2138;
                    v1395 = (unsigned int)(v1395 - 8);
                  }
                  while ( (unsigned int)v1395 >= 8 );
                  if ( !(_DWORD)v1395 )
                    break;
                  while ( 1 )
                  {
                    v1389 = *(unsigned __int8 *)v1397;
                    v1397 = (unsigned int *)((char *)v1397 + 1);
                    v1400 = *(unsigned __int8 *)v1396;
                    v1396 = (__int64 *)((char *)v1396 + 1);
                    if ( v1389 != v1400 )
                      break;
                    v63 = (_DWORD)v1395 == 1;
                    v1395 = (unsigned int)(v1395 - 1);
                    if ( v63 )
                      goto LABEL_2139;
                  }
LABEL_2138:
                  v1392 += 6;
                }
                while ( (unsigned __int64)v1392 < v1394 );
LABEL_2139:
                v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v23 + 400))(
                  *(_QWORD *)(v23 + 1336),
                  v1389,
                  v1395,
                  v1396);
                __writecr8(v1388);
                v45 = 0LL;
                if ( !v1393 )
                  goto LABEL_2415;
                if ( (*(_DWORD *)(v23 + 2092) & 0x10) != 0 && !*(_DWORD *)(v23 + 1936) )
                {
                  *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v23 + 1952) = (char *)v1390 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v23 + 1960) = *v1390;
                  *(_QWORD *)(v23 + 1968) = 1LL;
                  *(_DWORD *)(v23 + 1936) = 1;
                }
                if ( *((_QWORD *)v1390 + 3) != 1LL )
                {
LABEL_2415:
                  if ( v1392 == (unsigned int *)v1394 && !*(_DWORD *)(v23 + 1936) )
                  {
                    *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v23 + 1952) = (char *)v1390 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v23 + 1960) = *v1390;
                    *(_QWORD *)(v23 + 1968) = v1392;
                    *(_DWORD *)(v23 + 1936) = 1;
                  }
                }
LABEL_392:
                *(_DWORD *)(v23 + 1732) = 0;
                goto LABEL_144;
              }
              v73 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              if ( *(_DWORD *)(v23 + 1736) >= *(_DWORD *)(v23 + 1740) )
              {
                v1386 = v1320 == v1321;
                goto LABEL_2124;
              }
              continue;
            }
            break;
          }
          v1367 = sub_1402E7BC8(v23, v1325, v1324);
          *(_DWORD *)(v23 + 1736) += 8 * v1324;
          if ( (*(_DWORD *)(v23 + 2092) & 0x800) == 0 )
            goto LABEL_2108;
          v1368 = (_BYTE *)(v1325 - 6);
          if ( *(_BYTE *)(v1325 - 6) == 76 && v1368[1] == 0x87 && !v1368[2] && v1368[3] == 0x98 && v1368[4] == 0xC3 )
          {
            v1369 = v1368 + 5;
            v1370 = v1368[5];
            if ( v1370 != -112 && v1370 != -15 )
              goto LABEL_2104;
            v1371 = *(volatile signed __int32 **)(v23 + 1240);
            while ( 1 )
            {
              _disable();
              if ( !_interlockedbittestandset(v1371, (*(_DWORD *)(v23 + 2088) >> 10) & 0x1F) )
                break;
              _enable();
              _mm_pause();
            }
            v1372 = 38LL;
            v1373 = (_QWORD *)(v2 + 2048);
            v1327 = 304LL;
            v1374 = 304;
            do
            {
              *v1373 = 0LL;
              v1374 -= 8;
              ++v1373;
              --v1372;
            }
            while ( v1372 );
            if ( v1374 )
            {
              v1372 = 0xFFFFFFFFLL;
              do
              {
                *(_BYTE *)v1373 = 0;
                v1373 = (_QWORD *)((char *)v1373 + 1);
                --v1374;
              }
              while ( v1374 );
            }
            *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x810) = *(_OWORD *)(v23 + 1768);
            *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x820) = *(_OWORD *)(v23 + 1784);
            v1375 = *(_OWORD *)(v23 + 1800);
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x252) = ((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                   + 2048;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x438) = v23 + 1836;
            v1376 = (unsigned __int64)(v23 + 1836) >> 16;
            *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x810) = v23 + 1836;
            *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x818) = (unsigned __int64)(v23 + 1836) >> 32;
            *(_OWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x920) = v1375;
            *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) = 304;
            *(_WORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x816) = v1376;
            __sidt((void *)(v2 + 736));
            __lidt((void *)(v2 + 592));
            *v1369 = -15;
            if ( *v1369 != 0xF1 )
              goto LABEL_2101;
            if ( (*(_DWORD *)(v23 + 2092) & 0x20000) == 0 )
            {
              v1372 = (__int64)KeGetCurrentPrcb();
              **(_QWORD **)(v23 + 1208) = v23 - 0x5C5FC0A76E374B18LL;
              v1376 = v1325;
              **(_QWORD **)(v23 + 1216) = v1372;
              **(_QWORD **)(v23 + 1224) = v1325;
              **(_QWORD **)(v23 + 1232) = 275LL;
            }
            ((void (__fastcall *)(unsigned __int64, __int64, __int64))(v1368 + 5))(v1376, v1372, 1LL);
            if ( (*(_DWORD *)(v23 + 2092) & 0x20000) == 0 )
            {
              **(_QWORD **)(v23 + 1208) = 0xA3A03F5891C8B4E8uLL;
              **(_QWORD **)(v23 + 1216) = 0LL;
              **(_QWORD **)(v23 + 1224) = 0LL;
              **(_QWORD **)(v23 + 1232) = 0LL;
            }
            if ( *v1369 == 0xF1 )
            {
              *v1369 = -112;
              v1377 = *v1369 == 0x90;
            }
            else
            {
LABEL_2101:
              v1377 = 0;
            }
            __lidt((void *)(v2 + 736));
            _InterlockedAnd(v1371, ~(1 << ((*(_DWORD *)(v23 + 2088) >> 10) & 0x1F)));
            _enable();
            if ( !v1377 )
            {
LABEL_2104:
              v1323 = *(int **)v2;
              goto LABEL_2105;
            }
          }
          else
          {
LABEL_2105:
            if ( !*(_DWORD *)(v23 + 1936) )
            {
              *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v23 + 1952) = (char *)v1323 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v23 + 1960) = *v1323;
              *(_QWORD *)(v23 + 1968) = v1368;
              *(_DWORD *)(v23 + 1936) = 1;
            }
          }
          v1320 = *(unsigned int **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
          goto LABEL_2108;
        }
        v1292 = (_QWORD *)*((_QWORD *)v49 + 1);
        v1293 = *((unsigned int *)v49 + 4);
        v1294 = v1292;
        *(_DWORD *)(v23 + 1736) += v1293;
        v1295 = (const char *)v1292;
        v1296 = *(_DWORD *)(v23 + 1716);
        v1297 = *(_QWORD *)(v23 + 1720);
        if ( v1292 < (_QWORD *)((char *)v1292 + v1293) )
        {
          do
          {
            _mm_prefetch(v1295, 0);
            v1295 += 64;
          }
          while ( v1295 < (const char *)v1292 + v1293 );
        }
        v1298 = *(_QWORD *)(v23 + 1720);
        v1299 = (unsigned int)v1293 >> 7;
        if ( (unsigned int)v1293 >> 7 )
        {
          do
          {
            v1300 = 8LL;
            do
            {
              v1301 = v1294[1] ^ __ROL8__(*v1294 ^ v1298, v1296);
              v1294 += 2;
              v1298 = __ROL8__(v1301, v1296);
              --v1300;
            }
            while ( v1300 );
            v1302 = (__ROL8__(v1297 ^ ((char *)v1294 - (char *)v1292), 17) ^ v1297 ^ (unsigned __int64)((char *)v1294 - (char *)v1292))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x420) = *((_QWORD *)&v1302 + 1);
            v1296 = (BYTE8(v1302) ^ (unsigned __int8)(v1302 ^ v1296)) & 0x3F;
            if ( !v1296 )
              LOBYTE(v1296) = 1;
            --v1299;
          }
          while ( v1299 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1303 = v1293 & 0x7F;
        if ( v1303 >= 8 )
        {
          v1304 = (unsigned __int64)v1303 >> 3;
          do
          {
            v1298 = __ROL8__(*v1294++ ^ v1298, v1296);
            v1303 -= 8;
            --v1304;
          }
          while ( v1304 );
        }
        for ( ; v1303; --v1303 )
        {
          v1305 = *(unsigned __int8 *)v1294;
          v1294 = (_QWORD *)((char *)v1294 + 1);
          v1298 = __ROL8__(v1305 ^ v1298, v1296);
        }
        for ( i22 = v1298; ; LODWORD(v1298) = i22 ^ v1298 )
        {
          i22 >>= 31;
          if ( !i22 )
            break;
        }
        v1307 = *((_DWORD *)v49 + 5);
        v1308 = v1298 & 0x7FFFFFFF;
        if ( v1308 != v1307 )
        {
          v1309 = *((unsigned int *)v49 + 4);
          v1310 = *((_QWORD *)v49 + 1);
          if ( *((_DWORD *)v49 + 4) && (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
          {
            v1311 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1312 = v1310 & 0xFFFFFFFFFFFFF000uLL;
            v1313 = (v1310 + v1309 - 1) | 0xFFF;
            v1314 = (v1310 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v1315 = v1311;
              while ( 1 )
              {
                v1316 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v23 + 1128))(v1312, 0LL);
                if ( v1316 != -1073741267 )
                  break;
                if ( v1311 > 1u )
                  goto LABEL_2012;
                v1315 = v1311;
                __writecr8(v1311);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1316 < 0 )
                break;
LABEL_2012:
              v1312 += 4096LL;
              v1314 += 4096LL;
              if ( v1314 == v1313 )
                goto LABEL_2013;
            }
            __writecr8(v1315);
            v49 = *(char **)v2;
            v45 = 0LL;
            v1307 = *(_DWORD *)(*(_QWORD *)v2 + 20LL);
          }
          v1340 = *(_DWORD *)(v23 + 1936);
          if ( !v1340 )
          {
            *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1307 ^ (unsigned __int64)v1308;
            v1340 = *(_DWORD *)(v23 + 1936);
          }
          v1341 = *((_QWORD *)v49 + 1);
          v73 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          if ( !v1340 )
          {
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v1341;
            *(_DWORD *)(v23 + 1936) = 1;
          }
          goto LABEL_2016;
        }
      }
      else
      {
        v1342 = (_QWORD *)*((_QWORD *)v49 + 1);
        v1343 = *((unsigned int *)v49 + 4);
        v1344 = v1342;
        *(_DWORD *)(v23 + 1736) += v1343;
        v1345 = (const char *)v1342;
        v1346 = *(_DWORD *)(v23 + 1716);
        v1347 = *(_QWORD *)(v23 + 1720);
        if ( v1342 < (_QWORD *)((char *)v1342 + v1343) )
        {
          do
          {
            _mm_prefetch(v1345, 0);
            v1345 += 64;
          }
          while ( v1345 < (const char *)v1342 + v1343 );
        }
        v1348 = *(_QWORD *)(v23 + 1720);
        v1349 = (unsigned int)v1343 >> 7;
        if ( (unsigned int)v1343 >> 7 )
        {
          do
          {
            v1350 = 8LL;
            do
            {
              v1351 = v1344[1] ^ __ROL8__(*v1344 ^ v1348, v1346);
              v1344 += 2;
              v1348 = __ROL8__(v1351, v1346);
              --v1350;
            }
            while ( v1350 );
            v1352 = (__ROL8__(v1347 ^ ((char *)v1344 - (char *)v1342), 17) ^ v1347 ^ (unsigned __int64)((char *)v1344 - (char *)v1342))
                  * (unsigned __int128)0x7010008004002001uLL;
            *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x428) = *((_QWORD *)&v1352 + 1);
            v1346 = ((unsigned __int8)v1352 ^ (unsigned __int8)(BYTE8(v1352) ^ v1346)) & 0x3F;
            if ( !v1346 )
              LOBYTE(v1346) = 1;
            --v1349;
          }
          while ( v1349 );
          v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        }
        v1353 = v1343 & 0x7F;
        if ( v1353 >= 8 )
        {
          v1354 = (unsigned __int64)v1353 >> 3;
          do
          {
            v1348 = __ROL8__(*v1344++ ^ v1348, v1346);
            v1353 -= 8;
            --v1354;
          }
          while ( v1354 );
        }
        for ( ; v1353; --v1353 )
        {
          v1355 = *(unsigned __int8 *)v1344;
          v1344 = (_QWORD *)((char *)v1344 + 1);
          v1348 = __ROL8__(v1355 ^ v1348, v1346);
        }
        for ( i23 = v1348; ; LODWORD(v1348) = i23 ^ v1348 )
        {
          i23 >>= 31;
          if ( !i23 )
            break;
        }
        v1357 = v1348 & 0x7FFFFFFF;
        if ( v1357 == *((_DWORD *)v49 + 5) )
        {
LABEL_2014:
          v45 = 0LL;
        }
        else
        {
          if ( !*(_DWORD *)v49 && *((_DWORD *)v49 + 6) )
            LODWORD(v45) = 1;
          v1358 = *((unsigned int *)v49 + 4);
          v1359 = *((_QWORD *)v49 + 1);
          if ( *((_DWORD *)v49 + 4) )
          {
            v1360 = 64LL;
            if ( (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
            {
              v1361 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1362 = v1359 & 0xFFFFFFFFFFFFF000uLL;
              *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = (v1359 + v1358 - 1) | 0xFFF;
              v1363 = (v1359 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1315 = v1361;
                while ( 1 )
                {
                  v1364 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v23 + 1128))(
                            v1362,
                            0LL,
                            v1360,
                            v1344);
                  if ( v1364 != -1073741267 )
                    break;
                  if ( (_DWORD)v45 )
                    goto LABEL_2071;
                  if ( v1361 > 1u )
                    goto LABEL_2069;
                  v1315 = v1361;
                  __writecr8(v1361);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1364 < 0 )
                  break;
LABEL_2069:
                v1362 += 4096LL;
                v1363 += 4096LL;
                if ( v1363 == *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) )
                {
LABEL_2013:
                  __writecr8(v1315);
                  v49 = *(char **)v2;
                  goto LABEL_2014;
                }
              }
LABEL_2071:
              v49 = *(char **)v2;
              __writecr8(v1315);
            }
          }
          v1365 = *(_DWORD *)(v23 + 1936);
          v45 = 0LL;
          if ( !v1365 )
          {
            *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v1357 ^ (unsigned __int64)*((unsigned int *)v49 + 5);
            v1365 = *(_DWORD *)(v23 + 1936);
          }
          v1366 = *((_QWORD *)v49 + 1);
          if ( !v1365 )
          {
            *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v23 + 1960) = *(int *)v49;
            *(_QWORD *)(v23 + 1968) = v1366;
            *(_DWORD *)(v23 + 1936) = 1;
          }
        }
      }
LABEL_2015:
      v73 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
      goto LABEL_2016;
    }
    if ( !*(_QWORD *)(v23 + 2072) )
      goto LABEL_392;
    v213 = *(_DWORD *)(v23 + 2092);
    LOBYTE(v214) = v213;
    if ( *(_DWORD *)(v23 + 1732) )
    {
      if ( (((unsigned __int8)v213 ^ (unsigned __int8)(v213 >> 3)) & 4) != 0 )
        goto LABEL_392;
    }
    else
    {
      v214 = v213 ^ ((unsigned __int8)v213 ^ (unsigned __int8)(8 * v213)) & 0x20;
      *(_DWORD *)(v23 + 2092) = v214;
    }
    if ( (v214 & 4) != 0 )
    {
      v215 = *((_QWORD *)v49 + 1) & 0xFFFFFFFFFFFFF000uLL;
      for ( i24 = ((*((_QWORD *)v49 + 1) & 0xFFFLL) + (unsigned __int64)*((unsigned int *)v49 + 4) + 4095) >> 12;
            i24;
            v215 += 4096LL )
      {
        --i24;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v23 + 688))(v215) && !*(_DWORD *)(v23 + 1936) )
        {
          *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v23 + 1960) = *(int *)v49;
          *(_QWORD *)(v23 + 1968) = v215;
          *(_DWORD *)(v23 + 1936) = 1;
        }
        *(_DWORD *)(v23 + 1736) += 256;
      }
      goto LABEL_144;
    }
    v217 = (_QWORD *)*((_QWORD *)v49 + 1);
    v218 = *((unsigned int *)v49 + 4);
    v219 = v217;
    *(_DWORD *)(v23 + 1736) += v218;
    v220 = (const char *)v217;
    v221 = *(_DWORD *)(v23 + 1716);
    v222 = *(_QWORD *)(v23 + 1720);
    if ( v217 < (_QWORD *)((char *)v217 + v218) )
    {
      do
      {
        _mm_prefetch(v220, 0);
        v220 += 64;
      }
      while ( v220 < (const char *)v217 + v218 );
    }
    v223 = *(_QWORD *)(v23 + 1720);
    v224 = (unsigned int)v218 >> 7;
    if ( (unsigned int)v218 >> 7 )
    {
      do
      {
        v225 = 8LL;
        do
        {
          v226 = v219[1] ^ __ROL8__(*v219 ^ v223, v221);
          v219 += 2;
          v223 = __ROL8__(v226, v221);
          --v225;
        }
        while ( v225 );
        v227 = __ROL8__(v222 ^ ((char *)v219 - (char *)v217), 17) ^ v222 ^ ((char *)v219 - (char *)v217);
        v228 = (v227 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A0) = v228;
        v221 = ((unsigned __int8)(v228 ^ v227) ^ (unsigned __int8)v221) & 0x3F;
        if ( !v221 )
          LOBYTE(v221) = 1;
        --v224;
      }
      while ( v224 );
      v23 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
    }
    v229 = v218 & 0x7F;
    if ( v229 >= 8 )
    {
      v230 = (unsigned __int64)v229 >> 3;
      do
      {
        v223 = __ROL8__(*v219++ ^ v223, v221);
        v229 -= 8;
        --v230;
      }
      while ( v230 );
    }
    for ( ; v229; --v229 )
    {
      v231 = *(unsigned __int8 *)v219;
      v219 = (_QWORD *)((char *)v219 + 1);
      v223 = __ROL8__(v231 ^ v223, v221);
    }
    for ( i25 = v223; ; LODWORD(v223) = i25 ^ v223 )
    {
      i25 >>= 31;
      if ( !i25 )
        break;
    }
    v233 = *((_DWORD *)v49 + 5);
    v234 = v223 & 0x7FFFFFFF;
    if ( v234 != v233 )
    {
      v235 = *((unsigned int *)v49 + 4);
      v236 = *((_QWORD *)v49 + 1);
      if ( *((_DWORD *)v49 + 4) && (*(_DWORD *)(v23 + 2092) & 0x40) != 0 )
      {
        v237 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v238 = v236 & 0xFFFFFFFFFFFFF000uLL;
        v239 = (v236 + v235 - 1) | 0xFFF;
        v240 = (v236 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v207 = v237;
          while ( 1 )
          {
            v241 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v23 + 1128))(v238, 0LL);
            if ( v241 != -1073741267 )
              break;
            if ( v237 > 1u )
              goto LABEL_429;
            v207 = v237;
            __writecr8(v237);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v241 < 0 )
            break;
LABEL_429:
          v238 += 4096LL;
          v240 += 4096LL;
          if ( v240 == v239 )
          {
LABEL_383:
            __writecr8(v207);
            goto LABEL_328;
          }
        }
        __writecr8(v207);
        v49 = *(char **)v2;
        v45 = 0LL;
        v233 = *(_DWORD *)(*(_QWORD *)v2 + 20LL);
      }
      v209 = *(_DWORD *)(v23 + 1936);
      if ( !v209 )
      {
        v210 = v234;
        v211 = v233;
LABEL_387:
        *(_QWORD *)(*(_QWORD *)(v23 + 1416) + 24LL) = v211 ^ v210;
        v209 = *(_DWORD *)(v23 + 1936);
      }
LABEL_388:
      v212 = *((_QWORD *)v49 + 1);
      if ( v209 )
        goto LABEL_144;
      *(_QWORD *)(v23 + 1944) = v23 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v23 + 1952) = v49 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v23 + 1960) = *(int *)v49;
      *(_QWORD *)(v23 + 1968) = v212;
      goto LABEL_390;
    }
LABEL_144:
    v64 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) - 1;
    if ( !*(_DWORD *)(v23 + 1732) )
      v64 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x158);
    v30 = 1LL;
    Next = v64 + 1;
    if ( *(_DWORD *)(v23 + 1936) || *(_DWORD *)(v23 + 1736) >= *(_DWORD *)(v23 + 1740) )
      goto LABEL_2337;
    v44 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
    v43 = *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xBC);
  }
  ++*(_DWORD *)(v23 + 1744);
  Next = 0;
  if ( *(_DWORD *)(v23 + 2028) != 11 || (v1538 = *(_DWORD *)(v23 + 2088), (v1538 & 1) != 0) )
  {
LABEL_2337:
    v3 = a2;
    v16 = *(PSLIST_ENTRY *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
  }
  else
  {
    v16 = *(PSLIST_ENTRY *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
    v3 = a2;
    if ( *(_DWORD *)(v23 + 2056) == -1 )
      *(_DWORD *)(v23 + 2056) = 0;
    else
      *(_DWORD *)(v23 + 2088) = v1538 | 1;
  }
  v17 = *(PSLIST_ENTRY *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0);
LABEL_2339:
  *(_DWORD *)(v23 + 1728) = Next;
  if ( *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    (*(void (__fastcall **)(unsigned __int64))(v23 + 408))(v2 + 1432);
    (*(void (__fastcall **)(unsigned __int64))(v23 + 1088))(v2 + 1536);
    (*(void (__fastcall **)(_KPROCESS *))(v23 + 936))(Process);
    (*(void (__fastcall **)(_KPROCESS *))(v23 + 952))(Process);
  }
  if ( *(_DWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x104)
    && ((*(_DWORD *)(v23 + 2088) & 0x8000) != 0 || !*(_DWORD *)(v23 + 1936)) )
  {
    v1540 = *(_QWORD *)(v23 + 2072);
    *(_QWORD *)(v23 + 2072) = 0LL;
    (*(void (__fastcall **)(__int64, unsigned __int64))(v23 + 664))(v1540, v2 + 1536);
    v1541 = *(_DWORD *)(v23 + 2088);
    if ( (v1541 & 1) != 0 )
    {
      *(_DWORD *)(v23 + 2088) = v1541 & 0xFFFFFFFE;
      v1540 = (*(__int64 (__fastcall **)(__int64))(v23 + 640))(v1540);
      if ( v1540 )
        *(_DWORD *)(v23 + 2056) = (*(__int64 (__fastcall **)(__int64))(v23 + 672))(v1540);
      else
        *(_DWORD *)(v23 + 2056) = -1;
    }
    if ( v1540 )
      (*(void (__fastcall **)(__int64))(v23 + 648))(v1540);
  }
  if ( LODWORD(v17[121].Next) )
  {
    v1542 = *((_QWORD *)&v17[122].Next + 1);
    v1543 = v17[123].Next;
    v1544 = v17[122].Next;
    v1545 = *((_QWORD *)&v17[121].Next + 1);
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v1542;
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v1543;
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v1544;
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = v1545;
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) = v17;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1546 = KeGetCurrentPrcb();
    v1547 = KeGetCurrentThread();
    *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = v1547;
    DpcStack = (unsigned __int64)v1546->DpcStack;
    if ( !v1546->DpcRoutineActive || v2 + 232 > DpcStack || v2 + 232 < DpcStack - 24576 )
      DpcStack = (unsigned __int64)v1547->InitialStack;
    v1549 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8);
    if ( (*(_DWORD *)(v1549 + 2088) & 0x8000000) == 0 )
    {
      v1550 = __readcr0();
      *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1550;
      __writecr0(v1550 & 0xFFFFFFFFFFFEFFFFuLL);
      v1551 = v1549 + 2352;
      v1552 = 16LL * *(unsigned int *)(v1549 + 2344) + v1549 + 2352;
      v1553 = 0;
      v1554 = (_QWORD *)v1552;
      if ( *(_DWORD *)(v1549 + 2348) )
      {
        do
        {
          *(_QWORD *)*v1554 = v1554[1];
          v1555 = __readcr4();
          if ( (v1555 & 0x20080) != 0 )
          {
            __writecr4(v1555 ^ 0x80);
            __writecr4(v1555);
          }
          else
          {
            v1556 = __readcr3();
            __writecr3(v1556);
          }
          v1554 += 2;
          ++v1553;
        }
        while ( v1553 < *(_DWORD *)(v1549 + 2348) );
        v1542 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
        v1543 = *(_SLIST_ENTRY **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
      }
      if ( v1551 < v1552 )
      {
        do
        {
          v1557 = *(unsigned int *)(v1551 + 8);
          v1558 = v1554;
          v1559 = *(char **)v1551;
          v1560 = v1557;
          if ( (unsigned int)v1557 >= 8 )
          {
            v1561 = (unsigned __int64)(unsigned int)v1557 >> 3;
            do
            {
              v1560 -= 8;
              *(_QWORD *)v1559 = *v1558++;
              v1559 += 8;
              --v1561;
            }
            while ( v1561 );
          }
          if ( v1560 )
          {
            v1562 = v1559 - (char *)v1558;
            do
            {
              *((_BYTE *)v1558 + v1562) = *(_BYTE *)v1558;
              v1558 = (_QWORD *)((char *)v1558 + 1);
              --v1560;
            }
            while ( v1560 );
          }
          v1554 = (_QWORD *)((char *)v1554 + v1557);
          v1551 += 16LL;
        }
        while ( v1551 < v1552 );
        v1547 = *(struct _KTHREAD **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x178);
        v1550 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
        v1542 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
        v1543 = *(_SLIST_ENTRY **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 8);
        v1544 = *(_SLIST_ENTRY **)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
      }
      **(_BYTE **)(v1549 + 536) = -61;
      __writecr0(v1550);
      v1549 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8);
      v1545 = *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x138);
    }
    v1563 = *(_DWORD *)(v1549 + 1984);
    if ( v1563 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v1563 = *(_DWORD *)(v1549 + 1984);
      }
      if ( v1563 )
      {
        v1564 = v1563 - 1;
        if ( v1564 )
        {
          v1565 = v1564 - 1;
          if ( v1565 )
          {
            v1566 = v1565 - 1;
            if ( v1566 )
            {
              v1567 = v1566 - 1;
              if ( v1567 )
              {
                if ( v1567 == 1 )
                  _interlockedbittestandset(
                    &KeGetCurrentThread()->Header.Lock,
                    (*(_DWORD *)(v1549 + 2088) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v1549 + 1456) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                  (*(_DWORD *)(v1549 + 2088) >> 10) & 0x1F);
              }
              goto LABEL_2410;
            }
            v1568 = *(volatile signed __int32 **)(v1549 + 1368);
          }
          else
          {
            v1568 = *(volatile signed __int32 **)(v1549 + 1360);
          }
        }
        else
        {
          v1568 = *(volatile signed __int32 **)(v1549 + 1344);
        }
        _interlockedbittestandset64(v1568, 0LL);
      }
    }
LABEL_2410:
    v1547[1].QuantumTarget = 0LL;
    v1547[1].ApcState.ApcListHead[0].Blink = 0LL;
    SdbpCheckDll(
      265,
      v1545,
      (_DWORD)v1544,
      (_DWORD)v1543,
      v1542,
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) + 344LL),
      DpcStack);
    __debugbreak();
  }
  if ( HIDWORD(v17[108].Next) || LODWORD(v17[108].Next) )
  {
    v1569 = -1073741802;
    *(_DWORD *)v3 = v17[108].Next;
    *(_DWORD *)(v3 + 4) = HIDWORD(v17[108].Next);
  }
  else
  {
    v1569 = *(_QWORD *)(v3 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( *(_QWORD *)(((unsigned __int64)v1584 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) == 2424LL )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, v16);
  else
    ExFreePool(v16);
  return v1569;
}
