/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x18000BDB4 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     AudioServerGetMixFormat @ 0x180012990 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026F70 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008E370 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x18008EC00 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008F370 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800200A0 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180020164 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180020188 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180020C30 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180020D74 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180022664 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800233B0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18005A44C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005AB14 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x18005AEB0 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x18005AF6C (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180064830 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B2108 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x1800BD508 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        int a3,
        CEndpointCharacteristics *a4,
        unsigned int a5,
        int a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        int a8,
        unsigned int a9,
        GUID *a10,
        GUID *a11,
        GUID *a12,
        GUID *a13)
{
  CEndpointCharacteristics *v13; // r13
  int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  GUID *v17; // rdi
  GUID *v18; // rbx
  GUID v19; // xmm6
  GUID v20; // xmm8
  GUID v21; // xmm7
  __int64 v22; // r12
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // ebx
  BOOL v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r9
  char *v27; // r8
  __int64 v28; // r13
  char *v29; // rbx
  char *v30; // r14
  unsigned int v31; // edx
  char *v32; // r15
  __int64 v33; // rdi
  int v34; // ebx
  __int64 *v35; // rax
  int v36; // ebx
  char *v37; // rsi
  SystemEffectChainDescriptor **v38; // rax
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // r8
  int v42; // edx
  int v43; // ecx
  __int64 v44; // r10
  int v45; // ecx
  __int64 v46; // r10
  BOOL v47; // ebx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rax
  struct SystemEffectDescriptor *v51; // r13
  bool v52; // zf
  int v53; // ebx
  __int64 **v54; // rax
  __int64 v55; // rax
  int v56; // ebx
  __int64 **v57; // rax
  __int64 v58; // rdx
  int v59; // ecx
  int v60; // r8d
  GUID *v61; // rax
  volatile signed __int32 **v62; // rdi
  char *v63; // r14
  BOOL v64; // ebx
  CEndpointCharacteristics *v65; // rsi
  __int64 v66; // rcx
  char *v67; // rax
  char *v68; // r15
  char *v69; // r14
  struct _RTL_CRITICAL_SECTION *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // r8
  volatile signed __int32 **v73; // r9
  __int64 v74; // rsi
  int v75; // edi
  int v76; // r13d
  __int64 v77; // r15
  volatile signed __int32 **v78; // rax
  volatile signed __int32 **v79; // rbx
  volatile signed __int32 *v80; // r14
  volatile signed __int32 *v81; // r15
  std::_Ref_count_base *v82; // rcx
  int v83; // ebx
  volatile signed __int32 **v84; // rdi
  SystemEffectChainDescriptor **v85; // rax
  int v86; // eax
  void *v87; // rcx
  volatile signed __int32 **v88; // rdi
  volatile signed __int32 *v89; // rbx
  void *v90; // rsi
  __int64 v91; // rdi
  int v92; // ebx
  __int64 *v93; // rax
  int v94; // ebx
  SystemEffectChainDescriptor **v95; // rax
  int v96; // eax
  __int64 v97; // rbx
  struct _RTL_CRITICAL_SECTION *v98; // r15
  __int64 v99; // rdx
  __int64 v100; // r8
  volatile signed __int32 **v101; // r9
  int v102; // edi
  int v103; // r13d
  __int64 v104; // r15
  volatile signed __int32 **v105; // rax
  volatile signed __int32 **v106; // rbx
  volatile signed __int32 *v107; // r14
  volatile signed __int32 *v108; // r15
  std::_Ref_count_base *v109; // rcx
  int v110; // ebx
  SystemEffectChainDescriptor **v111; // rax
  int v112; // eax
  void *v113; // rcx
  volatile signed __int32 **v114; // rdi
  volatile signed __int32 *v115; // rbx
  int v116; // ecx
  int v117; // edx
  BOOL v118; // ebx
  __int64 v119; // rcx
  char *v120; // rax
  char *v121; // r13
  char *v122; // r14
  struct _RTL_CRITICAL_SECTION *v123; // r15
  __int64 v124; // rdx
  __int64 v125; // r8
  volatile signed __int32 **v126; // r9
  __int64 v127; // rsi
  int v128; // edi
  int v129; // r13d
  __int64 v130; // r15
  volatile signed __int32 **v131; // rax
  volatile signed __int32 **v132; // rbx
  volatile signed __int32 *v133; // r14
  volatile signed __int32 *v134; // r15
  std::_Ref_count_base *v135; // rcx
  int v136; // ebx
  volatile signed __int32 **v137; // rdi
  SystemEffectChainDescriptor **v138; // rax
  int v139; // eax
  void *v140; // rcx
  volatile signed __int32 **v141; // rdi
  volatile signed __int32 *v142; // rbx
  void *v143; // rsi
  __int64 v144; // rdi
  int v145; // ebx
  __int64 *v146; // rax
  int v147; // ebx
  SystemEffectChainDescriptor **v148; // rax
  int v149; // eax
  __int64 v150; // rbx
  char *v151; // r14
  struct _RTL_CRITICAL_SECTION *v152; // r15
  __int64 v153; // rdx
  __int64 v154; // r8
  volatile signed __int32 **v155; // r9
  __int64 v156; // rsi
  int v157; // edi
  int v158; // r13d
  __int64 v159; // r15
  volatile signed __int32 **v160; // rax
  volatile signed __int32 **v161; // rbx
  volatile signed __int32 *v162; // r14
  volatile signed __int32 *v163; // r15
  std::_Ref_count_base *v164; // rcx
  int v165; // ebx
  volatile signed __int32 **v166; // rdi
  SystemEffectChainDescriptor **v167; // rax
  int v168; // eax
  void *v169; // rcx
  volatile signed __int32 **v170; // rdi
  volatile signed __int32 *v171; // rbx
  int v172; // ecx
  int v173; // edx
  __int128 v174; // xmm6
  BOOL v175; // ebx
  __int64 v176; // rcx
  int v177; // ebx
  __int64 **v178; // rax
  __int64 v179; // rax
  int v180; // ebx
  __int64 **v181; // rax
  __int64 v182; // rdx
  int v183; // ecx
  int v184; // r8d
  struct _GUID *v185; // rax
  struct _GUID *v187; // [rsp+28h] [rbp-E0h]
  unsigned int v189; // [rsp+38h] [rbp-D0h]
  volatile signed __int32 **v190; // [rsp+40h] [rbp-C8h]
  volatile signed __int32 **v191; // [rsp+40h] [rbp-C8h]
  volatile signed __int32 **v192; // [rsp+40h] [rbp-C8h]
  volatile signed __int32 **v193; // [rsp+40h] [rbp-C8h]
  struct SystemEffectDescriptor *v195; // [rsp+48h] [rbp-C0h]
  char *v196; // [rsp+50h] [rbp-B8h]
  int v197[2]; // [rsp+58h] [rbp-B0h] BYREF
  char *v198; // [rsp+60h] [rbp-A8h]
  void *Block; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v200; // [rsp+70h] [rbp-98h]
  void *v201; // [rsp+78h] [rbp-90h] BYREF
  __int64 v202; // [rsp+80h] [rbp-88h]
  void *v203; // [rsp+88h] [rbp-80h] BYREF
  __int64 v204; // [rsp+90h] [rbp-78h]
  void *v205; // [rsp+98h] [rbp-70h] BYREF
  __int64 v206; // [rsp+A0h] [rbp-68h]
  CEndpointCharacteristics *v207; // [rsp+A8h] [rbp-60h]
  void *v208; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v209; // [rsp+B8h] [rbp-50h]
  void *v210; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v211; // [rsp+C8h] [rbp-40h]
  GUID *v212; // [rsp+D0h] [rbp-38h]
  GUID *v213; // [rsp+D8h] [rbp-30h]
  struct _GUID v214; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v215; // [rsp+F8h] [rbp-10h] BYREF
  char *v216; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v217; // [rsp+110h] [rbp+8h]
  int v218; // [rsp+114h] [rbp+Ch]
  char *v219; // [rsp+118h] [rbp+10h] BYREF
  char *v220; // [rsp+120h] [rbp+18h] BYREF
  char *v221; // [rsp+128h] [rbp+20h] BYREF
  char *v222; // [rsp+130h] [rbp+28h] BYREF
  char *v223; // [rsp+138h] [rbp+30h] BYREF
  char *v224; // [rsp+140h] [rbp+38h] BYREF
  char *v225; // [rsp+148h] [rbp+40h] BYREF
  PROPVARIANT v226; // [rsp+150h] [rbp+48h] BYREF
  __int64 v227; // [rsp+158h] [rbp+50h]
  __int64 v228; // [rsp+160h] [rbp+58h]
  PROPVARIANT pvar; // [rsp+168h] [rbp+60h] BYREF
  __int64 v230; // [rsp+170h] [rbp+68h]
  __int64 v231; // [rsp+178h] [rbp+70h]
  PROPVARIANT v232; // [rsp+180h] [rbp+78h] BYREF
  __int64 v233; // [rsp+188h] [rbp+80h]
  __int64 v234; // [rsp+190h] [rbp+88h]
  PROPVARIANT v235; // [rsp+198h] [rbp+90h] BYREF
  __int64 v236; // [rsp+1A0h] [rbp+98h]
  __int64 v237; // [rsp+1A8h] [rbp+A0h]
  PROPVARIANT v238; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v239; // [rsp+1B8h] [rbp+B0h]
  __int64 v240; // [rsp+1C0h] [rbp+B8h]
  __int64 v241; // [rsp+1C8h] [rbp+C0h]
  GUID *v242; // [rsp+1D0h] [rbp+C8h]
  GUID *v243; // [rsp+1D8h] [rbp+D0h]
  GUID v244; // [rsp+1E8h] [rbp+E0h]
  SystemEffectChainDescriptor *v245; // [rsp+1F8h] [rbp+F0h] BYREF
  std::_Ref_count_base *v246; // [rsp+200h] [rbp+F8h]
  SystemEffectChainDescriptor *v247; // [rsp+208h] [rbp+100h] BYREF
  std::_Ref_count_base *v248; // [rsp+210h] [rbp+108h]
  GUID v249; // [rsp+218h] [rbp+110h] BYREF
  GUID v250; // [rsp+228h] [rbp+120h]
  GUID v251; // [rsp+238h] [rbp+130h]
  __int128 v252; // [rsp+248h] [rbp+140h] BYREF
  __int128 v253; // [rsp+258h] [rbp+150h]
  __int128 v254; // [rsp+268h] [rbp+160h]
  char *v255; // [rsp+278h] [rbp+170h]
  char *v256; // [rsp+280h] [rbp+178h]
  __int64 v257; // [rsp+288h] [rbp+180h]
  GUID v258; // [rsp+298h] [rbp+190h] BYREF
  struct _GUID v259; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int128 v260; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _GUID v261; // [rsp+2C8h] [rbp+1C0h] BYREF
  GUID v262; // [rsp+2D8h] [rbp+1D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v257 = -2LL;
  v13 = a4;
  v207 = a4;
  v14 = a3;
  v15 = a1;
  v16 = a5;
  v242 = a10;
  v243 = a11;
  v17 = a12;
  v213 = a12;
  v18 = a13;
  v212 = a13;
  *(_QWORD *)v197 = 0LL;
  v19 = GUID_00000000_0000_0000_0000_000000000000;
  v261 = GUID_00000000_0000_0000_0000_000000000000;
  v20 = GUID_00000000_0000_0000_0000_000000000000;
  v214 = GUID_00000000_0000_0000_0000_000000000000;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  v215 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a4, a7, &v261, &v214, &v215);
LABEL_3:
    v19 = v261;
    v20 = v214;
    v21 = v215;
    LODWORD(v22) = 0;
    goto LABEL_412;
  }
  if ( a5 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a4,
      eHostProcessConnector,
      &v261,
      &v214,
      &v215);
    goto LABEL_3;
  }
  if ( a2 )
  {
    if ( CEndpointCharacteristics::AllowRawStreamCreation(a4, a7) )
    {
      v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v21 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      LODWORD(v22) = 0;
    }
    else
    {
      LODWORD(v22) = -2004287449;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
          2290679847LL);
      }
    }
    goto LABEL_412;
  }
  v23 = eHostProcessConnector;
  if ( a7 != eLoopbackConnector )
    v23 = a7;
  if ( v23 )
    goto LABEL_22;
  v24 = 1;
  v25 = *((_QWORD *)a4 + 7);
  if ( !v25 )
    goto LABEL_22;
  pvar = 0LL;
  v230 = 0LL;
  v231 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v25 + 40LL))(
         v25,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v24 = v230 == 0;
  }
  PropVariantClear(&pvar);
  if ( v24 )
  {
LABEL_22:
    v28 = v23;
    v29 = (char *)v207 + 96 * v23;
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v29 + 232));
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v29 + 616));
    v30 = v29 + 1000;
    if ( v29[1052] )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v29 + 1056));
      v219 = v29 + 1056;
      v32 = 0LL;
      v216 = 0LL;
      v33 = 0LL;
      v217 = 0;
      v218 = 0;
      v34 = 0;
      if ( *((int *)v30 + 10) <= 0 )
      {
LABEL_29:
        v36 = 0;
        if ( (int)v33 > 0 )
        {
          v37 = v32;
          while ( v36 >= 0 && v36 < (int)v33 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v37 + 20LL) )
            {
              v38 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                      (__int64)&v216,
                                                      v36);
              v39 = SystemEffectChainDescriptor::Resolve(*v38, (struct SystemEffectDescriptor *)v30);
              if ( v39 < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x1FC,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)(unsigned int)v39,
                  (int)v187);
                goto LABEL_28;
              }
            }
            ++v36;
            v37 += 16;
            if ( v36 >= (int)v33 )
              goto LABEL_39;
          }
          ATL::_AtlRaiseException(0xC000008C, v31);
        }
LABEL_39:
        if ( v32 )
        {
          if ( (int)v33 > 0 )
          {
            v40 = (__int64)v32;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v40);
              v40 += 16LL;
              --v33;
            }
            while ( v33 );
          }
          free(v32);
        }
        if ( v30 != (char *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
      }
      else
      {
        while ( 1 )
        {
          v35 = (__int64 *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                             (__int64)(v30 + 32),
                             v34);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                (__int64)&v216,
                                v35) )
            break;
          if ( ++v34 >= *((_DWORD *)v30 + 10) )
          {
            v33 = v217;
            v32 = v216;
            goto LABEL_29;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F6,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          (int)v187);
LABEL_28:
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v216);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v219);
      }
      v14 = a3;
      v15 = a1;
    }
    v41 = 16 * (v28 + 4);
    v13 = v207;
    v27 = (char *)v207 + v41;
    v16 = a5;
  }
  else
  {
    v27 = (char *)v13 + 128;
  }
  v42 = *((_DWORD *)v27 + 2);
  if ( v42 )
  {
    v43 = 0;
    if ( v42 <= 0 )
      goto LABEL_57;
    v44 = *(_QWORD *)v27;
    v26 = *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
    while ( *(_QWORD *)(v44 + 16LL * v43) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
         || *(_QWORD *)(v44 + 16LL * v43 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
    {
      if ( ++v43 >= v42 )
        goto LABEL_57;
    }
    if ( v43 == -1 )
    {
LABEL_57:
      v45 = 0;
      if ( v42 <= 0 )
        goto LABEL_65;
      v46 = *(_QWORD *)v27;
      v26 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      while ( *(_QWORD *)(v46 + 16LL * v45) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
           || *(_QWORD *)(v46 + 16LL * v45 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
      {
        if ( ++v45 >= v42 )
          goto LABEL_65;
      }
      if ( v45 == -1 )
LABEL_65:
        v19 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v27, 0LL);
      else
        v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v19 = GUID_00000000_0000_0000_0000_000000000000;
  }
  v244 = v19;
  v262 = v19;
  v47 = 1;
  v48 = *((_QWORD *)v13 + 7);
  if ( !v48 )
    goto LABEL_73;
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *, __int64))(*(_QWORD *)v48 + 40LL))(
         v48,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v232,
         v26) >= 0
    && (_WORD)v232 == 19 )
  {
    v47 = v233 == 0;
  }
  PropVariantClear(&v232);
  if ( v47 || (v49 = 0, a7 == eKeywordDetectorConnector) )
LABEL_73:
    v49 = 1;
  v258 = v19;
  v50 = 96LL * (int)a7;
  v196 = (char *)v13 + v50;
  v51 = (CEndpointCharacteristics *)((char *)v13 + v50 + 616);
  v195 = v51;
  if ( !v49 )
  {
    v52 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v51, &v258) == -1;
    goto LABEL_105;
  }
  v250 = v19;
  v249 = v19;
  if ( *((_BYTE *)v51 + 52) )
  {
    v53 = 0;
    if ( *((int *)v51 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                     (__int64)v51 + 32,
                                     v53)
                      + 20LL) )
        {
          v54 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                              (__int64)v51 + 32,
                              v53);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v54, &v249) != -1 )
            break;
        }
        if ( ++v53 >= *((_DWORD *)v51 + 10) )
          goto LABEL_91;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v51 + 56));
      v256 = (char *)v51 + 56;
      v55 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
              (__int64)v51 + 32,
              v53);
      std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v245, v55);
      if ( (int)SystemEffectChainDescriptor::Resolve(v245, v51) < 0 )
      {
        if ( v246 )
          std::_Ref_count_base::_Decref(v246);
        if ( v51 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v51 + 56));
LABEL_97:
        v58 = *((_QWORD *)v51 + 2);
        if ( !v58 )
          goto LABEL_103;
        v59 = 0;
        v60 = *(_DWORD *)(v58 + 8);
        if ( v60 <= 0 )
          goto LABEL_103;
        while ( *(_OWORD *)(*(_QWORD *)v58 + 16LL * v59) != *(_OWORD *)&v250 )
        {
          if ( ++v59 >= v60 )
            goto LABEL_103;
        }
        if ( v59 == -1 )
LABEL_103:
          v58 = 0LL;
        goto LABEL_104;
      }
      if ( v246 )
        std::_Ref_count_base::_Decref(v246);
      if ( v51 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v51 + 56));
    }
  }
LABEL_91:
  v56 = 0;
  if ( *((int *)v51 + 10) <= 0 )
    goto LABEL_97;
  while ( 1 )
  {
    v57 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        (__int64)v51 + 32,
                        v56);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v57, &v249) != -1 )
      break;
    if ( ++v56 >= *((_DWORD *)v51 + 10) )
      goto LABEL_97;
  }
  if ( v56 == -1 )
    goto LABEL_97;
  v58 = *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                     (__int64)v51 + 32,
                     v56);
LABEL_104:
  v52 = v58 == 0;
LABEL_105:
  v261 = v19;
  v61 = &v262;
  if ( v52 )
    v61 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v20 = *v61;
  v214 = *v61;
  v21 = v19;
  v215 = v19;
  if ( v16 )
  {
    if ( v16 == 1 && v15 == 18 && v14 )
    {
      *(_QWORD *)v197 = &unk_1800F4A10;
      v22 = 0LL;
      goto LABEL_116;
    }
LABEL_115:
    v22 = 0LL;
    *(_QWORD *)v197 = 0LL;
    v187 = (struct _GUID *)v197;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 80LL))(
           g_PolicyManager,
           v16,
           v15,
           a9) < 0 )
      goto LABEL_411;
    goto LABEL_116;
  }
  if ( !dword_180116C60[v15] || !(unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode(v207) )
    goto LABEL_115;
  *(_QWORD *)v197 = &unk_1800F4A20;
  v22 = 0LL;
LABEL_116:
  LODWORD(v62) = 0;
  v189 = 0;
  if ( !**(_DWORD **)v197 )
    goto LABEL_411;
  LODWORD(v63) = a7;
  while ( 1 )
  {
    v241 = 16LL * (unsigned int)v62;
    v254 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)v197 + 8LL) + v241);
    if ( !(_DWORD)v63 )
    {
      v64 = 1;
      v65 = v207;
      v66 = *((_QWORD *)v207 + 7);
      if ( v66 )
      {
        v235 = 0LL;
        v236 = 0LL;
        v237 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v66 + 40LL))(
               v66,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v235) >= 0
          && (_WORD)v235 == 19 )
        {
          v64 = v236 == 0;
        }
        PropVariantClear(&v235);
        if ( !v64 )
        {
          v67 = (char *)v65 + 128;
          goto LABEL_232;
        }
      }
    }
    v68 = v196;
    v69 = v196 + 232;
    v198 = v196 + 232;
    if ( v196[284] )
    {
      v70 = (struct _RTL_CRITICAL_SECTION *)(v196 + 288);
      EnterCriticalSection((LPCRITICAL_SECTION)(v196 + 288));
      v220 = v196 + 288;
      v73 = 0LL;
      v190 = 0LL;
      Block = 0LL;
      v74 = 0LL;
      v200 = 0LL;
      v75 = 0;
      v76 = 0;
      if ( *((int *)v196 + 68) > 0 )
      {
        do
        {
          if ( v22 < 0 || v76 >= *((_DWORD *)v69 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v71);
            __debugbreak();
          }
          v77 = *((_QWORD *)v69 + 4);
          if ( (_DWORD)v74 == v75 )
          {
            if ( v75 )
            {
              v75 = 2 * v74;
              if ( (v74 & 0x40000000) != 0 )
                goto LABEL_144;
            }
            else
            {
              v75 = 1;
            }
            if ( (unsigned __int64)v75 > 0x7FFFFFF
              || (v78 = (volatile signed __int32 **)_o__recalloc(v73, v75, 16LL), v73 = v78, (v190 = v78) == 0LL) )
            {
LABEL_144:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1F6,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                (int)v187);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&Block);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v220);
              v22 = 0LL;
              goto LABEL_167;
            }
            HIDWORD(v200) = v75;
            Block = v78;
          }
          v79 = &v73[2 * (int)v74];
          if ( v79 )
          {
            *v79 = 0LL;
            v79[1] = 0LL;
            v80 = *(volatile signed __int32 **)(v77 + v22 + 8);
            v81 = *(volatile signed __int32 **)(v77 + v22);
            if ( v80 )
            {
              _InterlockedIncrement(v80 + 2);
              v75 = HIDWORD(v200);
              LODWORD(v74) = v200;
              v190 = (volatile signed __int32 **)Block;
            }
            v82 = (std::_Ref_count_base *)v79[1];
            if ( v82 )
              std::_Ref_count_base::_Decref(v82);
            v79[1] = v80;
            *v79 = v81;
            v73 = v190;
            v69 = v198;
          }
          v74 = (unsigned int)(v74 + 1);
          LODWORD(v200) = v74;
          ++v76;
          v22 += 16LL;
        }
        while ( v76 < *((_DWORD *)v69 + 10) );
        v70 = (struct _RTL_CRITICAL_SECTION *)(v69 + 56);
        v22 = 0LL;
      }
      v83 = 0;
      if ( (int)v74 <= 0 )
      {
LABEL_155:
        v87 = v190;
        if ( v190 )
        {
          if ( (int)v74 > 0 )
          {
            v88 = v190 + 1;
            do
            {
              v89 = *v88;
              if ( *v88 )
              {
                if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64, volatile signed __int32 **))v89)(
                    v89,
                    v71,
                    v72,
                    v73);
                  if ( _InterlockedExchangeAdd(v89 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
                }
              }
              v88 += 2;
              --v74;
            }
            while ( v74 );
            v87 = Block;
          }
          free(v87);
          Block = 0LL;
        }
        v200 = 0LL;
        if ( v70 )
          LeaveCriticalSection(v70);
      }
      else
      {
        v84 = v73;
        while ( 1 )
        {
          if ( v83 < 0 || v83 >= (int)v74 )
          {
            ATL::_AtlRaiseException(0xC000008C, v71);
LABEL_399:
            ATL::_AtlRaiseException(0xC000008C, v99);
            __debugbreak();
          }
          if ( *((_BYTE *)*v84 + 20) )
          {
            v85 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                    (__int64)&Block,
                                                    v83);
            v86 = SystemEffectChainDescriptor::Resolve(*v85, (struct SystemEffectDescriptor *)v69);
            if ( v86 < 0 )
              break;
          }
          ++v83;
          v84 += 2;
          if ( v83 >= (int)v74 )
            goto LABEL_155;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1FC,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v86,
          (int)v187);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&Block);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v220);
      }
LABEL_167:
      v68 = v196;
      v51 = v195;
    }
    if ( !*((_BYTE *)v51 + 52) )
      goto LABEL_188;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v51 + 56));
    v221 = (char *)v51 + 56;
    v90 = 0LL;
    v210 = 0LL;
    v91 = 0LL;
    v211 = 0LL;
    v92 = 0;
    if ( *((int *)v51 + 10) <= 0 )
    {
LABEL_175:
      v94 = 0;
      if ( (int)v91 <= 0 )
      {
LABEL_181:
        if ( v90 )
        {
          if ( (int)v91 > 0 )
          {
            v97 = (__int64)v90;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v97);
              v97 += 16LL;
              --v91;
            }
            while ( v91 );
          }
          free(v90);
          v210 = 0LL;
        }
        v211 = 0LL;
        if ( v51 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v51 + 56));
        goto LABEL_188;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                     (__int64)&v210,
                                     v94)
                      + 20LL) )
        {
          v95 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                  (__int64)&v210,
                                                  v94);
          v96 = SystemEffectChainDescriptor::Resolve(*v95, v51);
          if ( v96 < 0 )
            break;
        }
        if ( ++v94 >= (int)v91 )
          goto LABEL_181;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v96,
        (int)v187);
    }
    else
    {
      while ( 1 )
      {
        v93 = (__int64 *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                           (__int64)v51 + 32,
                           v92);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              (__int64)&v210,
                              v93) )
          break;
        if ( ++v92 >= *((_DWORD *)v51 + 10) )
        {
          v91 = (unsigned int)v211;
          v90 = v210;
          goto LABEL_175;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        (int)v187);
    }
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v210);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v221);
LABEL_188:
    v63 = v68 + 1000;
    v198 = v68 + 1000;
    if ( !v68[1052] )
      goto LABEL_231;
    v98 = (struct _RTL_CRITICAL_SECTION *)(v68 + 1056);
    EnterCriticalSection((LPCRITICAL_SECTION)(v63 + 56));
    v222 = v63 + 56;
    v101 = 0LL;
    v191 = 0LL;
    v201 = 0LL;
    v65 = 0LL;
    v202 = 0LL;
    v102 = 0;
    v103 = 0;
    if ( *((int *)v63 + 10) > 0 )
    {
      do
      {
        if ( v22 < 0 || v103 >= *((_DWORD *)v63 + 10) )
          goto LABEL_399;
        v104 = *((_QWORD *)v63 + 4);
        if ( (_DWORD)v65 == v102 )
        {
          if ( v102 )
          {
            v102 = 2 * (_DWORD)v65;
            if ( ((unsigned int)v65 & 0x40000000) != 0 )
              goto LABEL_207;
          }
          else
          {
            v102 = 1;
          }
          if ( (unsigned __int64)v102 > 0x7FFFFFF
            || (v105 = (volatile signed __int32 **)_o__recalloc(v101, v102, 16LL), v101 = v105, (v191 = v105) == 0LL) )
          {
LABEL_207:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v187);
            goto LABEL_208;
          }
          HIDWORD(v202) = v102;
          v201 = v105;
        }
        v106 = &v101[2 * (int)v65];
        if ( v106 )
        {
          *v106 = 0LL;
          v106[1] = 0LL;
          v107 = *(volatile signed __int32 **)(v104 + v22 + 8);
          v108 = *(volatile signed __int32 **)(v104 + v22);
          if ( v107 )
          {
            _InterlockedIncrement(v107 + 2);
            v102 = HIDWORD(v202);
            LODWORD(v65) = v202;
            v191 = (volatile signed __int32 **)v201;
          }
          v109 = (std::_Ref_count_base *)v106[1];
          if ( v109 )
            std::_Ref_count_base::_Decref(v109);
          v106[1] = v107;
          *v106 = v108;
          v101 = v191;
          v63 = v198;
        }
        v65 = (CEndpointCharacteristics *)(unsigned int)((_DWORD)v65 + 1);
        LODWORD(v202) = (_DWORD)v65;
        ++v103;
        v22 += 16LL;
      }
      while ( v103 < *((_DWORD *)v63 + 10) );
      v98 = (struct _RTL_CRITICAL_SECTION *)(v63 + 56);
      LODWORD(v22) = 0;
    }
    v110 = 0;
    if ( (int)v65 <= 0 )
    {
LABEL_219:
      v113 = v191;
      if ( v191 )
      {
        if ( (int)v65 > 0 )
        {
          v114 = v191 + 1;
          do
          {
            v115 = *v114;
            if ( *v114 )
            {
              if ( _InterlockedExchangeAdd(v115 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64, volatile signed __int32 **))v115)(
                  v115,
                  v99,
                  v100,
                  v101);
                if ( _InterlockedExchangeAdd(v115 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v115 + 8LL))(v115);
              }
            }
            v114 += 2;
            v65 = (CEndpointCharacteristics *)((char *)v65 - 1);
          }
          while ( v65 );
          v113 = v201;
        }
        free(v113);
        v201 = 0LL;
      }
      v202 = 0LL;
      if ( v98 )
        LeaveCriticalSection(v98);
      goto LABEL_231;
    }
    v62 = v101;
    while ( 1 )
    {
      if ( v110 < 0 || v110 >= (int)v65 )
      {
        ATL::_AtlRaiseException(0xC000008C, v99);
LABEL_401:
        v19 = *(GUID *)(*(_QWORD *)(*(_QWORD *)v197 + 8LL) + 16LL * (unsigned int)v62);
        v261 = v19;
        if ( a8
          || (v259 = v19,
              v52 = (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(
                                    v65,
                                    &v259,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v63) == 0,
              v185 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
              !v52) )
        {
          v185 = &v261;
        }
        v20 = *v185;
        v21 = v19;
        goto LABEL_411;
      }
      if ( *((_BYTE *)*v62 + 20) )
      {
        v111 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                 (__int64)&v201,
                                                 v110);
        v112 = SystemEffectChainDescriptor::Resolve(*v111, (struct SystemEffectDescriptor *)v63);
        if ( v112 < 0 )
          break;
      }
      ++v110;
      v62 += 2;
      if ( v110 >= (int)v65 )
        goto LABEL_219;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v112,
      (int)v187);
LABEL_208:
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v201);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v222);
LABEL_231:
    v65 = v207;
    v67 = (char *)v207 + 16 * a7 + 64;
    v22 = 0LL;
    LODWORD(v62) = v189;
    LODWORD(v63) = a7;
LABEL_232:
    v116 = 0;
    v117 = *((_DWORD *)v67 + 2);
    if ( v117 > 0 )
    {
      while ( *(_OWORD *)(*(_QWORD *)v67 + 16LL * v116) != v254 )
      {
        if ( ++v116 >= v117 )
          goto LABEL_237;
      }
      if ( v116 != -1 )
        goto LABEL_401;
    }
LABEL_237:
    v251 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( !(_DWORD)v63 )
    {
      v118 = 1;
      v119 = *((_QWORD *)v65 + 7);
      if ( v119 )
      {
        v238 = 0LL;
        v239 = 0LL;
        v240 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v119 + 40LL))(
               v119,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v238) >= 0
          && (_WORD)v238 == 19 )
        {
          v118 = v239 == 0;
        }
        PropVariantClear(&v238);
        if ( !v118 )
        {
          v120 = (char *)v65 + 128;
          goto LABEL_351;
        }
      }
    }
    v121 = v196;
    v122 = v196 + 232;
    v198 = v196 + 232;
    if ( v196[284] )
    {
      v123 = (struct _RTL_CRITICAL_SECTION *)(v196 + 288);
      EnterCriticalSection((LPCRITICAL_SECTION)(v196 + 288));
      v223 = v196 + 288;
      v126 = 0LL;
      v192 = 0LL;
      v203 = 0LL;
      v127 = 0LL;
      v204 = 0LL;
      v128 = 0;
      v129 = 0;
      if ( *((int *)v196 + 68) > 0 )
      {
        do
        {
          if ( v22 < 0 || v129 >= *((_DWORD *)v122 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v124);
            __debugbreak();
          }
          v130 = *((_QWORD *)v122 + 4);
          if ( (_DWORD)v127 == v128 )
          {
            if ( v128 )
            {
              v128 = 2 * v127;
              if ( (v127 & 0x40000000) != 0 )
                goto LABEL_263;
            }
            else
            {
              v128 = 1;
            }
            if ( (unsigned __int64)v128 > 0x7FFFFFF
              || (v131 = (volatile signed __int32 **)_o__recalloc(v126, v128, 16LL), v126 = v131, (v192 = v131) == 0LL) )
            {
LABEL_263:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1F6,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                (int)v187);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v203);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v223);
              v22 = 0LL;
              goto LABEL_286;
            }
            HIDWORD(v204) = v128;
            v203 = v131;
          }
          v132 = &v126[2 * (int)v127];
          if ( v132 )
          {
            *v132 = 0LL;
            v132[1] = 0LL;
            v133 = *(volatile signed __int32 **)(v130 + v22 + 8);
            v134 = *(volatile signed __int32 **)(v130 + v22);
            if ( v133 )
            {
              _InterlockedIncrement(v133 + 2);
              v128 = HIDWORD(v204);
              LODWORD(v127) = v204;
              v192 = (volatile signed __int32 **)v203;
            }
            v135 = (std::_Ref_count_base *)v132[1];
            if ( v135 )
              std::_Ref_count_base::_Decref(v135);
            v132[1] = v133;
            *v132 = v134;
            v126 = v192;
            v122 = v198;
          }
          v127 = (unsigned int)(v127 + 1);
          LODWORD(v204) = v127;
          ++v129;
          v22 += 16LL;
        }
        while ( v129 < *((_DWORD *)v122 + 10) );
        v123 = (struct _RTL_CRITICAL_SECTION *)(v122 + 56);
        v22 = 0LL;
      }
      v136 = 0;
      if ( (int)v127 <= 0 )
      {
LABEL_274:
        v140 = v192;
        if ( v192 )
        {
          if ( (int)v127 > 0 )
          {
            v141 = v192 + 1;
            do
            {
              v142 = *v141;
              if ( *v141 )
              {
                if ( _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64, volatile signed __int32 **))v142)(
                    v142,
                    v124,
                    v125,
                    v126);
                  if ( _InterlockedExchangeAdd(v142 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v142 + 8LL))(v142);
                }
              }
              v141 += 2;
              --v127;
            }
            while ( v127 );
            v140 = v203;
          }
          free(v140);
          v203 = 0LL;
        }
        v204 = 0LL;
        if ( v123 )
          LeaveCriticalSection(v123);
      }
      else
      {
        v137 = v126;
        while ( 1 )
        {
          if ( v136 < 0 || v136 >= (int)v127 )
          {
            ATL::_AtlRaiseException(0xC000008C, v124);
LABEL_407:
            ATL::_AtlRaiseException(0xC000008C, v153);
            __debugbreak();
          }
          if ( *((_BYTE *)*v137 + 20) )
          {
            v138 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                     (__int64)&v203,
                                                     v136);
            v139 = SystemEffectChainDescriptor::Resolve(*v138, (struct SystemEffectDescriptor *)v122);
            if ( v139 < 0 )
              break;
          }
          ++v136;
          v137 += 2;
          if ( v136 >= (int)v127 )
            goto LABEL_274;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1FC,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v139,
          (int)v187);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v203);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v223);
      }
LABEL_286:
      v121 = v196;
    }
    if ( *((_BYTE *)v195 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v195 + 56));
      v224 = (char *)v195 + 56;
      v143 = 0LL;
      v208 = 0LL;
      v144 = 0LL;
      v209 = 0LL;
      v145 = 0;
      if ( *((int *)v195 + 10) <= 0 )
      {
LABEL_294:
        v147 = 0;
        if ( (int)v144 > 0 )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                         (__int64)&v208,
                                         v147)
                          + 20LL) )
            {
              v148 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                       (__int64)&v208,
                                                       v147);
              v149 = SystemEffectChainDescriptor::Resolve(*v148, v195);
              if ( v149 < 0 )
                break;
            }
            if ( ++v147 >= (int)v144 )
              goto LABEL_300;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1FC,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v149,
            (int)v187);
          goto LABEL_293;
        }
LABEL_300:
        if ( v143 )
        {
          if ( (int)v144 > 0 )
          {
            v150 = (__int64)v143;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v150);
              v150 += 16LL;
              --v144;
            }
            while ( v144 );
          }
          free(v143);
          v208 = 0LL;
        }
        v209 = 0LL;
        if ( v195 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v195 + 56));
      }
      else
      {
        while ( 1 )
        {
          v146 = (__int64 *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                              (__int64)v195 + 32,
                              v145);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                (__int64)&v208,
                                v146) )
            break;
          if ( ++v145 >= *((_DWORD *)v195 + 10) )
          {
            v144 = (unsigned int)v209;
            v143 = v208;
            goto LABEL_294;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F6,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          (int)v187);
LABEL_293:
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v208);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v224);
      }
    }
    v151 = v121 + 1000;
    v198 = v121 + 1000;
    if ( !v121[1052] )
      goto LABEL_350;
    v152 = (struct _RTL_CRITICAL_SECTION *)(v121 + 1056);
    EnterCriticalSection((LPCRITICAL_SECTION)(v121 + 1056));
    v225 = v121 + 1056;
    v155 = 0LL;
    v193 = 0LL;
    v205 = 0LL;
    v156 = 0LL;
    v206 = 0LL;
    v157 = 0;
    v158 = 0;
    if ( *((int *)v151 + 10) > 0 )
    {
      do
      {
        if ( v22 < 0 || v158 >= *((_DWORD *)v151 + 10) )
          goto LABEL_407;
        v159 = *((_QWORD *)v151 + 4);
        if ( (_DWORD)v156 == v157 )
        {
          if ( v157 )
          {
            v157 = 2 * v156;
            if ( (v156 & 0x40000000) != 0 )
              goto LABEL_326;
          }
          else
          {
            v157 = 1;
          }
          if ( (unsigned __int64)v157 > 0x7FFFFFF
            || (v160 = (volatile signed __int32 **)_o__recalloc(v155, v157, 16LL), v155 = v160, (v193 = v160) == 0LL) )
          {
LABEL_326:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v187);
            goto LABEL_327;
          }
          HIDWORD(v206) = v157;
          v205 = v160;
        }
        v161 = &v155[2 * (int)v156];
        if ( v161 )
        {
          *v161 = 0LL;
          v161[1] = 0LL;
          v162 = *(volatile signed __int32 **)(v159 + v22 + 8);
          v163 = *(volatile signed __int32 **)(v159 + v22);
          if ( v162 )
          {
            _InterlockedIncrement(v162 + 2);
            v157 = HIDWORD(v206);
            LODWORD(v156) = v206;
            v193 = (volatile signed __int32 **)v205;
          }
          v164 = (std::_Ref_count_base *)v161[1];
          if ( v164 )
            std::_Ref_count_base::_Decref(v164);
          v161[1] = v162;
          *v161 = v163;
          v155 = v193;
          v151 = v198;
        }
        v156 = (unsigned int)(v156 + 1);
        LODWORD(v206) = v156;
        ++v158;
        v22 += 16LL;
      }
      while ( v158 < *((_DWORD *)v151 + 10) );
      v152 = (struct _RTL_CRITICAL_SECTION *)(v151 + 56);
      LODWORD(v22) = 0;
    }
    v165 = 0;
    if ( (int)v156 <= 0 )
    {
LABEL_338:
      v169 = v193;
      if ( v193 )
      {
        if ( (int)v156 > 0 )
        {
          v170 = v193 + 1;
          do
          {
            v171 = *v170;
            if ( *v170 )
            {
              if ( _InterlockedExchangeAdd(v171 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64, volatile signed __int32 **))v171)(
                  v171,
                  v153,
                  v154,
                  v155);
                if ( _InterlockedExchangeAdd(v171 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v171 + 8LL))(v171);
              }
            }
            v170 += 2;
            --v156;
          }
          while ( v156 );
          v169 = v205;
        }
        free(v169);
        v205 = 0LL;
      }
      v206 = 0LL;
      if ( v152 )
        LeaveCriticalSection(v152);
      goto LABEL_350;
    }
    v166 = v155;
    while ( 1 )
    {
      if ( v165 < 0 || v165 >= (int)v156 )
      {
        ATL::_AtlRaiseException(0xC000008C, v153);
        goto LABEL_409;
      }
      if ( *((_BYTE *)*v166 + 20) )
      {
        v167 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                 (__int64)&v205,
                                                 v165);
        v168 = SystemEffectChainDescriptor::Resolve(*v167, (struct SystemEffectDescriptor *)v151);
        if ( v168 < 0 )
          break;
      }
      ++v165;
      v166 += 2;
      if ( v165 >= (int)v156 )
        goto LABEL_338;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v168,
      (int)v187);
LABEL_327:
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v205);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v225);
LABEL_350:
    v65 = v207;
    v120 = (char *)v207 + 16 * a7 + 64;
    v22 = 0LL;
    LODWORD(v63) = a7;
LABEL_351:
    v172 = 0;
    v173 = *((_DWORD *)v120 + 2);
    if ( v173 <= 0 )
      goto LABEL_394;
    while ( *(_OWORD *)(*(_QWORD *)v120 + 16LL * v172) != *(_OWORD *)&v251 )
    {
      if ( ++v172 >= v173 )
        goto LABEL_394;
    }
    if ( v172 == -1 )
    {
LABEL_394:
      v51 = v195;
      goto LABEL_395;
    }
    v174 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)v197 + 8LL) + v241);
    v175 = 1;
    v176 = *((_QWORD *)v65 + 7);
    if ( v176 )
    {
      v226 = 0LL;
      v227 = 0LL;
      v228 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v176 + 40LL))(
             v176,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v226) >= 0
        && (_WORD)v226 == 19 )
      {
        v175 = v227 == 0;
      }
      PropVariantClear(&v226);
      if ( !v175 && (_DWORD)v63 != 3 )
        break;
    }
    v253 = v174;
    v252 = v174;
    v51 = v195;
    if ( *((_BYTE *)v195 + 52) )
    {
      v177 = 0;
      if ( *((int *)v195 + 10) > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                       (__int64)v195 + 32,
                                       v177)
                        + 20LL) )
          {
            v178 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                 (__int64)v195 + 32,
                                 v177);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v178, &v252) != -1 )
              break;
          }
          if ( ++v177 >= *((_DWORD *)v195 + 10) )
            goto LABEL_379;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v195 + 56));
        v255 = (char *)v195 + 56;
        v179 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 (__int64)v195 + 32,
                 v177);
        std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v247, v179);
        if ( (int)SystemEffectChainDescriptor::Resolve(v247, v195) < 0 )
        {
          if ( v248 )
            std::_Ref_count_base::_Decref(v248);
          if ( v195 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v195 + 56));
LABEL_385:
          v182 = *((_QWORD *)v195 + 2);
          if ( !v182 )
            goto LABEL_391;
          v183 = 0;
          v184 = *(_DWORD *)(v182 + 8);
          if ( v184 <= 0 )
            goto LABEL_391;
          while ( *(_OWORD *)(*(_QWORD *)v182 + 16LL * v183) != v253 )
          {
            if ( ++v183 >= v184 )
              goto LABEL_391;
          }
          if ( v183 == -1 )
LABEL_391:
            v182 = 0LL;
          goto LABEL_392;
        }
        if ( v248 )
          std::_Ref_count_base::_Decref(v248);
        if ( v195 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v195 + 56));
      }
    }
LABEL_379:
    v180 = 0;
    if ( *((int *)v195 + 10) <= 0 )
      goto LABEL_385;
    while ( 1 )
    {
      v181 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                           (__int64)v195 + 32,
                           v180);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v181, &v252) != -1 )
        break;
      if ( ++v180 >= *((_DWORD *)v195 + 10) )
        goto LABEL_385;
    }
    if ( v180 == -1 )
      goto LABEL_385;
    v182 = *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        (__int64)v195 + 32,
                        v180);
LABEL_392:
    if ( v182 )
      goto LABEL_409;
LABEL_395:
    LODWORD(v62) = v189 + 1;
    v189 = (unsigned int)v62;
    if ( (unsigned int)v62 >= **(_DWORD **)v197 )
    {
      v19 = v261;
      v20 = v214;
      v21 = v215;
      goto LABEL_411;
    }
  }
  v260 = v174;
  v51 = v195;
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v195, &v260) == -1 )
    goto LABEL_395;
LABEL_409:
  v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v20 = *(GUID *)(*(_QWORD *)(*(_QWORD *)v197 + 8LL) + 16LL * v189);
  v21 = v20;
LABEL_411:
  v18 = v212;
  v17 = v213;
LABEL_412:
  if ( v242 )
    *v242 = v19;
  if ( v243 )
    *v243 = v20;
  if ( v17 )
    *v17 = v21;
  if ( v18 )
    *v18 = v21;
  if ( (int)v22 < 0 )
    AudSrvTraceLoggingErrorHelper("DeriveAudioProcessingModeConfiguration", 0x316u, v22);
  return (unsigned int)v22;
}
