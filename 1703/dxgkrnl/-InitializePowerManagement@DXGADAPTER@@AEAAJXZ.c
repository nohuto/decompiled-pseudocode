/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020434 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0020624 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C002272C (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00D2FBC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C016DBB0 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0171B48 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0173AD8 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x1C01C2428 (DpiEnablePowerManagement.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // r14d
  unsigned int v14; // esi
  unsigned int v15; // ebx
  DXGADAPTER *v16; // rcx
  __int64 v17; // r8
  int AdapterInfo; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  SIZE_T v21; // rax
  PVOID v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  __int64 v26; // r13
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  int v30; // r9d
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // edx
  __int64 v34; // r12
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rcx
  __int16 v41; // dx
  __int64 v42; // rdx
  __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // eax
  _QWORD *v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // eax
  void *v52; // rcx
  void *v53; // r8
  __int64 v54; // rax
  unsigned int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rcx
  SIZE_T v67; // rax
  PVOID v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // edx
  __int64 j; // r8
  __int64 v74; // r10
  __int64 v75; // r9
  unsigned int v76; // edx
  __int64 v77; // rbx
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r14
  unsigned int v84; // eax
  __int64 v85; // rax
  unsigned int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rax
  void *v89; // rcx
  unsigned int v90; // r8d
  unsigned int v91; // r12d
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r14
  unsigned int v96; // r11d
  unsigned int v97; // ebx
  __int64 v98; // r10
  unsigned int v99; // r9d
  ADAPTER_RENDER *v100; // rcx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  ADAPTER_DISPLAY *v105; // rcx
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // r12
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned __int64 TimeIncrement; // rbx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  unsigned __int64 v127; // rtt
  __int64 v128; // rax
  unsigned __int64 v129; // rtt
  __int64 v130; // rax
  __int64 v131; // rcx
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  unsigned int v148; // r13d
  __int64 v149; // rbx
  __int64 v150; // r14
  DXGADAPTER *v151; // rdx
  int v152; // ecx
  int v153; // ecx
  int v154; // ecx
  int v155; // ecx
  int v156; // ecx
  int v157; // ecx
  int v158; // edx
  DXGADAPTER *v159; // rcx
  __int64 v160; // r8
  DXGADAPTER **v161; // rcx
  __int64 v162; // rax
  DXGADAPTER **v163; // rcx
  unsigned __int64 v164; // rcx
  unsigned int v165; // eax
  unsigned __int64 *v166; // rdx
  __int64 v167; // r8
  unsigned __int64 *v168; // rdx
  unsigned int v169; // eax
  int v170; // edx
  __int64 v171; // r8
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // r8
  struct _SLIST_ENTRY *v175; // rbx
  __int64 v176; // r14
  NTSTATUS SystemThread; // eax
  __int64 v178; // rdx
  __int64 v179; // rcx
  int v180; // eax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rax
  char v184; // [rsp+48h] [rbp-C0h]
  unsigned int v185; // [rsp+4Ch] [rbp-BCh] BYREF
  int v186; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v187; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v188; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v189; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v190; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v191; // [rsp+64h] [rbp-A4h] BYREF
  int v192; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v193; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v194; // [rsp+70h] [rbp-98h] BYREF
  __int64 v195; // [rsp+78h] [rbp-90h] BYREF
  int v196; // [rsp+80h] [rbp-88h] BYREF
  int v197; // [rsp+84h] [rbp-84h] BYREF
  int v198; // [rsp+88h] [rbp-80h] BYREF
  int v199; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v200; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v201; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v202; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v203; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v204; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v205; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v206; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v207; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v208; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v209; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v210; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v211; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v212; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v213; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v214; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v215; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v216; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v217; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v218; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v219; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v220; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v221; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v222; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v223; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v224; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v225; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v226; // [rsp+F8h] [rbp-10h] BYREF
  int v227; // [rsp+FCh] [rbp-Ch] BYREF
  int v228; // [rsp+100h] [rbp-8h] BYREF
  int v229; // [rsp+104h] [rbp-4h] BYREF
  int v230; // [rsp+108h] [rbp+0h] BYREF
  int v231; // [rsp+10Ch] [rbp+4h] BYREF
  int v232; // [rsp+110h] [rbp+8h] BYREF
  int v233; // [rsp+114h] [rbp+Ch] BYREF
  int v234; // [rsp+118h] [rbp+10h] BYREF
  int v235; // [rsp+11Ch] [rbp+14h] BYREF
  int v236; // [rsp+120h] [rbp+18h] BYREF
  int v237; // [rsp+124h] [rbp+1Ch] BYREF
  int v238; // [rsp+128h] [rbp+20h] BYREF
  int v239; // [rsp+12Ch] [rbp+24h] BYREF
  int v240; // [rsp+130h] [rbp+28h] BYREF
  int v241; // [rsp+134h] [rbp+2Ch] BYREF
  int v242; // [rsp+138h] [rbp+30h] BYREF
  int v243; // [rsp+13Ch] [rbp+34h] BYREF
  int v244; // [rsp+140h] [rbp+38h] BYREF
  int v245; // [rsp+144h] [rbp+3Ch] BYREF
  int v246; // [rsp+148h] [rbp+40h] BYREF
  int v247; // [rsp+14Ch] [rbp+44h] BYREF
  int v248; // [rsp+150h] [rbp+48h] BYREF
  int v249; // [rsp+154h] [rbp+4Ch] BYREF
  int v250; // [rsp+158h] [rbp+50h] BYREF
  int v251; // [rsp+15Ch] [rbp+54h] BYREF
  int v252; // [rsp+160h] [rbp+58h] BYREF
  int v253; // [rsp+164h] [rbp+5Ch] BYREF
  int v254; // [rsp+168h] [rbp+60h] BYREF
  int v255; // [rsp+16Ch] [rbp+64h] BYREF
  int v256; // [rsp+170h] [rbp+68h] BYREF
  int v257; // [rsp+174h] [rbp+6Ch] BYREF
  int v258; // [rsp+178h] [rbp+70h] BYREF
  int v259; // [rsp+17Ch] [rbp+74h] BYREF
  int v260; // [rsp+180h] [rbp+78h] BYREF
  int v261; // [rsp+184h] [rbp+7Ch] BYREF
  int v262; // [rsp+188h] [rbp+80h] BYREF
  int v263; // [rsp+18Ch] [rbp+84h] BYREF
  int v264; // [rsp+190h] [rbp+88h] BYREF
  int v265; // [rsp+194h] [rbp+8Ch] BYREF
  unsigned int v266; // [rsp+198h] [rbp+90h] BYREF
  void *i; // [rsp+1A0h] [rbp+98h]
  _BYTE v268[88]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v269; // [rsp+200h] [rbp+F8h]
  __int64 v270; // [rsp+208h] [rbp+100h] BYREF
  int v271; // [rsp+210h] [rbp+108h]
  const wchar_t *v272; // [rsp+218h] [rbp+110h]
  int *v273; // [rsp+220h] [rbp+118h]
  int v274; // [rsp+228h] [rbp+120h]
  int *v275; // [rsp+230h] [rbp+128h]
  int v276; // [rsp+238h] [rbp+130h]
  __int64 v277; // [rsp+240h] [rbp+138h]
  int v278; // [rsp+248h] [rbp+140h]
  _BYTE v279[40]; // [rsp+250h] [rbp+148h] BYREF
  __int64 v280; // [rsp+278h] [rbp+170h] BYREF
  int v281; // [rsp+280h] [rbp+178h]
  const wchar_t *v282; // [rsp+288h] [rbp+180h]
  unsigned int *v283; // [rsp+290h] [rbp+188h]
  int v284; // [rsp+298h] [rbp+190h]
  int *v285; // [rsp+2A0h] [rbp+198h]
  int v286; // [rsp+2A8h] [rbp+1A0h]
  __int64 v287; // [rsp+2B0h] [rbp+1A8h]
  int v288; // [rsp+2B8h] [rbp+1B0h]
  const wchar_t *v289; // [rsp+2C0h] [rbp+1B8h]
  int *v290; // [rsp+2C8h] [rbp+1C0h]
  int v291; // [rsp+2D0h] [rbp+1C8h]
  int *v292; // [rsp+2D8h] [rbp+1D0h]
  int v293; // [rsp+2E0h] [rbp+1D8h]
  __int64 v294; // [rsp+2E8h] [rbp+1E0h]
  int v295; // [rsp+2F0h] [rbp+1E8h]
  const wchar_t *v296; // [rsp+2F8h] [rbp+1F0h]
  __int64 *v297; // [rsp+300h] [rbp+1F8h]
  int v298; // [rsp+308h] [rbp+200h]
  int *v299; // [rsp+310h] [rbp+208h]
  int v300; // [rsp+318h] [rbp+210h]
  __int64 v301; // [rsp+320h] [rbp+218h]
  int v302; // [rsp+328h] [rbp+220h]
  const wchar_t *v303; // [rsp+330h] [rbp+228h]
  char *v304; // [rsp+338h] [rbp+230h]
  int v305; // [rsp+340h] [rbp+238h]
  int *v306; // [rsp+348h] [rbp+240h]
  int v307; // [rsp+350h] [rbp+248h]
  __int64 v308; // [rsp+358h] [rbp+250h]
  int v309; // [rsp+360h] [rbp+258h]
  const wchar_t *v310; // [rsp+368h] [rbp+260h]
  unsigned int *v311; // [rsp+370h] [rbp+268h]
  int v312; // [rsp+378h] [rbp+270h]
  int *v313; // [rsp+380h] [rbp+278h]
  int v314; // [rsp+388h] [rbp+280h]
  __int64 v315; // [rsp+390h] [rbp+288h]
  int v316; // [rsp+398h] [rbp+290h]
  const wchar_t *v317; // [rsp+3A0h] [rbp+298h]
  unsigned int *v318; // [rsp+3A8h] [rbp+2A0h]
  int v319; // [rsp+3B0h] [rbp+2A8h]
  int *v320; // [rsp+3B8h] [rbp+2B0h]
  int v321; // [rsp+3C0h] [rbp+2B8h]
  __int64 v322; // [rsp+3C8h] [rbp+2C0h]
  int v323; // [rsp+3D0h] [rbp+2C8h]
  const wchar_t *v324; // [rsp+3D8h] [rbp+2D0h]
  unsigned int *v325; // [rsp+3E0h] [rbp+2D8h]
  int v326; // [rsp+3E8h] [rbp+2E0h]
  int *v327; // [rsp+3F0h] [rbp+2E8h]
  int v328; // [rsp+3F8h] [rbp+2F0h]
  __int64 v329; // [rsp+400h] [rbp+2F8h]
  int v330; // [rsp+408h] [rbp+300h]
  const wchar_t *v331; // [rsp+410h] [rbp+308h]
  unsigned int *v332; // [rsp+418h] [rbp+310h]
  int v333; // [rsp+420h] [rbp+318h]
  int *v334; // [rsp+428h] [rbp+320h]
  int v335; // [rsp+430h] [rbp+328h]
  __int64 v336; // [rsp+438h] [rbp+330h]
  int v337; // [rsp+440h] [rbp+338h]
  const wchar_t *v338; // [rsp+448h] [rbp+340h]
  unsigned int *v339; // [rsp+450h] [rbp+348h]
  int v340; // [rsp+458h] [rbp+350h]
  int *v341; // [rsp+460h] [rbp+358h]
  int v342; // [rsp+468h] [rbp+360h]
  __int64 v343; // [rsp+470h] [rbp+368h]
  int v344; // [rsp+478h] [rbp+370h]
  const wchar_t *v345; // [rsp+480h] [rbp+378h]
  unsigned int *v346; // [rsp+488h] [rbp+380h]
  int v347; // [rsp+490h] [rbp+388h]
  int *v348; // [rsp+498h] [rbp+390h]
  int v349; // [rsp+4A0h] [rbp+398h]
  __int64 v350; // [rsp+4A8h] [rbp+3A0h]
  int v351; // [rsp+4B0h] [rbp+3A8h]
  const wchar_t *v352; // [rsp+4B8h] [rbp+3B0h]
  int *v353; // [rsp+4C0h] [rbp+3B8h]
  int v354; // [rsp+4C8h] [rbp+3C0h]
  int *v355; // [rsp+4D0h] [rbp+3C8h]
  int v356; // [rsp+4D8h] [rbp+3D0h]
  __int64 v357; // [rsp+4E0h] [rbp+3D8h]
  int v358; // [rsp+4E8h] [rbp+3E0h]
  const wchar_t *v359; // [rsp+4F0h] [rbp+3E8h]
  unsigned int *v360; // [rsp+4F8h] [rbp+3F0h]
  int v361; // [rsp+500h] [rbp+3F8h]
  int *v362; // [rsp+508h] [rbp+400h]
  int v363; // [rsp+510h] [rbp+408h]
  __int64 v364; // [rsp+518h] [rbp+410h]
  int v365; // [rsp+520h] [rbp+418h]
  const wchar_t *v366; // [rsp+528h] [rbp+420h]
  int *v367; // [rsp+530h] [rbp+428h]
  int v368; // [rsp+538h] [rbp+430h]
  int *v369; // [rsp+540h] [rbp+438h]
  int v370; // [rsp+548h] [rbp+440h]
  __int64 v371; // [rsp+550h] [rbp+448h]
  int v372; // [rsp+558h] [rbp+450h]
  const wchar_t *v373; // [rsp+560h] [rbp+458h]
  unsigned int *v374; // [rsp+568h] [rbp+460h]
  int v375; // [rsp+570h] [rbp+468h]
  int *v376; // [rsp+578h] [rbp+470h]
  int v377; // [rsp+580h] [rbp+478h]
  __int64 v378; // [rsp+588h] [rbp+480h]
  int v379; // [rsp+590h] [rbp+488h]
  const wchar_t *v380; // [rsp+598h] [rbp+490h]
  unsigned int *v381; // [rsp+5A0h] [rbp+498h]
  int v382; // [rsp+5A8h] [rbp+4A0h]
  int *v383; // [rsp+5B0h] [rbp+4A8h]
  int v384; // [rsp+5B8h] [rbp+4B0h]
  __int64 v385; // [rsp+5C0h] [rbp+4B8h]
  int v386; // [rsp+5C8h] [rbp+4C0h]
  const wchar_t *v387; // [rsp+5D0h] [rbp+4C8h]
  unsigned int *v388; // [rsp+5D8h] [rbp+4D0h]
  int v389; // [rsp+5E0h] [rbp+4D8h]
  int *v390; // [rsp+5E8h] [rbp+4E0h]
  int v391; // [rsp+5F0h] [rbp+4E8h]
  __int64 v392; // [rsp+5F8h] [rbp+4F0h]
  int v393; // [rsp+600h] [rbp+4F8h]
  const wchar_t *v394; // [rsp+608h] [rbp+500h]
  unsigned int *v395; // [rsp+610h] [rbp+508h]
  int v396; // [rsp+618h] [rbp+510h]
  int *v397; // [rsp+620h] [rbp+518h]
  int v398; // [rsp+628h] [rbp+520h]
  __int64 v399; // [rsp+630h] [rbp+528h]
  int v400; // [rsp+638h] [rbp+530h]
  const wchar_t *v401; // [rsp+640h] [rbp+538h]
  unsigned int *v402; // [rsp+648h] [rbp+540h]
  int v403; // [rsp+650h] [rbp+548h]
  int *v404; // [rsp+658h] [rbp+550h]
  int v405; // [rsp+660h] [rbp+558h]
  __int64 v406; // [rsp+668h] [rbp+560h]
  int v407; // [rsp+670h] [rbp+568h]
  const wchar_t *v408; // [rsp+678h] [rbp+570h]
  unsigned int *v409; // [rsp+680h] [rbp+578h]
  int v410; // [rsp+688h] [rbp+580h]
  int *v411; // [rsp+690h] [rbp+588h]
  int v412; // [rsp+698h] [rbp+590h]
  __int64 v413; // [rsp+6A0h] [rbp+598h]
  int v414; // [rsp+6A8h] [rbp+5A0h]
  const wchar_t *v415; // [rsp+6B0h] [rbp+5A8h]
  unsigned int *v416; // [rsp+6B8h] [rbp+5B0h]
  int v417; // [rsp+6C0h] [rbp+5B8h]
  int *v418; // [rsp+6C8h] [rbp+5C0h]
  int v419; // [rsp+6D0h] [rbp+5C8h]
  __int64 v420; // [rsp+6D8h] [rbp+5D0h]
  int v421; // [rsp+6E0h] [rbp+5D8h]
  const wchar_t *v422; // [rsp+6E8h] [rbp+5E0h]
  unsigned int *v423; // [rsp+6F0h] [rbp+5E8h]
  int v424; // [rsp+6F8h] [rbp+5F0h]
  int *v425; // [rsp+700h] [rbp+5F8h]
  int v426; // [rsp+708h] [rbp+600h]
  __int64 v427; // [rsp+710h] [rbp+608h]
  int v428; // [rsp+718h] [rbp+610h]
  const wchar_t *v429; // [rsp+720h] [rbp+618h]
  int *v430; // [rsp+728h] [rbp+620h]
  int v431; // [rsp+730h] [rbp+628h]
  int *v432; // [rsp+738h] [rbp+630h]
  int v433; // [rsp+740h] [rbp+638h]
  __int64 v434; // [rsp+748h] [rbp+640h]
  int v435; // [rsp+750h] [rbp+648h]
  const wchar_t *v436; // [rsp+758h] [rbp+650h]
  int *v437; // [rsp+760h] [rbp+658h]
  int v438; // [rsp+768h] [rbp+660h]
  int *v439; // [rsp+770h] [rbp+668h]
  int v440; // [rsp+778h] [rbp+670h]
  __int64 v441; // [rsp+780h] [rbp+678h]
  int v442; // [rsp+788h] [rbp+680h]
  const wchar_t *v443; // [rsp+790h] [rbp+688h]
  int *v444; // [rsp+798h] [rbp+690h]
  int v445; // [rsp+7A0h] [rbp+698h]
  int *v446; // [rsp+7A8h] [rbp+6A0h]
  int v447; // [rsp+7B0h] [rbp+6A8h]
  __int64 v448; // [rsp+7B8h] [rbp+6B0h]
  int v449; // [rsp+7C0h] [rbp+6B8h]
  const wchar_t *v450; // [rsp+7C8h] [rbp+6C0h]
  unsigned int *v451; // [rsp+7D0h] [rbp+6C8h]
  int v452; // [rsp+7D8h] [rbp+6D0h]
  int *v453; // [rsp+7E0h] [rbp+6D8h]
  int v454; // [rsp+7E8h] [rbp+6E0h]
  __int64 v455; // [rsp+7F0h] [rbp+6E8h]
  int v456; // [rsp+7F8h] [rbp+6F0h]
  const wchar_t *v457; // [rsp+800h] [rbp+6F8h]
  unsigned int *v458; // [rsp+808h] [rbp+700h]
  int v459; // [rsp+810h] [rbp+708h]
  int *v460; // [rsp+818h] [rbp+710h]
  int v461; // [rsp+820h] [rbp+718h]
  __int64 v462; // [rsp+828h] [rbp+720h]
  int v463; // [rsp+830h] [rbp+728h]
  const wchar_t *v464; // [rsp+838h] [rbp+730h]
  unsigned int *v465; // [rsp+840h] [rbp+738h]
  int v466; // [rsp+848h] [rbp+740h]
  int *v467; // [rsp+850h] [rbp+748h]
  int v468; // [rsp+858h] [rbp+750h]
  __int64 v469; // [rsp+860h] [rbp+758h]
  int v470; // [rsp+868h] [rbp+760h]
  const wchar_t *v471; // [rsp+870h] [rbp+768h]
  unsigned int *v472; // [rsp+878h] [rbp+770h]
  int v473; // [rsp+880h] [rbp+778h]
  int *v474; // [rsp+888h] [rbp+780h]
  int v475; // [rsp+890h] [rbp+788h]
  __int64 v476; // [rsp+898h] [rbp+790h]
  int v477; // [rsp+8A0h] [rbp+798h]
  const wchar_t *v478; // [rsp+8A8h] [rbp+7A0h]
  unsigned int *v479; // [rsp+8B0h] [rbp+7A8h]
  int v480; // [rsp+8B8h] [rbp+7B0h]
  int *v481; // [rsp+8C0h] [rbp+7B8h]
  int v482; // [rsp+8C8h] [rbp+7C0h]
  __int64 v483; // [rsp+8D0h] [rbp+7C8h]
  int v484; // [rsp+8D8h] [rbp+7D0h]
  const wchar_t *v485; // [rsp+8E0h] [rbp+7D8h]
  unsigned int *v486; // [rsp+8E8h] [rbp+7E0h]
  int v487; // [rsp+8F0h] [rbp+7E8h]
  int *v488; // [rsp+8F8h] [rbp+7F0h]
  int v489; // [rsp+900h] [rbp+7F8h]
  __int64 v490; // [rsp+908h] [rbp+800h]
  int v491; // [rsp+910h] [rbp+808h]
  const wchar_t *v492; // [rsp+918h] [rbp+810h]
  unsigned int *v493; // [rsp+920h] [rbp+818h]
  int v494; // [rsp+928h] [rbp+820h]
  int *v495; // [rsp+930h] [rbp+828h]
  int v496; // [rsp+938h] [rbp+830h]
  __int64 v497; // [rsp+940h] [rbp+838h]
  int v498; // [rsp+948h] [rbp+840h]
  const wchar_t *v499; // [rsp+950h] [rbp+848h]
  unsigned int *v500; // [rsp+958h] [rbp+850h]
  int v501; // [rsp+960h] [rbp+858h]
  int *v502; // [rsp+968h] [rbp+860h]
  int v503; // [rsp+970h] [rbp+868h]
  __int64 v504; // [rsp+978h] [rbp+870h]
  int v505; // [rsp+980h] [rbp+878h]
  const wchar_t *v506; // [rsp+988h] [rbp+880h]
  unsigned int *v507; // [rsp+990h] [rbp+888h]
  int v508; // [rsp+998h] [rbp+890h]
  int *v509; // [rsp+9A0h] [rbp+898h]
  int v510; // [rsp+9A8h] [rbp+8A0h]
  __int64 v511; // [rsp+9B0h] [rbp+8A8h]
  int v512; // [rsp+9B8h] [rbp+8B0h]
  const wchar_t *v513; // [rsp+9C0h] [rbp+8B8h]
  unsigned int *v514; // [rsp+9C8h] [rbp+8C0h]
  int v515; // [rsp+9D0h] [rbp+8C8h]
  int *v516; // [rsp+9D8h] [rbp+8D0h]
  int v517; // [rsp+9E0h] [rbp+8D8h]
  __int64 v518; // [rsp+9E8h] [rbp+8E0h]
  int v519; // [rsp+9F0h] [rbp+8E8h]
  const wchar_t *v520; // [rsp+9F8h] [rbp+8F0h]
  unsigned int *v521; // [rsp+A00h] [rbp+8F8h]
  int v522; // [rsp+A08h] [rbp+900h]
  int *v523; // [rsp+A10h] [rbp+908h]
  int v524; // [rsp+A18h] [rbp+910h]
  __int64 v525; // [rsp+A20h] [rbp+918h]
  int v526; // [rsp+A28h] [rbp+920h]
  const wchar_t *v527; // [rsp+A30h] [rbp+928h]
  unsigned int *v528; // [rsp+A38h] [rbp+930h]
  int v529; // [rsp+A40h] [rbp+938h]
  int *v530; // [rsp+A48h] [rbp+940h]
  int v531; // [rsp+A50h] [rbp+948h]
  __int64 v532; // [rsp+A58h] [rbp+950h]
  int v533; // [rsp+A60h] [rbp+958h]
  const wchar_t *v534; // [rsp+A68h] [rbp+960h]
  unsigned int *v535; // [rsp+A70h] [rbp+968h]
  int v536; // [rsp+A78h] [rbp+970h]
  int *v537; // [rsp+A80h] [rbp+978h]
  int v538; // [rsp+A88h] [rbp+980h]
  __int64 v539; // [rsp+A90h] [rbp+988h]
  int v540; // [rsp+A98h] [rbp+990h]
  const wchar_t *v541; // [rsp+AA0h] [rbp+998h]
  unsigned int *v542; // [rsp+AA8h] [rbp+9A0h]
  int v543; // [rsp+AB0h] [rbp+9A8h]
  int *v544; // [rsp+AB8h] [rbp+9B0h]
  int v545; // [rsp+AC0h] [rbp+9B8h]
  __int64 v546; // [rsp+AC8h] [rbp+9C0h]
  int v547; // [rsp+AD0h] [rbp+9C8h]
  const wchar_t *v548; // [rsp+AD8h] [rbp+9D0h]
  unsigned int *v549; // [rsp+AE0h] [rbp+9D8h]
  int v550; // [rsp+AE8h] [rbp+9E0h]
  int *v551; // [rsp+AF0h] [rbp+9E8h]
  int v552; // [rsp+AF8h] [rbp+9F0h]
  __int64 v553; // [rsp+B00h] [rbp+9F8h]
  int v554; // [rsp+B08h] [rbp+A00h]
  _BYTE v555[296]; // [rsp+B10h] [rbp+A08h] BYREF

  if ( !*((_BYTE *)this + 2149) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 4150LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 0LL;
  }
  v248 = 3;
  v228 = -1;
  v194 = 0x7D0FFFFFFFFLL;
  v229 = 2000;
  v232 = 35000;
  v203 = 35000;
  v7 = 0;
  v234 = 50000;
  v206 = 50000;
  v235 = 100000;
  v207 = 100000;
  v240 = 300000;
  v225 = 300000;
  v241 = 17000;
  v224 = 17000;
  v236 = 200;
  v200 = 200;
  v237 = 200;
  v204 = 200;
  v239 = 100;
  v238 = 100;
  v242 = 25000;
  v226 = 25000;
  v244 = 300;
  v188 = 300;
  v245 = 700;
  v190 = 700;
  v246 = 900;
  v189 = 900;
  v247 = 500;
  v191 = 500;
  v253 = 140000;
  v213 = 140000;
  v254 = 200000;
  v215 = 200000;
  v255 = 250000;
  v216 = 250000;
  v256 = 250000;
  v217 = 250000;
  v233 = 2000;
  v205 = 2000;
  v243 = 2000;
  v208 = 2000;
  v257 = 10000;
  v210 = 10000;
  v230 = 80;
  v201 = 80;
  v231 = 15000;
  v202 = 15000;
  v199 = 3;
  v249 = 0;
  v197 = 0;
  v250 = 0;
  v198 = 0;
  v251 = 80;
  v209 = 80;
  v252 = 80000;
  v211 = 80000;
  v258 = 60000;
  v212 = 60000;
  v259 = 60000;
  v214 = 60000;
  v260 = 15000;
  v261 = 30000;
  v219 = 30000;
  v264 = 30000;
  v222 = 30000;
  v272 = L"UseSelfRefreshVRAMInS3";
  v273 = &v196;
  v218 = 15000;
  v262 = 80;
  v220 = 80;
  v263 = 15000;
  v221 = 15000;
  v265 = 80000;
  v223 = 80000;
  v275 = &v227;
  v227 = 1;
  v196 = 1;
  v192 = 1;
  v187 = 1;
  v193 = 0;
  v186 = 0;
  v270 = 0LL;
  v271 = 288;
  v274 = 67108868;
  v276 = 4;
  v277 = 0LL;
  v278 = 0;
  memset(v279, 0, sizeof(v279));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v270, 0LL, 0LL);
  v280 = 0LL;
  v282 = L"EnableRuntimePowerManagement";
  v283 = &v187;
  v285 = &v192;
  v289 = L"DisableDevicePowerRequired";
  v290 = &v186;
  v292 = (int *)&v193;
  v296 = L"DefaultLatencyToleranceOther";
  v297 = &v194;
  v299 = &v228;
  v281 = 288;
  v284 = 67108868;
  v286 = 4;
  v287 = 0LL;
  v288 = 288;
  v291 = 67108868;
  v293 = 4;
  v294 = 0LL;
  v295 = 288;
  v298 = 67108868;
  v300 = 4;
  v301 = 0LL;
  v302 = 288;
  v305 = 67108868;
  v303 = L"DefaultExpectedResidency";
  v304 = (char *)&v194 + 4;
  v306 = &v229;
  v310 = L"DefaultLatencyToleranceIdle0";
  v311 = &v201;
  v313 = &v230;
  v317 = L"DefaultLatencyToleranceIdle1";
  v318 = &v202;
  v320 = &v231;
  v324 = L"DefaultLatencyToleranceNoContext";
  v325 = &v203;
  v327 = &v232;
  v331 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v332 = &v205;
  v334 = &v233;
  v338 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v339 = &v206;
  v341 = &v234;
  v345 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v346 = &v207;
  v348 = &v235;
  v352 = L"DefaultLatencyToleranceTimerPeriod";
  v353 = &v200;
  v355 = &v236;
  v307 = 4;
  v308 = 0LL;
  v309 = 288;
  v312 = 67108868;
  v314 = 4;
  v315 = 0LL;
  v316 = 288;
  v319 = 67108868;
  v321 = 4;
  v322 = 0LL;
  v323 = 288;
  v326 = 67108868;
  v328 = 4;
  v329 = 0LL;
  v330 = 288;
  v333 = 67108868;
  v335 = 4;
  v336 = 0LL;
  v337 = 288;
  v340 = 67108868;
  v342 = 4;
  v343 = 0LL;
  v344 = 288;
  v347 = 67108868;
  v349 = 4;
  v350 = 0LL;
  v351 = 288;
  v354 = 67108868;
  v356 = 4;
  v357 = 0LL;
  v358 = 288;
  v359 = L"DefaultIdleThresholdIdle0";
  v360 = &v204;
  v362 = &v237;
  v366 = L"DefaultIdleThresholdIdle0MonitorOff";
  v367 = &v238;
  v369 = &v239;
  v373 = L"MonitorLatencyTolerance";
  v374 = &v225;
  v376 = &v240;
  v380 = L"MonitorRefreshLatencyTolerance";
  v381 = &v224;
  v383 = &v241;
  v387 = L"DefaultPowerNotRequiredTimeout";
  v388 = &v226;
  v390 = &v242;
  v394 = L"DefaultActiveIdleThreshold";
  v395 = &v208;
  v397 = &v243;
  v401 = L"ulow";
  v402 = &v188;
  v404 = &v244;
  v408 = L"uhigh";
  v409 = &v190;
  v411 = &v245;
  v415 = L"uglitch";
  v361 = 67108868;
  v363 = 4;
  v364 = 0LL;
  v365 = 288;
  v368 = 67108868;
  v370 = 4;
  v371 = 0LL;
  v372 = 288;
  v375 = 67108868;
  v377 = 4;
  v378 = 0LL;
  v379 = 288;
  v382 = 67108868;
  v384 = 4;
  v385 = 0LL;
  v386 = 288;
  v389 = 67108868;
  v391 = 4;
  v392 = 0LL;
  v393 = 288;
  v396 = 67108868;
  v398 = 4;
  v399 = 0LL;
  v400 = 288;
  v403 = 67108868;
  v405 = 4;
  v406 = 0LL;
  v407 = 288;
  v410 = 67108868;
  v412 = 4;
  v413 = 0LL;
  v414 = 288;
  v417 = 67108868;
  v416 = &v189;
  v418 = &v246;
  v422 = L"uideal";
  v423 = &v191;
  v425 = &v247;
  v429 = L"lowdebounce";
  v430 = &v199;
  v432 = &v248;
  v436 = L"EnablePODebounce";
  v437 = &v197;
  v439 = &v249;
  v443 = L"DisablePStateManagement";
  v444 = &v198;
  v446 = &v250;
  v450 = L"DefaultD3TransitionLatencyActivelyUsed";
  v451 = &v209;
  v453 = &v251;
  v457 = L"DefaultD3TransitionLatencyIdleShortTime";
  v458 = &v211;
  v460 = &v252;
  v464 = L"DefaultD3TransitionLatencyIdleLongTime";
  v465 = &v213;
  v467 = &v253;
  v471 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v419 = 4;
  v420 = 0LL;
  v421 = 288;
  v424 = 67108868;
  v426 = 4;
  v427 = 0LL;
  v428 = 288;
  v431 = 67108868;
  v433 = 4;
  v434 = 0LL;
  v435 = 288;
  v438 = 67108868;
  v440 = 4;
  v441 = 0LL;
  v442 = 288;
  v445 = 67108868;
  v447 = 4;
  v448 = 0LL;
  v449 = 288;
  v452 = 67108868;
  v454 = 4;
  v455 = 0LL;
  v456 = 288;
  v459 = 67108868;
  v461 = 4;
  v462 = 0LL;
  v463 = 288;
  v466 = 67108868;
  v468 = 4;
  v469 = 0LL;
  v470 = 288;
  v472 = &v215;
  v474 = &v254;
  v478 = L"DefaultD3TransitionLatencyIdleNoContext";
  v479 = &v216;
  v481 = &v255;
  v485 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v486 = &v217;
  v488 = &v256;
  v492 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v493 = &v210;
  v495 = &v257;
  v499 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v500 = &v212;
  v502 = &v258;
  v506 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v507 = &v214;
  v509 = &v259;
  v513 = L"DefaultLatencyToleranceMemory";
  v514 = &v218;
  v516 = &v260;
  v520 = L"DefaultLatencyToleranceMemoryNoContext";
  v521 = &v219;
  v523 = &v261;
  v527 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v528 = &v220;
  v473 = 67108868;
  v475 = 4;
  v476 = 0LL;
  v477 = 288;
  v480 = 67108868;
  v482 = 4;
  v483 = 0LL;
  v484 = 288;
  v487 = 67108868;
  v489 = 4;
  v490 = 0LL;
  v491 = 288;
  v494 = 67108868;
  v496 = 4;
  v497 = 0LL;
  v498 = 288;
  v501 = 67108868;
  v503 = 4;
  v504 = 0LL;
  v505 = 288;
  v508 = 67108868;
  v510 = 4;
  v511 = 0LL;
  v512 = 288;
  v515 = 67108868;
  v517 = 4;
  v518 = 0LL;
  v519 = 288;
  v522 = 67108868;
  v524 = 4;
  v525 = 0LL;
  v526 = 288;
  v529 = 67108868;
  v530 = &v262;
  v531 = 4;
  v534 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v532 = 0LL;
  v535 = &v221;
  v533 = 288;
  v537 = &v263;
  v541 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v542 = &v222;
  v544 = &v264;
  v548 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v549 = &v223;
  v551 = &v265;
  v536 = 67108868;
  v538 = 4;
  v539 = 0LL;
  v540 = 288;
  v543 = 67108868;
  v545 = 4;
  v546 = 0LL;
  v547 = 288;
  v550 = 67108868;
  v552 = 4;
  v553 = 0LL;
  v554 = 0;
  memset(v555, 0, 0x28uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v280, 0LL, 0LL);
  if ( !v187 )
    return 0LL;
  v11 = v196 == 0;
  *((_BYTE *)this + 181) = v186 != 0;
  *((_BYTE *)this + 184) = !v11;
  v12 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v13 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL);
  if ( v13 < 0x5019 || *((int *)this + 486) < 0x2000 )
    v14 = 1;
  else
    v14 = *((_DWORD *)this + 62);
  v185 = v14;
  v15 = 0;
  LODWORD(v195) = 0;
  if ( !v14 )
    goto LABEL_203;
  do
  {
    memset(&v268[40], 0, 0x28uLL);
    *(_DWORD *)&v268[40] = 6;
    *(_DWORD *)&v268[72] = 4;
    *(_QWORD *)&v268[64] = &v555[4 * v15 + 40];
    if ( DXGADAPTER::IsDxgmms2(this) && v13 >= 0x5019 )
    {
      *(_DWORD *)&v268[56] = 4;
      *(_QWORD *)&v268[48] = &v195;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v16, (struct _DXGKARG_QUERYADAPTERINFO *)&v268[40], v17);
    v19 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v183 = WdLogNewEntry5_WdError(v12, v8);
      *(_QWORD *)(v183 + 24) = this;
      *(_QWORD *)(v183 + 32) = v19;
      WdLogEvent5_WdError(v183);
      return (unsigned int)v19;
    }
    v7 += *(_DWORD *)&v555[4 * (unsigned int)v195 + 40];
    v15 = v195 + 1;
    LODWORD(v195) = v15;
  }
  while ( v15 < v14 );
  if ( !v7 )
  {
LABEL_203:
    v5 = WdLogNewEntry5_WdWarning(v12, v8, v9, v10);
    *(_QWORD *)(v5 + 24) = 4315LL;
    goto LABEL_3;
  }
  if ( v7 > 0xFFFF )
  {
    v20 = WdLogNewEntry5_WdError(v12, v8);
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdError(v20);
    LODWORD(v19) = -1073741811;
    goto LABEL_196;
  }
  *((_DWORD *)this + 616) = v7;
  v21 = 520LL * v7;
  if ( !is_mul_ok(v7, 0x208uLL) )
    v21 = -1LL;
  v22 = operator new[](v21, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 290) = v22;
  if ( !v22
    || (memset(v22, 0, 520LL * v7), v24 = operator new[](312 * v7 + 136, 0x4B677844u, PagedPool), (v25 = v24) == 0LL) )
  {
    v47 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v47 + 24) = this;
    WdLogEvent5_WdLowResource(v47);
    LODWORD(v19) = -1073741801;
    goto LABEL_196;
  }
  memset(v24, 0, 312 * v7 + 136);
  *(_DWORD *)v25 = 2;
  v25[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  *((_DWORD *)v25 + 18) = v7;
  v25[2] = DxgkPowerRuntimeComponentActiveCallback;
  v25[8] = this;
  v25[3] = DxgkPowerRuntimeComponentIdleCallback;
  v25[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v25[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v25[7] = DxgkPowerRuntimeControlCallback;
  memset(v268, 0, 0x28uLL);
  *(_DWORD *)v268 = 7;
  v26 = (__int64)&v25[7 * v7 + 10];
  *(_DWORD *)&v268[16] = 4;
  *(_DWORD *)&v268[32] = 336;
  v27 = 0;
  v28 = 0;
  v193 = 0;
  v29 = 0;
  v187 = 0;
  v30 = 0;
  v192 = 0;
  i = (void *)(v26 + 192LL * v7);
  v31 = v185;
  do
  {
    v32 = v28;
    v33 = 0;
    v269 = v28;
    v186 = 0;
    *((_WORD *)this + v28 + 1168) = v29;
    if ( !*(_DWORD *)&v555[4 * v28 + 40] )
      goto LABEL_76;
    do
    {
      v34 = 7LL * v29;
      v266 = v30 + v33;
      *(_QWORD *)&v268[8] = &v266;
      v35 = *((_QWORD *)this + 290) + 8LL;
      v195 = 520LL * v29;
      *(_QWORD *)&v268[24] = v35 + v195;
      v36 = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)v268, v32);
      v19 = v36;
      if ( v36 < 0 )
      {
        v71 = WdLogNewEntry5_WdError(v38, v37);
        *(_QWORD *)(v71 + 24) = v29;
        *(_QWORD *)(v71 + 32) = v19;
LABEL_107:
        WdLogEvent5_WdError(v71);
        goto LABEL_195;
      }
      v40 = v195;
      v41 = v186;
      *(_DWORD *)(v195 + *((_QWORD *)this + 290)) = v29;
      *(_WORD *)(v40 + *((_QWORD *)this + 290) + 4) = v41;
      v42 = v187;
      *(_WORD *)(v40 + *((_QWORD *)this + 290) + 6) = v187;
      v43 = v40 + *((_QWORD *)this + 290);
      HIDWORD(v25[v34 + 13]) = *(_DWORD *)(v43 + 8);
      v44 = *(_DWORD *)(v43 + 8);
      if ( !v44 || v44 > 8 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
        v59[3] = v29;
        v59[4] = *(unsigned int *)(v43 + 8);
        v59[5] = 0LL;
        goto LABEL_97;
      }
      *(_OWORD *)&v25[v34 + 10] = *(_OWORD *)(v43 + 220);
      *(_BYTE *)(v43 + 275) = 0;
      v45 = *(_DWORD *)(v43 + 216);
      if ( v45 >= 0x20 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
        v46[4] = 2LL;
        goto LABEL_101;
      }
      if ( (v45 & 4) != 0 )
        v25[v34 + 12] |= 1uLL;
      if ( !v197 )
        v25[v34 + 12] |= 2uLL;
      if ( (*(_DWORD *)(v43 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v43 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
          v46[4] = 4464LL;
          goto LABEL_101;
        }
        if ( *(_DWORD *)(v43 + 8) != 2 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
          v46[4] = 4470LL;
          goto LABEL_101;
        }
        if ( *(_QWORD *)(v43 + 40) )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
          v46[4] = 4476LL;
          goto LABEL_101;
        }
        if ( *(_DWORD *)(v43 + 276) )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
          v46[4] = 4482LL;
LABEL_101:
          v46[3] = v29;
          goto LABEL_103;
        }
      }
      if ( *(_DWORD *)(v43 + 276) > 0x10u )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
        v46[4] = 3LL;
        goto LABEL_101;
      }
      v48 = *(_DWORD *)(v43 + 208);
      if ( v48 == 4 )
      {
        if ( *((_DWORD *)this + 618) != -1 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v40, v42);
          v46[4] = 4530LL;
          goto LABEL_101;
        }
        *((_DWORD *)this + 618) = v29;
      }
      else if ( v48 == 6 )
      {
        if ( *((_DWORD *)this + 617) == -1 )
        {
          v50 = *((_QWORD *)this + 290) + v40;
          *((_QWORD *)this + 335) = v50;
          *((_DWORD *)this + 617) = v29;
          v51 = *(_DWORD *)(v43 + 8);
          if ( v51 == 2 )
          {
            *((_BYTE *)this + 2760) = 1;
          }
          else if ( v51 > 2 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdError(v50, v42);
            v46[4] = 4520LL;
            goto LABEL_101;
          }
        }
        else
        {
          v49 = WdLogNewEntry5_WdWarning(v40, v42, 0LL, v39);
          *(_QWORD *)(v49 + 24) = v29;
          *(_QWORD *)(v49 + 32) = 4504LL;
          WdLogEvent5_WdWarning(v49);
        }
      }
      v52 = i;
      LODWORD(v25[v34 + 15]) = *(_DWORD *)(v43 + 276);
      memmove(v52, (const void *)(v43 + 280), 4LL * *(unsigned int *)(v43 + 276));
      v53 = i;
      v25[v34 + 16] = i;
      v54 = *(unsigned int *)(v43 + 276);
      v25[v34 + 14] = v26;
      v55 = 0;
      v32 = (__int64)v53 + 4 * v54;
      for ( i = (void *)v32; v55 < *(_DWORD *)(v43 + 8); ++v55 )
      {
        v32 = 3LL * v55;
        v56 = *(_QWORD *)(v43 + 24LL * v55 + 16);
        *(_QWORD *)v26 = v56;
        v57 = *(_QWORD *)(v43 + 24LL * v55 + 24);
        *(_QWORD *)(v26 + 8) = v57;
        v58 = *(unsigned int *)(v43 + 24LL * v55 + 32);
        *(_DWORD *)(v26 + 16) = v58;
        if ( *(_QWORD *)(v43 + 24LL * v55 + 16) == -1LL )
          v56 = -1LL;
        *(_QWORD *)v26 = v56;
        if ( *(_QWORD *)(v43 + 24LL * v55 + 24) == -1LL )
          v57 = -1LL;
        *(_QWORD *)(v26 + 8) = v57;
        if ( *(_DWORD *)(v43 + 24LL * v55 + 32) == -1 )
          v58 = 0xFFFFFFFFLL;
        *(_DWORD *)(v26 + 16) = v58;
        if ( v55 )
        {
          v60 = *(unsigned int *)(v43 + 24LL * v55 + 32);
          if ( (_DWORD)v60 != -1 )
          {
            v61 = *(unsigned int *)(v43 + 24 * (v55 - 1 + 1LL) + 8);
            if ( (_DWORD)v61 != -1 && (unsigned int)v60 > (unsigned int)v61 )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdError(v61, v60);
              v59[4] = 5LL;
              goto LABEL_95;
            }
          }
          v62 = *(_QWORD *)(v43 + 24LL * v55 + 16);
          if ( v62 != -1LL )
          {
            v63 = *(_QWORD *)(v43 + 24LL * (v55 - 1) + 16);
            if ( v63 != -1LL && v62 < v63 )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
              v59[4] = 6LL;
              goto LABEL_95;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v43 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v43 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdError(v57, v58);
            v59[4] = 3LL;
LABEL_95:
            v59[3] = v29;
LABEL_97:
            WdLogEvent5_WdError(v59);
            LODWORD(v19) = -1073741811;
            goto LABEL_195;
          }
          if ( !*(_DWORD *)(v43 + 32) )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdError(v57, v58);
            v59[4] = 4LL;
            goto LABEL_95;
          }
        }
        v26 += 24LL;
      }
      v64 = *(_DWORD *)(v43 + 208);
      ++v29;
      v30 = v192;
      v33 = ++v186;
      v65 = v193 + 1;
      if ( v64 )
        v65 = v193;
      v27 = v65;
      v193 = v65;
    }
    while ( v33 < *(_DWORD *)&v555[4 * v269 + 40] );
    v31 = v185;
    v28 = v187;
LABEL_76:
    ++v28;
    v30 += 0x10000;
    v187 = v28;
    v192 = v30;
  }
  while ( v28 < v31 );
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 1300 || !v27 || v198 )
    goto LABEL_136;
  if ( v188 > 0x3E8
    || (v66 = v190, v190 > 0x3E8)
    || v189 > 0x3E8
    || v191 > 0x3E8
    || v188 >= v191
    || v191 >= v190
    || v190 >= v189 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v66, 1000LL);
    v59[3] = v188;
    v59[4] = v190;
    v59[5] = v189;
    v59[6] = v191;
    goto LABEL_97;
  }
  *(_DWORD *)v268 = 9;
  v67 = 248LL * v27;
  *(_DWORD *)&v268[32] = 136;
  if ( !is_mul_ok(v27, 0xF8uLL) )
    v67 = -1LL;
  v68 = operator new[](v67, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 454) = v68;
  *((_DWORD *)this + 910) = v27;
  if ( !v68 )
  {
    v70 = WdLogNewEntry5_WdLowResource(v69);
    *(_QWORD *)(v70 + 24) = this;
    WdLogEvent5_WdLowResource(v70);
    LODWORD(v19) = -1073741801;
    goto LABEL_195;
  }
  memset(v68, 0, 248LL * v27);
  v72 = 0;
  for ( j = 0LL; v72 < *((_DWORD *)this + 616); ++v72 )
  {
    v74 = *((_QWORD *)this + 290);
    v75 = 520LL * v72;
    if ( !*(_DWORD *)(v75 + v74 + 208) )
    {
      *(_QWORD *)(v75 + v74 + 512) = *((_QWORD *)this + 454) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v76 = 0;
  *((_DWORD *)this + 962) = v189;
  *((_DWORD *)this + 963) = v190;
  *((_DWORD *)this + 964) = v188;
  *((_DWORD *)this + 965) = v191;
  *((_DWORD *)this + 966) = v199;
  v185 = 0;
  while ( 2 )
  {
    v77 = *(_QWORD *)(520LL * v76 + *((_QWORD *)this + 290) + 512);
    if ( !v77 )
    {
LABEL_116:
      v185 = ++v76;
      if ( v76 >= v7 )
        goto LABEL_125;
      continue;
    }
    break;
  }
  *(_QWORD *)&v268[24] = *(_QWORD *)(520LL * v76 + *((_QWORD *)this + 290) + 512);
  *(_QWORD *)&v268[8] = &v185;
  v78 = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)v268, j);
  v83 = v78;
  if ( v78 >= 0 )
  {
    v84 = v185;
    *(_QWORD *)(v77 + 136) = this;
    *(_DWORD *)(v77 + 144) = v84;
    *(_QWORD *)(v77 + 152) = v77;
    KeInitializeSpinLock((PKSPIN_LOCK)(v77 + 160));
    *(_BYTE *)(v77 + 240) = 0;
    *(_DWORD *)(v77 + 244) = -1;
    v76 = v185;
    goto LABEL_116;
  }
  v85 = WdLogNewEntry5_WdTrace(v80, v79, v81, v82);
  *(_QWORD *)(v85 + 24) = v185;
  v86 = 0;
  for ( *(_QWORD *)(v85 + 32) = v83; v86 < *((_DWORD *)this + 616); ++v86 )
  {
    v87 = 520LL * v86;
    v88 = *((_QWORD *)this + 290);
    if ( !*(_DWORD *)(v87 + v88 + 208) )
      *(_QWORD *)(v87 + v88 + 512) = 0LL;
  }
  v89 = (void *)*((_QWORD *)this + 454);
  *((_DWORD *)this + 910) = 0;
  if ( v89 )
    ExFreePoolWithTag(v89, 0);
  *((_QWORD *)this + 454) = 0LL;
LABEL_125:
  v90 = 0;
  v91 = *((_DWORD *)this + 910);
  if ( v91 )
  {
    v92 = *((_QWORD *)this + 454);
    while ( 1 )
    {
      v93 = v90;
      v94 = 248LL * v90;
      v95 = *(unsigned int *)(v92 + v94 + 144);
      if ( *(_DWORD *)(v92 + v94) > 0x20u )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v90, v92);
        v46[3] = v95;
        goto LABEL_103;
      }
      v96 = *(_DWORD *)(v92 + 248LL * v90);
      v97 = 0;
      if ( v96 )
        break;
LABEL_135:
      if ( ++v90 >= v91 )
        goto LABEL_136;
    }
    v98 = 62LL * v90;
    while ( 1 )
    {
      v99 = *(_DWORD *)(v92 + 4 * (v98 + v97) + 4);
      if ( !v99 )
        break;
      if ( v97 )
      {
        v93 = v98 + v97 - 1;
        if ( v99 > *(_DWORD *)(v92 + 4 * v93 + 4) )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v93, v92);
          v46[3] = v95;
          v46[4] = v97;
          v46[5] = v97 - 1;
          goto LABEL_103;
        }
      }
      if ( ++v97 >= v96 )
        goto LABEL_135;
    }
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v93, v92);
    v46[3] = v95;
    v46[4] = v97;
LABEL_103:
    WdLogEvent5_WdError(v46);
    LODWORD(v19) = -1073741811;
    goto LABEL_195;
  }
LABEL_136:
  v100 = (ADAPTER_RENDER *)*((_QWORD *)this + 286);
  *((_DWORD *)this + 688) = v200;
  if ( v100 )
  {
    v101 = ADAPTER_RENDER::InitializePowerManagement(v100);
    v19 = v101;
    if ( v101 < 0 )
    {
      v104 = WdLogNewEntry5_WdError(v103, v102);
      *(_QWORD *)(v104 + 32) = 7LL;
      goto LABEL_194;
    }
  }
  v105 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 285);
  if ( v105 )
  {
    v106 = ADAPTER_DISPLAY::InitializePowerManagement(v105);
    v19 = v106;
    if ( v106 < 0 )
    {
      v104 = WdLogNewEntry5_WdError(v108, v107);
      *(_QWORD *)(v104 + 32) = 8LL;
      goto LABEL_194;
    }
  }
  v109 = (_QWORD *)((char *)this + 2328);
  v110 = PoFxRegisterDevice(*((_QWORD *)this + 24), v25, (char *)this + 2328);
  v19 = v110;
  if ( v110 < 0 )
  {
    v71 = WdLogNewEntry5_WdError(v112, v111);
    *(_QWORD *)(v71 + 24) = v19;
    goto LABEL_107;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 2488), SynchronizationEvent, 0);
  *((_QWORD *)this + 347) = (char *)this + 2768;
  *((_QWORD *)this + 346) = (char *)this + 2768;
  *((_BYTE *)this + 2756) = 0;
  TimeIncrement = KeQueryTimeIncrement();
  memset((char *)this + 2512, 0, 0x60uLL);
  v114 = v202;
  *((_QWORD *)this + 314) = 10LL * v201;
  v115 = 5 * v114;
  v116 = v203;
  *((_QWORD *)this + 316) = 2 * v115;
  *((_QWORD *)this + 318) = 10 * v116;
  v117 = (unsigned int)(10000 * (unsigned __int64)v204 / TimeIncrement);
  v118 = v205;
  *((_QWORD *)this + 315) = v117;
  *((_QWORD *)this + 321) = v117;
  v119 = 5 * v118;
  v120 = v206;
  *((_QWORD *)this + 320) = 2 * v119;
  v121 = 5 * v120;
  v122 = v207;
  *((_QWORD *)this + 322) = 2 * v121;
  v123 = 5 * v122;
  v124 = v208;
  *((_QWORD *)this + 324) = 2 * v123;
  *((_QWORD *)this + 326) = (char *)this + 2512;
  v125 = 5 * v124;
  v126 = v209;
  *((_QWORD *)this + 358) = 2 * v125;
  v127 = 10000LL * v210;
  *((_QWORD *)this + 327) = 10 * v126;
  v128 = v211;
  *((_QWORD *)this + 328) = (unsigned int)(v127 / TimeIncrement);
  v129 = 10000LL * v212;
  *((_QWORD *)this + 329) = 10 * v128;
  v130 = v213;
  *((_QWORD *)this + 330) = (unsigned int)(v129 / TimeIncrement);
  v131 = 5 * v130;
  v132 = 10000LL * v214;
  *((_QWORD *)this + 331) = 2 * v131;
  *((_QWORD *)this + 332) = (unsigned int)(v132 / TimeIncrement);
  *((_QWORD *)this + 334) = 0LL;
  v184 = 0;
  v133 = v216;
  *((_QWORD *)this + 333) = 10LL * v215;
  v134 = 5 * v133;
  v135 = v217;
  *((_QWORD *)this + 336) = 2 * v134;
  v136 = 5 * v135;
  v137 = v218;
  *((_QWORD *)this + 337) = 2 * v136;
  v138 = 5 * v137;
  v139 = v219;
  *((_QWORD *)this + 338) = 2 * v138;
  v140 = 5 * v139;
  v141 = v220;
  *((_QWORD *)this + 339) = 2 * v140;
  v142 = 5 * v141;
  v143 = v221;
  *((_QWORD *)this + 340) = 2 * v142;
  v144 = 5 * v143;
  v145 = v222;
  *((_QWORD *)this + 341) = 2 * v144;
  v146 = 5 * v145;
  v147 = v223;
  *((_QWORD *)this + 342) = 2 * v146;
  *((_QWORD *)this + 343) = 10 * v147;
  *((_QWORD *)this + 352) = (char *)this + 2808;
  *((_QWORD *)this + 351) = (char *)this + 2808;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 357);
  v148 = 0;
  v149 = 0LL;
  while ( 2 )
  {
    v150 = *((_QWORD *)this + 290);
    *(_BYTE *)(v149 + v150 + 356) = 1;
    v151 = (DXGADAPTER *)(v149 + v150 + 424);
    *(_QWORD *)v151 = 0LL;
    *((_QWORD *)v151 + 1) = 0LL;
    v152 = *(_DWORD *)(v149 + v150 + 208);
    if ( !v152 )
    {
      *(_BYTE *)(v149 + v150 + 357) = 1;
      v163 = (DXGADAPTER **)*((_QWORD *)this + 356);
      if ( *v163 != (DXGADAPTER *)((char *)this + 2840) )
        __fastfail(3u);
      *((_QWORD *)v151 + 1) = v163;
      *(_QWORD *)v151 = (char *)this + 2840;
      *v163 = v151;
      v164 = 0LL;
      *((_QWORD *)this + 356) = v151;
      v165 = *(_DWORD *)(v149 + v150 + 8);
      if ( v165 > 1 )
      {
        v166 = (unsigned __int64 *)(v149 + v150 + 40);
        v167 = v165 - 1;
        do
        {
          if ( v164 < *v166 )
            v164 = *v166;
          v166 += 3;
          --v167;
        }
        while ( v167 );
      }
      *(_DWORD *)(v149 + v150 + 388) = 1;
      v168 = (unsigned __int64 *)((char *)this + 2512);
      v169 = 0;
      while ( *v168 < v164 )
      {
        ++v169;
        v168 += 2;
        if ( v169 >= 2 )
          goto LABEL_176;
      }
      *(_DWORD *)(v149 + v150 + 388) = v169;
LABEL_176:
      v170 = *(_DWORD *)(v149 + v150 + 4);
      *(_DWORD *)(v149 + v150 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v170, *(_QWORD *)(*((_QWORD *)this + 326) + 32LL));
      ++*((_DWORD *)this + 620);
      goto LABEL_177;
    }
    v153 = v152 - 1;
    if ( !v153 )
    {
      v162 = v225;
      goto LABEL_164;
    }
    v154 = v153 - 1;
    if ( !v154 )
    {
      v162 = v224;
LABEL_164:
      v158 = *(_DWORD *)(v149 + v150 + 4);
      v160 = 10 * v162;
      v159 = this;
      goto LABEL_156;
    }
    v155 = v154 - 1;
    if ( !v155 )
    {
      v161 = (DXGADAPTER **)*((_QWORD *)this + 354);
      if ( *v161 != (DXGADAPTER *)((char *)this + 2824) )
        __fastfail(3u);
      *(_QWORD *)v151 = (char *)this + 2824;
      *((_QWORD *)v151 + 1) = v161;
      *v161 = v151;
      *((_QWORD *)this + 354) = v151;
      goto LABEL_160;
    }
    v156 = v155 - 1;
    if ( !v156 )
      goto LABEL_177;
    v157 = v156 - 2;
    if ( !v157 )
      goto LABEL_177;
    if ( v157 == 1 )
    {
      v184 = 1;
LABEL_160:
      if ( (*(_DWORD *)(v149 + v150 + 216) & 0x10) != 0 )
        *(_BYTE *)(v149 + v150 + 360) = 1;
      goto LABEL_177;
    }
    v158 = *(_DWORD *)(v149 + v150 + 4);
    v159 = this;
    if ( (_DWORD)v194 == -1 )
      v160 = -1LL;
    else
      v160 = 10LL * (unsigned int)v194;
LABEL_156:
    DXGADAPTER::SetPowerComponentLatencyCB(v159, v158, v160);
LABEL_177:
    if ( HIDWORD(v194) == -1 )
      v171 = -1LL;
    else
      v171 = 10000LL * HIDWORD(v194);
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v149 + v150 + 4), v171);
    KeInitializeSpinLock((PKSPIN_LOCK)(v149 + v150 + 504));
    if ( *(_DWORD *)(v149 + v150 + 8) <= 1u || (v172 = *(_QWORD *)(v149 + v150 + 48), v172 == -1) )
    {
      v173 = *((_QWORD *)this + 358);
    }
    else
    {
      v173 = *((_QWORD *)this + 358);
      if ( v172 > v173 )
        v173 = *(_QWORD *)(v149 + v150 + 48);
    }
    *(_QWORD *)(v149 + v150 + 496) = v173;
    ++v148;
    v149 += 520LL;
    if ( v148 < v7 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*v109, 10LL * v226);
  if ( *((_DWORD *)this + 69) == 1297040209 && *((_DWORD *)this + 486) == 4608 )
  {
    KeInitializeEvent((PRKEVENT)((char *)this + 3008), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3032), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3056), SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)this + 385);
    *((_QWORD *)this + 388) = (char *)this + 3096;
    *((_QWORD *)this + 387) = (char *)this + 3096;
    InitializeSListHead((PSLIST_HEADER)this + 195);
    v175 = (struct _SLIST_ENTRY *)((char *)this + 3152);
    v176 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 195, v175);
      v175 += 2;
      --v176;
    }
    while ( v176 );
    *(_QWORD *)&v268[48] = 0LL;
    *(_QWORD *)&v268[56] = 0LL;
    *(_DWORD *)&v268[40] = 48;
    *(_DWORD *)&v268[64] = 512;
    *(_OWORD *)&v268[72] = 0LL;
    SystemThread = PsCreateSystemThread(
                     (PHANDLE)this + 392,
                     0x1FFFFFu,
                     (POBJECT_ATTRIBUTES)&v268[40],
                     0LL,
                     0LL,
                     DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
                     this);
    v19 = SystemThread;
    if ( SystemThread < 0 )
    {
      v71 = WdLogNewEntry5_WdError(v179, v178);
      *(_QWORD *)(v71 + 24) = v19;
      *(_QWORD *)(v71 + 32) = 8LL;
      goto LABEL_107;
    }
  }
  LOBYTE(v174) = v184;
  v180 = DpiEnablePowerManagement(*((_QWORD *)this + 24), *v109, v174);
  v19 = v180;
  if ( v180 >= 0 )
  {
    ExFreePoolWithTag(v25, 0);
    return 0LL;
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v104 = WdLogNewEntry5_WdError(v182, v181);
  *(_QWORD *)(v104 + 32) = 9LL;
LABEL_194:
  *(_QWORD *)(v104 + 24) = v19;
  WdLogEvent5_WdError(v104);
LABEL_195:
  ExFreePoolWithTag(v25, 0);
LABEL_196:
  if ( *((_QWORD *)this + 291) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 291) = 0LL;
  }
  return (unsigned int)v19;
}
