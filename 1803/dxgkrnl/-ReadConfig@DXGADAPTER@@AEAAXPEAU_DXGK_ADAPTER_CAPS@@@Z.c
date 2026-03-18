/*
 * XREFs of ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014E010
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
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
  char v17; // dl
  int v18; // r8d
  int v19; // r10d
  char v20; // al
  bool v21; // cl
  bool v22; // al
  char v23; // r9
  char v24; // al
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+54h] [rbp-ACh] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+64h] [rbp-9Ch] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+7Ch] [rbp-84h] BYREF
  int v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+84h] [rbp-7Ch] BYREF
  int v47; // [rsp+88h] [rbp-78h] BYREF
  int v48; // [rsp+8Ch] [rbp-74h] BYREF
  int v49; // [rsp+90h] [rbp-70h] BYREF
  int v50; // [rsp+94h] [rbp-6Ch] BYREF
  int v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+9Ch] [rbp-64h] BYREF
  int v53; // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+A4h] [rbp-5Ch] BYREF
  int v55; // [rsp+A8h] [rbp-58h] BYREF
  int v56; // [rsp+ACh] [rbp-54h] BYREF
  int v57; // [rsp+B0h] [rbp-50h] BYREF
  int v58; // [rsp+B4h] [rbp-4Ch] BYREF
  int v59; // [rsp+B8h] [rbp-48h] BYREF
  int v60; // [rsp+BCh] [rbp-44h] BYREF
  int v61; // [rsp+C0h] [rbp-40h] BYREF
  int v62; // [rsp+C4h] [rbp-3Ch] BYREF
  int v63; // [rsp+C8h] [rbp-38h] BYREF
  int v64; // [rsp+CCh] [rbp-34h] BYREF
  int v65; // [rsp+D0h] [rbp-30h] BYREF
  int v66; // [rsp+D4h] [rbp-2Ch] BYREF
  int v67; // [rsp+D8h] [rbp-28h] BYREF
  int v68; // [rsp+DCh] [rbp-24h] BYREF
  int v69; // [rsp+E0h] [rbp-20h] BYREF
  int v70; // [rsp+E4h] [rbp-1Ch] BYREF
  int v71; // [rsp+E8h] [rbp-18h] BYREF
  int v72; // [rsp+ECh] [rbp-14h] BYREF
  int v73; // [rsp+F0h] [rbp-10h] BYREF
  int v74; // [rsp+F4h] [rbp-Ch] BYREF
  int v75; // [rsp+F8h] [rbp-8h] BYREF
  int v76; // [rsp+FCh] [rbp-4h] BYREF
  int v77; // [rsp+100h] [rbp+0h] BYREF
  int v78; // [rsp+104h] [rbp+4h] BYREF
  int v79; // [rsp+108h] [rbp+8h] BYREF
  int v80; // [rsp+10Ch] [rbp+Ch] BYREF
  int v81; // [rsp+110h] [rbp+10h] BYREF
  int v82; // [rsp+114h] [rbp+14h] BYREF
  int v83; // [rsp+118h] [rbp+18h] BYREF
  int v84; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v85; // [rsp+120h] [rbp+20h] BYREF
  int v86; // [rsp+124h] [rbp+24h] BYREF
  __int64 v87; // [rsp+128h] [rbp+28h] BYREF
  __int64 v88; // [rsp+130h] [rbp+30h] BYREF
  __int64 v89; // [rsp+138h] [rbp+38h]
  __int64 v90; // [rsp+140h] [rbp+40h] BYREF
  int v91; // [rsp+148h] [rbp+48h]
  const wchar_t *v92; // [rsp+150h] [rbp+50h]
  int *v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+160h] [rbp+60h]
  int *v95; // [rsp+168h] [rbp+68h]
  int v96; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+178h] [rbp+78h]
  int v98; // [rsp+180h] [rbp+80h]
  const wchar_t *v99; // [rsp+188h] [rbp+88h]
  int *v100; // [rsp+190h] [rbp+90h]
  int v101; // [rsp+198h] [rbp+98h]
  int *v102; // [rsp+1A0h] [rbp+A0h]
  int v103; // [rsp+1A8h] [rbp+A8h]
  __int64 v104; // [rsp+1B0h] [rbp+B0h]
  int v105; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v106; // [rsp+1C0h] [rbp+C0h]
  int *v107; // [rsp+1C8h] [rbp+C8h]
  int v108; // [rsp+1D0h] [rbp+D0h]
  int *v109; // [rsp+1D8h] [rbp+D8h]
  int v110; // [rsp+1E0h] [rbp+E0h]
  __int64 v111; // [rsp+1E8h] [rbp+E8h]
  int v112; // [rsp+1F0h] [rbp+F0h]
  const wchar_t *v113; // [rsp+1F8h] [rbp+F8h]
  __int64 *v114; // [rsp+200h] [rbp+100h]
  int v115; // [rsp+208h] [rbp+108h]
  __int64 *v116; // [rsp+210h] [rbp+110h]
  int v117; // [rsp+218h] [rbp+118h]
  __int64 v118; // [rsp+220h] [rbp+120h]
  int v119; // [rsp+228h] [rbp+128h]
  const wchar_t *v120; // [rsp+230h] [rbp+130h]
  int *v121; // [rsp+238h] [rbp+138h]
  int v122; // [rsp+240h] [rbp+140h]
  int *v123; // [rsp+248h] [rbp+148h]
  int v124; // [rsp+250h] [rbp+150h]
  __int64 v125; // [rsp+258h] [rbp+158h]
  int v126; // [rsp+260h] [rbp+160h]
  const wchar_t *v127; // [rsp+268h] [rbp+168h]
  int *v128; // [rsp+270h] [rbp+170h]
  int v129; // [rsp+278h] [rbp+178h]
  int *v130; // [rsp+280h] [rbp+180h]
  int v131; // [rsp+288h] [rbp+188h]
  __int64 v132; // [rsp+290h] [rbp+190h]
  int v133; // [rsp+298h] [rbp+198h]
  const wchar_t *v134; // [rsp+2A0h] [rbp+1A0h]
  int *v135; // [rsp+2A8h] [rbp+1A8h]
  int v136; // [rsp+2B0h] [rbp+1B0h]
  int *v137; // [rsp+2B8h] [rbp+1B8h]
  int v138; // [rsp+2C0h] [rbp+1C0h]
  __int64 v139; // [rsp+2C8h] [rbp+1C8h]
  int v140; // [rsp+2D0h] [rbp+1D0h]
  const wchar_t *v141; // [rsp+2D8h] [rbp+1D8h]
  int *v142; // [rsp+2E0h] [rbp+1E0h]
  int v143; // [rsp+2E8h] [rbp+1E8h]
  int *v144; // [rsp+2F0h] [rbp+1F0h]
  int v145; // [rsp+2F8h] [rbp+1F8h]
  __int64 v146; // [rsp+300h] [rbp+200h]
  int v147; // [rsp+308h] [rbp+208h]
  const wchar_t *v148; // [rsp+310h] [rbp+210h]
  int *v149; // [rsp+318h] [rbp+218h]
  int v150; // [rsp+320h] [rbp+220h]
  int *v151; // [rsp+328h] [rbp+228h]
  int v152; // [rsp+330h] [rbp+230h]
  __int64 v153; // [rsp+338h] [rbp+238h]
  int v154; // [rsp+340h] [rbp+240h]
  const wchar_t *v155; // [rsp+348h] [rbp+248h]
  int *v156; // [rsp+350h] [rbp+250h]
  int v157; // [rsp+358h] [rbp+258h]
  int *v158; // [rsp+360h] [rbp+260h]
  int v159; // [rsp+368h] [rbp+268h]
  __int64 v160; // [rsp+370h] [rbp+270h]
  int v161; // [rsp+378h] [rbp+278h]
  const wchar_t *v162; // [rsp+380h] [rbp+280h]
  int *v163; // [rsp+388h] [rbp+288h]
  int v164; // [rsp+390h] [rbp+290h]
  int *v165; // [rsp+398h] [rbp+298h]
  int v166; // [rsp+3A0h] [rbp+2A0h]
  __int64 v167; // [rsp+3A8h] [rbp+2A8h]
  int v168; // [rsp+3B0h] [rbp+2B0h]
  const wchar_t *v169; // [rsp+3B8h] [rbp+2B8h]
  int *v170; // [rsp+3C0h] [rbp+2C0h]
  int v171; // [rsp+3C8h] [rbp+2C8h]
  int *v172; // [rsp+3D0h] [rbp+2D0h]
  int v173; // [rsp+3D8h] [rbp+2D8h]
  __int64 v174; // [rsp+3E0h] [rbp+2E0h]
  int v175; // [rsp+3E8h] [rbp+2E8h]
  const wchar_t *v176; // [rsp+3F0h] [rbp+2F0h]
  int *v177; // [rsp+3F8h] [rbp+2F8h]
  int v178; // [rsp+400h] [rbp+300h]
  int *v179; // [rsp+408h] [rbp+308h]
  int v180; // [rsp+410h] [rbp+310h]
  __int64 v181; // [rsp+418h] [rbp+318h]
  int v182; // [rsp+420h] [rbp+320h]
  const wchar_t *v183; // [rsp+428h] [rbp+328h]
  int *v184; // [rsp+430h] [rbp+330h]
  int v185; // [rsp+438h] [rbp+338h]
  int *v186; // [rsp+440h] [rbp+340h]
  int v187; // [rsp+448h] [rbp+348h]
  __int64 v188; // [rsp+450h] [rbp+350h]
  int v189; // [rsp+458h] [rbp+358h]
  const wchar_t *v190; // [rsp+460h] [rbp+360h]
  int *v191; // [rsp+468h] [rbp+368h]
  int v192; // [rsp+470h] [rbp+370h]
  int *v193; // [rsp+478h] [rbp+378h]
  int v194; // [rsp+480h] [rbp+380h]
  __int64 v195; // [rsp+488h] [rbp+388h]
  int v196; // [rsp+490h] [rbp+390h]
  const wchar_t *v197; // [rsp+498h] [rbp+398h]
  int *v198; // [rsp+4A0h] [rbp+3A0h]
  int v199; // [rsp+4A8h] [rbp+3A8h]
  int *v200; // [rsp+4B0h] [rbp+3B0h]
  int v201; // [rsp+4B8h] [rbp+3B8h]
  __int64 v202; // [rsp+4C0h] [rbp+3C0h]
  int v203; // [rsp+4C8h] [rbp+3C8h]
  const wchar_t *v204; // [rsp+4D0h] [rbp+3D0h]
  int *v205; // [rsp+4D8h] [rbp+3D8h]
  int v206; // [rsp+4E0h] [rbp+3E0h]
  int *v207; // [rsp+4E8h] [rbp+3E8h]
  int v208; // [rsp+4F0h] [rbp+3F0h]
  __int64 v209; // [rsp+4F8h] [rbp+3F8h]
  int v210; // [rsp+500h] [rbp+400h]
  const wchar_t *v211; // [rsp+508h] [rbp+408h]
  int *v212; // [rsp+510h] [rbp+410h]
  int v213; // [rsp+518h] [rbp+418h]
  int *v214; // [rsp+520h] [rbp+420h]
  int v215; // [rsp+528h] [rbp+428h]
  __int64 v216; // [rsp+530h] [rbp+430h]
  int v217; // [rsp+538h] [rbp+438h]
  const wchar_t *v218; // [rsp+540h] [rbp+440h]
  int *v219; // [rsp+548h] [rbp+448h]
  int v220; // [rsp+550h] [rbp+450h]
  int *v221; // [rsp+558h] [rbp+458h]
  int v222; // [rsp+560h] [rbp+460h]
  __int64 v223; // [rsp+568h] [rbp+468h]
  int v224; // [rsp+570h] [rbp+470h]
  const wchar_t *v225; // [rsp+578h] [rbp+478h]
  int *v226; // [rsp+580h] [rbp+480h]
  int v227; // [rsp+588h] [rbp+488h]
  int *v228; // [rsp+590h] [rbp+490h]
  int v229; // [rsp+598h] [rbp+498h]
  __int64 v230; // [rsp+5A0h] [rbp+4A0h]
  int v231; // [rsp+5A8h] [rbp+4A8h]
  const wchar_t *v232; // [rsp+5B0h] [rbp+4B0h]
  int *v233; // [rsp+5B8h] [rbp+4B8h]
  int v234; // [rsp+5C0h] [rbp+4C0h]
  int *v235; // [rsp+5C8h] [rbp+4C8h]
  int v236; // [rsp+5D0h] [rbp+4D0h]
  __int64 v237; // [rsp+5D8h] [rbp+4D8h]
  int v238; // [rsp+5E0h] [rbp+4E0h]
  const wchar_t *v239; // [rsp+5E8h] [rbp+4E8h]
  int *v240; // [rsp+5F0h] [rbp+4F0h]
  int v241; // [rsp+5F8h] [rbp+4F8h]
  int *v242; // [rsp+600h] [rbp+500h]
  int v243; // [rsp+608h] [rbp+508h]
  __int64 v244; // [rsp+610h] [rbp+510h]
  int v245; // [rsp+618h] [rbp+518h]
  const wchar_t *v246; // [rsp+620h] [rbp+520h]
  int *v247; // [rsp+628h] [rbp+528h]
  int v248; // [rsp+630h] [rbp+530h]
  int *v249; // [rsp+638h] [rbp+538h]
  int v250; // [rsp+640h] [rbp+540h]
  __int64 v251; // [rsp+648h] [rbp+548h]
  int v252; // [rsp+650h] [rbp+550h]
  const wchar_t *v253; // [rsp+658h] [rbp+558h]
  int *v254; // [rsp+660h] [rbp+560h]
  int v255; // [rsp+668h] [rbp+568h]
  int *v256; // [rsp+670h] [rbp+570h]
  int v257; // [rsp+678h] [rbp+578h]
  __int64 v258; // [rsp+680h] [rbp+580h]
  int v259; // [rsp+688h] [rbp+588h]
  const wchar_t *v260; // [rsp+690h] [rbp+590h]
  int *v261; // [rsp+698h] [rbp+598h]
  int v262; // [rsp+6A0h] [rbp+5A0h]
  int *v263; // [rsp+6A8h] [rbp+5A8h]
  int v264; // [rsp+6B0h] [rbp+5B0h]
  __int64 v265; // [rsp+6B8h] [rbp+5B8h]
  int v266; // [rsp+6C0h] [rbp+5C0h]
  const wchar_t *v267; // [rsp+6C8h] [rbp+5C8h]
  int *v268; // [rsp+6D0h] [rbp+5D0h]
  int v269; // [rsp+6D8h] [rbp+5D8h]
  int *v270; // [rsp+6E0h] [rbp+5E0h]
  int v271; // [rsp+6E8h] [rbp+5E8h]
  __int64 v272; // [rsp+6F0h] [rbp+5F0h]
  int v273; // [rsp+6F8h] [rbp+5F8h]
  const wchar_t *v274; // [rsp+700h] [rbp+600h]
  int *v275; // [rsp+708h] [rbp+608h]
  int v276; // [rsp+710h] [rbp+610h]
  int *v277; // [rsp+718h] [rbp+618h]
  int v278; // [rsp+720h] [rbp+620h]
  __int64 v279; // [rsp+728h] [rbp+628h]
  int v280; // [rsp+730h] [rbp+630h]
  const wchar_t *v281; // [rsp+738h] [rbp+638h]
  int *v282; // [rsp+740h] [rbp+640h]
  int v283; // [rsp+748h] [rbp+648h]
  int *v284; // [rsp+750h] [rbp+650h]
  int v285; // [rsp+758h] [rbp+658h]
  __int64 v286; // [rsp+760h] [rbp+660h]
  int v287; // [rsp+768h] [rbp+668h]
  const wchar_t *v288; // [rsp+770h] [rbp+670h]
  int *v289; // [rsp+778h] [rbp+678h]
  int v290; // [rsp+780h] [rbp+680h]
  int *v291; // [rsp+788h] [rbp+688h]
  int v292; // [rsp+790h] [rbp+690h]
  __int64 v293; // [rsp+798h] [rbp+698h]
  int v294; // [rsp+7A0h] [rbp+6A0h]
  const wchar_t *v295; // [rsp+7A8h] [rbp+6A8h]
  int *v296; // [rsp+7B0h] [rbp+6B0h]
  int v297; // [rsp+7B8h] [rbp+6B8h]
  int *v298; // [rsp+7C0h] [rbp+6C0h]
  int v299; // [rsp+7C8h] [rbp+6C8h]
  __int64 v300; // [rsp+7D0h] [rbp+6D0h]
  int v301; // [rsp+7D8h] [rbp+6D8h]
  const wchar_t *v302; // [rsp+7E0h] [rbp+6E0h]
  int *v303; // [rsp+7E8h] [rbp+6E8h]
  int v304; // [rsp+7F0h] [rbp+6F0h]
  int *v305; // [rsp+7F8h] [rbp+6F8h]
  int v306; // [rsp+800h] [rbp+700h]
  __int64 v307; // [rsp+808h] [rbp+708h]
  int v308; // [rsp+810h] [rbp+710h]
  const wchar_t *v309; // [rsp+818h] [rbp+718h]
  int *v310; // [rsp+820h] [rbp+720h]
  int v311; // [rsp+828h] [rbp+728h]
  int *v312; // [rsp+830h] [rbp+730h]
  int v313; // [rsp+838h] [rbp+738h]
  __int64 v314; // [rsp+840h] [rbp+740h]
  int v315; // [rsp+848h] [rbp+748h]
  const wchar_t *v316; // [rsp+850h] [rbp+750h]
  int *v317; // [rsp+858h] [rbp+758h]
  int v318; // [rsp+860h] [rbp+760h]
  int *v319; // [rsp+868h] [rbp+768h]
  int v320; // [rsp+870h] [rbp+770h]
  __int64 v321; // [rsp+878h] [rbp+778h]
  int v322; // [rsp+880h] [rbp+780h]
  const wchar_t *v323; // [rsp+888h] [rbp+788h]
  int *v324; // [rsp+890h] [rbp+790h]
  int v325; // [rsp+898h] [rbp+798h]
  int *v326; // [rsp+8A0h] [rbp+7A0h]
  int v327; // [rsp+8A8h] [rbp+7A8h]
  __int64 v328; // [rsp+8B0h] [rbp+7B0h]
  int v329; // [rsp+8B8h] [rbp+7B8h]
  _BYTE v330[40]; // [rsp+8C0h] [rbp+7C0h] BYREF

  v56 = 0;
  v45 = 0;
  v62 = 7000;
  v37 = 7000;
  v57 = 0;
  v92 = L"ForceDirectFlip";
  v46 = 0;
  v93 = &v45;
  v61 = 0;
  v47 = 0;
  v59 = 0;
  v31 = 0;
  v27 = 0;
  v25 = 0;
  v28 = 0;
  v26 = 0;
  v58 = 1;
  v29 = 1;
  v87 = 1395864371LL;
  v88 = 16LL;
  v89 = 1395864371LL;
  v60 = 0;
  v30 = 0;
  v63 = 0;
  v32 = 0;
  v64 = 0;
  v33 = 0;
  v65 = 0;
  v34 = 0;
  v66 = 0;
  v35 = 0;
  v67 = 0;
  v36 = 0;
  v68 = 1;
  v38 = 1;
  v69 = 0;
  v53 = 0;
  v70 = 0;
  v39 = 0;
  v72 = 0;
  v40 = 0;
  v71 = 0;
  v41 = 0;
  v73 = 0;
  v54 = 0;
  v74 = 1;
  v48 = 1;
  v75 = 0;
  v49 = 0;
  v77 = 0;
  v76 = 0;
  v78 = 0;
  v51 = 0;
  v80 = 0;
  v79 = 0;
  v81 = 0;
  v52 = 0;
  v82 = 0;
  v50 = 0;
  v83 = 0;
  v42 = 0;
  v84 = 0;
  v43 = 0;
  v85 = 0;
  v44 = 0;
  v86 = 0;
  v55 = 0;
  v90 = 0LL;
  v91 = 288;
  v94 = 67108868;
  v96 = 4;
  v95 = &v56;
  v97 = 0LL;
  v99 = L"DisableOverlays";
  v98 = 288;
  v100 = &v46;
  v102 = &v57;
  v106 = L"EnableOfferReclaimOnDriver";
  v107 = &v29;
  v109 = &v58;
  v113 = L"LeanMemoryLimit";
  v114 = &v88;
  v116 = &v87;
  v120 = L"ForceEnableDxgMms2";
  v121 = &v31;
  v123 = &v59;
  v127 = L"ContextNoPatchMode";
  v128 = &v30;
  v130 = &v60;
  v135 = &v25;
  v137 = &v27;
  v142 = &v26;
  v144 = &v28;
  v148 = L"Force32BitFences";
  v149 = &v47;
  v101 = 67108868;
  v103 = 4;
  v104 = 0LL;
  v105 = 288;
  v108 = 67108868;
  v110 = 4;
  v111 = 0LL;
  v112 = 288;
  v115 = 184549387;
  v117 = 8;
  v118 = 0LL;
  v119 = 288;
  v122 = 67108868;
  v124 = 4;
  v125 = 0LL;
  v126 = 288;
  v129 = 67108868;
  v131 = 4;
  v132 = 0LL;
  v133 = 288;
  v134 = L"ForceToMapGpuVa";
  v136 = 67108868;
  v138 = 4;
  v139 = 0LL;
  v140 = 288;
  v141 = L"ForceAccessedPhysically";
  v143 = 67108868;
  v145 = 4;
  v146 = 0LL;
  v147 = 288;
  v150 = 67108868;
  v151 = &v61;
  v155 = L"InitialPagingQueueFenceValue";
  v156 = &v37;
  v158 = &v62;
  v162 = L"ForceInitPagingProcessVaSpace";
  v163 = &v32;
  v165 = &v63;
  v169 = L"DisableGdiContextGpuVa";
  v170 = &v33;
  v172 = &v64;
  v176 = L"DisablePagingContextGpuVa";
  v177 = &v34;
  v179 = &v65;
  v183 = L"DisableMonitoredFenceGpuVa";
  v184 = &v35;
  v186 = &v66;
  v190 = L"ForceExplicitResidencyNotification";
  v191 = &v36;
  v193 = &v67;
  v198 = &v25;
  v200 = &v27;
  v205 = &v26;
  v207 = &v28;
  v152 = 4;
  v153 = 0LL;
  v154 = 288;
  v157 = 67108868;
  v159 = 4;
  v160 = 0LL;
  v161 = 288;
  v164 = 67108868;
  v166 = 4;
  v167 = 0LL;
  v168 = 288;
  v171 = 67108868;
  v173 = 4;
  v174 = 0LL;
  v175 = 288;
  v178 = 67108868;
  v180 = 4;
  v181 = 0LL;
  v182 = 288;
  v185 = 67108868;
  v187 = 4;
  v188 = 0LL;
  v189 = 288;
  v192 = 67108868;
  v194 = 4;
  v195 = 0LL;
  v196 = 288;
  v197 = L"ForceToMapGpuVa";
  v199 = 67108868;
  v201 = 4;
  v202 = 0LL;
  v203 = 288;
  v204 = L"ForceAccessedPhysically";
  v206 = 67108868;
  v208 = 4;
  v211 = L"DriverManagesResidencyOverride";
  v212 = &v38;
  v214 = &v68;
  v218 = L"GdiPhysicalAdapterIndex";
  v219 = &v53;
  v221 = &v69;
  v225 = L"ForceReplicateGdiContent";
  v226 = &v39;
  v228 = &v70;
  v232 = L"EnableTimedCalls";
  v233 = &v41;
  v235 = &v71;
  v239 = L"CreateGdiPrimaryOnSlaveGpu";
  v240 = &v40;
  v242 = &v72;
  v246 = L"ForceSurpriseRemovalSupport";
  v247 = &v54;
  v249 = &v73;
  v253 = L"EnableDecodeMPO";
  v254 = &v48;
  v256 = &v74;
  v260 = L"DisableBadDriverCheckForHwProtection";
  v261 = &v49;
  v263 = &v75;
  v209 = 0LL;
  v210 = 288;
  v213 = 67108868;
  v215 = 4;
  v216 = 0LL;
  v217 = 288;
  v220 = 67108868;
  v222 = 4;
  v223 = 0LL;
  v224 = 288;
  v227 = 67108868;
  v229 = 4;
  v230 = 0LL;
  v231 = 288;
  v234 = 67108868;
  v236 = 4;
  v237 = 0LL;
  v238 = 288;
  v241 = 67108868;
  v243 = 4;
  v244 = 0LL;
  v245 = 288;
  v248 = 67108868;
  v250 = 4;
  v251 = 0LL;
  v252 = 288;
  v255 = 67108868;
  v257 = 4;
  v258 = 0LL;
  v259 = 288;
  v262 = 67108868;
  v264 = 4;
  v265 = 0LL;
  v267 = L"ForceSecondaryMPOSupport";
  v268 = &v76;
  v270 = &v77;
  v274 = L"ForceSecondaryIFlipSupport";
  v275 = &v51;
  v277 = &v78;
  v281 = L"EnablePanelFitterSupport";
  v282 = &v79;
  v284 = &v80;
  v288 = L"EnableMultiPlaneOverlay3DDIs";
  v289 = &v52;
  v291 = &v81;
  v295 = L"DisableSecondaryIFlipSupport";
  v296 = &v50;
  v298 = &v82;
  v302 = L"EnableWDDM23Synchronization";
  v303 = &v42;
  v305 = &v83;
  v309 = L"DisableVersionMismatchCheck";
  v310 = &v43;
  v312 = &v84;
  v316 = L"IoMmuFlags";
  v317 = &v44;
  v319 = &v85;
  v266 = 288;
  v269 = 67108868;
  v271 = 4;
  v272 = 0LL;
  v273 = 288;
  v276 = 67108868;
  v278 = 4;
  v279 = 0LL;
  v280 = 288;
  v283 = 67108868;
  v285 = 4;
  v286 = 0LL;
  v287 = 288;
  v290 = 67108868;
  v292 = 4;
  v293 = 0LL;
  v294 = 288;
  v297 = 67108868;
  v299 = 4;
  v300 = 0LL;
  v301 = 288;
  v304 = 67108868;
  v306 = 4;
  v307 = 0LL;
  v308 = 288;
  v311 = 67108868;
  v313 = 4;
  v314 = 0LL;
  v315 = 288;
  v318 = 67108868;
  v320 = 4;
  v321 = 0LL;
  v327 = 4;
  v323 = L"DisableMultiSourceMPOCheck";
  v322 = 288;
  v324 = &v55;
  v325 = 67108868;
  v326 = &v86;
  v328 = 0LL;
  v329 = 0;
  memset(v330, 0, sizeof(v330));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v90, 0LL, 0LL);
  v4 = v31 == 0;
  *((_BYTE *)this + 2377) = v29 != 0;
  *((_DWORD *)this + 598) = v30;
  *((_QWORD *)this + 298) = v89;
  v5 = !v4;
  v4 = v25 == 0;
  *((_BYTE *)this + 2396) = v5;
  v6 = !v4;
  v4 = v26 == 0;
  *((_BYTE *)this + 2397) = v6;
  v7 = !v4;
  v4 = v32 == 0;
  *((_BYTE *)this + 2398) = v7;
  v8 = !v4;
  v4 = v33 == 0;
  *((_BYTE *)this + 2400) = v8;
  v9 = !v4;
  v4 = v34 == 0;
  *((_BYTE *)this + 2401) = v9;
  v10 = !v4;
  v4 = v35 == 0;
  *((_BYTE *)this + 2402) = v10;
  v11 = !v4;
  v4 = v36 == 0;
  *((_BYTE *)this + 2403) = v11;
  v12 = !v4;
  v4 = v38 == 0;
  *((_BYTE *)this + 2399) = v12;
  *((_DWORD *)this + 606) = v37;
  *((_BYTE *)this + 2404) = !v4;
  if ( v39 || (v13 = 0, (*((_DWORD *)this + 459) & 0x100) != 0) )
    v13 = 1;
  v4 = v40 == 0;
  *((_BYTE *)this + 2378) = v13;
  v14 = !v4;
  v4 = v41 == 0;
  *((_BYTE *)this + 2379) = v14;
  DXGADAPTER::Config = !v4 | DXGADAPTER::Config & 0xFE;
  if ( !v42 || (v15 = 1, *((int *)this + 526) < 8704) )
    v15 = 0;
  v4 = v43 == 0;
  *((_BYTE *)this + 2413) = v15;
  *((_BYTE *)this + 2419) = !v4;
  *((_DWORD *)this + 605) = v44;
  if ( v45 )
    *((_BYTE *)this + 2307) = 1;
  if ( v46 )
    *((_BYTE *)this + 2308) = 0;
  if ( v47 )
    *((_DWORD *)this + 458) |= 0x20u;
  if ( *((_BYTE *)this + 2308) )
  {
    if ( *((_BYTE *)this + 2374) )
      *((_DWORD *)this + 578) = 2;
  }
  else
  {
    *((_DWORD *)this + 578) = 1;
  }
  v16 = *((_BYTE *)this + 2377);
  if ( *((int *)this + 526) < 4608 )
    v16 = 0;
  *((_BYTE *)this + 2377) = v16;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    *((_BYTE *)this + 2404) = 0;
  if ( !v48 || (v20 = 1, !v17) )
    v20 = 0;
  v4 = v49 == 0;
  *((_BYTE *)this + 2405) = v20;
  *((_BYTE *)this + 2408) = 0;
  *((_BYTE *)this + 2406) = !v4;
  if ( !v50 && (*((_DWORD *)this + 457) & 0x10) != 0 )
  {
    if ( v18 < 8448 )
    {
      if ( v18 >= 0x2000 )
        *((_BYTE *)this + 2408) = v51 != 0;
    }
    else
    {
      *((_BYTE *)this + 2408) = 1;
    }
  }
  v4 = *((_QWORD *)this + 62) == 0LL;
  v21 = 0;
  *((_BYTE *)this + 2410) = 0;
  *((_BYTE *)this + 2417) = !v4;
  if ( *((_QWORD *)this + 113) )
  {
    v21 = v18 >= v19 || v18 >= 8448 && ((*((_DWORD *)this + 75) & 0x200) != 0 || v52);
    *((_BYTE *)this + 2410) = v21;
  }
  v22 = v21;
  v23 = v17;
  if ( v17 )
  {
    if ( !v21 )
    {
      v22 = 0;
      if ( !*((_QWORD *)this + 93) && !*((_QWORD *)this + 109) )
      {
        *((_BYTE *)this + 2308) = 0;
        v23 = 0;
      }
    }
  }
  *((_BYTE *)this + 2411) = 0;
  if ( !v22 )
    goto LABEL_49;
  if ( v18 >= v19 && (*((_QWORD *)this + 139) || *((_QWORD *)this + 140)) )
    *((_BYTE *)this + 2411) = 1;
  if ( !*((_DWORD *)this + 585) )
LABEL_49:
    *((_DWORD *)this + 585) = 1;
  *((_BYTE *)this + 2409) = v22;
  if ( !v22 || (v24 = 1, !v23) )
    v24 = 0;
  *((_BYTE *)this + 2407) = v24;
  if ( *((_DWORD *)this + 62) > 1u )
    *((_DWORD *)this + 621) = v53;
  if ( v54 )
    *(_BYTE *)a2 |= 0x10u;
  *((_BYTE *)this + 2412) = v55 != 0;
}
