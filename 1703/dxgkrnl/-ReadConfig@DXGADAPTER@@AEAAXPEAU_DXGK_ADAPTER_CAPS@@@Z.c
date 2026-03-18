/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010AC8C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

void __fastcall DXGADAPTER::ReadConfig(DXGADAPTER *this, struct _DXGK_ADAPTER_CAPS *a2)
{
  bool v4; // zf
  bool v5; // al
  bool v6; // al
  bool v7; // al
  bool v8; // al
  bool v9; // al
  bool v10; // al
  bool v11; // al
  bool v12; // al
  char v13; // al
  bool v14; // al
  char v15; // al
  int v16; // edx
  char v17; // r8
  char v18; // al
  char v19; // al
  char v20; // al
  bool v21; // al
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h] BYREF
  int v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+74h] [rbp-8Ch] BYREF
  int v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+7Ch] [rbp-84h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+84h] [rbp-7Ch] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+8Ch] [rbp-74h] BYREF
  int v46; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+94h] [rbp-6Ch] BYREF
  int v48; // [rsp+98h] [rbp-68h] BYREF
  int v49; // [rsp+9Ch] [rbp-64h] BYREF
  int v50; // [rsp+A0h] [rbp-60h] BYREF
  int v51; // [rsp+A4h] [rbp-5Ch] BYREF
  int v52; // [rsp+A8h] [rbp-58h] BYREF
  int v53; // [rsp+ACh] [rbp-54h] BYREF
  int v54; // [rsp+B0h] [rbp-50h] BYREF
  int v55; // [rsp+B4h] [rbp-4Ch] BYREF
  int v56; // [rsp+B8h] [rbp-48h] BYREF
  int v57; // [rsp+BCh] [rbp-44h] BYREF
  int v58; // [rsp+C0h] [rbp-40h] BYREF
  int v59; // [rsp+C4h] [rbp-3Ch] BYREF
  int v60; // [rsp+C8h] [rbp-38h] BYREF
  int v61; // [rsp+CCh] [rbp-34h] BYREF
  int v62; // [rsp+D0h] [rbp-30h] BYREF
  int v63; // [rsp+D4h] [rbp-2Ch] BYREF
  int v64; // [rsp+D8h] [rbp-28h] BYREF
  int v65; // [rsp+DCh] [rbp-24h] BYREF
  int v66; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+E4h] [rbp-1Ch] BYREF
  int v68; // [rsp+E8h] [rbp-18h] BYREF
  int v69; // [rsp+ECh] [rbp-14h] BYREF
  int v70; // [rsp+F0h] [rbp-10h] BYREF
  int v71; // [rsp+F4h] [rbp-Ch] BYREF
  int v72; // [rsp+F8h] [rbp-8h] BYREF
  int v73; // [rsp+FCh] [rbp-4h] BYREF
  int v74; // [rsp+100h] [rbp+0h] BYREF
  int v75; // [rsp+104h] [rbp+4h] BYREF
  __int64 v76; // [rsp+108h] [rbp+8h] BYREF
  __int64 v77; // [rsp+110h] [rbp+10h] BYREF
  __int64 v78; // [rsp+118h] [rbp+18h]
  __int64 v79; // [rsp+120h] [rbp+20h] BYREF
  int v80; // [rsp+128h] [rbp+28h]
  const wchar_t *v81; // [rsp+130h] [rbp+30h]
  int *v82; // [rsp+138h] [rbp+38h]
  int v83; // [rsp+140h] [rbp+40h]
  int *v84; // [rsp+148h] [rbp+48h]
  int v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  int v87; // [rsp+160h] [rbp+60h]
  const wchar_t *v88; // [rsp+168h] [rbp+68h]
  int *v89; // [rsp+170h] [rbp+70h]
  int v90; // [rsp+178h] [rbp+78h]
  int *v91; // [rsp+180h] [rbp+80h]
  int v92; // [rsp+188h] [rbp+88h]
  __int64 v93; // [rsp+190h] [rbp+90h]
  int v94; // [rsp+198h] [rbp+98h]
  const wchar_t *v95; // [rsp+1A0h] [rbp+A0h]
  int *v96; // [rsp+1A8h] [rbp+A8h]
  int v97; // [rsp+1B0h] [rbp+B0h]
  int *v98; // [rsp+1B8h] [rbp+B8h]
  int v99; // [rsp+1C0h] [rbp+C0h]
  __int64 v100; // [rsp+1C8h] [rbp+C8h]
  int v101; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v102; // [rsp+1D8h] [rbp+D8h]
  __int64 *v103; // [rsp+1E0h] [rbp+E0h]
  int v104; // [rsp+1E8h] [rbp+E8h]
  __int64 *v105; // [rsp+1F0h] [rbp+F0h]
  int v106; // [rsp+1F8h] [rbp+F8h]
  __int64 v107; // [rsp+200h] [rbp+100h]
  int v108; // [rsp+208h] [rbp+108h]
  const wchar_t *v109; // [rsp+210h] [rbp+110h]
  int *v110; // [rsp+218h] [rbp+118h]
  int v111; // [rsp+220h] [rbp+120h]
  int *v112; // [rsp+228h] [rbp+128h]
  int v113; // [rsp+230h] [rbp+130h]
  __int64 v114; // [rsp+238h] [rbp+138h]
  int v115; // [rsp+240h] [rbp+140h]
  const wchar_t *v116; // [rsp+248h] [rbp+148h]
  int *v117; // [rsp+250h] [rbp+150h]
  int v118; // [rsp+258h] [rbp+158h]
  int *v119; // [rsp+260h] [rbp+160h]
  int v120; // [rsp+268h] [rbp+168h]
  __int64 v121; // [rsp+270h] [rbp+170h]
  int v122; // [rsp+278h] [rbp+178h]
  const wchar_t *v123; // [rsp+280h] [rbp+180h]
  int *v124; // [rsp+288h] [rbp+188h]
  int v125; // [rsp+290h] [rbp+190h]
  int *v126; // [rsp+298h] [rbp+198h]
  int v127; // [rsp+2A0h] [rbp+1A0h]
  __int64 v128; // [rsp+2A8h] [rbp+1A8h]
  int v129; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v130; // [rsp+2B8h] [rbp+1B8h]
  int *v131; // [rsp+2C0h] [rbp+1C0h]
  int v132; // [rsp+2C8h] [rbp+1C8h]
  int *v133; // [rsp+2D0h] [rbp+1D0h]
  int v134; // [rsp+2D8h] [rbp+1D8h]
  __int64 v135; // [rsp+2E0h] [rbp+1E0h]
  int v136; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v137; // [rsp+2F0h] [rbp+1F0h]
  int *v138; // [rsp+2F8h] [rbp+1F8h]
  int v139; // [rsp+300h] [rbp+200h]
  int *v140; // [rsp+308h] [rbp+208h]
  int v141; // [rsp+310h] [rbp+210h]
  __int64 v142; // [rsp+318h] [rbp+218h]
  int v143; // [rsp+320h] [rbp+220h]
  const wchar_t *v144; // [rsp+328h] [rbp+228h]
  int *v145; // [rsp+330h] [rbp+230h]
  int v146; // [rsp+338h] [rbp+238h]
  int *v147; // [rsp+340h] [rbp+240h]
  int v148; // [rsp+348h] [rbp+248h]
  __int64 v149; // [rsp+350h] [rbp+250h]
  int v150; // [rsp+358h] [rbp+258h]
  const wchar_t *v151; // [rsp+360h] [rbp+260h]
  int *v152; // [rsp+368h] [rbp+268h]
  int v153; // [rsp+370h] [rbp+270h]
  int *v154; // [rsp+378h] [rbp+278h]
  int v155; // [rsp+380h] [rbp+280h]
  __int64 v156; // [rsp+388h] [rbp+288h]
  int v157; // [rsp+390h] [rbp+290h]
  const wchar_t *v158; // [rsp+398h] [rbp+298h]
  int *v159; // [rsp+3A0h] [rbp+2A0h]
  int v160; // [rsp+3A8h] [rbp+2A8h]
  int *v161; // [rsp+3B0h] [rbp+2B0h]
  int v162; // [rsp+3B8h] [rbp+2B8h]
  __int64 v163; // [rsp+3C0h] [rbp+2C0h]
  int v164; // [rsp+3C8h] [rbp+2C8h]
  const wchar_t *v165; // [rsp+3D0h] [rbp+2D0h]
  int *v166; // [rsp+3D8h] [rbp+2D8h]
  int v167; // [rsp+3E0h] [rbp+2E0h]
  int *v168; // [rsp+3E8h] [rbp+2E8h]
  int v169; // [rsp+3F0h] [rbp+2F0h]
  __int64 v170; // [rsp+3F8h] [rbp+2F8h]
  int v171; // [rsp+400h] [rbp+300h]
  const wchar_t *v172; // [rsp+408h] [rbp+308h]
  int *v173; // [rsp+410h] [rbp+310h]
  int v174; // [rsp+418h] [rbp+318h]
  int *v175; // [rsp+420h] [rbp+320h]
  int v176; // [rsp+428h] [rbp+328h]
  __int64 v177; // [rsp+430h] [rbp+330h]
  int v178; // [rsp+438h] [rbp+338h]
  const wchar_t *v179; // [rsp+440h] [rbp+340h]
  int *v180; // [rsp+448h] [rbp+348h]
  int v181; // [rsp+450h] [rbp+350h]
  int *v182; // [rsp+458h] [rbp+358h]
  int v183; // [rsp+460h] [rbp+360h]
  __int64 v184; // [rsp+468h] [rbp+368h]
  int v185; // [rsp+470h] [rbp+370h]
  const wchar_t *v186; // [rsp+478h] [rbp+378h]
  int *v187; // [rsp+480h] [rbp+380h]
  int v188; // [rsp+488h] [rbp+388h]
  int *v189; // [rsp+490h] [rbp+390h]
  int v190; // [rsp+498h] [rbp+398h]
  __int64 v191; // [rsp+4A0h] [rbp+3A0h]
  int v192; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v193; // [rsp+4B0h] [rbp+3B0h]
  int *v194; // [rsp+4B8h] [rbp+3B8h]
  int v195; // [rsp+4C0h] [rbp+3C0h]
  int *v196; // [rsp+4C8h] [rbp+3C8h]
  int v197; // [rsp+4D0h] [rbp+3D0h]
  __int64 v198; // [rsp+4D8h] [rbp+3D8h]
  int v199; // [rsp+4E0h] [rbp+3E0h]
  const wchar_t *v200; // [rsp+4E8h] [rbp+3E8h]
  int *v201; // [rsp+4F0h] [rbp+3F0h]
  int v202; // [rsp+4F8h] [rbp+3F8h]
  int *v203; // [rsp+500h] [rbp+400h]
  int v204; // [rsp+508h] [rbp+408h]
  __int64 v205; // [rsp+510h] [rbp+410h]
  int v206; // [rsp+518h] [rbp+418h]
  const wchar_t *v207; // [rsp+520h] [rbp+420h]
  int *v208; // [rsp+528h] [rbp+428h]
  int v209; // [rsp+530h] [rbp+430h]
  int *v210; // [rsp+538h] [rbp+438h]
  int v211; // [rsp+540h] [rbp+440h]
  __int64 v212; // [rsp+548h] [rbp+448h]
  int v213; // [rsp+550h] [rbp+450h]
  const wchar_t *v214; // [rsp+558h] [rbp+458h]
  int *v215; // [rsp+560h] [rbp+460h]
  int v216; // [rsp+568h] [rbp+468h]
  int *v217; // [rsp+570h] [rbp+470h]
  int v218; // [rsp+578h] [rbp+478h]
  __int64 v219; // [rsp+580h] [rbp+480h]
  int v220; // [rsp+588h] [rbp+488h]
  const wchar_t *v221; // [rsp+590h] [rbp+490h]
  int *v222; // [rsp+598h] [rbp+498h]
  int v223; // [rsp+5A0h] [rbp+4A0h]
  int *v224; // [rsp+5A8h] [rbp+4A8h]
  int v225; // [rsp+5B0h] [rbp+4B0h]
  __int64 v226; // [rsp+5B8h] [rbp+4B8h]
  int v227; // [rsp+5C0h] [rbp+4C0h]
  const wchar_t *v228; // [rsp+5C8h] [rbp+4C8h]
  int *v229; // [rsp+5D0h] [rbp+4D0h]
  int v230; // [rsp+5D8h] [rbp+4D8h]
  int *v231; // [rsp+5E0h] [rbp+4E0h]
  int v232; // [rsp+5E8h] [rbp+4E8h]
  __int64 v233; // [rsp+5F0h] [rbp+4F0h]
  int v234; // [rsp+5F8h] [rbp+4F8h]
  const wchar_t *v235; // [rsp+600h] [rbp+500h]
  int *v236; // [rsp+608h] [rbp+508h]
  int v237; // [rsp+610h] [rbp+510h]
  int *v238; // [rsp+618h] [rbp+518h]
  int v239; // [rsp+620h] [rbp+520h]
  __int64 v240; // [rsp+628h] [rbp+528h]
  int v241; // [rsp+630h] [rbp+530h]
  const wchar_t *v242; // [rsp+638h] [rbp+538h]
  int *v243; // [rsp+640h] [rbp+540h]
  int v244; // [rsp+648h] [rbp+548h]
  int *v245; // [rsp+650h] [rbp+550h]
  int v246; // [rsp+658h] [rbp+558h]
  __int64 v247; // [rsp+660h] [rbp+560h]
  int v248; // [rsp+668h] [rbp+568h]
  const wchar_t *v249; // [rsp+670h] [rbp+570h]
  int *v250; // [rsp+678h] [rbp+578h]
  int v251; // [rsp+680h] [rbp+580h]
  int *v252; // [rsp+688h] [rbp+588h]
  int v253; // [rsp+690h] [rbp+590h]
  __int64 v254; // [rsp+698h] [rbp+598h]
  int v255; // [rsp+6A0h] [rbp+5A0h]
  const wchar_t *v256; // [rsp+6A8h] [rbp+5A8h]
  int *v257; // [rsp+6B0h] [rbp+5B0h]
  int v258; // [rsp+6B8h] [rbp+5B8h]
  int *v259; // [rsp+6C0h] [rbp+5C0h]
  int v260; // [rsp+6C8h] [rbp+5C8h]
  __int64 v261; // [rsp+6D0h] [rbp+5D0h]
  int v262; // [rsp+6D8h] [rbp+5D8h]
  const wchar_t *v263; // [rsp+6E0h] [rbp+5E0h]
  int *v264; // [rsp+6E8h] [rbp+5E8h]
  int v265; // [rsp+6F0h] [rbp+5F0h]
  int *v266; // [rsp+6F8h] [rbp+5F8h]
  int v267; // [rsp+700h] [rbp+600h]
  __int64 v268; // [rsp+708h] [rbp+608h]
  int v269; // [rsp+710h] [rbp+610h]
  const wchar_t *v270; // [rsp+718h] [rbp+618h]
  int *v271; // [rsp+720h] [rbp+620h]
  int v272; // [rsp+728h] [rbp+628h]
  int *v273; // [rsp+730h] [rbp+630h]
  int v274; // [rsp+738h] [rbp+638h]
  __int64 v275; // [rsp+740h] [rbp+640h]
  int v276; // [rsp+748h] [rbp+648h]
  const wchar_t *v277; // [rsp+750h] [rbp+650h]
  int *v278; // [rsp+758h] [rbp+658h]
  int v279; // [rsp+760h] [rbp+660h]
  int *v280; // [rsp+768h] [rbp+668h]
  int v281; // [rsp+770h] [rbp+670h]
  __int64 v282; // [rsp+778h] [rbp+678h]
  int v283; // [rsp+780h] [rbp+680h]
  const wchar_t *v284; // [rsp+788h] [rbp+688h]
  int *v285; // [rsp+790h] [rbp+690h]
  int v286; // [rsp+798h] [rbp+698h]
  int *v287; // [rsp+7A0h] [rbp+6A0h]
  int v288; // [rsp+7A8h] [rbp+6A8h]
  __int64 v289; // [rsp+7B0h] [rbp+6B0h]
  int v290; // [rsp+7B8h] [rbp+6B8h]
  _BYTE v291[40]; // [rsp+7C0h] [rbp+6C0h] BYREF

  v49 = 0;
  v39 = 0;
  v55 = 7000;
  v34 = 7000;
  v50 = 0;
  v81 = L"ForceDirectFlip";
  v40 = 0;
  v82 = &v39;
  v54 = 0;
  v84 = &v49;
  v41 = 0;
  v52 = 0;
  v28 = 0;
  v24 = 0;
  v22 = 0;
  v25 = 0;
  v23 = 0;
  v51 = 1;
  v26 = 1;
  v76 = 1395864371LL;
  v77 = 16LL;
  v78 = 1395864371LL;
  v53 = 0;
  v27 = 0;
  v56 = 0;
  v29 = 0;
  v57 = 0;
  v30 = 0;
  v58 = 0;
  v31 = 0;
  v59 = 0;
  v32 = 0;
  v60 = 0;
  v33 = 0;
  v61 = 1;
  v35 = 1;
  v62 = 0;
  v47 = 0;
  v63 = 0;
  v36 = 0;
  v65 = 0;
  v37 = 0;
  v64 = 0;
  v38 = 0;
  v66 = 0;
  v48 = 0;
  v67 = 1;
  v42 = 1;
  v68 = 0;
  v43 = 0;
  v70 = 0;
  v69 = 0;
  v71 = 0;
  v45 = 0;
  v73 = 0;
  v72 = 0;
  v74 = 0;
  v46 = 0;
  v75 = 0;
  v44 = 0;
  v79 = 0LL;
  v80 = 288;
  v83 = 67108868;
  v85 = 4;
  v86 = 0LL;
  v87 = 288;
  v88 = L"DisableOverlays";
  v90 = 67108868;
  v89 = &v40;
  v92 = 4;
  v91 = &v50;
  v95 = L"EnableOfferReclaimOnDriver";
  v96 = &v26;
  v98 = &v51;
  v102 = L"LeanMemoryLimit";
  v103 = &v77;
  v105 = &v76;
  v109 = L"ForceEnableDxgMms2";
  v110 = &v28;
  v112 = &v52;
  v116 = L"ContextNoPatchMode";
  v117 = &v27;
  v119 = &v53;
  v124 = &v22;
  v126 = &v24;
  v131 = &v23;
  v133 = &v25;
  v137 = L"Force32BitFences";
  v138 = &v41;
  v140 = &v54;
  v144 = L"InitialPagingQueueFenceValue";
  v93 = 0LL;
  v94 = 288;
  v97 = 67108868;
  v99 = 4;
  v100 = 0LL;
  v101 = 288;
  v104 = 184549387;
  v106 = 8;
  v107 = 0LL;
  v108 = 288;
  v111 = 67108868;
  v113 = 4;
  v114 = 0LL;
  v115 = 288;
  v118 = 67108868;
  v120 = 4;
  v121 = 0LL;
  v122 = 288;
  v123 = L"ForceToMapGpuVa";
  v125 = 67108868;
  v127 = 4;
  v128 = 0LL;
  v129 = 288;
  v130 = L"ForceAccessedPhysically";
  v132 = 67108868;
  v134 = 4;
  v135 = 0LL;
  v136 = 288;
  v139 = 67108868;
  v141 = 4;
  v142 = 0LL;
  v143 = 288;
  v146 = 67108868;
  v145 = &v34;
  v147 = &v55;
  v151 = L"ForceInitPagingProcessVaSpace";
  v152 = &v29;
  v154 = &v56;
  v158 = L"DisableGdiContextGpuVa";
  v159 = &v30;
  v161 = &v57;
  v165 = L"DisablePagingContextGpuVa";
  v166 = &v31;
  v168 = &v58;
  v172 = L"DisableMonitoredFenceGpuVa";
  v173 = &v32;
  v175 = &v59;
  v179 = L"ForceExplicitResidencyNotification";
  v180 = &v33;
  v182 = &v60;
  v187 = &v22;
  v189 = &v24;
  v194 = &v23;
  v196 = &v25;
  v200 = L"DriverManagesResidencyOverride";
  v201 = &v35;
  v148 = 4;
  v149 = 0LL;
  v150 = 288;
  v153 = 67108868;
  v155 = 4;
  v156 = 0LL;
  v157 = 288;
  v160 = 67108868;
  v162 = 4;
  v163 = 0LL;
  v164 = 288;
  v167 = 67108868;
  v169 = 4;
  v170 = 0LL;
  v171 = 288;
  v174 = 67108868;
  v176 = 4;
  v177 = 0LL;
  v178 = 288;
  v181 = 67108868;
  v183 = 4;
  v184 = 0LL;
  v185 = 288;
  v186 = L"ForceToMapGpuVa";
  v188 = 67108868;
  v190 = 4;
  v191 = 0LL;
  v192 = 288;
  v193 = L"ForceAccessedPhysically";
  v195 = 67108868;
  v197 = 4;
  v198 = 0LL;
  v199 = 288;
  v202 = 67108868;
  v204 = 4;
  v203 = &v61;
  v207 = L"GdiPhysicalAdapterIndex";
  v208 = &v47;
  v210 = &v62;
  v214 = L"ForceReplicateGdiContent";
  v215 = &v36;
  v217 = &v63;
  v221 = L"EnableTimedCalls";
  v222 = &v38;
  v224 = &v64;
  v228 = L"CreateGdiPrimaryOnSlaveGpu";
  v229 = &v37;
  v231 = &v65;
  v235 = L"ForceSurpriseRemovalSupport";
  v236 = &v48;
  v238 = &v66;
  v242 = L"EnableDecodeMPO";
  v243 = &v42;
  v245 = &v67;
  v249 = L"DisableBadDriverCheckForHwProtection";
  v250 = &v43;
  v252 = &v68;
  v256 = L"ForceSecondaryMPOSupport";
  v257 = &v69;
  v205 = 0LL;
  v206 = 288;
  v209 = 67108868;
  v211 = 4;
  v212 = 0LL;
  v213 = 288;
  v216 = 67108868;
  v218 = 4;
  v219 = 0LL;
  v220 = 288;
  v223 = 67108868;
  v225 = 4;
  v226 = 0LL;
  v227 = 288;
  v230 = 67108868;
  v232 = 4;
  v233 = 0LL;
  v234 = 288;
  v237 = 67108868;
  v239 = 4;
  v240 = 0LL;
  v241 = 288;
  v244 = 67108868;
  v246 = 4;
  v247 = 0LL;
  v248 = 288;
  v251 = 67108868;
  v253 = 4;
  v254 = 0LL;
  v255 = 288;
  v258 = 67108868;
  v259 = &v70;
  v260 = 4;
  v263 = L"ForceSecondaryIFlipSupport";
  v267 = 4;
  v264 = &v45;
  v266 = &v71;
  v270 = L"EnablePanelFitterSupport";
  v271 = &v72;
  v273 = &v73;
  v277 = L"EnableMultiPlaneOverlay3DDIs";
  v278 = &v46;
  v280 = &v74;
  v284 = L"DisableSecondaryIFlipSupport";
  v285 = &v44;
  v274 = 4;
  v281 = 4;
  v288 = 4;
  v287 = &v75;
  v261 = 0LL;
  v262 = 288;
  v265 = 67108868;
  v268 = 0LL;
  v269 = 288;
  v272 = 67108868;
  v275 = 0LL;
  v276 = 288;
  v279 = 67108868;
  v282 = 0LL;
  v283 = 288;
  v286 = 67108868;
  v289 = 0LL;
  v290 = 0;
  memset(v291, 0, sizeof(v291));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v79, 0LL, 0LL);
  v4 = v28 == 0;
  *((_BYTE *)this + 2209) = v26 != 0;
  *((_DWORD *)this + 556) = v27;
  *((_QWORD *)this + 277) = v78;
  v5 = !v4;
  v4 = v22 == 0;
  *((_BYTE *)this + 2228) = v5;
  v6 = !v4;
  v4 = v23 == 0;
  *((_BYTE *)this + 2229) = v6;
  v7 = !v4;
  v4 = v29 == 0;
  *((_BYTE *)this + 2230) = v7;
  v8 = !v4;
  v4 = v30 == 0;
  *((_BYTE *)this + 2232) = v8;
  v9 = !v4;
  v4 = v31 == 0;
  *((_BYTE *)this + 2233) = v9;
  v10 = !v4;
  v4 = v32 == 0;
  *((_BYTE *)this + 2234) = v10;
  v11 = !v4;
  v4 = v33 == 0;
  *((_BYTE *)this + 2235) = v11;
  v12 = !v4;
  v4 = v35 == 0;
  *((_BYTE *)this + 2231) = v12;
  *((_DWORD *)this + 562) = v34;
  *((_BYTE *)this + 2236) = !v4;
  if ( v36 || (v13 = 0, (*((_DWORD *)this + 419) & 0x100) != 0) )
    v13 = 1;
  v4 = v37 == 0;
  *((_BYTE *)this + 2210) = v13;
  v14 = !v4;
  v4 = v38 == 0;
  *((_BYTE *)this + 2211) = v14;
  DXGADAPTER::Config = !v4 | DXGADAPTER::Config & 0xFE;
  if ( v39 )
    *((_BYTE *)this + 2147) = 1;
  if ( v40 )
    *((_BYTE *)this + 2148) = 0;
  if ( v41 )
    *((_DWORD *)this + 418) |= 0x20u;
  if ( *((_BYTE *)this + 2148) )
  {
    if ( *((_BYTE *)this + 2206) )
      *((_DWORD *)this + 538) = 2;
  }
  else
  {
    *((_DWORD *)this + 538) = 1;
  }
  v15 = *((_BYTE *)this + 2209);
  if ( *((int *)this + 486) < 4608 )
    v15 = 0;
  *((_BYTE *)this + 2209) = v15;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2236) = 0;
  if ( !v42 || (v18 = 1, !v17) )
    v18 = 0;
  v4 = v43 == 0;
  *((_BYTE *)this + 2237) = v18;
  *((_BYTE *)this + 2240) = 0;
  *((_BYTE *)this + 2238) = !v4;
  if ( !v44 && (*((_DWORD *)this + 417) & 0x10) != 0 )
  {
    if ( v16 >= 8448 )
    {
      *((_BYTE *)this + 2240) = 1;
    }
    else if ( v16 >= 0x2000 )
    {
      *((_BYTE *)this + 2240) = v45 != 0;
    }
  }
  *((_BYTE *)this + 2242) = 0;
  if ( *((_QWORD *)this + 113) )
  {
    v21 = v16 >= 8704 || v16 >= 8448 && ((*((_DWORD *)this + 75) & 0x200) != 0 || v46);
    *((_BYTE *)this + 2242) = v21;
  }
  if ( v17 && !*((_BYTE *)this + 2242) && !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) )
    *((_BYTE *)this + 2148) = 0;
  v19 = *((_BYTE *)this + 2242);
  *((_BYTE *)this + 2243) = 0;
  if ( !v19 )
    goto LABEL_23;
  if ( v16 >= 8704 && (*((_QWORD *)this + 138) || *((_QWORD *)this + 139)) )
    *((_BYTE *)this + 2243) = 1;
  if ( !*((_DWORD *)this + 545) )
LABEL_23:
    *((_DWORD *)this + 545) = 1;
  *((_BYTE *)this + 2241) = v19;
  if ( !v19 || (v20 = 1, !*((_BYTE *)this + 2148)) )
    v20 = 0;
  *((_BYTE *)this + 2239) = v20;
  if ( *((_DWORD *)this + 62) > 1u )
    *((_DWORD *)this + 577) = v47;
  if ( v48 )
    *(_BYTE *)a2 |= 0x10u;
}
