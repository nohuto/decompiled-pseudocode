/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014DABC
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014CFC4 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180014C90 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x180014F10 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800CD718 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18014CF74 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014D6EC (-ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014D768 (-ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014D7E4 (-ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014D860 (-ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014D8DC (-ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014D958 (-ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x18014F7C4 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QE.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x18014F7E8 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SendInteractionSummary(CTelemetryTouchLatencyAnalysis *this)
{
  _BYTE *v1; // rsi
  unsigned int v3; // ebx
  int v4; // r8d
  int v5; // r10d
  unsigned int v6; // r8d
  _DWORD *v7; // rax
  int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // r15d
  unsigned __int64 v11; // rdx
  int OsLatencyArray; // eax
  int KernelInputLatencyArray; // eax
  int AppInputLatencyArray; // eax
  int AppCommitLatencyArray; // eax
  int DwmRenderLatencyArray; // eax
  int DwmPresentLatencyArray; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 *v29; // r11
  int v30; // eax
  _DWORD *v31; // r10
  __int64 v32; // r11
  unsigned int v33; // r9d
  const GUID *v34; // rax
  char *v35; // r14
  ULONGLONG v36; // rdx
  const WCHAR *v37; // rdx
  int v38; // r8d
  char v39; // cl
  int v40; // eax
  float v41; // xmm0_4
  int v42; // eax
  unsigned int v43; // eax
  __m128i v44; // xmm0
  int v45; // eax
  int v46; // eax
  ULONGLONG v47; // rdx
  const WCHAR *v48; // rdx
  int v49; // edx
  char v50; // cl
  const WCHAR *v51; // rdx
  int v52; // r8d
  char v53; // cl
  int v54; // eax
  int v55; // eax
  float v56; // xmm0_4
  int v57; // eax
  char v59; // [rsp+38h] [rbp-D0h] BYREF
  char v60; // [rsp+39h] [rbp-CFh] BYREF
  char v61; // [rsp+3Ah] [rbp-CEh] BYREF
  char v62; // [rsp+3Bh] [rbp-CDh] BYREF
  char v63; // [rsp+3Ch] [rbp-CCh] BYREF
  char v64; // [rsp+3Dh] [rbp-CBh] BYREF
  __int16 v65; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v66; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v67; // [rsp+42h] [rbp-C6h] BYREF
  __int16 v68; // [rsp+44h] [rbp-C4h] BYREF
  __int16 v69; // [rsp+46h] [rbp-C2h] BYREF
  __int16 v70; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v71; // [rsp+4Ah] [rbp-BEh] BYREF
  __int16 v72; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v73; // [rsp+4Eh] [rbp-BAh] BYREF
  __int16 v74; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v75; // [rsp+52h] [rbp-B6h] BYREF
  __int16 v76; // [rsp+54h] [rbp-B4h] BYREF
  __int16 v77; // [rsp+56h] [rbp-B2h] BYREF
  int v78; // [rsp+58h] [rbp-B0h] BYREF
  int v79; // [rsp+5Ch] [rbp-ACh] BYREF
  float v80; // [rsp+60h] [rbp-A8h] BYREF
  int v81; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v82; // [rsp+68h] [rbp-A0h] BYREF
  float v83; // [rsp+6Ch] [rbp-9Ch] BYREF
  float v84; // [rsp+70h] [rbp-98h] BYREF
  int v85; // [rsp+74h] [rbp-94h] BYREF
  float v86; // [rsp+78h] [rbp-90h] BYREF
  float v87; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v88; // [rsp+80h] [rbp-88h] BYREF
  int v89; // [rsp+84h] [rbp-84h] BYREF
  float v90; // [rsp+88h] [rbp-80h] BYREF
  int v91; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v92; // [rsp+90h] [rbp-78h] BYREF
  int v93; // [rsp+98h] [rbp-70h] BYREF
  int v94; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v95; // [rsp+A0h] [rbp-68h] BYREF
  float v96; // [rsp+A4h] [rbp-64h] BYREF
  float v97; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v98; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-50h]
  __int64 v100; // [rsp+C0h] [rbp-48h]
  LARGE_INTEGER PerformanceCount; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v102[6]; // [rsp+D0h] [rbp-38h] BYREF
  int v103; // [rsp+E8h] [rbp-20h] BYREF
  char v104; // [rsp+ECh] [rbp-1Ch]
  GUID pActivityId; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR v106; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  char *v108; // [rsp+148h] [rbp+40h]
  __int64 v109; // [rsp+150h] [rbp+48h]
  float *v110; // [rsp+158h] [rbp+50h]
  __int64 v111; // [rsp+160h] [rbp+58h]
  float *v112; // [rsp+168h] [rbp+60h]
  __int64 v113; // [rsp+170h] [rbp+68h]
  char *v114; // [rsp+178h] [rbp+70h]
  __int64 v115; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v116; // [rsp+188h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v117; // [rsp+198h] [rbp+90h] BYREF
  char *v118; // [rsp+1A8h] [rbp+A0h]
  __int64 v119; // [rsp+1B0h] [rbp+A8h]
  char *v120; // [rsp+1B8h] [rbp+B0h]
  __int64 v121; // [rsp+1C0h] [rbp+B8h]
  char *v122; // [rsp+1C8h] [rbp+C0h]
  __int64 v123; // [rsp+1D0h] [rbp+C8h]
  char *v124; // [rsp+1D8h] [rbp+D0h]
  __int64 v125; // [rsp+1E0h] [rbp+D8h]
  char *v126; // [rsp+1E8h] [rbp+E0h]
  __int64 v127; // [rsp+1F0h] [rbp+E8h]
  _BYTE *v128; // [rsp+1F8h] [rbp+F0h]
  __int64 v129; // [rsp+200h] [rbp+F8h]
  __int16 *v130; // [rsp+208h] [rbp+100h]
  __int64 v131; // [rsp+210h] [rbp+108h]
  char *v132; // [rsp+218h] [rbp+110h]
  int v133; // [rsp+220h] [rbp+118h]
  int v134; // [rsp+224h] [rbp+11Ch]
  __int16 *v135; // [rsp+228h] [rbp+120h]
  __int64 v136; // [rsp+230h] [rbp+128h]
  char *v137; // [rsp+238h] [rbp+130h]
  int v138; // [rsp+240h] [rbp+138h]
  int v139; // [rsp+244h] [rbp+13Ch]
  __int16 *v140; // [rsp+248h] [rbp+140h]
  __int64 v141; // [rsp+250h] [rbp+148h]
  char *v142; // [rsp+258h] [rbp+150h]
  int v143; // [rsp+260h] [rbp+158h]
  int v144; // [rsp+264h] [rbp+15Ch]
  __int16 *v145; // [rsp+268h] [rbp+160h]
  __int64 v146; // [rsp+270h] [rbp+168h]
  char *v147; // [rsp+278h] [rbp+170h]
  int v148; // [rsp+280h] [rbp+178h]
  int v149; // [rsp+284h] [rbp+17Ch]
  __int16 *v150; // [rsp+288h] [rbp+180h]
  __int64 v151; // [rsp+290h] [rbp+188h]
  char *v152; // [rsp+298h] [rbp+190h]
  int v153; // [rsp+2A0h] [rbp+198h]
  int v154; // [rsp+2A4h] [rbp+19Ch]
  __int16 *v155; // [rsp+2A8h] [rbp+1A0h]
  __int64 v156; // [rsp+2B0h] [rbp+1A8h]
  _QWORD *v157; // [rsp+2B8h] [rbp+1B0h]
  int v158; // [rsp+2C0h] [rbp+1B8h]
  int v159; // [rsp+2C4h] [rbp+1BCh]
  int *v160; // [rsp+2C8h] [rbp+1C0h]
  __int64 v161; // [rsp+2D0h] [rbp+1C8h]
  float *v162; // [rsp+2D8h] [rbp+1D0h]
  __int64 v163; // [rsp+2E0h] [rbp+1D8h]
  __int16 *v164; // [rsp+2E8h] [rbp+1E0h]
  __int64 v165; // [rsp+2F0h] [rbp+1E8h]
  float *v166; // [rsp+2F8h] [rbp+1F0h]
  __int64 v167; // [rsp+300h] [rbp+1F8h]
  float *v168; // [rsp+308h] [rbp+200h]
  __int64 v169; // [rsp+310h] [rbp+208h]
  unsigned int *v170; // [rsp+318h] [rbp+210h]
  __int64 v171; // [rsp+320h] [rbp+218h]
  unsigned int *v172; // [rsp+328h] [rbp+220h]
  __int64 v173; // [rsp+330h] [rbp+228h]
  unsigned int *v174; // [rsp+338h] [rbp+230h]
  __int64 v175; // [rsp+340h] [rbp+238h]
  unsigned int *v176; // [rsp+348h] [rbp+240h]
  __int64 v177; // [rsp+350h] [rbp+248h]
  unsigned int *v178; // [rsp+358h] [rbp+250h]
  __int64 v179; // [rsp+360h] [rbp+258h]
  unsigned int *v180; // [rsp+368h] [rbp+260h]
  __int64 v181; // [rsp+370h] [rbp+268h]
  float *v182; // [rsp+378h] [rbp+270h]
  __int64 v183; // [rsp+380h] [rbp+278h]
  unsigned int *v184; // [rsp+388h] [rbp+280h]
  __int64 v185; // [rsp+390h] [rbp+288h]
  float *v186; // [rsp+398h] [rbp+290h]
  __int64 v187; // [rsp+3A0h] [rbp+298h]
  unsigned int *v188; // [rsp+3A8h] [rbp+2A0h]
  __int64 v189; // [rsp+3B0h] [rbp+2A8h]
  __int16 *v190; // [rsp+3B8h] [rbp+2B0h]
  __int64 v191; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v192; // [rsp+3C8h] [rbp+2C0h]
  __int64 v193; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v194; // [rsp+3D8h] [rbp+2D0h]
  __int64 v195; // [rsp+3E0h] [rbp+2D8h]
  float *v196; // [rsp+3E8h] [rbp+2E0h]
  __int64 v197; // [rsp+3F0h] [rbp+2E8h]
  char *v198; // [rsp+3F8h] [rbp+2F0h]
  __int64 v199; // [rsp+400h] [rbp+2F8h]
  float *v200; // [rsp+408h] [rbp+300h]
  __int64 v201; // [rsp+410h] [rbp+308h]
  char *v202; // [rsp+418h] [rbp+310h]
  __int64 v203; // [rsp+420h] [rbp+318h]
  float *v204; // [rsp+428h] [rbp+320h]
  __int64 v205; // [rsp+430h] [rbp+328h]
  char *v206; // [rsp+438h] [rbp+330h]
  __int64 v207; // [rsp+440h] [rbp+338h]
  unsigned int *v208; // [rsp+448h] [rbp+340h]
  __int64 v209; // [rsp+450h] [rbp+348h]
  char *v210; // [rsp+458h] [rbp+350h]
  __int64 v211; // [rsp+460h] [rbp+358h]
  unsigned int *v212; // [rsp+468h] [rbp+360h]
  int v213; // [rsp+470h] [rbp+368h]
  int v214; // [rsp+474h] [rbp+36Ch]
  __int16 *v215; // [rsp+478h] [rbp+370h]
  __int64 v216; // [rsp+480h] [rbp+378h]
  unsigned int *v217; // [rsp+488h] [rbp+380h]
  int v218; // [rsp+490h] [rbp+388h]
  int v219; // [rsp+494h] [rbp+38Ch]
  float *v220; // [rsp+498h] [rbp+390h]
  __int64 v221; // [rsp+4A0h] [rbp+398h]
  float *v222; // [rsp+4A8h] [rbp+3A0h]
  __int64 v223; // [rsp+4B0h] [rbp+3A8h]
  char *v224; // [rsp+4B8h] [rbp+3B0h]
  __int64 v225; // [rsp+4C0h] [rbp+3B8h]
  char *v226; // [rsp+4C8h] [rbp+3C0h]
  __int64 v227; // [rsp+4D0h] [rbp+3C8h]
  int *v228; // [rsp+4D8h] [rbp+3D0h]
  __int64 v229; // [rsp+4E0h] [rbp+3D8h]
  char *v230; // [rsp+4E8h] [rbp+3E0h]
  int v231; // [rsp+4F0h] [rbp+3E8h]
  int v232; // [rsp+4F4h] [rbp+3ECh]
  int *v233; // [rsp+4F8h] [rbp+3F0h]
  __int64 v234; // [rsp+500h] [rbp+3F8h]
  char *v235; // [rsp+508h] [rbp+400h]
  int v236; // [rsp+510h] [rbp+408h]
  int v237; // [rsp+514h] [rbp+40Ch]
  _QWORD v238[2]; // [rsp+518h] [rbp+410h] BYREF
  int v239; // [rsp+528h] [rbp+420h]
  unsigned int v240[2]; // [rsp+530h] [rbp+428h] BYREF
  __int64 v241; // [rsp+538h] [rbp+430h]
  int v242; // [rsp+540h] [rbp+438h]
  unsigned int v243[2]; // [rsp+548h] [rbp+440h] BYREF
  __int64 v244; // [rsp+550h] [rbp+448h]
  int v245; // [rsp+558h] [rbp+450h]
  unsigned int v246[2]; // [rsp+560h] [rbp+458h] BYREF
  __int64 v247; // [rsp+568h] [rbp+460h]
  int v248; // [rsp+570h] [rbp+468h]
  unsigned int v249[2]; // [rsp+578h] [rbp+470h] BYREF
  __int64 v250; // [rsp+580h] [rbp+478h]
  int v251; // [rsp+588h] [rbp+480h]
  unsigned int v252[2]; // [rsp+590h] [rbp+488h] BYREF
  __int64 v253; // [rsp+598h] [rbp+490h]
  int v254; // [rsp+5A0h] [rbp+498h]
  unsigned int v255[2]; // [rsp+5A8h] [rbp+4A0h] BYREF
  __int64 v256; // [rsp+5B0h] [rbp+4A8h]
  int v257; // [rsp+5B8h] [rbp+4B0h]
  unsigned int v258[2]; // [rsp+5C0h] [rbp+4B8h] BYREF
  __int64 v259; // [rsp+5C8h] [rbp+4C0h]
  int v260; // [rsp+5D0h] [rbp+4C8h]
  unsigned int v261[2]; // [rsp+5D8h] [rbp+4D0h] BYREF
  __int64 v262; // [rsp+5E0h] [rbp+4D8h]
  int v263; // [rsp+5E8h] [rbp+4E0h]
  unsigned int v264[2]; // [rsp+5F0h] [rbp+4E8h] BYREF
  __int64 v265; // [rsp+5F8h] [rbp+4F0h]
  int v266; // [rsp+600h] [rbp+4F8h]
  unsigned int v267[2]; // [rsp+608h] [rbp+500h] BYREF
  __int64 v268; // [rsp+610h] [rbp+508h]
  int v269; // [rsp+618h] [rbp+510h]
  unsigned int v270[2]; // [rsp+620h] [rbp+518h] BYREF
  __int64 v271; // [rsp+628h] [rbp+520h]
  int v272; // [rsp+630h] [rbp+528h]
  unsigned int v273[2]; // [rsp+638h] [rbp+530h] BYREF
  __int64 v274; // [rsp+640h] [rbp+538h]
  int v275; // [rsp+648h] [rbp+540h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+650h] [rbp+548h] BYREF

  v1 = (char *)this + 2552;
  v3 = 0;
  v103 = 0;
  v104 = 0;
  if ( !*((_BYTE *)this + 2552) )
    return v3;
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((_DWORD *)this + 674, (__int64)v102, (unsigned __int8)*v1);
  v4 = *((_DWORD *)this + 639);
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v6 = v4 - v5;
  if ( v6 )
  {
    v7 = (_DWORD *)CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((_DWORD *)this + 724, (__int64)&pData, v6);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(&v98, v7);
    v9 = *((_DWORD *)this + 640);
    v10 = 0;
    if ( (int)(v9 - v8) > 0 )
      v10 = *((_DWORD *)this + 725) / (unsigned int)(*((_DWORD *)this + 640) - v8);
  }
  else
  {
    v9 = *((_DWORD *)this + 640);
    v10 = HIDWORD(v98);
  }
  v90 = 0.0;
  if ( v9 )
    v90 = (float)(int)(*((_DWORD *)this + 778) / v9);
  v11 = (unsigned __int8)*v1;
  *(_QWORD *)v240 = 0LL;
  v241 = 0LL;
  v242 = 0;
  *(_QWORD *)v264 = 0LL;
  v265 = 0LL;
  v266 = 0;
  *(_QWORD *)v246 = 0LL;
  v247 = 0LL;
  v248 = 0;
  *(_QWORD *)v255 = 0LL;
  v256 = 0LL;
  v257 = 0;
  *(_QWORD *)v258 = 0LL;
  v259 = 0LL;
  v260 = 0;
  *(_QWORD *)v261 = 0LL;
  v262 = 0LL;
  v263 = 0;
  OsLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
                     (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                     v11,
                     v240);
  v3 = OsLatencyArray;
  if ( OsLatencyArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, OsLatencyArray, 0x87Cu);
LABEL_49:
    if ( v103 == 1 )
    {
      v103 = 2;
      _TlgWriteActivityAutoStop<0,5>((const struct _TlgProvider_t *)&hProvider, &pActivityId);
    }
    return v3;
  }
  KernelInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                              (unsigned __int8)*v1,
                              v264);
  v3 = KernelInputLatencyArray;
  if ( KernelInputLatencyArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, KernelInputLatencyArray, 0x882u);
    goto LABEL_49;
  }
  AppInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
                           (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                           (unsigned __int8)*v1,
                           v246);
  v3 = AppInputLatencyArray;
  if ( AppInputLatencyArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AppInputLatencyArray, 0x888u);
    goto LABEL_49;
  }
  AppCommitLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
                            (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                            (unsigned __int8)*v1,
                            v255);
  v3 = AppCommitLatencyArray;
  if ( AppCommitLatencyArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AppCommitLatencyArray, 0x88Eu);
    goto LABEL_49;
  }
  DwmRenderLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
                            (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                            (unsigned __int8)*v1,
                            v258);
  v3 = DwmRenderLatencyArray;
  if ( DwmRenderLatencyArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DwmRenderLatencyArray, 0x894u);
    goto LABEL_49;
  }
  DwmPresentLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
                             (CTelemetryTouchLatencyAnalysis *)((char *)this + 2720),
                             (unsigned __int8)*v1,
                             v261);
  v3 = DwmPresentLatencyArray;
  if ( DwmPresentLatencyArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DwmPresentLatencyArray, 0x89Au);
    goto LABEL_49;
  }
  v18 = (unsigned __int8)*v1;
  *(_QWORD *)v243 = 0LL;
  v244 = 0LL;
  v245 = 0;
  *(_QWORD *)v249 = 0LL;
  v250 = 0LL;
  v251 = 0;
  *(_QWORD *)v252 = 0LL;
  v253 = 0LL;
  v254 = 0;
  *(_QWORD *)v273 = 0LL;
  v274 = 0LL;
  v275 = 0;
  *(_QWORD *)v267 = 0LL;
  v268 = 0LL;
  v269 = 0;
  *(_QWORD *)v270 = 0LL;
  v271 = 0LL;
  v272 = 0;
  v19 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
          v18,
          v243);
  v3 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x8A8u);
    goto LABEL_49;
  }
  v20 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
          (unsigned __int8)*v1,
          v249);
  v3 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x8AEu);
    goto LABEL_49;
  }
  v21 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
          (unsigned __int8)*v1,
          v252);
  v3 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x8B4u);
    goto LABEL_49;
  }
  v22 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
          (unsigned __int8)*v1,
          v273);
  v3 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x8BAu);
    goto LABEL_49;
  }
  v23 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
          (unsigned __int8)*v1,
          v267);
  v3 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x8C0u);
    goto LABEL_49;
  }
  v24 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
          (CTelemetryTouchLatencyAnalysis *)((char *)this + 2920),
          (unsigned __int8)*v1,
          v270);
  v3 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x8C6u);
    goto LABEL_49;
  }
  QueryPerformanceCounter(&PerformanceCount);
  v89 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
          this,
          *((_QWORD *)this + 318),
          PerformanceCount.QuadPart);
  v238[0] = 0LL;
  v238[1] = 0LL;
  v239 = 0;
  if ( *v1 )
  {
    v28 = (unsigned __int8)*v1;
    v29 = (__int64 *)((char *)this + 2632);
    do
    {
      v30 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, *v29, PerformanceCount.QuadPart);
      *v31 = v30;
      v29 = (__int64 *)(v32 + 8);
      --v28;
    }
    while ( v28 );
  }
  _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
    &v103,
    v25,
    v26,
    v27);
  v33 = hProvider;
  if ( hProvider > 5u )
  {
    v34 = (const GUID *)_TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId(&v103);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A642B, &pActivityId, v34, 2u, &pData);
    v33 = hProvider;
  }
  if ( v33 > 4 )
  {
    v35 = (char *)this + 2508;
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
    {
      TlgCreateWsz(&pDesc, L"v1.2");
      v37 = (const WCHAR *)*((_QWORD *)this + 311);
      v78 = *((_DWORD *)this + 628);
      v110 = (float *)&v78;
      v88 = *((_DWORD *)this + 629);
      v112 = (float *)&v88;
      v59 = *((_BYTE *)this + 2520);
      v114 = &v59;
      v108 = (char *)this + 2508;
      v109 = 4LL;
      v111 = 4LL;
      v113 = 4LL;
      v115 = 1LL;
      TlgCreateWsz(&v116, v37);
      TlgCreateWsz(&v117, *((LPCWSTR *)this + 312));
      v38 = (unsigned __int8)*v1;
      v39 = *((_BYTE *)this + 2504);
      v118 = &v60;
      v61 = *((_BYTE *)this + 2528);
      v120 = &v61;
      v62 = *((_BYTE *)this + 2532);
      v122 = &v62;
      v63 = *((_BYTE *)this + 2524);
      v124 = &v63;
      v64 = *((_BYTE *)this + 2536);
      v126 = &v64;
      v130 = &v76;
      v132 = (char *)this + 2564;
      v135 = &v77;
      v137 = (char *)this + 2584;
      v60 = v39;
      v140 = &v66;
      v142 = (char *)this + 2604;
      v119 = 1LL;
      v121 = 1LL;
      v123 = 1LL;
      v125 = 1LL;
      v127 = 1LL;
      v128 = v1;
      v129 = 1LL;
      v76 = v38;
      v131 = 2LL;
      v133 = 4 * v38;
      v134 = 0;
      v77 = v38;
      v136 = 2LL;
      v138 = 4 * v38;
      v139 = 0;
      v66 = v38;
      v141 = 2LL;
      v143 = v38;
      v144 = 0;
      v145 = &v67;
      v147 = (char *)this + 2610;
      v67 = v38;
      v148 = 2 * v38;
      v150 = &v68;
      v152 = (char *)this + 2620;
      v146 = 2LL;
      v153 = 2 * v38;
      v155 = &v69;
      v157 = v238;
      v158 = 4 * v38;
      v160 = &v89;
      v40 = *((unsigned __int8 *)this + 2865);
      v149 = 0;
      v68 = v38;
      v151 = 2LL;
      v154 = 0;
      v162 = &v80;
      v164 = &v70;
      v166 = (float *)((char *)this + 2866);
      v81 = v102[0];
      v168 = (float *)&v81;
      v82 = *((_DWORD *)this + 668);
      v170 = &v82;
      v172 = (unsigned int *)&v71;
      v41 = (float)v40;
      v174 = v240;
      v175 = (unsigned int)(4 * v38);
      v42 = *((unsigned __int8 *)this + 2840);
      v69 = v38;
      v156 = 2LL;
      v159 = 0;
      v161 = 4LL;
      v163 = 4LL;
      v70 = v38;
      v165 = 2LL;
      v167 = (unsigned int)v38;
      v169 = 4LL;
      v171 = 4LL;
      v71 = v38;
      v173 = 2LL;
      v177 = 4LL;
      v65 = v38;
      v80 = v41 / (float)v38;
      v176 = (unsigned int *)&v83;
      v83 = (float)v42 / (float)v38;
      v178 = (unsigned int *)&v65;
      v180 = (unsigned int *)((char *)this + 2841);
      v43 = *((unsigned __int8 *)this + 2846);
      v181 = (unsigned int)v38;
      v187 = (unsigned int)v38;
      v44 = _mm_cvtsi32_si128(v43);
      v182 = &v84;
      v184 = (unsigned int *)&v72;
      v186 = (float *)((char *)this + 2847);
      v85 = v98;
      v188 = (unsigned int *)&v85;
      v79 = *((_DWORD *)this + 718);
      v190 = (__int16 *)&v79;
      v192 = (unsigned int *)&v73;
      v194 = v243;
      v45 = *((_DWORD *)this + 761);
      v179 = 2LL;
      v183 = 4LL;
      v72 = v38;
      v185 = 2LL;
      v189 = 4LL;
      v191 = 4LL;
      v73 = v38;
      v193 = 2LL;
      v195 = v175;
      v197 = 4LL;
      v199 = 2LL;
      v74 = v38;
      v201 = 2LL;
      v205 = 4LL;
      v207 = 2LL;
      v75 = v38;
      v209 = 2LL;
      v84 = _mm_cvtepi32_ps(v44).m128_f32[0] / (float)v38;
      *(float *)v44.m128i_i32 = (float)v45;
      v196 = &v86;
      v198 = (char *)this + 3040;
      v200 = (float *)&v74;
      v202 = (char *)this + 3048;
      v203 = (unsigned int)(2 * v38);
      v46 = *((_DWORD *)this + 765);
      v86 = *(float *)v44.m128i_i32 / (float)v38;
      v204 = &v87;
      v206 = (char *)this + 3058;
      v208 = (unsigned int *)&v75;
      v210 = (char *)this + 3064;
      v87 = (float)v46 / (float)v38;
      v211 = v203;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A6114, &pActivityId, 0LL, 0x35u, &v106);
      v33 = hProvider;
      v36 = 0x400000000002LL;
    }
    if ( v33 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v36) )
      {
        TlgCreateWsz(&pDesc, L"v1.2");
        v48 = (const WCHAR *)*((_QWORD *)this + 311);
        v87 = *((float *)this + 628);
        v110 = &v87;
        v86 = *((float *)this + 629);
        v112 = &v86;
        v64 = *((_BYTE *)this + 2520);
        v114 = &v64;
        v108 = (char *)this + 2508;
        v109 = 4LL;
        v111 = 4LL;
        v113 = 4LL;
        v115 = 1LL;
        TlgCreateWsz(&v116, v48);
        TlgCreateWsz(&v117, *((LPCWSTR *)this + 312));
        v49 = (unsigned __int8)*v1;
        v50 = *((_BYTE *)this + 2504);
        v118 = &v63;
        v62 = *((_BYTE *)this + 2528);
        v120 = &v62;
        v61 = *((_BYTE *)this + 2532);
        v122 = &v61;
        v60 = *((_BYTE *)this + 2524);
        v124 = &v60;
        v59 = *((_BYTE *)this + 2536);
        v126 = &v59;
        v130 = &v75;
        v132 = (char *)this + 2564;
        v135 = &v74;
        v137 = (char *)this + 2584;
        v63 = v50;
        v140 = &v73;
        v142 = (char *)this + 2604;
        v119 = 1LL;
        v121 = 1LL;
        v123 = 1LL;
        v125 = 1LL;
        v127 = 1LL;
        v128 = v1;
        v129 = 1LL;
        v75 = v49;
        v131 = 2LL;
        v133 = 4 * v49;
        v134 = 0;
        v74 = v49;
        v136 = 2LL;
        v138 = 4 * v49;
        v139 = 0;
        v73 = v49;
        v141 = 2LL;
        v143 = v49;
        v144 = 0;
        v72 = v49;
        v145 = &v72;
        v147 = (char *)this + 2610;
        v146 = 2LL;
        v148 = 2 * v49;
        v150 = &v65;
        v152 = (char *)this + 2620;
        v149 = 0;
        v153 = 2 * v49;
        v155 = &v71;
        v157 = v238;
        v158 = 4 * v49;
        v160 = &v89;
        v79 = v102[1];
        v162 = (float *)&v79;
        v85 = v102[2];
        v164 = (__int16 *)&v85;
        v84 = *((float *)this + 669);
        v166 = &v84;
        v83 = *((float *)this + 670);
        v168 = &v83;
        v170 = (unsigned int *)&v70;
        v172 = v264;
        v173 = (unsigned int)(4 * v49);
        v174 = (unsigned int *)&v69;
        v176 = v246;
        v177 = v173;
        v178 = &v82;
        v81 = v99;
        v180 = (unsigned int *)&v81;
        v65 = v49;
        v151 = 2LL;
        v154 = 0;
        v71 = v49;
        v156 = 2LL;
        v159 = 0;
        v161 = 4LL;
        v163 = 4LL;
        v165 = 4LL;
        v167 = 4LL;
        v169 = 4LL;
        v70 = v49;
        v171 = 2LL;
        v69 = v49;
        v175 = 2LL;
        v82 = v10;
        v179 = 4LL;
        v80 = *((float *)this + 719);
        v182 = &v80;
        v78 = *((_DWORD *)this + 720);
        v184 = (unsigned int *)&v78;
        v186 = (float *)&v68;
        v188 = v249;
        v189 = v173;
        v190 = &v67;
        v192 = v252;
        v193 = v173;
        v194 = (unsigned int *)((char *)this + 3108);
        v196 = (float *)&v66;
        v198 = (char *)this + 3116;
        v200 = &v90;
        v181 = 4LL;
        v183 = 4LL;
        v185 = 4LL;
        v68 = v49;
        v187 = 2LL;
        v67 = v49;
        v191 = 2LL;
        v195 = 4LL;
        v66 = v49;
        v197 = 2LL;
        v199 = v173;
        v201 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A5E0B, &pActivityId, 0LL, 0x30u, &v106);
        v33 = hProvider;
        v47 = 0x400000000002LL;
      }
      else
      {
        v35 = (char *)this + 2508;
      }
      if ( v33 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v47) )
      {
        TlgCreateWsz(&pDesc, L"v1.2");
        v51 = (const WCHAR *)*((_QWORD *)this + 311);
        v87 = *((float *)this + 628);
        v110 = &v87;
        v86 = *((float *)this + 629);
        v112 = &v86;
        v64 = *((_BYTE *)this + 2520);
        v114 = &v64;
        v108 = v35;
        v109 = 4LL;
        v111 = 4LL;
        v113 = 4LL;
        v115 = 1LL;
        TlgCreateWsz(&v116, v51);
        TlgCreateWsz(&v117, *((LPCWSTR *)this + 312));
        v52 = (unsigned __int8)*v1;
        v53 = *((_BYTE *)this + 2504);
        v118 = &v63;
        v62 = *((_BYTE *)this + 2528);
        v120 = &v62;
        v61 = *((_BYTE *)this + 2532);
        v122 = &v61;
        v60 = *((_BYTE *)this + 2524);
        v124 = &v60;
        v59 = *((_BYTE *)this + 2536);
        v126 = &v59;
        v130 = &v75;
        v132 = (char *)this + 2564;
        v135 = &v74;
        v137 = (char *)this + 2584;
        v63 = v53;
        v140 = &v73;
        v142 = (char *)this + 2604;
        v119 = 1LL;
        v121 = 1LL;
        v123 = 1LL;
        v125 = 1LL;
        v127 = 1LL;
        v128 = v1;
        v129 = 1LL;
        v75 = v52;
        v131 = 2LL;
        v133 = 4 * v52;
        v134 = 0;
        v74 = v52;
        v136 = 2LL;
        v138 = 4 * v52;
        v139 = 0;
        v73 = v52;
        v141 = 2LL;
        v143 = v52;
        v144 = 0;
        v72 = v52;
        v146 = 2LL;
        v145 = &v72;
        v147 = (char *)this + 2610;
        v149 = 0;
        v148 = 2 * v52;
        v150 = &v65;
        v152 = (char *)this + 2620;
        v65 = v52;
        v153 = 2 * v52;
        v155 = &v71;
        v157 = v238;
        v158 = 4 * v52;
        v160 = &v89;
        v79 = v102[3];
        v162 = (float *)&v79;
        v85 = v102[4];
        v164 = (__int16 *)&v85;
        v84 = *(float *)&v102[5];
        v166 = &v84;
        v83 = *((float *)this + 671);
        v168 = &v83;
        v82 = *((_DWORD *)this + 672);
        v170 = &v82;
        v81 = *((_DWORD *)this + 673);
        v172 = (unsigned int *)&v81;
        v174 = (unsigned int *)&v70;
        v176 = v255;
        v177 = (unsigned int)(4 * v52);
        v178 = (unsigned int *)&v69;
        v180 = v258;
        v181 = v177;
        v151 = 2LL;
        v154 = 0;
        v71 = v52;
        v156 = 2LL;
        v159 = 0;
        v161 = 4LL;
        v163 = 4LL;
        v165 = 4LL;
        v167 = 4LL;
        v169 = 4LL;
        v171 = 4LL;
        v173 = 4LL;
        v70 = v52;
        v175 = 2LL;
        v69 = v52;
        v179 = 2LL;
        v182 = (float *)&v68;
        v184 = v261;
        v185 = v177;
        v54 = *((_DWORD *)this + 714);
        v68 = v52;
        v183 = 2LL;
        v187 = 4LL;
        v189 = 1LL;
        v186 = &v80;
        v188 = (unsigned int *)((char *)this + 2852);
        v190 = &v67;
        v192 = (unsigned int *)((char *)this + 2860);
        v91 = HIDWORD(v99);
        v194 = (unsigned int *)&v91;
        v92 = v100;
        v196 = (float *)&v92;
        v198 = (char *)&v92 + 4;
        v93 = *((_DWORD *)this + 721);
        v200 = (float *)&v93;
        v94 = *((_DWORD *)this + 722);
        v202 = (char *)&v94;
        v95 = *((_DWORD *)this + 723);
        v204 = (float *)&v95;
        v206 = (char *)&v66;
        v208 = v273;
        v209 = v177;
        v210 = (char *)&v77;
        v212 = v267;
        v213 = 4 * v52;
        v67 = v52;
        v191 = 2LL;
        v193 = (unsigned int)v52;
        v195 = 4LL;
        v197 = 4LL;
        v199 = 4LL;
        v201 = 4LL;
        v203 = 4LL;
        v205 = 4LL;
        v66 = v52;
        v207 = 2LL;
        v77 = v52;
        v211 = 2LL;
        v80 = (float)v54 / (float)v52;
        v214 = 0;
        v76 = v52;
        v215 = &v76;
        v217 = v270;
        v218 = 4 * v52;
        v55 = *((_DWORD *)this + 769);
        v216 = 2LL;
        v219 = 0;
        v221 = 4LL;
        v56 = (float)v55;
        v223 = 4LL;
        v220 = &v96;
        v57 = *((_DWORD *)this + 773);
        v225 = 2LL;
        v227 = 2LL;
        LOWORD(v88) = v52;
        v229 = 2LL;
        v232 = 0;
        LOWORD(v78) = v52;
        v234 = 2LL;
        v237 = 0;
        v96 = v56 / (float)v52;
        v222 = &v97;
        v224 = (char *)this + 3074;
        v226 = (char *)this + 3090;
        v228 = &v88;
        v230 = (char *)this + 3080;
        v231 = 2 * v52;
        v233 = &v78;
        v235 = (char *)this + 3096;
        v236 = 2 * v52;
        v97 = (float)v57 / (float)v52;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A59C9, &pActivityId, 0LL, 0x40u, &v106);
        v33 = hProvider;
      }
    }
  }
  v103 = 2;
  if ( v33 > 5 )
  {
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A59A3, &pActivityId, 0LL, 2u, &pData);
    goto LABEL_49;
  }
  return v3;
}
