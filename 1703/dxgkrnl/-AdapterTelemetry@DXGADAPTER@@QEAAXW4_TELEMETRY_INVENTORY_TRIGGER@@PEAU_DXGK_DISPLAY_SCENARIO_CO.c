/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B9C8
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00355D0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C001038C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C0010468 (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C00128C4 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int16 DriverVersion; // r12
  bool v8; // r13
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // r11
  BOOLEAN v11; // al
  TraceLoggingHProvider v12; // r11
  BOOLEAN v13; // al
  const WCHAR *v14; // rdx
  int v15; // r10d
  unsigned __int16 *v16; // rax
  int v17; // ecx
  const GUID *v18; // r9
  const struct _TlgProvider_t *v19; // r11
  unsigned int v20; // ecx
  int v21; // r10d
  int v22; // eax
  __int64 v23; // rdx
  GUID *p_ActivityId; // r8
  const struct _TlgProvider_t *v25; // r11
  BOOLEAN v26; // al
  TraceLoggingHProvider v27; // r11
  BOOLEAN v28; // al
  const WCHAR *v29; // rdx
  int v30; // r10d
  unsigned __int16 *v31; // rax
  int v32; // ecx
  const GUID *v33; // r9
  const struct _TlgProvider_t *v34; // r11
  unsigned int v35; // ecx
  int v36; // r10d
  int v37; // eax
  __int64 v38; // rdx
  GUID *v39; // r8
  const struct _TlgProvider_t *v40; // r11
  BOOLEAN v41; // al
  TraceLoggingHProvider v42; // r11
  BOOLEAN v43; // al
  const WCHAR *v44; // rdx
  int v45; // r10d
  unsigned __int16 *v46; // rax
  int v47; // ecx
  const GUID *v48; // r9
  const struct _TlgProvider_t *v49; // r11
  unsigned int v50; // ecx
  int v51; // r10d
  int v52; // eax
  GUID *v53; // r8
  bool v54; // [rsp+50h] [rbp-B0h]
  __int16 v55; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v56; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v57; // [rsp+56h] [rbp-AAh] BYREF
  __int16 v58; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v59; // [rsp+5Ah] [rbp-A6h] BYREF
  __int16 v60; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v61; // [rsp+5Eh] [rbp-A2h] BYREF
  __int16 v62; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v63; // [rsp+62h] [rbp-9Eh] BYREF
  __int16 v64; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v65; // [rsp+66h] [rbp-9Ah] BYREF
  __int16 v66; // [rsp+68h] [rbp-98h] BYREF
  __int16 v67; // [rsp+6Ah] [rbp-96h] BYREF
  __int16 v68; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v69; // [rsp+6Eh] [rbp-92h] BYREF
  __int16 v70; // [rsp+70h] [rbp-90h] BYREF
  __int16 v71; // [rsp+72h] [rbp-8Eh] BYREF
  __int16 v72; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v73; // [rsp+76h] [rbp-8Ah] BYREF
  unsigned int v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+7Ch] [rbp-84h] BYREF
  volatile unsigned int v76; // [rsp+80h] [rbp-80h] BYREF
  int v77; // [rsp+84h] [rbp-7Ch] BYREF
  int v78; // [rsp+88h] [rbp-78h] BYREF
  int v79; // [rsp+8Ch] [rbp-74h] BYREF
  int v80; // [rsp+90h] [rbp-70h] BYREF
  int v81; // [rsp+94h] [rbp-6Ch] BYREF
  int v82; // [rsp+98h] [rbp-68h] BYREF
  BOOL v83; // [rsp+9Ch] [rbp-64h] BYREF
  BOOL v84; // [rsp+A0h] [rbp-60h] BYREF
  int v85; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v86; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v87; // [rsp+ACh] [rbp-54h] BYREF
  int v88; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v89; // [rsp+B4h] [rbp-4Ch] BYREF
  int v90; // [rsp+B8h] [rbp-48h] BYREF
  int v91; // [rsp+BCh] [rbp-44h] BYREF
  volatile unsigned int v92; // [rsp+C0h] [rbp-40h] BYREF
  int v93; // [rsp+C4h] [rbp-3Ch] BYREF
  int v94; // [rsp+C8h] [rbp-38h] BYREF
  int v95; // [rsp+CCh] [rbp-34h] BYREF
  int v96; // [rsp+D0h] [rbp-30h] BYREF
  int v97; // [rsp+D4h] [rbp-2Ch] BYREF
  int v98; // [rsp+D8h] [rbp-28h] BYREF
  BOOL v99; // [rsp+DCh] [rbp-24h] BYREF
  BOOL v100; // [rsp+E0h] [rbp-20h] BYREF
  int v101; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v102; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v103; // [rsp+ECh] [rbp-14h] BYREF
  int v104; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v105; // [rsp+F4h] [rbp-Ch] BYREF
  int v106; // [rsp+F8h] [rbp-8h] BYREF
  int v107; // [rsp+FCh] [rbp-4h] BYREF
  volatile unsigned int v108; // [rsp+100h] [rbp+0h] BYREF
  int v109; // [rsp+104h] [rbp+4h] BYREF
  int v110; // [rsp+108h] [rbp+8h] BYREF
  int v111; // [rsp+10Ch] [rbp+Ch] BYREF
  int v112; // [rsp+110h] [rbp+10h] BYREF
  int v113; // [rsp+114h] [rbp+14h] BYREF
  int v114; // [rsp+118h] [rbp+18h] BYREF
  BOOL v115; // [rsp+11Ch] [rbp+1Ch] BYREF
  BOOL v116; // [rsp+120h] [rbp+20h] BYREF
  int v117; // [rsp+124h] [rbp+24h] BYREF
  unsigned int v118; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v119; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v120; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v121; // [rsp+134h] [rbp+34h] BYREF
  int v122; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v123; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v124; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v125; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v126; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v127; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v128; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int64 v129; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v130; // [rsp+178h] [rbp+78h] BYREF
  __int64 v131; // [rsp+180h] [rbp+80h] BYREF
  __int64 v132; // [rsp+188h] [rbp+88h] BYREF
  __int64 v133; // [rsp+190h] [rbp+90h] BYREF
  char v134[8]; // [rsp+198h] [rbp+98h] BYREF
  char v135; // [rsp+1A0h] [rbp+A0h]
  GUID ActivityId; // [rsp+1B0h] [rbp+B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+C0h] BYREF
  __int16 *v138; // [rsp+1E0h] [rbp+E0h]
  __int64 v139; // [rsp+1E8h] [rbp+E8h]
  int *v140; // [rsp+1F0h] [rbp+F0h]
  int v141; // [rsp+1F8h] [rbp+F8h]
  int v142; // [rsp+1FCh] [rbp+FCh]
  volatile unsigned int *v143; // [rsp+200h] [rbp+100h]
  int v144; // [rsp+208h] [rbp+108h]
  int v145; // [rsp+20Ch] [rbp+10Ch]
  int *v146; // [rsp+210h] [rbp+110h]
  int v147; // [rsp+218h] [rbp+118h]
  int v148; // [rsp+21Ch] [rbp+11Ch]
  int *v149; // [rsp+220h] [rbp+120h]
  __int64 v150; // [rsp+228h] [rbp+128h]
  _DWORD *v151; // [rsp+230h] [rbp+130h]
  __int64 v152; // [rsp+238h] [rbp+138h]
  __int64 v153; // [rsp+240h] [rbp+140h]
  _DWORD v154[2]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v155; // [rsp+250h] [rbp+150h]
  __int64 v156; // [rsp+258h] [rbp+158h]
  __int64 v157; // [rsp+260h] [rbp+160h]
  __int64 v158; // [rsp+268h] [rbp+168h]
  __int64 v159; // [rsp+270h] [rbp+170h]
  __int64 v160; // [rsp+278h] [rbp+178h]
  __int64 v161; // [rsp+280h] [rbp+180h]
  __int64 v162; // [rsp+288h] [rbp+188h]
  __int16 *v163; // [rsp+290h] [rbp+190h]
  __int64 v164; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v166; // [rsp+2B0h] [rbp+1B0h]
  __int64 v167; // [rsp+2B8h] [rbp+1B8h]
  __int64 v168; // [rsp+2C0h] [rbp+1C0h]
  __int64 v169; // [rsp+2C8h] [rbp+1C8h]
  int *v170; // [rsp+2D0h] [rbp+1D0h]
  __int64 v171; // [rsp+2D8h] [rbp+1D8h]
  int *v172; // [rsp+2E0h] [rbp+1E0h]
  __int64 v173; // [rsp+2E8h] [rbp+1E8h]
  int *v174; // [rsp+2F0h] [rbp+1F0h]
  __int64 v175; // [rsp+2F8h] [rbp+1F8h]
  int *v176; // [rsp+300h] [rbp+200h]
  __int64 v177; // [rsp+308h] [rbp+208h]
  BOOL *v178; // [rsp+310h] [rbp+210h]
  __int64 v179; // [rsp+318h] [rbp+218h]
  BOOL *v180; // [rsp+320h] [rbp+220h]
  __int64 v181; // [rsp+328h] [rbp+228h]
  int *v182; // [rsp+330h] [rbp+230h]
  __int64 v183; // [rsp+338h] [rbp+238h]
  unsigned int *v184; // [rsp+340h] [rbp+240h]
  __int64 v185; // [rsp+348h] [rbp+248h]
  unsigned int *v186; // [rsp+350h] [rbp+250h]
  __int64 v187; // [rsp+358h] [rbp+258h]
  int *v188; // [rsp+360h] [rbp+260h]
  __int64 v189; // [rsp+368h] [rbp+268h]
  unsigned int *v190; // [rsp+370h] [rbp+270h]
  __int64 v191; // [rsp+378h] [rbp+278h]
  __int16 *v192; // [rsp+380h] [rbp+280h]
  __int64 v193; // [rsp+388h] [rbp+288h]
  __int64 *v194; // [rsp+390h] [rbp+290h]
  __int64 v195; // [rsp+398h] [rbp+298h]
  __int16 *v196; // [rsp+3A0h] [rbp+2A0h]
  __int64 v197; // [rsp+3A8h] [rbp+2A8h]
  __int16 *v198; // [rsp+3B0h] [rbp+2B0h]
  __int64 v199; // [rsp+3B8h] [rbp+2B8h]
  int *v200; // [rsp+3C0h] [rbp+2C0h]
  __int64 v201; // [rsp+3C8h] [rbp+2C8h]
  unsigned __int64 *v202; // [rsp+3D0h] [rbp+2D0h]
  __int64 v203; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 *v204; // [rsp+3E0h] [rbp+2E0h]
  __int64 v205; // [rsp+3E8h] [rbp+2E8h]
  unsigned __int64 *v206; // [rsp+3F0h] [rbp+2F0h]
  __int64 v207; // [rsp+3F8h] [rbp+2F8h]
  __int16 *v208; // [rsp+400h] [rbp+300h]
  __int64 v209; // [rsp+408h] [rbp+308h]
  __int16 *v210; // [rsp+410h] [rbp+310h]
  __int64 v211; // [rsp+418h] [rbp+318h]
  EVENT_DATA_DESCRIPTOR v212; // [rsp+430h] [rbp+330h] BYREF
  __int16 *v213; // [rsp+450h] [rbp+350h]
  __int64 v214; // [rsp+458h] [rbp+358h]
  int *v215; // [rsp+460h] [rbp+360h]
  int v216; // [rsp+468h] [rbp+368h]
  int v217; // [rsp+46Ch] [rbp+36Ch]
  volatile unsigned int *v218; // [rsp+470h] [rbp+370h]
  int v219; // [rsp+478h] [rbp+378h]
  int v220; // [rsp+47Ch] [rbp+37Ch]
  int *v221; // [rsp+480h] [rbp+380h]
  int v222; // [rsp+488h] [rbp+388h]
  int v223; // [rsp+48Ch] [rbp+38Ch]
  int *v224; // [rsp+490h] [rbp+390h]
  __int64 v225; // [rsp+498h] [rbp+398h]
  _DWORD *v226; // [rsp+4A0h] [rbp+3A0h]
  __int64 v227; // [rsp+4A8h] [rbp+3A8h]
  __int64 v228; // [rsp+4B0h] [rbp+3B0h]
  _DWORD v229[2]; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int64 v230; // [rsp+4C0h] [rbp+3C0h]
  __int64 v231; // [rsp+4C8h] [rbp+3C8h]
  __int64 v232; // [rsp+4D0h] [rbp+3D0h]
  __int64 v233; // [rsp+4D8h] [rbp+3D8h]
  __int64 v234; // [rsp+4E0h] [rbp+3E0h]
  __int64 v235; // [rsp+4E8h] [rbp+3E8h]
  __int64 v236; // [rsp+4F0h] [rbp+3F0h]
  __int64 v237; // [rsp+4F8h] [rbp+3F8h]
  __int16 *v238; // [rsp+500h] [rbp+400h]
  __int64 v239; // [rsp+508h] [rbp+408h]
  struct _EVENT_DATA_DESCRIPTOR v240; // [rsp+510h] [rbp+410h] BYREF
  __int64 v241; // [rsp+520h] [rbp+420h]
  __int64 v242; // [rsp+528h] [rbp+428h]
  __int64 v243; // [rsp+530h] [rbp+430h]
  __int64 v244; // [rsp+538h] [rbp+438h]
  int *v245; // [rsp+540h] [rbp+440h]
  __int64 v246; // [rsp+548h] [rbp+448h]
  int *v247; // [rsp+550h] [rbp+450h]
  __int64 v248; // [rsp+558h] [rbp+458h]
  int *v249; // [rsp+560h] [rbp+460h]
  __int64 v250; // [rsp+568h] [rbp+468h]
  int *v251; // [rsp+570h] [rbp+470h]
  __int64 v252; // [rsp+578h] [rbp+478h]
  BOOL *v253; // [rsp+580h] [rbp+480h]
  __int64 v254; // [rsp+588h] [rbp+488h]
  BOOL *v255; // [rsp+590h] [rbp+490h]
  __int64 v256; // [rsp+598h] [rbp+498h]
  int *v257; // [rsp+5A0h] [rbp+4A0h]
  __int64 v258; // [rsp+5A8h] [rbp+4A8h]
  unsigned int *v259; // [rsp+5B0h] [rbp+4B0h]
  __int64 v260; // [rsp+5B8h] [rbp+4B8h]
  unsigned int *v261; // [rsp+5C0h] [rbp+4C0h]
  __int64 v262; // [rsp+5C8h] [rbp+4C8h]
  int *v263; // [rsp+5D0h] [rbp+4D0h]
  __int64 v264; // [rsp+5D8h] [rbp+4D8h]
  unsigned int *v265; // [rsp+5E0h] [rbp+4E0h]
  __int64 v266; // [rsp+5E8h] [rbp+4E8h]
  __int16 *v267; // [rsp+5F0h] [rbp+4F0h]
  __int64 v268; // [rsp+5F8h] [rbp+4F8h]
  __int64 *v269; // [rsp+600h] [rbp+500h]
  __int64 v270; // [rsp+608h] [rbp+508h]
  __int16 *v271; // [rsp+610h] [rbp+510h]
  __int64 v272; // [rsp+618h] [rbp+518h]
  __int16 *v273; // [rsp+620h] [rbp+520h]
  __int64 v274; // [rsp+628h] [rbp+528h]
  int *v275; // [rsp+630h] [rbp+530h]
  __int64 v276; // [rsp+638h] [rbp+538h]
  __int16 *v277; // [rsp+640h] [rbp+540h]
  __int64 v278; // [rsp+648h] [rbp+548h]
  __int16 *v279; // [rsp+650h] [rbp+550h]
  __int64 v280; // [rsp+658h] [rbp+558h]
  EVENT_DATA_DESCRIPTOR v281; // [rsp+670h] [rbp+570h] BYREF
  __int16 *v282; // [rsp+690h] [rbp+590h]
  __int64 v283; // [rsp+698h] [rbp+598h]
  int *v284; // [rsp+6A0h] [rbp+5A0h]
  int v285; // [rsp+6A8h] [rbp+5A8h]
  int v286; // [rsp+6ACh] [rbp+5ACh]
  volatile unsigned int *v287; // [rsp+6B0h] [rbp+5B0h]
  int v288; // [rsp+6B8h] [rbp+5B8h]
  int v289; // [rsp+6BCh] [rbp+5BCh]
  int *v290; // [rsp+6C0h] [rbp+5C0h]
  int v291; // [rsp+6C8h] [rbp+5C8h]
  int v292; // [rsp+6CCh] [rbp+5CCh]
  int *v293; // [rsp+6D0h] [rbp+5D0h]
  __int64 v294; // [rsp+6D8h] [rbp+5D8h]
  _DWORD *v295; // [rsp+6E0h] [rbp+5E0h]
  __int64 v296; // [rsp+6E8h] [rbp+5E8h]
  __int64 v297; // [rsp+6F0h] [rbp+5F0h]
  _DWORD v298[2]; // [rsp+6F8h] [rbp+5F8h] BYREF
  __int64 v299; // [rsp+700h] [rbp+600h]
  __int64 v300; // [rsp+708h] [rbp+608h]
  __int64 v301; // [rsp+710h] [rbp+610h]
  __int64 v302; // [rsp+718h] [rbp+618h]
  __int64 v303; // [rsp+720h] [rbp+620h]
  __int64 v304; // [rsp+728h] [rbp+628h]
  __int64 v305; // [rsp+730h] [rbp+630h]
  __int64 v306; // [rsp+738h] [rbp+638h]
  __int16 *v307; // [rsp+740h] [rbp+640h]
  __int64 v308; // [rsp+748h] [rbp+648h]
  struct _EVENT_DATA_DESCRIPTOR v309; // [rsp+750h] [rbp+650h] BYREF
  __int64 v310; // [rsp+760h] [rbp+660h]
  __int64 v311; // [rsp+768h] [rbp+668h]
  __int64 v312; // [rsp+770h] [rbp+670h]
  __int64 v313; // [rsp+778h] [rbp+678h]
  int *v314; // [rsp+780h] [rbp+680h]
  __int64 v315; // [rsp+788h] [rbp+688h]
  int *v316; // [rsp+790h] [rbp+690h]
  __int64 v317; // [rsp+798h] [rbp+698h]
  int *v318; // [rsp+7A0h] [rbp+6A0h]
  __int64 v319; // [rsp+7A8h] [rbp+6A8h]
  int *v320; // [rsp+7B0h] [rbp+6B0h]
  __int64 v321; // [rsp+7B8h] [rbp+6B8h]
  BOOL *v322; // [rsp+7C0h] [rbp+6C0h]
  __int64 v323; // [rsp+7C8h] [rbp+6C8h]
  BOOL *v324; // [rsp+7D0h] [rbp+6D0h]
  __int64 v325; // [rsp+7D8h] [rbp+6D8h]
  int *v326; // [rsp+7E0h] [rbp+6E0h]
  __int64 v327; // [rsp+7E8h] [rbp+6E8h]
  unsigned int *v328; // [rsp+7F0h] [rbp+6F0h]
  __int64 v329; // [rsp+7F8h] [rbp+6F8h]
  unsigned int *v330; // [rsp+800h] [rbp+700h]
  __int64 v331; // [rsp+808h] [rbp+708h]
  int *v332; // [rsp+810h] [rbp+710h]
  __int64 v333; // [rsp+818h] [rbp+718h]
  unsigned int *v334; // [rsp+820h] [rbp+720h]
  __int64 v335; // [rsp+828h] [rbp+728h]
  __int16 *v336; // [rsp+830h] [rbp+730h]
  __int64 v337; // [rsp+838h] [rbp+738h]
  __int64 *v338; // [rsp+840h] [rbp+740h]
  __int64 v339; // [rsp+848h] [rbp+748h]
  __int16 *v340; // [rsp+850h] [rbp+750h]
  __int64 v341; // [rsp+858h] [rbp+758h]
  __int16 *v342; // [rsp+860h] [rbp+760h]
  __int64 v343; // [rsp+868h] [rbp+768h]
  int *v344; // [rsp+870h] [rbp+770h]
  __int64 v345; // [rsp+878h] [rbp+778h]
  unsigned __int64 *v346; // [rsp+880h] [rbp+780h]
  __int64 v347; // [rsp+888h] [rbp+788h]
  unsigned __int64 *v348; // [rsp+890h] [rbp+790h]
  __int64 v349; // [rsp+898h] [rbp+798h]
  unsigned __int64 *v350; // [rsp+8A0h] [rbp+7A0h]
  __int64 v351; // [rsp+8A8h] [rbp+7A8h]

  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1);
  v8 = *(_QWORD *)(v6 + 776) != 0LL;
  v54 = *(_DWORD *)(v6 + 248) > 1u;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)v6, (int *)&v74);
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)v134);
  v9 = *(_QWORD *)(a1 + 2288);
  if ( v9 )
  {
    if ( *(_QWORD *)(a1 + 2280) )
    {
      v128 = 0LL;
      v129 = 0LL;
      v130 = 0LL;
      VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        *(VIDMM_EXPORT **)(v9 + 432),
        *(struct VIDMM_GLOBAL **)(v9 + 440),
        0,
        &v127,
        &v127,
        &v127,
        &v128,
        &v129,
        &v130);
      ++DXGADAPTER::sTelemetrySeqId;
      if ( dword_1C006E850[0] > 5u && TlgKeywordOn((TraceLoggingHProvider)dword_1C006E850, 0x800000000004uLL) )
      {
        v138 = &v67;
        v67 = 2;
        v139 = 2LL;
        v142 = 0;
        v107 = MEMORY[0xFFFFF780000002C4];
        v140 = &v107;
        v145 = 0;
        v108 = DXGADAPTER::sTelemetrySeqId;
        v143 = &v108;
        v141 = 4;
        v144 = 4;
        v11 = TraceLoggingProviderEnabled(v10, 0, 0x400000000000uLL);
        v148 = 0;
        v109 = v11;
        v146 = &v109;
        v147 = 4;
        v13 = TraceLoggingProviderEnabled(v12, 0, 0x200000000000uLL);
        v14 = *(const WCHAR **)(a1 + 1296);
        v15 = v13;
        v149 = &v110;
        v16 = *(unsigned __int16 **)(a1 + 1224);
        v110 = v15;
        v151 = v154;
        v150 = 4LL;
        v152 = 2LL;
        v17 = *v16;
        v153 = *((_QWORD *)v16 + 1);
        v155 = a1 + 276;
        v157 = a1 + 280;
        v159 = a1 + 284;
        v161 = a1 + 288;
        v68 = *(_WORD *)(a1 + 292);
        v154[0] = v17;
        v163 = &v68;
        v154[1] = 0;
        v156 = 4LL;
        v158 = 4LL;
        v160 = 4LL;
        v162 = 4LL;
        v164 = 2LL;
        TlgCreateWsz(&pDesc, v14);
        v167 = 8LL;
        v168 = a1 + 1312;
        v166 = a1 + 1304;
        v20 = *(_DWORD *)(a1 + 300);
        v169 = 4LL;
        v111 = (v20 >> 6) & 1;
        v170 = &v111;
        v22 = v21;
        v171 = 4LL;
        LOBYTE(v22) = v135 == (char)v21;
        v173 = 4LL;
        v112 = v22;
        v172 = &v112;
        v113 = *(unsigned __int8 *)(a1 + 2151);
        v174 = &v113;
        v114 = *(unsigned __int8 *)(a1 + 2156);
        v176 = &v114;
        v115 = v8;
        v178 = &v115;
        v116 = v54;
        v180 = &v116;
        v182 = &v117;
        v117 = (v20 >> 7) & 1;
        v175 = 4LL;
        v118 = (v74 >> 3) & 1;
        v184 = &v118;
        v177 = 4LL;
        v119 = (v74 >> 2) & 1;
        v186 = &v119;
        v120 = v74 & 1;
        v121 = (v74 >> 1) & 1;
        v179 = 4LL;
        v190 = &v121;
        v192 = &v69;
        v133 = *(_QWORD *)(a1 + 268);
        v194 = &v133;
        v70 = *(_WORD *)(a1 + 2136);
        v196 = &v70;
        v71 = *(_WORD *)(a1 + 2140);
        v198 = &v71;
        v181 = 4LL;
        v183 = 4LL;
        v185 = 4LL;
        v187 = 4LL;
        v188 = &v120;
        v189 = 4LL;
        v191 = 4LL;
        v69 = DriverVersion;
        v193 = 2LL;
        v195 = 8LL;
        v197 = 2LL;
        v199 = 2LL;
        v122 = a2;
        v23 = *(_QWORD *)(a1 + 2280);
        v200 = &v122;
        v202 = &v128;
        v204 = &v129;
        v206 = &v130;
        v201 = 4LL;
        v203 = 8LL;
        v205 = 8LL;
        v207 = 8LL;
        LOWORD(v20) = *(_WORD *)(*(_QWORD *)(v23 + 16) + 1160LL);
        v208 = &v72;
        v72 = v20;
        v209 = 2LL;
        LOWORD(v20) = *(_WORD *)(*(_QWORD *)(v23 + 16) + 1164LL);
        v210 = &v73;
        v73 = v20;
        v211 = 2LL;
        p_ActivityId = (GUID *)(a3 + 8);
        if ( !a3 )
          p_ActivityId = &ActivityId;
        TlgWrite(v19, &unk_1C004CF71, p_ActivityId, v18, 0x26u, &pData);
      }
    }
    else
    {
      v124 = 0LL;
      v125 = 0LL;
      v126 = 0LL;
      if ( !*(_BYTE *)(a1 + 186) )
        VIDMM_EXPORT::VidMmGetTotalSegmentSize(
          *(VIDMM_EXPORT **)(v9 + 432),
          *(struct VIDMM_GLOBAL **)(v9 + 440),
          0,
          &v123,
          &v123,
          &v123,
          &v124,
          &v125,
          &v126);
      ++DXGADAPTER::sTelemetrySeqId;
      if ( dword_1C006E850[0] > 5u && TlgKeywordOn((TraceLoggingHProvider)dword_1C006E850, 0x800000000004uLL) )
      {
        v282 = &v62;
        v62 = 2;
        v283 = 2LL;
        v286 = 0;
        v91 = MEMORY[0xFFFFF780000002C4];
        v284 = &v91;
        v289 = 0;
        v92 = DXGADAPTER::sTelemetrySeqId;
        v287 = &v92;
        v285 = 4;
        v288 = 4;
        v41 = TraceLoggingProviderEnabled(v40, 0, 0x400000000000uLL);
        v292 = 0;
        v93 = v41;
        v290 = &v93;
        v291 = 4;
        v43 = TraceLoggingProviderEnabled(v42, 0, 0x200000000000uLL);
        v44 = *(const WCHAR **)(a1 + 1296);
        v45 = v43;
        v293 = &v94;
        v46 = *(unsigned __int16 **)(a1 + 1224);
        v94 = v45;
        v295 = v298;
        v294 = 4LL;
        v296 = 2LL;
        v47 = *v46;
        v297 = *((_QWORD *)v46 + 1);
        v299 = a1 + 276;
        v301 = a1 + 280;
        v303 = a1 + 284;
        v305 = a1 + 288;
        v63 = *(_WORD *)(a1 + 292);
        v298[0] = v47;
        v307 = &v63;
        v298[1] = 0;
        v300 = 4LL;
        v302 = 4LL;
        v304 = 4LL;
        v306 = 4LL;
        v308 = 2LL;
        TlgCreateWsz(&v309, v44);
        v311 = 8LL;
        v312 = a1 + 1312;
        v310 = a1 + 1304;
        v50 = *(_DWORD *)(a1 + 300);
        v313 = 4LL;
        v95 = (v50 >> 6) & 1;
        v314 = &v95;
        v52 = v51;
        v315 = 4LL;
        LOBYTE(v52) = v135 == (char)v51;
        v317 = 4LL;
        v96 = v52;
        v316 = &v96;
        v97 = *(unsigned __int8 *)(a1 + 2151);
        v318 = &v97;
        v98 = *(unsigned __int8 *)(a1 + 2156);
        v320 = &v98;
        v99 = v8;
        v322 = &v99;
        v100 = v54;
        v324 = &v100;
        v326 = &v101;
        v101 = (v50 >> 7) & 1;
        v319 = 4LL;
        v102 = (v74 >> 3) & 1;
        v328 = &v102;
        v321 = 4LL;
        v103 = (v74 >> 2) & 1;
        v330 = &v103;
        v104 = v74 & 1;
        v105 = (v74 >> 1) & 1;
        v323 = 4LL;
        v334 = &v105;
        v336 = &v64;
        v132 = *(_QWORD *)(a1 + 268);
        v338 = &v132;
        v65 = *(_WORD *)(a1 + 2136);
        v340 = &v65;
        v66 = *(_WORD *)(a1 + 2140);
        v342 = &v66;
        v325 = 4LL;
        v327 = 4LL;
        v329 = 4LL;
        v331 = 4LL;
        v332 = &v104;
        v333 = 4LL;
        v335 = 4LL;
        v64 = DriverVersion;
        v337 = 2LL;
        v339 = 8LL;
        v341 = 2LL;
        v343 = 2LL;
        v106 = a2;
        v345 = 4LL;
        v344 = &v106;
        v346 = &v124;
        v348 = &v125;
        v350 = &v126;
        v347 = 8LL;
        v349 = 8LL;
        v351 = 8LL;
        v53 = (GUID *)(a3 + 8);
        if ( !a3 )
          v53 = &ActivityId;
        TlgWrite(v49, &unk_1C004D1C9, v53, v48, 0x24u, &v281);
      }
    }
  }
  else if ( *(_QWORD *)(a1 + 2280) )
  {
    ++DXGADAPTER::sTelemetrySeqId;
    if ( dword_1C006E850[0] > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)dword_1C006E850, 0x800000000004uLL) )
      {
        v213 = &v55;
        v55 = 2;
        v214 = 2LL;
        v217 = 0;
        v75 = MEMORY[0xFFFFF780000002C4];
        v215 = &v75;
        v220 = 0;
        v76 = DXGADAPTER::sTelemetrySeqId;
        v218 = &v76;
        v216 = 4;
        v219 = 4;
        v26 = TraceLoggingProviderEnabled(v25, 0, 0x400000000000uLL);
        v223 = 0;
        v77 = v26;
        v221 = &v77;
        v222 = 4;
        v28 = TraceLoggingProviderEnabled(v27, 0, 0x200000000000uLL);
        v29 = *(const WCHAR **)(a1 + 1296);
        v30 = v28;
        v224 = &v78;
        v31 = *(unsigned __int16 **)(a1 + 1224);
        v78 = v30;
        v226 = v229;
        v225 = 4LL;
        v227 = 2LL;
        v32 = *v31;
        v228 = *((_QWORD *)v31 + 1);
        v230 = a1 + 276;
        v232 = a1 + 280;
        v234 = a1 + 284;
        v236 = a1 + 288;
        v56 = *(_WORD *)(a1 + 292);
        v229[0] = v32;
        v238 = &v56;
        v229[1] = 0;
        v231 = 4LL;
        v233 = 4LL;
        v235 = 4LL;
        v237 = 4LL;
        v239 = 2LL;
        TlgCreateWsz(&v240, v29);
        v242 = 8LL;
        v243 = a1 + 1312;
        v241 = a1 + 1304;
        v35 = *(_DWORD *)(a1 + 300);
        v244 = 4LL;
        v79 = (v35 >> 6) & 1;
        v245 = &v79;
        v37 = v36;
        v246 = 4LL;
        LOBYTE(v37) = v135 == (char)v36;
        v248 = 4LL;
        v80 = v37;
        v247 = &v80;
        v81 = *(unsigned __int8 *)(a1 + 2151);
        v249 = &v81;
        v82 = *(unsigned __int8 *)(a1 + 2156);
        v251 = &v82;
        v83 = v8;
        v253 = &v83;
        v84 = v54;
        v255 = &v84;
        v257 = &v85;
        v85 = (v35 >> 7) & 1;
        v250 = 4LL;
        v86 = (v74 >> 3) & 1;
        v259 = &v86;
        v252 = 4LL;
        v87 = (v74 >> 2) & 1;
        v261 = &v87;
        v88 = v74 & 1;
        v89 = (v74 >> 1) & 1;
        v254 = 4LL;
        v265 = &v89;
        v267 = &v57;
        v131 = *(_QWORD *)(a1 + 268);
        v269 = &v131;
        v58 = *(_WORD *)(a1 + 2136);
        v271 = &v58;
        v59 = *(_WORD *)(a1 + 2140);
        v273 = &v59;
        v256 = 4LL;
        v258 = 4LL;
        v260 = 4LL;
        v262 = 4LL;
        v263 = &v88;
        v264 = 4LL;
        v266 = 4LL;
        v57 = DriverVersion;
        v268 = 2LL;
        v270 = 8LL;
        v272 = 2LL;
        v274 = 2LL;
        v90 = a2;
        v38 = *(_QWORD *)(a1 + 2280);
        v275 = &v90;
        v276 = 4LL;
        LOWORD(v35) = *(_WORD *)(*(_QWORD *)(v38 + 16) + 1160LL);
        v277 = &v60;
        v60 = v35;
        v278 = 2LL;
        LOWORD(v35) = *(_WORD *)(*(_QWORD *)(v38 + 16) + 1164LL);
        v279 = &v61;
        v61 = v35;
        v280 = 2LL;
        v39 = (GUID *)(a3 + 8);
        if ( !a3 )
          v39 = &ActivityId;
        TlgWrite(v34, &unk_1C004D3FF, v39, v33, 0x23u, &v212);
      }
    }
  }
}
