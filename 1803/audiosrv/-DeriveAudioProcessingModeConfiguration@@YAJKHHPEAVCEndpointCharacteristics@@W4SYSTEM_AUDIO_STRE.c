/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0
 * Callers:
 *     AudioServerGetMixFormat @ 0x1800014A0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180001740 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180024820 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800A7E6C (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x1800C3E80 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800C46C0 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180011900 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180050660 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x1800509E4 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180050A70 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180053E54 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095AB0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095D94 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009726C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1800975B8 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x18009760C (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18009EC7C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800E9D14 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        int a1,
        int a2,
        int a3,
        CEndpointCharacteristics *a4,
        unsigned int a5,
        int a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        int a8,
        unsigned int a9,
        int a10,
        struct _GUID *a11,
        struct _GUID *a12,
        struct _GUID *a13,
        struct _GUID *a14)
{
  CEndpointCharacteristics *v14; // rsi
  int v15; // r15d
  unsigned int v16; // r14d
  struct _GUID *v17; // r12
  struct _GUID *v18; // rdi
  struct _GUID *v19; // rbx
  struct _GUID v20; // xmm6
  struct _GUID v21; // xmm8
  struct _GUID v22; // xmm7
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // r12d
  BOOL v26; // edi
  __int64 v27; // rcx
  char *v28; // r8
  char *v29; // r13
  struct _RTL_CRITICAL_SECTION *v30; // r15
  unsigned int v31; // edx
  volatile signed __int32 **v32; // r14
  __int64 v33; // rdi
  int v34; // ebx
  int v35; // r12d
  __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // rax
  volatile signed __int32 **v39; // rcx
  __int64 v40; // rax
  int v41; // ebx
  volatile signed __int32 **v42; // rsi
  SystemEffectChainDescriptor **v43; // rax
  int v44; // eax
  volatile signed __int32 **v45; // rsi
  volatile signed __int32 *v46; // rbx
  char *v47; // r13
  int *v48; // rdi
  struct _RTL_CRITICAL_SECTION *v49; // r15
  char *v50; // r14
  int v51; // esi
  int v52; // ebx
  __int64 v53; // rax
  unsigned int v54; // ebx
  SystemEffectChainDescriptor **v55; // rax
  int v56; // eax
  char *v57; // rbx
  __int64 v58; // rdi
  char *v59; // r13
  struct _RTL_CRITICAL_SECTION *v60; // r15
  unsigned int v61; // edx
  volatile signed __int32 **v62; // r14
  __int64 v63; // rdi
  int v64; // ebx
  int v65; // r12d
  __int64 v66; // rsi
  __int64 v67; // r15
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rax
  volatile signed __int32 **v73; // rcx
  __int64 v74; // rax
  int v75; // ebx
  volatile signed __int32 **v76; // rsi
  SystemEffectChainDescriptor **v77; // rax
  int v78; // eax
  volatile signed __int32 **v79; // rsi
  volatile signed __int32 *v80; // rbx
  int v81; // edx
  int v82; // ecx
  __int64 v83; // r10
  int v84; // ecx
  __int64 v85; // r10
  __int64 v86; // r9
  __int64 v87; // rdx
  BOOL v88; // ebx
  __int64 v89; // rcx
  int v90; // ecx
  char *v91; // r12
  char *v92; // r13
  bool v93; // zf
  unsigned int v94; // ebx
  _QWORD *v95; // rax
  __int64 v96; // rax
  volatile signed __int32 *v97; // rbx
  __int64 v98; // rdx
  int v99; // ecx
  int v100; // r8d
  unsigned int v101; // ebx
  _QWORD *v102; // rax
  GUID *v103; // rax
  unsigned int v104; // ebx
  int v105; // eax
  unsigned int v106; // ebx
  unsigned int v107; // r14d
  __int64 v108; // r15
  __int64 v109; // rdi
  CEndpointCharacteristics *v110; // rsi
  int v111; // eax
  unsigned int v112; // ebx
  BOOL v113; // ebx
  __int64 v114; // rcx
  char *v115; // rax
  char *v116; // r12
  struct _RTL_CRITICAL_SECTION *v117; // r14
  unsigned int v118; // edx
  volatile signed __int32 **v119; // r13
  __int64 v120; // rsi
  int v121; // ebx
  int v122; // r15d
  __int64 v123; // r14
  __int64 v124; // rdi
  __int64 v125; // rax
  volatile signed __int32 **v126; // rcx
  __int64 v127; // rax
  int v128; // ebx
  volatile signed __int32 **v129; // rdi
  SystemEffectChainDescriptor **v130; // rax
  int v131; // eax
  volatile signed __int32 **v132; // rdi
  volatile signed __int32 *v133; // rbx
  char *v134; // rsi
  __int64 v135; // rdi
  unsigned int v136; // ebx
  __int64 v137; // rax
  unsigned int v138; // ebx
  SystemEffectChainDescriptor **v139; // rax
  int v140; // eax
  char *v141; // rbx
  char *v142; // r12
  struct _RTL_CRITICAL_SECTION *v143; // r14
  unsigned int v144; // edx
  volatile signed __int32 **v145; // r13
  __int64 v146; // rsi
  int v147; // ebx
  int v148; // r15d
  __int64 v149; // r14
  __int64 v150; // rdi
  __int64 v151; // r9
  __int64 v152; // rdx
  __int64 v153; // r9
  __int64 v154; // rdx
  __int64 v155; // rax
  volatile signed __int32 **v156; // rcx
  __int64 v157; // rax
  int v158; // ebx
  volatile signed __int32 **v159; // rdi
  SystemEffectChainDescriptor **v160; // rax
  int v161; // eax
  volatile signed __int32 **v162; // rdi
  volatile signed __int32 *v163; // rbx
  int v164; // ecx
  int v165; // edx
  __int64 v166; // r9
  __int64 v167; // rdx
  __int128 v168; // xmm6
  BOOL v169; // ebx
  __int64 v170; // rcx
  bool v171; // zf
  unsigned int v172; // ebx
  _QWORD *v173; // rax
  __int64 v174; // rax
  volatile signed __int32 *v175; // rbx
  __int64 v176; // rdx
  int v177; // ecx
  int v178; // r8d
  unsigned int v179; // ebx
  _QWORD *v180; // rax
  int IsAPOModeSupported; // eax
  struct _GUID *v182; // rsi
  int v183; // [rsp+28h] [rbp-E0h]
  int v184; // [rsp+28h] [rbp-E0h]
  bool v185[8]; // [rsp+38h] [rbp-D0h] BYREF
  char *v186; // [rsp+40h] [rbp-C8h]
  __int64 v187; // [rsp+48h] [rbp-C0h]
  int v188[2]; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 **v189; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v190; // [rsp+60h] [rbp-A8h]
  volatile signed __int32 **v191; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v192; // [rsp+70h] [rbp-98h]
  volatile signed __int32 **v193; // [rsp+78h] [rbp-90h] BYREF
  int v194; // [rsp+80h] [rbp-88h]
  int v195; // [rsp+84h] [rbp-84h]
  char *v196; // [rsp+88h] [rbp-80h] BYREF
  __int64 v197; // [rsp+90h] [rbp-78h]
  volatile signed __int32 **v198; // [rsp+98h] [rbp-70h] BYREF
  int v199; // [rsp+A0h] [rbp-68h]
  int v200; // [rsp+A4h] [rbp-64h]
  CEndpointCharacteristics *v201; // [rsp+A8h] [rbp-60h]
  struct _GUID *v202; // [rsp+B0h] [rbp-58h]
  struct _GUID *v203; // [rsp+B8h] [rbp-50h]
  struct _GUID *v204; // [rsp+C0h] [rbp-48h]
  char *v205; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v206; // [rsp+D0h] [rbp-38h]
  char *v207; // [rsp+D8h] [rbp-30h]
  __int64 v208; // [rsp+E0h] [rbp-28h]
  struct _GUID v209; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v210; // [rsp+F8h] [rbp-10h] BYREF
  char *v211; // [rsp+108h] [rbp+0h] BYREF
  int *v212; // [rsp+110h] [rbp+8h] BYREF
  char *v213; // [rsp+118h] [rbp+10h] BYREF
  char *v214; // [rsp+120h] [rbp+18h] BYREF
  char *v215; // [rsp+128h] [rbp+20h] BYREF
  char *v216; // [rsp+130h] [rbp+28h] BYREF
  struct _GUID v217; // [rsp+138h] [rbp+30h]
  PROPVARIANT v218; // [rsp+148h] [rbp+40h] BYREF
  __int64 v219; // [rsp+150h] [rbp+48h]
  __int64 v220; // [rsp+158h] [rbp+50h]
  PROPVARIANT pvar; // [rsp+160h] [rbp+58h] BYREF
  __int64 v222; // [rsp+168h] [rbp+60h]
  __int64 v223; // [rsp+170h] [rbp+68h]
  PROPVARIANT v224; // [rsp+178h] [rbp+70h] BYREF
  __int64 v225; // [rsp+180h] [rbp+78h]
  __int64 v226; // [rsp+188h] [rbp+80h]
  PROPVARIANT v227; // [rsp+190h] [rbp+88h] BYREF
  __int64 v228; // [rsp+198h] [rbp+90h]
  __int64 v229; // [rsp+1A0h] [rbp+98h]
  __int64 v230; // [rsp+1A8h] [rbp+A0h]
  struct _GUID *v231; // [rsp+1B0h] [rbp+A8h]
  struct _GUID v232; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _GUID v233; // [rsp+1C8h] [rbp+C0h]
  GUID v234; // [rsp+1D8h] [rbp+D0h]
  __int128 v235; // [rsp+1E8h] [rbp+E0h]
  __int128 v236; // [rsp+1F8h] [rbp+F0h] BYREF
  char *v237; // [rsp+208h] [rbp+100h]
  __int64 v238; // [rsp+210h] [rbp+108h]
  char *v239; // [rsp+218h] [rbp+110h]
  struct _GUID v240; // [rsp+228h] [rbp+120h] BYREF
  SystemEffectChainDescriptor *v241; // [rsp+238h] [rbp+130h]
  volatile signed __int32 *v242; // [rsp+240h] [rbp+138h]
  struct _GUID v243; // [rsp+248h] [rbp+140h] BYREF
  SystemEffectChainDescriptor *v244; // [rsp+258h] [rbp+150h]
  volatile signed __int32 *v245; // [rsp+260h] [rbp+158h]
  struct _GUID v246; // [rsp+268h] [rbp+160h] BYREF
  __int128 v247; // [rsp+278h] [rbp+170h] BYREF
  struct _GUID v248; // [rsp+288h] [rbp+180h] BYREF
  struct _GUID v249; // [rsp+298h] [rbp+190h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v238 = -2LL;
  v14 = a4;
  v201 = a4;
  v15 = a3;
  LODWORD(v186) = a3;
  *(_DWORD *)&v185[4] = a1;
  v16 = a5;
  LODWORD(v187) = a5;
  v231 = a11;
  v17 = a12;
  v204 = a12;
  v18 = a13;
  v203 = a13;
  v19 = a14;
  v202 = a14;
  v248 = GUID_00000000_0000_0000_0000_000000000000;
  v209 = GUID_00000000_0000_0000_0000_000000000000;
  v210 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a4, a7, &v248, &v209, &v210);
    v20 = v248;
    v21 = v209;
    v22 = v210;
    goto LABEL_349;
  }
  if ( a5 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a4,
      eHostProcessConnector,
      &v248,
      &v209,
      &v210);
    v20 = v248;
    v21 = v209;
    v22 = v210;
    goto LABEL_349;
  }
  if ( !a2 )
  {
    v24 = eHostProcessConnector;
    v25 = a7;
    if ( a7 != eLoopbackConnector )
      v24 = a7;
    if ( v24 )
      goto LABEL_18;
    v26 = 1;
    v27 = *((_QWORD *)a4 + 7);
    if ( !v27 )
      goto LABEL_18;
    pvar = 0LL;
    v222 = 0LL;
    v223 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
           v27,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v26 = v222 == 0;
    }
    PropVariantClear(&pvar);
    if ( v26 )
    {
LABEL_18:
      v208 = v24;
      v207 = (char *)v14 + 96 * v24;
      v29 = v207 + 232;
      if ( v207[284] )
      {
        v30 = (struct _RTL_CRITICAL_SECTION *)(v207 + 288);
        EnterCriticalSection((LPCRITICAL_SECTION)(v207 + 288));
        v211 = v207 + 288;
        v31 = 0;
        v32 = 0LL;
        v193 = 0LL;
        v33 = 0LL;
        v194 = 0;
        v34 = 0;
        v195 = 0;
        v35 = 0;
        if ( *((int *)v207 + 68) > 0 )
        {
          v36 = 0LL;
          do
          {
            if ( v36 < 0 || v35 >= *((_DWORD *)v29 + 10) )
            {
              ATL::_AtlRaiseException(0xC000008C, 0);
              __debugbreak();
            }
            v37 = *((_QWORD *)v29 + 4);
            if ( (_DWORD)v33 == v34 )
            {
              if ( v34 )
              {
                v34 = 2 * v33;
                if ( (v33 & 0x40000000) != 0 )
                  goto LABEL_79;
              }
              else
              {
                v34 = 1;
              }
              if ( (unsigned __int64)v34 > 0x7FFFFFF
                || (v38 = _o__recalloc(v32, v34, 16LL), (v32 = (volatile signed __int32 **)v38) == 0LL) )
              {
LABEL_79:
                v68 = 2147942414LL;
                v69 = 502LL;
                goto LABEL_80;
              }
              v195 = v34;
              v193 = (volatile signed __int32 **)v38;
              v31 = 0;
            }
            v39 = &v32[2 * (int)v33];
            if ( v39 )
            {
              *v39 = 0LL;
              v39[1] = 0LL;
              v40 = *(_QWORD *)(v37 + v36 + 8);
              if ( v40 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
                v34 = v195;
                LODWORD(v33) = v194;
                v32 = v193;
              }
              *v39 = *(volatile signed __int32 **)(v37 + v36);
              v39[1] = *(volatile signed __int32 **)(v37 + v36 + 8);
            }
            v33 = (unsigned int)(v33 + 1);
            v194 = v33;
            ++v35;
            v36 += 16LL;
          }
          while ( v35 < *((_DWORD *)v29 + 10) );
          v30 = (struct _RTL_CRITICAL_SECTION *)(v29 + 56);
        }
        v41 = 0;
        if ( (int)v33 <= 0 )
        {
LABEL_43:
          if ( v32 )
          {
            if ( (int)v33 > 0 )
            {
              v45 = v32 + 1;
              do
              {
                v46 = *v45;
                if ( *v45 )
                {
                  if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
                    if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
                  }
                }
                v45 += 2;
                --v33;
              }
              while ( v33 );
              v32 = v193;
            }
            free(v32);
          }
          if ( v30 )
            LeaveCriticalSection(v30);
        }
        else
        {
          v42 = v32;
          while ( 1 )
          {
            if ( v41 < 0 || v41 >= (int)v33 )
            {
              ATL::_AtlRaiseException(0xC000008C, v31);
LABEL_366:
              ATL::_AtlRaiseException(0xC000008C, v61);
              __debugbreak();
            }
            if ( *((_BYTE *)*v42 + 20) )
            {
              v43 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v193,
                                                      (unsigned int)v41);
              v44 = SystemEffectChainDescriptor::Resolve(*v43, (struct SystemEffectDescriptor *)v29);
              if ( v44 < 0 )
                break;
            }
            ++v41;
            v42 += 2;
            if ( v41 >= (int)v33 )
              goto LABEL_43;
          }
          v68 = (unsigned int)v44;
          v69 = 508LL;
LABEL_80:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v69,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v68,
            v183);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v193);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v211);
        }
      }
      v47 = v207;
      v48 = (int *)(v207 + 616);
      if ( v207[668] )
      {
        v49 = (struct _RTL_CRITICAL_SECTION *)(v207 + 672);
        EnterCriticalSection((LPCRITICAL_SECTION)(v207 + 672));
        v212 = v48 + 14;
        v50 = 0LL;
        v205 = 0LL;
        v51 = 0;
        v206 = 0LL;
        v52 = 0;
        if ( v48[10] <= 0 )
          goto LABEL_60;
        do
        {
          v53 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v48 + 8, (unsigned int)v52);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v205,
                                v53) )
          {
            v70 = 2147942414LL;
            v71 = 502LL;
            goto LABEL_83;
          }
          ++v52;
        }
        while ( v52 < v48[10] );
        v51 = v206;
        v50 = v205;
LABEL_60:
        v54 = 0;
        if ( v51 <= 0 )
        {
LABEL_64:
          if ( v50 )
          {
            if ( v51 > 0 )
            {
              v57 = v50;
              v58 = (unsigned int)v51;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v57);
                v57 += 16;
                --v58;
              }
              while ( v58 );
            }
            free(v50);
          }
          if ( v49 )
            LeaveCriticalSection(v49);
        }
        else
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         &v205,
                                         v54)
                          + 20LL) )
            {
              v55 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v205,
                                                      v54);
              v56 = SystemEffectChainDescriptor::Resolve(*v55, (struct SystemEffectDescriptor *)v48);
              if ( v56 < 0 )
                break;
            }
            if ( (int)++v54 >= v51 )
              goto LABEL_64;
          }
          v70 = (unsigned int)v56;
          v71 = 508LL;
LABEL_83:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v71,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v70,
            v183);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v205);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v212);
        }
      }
      v59 = v47 + 1000;
      if ( v59[52] )
      {
        v60 = (struct _RTL_CRITICAL_SECTION *)(v59 + 56);
        EnterCriticalSection((LPCRITICAL_SECTION)(v59 + 56));
        v213 = v59 + 56;
        v61 = 0;
        v62 = 0LL;
        v198 = 0LL;
        v63 = 0LL;
        v199 = 0;
        v64 = 0;
        v200 = 0;
        v65 = 0;
        if ( *((int *)v59 + 10) > 0 )
        {
          v66 = 0LL;
          do
          {
            if ( v66 < 0 || v65 >= *((_DWORD *)v59 + 10) )
              goto LABEL_366;
            v67 = *((_QWORD *)v59 + 4);
            if ( (_DWORD)v63 == v64 )
            {
              if ( v64 )
              {
                v64 = 2 * v63;
                if ( (v63 & 0x40000000) != 0 )
                  goto LABEL_127;
              }
              else
              {
                v64 = 1;
              }
              if ( (unsigned __int64)v64 > 0x7FFFFFF
                || (v72 = _o__recalloc(v62, v64, 16LL), (v62 = (volatile signed __int32 **)v72) == 0LL) )
              {
LABEL_127:
                v86 = 2147942414LL;
                v87 = 502LL;
                goto LABEL_128;
              }
              v200 = v64;
              v198 = (volatile signed __int32 **)v72;
              v61 = 0;
            }
            v73 = &v62[2 * (int)v63];
            if ( v73 )
            {
              *v73 = 0LL;
              v73[1] = 0LL;
              v74 = *(_QWORD *)(v67 + v66 + 8);
              if ( v74 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v74 + 8));
                v64 = v200;
                LODWORD(v63) = v199;
                v62 = v198;
              }
              *v73 = *(volatile signed __int32 **)(v67 + v66);
              v73[1] = *(volatile signed __int32 **)(v67 + v66 + 8);
            }
            v63 = (unsigned int)(v63 + 1);
            v199 = v63;
            ++v65;
            v66 += 16LL;
          }
          while ( v65 < *((_DWORD *)v59 + 10) );
          v60 = (struct _RTL_CRITICAL_SECTION *)(v59 + 56);
        }
        v75 = 0;
        if ( (int)v63 <= 0 )
        {
LABEL_102:
          if ( v62 )
          {
            if ( (int)v63 > 0 )
            {
              v79 = v62 + 1;
              do
              {
                v80 = *v79;
                if ( *v79 )
                {
                  if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v80)(v80);
                    if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
                  }
                }
                v79 += 2;
                --v63;
              }
              while ( v63 );
              v62 = v198;
            }
            free(v62);
          }
          if ( v60 )
            LeaveCriticalSection(v60);
        }
        else
        {
          v76 = v62;
          while ( 1 )
          {
            if ( v75 < 0 || v75 >= (int)v63 )
            {
              ATL::_AtlRaiseException(0xC000008C, v61);
LABEL_368:
              ATL::_AtlRaiseException(0xC000008C, v118);
              __debugbreak();
            }
            if ( *((_BYTE *)*v76 + 20) )
            {
              v77 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                      &v198,
                                                      (unsigned int)v75);
              v78 = SystemEffectChainDescriptor::Resolve(*v77, (struct SystemEffectDescriptor *)v59);
              if ( v78 < 0 )
                break;
            }
            ++v75;
            v76 += 2;
            if ( v75 >= (int)v63 )
              goto LABEL_102;
          }
          v86 = (unsigned int)v78;
          v87 = 508LL;
LABEL_128:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v87,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v86,
            v183);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v198);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v213);
        }
      }
      v14 = v201;
      v28 = (char *)v201 + 16 * v208 + 64;
      v16 = v187;
      v15 = (int)v186;
      v25 = a7;
    }
    else
    {
      v28 = (char *)v14 + 128;
    }
    v81 = *((_DWORD *)v28 + 2);
    if ( v81 )
    {
      v82 = 0;
      if ( v81 <= 0 )
        goto LABEL_121;
      v83 = *(_QWORD *)v28;
      while ( *(_QWORD *)(v83 + 16LL * v82) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
           || *(_QWORD *)(v83 + 16LL * v82 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
      {
        if ( ++v82 >= v81 )
          goto LABEL_121;
      }
      if ( v82 == -1 )
      {
LABEL_121:
        v84 = 0;
        if ( v81 <= 0 )
          goto LABEL_126;
        v85 = *(_QWORD *)v28;
        while ( *(_QWORD *)(v85 + 16LL * v84) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || *(_QWORD *)(v85 + 16LL * v84 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          if ( ++v84 >= v81 )
            goto LABEL_126;
        }
        if ( v84 == -1 )
LABEL_126:
          v20 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v28, 0LL);
        else
          v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v20 = GUID_00000000_0000_0000_0000_000000000000;
    }
    v217 = v20;
    v249 = v20;
    v88 = 1;
    v89 = *((_QWORD *)v14 + 7);
    if ( !v89 )
      goto LABEL_142;
    v224 = 0LL;
    v225 = 0LL;
    v226 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v89 + 40LL))(
           v89,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v224) >= 0
      && (_WORD)v224 == 19 )
    {
      v88 = v225 == 0;
    }
    PropVariantClear(&v224);
    if ( v88 || v25 == eKeywordDetectorConnector )
LABEL_142:
      v90 = 1;
    else
      v90 = 0;
    v240 = v20;
    v91 = (char *)v14 + 96 * a7;
    v207 = v91;
    v92 = v91 + 616;
    v186 = v91 + 616;
    if ( !v90 )
    {
      v93 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v91 + 616, &v240) == -1;
      goto LABEL_176;
    }
    v233 = v20;
    v232 = v20;
    if ( v91[668] )
    {
      v94 = 0;
      if ( *((int *)v91 + 164) > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       v91 + 648,
                                       v94)
                        + 20LL) )
          {
            v95 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v91 + 648, v94);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v95, &v232) != -1 )
              break;
          }
          if ( (signed int)++v94 >= *((_DWORD *)v91 + 164) )
            goto LABEL_167;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(v91 + 672));
        v237 = v91 + 672;
        v96 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v91 + 648, v94);
        v97 = *(volatile signed __int32 **)(v96 + 8);
        if ( v97 )
        {
          _InterlockedIncrement(v97 + 2);
          v97 = *(volatile signed __int32 **)(v96 + 8);
          v20 = v217;
        }
        v241 = *(SystemEffectChainDescriptor **)v96;
        v242 = v97;
        if ( (int)SystemEffectChainDescriptor::Resolve(v241, (struct SystemEffectDescriptor *)(v91 + 616)) < 0 )
        {
          if ( v97 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v97);
          if ( v91 != (char *)-672LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v91 + 672));
          goto LABEL_158;
        }
        if ( v97 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v97);
        if ( v91 != (char *)-672LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v91 + 672));
      }
    }
LABEL_167:
    v101 = 0;
    if ( *((int *)v91 + 164) > 0 )
    {
      while ( 1 )
      {
        v102 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v91 + 648, v101);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v102, &v232) != -1 )
          break;
        if ( (signed int)++v101 >= *((_DWORD *)v91 + 164) )
          goto LABEL_158;
      }
      if ( v101 != -1 )
      {
        v98 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v91 + 648, v101);
LABEL_175:
        v93 = v98 == 0;
LABEL_176:
        v248 = v20;
        v103 = &v249;
        if ( v93 )
          v103 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v21 = *v103;
        v209 = *v103;
        v22 = v20;
        v210 = v20;
        if ( v16 )
        {
          v104 = *(_DWORD *)&v185[4];
          if ( v16 == 1 && *(_DWORD *)&v185[4] == 18 && v15 )
          {
            *(_QWORD *)v188 = &unk_1801233F8;
LABEL_189:
            v107 = 0;
            LODWORD(v187) = 0;
            if ( !**(_DWORD **)v188 )
              goto LABEL_348;
            while ( 1 )
            {
              v108 = v107;
              v230 = v107;
              v109 = 16LL * v107;
              v208 = v109;
              v243 = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)v188 + 8LL) + v109);
              v110 = v201;
              v111 = UseSupportedConnectorMode(v201, v104, a7, &v243, a10, v185);
              v112 = v111;
              if ( v111 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x36E,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (const char *)(unsigned int)v111,
                  v184);
                return v112;
              }
              if ( v185[0] )
              {
                v20 = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)v188 + 8LL) + 16LL * v107);
                v248 = v20;
                if ( a8
                  || (v246 = v20,
                      IsAPOModeSupported = CEndpointCharacteristics::IsAPOModeSupported(v110, &v246, a7),
                      v182 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
                      IsAPOModeSupported) )
                {
                  v182 = &v248;
                }
                v21 = *v182;
                v22 = v20;
LABEL_348:
                v17 = v204;
                v18 = v203;
                v19 = v202;
LABEL_349:
                if ( v231 )
                  *v231 = v20;
                if ( v17 )
                  *v17 = v21;
                if ( v18 )
                  *v18 = v22;
                if ( v19 )
                  *v19 = v22;
                return 0LL;
              }
              v234 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              if ( a7 == eHostProcessConnector )
              {
                v113 = 1;
                v114 = *((_QWORD *)v110 + 7);
                if ( v114 )
                {
                  v227 = 0LL;
                  v228 = 0LL;
                  v229 = 0LL;
                  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v114 + 40LL))(
                         v114,
                         &PKEY_AudioEndpoint_Disable_SysFx,
                         &v227) >= 0
                    && (_WORD)v227 == 19 )
                  {
                    v113 = v228 == 0;
                  }
                  PropVariantClear(&v227);
                  if ( !v113 )
                  {
                    v115 = (char *)v110 + 128;
                    goto LABEL_298;
                  }
                }
              }
              v116 = v91 + 232;
              if ( v116[52] )
              {
                v117 = (struct _RTL_CRITICAL_SECTION *)(v116 + 56);
                EnterCriticalSection((LPCRITICAL_SECTION)(v116 + 56));
                v214 = v116 + 56;
                v118 = 0;
                v119 = 0LL;
                v191 = 0LL;
                v120 = 0LL;
                v192 = 0LL;
                v121 = 0;
                v122 = 0;
                if ( *((int *)v116 + 10) > 0 )
                {
                  v123 = 0LL;
                  while ( 1 )
                  {
                    if ( v123 < 0 || v122 >= *((_DWORD *)v116 + 10) )
                      goto LABEL_368;
                    v124 = *((_QWORD *)v116 + 4);
                    if ( (_DWORD)v120 == v121 )
                    {
                      if ( v121 )
                      {
                        v121 = 2 * v120;
                        if ( (v120 & 0x40000000) != 0 )
                          goto LABEL_261;
                      }
                      else
                      {
                        v121 = 1;
                      }
                      if ( (unsigned __int64)v121 > 0x7FFFFFF
                        || (v125 = _o__recalloc(v119, v121, 16LL), (v119 = (volatile signed __int32 **)v125) == 0LL) )
                      {
LABEL_261:
                        v151 = 2147942414LL;
                        v152 = 502LL;
                        goto LABEL_262;
                      }
                      HIDWORD(v192) = v121;
                      v191 = (volatile signed __int32 **)v125;
                      v118 = 0;
                    }
                    v126 = &v119[2 * (int)v120];
                    if ( v126 )
                    {
                      *v126 = 0LL;
                      v126[1] = 0LL;
                      v127 = *(_QWORD *)(v124 + v123 + 8);
                      if ( v127 )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v127 + 8));
                        v121 = HIDWORD(v192);
                        LODWORD(v120) = v192;
                        v119 = v191;
                      }
                      *v126 = *(volatile signed __int32 **)(v124 + v123);
                      v126[1] = *(volatile signed __int32 **)(v124 + v123 + 8);
                    }
                    v120 = (unsigned int)(v120 + 1);
                    LODWORD(v192) = v120;
                    ++v122;
                    v123 += 16LL;
                    if ( v122 >= *((_DWORD *)v116 + 10) )
                    {
                      v117 = (struct _RTL_CRITICAL_SECTION *)(v116 + 56);
                      break;
                    }
                  }
                }
                v128 = 0;
                if ( (int)v120 <= 0 )
                {
LABEL_224:
                  if ( v119 )
                  {
                    if ( (int)v120 > 0 )
                    {
                      v132 = v119 + 1;
                      do
                      {
                        v133 = *v132;
                        if ( *v132 )
                        {
                          if ( _InterlockedExchangeAdd(v133 + 2, 0xFFFFFFFF) == 1 )
                          {
                            (**(void (__fastcall ***)(volatile signed __int32 *))v133)(v133);
                            if ( _InterlockedExchangeAdd(v133 + 3, 0xFFFFFFFF) == 1 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 8LL))(v133);
                          }
                        }
                        v132 += 2;
                        --v120;
                      }
                      while ( v120 );
                      v119 = v191;
                    }
                    free(v119);
                    v191 = 0LL;
                  }
                  v192 = 0LL;
                  if ( v117 )
                    LeaveCriticalSection(v117);
                }
                else
                {
                  v129 = v119;
                  while ( 1 )
                  {
                    if ( v128 < 0 || v128 >= (int)v120 )
                    {
                      ATL::_AtlRaiseException(0xC000008C, v118);
LABEL_370:
                      ATL::_AtlRaiseException(0xC000008C, v144);
                      __debugbreak();
                    }
                    if ( *((_BYTE *)*v129 + 20) )
                    {
                      v130 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                               &v191,
                                                               (unsigned int)v128);
                      v131 = SystemEffectChainDescriptor::Resolve(*v130, (struct SystemEffectDescriptor *)v116);
                      if ( v131 < 0 )
                        break;
                    }
                    ++v128;
                    v129 += 2;
                    if ( v128 >= (int)v120 )
                      goto LABEL_224;
                  }
                  v151 = (unsigned int)v131;
                  v152 = 508LL;
LABEL_262:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v152,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                    (const char *)v151,
                    v184);
                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v191);
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v214);
                }
                v92 = v186;
              }
              if ( v92[52] )
              {
                EnterCriticalSection((LPCRITICAL_SECTION)(v92 + 56));
                v215 = v92 + 56;
                v134 = 0LL;
                v196 = 0LL;
                v135 = 0LL;
                v197 = 0LL;
                v136 = 0;
                if ( *((int *)v92 + 10) <= 0 )
                {
LABEL_242:
                  v138 = 0;
                  if ( (int)v135 <= 0 )
                  {
LABEL_246:
                    if ( v134 )
                    {
                      if ( (int)v135 > 0 )
                      {
                        v141 = v134;
                        do
                        {
                          std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v141);
                          v141 += 16;
                          --v135;
                        }
                        while ( v135 );
                      }
                      free(v134);
                      v196 = 0LL;
                    }
                    v197 = 0LL;
                    if ( v92 != (char *)-56LL )
                      LeaveCriticalSection((LPCRITICAL_SECTION)(v92 + 56));
                    goto LABEL_253;
                  }
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v196,
                                                 v138)
                                  + 20LL) )
                    {
                      v139 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                               &v196,
                                                               v138);
                      v140 = SystemEffectChainDescriptor::Resolve(*v139, (struct SystemEffectDescriptor *)v92);
                      if ( v140 < 0 )
                        break;
                    }
                    if ( (int)++v138 >= (int)v135 )
                      goto LABEL_246;
                  }
                  v153 = (unsigned int)v140;
                  v154 = 508LL;
                }
                else
                {
                  while ( 1 )
                  {
                    v137 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v92 + 32, v136);
                    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                          &v196,
                                          v137) )
                      break;
                    if ( (signed int)++v136 >= *((_DWORD *)v92 + 10) )
                    {
                      v135 = (unsigned int)v197;
                      v134 = v196;
                      goto LABEL_242;
                    }
                  }
                  v153 = 2147942414LL;
                  v154 = 502LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v154,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)v153,
                  v184);
                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v196);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v215);
              }
LABEL_253:
              v142 = v207 + 1000;
              if ( v207[1052] )
              {
                v143 = (struct _RTL_CRITICAL_SECTION *)(v207 + 1056);
                EnterCriticalSection((LPCRITICAL_SECTION)(v207 + 1056));
                v216 = v142 + 56;
                v144 = 0;
                v145 = 0LL;
                v189 = 0LL;
                v146 = 0LL;
                v190 = 0LL;
                v147 = 0;
                v148 = 0;
                if ( *((int *)v142 + 10) > 0 )
                {
                  v149 = 0LL;
                  while ( 1 )
                  {
                    if ( v149 < 0 || v148 >= *((_DWORD *)v142 + 10) )
                      goto LABEL_370;
                    v150 = *((_QWORD *)v142 + 4);
                    if ( (_DWORD)v146 == v147 )
                    {
                      if ( v147 )
                      {
                        v147 = 2 * v146;
                        if ( (v146 & 0x40000000) != 0 )
                          goto LABEL_302;
                      }
                      else
                      {
                        v147 = 1;
                      }
                      if ( (unsigned __int64)v147 > 0x7FFFFFF
                        || (v155 = _o__recalloc(v145, v147, 16LL), (v145 = (volatile signed __int32 **)v155) == 0LL) )
                      {
LABEL_302:
                        v166 = 2147942414LL;
                        v167 = 502LL;
                        goto LABEL_303;
                      }
                      HIDWORD(v190) = v147;
                      v189 = (volatile signed __int32 **)v155;
                      v144 = 0;
                    }
                    v156 = &v145[2 * (int)v146];
                    if ( v156 )
                    {
                      *v156 = 0LL;
                      v156[1] = 0LL;
                      v157 = *(_QWORD *)(v150 + v149 + 8);
                      if ( v157 )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v157 + 8));
                        v147 = HIDWORD(v190);
                        LODWORD(v146) = v190;
                        v145 = v189;
                      }
                      *v156 = *(volatile signed __int32 **)(v150 + v149);
                      v156[1] = *(volatile signed __int32 **)(v150 + v149 + 8);
                    }
                    v146 = (unsigned int)(v146 + 1);
                    LODWORD(v190) = v146;
                    ++v148;
                    v149 += 16LL;
                    if ( v148 >= *((_DWORD *)v142 + 10) )
                    {
                      v143 = (struct _RTL_CRITICAL_SECTION *)(v142 + 56);
                      break;
                    }
                  }
                }
                v158 = 0;
                if ( (int)v146 <= 0 )
                {
LABEL_284:
                  if ( v145 )
                  {
                    if ( (int)v146 > 0 )
                    {
                      v162 = v145 + 1;
                      do
                      {
                        v163 = *v162;
                        if ( *v162 )
                        {
                          if ( _InterlockedExchangeAdd(v163 + 2, 0xFFFFFFFF) == 1 )
                          {
                            (**(void (__fastcall ***)(volatile signed __int32 *))v163)(v163);
                            if ( _InterlockedExchangeAdd(v163 + 3, 0xFFFFFFFF) == 1 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v163 + 8LL))(v163);
                          }
                        }
                        v162 += 2;
                        --v146;
                      }
                      while ( v146 );
                      v145 = v189;
                    }
                    free(v145);
                    v189 = 0LL;
                  }
                  v190 = 0LL;
                  if ( v143 )
                    LeaveCriticalSection(v143);
                }
                else
                {
                  v159 = v145;
                  while ( 1 )
                  {
                    if ( v158 < 0 || v158 >= (int)v146 )
                    {
                      ATL::_AtlRaiseException(0xC000008C, v144);
                      JUMPOUT(0x1800118F9LL);
                    }
                    if ( *((_BYTE *)*v159 + 20) )
                    {
                      v160 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                               &v189,
                                                               (unsigned int)v158);
                      v161 = SystemEffectChainDescriptor::Resolve(*v160, (struct SystemEffectDescriptor *)v142);
                      if ( v161 < 0 )
                        break;
                    }
                    ++v158;
                    v159 += 2;
                    if ( v158 >= (int)v146 )
                      goto LABEL_284;
                  }
                  v166 = (unsigned int)v161;
                  v167 = 508LL;
LABEL_303:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v167,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                    (const char *)v166,
                    v184);
                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v189);
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v216);
                }
                v92 = v186;
              }
              v110 = v201;
              v115 = (char *)v201 + 16 * a7 + 64;
              v109 = v208;
              v107 = v187;
              v108 = v230;
              v91 = v207;
LABEL_298:
              v164 = 0;
              v165 = *((_DWORD *)v115 + 2);
              if ( v165 <= 0 )
                goto LABEL_345;
              while ( *(_OWORD *)(*(_QWORD *)v115 + 16LL * v164) != *(_OWORD *)&v234 )
              {
                if ( ++v164 >= v165 )
                  goto LABEL_345;
              }
              if ( v164 == -1 )
                goto LABEL_345;
              v168 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)v188 + 8LL) + v109);
              v169 = 1;
              v170 = *((_QWORD *)v110 + 7);
              if ( v170 )
              {
                v218 = 0LL;
                v219 = 0LL;
                v220 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v170 + 40LL))(
                       v170,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v218) >= 0
                  && (_WORD)v218 == 19 )
                {
                  v169 = v219 == 0;
                }
                PropVariantClear(&v218);
                if ( !v169 && a7 != eKeywordDetectorConnector )
                {
                  v247 = v168;
                  v171 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v92, &v247) == -1;
                  goto LABEL_344;
                }
              }
              v235 = v168;
              v236 = v168;
              if ( v92[52] )
              {
                v172 = 0;
                if ( *((int *)v92 + 10) > 0 )
                {
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 v92 + 32,
                                                 v172)
                                  + 20LL) )
                    {
                      v173 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         v92 + 32,
                                         v172);
                      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                           *v173,
                                           &v236) != -1 )
                        break;
                    }
                    if ( (signed int)++v172 >= *((_DWORD *)v92 + 10) )
                      goto LABEL_335;
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)(v92 + 56));
                  v239 = v92 + 56;
                  v174 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v92 + 32, v172);
                  v175 = *(volatile signed __int32 **)(v174 + 8);
                  if ( v175 )
                  {
                    _InterlockedIncrement(v175 + 2);
                    v175 = *(volatile signed __int32 **)(v174 + 8);
                  }
                  v244 = *(SystemEffectChainDescriptor **)v174;
                  v245 = v175;
                  if ( (int)SystemEffectChainDescriptor::Resolve(v244, (struct SystemEffectDescriptor *)v92) < 0 )
                  {
                    if ( v175 )
                      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v175);
                    if ( v92 != (char *)-56LL )
                      LeaveCriticalSection((LPCRITICAL_SECTION)(v92 + 56));
LABEL_326:
                    v176 = *((_QWORD *)v92 + 2);
                    if ( !v176 )
                      goto LABEL_342;
                    v177 = 0;
                    v178 = *(_DWORD *)(v176 + 8);
                    if ( v178 <= 0 )
                      goto LABEL_342;
                    while ( *(_OWORD *)(*(_QWORD *)v176 + 16LL * v177) != v235 )
                    {
                      if ( ++v177 >= v178 )
                        goto LABEL_342;
                    }
                    if ( v177 == -1 )
LABEL_342:
                      v176 = 0LL;
                    goto LABEL_343;
                  }
                  if ( v175 )
                    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v175);
                  if ( v92 != (char *)-56LL )
                    LeaveCriticalSection((LPCRITICAL_SECTION)(v92 + 56));
                }
              }
LABEL_335:
              v179 = 0;
              if ( *((int *)v92 + 10) <= 0 )
                goto LABEL_326;
              while ( 1 )
              {
                v180 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   v92 + 32,
                                   v179);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v180, &v236) != -1 )
                  break;
                if ( (signed int)++v179 >= *((_DWORD *)v92 + 10) )
                  goto LABEL_326;
              }
              if ( v179 == -1 )
                goto LABEL_326;
              v176 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v92 + 32, v179);
LABEL_343:
              v171 = v176 == 0;
LABEL_344:
              if ( !v171 )
              {
                v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                v21 = *(struct _GUID *)(*(_QWORD *)(*(_QWORD *)v188 + 8LL) + 16 * v108);
                v22 = v21;
                goto LABEL_348;
              }
LABEL_345:
              LODWORD(v187) = ++v107;
              if ( v107 >= **(_DWORD **)v188 )
              {
                v20 = v248;
                v21 = v209;
                v22 = v210;
                goto LABEL_348;
              }
              v104 = *(_DWORD *)&v185[4];
            }
          }
        }
        else
        {
          v104 = *(_DWORD *)&v185[4];
          if ( dword_18014EEA0[*(unsigned int *)&v185[4]]
            && CEndpointCharacteristics::GetVirtualSurroundEffectMode(v201) )
          {
            *(_QWORD *)v188 = &unk_180123408;
            goto LABEL_189;
          }
        }
        *(_QWORD *)v188 = 0LL;
        v105 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                               + 88LL))(
                 g_PolicyManager,
                 v16,
                 v104,
                 a9);
        v106 = v105;
        if ( v105 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x362,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v105,
            (int)v188);
          return v106;
        }
        v104 = *(_DWORD *)&v185[4];
        goto LABEL_189;
      }
    }
LABEL_158:
    v98 = *((_QWORD *)v91 + 79);
    if ( !v98 )
      goto LABEL_174;
    v99 = 0;
    v100 = *(_DWORD *)(v98 + 8);
    if ( v100 <= 0 )
      goto LABEL_174;
    while ( *(_OWORD *)(*(_QWORD *)v98 + 16LL * v99) != *(_OWORD *)&v233 )
    {
      if ( ++v99 >= v100 )
        goto LABEL_174;
    }
    if ( v99 == -1 )
LABEL_174:
      v98 = 0LL;
    goto LABEL_175;
  }
  if ( CEndpointCharacteristics::AllowRawStreamCreation(a4, a7) )
  {
    v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v21 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v22 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    goto LABEL_349;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x88890027LL,
    v183);
  return 2290679847LL;
}
