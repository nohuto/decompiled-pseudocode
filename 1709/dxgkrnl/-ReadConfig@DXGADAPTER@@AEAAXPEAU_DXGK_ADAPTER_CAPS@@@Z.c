/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0111D60
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
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
  char v16; // al
  int v17; // edx
  char v18; // r8
  int v19; // r9d
  char v20; // al
  bool v21; // al
  char v22; // al
  char v23; // al
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+74h] [rbp-8Ch] BYREF
  int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h] BYREF
  int v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+84h] [rbp-7Ch] BYREF
  int v46; // [rsp+88h] [rbp-78h] BYREF
  int v47; // [rsp+8Ch] [rbp-74h] BYREF
  int v48; // [rsp+90h] [rbp-70h] BYREF
  int v49; // [rsp+94h] [rbp-6Ch] BYREF
  int v50; // [rsp+98h] [rbp-68h] BYREF
  int v51; // [rsp+9Ch] [rbp-64h] BYREF
  int v52; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+A4h] [rbp-5Ch] BYREF
  int v54; // [rsp+A8h] [rbp-58h] BYREF
  int v55; // [rsp+ACh] [rbp-54h] BYREF
  int v56; // [rsp+B0h] [rbp-50h] BYREF
  int v57; // [rsp+B4h] [rbp-4Ch] BYREF
  int v58; // [rsp+B8h] [rbp-48h] BYREF
  int v59; // [rsp+BCh] [rbp-44h] BYREF
  int v60; // [rsp+C0h] [rbp-40h] BYREF
  int v61; // [rsp+C4h] [rbp-3Ch] BYREF
  int v62; // [rsp+C8h] [rbp-38h] BYREF
  int v63; // [rsp+CCh] [rbp-34h] BYREF
  int v64; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+D4h] [rbp-2Ch] BYREF
  int v66; // [rsp+D8h] [rbp-28h] BYREF
  int v67; // [rsp+DCh] [rbp-24h] BYREF
  int v68; // [rsp+E0h] [rbp-20h] BYREF
  int v69; // [rsp+E4h] [rbp-1Ch] BYREF
  int v70; // [rsp+E8h] [rbp-18h] BYREF
  int v71; // [rsp+ECh] [rbp-14h] BYREF
  int v72; // [rsp+F0h] [rbp-10h] BYREF
  int v73; // [rsp+F4h] [rbp-Ch] BYREF
  int v74; // [rsp+F8h] [rbp-8h] BYREF
  int v75; // [rsp+FCh] [rbp-4h] BYREF
  int v76; // [rsp+100h] [rbp+0h] BYREF
  int v77; // [rsp+104h] [rbp+4h] BYREF
  int v78; // [rsp+108h] [rbp+8h] BYREF
  int v79; // [rsp+10Ch] [rbp+Ch] BYREF
  int v80; // [rsp+110h] [rbp+10h] BYREF
  int v81; // [rsp+114h] [rbp+14h] BYREF
  __int64 v82; // [rsp+118h] [rbp+18h] BYREF
  __int64 v83; // [rsp+120h] [rbp+20h] BYREF
  __int64 v84; // [rsp+128h] [rbp+28h]
  __int64 v85; // [rsp+130h] [rbp+30h] BYREF
  int v86; // [rsp+138h] [rbp+38h]
  const wchar_t *v87; // [rsp+140h] [rbp+40h]
  int *v88; // [rsp+148h] [rbp+48h]
  int v89; // [rsp+150h] [rbp+50h]
  int *v90; // [rsp+158h] [rbp+58h]
  int v91; // [rsp+160h] [rbp+60h]
  __int64 v92; // [rsp+168h] [rbp+68h]
  int v93; // [rsp+170h] [rbp+70h]
  const wchar_t *v94; // [rsp+178h] [rbp+78h]
  int *v95; // [rsp+180h] [rbp+80h]
  int v96; // [rsp+188h] [rbp+88h]
  int *v97; // [rsp+190h] [rbp+90h]
  int v98; // [rsp+198h] [rbp+98h]
  __int64 v99; // [rsp+1A0h] [rbp+A0h]
  int v100; // [rsp+1A8h] [rbp+A8h]
  const wchar_t *v101; // [rsp+1B0h] [rbp+B0h]
  int *v102; // [rsp+1B8h] [rbp+B8h]
  int v103; // [rsp+1C0h] [rbp+C0h]
  int *v104; // [rsp+1C8h] [rbp+C8h]
  int v105; // [rsp+1D0h] [rbp+D0h]
  __int64 v106; // [rsp+1D8h] [rbp+D8h]
  int v107; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v108; // [rsp+1E8h] [rbp+E8h]
  __int64 *v109; // [rsp+1F0h] [rbp+F0h]
  int v110; // [rsp+1F8h] [rbp+F8h]
  __int64 *v111; // [rsp+200h] [rbp+100h]
  int v112; // [rsp+208h] [rbp+108h]
  __int64 v113; // [rsp+210h] [rbp+110h]
  int v114; // [rsp+218h] [rbp+118h]
  const wchar_t *v115; // [rsp+220h] [rbp+120h]
  int *v116; // [rsp+228h] [rbp+128h]
  int v117; // [rsp+230h] [rbp+130h]
  int *v118; // [rsp+238h] [rbp+138h]
  int v119; // [rsp+240h] [rbp+140h]
  __int64 v120; // [rsp+248h] [rbp+148h]
  int v121; // [rsp+250h] [rbp+150h]
  const wchar_t *v122; // [rsp+258h] [rbp+158h]
  int *v123; // [rsp+260h] [rbp+160h]
  int v124; // [rsp+268h] [rbp+168h]
  int *v125; // [rsp+270h] [rbp+170h]
  int v126; // [rsp+278h] [rbp+178h]
  __int64 v127; // [rsp+280h] [rbp+180h]
  int v128; // [rsp+288h] [rbp+188h]
  const wchar_t *v129; // [rsp+290h] [rbp+190h]
  int *v130; // [rsp+298h] [rbp+198h]
  int v131; // [rsp+2A0h] [rbp+1A0h]
  int *v132; // [rsp+2A8h] [rbp+1A8h]
  int v133; // [rsp+2B0h] [rbp+1B0h]
  __int64 v134; // [rsp+2B8h] [rbp+1B8h]
  int v135; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v136; // [rsp+2C8h] [rbp+1C8h]
  int *v137; // [rsp+2D0h] [rbp+1D0h]
  int v138; // [rsp+2D8h] [rbp+1D8h]
  int *v139; // [rsp+2E0h] [rbp+1E0h]
  int v140; // [rsp+2E8h] [rbp+1E8h]
  __int64 v141; // [rsp+2F0h] [rbp+1F0h]
  int v142; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v143; // [rsp+300h] [rbp+200h]
  int *v144; // [rsp+308h] [rbp+208h]
  int v145; // [rsp+310h] [rbp+210h]
  int *v146; // [rsp+318h] [rbp+218h]
  int v147; // [rsp+320h] [rbp+220h]
  __int64 v148; // [rsp+328h] [rbp+228h]
  int v149; // [rsp+330h] [rbp+230h]
  const wchar_t *v150; // [rsp+338h] [rbp+238h]
  int *v151; // [rsp+340h] [rbp+240h]
  int v152; // [rsp+348h] [rbp+248h]
  int *v153; // [rsp+350h] [rbp+250h]
  int v154; // [rsp+358h] [rbp+258h]
  __int64 v155; // [rsp+360h] [rbp+260h]
  int v156; // [rsp+368h] [rbp+268h]
  const wchar_t *v157; // [rsp+370h] [rbp+270h]
  int *v158; // [rsp+378h] [rbp+278h]
  int v159; // [rsp+380h] [rbp+280h]
  int *v160; // [rsp+388h] [rbp+288h]
  int v161; // [rsp+390h] [rbp+290h]
  __int64 v162; // [rsp+398h] [rbp+298h]
  int v163; // [rsp+3A0h] [rbp+2A0h]
  const wchar_t *v164; // [rsp+3A8h] [rbp+2A8h]
  int *v165; // [rsp+3B0h] [rbp+2B0h]
  int v166; // [rsp+3B8h] [rbp+2B8h]
  int *v167; // [rsp+3C0h] [rbp+2C0h]
  int v168; // [rsp+3C8h] [rbp+2C8h]
  __int64 v169; // [rsp+3D0h] [rbp+2D0h]
  int v170; // [rsp+3D8h] [rbp+2D8h]
  const wchar_t *v171; // [rsp+3E0h] [rbp+2E0h]
  int *v172; // [rsp+3E8h] [rbp+2E8h]
  int v173; // [rsp+3F0h] [rbp+2F0h]
  int *v174; // [rsp+3F8h] [rbp+2F8h]
  int v175; // [rsp+400h] [rbp+300h]
  __int64 v176; // [rsp+408h] [rbp+308h]
  int v177; // [rsp+410h] [rbp+310h]
  const wchar_t *v178; // [rsp+418h] [rbp+318h]
  int *v179; // [rsp+420h] [rbp+320h]
  int v180; // [rsp+428h] [rbp+328h]
  int *v181; // [rsp+430h] [rbp+330h]
  int v182; // [rsp+438h] [rbp+338h]
  __int64 v183; // [rsp+440h] [rbp+340h]
  int v184; // [rsp+448h] [rbp+348h]
  const wchar_t *v185; // [rsp+450h] [rbp+350h]
  int *v186; // [rsp+458h] [rbp+358h]
  int v187; // [rsp+460h] [rbp+360h]
  int *v188; // [rsp+468h] [rbp+368h]
  int v189; // [rsp+470h] [rbp+370h]
  __int64 v190; // [rsp+478h] [rbp+378h]
  int v191; // [rsp+480h] [rbp+380h]
  const wchar_t *v192; // [rsp+488h] [rbp+388h]
  int *v193; // [rsp+490h] [rbp+390h]
  int v194; // [rsp+498h] [rbp+398h]
  int *v195; // [rsp+4A0h] [rbp+3A0h]
  int v196; // [rsp+4A8h] [rbp+3A8h]
  __int64 v197; // [rsp+4B0h] [rbp+3B0h]
  int v198; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v199; // [rsp+4C0h] [rbp+3C0h]
  int *v200; // [rsp+4C8h] [rbp+3C8h]
  int v201; // [rsp+4D0h] [rbp+3D0h]
  int *v202; // [rsp+4D8h] [rbp+3D8h]
  int v203; // [rsp+4E0h] [rbp+3E0h]
  __int64 v204; // [rsp+4E8h] [rbp+3E8h]
  int v205; // [rsp+4F0h] [rbp+3F0h]
  const wchar_t *v206; // [rsp+4F8h] [rbp+3F8h]
  int *v207; // [rsp+500h] [rbp+400h]
  int v208; // [rsp+508h] [rbp+408h]
  int *v209; // [rsp+510h] [rbp+410h]
  int v210; // [rsp+518h] [rbp+418h]
  __int64 v211; // [rsp+520h] [rbp+420h]
  int v212; // [rsp+528h] [rbp+428h]
  const wchar_t *v213; // [rsp+530h] [rbp+430h]
  int *v214; // [rsp+538h] [rbp+438h]
  int v215; // [rsp+540h] [rbp+440h]
  int *v216; // [rsp+548h] [rbp+448h]
  int v217; // [rsp+550h] [rbp+450h]
  __int64 v218; // [rsp+558h] [rbp+458h]
  int v219; // [rsp+560h] [rbp+460h]
  const wchar_t *v220; // [rsp+568h] [rbp+468h]
  int *v221; // [rsp+570h] [rbp+470h]
  int v222; // [rsp+578h] [rbp+478h]
  int *v223; // [rsp+580h] [rbp+480h]
  int v224; // [rsp+588h] [rbp+488h]
  __int64 v225; // [rsp+590h] [rbp+490h]
  int v226; // [rsp+598h] [rbp+498h]
  const wchar_t *v227; // [rsp+5A0h] [rbp+4A0h]
  int *v228; // [rsp+5A8h] [rbp+4A8h]
  int v229; // [rsp+5B0h] [rbp+4B0h]
  int *v230; // [rsp+5B8h] [rbp+4B8h]
  int v231; // [rsp+5C0h] [rbp+4C0h]
  __int64 v232; // [rsp+5C8h] [rbp+4C8h]
  int v233; // [rsp+5D0h] [rbp+4D0h]
  const wchar_t *v234; // [rsp+5D8h] [rbp+4D8h]
  int *v235; // [rsp+5E0h] [rbp+4E0h]
  int v236; // [rsp+5E8h] [rbp+4E8h]
  int *v237; // [rsp+5F0h] [rbp+4F0h]
  int v238; // [rsp+5F8h] [rbp+4F8h]
  __int64 v239; // [rsp+600h] [rbp+500h]
  int v240; // [rsp+608h] [rbp+508h]
  const wchar_t *v241; // [rsp+610h] [rbp+510h]
  int *v242; // [rsp+618h] [rbp+518h]
  int v243; // [rsp+620h] [rbp+520h]
  int *v244; // [rsp+628h] [rbp+528h]
  int v245; // [rsp+630h] [rbp+530h]
  __int64 v246; // [rsp+638h] [rbp+538h]
  int v247; // [rsp+640h] [rbp+540h]
  const wchar_t *v248; // [rsp+648h] [rbp+548h]
  int *v249; // [rsp+650h] [rbp+550h]
  int v250; // [rsp+658h] [rbp+558h]
  int *v251; // [rsp+660h] [rbp+560h]
  int v252; // [rsp+668h] [rbp+568h]
  __int64 v253; // [rsp+670h] [rbp+570h]
  int v254; // [rsp+678h] [rbp+578h]
  const wchar_t *v255; // [rsp+680h] [rbp+580h]
  int *v256; // [rsp+688h] [rbp+588h]
  int v257; // [rsp+690h] [rbp+590h]
  int *v258; // [rsp+698h] [rbp+598h]
  int v259; // [rsp+6A0h] [rbp+5A0h]
  __int64 v260; // [rsp+6A8h] [rbp+5A8h]
  int v261; // [rsp+6B0h] [rbp+5B0h]
  const wchar_t *v262; // [rsp+6B8h] [rbp+5B8h]
  int *v263; // [rsp+6C0h] [rbp+5C0h]
  int v264; // [rsp+6C8h] [rbp+5C8h]
  int *v265; // [rsp+6D0h] [rbp+5D0h]
  int v266; // [rsp+6D8h] [rbp+5D8h]
  __int64 v267; // [rsp+6E0h] [rbp+5E0h]
  int v268; // [rsp+6E8h] [rbp+5E8h]
  const wchar_t *v269; // [rsp+6F0h] [rbp+5F0h]
  int *v270; // [rsp+6F8h] [rbp+5F8h]
  int v271; // [rsp+700h] [rbp+600h]
  int *v272; // [rsp+708h] [rbp+608h]
  int v273; // [rsp+710h] [rbp+610h]
  __int64 v274; // [rsp+718h] [rbp+618h]
  int v275; // [rsp+720h] [rbp+620h]
  const wchar_t *v276; // [rsp+728h] [rbp+628h]
  int *v277; // [rsp+730h] [rbp+630h]
  int v278; // [rsp+738h] [rbp+638h]
  int *v279; // [rsp+740h] [rbp+640h]
  int v280; // [rsp+748h] [rbp+648h]
  __int64 v281; // [rsp+750h] [rbp+650h]
  int v282; // [rsp+758h] [rbp+658h]
  const wchar_t *v283; // [rsp+760h] [rbp+660h]
  int *v284; // [rsp+768h] [rbp+668h]
  int v285; // [rsp+770h] [rbp+670h]
  int *v286; // [rsp+778h] [rbp+678h]
  int v287; // [rsp+780h] [rbp+680h]
  __int64 v288; // [rsp+788h] [rbp+688h]
  int v289; // [rsp+790h] [rbp+690h]
  const wchar_t *v290; // [rsp+798h] [rbp+698h]
  int *v291; // [rsp+7A0h] [rbp+6A0h]
  int v292; // [rsp+7A8h] [rbp+6A8h]
  int *v293; // [rsp+7B0h] [rbp+6B0h]
  int v294; // [rsp+7B8h] [rbp+6B8h]
  __int64 v295; // [rsp+7C0h] [rbp+6C0h]
  int v296; // [rsp+7C8h] [rbp+6C8h]
  const wchar_t *v297; // [rsp+7D0h] [rbp+6D0h]
  int *v298; // [rsp+7D8h] [rbp+6D8h]
  int v299; // [rsp+7E0h] [rbp+6E0h]
  int *v300; // [rsp+7E8h] [rbp+6E8h]
  int v301; // [rsp+7F0h] [rbp+6F0h]
  __int64 v302; // [rsp+7F8h] [rbp+6F8h]
  int v303; // [rsp+800h] [rbp+700h]
  const wchar_t *v304; // [rsp+808h] [rbp+708h]
  int *v305; // [rsp+810h] [rbp+710h]
  int v306; // [rsp+818h] [rbp+718h]
  int *v307; // [rsp+820h] [rbp+720h]
  int v308; // [rsp+828h] [rbp+728h]
  __int64 v309; // [rsp+830h] [rbp+730h]
  int v310; // [rsp+838h] [rbp+738h]
  _BYTE v311[40]; // [rsp+840h] [rbp+740h] BYREF

  v53 = 0;
  v42 = 0;
  v59 = 7000;
  v36 = 7000;
  v54 = 0;
  v87 = L"ForceDirectFlip";
  v43 = 0;
  v88 = &v42;
  v58 = 0;
  v90 = &v53;
  v44 = 0;
  v56 = 0;
  v30 = 0;
  v26 = 0;
  v24 = 0;
  v27 = 0;
  v25 = 0;
  v55 = 1;
  v28 = 1;
  v82 = 1395864371LL;
  v83 = 16LL;
  v84 = 1395864371LL;
  v57 = 0;
  v29 = 0;
  v60 = 0;
  v31 = 0;
  v61 = 0;
  v32 = 0;
  v62 = 0;
  v33 = 0;
  v63 = 0;
  v34 = 0;
  v64 = 0;
  v35 = 0;
  v65 = 1;
  v37 = 1;
  v66 = 0;
  v50 = 0;
  v67 = 0;
  v38 = 0;
  v69 = 0;
  v39 = 0;
  v68 = 0;
  v40 = 0;
  v70 = 0;
  v51 = 0;
  v71 = 1;
  v45 = 1;
  v72 = 0;
  v46 = 0;
  v74 = 0;
  v73 = 0;
  v75 = 0;
  v48 = 0;
  v77 = 0;
  v76 = 0;
  v78 = 0;
  v49 = 0;
  v79 = 0;
  v47 = 0;
  v80 = 0;
  v52 = 0;
  v81 = 0;
  v41 = 0;
  v85 = 0LL;
  v86 = 288;
  v89 = 67108868;
  v91 = 4;
  v94 = L"DisableOverlays";
  v92 = 0LL;
  v95 = &v43;
  v93 = 288;
  v97 = &v54;
  v101 = L"EnableOfferReclaimOnDriver";
  v102 = &v28;
  v104 = &v55;
  v108 = L"LeanMemoryLimit";
  v109 = &v83;
  v111 = &v82;
  v115 = L"ForceEnableDxgMms2";
  v116 = &v30;
  v118 = &v56;
  v122 = L"ContextNoPatchMode";
  v123 = &v29;
  v125 = &v57;
  v130 = &v24;
  v132 = &v26;
  v137 = &v25;
  v139 = &v27;
  v143 = L"Force32BitFences";
  v144 = &v44;
  v146 = &v58;
  v96 = 67108868;
  v98 = 4;
  v99 = 0LL;
  v100 = 288;
  v103 = 67108868;
  v105 = 4;
  v106 = 0LL;
  v107 = 288;
  v110 = 184549387;
  v112 = 8;
  v113 = 0LL;
  v114 = 288;
  v117 = 67108868;
  v119 = 4;
  v120 = 0LL;
  v121 = 288;
  v124 = 67108868;
  v126 = 4;
  v127 = 0LL;
  v128 = 288;
  v129 = L"ForceToMapGpuVa";
  v131 = 67108868;
  v133 = 4;
  v134 = 0LL;
  v135 = 288;
  v136 = L"ForceAccessedPhysically";
  v138 = 67108868;
  v140 = 4;
  v141 = 0LL;
  v142 = 288;
  v145 = 67108868;
  v147 = 4;
  v148 = 0LL;
  v150 = L"InitialPagingQueueFenceValue";
  v151 = &v36;
  v153 = &v59;
  v157 = L"ForceInitPagingProcessVaSpace";
  v158 = &v31;
  v160 = &v60;
  v164 = L"DisableGdiContextGpuVa";
  v165 = &v32;
  v167 = &v61;
  v171 = L"DisablePagingContextGpuVa";
  v172 = &v33;
  v174 = &v62;
  v178 = L"DisableMonitoredFenceGpuVa";
  v179 = &v34;
  v181 = &v63;
  v185 = L"ForceExplicitResidencyNotification";
  v186 = &v35;
  v188 = &v64;
  v193 = &v24;
  v195 = &v26;
  v200 = &v25;
  v202 = &v27;
  v149 = 288;
  v152 = 67108868;
  v154 = 4;
  v155 = 0LL;
  v156 = 288;
  v159 = 67108868;
  v161 = 4;
  v162 = 0LL;
  v163 = 288;
  v166 = 67108868;
  v168 = 4;
  v169 = 0LL;
  v170 = 288;
  v173 = 67108868;
  v175 = 4;
  v176 = 0LL;
  v177 = 288;
  v180 = 67108868;
  v182 = 4;
  v183 = 0LL;
  v184 = 288;
  v187 = 67108868;
  v189 = 4;
  v190 = 0LL;
  v191 = 288;
  v192 = L"ForceToMapGpuVa";
  v194 = 67108868;
  v196 = 4;
  v197 = 0LL;
  v198 = 288;
  v199 = L"ForceAccessedPhysically";
  v201 = 67108868;
  v203 = 4;
  v204 = 0LL;
  v205 = 288;
  v206 = L"DriverManagesResidencyOverride";
  v207 = &v37;
  v209 = &v65;
  v213 = L"GdiPhysicalAdapterIndex";
  v214 = &v50;
  v216 = &v66;
  v220 = L"ForceReplicateGdiContent";
  v221 = &v38;
  v223 = &v67;
  v227 = L"EnableTimedCalls";
  v228 = &v40;
  v230 = &v68;
  v234 = L"CreateGdiPrimaryOnSlaveGpu";
  v235 = &v39;
  v237 = &v69;
  v241 = L"ForceSurpriseRemovalSupport";
  v242 = &v51;
  v244 = &v70;
  v248 = L"EnableDecodeMPO";
  v249 = &v45;
  v251 = &v71;
  v255 = L"DisableBadDriverCheckForHwProtection";
  v256 = &v46;
  v258 = &v72;
  v262 = L"ForceSecondaryMPOSupport";
  v208 = 67108868;
  v210 = 4;
  v211 = 0LL;
  v212 = 288;
  v215 = 67108868;
  v217 = 4;
  v218 = 0LL;
  v219 = 288;
  v222 = 67108868;
  v224 = 4;
  v225 = 0LL;
  v226 = 288;
  v229 = 67108868;
  v231 = 4;
  v232 = 0LL;
  v233 = 288;
  v236 = 67108868;
  v238 = 4;
  v239 = 0LL;
  v240 = 288;
  v243 = 67108868;
  v245 = 4;
  v246 = 0LL;
  v247 = 288;
  v250 = 67108868;
  v252 = 4;
  v253 = 0LL;
  v254 = 288;
  v257 = 67108868;
  v259 = 4;
  v260 = 0LL;
  v261 = 288;
  v266 = 4;
  v263 = &v73;
  v273 = 4;
  v265 = &v74;
  v280 = 4;
  v269 = L"ForceSecondaryIFlipSupport";
  v270 = &v48;
  v272 = &v75;
  v276 = L"EnablePanelFitterSupport";
  v277 = &v76;
  v279 = &v77;
  v283 = L"EnableMultiPlaneOverlay3DDIs";
  v284 = &v49;
  v286 = &v78;
  v290 = L"DisableSecondaryIFlipSupport";
  v291 = &v47;
  v293 = &v79;
  v297 = L"ForceUnPinAllDFlipAllocations";
  v298 = &v52;
  v300 = &v80;
  v304 = L"EnableWDDM23Synchronization";
  v305 = &v41;
  v287 = 4;
  v294 = 4;
  v301 = 4;
  v308 = 4;
  v307 = &v81;
  v264 = 67108868;
  v267 = 0LL;
  v268 = 288;
  v271 = 67108868;
  v274 = 0LL;
  v275 = 288;
  v278 = 67108868;
  v281 = 0LL;
  v282 = 288;
  v285 = 67108868;
  v288 = 0LL;
  v289 = 288;
  v292 = 67108868;
  v295 = 0LL;
  v296 = 288;
  v299 = 67108868;
  v302 = 0LL;
  v303 = 288;
  v306 = 67108868;
  v309 = 0LL;
  v310 = 0;
  memset(v311, 0, sizeof(v311));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v85, 0LL, 0LL);
  *((_BYTE *)this + 2233) = v28 != 0;
  v4 = v30 == 0;
  *((_DWORD *)this + 562) = v29;
  *((_QWORD *)this + 280) = v84;
  v5 = !v4;
  v4 = v24 == 0;
  *((_BYTE *)this + 2252) = v5;
  v6 = !v4;
  v4 = v25 == 0;
  *((_BYTE *)this + 2253) = v6;
  v7 = !v4;
  v4 = v31 == 0;
  *((_BYTE *)this + 2254) = v7;
  v8 = !v4;
  v4 = v32 == 0;
  *((_BYTE *)this + 2256) = v8;
  v9 = !v4;
  v4 = v33 == 0;
  *((_BYTE *)this + 2257) = v9;
  v10 = !v4;
  v4 = v34 == 0;
  *((_BYTE *)this + 2258) = v10;
  v11 = !v4;
  v4 = v35 == 0;
  *((_BYTE *)this + 2259) = v11;
  v12 = !v4;
  v4 = v37 == 0;
  *((_BYTE *)this + 2255) = v12;
  *((_DWORD *)this + 569) = v36;
  *((_BYTE *)this + 2260) = !v4;
  if ( v38 || (v13 = 0, (*((_DWORD *)this + 425) & 0x100) != 0) )
    v13 = 1;
  v4 = v39 == 0;
  *((_BYTE *)this + 2234) = v13;
  v14 = !v4;
  v4 = v40 == 0;
  *((_BYTE *)this + 2235) = v14;
  DXGADAPTER::Config = !v4 | DXGADAPTER::Config & 0xFE;
  if ( !v41 || (v15 = 1, *((int *)this + 492) < 8704) )
    v15 = 0;
  *((_BYTE *)this + 2268) = v15;
  if ( v42 )
    *((_BYTE *)this + 2171) = 1;
  if ( v43 )
    *((_BYTE *)this + 2172) = 0;
  if ( v44 )
    *((_DWORD *)this + 424) |= 0x20u;
  if ( *((_BYTE *)this + 2172) )
  {
    if ( *((_BYTE *)this + 2230) )
      *((_DWORD *)this + 544) = 2;
  }
  else
  {
    *((_DWORD *)this + 544) = 1;
  }
  v16 = *((_BYTE *)this + 2233);
  if ( *((int *)this + 492) < 4608 )
    v16 = 0;
  *((_BYTE *)this + 2233) = v16;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2260) = 0;
  if ( !v45 || (v20 = 1, !v18) )
    v20 = 0;
  v4 = v46 == 0;
  *((_BYTE *)this + 2261) = v20;
  *((_BYTE *)this + 2264) = 0;
  *((_BYTE *)this + 2262) = !v4;
  if ( !v47 && (*((_DWORD *)this + 423) & 0x10) != 0 )
  {
    if ( v17 < 8448 )
    {
      if ( v17 >= 0x2000 )
        *((_BYTE *)this + 2264) = v48 != 0;
    }
    else
    {
      *((_BYTE *)this + 2264) = 1;
    }
  }
  v4 = *((_QWORD *)this + 62) == 0LL;
  *((_BYTE *)this + 2266) = 0;
  *((_BYTE *)this + 2272) = !v4;
  if ( *((_QWORD *)this + 113) )
  {
    v21 = v17 >= v19 || v17 >= 8448 && ((*((_DWORD *)this + 75) & 0x200) != 0 || v49);
    *((_BYTE *)this + 2266) = v21;
  }
  if ( v18 && !*((_BYTE *)this + 2266) && !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) )
    *((_BYTE *)this + 2172) = 0;
  v22 = *((_BYTE *)this + 2266);
  *((_BYTE *)this + 2267) = 0;
  if ( !v22 )
    goto LABEL_49;
  if ( v17 >= v19 && (*((_QWORD *)this + 138) || *((_QWORD *)this + 139)) )
    *((_BYTE *)this + 2267) = 1;
  if ( !*((_DWORD *)this + 551) )
LABEL_49:
    *((_DWORD *)this + 551) = 1;
  *((_BYTE *)this + 2265) = v22;
  if ( !v22 || (v23 = 1, !*((_BYTE *)this + 2172)) )
    v23 = 0;
  *((_BYTE *)this + 2263) = v23;
  if ( *((_DWORD *)this + 62) > 1u )
    *((_DWORD *)this + 583) = v50;
  if ( v51 )
    *(_BYTE *)a2 |= 0x10u;
  *((_BYTE *)this + 2236) = v52 != 0;
}
