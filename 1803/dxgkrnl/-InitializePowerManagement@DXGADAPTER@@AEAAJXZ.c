/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014B1C4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00026C0 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C00271D0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0027278 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C0148DE4 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0155978 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015B264 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x1C01EE594 (DpiEnablePowerManagement.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C01EFA20 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int16 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rax
  __int16 v14; // r9
  _WORD *v15; // rax
  bool v16; // zf
  __int64 v17; // rcx
  unsigned int v18; // r12d
  unsigned int v19; // r14d
  unsigned int i; // ebx
  DXGADAPTER *v21; // rcx
  __int64 v22; // r8
  int AdapterInfo; // eax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  SIZE_T v27; // rax
  PVOID v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // r12
  unsigned int v34; // ebx
  unsigned int v35; // r14d
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // edx
  char *v39; // r13
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int16 v45; // dx
  __int64 v46; // rdx
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  void *v52; // rcx
  char *v53; // r8
  __int64 v54; // rax
  unsigned int v55; // r9d
  __int64 v56; // rax
  unsigned int *v57; // r8
  __int64 v58; // rcx
  int v59; // edx
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned int v66; // ecx
  __int64 v67; // rcx
  SIZE_T v68; // r11
  SIZE_T v69; // rax
  PVOID v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  unsigned int v78; // edx
  __int64 k; // r8
  __int64 v80; // r9
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rbx
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r14
  int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // edx
  __int64 v93; // rcx
  __int64 v94; // rax
  void *v95; // rcx
  unsigned int v96; // r12d
  unsigned int v97; // edx
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned int v101; // r8d
  __int64 v102; // r14
  unsigned int v103; // ebx
  __int64 v104; // r11
  unsigned int v105; // r10d
  ADAPTER_RENDER *v106; // rcx
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  ADAPTER_DISPLAY *v114; // rcx
  int v115; // eax
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rcx
  unsigned __int64 TimeIncrement; // rbx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  unsigned __int64 v133; // rtt
  __int64 v134; // rax
  unsigned __int64 v135; // rtt
  __int64 v136; // rax
  __int64 v137; // rcx
  unsigned __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rax
  unsigned int v156; // r14d
  __int64 v157; // rbx
  DXGADAPTER *v158; // rdx
  int v159; // ecx
  int v160; // ecx
  int v161; // ecx
  int v162; // ecx
  int v163; // ecx
  int v164; // ecx
  __int64 v165; // rax
  DXGADAPTER *v166; // rcx
  int v167; // edx
  DXGADAPTER **v168; // rcx
  DXGADAPTER **v169; // rcx
  unsigned __int64 v170; // rcx
  unsigned int v171; // eax
  unsigned __int64 *v172; // rdx
  __int64 v173; // r8
  unsigned __int64 v174; // rax
  bool v175; // cf
  unsigned int v176; // eax
  unsigned __int64 *v177; // rdx
  int v178; // edx
  __int64 v179; // r8
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rbx
  __int64 v183; // r14
  NTSTATUS v184; // eax
  int v185; // eax
  __int64 v186; // rcx
  __int64 v187; // rax
  __int64 v188; // rax
  unsigned __int8 v189; // [rsp+40h] [rbp-C0h]
  unsigned int v190; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v191; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v192; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v193; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v194; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v195; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v196; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v197; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v198; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v199; // [rsp+70h] [rbp-90h] BYREF
  int v200; // [rsp+74h] [rbp-8Ch]
  int v201; // [rsp+78h] [rbp-88h] BYREF
  int v202; // [rsp+7Ch] [rbp-84h] BYREF
  int v203; // [rsp+80h] [rbp-80h] BYREF
  int v204; // [rsp+84h] [rbp-7Ch] BYREF
  int v205; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v206; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v207; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v208; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v209; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v210; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v211; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v212; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v213; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v214; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v215; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v216; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v217; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v218; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v219; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v220; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned int v221; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v222; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v223; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v224; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned int v225; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v226; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v227; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v228; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v229; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v230; // [rsp+ECh] [rbp-14h] BYREF
  unsigned int v231; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v232; // [rsp+F4h] [rbp-Ch] BYREF
  unsigned int v233; // [rsp+F8h] [rbp-8h] BYREF
  void *j; // [rsp+100h] [rbp+0h] BYREF
  int v235; // [rsp+108h] [rbp+8h] BYREF
  int v236; // [rsp+10Ch] [rbp+Ch] BYREF
  int v237; // [rsp+110h] [rbp+10h] BYREF
  int v238; // [rsp+114h] [rbp+14h] BYREF
  int v239; // [rsp+118h] [rbp+18h] BYREF
  int v240; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v241; // [rsp+120h] [rbp+20h] BYREF
  int v242; // [rsp+124h] [rbp+24h] BYREF
  int v243; // [rsp+128h] [rbp+28h] BYREF
  int v244; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v245; // [rsp+130h] [rbp+30h] BYREF
  int v246; // [rsp+134h] [rbp+34h] BYREF
  int v247; // [rsp+138h] [rbp+38h] BYREF
  int v248; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v249; // [rsp+140h] [rbp+40h] BYREF
  int v250; // [rsp+144h] [rbp+44h] BYREF
  int v251; // [rsp+148h] [rbp+48h] BYREF
  int v252; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v253; // [rsp+150h] [rbp+50h] BYREF
  int v254; // [rsp+154h] [rbp+54h] BYREF
  int v255; // [rsp+158h] [rbp+58h] BYREF
  int v256; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v257; // [rsp+160h] [rbp+60h] BYREF
  int v258; // [rsp+164h] [rbp+64h] BYREF
  int v259; // [rsp+168h] [rbp+68h] BYREF
  int v260; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v261; // [rsp+170h] [rbp+70h] BYREF
  int v262; // [rsp+174h] [rbp+74h] BYREF
  int v263; // [rsp+178h] [rbp+78h] BYREF
  int v264; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v265; // [rsp+180h] [rbp+80h] BYREF
  int v266; // [rsp+184h] [rbp+84h] BYREF
  int v267; // [rsp+188h] [rbp+88h] BYREF
  int v268; // [rsp+18Ch] [rbp+8Ch] BYREF
  int v269; // [rsp+190h] [rbp+90h] BYREF
  int v270; // [rsp+194h] [rbp+94h] BYREF
  int v271; // [rsp+198h] [rbp+98h] BYREF
  int v272; // [rsp+19Ch] [rbp+9Ch] BYREF
  int v273; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int *v275; // [rsp+1D8h] [rbp+D8h]
  struct _DXGKARG_QUERYADAPTERINFO v276; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v277; // [rsp+210h] [rbp+110h] BYREF
  int v278; // [rsp+218h] [rbp+118h]
  const wchar_t *v279; // [rsp+220h] [rbp+120h]
  BOOL *v280; // [rsp+228h] [rbp+128h]
  int v281; // [rsp+230h] [rbp+130h]
  int *v282; // [rsp+238h] [rbp+138h]
  int v283; // [rsp+240h] [rbp+140h]
  __int64 v284; // [rsp+248h] [rbp+148h]
  int v285; // [rsp+250h] [rbp+150h]
  _BYTE v286[40]; // [rsp+258h] [rbp+158h] BYREF
  __int64 v287; // [rsp+280h] [rbp+180h] BYREF
  int v288; // [rsp+288h] [rbp+188h]
  const wchar_t *v289; // [rsp+290h] [rbp+190h]
  unsigned int *v290; // [rsp+298h] [rbp+198h]
  int v291; // [rsp+2A0h] [rbp+1A0h]
  unsigned int *v292; // [rsp+2A8h] [rbp+1A8h]
  int v293; // [rsp+2B0h] [rbp+1B0h]
  __int64 v294; // [rsp+2B8h] [rbp+1B8h]
  int v295; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v296; // [rsp+2C8h] [rbp+1C8h]
  unsigned int *v297; // [rsp+2D0h] [rbp+1D0h]
  int v298; // [rsp+2D8h] [rbp+1D8h]
  int *v299; // [rsp+2E0h] [rbp+1E0h]
  int v300; // [rsp+2E8h] [rbp+1E8h]
  __int64 v301; // [rsp+2F0h] [rbp+1F0h]
  int v302; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v303; // [rsp+300h] [rbp+200h]
  unsigned int *v304; // [rsp+308h] [rbp+208h]
  int v305; // [rsp+310h] [rbp+210h]
  int *v306; // [rsp+318h] [rbp+218h]
  int v307; // [rsp+320h] [rbp+220h]
  __int64 v308; // [rsp+328h] [rbp+228h]
  int v309; // [rsp+330h] [rbp+230h]
  const wchar_t *v310; // [rsp+338h] [rbp+238h]
  unsigned int *v311; // [rsp+340h] [rbp+240h]
  int v312; // [rsp+348h] [rbp+248h]
  int *v313; // [rsp+350h] [rbp+250h]
  int v314; // [rsp+358h] [rbp+258h]
  __int64 v315; // [rsp+360h] [rbp+260h]
  int v316; // [rsp+368h] [rbp+268h]
  const wchar_t *v317; // [rsp+370h] [rbp+270h]
  unsigned int *v318; // [rsp+378h] [rbp+278h]
  int v319; // [rsp+380h] [rbp+280h]
  int *v320; // [rsp+388h] [rbp+288h]
  int v321; // [rsp+390h] [rbp+290h]
  __int64 v322; // [rsp+398h] [rbp+298h]
  int v323; // [rsp+3A0h] [rbp+2A0h]
  const wchar_t *v324; // [rsp+3A8h] [rbp+2A8h]
  unsigned int *v325; // [rsp+3B0h] [rbp+2B0h]
  int v326; // [rsp+3B8h] [rbp+2B8h]
  int *v327; // [rsp+3C0h] [rbp+2C0h]
  int v328; // [rsp+3C8h] [rbp+2C8h]
  __int64 v329; // [rsp+3D0h] [rbp+2D0h]
  int v330; // [rsp+3D8h] [rbp+2D8h]
  const wchar_t *v331; // [rsp+3E0h] [rbp+2E0h]
  unsigned int *v332; // [rsp+3E8h] [rbp+2E8h]
  int v333; // [rsp+3F0h] [rbp+2F0h]
  int *v334; // [rsp+3F8h] [rbp+2F8h]
  int v335; // [rsp+400h] [rbp+300h]
  __int64 v336; // [rsp+408h] [rbp+308h]
  int v337; // [rsp+410h] [rbp+310h]
  const wchar_t *v338; // [rsp+418h] [rbp+318h]
  unsigned int *v339; // [rsp+420h] [rbp+320h]
  int v340; // [rsp+428h] [rbp+328h]
  int *v341; // [rsp+430h] [rbp+330h]
  int v342; // [rsp+438h] [rbp+338h]
  __int64 v343; // [rsp+440h] [rbp+340h]
  int v344; // [rsp+448h] [rbp+348h]
  const wchar_t *v345; // [rsp+450h] [rbp+350h]
  unsigned int *v346; // [rsp+458h] [rbp+358h]
  int v347; // [rsp+460h] [rbp+360h]
  int *v348; // [rsp+468h] [rbp+368h]
  int v349; // [rsp+470h] [rbp+370h]
  __int64 v350; // [rsp+478h] [rbp+378h]
  int v351; // [rsp+480h] [rbp+380h]
  const wchar_t *v352; // [rsp+488h] [rbp+388h]
  unsigned int *v353; // [rsp+490h] [rbp+390h]
  int v354; // [rsp+498h] [rbp+398h]
  int *v355; // [rsp+4A0h] [rbp+3A0h]
  int v356; // [rsp+4A8h] [rbp+3A8h]
  __int64 v357; // [rsp+4B0h] [rbp+3B0h]
  int v358; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v359; // [rsp+4C0h] [rbp+3C0h]
  int *v360; // [rsp+4C8h] [rbp+3C8h]
  int v361; // [rsp+4D0h] [rbp+3D0h]
  int *v362; // [rsp+4D8h] [rbp+3D8h]
  int v363; // [rsp+4E0h] [rbp+3E0h]
  __int64 v364; // [rsp+4E8h] [rbp+3E8h]
  int v365; // [rsp+4F0h] [rbp+3F0h]
  const wchar_t *v366; // [rsp+4F8h] [rbp+3F8h]
  unsigned int *v367; // [rsp+500h] [rbp+400h]
  int v368; // [rsp+508h] [rbp+408h]
  int *v369; // [rsp+510h] [rbp+410h]
  int v370; // [rsp+518h] [rbp+418h]
  __int64 v371; // [rsp+520h] [rbp+420h]
  int v372; // [rsp+528h] [rbp+428h]
  const wchar_t *v373; // [rsp+530h] [rbp+430h]
  int *v374; // [rsp+538h] [rbp+438h]
  int v375; // [rsp+540h] [rbp+440h]
  int *v376; // [rsp+548h] [rbp+448h]
  int v377; // [rsp+550h] [rbp+450h]
  __int64 v378; // [rsp+558h] [rbp+458h]
  int v379; // [rsp+560h] [rbp+460h]
  const wchar_t *v380; // [rsp+568h] [rbp+468h]
  unsigned int *v381; // [rsp+570h] [rbp+470h]
  int v382; // [rsp+578h] [rbp+478h]
  int *v383; // [rsp+580h] [rbp+480h]
  int v384; // [rsp+588h] [rbp+488h]
  __int64 v385; // [rsp+590h] [rbp+490h]
  int v386; // [rsp+598h] [rbp+498h]
  const wchar_t *v387; // [rsp+5A0h] [rbp+4A0h]
  unsigned int *v388; // [rsp+5A8h] [rbp+4A8h]
  int v389; // [rsp+5B0h] [rbp+4B0h]
  int *v390; // [rsp+5B8h] [rbp+4B8h]
  int v391; // [rsp+5C0h] [rbp+4C0h]
  __int64 v392; // [rsp+5C8h] [rbp+4C8h]
  int v393; // [rsp+5D0h] [rbp+4D0h]
  const wchar_t *v394; // [rsp+5D8h] [rbp+4D8h]
  unsigned int *v395; // [rsp+5E0h] [rbp+4E0h]
  int v396; // [rsp+5E8h] [rbp+4E8h]
  int *v397; // [rsp+5F0h] [rbp+4F0h]
  int v398; // [rsp+5F8h] [rbp+4F8h]
  __int64 v399; // [rsp+600h] [rbp+500h]
  int v400; // [rsp+608h] [rbp+508h]
  const wchar_t *v401; // [rsp+610h] [rbp+510h]
  unsigned int *v402; // [rsp+618h] [rbp+518h]
  int v403; // [rsp+620h] [rbp+520h]
  int *v404; // [rsp+628h] [rbp+528h]
  int v405; // [rsp+630h] [rbp+530h]
  __int64 v406; // [rsp+638h] [rbp+538h]
  int v407; // [rsp+640h] [rbp+540h]
  const wchar_t *v408; // [rsp+648h] [rbp+548h]
  unsigned int *v409; // [rsp+650h] [rbp+550h]
  int v410; // [rsp+658h] [rbp+558h]
  int *v411; // [rsp+660h] [rbp+560h]
  int v412; // [rsp+668h] [rbp+568h]
  __int64 v413; // [rsp+670h] [rbp+570h]
  int v414; // [rsp+678h] [rbp+578h]
  const wchar_t *v415; // [rsp+680h] [rbp+580h]
  unsigned int *v416; // [rsp+688h] [rbp+588h]
  int v417; // [rsp+690h] [rbp+590h]
  int *v418; // [rsp+698h] [rbp+598h]
  int v419; // [rsp+6A0h] [rbp+5A0h]
  __int64 v420; // [rsp+6A8h] [rbp+5A8h]
  int v421; // [rsp+6B0h] [rbp+5B0h]
  const wchar_t *v422; // [rsp+6B8h] [rbp+5B8h]
  unsigned int *v423; // [rsp+6C0h] [rbp+5C0h]
  int v424; // [rsp+6C8h] [rbp+5C8h]
  int *v425; // [rsp+6D0h] [rbp+5D0h]
  int v426; // [rsp+6D8h] [rbp+5D8h]
  __int64 v427; // [rsp+6E0h] [rbp+5E0h]
  int v428; // [rsp+6E8h] [rbp+5E8h]
  const wchar_t *v429; // [rsp+6F0h] [rbp+5F0h]
  unsigned int *v430; // [rsp+6F8h] [rbp+5F8h]
  int v431; // [rsp+700h] [rbp+600h]
  int *v432; // [rsp+708h] [rbp+608h]
  int v433; // [rsp+710h] [rbp+610h]
  __int64 v434; // [rsp+718h] [rbp+618h]
  int v435; // [rsp+720h] [rbp+620h]
  const wchar_t *v436; // [rsp+728h] [rbp+628h]
  int *v437; // [rsp+730h] [rbp+630h]
  int v438; // [rsp+738h] [rbp+638h]
  int *v439; // [rsp+740h] [rbp+640h]
  int v440; // [rsp+748h] [rbp+648h]
  __int64 v441; // [rsp+750h] [rbp+650h]
  int v442; // [rsp+758h] [rbp+658h]
  const wchar_t *v443; // [rsp+760h] [rbp+660h]
  int *v444; // [rsp+768h] [rbp+668h]
  int v445; // [rsp+770h] [rbp+670h]
  int *v446; // [rsp+778h] [rbp+678h]
  int v447; // [rsp+780h] [rbp+680h]
  __int64 v448; // [rsp+788h] [rbp+688h]
  int v449; // [rsp+790h] [rbp+690h]
  const wchar_t *v450; // [rsp+798h] [rbp+698h]
  int *v451; // [rsp+7A0h] [rbp+6A0h]
  int v452; // [rsp+7A8h] [rbp+6A8h]
  int *v453; // [rsp+7B0h] [rbp+6B0h]
  int v454; // [rsp+7B8h] [rbp+6B8h]
  __int64 v455; // [rsp+7C0h] [rbp+6C0h]
  int v456; // [rsp+7C8h] [rbp+6C8h]
  const wchar_t *v457; // [rsp+7D0h] [rbp+6D0h]
  unsigned int *v458; // [rsp+7D8h] [rbp+6D8h]
  int v459; // [rsp+7E0h] [rbp+6E0h]
  int *v460; // [rsp+7E8h] [rbp+6E8h]
  int v461; // [rsp+7F0h] [rbp+6F0h]
  __int64 v462; // [rsp+7F8h] [rbp+6F8h]
  int v463; // [rsp+800h] [rbp+700h]
  const wchar_t *v464; // [rsp+808h] [rbp+708h]
  unsigned int *v465; // [rsp+810h] [rbp+710h]
  int v466; // [rsp+818h] [rbp+718h]
  int *v467; // [rsp+820h] [rbp+720h]
  int v468; // [rsp+828h] [rbp+728h]
  __int64 v469; // [rsp+830h] [rbp+730h]
  int v470; // [rsp+838h] [rbp+738h]
  const wchar_t *v471; // [rsp+840h] [rbp+740h]
  unsigned int *v472; // [rsp+848h] [rbp+748h]
  int v473; // [rsp+850h] [rbp+750h]
  int *v474; // [rsp+858h] [rbp+758h]
  int v475; // [rsp+860h] [rbp+760h]
  __int64 v476; // [rsp+868h] [rbp+768h]
  int v477; // [rsp+870h] [rbp+770h]
  const wchar_t *v478; // [rsp+878h] [rbp+778h]
  unsigned int *v479; // [rsp+880h] [rbp+780h]
  int v480; // [rsp+888h] [rbp+788h]
  int *v481; // [rsp+890h] [rbp+790h]
  int v482; // [rsp+898h] [rbp+798h]
  __int64 v483; // [rsp+8A0h] [rbp+7A0h]
  int v484; // [rsp+8A8h] [rbp+7A8h]
  const wchar_t *v485; // [rsp+8B0h] [rbp+7B0h]
  unsigned int *v486; // [rsp+8B8h] [rbp+7B8h]
  int v487; // [rsp+8C0h] [rbp+7C0h]
  int *v488; // [rsp+8C8h] [rbp+7C8h]
  int v489; // [rsp+8D0h] [rbp+7D0h]
  __int64 v490; // [rsp+8D8h] [rbp+7D8h]
  int v491; // [rsp+8E0h] [rbp+7E0h]
  const wchar_t *v492; // [rsp+8E8h] [rbp+7E8h]
  unsigned int *v493; // [rsp+8F0h] [rbp+7F0h]
  int v494; // [rsp+8F8h] [rbp+7F8h]
  int *v495; // [rsp+900h] [rbp+800h]
  int v496; // [rsp+908h] [rbp+808h]
  __int64 v497; // [rsp+910h] [rbp+810h]
  int v498; // [rsp+918h] [rbp+818h]
  const wchar_t *v499; // [rsp+920h] [rbp+820h]
  unsigned int *v500; // [rsp+928h] [rbp+828h]
  int v501; // [rsp+930h] [rbp+830h]
  int *v502; // [rsp+938h] [rbp+838h]
  int v503; // [rsp+940h] [rbp+840h]
  __int64 v504; // [rsp+948h] [rbp+848h]
  int v505; // [rsp+950h] [rbp+850h]
  const wchar_t *v506; // [rsp+958h] [rbp+858h]
  unsigned int *v507; // [rsp+960h] [rbp+860h]
  int v508; // [rsp+968h] [rbp+868h]
  int *v509; // [rsp+970h] [rbp+870h]
  int v510; // [rsp+978h] [rbp+878h]
  __int64 v511; // [rsp+980h] [rbp+880h]
  int v512; // [rsp+988h] [rbp+888h]
  const wchar_t *v513; // [rsp+990h] [rbp+890h]
  unsigned int *v514; // [rsp+998h] [rbp+898h]
  int v515; // [rsp+9A0h] [rbp+8A0h]
  int *v516; // [rsp+9A8h] [rbp+8A8h]
  int v517; // [rsp+9B0h] [rbp+8B0h]
  __int64 v518; // [rsp+9B8h] [rbp+8B8h]
  int v519; // [rsp+9C0h] [rbp+8C0h]
  const wchar_t *v520; // [rsp+9C8h] [rbp+8C8h]
  unsigned int *v521; // [rsp+9D0h] [rbp+8D0h]
  int v522; // [rsp+9D8h] [rbp+8D8h]
  int *v523; // [rsp+9E0h] [rbp+8E0h]
  int v524; // [rsp+9E8h] [rbp+8E8h]
  __int64 v525; // [rsp+9F0h] [rbp+8F0h]
  int v526; // [rsp+9F8h] [rbp+8F8h]
  const wchar_t *v527; // [rsp+A00h] [rbp+900h]
  unsigned int *v528; // [rsp+A08h] [rbp+908h]
  int v529; // [rsp+A10h] [rbp+910h]
  int *v530; // [rsp+A18h] [rbp+918h]
  int v531; // [rsp+A20h] [rbp+920h]
  __int64 v532; // [rsp+A28h] [rbp+928h]
  int v533; // [rsp+A30h] [rbp+930h]
  const wchar_t *v534; // [rsp+A38h] [rbp+938h]
  unsigned int *v535; // [rsp+A40h] [rbp+940h]
  int v536; // [rsp+A48h] [rbp+948h]
  int *v537; // [rsp+A50h] [rbp+950h]
  int v538; // [rsp+A58h] [rbp+958h]
  __int64 v539; // [rsp+A60h] [rbp+960h]
  int v540; // [rsp+A68h] [rbp+968h]
  const wchar_t *v541; // [rsp+A70h] [rbp+970h]
  unsigned int *v542; // [rsp+A78h] [rbp+978h]
  int v543; // [rsp+A80h] [rbp+980h]
  int *v544; // [rsp+A88h] [rbp+988h]
  int v545; // [rsp+A90h] [rbp+990h]
  __int64 v546; // [rsp+A98h] [rbp+998h]
  int v547; // [rsp+AA0h] [rbp+9A0h]
  const wchar_t *v548; // [rsp+AA8h] [rbp+9A8h]
  unsigned int *v549; // [rsp+AB0h] [rbp+9B0h]
  int v550; // [rsp+AB8h] [rbp+9B8h]
  int *v551; // [rsp+AC0h] [rbp+9C0h]
  int v552; // [rsp+AC8h] [rbp+9C8h]
  __int64 v553; // [rsp+AD0h] [rbp+9D0h]
  int v554; // [rsp+AD8h] [rbp+9D8h]
  const wchar_t *v555; // [rsp+AE0h] [rbp+9E0h]
  unsigned int *v556; // [rsp+AE8h] [rbp+9E8h]
  int v557; // [rsp+AF0h] [rbp+9F0h]
  int *v558; // [rsp+AF8h] [rbp+9F8h]
  int v559; // [rsp+B00h] [rbp+A00h]
  __int64 v560; // [rsp+B08h] [rbp+A08h]
  int v561; // [rsp+B10h] [rbp+A10h]
  _BYTE v562[296]; // [rsp+B18h] [rbp+A18h] BYREF
  char v563[528]; // [rsp+C40h] [rbp+B40h] BYREF

  if ( !*((_BYTE *)this + 2309) )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 4304LL;
    WdLogEvent5_WdWarning(v4);
    return 0LL;
  }
  v273 = -1;
  v6 = 0;
  v229 = -1;
  v235 = 2000;
  v232 = 2000;
  v236 = 80;
  v206 = 80;
  v237 = 15000;
  v207 = 15000;
  v238 = 35000;
  v208 = 35000;
  v239 = 2000;
  v210 = 2000;
  v240 = 50000;
  v211 = 50000;
  v241 = 100000;
  v212 = 100000;
  v246 = 300000;
  v231 = 300000;
  v247 = 17000;
  v230 = 17000;
  v242 = 200;
  v205 = 200;
  v243 = 200;
  v209 = 200;
  v245 = 100;
  v244 = 100;
  v248 = 25000;
  v233 = 25000;
  v249 = 2000;
  v213 = 2000;
  v250 = 300;
  v194 = 300;
  v251 = 700;
  v195 = 700;
  v252 = 900;
  v196 = 900;
  v253 = 500;
  v197 = 500;
  v254 = 3;
  v204 = 3;
  v255 = 0;
  v202 = 0;
  v256 = 0;
  v203 = 0;
  v257 = 80;
  v214 = 80;
  v258 = 80000;
  v216 = 80000;
  v259 = 140000;
  v218 = 140000;
  v260 = 200000;
  v220 = 200000;
  v261 = 250000;
  v221 = 250000;
  v262 = 250000;
  v222 = 250000;
  v263 = 10000;
  v215 = 10000;
  v264 = 60000;
  v217 = 60000;
  v265 = 60000;
  v219 = 60000;
  v266 = 15000;
  v223 = 15000;
  v267 = 30000;
  v224 = 30000;
  v268 = 80;
  v225 = 80;
  v269 = 15000;
  v226 = 15000;
  v270 = 30000;
  v227 = 30000;
  v271 = 80000;
  v228 = 80000;
  v201 = 1;
  v193 = 1;
  v199 = 1;
  v191 = 1;
  v198 = 0;
  v190 = 0;
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 2400 )
  {
    v193 = (*(_DWORD *)(v7 + 1836) & 0x1000) == 0;
  }
  else
  {
    v277 = 0LL;
    v280 = &v193;
    v278 = 288;
    v282 = &v201;
    v279 = L"UseSelfRefreshVRAMInS3";
    v281 = 67108868;
    v283 = 4;
    v284 = 0LL;
    v285 = 0;
    memset(v286, 0, sizeof(v286));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v277, 0LL, 0LL);
  }
  v287 = 0LL;
  v289 = L"EnableRuntimePowerManagement";
  v290 = &v191;
  v292 = &v199;
  v296 = L"DisableDevicePowerRequired";
  v297 = &v190;
  v299 = (int *)&v198;
  v303 = L"DefaultLatencyToleranceOther";
  v304 = &v229;
  v306 = &v273;
  v310 = L"DefaultExpectedResidency";
  v311 = &v232;
  v313 = &v235;
  v317 = L"DefaultLatencyToleranceIdle0";
  v318 = &v206;
  v320 = &v236;
  v324 = L"DefaultLatencyToleranceIdle1";
  v325 = &v207;
  v327 = &v237;
  v331 = L"DefaultLatencyToleranceNoContext";
  v332 = &v208;
  v334 = &v238;
  v338 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v339 = &v210;
  v341 = &v239;
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
  v345 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v346 = &v211;
  v348 = &v240;
  v352 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v353 = &v212;
  v355 = &v241;
  v359 = L"DefaultLatencyToleranceTimerPeriod";
  v360 = &v205;
  v362 = &v242;
  v366 = L"DefaultIdleThresholdIdle0";
  v367 = &v209;
  v369 = &v243;
  v373 = L"DefaultIdleThresholdIdle0MonitorOff";
  v374 = &v244;
  v376 = &v245;
  v380 = L"MonitorLatencyTolerance";
  v381 = &v231;
  v383 = &v246;
  v387 = L"MonitorRefreshLatencyTolerance";
  v388 = &v230;
  v390 = &v247;
  v394 = L"DefaultPowerNotRequiredTimeout";
  v395 = &v233;
  v397 = &v248;
  v347 = 67108868;
  v349 = 4;
  v350 = 0LL;
  v351 = 288;
  v354 = 67108868;
  v356 = 4;
  v357 = 0LL;
  v358 = 288;
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
  v401 = L"DefaultActiveIdleThreshold";
  v402 = &v213;
  v404 = &v249;
  v408 = L"ulow";
  v409 = &v194;
  v411 = &v250;
  v415 = L"uhigh";
  v416 = &v195;
  v418 = &v251;
  v422 = L"uglitch";
  v423 = &v196;
  v425 = &v252;
  v429 = L"uideal";
  v430 = &v197;
  v432 = &v253;
  v436 = L"lowdebounce";
  v437 = &v204;
  v439 = &v254;
  v443 = L"EnablePODebounce";
  v444 = &v202;
  v446 = &v255;
  v450 = L"DisablePStateManagement";
  v451 = &v203;
  v453 = &v256;
  v405 = 4;
  v406 = 0LL;
  v407 = 288;
  v410 = 67108868;
  v412 = 4;
  v413 = 0LL;
  v414 = 288;
  v417 = 67108868;
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
  v457 = L"DefaultD3TransitionLatencyActivelyUsed";
  v458 = &v214;
  v460 = &v257;
  v464 = L"DefaultD3TransitionLatencyIdleShortTime";
  v465 = &v216;
  v467 = &v258;
  v471 = L"DefaultD3TransitionLatencyIdleLongTime";
  v472 = &v218;
  v474 = &v259;
  v478 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v479 = &v220;
  v481 = &v260;
  v485 = L"DefaultD3TransitionLatencyIdleNoContext";
  v486 = &v221;
  v488 = &v261;
  v492 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v493 = &v222;
  v495 = &v262;
  v499 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v500 = &v215;
  v502 = &v263;
  v506 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v507 = &v217;
  v509 = &v264;
  v513 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v459 = 67108868;
  v461 = 4;
  v462 = 0LL;
  v463 = 288;
  v466 = 67108868;
  v468 = 4;
  v469 = 0LL;
  v470 = 288;
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
  v514 = &v219;
  v517 = 4;
  v516 = &v265;
  v518 = 0LL;
  v520 = L"DefaultLatencyToleranceMemory";
  v521 = &v223;
  v523 = &v266;
  v519 = 288;
  v527 = L"DefaultLatencyToleranceMemoryNoContext";
  v528 = &v224;
  v530 = &v267;
  v534 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v535 = &v225;
  v537 = &v268;
  v541 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v542 = &v226;
  v544 = &v269;
  v548 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v549 = &v227;
  v551 = &v270;
  v555 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v556 = &v228;
  v558 = &v271;
  v522 = 67108868;
  v524 = 4;
  v525 = 0LL;
  v526 = 288;
  v529 = 67108868;
  v531 = 4;
  v532 = 0LL;
  v533 = 288;
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
  v554 = 288;
  v557 = 67108868;
  v559 = 4;
  v560 = 0LL;
  v561 = 0;
  memset(v562, 0, 0x28uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v287, 0LL, 0LL);
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 2400
    && (int)DpiGetPnpRegistryKeyName(*((_QWORD *)this + 24), 2LL, &j) >= 0
    && (int)RtlStringCbCopyW(v563, 0x208uLL, *((char **)j + 1)) >= 0 )
  {
    v10 = (unsigned __int16 *)v563;
    v8 = 260LL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v8;
    }
    while ( v8 );
    v11 = v8 ? 260 - v8 : 0LL;
    if ( v8 )
    {
      v8 = (__int64)&v563[2 * v11];
      v12 = 260 - v11;
      if ( 260 != v11 )
      {
        v9 = 2147483646LL;
        v13 = (char *)L"\\DxgkSettings" - v8;
        do
        {
          if ( !v9 )
            break;
          v14 = *(_WORD *)&v13[v8];
          if ( !v14 )
            break;
          *(_WORD *)v8 = v14;
          --v9;
          v8 += 2LL;
          --v12;
        }
        while ( v12 );
      }
      v15 = (_WORD *)(v8 - 2);
      if ( v12 )
        v15 = (_WORD *)v8;
      *v15 = 0;
      if ( v12 )
      {
        v277 = 0LL;
        v278 = 288;
        v280 = &v193;
        v279 = L"UseSelfRefreshVRAMInS3";
        v281 = 67108868;
        v282 = &v201;
        v283 = 4;
        v284 = 0LL;
        v285 = 0;
        memset(v286, 0, sizeof(v286));
        RtlQueryRegistryValuesEx(0LL, v563, &v277, 0LL, 0LL);
      }
    }
  }
  if ( !v191 )
    return 0LL;
  v16 = !v193;
  *((_BYTE *)this + 180) = v190 != 0;
  *((_BYTE *)this + 183) = !v16;
  v17 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v18 = *(_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL);
  if ( v18 < 0x5019 || *((int *)this + 526) < 0x2000 )
    v19 = 1;
  else
    v19 = *((_DWORD *)this + 62);
  v191 = v19;
  LODWORD(v192) = 0;
  if ( !v19 )
    goto LABEL_216;
  for ( i = 0; i < v19; LODWORD(v192) = i )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    ObjectAttributes.Length = 6;
    LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
    *(_QWORD *)&ObjectAttributes.Attributes = &v562[4 * i + 40];
    if ( DXGADAPTER::IsDxgmms2(this) && v18 >= 0x5019 )
    {
      LODWORD(ObjectAttributes.ObjectName) = 4;
      ObjectAttributes.RootDirectory = &v192;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v21, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes, v22);
    v24 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v187 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v187 + 24) = this;
      *(_QWORD *)(v187 + 32) = v24;
      WdLogEvent5_WdError(v187);
      return (unsigned int)v24;
    }
    v6 += *(_DWORD *)&v562[4 * (unsigned int)v192 + 40];
    i = v192 + 1;
  }
  if ( !v6 )
  {
LABEL_216:
    v188 = WdLogNewEntry5_WdWarning(v17, v8, v9);
    *(_QWORD *)(v188 + 24) = 4510LL;
    WdLogEvent5_WdWarning(v188);
    return 0LL;
  }
  if ( v6 > 0xFFFF )
  {
    v25 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v25 + 24) = v6;
    WdLogEvent5_WdError(v25);
    LODWORD(v26) = -1073741811;
    goto LABEL_211;
  }
  *((_DWORD *)this + 660) = v6;
  v27 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v27 = -1LL;
  v28 = operator new[](v27, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 312) = v28;
  if ( !v28
    || (memset(v28, 0, 520LL * v6), v31 = operator new[](312 * v6 + 136, 0x4B677844u, PagedPool), (v32 = v31) == 0LL) )
  {
    v30 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdLowResource(v30);
    LODWORD(v26) = -1073741801;
    goto LABEL_211;
  }
  memset(v31, 0, 312 * v6 + 136);
  *(_DWORD *)v32 = 2;
  v32[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  *((_DWORD *)v32 + 18) = v6;
  v32[2] = DxgkPowerRuntimeComponentActiveCallback;
  v32[8] = this;
  v32[3] = DxgkPowerRuntimeComponentIdleCallback;
  v32[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v32[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v32[7] = DxgkPowerRuntimeControlCallback;
  memset(&v276, 0, sizeof(v276));
  v276.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v33 = (__int64)&v32[7 * v6 + 10];
  v276.InputDataSize = 4;
  v276.OutputDataSize = 336;
  v34 = 0;
  v199 = 0;
  v198 = 0;
  v35 = 0;
  j = (void *)(v33 + 192LL * v6);
  v36 = 0LL;
  v37 = 0LL;
  v190 = 0;
  do
  {
    v16 = *(_DWORD *)&v562[4 * v37 + 40] == 0;
    v38 = 0;
    *((_WORD *)this + v37 + 1256) = v35;
    v200 = 0;
    v275 = (unsigned int *)&v562[4 * v37 + 40];
    if ( !v16 )
    {
      while ( 1 )
      {
        v272 = v38 + v36;
        v39 = (char *)&v32[7 * v35];
        v276.pInputData = &v272;
        v40 = *((_QWORD *)this + 312) + 8LL;
        v192 = 520LL * v35;
        v276.pOutputData = (void *)(v40 + v192);
        v41 = DXGADAPTER::DdiQueryAdapterInfo(this, &v276, v36);
        v26 = v41;
        if ( v41 < 0 )
        {
          v77 = WdLogNewEntry5_WdError(v42);
          *(_QWORD *)(v77 + 24) = v35;
          *(_QWORD *)(v77 + 32) = v26;
          WdLogEvent5_WdError(v77);
          operator delete[](v32);
          goto LABEL_211;
        }
        v44 = v192;
        v45 = v200;
        *(_DWORD *)(v192 + *((_QWORD *)this + 312)) = v35;
        *(_WORD *)(v44 + *((_QWORD *)this + 312) + 4) = v45;
        v46 = v190;
        *(_WORD *)(v44 + *((_QWORD *)this + 312) + 6) = v190;
        v26 = v44 + *((_QWORD *)this + 312) + 8LL;
        *((_DWORD *)v39 + 27) = *(_DWORD *)v26;
        if ( (unsigned int)(*(_DWORD *)v26 - 1) > 7 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdError(v44);
          v76[3] = v35;
          v76[4] = *(unsigned int *)v26;
          v76[5] = 0LL;
          WdLogEvent5_WdError(v76);
          LODWORD(v26) = -1073741811;
          goto LABEL_210;
        }
        *((_OWORD *)v39 + 5) = *(_OWORD *)(v26 + 212);
        *(_BYTE *)(v26 + 267) = 0;
        v47 = *(_DWORD *)(v26 + 208);
        if ( v47 >= 0x20 )
        {
          v51 = WdLogNewEntry5_WdError(v44);
          *(_QWORD *)(v51 + 32) = 2LL;
          goto LABEL_118;
        }
        if ( (v47 & 4) != 0 )
          *((_QWORD *)v39 + 12) |= 1uLL;
        if ( !v202 )
          *((_QWORD *)v39 + 12) |= 2uLL;
        if ( (*(_DWORD *)(v26 + 208) & 0x10) != 0 )
        {
          if ( ((*(_DWORD *)(v26 + 200) - 3) & 0xFFFFFFFB) != 0 )
          {
            v51 = WdLogNewEntry5_WdError(v44);
            *(_QWORD *)(v51 + 32) = 4659LL;
            goto LABEL_118;
          }
          if ( *(_DWORD *)v26 != 2 )
          {
            v51 = WdLogNewEntry5_WdError(v44);
            *(_QWORD *)(v51 + 32) = 4665LL;
            goto LABEL_118;
          }
          if ( *(_QWORD *)(v26 + 32) )
          {
            v51 = WdLogNewEntry5_WdError(v44);
            *(_QWORD *)(v51 + 32) = 4671LL;
            goto LABEL_118;
          }
          if ( *(_DWORD *)(v26 + 268) )
            break;
        }
        if ( *(_DWORD *)(v26 + 268) > 0x10u )
        {
          v51 = WdLogNewEntry5_WdError(v44);
          *(_QWORD *)(v51 + 32) = 3LL;
          goto LABEL_118;
        }
        v48 = *(_DWORD *)(v26 + 200);
        if ( v48 == 4 )
        {
          if ( *((_DWORD *)this + 662) != -1 )
          {
            v51 = WdLogNewEntry5_WdError(v44);
            *(_QWORD *)(v51 + 32) = 4725LL;
            goto LABEL_118;
          }
          *((_DWORD *)this + 662) = v35;
        }
        else if ( v48 == 6 )
        {
          if ( *((_DWORD *)this + 661) == -1 )
          {
            v50 = *((_QWORD *)this + 312) + v44;
            *((_QWORD *)this + 357) = v50;
            *((_DWORD *)this + 661) = v35;
            if ( *(_DWORD *)v26 == 2 )
            {
              *((_BYTE *)this + 2936) = 1;
            }
            else if ( *(_DWORD *)v26 > 2u )
            {
              v51 = WdLogNewEntry5_WdError(v50);
              *(_QWORD *)(v51 + 32) = 4715LL;
LABEL_118:
              *(_QWORD *)(v51 + 24) = v35;
              WdLogEvent5_WdError(v51);
              LODWORD(v26) = -1073741811;
              operator delete[](v32);
              goto LABEL_211;
            }
          }
          else
          {
            v49 = WdLogNewEntry5_WdWarning(v44, v46, v43);
            *(_QWORD *)(v49 + 24) = v35;
            *(_QWORD *)(v49 + 32) = 4699LL;
            WdLogEvent5_WdWarning(v49);
          }
        }
        v52 = j;
        *((_DWORD *)v39 + 30) = *(_DWORD *)(v26 + 268);
        memmove(v52, (const void *)(v26 + 272), 4LL * *(unsigned int *)(v26 + 268));
        v53 = (char *)j;
        *((_QWORD *)v39 + 16) = j;
        v54 = *(unsigned int *)(v26 + 268);
        *((_QWORD *)v39 + 14) = v33;
        v55 = 0;
        for ( j = &v53[4 * v54]; v55 < *(_DWORD *)v26; ++v55 )
        {
          v56 = *(_QWORD *)(v26 + 24LL * v55 + 8);
          v57 = (unsigned int *)(v26 + 24LL * v55);
          *(_QWORD *)v33 = v56;
          v58 = *((_QWORD *)v57 + 2);
          *(_QWORD *)(v33 + 8) = v58;
          v59 = v57[6];
          *(_DWORD *)(v33 + 16) = v59;
          if ( *((_QWORD *)v57 + 1) == -1LL )
            v56 = -1LL;
          *(_QWORD *)v33 = v56;
          if ( *((_QWORD *)v57 + 2) == -1LL )
            v58 = -1LL;
          *(_QWORD *)(v33 + 8) = v58;
          if ( v57[6] == -1 )
            v59 = -1;
          *(_DWORD *)(v33 + 16) = v59;
          if ( v55 )
          {
            v61 = v57[6];
            if ( v61 != -1 )
            {
              v62 = *(unsigned int *)(v26 + 24 * (v55 - 1 + 1LL));
              if ( (_DWORD)v62 != -1 && v61 > (unsigned int)v62 )
              {
                v74 = WdLogNewEntry5_WdError(v62);
                *(_QWORD *)(v74 + 24) = v35;
                *(_QWORD *)(v74 + 32) = 5LL;
                WdLogEvent5_WdError(v74);
                LODWORD(v26) = -1073741811;
                goto LABEL_210;
              }
            }
            v63 = *((_QWORD *)v57 + 1);
            if ( v63 != -1LL )
            {
              v64 = *(_QWORD *)(v26 + 24LL * (v55 - 1) + 8);
              if ( v64 != -1LL && v63 < v64 )
              {
                v75 = WdLogNewEntry5_WdError(v64);
                *(_QWORD *)(v75 + 24) = v35;
                *(_QWORD *)(v75 + 32) = 6LL;
                WdLogEvent5_WdError(v75);
                LODWORD(v26) = -1073741811;
                goto LABEL_210;
              }
            }
          }
          else
          {
            if ( ((*(_QWORD *)(v26 + 8) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
              || ((*(_QWORD *)(v26 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            {
              v73 = WdLogNewEntry5_WdError(v58);
              *(_QWORD *)(v73 + 24) = v35;
              *(_QWORD *)(v73 + 32) = 3LL;
              WdLogEvent5_WdError(v73);
              LODWORD(v26) = -1073741811;
              goto LABEL_210;
            }
            if ( !v57[6] )
            {
              v60 = WdLogNewEntry5_WdError(v58);
              *(_QWORD *)(v60 + 24) = v35;
              *(_QWORD *)(v60 + 32) = 4LL;
              WdLogEvent5_WdError(v60);
              LODWORD(v26) = -1073741811;
              goto LABEL_210;
            }
          }
          v33 += 24LL;
        }
        v65 = *(_DWORD *)(v26 + 200);
        ++v35;
        v36 = v199;
        v38 = ++v200;
        v66 = v198 + 1;
        if ( v65 )
          v66 = v198;
        v34 = v66;
        v198 = v66;
        if ( v38 >= *v275 )
          goto LABEL_93;
      }
      v51 = WdLogNewEntry5_WdError(v44);
      *(_QWORD *)(v51 + 32) = 4677LL;
      goto LABEL_118;
    }
LABEL_93:
    v36 = (unsigned int)(v36 + 0x10000);
    v37 = v190 + 1;
    v199 = v36;
    v190 = v37;
  }
  while ( (unsigned int)v37 < v191 );
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 1300 || !v34 || v203 )
    goto LABEL_146;
  if ( v194 > 0x3E8
    || (v67 = v195, v195 > 0x3E8)
    || v196 > 0x3E8
    || v197 > 0x3E8
    || v194 >= v197
    || v197 >= v195
    || v195 >= v196 )
  {
    v113 = (_QWORD *)WdLogNewEntry5_WdError(v67);
    v113[3] = v194;
    v113[4] = v195;
    v113[5] = v196;
    v113[6] = v197;
    WdLogEvent5_WdError(v113);
    LODWORD(v26) = -1073741811;
    goto LABEL_210;
  }
  v69 = 248LL * v34;
  v276.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v276.OutputDataSize = 136;
  if ( !is_mul_ok(v34, 0xF8uLL) )
    v69 = v68;
  v70 = operator new[](v69, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 476) = v70;
  *((_DWORD *)this + 954) = v34;
  if ( !v70 )
  {
    v72 = WdLogNewEntry5_WdLowResource(v71);
    *(_QWORD *)(v72 + 24) = this;
    WdLogEvent5_WdLowResource(v72);
    LODWORD(v26) = -1073741801;
    goto LABEL_210;
  }
  memset(v70, 0, 248LL * v34);
  v78 = 0;
  for ( k = 0LL; v78 < *((_DWORD *)this + 660); ++v78 )
  {
    v80 = *((_QWORD *)this + 312) + 520LL * v78;
    if ( !*(_DWORD *)(v80 + 208) )
    {
      *(_QWORD *)(v80 + 512) = *((_QWORD *)this + 476) + 248LL * (unsigned int)k;
      k = (unsigned int)(k + 1);
    }
  }
  v81 = 0;
  *((_DWORD *)this + 1006) = v196;
  *((_DWORD *)this + 1007) = v195;
  *((_DWORD *)this + 1008) = v194;
  *((_DWORD *)this + 1009) = v197;
  *((_DWORD *)this + 1010) = v204;
  LODWORD(v192) = 0;
  v82 = 0LL;
  while ( 1 )
  {
    v83 = *(_QWORD *)(520 * v82 + *((_QWORD *)this + 312) + 512);
    if ( v83 )
      break;
LABEL_129:
    LODWORD(v192) = ++v81;
    v82 = v81;
    if ( v81 >= v6 )
      goto LABEL_136;
  }
  v276.pOutputData = *(void **)(520 * v82 + *((_QWORD *)this + 312) + 512);
  v276.pInputData = &v192;
  v84 = DXGADAPTER::DdiQueryAdapterInfo(this, &v276, k);
  v89 = v84;
  if ( v84 >= 0 )
  {
    v90 = v192;
    *(_QWORD *)(v83 + 136) = this;
    *(_DWORD *)(v83 + 144) = v90;
    *(_QWORD *)(v83 + 152) = v83;
    KeInitializeSpinLock((PKSPIN_LOCK)(v83 + 160));
    *(_BYTE *)(v83 + 240) = 0;
    *(_DWORD *)(v83 + 244) = -1;
    v81 = v192;
    goto LABEL_129;
  }
  v91 = WdLogNewEntry5_WdTrace(v86, v85, v87, v88);
  v92 = 0;
  *(_QWORD *)(v91 + 24) = (unsigned int)v192;
  for ( *(_QWORD *)(v91 + 32) = v89; v92 < *((_DWORD *)this + 660); ++v92 )
  {
    v93 = 520LL * v92;
    v94 = *((_QWORD *)this + 312);
    if ( !*(_DWORD *)(v93 + v94 + 208) )
      *(_QWORD *)(v93 + v94 + 512) = 0LL;
  }
  v95 = (void *)*((_QWORD *)this + 476);
  *((_DWORD *)this + 954) = 0;
  operator delete[](v95);
  *((_QWORD *)this + 476) = 0LL;
LABEL_136:
  v96 = *((_DWORD *)this + 954);
  v97 = 0;
  if ( v96 )
  {
    v98 = *((_QWORD *)this + 476);
    do
    {
      v99 = v97;
      v100 = 248LL * v97;
      v101 = *(_DWORD *)(v100 + v98);
      v102 = *(unsigned int *)(v100 + v98 + 144);
      if ( v101 > 0x20 )
      {
        v112 = WdLogNewEntry5_WdError(v97);
        *(_QWORD *)(v112 + 24) = v102;
        WdLogEvent5_WdError(v112);
        LODWORD(v26) = -1073741811;
        goto LABEL_210;
      }
      v103 = 0;
      if ( v101 )
      {
        v104 = 62LL * v97;
        do
        {
          v105 = *(_DWORD *)(v98 + 4 * (v104 + v103) + 4);
          if ( !v105 )
          {
            v111 = WdLogNewEntry5_WdError(v99);
            *(_QWORD *)(v111 + 32) = v103;
            *(_QWORD *)(v111 + 24) = v102;
            WdLogEvent5_WdError(v111);
            LODWORD(v26) = -1073741811;
            goto LABEL_210;
          }
          if ( v103 )
          {
            v99 = v104 + v103 - 1;
            if ( v105 > *(_DWORD *)(v98 + 4 * v99 + 4) )
            {
              v110 = (_QWORD *)WdLogNewEntry5_WdError(v99);
              v110[4] = v103;
              v110[3] = v102;
              v110[5] = v103 - 1;
              WdLogEvent5_WdError(v110);
              LODWORD(v26) = -1073741811;
              goto LABEL_210;
            }
          }
          ++v103;
        }
        while ( v103 < v101 );
      }
      ++v97;
    }
    while ( v97 < v96 );
  }
LABEL_146:
  v106 = (ADAPTER_RENDER *)*((_QWORD *)this + 308);
  *((_DWORD *)this + 732) = v205;
  if ( v106 )
  {
    v107 = ADAPTER_RENDER::InitializePowerManagement(v106);
    v26 = v107;
    if ( v107 < 0 )
    {
      v109 = WdLogNewEntry5_WdError(v108);
      *(_QWORD *)(v109 + 32) = 7LL;
      goto LABEL_209;
    }
  }
  v114 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 307);
  if ( v114 )
  {
    v115 = ADAPTER_DISPLAY::InitializePowerManagement(v114);
    v26 = v115;
    if ( v115 < 0 )
    {
LABEL_155:
      v109 = WdLogNewEntry5_WdError(v116);
      *(_QWORD *)(v109 + 32) = 8LL;
      goto LABEL_209;
    }
  }
  v117 = PoFxRegisterDevice(*((_QWORD *)this + 24), v32, (char *)this + 2504);
  v26 = v117;
  if ( v117 < 0 )
  {
    v109 = WdLogNewEntry5_WdError(v118);
    goto LABEL_209;
  }
  KeInitializeEvent((PRKEVENT)this + 111, SynchronizationEvent, 0);
  *((_QWORD *)this + 369) = (char *)this + 2944;
  *((_QWORD *)this + 368) = (char *)this + 2944;
  *((_BYTE *)this + 2932) = 0;
  TimeIncrement = KeQueryTimeIncrement();
  memset((char *)this + 2688, 0, 0x60uLL);
  v120 = v207;
  *((_QWORD *)this + 336) = 10LL * v206;
  v121 = 5 * v120;
  v122 = v208;
  *((_QWORD *)this + 338) = 2 * v121;
  *((_QWORD *)this + 340) = 10 * v122;
  v123 = (unsigned int)(10000 * (unsigned __int64)v209 / TimeIncrement);
  v124 = v210;
  *((_QWORD *)this + 337) = v123;
  *((_QWORD *)this + 343) = v123;
  v125 = 5 * v124;
  v126 = v211;
  *((_QWORD *)this + 342) = 2 * v125;
  v127 = 5 * v126;
  v128 = v212;
  *((_QWORD *)this + 344) = 2 * v127;
  v129 = 5 * v128;
  v130 = v213;
  *((_QWORD *)this + 346) = 2 * v129;
  *((_QWORD *)this + 348) = (char *)this + 2688;
  v131 = 5 * v130;
  v132 = v214;
  *((_QWORD *)this + 380) = 2 * v131;
  v133 = 10000LL * v215;
  *((_QWORD *)this + 349) = 10 * v132;
  v134 = v216;
  *((_QWORD *)this + 350) = (unsigned int)(v133 / TimeIncrement);
  v135 = 10000LL * v217;
  *((_QWORD *)this + 351) = 10 * v134;
  v136 = v218;
  *((_QWORD *)this + 352) = (unsigned int)(v135 / TimeIncrement);
  v137 = 5 * v136;
  v138 = 10000LL * v219;
  *((_QWORD *)this + 353) = 2 * v137;
  *((_QWORD *)this + 354) = (unsigned int)(v138 / TimeIncrement);
  v139 = v220;
  *((_QWORD *)this + 356) = 0LL;
  v189 = 0;
  v140 = 5 * v139;
  v141 = v221;
  *((_QWORD *)this + 355) = 2 * v140;
  v142 = 5 * v141;
  v143 = v222;
  *((_QWORD *)this + 358) = 2 * v142;
  v144 = 5 * v143;
  v145 = v223;
  *((_QWORD *)this + 359) = 2 * v144;
  v146 = 5 * v145;
  v147 = v224;
  *((_QWORD *)this + 360) = 2 * v146;
  v148 = 5 * v147;
  v149 = v225;
  *((_QWORD *)this + 361) = 2 * v148;
  v150 = 5 * v149;
  v151 = v226;
  *((_QWORD *)this + 362) = 2 * v150;
  v152 = 5 * v151;
  v153 = v227;
  *((_QWORD *)this + 363) = 2 * v152;
  v154 = 5 * v153;
  v155 = v228;
  *((_QWORD *)this + 364) = 2 * v154;
  *((_QWORD *)this + 365) = 10 * v155;
  *((_QWORD *)this + 374) = (char *)this + 2984;
  *((_QWORD *)this + 373) = (char *)this + 2984;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 379);
  v156 = 0;
  while ( 2 )
  {
    v157 = *((_QWORD *)this + 312) + 520LL * v156;
    *(_BYTE *)(v157 + 356) = 1;
    v158 = (DXGADAPTER *)(v157 + 424);
    *(_QWORD *)(v157 + 424) = 0LL;
    *(_QWORD *)(v157 + 432) = 0LL;
    v159 = *(_DWORD *)(v157 + 208);
    if ( !v159 )
    {
      *(_BYTE *)(v157 + 357) = 1;
      v169 = (DXGADAPTER **)*((_QWORD *)this + 378);
      if ( *v169 != (DXGADAPTER *)((char *)this + 3016) )
        __fastfail(3u);
      *(_QWORD *)(v157 + 432) = v169;
      *(_QWORD *)v158 = (char *)this + 3016;
      *v169 = v158;
      v170 = 0LL;
      *((_QWORD *)this + 378) = v158;
      v171 = *(_DWORD *)(v157 + 8);
      if ( v171 > 1 )
      {
        v172 = (unsigned __int64 *)(v157 + 40);
        v173 = v171 - 1;
        do
        {
          v174 = v170;
          v170 = *v172;
          v175 = v174 < *v172;
          v172 += 3;
          if ( !v175 )
            v170 = v174;
          --v173;
        }
        while ( v173 );
      }
      *(_DWORD *)(v157 + 388) = 1;
      v176 = 0;
      v177 = (unsigned __int64 *)((char *)this + 2688);
      while ( *v177 < v170 )
      {
        ++v176;
        v177 += 2;
        if ( v176 >= 2 )
          goto LABEL_188;
      }
      *(_DWORD *)(v157 + 388) = v176;
LABEL_188:
      v178 = *(_DWORD *)(v157 + 4);
      *(_DWORD *)(v157 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v178, *(_QWORD *)(*((_QWORD *)this + 348) + 32LL));
      ++*((_DWORD *)this + 664);
      goto LABEL_189;
    }
    v160 = v159 - 1;
    if ( !v160 )
    {
      v165 = v231;
      goto LABEL_175;
    }
    v161 = v160 - 1;
    if ( !v161 )
    {
      v165 = v230;
LABEL_175:
      v167 = *(_DWORD *)(v157 + 4);
      v166 = this;
      goto LABEL_176;
    }
    v162 = v161 - 1;
    if ( v162 )
    {
      v163 = v162 - 1;
      if ( !v163 )
        goto LABEL_189;
      v164 = v163 - 2;
      if ( !v164 )
        goto LABEL_189;
      if ( v164 == 1 )
      {
        v189 = 1;
        if ( (*(_DWORD *)(v157 + 216) & 0x10) != 0 )
        {
          *(_BYTE *)(v157 + 360) = 1;
          *(_BYTE *)(v157 + 356) = 0;
          *(_DWORD *)(v157 + 344) = 1;
        }
      }
      else
      {
        v165 = v229;
        v166 = this;
        v167 = *(_DWORD *)(v157 + 4);
        if ( v229 == -1 )
        {
          DXGADAPTER::SetPowerComponentLatencyCB(this, v167, -1LL);
          goto LABEL_189;
        }
LABEL_176:
        DXGADAPTER::SetPowerComponentLatencyCB(v166, v167, 10 * v165);
      }
    }
    else
    {
      v168 = (DXGADAPTER **)*((_QWORD *)this + 376);
      if ( *v168 != (DXGADAPTER *)((char *)this + 3000) )
        __fastfail(3u);
      *(_QWORD *)v158 = (char *)this + 3000;
      *(_QWORD *)(v157 + 432) = v168;
      *v168 = v158;
      *((_QWORD *)this + 376) = v158;
      if ( (*(_DWORD *)(v157 + 216) & 0x10) != 0 )
        *(_BYTE *)(v157 + 360) = 1;
    }
LABEL_189:
    if ( v232 == -1 )
      v179 = -1LL;
    else
      v179 = 10000LL * v232;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v157 + 4), v179);
    KeInitializeSpinLock((PKSPIN_LOCK)(v157 + 504));
    if ( *(_DWORD *)(v157 + 8) <= 1u || (v180 = *(_QWORD *)(v157 + 48), v180 == -1) )
    {
      v181 = *((_QWORD *)this + 380);
    }
    else
    {
      v181 = *((_QWORD *)this + 380);
      if ( v180 > v181 )
        v181 = *(_QWORD *)(v157 + 48);
    }
    ++v156;
    *(_QWORD *)(v157 + 496) = v181;
    if ( v156 < v6 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*((_QWORD *)this + 313), 10LL * v233);
  if ( *((_DWORD *)this + 69) == 1297040209 && *((_DWORD *)this + 526) == 4608 )
  {
    KeInitializeEvent((PRKEVENT)((char *)this + 3184), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3208), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3232), SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)this + 407);
    *((_QWORD *)this + 410) = (char *)this + 3272;
    *((_QWORD *)this + 409) = (char *)this + 3272;
    InitializeSListHead((PSLIST_HEADER)this + 206);
    v182 = 0LL;
    v183 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 206, (PSLIST_ENTRY)((char *)this + v182 + 3328));
      v182 += 32LL;
      --v183;
    }
    while ( v183 );
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v184 = PsCreateSystemThread(
             (PHANDLE)this + 414,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
             this);
    v26 = v184;
    if ( v184 < 0 )
      goto LABEL_155;
  }
  v185 = DpiEnablePowerManagement(*((_QWORD *)this + 24), *((_QWORD *)this + 313), v189);
  v26 = v185;
  if ( v185 >= 0 )
  {
    operator delete[](v32);
    return 0LL;
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v109 = WdLogNewEntry5_WdError(v186);
  *(_QWORD *)(v109 + 32) = 9LL;
LABEL_209:
  *(_QWORD *)(v109 + 24) = v26;
  WdLogEvent5_WdError(v109);
LABEL_210:
  operator delete[](v32);
LABEL_211:
  if ( *((_QWORD *)this + 313) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 313) = 0LL;
  }
  return (unsigned int)v26;
}
