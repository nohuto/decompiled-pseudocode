/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0114290
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020170 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020218 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00202B8 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C008450C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C0171380 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C017563C (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01775C4 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x1C01DBC0C (DpiEnablePowerManagement.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rcx
  unsigned int v11; // r14d
  unsigned int v12; // esi
  unsigned int v13; // ebx
  DXGADAPTER *v14; // rcx
  __int64 v15; // r8
  int AdapterInfo; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  SIZE_T v19; // rax
  PVOID v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // r13
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned int v27; // r14d
  int v28; // r9d
  unsigned int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // edx
  __int64 v32; // r12
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int16 v37; // dx
  __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned int v40; // eax
  unsigned int v41; // eax
  _QWORD *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  void *v48; // rcx
  void *v49; // r8
  __int64 v50; // rax
  unsigned int v51; // r9d
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // edx
  _QWORD *v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rcx
  SIZE_T v63; // rax
  PVOID v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // edx
  __int64 j; // r8
  __int64 v70; // r10
  __int64 v71; // r9
  unsigned int v72; // edx
  __int64 v73; // rbx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r14
  unsigned int v78; // eax
  __int64 v79; // rax
  unsigned int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rax
  void *v83; // rcx
  unsigned int v84; // edx
  unsigned int v85; // r12d
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned int v89; // r9d
  __int64 v90; // r14
  unsigned int v91; // ebx
  __int64 v92; // r11
  unsigned int v93; // r10d
  ADAPTER_RENDER *v94; // rcx
  int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // rax
  ADAPTER_DISPLAY *v98; // rcx
  int v99; // eax
  __int64 v100; // rcx
  _QWORD *v101; // r12
  int v102; // eax
  __int64 v103; // rcx
  unsigned int v104; // r14d
  unsigned __int64 TimeIncrement; // rbx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  unsigned __int64 v119; // rtt
  __int64 v120; // rax
  unsigned __int64 v121; // rtt
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rbx
  DXGADAPTER *v143; // rdx
  int v144; // ecx
  int v145; // ecx
  int v146; // ecx
  int v147; // ecx
  int v148; // ecx
  int v149; // ecx
  int v150; // edx
  DXGADAPTER *v151; // rcx
  __int64 v152; // r8
  DXGADAPTER **v153; // rcx
  __int64 v154; // rax
  DXGADAPTER **v155; // rcx
  unsigned __int64 v156; // rcx
  unsigned int v157; // eax
  unsigned __int64 *v158; // rdx
  __int64 v159; // r8
  unsigned __int64 v160; // rax
  unsigned int v161; // eax
  unsigned __int64 *v162; // rdx
  int v163; // edx
  __int64 v164; // r8
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // r8
  __int64 v168; // rbx
  __int64 v169; // r14
  NTSTATUS SystemThread; // eax
  __int64 v171; // rcx
  int v172; // eax
  __int64 v173; // rcx
  __int64 v174; // rax
  char v175; // [rsp+48h] [rbp-C0h]
  unsigned int v176; // [rsp+4Ch] [rbp-BCh] BYREF
  int v177; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v178; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v179; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v180; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v181; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v182; // [rsp+64h] [rbp-A4h] BYREF
  int v183; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v184; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v185; // [rsp+70h] [rbp-98h] BYREF
  __int64 v186; // [rsp+78h] [rbp-90h] BYREF
  int v187; // [rsp+80h] [rbp-88h] BYREF
  int v188; // [rsp+84h] [rbp-84h] BYREF
  int v189; // [rsp+88h] [rbp-80h] BYREF
  int v190; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v191; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v192; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v193; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v194; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v195; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v196; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v197; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v198; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v199; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v200; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v201; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v202; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v203; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v204; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v205; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v206; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v207; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v208; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v209; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v210; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v211; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v212; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v213; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v214; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v215; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v216; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v217; // [rsp+F8h] [rbp-10h] BYREF
  int v218; // [rsp+FCh] [rbp-Ch] BYREF
  int v219; // [rsp+100h] [rbp-8h] BYREF
  int v220; // [rsp+104h] [rbp-4h] BYREF
  int v221; // [rsp+108h] [rbp+0h] BYREF
  int v222; // [rsp+10Ch] [rbp+4h] BYREF
  int v223; // [rsp+110h] [rbp+8h] BYREF
  int v224; // [rsp+114h] [rbp+Ch] BYREF
  int v225; // [rsp+118h] [rbp+10h] BYREF
  int v226; // [rsp+11Ch] [rbp+14h] BYREF
  int v227; // [rsp+120h] [rbp+18h] BYREF
  int v228; // [rsp+124h] [rbp+1Ch] BYREF
  int v229; // [rsp+128h] [rbp+20h] BYREF
  int v230; // [rsp+12Ch] [rbp+24h] BYREF
  int v231; // [rsp+130h] [rbp+28h] BYREF
  int v232; // [rsp+134h] [rbp+2Ch] BYREF
  int v233; // [rsp+138h] [rbp+30h] BYREF
  int v234; // [rsp+13Ch] [rbp+34h] BYREF
  int v235; // [rsp+140h] [rbp+38h] BYREF
  int v236; // [rsp+144h] [rbp+3Ch] BYREF
  int v237; // [rsp+148h] [rbp+40h] BYREF
  int v238; // [rsp+14Ch] [rbp+44h] BYREF
  int v239; // [rsp+150h] [rbp+48h] BYREF
  int v240; // [rsp+154h] [rbp+4Ch] BYREF
  int v241; // [rsp+158h] [rbp+50h] BYREF
  int v242; // [rsp+15Ch] [rbp+54h] BYREF
  int v243; // [rsp+160h] [rbp+58h] BYREF
  int v244; // [rsp+164h] [rbp+5Ch] BYREF
  int v245; // [rsp+168h] [rbp+60h] BYREF
  int v246; // [rsp+16Ch] [rbp+64h] BYREF
  int v247; // [rsp+170h] [rbp+68h] BYREF
  int v248; // [rsp+174h] [rbp+6Ch] BYREF
  int v249; // [rsp+178h] [rbp+70h] BYREF
  int v250; // [rsp+17Ch] [rbp+74h] BYREF
  int v251; // [rsp+180h] [rbp+78h] BYREF
  int v252; // [rsp+184h] [rbp+7Ch] BYREF
  int v253; // [rsp+188h] [rbp+80h] BYREF
  int v254; // [rsp+18Ch] [rbp+84h] BYREF
  int v255; // [rsp+190h] [rbp+88h] BYREF
  int v256; // [rsp+194h] [rbp+8Ch] BYREF
  unsigned int v257; // [rsp+198h] [rbp+90h] BYREF
  void *i; // [rsp+1A0h] [rbp+98h]
  _BYTE v259[88]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v260; // [rsp+200h] [rbp+F8h]
  __int64 v261; // [rsp+208h] [rbp+100h] BYREF
  int v262; // [rsp+210h] [rbp+108h]
  const wchar_t *v263; // [rsp+218h] [rbp+110h]
  int *v264; // [rsp+220h] [rbp+118h]
  int v265; // [rsp+228h] [rbp+120h]
  int *v266; // [rsp+230h] [rbp+128h]
  int v267; // [rsp+238h] [rbp+130h]
  __int64 v268; // [rsp+240h] [rbp+138h]
  int v269; // [rsp+248h] [rbp+140h]
  _BYTE v270[40]; // [rsp+250h] [rbp+148h] BYREF
  __int64 v271; // [rsp+278h] [rbp+170h] BYREF
  int v272; // [rsp+280h] [rbp+178h]
  const wchar_t *v273; // [rsp+288h] [rbp+180h]
  unsigned int *v274; // [rsp+290h] [rbp+188h]
  int v275; // [rsp+298h] [rbp+190h]
  int *v276; // [rsp+2A0h] [rbp+198h]
  int v277; // [rsp+2A8h] [rbp+1A0h]
  __int64 v278; // [rsp+2B0h] [rbp+1A8h]
  int v279; // [rsp+2B8h] [rbp+1B0h]
  const wchar_t *v280; // [rsp+2C0h] [rbp+1B8h]
  int *v281; // [rsp+2C8h] [rbp+1C0h]
  int v282; // [rsp+2D0h] [rbp+1C8h]
  int *v283; // [rsp+2D8h] [rbp+1D0h]
  int v284; // [rsp+2E0h] [rbp+1D8h]
  __int64 v285; // [rsp+2E8h] [rbp+1E0h]
  int v286; // [rsp+2F0h] [rbp+1E8h]
  const wchar_t *v287; // [rsp+2F8h] [rbp+1F0h]
  __int64 *v288; // [rsp+300h] [rbp+1F8h]
  int v289; // [rsp+308h] [rbp+200h]
  int *v290; // [rsp+310h] [rbp+208h]
  int v291; // [rsp+318h] [rbp+210h]
  __int64 v292; // [rsp+320h] [rbp+218h]
  int v293; // [rsp+328h] [rbp+220h]
  const wchar_t *v294; // [rsp+330h] [rbp+228h]
  char *v295; // [rsp+338h] [rbp+230h]
  int v296; // [rsp+340h] [rbp+238h]
  int *v297; // [rsp+348h] [rbp+240h]
  int v298; // [rsp+350h] [rbp+248h]
  __int64 v299; // [rsp+358h] [rbp+250h]
  int v300; // [rsp+360h] [rbp+258h]
  const wchar_t *v301; // [rsp+368h] [rbp+260h]
  unsigned int *v302; // [rsp+370h] [rbp+268h]
  int v303; // [rsp+378h] [rbp+270h]
  int *v304; // [rsp+380h] [rbp+278h]
  int v305; // [rsp+388h] [rbp+280h]
  __int64 v306; // [rsp+390h] [rbp+288h]
  int v307; // [rsp+398h] [rbp+290h]
  const wchar_t *v308; // [rsp+3A0h] [rbp+298h]
  unsigned int *v309; // [rsp+3A8h] [rbp+2A0h]
  int v310; // [rsp+3B0h] [rbp+2A8h]
  int *v311; // [rsp+3B8h] [rbp+2B0h]
  int v312; // [rsp+3C0h] [rbp+2B8h]
  __int64 v313; // [rsp+3C8h] [rbp+2C0h]
  int v314; // [rsp+3D0h] [rbp+2C8h]
  const wchar_t *v315; // [rsp+3D8h] [rbp+2D0h]
  unsigned int *v316; // [rsp+3E0h] [rbp+2D8h]
  int v317; // [rsp+3E8h] [rbp+2E0h]
  int *v318; // [rsp+3F0h] [rbp+2E8h]
  int v319; // [rsp+3F8h] [rbp+2F0h]
  __int64 v320; // [rsp+400h] [rbp+2F8h]
  int v321; // [rsp+408h] [rbp+300h]
  const wchar_t *v322; // [rsp+410h] [rbp+308h]
  unsigned int *v323; // [rsp+418h] [rbp+310h]
  int v324; // [rsp+420h] [rbp+318h]
  int *v325; // [rsp+428h] [rbp+320h]
  int v326; // [rsp+430h] [rbp+328h]
  __int64 v327; // [rsp+438h] [rbp+330h]
  int v328; // [rsp+440h] [rbp+338h]
  const wchar_t *v329; // [rsp+448h] [rbp+340h]
  unsigned int *v330; // [rsp+450h] [rbp+348h]
  int v331; // [rsp+458h] [rbp+350h]
  int *v332; // [rsp+460h] [rbp+358h]
  int v333; // [rsp+468h] [rbp+360h]
  __int64 v334; // [rsp+470h] [rbp+368h]
  int v335; // [rsp+478h] [rbp+370h]
  const wchar_t *v336; // [rsp+480h] [rbp+378h]
  unsigned int *v337; // [rsp+488h] [rbp+380h]
  int v338; // [rsp+490h] [rbp+388h]
  int *v339; // [rsp+498h] [rbp+390h]
  int v340; // [rsp+4A0h] [rbp+398h]
  __int64 v341; // [rsp+4A8h] [rbp+3A0h]
  int v342; // [rsp+4B0h] [rbp+3A8h]
  const wchar_t *v343; // [rsp+4B8h] [rbp+3B0h]
  int *v344; // [rsp+4C0h] [rbp+3B8h]
  int v345; // [rsp+4C8h] [rbp+3C0h]
  int *v346; // [rsp+4D0h] [rbp+3C8h]
  int v347; // [rsp+4D8h] [rbp+3D0h]
  __int64 v348; // [rsp+4E0h] [rbp+3D8h]
  int v349; // [rsp+4E8h] [rbp+3E0h]
  const wchar_t *v350; // [rsp+4F0h] [rbp+3E8h]
  unsigned int *v351; // [rsp+4F8h] [rbp+3F0h]
  int v352; // [rsp+500h] [rbp+3F8h]
  int *v353; // [rsp+508h] [rbp+400h]
  int v354; // [rsp+510h] [rbp+408h]
  __int64 v355; // [rsp+518h] [rbp+410h]
  int v356; // [rsp+520h] [rbp+418h]
  const wchar_t *v357; // [rsp+528h] [rbp+420h]
  int *v358; // [rsp+530h] [rbp+428h]
  int v359; // [rsp+538h] [rbp+430h]
  int *v360; // [rsp+540h] [rbp+438h]
  int v361; // [rsp+548h] [rbp+440h]
  __int64 v362; // [rsp+550h] [rbp+448h]
  int v363; // [rsp+558h] [rbp+450h]
  const wchar_t *v364; // [rsp+560h] [rbp+458h]
  unsigned int *v365; // [rsp+568h] [rbp+460h]
  int v366; // [rsp+570h] [rbp+468h]
  int *v367; // [rsp+578h] [rbp+470h]
  int v368; // [rsp+580h] [rbp+478h]
  __int64 v369; // [rsp+588h] [rbp+480h]
  int v370; // [rsp+590h] [rbp+488h]
  const wchar_t *v371; // [rsp+598h] [rbp+490h]
  unsigned int *v372; // [rsp+5A0h] [rbp+498h]
  int v373; // [rsp+5A8h] [rbp+4A0h]
  int *v374; // [rsp+5B0h] [rbp+4A8h]
  int v375; // [rsp+5B8h] [rbp+4B0h]
  __int64 v376; // [rsp+5C0h] [rbp+4B8h]
  int v377; // [rsp+5C8h] [rbp+4C0h]
  const wchar_t *v378; // [rsp+5D0h] [rbp+4C8h]
  unsigned int *v379; // [rsp+5D8h] [rbp+4D0h]
  int v380; // [rsp+5E0h] [rbp+4D8h]
  int *v381; // [rsp+5E8h] [rbp+4E0h]
  int v382; // [rsp+5F0h] [rbp+4E8h]
  __int64 v383; // [rsp+5F8h] [rbp+4F0h]
  int v384; // [rsp+600h] [rbp+4F8h]
  const wchar_t *v385; // [rsp+608h] [rbp+500h]
  unsigned int *v386; // [rsp+610h] [rbp+508h]
  int v387; // [rsp+618h] [rbp+510h]
  int *v388; // [rsp+620h] [rbp+518h]
  int v389; // [rsp+628h] [rbp+520h]
  __int64 v390; // [rsp+630h] [rbp+528h]
  int v391; // [rsp+638h] [rbp+530h]
  const wchar_t *v392; // [rsp+640h] [rbp+538h]
  unsigned int *v393; // [rsp+648h] [rbp+540h]
  int v394; // [rsp+650h] [rbp+548h]
  int *v395; // [rsp+658h] [rbp+550h]
  int v396; // [rsp+660h] [rbp+558h]
  __int64 v397; // [rsp+668h] [rbp+560h]
  int v398; // [rsp+670h] [rbp+568h]
  const wchar_t *v399; // [rsp+678h] [rbp+570h]
  unsigned int *v400; // [rsp+680h] [rbp+578h]
  int v401; // [rsp+688h] [rbp+580h]
  int *v402; // [rsp+690h] [rbp+588h]
  int v403; // [rsp+698h] [rbp+590h]
  __int64 v404; // [rsp+6A0h] [rbp+598h]
  int v405; // [rsp+6A8h] [rbp+5A0h]
  const wchar_t *v406; // [rsp+6B0h] [rbp+5A8h]
  unsigned int *v407; // [rsp+6B8h] [rbp+5B0h]
  int v408; // [rsp+6C0h] [rbp+5B8h]
  int *v409; // [rsp+6C8h] [rbp+5C0h]
  int v410; // [rsp+6D0h] [rbp+5C8h]
  __int64 v411; // [rsp+6D8h] [rbp+5D0h]
  int v412; // [rsp+6E0h] [rbp+5D8h]
  const wchar_t *v413; // [rsp+6E8h] [rbp+5E0h]
  unsigned int *v414; // [rsp+6F0h] [rbp+5E8h]
  int v415; // [rsp+6F8h] [rbp+5F0h]
  int *v416; // [rsp+700h] [rbp+5F8h]
  int v417; // [rsp+708h] [rbp+600h]
  __int64 v418; // [rsp+710h] [rbp+608h]
  int v419; // [rsp+718h] [rbp+610h]
  const wchar_t *v420; // [rsp+720h] [rbp+618h]
  int *v421; // [rsp+728h] [rbp+620h]
  int v422; // [rsp+730h] [rbp+628h]
  int *v423; // [rsp+738h] [rbp+630h]
  int v424; // [rsp+740h] [rbp+638h]
  __int64 v425; // [rsp+748h] [rbp+640h]
  int v426; // [rsp+750h] [rbp+648h]
  const wchar_t *v427; // [rsp+758h] [rbp+650h]
  int *v428; // [rsp+760h] [rbp+658h]
  int v429; // [rsp+768h] [rbp+660h]
  int *v430; // [rsp+770h] [rbp+668h]
  int v431; // [rsp+778h] [rbp+670h]
  __int64 v432; // [rsp+780h] [rbp+678h]
  int v433; // [rsp+788h] [rbp+680h]
  const wchar_t *v434; // [rsp+790h] [rbp+688h]
  int *v435; // [rsp+798h] [rbp+690h]
  int v436; // [rsp+7A0h] [rbp+698h]
  int *v437; // [rsp+7A8h] [rbp+6A0h]
  int v438; // [rsp+7B0h] [rbp+6A8h]
  __int64 v439; // [rsp+7B8h] [rbp+6B0h]
  int v440; // [rsp+7C0h] [rbp+6B8h]
  const wchar_t *v441; // [rsp+7C8h] [rbp+6C0h]
  unsigned int *v442; // [rsp+7D0h] [rbp+6C8h]
  int v443; // [rsp+7D8h] [rbp+6D0h]
  int *v444; // [rsp+7E0h] [rbp+6D8h]
  int v445; // [rsp+7E8h] [rbp+6E0h]
  __int64 v446; // [rsp+7F0h] [rbp+6E8h]
  int v447; // [rsp+7F8h] [rbp+6F0h]
  const wchar_t *v448; // [rsp+800h] [rbp+6F8h]
  unsigned int *v449; // [rsp+808h] [rbp+700h]
  int v450; // [rsp+810h] [rbp+708h]
  int *v451; // [rsp+818h] [rbp+710h]
  int v452; // [rsp+820h] [rbp+718h]
  __int64 v453; // [rsp+828h] [rbp+720h]
  int v454; // [rsp+830h] [rbp+728h]
  const wchar_t *v455; // [rsp+838h] [rbp+730h]
  unsigned int *v456; // [rsp+840h] [rbp+738h]
  int v457; // [rsp+848h] [rbp+740h]
  int *v458; // [rsp+850h] [rbp+748h]
  int v459; // [rsp+858h] [rbp+750h]
  __int64 v460; // [rsp+860h] [rbp+758h]
  int v461; // [rsp+868h] [rbp+760h]
  const wchar_t *v462; // [rsp+870h] [rbp+768h]
  unsigned int *v463; // [rsp+878h] [rbp+770h]
  int v464; // [rsp+880h] [rbp+778h]
  int *v465; // [rsp+888h] [rbp+780h]
  int v466; // [rsp+890h] [rbp+788h]
  __int64 v467; // [rsp+898h] [rbp+790h]
  int v468; // [rsp+8A0h] [rbp+798h]
  const wchar_t *v469; // [rsp+8A8h] [rbp+7A0h]
  unsigned int *v470; // [rsp+8B0h] [rbp+7A8h]
  int v471; // [rsp+8B8h] [rbp+7B0h]
  int *v472; // [rsp+8C0h] [rbp+7B8h]
  int v473; // [rsp+8C8h] [rbp+7C0h]
  __int64 v474; // [rsp+8D0h] [rbp+7C8h]
  int v475; // [rsp+8D8h] [rbp+7D0h]
  const wchar_t *v476; // [rsp+8E0h] [rbp+7D8h]
  unsigned int *v477; // [rsp+8E8h] [rbp+7E0h]
  int v478; // [rsp+8F0h] [rbp+7E8h]
  int *v479; // [rsp+8F8h] [rbp+7F0h]
  int v480; // [rsp+900h] [rbp+7F8h]
  __int64 v481; // [rsp+908h] [rbp+800h]
  int v482; // [rsp+910h] [rbp+808h]
  const wchar_t *v483; // [rsp+918h] [rbp+810h]
  unsigned int *v484; // [rsp+920h] [rbp+818h]
  int v485; // [rsp+928h] [rbp+820h]
  int *v486; // [rsp+930h] [rbp+828h]
  int v487; // [rsp+938h] [rbp+830h]
  __int64 v488; // [rsp+940h] [rbp+838h]
  int v489; // [rsp+948h] [rbp+840h]
  const wchar_t *v490; // [rsp+950h] [rbp+848h]
  unsigned int *v491; // [rsp+958h] [rbp+850h]
  int v492; // [rsp+960h] [rbp+858h]
  int *v493; // [rsp+968h] [rbp+860h]
  int v494; // [rsp+970h] [rbp+868h]
  __int64 v495; // [rsp+978h] [rbp+870h]
  int v496; // [rsp+980h] [rbp+878h]
  const wchar_t *v497; // [rsp+988h] [rbp+880h]
  unsigned int *v498; // [rsp+990h] [rbp+888h]
  int v499; // [rsp+998h] [rbp+890h]
  int *v500; // [rsp+9A0h] [rbp+898h]
  int v501; // [rsp+9A8h] [rbp+8A0h]
  __int64 v502; // [rsp+9B0h] [rbp+8A8h]
  int v503; // [rsp+9B8h] [rbp+8B0h]
  const wchar_t *v504; // [rsp+9C0h] [rbp+8B8h]
  unsigned int *v505; // [rsp+9C8h] [rbp+8C0h]
  int v506; // [rsp+9D0h] [rbp+8C8h]
  int *v507; // [rsp+9D8h] [rbp+8D0h]
  int v508; // [rsp+9E0h] [rbp+8D8h]
  __int64 v509; // [rsp+9E8h] [rbp+8E0h]
  int v510; // [rsp+9F0h] [rbp+8E8h]
  const wchar_t *v511; // [rsp+9F8h] [rbp+8F0h]
  unsigned int *v512; // [rsp+A00h] [rbp+8F8h]
  int v513; // [rsp+A08h] [rbp+900h]
  int *v514; // [rsp+A10h] [rbp+908h]
  int v515; // [rsp+A18h] [rbp+910h]
  __int64 v516; // [rsp+A20h] [rbp+918h]
  int v517; // [rsp+A28h] [rbp+920h]
  const wchar_t *v518; // [rsp+A30h] [rbp+928h]
  unsigned int *v519; // [rsp+A38h] [rbp+930h]
  int v520; // [rsp+A40h] [rbp+938h]
  int *v521; // [rsp+A48h] [rbp+940h]
  int v522; // [rsp+A50h] [rbp+948h]
  __int64 v523; // [rsp+A58h] [rbp+950h]
  int v524; // [rsp+A60h] [rbp+958h]
  const wchar_t *v525; // [rsp+A68h] [rbp+960h]
  unsigned int *v526; // [rsp+A70h] [rbp+968h]
  int v527; // [rsp+A78h] [rbp+970h]
  int *v528; // [rsp+A80h] [rbp+978h]
  int v529; // [rsp+A88h] [rbp+980h]
  __int64 v530; // [rsp+A90h] [rbp+988h]
  int v531; // [rsp+A98h] [rbp+990h]
  const wchar_t *v532; // [rsp+AA0h] [rbp+998h]
  unsigned int *v533; // [rsp+AA8h] [rbp+9A0h]
  int v534; // [rsp+AB0h] [rbp+9A8h]
  int *v535; // [rsp+AB8h] [rbp+9B0h]
  int v536; // [rsp+AC0h] [rbp+9B8h]
  __int64 v537; // [rsp+AC8h] [rbp+9C0h]
  int v538; // [rsp+AD0h] [rbp+9C8h]
  const wchar_t *v539; // [rsp+AD8h] [rbp+9D0h]
  unsigned int *v540; // [rsp+AE0h] [rbp+9D8h]
  int v541; // [rsp+AE8h] [rbp+9E0h]
  int *v542; // [rsp+AF0h] [rbp+9E8h]
  int v543; // [rsp+AF8h] [rbp+9F0h]
  __int64 v544; // [rsp+B00h] [rbp+9F8h]
  int v545; // [rsp+B08h] [rbp+A00h]
  _BYTE v546[296]; // [rsp+B10h] [rbp+A08h] BYREF

  if ( !*((_BYTE *)this + 2173) )
  {
    v4 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v4 + 24) = 4236LL;
LABEL_3:
    WdLogEvent5_WdWarning(v4);
    return 0LL;
  }
  v239 = 3;
  v219 = -1;
  v185 = 0x7D0FFFFFFFFLL;
  v220 = 2000;
  v223 = 35000;
  v194 = 35000;
  v6 = 0;
  v225 = 50000;
  v197 = 50000;
  v226 = 100000;
  v198 = 100000;
  v231 = 300000;
  v216 = 300000;
  v232 = 17000;
  v215 = 17000;
  v227 = 200;
  v191 = 200;
  v228 = 200;
  v195 = 200;
  v230 = 100;
  v229 = 100;
  v233 = 25000;
  v217 = 25000;
  v235 = 300;
  v179 = 300;
  v236 = 700;
  v181 = 700;
  v237 = 900;
  v180 = 900;
  v238 = 500;
  v182 = 500;
  v244 = 140000;
  v204 = 140000;
  v245 = 200000;
  v206 = 200000;
  v246 = 250000;
  v207 = 250000;
  v247 = 250000;
  v208 = 250000;
  v224 = 2000;
  v196 = 2000;
  v234 = 2000;
  v199 = 2000;
  v248 = 10000;
  v201 = 10000;
  v221 = 80;
  v192 = 80;
  v222 = 15000;
  v193 = 15000;
  v190 = 3;
  v240 = 0;
  v188 = 0;
  v241 = 0;
  v189 = 0;
  v242 = 80;
  v200 = 80;
  v243 = 80000;
  v202 = 80000;
  v249 = 60000;
  v203 = 60000;
  v250 = 60000;
  v205 = 60000;
  v251 = 15000;
  v252 = 30000;
  v210 = 30000;
  v255 = 30000;
  v213 = 30000;
  v263 = L"UseSelfRefreshVRAMInS3";
  v264 = &v187;
  v209 = 15000;
  v253 = 80;
  v211 = 80;
  v254 = 15000;
  v212 = 15000;
  v256 = 80000;
  v214 = 80000;
  v266 = &v218;
  v218 = 1;
  v187 = 1;
  v183 = 1;
  v178 = 1;
  v184 = 0;
  v177 = 0;
  v261 = 0LL;
  v262 = 288;
  v265 = 67108868;
  v267 = 4;
  v268 = 0LL;
  v269 = 0;
  memset(v270, 0, sizeof(v270));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v261, 0LL, 0LL);
  v271 = 0LL;
  v273 = L"EnableRuntimePowerManagement";
  v274 = &v178;
  v276 = &v183;
  v280 = L"DisableDevicePowerRequired";
  v281 = &v177;
  v283 = (int *)&v184;
  v287 = L"DefaultLatencyToleranceOther";
  v288 = &v185;
  v290 = &v219;
  v272 = 288;
  v275 = 67108868;
  v277 = 4;
  v278 = 0LL;
  v279 = 288;
  v282 = 67108868;
  v284 = 4;
  v285 = 0LL;
  v286 = 288;
  v289 = 67108868;
  v291 = 4;
  v292 = 0LL;
  v293 = 288;
  v296 = 67108868;
  v294 = L"DefaultExpectedResidency";
  v295 = (char *)&v185 + 4;
  v297 = &v220;
  v301 = L"DefaultLatencyToleranceIdle0";
  v302 = &v192;
  v304 = &v221;
  v308 = L"DefaultLatencyToleranceIdle1";
  v309 = &v193;
  v311 = &v222;
  v315 = L"DefaultLatencyToleranceNoContext";
  v316 = &v194;
  v318 = &v223;
  v322 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v323 = &v196;
  v325 = &v224;
  v329 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v330 = &v197;
  v332 = &v225;
  v336 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v337 = &v198;
  v339 = &v226;
  v343 = L"DefaultLatencyToleranceTimerPeriod";
  v344 = &v191;
  v346 = &v227;
  v298 = 4;
  v299 = 0LL;
  v300 = 288;
  v303 = 67108868;
  v305 = 4;
  v306 = 0LL;
  v307 = 288;
  v310 = 67108868;
  v312 = 4;
  v313 = 0LL;
  v314 = 288;
  v317 = 67108868;
  v319 = 4;
  v320 = 0LL;
  v321 = 288;
  v324 = 67108868;
  v326 = 4;
  v327 = 0LL;
  v328 = 288;
  v331 = 67108868;
  v333 = 4;
  v334 = 0LL;
  v335 = 288;
  v338 = 67108868;
  v340 = 4;
  v341 = 0LL;
  v342 = 288;
  v345 = 67108868;
  v347 = 4;
  v348 = 0LL;
  v349 = 288;
  v350 = L"DefaultIdleThresholdIdle0";
  v351 = &v195;
  v353 = &v228;
  v357 = L"DefaultIdleThresholdIdle0MonitorOff";
  v358 = &v229;
  v360 = &v230;
  v364 = L"MonitorLatencyTolerance";
  v365 = &v216;
  v367 = &v231;
  v371 = L"MonitorRefreshLatencyTolerance";
  v372 = &v215;
  v374 = &v232;
  v378 = L"DefaultPowerNotRequiredTimeout";
  v379 = &v217;
  v381 = &v233;
  v385 = L"DefaultActiveIdleThreshold";
  v386 = &v199;
  v388 = &v234;
  v392 = L"ulow";
  v393 = &v179;
  v395 = &v235;
  v399 = L"uhigh";
  v400 = &v181;
  v402 = &v236;
  v406 = L"uglitch";
  v352 = 67108868;
  v354 = 4;
  v355 = 0LL;
  v356 = 288;
  v359 = 67108868;
  v361 = 4;
  v362 = 0LL;
  v363 = 288;
  v366 = 67108868;
  v368 = 4;
  v369 = 0LL;
  v370 = 288;
  v373 = 67108868;
  v375 = 4;
  v376 = 0LL;
  v377 = 288;
  v380 = 67108868;
  v382 = 4;
  v383 = 0LL;
  v384 = 288;
  v387 = 67108868;
  v389 = 4;
  v390 = 0LL;
  v391 = 288;
  v394 = 67108868;
  v396 = 4;
  v397 = 0LL;
  v398 = 288;
  v401 = 67108868;
  v403 = 4;
  v404 = 0LL;
  v405 = 288;
  v408 = 67108868;
  v407 = &v180;
  v409 = &v237;
  v413 = L"uideal";
  v414 = &v182;
  v416 = &v238;
  v420 = L"lowdebounce";
  v421 = &v190;
  v423 = &v239;
  v427 = L"EnablePODebounce";
  v428 = &v188;
  v430 = &v240;
  v434 = L"DisablePStateManagement";
  v435 = &v189;
  v437 = &v241;
  v441 = L"DefaultD3TransitionLatencyActivelyUsed";
  v442 = &v200;
  v444 = &v242;
  v448 = L"DefaultD3TransitionLatencyIdleShortTime";
  v449 = &v202;
  v451 = &v243;
  v455 = L"DefaultD3TransitionLatencyIdleLongTime";
  v456 = &v204;
  v458 = &v244;
  v462 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v410 = 4;
  v411 = 0LL;
  v412 = 288;
  v415 = 67108868;
  v417 = 4;
  v418 = 0LL;
  v419 = 288;
  v422 = 67108868;
  v424 = 4;
  v425 = 0LL;
  v426 = 288;
  v429 = 67108868;
  v431 = 4;
  v432 = 0LL;
  v433 = 288;
  v436 = 67108868;
  v438 = 4;
  v439 = 0LL;
  v440 = 288;
  v443 = 67108868;
  v445 = 4;
  v446 = 0LL;
  v447 = 288;
  v450 = 67108868;
  v452 = 4;
  v453 = 0LL;
  v454 = 288;
  v457 = 67108868;
  v459 = 4;
  v460 = 0LL;
  v461 = 288;
  v463 = &v206;
  v465 = &v245;
  v469 = L"DefaultD3TransitionLatencyIdleNoContext";
  v470 = &v207;
  v472 = &v246;
  v476 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v477 = &v208;
  v479 = &v247;
  v483 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v484 = &v201;
  v486 = &v248;
  v490 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v491 = &v203;
  v493 = &v249;
  v497 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v498 = &v205;
  v500 = &v250;
  v504 = L"DefaultLatencyToleranceMemory";
  v505 = &v209;
  v507 = &v251;
  v511 = L"DefaultLatencyToleranceMemoryNoContext";
  v512 = &v210;
  v514 = &v252;
  v518 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v519 = &v211;
  v464 = 67108868;
  v466 = 4;
  v467 = 0LL;
  v468 = 288;
  v471 = 67108868;
  v473 = 4;
  v474 = 0LL;
  v475 = 288;
  v478 = 67108868;
  v480 = 4;
  v481 = 0LL;
  v482 = 288;
  v485 = 67108868;
  v487 = 4;
  v488 = 0LL;
  v489 = 288;
  v492 = 67108868;
  v494 = 4;
  v495 = 0LL;
  v496 = 288;
  v499 = 67108868;
  v501 = 4;
  v502 = 0LL;
  v503 = 288;
  v506 = 67108868;
  v508 = 4;
  v509 = 0LL;
  v510 = 288;
  v513 = 67108868;
  v515 = 4;
  v516 = 0LL;
  v517 = 288;
  v520 = 67108868;
  v521 = &v253;
  v522 = 4;
  v525 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v523 = 0LL;
  v526 = &v212;
  v524 = 288;
  v528 = &v254;
  v532 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v533 = &v213;
  v535 = &v255;
  v539 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v540 = &v214;
  v542 = &v256;
  v527 = 67108868;
  v529 = 4;
  v530 = 0LL;
  v531 = 288;
  v534 = 67108868;
  v536 = 4;
  v537 = 0LL;
  v538 = 288;
  v541 = 67108868;
  v543 = 4;
  v544 = 0LL;
  v545 = 0;
  memset(v546, 0, 0x28uLL);
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v271, 0LL, 0LL);
  if ( !v178 )
    return 0LL;
  v9 = v187 == 0;
  *((_BYTE *)this + 180) = v177 != 0;
  *((_BYTE *)this + 183) = !v9;
  v10 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  v11 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 28LL);
  if ( v11 < 0x5019 || *((int *)this + 492) < 0x2000 )
    v12 = 1;
  else
    v12 = *((_DWORD *)this + 62);
  v176 = v12;
  v13 = 0;
  LODWORD(v186) = 0;
  if ( !v12 )
    goto LABEL_203;
  do
  {
    memset(&v259[40], 0, 0x28uLL);
    *(_DWORD *)&v259[40] = 6;
    *(_DWORD *)&v259[72] = 4;
    *(_QWORD *)&v259[64] = &v546[4 * v13 + 40];
    if ( DXGADAPTER::IsDxgmms2(this) && v11 >= 0x5019 )
    {
      *(_DWORD *)&v259[56] = 4;
      *(_QWORD *)&v259[48] = &v186;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v14, (struct _DXGKARG_QUERYADAPTERINFO *)&v259[40], v15);
    v17 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v174 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v174 + 24) = this;
      *(_QWORD *)(v174 + 32) = v17;
      WdLogEvent5_WdError(v174);
      return (unsigned int)v17;
    }
    v6 += *(_DWORD *)&v546[4 * (unsigned int)v186 + 40];
    v13 = v186 + 1;
    LODWORD(v186) = v13;
  }
  while ( v13 < v12 );
  if ( !v6 )
  {
LABEL_203:
    v4 = WdLogNewEntry5_WdWarning(v10, v7, v8);
    *(_QWORD *)(v4 + 24) = 4401LL;
    goto LABEL_3;
  }
  if ( v6 > 0xFFFF )
  {
    v18 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v18 + 24) = v6;
    WdLogEvent5_WdError(v18);
    LODWORD(v17) = -1073741811;
    goto LABEL_196;
  }
  *((_DWORD *)this + 622) = v6;
  v19 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 293) = v20;
  if ( !v20
    || (memset(v20, 0, 520LL * v6), v22 = operator new[](312 * v6 + 136, 0x4B677844u, PagedPool), (v23 = v22) == 0LL) )
  {
    v43 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v43 + 24) = this;
    WdLogEvent5_WdLowResource(v43);
    LODWORD(v17) = -1073741801;
    goto LABEL_196;
  }
  memset(v22, 0, 312 * v6 + 136);
  *(_DWORD *)v23 = 2;
  v23[4] = DxgkPowerRuntimeComponentIdleStateCallback;
  *((_DWORD *)v23 + 18) = v6;
  v23[2] = DxgkPowerRuntimeComponentActiveCallback;
  v23[8] = this;
  v23[3] = DxgkPowerRuntimeComponentIdleCallback;
  v23[5] = DxgkPowerRuntimeDevicePowerRequiredCallback;
  v23[6] = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  v23[7] = DxgkPowerRuntimeControlCallback;
  memset(v259, 0, 0x28uLL);
  *(_DWORD *)v259 = 7;
  v24 = (__int64)&v23[7 * v6 + 10];
  *(_DWORD *)&v259[16] = 4;
  *(_DWORD *)&v259[32] = 336;
  v25 = 0;
  v26 = 0;
  v184 = 0;
  v27 = 0;
  v178 = 0;
  v28 = 0;
  v183 = 0;
  i = (void *)(v24 + 192LL * v6);
  v29 = v176;
  do
  {
    v30 = v26;
    v31 = 0;
    v260 = v26;
    v177 = 0;
    *((_WORD *)this + v26 + 1180) = v27;
    if ( !*(_DWORD *)&v546[4 * v26 + 40] )
      goto LABEL_76;
    do
    {
      v32 = 7LL * v27;
      v257 = v28 + v31;
      *(_QWORD *)&v259[8] = &v257;
      v33 = *((_QWORD *)this + 293) + 8LL;
      v186 = 520LL * v27;
      *(_QWORD *)&v259[24] = v33 + v186;
      v34 = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)v259, v30);
      v17 = v34;
      if ( v34 < 0 )
      {
        v67 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v67 + 24) = v27;
        *(_QWORD *)(v67 + 32) = v17;
LABEL_107:
        WdLogEvent5_WdError(v67);
        goto LABEL_195;
      }
      v36 = v186;
      v37 = v177;
      *(_DWORD *)(v186 + *((_QWORD *)this + 293)) = v27;
      *(_WORD *)(v36 + *((_QWORD *)this + 293) + 4) = v37;
      v38 = v178;
      *(_WORD *)(v36 + *((_QWORD *)this + 293) + 6) = v178;
      v39 = v36 + *((_QWORD *)this + 293);
      HIDWORD(v23[v32 + 13]) = *(_DWORD *)(v39 + 8);
      v40 = *(_DWORD *)(v39 + 8);
      if ( !v40 || v40 > 8 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v36);
        v55[3] = v27;
        v55[4] = *(unsigned int *)(v39 + 8);
        v55[5] = 0LL;
        goto LABEL_97;
      }
      *(_OWORD *)&v23[v32 + 10] = *(_OWORD *)(v39 + 220);
      *(_BYTE *)(v39 + 275) = 0;
      v41 = *(_DWORD *)(v39 + 216);
      if ( v41 >= 0x20 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v36);
        v42[4] = 2LL;
        goto LABEL_101;
      }
      if ( (v41 & 4) != 0 )
        v23[v32 + 12] |= 1uLL;
      if ( !v188 )
        v23[v32 + 12] |= 2uLL;
      if ( (*(_DWORD *)(v39 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v39 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v42[4] = 4550LL;
          goto LABEL_101;
        }
        if ( *(_DWORD *)(v39 + 8) != 2 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v42[4] = 4556LL;
          goto LABEL_101;
        }
        if ( *(_QWORD *)(v39 + 40) )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v42[4] = 4562LL;
          goto LABEL_101;
        }
        if ( *(_DWORD *)(v39 + 276) )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v42[4] = 4568LL;
LABEL_101:
          v42[3] = v27;
          goto LABEL_103;
        }
      }
      if ( *(_DWORD *)(v39 + 276) > 0x10u )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v36);
        v42[4] = 3LL;
        goto LABEL_101;
      }
      v44 = *(_DWORD *)(v39 + 208);
      if ( v44 == 4 )
      {
        if ( *((_DWORD *)this + 624) != -1 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v42[4] = 4616LL;
          goto LABEL_101;
        }
        *((_DWORD *)this + 624) = v27;
      }
      else if ( v44 == 6 )
      {
        if ( *((_DWORD *)this + 623) == -1 )
        {
          v46 = *((_QWORD *)this + 293) + v36;
          *((_QWORD *)this + 338) = v46;
          *((_DWORD *)this + 623) = v27;
          v47 = *(_DWORD *)(v39 + 8);
          if ( v47 == 2 )
          {
            *((_BYTE *)this + 2784) = 1;
          }
          else if ( v47 > 2 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v46);
            v42[4] = 4606LL;
            goto LABEL_101;
          }
        }
        else
        {
          v45 = WdLogNewEntry5_WdWarning(v36, v38, 0LL);
          *(_QWORD *)(v45 + 24) = v27;
          *(_QWORD *)(v45 + 32) = 4590LL;
          WdLogEvent5_WdWarning(v45);
        }
      }
      v48 = i;
      LODWORD(v23[v32 + 15]) = *(_DWORD *)(v39 + 276);
      memmove(v48, (const void *)(v39 + 280), 4LL * *(unsigned int *)(v39 + 276));
      v49 = i;
      v23[v32 + 16] = i;
      v50 = *(unsigned int *)(v39 + 276);
      v23[v32 + 14] = v24;
      v51 = 0;
      v30 = (__int64)v49 + 4 * v50;
      for ( i = (void *)v30; v51 < *(_DWORD *)(v39 + 8); ++v51 )
      {
        v30 = 3LL * v51;
        v52 = *(_QWORD *)(v39 + 24LL * v51 + 16);
        *(_QWORD *)v24 = v52;
        v53 = *(_QWORD *)(v39 + 24LL * v51 + 24);
        *(_QWORD *)(v24 + 8) = v53;
        v54 = *(_DWORD *)(v39 + 24LL * v51 + 32);
        *(_DWORD *)(v24 + 16) = v54;
        if ( *(_QWORD *)(v39 + 24LL * v51 + 16) == -1LL )
          v52 = -1LL;
        *(_QWORD *)v24 = v52;
        if ( *(_QWORD *)(v39 + 24LL * v51 + 24) == -1LL )
          v53 = -1LL;
        *(_QWORD *)(v24 + 8) = v53;
        if ( *(_DWORD *)(v39 + 24LL * v51 + 32) == -1 )
          v54 = -1;
        *(_DWORD *)(v24 + 16) = v54;
        if ( v51 )
        {
          v56 = *(_DWORD *)(v39 + 24LL * v51 + 32);
          if ( v56 != -1 )
          {
            v57 = *(unsigned int *)(v39 + 24 * (v51 - 1 + 1LL) + 8);
            if ( (_DWORD)v57 != -1 && v56 > (unsigned int)v57 )
            {
              v55 = (_QWORD *)WdLogNewEntry5_WdError(v57);
              v55[4] = 5LL;
              goto LABEL_95;
            }
          }
          v58 = *(_QWORD *)(v39 + 24LL * v51 + 16);
          if ( v58 != -1LL )
          {
            v59 = *(_QWORD *)(v39 + 24LL * (v51 - 1) + 16);
            if ( v59 != -1LL && v58 < v59 )
            {
              v55 = (_QWORD *)WdLogNewEntry5_WdError(v59);
              v55[4] = 6LL;
              goto LABEL_95;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v39 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v39 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdError(v53);
            v55[4] = 3LL;
LABEL_95:
            v55[3] = v27;
LABEL_97:
            WdLogEvent5_WdError(v55);
            LODWORD(v17) = -1073741811;
            goto LABEL_195;
          }
          if ( !*(_DWORD *)(v39 + 32) )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdError(v53);
            v55[4] = 4LL;
            goto LABEL_95;
          }
        }
        v24 += 24LL;
      }
      v60 = *(_DWORD *)(v39 + 208);
      ++v27;
      v28 = v183;
      v31 = ++v177;
      v61 = v184 + 1;
      if ( v60 )
        v61 = v184;
      v25 = v61;
      v184 = v61;
    }
    while ( v31 < *(_DWORD *)&v546[4 * v260 + 40] );
    v29 = v176;
    v26 = v178;
LABEL_76:
    ++v26;
    v28 += 0x10000;
    v178 = v26;
    v183 = v28;
  }
  while ( v26 < v29 );
  if ( (int)DXGADAPTER::GetDriverVersion(this) < 1300 || !v25 || v189 )
    goto LABEL_136;
  if ( v179 > 0x3E8
    || (v62 = v181, v181 > 0x3E8)
    || v180 > 0x3E8
    || v182 > 0x3E8
    || v179 >= v182
    || v182 >= v181
    || v181 >= v180 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v62);
    v55[3] = v179;
    v55[4] = v181;
    v55[5] = v180;
    v55[6] = v182;
    goto LABEL_97;
  }
  *(_DWORD *)v259 = 9;
  v63 = 248LL * v25;
  *(_DWORD *)&v259[32] = 136;
  if ( !is_mul_ok(v25, 0xF8uLL) )
    v63 = -1LL;
  v64 = operator new[](v63, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 456) = v64;
  *((_DWORD *)this + 914) = v25;
  if ( !v64 )
  {
    v66 = WdLogNewEntry5_WdLowResource(v65);
    *(_QWORD *)(v66 + 24) = this;
    WdLogEvent5_WdLowResource(v66);
    LODWORD(v17) = -1073741801;
    goto LABEL_195;
  }
  memset(v64, 0, 248LL * v25);
  v68 = 0;
  for ( j = 0LL; v68 < *((_DWORD *)this + 622); ++v68 )
  {
    v70 = *((_QWORD *)this + 293);
    v71 = 520LL * v68;
    if ( !*(_DWORD *)(v71 + v70 + 208) )
    {
      *(_QWORD *)(v71 + v70 + 512) = *((_QWORD *)this + 456) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v72 = 0;
  *((_DWORD *)this + 966) = v180;
  *((_DWORD *)this + 967) = v181;
  *((_DWORD *)this + 968) = v179;
  *((_DWORD *)this + 969) = v182;
  *((_DWORD *)this + 970) = v190;
  v176 = 0;
  while ( 2 )
  {
    v73 = *(_QWORD *)(520LL * v72 + *((_QWORD *)this + 293) + 512);
    if ( !v73 )
    {
LABEL_116:
      v176 = ++v72;
      if ( v72 >= v6 )
        goto LABEL_125;
      continue;
    }
    break;
  }
  *(_QWORD *)&v259[24] = *(_QWORD *)(520LL * v72 + *((_QWORD *)this + 293) + 512);
  *(_QWORD *)&v259[8] = &v176;
  v74 = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_QUERYADAPTERINFO *)v259, j);
  v77 = v74;
  if ( v74 >= 0 )
  {
    v78 = v176;
    *(_QWORD *)(v73 + 136) = this;
    *(_DWORD *)(v73 + 144) = v78;
    *(_QWORD *)(v73 + 152) = v73;
    KeInitializeSpinLock((PKSPIN_LOCK)(v73 + 160));
    *(_BYTE *)(v73 + 240) = 0;
    *(_DWORD *)(v73 + 244) = -1;
    v72 = v176;
    goto LABEL_116;
  }
  v79 = WdLogNewEntry5_WdTrace(v76, v75);
  *(_QWORD *)(v79 + 24) = v176;
  v80 = 0;
  for ( *(_QWORD *)(v79 + 32) = v77; v80 < *((_DWORD *)this + 622); ++v80 )
  {
    v81 = 520LL * v80;
    v82 = *((_QWORD *)this + 293);
    if ( !*(_DWORD *)(v81 + v82 + 208) )
      *(_QWORD *)(v81 + v82 + 512) = 0LL;
  }
  v83 = (void *)*((_QWORD *)this + 456);
  *((_DWORD *)this + 914) = 0;
  if ( v83 )
    ExFreePoolWithTag(v83, 0);
  *((_QWORD *)this + 456) = 0LL;
LABEL_125:
  v84 = 0;
  v85 = *((_DWORD *)this + 914);
  if ( v85 )
  {
    v86 = *((_QWORD *)this + 456);
    while ( 1 )
    {
      v87 = v84;
      v88 = 248LL * v84;
      v89 = *(_DWORD *)(v88 + v86);
      v90 = *(unsigned int *)(v88 + v86 + 144);
      if ( v89 > 0x20 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v84);
        v42[3] = v90;
        goto LABEL_103;
      }
      v91 = 0;
      if ( v89 )
        break;
LABEL_135:
      if ( ++v84 >= v85 )
        goto LABEL_136;
    }
    v92 = 62LL * v84;
    while ( 1 )
    {
      v93 = *(_DWORD *)(v86 + 4 * (v92 + v91) + 4);
      if ( !v93 )
        break;
      if ( v91 )
      {
        v87 = v92 + v91 - 1;
        if ( v93 > *(_DWORD *)(v86 + 4 * v87 + 4) )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v87);
          v42[3] = v90;
          v42[4] = v91;
          v42[5] = v91 - 1;
          goto LABEL_103;
        }
      }
      if ( ++v91 >= v89 )
        goto LABEL_135;
    }
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v87);
    v42[3] = v90;
    v42[4] = v91;
LABEL_103:
    WdLogEvent5_WdError(v42);
    LODWORD(v17) = -1073741811;
    goto LABEL_195;
  }
LABEL_136:
  v94 = (ADAPTER_RENDER *)*((_QWORD *)this + 289);
  *((_DWORD *)this + 694) = v191;
  if ( v94 )
  {
    v95 = ADAPTER_RENDER::InitializePowerManagement(v94);
    v17 = v95;
    if ( v95 < 0 )
    {
      v97 = WdLogNewEntry5_WdError(v96);
      *(_QWORD *)(v97 + 32) = 7LL;
      goto LABEL_194;
    }
  }
  v98 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 288);
  if ( v98 )
  {
    v99 = ADAPTER_DISPLAY::InitializePowerManagement(v98);
    v17 = v99;
    if ( v99 < 0 )
    {
      v97 = WdLogNewEntry5_WdError(v100);
      *(_QWORD *)(v97 + 32) = 8LL;
      goto LABEL_194;
    }
  }
  v101 = (_QWORD *)((char *)this + 2352);
  v102 = PoFxRegisterDevice(*((_QWORD *)this + 24), v23, (char *)this + 2352);
  v104 = 0;
  v17 = v102;
  if ( v102 < 0 )
  {
    v67 = WdLogNewEntry5_WdError(v103);
    *(_QWORD *)(v67 + 24) = v17;
    goto LABEL_107;
  }
  KeInitializeEvent((PRKEVENT)((char *)this + 2512), SynchronizationEvent, 0);
  *((_QWORD *)this + 350) = (char *)this + 2792;
  *((_QWORD *)this + 349) = (char *)this + 2792;
  *((_BYTE *)this + 2780) = 0;
  TimeIncrement = KeQueryTimeIncrement();
  memset((char *)this + 2536, 0, 0x60uLL);
  v106 = v193;
  *((_QWORD *)this + 317) = 10LL * v192;
  v107 = 5 * v106;
  v108 = v194;
  *((_QWORD *)this + 319) = 2 * v107;
  *((_QWORD *)this + 321) = 10 * v108;
  v109 = (unsigned int)(10000 * (unsigned __int64)v195 / TimeIncrement);
  v110 = v196;
  *((_QWORD *)this + 318) = v109;
  *((_QWORD *)this + 324) = v109;
  v111 = 5 * v110;
  v112 = v197;
  *((_QWORD *)this + 323) = 2 * v111;
  v113 = 5 * v112;
  v114 = v198;
  *((_QWORD *)this + 325) = 2 * v113;
  v115 = 5 * v114;
  v116 = v199;
  *((_QWORD *)this + 327) = 2 * v115;
  *((_QWORD *)this + 329) = (char *)this + 2536;
  v117 = 5 * v116;
  v118 = v200;
  *((_QWORD *)this + 361) = 2 * v117;
  v119 = 10000LL * v201;
  *((_QWORD *)this + 330) = 10 * v118;
  v120 = v202;
  *((_QWORD *)this + 331) = (unsigned int)(v119 / TimeIncrement);
  v121 = 10000LL * v203;
  *((_QWORD *)this + 332) = 10 * v120;
  v122 = v204;
  *((_QWORD *)this + 333) = (unsigned int)(v121 / TimeIncrement);
  v123 = 5 * v122;
  v124 = 10000LL * v205;
  *((_QWORD *)this + 334) = 2 * v123;
  *((_QWORD *)this + 335) = (unsigned int)(v124 / TimeIncrement);
  v125 = v206;
  *((_QWORD *)this + 337) = 0LL;
  v175 = 0;
  v126 = 5 * v125;
  v127 = v207;
  *((_QWORD *)this + 336) = 2 * v126;
  v128 = 5 * v127;
  v129 = v208;
  *((_QWORD *)this + 339) = 2 * v128;
  v130 = 5 * v129;
  v131 = v209;
  *((_QWORD *)this + 340) = 2 * v130;
  v132 = 5 * v131;
  v133 = v210;
  *((_QWORD *)this + 341) = 2 * v132;
  v134 = 5 * v133;
  v135 = v211;
  *((_QWORD *)this + 342) = 2 * v134;
  v136 = 5 * v135;
  v137 = v212;
  *((_QWORD *)this + 343) = 2 * v136;
  v138 = 5 * v137;
  v139 = v213;
  *((_QWORD *)this + 344) = 2 * v138;
  v140 = 5 * v139;
  v141 = v214;
  *((_QWORD *)this + 345) = 2 * v140;
  *((_QWORD *)this + 346) = 10 * v141;
  *((_QWORD *)this + 355) = (char *)this + 2832;
  *((_QWORD *)this + 354) = (char *)this + 2832;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 360);
  while ( 2 )
  {
    v142 = *((_QWORD *)this + 293) + 520LL * v104;
    *(_BYTE *)(v142 + 356) = 1;
    v143 = (DXGADAPTER *)(v142 + 424);
    *(_QWORD *)(v142 + 424) = 0LL;
    *(_QWORD *)(v142 + 432) = 0LL;
    v144 = *(_DWORD *)(v142 + 208);
    if ( !v144 )
    {
      *(_BYTE *)(v142 + 357) = 1;
      v155 = (DXGADAPTER **)*((_QWORD *)this + 359);
      if ( *v155 != (DXGADAPTER *)((char *)this + 2864) )
        __fastfail(3u);
      *(_QWORD *)(v142 + 432) = v155;
      *(_QWORD *)v143 = (char *)this + 2864;
      *v155 = v143;
      v156 = 0LL;
      *((_QWORD *)this + 359) = v143;
      v157 = *(_DWORD *)(v142 + 8);
      if ( v157 > 1 )
      {
        v158 = (unsigned __int64 *)(v142 + 40);
        v159 = v157 - 1;
        do
        {
          v160 = *v158;
          v158 += 3;
          if ( v156 < v160 )
            v156 = v160;
          --v159;
        }
        while ( v159 );
      }
      *(_DWORD *)(v142 + 388) = 1;
      v161 = 0;
      v162 = (unsigned __int64 *)((char *)this + 2536);
      while ( *v162 < v156 )
      {
        ++v161;
        v162 += 2;
        if ( v161 >= 2 )
          goto LABEL_176;
      }
      *(_DWORD *)(v142 + 388) = v161;
LABEL_176:
      v163 = *(_DWORD *)(v142 + 4);
      *(_DWORD *)(v142 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v163, *(_QWORD *)(*((_QWORD *)this + 329) + 32LL));
      ++*((_DWORD *)this + 626);
      goto LABEL_177;
    }
    v145 = v144 - 1;
    if ( !v145 )
    {
      v154 = v216;
      goto LABEL_164;
    }
    v146 = v145 - 1;
    if ( !v146 )
    {
      v154 = v215;
LABEL_164:
      v150 = *(_DWORD *)(v142 + 4);
      v152 = 10 * v154;
      v151 = this;
      goto LABEL_156;
    }
    v147 = v146 - 1;
    if ( !v147 )
    {
      v153 = (DXGADAPTER **)*((_QWORD *)this + 357);
      if ( *v153 != (DXGADAPTER *)((char *)this + 2848) )
        __fastfail(3u);
      *(_QWORD *)v143 = (char *)this + 2848;
      *(_QWORD *)(v142 + 432) = v153;
      *v153 = v143;
      *((_QWORD *)this + 357) = v143;
      goto LABEL_160;
    }
    v148 = v147 - 1;
    if ( !v148 )
      goto LABEL_177;
    v149 = v148 - 2;
    if ( !v149 )
      goto LABEL_177;
    if ( v149 == 1 )
    {
      v175 = 1;
LABEL_160:
      if ( (*(_DWORD *)(v142 + 216) & 0x10) != 0 )
        *(_BYTE *)(v142 + 360) = 1;
      goto LABEL_177;
    }
    v150 = *(_DWORD *)(v142 + 4);
    v151 = this;
    if ( (_DWORD)v185 == -1 )
      v152 = -1LL;
    else
      v152 = 10LL * (unsigned int)v185;
LABEL_156:
    DXGADAPTER::SetPowerComponentLatencyCB(v151, v150, v152);
LABEL_177:
    if ( HIDWORD(v185) == -1 )
      v164 = -1LL;
    else
      v164 = 10000LL * HIDWORD(v185);
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v142 + 4), v164);
    KeInitializeSpinLock((PKSPIN_LOCK)(v142 + 504));
    if ( *(_DWORD *)(v142 + 8) <= 1u || (v165 = *(_QWORD *)(v142 + 48), v165 == -1) )
    {
      v166 = *((_QWORD *)this + 361);
    }
    else
    {
      v166 = *((_QWORD *)this + 361);
      if ( v165 > v166 )
        v166 = *(_QWORD *)(v142 + 48);
    }
    ++v104;
    *(_QWORD *)(v142 + 496) = v166;
    if ( v104 < v6 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*v101, 10LL * v217);
  if ( *((_DWORD *)this + 69) == 1297040209 && *((_DWORD *)this + 492) == 4608 )
  {
    KeInitializeEvent((PRKEVENT)((char *)this + 3032), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3056), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)((char *)this + 3080), SynchronizationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)this + 388);
    *((_QWORD *)this + 391) = (char *)this + 3120;
    *((_QWORD *)this + 390) = (char *)this + 3120;
    InitializeSListHead((PSLIST_HEADER)this + 196);
    v168 = 0LL;
    v169 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 196, (PSLIST_ENTRY)((char *)this + v168 + 3168));
      v168 += 32LL;
      --v169;
    }
    while ( v169 );
    *(_DWORD *)&v259[40] = 48;
    *(_QWORD *)&v259[48] = 0LL;
    *(_DWORD *)&v259[64] = 512;
    *(_QWORD *)&v259[56] = 0LL;
    *(_OWORD *)&v259[72] = 0LL;
    SystemThread = PsCreateSystemThread(
                     (PHANDLE)this + 394,
                     0x1FFFFFu,
                     (POBJECT_ATTRIBUTES)&v259[40],
                     0LL,
                     0LL,
                     DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
                     this);
    v17 = SystemThread;
    if ( SystemThread < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v171);
      *(_QWORD *)(v67 + 24) = v17;
      *(_QWORD *)(v67 + 32) = 8LL;
      goto LABEL_107;
    }
  }
  LOBYTE(v167) = v175;
  v172 = DpiEnablePowerManagement(*((_QWORD *)this + 24), *v101, v167);
  v17 = v172;
  if ( v172 >= 0 )
  {
    ExFreePoolWithTag(v23, 0);
    return 0LL;
  }
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  v97 = WdLogNewEntry5_WdError(v173);
  *(_QWORD *)(v97 + 32) = 9LL;
LABEL_194:
  *(_QWORD *)(v97 + 24) = v17;
  WdLogEvent5_WdError(v97);
LABEL_195:
  ExFreePoolWithTag(v23, 0);
LABEL_196:
  if ( *((_QWORD *)this + 294) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 294) = 0LL;
  }
  return (unsigned int)v17;
}
