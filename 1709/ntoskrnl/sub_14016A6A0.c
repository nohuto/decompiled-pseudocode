/*
 * XREFs of sub_14016A6A0 @ 0x14016A6A0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     KeCheckProcessorGroupAffinity @ 0x1400A94D0 (KeCheckProcessorGroupAffinity.c)
 *     KeAreApcsDisabled @ 0x1400B0EF0 (KeAreApcsDisabled.c)
 *     KeVerifyGroupAffinity @ 0x1400B37AC (KeVerifyGroupAffinity.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     sub_14017573C @ 0x14017573C (sub_14017573C.c)
 *     sub_140175834 @ 0x140175834 (sub_140175834.c)
 *     sub_140176734 @ 0x140176734 (sub_140176734.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     KiGetNtDdiVersion @ 0x140203C3C (KiGetNtDdiVersion.c)
 *     sub_1402AE570 @ 0x1402AE570 (sub_1402AE570.c)
 *     sub_1402AEFBC @ 0x1402AEFBC (sub_1402AEFBC.c)
 *     sub_1402AF85C @ 0x1402AF85C (sub_1402AF85C.c)
 *     KiGetGdtIdt @ 0x1402B10E0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x1402B10F0 (KiGetLdtr.c)
 *     KiGetTr @ 0x1402B1100 (KiGetTr.c)
 *     KiErrata704Present @ 0x1402B1110 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x1402B11C0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x1402B1480 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x1402B15F8 (RtlInitMinimalBarrier.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 */

__int64 __fastcall sub_14016A6A0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  __int64 v3; // r12
  __int64 v5; // rdi
  int v7; // eax
  int v8; // esi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  SIZE_T v11; // r14
  _SLIST_ENTRY *PoolWithTag; // rax
  PSLIST_ENTRY v13; // rax
  PSLIST_ENTRY v14; // r15
  PSLIST_ENTRY v15; // r14
  __int64 v16; // rdx
  _SLIST_ENTRY *v17; // rax
  _SLIST_ENTRY *v18; // rcx
  _SLIST_ENTRY v19; // xmm1
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 Next_low; // rcx
  __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // ecx
  unsigned int v28; // r11d
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  unsigned __int64 v35; // rax
  unsigned __int128 v36; // rax
  unsigned __int64 v37; // rbx
  _BYTE *v38; // rax
  int v39; // ecx
  int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned int v42; // ebx
  unsigned int v43; // r14d
  unsigned int v44; // r12d
  unsigned int v45; // r15d
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // r9
  unsigned int v49; // r8d
  char *v50; // r13
  __int64 v51; // r10
  int v52; // ecx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  int v56; // r8d
  __int64 v57; // r9
  unsigned int v58; // eax
  unsigned __int64 v59; // r11
  int v60; // eax
  int v61; // r9d
  unsigned __int64 v62; // r10
  bool v63; // zf
  __int64 v64; // r8
  int v65; // esi
  unsigned int *v66; // rsi
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // r12
  __int64 v69; // r8
  _QWORD *v70; // r9
  const char *v71; // rax
  unsigned int v72; // r10d
  __int64 v73; // r13
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // rbx
  unsigned int v76; // r11d
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // r8
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int64 i; // rax
  unsigned int v83; // ebx
  unsigned __int8 v84; // r15
  unsigned __int64 v85; // r14
  __int64 v86; // r13
  unsigned __int64 v87; // r12
  int v88; // eax
  bool v89; // zf
  __int64 v90; // rax
  __int64 v91; // rcx
  _QWORD *v92; // rsi
  __int64 v93; // r8
  _QWORD *v94; // r9
  const char *v95; // rax
  int v96; // r10d
  __int64 v97; // r14
  unsigned __int64 v98; // rbx
  unsigned int v99; // r11d
  __int64 v100; // rax
  __int64 v101; // rbx
  unsigned __int128 v102; // rax
  unsigned int v103; // r8d
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 j; // rax
  unsigned int v107; // ebx
  __int64 v108; // rdx
  __int64 v109; // r8
  unsigned __int8 v110; // r14
  unsigned __int64 v111; // rsi
  __int64 v112; // r13
  unsigned __int64 v113; // r12
  int v114; // eax
  __int16 v115; // ax
  __int64 v116; // rcx
  int (__fastcall *v117)(_DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _DWORD *); // rax
  __int64 v118; // rcx
  unsigned int v119; // r14d
  __int64 v120; // rcx
  unsigned int v121; // r10d
  __int64 v122; // rcx
  unsigned __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // r8
  int v128; // eax
  int v129; // r12d
  bool v130; // zf
  unsigned __int64 v131; // rax
  unsigned __int128 v132; // rax
  void (*v133)(void); // rax
  __int64 v134; // rbx
  int v135; // esi
  _QWORD **v136; // rcx
  _QWORD *v137; // rax
  unsigned int **v138; // rax
  unsigned __int64 v139; // rbx
  __int64 v140; // r15
  unsigned __int64 v141; // r14
  __int64 *v142; // rax
  __int64 *v143; // r8
  unsigned __int64 v144; // rcx
  char v145; // dl
  __int64 v146; // rax
  bool v147; // zf
  int v148; // esi
  int v149; // esi
  void (*v150)(void); // rax
  int v151; // esi
  __int64 v152; // rbx
  _QWORD **v153; // rcx
  _QWORD *v154; // rax
  __int64 v155; // rcx
  __int64 CurrentIrql; // rbx
  _QWORD **v157; // r8
  _QWORD *v158; // rcx
  _QWORD *v159; // rdx
  _QWORD *v160; // rsi
  __int64 v161; // r8
  _QWORD *v162; // r9
  const char *v163; // rax
  unsigned int v164; // r11d
  __int64 v165; // r14
  unsigned __int64 v166; // rbx
  unsigned int v167; // r10d
  __int64 v168; // rdx
  __int64 v169; // rax
  __int64 v170; // rbx
  __int64 v171; // rdx
  unsigned int v172; // r8d
  unsigned __int64 v173; // rdx
  __int64 v174; // rax
  unsigned __int64 k; // rax
  unsigned int v176; // ebx
  __int64 v177; // rdx
  __int64 v178; // r8
  unsigned __int8 v179; // r14
  unsigned __int64 v180; // rsi
  __int64 v181; // r13
  unsigned __int64 v182; // r12
  int v183; // eax
  __int64 v184; // rax
  __int64 v185; // rcx
  unsigned int v186; // eax
  unsigned __int64 v187; // rbx
  unsigned __int64 v188; // rsi
  _QWORD *v189; // rsi
  __int64 v190; // r8
  _QWORD *v191; // r9
  const char *v192; // rax
  unsigned int v193; // r11d
  unsigned __int64 v194; // r14
  unsigned __int64 v195; // rbx
  unsigned int v196; // r10d
  __int64 v197; // rax
  __int64 v198; // rbx
  __int64 v199; // rdx
  unsigned int v200; // r8d
  unsigned __int64 v201; // rax
  __int64 v202; // rax
  unsigned __int64 m; // rax
  unsigned int v204; // ebx
  __int64 v205; // rdx
  __int64 v206; // r8
  unsigned __int64 v207; // rsi
  __int64 v208; // r12
  unsigned __int64 v209; // r15
  int v210; // eax
  _QWORD **v211; // r15
  __int64 (*v212)(void); // rax
  __int64 v213; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v215; // rdx
  unsigned int v216; // r13d
  unsigned int *v217; // rcx
  __int64 v218; // r12
  _QWORD *v219; // rax
  __int64 v220; // r8
  unsigned __int64 v221; // rax
  __int64 v222; // rcx
  unsigned __int128 v223; // rt2
  int v224; // ebx
  unsigned __int64 v225; // rax
  unsigned __int128 v226; // rax
  unsigned __int64 v227; // rsi
  __int64 v228; // rax
  __int64 v229; // r11
  int v230; // r10d
  _QWORD *v231; // r9
  unsigned __int64 v232; // r8
  unsigned __int64 v233; // rax
  unsigned __int128 v234; // rax
  unsigned __int64 v235; // rax
  unsigned __int128 v236; // rax
  unsigned __int64 v237; // rdx
  unsigned int v238; // ebx
  _QWORD *v239; // r8
  unsigned __int64 v240; // rax
  unsigned __int128 v241; // rax
  unsigned __int64 v242; // rax
  unsigned __int128 v243; // rax
  unsigned __int64 v244; // rdx
  __int64 v245; // r14
  _QWORD *v246; // rbx
  __int64 v247; // rsi
  unsigned __int64 v248; // rsi
  unsigned __int64 v249; // r15
  unsigned __int64 v250; // rbx
  int v251; // edx
  int v252; // r8d
  int v253; // ecx
  unsigned __int64 v254; // r9
  int *v255; // rcx
  unsigned __int64 v256; // rax
  unsigned __int128 v257; // rax
  int v258; // ecx
  int v259; // ecx
  int v260; // ecx
  char *v261; // rbx
  int ii; // r13d
  unsigned int v263; // esi
  __int64 v264; // r14
  _QWORD *v265; // rcx
  int v266; // edx
  __int64 v267; // r8
  char v268; // al
  __int64 v269; // rax
  __int64 v270; // rcx
  __int64 (__fastcall *v271)(_QWORD); // rax
  __int64 v272; // r14
  char *v273; // r12
  char *v274; // rbx
  int v275; // r15d
  __int64 v276; // rsi
  _QWORD *v277; // rcx
  int v278; // edx
  __int64 v279; // r8
  char v280; // al
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 (__fastcall *v283)(__int64); // rax
  _BYTE *v284; // r12
  __int64 *v285; // rax
  __int64 v286; // rbx
  __int64 v287; // rax
  __int64 v288; // rax
  __int64 v289; // rax
  __int64 (__fastcall *v290)(__int64, _DWORD *, _DWORD *); // rax
  __int64 v291; // rax
  __int64 v292; // r13
  __int64 v293; // r14
  _BYTE *v294; // rax
  int v295; // r15d
  __int64 v296; // r9
  int v297; // ecx
  __int64 v298; // rdx
  unsigned int v299; // esi
  int v300; // r10d
  unsigned int v301; // r11d
  __int64 v302; // rbx
  int *v303; // r8
  __int64 v304; // r9
  int v305; // ecx
  int v306; // ecx
  int v307; // ecx
  int v308; // ecx
  __int64 v309; // rax
  int v310; // eax
  unsigned __int64 v311; // rcx
  __int64 v312; // r11
  int v313; // eax
  __int64 v314; // rdx
  int v315; // esi
  unsigned int v316; // eax
  __int64 (__fastcall *v317)(__int64, __int64, _QWORD, _DWORD *); // rax
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rdx
  __int64 (__fastcall *v322)(__int64, __int64, __int64, _DWORD *); // rax
  __int64 v323; // rax
  __int64 v324; // rdx
  int v325; // ecx
  __int64 (__fastcall *v326)(_QWORD, __int64, __int64, _DWORD *); // rax
  __int64 v327; // rax
  __int64 v328; // rcx
  int v329; // edx
  __int64 (__fastcall *v330)(__int64); // rax
  __int64 v331; // rax
  __int64 v332; // r14
  __int64 v333; // r8
  unsigned int v334; // eax
  int v335; // r9d
  __int64 v336; // rax
  __int64 v337; // rbx
  int v338; // r8d
  __int64 v339; // rdx
  __int64 v340; // r10
  _QWORD *v341; // rax
  int v342; // r9d
  unsigned __int64 v343; // rcx
  int v344; // esi
  int v345; // ecx
  __int64 v346; // r15
  _QWORD *v347; // r13
  unsigned int *v348; // rdi
  __int64 v349; // r12
  int v350; // ecx
  _QWORD *v351; // rsi
  _QWORD *v352; // rax
  __int64 v353; // rdx
  _QWORD *v354; // r9
  const char *v355; // rax
  int v356; // r14d
  __int64 v357; // r11
  unsigned __int64 v358; // r8
  unsigned int v359; // r10d
  __int64 v360; // rax
  __int64 v361; // r8
  unsigned __int64 v362; // rcx
  __int64 v363; // rdx
  unsigned int v364; // edx
  unsigned __int64 v365; // rax
  __int64 v366; // rax
  unsigned __int64 jj; // rax
  __int64 v368; // rcx
  __int64 v369; // rax
  int v370; // r13d
  __int64 v371; // r9
  int v372; // r8d
  __int64 v373; // rdx
  int v374; // eax
  _BYTE *v375; // rcx
  unsigned int v376; // ebx
  _QWORD *v377; // rsi
  _BYTE *v378; // r15
  int v379; // ecx
  _QWORD *v380; // rax
  __int64 v381; // rdx
  _QWORD *v382; // r9
  const char *v383; // rax
  int v384; // r11d
  __int64 v385; // r14
  unsigned __int64 v386; // rcx
  unsigned __int64 v387; // r8
  unsigned int v388; // r10d
  __int64 v389; // rax
  __int64 v390; // r8
  unsigned __int64 v391; // rcx
  __int64 v392; // rdx
  char v393; // r11
  __int64 v394; // rdx
  unsigned int v395; // ebx
  unsigned __int64 v396; // rax
  __int64 v397; // rax
  unsigned __int64 kk; // rax
  int *v399; // rcx
  int v400; // r15d
  __int64 v401; // r14
  unsigned int v402; // eax
  _BYTE *v403; // rbx
  int v404; // edx
  unsigned int v405; // eax
  __int64 v406; // r9
  int v407; // r8d
  unsigned __int64 v408; // rcx
  int v409; // esi
  int v410; // ecx
  _BYTE *v411; // r14
  _QWORD *v412; // rax
  int v413; // ecx
  __int64 v414; // rdx
  _QWORD *v415; // r12
  unsigned int v416; // r15d
  const char *v417; // rax
  int v418; // r11d
  __int64 v419; // rsi
  unsigned __int64 v420; // rcx
  unsigned int v421; // r10d
  __int64 v422; // rax
  __int64 v423; // r8
  unsigned __int64 v424; // rcx
  __int64 v425; // rdx
  unsigned __int64 v426; // rax
  __int64 v427; // rax
  unsigned __int64 i3; // rax
  __int64 v429; // rax
  __int64 v430; // rsi
  unsigned __int64 v431; // r14
  __int64 v432; // r15
  __int64 v433; // rax
  __int64 v434; // rcx
  unsigned __int64 v435; // rcx
  _QWORD *v436; // rax
  _QWORD *v437; // rax
  ULONG_PTR v438; // rsi
  __int64 v439; // rax
  __int64 v440; // r14
  unsigned __int16 v441; // r12
  unsigned __int128 v442; // rax
  unsigned int v443; // r9d
  unsigned int *v444; // r15
  __int64 v445; // r13
  unsigned int v446; // edx
  __int64 v447; // r11
  _DWORD *v448; // r13
  unsigned int v449; // ecx
  unsigned int v450; // r8d
  unsigned int v451; // r12d
  unsigned int v452; // eax
  __int64 v453; // rax
  unsigned int v454; // ecx
  unsigned int v455; // r14d
  unsigned int v456; // esi
  unsigned int *v457; // rax
  ULONG_PTR v458; // r10
  unsigned int *v459; // rax
  unsigned int v460; // eax
  __int64 v461; // r10
  __int64 v462; // r14
  __int16 v463; // r12
  __int64 v464; // r13
  __int64 v465; // rsi
  unsigned int v466; // eax
  __int64 v467; // rax
  _BYTE *v468; // r11
  int v469; // r8d
  unsigned int v470; // edx
  __int64 v471; // r10
  int v472; // r9d
  unsigned __int64 v473; // rax
  int v474; // ebx
  int v475; // ecx
  _BYTE *v476; // rdx
  _QWORD *v477; // rax
  int v478; // ecx
  __int64 v479; // r8
  __int64 v480; // rax
  unsigned __int64 v481; // rcx
  unsigned __int64 mm; // rax
  __int64 v483; // r8
  __int64 v484; // rax
  __int64 v485; // rcx
  __int64 v486; // rax
  unsigned __int64 v487; // r15
  unsigned int *v488; // r10
  unsigned __int64 v489; // rsi
  __int64 v490; // rcx
  __int64 v491; // rdx
  _DWORD *v492; // rax
  __int64 v493; // rcx
  unsigned __int8 *v494; // r12
  int v495; // r14d
  int v496; // ecx
  __int16 v497; // ax
  unsigned __int8 *v498; // r8
  unsigned __int8 *v499; // r9
  __int64 *v500; // r10
  unsigned __int8 *v501; // rbx
  unsigned __int8 *v502; // rsi
  int v503; // r11d
  __int64 v504; // rdx
  __int64 v505; // rax
  unsigned int v506; // r8d
  __int64 *v507; // r9
  __int64 v508; // rcx
  __int64 v509; // rax
  __int64 v510; // rdx
  __int64 v511; // rax
  int v512; // r9d
  unsigned __int8 *v513; // r8
  __int64 v514; // rdx
  __int64 v515; // rax
  int v516; // r9d
  unsigned __int8 *v517; // r8
  __int64 v518; // rdx
  __int64 v519; // rax
  int v520; // ecx
  unsigned int v521; // ecx
  unsigned int v522; // esi
  unsigned int *v523; // rax
  unsigned int v524; // ecx
  unsigned int v525; // r15d
  unsigned int v526; // r12d
  unsigned int v527; // r13d
  bool v528; // cf
  unsigned int *v529; // rax
  unsigned int v530; // r10d
  unsigned int *v531; // rdx
  __int64 v532; // rax
  unsigned int v533; // r9d
  unsigned __int64 v534; // rbx
  unsigned __int64 v535; // r11
  unsigned __int64 *v536; // r8
  __int64 v537; // rsi
  _QWORD *v538; // r10
  const char *v539; // rax
  int v540; // r14d
  unsigned __int64 v541; // rsi
  unsigned int v542; // r11d
  unsigned __int64 v543; // r8
  __int64 v544; // rax
  __int64 v545; // r8
  unsigned __int64 v546; // rcx
  __int64 v547; // rdx
  unsigned int v548; // r9d
  unsigned __int64 v549; // rax
  __int64 v550; // rax
  unsigned __int64 nn; // rax
  bool v552; // cc
  int v553; // r12d
  unsigned int *v554; // rsi
  unsigned int v555; // r15d
  _BYTE *v556; // r14
  __int64 v557; // rcx
  __int64 v558; // rax
  unsigned __int64 *v559; // r8
  unsigned int v560; // r9d
  unsigned __int64 v561; // rbx
  unsigned int v562; // r10d
  unsigned int *v563; // rdx
  unsigned __int64 v564; // r11
  __int64 v565; // rsi
  _QWORD *v566; // r10
  const char *v567; // rax
  int v568; // r14d
  unsigned __int64 v569; // rsi
  unsigned int v570; // r11d
  unsigned __int64 v571; // r8
  __int64 v572; // rax
  __int64 v573; // r8
  unsigned __int64 v574; // rcx
  __int64 v575; // rdx
  unsigned int v576; // r9d
  unsigned __int64 v577; // rax
  __int64 v578; // rax
  unsigned __int64 i1; // rax
  _DWORD *v580; // r15
  unsigned __int64 *v581; // r8
  unsigned int v582; // r9d
  unsigned __int64 v583; // rbx
  unsigned int v584; // r10d
  unsigned int *v585; // rdx
  unsigned __int64 v586; // r11
  __int64 v587; // rax
  _QWORD *v588; // r10
  int v589; // r14d
  unsigned __int64 v590; // rsi
  const char *v591; // rax
  unsigned __int64 v592; // r8
  unsigned int v593; // r11d
  __int64 v594; // rax
  __int64 v595; // r8
  _QWORD *v596; // r10
  __int64 v597; // r8
  unsigned __int64 v598; // rcx
  __int64 v599; // rdx
  unsigned int v600; // r9d
  unsigned __int64 v601; // rax
  __int64 v602; // rax
  unsigned __int64 i2; // rax
  unsigned int *v604; // rdx
  unsigned int *v605; // rcx
  _BYTE *v606; // rax
  _DWORD *v607; // r15
  __int64 v608; // rdx
  _BYTE *v609; // rax
  _BYTE *v610; // rdx
  char *v611; // rbx
  __int64 v612; // r12
  int i4; // eax
  __int64 v614; // rdx
  __int64 v615; // r8
  __int64 v616; // rsi
  __int64 v617; // r14
  __int64 v618; // r8
  int v619; // edx
  __int64 v620; // r8
  char v621; // al
  __int64 v622; // rax
  __int64 v623; // rax
  char *v624; // rbx
  __int64 v625; // r14
  __int64 v626; // rsi
  _QWORD *v627; // rcx
  int v628; // edx
  __int64 v629; // r8
  char v630; // al
  __int64 v631; // rax
  __int64 v632; // rax
  char *v633; // rbx
  _QWORD *v634; // rcx
  int v635; // edx
  __int64 v636; // r8
  char v637; // al
  __int64 v638; // rax
  __int64 v639; // rax
  __int64 v640; // rsi
  int v641; // ebx
  unsigned __int64 v642; // rbx
  _DWORD *v643; // rcx
  __int64 v644; // rdx
  unsigned __int64 v645; // r8
  __int64 v646; // rsi
  __int64 v647; // rbx
  unsigned __int64 v648; // rax
  __int64 v649; // rcx
  unsigned __int64 v650; // rcx
  _QWORD *v651; // rsi
  __int64 v652; // r8
  _QWORD *v653; // r9
  const char *v654; // rax
  unsigned int v655; // r10d
  __int64 v656; // r14
  unsigned __int64 v657; // rbx
  unsigned int v658; // r11d
  __int64 v659; // rax
  __int64 v660; // rbx
  unsigned int v661; // r8d
  unsigned __int64 v662; // rax
  __int64 v663; // rax
  unsigned __int64 n; // rax
  unsigned int v665; // ebx
  __int64 v666; // rdx
  __int64 v667; // r8
  unsigned __int8 v668; // r14
  unsigned __int64 v669; // rsi
  __int64 v670; // r12
  unsigned __int64 v671; // r15
  int v672; // eax
  __int64 v673; // r8
  unsigned int v674; // r8d
  __int64 *v675; // r9
  unsigned __int64 *v676; // r10
  __int64 v677; // rax
  __int64 v678; // rdx
  __int64 v679; // rax
  __int64 v680; // rdx
  __int64 v681; // r8
  unsigned __int8 v682; // si
  unsigned __int64 v683; // rbx
  __int64 v684; // r15
  unsigned __int64 v685; // r14
  int v686; // eax
  __int64 v687; // r14
  void (__fastcall *v688)(unsigned __int64, __int64); // rax
  __int64 v689; // rbx
  _QWORD *v690; // r15
  _QWORD **v691; // rcx
  _QWORD *v692; // rax
  _QWORD **v693; // r9
  _QWORD *v694; // r8
  __int64 v695; // rdx
  __int64 v696; // rcx
  int v697; // eax
  __int64 v698; // rbx
  int v699; // r12d
  __int64 v700; // rcx
  char *v701; // r15
  _QWORD *v702; // r14
  unsigned __int8 v703; // bl
  unsigned __int8 v704; // r13
  int *v705; // r10
  char v706; // dl
  char v707; // r9
  __int64 v708; // r8
  unsigned __int64 v709; // rcx
  char v710; // al
  unsigned __int64 v711; // rdx
  _QWORD *v712; // rbx
  __int64 v713; // r14
  __int64 v714; // rdx
  unsigned __int64 v715; // r12
  __int64 v716; // rcx
  _QWORD *v717; // rcx
  __int64 v718; // r8
  char v719; // al
  char *v720; // r15
  unsigned __int8 v721; // bl
  unsigned __int8 v722; // r13
  int *v723; // r10
  char v724; // dl
  char v725; // r9
  __int64 v726; // r8
  unsigned __int64 v727; // rcx
  _QWORD *v728; // rbx
  __int64 v729; // r14
  __int64 v730; // rdx
  unsigned __int64 v731; // r12
  __int64 v732; // rcx
  _QWORD *v733; // rcx
  __int64 v734; // r8
  char v735; // al
  __int64 v736; // rax
  __int64 v737; // rsi
  __int64 v738; // r14
  unsigned __int8 v739; // bl
  unsigned __int8 v740; // r12
  __int64 v741; // r13
  int *v742; // r10
  char v743; // dl
  char v744; // r9
  __int64 v745; // r8
  unsigned __int64 v746; // rcx
  _QWORD *v747; // rsi
  _QWORD *v748; // rbx
  char *v749; // rsi
  __int64 v750; // rdx
  unsigned __int64 v751; // r15
  __int64 v752; // rcx
  _QWORD *v753; // rcx
  int v754; // edx
  __int64 v755; // r8
  char v756; // al
  __int64 v757; // rbx
  __int64 v758; // r8
  unsigned __int64 v759; // rcx
  __int64 v760; // r9
  _DWORD *v761; // r10
  unsigned __int64 v762; // r11
  __int64 v763; // rax
  unsigned int v764; // ebx
  char *v765; // r15
  unsigned __int64 v766; // rdx
  __int64 v767; // rax
  unsigned __int64 v768; // rdx
  unsigned int v769; // eax
  __int64 v770; // r9
  __int64 v771; // r14
  unsigned __int64 v772; // r13
  _QWORD *v773; // r10
  int v774; // ebx
  const char *v775; // rax
  __int64 v776; // rsi
  unsigned __int64 v777; // r8
  unsigned int v778; // r11d
  __int64 v779; // rdx
  __int64 v780; // rax
  __int64 v781; // r8
  unsigned __int64 v782; // rcx
  __int64 v783; // rdx
  unsigned int v784; // r9d
  __int64 v785; // rax
  unsigned __int64 i10; // rax
  unsigned int v787; // r12d
  unsigned __int8 v788; // si
  unsigned __int64 v789; // rbx
  __int64 v790; // r15
  unsigned __int64 v791; // r14
  int v792; // eax
  int *v793; // rcx
  int *v794; // r14
  __int64 v795; // r12
  __int64 v796; // r13
  __int64 v797; // r8
  __int64 v798; // r15
  unsigned __int64 v799; // r13
  _QWORD *v800; // r9
  int v801; // r11d
  const char *v802; // rax
  __int64 v803; // rsi
  unsigned __int64 v804; // rbx
  unsigned int v805; // r10d
  __int64 v806; // rdx
  __int64 v807; // rax
  __int64 v808; // rbx
  unsigned __int64 v809; // rcx
  __int64 v810; // rdx
  __int64 v811; // r8
  unsigned __int64 v812; // rdx
  __int64 v813; // rax
  unsigned __int64 i9; // rax
  unsigned int v815; // ebx
  unsigned __int8 v816; // r14
  unsigned __int64 v817; // rsi
  __int64 v818; // r12
  unsigned __int64 v819; // r15
  int v820; // eax
  __int64 v821; // rcx
  __int64 v822; // rax
  int *v823; // rcx
  _QWORD *v824; // rsi
  __int64 v825; // r8
  _QWORD *v826; // r9
  const char *v827; // rax
  int v828; // r10d
  __int64 v829; // r14
  unsigned __int64 v830; // rbx
  unsigned int v831; // r11d
  __int64 v832; // rax
  __int64 v833; // rbx
  unsigned __int128 v834; // rax
  __int64 v835; // r8
  unsigned __int64 v836; // rax
  __int64 v837; // rax
  unsigned __int64 i11; // rax
  unsigned int v839; // ebx
  __int64 v840; // rdx
  unsigned __int8 v841; // r14
  unsigned __int64 v842; // rsi
  __int64 v843; // r13
  unsigned __int64 v844; // r12
  int v845; // eax
  __int64 **v846; // r15
  unsigned int v847; // eax
  __int64 v848; // r13
  int v849; // r12d
  char *v850; // rbx
  __int64 v851; // r14
  __int64 v852; // rax
  __int64 v853; // rsi
  _QWORD *v854; // rcx
  int v855; // edx
  __int64 v856; // r8
  char v857; // al
  __int64 v858; // rax
  __int64 v859; // rax
  __int64 v860; // rcx
  __int64 v861; // r8
  __int16 v862; // ax
  __int64 v863; // rcx
  int (__fastcall *v864)(_DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _DWORD *); // rax
  __int64 v865; // rax
  __int64 v866; // rax
  __int64 v867; // rcx
  unsigned __int8 v868; // dl
  unsigned __int64 v869; // r10
  unsigned __int64 v870; // r11
  __int64 v871; // r15
  unsigned __int64 v872; // r9
  _QWORD *v873; // rsi
  __int64 v874; // r9
  _QWORD *v875; // r10
  const char *v876; // rax
  int v877; // r11d
  __int64 v878; // r14
  unsigned int v879; // ebx
  unsigned __int64 v880; // r8
  __int64 v881; // rax
  __int64 v882; // r8
  unsigned __int128 v883; // rax
  unsigned int v884; // r9d
  unsigned __int64 v885; // rax
  __int64 v886; // rax
  unsigned __int64 i12; // rax
  unsigned int v888; // r10d
  unsigned int *v889; // rsi
  unsigned __int8 v890; // r8
  unsigned int v891; // r9d
  unsigned __int64 v892; // r11
  unsigned __int64 v893; // rbx
  unsigned int *v894; // r9
  unsigned int v895; // r11d
  const char *v896; // rax
  __int64 v897; // r14
  unsigned int v898; // ebx
  unsigned __int64 v899; // r8
  __int64 v900; // rax
  __int64 v901; // r8
  unsigned int v902; // r10d
  unsigned __int64 v903; // rax
  __int64 v904; // rax
  unsigned __int64 i13; // rax
  __int64 v906; // rax
  _QWORD *v907; // rcx
  int v908; // edx
  __int64 v909; // r8
  char v910; // al
  __int64 v911; // rax
  _QWORD *v912; // rsi
  _QWORD *v913; // r9
  int v914; // r10d
  const char *v915; // rax
  __int64 v916; // r14
  unsigned __int64 v917; // rbx
  unsigned int v918; // r11d
  __int64 v919; // rax
  __int64 v920; // rbx
  unsigned __int128 v921; // rax
  unsigned int v922; // r8d
  unsigned __int64 v923; // rax
  __int64 v924; // rax
  unsigned __int64 i14; // rax
  unsigned int v926; // ebx
  __int64 v927; // rdx
  __int64 v928; // r8
  unsigned __int8 v929; // r14
  unsigned __int64 v930; // rsi
  __int64 v931; // r13
  unsigned __int64 v932; // r12
  int v933; // eax
  unsigned int v934; // r9d
  __int64 v935; // rax
  unsigned int *v936; // rsi
  unsigned int *v937; // r10
  unsigned int v938; // r11d
  const char *v939; // rax
  __int64 v940; // r14
  unsigned __int64 v941; // r8
  unsigned int v942; // ebx
  __int64 v943; // rax
  __int64 v944; // r8
  __int64 v945; // rcx
  unsigned int v946; // r9d
  unsigned __int64 v947; // rax
  __int64 v948; // rax
  unsigned __int64 i15; // rax
  __int64 v950; // rax
  unsigned int v951; // r8d
  void (__fastcall *v952)(unsigned __int64, __int64); // rax
  __int64 v953; // r15
  _QWORD *v954; // r14
  __int64 v955; // rbx
  _QWORD **v956; // rdx
  _QWORD *v957; // rcx
  _QWORD **v958; // r9
  _QWORD *v959; // rdx
  _QWORD *v960; // r8
  _QWORD *v961; // rax
  unsigned int v962; // eax
  unsigned int v963; // eax
  unsigned __int64 v964; // rbx
  unsigned __int64 v965; // rsi
  _QWORD *v966; // rsi
  __int64 v967; // r8
  _QWORD *v968; // r9
  const char *v969; // rax
  unsigned int v970; // r10d
  __int64 v971; // r14
  unsigned __int64 v972; // rbx
  unsigned int v973; // r11d
  __int64 v974; // rax
  __int64 v975; // rbx
  unsigned int v976; // r8d
  unsigned __int64 v977; // rax
  __int64 v978; // rax
  unsigned __int64 i16; // rax
  unsigned int v980; // ebx
  __int64 v981; // rdx
  __int64 v982; // r8
  unsigned __int8 v983; // r14
  unsigned __int64 v984; // rsi
  __int64 v985; // r12
  unsigned __int64 v986; // r15
  int v987; // eax
  __int64 v988; // rax
  __int64 v989; // rcx
  _QWORD *v990; // rsi
  __int64 v991; // r8
  _QWORD *v992; // r9
  const char *v993; // rax
  unsigned int v994; // r10d
  __int64 v995; // r14
  unsigned __int64 v996; // rbx
  unsigned int v997; // r11d
  __int64 v998; // rax
  __int64 v999; // rbx
  unsigned int v1000; // r8d
  unsigned __int64 v1001; // rax
  __int64 v1002; // rax
  unsigned __int64 i17; // rax
  unsigned int v1004; // ebx
  __int64 v1005; // rdx
  __int64 v1006; // r8
  unsigned __int64 v1007; // rsi
  __int64 v1008; // r13
  unsigned __int64 v1009; // r12
  int v1010; // eax
  int v1011; // eax
  __int64 v1012; // rdx
  __int64 v1013; // r8
  __int64 v1014; // rax
  __int64 v1015; // r8
  __int64 v1016; // rax
  _QWORD *v1017; // rbx
  int v1018; // ecx
  unsigned int v1019; // eax
  unsigned int v1020; // eax
  unsigned __int64 v1021; // rbx
  unsigned __int64 v1022; // rsi
  _QWORD *v1023; // rsi
  __int64 v1024; // r8
  _QWORD *v1025; // r9
  const char *v1026; // rax
  unsigned int v1027; // r11d
  __int64 v1028; // r14
  unsigned __int64 v1029; // rbx
  unsigned int v1030; // r10d
  __int64 v1031; // rdx
  __int64 v1032; // rax
  __int64 v1033; // rbx
  unsigned int v1034; // r8d
  __int64 v1035; // rax
  unsigned __int64 i22; // rax
  unsigned int v1037; // ebx
  __int64 v1038; // r8
  unsigned __int8 v1039; // r14
  unsigned __int64 v1040; // rsi
  __int64 v1041; // r12
  unsigned __int64 v1042; // r15
  int v1043; // eax
  _QWORD *v1044; // rsi
  __int64 v1045; // r8
  _QWORD *v1046; // r9
  const char *v1047; // rax
  unsigned int v1048; // r10d
  __int64 v1049; // r14
  unsigned __int64 v1050; // rbx
  unsigned int v1051; // r11d
  __int64 v1052; // rax
  __int64 v1053; // rbx
  unsigned int v1054; // r8d
  unsigned __int64 v1055; // rax
  __int64 v1056; // rax
  unsigned __int64 i23; // rax
  unsigned int v1058; // ebx
  __int64 v1059; // r8
  unsigned __int64 v1060; // rsi
  __int64 v1061; // r13
  unsigned __int64 v1062; // r12
  int v1063; // eax
  __int64 v1064; // r13
  __int64 v1065; // rax
  unsigned int *v1066; // r14
  __int64 v1067; // rax
  unsigned int *v1068; // rax
  unsigned int v1069; // r15d
  int v1070; // edi
  unsigned int v1071; // eax
  unsigned int v1072; // r11d
  unsigned int v1073; // r12d
  __int16 v1074; // ax
  unsigned __int8 *v1075; // r8
  __int128 v1076; // xmm1
  int v1077; // r10d
  unsigned int *v1078; // r9
  __int64 v1079; // rdx
  __int64 v1080; // rax
  unsigned int *v1081; // rax
  __int64 *v1082; // r9
  unsigned int v1083; // r8d
  unsigned __int64 *v1084; // r10
  __int64 v1085; // rax
  __int64 v1086; // rdx
  __int64 v1087; // rax
  unsigned __int8 *v1088; // r8
  int v1089; // r10d
  unsigned int *v1090; // r9
  __int64 v1091; // rdx
  __int64 v1092; // rax
  unsigned __int8 *v1093; // r8
  int v1094; // r10d
  unsigned __int8 *v1095; // r9
  __int64 v1096; // rdx
  __int64 v1097; // rax
  int v1098; // eax
  BOOL v1099; // esi
  __int64 v1100; // rdi
  int *v1101; // r14
  __int64 v1102; // rbx
  int v1103; // eax
  unsigned __int64 v1104; // rax
  unsigned __int8 v1105; // bl
  unsigned int v1106; // eax
  __int64 v1107; // r14
  __int64 v1108; // rbx
  unsigned __int64 v1109; // rsi
  __int64 v1110; // rbx
  unsigned __int64 v1111; // rbx
  __int64 v1112; // rcx
  unsigned __int8 v1113; // r15
  __int64 v1114; // rdx
  unsigned int *v1115; // rcx
  unsigned int *v1116; // rbx
  char v1117; // r12
  unsigned __int64 v1118; // r14
  __int64 v1119; // r8
  __int64 *v1120; // r9
  unsigned int *v1121; // r10
  __int64 v1122; // rcx
  __int64 v1123; // rax
  __int64 v1124; // rax
  int v1125; // ecx
  unsigned __int64 v1126; // rbx
  unsigned __int64 i5; // rsi
  _QWORD *v1128; // rsi
  __int64 v1129; // r8
  _QWORD *v1130; // r9
  const char *v1131; // rax
  int v1132; // r10d
  __int64 v1133; // r14
  unsigned __int64 v1134; // rbx
  unsigned int v1135; // r11d
  __int64 v1136; // rax
  __int64 v1137; // rbx
  unsigned __int128 v1138; // rax
  unsigned int v1139; // r8d
  unsigned __int64 v1140; // rax
  __int64 v1141; // rax
  unsigned __int64 i6; // rax
  unsigned int v1143; // ebx
  __int64 v1144; // rdx
  __int64 v1145; // r8
  unsigned __int8 v1146; // r14
  unsigned __int64 v1147; // rsi
  __int64 v1148; // r12
  unsigned __int64 v1149; // r15
  int v1150; // eax
  __int64 v1151; // r9
  __int64 v1152; // r8
  unsigned __int64 v1153; // rcx
  unsigned int *v1154; // r14
  unsigned int *v1155; // rdx
  int *v1156; // rbx
  unsigned int v1157; // r12d
  unsigned __int64 v1158; // r13
  unsigned __int64 v1159; // r8
  __int64 v1160; // r9
  const char *v1161; // rax
  __int64 v1162; // r11
  unsigned __int64 v1163; // rcx
  unsigned __int64 v1164; // rsi
  unsigned int v1165; // r10d
  __int64 v1166; // rax
  __int64 v1167; // rsi
  unsigned __int128 v1168; // rax
  unsigned int v1169; // edx
  unsigned __int64 v1170; // rax
  __int64 v1171; // rax
  unsigned __int64 i8; // rax
  __int64 v1173; // rcx
  _QWORD *v1174; // rsi
  __int64 v1175; // r8
  _QWORD *v1176; // r9
  const char *v1177; // rax
  int v1178; // r10d
  __int64 v1179; // r14
  unsigned __int64 v1180; // rbx
  unsigned int v1181; // r11d
  __int64 v1182; // rax
  __int64 v1183; // rbx
  unsigned __int128 v1184; // rax
  unsigned int v1185; // r8d
  unsigned __int64 v1186; // rax
  __int64 v1187; // rax
  unsigned __int64 i7; // rax
  __int64 v1189; // rdx
  __int64 v1190; // r8
  unsigned __int64 v1191; // rsi
  __int64 v1192; // r13
  unsigned __int64 v1193; // r12
  int v1194; // eax
  unsigned int v1195; // esi
  _BYTE *v1196; // r14
  _BYTE *v1197; // rbx
  char v1198; // al
  volatile signed __int32 *v1199; // r15
  __int64 CurrentPrcb; // rdx
  _QWORD *v1201; // rax
  int v1202; // ecx
  __int128 v1203; // xmm0
  unsigned __int64 v1204; // rcx
  unsigned __int8 v1205; // r14
  unsigned __int64 v1206; // rbx
  __int64 v1207; // r12
  unsigned __int64 v1208; // r15
  int v1209; // eax
  __int64 v1210; // rax
  int *v1211; // rcx
  bool v1212; // zf
  __int64 v1213; // rcx
  unsigned __int8 v1214; // r15
  __int64 v1215; // rdx
  int *v1216; // r13
  unsigned int *v1217; // rcx
  unsigned int *v1218; // rbx
  char v1219; // r12
  unsigned __int64 v1220; // r14
  __int64 v1221; // r8
  __int64 *v1222; // r9
  unsigned int *v1223; // r10
  __int64 v1224; // rcx
  __int64 v1225; // rax
  __int64 v1226; // rax
  __int64 v1227; // r9
  _QWORD *v1228; // r11
  int v1229; // esi
  _QWORD *v1230; // r10
  __int64 v1231; // r14
  const char *v1232; // rax
  __int64 v1233; // r8
  unsigned int v1234; // ebx
  __int64 v1235; // rax
  __int64 v1236; // r8
  unsigned __int64 v1237; // rcx
  __int64 v1238; // rdx
  unsigned int v1239; // r9d
  unsigned __int64 v1240; // rax
  __int64 v1241; // rax
  int v1242; // esi
  int v1243; // esi
  __int64 v1244; // rbx
  unsigned int v1245; // ebx
  unsigned __int64 v1246; // rax
  __int64 v1247; // rsi
  unsigned int v1248; // esi
  unsigned __int64 v1249; // rax
  void (__fastcall *v1250)(_DWORD *); // rax
  unsigned __int64 v1251; // rdx
  unsigned __int64 v1252; // rcx
  _QWORD *v1253; // r14
  __int64 v1254; // rsi
  __int64 v1255; // rdx
  _QWORD *v1256; // rax
  int v1257; // ecx
  __int128 v1258; // xmm0
  unsigned __int64 v1259; // rcx
  unsigned __int16 Ldtr; // r15
  unsigned __int16 Tr; // ax
  unsigned __int64 v1262; // rdx
  int v1263; // r10d
  unsigned __int16 v1264; // r12
  unsigned __int64 v1265; // r11
  _QWORD *v1266; // r8
  const char *v1267; // rcx
  unsigned __int64 v1268; // rbx
  unsigned int v1269; // r9d
  __int64 v1270; // rdx
  __int64 v1271; // rax
  __int64 v1272; // rbx
  unsigned __int64 v1273; // rcx
  unsigned int v1274; // esi
  __int64 v1275; // rax
  unsigned __int64 i19; // rax
  unsigned int v1277; // ebx
  _QWORD *v1278; // rcx
  int v1279; // edx
  __int64 v1280; // r8
  char v1281; // al
  __int64 v1282; // rax
  __int64 v1283; // rdx
  void (__fastcall *v1284)(_DWORD *, __int64); // rax
  __int64 v1285; // rcx
  unsigned int v1286; // r9d
  __int64 v1287; // rcx
  __int64 v1288; // r8
  __int64 v1289; // rsi
  unsigned __int64 v1290; // r12
  __int64 v1291; // r14
  unsigned __int8 v1292; // r15
  unsigned __int16 v1293; // r13
  int v1294; // eax
  __int64 v1295; // rcx
  unsigned __int64 v1296; // rbx
  __int16 v1297; // r13
  __int64 v1298; // rdx
  __int64 v1299; // r14
  __int64 v1300; // rax
  __int64 v1301; // rax
  __int64 v1302; // rcx
  unsigned __int64 v1303; // rbx
  unsigned __int64 v1304; // rdx
  struct _KPRCB *v1305; // r8
  _QWORD *v1306; // r14
  _QWORD *v1307; // r8
  int v1308; // ebx
  const char *v1309; // rax
  int v1310; // r9d
  __int64 v1311; // r11
  int v1312; // r10d
  unsigned __int64 v1313; // rsi
  __int64 v1314; // rdx
  __int64 v1315; // rax
  __int64 *v1316; // r8
  __int64 v1317; // rsi
  unsigned __int64 v1318; // rcx
  __int64 v1319; // rdx
  int v1320; // edx
  int v1321; // r15d
  __int64 v1322; // r10
  __int64 v1323; // rax
  unsigned __int64 i20; // rax
  unsigned __int64 v1325; // rdx
  __int64 v1326; // rcx
  __int64 v1327; // r8
  __int64 (__fastcall *v1328)(__int64, unsigned __int64, __int64); // rax
  __int64 v1329; // rax
  __int16 *v1330; // rax
  unsigned int *v1331; // rax
  __int64 v1332; // rcx
  unsigned int *v1333; // rax
  __int64 v1334; // rdx
  __int64 v1335; // rcx
  __int64 (__fastcall *v1336)(__int64, __int64, _QWORD); // rax
  __int64 v1337; // rax
  _QWORD *v1338; // rdx
  unsigned int v1339; // esi
  int v1340; // r10d
  const char *v1341; // rax
  unsigned __int64 v1342; // rbx
  int v1343; // r8d
  __int64 v1344; // r9
  __int64 v1345; // rax
  unsigned __int64 i21; // rax
  unsigned int v1347; // ebx
  int *v1348; // r8
  __int64 v1349; // rdx
  unsigned __int64 v1350; // rcx
  __int64 v1351; // rax
  __int64 v1352; // rdx
  _QWORD *v1353; // rsi
  __int64 v1354; // r8
  _QWORD *v1355; // r9
  const char *v1356; // rax
  int v1357; // r11d
  __int64 v1358; // r14
  unsigned __int64 v1359; // rbx
  unsigned int v1360; // r10d
  __int64 v1361; // rdx
  __int64 v1362; // rax
  __int64 v1363; // rbx
  unsigned __int64 v1364; // rcx
  __int64 v1365; // r8
  __int64 v1366; // rax
  unsigned __int64 i18; // rax
  unsigned int v1368; // ebx
  unsigned __int8 v1369; // r14
  unsigned __int64 v1370; // rsi
  __int64 v1371; // r13
  unsigned __int64 v1372; // r12
  int v1373; // eax
  __int64 v1374; // rcx
  __int64 v1375; // rcx
  unsigned __int8 v1376; // r14
  __int64 v1377; // rdx
  unsigned int *v1378; // rcx
  unsigned int *v1379; // rbx
  char v1380; // r15
  unsigned __int64 v1381; // r12
  __int64 v1382; // r8
  __int64 *v1383; // r9
  unsigned int *v1384; // r10
  __int64 v1385; // rcx
  __int64 v1386; // rax
  __int64 v1387; // rax
  __int64 v1388; // rcx
  unsigned __int8 v1389; // r14
  unsigned __int64 v1390; // rdx
  unsigned int *v1391; // rcx
  unsigned int *v1392; // rbx
  unsigned __int64 v1393; // rsi
  unsigned __int64 v1394; // rcx
  unsigned __int64 v1395; // rax
  int v1396; // eax
  _KPROCESS *Process; // rbx
  __int64 v1398; // rbx
  int v1399; // eax
  __int64 v1400; // r13
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v1402; // rdi
  __int64 v1403; // rsi
  struct _KPRCB *v1404; // rax
  unsigned int v1405; // r11d
  struct _KTHREAD *v1406; // r15
  unsigned __int64 DpcStack; // r14
  __int64 v1408; // rdx
  unsigned __int64 v1409; // r12
  unsigned __int64 v1410; // r8
  unsigned __int64 v1411; // r10
  _QWORD *v1412; // r9
  unsigned __int64 v1413; // rcx
  unsigned __int64 v1414; // rax
  __int64 v1415; // rsi
  _QWORD *v1416; // rcx
  char *v1417; // r11
  int v1418; // ebx
  unsigned __int64 v1419; // rdi
  signed __int64 v1420; // r11
  int v1421; // ecx
  int v1422; // ecx
  int v1423; // ecx
  int v1424; // ecx
  int v1425; // ecx
  volatile signed __int32 *v1426; // rax
  unsigned int v1427; // ebx
  unsigned int v1428; // ebx
  unsigned __int8 EffectiveIrql; // al
  unsigned int v1430; // ebx
  unsigned __int8 v1431; // al
  unsigned int v1432; // ebx
  unsigned __int8 v1433; // al
  ULONG_PTR v1434; // r8
  ULONG_PTR v1435; // r8
  unsigned int v1436; // ebx
  unsigned __int8 v1437; // al
  signed __int32 v1438[8]; // [rsp+A30h] [rbp+A30h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A50h] [rbp+A50h]
  __int64 v1440; // [rsp+A58h] [rbp+A58h]
  _DWORD *v1441; // [rsp+A60h] [rbp+A60h]
  _DWORD *v1442; // [rsp+A68h] [rbp+A68h]
  _BYTE v1443[2608]; // [rsp+B00h] [rbp+B00h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL);
  v3 = a2;
  if ( !__30 )
    KeBugCheck(0x33u);
  v5 = qword_140401088;
  _InterlockedOr(v1438, 0);
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
    || *(_DWORD *)(v3 + 4) >= *(_DWORD *)(v5 + 1644) )
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
          v1428 = KeAreAllApcsDisabled();
          EffectiveIrql = KeGetEffectiveIrql();
          KeBugCheckEx(0xC8u, (EffectiveIrql << 16) | 0xFFu, v1428, 0LL, 0LL);
        }
        goto LABEL_35;
      }
      return 3221225485LL;
    }
    if ( v9 != 16 || !KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
      return 3221225485LL;
    if ( *(int *)(a1 + 20) >= 0 )
    {
      if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
      {
        v1432 = KeAreAllApcsDisabled();
        v1433 = KeGetEffectiveIrql();
        KeBugCheckEx(0xC8u, (v1433 << 16) | 0xFFu, v1432, 0LL, 0LL);
      }
    }
    else if ( KeGetEffectiveIrql() > 1u )
    {
      v1430 = KeAreAllApcsDisabled();
      v1431 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, (v1431 << 16) | 0xFFu, v1430, 0LL, 0LL);
    }
  }
  else
  {
    if ( v9 != 16 )
      return 3221225485LL;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
    if ( !v10 || v10 > 0xFFFFFFFF )
      return 3221225485LL;
    if ( KeGetEffectiveIrql() || KeAreApcsDisabled() )
    {
      v1436 = KeAreAllApcsDisabled();
      v1437 = KeGetEffectiveIrql();
      KeBugCheckEx(0xC8u, (v1437 << 16) | 0xFFu, v1436, 0LL, 0LL);
    }
  }
LABEL_35:
  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = 2336LL;
  if ( !v8
    || (v11 = *(_QWORD *)(v5 + 2240) + 2343LL,
        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = v11,
        v11 == 2336) )
  {
    ++dword_140359DD4;
    v13 = RtlpInterlockedPopEntrySList(&Lookaside);
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = v13;
    v14 = v13;
    if ( v13 )
      goto LABEL_41;
    ++dword_140359DD8;
    PoolWithTag = (_SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140359DF0)(
                                    (unsigned int)dword_140359DE4,
                                    (unsigned int)dword_140359DEC,
                                    (unsigned int)dword_140359DE8);
  }
  else
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x746E494Bu);
  }
  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0) = PoolWithTag;
  v14 = PoolWithTag;
LABEL_41:
  if ( !v14 )
    return 3221225626LL;
  v15 = v14 + 2;
  v16 = 17LL;
  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0) = v14 + 2;
  v17 = v14 + 2;
  v18 = (_SLIST_ENTRY *)v5;
  do
  {
    *v17 = *v18;
    v17[1] = v18[1];
    v17[2] = v18[2];
    v17[3] = v18[3];
    v17[4] = v18[4];
    v17[5] = v18[5];
    v17[6] = v18[6];
    v17 += 8;
    v19 = v18[7];
    v18 += 8;
    v17[-1] = v19;
    --v16;
  }
  while ( v16 );
  *v17 = *v18;
  v17[1] = v18[1];
  v17[2] = v18[2];
  v17[3] = v18[3];
  v17[4] = v18[4];
  *((_QWORD *)&v14[140].Next + 1) = v5;
  v14[141].Next = v14 + 143;
  LODWORD(v14[106].Next) = *(_DWORD *)v3;
  *(_SLIST_ENTRY **)((char *)&v14[106].Next + 4) = (_SLIST_ENTRY *)*(unsigned int *)(v3 + 4);
  LODWORD(v14[107].Next) = 0;
  *((_DWORD *)&v14[127].Next + 3) |= 0x1000u;
  if ( v8 )
    *((_QWORD *)&v14[141].Next + 1) = ((unsigned __int64)&v14[146].Next + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v20 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v15;
  v21 = (__int64)&v14[2];
  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 0;
  if ( v20 > 0x80000 )
    v20 = 0x80000;
  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = 0;
  *((_DWORD *)&v14[106].Next + 3) = v20;
  if ( !v20 )
    v20 = 1;
  *((_DWORD *)&v14[106].Next + 3) = v20;
  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x210) = a1;
  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) = v3;
  Next_low = LODWORD(v14[126].Next);
  if ( (_DWORD)Next_low != -1 )
  {
    v23 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))&v14[40].Next + 1))(
            Next_low,
            0LL,
            0x7010008004002001LL,
            3LL);
    if ( v23 || (v23 = ((__int64 (__fastcall *)(_QWORD))v14[41].Next)(0LL)) != 0 )
    {
      v24 = ((__int64 (__fastcall *)(__int64, _DWORD *))v14[42].Next)(v23, v2 + 390);
      if ( v24 >= 0 )
      {
        v14[127].Next = (_SLIST_ENTRY *)v23;
        v25 = (*((__int64 (**)(void))&v14[44].Next + 1))();
        v26 = (*((__int64 (__fastcall **)(__int64))&v14[46].Next + 1))(v25);
        if ( v26 )
        {
          (*((void (__fastcall **)(__int64, __int64))&v14[47].Next + 1))(v25, v26);
          v27 = 0;
        }
        else
        {
          v27 = 4;
        }
        v24 = 0;
        *((_DWORD *)&v14[127].Next + 3) = v27 | *((_DWORD *)&v14[127].Next + 3) & 0xFFFFFFFB;
        *((_DWORD *)&v14[106].Next + 2) += 0x10000;
      }
      else
      {
        (*((void (__fastcall **)(__int64))&v14[41].Next + 1))(v23);
      }
      if ( v24 >= 0 )
      {
        v28 = 1;
        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x110) = 1;
        goto LABEL_82;
      }
    }
  }
  v29 = *((_DWORD *)&v14[127].Next + 3);
  if ( (v29 & 8) != 0 && (v29 & 0x1000) == 0 )
  {
    v30 = __rdtsc();
    v31 = (__ROR8__(v30, 3) ^ v30) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x480) = *((_QWORD *)&v31 + 1);
    BYTE8(v31) ^= v31;
    if ( (BYTE8(v31) & 3) == 0 )
    {
      v32 = *((unsigned int *)&v14[79].Next[2].Next + 3);
      if ( (_DWORD)v32 )
      {
        v33 = __rdtsc();
        v31 = (__ROR8__(v33, 3) ^ v33) * (unsigned __int128)0x7010008004002001uLL;
        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x488) = *((_QWORD *)&v31 + 1);
        *((_QWORD *)&v31 + 1) = (*((_QWORD *)&v31 + 1) ^ (unsigned __int64)v31) % v32;
        LODWORD(v32) = DWORD2(v31);
      }
      v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v14[60].Next)(
              0LL,
              *((_QWORD *)&v31 + 1),
              0x7010008004002001LL,
              3LL);
      if ( !v34 )
      {
LABEL_73:
        if ( v34 )
        {
          ((void (__fastcall *)(__int64, _DWORD *))v14[68].Next)(v34, v2 + 390);
          ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD))v14[29].Next)(v34, v2 + 608, 0LL, 0LL);
          v35 = __rdtsc();
          v36 = (__ROR8__(v35, 3) ^ v35) * (unsigned __int128)0x7010008004002001uLL;
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x490) = *((_QWORD *)&v36 + 1);
          v37 = ((unsigned __int64)v36 ^ *((_QWORD *)&v36 + 1))
              % (*((unsigned int (__fastcall **)(_DWORD *))&v14[28].Next + 1))(v2 + 608);
          (*((void (__fastcall **)(struct _KTHREAD *, _DWORD *))&v14[29].Next + 1))(KeGetCurrentThread(), v2 + 212);
          (*((void (__fastcall **)(_DWORD *, _DWORD *))&v14[27].Next + 1))(v2 + 370, v2 + 608);
          while ( ((int (__fastcall *)(_DWORD *, _DWORD *))v14[28].Next)(v2 + 73, v2 + 370) >= 0 )
          {
            if ( !(_DWORD)v37 )
            {
              ((void (__fastcall *)(_DWORD *, _QWORD))v14[27].Next)(
                v2 + 212,
                *(unsigned int *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x124));
              break;
            }
            LODWORD(v37) = v37 - 1;
          }
          ((void (__fastcall *)(_DWORD *, _DWORD *))v14[30].Next)(v2 + 212, v2 + 364);
          v28 = 1;
          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 1;
          goto LABEL_82;
        }
        goto LABEL_81;
      }
      do
      {
        if ( !(_DWORD)v32 )
          break;
        LODWORD(v32) = v32 - 1;
        v34 = ((__int64 (__fastcall *)(__int64))v14[60].Next)(v34);
      }
      while ( v34 );
      v21 = (__int64)&v14[2];
      if ( v34 )
      {
        if ( ((int (__fastcall *)(__int64))v14[59].Next)(v34) < 0 )
        {
          (*((void (__fastcall **)(__int64))&v14[60].Next + 1))(v34);
          v34 = 0LL;
        }
        goto LABEL_73;
      }
    }
  }
LABEL_81:
  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = 0;
  v28 = 1;
LABEL_82:
  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = 0LL;
  v38 = v2 + 64;
  v39 = 4;
  do
  {
    *v38++ = 0;
    --v39;
  }
  while ( v39 );
  v40 = *((_DWORD *)&v14[106].Next + 3);
  v41 = LODWORD(v14[106].Next);
  *v2 = v41;
  if ( *((_DWORD *)&v14[106].Next + 2) >= v40 )
    goto LABEL_2287;
  v42 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x274);
  v43 = v41;
  v44 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x270);
  v45 = 0;
  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v42;
  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) = v44;
LABEL_86:
  v46 = 6LL;
  v47 = *(_DWORD *)(v21 + 2008) & 0x110000;
  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8) = v43;
  if ( v47 != 1114112 )
    __writedr(7u, 0LL);
  if ( v43 != *(_DWORD *)(v21 + 1644) )
  {
    v48 = v21;
    v49 = 0;
    if ( *(_QWORD *)(v21 + 2216) )
      v48 = *(_QWORD *)(v21 + 2216);
    v50 = (char *)(v48 + *(unsigned int *)(v48 + 1640));
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v50;
    if ( *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8)
      && *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC) <= v43 )
    {
      v49 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC);
      v50 = (char *)(v48 + *(unsigned int *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x100));
      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v50;
    }
    if ( v49 != v43 )
    {
      v51 = v43 - v49;
      v49 = v43;
      while ( 1 )
      {
        v41 = *(unsigned int *)v50;
        if ( (int)v41 > 12 )
          break;
        if ( (_DWORD)v41 == 12 )
          goto LABEL_110;
        v52 = v41 - 1;
        if ( !v52 )
          goto LABEL_110;
        v41 = (unsigned int)(v52 - 6);
        if ( (_DWORD)v41 )
        {
          v41 = (unsigned int)(v41 - 1);
          if ( !(_DWORD)v41 )
          {
            v54 = *((unsigned __int16 *)v50 + 16);
LABEL_116:
            v53 = (v54 + 55) & 0xFFFFFFF8;
            goto LABEL_117;
          }
          if ( (_DWORD)v41 != 2 )
          {
LABEL_113:
            v53 = 48LL;
            goto LABEL_117;
          }
          v53 = (unsigned int)(16 * (*((_DWORD *)v50 + 7) + 3));
        }
        else
        {
          v53 = (unsigned int)(24 * (*((_DWORD *)v50 + 6) + 2));
        }
LABEL_117:
        v50 += v53;
        if ( !--v51 )
        {
          v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          v44 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
          v42 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v50;
          goto LABEL_119;
        }
      }
      if ( (_DWORD)v41 == 28 )
      {
        v54 = *((unsigned __int16 *)v50 + 20);
        goto LABEL_116;
      }
      if ( (_DWORD)v41 == 30 )
      {
        v41 = (unsigned int)(*((_DWORD *)v50 + 9) - 1);
        v53 = (((*((_DWORD *)v50 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v50 + 20) + 2);
      }
      else
      {
        if ( (int)v41 <= 32 )
          goto LABEL_113;
        if ( (int)v41 <= 34 )
        {
          v41 = *((_DWORD *)v50 + 8) & 0xFFF;
          v53 = 20 * (unsigned int)((v41 + *((unsigned int *)v50 + 10) + 4095LL) >> 12) + 48;
        }
        else
        {
          if ( (_DWORD)v41 != 43 )
            goto LABEL_113;
LABEL_110:
          v41 = *((unsigned int *)v50 + 4);
          v53 = 4 * (*((_DWORD *)v50 + 4) / 0xCu) + 48;
        }
      }
      v46 = 6LL;
      goto LABEL_117;
    }
LABEL_119:
    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF8) = 1;
    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xFC) = v49;
    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x100) = (_DWORD)v50 - v48;
    if ( *(_DWORD *)(v21 + 1668) )
    {
LABEL_161:
      v65 = *(_DWORD *)v50;
      *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = *(_DWORD *)v50;
      if ( v65 <= 26 )
      {
        if ( v65 != 26 )
        {
          if ( v65 <= 11 )
          {
            if ( v65 != 11 )
            {
              if ( v65 )
              {
                if ( v65 == 1 )
                  goto LABEL_1853;
                v41 = (unsigned int)(v65 - 4);
                if ( v65 == 4 )
                {
                  if ( (*(_DWORD *)(v21 + 1680) & 1) == 0 )
                  {
                    v150 = *(void (**)(void))(v21 + 360);
                    v151 = 0;
                    v152 = *(_QWORD *)(v21 + 1280);
                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
                    v150();
                    (*(void (__fastcall **)(__int64, _QWORD))(v21 + 280))(v152, 0LL);
                    v153 = *(_QWORD ***)(v21 + 1240);
                    v154 = *v153;
                    if ( *v153 != v153 )
                    {
                      do
                      {
                        *((_BYTE *)v154 - 298) = 1;
                        ++v151;
                        v154 = (_QWORD *)*v154;
                      }
                      while ( v154 != v153 );
                      *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v151;
                    }
                    v155 = *(_QWORD *)(v21 + 1208);
                    CurrentIrql = KeGetCurrentIrql();
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = CurrentIrql;
                    __writecr8(0xCuLL);
                    (*(void (__fastcall **)(__int64, _DWORD *))(v21 + 312))(v155, v2 + 402);
                    v157 = *(_QWORD ***)(v21 + 1200);
                    v158 = *v157;
                    if ( *v157 != v157 )
                    {
                      do
                      {
                        v159 = v158 - 72;
                        if ( !*((_BYTE *)v158 - 130) && !*(_DWORD *)(v21 + 1872) )
                        {
                          *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v21 + 1896) = *(int *)v50;
                          *(_QWORD *)(v21 + 1904) = v159;
                          *(_DWORD *)(v21 + 1872) = 1;
                        }
                        *((_BYTE *)v159 + 446) = 0;
                        v158 = (_QWORD *)*v158;
                      }
                      while ( v158 != v157 );
                      v151 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      CurrentIrql = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      v43 = *v2;
                    }
                    (*(void (__fastcall **)(_DWORD *))(v21 + 376))(v2 + 402);
                    __writecr8((unsigned __int8)CurrentIrql);
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 288))(*(_QWORD *)(v21 + 1280), 0LL);
                    (*(void (**)(void))(v21 + 368))();
                    *(_DWORD *)(v21 + 1672) += v151 << 8;
                  }
                  goto LABEL_269;
                }
                if ( v65 != 5 )
                {
                  if ( v65 != 7 )
                  {
                    v41 = (unsigned int)(v65 - 8);
                    if ( v65 != 8 )
                    {
                      if ( v65 != 10 )
                        goto LABEL_2048;
                      if ( *((_DWORD *)v50 + 6) )
                      {
                        if ( !*(_QWORD *)(v21 + 2000) || (v41 = *(unsigned int *)(v21 + 2012), (v41 & 4) != 0) )
                        {
LABEL_196:
                          *(_DWORD *)(v21 + 1668) = 0;
                          goto LABEL_269;
                        }
                        if ( *(_DWORD *)(v21 + 1668) )
                        {
                          if ( (v41 & 0x20) != 0 )
                            goto LABEL_196;
                        }
                        else
                        {
                          *(_DWORD *)(v21 + 2012) = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(8 * v41)) & 0x20;
                        }
                      }
                      v66 = (unsigned int *)&v50[16 * *(unsigned int *)(v21 + 1668) + 48];
                      v67 = (unsigned __int64)&v50[16 * *((unsigned int *)v50 + 7) + 48];
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v66;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v67;
                      while ( 1 )
                      {
                        if ( (*v66 & 0x80000000) == 0 )
                        {
                          v68 = *((_QWORD *)v66 + 1);
                          v69 = v66[1];
                          v70 = (_QWORD *)v68;
                          *(_DWORD *)(v21 + 1672) += v69;
                          v71 = (const char *)v68;
                          v72 = *(_DWORD *)(v21 + 1652);
                          v73 = (unsigned int)v69;
                          v74 = *(_QWORD *)(v21 + 1656);
                          v41 = v68 + v69;
                          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v68;
                          if ( v68 < v68 + v69 )
                          {
                            do
                            {
                              _mm_prefetch(v71, 0);
                              v71 += 64;
                            }
                            while ( (unsigned __int64)v71 < v41 );
                          }
                          v75 = v74;
                          v76 = (unsigned int)v69 >> 7;
                          if ( (unsigned int)v69 >> 7 )
                          {
                            do
                            {
                              v77 = 8LL;
                              do
                              {
                                v78 = v70[1] ^ __ROL8__(*v70 ^ v75, v72);
                                v70 += 2;
                                v75 = __ROL8__(v78, v72);
                                --v77;
                              }
                              while ( v77 );
                              v41 = __ROL8__(v74 ^ ((unsigned __int64)v70 - v68), 17) ^ v74 ^ ((unsigned __int64)v70
                                                                                             - v68);
                              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x498) = (v41 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              v72 = ((unsigned __int8)((v41 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v41 ^ v72)) & 0x3F;
                              if ( !v72 )
                                v72 = 1;
                              --v76;
                            }
                            while ( v76 );
                            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                            v73 = v69;
                            v66 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                            v67 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                          }
                          v79 = v69 & 0x7F;
                          if ( (unsigned int)v79 >= 8 )
                          {
                            v80 = (unsigned __int64)(unsigned int)v79 >> 3;
                            do
                            {
                              v41 = v72;
                              v75 = __ROL8__(*v70++ ^ v75, v72);
                              v79 = (unsigned int)(v79 - 8);
                              --v80;
                            }
                            while ( v80 );
                          }
                          if ( (_DWORD)v79 )
                          {
                            do
                            {
                              v81 = *(unsigned __int8 *)v70;
                              v41 = v72;
                              v70 = (_QWORD *)((char *)v70 + 1);
                              v75 = __ROL8__(v81 ^ v75, v72);
                              v79 = (unsigned int)(v79 - 1);
                            }
                            while ( (_DWORD)v79 );
                            v68 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                          }
                          for ( i = v75; ; LODWORD(v75) = i ^ v75 )
                          {
                            i >>= 31;
                            if ( !i )
                              break;
                          }
                          v83 = v75 & 0x7FFFFFFF;
                          if ( v83 != (*v66 & 0x7FFFFFFF) )
                          {
                            if ( v73 )
                            {
                              v41 = 64LL;
                              if ( (*(_DWORD *)(v21 + 2012) & 0x40) != 0 )
                              {
                                v84 = KeGetCurrentIrql();
                                v85 = v68 & 0xFFFFFFFFFFFFF000uLL;
                                v86 = (v68 - 1 + v73) | 0xFFF;
                                v87 = (v68 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_203:
                                __writecr8(2uLL);
                                while ( 1 )
                                {
                                  v88 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                                          v85,
                                          0LL,
                                          v79,
                                          v70);
                                  if ( v88 == -1073741267 )
                                  {
                                    if ( v84 <= 1u )
                                    {
                                      __writecr8(v84);
                                      KeGetCurrentIrql();
                                      goto LABEL_203;
                                    }
                                  }
                                  else if ( v88 < 0 )
                                  {
                                    __writecr8(v84);
                                    v68 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                                    v45 = 0;
                                    break;
                                  }
                                  v85 += 4096LL;
                                  v87 += 4096LL;
                                  if ( v87 == v86 )
                                  {
                                    __writecr8(v84);
                                    v45 = 0;
                                    goto LABEL_210;
                                  }
                                }
                              }
                            }
                            v90 = *v66;
                            LODWORD(v90) = v90 & 0x7FFFFFFF;
                            if ( !*(_DWORD *)(v21 + 1872) )
                            {
                              v41 = v90 ^ v83;
                              *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v41;
                              if ( !*(_DWORD *)(v21 + 1872) )
                              {
                                v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                                v67 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                                *(_QWORD *)(v21 + 1904) = v68;
                                *(_DWORD *)(v21 + 1872) = 1;
                                goto LABEL_212;
                              }
                            }
LABEL_210:
                            v67 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                          }
                          v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        }
LABEL_212:
                        v66 += 4;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v66;
                        v89 = v66 == (unsigned int *)v67;
                        if ( (unsigned __int64)v66 >= v67 )
                          goto LABEL_215;
                        if ( *(_DWORD *)(v21 + 1672) >= *(_DWORD *)(v21 + 1676) )
                        {
                          v89 = v66 == (unsigned int *)v67;
LABEL_215:
                          v43 = *v2;
                          if ( v89 )
                            *(_DWORD *)(v21 + 1668) = 0;
                          else
                            *(_DWORD *)(v21 + 1668) = ((char *)v66 - (v50 + 48)) >> 4;
LABEL_269:
                          v119 = v43 - 1;
                          if ( !*(_DWORD *)(v21 + 1668) )
                            v119 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A8);
                          v43 = v119 + 1;
                          *v2 = v43;
                          if ( !*(_DWORD *)(v21 + 1872) && *(_DWORD *)(v21 + 1672) < *(_DWORD *)(v21 + 1676) )
                          {
                            v44 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
                            v28 = 1;
                            v42 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0);
                            goto LABEL_86;
                          }
                          LODWORD(v41) = *v2;
LABEL_2285:
                          v3 = a2;
                          goto LABEL_2286;
                        }
                      }
                    }
                    v91 = *((_QWORD *)v50 + 3);
                    if ( *(_WORD *)(v91 + 66) != *((_WORD *)v50 + 17) && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v50;
                      *(_QWORD *)(v21 + 1904) = v91;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    if ( (v50[34] & 0x40) == 0 && *(_QWORD *)(v91 + 200) != v91 + 200 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v50;
                      *(_QWORD *)(v21 + 1904) = v91;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    v92 = (_QWORD *)*((_QWORD *)v50 + 1);
                    v93 = *((unsigned int *)v50 + 4);
                    v94 = v92;
                    *(_DWORD *)(v21 + 1672) += v93;
                    v95 = (const char *)v92;
                    v96 = *(_DWORD *)(v21 + 1652);
                    v97 = *(_QWORD *)(v21 + 1656);
                    if ( v92 < (_QWORD *)((char *)v92 + v93) )
                    {
                      do
                      {
                        _mm_prefetch(v95, 0);
                        v95 += 64;
                      }
                      while ( v95 < (const char *)v92 + v93 );
                    }
                    v98 = *(_QWORD *)(v21 + 1656);
                    v99 = (unsigned int)v93 >> 7;
                    if ( (unsigned int)v93 >> 7 )
                    {
                      do
                      {
                        v100 = 8LL;
                        do
                        {
                          v101 = v94[1] ^ __ROL8__(*v94 ^ v98, v96);
                          v94 += 2;
                          v98 = __ROL8__(v101, v96);
                          --v100;
                        }
                        while ( v100 );
                        v102 = (__ROL8__(v97 ^ ((char *)v94 - (char *)v92), 17) ^ v97 ^ (unsigned __int64)((char *)v94 - (char *)v92))
                             * (unsigned __int128)0x7010008004002001uLL;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A0) = *((_QWORD *)&v102 + 1);
                        v96 = (BYTE8(v102) ^ (unsigned __int8)(v102 ^ v96)) & 0x3F;
                        if ( !v96 )
                          LOBYTE(v96) = 1;
                        --v99;
                      }
                      while ( v99 );
                      v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                    }
                    v103 = v93 & 0x7F;
                    if ( v103 >= 8 )
                    {
                      v104 = (unsigned __int64)v103 >> 3;
                      do
                      {
                        v98 = __ROL8__(*v94++ ^ v98, v96);
                        v103 -= 8;
                        --v104;
                      }
                      while ( v104 );
                    }
                    for ( ; v103; --v103 )
                    {
                      v105 = *(unsigned __int8 *)v94;
                      v94 = (_QWORD *)((char *)v94 + 1);
                      v98 = __ROL8__(v105 ^ v98, v96);
                    }
                    for ( j = v98; ; LODWORD(v98) = j ^ v98 )
                    {
                      j >>= 31;
                      if ( !j )
                        break;
                    }
                    v107 = v98 & 0x7FFFFFFF;
                    if ( v107 == *((_DWORD *)v50 + 5) )
                    {
LABEL_262:
                      v45 = 0;
                    }
                    else
                    {
                      if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
                        v45 = 1;
                      v108 = *((_QWORD *)v50 + 1);
                      if ( *((_DWORD *)v50 + 4) )
                      {
                        v109 = 64LL;
                        if ( (*(_DWORD *)(v21 + 2012) & 0x40) != 0 )
                        {
                          v110 = KeGetCurrentIrql();
                          v111 = v108 & 0xFFFFFFFFFFFFF000uLL;
                          v112 = (v108 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
                          v113 = (v108 & 0xFFFFFFFFFFFFF000uLL) - 1;
                          while ( 1 )
                          {
                            __writecr8(2uLL);
                            while ( 1 )
                            {
                              v114 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                                       v111,
                                       0LL,
                                       v109,
                                       v94);
                              if ( v114 == -1073741267 )
                                break;
                              if ( v114 < 0 )
                              {
LABEL_274:
                                v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                                __writecr8(v110);
                                goto LABEL_275;
                              }
LABEL_260:
                              v111 += 4096LL;
                              v113 += 4096LL;
                              if ( v113 == v112 )
                              {
                                __writecr8(v110);
                                v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                                goto LABEL_262;
                              }
                            }
                            if ( v45 )
                              goto LABEL_274;
                            if ( v110 > 1u )
                              goto LABEL_260;
                            __writecr8(v110);
                            KeGetCurrentIrql();
                          }
                        }
                      }
LABEL_275:
                      v45 = 0;
                      if ( !*(_DWORD *)(v21 + 1872) )
                        *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = *((unsigned int *)v50 + 5) ^ (unsigned __int64)v107;
                      v120 = *((_QWORD *)v50 + 1);
                      if ( !*(_DWORD *)(v21 + 1872) )
                      {
                        *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v21 + 1896) = *(int *)v50;
                        *(_QWORD *)(v21 + 1904) = v120;
                        *(_DWORD *)(v21 + 1872) = 1;
                      }
                    }
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B8) = v50 + 48;
                    v115 = *((_WORD *)v50 + 16);
                    v1442 = v2 + 128;
                    *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B0) = v115;
                    *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2B2) = v115;
                    v116 = *(_QWORD *)(v21 + 1216);
                    v117 = *(int (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _DWORD *))(v21 + 472);
                    LOBYTE(v1440) = 0;
                    if ( v117(v2 + 172, 0LL, 0LL, 0LL, v116, v1440, 0LL, v1442) >= 0 )
                    {
                      v118 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x200);
                      if ( v118 != *((_QWORD *)v50 + 3) && !*(_DWORD *)(v21 + 1872) )
                      {
                        *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v21 + 1896) = *(int *)v50;
                        *(_QWORD *)(v21 + 1904) = v118;
                        *(_DWORD *)(v21 + 1872) = 1;
                        v118 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x200);
                      }
                      (*(void (__fastcall **)(__int64))(v21 + 464))(v118);
                    }
                    goto LABEL_268;
                  }
                  (*(void (__fastcall **)(_DWORD *, _QWORD))(v21 + 400))(v2 + 312, *((unsigned int *)v50 + 7));
                  (*(void (__fastcall **)(_DWORD *, _DWORD *))(v21 + 448))(v2 + 312, v2 + 316);
                  v121 = 0;
                  if ( *((_DWORD *)v50 + 6) )
                  {
                    do
                    {
                      v122 = *(unsigned int *)&v50[24 * v121 + 64];
                      if ( (*(_BYTE *)(v21 + 1755) & 2) != 0
                        && (_DWORD)v122 == -1073741694
                        && KeGetPcr()->Prcb.Number == *(_DWORD *)(v21 + 1864) )
                      {
                        v123 = *(_QWORD *)(v21 + 1856);
                      }
                      else
                      {
                        v123 = __readmsr(v122);
                      }
                      v124 = *(_QWORD *)&v50[24 * v121 + 48];
                      v125 = *(_QWORD *)&v50[24 * v121 + 56];
                      v126 = v124 & v123;
                      if ( v126 == v125 )
                      {
                        if ( (*(_DWORD *)(v21 + 2012) & 0x200) != 0 && v124 == -1 )
                          __writemsr(v122, v126);
                      }
                      else
                      {
                        v127 = v122 | ((unsigned __int64)*((unsigned int *)v50 + 7) << 32);
                        if ( !*(_DWORD *)(v21 + 1872) )
                        {
                          *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v126 ^ v125;
                          if ( !*(_DWORD *)(v21 + 1872) )
                          {
                            *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v21 + 1896) = *(int *)v50;
                            *(_QWORD *)(v21 + 1904) = v127;
                            *(_DWORD *)(v21 + 1872) = 1;
                          }
                        }
                      }
                      ++v121;
                    }
                    while ( v121 < *((_DWORD *)v50 + 6) );
                    v43 = *v2;
                  }
                  (*(void (__fastcall **)(_DWORD *))(v21 + 392))(v2 + 316);
                  v128 = *((_DWORD *)v50 + 6) << 15;
LABEL_295:
                  *(_DWORD *)(v21 + 1672) += v128;
                  goto LABEL_269;
                }
                v41 = *(unsigned int *)(v21 + 1680);
                if ( (v41 & 1) == 0 )
                  goto LABEL_269;
                v129 = 0;
                if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                {
                  v131 = __rdtsc();
                  v132 = (__ROR8__(v131, 3) ^ v131) * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4A8) = *((_QWORD *)&v132 + 1);
                  v130 = ((unsigned __int64)v132 ^ *((_QWORD *)&v132 + 1)) == 3
                                                                            * (((unsigned __int64)v132 ^ *((_QWORD *)&v132 + 1))
                                                                             / 3);
                }
                else
                {
                  v130 = (v41 & 3) == 3;
                }
                v133 = *(void (**)(void))(v21 + 360);
                LOBYTE(v129) = v130;
                v134 = *(_QWORD *)(v21 + 1280);
                v135 = 0;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
                v133();
                (*(void (__fastcall **)(__int64, _QWORD))(v21 + 280))(v134, 0LL);
                v136 = *(_QWORD ***)(v21 + 1240);
                v137 = *v136;
                if ( *v136 != v136 )
                {
                  do
                  {
                    *((_BYTE *)v137 - 298) = 1;
                    ++v135;
                    v137 = (_QWORD *)*v137;
                  }
                  while ( v137 != v136 );
                  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v135;
                }
                v138 = *(unsigned int ***)(v21 + 1288);
                v139 = 4LL;
                v140 = (__int64)*v138;
                v141 = **v138;
                while ( 1 )
                {
                  v142 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v21 + 248))(v140, v139);
                  v143 = v142;
                  if ( v142 )
                    break;
LABEL_322:
                  v139 += 4LL;
                  if ( v139 >= v141 )
                  {
                    v148 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(v21 + 288))(*(_QWORD *)(v21 + 1280), 0LL, v143);
                    (*(void (**)(void))(v21 + 368))();
                    v149 = (v141 >> 2) + v148;
                    goto LABEL_324;
                  }
                }
                v144 = (*v142 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v145 = *(_BYTE *)v144 & 0x7F;
                if ( v145 == 3 )
                {
                  if ( !*(_BYTE *)(((*v142 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x1BE)
                    && (*(_DWORD *)(((*v142 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x4000000) != 0
                    && !*(_DWORD *)(v21 + 1872) )
                  {
                    *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v21 + 1896) = *(int *)v50;
                    *(_QWORD *)(v21 + 1904) = v144;
                    *(_DWORD *)(v21 + 1872) = 1;
                  }
                  *(_BYTE *)(v144 + 446) = 0;
                  goto LABEL_321;
                }
                if ( v145 == 6 )
                {
                  if ( !v129 )
                    goto LABEL_321;
                  v146 = *(_QWORD *)(((*v142 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2A8);
                  if ( v146 != *(_QWORD *)(v21 + 784) && v146 != *(_QWORD *)(v21 + 792)
                    || *(_QWORD *)(v144 + 696) != *(_QWORD *)(v21 + 800) )
                  {
LABEL_319:
                    if ( !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v50;
                      *(_QWORD *)(v21 + 1904) = v144;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    goto LABEL_321;
                  }
                  v147 = *(_QWORD *)(v144 + 688) == *(_QWORD *)(v21 + 808);
                }
                else
                {
                  v147 = v145 == 0;
                }
                if ( !v147 )
                  goto LABEL_319;
LABEL_321:
                (*(void (__fastcall **)(__int64, __int64 *))(v21 + 272))(v140, v143);
                goto LABEL_322;
              }
              v160 = (_QWORD *)*((_QWORD *)v50 + 1);
              v161 = *((unsigned int *)v50 + 4);
              v162 = v160;
              *(_DWORD *)(v21 + 1672) += v161;
              v163 = (const char *)v160;
              v164 = *(_DWORD *)(v21 + 1652);
              v165 = *(_QWORD *)(v21 + 1656);
              v41 = (unsigned __int64)v160 + v161;
              if ( v160 < (_QWORD *)((char *)v160 + v161) )
              {
                do
                {
                  _mm_prefetch(v163, 0);
                  v163 += 64;
                }
                while ( (unsigned __int64)v163 < v41 );
              }
              v166 = *(_QWORD *)(v21 + 1656);
              v167 = (unsigned int)v161 >> 7;
              if ( (unsigned int)v161 >> 7 )
              {
                do
                {
                  v168 = 8LL;
                  do
                  {
                    v169 = v166 ^ *v162;
                    v170 = v162[1];
                    v162 += 2;
                    v166 = __ROL8__(__ROL8__(v169, v164) ^ v170, v164);
                    --v168;
                  }
                  while ( v168 );
                  v41 = __ROL8__(v165 ^ ((char *)v162 - (char *)v160), 17) ^ v165 ^ ((char *)v162 - (char *)v160);
                  v171 = (v41 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B0) = v171;
                  v164 = ((unsigned __int8)(v171 ^ v41) ^ (unsigned __int8)v164) & 0x3F;
                  if ( !v164 )
                    v164 = 1;
                  --v167;
                }
                while ( v167 );
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              }
              v172 = v161 & 0x7F;
              if ( v172 >= 8 )
              {
                v173 = (unsigned __int64)v172 >> 3;
                do
                {
                  v41 = v164;
                  v166 = __ROL8__(*v162++ ^ v166, v164);
                  v172 -= 8;
                  --v173;
                }
                while ( v173 );
              }
              for ( ; v172; --v172 )
              {
                v174 = *(unsigned __int8 *)v162;
                v41 = v164;
                v162 = (_QWORD *)((char *)v162 + 1);
                v166 = __ROL8__(v174 ^ v166, v164);
              }
              for ( k = v166; ; LODWORD(v166) = k ^ v166 )
              {
                k >>= 31;
                if ( !k )
                  break;
              }
              v176 = v166 & 0x7FFFFFFF;
              if ( v176 == *((_DWORD *)v50 + 5) )
              {
                v43 = *v2;
                v45 = 0;
                goto LABEL_269;
              }
              if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
                v45 = 1;
              v177 = *((_QWORD *)v50 + 1);
              if ( *((_DWORD *)v50 + 4) )
              {
                v178 = 64LL;
                if ( (*(_DWORD *)(v21 + 2012) & 0x40) != 0 )
                {
                  v179 = KeGetCurrentIrql();
                  v180 = v177 & 0xFFFFFFFFFFFFF000uLL;
                  v181 = (v177 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
                  v182 = (v177 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    __writecr8(2uLL);
                    while ( 1 )
                    {
                      v183 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                               v180,
                               0LL,
                               v178,
                               v162);
                      if ( v183 == -1073741267 )
                        break;
                      if ( v183 < 0 )
                      {
LABEL_370:
                        v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        __writecr8(v179);
                        goto LABEL_371;
                      }
LABEL_368:
                      v178 = 4096LL;
                      v180 += 4096LL;
                      v182 += 4096LL;
                      if ( v182 == v181 )
                        goto LABEL_369;
                    }
                    if ( v45 )
                      goto LABEL_370;
                    if ( v179 > 1u )
                      goto LABEL_368;
                    __writecr8(v179);
                    KeGetCurrentIrql();
                  }
                }
              }
LABEL_371:
              v184 = *((unsigned int *)v50 + 5);
              v45 = 0;
              if ( *(_DWORD *)(v21 + 1872) )
                goto LABEL_374;
              v185 = v176;
              goto LABEL_373;
            }
            if ( !*(_QWORD *)(v21 + 2000) )
            {
LABEL_379:
              *(_DWORD *)(v21 + 1668) = 0;
              goto LABEL_269;
            }
            v186 = *(_DWORD *)(v21 + 2012);
            if ( *(_DWORD *)(v21 + 1668) )
            {
              v41 = v186 ^ (v186 >> 3);
              if ( (((unsigned __int8)v186 ^ (unsigned __int8)(v186 >> 3)) & 4) != 0 )
                goto LABEL_379;
            }
            else
            {
              *(_DWORD *)(v21 + 2012) = v186 ^ ((unsigned __int8)v186 ^ (unsigned __int8)(8 * v186)) & 0x20;
            }
            if ( (*(_DWORD *)(v21 + 2012) & 4) != 0 )
            {
              v41 = *((unsigned int *)v50 + 4);
              v187 = *((_QWORD *)v50 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v188 = (v41 + (*((_DWORD *)v50 + 2) & 0xFFF) + 4095LL) >> 12;
              if ( !v188 )
                goto LABEL_269;
              do
              {
                --v188;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(v21 + 672))(v187, v46)
                  && !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v187;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
                *(_DWORD *)(v21 + 1672) += 256;
                v187 += 4096LL;
              }
              while ( v188 );
              goto LABEL_268;
            }
            v189 = (_QWORD *)*((_QWORD *)v50 + 1);
            v190 = *((unsigned int *)v50 + 4);
            v191 = v189;
            *(_DWORD *)(v21 + 1672) += v190;
            v192 = (const char *)v189;
            v193 = *(_DWORD *)(v21 + 1652);
            v194 = *(_QWORD *)(v21 + 1656);
            v41 = (unsigned __int64)v189 + v190;
            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v190;
            if ( v189 < (_QWORD *)((char *)v189 + v190) )
            {
              do
              {
                _mm_prefetch(v192, 0);
                v192 += 64;
              }
              while ( (unsigned __int64)v192 < v41 );
            }
            v195 = v194;
            v196 = (unsigned int)v190 >> 7;
            if ( (unsigned int)v190 >> 7 )
            {
              do
              {
                v197 = 8LL;
                do
                {
                  v198 = v191[1] ^ __ROL8__(*v191 ^ v195, v193);
                  v191 += 2;
                  v195 = __ROL8__(v198, v193);
                  --v197;
                }
                while ( v197 );
                v41 = __ROL8__(v194 ^ ((char *)v191 - (char *)v189), 17) ^ v194 ^ ((char *)v191 - (char *)v189);
                v199 = (v41 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4B8) = v199;
                v193 = ((unsigned __int8)(v199 ^ v41) ^ (unsigned __int8)v193) & 0x3F;
                if ( !v193 )
                  v193 = 1;
                --v196;
              }
              while ( v196 );
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              LODWORD(v190) = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            }
            v200 = v190 & 0x7F;
            if ( v200 >= 8 )
            {
              v201 = (unsigned __int64)v200 >> 3;
              do
              {
                v41 = v193;
                v195 = __ROL8__(*v191++ ^ v195, v193);
                v200 -= 8;
                --v201;
              }
              while ( v201 );
            }
            for ( ; v200; --v200 )
            {
              v202 = *(unsigned __int8 *)v191;
              v41 = v193;
              v191 = (_QWORD *)((char *)v191 + 1);
              v195 = __ROL8__(v202 ^ v195, v193);
            }
            for ( m = v195; ; LODWORD(v195) = m ^ v195 )
            {
              m >>= 31;
              if ( !m )
                break;
            }
            v204 = v195 & 0x7FFFFFFF;
            if ( v204 == *((_DWORD *)v50 + 5) )
              goto LABEL_1072;
            v205 = *((_QWORD *)v50 + 1);
            if ( !*((_DWORD *)v50 + 4) || (v206 = 64LL, (*(_DWORD *)(v21 + 2012) & 0x40) == 0) )
            {
LABEL_419:
              if ( *(_DWORD *)(v21 + 1872) )
                goto LABEL_374;
              v185 = *((unsigned int *)v50 + 5);
              v184 = v204;
LABEL_373:
              *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v184 ^ v185;
LABEL_374:
              v43 = *v2;
LABEL_375:
              v41 = *((_QWORD *)v50 + 1);
              if ( *(_DWORD *)(v21 + 1872) )
                goto LABEL_269;
              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v21 + 1896) = *(int *)v50;
              *(_QWORD *)(v21 + 1904) = v41;
              goto LABEL_377;
            }
            v179 = KeGetCurrentIrql();
            v207 = v205 & 0xFFFFFFFFFFFFF000uLL;
            v208 = (v205 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
            v209 = (v205 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_411:
            __writecr8(2uLL);
            while ( 1 )
            {
              v210 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                       v207,
                       0LL,
                       v206,
                       v191);
              if ( v210 == -1073741267 )
              {
                if ( v179 <= 1u )
                {
                  __writecr8(v179);
                  KeGetCurrentIrql();
                  goto LABEL_411;
                }
              }
              else if ( v210 < 0 )
              {
                __writecr8(v179);
                v45 = 0;
                goto LABEL_419;
              }
              v206 = 4096LL;
              v207 += 4096LL;
              v209 += 4096LL;
              if ( v209 == v208 )
              {
LABEL_369:
                __writecr8(v179);
                goto LABEL_325;
              }
            }
          }
          if ( v65 != 12 )
          {
            if ( v65 <= 14 )
            {
              if ( v65 == 14 )
              {
                if ( !*(_QWORD *)(v21 + 2000) )
                  goto LABEL_379;
                v41 = *(unsigned int *)(v21 + 2012);
                if ( ((*(_DWORD *)(v21 + 2012) >> 2) & 1) != 0 )
                  goto LABEL_379;
                if ( *(_DWORD *)(v21 + 1668) )
                {
                  v41 = ((unsigned int)v41 >> 5) & 1;
                  if ( (_DWORD)v41 )
                    goto LABEL_379;
                }
                else
                {
                  *(_DWORD *)(v21 + 2012) = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(8 * v41)) & 0x20;
                }
              }
              v651 = (_QWORD *)*((_QWORD *)v50 + 1);
              v652 = *((unsigned int *)v50 + 4);
              v653 = v651;
              *(_DWORD *)(v21 + 1672) += v652;
              v654 = (const char *)v651;
              v655 = *(_DWORD *)(v21 + 1652);
              v656 = *(_QWORD *)(v21 + 1656);
              v41 = (unsigned __int64)v651 + v652;
              if ( v651 < (_QWORD *)((char *)v651 + v652) )
              {
                do
                {
                  _mm_prefetch(v654, 0);
                  v654 += 64;
                }
                while ( (unsigned __int64)v654 < v41 );
              }
              v657 = *(_QWORD *)(v21 + 1656);
              v658 = (unsigned int)v652 >> 7;
              if ( (unsigned int)v652 >> 7 )
              {
                do
                {
                  v659 = 8LL;
                  do
                  {
                    v660 = v653[1] ^ __ROL8__(*v653 ^ v657, v655);
                    v653 += 2;
                    v657 = __ROL8__(v660, v655);
                    --v659;
                  }
                  while ( v659 );
                  v41 = __ROL8__(v656 ^ ((char *)v653 - (char *)v651), 17) ^ v656 ^ ((char *)v653 - (char *)v651);
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3B8) = (v41
                                                                                          * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v655 = ((unsigned __int8)((v41 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v41 ^ v655)) & 0x3F;
                  if ( !v655 )
                    v655 = 1;
                  --v658;
                }
                while ( v658 );
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              }
              v661 = v652 & 0x7F;
              if ( v661 >= 8 )
              {
                v662 = (unsigned __int64)v661 >> 3;
                do
                {
                  v41 = v655;
                  v657 = __ROL8__(*v653++ ^ v657, v655);
                  v661 -= 8;
                  --v662;
                }
                while ( v662 );
              }
              for ( ; v661; --v661 )
              {
                v663 = *(unsigned __int8 *)v653;
                v41 = v655;
                v653 = (_QWORD *)((char *)v653 + 1);
                v657 = __ROL8__(v663 ^ v657, v655);
              }
              for ( n = v657; ; LODWORD(v657) = n ^ v657 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v665 = v657 & 0x7FFFFFFF;
              if ( v665 == *((_DWORD *)v50 + 5) )
                goto LABEL_1045;
              _InterlockedOr(v1438, 0);
              if ( (*((_DWORD *)v50 + 6) & 1) != 0 )
              {
                LOBYTE(v41) = **(_BYTE **)(v21 + 1336);
                if ( (_BYTE)v41 )
                  goto LABEL_1045;
              }
              v666 = *((_QWORD *)v50 + 1);
              if ( !*((_DWORD *)v50 + 4) )
                goto LABEL_1055;
              v667 = 64LL;
              if ( (*(_DWORD *)(v21 + 2012) & 0x40) == 0 )
                goto LABEL_1055;
              v668 = KeGetCurrentIrql();
              v669 = v666 & 0xFFFFFFFFFFFFF000uLL;
              v670 = (v666 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
              v671 = (v666 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1038:
              __writecr8(2uLL);
              while ( 1 )
              {
                v672 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                         v669,
                         0LL,
                         v667,
                         v653);
                if ( v672 == -1073741267 )
                {
                  if ( v668 <= 1u )
                  {
                    __writecr8(v668);
                    KeGetCurrentIrql();
                    goto LABEL_1038;
                  }
                }
                else if ( v672 < 0 )
                {
                  __writecr8(v668);
                  v45 = 0;
LABEL_1055:
                  if ( !*(_DWORD *)(v21 + 1872) )
                    *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v665 ^ (unsigned __int64)*((unsigned int *)v50 + 5);
                  v41 = *((_QWORD *)v50 + 1);
                  if ( !*(_DWORD *)(v21 + 1872) )
                  {
                    *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v21 + 1896) = *(int *)v50;
                    *(_QWORD *)(v21 + 1904) = v41;
                    *(_DWORD *)(v21 + 1872) = 1;
                  }
                  goto LABEL_1045;
                }
                v667 = 4096LL;
                v669 += 4096LL;
                v671 += 4096LL;
                if ( v671 == v670 )
                {
                  __writecr8(v668);
                  v45 = 0;
LABEL_1045:
                  if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) == 0 )
                    goto LABEL_268;
                  v673 = *((unsigned int *)v50 + 4);
                  if ( !(_DWORD)v673 )
                    goto LABEL_268;
                  sub_14017573C(v21, *((_QWORD *)v50 + 1), v673, v2 + 328);
                  v674 = 16;
                  v675 = (__int64 *)(v50 + 28);
                  v676 = (unsigned __int64 *)(v2 + 328);
                  do
                  {
                    v41 = *v676++;
                    v677 = *v675++;
                    if ( v41 != v677 )
                      goto LABEL_1059;
                    v674 -= 8;
                  }
                  while ( v674 >= 8 );
                  if ( !v674 )
                    goto LABEL_1071;
                  while ( 1 )
                  {
                    v678 = *(unsigned __int8 *)v676;
                    v676 = (unsigned __int64 *)((char *)v676 + 1);
                    v679 = *(unsigned __int8 *)v675;
                    v675 = (__int64 *)((char *)v675 + 1);
                    if ( v678 != v679 )
                      break;
                    if ( !--v674 )
                      goto LABEL_1071;
                  }
LABEL_1059:
                  _InterlockedOr(v1438, 0);
                  if ( (*((_DWORD *)v50 + 6) & 1) != 0 )
                  {
                    LOBYTE(v41) = **(_BYTE **)(v21 + 1336);
                    if ( (_BYTE)v41 )
                      goto LABEL_1071;
                  }
                  v680 = *((_QWORD *)v50 + 1);
                  if ( !*((_DWORD *)v50 + 4) )
                    goto LABEL_1074;
                  v681 = 64LL;
                  if ( (*(_DWORD *)(v21 + 2012) & 0x40) == 0 )
                    goto LABEL_1074;
                  v682 = KeGetCurrentIrql();
                  v683 = v680 & 0xFFFFFFFFFFFFF000uLL;
                  v684 = (v680 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
                  v685 = (v680 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1064:
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v686 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v21 + 1104))(
                             v683,
                             0LL,
                             v681,
                             v675);
                    if ( v686 == -1073741267 )
                    {
                      if ( v682 <= 1u )
                      {
                        __writecr8(v682);
                        KeGetCurrentIrql();
                        goto LABEL_1064;
                      }
                    }
                    else if ( v686 < 0 )
                    {
                      __writecr8(v682);
                      v45 = 0;
LABEL_1074:
                      v41 = *((_QWORD *)v50 + 1);
                      if ( !*(_DWORD *)(v21 + 1872) )
                      {
                        *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v21 + 1896) = *(int *)v50;
                        *(_QWORD *)(v21 + 1904) = v41;
                        *(_DWORD *)(v21 + 1872) = 1;
                      }
LABEL_1071:
                      *(_DWORD *)(v21 + 1672) += 16 * *((_DWORD *)v50 + 4);
LABEL_1072:
                      v43 = *v2;
                      goto LABEL_269;
                    }
                    v681 = 4096LL;
                    v683 += 4096LL;
                    v685 += 4096LL;
                    if ( v685 == v684 )
                    {
                      __writecr8(v682);
                      v45 = 0;
                      goto LABEL_1071;
                    }
                  }
                }
              }
            }
            if ( v65 == 15 )
            {
              if ( *(_DWORD *)(v21 + 1960) == 11 )
              {
                *(_DWORD *)(v21 + 1672) += 256;
                v646 = *(_QWORD *)(v21 + 1344);
                v647 = (*(__int64 (__fastcall **)(__int64))(v21 + 712))(v646);
                if ( v647 )
                {
                  v648 = (*(__int64 (__fastcall **)(__int64))(v21 + 720))(v647);
                  v649 = *((_QWORD *)v50 + 3);
                  if ( v649 )
                  {
                    if ( v649 != v648 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v50;
                      *(_QWORD *)(v21 + 1904) = v648;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                  }
                  else
                  {
                    v650 = *(_QWORD *)(v21 + 1992);
                    if ( (!*(_DWORD *)(v21 + 1988) || v648 < v650 || v648 > v650 + *(unsigned int *)(v21 + 1988) - 1LL)
                      && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v50;
                      *(_QWORD *)(v21 + 1904) = v648;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    *((_QWORD *)v50 + 3) = v648;
                  }
                  (*(void (__fastcall **)(__int64, __int64))(v21 + 728))(v646, v647);
                }
              }
              goto LABEL_269;
            }
            if ( v65 != 21 )
            {
              if ( v65 != 24 )
              {
                if ( v65 == 25 )
                {
                  v211 = *(_QWORD ***)(v21 + 1256);
                  v212 = *(__int64 (**)(void))(v21 + 872);
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v211;
                  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 0;
                  v213 = v212();
                  CurrentThread = KeGetCurrentThread();
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v213;
                  (*(void (__fastcall **)(struct _KTHREAD *))(v21 + 344))(CurrentThread);
                  LOBYTE(v215) = 1;
                  (*(void (__fastcall **)(_QWORD, __int64))(v21 + 224))(*(_QWORD *)(v21 + 1264), v215);
                  v216 = 0;
                  v217 = **(unsigned int ***)(v21 + 1480);
                  v218 = *v217;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v217 + 4;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = &v217[6 * v218 + 4];
                  if ( *((_BYTE *)v217 + 12) )
                  {
                    v219 = *v211;
                    LODWORD(v218) = 0;
                    while ( v219 != v211 )
                    {
                      v219 = (_QWORD *)*v219;
                      LODWORD(v218) = v218 + 1;
                    }
                  }
                  v220 = *(unsigned int *)(v21 + 1648);
                  v221 = __rdtsc();
                  v222 = __ROR8__(v221, 3);
                  v223 = (v222 ^ v221) * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C0) = *((_QWORD *)&v223 + 1);
                  v224 = (WORD4(v223) ^ (unsigned __int16)(8193 * (v222 ^ v221))) & 0x7FF;
                  v225 = __rdtsc();
                  v226 = (__ROR8__(v225, 3) ^ v225) * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4C8) = *((_QWORD *)&v226 + 1);
                  v227 = (*((_QWORD *)&v226 + 1) ^ (unsigned __int64)v226) % (unsigned int)(v224 + 1);
                  v228 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v21 + 232))(
                           512LL,
                           (unsigned int)(v224 + 8 * v218),
                           v220);
                  v229 = v228;
                  if ( v228 )
                  {
                    v230 = v227;
                    v231 = (_QWORD *)v228;
                    if ( (unsigned int)v227 >= 8 )
                    {
                      v232 = (unsigned __int64)(unsigned int)v227 >> 3;
                      do
                      {
                        v233 = __rdtsc();
                        v230 -= 8;
                        v234 = (__ROR8__(v233, 3) ^ v233) * (unsigned __int128)0x7010008004002001uLL;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D0) = *((_QWORD *)&v234 + 1);
                        *v231++ = v234 ^ *((_QWORD *)&v234 + 1);
                        --v232;
                      }
                      while ( v232 );
                      v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      v211 = *(_QWORD ***)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    }
                    if ( v230 )
                    {
                      v235 = __rdtsc();
                      v236 = (__ROR8__(v235, 3) ^ v235) * (unsigned __int128)0x7010008004002001uLL;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x4D8) = *((_QWORD *)&v236 + 1);
                      v237 = v236 ^ *((_QWORD *)&v236 + 1);
                      do
                      {
                        *(_BYTE *)v231 = v237;
                        v231 = (_QWORD *)((char *)v231 + 1);
                        v237 >>= 8;
                        --v230;
                      }
                      while ( v230 );
                    }
                    v238 = v224 - v227;
                    v239 = (_QWORD *)((unsigned int)v227 + v229 + (unsigned int)(8 * v218));
                    if ( v238 >= 8 )
                    {
                      v231 = (_QWORD *)((unsigned __int64)v238 >> 3);
                      do
                      {
                        v240 = __rdtsc();
                        v238 -= 8;
                        v241 = (__ROR8__(v240, 3) ^ v240) * (unsigned __int128)0x7010008004002001uLL;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C0) = *((_QWORD *)&v241 + 1);
                        *v239++ = v241 ^ *((_QWORD *)&v241 + 1);
                        v231 = (_QWORD *)((char *)v231 - 1);
                      }
                      while ( v231 );
                    }
                    if ( v238 )
                    {
                      v242 = __rdtsc();
                      v243 = (__ROR8__(v242, 3) ^ v242) * (unsigned __int128)0x7010008004002001uLL;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E0) = *((_QWORD *)&v243 + 1);
                      v244 = v243 ^ *((_QWORD *)&v243 + 1);
                      do
                      {
                        *(_BYTE *)v239 = v244;
                        v239 = (_QWORD *)((char *)v239 + 1);
                        v244 >>= 8;
                        --v238;
                      }
                      while ( v238 );
                    }
                    v245 = v229 + (unsigned int)v227;
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = v229;
                    if ( v245 )
                    {
                      v246 = *v211;
                      while ( v246 != v211 )
                      {
                        v247 = v246[6];
                        if ( !(*(unsigned int (__fastcall **)(__int64))(v21 + 664))(v247) && v216 < (unsigned int)v218 )
                          *(_QWORD *)(v245 + 8LL * v216++) = v247;
                        v246 = (_QWORD *)*v246;
                        ++*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      }
                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD *))(v21 + 904))(v245, v216, v239, v231);
                      v248 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      v249 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                      do
                      {
                        v250 = *(_QWORD *)(v248 + 8);
                        if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v21 + 664))(v250) )
                        {
                          v251 = v216 - 1;
                          v252 = 0;
                          if ( (int)(v216 - 1) < 0 )
                            goto LABEL_464;
                          do
                          {
                            v253 = (v251 + v252) >> 1;
                            v254 = *(_QWORD *)(v245 + 8LL * v253);
                            if ( v250 >= v254 )
                            {
                              if ( v250 <= v254 )
                                break;
                              v252 = v253 + 1;
                            }
                            else
                            {
                              if ( !v253 )
                                goto LABEL_464;
                              v251 = v253 - 1;
                            }
                          }
                          while ( v251 >= v252 );
                          if ( v251 < v252 )
                          {
LABEL_464:
                            if ( !*(_DWORD *)(v21 + 1872) )
                            {
                              v255 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v21 + 1888) = (char *)v255 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v21 + 1896) = *v255;
                              *(_QWORD *)(v21 + 1904) = v250;
                              *(_DWORD *)(v21 + 1872) = 1;
                            }
                          }
                        }
                        v248 += 24LL;
                      }
                      while ( v248 < v249 );
                      v45 = 0;
LABEL_468:
                      (*(void (__fastcall **)(_QWORD))(v21 + 264))(*(_QWORD *)(v21 + 1264));
                      (*(void (**)(void))(v21 + 352))();
                      (*(void (__fastcall **)(_QWORD))(v21 + 880))(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                             + 0x48));
                      if ( *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) )
                      {
                        *(_DWORD *)(v21 + 1672) += *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) << 9;
                        (*(void (__fastcall **)(_QWORD))(v21 + 240))(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                               + 0x178));
                      }
                      goto LABEL_268;
                    }
                  }
                  else
                  {
                    ++*(_DWORD *)(v21 + 2136);
                  }
                  v45 = 0;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x178) = 0LL;
                  goto LABEL_468;
                }
                goto LABEL_2048;
              }
              if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 && (*(_DWORD *)(v21 + 2012) & 0x1000) == 0 )
              {
                v256 = __rdtsc();
                v257 = (__ROR8__(v256, 3) ^ v256) * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E8) = *((_QWORD *)&v257 + 1);
                *(_DWORD *)(v21 + 1668) = ((unsigned __int64)v257 ^ *((_QWORD *)&v257 + 1)) % 5;
              }
LABEL_473:
              v258 = *(_DWORD *)(v21 + 1668);
              if ( !v258 )
              {
                v633 = v50;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F0) = 0LL;
                for ( ii = 0; ; ++ii )
                {
                  v640 = (*(__int64 (__fastcall **)(_DWORD *))(v21 + 752))(v2 + 124);
                  if ( !v640 )
                    break;
                  if ( !(*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 504))(v640, v2 + 236) )
                  {
                    if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                    {
                      v634 = *(_QWORD **)(v21 + 2224);
                      v635 = 48;
                      v636 = 6LL;
                      do
                      {
                        v635 -= 8;
                        *v634 = *(_QWORD *)v633;
                        v633 += 8;
                        ++v634;
                        --v636;
                      }
                      while ( v636 );
                      if ( v635 )
                      {
                        do
                        {
                          v637 = *v633++;
                          *(_BYTE *)v634 = v637;
                          v634 = (_QWORD *)((char *)v634 + 1);
                          --v635;
                        }
                        while ( v635 );
                        v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      }
                      v633 = *(char **)(v21 + 2224);
                    }
                    *((_QWORD *)v633 + 3) = v640;
                    v638 = *(_QWORD *)(v21 + 1352);
                    *(_QWORD *)v638 = v633;
                    *(_DWORD *)(v638 + 16) = 48;
                    v639 = *(_QWORD *)(v21 + 1352);
                    *(_QWORD *)(v639 + 8) = v640;
                    *(_DWORD *)(v639 + 20) = 4096;
                    if ( !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v633 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v633;
                      *(_QWORD *)(v21 + 1904) = 3LL;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                  }
                }
                goto LABEL_983;
              }
              v259 = v258 - 1;
              if ( !v259 )
              {
                v624 = v50;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E8) = 0LL;
                ii = 0;
                v625 = KeGetCurrentIrql();
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v625;
                __writecr8(0xCuLL);
                v626 = (*(__int64 (__fastcall **)(_DWORD *))(v21 + 760))(v2 + 122);
                if ( v626 )
                {
                  do
                  {
                    ++ii;
                    if ( !(*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 504))(v626, v2 + 234) )
                    {
                      if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                      {
                        v627 = *(_QWORD **)(v21 + 2224);
                        v628 = 48;
                        v629 = 6LL;
                        do
                        {
                          v628 -= 8;
                          *v627 = *(_QWORD *)v624;
                          v624 += 8;
                          ++v627;
                          --v629;
                        }
                        while ( v629 );
                        if ( v628 )
                        {
                          do
                          {
                            v630 = *v624++;
                            *(_BYTE *)v627 = v630;
                            v627 = (_QWORD *)((char *)v627 + 1);
                            --v628;
                          }
                          while ( v628 );
                          v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                        }
                        v624 = *(char **)(v21 + 2224);
                      }
                      *((_QWORD *)v624 + 3) = v626;
                      v631 = *(_QWORD *)(v21 + 1352);
                      *(_QWORD *)v631 = v624;
                      *(_DWORD *)(v631 + 16) = 48;
                      v632 = *(_QWORD *)(v21 + 1352);
                      *(_QWORD *)(v632 + 8) = v626;
                      *(_DWORD *)(v632 + 20) = 4096;
                      if ( !*(_DWORD *)(v21 + 1872) )
                      {
                        *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v21 + 1888) = v624 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v21 + 1896) = *(int *)v624;
                        *(_QWORD *)(v21 + 1904) = 4LL;
                        *(_DWORD *)(v21 + 1872) = 1;
                      }
                    }
                    v626 = (*(__int64 (__fastcall **)(_DWORD *))(v21 + 760))(v2 + 122);
                  }
                  while ( v626 );
                  v625 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                }
                __writecr8((unsigned __int8)v625);
                goto LABEL_983;
              }
              v260 = v259 - 1;
              if ( v260 )
              {
                v41 = (unsigned int)(v260 - 1);
                if ( (_DWORD)v41 )
                {
                  v41 = (unsigned int)(v41 - 1);
                  if ( !(_DWORD)v41 )
                  {
                    v271 = *(__int64 (__fastcall **)(_QWORD))(v21 + 776);
                    ii = 0;
                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 0;
                    v272 = v271(0LL);
                    if ( v272 )
                    {
                      v273 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      do
                      {
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1D8) = 0LL;
                        v274 = v273;
                        v275 = 1;
                        v276 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 768))(v272, v2 + 118);
                        if ( v276 )
                        {
                          do
                          {
                            ++v275;
                            if ( !(*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 504))(v276, v2 + 216) )
                            {
                              if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                              {
                                v277 = *(_QWORD **)(v21 + 2224);
                                v278 = 48;
                                v279 = 6LL;
                                do
                                {
                                  v278 -= 8;
                                  *v277 = *(_QWORD *)v274;
                                  v274 += 8;
                                  ++v277;
                                  --v279;
                                }
                                while ( v279 );
                                if ( v278 )
                                {
                                  do
                                  {
                                    v280 = *v274++;
                                    *(_BYTE *)v277 = v280;
                                    v277 = (_QWORD *)((char *)v277 + 1);
                                    --v278;
                                  }
                                  while ( v278 );
                                  v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                }
                                v274 = *(char **)(v21 + 2224);
                              }
                              *((_QWORD *)v274 + 3) = v276;
                              *((_QWORD *)v274 + 4) = v272;
                              v281 = *(_QWORD *)(v21 + 1352);
                              *(_QWORD *)v281 = v274;
                              *(_DWORD *)(v281 + 16) = 48;
                              v282 = *(_QWORD *)(v21 + 1352);
                              *(_QWORD *)(v282 + 8) = v276;
                              *(_DWORD *)(v282 + 20) = 4096;
                              if ( !*(_DWORD *)(v21 + 1872) )
                              {
                                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v21 + 1888) = v274 - 0x4C48B4211BBACBEBLL;
                                *(_QWORD *)(v21 + 1896) = *(int *)v274;
                                *(_QWORD *)(v21 + 1904) = 6LL;
                                *(_DWORD *)(v21 + 1872) = 1;
                              }
                            }
                            v276 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 768))(v272, v2 + 118);
                          }
                          while ( v276 );
                          ii = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
                          v273 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        }
                        v283 = *(__int64 (__fastcall **)(__int64))(v21 + 776);
                        ii += v275;
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = ii;
                        v272 = v283(v272);
                      }
                      while ( v272 );
                    }
                    goto LABEL_983;
                  }
                  if ( (_DWORD)v41 == 1 )
                  {
                    v261 = v50;
                    *(_BYTE *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x64) = -1;
                    ii = 0;
                    v263 = 0;
                    v264 = 0LL;
                    do
                    {
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x208) = 0LL;
                      while ( (*(unsigned int (__fastcall **)(_QWORD, _DWORD *, _DWORD *, _DWORD *))(v21 + 1048))(
                                v263,
                                v2 + 130,
                                v2 + 25,
                                v2 + 84) )
                      {
                        ++ii;
                        if ( !(*(__int64 (__fastcall **)(_QWORD, _DWORD *))(v21 + 504))(
                                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x150),
                                v2 + 380) )
                        {
                          if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                          {
                            v265 = *(_QWORD **)(v21 + 2224);
                            v266 = 48;
                            v267 = 6LL;
                            do
                            {
                              v266 -= 8;
                              *v265 = *(_QWORD *)v261;
                              v261 += 8;
                              ++v265;
                              --v267;
                            }
                            while ( v267 );
                            if ( v266 )
                            {
                              do
                              {
                                v268 = *v261++;
                                *(_BYTE *)v265 = v268;
                                v265 = (_QWORD *)((char *)v265 + 1);
                                --v266;
                              }
                              while ( v266 );
                              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                            }
                            v261 = *(char **)(v21 + 2224);
                          }
                          *((_QWORD *)v261 + 3) = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x150);
                          v269 = *(_QWORD *)(v21 + 1352);
                          *(_QWORD *)v269 = v261;
                          *(_DWORD *)(v269 + 16) = 48;
                          v270 = *(_QWORD *)(v21 + 1352);
                          *(_QWORD *)(v270 + 8) = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x150);
                          *(_DWORD *)(v270 + 20) = 4096;
                          if ( !*(_DWORD *)(v21 + 1872) )
                          {
                            *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v21 + 1888) = v261 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v21 + 1896) = *(int *)v261;
                            *(_QWORD *)(v21 + 1904) = v264;
                            *(_DWORD *)(v21 + 1872) = 1;
                          }
                        }
                      }
                      ++v263;
                      ++v264;
                    }
                    while ( v263 < 3 );
                    goto LABEL_983;
                  }
                  *(_DWORD *)(v21 + 1668) = 0;
                  goto LABEL_986;
                }
                v63 = (*(_DWORD *)(v21 + 2008) & 0x40000000) == 0;
                v284 = (_BYTE *)v21;
                v285 = *(__int64 **)(v21 + 1192);
                ii = 0;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v21;
                v286 = *v285;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = *v285;
                if ( !v63 )
                  goto LABEL_983;
                v41 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                v287 = *(_QWORD *)(v41 + 40);
                if ( v287 )
                {
                  ii = 1;
                  if ( v286 != v287 )
                  {
                    *(_QWORD *)(v41 + 24) = v286;
                    v288 = *(_QWORD *)(v21 + 1352);
                    *(_QWORD *)v288 = v41;
                    *(_DWORD *)(v288 + 16) = 48;
                    v289 = *(_QWORD *)(v21 + 1352);
                    *(_QWORD *)(v289 + 8) = v286;
                    *(_DWORD *)(v289 + 20) = 4096;
                    if ( !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v41 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v41;
                      *(_QWORD *)(v21 + 1904) = 5LL;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                  }
                  goto LABEL_983;
                }
                if ( !v286 )
                  goto LABEL_983;
                v290 = *(__int64 (__fastcall **)(__int64, _DWORD *, _DWORD *))(v21 + 496);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = 1;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v21;
                v291 = v290(v286, v2 + 34, v2 + 24);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v291;
                v292 = v291;
                if ( !v291 )
                  goto LABEL_518;
                v293 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                v294 = v2 + 78;
                v295 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x60);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v295;
                v296 = 0xFFFFFFFFLL;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v293;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) = 0LL;
                v297 = 4;
                v298 = 1LL;
                do
                {
                  *v294++ = 0;
                  --v297;
                }
                while ( v297 );
                v299 = 0;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
                if ( *(_DWORD *)(v21 + 1644) )
                {
                  LODWORD(v298) = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x138);
                  LODWORD(v296) = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x134);
                  v300 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x130);
                  while ( 1 )
                  {
                    v301 = 0;
                    v302 = v21;
                    if ( *(_QWORD *)(v21 + 2216) )
                      v302 = *(_QWORD *)(v21 + 2216);
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v302;
                    v303 = (int *)(v302 + *(unsigned int *)(v302 + 1640));
                    if ( v300 && (unsigned int)v296 <= v299 )
                    {
                      v301 = v296;
                      v303 = (int *)(v302 + (unsigned int)v298);
                    }
                    if ( v301 != v299 )
                      break;
LABEL_552:
                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x130) = 1;
                    v298 = (unsigned int)((_DWORD)v303 - v302);
                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x134) = v301;
                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x138) = v298;
                    v300 = 1;
                    v311 = *v303;
                    v296 = v301;
                    if ( (unsigned int)v311 <= 0x2B )
                    {
                      v312 = 0x80000001002LL;
                      if ( _bittest64(&v312, v311) )
                      {
                        if ( *((_QWORD *)v303 + 1) == v292 && v303[4] == v295 )
                          goto LABEL_562;
                      }
                    }
                    if ( (unsigned int)(v311 - 33) <= 1 && *((_QWORD *)v303 + 4) == v293 )
                      goto LABEL_562;
                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = ++v299;
                    if ( v299 >= *(_DWORD *)(v21 + 1644) )
                      goto LABEL_561;
                  }
                  v304 = v299 - v301;
                  v301 = v299;
                  while ( 1 )
                  {
                    v305 = *v303;
                    if ( *v303 > 12 )
                      break;
                    if ( v305 == 12 )
                      goto LABEL_544;
                    v306 = v305 - 1;
                    if ( !v306 )
                      goto LABEL_544;
                    v307 = v306 - 6;
                    if ( v307 )
                    {
                      v308 = v307 - 1;
                      if ( !v308 )
                      {
                        v310 = *((unsigned __int16 *)v303 + 16);
LABEL_549:
                        v309 = (v310 + 55) & 0xFFFFFFF8;
                        goto LABEL_550;
                      }
                      if ( v308 != 2 )
                        goto LABEL_546;
                      v309 = (unsigned int)(16 * (v303[7] + 3));
                    }
                    else
                    {
                      v309 = (unsigned int)(24 * (v303[6] + 2));
                    }
LABEL_550:
                    v303 = (int *)((char *)v303 + v309);
                    if ( !--v304 )
                    {
                      v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      v302 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      v299 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      v293 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      v295 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                      v292 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      goto LABEL_552;
                    }
                  }
                  if ( v305 == 28 )
                  {
                    v310 = *((unsigned __int16 *)v303 + 20);
                    goto LABEL_549;
                  }
                  if ( v305 == 30 )
                  {
                    v309 = (((v303[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v303 + 20) + 2);
                    goto LABEL_550;
                  }
                  if ( v305 <= 32 )
                  {
LABEL_546:
                    v309 = 48LL;
                    goto LABEL_550;
                  }
                  if ( v305 <= 34 )
                  {
                    v309 = 20
                         * (unsigned int)(((v303[8] & 0xFFF) + (unsigned __int64)(unsigned int)v303[10] + 4095) >> 12)
                         + 48;
                    goto LABEL_550;
                  }
                  if ( v305 != 43 )
                    goto LABEL_546;
LABEL_544:
                  v309 = 4 * (v303[4] / 0xCu) + 48;
                  goto LABEL_550;
                }
LABEL_561:
                v303 = 0LL;
LABEL_562:
                v286 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = v303;
                if ( v303 )
                {
                  v41 = 3221225742LL;
                  goto LABEL_934;
                }
                v313 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(v21 + 664))(v286, v298, 0LL, v296);
                v63 = (*(_DWORD *)(v21 + 2008) & 0x40000000) == 0;
                v315 = v313;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v313;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                               + 0x60);
                if ( !v63 )
                {
                  v316 = sub_14080CF60(
                           v2 + 50,
                           *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88),
                           9LL);
                  v284 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8);
                  v41 = v316;
                  goto LABEL_934;
                }
                v317 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _DWORD *))(v21 + 480);
                v318 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2F0) = 0LL;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C0) = 0;
                LOBYTE(v314) = 1;
                v319 = v317(v318, v314, 0LL, v2 + 24);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D8) = v319;
                v320 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                v321 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) & (unsigned int)-(v319 != 0);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v321;
                v322 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _DWORD *))(v21 + 480);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B4) = v321;
                LOBYTE(v321) = 1;
                v323 = v322(v320, v321, 12LL, v2 + 24);
                v324 = v323;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v323;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E0) = v323;
                LOBYTE(v324) = 1;
                v325 = v323 != 0 ? *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) : 0;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v325;
                v326 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _DWORD *))(v21 + 480);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = v325;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B8) = v325;
                v327 = v326(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88), v324, 10LL, v2 + 24);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2E8) = v327;
                v328 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                v329 = v327 != 0 ? *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) : 0;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v329;
                v330 = *(__int64 (__fastcall **)(__int64))(v21 + 488);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1BC) = v329;
                v331 = v330(v328);
                if ( !v331 )
                {
LABEL_518:
                  v41 = 3221225595LL;
                  goto LABEL_934;
                }
                v332 = *(unsigned int *)(v21 + 1604);
                v333 = *(unsigned int *)(v21 + 1916);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2D0) = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1B0) = *(_DWORD *)(v331 + 84);
                v334 = v332 + 240;
                v335 = v315 != 0 ? 0xB : 0;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v335;
                if ( (unsigned int)(v332 + 240) <= *(_DWORD *)(v21 + 2140) )
                {
                  v337 = v21;
                  *(_DWORD *)(v21 + 1604) = v334;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v21;
                }
                else
                {
                  v336 = sub_1402AEFBC(v21, v334, v333);
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v336;
                  v337 = v336;
                  if ( !v336 )
                  {
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0LL;
                    goto LABEL_585;
                  }
                  v338 = *(_DWORD *)(v21 + 2008);
                  if ( (v338 & 4) == 0 )
                  {
                    v339 = *(unsigned int *)(v21 + 1604);
                    v340 = *(_QWORD *)(v21 + 1576);
                    v341 = (_QWORD *)v21;
                    v342 = (v338 & 0x20000000) != 0 ? *(_DWORD *)(v21 + 1916) : 0;
                    if ( (unsigned int)v339 >= 8 )
                    {
                      v343 = (unsigned __int64)(unsigned int)v339 >> 3;
                      do
                      {
                        *v341 = 0LL;
                        v339 = (unsigned int)(v339 - 8);
                        ++v341;
                        --v343;
                      }
                      while ( v343 );
                    }
                    for ( ; (_DWORD)v339; v339 = (unsigned int)(v339 - 1) )
                    {
                      *(_BYTE *)v341 = 0;
                      v341 = (_QWORD *)((char *)v341 + 1);
                    }
                    v344 = *(_DWORD *)(v337 + 1916);
                    *(_DWORD *)(v337 + 1916) = v342;
                    if ( v342 == 3 )
                    {
                      (*(void (__fastcall **)(__int64, __int64, __int64))(v337 + 856))(v340, v339, 1LL);
                    }
                    else
                    {
                      v345 = 0;
                      if ( (*(_DWORD *)(v337 + 2008) & 0x10000000) == 0 )
                        v345 = v342;
                      if ( v345 )
                        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v337 + 536))(
                          v340 - 8,
                          *(_QWORD *)(v340 - 8),
                          1LL);
                      else
                        (*(void (__fastcall **)(__int64, __int64, __int64))(v337 + 240))(v340, v339, 1LL);
                    }
                    *(_DWORD *)(v337 + 1916) = v344;
                  }
                  *(_DWORD *)(v337 + 2008) &= ~4u;
                  v335 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                }
                *(_DWORD *)(v337 + 1644) += 5;
                v346 = v337 + v332;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = v337 + v332;
                v347 = v2 + 180;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = v337 + v332;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = ((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                      + 720;
                v348 = v2 + 108;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = 5LL;
                do
                {
                  v349 = *v348;
                  v350 = 48;
                  v351 = (_QWORD *)*v347;
                  v352 = (_QWORD *)v346;
                  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v349;
                  v353 = 6LL;
                  do
                  {
                    *v352 = 0LL;
                    v350 -= 8;
                    ++v352;
                    --v353;
                  }
                  while ( v353 );
                  for ( ; v350; --v350 )
                  {
                    *(_BYTE *)v352 = 0;
                    v352 = (_QWORD *)((char *)v352 + 1);
                  }
                  *(_DWORD *)v346 = v335;
                  *(_QWORD *)(v346 + 8) = v351;
                  v354 = v351;
                  *(_DWORD *)(v346 + 16) = v349;
                  v355 = (const char *)v351;
                  *(_DWORD *)(v337 + 1672) += v349;
                  v356 = *(_DWORD *)(v337 + 1652);
                  v357 = *(_QWORD *)(v337 + 1656);
                  if ( v351 < (_QWORD *)((char *)v351 + v349) )
                  {
                    do
                    {
                      _mm_prefetch(v355, 0);
                      v355 += 64;
                    }
                    while ( v355 < (const char *)v351 + v349 );
                  }
                  v358 = *(_QWORD *)(v337 + 1656);
                  v359 = (unsigned int)v349 >> 7;
                  if ( (unsigned int)v349 >> 7 )
                  {
                    do
                    {
                      v360 = 8LL;
                      do
                      {
                        v361 = v354[1] ^ __ROL8__(*v354 ^ v358, v356);
                        v354 += 2;
                        v358 = __ROL8__(v361, v356);
                        --v360;
                      }
                      while ( v360 );
                      v362 = __ROL8__(v357 ^ ((char *)v354 - (char *)v351), 17) ^ v357 ^ ((char *)v354 - (char *)v351);
                      v363 = (v362 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x368) = v363;
                      v356 = ((unsigned __int8)(v363 ^ v362) ^ (unsigned __int8)v356) & 0x3F;
                      if ( !v356 )
                        LOBYTE(v356) = 1;
                      --v359;
                    }
                    while ( v359 );
                    v337 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    LODWORD(v349) = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                    v347 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  }
                  v364 = v349 & 0x7F;
                  if ( v364 >= 8 )
                  {
                    v365 = (unsigned __int64)(v349 & 0x7F) >> 3;
                    do
                    {
                      v358 = __ROL8__(*v354++ ^ v358, v356);
                      v364 -= 8;
                      --v365;
                    }
                    while ( v365 );
                  }
                  if ( v364 )
                  {
                    do
                    {
                      v366 = *(unsigned __int8 *)v354;
                      v354 = (_QWORD *)((char *)v354 + 1);
                      v358 = __ROL8__(v366 ^ v358, v356);
                      --v364;
                    }
                    while ( v364 );
                    v337 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  }
                  for ( jj = v358; ; LODWORD(v358) = jj ^ v358 )
                  {
                    jj >>= 31;
                    if ( !jj )
                      break;
                  }
                  v335 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                  ++v347;
                  *(_DWORD *)(v346 + 20) = v358 & 0x7FFFFFFF;
                  ++v348;
                  *(_DWORD *)(v337 + 1672) += v349;
                  v346 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) + 48LL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v347;
                  v63 = (*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50))-- == 1LL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1E0) = v346;
                }
                while ( !v63 );
                v368 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0);
                v369 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v370 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                *(_DWORD *)v368 = 44;
                *(_QWORD *)(v368 + 24) = v369;
                if ( (*(_DWORD *)(v337 + 2008) & 0x10200000) == 0 )
                {
                  if ( v370 )
                  {
LABEL_616:
                    *(_DWORD *)(v368 + 32) |= 2u;
                    goto LABEL_617;
                  }
                  if ( (*(_DWORD *)(v337 + 2012) & 0x8000) == 0 )
                  {
LABEL_617:
                    v371 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                    v372 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                    v373 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                    v284 = (_BYTE *)v337;
                    v1442 = v2 + 107;
                    v1441 = v2 + 72;
                    LODWORD(v1440) = 9;
                    LODWORD(BugCheckParameter4) = v370;
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v337;
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v337;
                    v374 = sub_1402AE570(
                             (int)v2 + 168,
                             v373,
                             v372,
                             v371,
                             BugCheckParameter4,
                             v1440,
                             (__int64)v1441,
                             (__int64)v1442);
                    v41 = (unsigned int)v374;
                    if ( v374 < 0 )
                    {
                      v286 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                      goto LABEL_934;
                    }
                    v284 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                    v375 = &v284[*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) - v337];
                    v376 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1AC)
                         - *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x120);
                    v377 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88)
                                    + *(unsigned int *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x120));
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) = v375;
                    v378 = v375 + 192;
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v284;
                    v379 = 48;
                    v380 = v378;
                    v381 = 6LL;
                    do
                    {
                      *v380 = 0LL;
                      v379 -= 8;
                      ++v380;
                      --v381;
                    }
                    while ( v381 );
                    for ( ; v379; --v379 )
                    {
                      *(_BYTE *)v380 = 0;
                      v380 = (_QWORD *)((char *)v380 + 1);
                    }
                    v382 = v377;
                    *(_DWORD *)v378 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    v383 = (const char *)v377;
                    *((_QWORD *)v378 + 1) = v377;
                    *((_DWORD *)v378 + 4) = v376;
                    *((_DWORD *)v284 + 418) += v376;
                    v384 = *((_DWORD *)v284 + 413);
                    v385 = *((_QWORD *)v284 + 207);
                    v386 = (unsigned __int64)v377 + v376;
                    if ( (unsigned __int64)v377 < v386 )
                    {
                      do
                      {
                        _mm_prefetch(v383, 0);
                        v383 += 64;
                      }
                      while ( (unsigned __int64)v383 < v386 );
                    }
                    v387 = *((_QWORD *)v284 + 207);
                    v388 = v376 >> 7;
                    if ( v376 >> 7 )
                    {
                      do
                      {
                        v389 = 8LL;
                        do
                        {
                          v390 = v382[1] ^ __ROL8__(*v382 ^ v387, v384);
                          v382 += 2;
                          v387 = __ROL8__(v390, v384);
                          --v389;
                        }
                        while ( v389 );
                        v391 = __ROL8__(v385 ^ ((char *)v382 - (char *)v377), 17) ^ v385 ^ ((char *)v382 - (char *)v377);
                        v392 = (v391 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x370) = v392;
                        v393 = v392 ^ v391 ^ v384;
                        v394 = 0xFFFFFFFFLL;
                        v384 = v393 & 0x3F;
                        if ( !v384 )
                          LOBYTE(v384) = 1;
                        --v388;
                      }
                      while ( v388 );
                      v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      v370 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                    }
                    else
                    {
                      v394 = 0xFFFFFFFFLL;
                    }
                    v395 = v376 & 0x7F;
                    if ( v395 >= 8 )
                    {
                      v396 = (unsigned __int64)v395 >> 3;
                      do
                      {
                        v387 = __ROL8__(*v382++ ^ v387, v384);
                        v395 -= 8;
                        --v396;
                      }
                      while ( v396 );
                    }
                    for ( ; v395; --v395 )
                    {
                      v397 = *(unsigned __int8 *)v382;
                      v382 = (_QWORD *)((char *)v382 + 1);
                      v387 = __ROL8__(v397 ^ v387, v384);
                    }
                    for ( kk = v387; ; v387 = (unsigned int)kk ^ (unsigned int)v387 )
                    {
                      kk >>= 31;
                      if ( !kk )
                        break;
                    }
                    LODWORD(v387) = v387 & 0x7FFFFFFF;
                    *((_DWORD *)v378 + 5) = v387;
                    v399 = (int *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0) + 96LL);
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = v399;
                    v400 = (v370 != 0) + 13;
                    if ( v399 )
                    {
                      v403 = v284;
                      *v399 = v400;
                      v416 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                      v415 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
LABEL_685:
                      if ( (*((_DWORD *)v403 + 502) & 0x40000000) != 0 && v416 )
                        sub_14017573C(
                          v403,
                          v415,
                          v416,
                          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) + 28LL);
                      v429 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x148);
                      v284 = v403;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v403;
                      *(_DWORD *)(v429 + 24) = 0;
                      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) + 24LL) |= 1u;
                      v430 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xF0);
                      v431 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                      *(_DWORD *)(v430 + 144) = 35;
                      *(_DWORD *)(v430 + 184) = *(_DWORD *)(v430 + 184) & 0xFFFFFFFE | (v370 != 0);
                      if ( *(_DWORD *)(v430 + 160) >= 0x94u )
                      {
                        v432 = *(_QWORD *)(v430 + 152);
                        v433 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int64, _QWORD *))v403
                                + 61))(
                                 v431,
                                 v394,
                                 v387,
                                 v382);
                        if ( !v433 )
                        {
                          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0LL;
                          goto LABEL_585;
                        }
                        v434 = *(unsigned int *)(v433 + 80);
                        *(_DWORD *)(v430 + 184) |= 2u;
                        v435 = v431 + v434;
                        v436 = *(_QWORD **)(v432 + 112);
                        if ( (unsigned __int64)v436 >= v431 && (unsigned __int64)v436 < v435 )
                        {
                          *(_QWORD *)(v430 + 168) = *v436;
                          *(_DWORD *)(v430 + 184) |= 4u;
                        }
                        v437 = *(_QWORD **)(v432 + 120);
                        if ( (unsigned __int64)v437 >= v431 && (unsigned __int64)v437 < v435 )
                        {
                          *(_QWORD *)(v430 + 176) = *v437;
                          *(_DWORD *)(v430 + 184) |= 8u;
                        }
                      }
                      v63 = (*((_DWORD *)v403 + 502) & 0x400000) == 0;
                      v438 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x88);
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v438;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v403;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v403;
                      if ( v63 )
                        goto LABEL_931;
                      v439 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned __int64, _QWORD *))v403 + 61))(
                               v438,
                               v394,
                               v387,
                               v382);
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v439;
                      v440 = v439;
                      if ( !v439 )
                        goto LABEL_699;
                      v441 = *(_WORD *)(v439 + 6);
                      v442 = *(unsigned int *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8)
                           * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                      *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = v441;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = *((_QWORD *)&v442 + 1) >> 3;
                      if ( !v441 )
                      {
                        if ( (*((_DWORD *)v403 + 502) & 0x200000) == 0 )
                        {
                          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x198) = -201326588;
                          KeBugCheckEx(
                            __ROR4__(*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x198), 90),
                            0xAuLL,
                            v438,
                            0LL,
                            0LL);
                        }
                        goto LABEL_702;
                      }
                      v443 = v441;
                      v444 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v441;
                      v445 = 3LL * (unsigned int)(*((_QWORD *)&v442 + 1) >> 3);
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v445 * 4;
                      v446 = 0;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = &v444[v445];
                      v447 = *(unsigned __int16 *)(v440 + 20) + v440 + 24;
                      *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = 0;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v447;
                      v448 = (_DWORD *)v447;
                      do
                      {
                        v449 = v448[2];
                        v450 = v448[3];
                        if ( v448[4] > v449 )
                          v449 = v448[4];
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v450;
                        v451 = v449 + v450;
                        if ( v446 && v451 < *(_DWORD *)(v447 + 40LL * (v446 - 1) + 12) )
                        {
                          if ( (*((_DWORD *)v403 + 502) & 0x200000) == 0 )
                          {
                            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x170) = -201326588;
                            KeBugCheckEx(
                              __ROR4__(*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x170), 90),
                              0xAuLL,
                              v438,
                              1uLL,
                              0LL);
                          }
                          if ( !*((_DWORD *)v403 + 468) )
                          {
                            *((_QWORD *)v403 + 235) = v403 - 0x5C5FC0A76E374B18LL;
                            *((_QWORD *)v403 + 236) = 0LL;
                            *((_QWORD *)v403 + 237) = 271LL;
                            *((_QWORD *)v403 + 238) = v438;
                            *((_DWORD *)v403 + 468) = 1;
                          }
                          goto LABEL_699;
                        }
                        if ( v444 != *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) )
                        {
                          do
                          {
                            v452 = v444[1];
                            if ( *v444 >= v451 || v452 <= v450 )
                              break;
                            if ( *v444 < v450 || v452 > v451 )
                            {
                              if ( (*((_DWORD *)v403 + 502) & 0x200000) == 0 )
                              {
                                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x164) = -201326588;
                                KeBugCheckEx(
                                  __ROR4__(*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x164), 90),
                                  0xAuLL,
                                  v438,
                                  2uLL,
                                  0LL);
                              }
LABEL_702:
                              if ( !*((_DWORD *)v403 + 468) )
                              {
                                *((_QWORD *)v403 + 235) = v403 - 0x5C5FC0A76E374B18LL;
                                *((_QWORD *)v403 + 236) = 0LL;
                                *((_QWORD *)v403 + 237) = 271LL;
                                *((_QWORD *)v403 + 238) = v438;
                                *((_DWORD *)v403 + 468) = 1;
                              }
LABEL_699:
                              v41 = 3221225595LL;
LABEL_932:
                              v284 = v403;
LABEL_933:
                              v286 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
LABEL_934:
                              v608 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v284;
                              v609 = &v284[-v21];
                              v21 = (__int64)v284;
                              v610 = &v609[v608];
                              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v610;
                              if ( (int)(v41 + 0x80000000) < 0 || (_DWORD)v41 == -1073741554 )
                                *((_QWORD *)v610 + 5) = v286;
                              ii = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x98);
LABEL_983:
                              v45 = 0;
                              *(_DWORD *)(v21 + 1672) += ii << 12;
                              ++*(_DWORD *)(v21 + 1668);
                              if ( *(_DWORD *)(v21 + 1672) < *(_DWORD *)(v21 + 1676) )
                              {
                                v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                                goto LABEL_473;
                              }
LABEL_986:
                              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v21;
                              goto LABEL_268;
                            }
                            v453 = v444[2];
                            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x380) = v444;
                            if ( (v453 & 1) != 0 || (*(_BYTE *)(v453 + v438) & 0x20) != 0 )
                            {
                              v454 = v448[2];
                              v455 = v448[3];
                              if ( v448[4] > v454 )
                                v454 = v448[4];
                              v456 = v455 + v454;
                              v457 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, _QWORD))v403 + 128))(
                                                       v444,
                                                       *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                 + 0x80));
                              if ( *v457 >= v455 && v457[1] < v456 )
                              {
                                v458 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                              }
                              else
                              {
                                v458 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                                if ( (*((_DWORD *)v403 + 502) & 0x200000) == 0 )
                                {
                                  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x168) = -201326588;
                                  KeBugCheckEx(
                                    __ROR4__(*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x168), 90),
                                    0xAuLL,
                                    v458,
                                    ((_DWORD)v457 - (_DWORD)v458) | 0x80000000,
                                    0LL);
                                }
                                if ( !*((_DWORD *)v403 + 468) )
                                {
                                  *((_QWORD *)v403 + 235) = v403 - 0x5C5FC0A76E374B18LL;
                                  *((_QWORD *)v403 + 236) = 0LL;
                                  *((_QWORD *)v403 + 237) = 271LL;
                                  *((_QWORD *)v403 + 238) = v458;
                                  *((_DWORD *)v403 + 468) = 1;
                                }
                              }
                              v459 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v403
                                                      + 129))(
                                                       v457,
                                                       v458,
                                                       v458 + *v457);
                              if ( *v459 >= v455 && v459[1] < v456 )
                              {
                                v450 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                v438 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                              }
                              else
                              {
                                v438 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                                v460 = ((_DWORD)v459 - v438) | 0x80000000;
                                if ( (*((_DWORD *)v403 + 502) & 0x200000) == 0 )
                                {
                                  v1434 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                                  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C) = -201326588;
                                  KeBugCheckEx(
                                    __ROR4__(*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x16C), 90),
                                    0xAuLL,
                                    v1434,
                                    v460,
                                    0LL);
                                }
                                v450 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                                if ( !*((_DWORD *)v403 + 468) )
                                {
                                  *((_QWORD *)v403 + 235) = v403 - 0x5C5FC0A76E374B18LL;
                                  *((_QWORD *)v403 + 236) = 0LL;
                                  *((_QWORD *)v403 + 237) = 271LL;
                                  *((_QWORD *)v403 + 238) = v438;
                                  *((_DWORD *)v403 + 468) = 1;
                                }
                              }
                            }
                            v444 += 3;
                          }
                          while ( v444 != *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) );
                          v446 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                          v443 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                          v447 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                        }
                        ++v446;
                        v448 += 10;
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v446;
                      }
                      while ( v446 < v443 );
                      v461 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      v462 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      v463 = *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                      v464 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                      if ( v444 != *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) )
                      {
                        if ( (*((_DWORD *)v403 + 502) & 0x200000) == 0 )
                        {
                          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x160) = -201326588;
                          KeBugCheckEx(
                            __ROR4__(*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x160), 90),
                            0xAuLL,
                            v438,
                            3uLL,
                            0LL);
                        }
                        goto LABEL_702;
                      }
                      v465 = *((unsigned int *)v403 + 401);
                      v466 = ((v461 + 6) & 0xFFFFFFF8) + 24 * v443 + v465 + 48;
                      if ( v466 <= *((_DWORD *)v403 + 535) )
                      {
                        v468 = v403;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v403;
                        *((_DWORD *)v403 + 401) = v466;
                      }
                      else
                      {
                        v467 = sub_1402AEFBC(v403, v466, *((unsigned int *)v403 + 479));
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78) = v467;
                        v468 = (_BYTE *)v467;
                        if ( !v467 )
                        {
                          v41 = 3221225626LL;
                          goto LABEL_932;
                        }
                        v469 = *((_DWORD *)v403 + 502);
                        if ( (v469 & 4) == 0 )
                        {
                          v470 = *((_DWORD *)v403 + 401);
                          v471 = *((_QWORD *)v403 + 197);
                          v472 = (v469 & 0x20000000) != 0 ? *((_DWORD *)v403 + 479) : 0;
                          if ( v470 >= 8 )
                          {
                            v473 = (unsigned __int64)v470 >> 3;
                            do
                            {
                              *(_QWORD *)v403 = 0LL;
                              v470 -= 8;
                              v403 += 8;
                              --v473;
                            }
                            while ( v473 );
                          }
                          for ( ; v470; --v470 )
                            *v403++ = 0;
                          v474 = *((_DWORD *)v468 + 479);
                          *((_DWORD *)v468 + 479) = v472;
                          if ( v472 == 3 )
                          {
                            (*((void (__fastcall **)(__int64))v468 + 107))(v471);
                          }
                          else
                          {
                            v475 = 0;
                            if ( (*((_DWORD *)v468 + 502) & 0x10000000) == 0 )
                              v475 = v472;
                            if ( v475 )
                              (*((void (__fastcall **)(__int64, _QWORD))v468 + 67))(v471 - 8, *(_QWORD *)(v471 - 8));
                            else
                              (*((void (__fastcall **)(__int64))v468 + 30))(v471);
                          }
                          v468 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                          *((_DWORD *)v468 + 479) = v474;
                        }
                        *((_DWORD *)v468 + 502) &= ~4u;
                        v443 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                        v461 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      }
                      v476 = &v468[v465];
                      ++*((_DWORD *)v468 + 411);
                      v477 = &v468[v465];
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C0) = &v468[v465];
                      v478 = 48;
                      v479 = 6LL;
                      do
                      {
                        *v477 = 0LL;
                        v478 -= 8;
                        ++v477;
                        --v479;
                      }
                      while ( v479 );
                      for ( ; v478; --v478 )
                      {
                        *(_BYTE *)v477 = 0;
                        v477 = (_QWORD *)((char *)v477 + 1);
                      }
                      v480 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      *(_DWORD *)v476 = 30;
                      *((_QWORD *)v476 + 1) = v480;
                      *((_DWORD *)v476 + 4) = 0;
                      v481 = *((_QWORD *)v468 + 207);
                      for ( mm = v481; ; LODWORD(v481) = mm ^ v481 )
                      {
                        mm >>= 31;
                        if ( !mm )
                          break;
                      }
                      v483 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                      v63 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) == 0;
                      *((_DWORD *)v476 + 5) = v481 & 0x7FFFFFFF;
                      v484 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C0);
                      v403 = v468;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) = v484;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = v468;
                      *(_QWORD *)(v484 + 24) = v483;
                      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 32LL) = *(_DWORD *)(v462 + 80);
                      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 36LL) = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                      *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 40LL) = v463;
                      *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 42LL) = *(_WORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x118) + 42LL) & 0xFFFE | !v63;
                      v485 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x118);
                      v486 = *(unsigned __int16 *)(v485 + 40);
                      v487 = v485 + 48 + (((unsigned int)(v461 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v485 + 48;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v487;
                      v63 = (_DWORD)v461 == 0;
                      v488 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                      v489 = v487 + 24 * v486;
                      v490 = 12LL;
                      if ( v63 )
                        v490 = v464;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v489;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = (char *)v488 + v490;
                      if ( v443 )
                      {
                        v491 = v443;
                        v492 = (_DWORD *)(v487 + 8);
                        do
                        {
                          v493 = 2LL;
                          do
                          {
                            *(v492 - 2) = 0;
                            *(v492 - 1) = 0;
                            *v492 = 0x80000000;
                            v492 += 3;
                            --v493;
                          }
                          while ( v493 );
                          --v491;
                        }
                        while ( v491 );
                        v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      }
                      if ( v487 == v489 )
                      {
LABEL_931:
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC8) = v403;
                        v41 = 0LL;
                        goto LABEL_932;
                      }
                      v494 = *(unsigned __int8 **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                      while ( 1 )
                      {
                        v495 = 0;
                        if ( (*((_DWORD *)v494 + 9) & 0x2000000) != 0
                          || (v496 = *(_DWORD *)v494, *(_DWORD *)v494 == 1414090313)
                          && *((_DWORD *)v494 + 1) == 1195525195
                          || v496 == 1162297680
                          && ((v497 = *((_WORD *)v494 + 2), v497 == 30583) || v497 == 29303 || v497 == 30839)
                          || v496 == 1095914053 && *((_WORD *)v494 + 2) == 16724 )
                        {
                          v495 = 1;
                        }
                        else
                        {
                          v498 = (unsigned __int8 *)*((_QWORD *)v468 + 241);
                          v499 = v494;
                          v500 = (__int64 *)*((_QWORD *)v468 + 242);
                          v501 = (unsigned __int8 *)*((_QWORD *)v468 + 243);
                          v502 = (unsigned __int8 *)*((_QWORD *)v468 + 244);
                          v503 = 7;
                          while ( 1 )
                          {
                            v504 = *v499++;
                            v505 = *v498++;
                            if ( v504 != v505 )
                              break;
                            if ( !--v503 )
                              goto LABEL_804;
                          }
                          v506 = 8;
                          v507 = (__int64 *)v494;
                          do
                          {
                            v508 = *v507++;
                            v509 = *v500++;
                            if ( v508 != v509 )
                              goto LABEL_797;
                            v506 -= 8;
                          }
                          while ( v506 >= 8 );
                          if ( v506 )
                          {
                            while ( 1 )
                            {
                              v510 = *(unsigned __int8 *)v507;
                              v507 = (__int64 *)((char *)v507 + 1);
                              v511 = *(unsigned __int8 *)v500;
                              v500 = (__int64 *)((char *)v500 + 1);
                              if ( v510 != v511 )
                                break;
                              if ( !--v506 )
                                goto LABEL_804;
                            }
LABEL_797:
                            v512 = 4;
                            v513 = v494;
                            while ( 1 )
                            {
                              v514 = *v513++;
                              v515 = *v501++;
                              if ( v514 != v515 )
                                break;
                              if ( !--v512 )
                                goto LABEL_804;
                            }
                            v516 = 6;
                            v517 = v494;
                            while ( 1 )
                            {
                              v518 = *v517++;
                              v519 = *v502++;
                              if ( v518 != v519 )
                                break;
                              if ( !--v516 )
                                goto LABEL_804;
                            }
                          }
                          else
                          {
LABEL_804:
                            v495 = 1;
                          }
                          v488 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                          v483 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                          v468 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                        }
                        v520 = *((_DWORD *)v494 + 9);
                        if ( v520 < 0 )
                          v495 = 1;
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = v495;
                        if ( v495 && *(_DWORD *)v494 == 1414090313 && *((_DWORD *)v494 + 1) == 1195525195 )
                        {
                          if ( (*((_DWORD *)v468 + 503) & 0x2000) != 0 )
                            v495 = 0;
                          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = v495;
                        }
                        if ( (*((_DWORD *)v468 + 503) & 0x4000) != 0
                          && (v520 & 0x20000000) != 0
                          && (v483 == *((_QWORD *)v468 + 180) || v483 == *((_QWORD *)v468 + 181)) )
                        {
                          v495 = 1;
                          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = 1;
                        }
                        v521 = *((_DWORD *)v494 + 2);
                        v522 = *((_DWORD *)v494 + 3);
                        if ( *((_DWORD *)v494 + 4) > v521 )
                          v521 = *((_DWORD *)v494 + 4);
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v522;
                        v523 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                        v524 = v522 + v521;
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v524;
                        if ( v488 == v523 )
                        {
                          v525 = 0;
                          v526 = 0;
                        }
                        else
                        {
                          v525 = *v488;
                          v526 = v488[1];
                        }
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v526;
                        v527 = v522;
                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v525;
                        if ( v488 != v523 )
                        {
                          v528 = v525 < v522;
                          if ( v525 <= v522 )
                            goto LABEL_854;
                          if ( v526 <= v524 && !v495 )
                          {
                            v529 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                            v530 = 0;
                            v527 = v525;
                            v531 = v2 + 108;
                            *v529 = v522;
                            v529[1] = v525;
                            v532 = *v529;
                            v533 = v525 - v532;
                            v534 = v483 + v532;
                            v535 = v483 + v532 + v525 - (unsigned int)v532;
                            v536 = (unsigned __int64 *)(v2 + 180);
                            do
                            {
                              if ( v534 < *v536 + *v531 && v535 > *v536 )
                                goto LABEL_852;
                              ++v530;
                              ++v536;
                              ++v531;
                            }
                            while ( v530 < 5 );
                            v537 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                            v538 = (_QWORD *)v534;
                            v539 = (const char *)v534;
                            *(_DWORD *)(v537 + 1672) += v533;
                            v540 = *(_DWORD *)(v537 + 1652);
                            v541 = *(_QWORD *)(v537 + 1656);
                            if ( v534 < v535 )
                            {
                              do
                              {
                                _mm_prefetch(v539, 0);
                                v539 += 64;
                              }
                              while ( (unsigned __int64)v539 < v535 );
                            }
                            v542 = v533 >> 7;
                            v543 = v541;
                            if ( v533 >> 7 )
                            {
                              do
                              {
                                v544 = 8LL;
                                do
                                {
                                  v545 = v538[1] ^ __ROL8__(*v538 ^ v543, v540);
                                  v538 += 2;
                                  v543 = __ROL8__(v545, v540);
                                  --v544;
                                }
                                while ( v544 );
                                v546 = __ROL8__(v541 ^ ((unsigned __int64)v538 - v534), 17) ^ v541 ^ ((unsigned __int64)v538 - v534);
                                v547 = (v546 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x388) = v547;
                                v540 = ((unsigned __int8)(v547 ^ v546) ^ (unsigned __int8)v540) & 0x3F;
                                if ( !v540 )
                                  LOBYTE(v540) = 1;
                                --v542;
                              }
                              while ( v542 );
                              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                              v525 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                              v526 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
                            }
                            v548 = v533 & 0x7F;
                            if ( v548 >= 8 )
                            {
                              v549 = (unsigned __int64)v548 >> 3;
                              do
                              {
                                v543 = __ROL8__(*v538++ ^ v543, v540);
                                v548 -= 8;
                                --v549;
                              }
                              while ( v549 );
                            }
                            if ( v548 )
                            {
                              do
                              {
                                v550 = *(unsigned __int8 *)v538;
                                v538 = (_QWORD *)((char *)v538 + 1);
                                v543 = __ROL8__(v550 ^ v543, v540);
                                --v548;
                              }
                              while ( v548 );
                              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                            }
                            for ( nn = v543; ; LODWORD(v543) = nn ^ v543 )
                            {
                              nn >>= 31;
                              if ( !nn )
                                break;
                            }
                            v522 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                            *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) + 8LL) = v543 & 0x7FFFFFFF;
LABEL_852:
                            v488 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                            v523 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                            v468 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                            v524 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                          }
                        }
                        v528 = v525 < v522;
LABEL_854:
                        if ( v528 )
                        {
                          v553 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                        }
                        else
                        {
                          v552 = v526 <= v524;
                          v553 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                          if ( v552 && v488 != v523 )
                          {
                            v554 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                            v555 = v554[1];
                            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v555;
                            if ( v555 <= v524 )
                            {
                              v556 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                              while ( 1 )
                              {
                                if ( v554 == v523 )
                                  goto LABEL_897;
                                if ( v553 )
                                  goto LABEL_891;
                                v557 = v488[1];
                                v527 = *v554;
                                if ( *v554 < (unsigned int)v557 )
                                {
                                  if ( (*((_DWORD *)v468 + 502) & 0x200000) == 0 )
                                  {
                                    v1435 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x15C) = -201326588;
                                    KeBugCheckEx(
                                      __ROR4__(
                                        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x15C),
                                        90),
                                      0xAuLL,
                                      v1435,
                                      6uLL,
                                      0LL);
                                  }
                                  if ( !*((_DWORD *)v468 + 468) )
                                  {
                                    *((_QWORD *)v468 + 235) = v468 - 0x5C5FC0A76E374B18LL;
                                    v558 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                                    *((_QWORD *)v468 + 236) = 0LL;
                                    *((_QWORD *)v468 + 237) = 271LL;
                                    *((_QWORD *)v468 + 238) = v558;
                                    *((_DWORD *)v468 + 468) = 1;
                                  }
                                }
                                v559 = (unsigned __int64 *)(v2 + 180);
                                v560 = v527 - v557;
                                v561 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) + v557;
                                v562 = 0;
                                v563 = v2 + 108;
                                v564 = v561 + v527 - (unsigned int)v557;
                                do
                                {
                                  if ( v561 < *v559 + *v563 && v564 > *v559 )
                                    goto LABEL_890;
                                  ++v562;
                                  ++v559;
                                  ++v563;
                                }
                                while ( v562 < 5 );
                                if ( v560 < 4 )
                                  break;
                                v565 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                                v566 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80)
                                                + v557);
                                v567 = (const char *)v566;
                                *(_DWORD *)(v565 + 1672) += v560;
                                v568 = *(_DWORD *)(v565 + 1652);
                                v569 = *(_QWORD *)(v565 + 1656);
                                if ( v561 < v564 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v567, 0);
                                    v567 += 64;
                                  }
                                  while ( (unsigned __int64)v567 < v564 );
                                }
                                v570 = v560 >> 7;
                                v571 = v569;
                                if ( v560 >> 7 )
                                {
                                  do
                                  {
                                    v572 = 8LL;
                                    do
                                    {
                                      v573 = v566[1] ^ __ROL8__(*v566 ^ v571, v568);
                                      v566 += 2;
                                      v571 = __ROL8__(v573, v568);
                                      --v572;
                                    }
                                    while ( v572 );
                                    v574 = __ROL8__(v569 ^ ((unsigned __int64)v566 - v561), 17) ^ v569 ^ ((unsigned __int64)v566 - v561);
                                    v575 = (v574 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x390) = v575;
                                    v568 = ((unsigned __int8)(v575 ^ v574) ^ (unsigned __int8)v568) & 0x3F;
                                    if ( !v568 )
                                      LOBYTE(v568) = 1;
                                    --v570;
                                  }
                                  while ( v570 );
                                  v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                                  v555 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                                  v553 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                                }
                                v576 = v560 & 0x7F;
                                if ( v576 >= 8 )
                                {
                                  v577 = (unsigned __int64)v576 >> 3;
                                  do
                                  {
                                    v571 = __ROL8__(*v566++ ^ v571, v568);
                                    v576 -= 8;
                                    --v577;
                                  }
                                  while ( v577 );
                                }
                                if ( v576 )
                                {
                                  do
                                  {
                                    v578 = *(unsigned __int8 *)v566;
                                    v566 = (_QWORD *)((char *)v566 + 1);
                                    v571 = __ROL8__(v578 ^ v571, v568);
                                    --v576;
                                  }
                                  while ( v576 );
                                  v553 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                                }
                                for ( i1 = v571; ; LOBYTE(v571) = i1 ^ v571 )
                                {
                                  i1 >>= 7;
                                  if ( !i1 )
                                    break;
                                }
                                v556 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                                v524 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                                v554 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                                v523 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                                v488 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                                *v556 = v571 & 0x7F;
LABEL_892:
                                v488 += 3;
                                ++v556;
                                v554 += 3;
                                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v488;
                                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v556;
                                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v554;
                                if ( v554 != v523 )
                                {
                                  v555 = v554[1];
                                  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v555;
                                }
                                if ( v555 > v524 )
                                  goto LABEL_897;
                                v468 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                              }
LABEL_890:
                              v488 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                              v523 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                              v524 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
LABEL_891:
                              *v556 = 0x80;
                              goto LABEL_892;
                            }
                          }
                        }
LABEL_897:
                        v580 = *(_DWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                        if ( !v553 && v527 != v524 )
                        {
                          v580[3] = v527;
                          v581 = (unsigned __int64 *)(v2 + 180);
                          v580[4] = v524;
                          v582 = v524 - v580[3];
                          v583 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80)
                               + (unsigned int)v580[3];
                          v584 = 0;
                          v585 = v2 + 108;
                          v586 = v583 + v582;
                          do
                          {
                            if ( v583 < *v581 + *v585 && v586 > *v581 )
                              goto LABEL_922;
                            ++v584;
                            ++v581;
                            ++v585;
                          }
                          while ( v584 < 5 );
                          v587 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                          v588 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80)
                                          + (unsigned int)v580[3]);
                          *(_DWORD *)(v587 + 1672) += v582;
                          v589 = *(_DWORD *)(v587 + 1652);
                          v590 = *(_QWORD *)(v587 + 1656);
                          v591 = (const char *)v583;
                          if ( v583 < v586 )
                          {
                            do
                            {
                              _mm_prefetch(v591, 0);
                              v591 += 64;
                            }
                            while ( (unsigned __int64)v591 < v586 );
                          }
                          v592 = v590;
                          v593 = v582 >> 7;
                          if ( v582 >> 7 )
                          {
                            do
                            {
                              v594 = 8LL;
                              do
                              {
                                v595 = *v588 ^ v592;
                                v596 = v588 + 1;
                                v597 = *v596 ^ __ROL8__(v595, v589);
                                v588 = v596 + 1;
                                v592 = __ROL8__(v597, v589);
                                --v594;
                              }
                              while ( v594 );
                              v598 = __ROL8__(v590 ^ ((unsigned __int64)v588 - v583), 17) ^ v590 ^ ((unsigned __int64)v588
                                                                                                  - v583);
                              v599 = (v598 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x398) = v599;
                              v589 = ((unsigned __int8)(v599 ^ v598) ^ (unsigned __int8)v589) & 0x3F;
                              if ( !v589 )
                                LOBYTE(v589) = 1;
                              --v593;
                            }
                            while ( v593 );
                            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                            v580 = *(_DWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                          }
                          v600 = v582 & 0x7F;
                          if ( v600 >= 8 )
                          {
                            v601 = (unsigned __int64)v600 >> 3;
                            do
                            {
                              v592 = __ROL8__(*v588++ ^ v592, v589);
                              v600 -= 8;
                              --v601;
                            }
                            while ( v601 );
                          }
                          if ( v600 )
                          {
                            do
                            {
                              v602 = *(unsigned __int8 *)v588;
                              v588 = (_QWORD *)((char *)v588 + 1);
                              v592 = __ROL8__(v602 ^ v592, v589);
                              --v600;
                            }
                            while ( v600 );
                            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                          }
                          for ( i2 = v592; ; LODWORD(v592) = i2 ^ v592 )
                          {
                            i2 >>= 31;
                            if ( !i2 )
                              break;
                          }
                          v580[5] = v592 & 0x7FFFFFFF;
LABEL_922:
                          v488 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
                        }
                        v604 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                        if ( v488 != v604
                          && *v488 >= *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28)
                          && v488[1] <= *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) )
                        {
                          v605 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                          if ( v605 != v604 )
                          {
                            v606 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                            *v606 = 0x80;
                            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v606 + 1;
                            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v605 + 3;
                          }
                          v488 += 3;
                          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v488;
                        }
                        v607 = v580 + 6;
                        v468 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x78);
                        v494 = (unsigned __int8 *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50)
                                                 + 40LL);
                        v483 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80);
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v607;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v494;
                        if ( v607 == *(_DWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) )
                        {
                          v403 = *(_BYTE **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8);
                          goto LABEL_931;
                        }
                      }
                    }
                    v401 = *((unsigned int *)v284 + 401);
                    v402 = v401 + 48;
                    if ( (unsigned int)(v401 + 48) <= *((_DWORD *)v284 + 535) )
                    {
                      v403 = v284;
                      *((_DWORD *)v284 + 401) = v402;
LABEL_661:
                      ++*((_DWORD *)v403 + 411);
                      v411 = &v403[v401];
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0) = v411;
                      v412 = v411;
                      v413 = 48;
                      v414 = 6LL;
                      do
                      {
                        *v412 = 0LL;
                        v413 -= 8;
                        ++v412;
                        --v414;
                      }
                      while ( v414 );
                      for ( ; v413; --v413 )
                      {
                        *(_BYTE *)v412 = 0;
                        v412 = (_QWORD *)((char *)v412 + 1);
                      }
                      v415 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                      *(_DWORD *)v411 = v400;
                      v382 = v415;
                      v416 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                      v417 = (const char *)v415;
                      *((_QWORD *)v411 + 1) = v415;
                      *((_DWORD *)v411 + 4) = v416;
                      *((_DWORD *)v403 + 418) += v416;
                      v418 = *((_DWORD *)v403 + 413);
                      v419 = *((_QWORD *)v403 + 207);
                      v420 = (unsigned __int64)v415 + v416;
                      if ( (unsigned __int64)v415 < v420 )
                      {
                        do
                        {
                          _mm_prefetch(v417, 0);
                          v417 += 64;
                        }
                        while ( (unsigned __int64)v417 < v420 );
                      }
                      v387 = *((_QWORD *)v403 + 207);
                      v421 = v416 >> 7;
                      if ( v416 >> 7 )
                      {
                        do
                        {
                          v422 = 8LL;
                          do
                          {
                            v423 = v382[1] ^ __ROL8__(*v382 ^ v387, v418);
                            v382 += 2;
                            v387 = __ROL8__(v423, v418);
                            --v422;
                          }
                          while ( v422 );
                          v424 = __ROL8__(v419 ^ ((char *)v382 - (char *)v415), 17) ^ v419 ^ ((char *)v382 - (char *)v415);
                          v425 = (v424 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x378) = v425;
                          v418 = ((unsigned __int8)(v425 ^ v424) ^ (unsigned __int8)v418) & 0x3F;
                          if ( !v418 )
                            LOBYTE(v418) = 1;
                          --v421;
                        }
                        while ( v421 );
                        v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                        v416 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
                        v370 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x58);
                      }
                      v394 = v416 & 0x7F;
                      if ( (unsigned int)v394 >= 8 )
                      {
                        v426 = (unsigned __int64)(v416 & 0x7F) >> 3;
                        do
                        {
                          v387 = __ROL8__(*v382++ ^ v387, v418);
                          v394 = (unsigned int)(v394 - 8);
                          --v426;
                        }
                        while ( v426 );
                      }
                      if ( (_DWORD)v394 )
                      {
                        do
                        {
                          v427 = *(unsigned __int8 *)v382;
                          v382 = (_QWORD *)((char *)v382 + 1);
                          v387 = __ROL8__(v427 ^ v387, v418);
                          v394 = (unsigned int)(v394 - 1);
                        }
                        while ( (_DWORD)v394 );
                        v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      }
                      for ( i3 = v387; ; v387 = (unsigned int)i3 ^ (unsigned int)v387 )
                      {
                        i3 >>= 31;
                        if ( !i3 )
                          break;
                      }
                      LODWORD(v387) = v387 & 0x7FFFFFFF;
                      *((_DWORD *)v411 + 5) = v387;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x148) = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A0);
                      *((_DWORD *)v403 + 418) += v416;
                      goto LABEL_685;
                    }
                    v403 = (_BYTE *)sub_1402AEFBC(v284, v402, *((unsigned int *)v284 + 479));
                    if ( v403 )
                    {
                      v404 = *((_DWORD *)v284 + 502);
                      if ( (v404 & 4) == 0 )
                      {
                        v405 = *((_DWORD *)v284 + 401);
                        v406 = *((_QWORD *)v284 + 197);
                        v407 = (v404 & 0x20000000) != 0 ? *((_DWORD *)v284 + 479) : 0;
                        if ( v405 >= 8 )
                        {
                          v408 = (unsigned __int64)v405 >> 3;
                          do
                          {
                            *(_QWORD *)v284 = 0LL;
                            v405 -= 8;
                            v284 += 8;
                            --v408;
                          }
                          while ( v408 );
                        }
                        for ( ; v405; --v405 )
                          *v284++ = 0;
                        v409 = *((_DWORD *)v403 + 479);
                        *((_DWORD *)v403 + 479) = v407;
                        if ( v407 == 3 )
                        {
                          (*((void (__fastcall **)(__int64))v403 + 107))(v406);
                        }
                        else
                        {
                          v410 = 0;
                          if ( (*((_DWORD *)v403 + 502) & 0x10000000) == 0 )
                            v410 = v407;
                          if ( v410 )
                            (*((void (__fastcall **)(__int64, _QWORD))v403 + 67))(v406 - 8, *(_QWORD *)(v406 - 8));
                          else
                            (*((void (__fastcall **)(__int64))v403 + 30))(v406);
                        }
                        *((_DWORD *)v403 + 479) = v409;
                      }
                      *((_DWORD *)v403 + 502) &= ~4u;
                      goto LABEL_661;
                    }
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA8) = 0LL;
LABEL_585:
                    v41 = 3221225626LL;
                    goto LABEL_933;
                  }
                  *(_DWORD *)(v368 + 32) |= 1u;
                }
                if ( v370 )
                  goto LABEL_616;
                goto LABEL_617;
              }
              v611 = v50;
              v612 = 0LL;
              ii = 0;
LABEL_939:
              *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x128) = 0;
              for ( i4 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(v21 + 744))(v45, v2 + 74, v2 + 96);
                    ;
                    i4 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(v21 + 744))(v45, v2 + 74, v2 + 96) )
              {
                if ( !i4 )
                  goto LABEL_954;
                v616 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v21 + 712))(
                         *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x180),
                         v614,
                         v615,
                         0LL);
                if ( v616 )
                {
                  ++ii;
                  v617 = (*(__int64 (__fastcall **)(__int64))(v21 + 720))(v616);
                  if ( !(*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 504))(v617, v2 + 232) )
                  {
                    if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                    {
                      v41 = *(_QWORD *)(v21 + 2224);
                      v619 = 48;
                      v620 = 6LL;
                      do
                      {
                        v619 -= 8;
                        *(_QWORD *)v41 = *(_QWORD *)v611;
                        v611 += 8;
                        v41 += 8LL;
                        --v620;
                      }
                      while ( v620 );
                      if ( v619 )
                      {
                        do
                        {
                          v621 = *v611++;
                          *(_BYTE *)v41++ = v621;
                          --v619;
                        }
                        while ( v619 );
                        v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                      }
                      v611 = *(char **)(v21 + 2224);
                    }
                    *((_QWORD *)v611 + 3) = v617;
                    v622 = *(_QWORD *)(v21 + 1352);
                    *(_QWORD *)v622 = v611;
                    *(_DWORD *)(v622 + 16) = 48;
                    v623 = *(_QWORD *)(v21 + 1352);
                    *(_QWORD *)(v623 + 8) = v617;
                    *(_DWORD *)(v623 + 20) = 4096;
                    if ( !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v611 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v611;
                      *(_QWORD *)(v21 + 1904) = v612;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
LABEL_954:
                    ++v45;
                    ++v612;
                    if ( v45 >= 3 )
                      goto LABEL_983;
                    goto LABEL_939;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v21 + 728))(
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x180),
                    v616,
                    v618,
                    0LL);
                }
              }
            }
            v641 = *((_DWORD *)v50 + 10);
            (*(void (__fastcall **)(_DWORD *, _QWORD))(v21 + 400))(v2 + 320, *((unsigned int *)v50 + 11));
            (*(void (__fastcall **)(_DWORD *, _DWORD *))(v21 + 448))(v2 + 320, v2 + 324);
            if ( v641 )
              v642 = __readcr4();
            else
              v642 = __readcr0();
            v643 = v2 + 324;
            goto LABEL_991;
          }
          if ( !*(_QWORD *)(v21 + 2000) )
            goto LABEL_379;
          v1106 = *(_DWORD *)(v21 + 2012);
          if ( *(_DWORD *)(v21 + 1668) )
          {
            v41 = v1106 ^ (v1106 >> 3);
            if ( (((unsigned __int8)v1106 ^ (unsigned __int8)(v1106 >> 3)) & 4) != 0 )
              goto LABEL_379;
          }
          else
          {
            *(_DWORD *)(v21 + 2012) = v1106 ^ ((unsigned __int8)v1106 ^ (unsigned __int8)(8 * v1106)) & 0x20;
          }
          if ( (*(_DWORD *)(v21 + 2012) & 4) != 0 )
          {
            v1107 = *((_QWORD *)v50 + 4);
            if ( v1107 )
            {
              v1108 = *(unsigned int *)(v21 + 1668);
              v41 = ((_WORD)v1108 + (_WORD)v1107) & 0xFFF;
              v1109 = (v41 + (unsigned int)(*((_DWORD *)v50 + 10) - v1108) + 4095LL) >> 12;
              v1110 = v1107 + v1108;
            }
            else
            {
              v41 = *((unsigned int *)v50 + 4);
              v1110 = *((_QWORD *)v50 + 1);
              v1109 = (v41 + (*((_DWORD *)v50 + 2) & 0xFFF) + 4095LL) >> 12;
            }
            v1111 = v1110 & 0xFFFFFFFFFFFFF000uLL;
            while ( v1109 )
            {
              --v1109;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v21 + 672))(v1111) && !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                *(_QWORD *)(v21 + 1904) = v1111;
                *(_DWORD *)(v21 + 1872) = 1;
              }
              *(_DWORD *)(v21 + 1672) += 256;
              v1111 += 4096LL;
              if ( v1107 )
              {
                *(_DWORD *)(v21 + 1668) += 4096;
                if ( *(_DWORD *)(v21 + 1672) >= *(_DWORD *)(v21 + 1676) )
                  break;
              }
            }
            if ( v1107 && !v1109 )
              *(_DWORD *)(v21 + 1668) = 0;
            if ( *(_DWORD *)(v21 + 1668) )
              goto LABEL_268;
            v1112 = *(_QWORD *)(v21 + 1272);
            v1113 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            (*(void (__fastcall **)(__int64))(v21 + 320))(v1112);
            v1115 = **(unsigned int ***)(v21 + 1480);
            v1116 = v1115 + 4;
            v1117 = *((_BYTE *)v1115 + 12);
            v1118 = (unsigned __int64)&v1115[6 * *v1115 + 4];
            while ( 1 )
            {
              v1119 = 24LL;
              v1120 = (__int64 *)(v50 + 24);
              v1121 = v1116;
              do
              {
                v1122 = *(_QWORD *)v1121;
                v1121 += 2;
                v1123 = *v1120++;
                if ( v1122 != v1123 )
                  goto LABEL_1842;
                v1119 = (unsigned int)(v1119 - 8);
              }
              while ( (unsigned int)v1119 >= 8 );
              if ( (_DWORD)v1119 )
              {
                while ( 1 )
                {
                  v1114 = *(unsigned __int8 *)v1121;
                  v1121 = (unsigned int *)((char *)v1121 + 1);
                  v1124 = *(unsigned __int8 *)v1120;
                  v1120 = (__int64 *)((char *)v1120 + 1);
                  if ( v1114 != v1124 )
                    break;
                  v63 = (_DWORD)v1119 == 1;
                  v1119 = (unsigned int)(v1119 - 1);
                  if ( v63 )
                    goto LABEL_1843;
                }
LABEL_1842:
                v1116 += 6;
                if ( (unsigned __int64)v1116 < v1118 )
                  continue;
              }
LABEL_1843:
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v21 + 384))(
                *(_QWORD *)(v21 + 1272),
                v1114,
                v1119,
                v1120);
              __writecr8(v1113);
              v45 = 0;
              if ( v1117 )
              {
                v41 = 1LL;
                if ( (*(_DWORD *)(v21 + 2012) & 0x10) != 0 && !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = 1LL;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
                if ( *((_QWORD *)v50 + 3) == 1LL )
                  goto LABEL_268;
              }
              else
              {
                v41 = 1LL;
              }
              if ( v1116 == (unsigned int *)v1118 )
              {
                v43 = *v2;
                if ( !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v1116;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
                goto LABEL_269;
              }
LABEL_268:
              v43 = *v2;
              goto LABEL_269;
            }
          }
LABEL_1853:
          if ( *(_DWORD *)(v21 + 1668) )
            goto LABEL_1894;
          if ( v65 == 12 )
          {
            if ( !*(_QWORD *)(v21 + 2000) )
            {
              *(_DWORD *)(v21 + 1668) = 0;
              goto LABEL_1894;
            }
            v1125 = *(_DWORD *)(v21 + 2012) ^ ((unsigned __int8)*(_DWORD *)(v21 + 2012) ^ (unsigned __int8)(8 * *(_DWORD *)(v21 + 2012))) & 0x20;
            *(_DWORD *)(v21 + 2012) = v1125;
            if ( (v1125 & 4) != 0 )
            {
              v1126 = *((_QWORD *)v50 + 1) & 0xFFFFFFFFFFFFF000uLL;
              for ( i5 = (*((unsigned int *)v50 + 4) + (unsigned __int64)(*((_DWORD *)v50 + 2) & 0xFFF) + 4095) >> 12;
                    i5;
                    v1126 += 4096LL )
              {
                --i5;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v21 + 672))(v1126)
                  && !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v1126;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
                *(_DWORD *)(v21 + 1672) += 256;
              }
            }
            else
            {
              v1128 = (_QWORD *)*((_QWORD *)v50 + 1);
              v1129 = *((unsigned int *)v50 + 4);
              v1130 = v1128;
              *(_DWORD *)(v21 + 1672) += v1129;
              v1131 = (const char *)v1128;
              v1132 = *(_DWORD *)(v21 + 1652);
              v1133 = *(_QWORD *)(v21 + 1656);
              if ( v1128 < (_QWORD *)((char *)v1128 + v1129) )
              {
                do
                {
                  _mm_prefetch(v1131, 0);
                  v1131 += 64;
                }
                while ( v1131 < (const char *)v1128 + v1129 );
              }
              v1134 = *(_QWORD *)(v21 + 1656);
              v1135 = (unsigned int)v1129 >> 7;
              if ( (unsigned int)v1129 >> 7 )
              {
                do
                {
                  v1136 = 8LL;
                  do
                  {
                    v1137 = v1130[1] ^ __ROL8__(*v1130 ^ v1134, v1132);
                    v1130 += 2;
                    v1134 = __ROL8__(v1137, v1132);
                    --v1136;
                  }
                  while ( v1136 );
                  v1138 = (__ROL8__(v1133 ^ ((char *)v1130 - (char *)v1128), 17) ^ v1133 ^ (unsigned __int64)((char *)v1130 - (char *)v1128))
                        * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x430) = *((_QWORD *)&v1138 + 1);
                  v1132 = (BYTE8(v1138) ^ (unsigned __int8)(v1138 ^ v1132)) & 0x3F;
                  if ( !v1132 )
                    LOBYTE(v1132) = 1;
                  --v1135;
                }
                while ( v1135 );
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              }
              v1139 = v1129 & 0x7F;
              if ( v1139 >= 8 )
              {
                v1140 = (unsigned __int64)v1139 >> 3;
                do
                {
                  v1134 = __ROL8__(*v1130++ ^ v1134, v1132);
                  v1139 -= 8;
                  --v1140;
                }
                while ( v1140 );
              }
              for ( ; v1139; --v1139 )
              {
                v1141 = *(unsigned __int8 *)v1130;
                v1130 = (_QWORD *)((char *)v1130 + 1);
                v1134 = __ROL8__(v1141 ^ v1134, v1132);
              }
              for ( i6 = v1134; ; LODWORD(v1134) = i6 ^ v1134 )
              {
                i6 >>= 31;
                if ( !i6 )
                  break;
              }
              v1143 = v1134 & 0x7FFFFFFF;
              if ( v1143 != *((_DWORD *)v50 + 5) )
              {
                v1144 = *((_QWORD *)v50 + 1);
                if ( !*((_DWORD *)v50 + 4) )
                  goto LABEL_1915;
                v1145 = 64LL;
                if ( (*(_DWORD *)(v21 + 2012) & 0x40) == 0 )
                  goto LABEL_1915;
                v1146 = KeGetCurrentIrql();
                v1147 = v1144 & 0xFFFFFFFFFFFFF000uLL;
                v1148 = (v1144 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
                v1149 = (v1144 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1885:
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1150 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                            v1147,
                            0LL,
                            v1145,
                            v1130);
                  if ( v1150 == -1073741267 )
                  {
                    if ( v1146 <= 1u )
                    {
                      __writecr8(v1146);
                      KeGetCurrentIrql();
                      goto LABEL_1885;
                    }
                  }
                  else if ( v1150 < 0 )
                  {
                    goto LABEL_1913;
                  }
                  v1147 += 4096LL;
                  v1149 += 4096LL;
                  if ( v1149 == v1148 )
                  {
                    __writecr8(v1146);
                    goto LABEL_1892;
                  }
                }
              }
            }
            goto LABEL_1893;
          }
          v1174 = (_QWORD *)*((_QWORD *)v50 + 1);
          v1175 = *((unsigned int *)v50 + 4);
          v1176 = v1174;
          *(_DWORD *)(v21 + 1672) += v1175;
          v1177 = (const char *)v1174;
          v1178 = *(_DWORD *)(v21 + 1652);
          v1179 = *(_QWORD *)(v21 + 1656);
          if ( v1174 < (_QWORD *)((char *)v1174 + v1175) )
          {
            do
            {
              _mm_prefetch(v1177, 0);
              v1177 += 64;
            }
            while ( v1177 < (const char *)v1174 + v1175 );
          }
          v1180 = *(_QWORD *)(v21 + 1656);
          v1181 = (unsigned int)v1175 >> 7;
          if ( (unsigned int)v1175 >> 7 )
          {
            do
            {
              v1182 = 8LL;
              do
              {
                v1183 = v1176[1] ^ __ROL8__(*v1176 ^ v1180, v1178);
                v1176 += 2;
                v1180 = __ROL8__(v1183, v1178);
                --v1182;
              }
              while ( v1182 );
              v1184 = (__ROL8__(v1179 ^ ((char *)v1176 - (char *)v1174), 17) ^ v1179 ^ (unsigned __int64)((char *)v1176 - (char *)v1174))
                    * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x438) = *((_QWORD *)&v1184 + 1);
              v1178 = (BYTE8(v1184) ^ (unsigned __int8)(v1184 ^ v1178)) & 0x3F;
              if ( !v1178 )
                LOBYTE(v1178) = 1;
              --v1181;
            }
            while ( v1181 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          v1185 = v1175 & 0x7F;
          if ( v1185 >= 8 )
          {
            v1186 = (unsigned __int64)v1185 >> 3;
            do
            {
              v1180 = __ROL8__(*v1176++ ^ v1180, v1178);
              v1185 -= 8;
              --v1186;
            }
            while ( v1186 );
          }
          for ( ; v1185; --v1185 )
          {
            v1187 = *(unsigned __int8 *)v1176;
            v1176 = (_QWORD *)((char *)v1176 + 1);
            v1180 = __ROL8__(v1187 ^ v1180, v1178);
          }
          for ( i7 = v1180; ; LODWORD(v1180) = i7 ^ v1180 )
          {
            i7 >>= 31;
            if ( !i7 )
              break;
          }
          v1143 = v1180 & 0x7FFFFFFF;
          if ( v1143 == *((_DWORD *)v50 + 5) )
          {
LABEL_1892:
            v45 = 0;
LABEL_1893:
            v65 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
            goto LABEL_1894;
          }
          if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
            v45 = 1;
          v1189 = *((_QWORD *)v50 + 1);
          if ( !*((_DWORD *)v50 + 4) )
            goto LABEL_1914;
          v1190 = 64LL;
          if ( (*(_DWORD *)(v21 + 2012) & 0x40) == 0 )
            goto LABEL_1914;
          v1146 = KeGetCurrentIrql();
          v1191 = v1189 & 0xFFFFFFFFFFFFF000uLL;
          v1192 = (v1189 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
          v1193 = (v1189 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1943:
          __writecr8(2uLL);
          while ( 1 )
          {
            v1194 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                      v1191,
                      0LL,
                      v1190,
                      v1176);
            if ( v1194 != -1073741267 )
              break;
            if ( v45 )
              goto LABEL_1951;
            if ( v1146 <= 1u )
            {
              __writecr8(v1146);
              KeGetCurrentIrql();
              goto LABEL_1943;
            }
LABEL_1949:
            v1191 += 4096LL;
            v1193 += 4096LL;
            if ( v1193 == v1192 )
            {
              __writecr8(v1146);
              v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              goto LABEL_1892;
            }
          }
          if ( v1194 >= 0 )
            goto LABEL_1949;
LABEL_1951:
          v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
LABEL_1913:
          __writecr8(v1146);
LABEL_1914:
          v45 = 0;
LABEL_1915:
          if ( !*(_DWORD *)(v21 + 1872) )
            *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = *((unsigned int *)v50 + 5) ^ (unsigned __int64)v1143;
          v1173 = *((_QWORD *)v50 + 1);
          v65 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
          if ( !*(_DWORD *)(v21 + 1872) )
          {
            *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v21 + 1896) = *(int *)v50;
            *(_QWORD *)(v21 + 1904) = v1173;
            *(_DWORD *)(v21 + 1872) = 1;
          }
LABEL_1894:
          v1151 = *((_QWORD *)v50 + 1);
          v1152 = *(unsigned int *)(v21 + 1668);
          v1153 = *((unsigned int *)v50 + 4);
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1151;
          v1154 = (unsigned int *)(v1151 + 12 * v1152);
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1154;
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1151 + 12 * (v1153 / 0xC);
          v1155 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
          v41 = (unsigned __int64)&v50[4 * v1152 + 48];
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v41;
          while ( 2 )
          {
            if ( *(int *)v41 < 0 )
              goto LABEL_2003;
            v1156 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v1157 = v1154[1] - *v1154;
            v1158 = *((_QWORD *)v1156 + 4) + *v1154;
            if ( v65 != 43 )
            {
              *(_DWORD *)(v21 + 1672) += v1157;
              v1159 = v1158;
              v1160 = *(unsigned int *)(v21 + 1652);
              v1161 = (const char *)v1158;
              v1162 = *(_QWORD *)(v21 + 1656);
              v1163 = v1158 + v1157;
              if ( v1158 < v1163 )
              {
                do
                {
                  _mm_prefetch(v1161, 0);
                  v1161 += 64;
                }
                while ( (unsigned __int64)v1161 < v1163 );
              }
              v1164 = *(_QWORD *)(v21 + 1656);
              v1165 = v1157 >> 7;
              if ( v1157 >> 7 )
              {
                do
                {
                  v1166 = 8LL;
                  do
                  {
                    v1167 = *(_QWORD *)(v1159 + 8) ^ __ROL8__(*(_QWORD *)v1159 ^ v1164, v1160);
                    v1159 += 16LL;
                    v1164 = __ROL8__(v1167, v1160);
                    --v1166;
                  }
                  while ( v1166 );
                  v1168 = (__ROL8__(v1162 ^ (v1159 - v1158), 17) ^ v1162 ^ (v1159 - v1158))
                        * (unsigned __int128)0x7010008004002001uLL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x440) = *((_QWORD *)&v1168 + 1);
                  v1160 = (BYTE8(v1168) ^ (unsigned __int8)(v1168 ^ v1160)) & 0x3F;
                  if ( !(_DWORD)v1160 )
                    v1160 = 1LL;
                  --v1165;
                }
                while ( v1165 );
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v1154 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
              }
              v1169 = v1157 & 0x7F;
              if ( v1169 >= 8 )
              {
                v1170 = (unsigned __int64)(v1157 & 0x7F) >> 3;
                do
                {
                  v1164 = __ROL8__(*(_QWORD *)v1159 ^ v1164, v1160);
                  v1159 += 8LL;
                  v1169 -= 8;
                  --v1170;
                }
                while ( v1170 );
              }
              if ( v1169 )
              {
                do
                {
                  v1171 = *(unsigned __int8 *)v1159++;
                  v1164 = __ROL8__(v1171 ^ v1164, v1160);
                  --v1169;
                }
                while ( v1169 );
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              }
              for ( i8 = v1164; ; LODWORD(v1164) = i8 ^ v1164 )
              {
                i8 >>= 31;
                if ( !i8 )
                  break;
              }
              v1195 = v1164 & 0x7FFFFFFF;
LABEL_1986:
              if ( v1195 != (**(_DWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) & 0x7FFFFFFF) )
              {
                if ( v1157 && (*(_DWORD *)(v21 + 2012) & 0x40) != 0 )
                {
                  v1205 = KeGetCurrentIrql();
                  v1206 = v1158 & 0xFFFFFFFFFFFFF000uLL;
                  v1207 = (v1157 + v1158 - 1) | 0xFFF;
                  v1208 = (v1158 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    __writecr8(2uLL);
                    while ( 1 )
                    {
                      v1209 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, __int64))(v21 + 1104))(
                                v1206,
                                0LL,
                                v1159,
                                v1160);
                      if ( v1209 == -1073741267 )
                        break;
                      if ( v1209 < 0 )
                      {
                        __writecr8(v1205);
                        v45 = 0;
                        goto LABEL_1998;
                      }
LABEL_1995:
                      v1206 += 4096LL;
                      v1208 += 4096LL;
                      if ( v1208 == v1207 )
                      {
                        __writecr8(v1205);
                        v45 = 0;
                        goto LABEL_2001;
                      }
                    }
                    if ( v1205 > 1u )
                      goto LABEL_1995;
                    __writecr8(v1205);
                    KeGetCurrentIrql();
                  }
                }
LABEL_1998:
                v1210 = **(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
                LODWORD(v1210) = v1210 & 0x7FFFFFFF;
                if ( !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v1210 ^ v1195;
                  if ( !*(_DWORD *)(v21 + 1872) )
                  {
                    v1211 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v21 + 1888) = (char *)v1211 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v21 + 1896) = *v1211;
                    *(_QWORD *)(v21 + 1904) = v1158;
                    *(_DWORD *)(v21 + 1872) = 1;
                  }
                }
LABEL_2001:
                v1154 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
              }
              v1155 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
              v41 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48);
LABEL_2003:
              v41 += 4LL;
              v1154 += 3;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v41;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v1154;
              v1212 = v1154 == v1155;
              if ( v1154 >= v1155 )
                goto LABEL_2006;
              v65 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
              if ( *(_DWORD *)(v21 + 1672) >= *(_DWORD *)(v21 + 1676) )
              {
                v1212 = v1154 == v1155;
LABEL_2006:
                if ( !v1212 )
                {
                  *(_DWORD *)(v21 + 1668) = ((__int64)v1154
                                           - *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70))
                                          / 12;
                  goto LABEL_268;
                }
                v1213 = *(_QWORD *)(v21 + 1272);
                v1214 = KeGetCurrentIrql();
                __writecr8(0xFuLL);
                (*(void (__fastcall **)(__int64))(v21 + 320))(v1213);
                v1216 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                v1217 = **(unsigned int ***)(v21 + 1480);
                v1218 = v1217 + 4;
                v1219 = *((_BYTE *)v1217 + 12);
                v1220 = (unsigned __int64)&v1217[6 * *v1217 + 4];
                do
                {
                  v1221 = 24LL;
                  v1222 = (__int64 *)(v1216 + 6);
                  v1223 = v1218;
                  do
                  {
                    v1224 = *(_QWORD *)v1223;
                    v1223 += 2;
                    v1225 = *v1222++;
                    if ( v1224 != v1225 )
                      goto LABEL_2015;
                    v1221 = (unsigned int)(v1221 - 8);
                  }
                  while ( (unsigned int)v1221 >= 8 );
                  if ( !(_DWORD)v1221 )
                    break;
                  while ( 1 )
                  {
                    v1215 = *(unsigned __int8 *)v1223;
                    v1223 = (unsigned int *)((char *)v1223 + 1);
                    v1226 = *(unsigned __int8 *)v1222;
                    v1222 = (__int64 *)((char *)v1222 + 1);
                    if ( v1215 != v1226 )
                      break;
                    v63 = (_DWORD)v1221 == 1;
                    v1221 = (unsigned int)(v1221 - 1);
                    if ( v63 )
                      goto LABEL_2016;
                  }
LABEL_2015:
                  v1218 += 6;
                }
                while ( (unsigned __int64)v1218 < v1220 );
LABEL_2016:
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v21 + 384))(
                  *(_QWORD *)(v21 + 1272),
                  v1215,
                  v1221,
                  v1222);
                __writecr8(v1214);
                v45 = 0;
                if ( !v1219 )
                {
                  v41 = 1LL;
                  goto LABEL_2023;
                }
                v41 = 1LL;
                if ( (*(_DWORD *)(v21 + 2012) & 0x10) != 0 && !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = (char *)v1216 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *v1216;
                  *(_QWORD *)(v21 + 1904) = 1LL;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
                if ( *((_QWORD *)v1216 + 3) != 1LL )
                {
LABEL_2023:
                  if ( v1218 == (unsigned int *)v1220 && !*(_DWORD *)(v21 + 1872) )
                  {
                    *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v21 + 1888) = (char *)v1216 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v21 + 1896) = *v1216;
                    *(_QWORD *)(v21 + 1904) = v1218;
                    *(_DWORD *)(v21 + 1872) = 1;
                  }
                }
LABEL_2026:
                *(_DWORD *)(v21 + 1668) = 0;
                goto LABEL_268;
              }
              continue;
            }
            break;
          }
          v1195 = sub_1402AF85C(v21, *((_QWORD *)v1156 + 4) + *v1154, v1157);
          *(_DWORD *)(v21 + 1672) += 8 * v1157;
          if ( (*(_DWORD *)(v21 + 2012) & 0x800) == 0 )
            goto LABEL_1986;
          v1196 = (_BYTE *)(v1158 - 6);
          if ( *(_BYTE *)(v1158 - 6) == 76 && v1196[1] == 0x87 && !v1196[2] && v1196[3] == 0x98 && v1196[4] == 0xC3 )
          {
            v1197 = v1196 + 5;
            v1198 = v1196[5];
            if ( v1198 == -112 || v1198 == -15 )
            {
              v1199 = *(volatile signed __int32 **)(v21 + 1176);
              while ( 1 )
              {
                _disable();
                if ( !_interlockedbittestandset(v1199, (*(_DWORD *)(v21 + 2008) >> 10) & 0x1F) )
                  break;
                _enable();
                _mm_pause();
              }
              CurrentPrcb = 38LL;
              v1201 = v2 + 512;
              v1159 = 0LL;
              v1202 = 304;
              v1160 = 1LL;
              do
              {
                *v1201 = 0LL;
                v1202 -= 8;
                ++v1201;
                --CurrentPrcb;
              }
              while ( CurrentPrcb );
              if ( v1202 )
              {
                CurrentPrcb = 0xFFFFFFFFLL;
                do
                {
                  *(_BYTE *)v1201 = 0;
                  v1201 = (_QWORD *)((char *)v1201 + 1);
                  --v1202;
                }
                while ( v1202 );
              }
              *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x810) = *(_OWORD *)(v21 + 1704);
              *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x820) = *(_OWORD *)(v21 + 1720);
              v1203 = *(_OWORD *)(v21 + 1736);
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x242) = ((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                     + 2048;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x448) = v21 + 1772;
              v1204 = (unsigned __int64)(v21 + 1772) >> 16;
              *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x810) = v21 + 1772;
              *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x818) = (unsigned __int64)(v21 + 1772) >> 32;
              *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x920) = v1203;
              *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x240) = 304;
              *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x816) = v1204;
              __sidt(v2 + 190);
              __lidt(v2 + 144);
              *v1197 = -15;
              if ( *v1197 == 0xF1 )
              {
                if ( (*(_DWORD *)(v21 + 2012) & 0x20000) == 0 )
                {
                  CurrentPrcb = (__int64)KeGetCurrentPrcb();
                  **(_QWORD **)(v21 + 1144) = v21 - 0x5C5FC0A76E374B18LL;
                  v1204 = v1158;
                  **(_QWORD **)(v21 + 1152) = CurrentPrcb;
                  **(_QWORD **)(v21 + 1160) = v1158;
                  **(_QWORD **)(v21 + 1168) = 275LL;
                }
                ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, __int64))(v1196 + 5))(
                  v1204,
                  CurrentPrcb,
                  0LL,
                  1LL);
                if ( (*(_DWORD *)(v21 + 2012) & 0x20000) == 0 )
                {
                  **(_QWORD **)(v21 + 1144) = 0xA3A03F5891C8B4E8uLL;
                  **(_QWORD **)(v21 + 1152) = 0LL;
                  **(_QWORD **)(v21 + 1160) = 0LL;
                  **(_QWORD **)(v21 + 1168) = 0LL;
                }
                v1160 = 1LL;
                if ( *v1197 == 0xF1 )
                {
                  *v1197 = -112;
                  v1159 = *v1197 == 0x90;
                }
                else
                {
                  v1159 = 0LL;
                }
              }
              __lidt(v2 + 190);
              _InterlockedAnd(v1199, ~(1 << ((*(_DWORD *)(v21 + 2008) >> 10) & 0x1F)));
              _enable();
              v45 = 0;
              if ( (_DWORD)v1159 )
                goto LABEL_1985;
              v1156 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
LABEL_1983:
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = (char *)v1156 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *v1156;
                *(_QWORD *)(v21 + 1904) = v1196;
                *(_DWORD *)(v21 + 1872) = 1;
              }
LABEL_1985:
              v1154 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
              goto LABEL_1986;
            }
            v1156 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          }
          v1160 = 1LL;
          goto LABEL_1983;
        }
        if ( (*(_DWORD *)(v21 + 1680) & 1) != 0 )
          goto LABEL_269;
        v687 = *(_QWORD *)(v21 + 1376);
        v149 = 0;
        v688 = *(void (__fastcall **)(unsigned __int64, __int64))(v21 + 360);
        v689 = *(_QWORD *)(v21 + 1280);
        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
        v690 = *(_QWORD **)(v21 + 1384);
        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v687;
        v688(v41, v46);
        (*(void (__fastcall **)(__int64, _QWORD))(v21 + 280))(v689, 0LL);
        v691 = *(_QWORD ***)(v21 + 1240);
        v692 = *v691;
        if ( *v691 != v691 )
        {
          do
          {
            *((_BYTE *)v692 - 298) = 1;
            ++v149;
            v692 = (_QWORD *)*v692;
          }
          while ( v692 != v691 );
          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v149;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v21 + 296))(v687, 0LL);
        v693 = *(_QWORD ***)(v21 + 1368);
        v694 = *v693;
        if ( *v693 != v693 )
        {
          do
          {
            if ( v694 - 3 != v690 )
            {
              v695 = *(v694 - 1);
              if ( !*(_BYTE *)(v695 + 446) && (*(_DWORD *)(v695 + 772) & 0x4000000) != 0 && !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                *(_QWORD *)(v21 + 1904) = v695;
                *(_DWORD *)(v21 + 1872) = 1;
              }
              *(_BYTE *)(v695 + 446) = 0;
            }
            v694 = (_QWORD *)*v694;
          }
          while ( v694 != v693 );
          v149 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
          v687 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
        }
        v696 = v687;
LABEL_1090:
        (*(void (__fastcall **)(__int64, _QWORD))(v21 + 304))(v696, 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 288))(*(_QWORD *)(v21 + 1280), 0LL);
        (*(void (**)(void))(v21 + 368))();
LABEL_324:
        *(_DWORD *)(v21 + 1672) += v149 << 8;
        goto LABEL_325;
      }
      if ( v65 <= 35 )
      {
        if ( v65 != 35 )
        {
          v41 = (unsigned int)(v65 - 27);
          if ( v65 == 27 )
          {
            if ( (*(_DWORD *)(v21 + 1680) & 1) == 0 )
              goto LABEL_269;
            v952 = *(void (__fastcall **)(unsigned __int64, __int64))(v21 + 360);
            v149 = 0;
            v953 = *(_QWORD *)(v21 + 1376);
            v954 = *(_QWORD **)(v21 + 1384);
            v955 = *(_QWORD *)(v21 + 1280);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v953;
            v952(v41, v46);
            (*(void (__fastcall **)(__int64, _QWORD))(v21 + 280))(v955, 0LL);
            (*(void (__fastcall **)(__int64, _QWORD))(v21 + 296))(v953, 0LL);
            v956 = *(_QWORD ***)(v21 + 1368);
            v957 = *v956;
            if ( *v956 != v956 )
            {
              do
              {
                if ( v957 - 3 != v954 )
                  *(_BYTE *)(*(v957 - 1) + 446LL) = 1;
                v957 = (_QWORD *)*v957;
              }
              while ( v957 != v956 );
              v953 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            }
            v958 = *(_QWORD ***)(v21 + 1240);
            v959 = *v958;
            if ( *v958 != v958 )
            {
              do
              {
                v960 = v959 - 93;
                if ( !*((_BYTE *)v959 - 298) )
                {
                  v961 = (_QWORD *)v960[131];
                  if ( v961 )
                  {
                    if ( v961 != v954 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *(int *)v50;
                      *(_QWORD *)(v21 + 1904) = v960;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                  }
                }
                *((_BYTE *)v960 + 446) = 0;
                ++v149;
                v959 = (_QWORD *)*v959;
              }
              while ( v959 != v958 );
              v953 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            }
            v696 = v953;
            goto LABEL_1090;
          }
          if ( v65 != 28 )
          {
            if ( v65 != 29 )
            {
              v41 = (unsigned int)(v65 - 30);
              if ( v65 == 30 )
              {
                if ( (v50[42] & 1) != 0 )
                {
                  if ( !*(_QWORD *)(v21 + 2000) )
                    goto LABEL_379;
                  v41 = *(unsigned int *)(v21 + 2012);
                  if ( (v41 & 4) != 0 )
                    goto LABEL_379;
                  if ( *(_DWORD *)(v21 + 1668) )
                  {
                    if ( (v41 & 0x20) != 0 )
                      goto LABEL_379;
                  }
                  else
                  {
                    *(_DWORD *)(v21 + 2012) = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(8 * v41)) & 0x20;
                  }
                }
                v757 = *((_QWORD *)v50 + 1);
                v758 = *(unsigned int *)(v21 + 1668);
                v759 = *((unsigned int *)v50 + 9);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48) = v757;
                v760 = v757 + 12 * v758;
                v761 = (_DWORD *)(v760 + 12);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v760;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v760 + 12;
                v762 = v759 / 0xC;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v759 / 0xC;
                v763 = v757 + 12LL * (unsigned int)(v759 / 0xC);
                v764 = v759 / 0xC - 1;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v763;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = v764;
                v765 = &v50[v758 + 48];
                v766 = (unsigned __int64)&v50[((v764 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v765;
                v767 = *((unsigned __int16 *)v50 + 20);
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v766;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) = v766 + 24 * v767;
                if ( (unsigned int)v758 >= v764 )
                {
LABEL_1282:
                  v41 = *(unsigned int *)(v21 + 1668);
                  if ( (unsigned int)v41 < v764 || *(_DWORD *)(v21 + 1672) >= *(_DWORD *)(v21 + 1676) )
                    goto LABEL_326;
                  v41 = v766 + 24LL * (unsigned int)(v41 - v762 + 1);
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v41;
LABEL_1285:
                  v794 = (int *)(v41 + 8);
                  v795 = 2LL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 2LL;
                  *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v41 + 8;
                  v45 = 0;
LABEL_1286:
                  if ( *v794 < 0 )
                    goto LABEL_1320;
                  v796 = (unsigned int)*(v794 - 2);
                  v797 = (unsigned int)(*(v794 - 1) - v796);
                  v798 = (unsigned int)v797;
                  v799 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) + 24LL)
                       + v796;
                  *(_DWORD *)(v21 + 1672) += v797;
                  v800 = (_QWORD *)v799;
                  v801 = *(_DWORD *)(v21 + 1652);
                  v802 = (const char *)v799;
                  v803 = *(_QWORD *)(v21 + 1656);
                  if ( v799 < v797 + v799 )
                  {
                    do
                    {
                      _mm_prefetch(v802, 0);
                      v802 += 64;
                    }
                    while ( (unsigned __int64)v802 < v797 + v799 );
                  }
                  v804 = *(_QWORD *)(v21 + 1656);
                  v805 = (unsigned int)v797 >> 7;
                  if ( (unsigned int)v797 >> 7 )
                  {
                    do
                    {
                      v806 = 8LL;
                      do
                      {
                        v807 = v804 ^ *v800;
                        v808 = v800[1];
                        v800 += 2;
                        v804 = __ROL8__(__ROL8__(v807, v801) ^ v808, v801);
                        --v806;
                      }
                      while ( v806 );
                      v809 = __ROL8__(v803 ^ ((unsigned __int64)v800 - v799), 17) ^ v803 ^ ((unsigned __int64)v800 - v799);
                      v810 = (v809 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C8) = v810;
                      v801 = ((unsigned __int8)(v810 ^ v809) ^ (unsigned __int8)v801) & 0x3F;
                      if ( !v801 )
                        LOBYTE(v801) = 1;
                      --v805;
                    }
                    while ( v805 );
                    v794 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    v795 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                  }
                  v811 = v797 & 0x7F;
                  if ( (unsigned int)v811 >= 8 )
                  {
                    v812 = (unsigned __int64)(unsigned int)v811 >> 3;
                    do
                    {
                      v804 = __ROL8__(*v800++ ^ v804, v801);
                      v811 = (unsigned int)(v811 - 8);
                      --v812;
                    }
                    while ( v812 );
                  }
                  if ( (_DWORD)v811 )
                  {
                    do
                    {
                      v813 = *(unsigned __int8 *)v800;
                      v800 = (_QWORD *)((char *)v800 + 1);
                      v804 = __ROL8__(v813 ^ v804, v801);
                      v811 = (unsigned int)(v811 - 1);
                    }
                    while ( (_DWORD)v811 );
                    v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                  }
                  for ( i9 = v804; ; LODWORD(v804) = i9 ^ v804 )
                  {
                    i9 >>= 31;
                    if ( !i9 )
                      break;
                  }
                  v815 = v804 & 0x7FFFFFFF;
                  if ( v815 == (*v794 & 0x7FFFFFFF) )
                  {
LABEL_1319:
                    v45 = 0;
                    goto LABEL_1320;
                  }
                  if ( !v798 || (*(_DWORD *)(v21 + 2012) & 0x40) == 0 )
                    goto LABEL_1325;
                  v816 = KeGetCurrentIrql();
                  v817 = v799 & 0xFFFFFFFFFFFFF000uLL;
                  v818 = (v799 + v798 - 1) | 0xFFF;
                  v819 = (v799 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1312:
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v820 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                             v817,
                             0LL,
                             v811,
                             v800);
                    if ( v820 == -1073741267 )
                    {
                      if ( v816 <= 1u )
                      {
                        __writecr8(v816);
                        KeGetCurrentIrql();
                        goto LABEL_1312;
                      }
                    }
                    else if ( v820 < 0 )
                    {
                      __writecr8(v816);
                      v794 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      v795 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
LABEL_1325:
                      v822 = (unsigned int)*v794;
                      v45 = 0;
                      LODWORD(v822) = v822 & 0x7FFFFFFF;
                      if ( !*(_DWORD *)(v21 + 1872) )
                      {
                        *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v822 ^ v815;
                        if ( !*(_DWORD *)(v21 + 1872) )
                        {
                          v823 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v21 + 1888) = (char *)v823 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v21 + 1896) = *v823;
                          *(_QWORD *)(v21 + 1904) = v799;
                          *(_DWORD *)(v21 + 1872) = 1;
                        }
                      }
LABEL_1320:
                      v794 += 3;
                      --v795;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v794;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v795;
                      if ( !v795 )
                      {
                        v821 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                        ++*(_DWORD *)(v21 + 1668);
                        v41 = v821 + 24;
                        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v41;
                        if ( v41 == *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x80) )
                          goto LABEL_2026;
                        if ( *(_DWORD *)(v21 + 1672) >= *(_DWORD *)(v21 + 1676) )
                          goto LABEL_268;
                        goto LABEL_1285;
                      }
                      goto LABEL_1286;
                    }
                    v811 = 4096LL;
                    v817 += 4096LL;
                    v819 += 4096LL;
                    if ( v819 == v818 )
                    {
                      __writecr8(v816);
                      v794 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                      v795 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      goto LABEL_1319;
                    }
                  }
                }
                LODWORD(v768) = 0;
LABEL_1246:
                if ( *v765 < (char)v768 )
                  goto LABEL_1279;
                v769 = *(_DWORD *)(v760 + 4);
                v770 = *v761 - v769;
                v771 = (unsigned int)v770;
                v772 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) + 24LL) + v769;
                *(_DWORD *)(v21 + 1672) += v770;
                v773 = (_QWORD *)v772;
                v774 = *(_DWORD *)(v21 + 1652);
                v775 = (const char *)v772;
                v776 = *(_QWORD *)(v21 + 1656);
                if ( v772 < v770 + v772 )
                {
                  do
                  {
                    _mm_prefetch(v775, 0);
                    v775 += 64;
                  }
                  while ( (unsigned __int64)v775 < v770 + v772 );
                }
                v777 = *(_QWORD *)(v21 + 1656);
                v778 = (unsigned int)v770 >> 7;
                if ( (unsigned int)v770 >> 7 )
                {
                  do
                  {
                    v779 = 8LL;
                    do
                    {
                      v780 = v777 ^ *v773;
                      v781 = v773[1];
                      v773 += 2;
                      v777 = __ROL8__(__ROL8__(v780, v774) ^ v781, v774);
                      --v779;
                    }
                    while ( v779 );
                    v782 = __ROL8__(v776 ^ ((unsigned __int64)v773 - v772), 17) ^ v776 ^ ((unsigned __int64)v773 - v772);
                    v783 = (v782 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3C0) = v783;
                    v774 = ((unsigned __int8)(v783 ^ v782) ^ (unsigned __int8)v774) & 0x3F;
                    if ( !v774 )
                      LOBYTE(v774) = 1;
                    --v778;
                  }
                  while ( v778 );
                  v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                  LODWORD(v768) = 0;
                }
                v784 = v770 & 0x7F;
                if ( v784 >= 8 )
                {
                  v768 = (unsigned __int64)v784 >> 3;
                  do
                  {
                    v777 = __ROL8__(*v773++ ^ v777, v774);
                    v784 -= 8;
                    --v768;
                  }
                  while ( v768 );
                }
                if ( v784 )
                {
                  do
                  {
                    v785 = *(unsigned __int8 *)v773;
                    v773 = (_QWORD *)((char *)v773 + 1);
                    v777 = __ROL8__(v785 ^ v777, v774);
                    --v784;
                  }
                  while ( v784 );
                  v765 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                }
                for ( i10 = v777; ; LOBYTE(v777) = i10 ^ v777 )
                {
                  i10 >>= 7;
                  if ( !i10 )
                    break;
                }
                v787 = v777 & 0x7F;
                if ( v787 == (*v765 & 0x7F) )
                  goto LABEL_1278;
                if ( !v771 || (*(_DWORD *)(v21 + 2012) & 0x40) == 0 )
                  goto LABEL_1275;
                v788 = KeGetCurrentIrql();
                v789 = v772 & 0xFFFFFFFFFFFFF000uLL;
                v790 = (v772 + v771 - 1) | 0xFFF;
                v791 = (v772 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1269:
                __writecr8(2uLL);
                while ( 1 )
                {
                  v792 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v21 + 1104))(v789, 0LL);
                  if ( v792 == -1073741267 )
                  {
                    if ( v788 <= 1u )
                    {
                      __writecr8(v788);
                      KeGetCurrentIrql();
                      goto LABEL_1269;
                    }
                    LODWORD(v768) = 0;
                  }
                  else
                  {
                    LODWORD(v768) = 0;
                    if ( v792 < 0 )
                    {
                      __writecr8(v788);
                      v765 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
LABEL_1275:
                      if ( *(_DWORD *)(v21 + 1872) == (_DWORD)v768 )
                      {
                        *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = *v765 & 0x7F ^ (unsigned __int64)v787;
                        if ( *(_DWORD *)(v21 + 1872) == (_DWORD)v768 )
                        {
                          v793 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                          *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v21 + 1888) = (char *)v793 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v21 + 1896) = *v793;
                          *(_QWORD *)(v21 + 1904) = v772;
                          *(_DWORD *)(v21 + 1872) = 1;
                        }
                      }
LABEL_1278:
                      v760 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      *(_DWORD *)(v21 + 1672) += 64;
                      v761 = *(_DWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
LABEL_1279:
                      ++v765;
                      v760 += 12LL;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v765;
                      v761 += 3;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v760;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v761;
                      if ( (unsigned __int64)v761 >= *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70)
                        || *(_DWORD *)(v21 + 1672) >= *(_DWORD *)(v21 + 1676) )
                      {
                        v762 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x90);
                        v764 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                        v43 = *v2;
                        *(_DWORD *)(v21 + 1668) = ((int)v760
                                                 - *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x48))
                                                / 12;
                        v766 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x68);
                        goto LABEL_1282;
                      }
                      goto LABEL_1246;
                    }
                  }
                  v789 += 4096LL;
                  v791 += 4096LL;
                  if ( v791 == v790 )
                  {
                    __writecr8(v788);
                    v765 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                    goto LABEL_1278;
                  }
                }
              }
              v41 = (unsigned int)(v65 - 31);
              if ( v65 != 31 )
              {
                v41 = (unsigned int)(v65 - 32);
                if ( v65 == 32 )
                {
                  sub_140176734(v21, v50);
                  goto LABEL_269;
                }
                if ( v65 == 33 )
                {
                  sub_140175834(v21, v50);
                  goto LABEL_269;
                }
                goto LABEL_2048;
              }
              if ( (*(_DWORD *)(v21 + 1680) & 1) == 0 )
                goto LABEL_269;
              if ( !*(_QWORD *)(v21 + 2000) || (*(_DWORD *)(v21 + 2012) & 4) != 0 )
              {
                v698 = 0LL;
              }
              else
              {
                v697 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(v21 + 952))(26LL, v2 + 178, 0LL);
                v698 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x2C8);
                if ( v697 < 0 )
                  v698 = 0LL;
              }
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v698;
              v699 = 0;
              *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 0;
              v700 = 0LL;
              while ( 1 )
              {
                v736 = (*(__int64 (__fastcall **)(__int64))(v21 + 928))(v700);
                v737 = v736;
                if ( !v736 )
                {
                  v738 = *(_QWORD *)(v21 + 1176);
                  if ( (*(int (__fastcall **)(__int64))(v21 + 912))(v738) >= 0 )
                  {
                    v739 = (*(__int64 (__fastcall **)(__int64))(v21 + 968))(v738);
                    *(_BYTE *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xB9) = v739;
                    v740 = (*(__int64 (__fastcall **)(__int64, __int64))(v21 + 976))(v738, (__int64)v2 + 94);
                    v741 = (*(__int64 (__fastcall **)(__int64))(v21 + 984))(v738);
                    if ( v739 == 114
                      || *(_DWORD *)(v21 + 1872)
                      || (*(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v739 ^ 0x72LL, *(_DWORD *)(v21 + 1872)) )
                    {
                      v742 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    else
                    {
                      v742 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v742 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v742;
                      *(_QWORD *)(v21 + 1904) = v738;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    v743 = 0;
                    v744 = 0;
                    if ( (v739 & 7) == 1 )
                    {
                      v743 = 48;
                    }
                    else if ( (v739 & 7) == 2 )
                    {
                      v743 = 16;
                      v744 = 16;
                    }
                    else if ( (v739 & 7) != 0 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v742 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v742;
                      *(_QWORD *)(v21 + 1904) = v738;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    v745 = *(_QWORD *)(v21 + 1408);
                    v746 = (unsigned __int64)v739 >> 4;
                    if ( ((unsigned __int8)v743 | *(_BYTE *)(v745 + 2 * v746)) != v740 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v742 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v742;
                      *(_QWORD *)(v21 + 1904) = v738;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    if ( ((unsigned __int8)v744 | *(_BYTE *)(v745 + 2 * v746 + 1)) != *(_BYTE *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                               + 0x5E)
                      && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v742 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v742;
                      *(_QWORD *)(v21 + 1904) = v738;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    if ( v738 == *(_QWORD *)(v21 + 1176) )
                      v747 = 0LL;
                    else
                      v747 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v21 + 960))(v738, 1LL);
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v747;
                    if ( v747 )
                    {
                      v748 = v747;
                      if ( *v747 )
                      {
                        v749 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        do
                        {
                          *v748 &= 0xFFFFFFFFFFFFFFFCuLL;
                          (*(void (__fastcall **)(_QWORD))(v21 + 464))(*v748);
                          v750 = *(unsigned __int8 *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x5E);
                          v751 = v748[1] & 0xFFFFFFFFFFFF0000uLL;
                          if ( v751 == v741 )
                            v750 = v740;
                          v752 = v748[1] >> 6;
                          LOBYTE(v752) = v752 & 0xF;
                          if ( (*(unsigned int (__fastcall **)(__int64, __int64))(v21 + 992))(v752, v750) )
                          {
                            v45 = 0;
                          }
                          else
                          {
                            if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                            {
                              v753 = *(_QWORD **)(v21 + 2224);
                              v754 = 48;
                              v755 = 6LL;
                              do
                              {
                                v754 -= 8;
                                *v753 = *(_QWORD *)v749;
                                v749 += 8;
                                ++v753;
                                --v755;
                              }
                              while ( v755 );
                              if ( v754 )
                              {
                                do
                                {
                                  v756 = *v749++;
                                  *(_BYTE *)v753 = v756;
                                  v753 = (_QWORD *)((char *)v753 + 1);
                                  --v754;
                                }
                                while ( v754 );
                                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                              }
                              v749 = *(char **)(v21 + 2224);
                            }
                            *((_QWORD *)v749 + 3) = v751;
                            v45 = 0;
                            *((_QWORD *)v749 + 4) = *v748;
                            v749[40] = ((unsigned __int64)*((unsigned int *)v748 + 2) >> 6) & 0xF;
                            if ( !*(_DWORD *)(v21 + 1872) )
                            {
                              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v21 + 1888) = v749 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v21 + 1896) = *(int *)v749;
                              *(_QWORD *)(v21 + 1904) = v738;
                              *(_DWORD *)(v21 + 1872) = 1;
                            }
                          }
                          v748 += 6;
                        }
                        while ( *v748 );
                        v747 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                      }
                      (*(void (__fastcall **)(_QWORD *))(v21 + 240))(v747);
                    }
                    (*(void (__fastcall **)(__int64))(v21 + 920))(v738);
                    v699 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                    *(_DWORD *)(v21 + 1672) += 0x8000;
                  }
                  v41 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  if ( v41 )
                    (*(void (**)(void))(v21 + 464))();
                  *(_DWORD *)(v21 + 1672) += v699 << 8;
                  goto LABEL_268;
                }
                if ( v698 == v736 )
                {
                  v701 = v50;
                  v702 = 0LL;
                  if ( (*(int (__fastcall **)(__int64))(v21 + 912))(v736) >= 0 )
                  {
                    v703 = (*(__int64 (__fastcall **)(__int64))(v21 + 968))(v737);
                    *(_BYTE *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xB8) = v703;
                    v704 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 976))(v737, v2 + 23);
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (*(__int64 (__fastcall **)(__int64))(v21 + 984))(v737);
                    if ( v703 == 97
                      || *(_DWORD *)(v21 + 1872)
                      || (*(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v703 ^ 0x61LL, *(_DWORD *)(v21 + 1872)) )
                    {
                      v705 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    else
                    {
                      v705 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v705 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v705;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    v706 = 0;
                    v707 = 0;
                    if ( (v703 & 7) == 1 )
                    {
                      v706 = 48;
                    }
                    else if ( (v703 & 7) == 2 )
                    {
                      v706 = 16;
                      v707 = 16;
                    }
                    else if ( (v703 & 7) != 0 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v705 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v705;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    v708 = *(_QWORD *)(v21 + 1408);
                    v709 = (unsigned __int64)v703 >> 4;
                    v710 = v706 | *(_BYTE *)(v708 + 2 * v709);
                    v711 = 0xA3A03F5891C8B4E8uLL;
                    if ( v710 != v704 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v705 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v705;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    if ( ((unsigned __int8)v707 | *(_BYTE *)(v708 + 2 * v709 + 1)) != *(_BYTE *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                               + 0x5C)
                      && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v705 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v705;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    if ( v737 != *(_QWORD *)(v21 + 1176) )
                      v702 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v21 + 960))(v737, 1LL);
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v702;
                    if ( v702 )
                    {
                      v712 = v702;
                      if ( *v702 )
                      {
                        v713 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                        do
                        {
                          *v712 &= 0xFFFFFFFFFFFFFFFCuLL;
                          (*(void (__fastcall **)(_QWORD, unsigned __int64))(v21 + 464))(*v712, v711);
                          v714 = *(unsigned __int8 *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x5C);
                          v715 = v712[1] & 0xFFFFFFFFFFFF0000uLL;
                          if ( v715 == v713 )
                            v714 = v704;
                          v716 = v712[1] >> 6;
                          LOBYTE(v716) = v716 & 0xF;
                          if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v21 + 992))(v716, v714) )
                          {
                            if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                            {
                              v717 = *(_QWORD **)(v21 + 2224);
                              LODWORD(v711) = 48;
                              v718 = 6LL;
                              do
                              {
                                v711 = (unsigned int)(v711 - 8);
                                *v717 = *(_QWORD *)v701;
                                v701 += 8;
                                ++v717;
                                --v718;
                              }
                              while ( v718 );
                              if ( (_DWORD)v711 )
                              {
                                do
                                {
                                  v719 = *v701++;
                                  *(_BYTE *)v717 = v719;
                                  v717 = (_QWORD *)((char *)v717 + 1);
                                  v711 = (unsigned int)(v711 - 1);
                                }
                                while ( (_DWORD)v711 );
                                v713 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                              }
                              v701 = *(char **)(v21 + 2224);
                            }
                            *((_QWORD *)v701 + 3) = v715;
                            *((_QWORD *)v701 + 4) = *v712;
                            v701[40] = ((unsigned __int64)*((unsigned int *)v712 + 2) >> 6) & 0xF;
                            if ( !*(_DWORD *)(v21 + 1872) )
                            {
                              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v21 + 1888) = v701 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v21 + 1896) = *(int *)v701;
                              *(_QWORD *)(v21 + 1904) = v737;
                              *(_DWORD *)(v21 + 1872) = 1;
                            }
                          }
                          v712 += 6;
                        }
                        while ( *v712 );
                        goto LABEL_1187;
                      }
                      goto LABEL_1188;
                    }
                    goto LABEL_1189;
                  }
                }
                else
                {
                  if ( !(*(unsigned int (__fastcall **)(__int64))(v21 + 944))(v736) )
                    goto LABEL_1191;
                  v720 = v50;
                  v702 = 0LL;
                  if ( (*(int (__fastcall **)(__int64))(v21 + 912))(v737) >= 0 )
                  {
                    v721 = (*(__int64 (__fastcall **)(__int64))(v21 + 968))(v737);
                    *(_BYTE *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xBA) = v721;
                    v722 = (*(__int64 (__fastcall **)(__int64, __int64))(v21 + 976))(v737, (__int64)v2 + 93);
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = (*(__int64 (__fastcall **)(__int64))(v21 + 984))(v737);
                    if ( v721 == 97
                      || *(_DWORD *)(v21 + 1872)
                      || (*(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v721 ^ 0x61LL, *(_DWORD *)(v21 + 1872)) )
                    {
                      v723 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    }
                    else
                    {
                      v723 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v723 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v723;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    v724 = 0;
                    v725 = 0;
                    if ( (v721 & 7) == 1 )
                    {
                      v724 = 48;
                    }
                    else if ( (v721 & 7) == 2 )
                    {
                      v724 = 16;
                      v725 = 16;
                    }
                    else if ( (v721 & 7) != 0 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v723 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v723;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    v726 = *(_QWORD *)(v21 + 1408);
                    v727 = (unsigned __int64)v721 >> 4;
                    v63 = (*(_BYTE *)(v726 + 2 * v727) | (unsigned __int8)v724) == v722;
                    v711 = 0xA3A03F5891C8B4E8uLL;
                    if ( !v63 && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v723 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v723;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    if ( ((unsigned __int8)v725 | *(_BYTE *)(v726 + 2 * v727 + 1)) != *(_BYTE *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                               + 0x5D)
                      && !*(_DWORD *)(v21 + 1872) )
                    {
                      *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v21 + 1888) = (char *)v723 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v21 + 1896) = *v723;
                      *(_QWORD *)(v21 + 1904) = v737;
                      *(_DWORD *)(v21 + 1872) = 1;
                    }
                    if ( v737 != *(_QWORD *)(v21 + 1176) )
                      v702 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v21 + 960))(v737, 1LL);
                    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50) = v702;
                    if ( v702 )
                    {
                      v728 = v702;
                      if ( *v702 )
                      {
                        v729 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                        do
                        {
                          *v728 &= 0xFFFFFFFFFFFFFFFCuLL;
                          (*(void (__fastcall **)(_QWORD, unsigned __int64))(v21 + 464))(*v728, v711);
                          v730 = *(unsigned __int8 *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x5D);
                          v731 = v728[1] & 0xFFFFFFFFFFFF0000uLL;
                          if ( v731 == v729 )
                            v730 = v722;
                          v732 = v728[1] >> 6;
                          LOBYTE(v732) = v732 & 0xF;
                          if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(v21 + 992))(v732, v730) )
                          {
                            if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                            {
                              v733 = *(_QWORD **)(v21 + 2224);
                              LODWORD(v711) = 48;
                              v734 = 6LL;
                              do
                              {
                                v711 = (unsigned int)(v711 - 8);
                                *v733 = *(_QWORD *)v720;
                                v720 += 8;
                                ++v733;
                                --v734;
                              }
                              while ( v734 );
                              if ( (_DWORD)v711 )
                              {
                                do
                                {
                                  v735 = *v720++;
                                  *(_BYTE *)v733 = v735;
                                  v733 = (_QWORD *)((char *)v733 + 1);
                                  v711 = (unsigned int)(v711 - 1);
                                }
                                while ( (_DWORD)v711 );
                                v729 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                              }
                              v720 = *(char **)(v21 + 2224);
                            }
                            *((_QWORD *)v720 + 3) = v731;
                            *((_QWORD *)v720 + 4) = *v728;
                            v720[40] = ((unsigned __int64)*((unsigned int *)v728 + 2) >> 6) & 0xF;
                            if ( !*(_DWORD *)(v21 + 1872) )
                            {
                              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v21 + 1888) = v720 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v21 + 1896) = *(int *)v720;
                              *(_QWORD *)(v21 + 1904) = v737;
                              *(_DWORD *)(v21 + 1872) = 1;
                            }
                          }
                          v728 += 6;
                        }
                        while ( *v728 );
LABEL_1187:
                        v702 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x50);
                        v699 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28);
                      }
LABEL_1188:
                      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(v21 + 240))(v702, v711);
                    }
LABEL_1189:
                    (*(void (__fastcall **)(__int64, unsigned __int64))(v21 + 920))(v737, v711);
                    v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                    *(_DWORD *)(v21 + 1672) += 0x8000;
                    v698 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  }
                }
                v45 = 0;
LABEL_1191:
                ++v699;
                v700 = v737;
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v699;
              }
            }
            v824 = (_QWORD *)*((_QWORD *)v50 + 1);
            v825 = *((unsigned int *)v50 + 4);
            v826 = v824;
            *(_DWORD *)(v21 + 1672) += v825;
            v827 = (const char *)v824;
            v828 = *(_DWORD *)(v21 + 1652);
            v829 = *(_QWORD *)(v21 + 1656);
            if ( v824 < (_QWORD *)((char *)v824 + v825) )
            {
              do
              {
                _mm_prefetch(v827, 0);
                v827 += 64;
              }
              while ( v827 < (const char *)v824 + v825 );
            }
            v830 = *(_QWORD *)(v21 + 1656);
            v831 = (unsigned int)v825 >> 7;
            if ( (unsigned int)v825 >> 7 )
            {
              do
              {
                v832 = 8LL;
                do
                {
                  v833 = v826[1] ^ __ROL8__(*v826 ^ v830, v828);
                  v826 += 2;
                  v830 = __ROL8__(v833, v828);
                  --v832;
                }
                while ( v832 );
                v834 = (__ROL8__(v829 ^ ((char *)v826 - (char *)v824), 17) ^ v829 ^ (unsigned __int64)((char *)v826 - (char *)v824))
                     * (unsigned __int128)0x7010008004002001uLL;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3D0) = *((_QWORD *)&v834 + 1);
                v828 = (BYTE8(v834) ^ (unsigned __int8)(v834 ^ v828)) & 0x3F;
                if ( !v828 )
                  LOBYTE(v828) = 1;
                --v831;
              }
              while ( v831 );
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            }
            v835 = v825 & 0x7F;
            if ( (unsigned int)v835 >= 8 )
            {
              v836 = (unsigned __int64)(unsigned int)v835 >> 3;
              do
              {
                v830 = __ROL8__(*v826++ ^ v830, v828);
                v835 = (unsigned int)(v835 - 8);
                --v836;
              }
              while ( v836 );
            }
            for ( ; (_DWORD)v835; v835 = (unsigned int)(v835 - 1) )
            {
              v837 = *(unsigned __int8 *)v826;
              v826 = (_QWORD *)((char *)v826 + 1);
              v830 = __ROL8__(v837 ^ v830, v828);
            }
            for ( i11 = v830; ; LODWORD(v830) = i11 ^ v830 )
            {
              i11 >>= 31;
              if ( !i11 )
                break;
            }
            v839 = v830 & 0x7FFFFFFF;
            if ( v839 != *((_DWORD *)v50 + 5) )
            {
              if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
                v45 = 1;
              v840 = *((_QWORD *)v50 + 1);
              if ( *((_DWORD *)v50 + 4) )
              {
                v835 = 64LL;
                if ( (*(_DWORD *)(v21 + 2012) & 0x40) != 0 )
                {
                  v841 = KeGetCurrentIrql();
                  v842 = v840 & 0xFFFFFFFFFFFFF000uLL;
                  v843 = (v840 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
                  v844 = (v840 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    __writecr8(2uLL);
                    while ( 1 )
                    {
                      v845 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                               v842,
                               0LL,
                               v835,
                               v826);
                      if ( v845 == -1073741267 )
                        break;
                      if ( v845 < 0 )
                      {
LABEL_1377:
                        v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        __writecr8(v841);
                        goto LABEL_1378;
                      }
LABEL_1358:
                      v835 = 4096LL;
                      v842 += 4096LL;
                      v844 += 4096LL;
                      if ( v844 == v843 )
                      {
                        __writecr8(v841);
                        v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                        goto LABEL_1360;
                      }
                    }
                    if ( v45 )
                      goto LABEL_1377;
                    if ( v841 > 1u )
                      goto LABEL_1358;
                    __writecr8(v841);
                    KeGetCurrentIrql();
                  }
                }
              }
LABEL_1378:
              if ( !*(_DWORD *)(v21 + 1872) )
                *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v839 ^ (unsigned __int64)*((unsigned int *)v50 + 5);
              v860 = *((_QWORD *)v50 + 1);
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                *(_QWORD *)(v21 + 1904) = v860;
                *(_DWORD *)(v21 + 1872) = 1;
              }
            }
LABEL_1360:
            v41 = 0LL;
            v846 = (__int64 **)*((_QWORD *)v50 + 1);
            v847 = *((_DWORD *)v50 + 4) >> 4;
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v846;
            if ( v847 )
            {
              v848 = v847;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v847;
              do
              {
                v849 = 1;
                v850 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                v851 = **v846;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1F8) = 0LL;
                v852 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(v21 + 768))(
                         v851,
                         v2 + 126,
                         v835,
                         v826);
                v41 = 0LL;
                v853 = v852;
                if ( v852 )
                {
                  do
                  {
                    ++v849;
                    if ( !(*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 504))(v853, v2 + 246) )
                    {
                      if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
                      {
                        v854 = *(_QWORD **)(v21 + 2224);
                        v855 = 48;
                        v856 = 6LL;
                        do
                        {
                          v855 -= 8;
                          *v854 = *(_QWORD *)v850;
                          v850 += 8;
                          ++v854;
                          --v856;
                        }
                        while ( v856 );
                        if ( v855 )
                        {
                          do
                          {
                            v857 = *v850++;
                            *(_BYTE *)v854 = v857;
                            v854 = (_QWORD *)((char *)v854 + 1);
                            --v855;
                          }
                          while ( v855 );
                          v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                        }
                        v850 = *(char **)(v21 + 2224);
                      }
                      *((_QWORD *)v850 + 3) = v853;
                      *((_QWORD *)v850 + 4) = v851;
                      v858 = *(_QWORD *)(v21 + 1352);
                      *(_QWORD *)v858 = v850;
                      *(_DWORD *)(v858 + 16) = 48;
                      v859 = *(_QWORD *)(v21 + 1352);
                      *(_QWORD *)(v859 + 8) = v853;
                      *(_DWORD *)(v859 + 20) = 4096;
                      if ( !*(_DWORD *)(v21 + 1872) )
                      {
                        *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v21 + 1888) = v850 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v21 + 1896) = *(int *)v850;
                        *(_QWORD *)(v21 + 1904) = 6LL;
                        *(_DWORD *)(v21 + 1872) = 1;
                      }
                    }
                    v853 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(v21 + 768))(v851, v2 + 126);
                  }
                  while ( v853 );
                  v846 = *(__int64 ***)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
                  v41 = 0LL;
                  v848 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
                }
                v846 += 2;
                --v848;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v846;
                *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v848;
              }
              while ( v848 );
            }
            goto LABEL_325;
          }
          v861 = *((unsigned int *)v50 + 4);
          if ( !(_DWORD)v861 )
          {
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x290) = v50 + 48;
            v862 = *((_WORD *)v50 + 20);
            v1442 = v2 + 58;
            *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x288) = v862;
            *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28A) = v862;
            v863 = *(_QWORD *)(v21 + 1224);
            v864 = *(int (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _DWORD *))(v21 + 472);
            LOBYTE(v1440) = 0;
            if ( v864(v2 + 162, 0LL, 0LL, 0LL, v863, v1440, 0LL, v1442) < 0 )
              goto LABEL_269;
            if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) + 16LL) & 0x10) == 0 )
            {
              (*(void (__fastcall **)(_QWORD))(v21 + 464))(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                     + 0xE8));
              goto LABEL_269;
            }
            if ( (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(v21 + 496))(
                   *(_QWORD *)(v21 + 472),
                   v2 + 98,
                   v2 + 170) )
            {
              v865 = (*(__int64 (__fastcall **)(_QWORD))(v21 + 488))(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                               + 0x188));
              if ( v865 )
              {
                v42 = *(_DWORD *)(v865 + 80);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD0) = v42;
              }
            }
            if ( (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(v21 + 496))(
                   *((_QWORD *)v50 + 3),
                   v2 + 100,
                   v2 + 159) )
            {
              v866 = (*(__int64 (__fastcall **)(_QWORD))(v21 + 488))(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                               + 0x190));
              if ( v866 )
              {
                v44 = *(_DWORD *)(v866 + 80);
                *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C) = v44;
              }
            }
            if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) == 0 )
            {
              *((_QWORD *)v50 + 1) = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) + 112LL;
              *((_DWORD *)v50 + 4) = 224;
            }
            v867 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8);
            v868 = 0;
            v869 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x188);
            v870 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
            v871 = v42;
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v42;
            while ( 1 )
            {
              v872 = *(_QWORD *)(v867 + 8LL * v868 + 112);
              if ( (!v42 || v872 < v869 || v872 > v42 + v869 - 1) && (!v44 || v872 < v870 || v872 > v44 + v870 - 1) )
                break;
              if ( ++v868 >= 0x1Cu )
              {
                if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) == 0 )
                {
                  v873 = (_QWORD *)*((_QWORD *)v50 + 1);
                  v874 = *((unsigned int *)v50 + 4);
                  v875 = v873;
                  *(_DWORD *)(v21 + 1672) += v874;
                  v876 = (const char *)v873;
                  v877 = *(_DWORD *)(v21 + 1652);
                  v878 = *(_QWORD *)(v21 + 1656);
                  if ( v873 < (_QWORD *)((char *)v873 + v874) )
                  {
                    do
                    {
                      _mm_prefetch(v876, 0);
                      v876 += 64;
                    }
                    while ( v876 < (const char *)v873 + v874 );
                  }
                  v879 = (unsigned int)v874 >> 7;
                  v880 = *(_QWORD *)(v21 + 1656);
                  if ( (unsigned int)v874 >> 7 )
                  {
                    do
                    {
                      v881 = 8LL;
                      do
                      {
                        v882 = v875[1] ^ __ROL8__(*v875 ^ v880, v877);
                        v875 += 2;
                        v880 = __ROL8__(v882, v877);
                        --v881;
                      }
                      while ( v881 );
                      v883 = (__ROL8__(v878 ^ ((char *)v875 - (char *)v873), 17) ^ v878 ^ (unsigned __int64)((char *)v875 - (char *)v873))
                           * (unsigned __int128)0x7010008004002001uLL;
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E0) = *((_QWORD *)&v883 + 1);
                      v877 = (BYTE8(v883) ^ (unsigned __int8)(v883 ^ v877)) & 0x3F;
                      if ( !v877 )
                        LOBYTE(v877) = 1;
                      --v879;
                    }
                    while ( v879 );
                    v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                    v871 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
                    v44 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
                  }
                  v884 = v874 & 0x7F;
                  if ( v884 >= 8 )
                  {
                    v885 = (unsigned __int64)v884 >> 3;
                    do
                    {
                      v880 = __ROL8__(*v875++ ^ v880, v877);
                      v884 -= 8;
                      --v885;
                    }
                    while ( v885 );
                  }
                  if ( v884 )
                  {
                    do
                    {
                      v886 = *(unsigned __int8 *)v875;
                      v875 = (_QWORD *)((char *)v875 + 1);
                      v880 = __ROL8__(v886 ^ v880, v877);
                      --v884;
                    }
                    while ( v884 );
                    v44 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x9C);
                  }
                  for ( i12 = v880; ; LODWORD(v880) = i12 ^ v880 )
                  {
                    i12 >>= 31;
                    if ( !i12 )
                      break;
                  }
                  *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0;
                  *((_DWORD *)v50 + 5) = v880 & 0x7FFFFFFF;
                  v888 = 0;
                  v889 = *(unsigned int **)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) + 80LL);
                  if ( v889 )
                  {
                    v888 = *v889;
                    v890 = 0;
                    *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *v889;
                    v891 = (v888 - 8) >> 3;
                    if ( v891 )
                    {
                      v892 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x188);
                      v893 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x190);
                      do
                      {
                        v41 = *(_QWORD *)&v889[2 * v890 + 2];
                        if ( v41
                          && (!v871 || v41 < v892 || v41 > v871 + v892 - 1)
                          && (!v44 || v41 < v893 || v41 > v44 + v893 - 1) )
                        {
                          *((_QWORD *)v50 + 4) = v41;
                          v45 = 0;
                          v906 = *(_QWORD *)(v21 + 1352);
                          *(_QWORD *)v906 = v50;
                          *(_DWORD *)(v906 + 16) = 48;
                          if ( !*(_DWORD *)(v21 + 1872) )
                          {
                            *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v21 + 1896) = *(int *)v50;
                            *(_QWORD *)(v21 + 1904) = v889;
                            *(_DWORD *)(v21 + 1872) = 1;
                          }
                          v43 = *v2;
                          goto LABEL_269;
                        }
                        ++v890;
                      }
                      while ( v890 < v891 );
                    }
                  }
                  *(_DWORD *)(v21 + 1672) += v888;
                  v894 = v889;
                  v895 = *(_DWORD *)(v21 + 1652);
                  v896 = (const char *)v889;
                  v897 = *(_QWORD *)(v21 + 1656);
                  v41 = (unsigned __int64)v889 + v888;
                  if ( (unsigned __int64)v889 < v41 )
                  {
                    do
                    {
                      _mm_prefetch(v896, 0);
                      v896 += 64;
                    }
                    while ( (unsigned __int64)v896 < v41 );
                  }
                  v45 = 0;
                  v898 = v888 >> 7;
                  v899 = *(_QWORD *)(v21 + 1656);
                  if ( v888 >> 7 )
                  {
                    do
                    {
                      v900 = 8LL;
                      do
                      {
                        v901 = *((_QWORD *)v894 + 1) ^ __ROL8__(*(_QWORD *)v894 ^ v899, v895);
                        v894 += 4;
                        v899 = __ROL8__(v901, v895);
                        --v900;
                      }
                      while ( v900 );
                      v41 = __ROL8__(v897 ^ ((char *)v894 - (char *)v889), 17) ^ v897 ^ ((char *)v894 - (char *)v889);
                      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3E8) = (v41
                                                                                              * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v895 = ((unsigned __int8)((v41 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v41 ^ v895)) & 0x3F;
                      if ( !v895 )
                        v895 = 1;
                      --v898;
                    }
                    while ( v898 );
                    v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                    v888 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
                  }
                  v902 = v888 & 0x7F;
                  if ( v902 >= 8 )
                  {
                    v903 = (unsigned __int64)v902 >> 3;
                    do
                    {
                      v41 = v895;
                      v899 = __ROL8__(*(_QWORD *)v894 ^ v899, v895);
                      v894 += 2;
                      v902 -= 8;
                      --v903;
                    }
                    while ( v903 );
                  }
                  for ( ; v902; --v902 )
                  {
                    v904 = *(unsigned __int8 *)v894;
                    v41 = v895;
                    v894 = (unsigned int *)((char *)v894 + 1);
                    v899 = __ROL8__(v904 ^ v899, v895);
                  }
                  for ( i13 = v899; ; LODWORD(v899) = i13 ^ v899 )
                  {
                    i13 >>= 31;
                    if ( !i13 )
                      break;
                  }
                  *((_DWORD *)v50 + 11) = v899 & 0x7FFFFFFF;
                  goto LABEL_1072;
                }
                (*(void (**)(void))(v21 + 464))();
LABEL_326:
                v45 = 0;
                goto LABEL_269;
              }
            }
            if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
            {
              v907 = *(_QWORD **)(v21 + 2224);
              v908 = 48;
              v909 = 6LL;
              do
              {
                v908 -= 8;
                *v907 = *(_QWORD *)v50;
                v50 += 8;
                ++v907;
                --v909;
              }
              while ( v909 );
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              v45 = 0;
              if ( v908 )
              {
                do
                {
                  v910 = *v50++;
                  *(_BYTE *)v907 = v910;
                  v907 = (_QWORD *)((char *)v907 + 1);
                  --v908;
                }
                while ( v908 );
                v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
                v43 = *v2;
              }
              v50 = *(char **)(v21 + 2224);
            }
            else
            {
              v45 = 0;
            }
            *((_QWORD *)v50 + 4) = v872;
            v911 = *(_QWORD *)(v21 + 1352);
            *(_QWORD *)v911 = v50;
            *(_DWORD *)(v911 + 16) = 48;
            goto LABEL_375;
          }
          v912 = (_QWORD *)*((_QWORD *)v50 + 1);
          *(_DWORD *)(v21 + 1672) += v861;
          v913 = v912;
          v914 = *(_DWORD *)(v21 + 1652);
          v915 = (const char *)v912;
          v916 = *(_QWORD *)(v21 + 1656);
          if ( v912 < (_QWORD *)((char *)v912 + v861) )
          {
            do
            {
              _mm_prefetch(v915, 0);
              v915 += 64;
            }
            while ( v915 < (const char *)v912 + v861 );
          }
          v917 = *(_QWORD *)(v21 + 1656);
          v918 = (unsigned int)v861 >> 7;
          if ( (unsigned int)v861 >> 7 )
          {
            do
            {
              v919 = 8LL;
              do
              {
                v920 = v913[1] ^ __ROL8__(*v913 ^ v917, v914);
                v913 += 2;
                v917 = __ROL8__(v920, v914);
                --v919;
              }
              while ( v919 );
              v921 = (__ROL8__(v916 ^ ((char *)v913 - (char *)v912), 17) ^ v916 ^ (unsigned __int64)((char *)v913 - (char *)v912))
                   * (unsigned __int128)0x7010008004002001uLL;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F0) = *((_QWORD *)&v921 + 1);
              v914 = (BYTE8(v921) ^ (unsigned __int8)(v921 ^ v914)) & 0x3F;
              if ( !v914 )
                LOBYTE(v914) = 1;
              --v918;
            }
            while ( v918 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          v922 = v861 & 0x7F;
          if ( v922 >= 8 )
          {
            v923 = (unsigned __int64)v922 >> 3;
            do
            {
              v917 = __ROL8__(*v913++ ^ v917, v914);
              v922 -= 8;
              --v923;
            }
            while ( v923 );
          }
          for ( ; v922; --v922 )
          {
            v924 = *(unsigned __int8 *)v913;
            v913 = (_QWORD *)((char *)v913 + 1);
            v917 = __ROL8__(v924 ^ v917, v914);
          }
          for ( i14 = v917; ; LODWORD(v917) = i14 ^ v917 )
          {
            i14 >>= 31;
            if ( !i14 )
              break;
          }
          v926 = v917 & 0x7FFFFFFF;
          if ( v926 == *((_DWORD *)v50 + 5) )
          {
LABEL_1495:
            v45 = 0;
          }
          else
          {
            if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
              v45 = 1;
            v927 = *((_QWORD *)v50 + 1);
            if ( *((_DWORD *)v50 + 4) )
            {
              v928 = 64LL;
              if ( (*(_DWORD *)(v21 + 2012) & 0x40) != 0 )
              {
                v929 = KeGetCurrentIrql();
                v930 = v927 & 0xFFFFFFFFFFFFF000uLL;
                v931 = (v927 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
                v932 = (v927 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v933 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                             v930,
                             0LL,
                             v928,
                             v913);
                    if ( v933 == -1073741267 )
                      break;
                    if ( v933 < 0 )
                    {
LABEL_1507:
                      v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      __writecr8(v929);
                      goto LABEL_1508;
                    }
LABEL_1493:
                    v930 += 4096LL;
                    v932 += 4096LL;
                    if ( v932 == v931 )
                    {
                      __writecr8(v929);
                      v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
                      goto LABEL_1495;
                    }
                  }
                  if ( v45 )
                    goto LABEL_1507;
                  if ( v929 > 1u )
                    goto LABEL_1493;
                  __writecr8(v929);
                  KeGetCurrentIrql();
                }
              }
            }
LABEL_1508:
            v45 = 0;
            if ( !*(_DWORD *)(v21 + 1872) )
              *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v926 ^ (unsigned __int64)*((unsigned int *)v50 + 5);
            v945 = *((_QWORD *)v50 + 1);
            if ( !*(_DWORD *)(v21 + 1872) )
            {
              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v21 + 1896) = *(int *)v50;
              *(_QWORD *)(v21 + 1904) = v945;
              *(_DWORD *)(v21 + 1872) = 1;
            }
          }
          v934 = 0;
          v935 = *((_QWORD *)v50 + 1) - 112LL;
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xE8) = v935;
          v936 = *(unsigned int **)(v935 + 80);
          if ( v936 )
            v934 = *v936;
          *(_DWORD *)(v21 + 1672) += v934;
          v937 = v936;
          v938 = *(_DWORD *)(v21 + 1652);
          v939 = (const char *)v936;
          v940 = *(_QWORD *)(v21 + 1656);
          v41 = (unsigned __int64)v936 + v934;
          if ( (unsigned __int64)v936 < v41 )
          {
            do
            {
              _mm_prefetch(v939, 0);
              v939 += 64;
            }
            while ( (unsigned __int64)v939 < v41 );
          }
          v941 = *(_QWORD *)(v21 + 1656);
          v942 = v934 >> 7;
          if ( v934 >> 7 )
          {
            do
            {
              v943 = 8LL;
              do
              {
                v944 = *((_QWORD *)v937 + 1) ^ __ROL8__(*(_QWORD *)v937 ^ v941, v938);
                v937 += 4;
                v941 = __ROL8__(v944, v938);
                --v943;
              }
              while ( v943 );
              v41 = __ROL8__(v940 ^ ((char *)v937 - (char *)v936), 17) ^ v940 ^ ((char *)v937 - (char *)v936);
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x3F8) = (v41
                                                                                      * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v938 = ((unsigned __int8)((v41 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v41 ^ v938)) & 0x3F;
              if ( !v938 )
                v938 = 1;
              --v942;
            }
            while ( v942 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          v946 = v934 & 0x7F;
          if ( v946 >= 8 )
          {
            v947 = (unsigned __int64)v946 >> 3;
            do
            {
              v41 = v938;
              v941 = __ROL8__(*(_QWORD *)v937 ^ v941, v938);
              v937 += 2;
              v946 -= 8;
              --v947;
            }
            while ( v947 );
          }
          for ( ; v946; --v946 )
          {
            v948 = *(unsigned __int8 *)v937;
            v41 = v938;
            v937 = (unsigned int *)((char *)v937 + 1);
            v941 = __ROL8__(v948 ^ v941, v938);
          }
          for ( i15 = v941; ; LODWORD(v941) = i15 ^ v941 )
          {
            i15 >>= 31;
            if ( !i15 )
              break;
          }
          v950 = *((unsigned int *)v50 + 11);
          v951 = v941 & 0x7FFFFFFF;
          if ( v951 != (_DWORD)v950 && !*(_DWORD *)(v21 + 1872) )
          {
            v41 = v950 ^ v951;
            *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v41;
            if ( !*(_DWORD *)(v21 + 1872) )
            {
              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v21 + 1896) = *(int *)v50;
              *(_QWORD *)(v21 + 1904) = v936;
              *(_DWORD *)(v21 + 1872) = 1;
            }
          }
          goto LABEL_268;
        }
        v41 = *((_DWORD *)v50 + 10) & 1;
        if ( (*((_DWORD *)v50 + 10) & 1) != 0 && (!*(_QWORD *)(v21 + 2000) || (*(_DWORD *)(v21 + 2012) & 4) != 0) )
          goto LABEL_379;
        if ( (_DWORD)v41 )
        {
          v962 = *(_DWORD *)(v21 + 2012);
          if ( *(_DWORD *)(v21 + 1668) )
          {
            v41 = v962 ^ (v962 >> 3);
            if ( (((unsigned __int8)v962 ^ (unsigned __int8)(v962 >> 3)) & 4) != 0 )
              goto LABEL_379;
          }
          else
          {
            v41 = v962 ^ ((unsigned __int8)v962 ^ (unsigned __int8)(8 * v962)) & 0x20;
            *(_DWORD *)(v21 + 2012) = v41;
          }
          if ( !*(_QWORD *)(v21 + 2000) )
          {
LABEL_1547:
            *(_DWORD *)(v21 + 1668) = 0;
            goto LABEL_1629;
          }
          v963 = *(_DWORD *)(v21 + 2012);
          if ( *(_DWORD *)(v21 + 1668) )
          {
            v41 = v963 ^ (v963 >> 3);
            if ( (((unsigned __int8)v963 ^ (unsigned __int8)(v963 >> 3)) & 4) != 0 )
              goto LABEL_1547;
          }
          else
          {
            *(_DWORD *)(v21 + 2012) = v963 ^ ((unsigned __int8)v963 ^ (unsigned __int8)(8 * v963)) & 0x20;
          }
          if ( (*(_DWORD *)(v21 + 2012) & 4) != 0 )
          {
            v41 = *((unsigned int *)v50 + 4);
            v964 = *((_QWORD *)v50 + 1) & 0xFFFFFFFFFFFFF000uLL;
            v965 = (v41 + (*((_DWORD *)v50 + 2) & 0xFFF) + 4095LL) >> 12;
            if ( v965 )
            {
              do
              {
                --v965;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(v21 + 672))(v964, v46)
                  && !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v964;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
                *(_DWORD *)(v21 + 1672) += 256;
                v964 += 4096LL;
              }
              while ( v965 );
              goto LABEL_1628;
            }
            goto LABEL_1629;
          }
          v966 = (_QWORD *)*((_QWORD *)v50 + 1);
          v967 = *((unsigned int *)v50 + 4);
          v968 = v966;
          *(_DWORD *)(v21 + 1672) += v967;
          v969 = (const char *)v966;
          v970 = *(_DWORD *)(v21 + 1652);
          v971 = *(_QWORD *)(v21 + 1656);
          v41 = (unsigned __int64)v966 + v967;
          if ( v966 < (_QWORD *)((char *)v966 + v967) )
          {
            do
            {
              _mm_prefetch(v969, 0);
              v969 += 64;
            }
            while ( (unsigned __int64)v969 < v41 );
          }
          v972 = *(_QWORD *)(v21 + 1656);
          v973 = (unsigned int)v967 >> 7;
          if ( (unsigned int)v967 >> 7 )
          {
            do
            {
              v974 = 8LL;
              do
              {
                v975 = v968[1] ^ __ROL8__(*v968 ^ v972, v970);
                v968 += 2;
                v972 = __ROL8__(v975, v970);
                --v974;
              }
              while ( v974 );
              v41 = __ROL8__(v971 ^ ((char *)v968 - (char *)v966), 17) ^ v971 ^ ((char *)v968 - (char *)v966);
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x400) = (v41
                                                                                      * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v970 = ((unsigned __int8)((v41 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v41 ^ v970)) & 0x3F;
              if ( !v970 )
                v970 = 1;
              --v973;
            }
            while ( v973 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          v976 = v967 & 0x7F;
          if ( v976 >= 8 )
          {
            v977 = (unsigned __int64)v976 >> 3;
            do
            {
              v41 = v970;
              v972 = __ROL8__(*v968++ ^ v972, v970);
              v976 -= 8;
              --v977;
            }
            while ( v977 );
          }
          for ( ; v976; --v976 )
          {
            v978 = *(unsigned __int8 *)v968;
            v41 = v970;
            v968 = (_QWORD *)((char *)v968 + 1);
            v972 = __ROL8__(v978 ^ v972, v970);
          }
          for ( i16 = v972; ; LODWORD(v972) = i16 ^ v972 )
          {
            i16 >>= 31;
            if ( !i16 )
              break;
          }
          v980 = v972 & 0x7FFFFFFF;
          if ( v980 == *((_DWORD *)v50 + 5) )
            goto LABEL_1628;
          v981 = *((_QWORD *)v50 + 1);
          if ( *((_DWORD *)v50 + 4) )
          {
            v982 = 64LL;
            if ( (*(_DWORD *)(v21 + 2012) & 0x40) != 0 )
            {
              v983 = KeGetCurrentIrql();
              v984 = v981 & 0xFFFFFFFFFFFFF000uLL;
              v985 = (v981 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
              v986 = (v981 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                __writecr8(2uLL);
                while ( 1 )
                {
                  v987 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                           v984,
                           0LL,
                           v982,
                           v968);
                  if ( v987 == -1073741267 )
                    break;
                  if ( v987 < 0 )
                  {
                    __writecr8(v983);
                    v45 = 0;
                    goto LABEL_1587;
                  }
LABEL_1584:
                  v982 = 4096LL;
                  v984 += 4096LL;
                  v986 += 4096LL;
                  if ( v986 == v985 )
                    goto LABEL_1585;
                }
                if ( v983 > 1u )
                  goto LABEL_1584;
                __writecr8(v983);
                KeGetCurrentIrql();
              }
            }
          }
LABEL_1587:
          v988 = *((unsigned int *)v50 + 5);
          if ( !*(_DWORD *)(v21 + 1872) )
          {
            v989 = v980;
LABEL_1589:
            *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v988 ^ v989;
            goto LABEL_1590;
          }
          goto LABEL_1590;
        }
        v990 = (_QWORD *)*((_QWORD *)v50 + 1);
        v991 = *((unsigned int *)v50 + 4);
        v992 = v990;
        *(_DWORD *)(v21 + 1672) += v991;
        v993 = (const char *)v990;
        v994 = *(_DWORD *)(v21 + 1652);
        v995 = *(_QWORD *)(v21 + 1656);
        v41 = (unsigned __int64)v990 + v991;
        if ( v990 < (_QWORD *)((char *)v990 + v991) )
        {
          do
          {
            _mm_prefetch(v993, 0);
            v993 += 64;
          }
          while ( (unsigned __int64)v993 < v41 );
        }
        v996 = *(_QWORD *)(v21 + 1656);
        v997 = (unsigned int)v991 >> 7;
        if ( (unsigned int)v991 >> 7 )
        {
          do
          {
            v998 = 8LL;
            do
            {
              v999 = v992[1] ^ __ROL8__(*v992 ^ v996, v994);
              v992 += 2;
              v996 = __ROL8__(v999, v994);
              --v998;
            }
            while ( v998 );
            v41 = __ROL8__(v995 ^ ((char *)v992 - (char *)v990), 17) ^ v995 ^ ((char *)v992 - (char *)v990);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x408) = (v41
                                                                                    * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v994 = ((unsigned __int8)((v41 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v41 ^ v994)) & 0x3F;
            if ( !v994 )
              v994 = 1;
            --v997;
          }
          while ( v997 );
          v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        }
        v1000 = v991 & 0x7F;
        if ( v1000 >= 8 )
        {
          v1001 = (unsigned __int64)v1000 >> 3;
          do
          {
            v41 = v994;
            v996 = __ROL8__(*v992++ ^ v996, v994);
            v1000 -= 8;
            --v1001;
          }
          while ( v1001 );
        }
        for ( ; v1000; --v1000 )
        {
          v1002 = *(unsigned __int8 *)v992;
          v41 = v994;
          v992 = (_QWORD *)((char *)v992 + 1);
          v996 = __ROL8__(v1002 ^ v996, v994);
        }
        for ( i17 = v996; ; LODWORD(v996) = i17 ^ v996 )
        {
          i17 >>= 31;
          if ( !i17 )
            break;
        }
        v1004 = v996 & 0x7FFFFFFF;
        if ( v1004 == *((_DWORD *)v50 + 5) )
        {
          v45 = 0;
          goto LABEL_1628;
        }
        if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
          v45 = 1;
        v1005 = *((_QWORD *)v50 + 1);
        if ( !*((_DWORD *)v50 + 4) || (v1006 = 64LL, (*(_DWORD *)(v21 + 2012) & 0x40) == 0) )
        {
LABEL_1625:
          v45 = 0;
          if ( !*(_DWORD *)(v21 + 1872) )
          {
            v989 = *((unsigned int *)v50 + 5);
            v988 = v1004;
            goto LABEL_1589;
          }
LABEL_1590:
          v41 = *((_QWORD *)v50 + 1);
          v43 = *v2;
          if ( !*(_DWORD *)(v21 + 1872) )
          {
            *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v21 + 1896) = *(int *)v50;
            *(_QWORD *)(v21 + 1904) = v41;
            *(_DWORD *)(v21 + 1872) = 1;
          }
          goto LABEL_1629;
        }
        v983 = KeGetCurrentIrql();
        v1007 = v1005 & 0xFFFFFFFFFFFFF000uLL;
        v1008 = (v1005 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
        v1009 = (v1005 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1616:
        __writecr8(2uLL);
        while ( 1 )
        {
          v1010 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                    v1007,
                    0LL,
                    v1006,
                    v992);
          if ( v1010 == -1073741267 )
          {
            if ( v45 )
              goto LABEL_1624;
            if ( v983 <= 1u )
            {
              __writecr8(v983);
              KeGetCurrentIrql();
              goto LABEL_1616;
            }
          }
          else if ( v1010 < 0 )
          {
LABEL_1624:
            v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            __writecr8(v983);
            goto LABEL_1625;
          }
          v1006 = 4096LL;
          v1007 += 4096LL;
          v1009 += 4096LL;
          if ( v1009 == v1008 )
          {
            v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
LABEL_1585:
            __writecr8(v983);
            v45 = 0;
LABEL_1628:
            v43 = *v2;
LABEL_1629:
            v1011 = *((_DWORD *)v50 + 10);
            if ( (v1011 & 2) == 0 )
              goto LABEL_269;
            v1012 = *((_QWORD *)v50 + 1);
            if ( (v1011 & 4) != 0 )
            {
              v1013 = *((_QWORD *)v50 + 3);
              v41 = **(_QWORD **)(v1012 + 112);
              if ( v41 != v1013 )
              {
                v1014 = *(_QWORD *)(v21 + 1352);
                *(_QWORD *)v1014 = v41;
                *(_DWORD *)(v1014 + 16) = 256;
                if ( !*(_DWORD *)(v21 + 1872) )
                  *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v1013 ^ v41;
                v41 = *(_QWORD *)(v1012 + 112);
                if ( !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v41;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
              }
            }
            if ( (*((_DWORD *)v50 + 10) & 8) == 0 )
              goto LABEL_269;
            v1015 = *((_QWORD *)v50 + 4);
            v41 = **(_QWORD **)(v1012 + 120);
            if ( v41 == v1015 )
              goto LABEL_269;
            v1016 = *(_QWORD *)(v21 + 1352);
            *(_QWORD *)v1016 = v41;
            *(_DWORD *)(v1016 + 16) = 256;
            if ( !*(_DWORD *)(v21 + 1872) )
              *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v1015 ^ v41;
            v41 = *(_QWORD *)(v1012 + 120);
            if ( *(_DWORD *)(v21 + 1872) )
              goto LABEL_269;
            *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v21 + 1896) = *(int *)v50;
            *(_QWORD *)(v21 + 1904) = v41;
LABEL_1642:
            *(_DWORD *)(v21 + 1872) = 1;
            goto LABEL_269;
          }
        }
      }
      switch ( v65 )
      {
        case '$':
          v1353 = (_QWORD *)*((_QWORD *)v50 + 1);
          v1354 = *((unsigned int *)v50 + 4);
          v1355 = v1353;
          *(_DWORD *)(v21 + 1672) += v1354;
          v1356 = (const char *)v1353;
          v1357 = *(_DWORD *)(v21 + 1652);
          v1358 = *(_QWORD *)(v21 + 1656);
          if ( v1353 < (_QWORD *)((char *)v1353 + v1354) )
          {
            v46 = 64LL;
            do
            {
              _mm_prefetch(v1356, 0);
              v1356 += 64;
            }
            while ( v1356 < (const char *)v1353 + v1354 );
          }
          v1359 = *(_QWORD *)(v21 + 1656);
          v1360 = (unsigned int)v1354 >> 7;
          if ( (unsigned int)v1354 >> 7 )
          {
            do
            {
              v1361 = 8LL;
              do
              {
                v1362 = v1359 ^ *v1355;
                v1363 = v1355[1];
                v1355 += 2;
                v1359 = __ROL8__(__ROL8__(v1362, v1357) ^ v1363, v1357);
                --v1361;
              }
              while ( v1361 );
              v1364 = __ROL8__(v1358 ^ ((char *)v1355 - (char *)v1353), 17) ^ v1358 ^ ((char *)v1355 - (char *)v1353);
              v46 = (v1364 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x478) = v46;
              v1357 = ((unsigned __int8)(v46 ^ v1364) ^ (unsigned __int8)v1357) & 0x3F;
              if ( !v1357 )
                LOBYTE(v1357) = 1;
              --v1360;
            }
            while ( v1360 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          v1365 = v1354 & 0x7F;
          if ( (unsigned int)v1365 >= 8 )
          {
            v46 = (unsigned __int64)(unsigned int)v1365 >> 3;
            do
            {
              v1359 = __ROL8__(*v1355++ ^ v1359, v1357);
              v1365 = (unsigned int)(v1365 - 8);
              --v46;
            }
            while ( v46 );
          }
          if ( (_DWORD)v1365 )
          {
            do
            {
              v1366 = *(unsigned __int8 *)v1355;
              v1355 = (_QWORD *)((char *)v1355 + 1);
              v1359 = __ROL8__(v1366 ^ v1359, v1357);
              v1365 = (unsigned int)(v1365 - 1);
            }
            while ( (_DWORD)v1365 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          for ( i18 = v1359; ; LODWORD(v1359) = i18 ^ v1359 )
          {
            i18 >>= 31;
            if ( !i18 )
              break;
          }
          v1368 = v1359 & 0x7FFFFFFF;
          if ( v1368 == *((_DWORD *)v50 + 5) )
            goto LABEL_2249;
          if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
            v45 = 1;
          v46 = *((_QWORD *)v50 + 1);
          if ( !*((_DWORD *)v50 + 4) )
            goto LABEL_2245;
          v1365 = 64LL;
          if ( (*(_DWORD *)(v21 + 2012) & 0x40) == 0 )
            goto LABEL_2245;
          v1369 = KeGetCurrentIrql();
          v1370 = v46 & 0xFFFFFFFFFFFFF000uLL;
          v1371 = (v46 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
          v1372 = (v46 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_2236:
          __writecr8(2uLL);
          while ( 1 )
          {
            v1373 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                      v1370,
                      0LL,
                      v1365,
                      v1355);
            if ( v1373 == -1073741267 )
            {
              if ( v45 )
                goto LABEL_2244;
              if ( v1369 <= 1u )
              {
                __writecr8(v1369);
                KeGetCurrentIrql();
                goto LABEL_2236;
              }
            }
            else if ( v1373 < 0 )
            {
LABEL_2244:
              v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
              __writecr8(v1369);
LABEL_2245:
              if ( !*(_DWORD *)(v21 + 1872) )
                *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = *((unsigned int *)v50 + 5) ^ (unsigned __int64)v1368;
              v1374 = *((_QWORD *)v50 + 1);
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                *(_QWORD *)(v21 + 1904) = v1374;
                *(_DWORD *)(v21 + 1872) = 1;
              }
              goto LABEL_2249;
            }
            v1370 += 4096LL;
            v1372 += 4096LL;
            if ( v1372 == v1371 )
            {
              __writecr8(v1369);
              v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
LABEL_2249:
              v1375 = *(_QWORD *)(v21 + 1272);
              v1376 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v21 + 320))(v1375, v46, v1365, v1355);
              v1378 = **(unsigned int ***)(v21 + 1480);
              v1379 = v1378 + 4;
              v1380 = *((_BYTE *)v1378 + 12);
              v1381 = (unsigned __int64)&v1378[6 * *v1378 + 4];
              do
              {
                v1382 = 24LL;
                v1383 = (__int64 *)(v50 + 24);
                v1384 = v1379;
                do
                {
                  v1385 = *(_QWORD *)v1384;
                  v1384 += 2;
                  v1386 = *v1383++;
                  if ( v1385 != v1386 )
                    goto LABEL_2257;
                  v1382 = (unsigned int)(v1382 - 8);
                }
                while ( (unsigned int)v1382 >= 8 );
                if ( !(_DWORD)v1382 )
                  break;
                while ( 1 )
                {
                  v1377 = *(unsigned __int8 *)v1384;
                  v1384 = (unsigned int *)((char *)v1384 + 1);
                  v1387 = *(unsigned __int8 *)v1383;
                  v1383 = (__int64 *)((char *)v1383 + 1);
                  if ( v1377 != v1387 )
                    break;
                  v63 = (_DWORD)v1382 == 1;
                  v1382 = (unsigned int)(v1382 - 1);
                  if ( v63 )
                    goto LABEL_2258;
                }
LABEL_2257:
                v1379 += 6;
              }
              while ( (unsigned __int64)v1379 < v1381 );
LABEL_2258:
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(v21 + 384))(
                *(_QWORD *)(v21 + 1272),
                v1377,
                v1382,
                v1383);
              __writecr8(v1376);
              if ( !v1380 )
                goto LABEL_2265;
              if ( (*(_DWORD *)(v21 + 2012) & 0x10) != 0 && !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                *(_QWORD *)(v21 + 1904) = 1LL;
                *(_DWORD *)(v21 + 1872) = 1;
              }
              if ( *((_QWORD *)v50 + 3) == 1LL )
              {
                v45 = 0;
              }
              else
              {
LABEL_2265:
                v45 = 0;
                if ( v1379 == (unsigned int *)v1381 && !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v1379;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
              }
              v1388 = *(_QWORD *)(v21 + 1272);
              v1389 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              (*(void (__fastcall **)(__int64))(v21 + 320))(v1388);
              v1390 = 0LL;
              v1391 = **(unsigned int ***)(v21 + 1480);
              v1392 = v1391 + 4;
              v1393 = (unsigned __int64)&v1391[6 * *v1391 + 4];
              while ( 1 )
              {
                v1392 += 6;
                if ( (unsigned __int64)v1392 >= v1393 )
                  break;
                v1394 = *((_QWORD *)v1392 + 1);
                if ( v1394 < v1390 )
                  break;
                if ( (v1394 & 0xFFFFFFFFFFFFF000uLL) != v1394 )
                  break;
                v1395 = v1394 + v1392[4];
                if ( v1395 <= v1394 || v1395 == v1390 )
                  break;
                v1390 = v1394 + v1392[4];
              }
              (*(void (__fastcall **)(_QWORD))(v21 + 384))(*(_QWORD *)(v21 + 1272));
              __writecr8(v1389);
              if ( v1392 == (unsigned int *)v1393 )
                goto LABEL_268;
              v43 = *v2;
              if ( *(_DWORD *)(v21 + 1872) )
                goto LABEL_269;
              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v21 + 1896) = *(int *)v50;
              *(_QWORD *)(v21 + 1904) = v1392;
LABEL_377:
              *(_DWORD *)(v21 + 1872) = 1;
              goto LABEL_269;
            }
          }
        case '%':
          if ( (*(_DWORD *)(v21 + 2012) & 2) != 0
            || !(*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(v21 + 1040))(v41, v46)
            || *(_DWORD *)(v21 + 1872) )
          {
            goto LABEL_269;
          }
          *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v21 + 1896) = *(int *)v50;
          *(_QWORD *)(v21 + 1904) = 0LL;
LABEL_995:
          *(_DWORD *)(v21 + 1872) = 1;
          goto LABEL_269;
        case '&':
          (*(void (__fastcall **)(_DWORD *, _QWORD))(v21 + 400))(v2 + 356, *((unsigned int *)v50 + 11));
          __asm { xgetbv }
          v1351 = (*(__int64 (__fastcall **)(_DWORD *, _DWORD *))(v21 + 448))(v2 + 356, v2 + 360);
          v642 = v1351 | (v1352 << 32);
          v643 = v2 + 360;
LABEL_991:
          (*(void (__fastcall **)(_DWORD *))(v21 + 392))(v643);
          v644 = *((_QWORD *)v50 + 4);
          v645 = v642 & *((_QWORD *)v50 + 3);
          if ( v645 == v644 )
            goto LABEL_269;
          v41 = *((_QWORD *)v50 + 5);
          if ( *(_DWORD *)(v21 + 1872) )
            goto LABEL_269;
          *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v645 ^ v644;
          if ( *(_DWORD *)(v21 + 1872) )
            goto LABEL_269;
          *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v21 + 1896) = *(int *)v50;
          *(_QWORD *)(v21 + 1904) = v41;
          goto LABEL_995;
      }
      if ( v65 <= 42 )
      {
        *(_DWORD *)(v21 + 1672) += *((_DWORD *)v50 + 9);
        v1227 = *((unsigned int *)v50 + 9);
        v1228 = (_QWORD *)(v21 + *((unsigned int *)v50 + 8));
        v1229 = *(_DWORD *)(v21 + 1652);
        v1230 = v1228;
        v1231 = *(_QWORD *)(v21 + 1656);
        v1232 = (const char *)v1228;
        if ( v1228 < (_QWORD *)((char *)v1228 + v1227) )
        {
          do
          {
            _mm_prefetch(v1232, 0);
            v1232 += 64;
          }
          while ( v1232 < (const char *)v1228 + v1227 );
        }
        v1233 = *(_QWORD *)(v21 + 1656);
        v1234 = (unsigned int)v1227 >> 7;
        if ( (unsigned int)v1227 >> 7 )
        {
          do
          {
            v1235 = 8LL;
            do
            {
              v1236 = v1230[1] ^ __ROL8__(*v1230 ^ v1233, v1229);
              v1230 += 2;
              v1233 = __ROL8__(v1236, v1229);
              --v1235;
            }
            while ( v1235 );
            v1237 = __ROL8__(v1231 ^ ((char *)v1230 - (char *)v1228), 17) ^ v1231 ^ ((char *)v1230 - (char *)v1228);
            v1238 = (v1237 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x450) = v1238;
            v1229 = ((unsigned __int8)(v1238 ^ v1237) ^ (unsigned __int8)v1229) & 0x3F;
            if ( !v1229 )
              LOBYTE(v1229) = 1;
            --v1234;
          }
          while ( v1234 );
          v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        }
        v1239 = v1227 & 0x7F;
        if ( v1239 >= 8 )
        {
          v1240 = (unsigned __int64)v1239 >> 3;
          do
          {
            v1233 = __ROL8__(*v1230++ ^ v1233, v1229);
            v1239 -= 8;
            --v1240;
          }
          while ( v1240 );
        }
        for ( ; v1239; --v1239 )
        {
          v1241 = *(unsigned __int8 *)v1230;
          v1230 = (_QWORD *)((char *)v1230 + 1);
          v1233 = __ROL8__(v1241 ^ v1233, v1229);
        }
        v41 = *((_QWORD *)v50 + 3);
        if ( v1233 != v41 )
        {
          if ( !*(_DWORD *)(v21 + 1872) )
            *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v1233 ^ v41;
          v41 = v21 + *((unsigned int *)v50 + 8);
          if ( !*(_DWORD *)(v21 + 1872) )
          {
            *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v21 + 1896) = *(int *)v50;
            *(_QWORD *)(v21 + 1904) = v41;
            *(_DWORD *)(v21 + 1872) = 1;
          }
          v43 = *v2;
          goto LABEL_269;
        }
        goto LABEL_268;
      }
      if ( v65 == 43 )
        goto LABEL_1853;
      if ( v65 != 44 )
      {
LABEL_2048:
        v1242 = v65 - 2;
        if ( v1242 )
        {
          v1243 = v1242 - 1;
          if ( v1243 )
          {
            if ( v1243 != 20 )
            {
              if ( *(_DWORD *)(v21 + 1872) )
                goto LABEL_269;
              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v21 + 1896) = 257LL;
              *(_QWORD *)(v21 + 1904) = 0LL;
              goto LABEL_1642;
            }
            (*(void (__fastcall **)(_DWORD *, _QWORD))(v21 + 400))(v2 + 332, *((unsigned int *)v50 + 10));
            (*(void (__fastcall **)(_DWORD *, _DWORD *))(v21 + 448))(v2 + 332, v2 + 336);
            v1244 = *(_QWORD *)(v21 + 2128);
            if ( v1244 )
            {
              v1245 = *(_DWORD *)(v1244 + 800);
            }
            else
            {
              v1246 = __readmsr(0x832u);
              v1245 = v1246;
            }
            v1247 = *(_QWORD *)(v21 + 2128);
            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x280) = v1245;
            if ( v1247 )
            {
              v1248 = *(_DWORD *)(v1247 + 832);
            }
            else
            {
              v1249 = __readmsr(0x834u);
              v1248 = v1249;
            }
            v1250 = *(void (__fastcall **)(_DWORD *))(v21 + 392);
            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x278) = v1248;
            v1250(v2 + 336);
            v1251 = *((unsigned int *)v50 + 6);
            if ( (v1245 & *((_DWORD *)v50 + 7)) != (_DWORD)v1251
              || (v1245 & 0x10000) == 0 && (_BYTE)v1245 != 0xD1 && (unsigned __int8)(v1245 + 3) > 1u )
            {
              v1252 = v1251 | ((unsigned __int64)*((unsigned int *)v50 + 10) << 48) | 0x32000000000LL;
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v1245 ^ v1251;
                if ( !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v1252;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
              }
            }
            v41 = *((unsigned int *)v50 + 8);
            if ( (v1248 & *((_DWORD *)v50 + 9)) != (_DWORD)v41
              || (v1248 & 0x10000) == 0 && (_BYTE)v1248 != 0xD1 && (unsigned __int8)(v1248 + 3) > 1u )
            {
              v41 |= ((unsigned __int64)*((unsigned int *)v50 + 10) << 48) | 0x34000000000LL;
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v1248 ^ (unsigned __int64)*((unsigned int *)v50 + 8);
                if ( !*(_DWORD *)(v21 + 1872) )
                {
                  *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v21 + 1896) = *(int *)v50;
                  *(_QWORD *)(v21 + 1904) = v41;
                  *(_DWORD *)(v21 + 1872) = 1;
                }
              }
            }
            v128 = 0x8000;
            goto LABEL_295;
          }
          (*(void (__fastcall **)(_DWORD *, _QWORD))(v21 + 400))(v2 + 340, *((unsigned int *)v50 + 10));
          (*(void (__fastcall **)(_DWORD *, _DWORD *))(v21 + 448))(v2 + 340, v2 + 344);
          KiGetGdtIdt(v2 + 114, v2 + 382);
          v1253 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1CA);
          v1254 = *((unsigned int *)v50 + 4);
          if ( (*(_BYTE *)(v21 + 1755) & 2) != 0 )
          {
            v1255 = 38LL;
            v1256 = v2 + 416;
            v1257 = 304;
            do
            {
              *v1256 = 0LL;
              v1257 -= 8;
              ++v1256;
              --v1255;
            }
            while ( v1255 );
            if ( v1257 )
            {
              v1255 = 0xFFFFFFFFLL;
              do
              {
                *(_BYTE *)v1256 = 0;
                v1256 = (_QWORD *)((char *)v1256 + 1);
                --v1257;
              }
              while ( v1257 );
            }
            *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = *(_OWORD *)(v21 + 1704);
            *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x6A0) = *(_OWORD *)(v21 + 1720);
            v1258 = *(_OWORD *)(v21 + 1736);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x252) = ((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                   + 1664;
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v21 + 1752;
            *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = v21 + 1752;
            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x698) = (unsigned __int64)(v21 + 1752) >> 32;
            *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x7A0) = v1258;
            *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x250) = 304;
            *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x696) = (unsigned int)(v21 + 1752) >> 16;
            _disable();
            __sidt(v2 + 194);
            __lidt(v2 + 148);
            __writedr(7u, 0LL);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v21 + 1758;
            *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x690) = v21 + 1758;
            v1259 = (unsigned __int64)(v21 + 1758) >> 16;
            *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x696) = v1259;
            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x698) = (unsigned __int64)(v21 + 1758) >> 32;
            *(_QWORD *)(v21 + 1856) = KiErrata704Present(v1259, v1255, 1LL);
            *(_DWORD *)(v21 + 1864) = KeGetPcr()->Prcb.Number;
            __lidt(v2 + 194);
            _enable();
          }
          Ldtr = KiGetLdtr();
          Tr = KiGetTr();
          *(_DWORD *)(v21 + 1672) += v1254;
          v1262 = (unsigned __int64)v1253 + v1254;
          v1263 = *(_DWORD *)(v21 + 1652);
          v1264 = Tr;
          v1265 = *(_QWORD *)(v21 + 1656);
          v1266 = v1253;
          *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = Tr;
          v1267 = (const char *)v1253;
          if ( v1253 < (_QWORD *)((char *)v1253 + v1254) )
          {
            do
            {
              _mm_prefetch(v1267, 0);
              v1267 += 64;
            }
            while ( (unsigned __int64)v1267 < v1262 );
          }
          v1268 = v1265;
          v1269 = (unsigned int)v1254 >> 7;
          if ( (unsigned int)v1254 >> 7 )
          {
            do
            {
              v1270 = 8LL;
              do
              {
                v1271 = v1268 ^ *v1266;
                v1272 = v1266[1];
                v1266 += 2;
                v1268 = __ROL8__(__ROL8__(v1271, v1263) ^ v1272, v1263);
                --v1270;
              }
              while ( v1270 );
              v1273 = __ROL8__(v1265 ^ ((char *)v1266 - (char *)v1253), 17) ^ v1265 ^ ((char *)v1266 - (char *)v1253);
              v1262 = (v1273 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x458) = v1262;
              v1263 = ((unsigned __int8)(v1262 ^ v1273) ^ (unsigned __int8)v1263) & 0x3F;
              if ( !v1263 )
                LOBYTE(v1263) = 1;
              --v1269;
            }
            while ( v1269 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            v1264 = *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
          }
          v1274 = v1254 & 0x7F;
          if ( v1274 >= 8 )
          {
            v1262 = (unsigned __int64)v1274 >> 3;
            do
            {
              v1268 = __ROL8__(*v1266++ ^ v1268, v1263);
              v1274 -= 8;
              --v1262;
            }
            while ( v1262 );
          }
          if ( v1274 )
          {
            do
            {
              v1275 = *(unsigned __int8 *)v1266;
              v1266 = (_QWORD *)((char *)v1266 + 1);
              v1268 = __ROL8__(v1275 ^ v1268, v1263);
              --v1274;
            }
            while ( v1274 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          for ( i19 = v1268; ; LODWORD(v1268) = i19 ^ v1268 )
          {
            i19 >>= 31;
            if ( !i19 )
              break;
          }
          v1277 = v1268 & 0x7FFFFFFF;
          (*(void (__fastcall **)(_DWORD *, unsigned __int64, _QWORD *, __int64))(v21 + 392))(
            v2 + 344,
            v1262,
            v1266,
            1LL);
          if ( v1277 == *((_DWORD *)v50 + 5)
            && *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1C8) == *((_WORD *)v50 + 22)
            && !Ldtr
            && v1264 == 64 )
          {
            v45 = 0;
LABEL_2120:
            *(_DWORD *)(v21 + 1672) += 0x8000;
            goto LABEL_268;
          }
          if ( (*(_DWORD *)(v21 + 2008) & 0x40000000) != 0 )
          {
            v1278 = *(_QWORD **)(v21 + 2224);
            v1279 = 48;
            v1280 = 6LL;
            do
            {
              v1279 -= 8;
              *v1278 = *(_QWORD *)v50;
              v50 += 8;
              ++v1278;
              --v1280;
            }
            while ( v1280 );
            if ( v1279 )
            {
              do
              {
                v1281 = *v50++;
                *(_BYTE *)v1278 = v1281;
                v1278 = (_QWORD *)((char *)v1278 + 1);
                --v1279;
              }
              while ( v1279 );
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            }
            v50 = *(char **)(v21 + 2224);
          }
          *((_QWORD *)v50 + 3) = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1CA);
          *((_QWORD *)v50 + 4) = v1277;
          if ( Ldtr )
          {
            v1282 = Ldtr;
          }
          else
          {
            if ( v1264 == 64 )
            {
LABEL_2115:
              v45 = 0;
              if ( !*(_DWORD *)(v21 + 1872) )
                *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = *((unsigned int *)v50 + 5) ^ (unsigned __int64)v1277;
              v41 = *((_QWORD *)v50 + 1);
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                *(_QWORD *)(v21 + 1904) = v41;
                *(_DWORD *)(v21 + 1872) = 1;
              }
              goto LABEL_2120;
            }
            v1282 = v1264;
          }
          *((_QWORD *)v50 + 3) = v1282;
          goto LABEL_2115;
        }
        v1283 = *((unsigned int *)v50 + 10);
        v1284 = *(void (__fastcall **)(_DWORD *, __int64))(v21 + 400);
        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = 0;
        v1284(v2 + 348, v1283);
        (*(void (__fastcall **)(_DWORD *, _DWORD *))(v21 + 448))(v2 + 348, v2 + 352);
        KiGetGdtIdt(v2 + 386, v2 + 152);
        v1285 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x262);
        v1286 = 0;
        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1285;
        v1287 = v1285 + 4;
        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1287;
        *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 0;
        while ( 1 )
        {
          v1288 = 0LL;
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x108) = *(_QWORD *)(v21 + 1832);
          v1289 = 0LL;
          v1290 = *(_QWORD *)(v21 + 1840);
          v1291 = *(unsigned int *)(v21 + 1804);
          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = *(_DWORD *)(v21 + 1808);
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = 0LL;
          v1292 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          v1293 = *(_WORD *)v1287;
          *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = *(_WORD *)(v1287 - 4);
          *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC2) = *(_WORD *)(v1287 + 2);
          v1294 = *(_DWORD *)(v1287 + 4);
          v1295 = *(_QWORD *)(v21 + 1488);
          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC4) = v1294;
          v1296 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
          v1297 = (v1293 >> 13) & 3;
          v1298 = v1295 + 8LL * v1286;
          if ( v1296 != v1298 )
            goto LABEL_2152;
          if ( v1297 )
            goto LABEL_2127;
          v1289 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v21 + 1112))(v1286, v1298, 0LL);
          if ( !v1289 )
            break;
          v528 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) < 0x30u;
          v1299 = *(_QWORD *)(v1291 + v1289);
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v1299;
          if ( v528 )
            goto LABEL_2126;
LABEL_2153:
          __writecr8(v1292);
          if ( !v1289 )
          {
            v1325 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x108);
            if ( v1296 < v1325 || v1296 > v1290 )
            {
LABEL_2126:
              v1288 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
LABEL_2127:
              v1300 = *(_QWORD *)(v21 + 1352);
              *(_QWORD *)v1300 = v1296;
              *(_DWORD *)(v1300 + 16) = 128;
              if ( v1288 )
              {
                v1301 = *(_QWORD *)(v21 + 1352);
                *(_QWORD *)(v1301 + 8) = v1288;
                *(_DWORD *)(v1301 + 20) = 128;
              }
              *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4) = 1;
              goto LABEL_2130;
            }
            v1326 = *(_QWORD *)(v21 + 1848);
            v1327 = (unsigned int)(*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) - v1325);
            v1328 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(v21 + 512);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x460) = v1325;
            v1329 = v1328(v1326, v1325, v1327);
            if ( !v1329 || (*(_DWORD *)(v1329 + 36) & 0x2000000) != 0 )
            {
LABEL_2176:
              v1288 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
              goto LABEL_2127;
            }
          }
          v1330 = *(__int16 **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
          if ( *(v1330 - 1) != 16 || (*v1330 & 0x1F00) != 0xE00 || *v1330 >= 0 )
            goto LABEL_2176;
          v1331 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _DWORD *, _QWORD))(v21 + 592))(
                                    v1296,
                                    v2 + 66,
                                    0LL);
          if ( v1331
            && (v1332 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x108), v1332 + *v1331 == v1296)
            && v1332 == *(_QWORD *)(v21 + 1832) )
          {
            if ( !v1289 )
              goto LABEL_2130;
          }
          else if ( !v1289 )
          {
            goto LABEL_2176;
          }
          if ( v1297 )
            goto LABEL_2176;
          if ( v1289 != -1 )
          {
            v1333 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(v21 + 592))(
                                      v1299,
                                      v2 + 66,
                                      0LL);
            if ( !v1333 )
              goto LABEL_2176;
            v1334 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x108);
            if ( v1334 + *v1333 != v1299 )
              goto LABEL_2176;
            if ( v1334 != *(_QWORD *)(v21 + 1832) )
              goto LABEL_2176;
            v1335 = *(_QWORD *)(v21 + 1848);
            v1336 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v21 + 512);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x468) = v1334;
            v1337 = v1336(v1335, v1334, (unsigned int)(v1299 - v1334));
            if ( !v1337
              || (*(_DWORD *)(v1337 + 36) & 0x2000000) != 0
              || *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) == 254
              && *(_QWORD *)(*(unsigned int *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) + v1289) != *(_QWORD *)(v21 + 1816) )
            {
              goto LABEL_2176;
            }
          }
LABEL_2130:
          v1286 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) + 1;
          v1287 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) + 16LL;
          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v1286;
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1287;
          if ( v1286 > 0xFF )
          {
            if ( (*(_BYTE *)(v21 + 1755) & 1) != 0 )
            {
              _disable();
              v1302 = 3221225602LL;
              v1303 = __readmsr(0xC0000082);
              v1304 = (unsigned __int64)(v21 + 1754) >> 32;
              __writemsr(0xC0000082, v21 + 1754);
              if ( (*(_DWORD *)(v21 + 2012) & 0x20000) == 0 )
              {
                v1305 = KeGetCurrentPrcb();
                v1304 = v21 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v21 + 1144) = v21 - 0x5C5FC0A76E374B18LL;
                **(_QWORD **)(v21 + 1152) = v1305;
                **(_QWORD **)(v21 + 1160) = 3221225602LL;
                v1302 = *(_QWORD *)(v21 + 1168);
                *(_QWORD *)v1302 = 274LL;
              }
              ((void (__fastcall *)(__int64, unsigned __int64))(v21 + 1756))(v1302, v1304);
              if ( (*(_DWORD *)(v21 + 2012) & 0x20000) == 0 )
              {
                **(_QWORD **)(v21 + 1144) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v21 + 1152) = 0LL;
                **(_QWORD **)(v21 + 1160) = 0LL;
                **(_QWORD **)(v21 + 1168) = 0LL;
              }
              __writemsr(0xC0000082, v1303);
              _enable();
            }
            v1306 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
            *(_DWORD *)(v21 + 1672) += 848;
            v1307 = v1306;
            v1308 = *(_DWORD *)(v21 + 1672);
            v1309 = (const char *)v1306;
            v1310 = *(_DWORD *)(v21 + 1652);
            v1311 = *(_QWORD *)(v21 + 1656);
            if ( v1306 < v1306 + 106 )
            {
              do
              {
                _mm_prefetch(v1309, 0);
                v1309 += 64;
              }
              while ( v1309 < (const char *)v1306 + 848 );
            }
            v1312 = 6;
            v1313 = *(_QWORD *)(v21 + 1656);
            do
            {
              v1314 = 8LL;
              do
              {
                v1315 = v1313 ^ *v1307;
                v1316 = v1307 + 1;
                v1317 = *v1316;
                v1307 = v1316 + 1;
                v1313 = __ROL8__(__ROL8__(v1315, v1310) ^ v1317, v1310);
                --v1314;
              }
              while ( v1314 );
              v1318 = __ROL8__(v1311 ^ ((char *)v1307 - (char *)v1306), 17) ^ v1311 ^ ((char *)v1307 - (char *)v1306);
              v1319 = (v1318 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x470) = v1319;
              v1310 = ((unsigned __int8)(v1319 ^ v1318) ^ (unsigned __int8)v1310) & 0x3F;
              if ( !v1310 )
                LOBYTE(v1310) = 1;
              --v1312;
            }
            while ( v1312 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            v1320 = 80;
            v1321 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
            v1322 = 10LL;
            do
            {
              v1313 = __ROL8__(*v1307++ ^ v1313, v1310);
              v1320 -= 8;
              --v1322;
            }
            while ( v1322 );
            if ( v1320 )
            {
              do
              {
                v1323 = *(unsigned __int8 *)v1307;
                v1307 = (_QWORD *)((char *)v1307 + 1);
                v1313 = __ROL8__(v1323 ^ v1313, v1310);
                --v1320;
              }
              while ( v1320 );
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
            }
            for ( i20 = v1313; ; LODWORD(v1313) = i20 ^ v1313 )
            {
              i20 >>= 31;
              if ( !i20 )
                break;
            }
            v1338 = v1306 + 450;
            v1339 = v1313 & 0x7FFFFFFF;
            *(_DWORD *)(v21 + 1672) = v1308 + 16;
            v1340 = *(_DWORD *)(v21 + 1652);
            v1341 = (const char *)(v1306 + 450);
            v1342 = *(_QWORD *)(v21 + 1656);
            if ( v1306 + 450 < v1306 + 452 )
            {
              do
              {
                _mm_prefetch(v1341, 0);
                v1341 += 64;
              }
              while ( v1341 < (const char *)v1306 + 3616 );
            }
            v1343 = 16;
            v1344 = 2LL;
            do
            {
              v1342 = __ROL8__(*v1338++ ^ v1342, v1340);
              v1343 -= 8;
              --v1344;
            }
            while ( v1344 );
            if ( v1343 )
            {
              do
              {
                v1345 = *(unsigned __int8 *)v1338;
                v1338 = (_QWORD *)((char *)v1338 + 1);
                v1342 = __ROL8__(v1345 ^ v1342, v1340);
                --v1343;
              }
              while ( v1343 );
              v1321 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 4);
            }
            for ( i21 = v1342; ; LODWORD(v1342) = i21 ^ v1342 )
            {
              i21 >>= 31;
              if ( !i21 )
                break;
            }
            v1347 = v1342 & 0x7FFFFFFF;
            (*(void (__fastcall **)(_DWORD *, _QWORD *))(v21 + 392))(v2 + 352, v1338);
            v1348 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
            v1349 = (unsigned int)v1348[5];
            if ( v1339 == (_DWORD)v1349
              && v1347 == *((_QWORD *)v1348 + 3)
              && *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x260) == *((_WORD *)v1348 + 22)
              && !v1321 )
            {
              v45 = 0;
            }
            else
            {
              if ( v1321 )
              {
                v45 = 0;
              }
              else
              {
                v45 = 0;
                if ( v1347 == *((_QWORD *)v1348 + 3) )
                {
                  if ( !*(_DWORD *)(v21 + 1872) )
                  {
                    v1350 = v1349 ^ v1339;
                    goto LABEL_2197;
                  }
                }
                else if ( !*(_DWORD *)(v21 + 1872) )
                {
                  v1350 = (unsigned int)v1348[6] ^ (unsigned __int64)v1347;
LABEL_2197:
                  *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = v1350;
                }
              }
              v41 = *((_QWORD *)v1348 + 1);
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = (char *)v1348 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *v1348;
                *(_QWORD *)(v21 + 1904) = v41;
                *(_DWORD *)(v21 + 1872) = 1;
              }
            }
            *(_DWORD *)(v21 + 1672) += 0x10000;
            goto LABEL_268;
          }
        }
        v1289 = -1LL;
LABEL_2152:
        v1299 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
        goto LABEL_2153;
      }
      v1017 = (_QWORD *)v21;
      v1018 = *((_DWORD *)v50 + 8) >> 1;
      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v21;
      v41 = v1018 & 1;
      if ( (_DWORD)v41 && (!*(_QWORD *)(v21 + 2000) || (*(_DWORD *)(v21 + 2012) & 4) != 0) )
        goto LABEL_379;
      if ( (_DWORD)v41 )
      {
        v1019 = *(_DWORD *)(v21 + 2012);
        if ( *(_DWORD *)(v21 + 1668) )
        {
          v41 = v1019 ^ (v1019 >> 3);
          if ( (((unsigned __int8)v1019 ^ (unsigned __int8)(v1019 >> 3)) & 4) != 0 )
            goto LABEL_379;
        }
        else
        {
          v41 = v1019 ^ ((unsigned __int8)v1019 ^ (unsigned __int8)(8 * v1019)) & 0x20;
          *(_DWORD *)(v21 + 2012) = v41;
        }
        if ( !*(_QWORD *)(v21 + 2000) )
          goto LABEL_1657;
        v1020 = *(_DWORD *)(v21 + 2012);
        if ( *(_DWORD *)(v21 + 1668) )
        {
          v41 = v1020 ^ (v1020 >> 3);
          if ( (((unsigned __int8)v1020 ^ (unsigned __int8)(v1020 >> 3)) & 4) != 0 )
          {
LABEL_1657:
            *(_DWORD *)(v21 + 1668) = 0;
            goto LABEL_1745;
          }
        }
        else
        {
          *(_DWORD *)(v21 + 2012) = v1020 ^ ((unsigned __int8)v1020 ^ (unsigned __int8)(8 * v1020)) & 0x20;
        }
        if ( (*(_DWORD *)(v21 + 2012) & 4) != 0 )
        {
          v41 = *((unsigned int *)v50 + 4);
          v1021 = *((_QWORD *)v50 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v1022 = (v41 + (*((_DWORD *)v50 + 2) & 0xFFF) + 4095LL) >> 12;
          if ( !v1022 )
          {
            v1017 = (_QWORD *)v21;
            goto LABEL_1745;
          }
          do
          {
            --v1022;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(v21 + 672))(v1021, v46)
              && !*(_DWORD *)(v21 + 1872) )
            {
              *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v21 + 1896) = *(int *)v50;
              *(_QWORD *)(v21 + 1904) = v1021;
              *(_DWORD *)(v21 + 1872) = 1;
            }
            *(_DWORD *)(v21 + 1672) += 256;
            v1021 += 4096LL;
          }
          while ( v1022 );
          v1017 = (_QWORD *)v21;
        }
        else
        {
          v1023 = (_QWORD *)*((_QWORD *)v50 + 1);
          v1024 = *((unsigned int *)v50 + 4);
          v1025 = v1023;
          *(_DWORD *)(v21 + 1672) += v1024;
          v1026 = (const char *)v1023;
          v1027 = *(_DWORD *)(v21 + 1652);
          v1028 = *(_QWORD *)(v21 + 1656);
          v41 = (unsigned __int64)v1023 + v1024;
          if ( v1023 < (_QWORD *)((char *)v1023 + v1024) )
          {
            v46 = 64LL;
            do
            {
              _mm_prefetch(v1026, 0);
              v1026 += 64;
            }
            while ( (unsigned __int64)v1026 < v41 );
          }
          v1029 = *(_QWORD *)(v21 + 1656);
          v1030 = (unsigned int)v1024 >> 7;
          if ( (unsigned int)v1024 >> 7 )
          {
            do
            {
              v1031 = 8LL;
              do
              {
                v1032 = v1029 ^ *v1025;
                v1033 = v1025[1];
                v1025 += 2;
                v1029 = __ROL8__(__ROL8__(v1032, v1027) ^ v1033, v1027);
                --v1031;
              }
              while ( v1031 );
              v41 = __ROL8__(v1028 ^ ((char *)v1025 - (char *)v1023), 17) ^ v1028 ^ ((char *)v1025 - (char *)v1023);
              v46 = (v41 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x410) = v46;
              v1027 = ((unsigned __int8)(v46 ^ v41) ^ (unsigned __int8)v1027) & 0x3F;
              if ( !v1027 )
                v1027 = 1;
              --v1030;
            }
            while ( v1030 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          v1034 = v1024 & 0x7F;
          if ( v1034 >= 8 )
          {
            v46 = (unsigned __int64)v1034 >> 3;
            do
            {
              v41 = v1027;
              v1029 = __ROL8__(*v1025++ ^ v1029, v1027);
              v1034 -= 8;
              --v46;
            }
            while ( v46 );
          }
          if ( v1034 )
          {
            do
            {
              v1035 = *(unsigned __int8 *)v1025;
              v41 = v1027;
              v1025 = (_QWORD *)((char *)v1025 + 1);
              v1029 = __ROL8__(v1035 ^ v1029, v1027);
              --v1034;
            }
            while ( v1034 );
            v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
          }
          for ( i22 = v1029; ; LODWORD(v1029) = i22 ^ v1029 )
          {
            i22 >>= 31;
            if ( !i22 )
              break;
          }
          v1037 = v1029 & 0x7FFFFFFF;
          if ( v1037 != *((_DWORD *)v50 + 5) )
          {
            v46 = *((_QWORD *)v50 + 1);
            if ( !*((_DWORD *)v50 + 4) || (v1038 = 64LL, (*(_DWORD *)(v21 + 2012) & 0x40) == 0) )
            {
LABEL_1699:
              if ( !*(_DWORD *)(v21 + 1872) )
                *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = *((unsigned int *)v50 + 5) ^ (unsigned __int64)v1037;
              v41 = *((_QWORD *)v50 + 1);
              if ( !*(_DWORD *)(v21 + 1872) )
              {
                *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v21 + 1896) = *(int *)v50;
                *(_QWORD *)(v21 + 1904) = v41;
                *(_DWORD *)(v21 + 1872) = 1;
              }
              goto LABEL_1743;
            }
            v1039 = KeGetCurrentIrql();
            v1040 = v46 & 0xFFFFFFFFFFFFF000uLL;
            v1041 = (v46 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
            v1042 = (v46 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1691:
            __writecr8(2uLL);
            while ( 1 )
            {
              v1043 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                        v1040,
                        0LL,
                        v1038,
                        v1025);
              if ( v1043 == -1073741267 )
              {
                if ( v1039 <= 1u )
                {
                  __writecr8(v1039);
                  KeGetCurrentIrql();
                  goto LABEL_1691;
                }
              }
              else if ( v1043 < 0 )
              {
                __writecr8(v1039);
                v45 = 0;
                goto LABEL_1699;
              }
              v1038 = 4096LL;
              v1040 += 4096LL;
              v1042 += 4096LL;
              if ( v1042 == v1041 )
                goto LABEL_1697;
            }
          }
LABEL_1743:
          v1017 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
        }
        v43 = *v2;
LABEL_1745:
        if ( (*((_DWORD *)v50 + 8) & 1) == 0 )
          goto LABEL_269;
        v1064 = *((_QWORD *)v50 + 3);
        v1065 = (*(__int64 (__fastcall **)(__int64, __int64))(v21 + 488))(v1064, v46);
        v1066 = (unsigned int *)(v1065 + *(unsigned __int16 *)(v1065 + 20) + 24LL);
        v1067 = *(unsigned __int16 *)(v1065 + 6);
        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1066;
        v41 = 5 * v1067;
        v1068 = &v1066[10 * v1067];
        *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1068;
        if ( v1066 == v1068 )
          goto LABEL_268;
        if ( !*(_DWORD *)(v21 + 1668) )
          *(_DWORD *)(v21 + 1668) = 4096;
        if ( v1064 == *(_QWORD *)(v21 + 1440)
          || (*(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0, v1064 == *(_QWORD *)(v21 + 1448)) )
        {
          *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 1;
        }
        v1069 = *(_DWORD *)(v21 + 1668);
        v1070 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
LABEL_1753:
        v1071 = v1066[4];
        v41 = v1066[2];
        v1072 = v1066[3];
        if ( v1071 > (unsigned int)v41 )
          v41 = v1071;
        v1073 = (v41 + v1072 + 4095) & 0xFFFFF000;
        if ( v1069 >= v1073 )
          goto LABEL_1771;
        if ( (v1066[9] & 0x2000000) != 0 )
          goto LABEL_1770;
        v41 = *v1066;
        if ( *(_QWORD *)v1066 == 0x4742444B54494E49LL )
          goto LABEL_1770;
        if ( (_DWORD)v41 == 1162297680 )
        {
          v1074 = *((_WORD *)v1066 + 2);
          if ( v1074 == 30583 || v1074 == 29303 || v1074 == 30839 )
            goto LABEL_1770;
        }
        if ( (_DWORD)v41 == 1095914053 && *((_WORD *)v1066 + 2) == 16724 )
          goto LABEL_1770;
        if ( v1017 )
        {
          v1075 = (unsigned __int8 *)v1017[241];
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x228) = v1017[242];
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x230) = v1017[243];
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x238) = v1017[244];
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = v1075;
        }
        else
        {
          v1076 = *(_OWORD *)off_140356590;
          *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x220) = *(_OWORD *)VfExcludeSections;
          v1075 = *(unsigned __int8 **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x220);
          *(_OWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x230) = v1076;
        }
        v1077 = 7;
        v1078 = v1066;
        while ( 1 )
        {
          v1079 = *(unsigned __int8 *)v1078;
          v1078 = (unsigned int *)((char *)v1078 + 1);
          v1080 = *v1075++;
          if ( v1079 != v1080 )
            break;
          if ( !--v1077 )
            goto LABEL_1770;
        }
        v1082 = *(__int64 **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x228);
        v1083 = 8;
        v1084 = (unsigned __int64 *)v1066;
        do
        {
          v41 = *v1084++;
          v1085 = *v1082++;
          if ( v41 != v1085 )
            goto LABEL_1780;
          v1083 -= 8;
        }
        while ( v1083 >= 8 );
        if ( !v1083 )
          goto LABEL_1770;
        while ( 1 )
        {
          v1086 = *(unsigned __int8 *)v1084;
          v1084 = (unsigned __int64 *)((char *)v1084 + 1);
          v1087 = *(unsigned __int8 *)v1082;
          v1082 = (__int64 *)((char *)v1082 + 1);
          if ( v1086 != v1087 )
            break;
          if ( !--v1083 )
            goto LABEL_1770;
        }
LABEL_1780:
        v1088 = *(unsigned __int8 **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x230);
        v1089 = 4;
        v1090 = v1066;
        while ( 1 )
        {
          v1091 = *(unsigned __int8 *)v1090;
          v1090 = (unsigned int *)((char *)v1090 + 1);
          v1092 = *v1088++;
          if ( v1091 != v1092 )
            break;
          if ( !--v1089 )
            goto LABEL_1770;
        }
        v1093 = *(unsigned __int8 **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x238);
        v1094 = 6;
        v1095 = (unsigned __int8 *)v1066;
        while ( 1 )
        {
          v1096 = *v1095++;
          v1097 = *v1093++;
          if ( v1096 != v1097 )
            break;
          if ( !--v1094 )
            goto LABEL_1770;
        }
        v1098 = v1066[9];
        if ( v1098 < 0 || (v1098 & 0x20000000) == 0 )
        {
LABEL_1770:
          v1069 = v1073;
          goto LABEL_1771;
        }
        v1099 = 1;
        if ( v1070 && *v1066 != 778396769 )
          v1099 = *v1066 == 1162297680;
        v1100 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
        v1101 = *(int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        if ( v1069 < v1072 )
          v1069 = v1072;
        while ( 1 )
        {
          v1102 = v1064 + v1069;
          if ( (*(_BYTE *)(v1100 + 1755) & 4) != 0 )
          {
            v41 = 0xFFFFFFFFLL;
            __asm { xbegin  $+6 }
            __asm { xend }
            ++*(_DWORD *)(v1100 + 1692);
            *(_DWORD *)(v1100 + 1672) += 256;
          }
          else
          {
            if ( !v1099 )
            {
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x318) = 0LL;
              *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x322) = 0;
              *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x340) = 4096;
              *(_WORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x320) = 8
                                                                                    * ((((unsigned __int64)(v1102 & 0xFFF)
                                                                                       + 0x1FFF) >> 12)
                                                                                     + 6);
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x338) = v1102 & 0xFFFFFFFFFFFFF000uLL;
              *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x344) = v1102 & 0xFFF;
              v1104 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *))(v1100 + 1088))(
                        v1064 + v1069,
                        v1096,
                        0LL,
                        v1095);
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x428) = v1104;
              *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x348) = v1104 >> 12;
LABEL_1803:
              ++*(_DWORD *)(v1100 + 1696);
              *(_QWORD *)(v1100 + 2200) = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x338)
                                        + *(unsigned int *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x344);
              *(_QWORD *)(v1100 + 2192) = v1101;
              v1105 = KeGetCurrentIrql();
              __writecr8(2uLL);
              RtlInitMinimalBarrier(v1100 + 2160, **(unsigned int **)(v1100 + 1456), 0LL);
              v1100 = (*(__int64 (__fastcall **)(__int64, __int64))(v1100 + 1072))(
                        v1100 + *(unsigned int *)(v1100 + 1620),
                        v1100);
              __writecr8(v1105);
              if ( v1099 )
                (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(v1100 + 1096))(v2 + 198, v1096, 0LL);
              *(_DWORD *)(v1100 + 1672) += 81920;
              goto LABEL_1806;
            }
            v1103 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD, unsigned __int8 *))(v1100 + 1080))(
                      v2 + 198,
                      v1064 + v1069,
                      0LL,
                      v1095);
            if ( v1103 >= 0 )
              goto LABEL_1803;
            if ( v1103 == -1073741819 && !*(_DWORD *)(v1100 + 1872) )
            {
              *(_QWORD *)(v1100 + 1880) = v1100 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v1100 + 1888) = (char *)v1101 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v1100 + 1896) = *v1101;
              *(_QWORD *)(v1100 + 1904) = v1102;
              *(_DWORD *)(v1100 + 1872) = 1;
            }
          }
LABEL_1806:
          v1069 += 4096;
          if ( v1069 >= v1073 || *(_DWORD *)(v1100 + 1672) >= *(_DWORD *)(v1100 + 1676) )
          {
            v552 = *(_DWORD *)(v1100 + 1672) < *(_DWORD *)(v1100 + 1676);
            v1066 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v1100;
            v1070 = *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 8);
            if ( !v552 )
            {
              v1081 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
LABEL_1810:
              v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
              if ( v1066 == v1081 && v1069 >= v1073 )
              {
                v45 = 0;
                *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) + 1668LL) = 0;
                goto LABEL_268;
              }
              *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) + 1668LL) = v1069;
LABEL_325:
              v43 = *v2;
              goto LABEL_326;
            }
LABEL_1771:
            v1081 = *(unsigned int **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
            v1066 += 10;
            v1017 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v1066;
            if ( v1066 == v1081 )
              goto LABEL_1810;
            goto LABEL_1753;
          }
        }
      }
      v1044 = (_QWORD *)*((_QWORD *)v50 + 1);
      v1045 = *((unsigned int *)v50 + 4);
      v1046 = v1044;
      *(_DWORD *)(v21 + 1672) += v1045;
      v1047 = (const char *)v1044;
      v1048 = *(_DWORD *)(v21 + 1652);
      v1049 = *(_QWORD *)(v21 + 1656);
      v41 = (unsigned __int64)v1044 + v1045;
      if ( v1044 < (_QWORD *)((char *)v1044 + v1045) )
      {
        do
        {
          _mm_prefetch(v1047, 0);
          v1047 += 64;
        }
        while ( (unsigned __int64)v1047 < v41 );
      }
      v1050 = *(_QWORD *)(v21 + 1656);
      v1051 = (unsigned int)v1045 >> 7;
      if ( (unsigned int)v1045 >> 7 )
      {
        do
        {
          v1052 = 8LL;
          do
          {
            v1053 = v1046[1] ^ __ROL8__(*v1046 ^ v1050, v1048);
            v1046 += 2;
            v1050 = __ROL8__(v1053, v1048);
            --v1052;
          }
          while ( v1052 );
          v41 = __ROL8__(v1049 ^ ((char *)v1046 - (char *)v1044), 17) ^ v1049 ^ ((char *)v1046 - (char *)v1044);
          *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x418) = (v41
                                                                                  * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v46 = 0xFFFFFFFFLL;
          v1048 = ((unsigned __int8)((v41 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v41 ^ v1048)) & 0x3F;
          if ( !v1048 )
            v1048 = 1;
          --v1051;
        }
        while ( v1051 );
        v21 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
      }
      else
      {
        v46 = 0xFFFFFFFFLL;
      }
      v1054 = v1045 & 0x7F;
      if ( v1054 >= 8 )
      {
        v1055 = (unsigned __int64)v1054 >> 3;
        do
        {
          v41 = v1048;
          v1050 = __ROL8__(*v1046++ ^ v1050, v1048);
          v1054 -= 8;
          --v1055;
        }
        while ( v1055 );
      }
      for ( ; v1054; --v1054 )
      {
        v1056 = *(unsigned __int8 *)v1046;
        v41 = v1048;
        v1046 = (_QWORD *)((char *)v1046 + 1);
        v1050 = __ROL8__(v1056 ^ v1050, v1048);
      }
      for ( i23 = v1050; ; LODWORD(v1050) = i23 ^ v1050 )
      {
        i23 >>= 31;
        if ( !i23 )
          break;
      }
      v1058 = v1050 & 0x7FFFFFFF;
      if ( v1058 == *((_DWORD *)v50 + 5) )
      {
        v45 = 0;
        goto LABEL_1743;
      }
      if ( !*(_DWORD *)v50 && *((_DWORD *)v50 + 6) )
        v45 = 1;
      v46 = *((_QWORD *)v50 + 1);
      if ( !*((_DWORD *)v50 + 4) || (v1059 = 64LL, (*(_DWORD *)(v21 + 2012) & 0x40) == 0) )
      {
LABEL_1737:
        v45 = 0;
        if ( !*(_DWORD *)(v21 + 1872) )
          *(_QWORD *)(*(_QWORD *)(v21 + 1352) + 24LL) = *((unsigned int *)v50 + 5) ^ (unsigned __int64)v1058;
        v41 = *((_QWORD *)v50 + 1);
        v1017 = *(_QWORD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
        v43 = *v2;
        if ( !*(_DWORD *)(v21 + 1872) )
        {
          *(_QWORD *)(v21 + 1880) = v21 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v21 + 1888) = v50 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v21 + 1896) = *(int *)v50;
          *(_QWORD *)(v21 + 1904) = v41;
          *(_DWORD *)(v21 + 1872) = 1;
        }
        goto LABEL_1745;
      }
      v1039 = KeGetCurrentIrql();
      v1060 = v46 & 0xFFFFFFFFFFFFF000uLL;
      v1061 = (v46 + *((unsigned int *)v50 + 4) - 1LL) | 0xFFF;
      v1062 = (v46 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1728:
      __writecr8(2uLL);
      while ( 1 )
      {
        v1063 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v21 + 1104))(
                  v1060,
                  0LL,
                  v1059,
                  v1046);
        if ( v1063 == -1073741267 )
        {
          if ( v45 )
            goto LABEL_1736;
          if ( v1039 <= 1u )
          {
            __writecr8(v1039);
            KeGetCurrentIrql();
            goto LABEL_1728;
          }
        }
        else if ( v1063 < 0 )
        {
LABEL_1736:
          v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
          __writecr8(v1039);
          goto LABEL_1737;
        }
        v1059 = 4096LL;
        v1060 += 4096LL;
        v1062 += 4096LL;
        if ( v1062 == v1061 )
        {
          v50 = *(char **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
LABEL_1697:
          __writecr8(v1039);
          v45 = 0;
          goto LABEL_1743;
        }
      }
    }
    v55 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x210);
    v56 = 0;
    v41 = *(int *)v50;
    v46 = *(unsigned int *)(v55 + 48);
    v57 = *(_QWORD *)(v55 + 56);
    if ( (int)v41 > 21 )
    {
      if ( (_DWORD)v41 != 24 )
      {
        if ( (int)v41 <= 27 )
          goto LABEL_269;
        if ( (int)v41 > 29 )
        {
          if ( (unsigned int)v41 <= 0x23 )
          {
            v64 = 0x940000000LL;
            if ( _bittest64(&v64, v41) )
              goto LABEL_130;
          }
          v58 = v41 - 43;
          goto LABEL_129;
        }
      }
LABEL_159:
      if ( (_DWORD)v46 != 5 )
        goto LABEL_269;
      goto LABEL_160;
    }
    if ( (_DWORD)v41 != 21 )
    {
      if ( (v41 & 0x80000000) != 0LL )
        goto LABEL_269;
      if ( (int)v41 <= 1 )
        goto LABEL_130;
      v28 = 3;
      if ( (int)v41 > 3 )
      {
        if ( (_DWORD)v41 != 7 )
        {
          if ( (_DWORD)v41 != 8 )
          {
            if ( (_DWORD)v41 == 9 )
              goto LABEL_130;
            v58 = v41 - 11;
LABEL_129:
            if ( v58 > v28 )
              goto LABEL_269;
LABEL_130:
            if ( (_DWORD)v46 )
              goto LABEL_269;
LABEL_131:
            v41 = *((unsigned int *)v50 + 4);
            if ( !(_DWORD)v41 )
              goto LABEL_269;
            v46 = (__int64)(v2 + 166);
            v59 = *((_QWORD *)v50 + 1);
            *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x298) = *(_QWORD *)v57;
            v60 = *(_DWORD *)(v57 + 8);
            v61 = 0;
            *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x158) = v60;
            v62 = v59 + v41;
            v41 = (unsigned __int64)(v2 + 86);
            while ( v59 >= *(_QWORD *)v46 + (unsigned __int64)*(unsigned int *)v41 || v62 <= *(_QWORD *)v46 )
            {
              v46 += 8LL;
              ++v61;
              v41 += 4LL;
              if ( v61 )
                goto LABEL_269;
            }
LABEL_160:
            ++*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) + 8LL);
            goto LABEL_161;
          }
          goto LABEL_159;
        }
        v56 = *((_DWORD *)v50 + 7);
        v63 = (_DWORD)v46 == 1;
        goto LABEL_141;
      }
      if ( !(_DWORD)v46 )
        goto LABEL_131;
    }
    if ( (_DWORD)v41 != 21 )
    {
      if ( (unsigned int)(v41 - 2) <= 1 )
      {
        v56 = *((_DWORD *)v50 + 10);
        if ( (_DWORD)v41 == 3 && (_DWORD)v46 != 2 )
          goto LABEL_269;
        if ( (_DWORD)v41 == 2 && (_DWORD)v46 != 3 )
          goto LABEL_269;
      }
      goto LABEL_142;
    }
    v56 = *((_DWORD *)v50 + 11);
    v63 = (_DWORD)v46 == 4;
LABEL_141:
    if ( !v63 )
      goto LABEL_269;
LABEL_142:
    if ( !(unsigned int)KeCheckProcessorGroupAffinity(v57, v56) )
      goto LABEL_269;
    ++*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x218) + 8LL);
    goto LABEL_161;
  }
  LODWORD(v41) = 0;
  ++*(_DWORD *)(v21 + 1680);
  if ( *(_DWORD *)(v21 + 1960) != 11 )
    goto LABEL_2285;
  v1396 = *(_DWORD *)(v21 + 2008);
  if ( (v1396 & 1) != 0 )
    goto LABEL_2285;
  v3 = a2;
  if ( *(_DWORD *)(v21 + 1984) == -1 )
    *(_DWORD *)(v21 + 1984) = 0;
  else
    *(_DWORD *)(v21 + 2008) = v1396 | 1;
LABEL_2286:
  v14 = *(PSLIST_ENTRY *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xB0);
  v15 = *(PSLIST_ENTRY *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xE0);
LABEL_2287:
  *(_DWORD *)(v21 + 1664) = v41;
  if ( *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    (*(void (__fastcall **)(_DWORD *))(v21 + 392))(v2 + 364);
    (*(void (__fastcall **)(_DWORD *))(v21 + 1064))(v2 + 390);
    (*(void (__fastcall **)(_KPROCESS *))(v21 + 920))(Process);
    (*(void (__fastcall **)(_KPROCESS *))(v21 + 936))(Process);
  }
  if ( *(_DWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x110)
    && ((*(_DWORD *)(v21 + 2008) & 0x8000) != 0 || !*(_DWORD *)(v21 + 1872)) )
  {
    v1398 = *(_QWORD *)(v21 + 2000);
    *(_QWORD *)(v21 + 2000) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *))(v21 + 648))(v1398, v2 + 390);
    v1399 = *(_DWORD *)(v21 + 2008);
    if ( (v1399 & 1) != 0 )
    {
      *(_DWORD *)(v21 + 2008) = v1399 & 0xFFFFFFFE;
      v1398 = (*(__int64 (__fastcall **)(__int64))(v21 + 624))(v1398);
      if ( v1398 )
        *(_DWORD *)(v21 + 1984) = (*(__int64 (__fastcall **)(__int64))(v21 + 656))(v1398);
      else
        *(_DWORD *)(v21 + 1984) = -1;
    }
    if ( v1398 )
      (*(void (__fastcall **)(__int64))(v21 + 632))(v1398);
  }
  if ( LODWORD(v15[117].Next) )
  {
    v1400 = *((_QWORD *)&v15[118].Next + 1);
    Next = v15[119].Next;
    v1402 = v15[118].Next;
    v1403 = *((_QWORD *)&v15[117].Next + 1);
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0) = v1400;
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = Next;
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) = v1402;
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = v1403;
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) = v15;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1404 = KeGetCurrentPrcb();
    v1405 = 0;
    v1406 = KeGetCurrentThread();
    *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v1406;
    DpcStack = (unsigned __int64)v1404->DpcStack;
    if ( !v1404->DpcRoutineActive
      || (unsigned __int64)(v2 + 54) > DpcStack
      || (unsigned __int64)(v2 + 54) < DpcStack - 24576 )
    {
      DpcStack = (unsigned __int64)v1406->InitialStack;
    }
    v1408 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
    if ( (*(_DWORD *)(v1408 + 2008) & 0x8000000) == 0 )
    {
      v1409 = __readcr0();
      *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = v1409;
      __writecr0(v1409 & 0xFFFFFFFFFFFEFFFFuLL);
      v1410 = v1408 + 2264;
      v1411 = v1408 + 2264 + 16LL * *(unsigned int *)(v1408 + 2256);
      v1412 = (_QWORD *)v1411;
      if ( *(_DWORD *)(v1408 + 2260) )
      {
        do
        {
          *(_QWORD *)*v1412 = v1412[1];
          v1413 = __readcr4();
          if ( (v1413 & 0x20080) != 0 )
          {
            __writecr4(v1413 ^ 0x80);
            __writecr4(v1413);
          }
          else
          {
            v1414 = __readcr3();
            __writecr3(v1414);
          }
          v1412 += 2;
          ++v1405;
        }
        while ( v1405 < *(_DWORD *)(v1408 + 2260) );
        v1400 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
        Next = *(_SLIST_ENTRY **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
      }
      if ( v1410 < v1411 )
      {
        do
        {
          v1415 = *(unsigned int *)(v1410 + 8);
          v1416 = v1412;
          v1417 = *(char **)v1410;
          v1418 = v1415;
          if ( (unsigned int)v1415 >= 8 )
          {
            v1419 = (unsigned __int64)(unsigned int)v1415 >> 3;
            do
            {
              v1418 -= 8;
              *(_QWORD *)v1417 = *v1416++;
              v1417 += 8;
              --v1419;
            }
            while ( v1419 );
          }
          if ( v1418 )
          {
            v1420 = v1417 - (char *)v1416;
            do
            {
              *((_BYTE *)v1416 + v1420) = *(_BYTE *)v1416;
              v1416 = (_QWORD *)((char *)v1416 + 1);
              --v1418;
            }
            while ( v1418 );
          }
          v1412 = (_QWORD *)((char *)v1412 + v1415);
          v1410 += 16LL;
        }
        while ( v1410 < v1411 );
        v1406 = *(struct _KTHREAD **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0);
        v1409 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x70);
        v1400 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xC0);
        Next = *(_SLIST_ENTRY **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x10);
        v1402 = *(_SLIST_ENTRY **)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x140);
        v1403 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x30);
      }
      **(_BYTE **)(v1408 + 520) = -61;
      __writecr0(v1409);
      v1408 = *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8);
    }
    if ( *(_DWORD *)(v1408 + 1920) && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1421 = *(_DWORD *)(v1408 + 1920);
    if ( v1421 )
    {
      v1422 = v1421 - 1;
      if ( v1422 )
      {
        v1423 = v1422 - 1;
        if ( v1423 )
        {
          v1424 = v1423 - 1;
          if ( v1424 )
          {
            v1425 = v1424 - 1;
            if ( v1425 )
            {
              if ( v1425 == 1 )
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(v1408 + 2008) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v1408 + 1392) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(v1408 + 2008) >> 10) & 0x1F);
            }
            goto LABEL_2356;
          }
          v1426 = *(volatile signed __int32 **)(v1408 + 1304);
        }
        else
        {
          v1426 = *(volatile signed __int32 **)(v1408 + 1296);
        }
      }
      else
      {
        v1426 = *(volatile signed __int32 **)(v1408 + 1280);
      }
      _interlockedbittestandset64(v1426, 0LL);
    }
LABEL_2356:
    v1406[1].QuantumTarget = 0LL;
    v1406[1].ApcState.ApcListHead[0].Blink = 0LL;
    SdbpCheckDll(
      265,
      v1403,
      (_DWORD)v1402,
      (_DWORD)Next,
      v1400,
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0xD8) + 328LL),
      DpcStack);
    __debugbreak();
  }
  if ( HIDWORD(v15[104].Next) || LODWORD(v15[104].Next) )
  {
    v1427 = -1073741802;
    *(_DWORD *)v3 = v15[104].Next;
    *(_DWORD *)(v3 + 4) = HIDWORD(v15[104].Next);
  }
  else
  {
    v1427 = *(_QWORD *)(v3 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( *(_QWORD *)(((unsigned __int64)v1443 & 0xFFFFFFFFFFFFFF80uLL) + 0x140) == 2336LL )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, v14);
  else
    ExFreePool(v14);
  return v1427;
}
