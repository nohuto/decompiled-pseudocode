/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B8A0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000B3C0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?RemoveAll@?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAXXZ @ 0x180016C30 (-RemoveAll@-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqua.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180017318 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x180039AD4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180050660 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18005399C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180053E54 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18009586C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180095998 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180097220 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009726C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1800975B8 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x18009760C (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180097F5C (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ??$?0UIAudioProcessingObject@@@?$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcessingObject@@U?$integral_constant@D$02@wistd@@@Z @ 0x180099C8C (--$-0UIAudioProcessingObject@@@-$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_pol.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18009EC7C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?IsOutOfProcOffloadUsed@@YA_N_N@Z @ 0x1800D1CB0 (-IsOutOfProcOffloadUsed@@YA_N_N@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800EB41C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=67
__int64 __fastcall InitializeStreamAndModeDescriptors(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        struct _GUID *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        GUID *a14,
        __int64 a15,
        __int64 a16,
        char a17,
        char a18,
        _QWORD *a19,
        _QWORD *a20)
{
  unsigned int v21; // r14d
  int v22; // ebx
  __int64 v23; // r13
  _QWORD *v24; // rdi
  signed int v25; // edx
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // rdx
  _DWORD *v29; // rax
  unsigned int v30; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v31; // edi
  unsigned __int64 v32; // rsi
  __int64 v33; // r13
  volatile signed __int32 **v34; // r15
  int v35; // r14d
  __int64 k; // rax
  volatile signed __int32 **v37; // rdi
  __int64 v38; // rax
  volatile signed __int32 **v39; // rcx
  volatile signed __int32 *v40; // rax
  int v41; // ebx
  SystemEffectChainDescriptor **v42; // rax
  int v43; // eax
  volatile signed __int32 **v44; // rdi
  volatile signed __int32 *v45; // rbx
  __int64 v46; // rdi
  unsigned int v47; // ebx
  __int64 v48; // rax
  unsigned int v49; // ebx
  SystemEffectChainDescriptor **v50; // rax
  int v51; // eax
  unsigned __int64 v52; // rbx
  __int64 v53; // r13
  volatile signed __int32 **v54; // r15
  __int64 v55; // rsi
  int v56; // ebx
  int v57; // r14d
  volatile signed __int32 **v58; // rdi
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rax
  volatile signed __int32 **v62; // rcx
  volatile signed __int32 *v63; // rax
  char *v64; // r14
  int v65; // ebx
  SystemEffectChainDescriptor **v66; // rax
  int v67; // eax
  volatile signed __int32 **v68; // rdi
  volatile signed __int32 *v69; // rbx
  struct _GUID v70; // xmm6
  struct ICompositeSystemEffect *v71; // rdi
  struct SystemEffectDescriptor *v72; // r13
  volatile signed __int32 **v73; // r15
  int v74; // ebx
  int v75; // esi
  volatile signed __int32 **v76; // rdi
  __int64 v77; // rax
  volatile signed __int32 **v78; // rcx
  volatile signed __int32 *v79; // rax
  int v80; // ebx
  SystemEffectChainDescriptor **v81; // rax
  int v82; // eax
  volatile signed __int32 **v83; // rdi
  __int64 v84; // rsi
  volatile signed __int32 *v85; // rbx
  struct SystemEffectDescriptor *v86; // r13
  __int64 v87; // rsi
  unsigned int v88; // ebx
  __int64 v89; // rax
  unsigned int v90; // ebx
  SystemEffectChainDescriptor **v91; // rax
  int v92; // eax
  char *v93; // rbx
  struct SystemEffectDescriptor *v94; // r13
  volatile signed __int32 **v95; // r15
  int v96; // r14d
  int v97; // ebx
  int v98; // esi
  volatile signed __int32 **v99; // rdi
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rax
  volatile signed __int32 **v103; // rcx
  volatile signed __int32 *v104; // rax
  int v105; // ebx
  SystemEffectChainDescriptor **v106; // rax
  int v107; // eax
  volatile signed __int32 **v108; // rdi
  __int64 v109; // rsi
  volatile signed __int32 *v110; // rbx
  BOOL v111; // ebx
  __int64 v112; // rcx
  int v113; // eax
  bool v114; // zf
  int v115; // ebx
  _QWORD *v116; // rax
  __int64 v117; // rax
  volatile signed __int32 *v118; // rbx
  __int64 v119; // r11
  int v120; // ebx
  _QWORD *v121; // rax
  int v122; // ebx
  __int64 v123; // rsi
  int v124; // ecx
  __int64 v125; // rax
  volatile signed __int32 *v126; // rbx
  int v127; // ebx
  __int64 v128; // rdi
  int v129; // ecx
  __int64 v130; // rdi
  int v131; // eax
  _OWORD *v132; // rbx
  bool v133; // zf
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rcx
  int v136; // eax
  unsigned int v137; // edi
  int Lfx; // eax
  unsigned int v139; // ebx
  __int64 (__fastcall *v140)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **); // rax
  void *v141; // rbx
  unsigned __int64 v142; // rcx
  unsigned __int64 v143; // rcx
  void *v144; // rbx
  LPVOID *v145; // rsi
  void *v146; // rcx
  unsigned int (__fastcall *v147)(int *); // rax
  void *(__fastcall *v148)(CCompositeSystemEffect *__hidden, unsigned int); // rax
  __int64 v149; // rcx
  int v150; // esi
  char *v151; // rax
  __int64 v152; // rbx
  __int64 v153; // rcx
  void *v154; // rcx
  __int64 v155; // rdx
  unsigned int v156; // r13d
  char *v157; // rax
  char *v158; // rbx
  unsigned int *v159; // rdi
  __int64 v160; // rdi
  _DWORD *v161; // rax
  _DWORD *v162; // rbx
  unsigned int v163; // r8d
  unsigned int v164; // ecx
  __int64 v165; // rbx
  _DWORD *v166; // rax
  _DWORD *v167; // rsi
  unsigned int m; // r14d
  int v169; // ebx
  GUID *v170; // rcx
  struct _GUID *v171; // r8
  GUID *v172; // rdx
  int StreamEffect; // ebx
  __int64 v174; // rdx
  void *v175; // rbx
  LPVOID *v176; // rdi
  void *v177; // rcx
  void *v178; // rbx
  LPVOID *v179; // rdi
  void *v180; // rcx
  bool v181; // cl
  unsigned int v182; // esi
  __int64 v183; // rdi
  _DWORD *v184; // rax
  _DWORD *v185; // rbx
  unsigned int v186; // r8d
  unsigned int v187; // ecx
  __int64 v188; // rdx
  unsigned int *v189; // rax
  unsigned int *v190; // rbx
  struct _GUID v191; // xmm6
  char *v192; // rax
  struct _RTL_CRITICAL_SECTION *v193; // r12
  volatile signed __int32 **v194; // r13
  __int64 v195; // rsi
  int v196; // ebx
  int v197; // r15d
  struct SystemEffectDescriptor *v198; // rdx
  __int64 v199; // r14
  __int64 v200; // rdi
  __int64 v201; // rax
  volatile signed __int32 **v202; // rcx
  __int64 v203; // rax
  int v204; // ebx
  volatile signed __int32 **v205; // rdi
  struct SystemEffectDescriptor *v206; // r14
  SystemEffectChainDescriptor **v207; // rax
  int v208; // eax
  volatile signed __int32 **v209; // rdi
  volatile signed __int32 *v210; // rbx
  struct SystemEffectDescriptor *v211; // r12
  struct SystemEffectDescriptor *v212; // r15
  char *v213; // rsi
  __int64 v214; // rdi
  unsigned int v215; // ebx
  __int64 v216; // rax
  unsigned int v217; // ebx
  SystemEffectChainDescriptor **v218; // rax
  int v219; // eax
  char *v220; // rbx
  char *v221; // rax
  struct _RTL_CRITICAL_SECTION *v222; // r12
  volatile signed __int32 **v223; // r13
  __int64 v224; // rsi
  int v225; // ebx
  int v226; // r15d
  struct SystemEffectDescriptor *v227; // rdx
  __int64 v228; // r14
  __int64 v229; // rdi
  __int64 v230; // r9
  __int64 v231; // rdx
  __int64 v232; // r9
  __int64 v233; // rdx
  __int64 v234; // rax
  volatile signed __int32 **v235; // rcx
  __int64 v236; // rax
  int v237; // ebx
  volatile signed __int32 **v238; // rdi
  struct SystemEffectDescriptor *v239; // r14
  SystemEffectChainDescriptor **v240; // rax
  int v241; // eax
  volatile signed __int32 **v242; // rdi
  volatile signed __int32 *v243; // rbx
  BOOL v244; // ebx
  __int64 v245; // rcx
  int v246; // r12d
  int v247; // eax
  __int64 v248; // r9
  __int64 v249; // rdx
  bool v250; // zf
  unsigned int v251; // ebx
  _QWORD *v252; // rax
  __int64 v253; // rax
  volatile signed __int32 *v254; // rbx
  __int64 v255; // r8
  int v256; // ecx
  int v257; // edx
  unsigned int v258; // ebx
  _QWORD *v259; // rax
  BOOL v260; // ebx
  __int64 v261; // rcx
  __int64 v262; // rax
  struct _RTL_CRITICAL_SECTION *v263; // r12
  volatile signed __int32 **v264; // r13
  __int64 v265; // rsi
  int v266; // ebx
  int v267; // r15d
  struct SystemEffectDescriptor *v268; // rdx
  __int64 v269; // r14
  __int64 v270; // rdi
  __int64 v271; // rax
  volatile signed __int32 **v272; // rcx
  __int64 v273; // rax
  int v274; // ebx
  volatile signed __int32 **v275; // rdi
  struct SystemEffectDescriptor *v276; // r14
  SystemEffectChainDescriptor **v277; // rax
  int v278; // eax
  volatile signed __int32 **v279; // rdi
  volatile signed __int32 *v280; // rbx
  char *v281; // rsi
  __int64 v282; // rdi
  unsigned int v283; // ebx
  __int64 v284; // rax
  unsigned int v285; // ebx
  SystemEffectChainDescriptor **v286; // rax
  int v287; // eax
  char *v288; // rbx
  struct _RTL_CRITICAL_SECTION *v289; // r12
  volatile signed __int32 **v290; // r13
  __int64 v291; // rsi
  int v292; // ebx
  int v293; // r15d
  struct SystemEffectDescriptor *v294; // rdx
  __int64 v295; // r14
  __int64 v296; // rdi
  __int64 v297; // r9
  __int64 v298; // rdx
  __int64 v299; // r9
  __int64 v300; // rdx
  __int64 v301; // rax
  volatile signed __int32 **v302; // rcx
  __int64 v303; // rax
  int v304; // ebx
  volatile signed __int32 **v305; // rdi
  struct SystemEffectDescriptor *v306; // r14
  SystemEffectChainDescriptor **v307; // rax
  int v308; // eax
  volatile signed __int32 **v309; // rdi
  volatile signed __int32 *v310; // rbx
  int v311; // r14d
  int v312; // ecx
  __int64 v313; // rbx
  _QWORD *v314; // rax
  __int64 v315; // r9
  __int64 v316; // rdx
  __int64 v317; // rax
  volatile signed __int32 *v318; // rbx
  __int64 v319; // rdi
  int v320; // ecx
  int v321; // edx
  unsigned int v322; // ebx
  _QWORD *v323; // rax
  unsigned __int64 v324; // rcx
  _OWORD *v325; // rbx
  bool v326; // zf
  unsigned __int64 v327; // rcx
  int v328; // eax
  int v329; // edi
  int v330; // eax
  __int64 (__fastcall *v331)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **); // rax
  void *v332; // rdi
  unsigned __int64 v333; // rcx
  unsigned __int64 v334; // rcx
  void *v335; // rbx
  LPVOID *v336; // rdi
  void *v337; // rcx
  unsigned int v338; // ebx
  __int64 v339; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v340; // edi
  unsigned int v341; // r14d
  int v342; // r12d
  BOOL v343; // ebx
  __int64 v344; // rcx
  __int64 v345; // rax
  struct SystemEffectDescriptor *v346; // r15
  struct _RTL_CRITICAL_SECTION *v347; // r13
  volatile signed __int32 **v348; // r14
  unsigned int v349; // edx
  int v350; // ebx
  int v351; // edi
  int v352; // r12d
  __int64 v353; // rsi
  __int64 v354; // r15
  __int64 v355; // rax
  volatile signed __int32 **v356; // rcx
  __int64 v357; // rax
  int v358; // edi
  volatile signed __int32 **v359; // rsi
  SystemEffectChainDescriptor **v360; // rax
  int v361; // eax
  volatile signed __int32 **v362; // rdi
  __int64 v363; // rsi
  volatile signed __int32 *v364; // rbx
  struct SystemEffectDescriptor *v365; // r15
  char *v366; // rsi
  __int64 v367; // rdi
  unsigned int v368; // ebx
  __int64 v369; // rax
  unsigned int v370; // ebx
  SystemEffectChainDescriptor **v371; // rax
  int v372; // eax
  char *v373; // rbx
  struct SystemEffectDescriptor *v374; // r15
  struct _RTL_CRITICAL_SECTION *v375; // r13
  unsigned int v376; // edx
  volatile signed __int32 **v377; // r14
  int v378; // ebx
  int v379; // edi
  int v380; // r12d
  __int64 v381; // rsi
  __int64 v382; // r15
  __int64 v383; // r9
  __int64 v384; // rdx
  __int64 v385; // r9
  __int64 v386; // rdx
  __int64 v387; // rax
  volatile signed __int32 **v388; // rcx
  __int64 v389; // rax
  int v390; // edi
  volatile signed __int32 **v391; // rsi
  SystemEffectChainDescriptor **v392; // rax
  int v393; // eax
  volatile signed __int32 **v394; // rdi
  __int64 v395; // rsi
  volatile signed __int32 *v396; // rbx
  int v397; // ecx
  const struct _GUID *v398; // rdx
  int v399; // ebx
  __int64 v400; // r9
  __int64 v401; // rdx
  BOOL v402; // ebx
  __int64 v403; // rcx
  int v404; // eax
  struct SystemEffectDescriptor *v405; // rbx
  wil::details::in1diag3 *v406; // rcx
  __int64 v407; // rdx
  int v408; // edi
  struct SystemEffectDescriptor *v409; // rsi
  BOOL v410; // ebx
  __int64 v411; // rcx
  __int64 v412; // rax
  struct SystemEffectDescriptor *v413; // r15
  char *v414; // rsi
  __int64 v415; // rdi
  unsigned int v416; // ebx
  __int64 v417; // rax
  unsigned int v418; // ebx
  SystemEffectChainDescriptor **v419; // rax
  int v420; // eax
  char *v421; // rbx
  unsigned int i; // edi
  unsigned int j; // ebx
  _QWORD *v424; // rax
  __int64 v425; // rax
  _QWORD *v426; // rax
  __int64 v427; // rax
  __int64 *v428; // r10
  int v429; // edi
  __int64 *v430; // rax
  __int64 v431; // r14
  int v432; // r9d
  int v433; // r9d
  __int64 v434; // r9
  __int64 v435; // rdx
  __int64 v436; // rsi
  int v437; // ebx
  void *v438; // rax
  _OWORD *v439; // rax
  struct SystemEffectDescriptor *v440; // r15
  struct _RTL_CRITICAL_SECTION *v441; // r13
  unsigned int v442; // edx
  volatile signed __int32 **v443; // r14
  int v444; // ebx
  int v445; // edi
  int v446; // r12d
  __int64 v447; // rsi
  __int64 v448; // r15
  __int64 v449; // rax
  volatile signed __int32 **v450; // rcx
  __int64 v451; // rax
  int v452; // edi
  volatile signed __int32 **v453; // rsi
  SystemEffectChainDescriptor **v454; // rax
  int v455; // eax
  volatile signed __int32 **v456; // rdi
  __int64 v457; // rsi
  volatile signed __int32 *v458; // rbx
  struct SystemEffectDescriptor *v459; // r12
  char *v460; // rdi
  struct _RTL_CRITICAL_SECTION *v461; // r15
  char *v462; // r14
  int v463; // esi
  unsigned int v464; // ebx
  __int64 v465; // rax
  unsigned int v466; // ebx
  SystemEffectChainDescriptor **v467; // rax
  int v468; // eax
  char *v469; // rbx
  __int64 v470; // rdi
  char *v471; // r13
  struct _RTL_CRITICAL_SECTION *v472; // r15
  unsigned int v473; // edx
  volatile signed __int32 **v474; // r14
  int v475; // ebx
  int v476; // edi
  int v477; // r12d
  __int64 v478; // rsi
  __int64 v479; // r15
  __int64 v480; // r9
  __int64 v481; // rdx
  __int64 v482; // r9
  __int64 v483; // rdx
  __int64 v484; // rax
  volatile signed __int32 **v485; // rcx
  __int64 v486; // rax
  int v487; // edi
  volatile signed __int32 **v488; // rsi
  SystemEffectChainDescriptor **v489; // rax
  int v490; // eax
  volatile signed __int32 **v491; // rdi
  __int64 v492; // rsi
  volatile signed __int32 *v493; // rbx
  int v494; // ecx
  __int64 v495; // r9
  __int64 v496; // rdx
  unsigned int v497; // esi
  __int64 v498; // rdi
  char *v499; // rax
  char *v500; // rbx
  unsigned int v501; // r8d
  unsigned int v502; // ecx
  LPVOID v503; // rax
  LPVOID v504; // rax
  unsigned int v506; // esi
  __int64 v507; // rdi
  char *v508; // rax
  char *v509; // rbx
  unsigned int v510; // r8d
  unsigned int v511; // ecx
  __int64 v512; // rdx
  struct IAudioSystemEffects2 **v513; // [rsp+28h] [rbp-E0h]
  int v514; // [rsp+28h] [rbp-E0h]
  int v515; // [rsp+28h] [rbp-E0h]
  int v516; // [rsp+28h] [rbp-E0h]
  int v517; // [rsp+28h] [rbp-E0h]
  int v519; // [rsp+48h] [rbp-C0h]
  bool v521; // [rsp+58h] [rbp-B0h]
  unsigned int v522; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v523; // [rsp+60h] [rbp-A8h] BYREF
  struct SystemEffectDescriptor *v524; // [rsp+68h] [rbp-A0h]
  struct SystemEffectDescriptor *v525; // [rsp+70h] [rbp-98h]
  struct ICompositeSystemEffect *v526; // [rsp+78h] [rbp-90h] BYREF
  struct SystemEffectDescriptor *v527; // [rsp+80h] [rbp-88h]
  void *Block; // [rsp+88h] [rbp-80h] BYREF
  __int64 v529; // [rsp+90h] [rbp-78h]
  unsigned int v530; // [rsp+98h] [rbp-70h] BYREF
  int v531; // [rsp+9Ch] [rbp-6Ch]
  __int64 v532; // [rsp+A0h] [rbp-68h]
  LPVOID v533; // [rsp+A8h] [rbp-60h]
  unsigned int v534; // [rsp+B0h] [rbp-58h]
  volatile signed __int32 **v535; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v536; // [rsp+C0h] [rbp-48h]
  volatile signed __int32 **v537; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v538; // [rsp+D0h] [rbp-38h]
  volatile signed __int32 **v539; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v540; // [rsp+E0h] [rbp-28h]
  volatile signed __int32 **v541; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v542; // [rsp+F0h] [rbp-18h]
  volatile signed __int32 **v543; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v544; // [rsp+100h] [rbp-8h]
  volatile signed __int32 **v545; // [rsp+108h] [rbp+0h] BYREF
  __int64 v546; // [rsp+110h] [rbp+8h]
  _QWORD *v547; // [rsp+118h] [rbp+10h]
  LPVOID pv; // [rsp+120h] [rbp+18h] BYREF
  __int64 v549; // [rsp+128h] [rbp+20h] BYREF
  struct _GUID *v550; // [rsp+130h] [rbp+28h]
  __int64 v551; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 **v552; // [rsp+140h] [rbp+38h] BYREF
  int v553; // [rsp+148h] [rbp+40h]
  int v554; // [rsp+14Ch] [rbp+44h]
  volatile signed __int32 **v555; // [rsp+150h] [rbp+48h] BYREF
  int v556; // [rsp+158h] [rbp+50h]
  int v557; // [rsp+15Ch] [rbp+54h]
  volatile signed __int32 **v558; // [rsp+160h] [rbp+58h] BYREF
  __int64 v559; // [rsp+168h] [rbp+60h]
  volatile signed __int32 **v560; // [rsp+170h] [rbp+68h] BYREF
  __int64 v561; // [rsp+178h] [rbp+70h]
  char *v562; // [rsp+180h] [rbp+78h] BYREF
  __int64 v563; // [rsp+188h] [rbp+80h]
  volatile signed __int32 **v564; // [rsp+190h] [rbp+88h] BYREF
  int v565; // [rsp+198h] [rbp+90h]
  int v566; // [rsp+19Ch] [rbp+94h]
  unsigned __int64 v567; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v568; // [rsp+1A8h] [rbp+A0h]
  char *v569; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v570; // [rsp+1B8h] [rbp+B0h]
  volatile signed __int32 **v571; // [rsp+1C0h] [rbp+B8h] BYREF
  int v572; // [rsp+1C8h] [rbp+C0h]
  int v573; // [rsp+1CCh] [rbp+C4h]
  int v574; // [rsp+1D0h] [rbp+C8h] BYREF
  LPVOID v575; // [rsp+1D8h] [rbp+D0h]
  struct ICompositeSystemEffect *v576; // [rsp+1E0h] [rbp+D8h] BYREF
  LPVOID v577; // [rsp+1E8h] [rbp+E0h] BYREF
  struct SystemEffectDescriptor *v578; // [rsp+1F0h] [rbp+E8h]
  struct ICompositeSystemEffect *v579; // [rsp+1F8h] [rbp+F0h] BYREF
  LPVOID v580; // [rsp+200h] [rbp+F8h] BYREF
  _OWORD *v581; // [rsp+208h] [rbp+100h] BYREF
  __int64 v582; // [rsp+210h] [rbp+108h] BYREF
  __int64 v583; // [rsp+218h] [rbp+110h] BYREF
  struct ICompositeSystemEffect *v584; // [rsp+220h] [rbp+118h] BYREF
  _OWORD *v585; // [rsp+228h] [rbp+120h] BYREF
  char *v586; // [rsp+230h] [rbp+128h] BYREF
  __int64 v587; // [rsp+238h] [rbp+130h]
  char *v588; // [rsp+240h] [rbp+138h] BYREF
  __int64 v589; // [rsp+248h] [rbp+140h]
  char *v590; // [rsp+250h] [rbp+148h] BYREF
  __int64 v591; // [rsp+258h] [rbp+150h]
  char *v592; // [rsp+260h] [rbp+158h] BYREF
  __int64 v593; // [rsp+268h] [rbp+160h]
  int v594; // [rsp+270h] [rbp+168h] BYREF
  int v595; // [rsp+278h] [rbp+170h] BYREF
  int v596; // [rsp+280h] [rbp+178h] BYREF
  int v597; // [rsp+288h] [rbp+180h] BYREF
  char *v598; // [rsp+290h] [rbp+188h]
  BOOL v599; // [rsp+298h] [rbp+190h] BYREF
  int v600; // [rsp+2A0h] [rbp+198h] BYREF
  int v601; // [rsp+2A8h] [rbp+1A0h] BYREF
  int v602; // [rsp+2B0h] [rbp+1A8h] BYREF
  LPVOID v603; // [rsp+2B8h] [rbp+1B0h] BYREF
  _QWORD v604[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  __int64 v605; // [rsp+2D0h] [rbp+1C8h] BYREF
  char *v606; // [rsp+2D8h] [rbp+1D0h] BYREF
  char *v607; // [rsp+2E0h] [rbp+1D8h] BYREF
  char *v608; // [rsp+2E8h] [rbp+1E0h] BYREF
  char *v609; // [rsp+2F0h] [rbp+1E8h] BYREF
  _QWORD *v610; // [rsp+2F8h] [rbp+1F0h]
  struct _RTL_CRITICAL_SECTION *v611; // [rsp+300h] [rbp+1F8h] BYREF
  struct _RTL_CRITICAL_SECTION *v612; // [rsp+308h] [rbp+200h] BYREF
  char *v613; // [rsp+310h] [rbp+208h] BYREF
  struct _RTL_CRITICAL_SECTION *v614; // [rsp+318h] [rbp+210h] BYREF
  char *v615; // [rsp+320h] [rbp+218h] BYREF
  char *v616; // [rsp+328h] [rbp+220h] BYREF
  char *v617; // [rsp+330h] [rbp+228h] BYREF
  char *v618; // [rsp+338h] [rbp+230h] BYREF
  char *v619; // [rsp+340h] [rbp+238h] BYREF
  char *v620; // [rsp+348h] [rbp+240h] BYREF
  char *v621; // [rsp+350h] [rbp+248h] BYREF
  struct _RTL_CRITICAL_SECTION *v622; // [rsp+358h] [rbp+250h] BYREF
  __int64 v623; // [rsp+360h] [rbp+258h] BYREF
  __int64 v624; // [rsp+368h] [rbp+260h] BYREF
  LPVOID *p_pv; // [rsp+370h] [rbp+268h]
  LPVOID v626; // [rsp+378h] [rbp+270h] BYREF
  char v627; // [rsp+380h] [rbp+278h]
  LPVOID *v628; // [rsp+388h] [rbp+280h]
  LPVOID v629; // [rsp+390h] [rbp+288h] BYREF
  char v630; // [rsp+398h] [rbp+290h]
  PROPVARIANT v631; // [rsp+3A0h] [rbp+298h] BYREF
  __int64 v632; // [rsp+3A8h] [rbp+2A0h]
  __int64 v633; // [rsp+3B0h] [rbp+2A8h]
  PROPVARIANT pvar; // [rsp+3B8h] [rbp+2B0h] BYREF
  __int64 v635; // [rsp+3C0h] [rbp+2B8h]
  __int64 v636; // [rsp+3C8h] [rbp+2C0h]
  LPVOID *v637; // [rsp+3D0h] [rbp+2C8h]
  LPVOID v638; // [rsp+3D8h] [rbp+2D0h] BYREF
  char v639; // [rsp+3E0h] [rbp+2D8h]
  LPVOID *v640; // [rsp+3E8h] [rbp+2E0h]
  LPVOID v641; // [rsp+3F0h] [rbp+2E8h] BYREF
  char v642; // [rsp+3F8h] [rbp+2F0h]
  PROPVARIANT v643; // [rsp+400h] [rbp+2F8h] BYREF
  __int64 v644; // [rsp+408h] [rbp+300h]
  __int64 v645; // [rsp+410h] [rbp+308h]
  PROPVARIANT v646; // [rsp+418h] [rbp+310h] BYREF
  __int64 v647; // [rsp+420h] [rbp+318h]
  __int64 v648; // [rsp+428h] [rbp+320h]
  PROPVARIANT v649; // [rsp+430h] [rbp+328h] BYREF
  __int64 v650; // [rsp+438h] [rbp+330h]
  __int64 v651; // [rsp+440h] [rbp+338h]
  PROPVARIANT v652; // [rsp+448h] [rbp+340h] BYREF
  __int64 v653; // [rsp+450h] [rbp+348h]
  __int64 v654; // [rsp+458h] [rbp+350h]
  _OWORD *v655; // [rsp+460h] [rbp+358h] BYREF
  struct _GUID v656; // [rsp+468h] [rbp+360h] BYREF
  struct _GUID v657; // [rsp+478h] [rbp+370h] BYREF
  _OWORD *v658; // [rsp+488h] [rbp+380h] BYREF
  GUID v659; // [rsp+498h] [rbp+390h]
  __int128 v660; // [rsp+4A8h] [rbp+3A0h]
  struct _GUID v661; // [rsp+4B8h] [rbp+3B0h]
  struct _GUID v662; // [rsp+4C8h] [rbp+3C0h]
  struct _GUID v663; // [rsp+4D8h] [rbp+3D0h] BYREF
  struct _GUID v664; // [rsp+4E8h] [rbp+3E0h]
  struct _GUID v665; // [rsp+4F8h] [rbp+3F0h] BYREF
  char *v666; // [rsp+508h] [rbp+400h]
  SystemEffectChainDescriptor *v667; // [rsp+510h] [rbp+408h]
  volatile signed __int32 *v668; // [rsp+518h] [rbp+410h]
  SystemEffectChainDescriptor *v669; // [rsp+520h] [rbp+418h]
  volatile signed __int32 *v670; // [rsp+528h] [rbp+420h]
  struct _GUID v671; // [rsp+538h] [rbp+430h] BYREF
  __int64 v672; // [rsp+548h] [rbp+440h]
  char *v673; // [rsp+550h] [rbp+448h]
  struct _GUID v674; // [rsp+558h] [rbp+450h] BYREF
  SystemEffectChainDescriptor *v675; // [rsp+568h] [rbp+460h]
  volatile signed __int32 *v676; // [rsp+570h] [rbp+468h]
  struct _GUID v677; // [rsp+578h] [rbp+470h] BYREF
  SystemEffectChainDescriptor *v678; // [rsp+588h] [rbp+480h]
  volatile signed __int32 *v679; // [rsp+590h] [rbp+488h]
  struct _GUID v680; // [rsp+598h] [rbp+490h] BYREF
  struct _GUID v681; // [rsp+5A8h] [rbp+4A0h] BYREF
  struct _GUID v682; // [rsp+5B8h] [rbp+4B0h] BYREF
  struct _GUID v683; // [rsp+5C8h] [rbp+4C0h] BYREF
  CLSID pClsid; // [rsp+5D8h] [rbp+4D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+630h] [rbp+528h]

  v672 = -2LL;
  v534 = a4;
  v21 = a3;
  v22 = a2;
  v531 = a2;
  v23 = a1;
  v550 = a7;
  v610 = a19;
  v24 = a20;
  v547 = a20;
  v533 = 0LL;
  v575 = 0LL;
  v521 = 0;
  v532 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v532 + 8LL))(v532);
  if ( !a19 )
  {
    v171 = v550;
    goto LABEL_445;
  }
  if ( (v21 & 0x800000) != 0 )
  {
    if ( v22 )
    {
      v519 = -2147418113;
      v27 = 2147549183LL;
      v28 = 253LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v27,
        (int)v513);
      v30 = v519;
      goto LABEL_1092;
    }
    v29 = CoTaskMemAlloc(0xD8uLL);
    if ( !v29 )
    {
      v519 = -2147024882;
      v27 = 2147942414LL;
      v28 = 258LL;
      goto LABEL_8;
    }
    v533 = v29;
    *v29 = 0;
    v29[22] = v21;
    *((_QWORD *)v29 + 12) = 0LL;
    v29[34] = 0;
    v29[28] = 0;
    *(GUID *)&v29[4 * v29[34]++ + 50] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
    v29[1] = 1;
    goto LABEL_388;
  }
  v31 = a5;
  if ( v22 || (a5 & 0xFFFFFFFC) != 0 || a5 == eOffloadConnector )
  {
    v580 = 0LL;
    v530 = 0;
    v603 = 0LL;
    v574 = 0;
    if ( a5 != eOffloadConnector || v22 )
      goto LABEL_431;
    v576 = 0LL;
    v681 = *v550;
    v579 = 0LL;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                     (CEndpointCharacteristics *)v23,
                     &v681,
                     0,
                     eOffloadConnector,
                     &v579,
                     0LL,
                     0LL);
    if ( StreamEffect < 0 )
    {
      v174 = 436LL;
LABEL_402:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v174,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)StreamEffect,
        (int)v513);
      v30 = StreamEffect;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v576);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v579);
LABEL_440:
      if ( v603 )
        CoTaskMemFree(v603);
      if ( v580 )
        CoTaskMemFree(v580);
      goto LABEL_1092;
    }
    v682 = *v550;
    v576 = 0LL;
    StreamEffect = CEndpointCharacteristics::GetModeEffect(
                     (CEndpointCharacteristics *)v23,
                     &v682,
                     0,
                     eOffloadConnector,
                     &v576,
                     0LL,
                     0LL);
    if ( StreamEffect < 0 )
    {
      v174 = 437LL;
      goto LABEL_402;
    }
    if ( v579 )
    {
      v637 = &v580;
      v638 = 0LL;
      v639 = 1;
      (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, LPVOID *))(*(_QWORD *)v579 + 32LL))(
        v579,
        &v530,
        &v638);
      if ( v639 )
      {
        v175 = v638;
        v176 = v637;
        v177 = *v637;
        if ( v638 != *v637 )
        {
          if ( v177 )
            CoTaskMemFree(v177);
          *v176 = v175;
        }
      }
    }
    if ( v576 )
    {
      v640 = &v603;
      v641 = 0LL;
      v642 = 1;
      (*(void (__fastcall **)(struct ICompositeSystemEffect *, int *, LPVOID *))(*(_QWORD *)v576 + 32LL))(
        v576,
        &v574,
        &v641);
      if ( v642 )
      {
        v178 = v641;
        v179 = v640;
        v180 = *v640;
        if ( v641 != *v640 )
        {
          if ( v180 )
            CoTaskMemFree(v180);
          *v179 = v178;
        }
      }
    }
    v181 = v530 || v574;
    v521 = IsOutOfProcOffloadUsed(v181);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v576);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v579);
    if ( v521 )
    {
      if ( a4 )
      {
        v30 = -2147024809;
        v188 = 483LL;
        goto LABEL_439;
      }
      v182 = v530;
      v183 = 16LL * v530;
      v184 = CoTaskMemAlloc(v183 + 200);
      v185 = v184;
      if ( v184 )
      {
        v533 = v184;
        memset_0(v184, 0, v183 + 200);
        *v185 = 0;
        v185[22] = v21;
        *((_QWORD *)v185 + 12) = 0LL;
        v185[34] = 0;
        v185[28] = 0;
        v186 = 0;
        if ( v530 )
        {
          v187 = 0;
          while ( v187 <= 0x1F )
          {
            v185[28] |= 1 << v187;
            *(_OWORD *)&v185[4 * v185[34]++ + 50] = *((_OWORD *)v580 + v186);
            v187 = v185[34];
            if ( ++v186 >= v530 )
              goto LABEL_426;
          }
          v30 = -2147418113;
          v188 = 470LL;
          goto LABEL_439;
        }
LABEL_426:
        v185[1] = 0;
        if ( v185[34] > v182 )
        {
          v30 = -2147418113;
          v188 = 478LL;
LABEL_439:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v188,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v30,
            (int)v513);
          goto LABEL_440;
        }
LABEL_433:
        if ( v603 )
          CoTaskMemFree(v603);
        if ( v580 )
          CoTaskMemFree(v580);
LABEL_387:
        v24 = v547;
LABEL_388:
        v170 = (GUID *)v533;
        v171 = v550;
        *(struct _GUID *)((char *)v533 + 116) = *v550;
        *(_DWORD *)v170->Data4 = a5;
        *(_QWORD *)&v170[5].Data1 = a9;
        *(_DWORD *)v170[4].Data4 = *(unsigned __int16 *)(a9 + 16) + 18;
        *(_QWORD *)v170[1].Data4 = a11;
        *(_QWORD *)&v170[2].Data1 = a12;
        *(_DWORD *)&v170->Data4[4] = a8;
        *(_QWORD *)&v170[1].Data1 = a13;
        v172 = &GUID_00000000_0000_0000_0000_000000000000;
        if ( a14 )
          v172 = a14;
        v170[3] = *v172;
        v170[9] = *(GUID *)a15;
        v170[10] = *(GUID *)(a15 + 16);
        v170[11] = *(GUID *)(a15 + 32);
        *(_QWORD *)&v170[12].Data1 = *(_QWORD *)(a15 + 48);
        *(_QWORD *)&v170[4].Data1 = a16;
LABEL_445:
        if ( !v24 )
        {
LABEL_1087:
          if ( v610 )
          {
            v503 = v533;
            v533 = 0LL;
            *v610 = v503;
          }
          if ( v24 )
          {
            v504 = v575;
            v575 = 0LL;
            *v24 = v504;
          }
          v30 = 0;
          goto LABEL_1092;
        }
        v577 = 0LL;
        LODWORD(v523) = 0;
        v191 = *v171;
        v583 = 0LL;
        v551 = 0LL;
        v578 = (struct SystemEffectDescriptor *)(96LL * (int)a5);
        v192 = (char *)v578 + v23 + 232;
        v527 = (struct SystemEffectDescriptor *)v192;
        if ( v192[52] )
        {
          v193 = (struct _RTL_CRITICAL_SECTION *)(v192 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v192 + 56));
          v622 = v193;
          v194 = 0LL;
          v571 = 0LL;
          v195 = 0LL;
          v572 = 0;
          v196 = 0;
          v573 = 0;
          v197 = 0;
          v198 = v527;
          if ( *((int *)v527 + 10) > 0 )
          {
            v199 = 0LL;
            do
            {
              if ( v199 < 0 || v197 >= *((_DWORD *)v198 + 10) )
                goto LABEL_1125;
              v200 = *((_QWORD *)v198 + 4);
              if ( (_DWORD)v195 == v196 )
              {
                if ( v196 )
                {
                  v196 = 2 * v195;
                  if ( (v195 & 0x40000000) != 0 )
                    goto LABEL_507;
                }
                else
                {
                  v196 = 1;
                }
                if ( (unsigned __int64)v196 > 0x7FFFFFF
                  || (v201 = _o__recalloc(v194, v196, 16LL), (v194 = (volatile signed __int32 **)v201) == 0LL) )
                {
LABEL_507:
                  v230 = 2147942414LL;
                  v231 = 502LL;
                  goto LABEL_508;
                }
                v573 = v196;
                v571 = (volatile signed __int32 **)v201;
                v198 = v527;
              }
              v202 = &v194[2 * (int)v195];
              if ( v202 )
              {
                *v202 = 0LL;
                v202[1] = 0LL;
                v203 = *(_QWORD *)(v200 + v199 + 8);
                if ( v203 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v203 + 8));
                  v196 = v573;
                  LODWORD(v195) = v572;
                  v194 = v571;
                }
                *v202 = *(volatile signed __int32 **)(v200 + v199);
                v202[1] = *(volatile signed __int32 **)(v200 + v199 + 8);
              }
              v195 = (unsigned int)(v195 + 1);
              v572 = v195;
              ++v197;
              v199 += 16LL;
            }
            while ( v197 < *((_DWORD *)v198 + 10) );
          }
          v204 = 0;
          if ( (int)v195 <= 0 )
          {
LABEL_470:
            if ( v194 )
            {
              if ( (int)v195 > 0 )
              {
                v209 = v194 + 1;
                do
                {
                  v210 = *v209;
                  if ( *v209 )
                  {
                    if ( _InterlockedExchangeAdd(v210 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (**(void (__fastcall ***)(volatile signed __int32 *))v210)(v210);
                      if ( _InterlockedExchangeAdd(v210 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v210 + 8LL))(v210);
                    }
                  }
                  v209 += 2;
                  --v195;
                }
                while ( v195 );
                v194 = v571;
              }
              free(v194);
            }
            if ( v193 )
              LeaveCriticalSection(v193);
          }
          else
          {
            v205 = v194;
            v206 = v527;
            while ( 1 )
            {
              if ( v204 < 0 || v204 >= (int)v195 )
              {
                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v198);
LABEL_1127:
                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v227);
                __debugbreak();
              }
              if ( *((_BYTE *)*v205 + 20) )
              {
                v207 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         &v571,
                                                         (unsigned int)v204);
                v208 = SystemEffectChainDescriptor::Resolve(*v207, v206);
                if ( v208 < 0 )
                  break;
              }
              ++v204;
              v205 += 2;
              if ( v204 >= (int)v195 )
                goto LABEL_470;
            }
            v230 = (unsigned int)v208;
            v231 = 508LL;
LABEL_508:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v231,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v230,
              (int)v513);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v571);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v622);
          }
          v23 = a1;
        }
        v211 = v578;
        v212 = (struct SystemEffectDescriptor *)((char *)v578 + v23 + 616);
        v524 = v212;
        if ( *((_BYTE *)v212 + 52) )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
          v609 = (char *)v212 + 56;
          v213 = 0LL;
          v586 = 0LL;
          v214 = 0LL;
          v587 = 0LL;
          v215 = 0;
          if ( *((int *)v212 + 10) > 0 )
          {
            while ( 1 )
            {
              v216 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v212 + 32, v215);
              if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                    &v586,
                                    v216) )
                break;
              if ( (signed int)++v215 >= *((_DWORD *)v212 + 10) )
              {
                v214 = (unsigned int)v587;
                v213 = v586;
                goto LABEL_488;
              }
            }
            v232 = 2147942414LL;
            v233 = 502LL;
            goto LABEL_511;
          }
LABEL_488:
          v217 = 0;
          if ( (int)v214 > 0 )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           &v586,
                                           v217)
                            + 20LL) )
              {
                v218 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         &v586,
                                                         v217);
                v219 = SystemEffectChainDescriptor::Resolve(*v218, v212);
                if ( v219 < 0 )
                  break;
              }
              if ( (int)++v217 >= (int)v214 )
                goto LABEL_492;
            }
            v232 = (unsigned int)v219;
            v233 = 508LL;
LABEL_511:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v233,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v232,
              (int)v513);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v586);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v609);
            goto LABEL_499;
          }
LABEL_492:
          if ( v213 )
          {
            if ( (int)v214 > 0 )
            {
              v220 = v213;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v220);
                v220 += 16;
                --v214;
              }
              while ( v214 );
            }
            free(v213);
          }
          if ( v212 != (struct SystemEffectDescriptor *)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
        }
LABEL_499:
        v221 = (char *)v211 + v23 + 1000;
        v525 = (struct SystemEffectDescriptor *)v221;
        if ( v221[52] )
        {
          v222 = (struct _RTL_CRITICAL_SECTION *)(v221 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v221 + 56));
          v611 = v222;
          v223 = 0LL;
          v552 = 0LL;
          v224 = 0LL;
          v553 = 0;
          v225 = 0;
          v554 = 0;
          v226 = 0;
          v227 = v525;
          if ( *((int *)v525 + 10) > 0 )
          {
            v228 = 0LL;
            do
            {
              if ( v228 < 0 || v226 >= *((_DWORD *)v227 + 10) )
                goto LABEL_1127;
              v229 = *((_QWORD *)v227 + 4);
              if ( (_DWORD)v224 == v225 )
              {
                if ( v225 )
                {
                  v225 = 2 * v224;
                  if ( (v224 & 0x40000000) != 0 )
                    goto LABEL_550;
                }
                else
                {
                  v225 = 1;
                }
                if ( (unsigned __int64)v225 > 0x7FFFFFF
                  || (v234 = _o__recalloc(v223, v225, 16LL), (v223 = (volatile signed __int32 **)v234) == 0LL) )
                {
LABEL_550:
                  v248 = 2147942414LL;
                  v249 = 502LL;
                  goto LABEL_551;
                }
                v554 = v225;
                v552 = (volatile signed __int32 **)v234;
                v227 = v525;
              }
              v235 = &v223[2 * (int)v224];
              if ( v235 )
              {
                *v235 = 0LL;
                v235[1] = 0LL;
                v236 = *(_QWORD *)(v229 + v228 + 8);
                if ( v236 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v236 + 8));
                  v225 = v554;
                  LODWORD(v224) = v553;
                  v223 = v552;
                }
                *v235 = *(volatile signed __int32 **)(v229 + v228);
                v235[1] = *(volatile signed __int32 **)(v229 + v228 + 8);
              }
              v224 = (unsigned int)(v224 + 1);
              v553 = v224;
              ++v226;
              v228 += 16LL;
            }
            while ( v226 < *((_DWORD *)v227 + 10) );
          }
          v237 = 0;
          if ( (int)v224 <= 0 )
          {
LABEL_529:
            if ( v223 )
            {
              if ( (int)v224 > 0 )
              {
                v242 = v223 + 1;
                do
                {
                  v243 = *v242;
                  if ( *v242 )
                  {
                    if ( _InterlockedExchangeAdd(v243 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (**(void (__fastcall ***)(volatile signed __int32 *))v243)(v243);
                      if ( _InterlockedExchangeAdd(v243 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v243 + 8LL))(v243);
                    }
                  }
                  v242 += 2;
                  --v224;
                }
                while ( v224 );
                v223 = v552;
              }
              free(v223);
            }
            if ( v222 )
              LeaveCriticalSection(v222);
          }
          else
          {
            v238 = v223;
            v239 = v525;
            while ( 1 )
            {
              if ( v237 < 0 || v237 >= (int)v224 )
              {
                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v227);
LABEL_1129:
                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v268);
                __debugbreak();
              }
              if ( *((_BYTE *)*v238 + 20) )
              {
                v240 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         &v552,
                                                         (unsigned int)v237);
                v241 = SystemEffectChainDescriptor::Resolve(*v240, v239);
                if ( v241 < 0 )
                  break;
              }
              ++v237;
              v238 += 2;
              if ( v237 >= (int)v224 )
                goto LABEL_529;
            }
            v248 = (unsigned int)v241;
            v249 = 508LL;
LABEL_551:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v249,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)v248,
              (int)v513);
            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v552);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v611);
          }
          v23 = a1;
          v212 = v524;
        }
        if ( !*(_DWORD *)(v23 + 4LL * (int)a5 + 40) )
          goto LABEL_764;
        v244 = 1;
        v245 = *(_QWORD *)(v23 + 56);
        if ( v245 )
        {
          v643 = 0LL;
          v644 = 0LL;
          v645 = 0LL;
          if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v245 + 40LL))(
                 v245,
                 &PKEY_AudioEndpoint_Disable_SysFx,
                 &v643) >= 0
            && (_WORD)v643 == 19 )
          {
            v244 = v644 == 0;
          }
          PropVariantClear(&v643);
          v246 = a5;
          if ( !v244 && a5 != eKeywordDetectorConnector )
          {
            v247 = 0;
            goto LABEL_555;
          }
        }
        else
        {
          v246 = a5;
        }
        v247 = 1;
LABEL_555:
        v683 = v191;
        if ( !v247 )
        {
          v250 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v212, &v683) == -1;
          goto LABEL_589;
        }
        v661 = v191;
        v665 = v191;
        if ( *((_BYTE *)v212 + 52) )
        {
          v251 = 0;
          if ( *((int *)v212 + 10) > 0 )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           (char *)v212 + 32,
                                           v251)
                            + 20LL) )
              {
                v252 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (char *)v212 + 32,
                                   v251);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v252, &v665) != -1 )
                  break;
              }
              if ( (signed int)++v251 >= *((_DWORD *)v212 + 10) )
                goto LABEL_580;
            }
            EnterCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
            v666 = (char *)v212 + 56;
            v253 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v212 + 32, v251);
            v254 = *(volatile signed __int32 **)(v253 + 8);
            if ( v254 )
            {
              _InterlockedIncrement(v254 + 2);
              v254 = *(volatile signed __int32 **)(v253 + 8);
            }
            v667 = *(SystemEffectChainDescriptor **)v253;
            v668 = v254;
            if ( (int)SystemEffectChainDescriptor::Resolve(v667, v212) < 0 )
            {
              if ( v254 )
                std::_Ref_count_base::_Decref((std::_Ref_count_base *)v254);
              if ( v212 != (struct SystemEffectDescriptor *)-56LL )
                LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
              goto LABEL_570;
            }
            if ( v254 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v254);
            if ( v212 != (struct SystemEffectDescriptor *)-56LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
          }
        }
LABEL_580:
        v258 = 0;
        if ( *((int *)v212 + 10) > 0 )
        {
          while ( 1 )
          {
            v259 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (char *)v212 + 32,
                               v258);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v259, &v665) != -1 )
              break;
            if ( (signed int)++v258 >= *((_DWORD *)v212 + 10) )
              goto LABEL_570;
          }
          if ( v258 != -1 )
          {
            v255 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                (char *)v212 + 32,
                                v258);
LABEL_588:
            v250 = v255 == 0;
LABEL_589:
            if ( v250 )
              goto LABEL_764;
            v662 = v191;
            if ( !v246 )
            {
              v260 = 1;
              v261 = *(_QWORD *)(v23 + 56);
              if ( v261 )
              {
                v646 = 0LL;
                v647 = 0LL;
                v648 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v261 + 40LL))(
                       v261,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v646) >= 0
                  && (_WORD)v646 == 19 )
                {
                  v260 = v647 == 0;
                }
                PropVariantClear(&v646);
                if ( !v260 )
                {
                  v262 = v23 + 128;
                  goto LABEL_694;
                }
              }
            }
            if ( *((_BYTE *)v527 + 52) )
            {
              v263 = (struct _RTL_CRITICAL_SECTION *)((char *)v527 + 56);
              EnterCriticalSection((LPCRITICAL_SECTION)((char *)v527 + 56));
              v612 = v263;
              v264 = 0LL;
              v555 = 0LL;
              v265 = 0LL;
              v556 = 0;
              v266 = 0;
              v557 = 0;
              v267 = 0;
              v268 = v527;
              if ( *((int *)v527 + 10) > 0 )
              {
                v269 = 0LL;
                do
                {
                  if ( v269 < 0 || v267 >= *((_DWORD *)v268 + 10) )
                    goto LABEL_1129;
                  v270 = *((_QWORD *)v268 + 4);
                  if ( (_DWORD)v265 == v266 )
                  {
                    if ( v266 )
                    {
                      v266 = 2 * v265;
                      if ( (v265 & 0x40000000) != 0 )
                        goto LABEL_658;
                    }
                    else
                    {
                      v266 = 1;
                    }
                    if ( (unsigned __int64)v266 > 0x7FFFFFF
                      || (v271 = _o__recalloc(v264, v266, 16LL), (v264 = (volatile signed __int32 **)v271) == 0LL) )
                    {
LABEL_658:
                      v297 = 2147942414LL;
                      v298 = 502LL;
                      goto LABEL_659;
                    }
                    v557 = v266;
                    v555 = (volatile signed __int32 **)v271;
                    v268 = v527;
                  }
                  v272 = &v264[2 * (int)v265];
                  if ( v272 )
                  {
                    *v272 = 0LL;
                    v272[1] = 0LL;
                    v273 = *(_QWORD *)(v270 + v269 + 8);
                    if ( v273 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v273 + 8));
                      v266 = v557;
                      LODWORD(v265) = v556;
                      v264 = v555;
                    }
                    *v272 = *(volatile signed __int32 **)(v270 + v269);
                    v272[1] = *(volatile signed __int32 **)(v270 + v269 + 8);
                  }
                  v265 = (unsigned int)(v265 + 1);
                  v556 = v265;
                  ++v267;
                  v269 += 16LL;
                }
                while ( v267 < *((_DWORD *)v268 + 10) );
              }
              v274 = 0;
              if ( (int)v265 <= 0 )
              {
LABEL_621:
                if ( v264 )
                {
                  if ( (int)v265 > 0 )
                  {
                    v279 = v264 + 1;
                    do
                    {
                      v280 = *v279;
                      if ( *v279 )
                      {
                        if ( _InterlockedExchangeAdd(v280 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (**(void (__fastcall ***)(volatile signed __int32 *))v280)(v280);
                          if ( _InterlockedExchangeAdd(v280 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v280 + 8LL))(v280);
                        }
                      }
                      v279 += 2;
                      --v265;
                    }
                    while ( v265 );
                    v264 = v555;
                  }
                  free(v264);
                }
                if ( v263 )
                  LeaveCriticalSection(v263);
              }
              else
              {
                v275 = v264;
                v276 = v527;
                while ( 1 )
                {
                  if ( v274 < 0 || v274 >= (int)v265 )
                  {
                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v268);
LABEL_1131:
                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v294);
                    __debugbreak();
                  }
                  if ( *((_BYTE *)*v275 + 20) )
                  {
                    v277 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                             &v555,
                                                             (unsigned int)v274);
                    v278 = SystemEffectChainDescriptor::Resolve(*v277, v276);
                    if ( v278 < 0 )
                      break;
                  }
                  ++v274;
                  v275 += 2;
                  if ( v274 >= (int)v265 )
                    goto LABEL_621;
                }
                v297 = (unsigned int)v278;
                v298 = 508LL;
LABEL_659:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v298,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)v297,
                  (int)v513);
                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v555);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v612);
              }
              v23 = a1;
              v212 = v524;
            }
            if ( *((_BYTE *)v212 + 52) )
            {
              EnterCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
              v613 = (char *)v212 + 56;
              v281 = 0LL;
              v588 = 0LL;
              v282 = 0LL;
              v589 = 0LL;
              v283 = 0;
              if ( *((int *)v212 + 10) <= 0 )
              {
LABEL_639:
                v285 = 0;
                if ( (int)v282 <= 0 )
                {
LABEL_643:
                  if ( v281 )
                  {
                    if ( (int)v282 > 0 )
                    {
                      v288 = v281;
                      do
                      {
                        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v288);
                        v288 += 16;
                        --v282;
                      }
                      while ( v282 );
                    }
                    free(v281);
                  }
                  if ( v212 != (struct SystemEffectDescriptor *)-56LL )
                    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
                  goto LABEL_650;
                }
                while ( 1 )
                {
                  if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                               &v588,
                                               v285)
                                + 20LL) )
                  {
                    v286 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                             &v588,
                                                             v285);
                    v287 = SystemEffectChainDescriptor::Resolve(*v286, v212);
                    if ( v287 < 0 )
                      break;
                  }
                  if ( (int)++v285 >= (int)v282 )
                    goto LABEL_643;
                }
                v299 = (unsigned int)v287;
                v300 = 508LL;
              }
              else
              {
                while ( 1 )
                {
                  v284 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (char *)v212 + 32,
                           v283);
                  if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                        &v588,
                                        v284) )
                    break;
                  if ( (signed int)++v283 >= *((_DWORD *)v212 + 10) )
                  {
                    v282 = (unsigned int)v589;
                    v281 = v588;
                    goto LABEL_639;
                  }
                }
                v299 = 2147942414LL;
                v300 = 502LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v300,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)v299,
                (int)v513);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v588);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v613);
            }
LABEL_650:
            if ( *((_BYTE *)v525 + 52) )
            {
              v289 = (struct _RTL_CRITICAL_SECTION *)((char *)v525 + 56);
              EnterCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
              v614 = v289;
              v290 = 0LL;
              v564 = 0LL;
              v291 = 0LL;
              v565 = 0;
              v292 = 0;
              v566 = 0;
              v293 = 0;
              v294 = v525;
              if ( *((int *)v525 + 10) > 0 )
              {
                v295 = 0LL;
                do
                {
                  if ( v295 < 0 || v293 >= *((_DWORD *)v294 + 10) )
                    goto LABEL_1131;
                  v296 = *((_QWORD *)v294 + 4);
                  if ( (_DWORD)v291 == v292 )
                  {
                    if ( v292 )
                    {
                      v292 = 2 * v291;
                      if ( (v291 & 0x40000000) != 0 )
                        goto LABEL_705;
                    }
                    else
                    {
                      v292 = 1;
                    }
                    if ( (unsigned __int64)v292 > 0x7FFFFFF
                      || (v301 = _o__recalloc(v290, v292, 16LL), (v290 = (volatile signed __int32 **)v301) == 0LL) )
                    {
LABEL_705:
                      v315 = 2147942414LL;
                      v316 = 502LL;
                      goto LABEL_706;
                    }
                    v566 = v292;
                    v564 = (volatile signed __int32 **)v301;
                    v294 = v525;
                  }
                  v302 = &v290[2 * (int)v291];
                  if ( v302 )
                  {
                    *v302 = 0LL;
                    v302[1] = 0LL;
                    v303 = *(_QWORD *)(v296 + v295 + 8);
                    if ( v303 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v303 + 8));
                      v292 = v566;
                      LODWORD(v291) = v565;
                      v290 = v564;
                    }
                    *v302 = *(volatile signed __int32 **)(v296 + v295);
                    v302[1] = *(volatile signed __int32 **)(v296 + v295 + 8);
                  }
                  v291 = (unsigned int)(v291 + 1);
                  v565 = v291;
                  ++v293;
                  v295 += 16LL;
                }
                while ( v293 < *((_DWORD *)v294 + 10) );
              }
              v304 = 0;
              if ( (int)v291 <= 0 )
              {
LABEL_680:
                if ( v290 )
                {
                  if ( (int)v291 > 0 )
                  {
                    v309 = v290 + 1;
                    do
                    {
                      v310 = *v309;
                      if ( *v309 )
                      {
                        if ( _InterlockedExchangeAdd(v310 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (**(void (__fastcall ***)(volatile signed __int32 *))v310)(v310);
                          if ( _InterlockedExchangeAdd(v310 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v310 + 8LL))(v310);
                        }
                      }
                      v309 += 2;
                      --v291;
                    }
                    while ( v291 );
                    v290 = v564;
                  }
                  free(v290);
                }
                if ( v289 )
                  LeaveCriticalSection(v289);
              }
              else
              {
                v305 = v290;
                v306 = v525;
                while ( 1 )
                {
                  if ( v304 < 0 || v304 >= (int)v291 )
                  {
                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v294);
LABEL_1133:
                    ATL::_AtlRaiseException(0xC000008C, v349);
                    __debugbreak();
                  }
                  if ( *((_BYTE *)*v305 + 20) )
                  {
                    v307 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                             &v564,
                                                             (unsigned int)v304);
                    v308 = SystemEffectChainDescriptor::Resolve(*v307, v306);
                    if ( v308 < 0 )
                      break;
                  }
                  ++v304;
                  v305 += 2;
                  if ( v304 >= (int)v291 )
                    goto LABEL_680;
                }
                v315 = (unsigned int)v308;
                v316 = 508LL;
LABEL_706:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v316,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)v315,
                  (int)v513);
                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v564);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v614);
              }
              v23 = a1;
              v212 = v524;
            }
            v262 = v23 + 16 * ((int)a5 + 4LL);
            v246 = a5;
LABEL_694:
            v311 = 0;
            v312 = *(_DWORD *)(v262 + 8);
            if ( v312 <= 0 )
            {
LABEL_698:
              v311 = -1;
            }
            else
            {
              v26 = *(_QWORD *)&v662.Data1;
              while ( *(_OWORD *)(*(_QWORD *)v262 + 16LL * v311) != *(_OWORD *)&v662 )
              {
                if ( ++v311 >= v312 )
                  goto LABEL_698;
              }
            }
            v313 = 0LL;
            v549 = 0LL;
            v583 = 0LL;
            v551 = 0LL;
            if ( !v212 )
              goto LABEL_749;
            v581 = 0LL;
            v664 = v191;
            v663 = v191;
            if ( *((int *)v212 + 10) > 0 )
            {
              while ( 1 )
              {
                if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                             (char *)v212 + 32,
                                             (unsigned int)v313)
                              + 20LL) )
                {
                  v314 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (char *)v212 + 32,
                                     (unsigned int)v313);
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v314, &v663) != -1 )
                    break;
                }
                LODWORD(v313) = v313 + 1;
                if ( (int)v313 >= *((_DWORD *)v212 + 10) )
                  goto LABEL_724;
              }
              EnterCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
              v673 = (char *)v212 + 56;
              v317 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       (char *)v212 + 32,
                       (unsigned int)v313);
              v318 = *(volatile signed __int32 **)(v317 + 8);
              if ( v318 )
              {
                _InterlockedIncrement(v318 + 2);
                v318 = *(volatile signed __int32 **)(v317 + 8);
              }
              v669 = *(SystemEffectChainDescriptor **)v317;
              v670 = v318;
              if ( (int)SystemEffectChainDescriptor::Resolve(v669, v212) < 0 )
              {
                if ( v318 )
                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v318);
                if ( v212 != (struct SystemEffectDescriptor *)-56LL )
                  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
                goto LABEL_715;
              }
              if ( v318 )
                std::_Ref_count_base::_Decref((std::_Ref_count_base *)v318);
              if ( v212 != (struct SystemEffectDescriptor *)-56LL )
                LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v212 + 56));
            }
LABEL_724:
            v322 = 0;
            if ( *((int *)v212 + 10) > 0 )
            {
              while ( 1 )
              {
                v323 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (char *)v212 + 32,
                                   v322);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v323, &v663) != -1 )
                  break;
                if ( (signed int)++v322 >= *((_DWORD *)v212 + 10) )
                  goto LABEL_715;
              }
              if ( v322 != -1 )
              {
                v319 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                    (char *)v212 + 32,
                                    v322);
                goto LABEL_732;
              }
            }
LABEL_715:
            v319 = *((_QWORD *)v212 + 2);
            if ( !v319 )
              goto LABEL_731;
            v320 = 0;
            v321 = *(_DWORD *)(v319 + 8);
            if ( v321 <= 0 )
              goto LABEL_731;
            while ( *(_OWORD *)(*(_QWORD *)v319 + 16LL * v320) != *(_OWORD *)&v664 )
            {
              if ( ++v320 >= v321 )
                goto LABEL_731;
            }
            if ( v320 == -1 )
LABEL_731:
              v319 = 0LL;
LABEL_732:
            LODWORD(v324) = 0;
            v325 = 0LL;
            v581 = 0LL;
            if ( v319 )
            {
              v324 = *(int *)(v319 + 48);
              v326 = (_DWORD)v324 == 0;
              if ( (int)v324 <= 0 )
              {
LABEL_740:
                if ( !v326 )
                {
                  v599 = v311 != -1;
                  v658 = v325;
                  v602 = v324;
                  v601 = *(_DWORD *)(v23 + 148);
                  v600 = 2;
                  v328 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                           &v549,
                           &v600,
                           &v599,
                           &v601,
                           (unsigned int *)&v602,
                           &v658);
                  v329 = v328;
                  if ( v328 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x46C,
                      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                      (const char *)(unsigned int)v328,
                      v516);
                    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v581);
                    goto LABEL_746;
                  }
                  v671 = v191;
                  LODWORD(v513) = v246;
                  v330 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID *, _QWORD))(*(_QWORD *)v549 + 24LL))(
                           v549,
                           *(_QWORD *)(v23 + 16),
                           &v671,
                           0LL);
                  v329 = v330;
                  if ( v330 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x470,
                      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                      (const char *)(unsigned int)v330,
                      v246);
                    CoTaskMemFree(v325);
LABEL_746:
                    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v549);
                    if ( v329 < 0 )
                      goto LABEL_747;
LABEL_764:
                    if ( (a3 & 0x800000) != 0 )
                    {
                      if ( v531 )
                      {
                        v338 = -2147418113;
                        v339 = 547LL;
LABEL_1100:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v339,
                          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                          (const char *)v338,
                          (int)v513);
                        v30 = v338;
                        goto LABEL_1116;
                      }
                      goto LABEL_1080;
                    }
                    if ( v531 )
                      goto LABEL_1080;
                    v340 = a5;
                    if ( a5 && a5 != eKeywordDetectorConnector )
                    {
                      v341 = v534;
                    }
                    else
                    {
                      v341 = v534;
                      if ( v534 != 2
                        && *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
                        && a6[1] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
                      {
                        Block = 0LL;
                        v529 = 0LL;
                        v659 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                        if ( a5 == eHostProcessConnector )
                        {
                          v342 = 1;
                          v343 = 1;
                          v344 = *(_QWORD *)(v23 + 56);
                          if ( v344 )
                          {
                            v649 = 0LL;
                            v650 = 0LL;
                            v651 = 0LL;
                            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v344 + 40LL))(
                                   v344,
                                   &PKEY_AudioEndpoint_Disable_SysFx,
                                   &v649) >= 0
                              && (_WORD)v649 == 19 )
                            {
                              v343 = v650 == 0;
                            }
                            PropVariantClear(&v649);
                            if ( !v343 )
                            {
                              v345 = v23 + 128;
                              goto LABEL_873;
                            }
                          }
                        }
                        v346 = v527;
                        if ( *((_BYTE *)v527 + 52) )
                        {
                          v347 = (struct _RTL_CRITICAL_SECTION *)((char *)v527 + 56);
                          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v527 + 56));
                          v615 = (char *)v346 + 56;
                          v348 = 0LL;
                          v558 = 0LL;
                          v349 = 0;
                          v350 = 0;
                          v559 = 0LL;
                          v351 = 0;
                          v352 = 0;
                          if ( *((int *)v346 + 10) > 0 )
                          {
                            v353 = 0LL;
                            do
                            {
                              if ( v353 < 0 || v352 >= *((_DWORD *)v346 + 10) )
                                goto LABEL_1133;
                              v354 = *((_QWORD *)v346 + 4);
                              if ( v350 == v351 )
                              {
                                if ( v351 )
                                {
                                  v351 = 2 * v350;
                                  if ( (v350 & 0x40000000) != 0 )
                                    goto LABEL_839;
                                }
                                else
                                {
                                  v351 = 1;
                                }
                                if ( (unsigned __int64)v351 > 0x7FFFFFF
                                  || (v355 = _o__recalloc(v348, v351, 16LL),
                                      (v348 = (volatile signed __int32 **)v355) == 0LL) )
                                {
LABEL_839:
                                  v383 = 2147942414LL;
                                  v384 = 502LL;
                                  goto LABEL_840;
                                }
                                HIDWORD(v559) = v351;
                                v558 = (volatile signed __int32 **)v355;
                                v349 = 0;
                              }
                              v356 = &v348[2 * v350];
                              if ( v356 )
                              {
                                *v356 = 0LL;
                                v356[1] = 0LL;
                                v357 = *(_QWORD *)(v354 + v353 + 8);
                                if ( v357 )
                                {
                                  _InterlockedIncrement((volatile signed __int32 *)(v357 + 8));
                                  v351 = HIDWORD(v559);
                                  v350 = v559;
                                  v348 = v558;
                                }
                                *v356 = *(volatile signed __int32 **)(v354 + v353);
                                v356[1] = *(volatile signed __int32 **)(v354 + v353 + 8);
                              }
                              LODWORD(v559) = ++v350;
                              ++v352;
                              v353 += 16LL;
                              v346 = v527;
                            }
                            while ( v352 < *((_DWORD *)v527 + 10) );
                          }
                          v358 = 0;
                          if ( v350 <= 0 )
                          {
LABEL_804:
                            if ( v348 )
                            {
                              if ( v350 > 0 )
                              {
                                v362 = v348 + 1;
                                v363 = (unsigned int)v350;
                                do
                                {
                                  v364 = *v362;
                                  if ( *v362 && _InterlockedExchangeAdd(v364 + 2, 0xFFFFFFFF) == 1 )
                                  {
                                    (**(void (__fastcall ***)(volatile signed __int32 *))v364)(v364);
                                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v364);
                                  }
                                  v362 += 2;
                                  --v363;
                                }
                                while ( v363 );
                                v348 = v558;
                              }
                              free(v348);
                            }
                            if ( v347 )
                              LeaveCriticalSection(v347);
                          }
                          else
                          {
                            v359 = v348;
                            while ( 1 )
                            {
                              if ( v358 < 0 || v358 >= v350 )
                              {
                                ATL::_AtlRaiseException(0xC000008C, v349);
LABEL_1135:
                                ATL::_AtlRaiseException(0xC000008C, v376);
                                __debugbreak();
                              }
                              if ( *((_BYTE *)*v359 + 20) )
                              {
                                v360 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         &v558,
                                                                         (unsigned int)v358);
                                v361 = SystemEffectChainDescriptor::Resolve(*v360, v346);
                                if ( v361 < 0 )
                                  break;
                              }
                              ++v358;
                              v359 += 2;
                              if ( v358 >= v350 )
                                goto LABEL_804;
                            }
                            v383 = (unsigned int)v361;
                            v384 = 508LL;
LABEL_840:
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v384,
                              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                              (const char *)v383,
                              (int)v513);
                            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v558);
                            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v615);
                          }
                        }
                        v365 = v524;
                        if ( *((_BYTE *)v524 + 52) )
                        {
                          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v524 + 56));
                          v616 = (char *)v365 + 56;
                          v366 = 0LL;
                          v590 = 0LL;
                          v367 = 0LL;
                          v591 = 0LL;
                          v368 = 0;
                          if ( *((int *)v365 + 10) <= 0 )
                          {
LABEL_820:
                            v370 = 0;
                            if ( (int)v367 <= 0 )
                            {
LABEL_824:
                              if ( v366 )
                              {
                                if ( (int)v367 > 0 )
                                {
                                  v373 = v366;
                                  do
                                  {
                                    std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v373);
                                    v373 += 16;
                                    --v367;
                                  }
                                  while ( v367 );
                                }
                                free(v366);
                              }
                              if ( v365 != (struct SystemEffectDescriptor *)-56LL )
                                LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v365 + 56));
                              goto LABEL_831;
                            }
                            while ( 1 )
                            {
                              if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                           &v590,
                                                           v370)
                                            + 20LL) )
                              {
                                v371 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         &v590,
                                                                         v370);
                                v372 = SystemEffectChainDescriptor::Resolve(*v371, v365);
                                if ( v372 < 0 )
                                  break;
                              }
                              if ( (int)++v370 >= (int)v367 )
                                goto LABEL_824;
                            }
                            v385 = (unsigned int)v372;
                            v386 = 508LL;
                          }
                          else
                          {
                            while ( 1 )
                            {
                              v369 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (char *)v365 + 32,
                                       v368);
                              if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                                    &v590,
                                                    v369) )
                                break;
                              if ( (signed int)++v368 >= *((_DWORD *)v365 + 10) )
                              {
                                v367 = (unsigned int)v591;
                                v366 = v590;
                                goto LABEL_820;
                              }
                            }
                            v385 = 2147942414LL;
                            v386 = 502LL;
                          }
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)v386,
                            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                            (const char *)v385,
                            (int)v513);
                          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v590);
                          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v616);
                        }
LABEL_831:
                        v374 = v525;
                        if ( *((_BYTE *)v525 + 52) )
                        {
                          v375 = (struct _RTL_CRITICAL_SECTION *)((char *)v525 + 56);
                          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
                          v617 = (char *)v374 + 56;
                          v376 = 0;
                          v377 = 0LL;
                          v560 = 0LL;
                          v378 = 0;
                          v561 = 0LL;
                          v379 = 0;
                          v380 = 0;
                          if ( *((int *)v374 + 10) > 0 )
                          {
                            v381 = 0LL;
                            do
                            {
                              if ( v381 < 0 || v380 >= *((_DWORD *)v374 + 10) )
                                goto LABEL_1135;
                              v382 = *((_QWORD *)v374 + 4);
                              if ( v378 == v379 )
                              {
                                if ( v379 )
                                {
                                  v379 = 2 * v378;
                                  if ( (v378 & 0x40000000) != 0 )
                                    goto LABEL_877;
                                }
                                else
                                {
                                  v379 = 1;
                                }
                                if ( (unsigned __int64)v379 > 0x7FFFFFF
                                  || (v387 = _o__recalloc(v377, v379, 16LL),
                                      (v377 = (volatile signed __int32 **)v387) == 0LL) )
                                {
LABEL_877:
                                  v400 = 2147942414LL;
                                  v401 = 502LL;
                                  goto LABEL_878;
                                }
                                HIDWORD(v561) = v379;
                                v560 = (volatile signed __int32 **)v387;
                                v376 = 0;
                              }
                              v388 = &v377[2 * v378];
                              if ( v388 )
                              {
                                *v388 = 0LL;
                                v388[1] = 0LL;
                                v389 = *(_QWORD *)(v382 + v381 + 8);
                                if ( v389 )
                                {
                                  _InterlockedIncrement((volatile signed __int32 *)(v389 + 8));
                                  v379 = HIDWORD(v561);
                                  v378 = v561;
                                  v377 = v560;
                                }
                                *v388 = *(volatile signed __int32 **)(v382 + v381);
                                v388[1] = *(volatile signed __int32 **)(v382 + v381 + 8);
                              }
                              LODWORD(v561) = ++v378;
                              ++v380;
                              v381 += 16LL;
                              v374 = v525;
                            }
                            while ( v380 < *((_DWORD *)v525 + 10) );
                          }
                          v390 = 0;
                          if ( v378 <= 0 )
                          {
LABEL_861:
                            if ( v377 )
                            {
                              if ( v378 > 0 )
                              {
                                v394 = v377 + 1;
                                v395 = (unsigned int)v378;
                                do
                                {
                                  v396 = *v394;
                                  if ( *v394 && _InterlockedExchangeAdd(v396 + 2, 0xFFFFFFFF) == 1 )
                                  {
                                    (**(void (__fastcall ***)(volatile signed __int32 *))v396)(v396);
                                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v396);
                                  }
                                  v394 += 2;
                                  --v395;
                                }
                                while ( v395 );
                                v377 = v560;
                              }
                              free(v377);
                            }
                            if ( v375 )
                              LeaveCriticalSection(v375);
                          }
                          else
                          {
                            v391 = v377;
                            while ( 1 )
                            {
                              if ( v390 < 0 || v390 >= v378 )
                              {
                                ATL::_AtlRaiseException(0xC000008C, v376);
LABEL_1137:
                                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v398);
                                __debugbreak();
                              }
                              if ( *((_BYTE *)*v391 + 20) )
                              {
                                v392 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         &v560,
                                                                         (unsigned int)v390);
                                v393 = SystemEffectChainDescriptor::Resolve(*v392, v374);
                                if ( v393 < 0 )
                                  break;
                              }
                              ++v390;
                              v391 += 2;
                              if ( v390 >= v378 )
                                goto LABEL_861;
                            }
                            v400 = (unsigned int)v393;
                            v401 = 508LL;
LABEL_878:
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v401,
                              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                              (const char *)v400,
                              (int)v513);
                            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v560);
                            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v617);
                          }
                        }
                        v23 = a1;
                        v345 = a1 + 16 * ((int)a5 + 4LL);
                        v342 = 1;
                        v340 = a5;
LABEL_873:
                        v397 = 0;
                        LODWORD(v398) = *(_DWORD *)(v345 + 8);
                        if ( (int)v398 <= 0 )
                          goto LABEL_876;
                        while ( *(_OWORD *)(*(_QWORD *)v345 + 16LL * v397) != *(_OWORD *)&v659 )
                        {
                          if ( ++v397 >= (int)v398 )
                            goto LABEL_876;
                        }
                        if ( v397 == -1 )
                        {
LABEL_876:
                          v399 = 0;
                          goto LABEL_1060;
                        }
                        v402 = 1;
                        v403 = *(_QWORD *)(v23 + 56);
                        if ( !v403 )
                          goto LABEL_888;
                        v652 = 0LL;
                        v653 = 0LL;
                        v654 = 0LL;
                        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v403 + 40LL))(
                               v403,
                               &PKEY_AudioEndpoint_Disable_SysFx,
                               &v652) >= 0
                          && (_WORD)v652 == 19 )
                        {
                          v402 = v653 == 0;
                        }
                        PropVariantClear(&v652);
                        if ( v402 || v340 == eKeywordDetectorConnector )
LABEL_888:
                          v404 = 1;
                        else
                          v404 = 0;
                        if ( !v404 )
                        {
                          v405 = v524;
                          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, v524);
                          if ( (_DWORD)v529 != *((_DWORD *)v405 + 2) )
                          {
                            v406 = retaddr;
                            v407 = 570LL;
                            goto LABEL_892;
                          }
                          goto LABEL_893;
                        }
                        v413 = v524;
                        if ( *((_BYTE *)v524 + 52) )
                        {
                          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v524 + 56));
                          v618 = (char *)v413 + 56;
                          v414 = 0LL;
                          v592 = 0LL;
                          v415 = 0LL;
                          v593 = 0LL;
                          v416 = 0;
                          if ( *((int *)v413 + 10) > 0 )
                          {
                            while ( 1 )
                            {
                              v417 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (char *)v413 + 32,
                                       v416);
                              if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                                    &v592,
                                                    v417) )
                                break;
                              if ( (signed int)++v416 >= *((_DWORD *)v413 + 10) )
                              {
                                v415 = (unsigned int)v593;
                                v414 = v592;
                                goto LABEL_909;
                              }
                            }
                            v434 = 2147942414LL;
                            v435 = 502LL;
                            goto LABEL_936;
                          }
LABEL_909:
                          v418 = 0;
                          if ( (int)v415 > 0 )
                          {
                            while ( 1 )
                            {
                              if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                           &v592,
                                                           v418)
                                            + 20LL) )
                              {
                                v419 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         &v592,
                                                                         v418);
                                v420 = SystemEffectChainDescriptor::Resolve(*v419, v413);
                                if ( v420 < 0 )
                                  break;
                              }
                              if ( (int)++v418 >= (int)v415 )
                                goto LABEL_913;
                            }
                            v434 = (unsigned int)v420;
                            v435 = 508LL;
LABEL_936:
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v435,
                              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                              (const char *)v434,
                              (int)v513);
                            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v592);
                            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v618);
                            goto LABEL_920;
                          }
LABEL_913:
                          if ( v414 )
                          {
                            if ( (int)v415 > 0 )
                            {
                              v421 = v414;
                              do
                              {
                                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v421);
                                v421 += 16;
                                --v415;
                              }
                              while ( v415 );
                            }
                            free(v414);
                          }
                          if ( v413 != (struct SystemEffectDescriptor *)-56LL )
                            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v413 + 56));
                        }
LABEL_920:
                        for ( i = 0; (signed int)i < *((_DWORD *)v413 + 10); ++i )
                        {
                          for ( j = 0;
                                (signed int)j < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         (char *)v413 + 32,
                                                                         i)
                                                          + 8LL);
                                ++j )
                          {
                            v424 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                               (char *)v413 + 32,
                                               i);
                            v425 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v424, j);
                            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                 &Block,
                                                 v425) == -1 )
                            {
                              v426 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 (char *)v413 + 32,
                                                 i);
                              v427 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v426, j);
                              if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                                    &Block,
                                                    v427) )
                              {
                                v406 = retaddr;
                                v407 = 584LL;
                                goto LABEL_892;
                              }
                            }
                          }
                        }
                        v428 = (__int64 *)*((_QWORD *)v413 + 2);
                        if ( v428 )
                        {
                          v429 = 0;
                          if ( *((int *)v428 + 2) > 0 )
                          {
                            v430 = (__int64 *)*((_QWORD *)v413 + 2);
                            v431 = 0LL;
                            do
                            {
                              if ( v429 < 0 || v429 >= *((_DWORD *)v430 + 2) )
                              {
                                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v398);
LABEL_1139:
                                ATL::_AtlRaiseException(0xC000008C, v442);
                                __debugbreak();
                              }
                              v398 = (const struct _GUID *)(*v430 + 16LL * v429);
                              v432 = 0;
                              if ( (int)v529 <= 0 )
                                goto LABEL_940;
                              while ( !(unsigned int)IsEqualGUID((const struct _GUID *)Block + v432, v398) )
                              {
                                v432 = v433 + 1;
                                if ( v432 >= (int)v529 )
                                  goto LABEL_940;
                              }
                              if ( v433 == -1 )
                              {
LABEL_940:
                                if ( v429 >= *((_DWORD *)v428 + 2) )
                                  goto LABEL_1137;
                                v436 = *v428;
                                if ( (_DWORD)v529 == HIDWORD(v529) )
                                {
                                  if ( HIDWORD(v529) )
                                  {
                                    v437 = 2 * v529;
                                    if ( (v529 & 0x40000000) != 0 )
                                      goto LABEL_953;
                                  }
                                  else
                                  {
                                    v437 = 1;
                                  }
                                  if ( (unsigned __int64)v437 > 0x7FFFFFF
                                    || (v438 = (void *)_o__recalloc(Block, v437, 16LL)) == 0LL )
                                  {
LABEL_953:
                                    v406 = retaddr;
                                    v407 = 596LL;
LABEL_892:
                                    wil::details::in1diag3::Return_Hr(
                                      v406,
                                      (void *)v407,
                                      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                      (const char *)0x8007000ELL,
                                      (int)v513);
                                    break;
                                  }
                                  HIDWORD(v529) = v437;
                                  Block = v438;
                                }
                                v439 = (char *)Block + 16 * (int)v529;
                                if ( v439 )
                                  *v439 = *(_OWORD *)(v436 + v431);
                                LODWORD(v529) = v529 + 1;
                              }
                              ++v429;
                              v431 += 16LL;
                              v428 = (__int64 *)*((_QWORD *)v413 + 2);
                              v430 = v428;
                            }
                            while ( v429 < *((_DWORD *)v428 + 2) );
                          }
                        }
LABEL_893:
                        v408 = 0;
                        v531 = 0;
                        if ( (int)v529 > 0 )
                        {
                          v409 = 0LL;
                          v525 = 0LL;
                          while ( 1 )
                          {
                            if ( (__int64)v409 < 0 || v408 >= (int)v529 )
                              goto LABEL_1143;
                            v660 = *((_OWORD *)Block + (unsigned __int64)v409);
                            if ( a5 == eHostProcessConnector )
                            {
                              v410 = 1;
                              v411 = *(_QWORD *)(v23 + 56);
                              if ( v411 )
                              {
                                v631 = 0LL;
                                v632 = 0LL;
                                v633 = 0LL;
                                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v411 + 40LL))(
                                       v411,
                                       &PKEY_AudioEndpoint_Disable_SysFx,
                                       &v631) >= 0
                                  && (_WORD)v631 == 19 )
                                {
                                  v410 = v632 == 0;
                                }
                                PropVariantClear(&v631);
                                if ( !v410 )
                                {
                                  v412 = v23 + 128;
                                  goto LABEL_1049;
                                }
                              }
                            }
                            v440 = v527;
                            if ( *((_BYTE *)v527 + 52) )
                            {
                              v441 = (struct _RTL_CRITICAL_SECTION *)((char *)v527 + 56);
                              EnterCriticalSection((LPCRITICAL_SECTION)((char *)v527 + 56));
                              v619 = (char *)v440 + 56;
                              v442 = 0;
                              v443 = 0LL;
                              v537 = 0LL;
                              v444 = 0;
                              v538 = 0LL;
                              v445 = 0;
                              v446 = 0;
                              if ( *((int *)v440 + 10) > 0 )
                              {
                                v447 = 0LL;
                                do
                                {
                                  if ( v447 < 0 || v446 >= *((_DWORD *)v440 + 10) )
                                    goto LABEL_1139;
                                  v448 = *((_QWORD *)v440 + 4);
                                  if ( v444 == v445 )
                                  {
                                    if ( v445 )
                                    {
                                      v445 = 2 * v444;
                                      if ( (v444 & 0x40000000) != 0 )
                                        goto LABEL_1014;
                                    }
                                    else
                                    {
                                      v445 = 1;
                                    }
                                    if ( (unsigned __int64)v445 > 0x7FFFFFF
                                      || (v449 = _o__recalloc(v443, v445, 16LL),
                                          (v443 = (volatile signed __int32 **)v449) == 0LL) )
                                    {
LABEL_1014:
                                      v480 = 2147942414LL;
                                      v481 = 502LL;
                                      goto LABEL_1015;
                                    }
                                    HIDWORD(v538) = v445;
                                    v537 = (volatile signed __int32 **)v449;
                                    v442 = 0;
                                  }
                                  v450 = &v443[2 * v444];
                                  if ( v450 )
                                  {
                                    *v450 = 0LL;
                                    v450[1] = 0LL;
                                    v451 = *(_QWORD *)(v448 + v447 + 8);
                                    if ( v451 )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)(v451 + 8));
                                      v445 = HIDWORD(v538);
                                      v444 = v538;
                                      v443 = v537;
                                    }
                                    *v450 = *(volatile signed __int32 **)(v448 + v447);
                                    v450[1] = *(volatile signed __int32 **)(v448 + v447 + 8);
                                  }
                                  LODWORD(v538) = ++v444;
                                  ++v446;
                                  v447 += 16LL;
                                  v440 = v527;
                                }
                                while ( v446 < *((_DWORD *)v527 + 10) );
                              }
                              v452 = 0;
                              if ( v444 <= 0 )
                              {
LABEL_978:
                                if ( v443 )
                                {
                                  if ( v444 > 0 )
                                  {
                                    v456 = v443 + 1;
                                    v457 = (unsigned int)v444;
                                    do
                                    {
                                      v458 = *v456;
                                      if ( *v456 && _InterlockedExchangeAdd(v458 + 2, 0xFFFFFFFF) == 1 )
                                      {
                                        (**(void (__fastcall ***)(volatile signed __int32 *))v458)(v458);
                                        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v458);
                                      }
                                      v456 += 2;
                                      --v457;
                                    }
                                    while ( v457 );
                                    v443 = v537;
                                  }
                                  free(v443);
                                  v537 = 0LL;
                                }
                                v538 = 0LL;
                                if ( v441 )
                                  LeaveCriticalSection(v441);
                              }
                              else
                              {
                                v453 = v443;
                                while ( 1 )
                                {
                                  if ( v452 < 0 || v452 >= v444 )
                                  {
                                    ATL::_AtlRaiseException(0xC000008C, v442);
LABEL_1141:
                                    ATL::_AtlRaiseException(0xC000008C, v473);
                                    __debugbreak();
                                  }
                                  if ( *((_BYTE *)*v453 + 20) )
                                  {
                                    v454 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                             &v537,
                                                                             (unsigned int)v452);
                                    v455 = SystemEffectChainDescriptor::Resolve(*v454, v440);
                                    if ( v455 < 0 )
                                      break;
                                  }
                                  ++v452;
                                  v453 += 2;
                                  if ( v452 >= v444 )
                                    goto LABEL_978;
                                }
                                v480 = (unsigned int)v455;
                                v481 = 508LL;
LABEL_1015:
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)v481,
                                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                  (const char *)v480,
                                  (int)v513);
                                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v537);
                                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v619);
                              }
                              v23 = a1;
                            }
                            v459 = v578;
                            v460 = (char *)v578 + v23 + 616;
                            if ( v460[52] )
                            {
                              v461 = (struct _RTL_CRITICAL_SECTION *)(v460 + 56);
                              EnterCriticalSection((LPCRITICAL_SECTION)(v460 + 56));
                              v620 = v460 + 56;
                              v462 = 0LL;
                              v562 = 0LL;
                              v463 = 0;
                              v563 = 0LL;
                              v464 = 0;
                              if ( *((int *)v460 + 10) <= 0 )
                                goto LABEL_995;
                              do
                              {
                                v465 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                         v460 + 32,
                                         v464);
                                if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                                      &v562,
                                                      v465) )
                                {
                                  v482 = 2147942414LL;
                                  v483 = 502LL;
                                  goto LABEL_1018;
                                }
                                ++v464;
                              }
                              while ( (signed int)v464 < *((_DWORD *)v460 + 10) );
                              v463 = v563;
                              v462 = v562;
LABEL_995:
                              v466 = 0;
                              if ( v463 <= 0 )
                              {
LABEL_999:
                                if ( v462 )
                                {
                                  if ( v463 > 0 )
                                  {
                                    v469 = v462;
                                    v470 = (unsigned int)v463;
                                    do
                                    {
                                      std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v469);
                                      v469 += 16;
                                      --v470;
                                    }
                                    while ( v470 );
                                  }
                                  free(v462);
                                  v562 = 0LL;
                                }
                                v563 = 0LL;
                                if ( v461 )
                                  LeaveCriticalSection(v461);
                              }
                              else
                              {
                                while ( 1 )
                                {
                                  if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                               &v562,
                                                               v466)
                                                + 20LL) )
                                  {
                                    v467 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                             &v562,
                                                                             v466);
                                    v468 = SystemEffectChainDescriptor::Resolve(
                                             *v467,
                                             (struct SystemEffectDescriptor *)v460);
                                    if ( v468 < 0 )
                                      break;
                                  }
                                  if ( (int)++v466 >= v463 )
                                    goto LABEL_999;
                                }
                                v482 = (unsigned int)v468;
                                v483 = 508LL;
LABEL_1018:
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)v483,
                                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                  (const char *)v482,
                                  (int)v513);
                                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v562);
                                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v620);
                              }
                            }
                            v471 = (char *)v459 + v23 + 1000;
                            if ( !v471[52] )
                              goto LABEL_1048;
                            v472 = (struct _RTL_CRITICAL_SECTION *)(v471 + 56);
                            EnterCriticalSection((LPCRITICAL_SECTION)(v471 + 56));
                            v621 = v471 + 56;
                            v473 = 0;
                            v474 = 0LL;
                            v539 = 0LL;
                            v475 = 0;
                            v540 = 0LL;
                            v476 = 0;
                            v477 = 0;
                            if ( *((int *)v471 + 10) > 0 )
                            {
                              v478 = 0LL;
                              do
                              {
                                if ( v478 < 0 || v477 >= *((_DWORD *)v471 + 10) )
                                  goto LABEL_1141;
                                v479 = *((_QWORD *)v471 + 4);
                                if ( v475 == v476 )
                                {
                                  if ( v476 )
                                  {
                                    v476 = 2 * v475;
                                    if ( (v475 & 0x40000000) != 0 )
                                      goto LABEL_1053;
                                  }
                                  else
                                  {
                                    v476 = 1;
                                  }
                                  if ( (unsigned __int64)v476 > 0x7FFFFFF
                                    || (v484 = _o__recalloc(v474, v476, 16LL),
                                        (v474 = (volatile signed __int32 **)v484) == 0LL) )
                                  {
LABEL_1053:
                                    v495 = 2147942414LL;
                                    v496 = 502LL;
                                    goto LABEL_1054;
                                  }
                                  HIDWORD(v540) = v476;
                                  v539 = (volatile signed __int32 **)v484;
                                  v473 = 0;
                                }
                                v485 = &v474[2 * v475];
                                if ( v485 )
                                {
                                  *v485 = 0LL;
                                  v485[1] = 0LL;
                                  v486 = *(_QWORD *)(v479 + v478 + 8);
                                  if ( v486 )
                                  {
                                    _InterlockedIncrement((volatile signed __int32 *)(v486 + 8));
                                    v476 = HIDWORD(v540);
                                    v475 = v540;
                                    v474 = v539;
                                  }
                                  *v485 = *(volatile signed __int32 **)(v479 + v478);
                                  v485[1] = *(volatile signed __int32 **)(v479 + v478 + 8);
                                }
                                LODWORD(v540) = ++v475;
                                ++v477;
                                v478 += 16LL;
                              }
                              while ( v477 < *((_DWORD *)v471 + 10) );
                              v472 = (struct _RTL_CRITICAL_SECTION *)(v471 + 56);
                            }
                            v487 = 0;
                            if ( v475 <= 0 )
                            {
LABEL_1037:
                              if ( v474 )
                              {
                                if ( v475 > 0 )
                                {
                                  v491 = v474 + 1;
                                  v492 = (unsigned int)v475;
                                  do
                                  {
                                    v493 = *v491;
                                    if ( *v491 && _InterlockedExchangeAdd(v493 + 2, 0xFFFFFFFF) == 1 )
                                    {
                                      (**(void (__fastcall ***)(volatile signed __int32 *))v493)(v493);
                                      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v493);
                                    }
                                    v491 += 2;
                                    --v492;
                                  }
                                  while ( v492 );
                                  v474 = v539;
                                }
                                free(v474);
                                v539 = 0LL;
                              }
                              v540 = 0LL;
                              if ( v472 )
                                LeaveCriticalSection(v472);
                              goto LABEL_1048;
                            }
                            v488 = v474;
                            while ( 1 )
                            {
                              if ( v487 < 0 || v487 >= v475 )
                              {
                                ATL::_AtlRaiseException(0xC000008C, v473);
LABEL_1143:
                                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v398);
                                JUMPOUT(0x1800102D3LL);
                              }
                              if ( *((_BYTE *)*v488 + 20) )
                              {
                                v489 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                         &v539,
                                                                         (unsigned int)v487);
                                v490 = SystemEffectChainDescriptor::Resolve(
                                         *v489,
                                         (struct SystemEffectDescriptor *)v471);
                                if ( v490 < 0 )
                                  break;
                              }
                              ++v487;
                              v488 += 2;
                              if ( v487 >= v475 )
                                goto LABEL_1037;
                            }
                            v495 = (unsigned int)v490;
                            v496 = 508LL;
LABEL_1054:
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v496,
                              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                              (const char *)v495,
                              (int)v513);
                            ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v539);
                            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v621);
LABEL_1048:
                            v23 = a1;
                            v412 = a1 + 16 * ((int)a5 + 4LL);
                            v408 = v531;
                            v409 = v525;
                            v342 = 1;
LABEL_1049:
                            v494 = 0;
                            LODWORD(v398) = *(_DWORD *)(v412 + 8);
                            if ( (int)v398 <= 0 )
                              goto LABEL_1052;
                            while ( *(_OWORD *)(*(_QWORD *)v412 + 16LL * v494) != v660 )
                            {
                              if ( ++v494 >= (int)v398 )
                                goto LABEL_1052;
                            }
                            if ( v494 == -1 )
                            {
LABEL_1052:
                              v399 = 1;
                              goto LABEL_1060;
                            }
                            v531 = ++v408;
                            v409 = (struct SystemEffectDescriptor *)((char *)v409 + 1);
                            v525 = v409;
                            if ( v408 >= (int)v529 )
                            {
                              v399 = 0;
                              goto LABEL_1060;
                            }
                          }
                        }
                        v399 = 0;
LABEL_1060:
                        if ( Block )
                          free(Block);
                        if ( v399 )
                        {
                          v497 = 1;
                          if ( (unsigned int)v523 > 1 )
                            v497 = v523;
                          v498 = 16LL * v497;
                          v499 = (char *)CoTaskMemAlloc(v498 + 60);
                          v500 = v499;
                          if ( !v499 )
                          {
                            v338 = -2147024882;
                            v339 = 570LL;
                            goto LABEL_1100;
                          }
                          v575 = v499;
                          memset_0(v499, 0, v498 + 60);
                          *(_QWORD *)v500 = v534;
                          *((_DWORD *)v500 + 14) = 0;
                          v501 = 0;
                          if ( (_DWORD)v523 )
                          {
                            v502 = 0;
                            while ( v502 <= 0x1F )
                            {
                              *((_DWORD *)v500 + 8) |= 1 << v502;
                              *(_OWORD *)&v500[16 * (*((_DWORD *)v500 + 14))++ + 60] = *((_OWORD *)v577 + v501);
                              v502 = *((_DWORD *)v500 + 14);
                              if ( ++v501 >= (unsigned int)v523 )
                                goto LABEL_1070;
                            }
                            v338 = -2147418113;
                            v339 = 578LL;
                            goto LABEL_1100;
                          }
LABEL_1070:
                          *(struct _GUID *)(v500 + 36) = *v550;
                          if ( v551 )
                          {
                            (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v551)(
                              v551,
                              &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
                              &v582);
                            if ( v582 )
                              goto LABEL_1076;
                          }
                          else
                          {
                            v582 = 0LL;
                          }
                          v342 = 0;
LABEL_1076:
                          *((_DWORD *)v500 + 13) = v342;
                          if ( *((_DWORD *)v500 + 14) > v497 )
                          {
                            v30 = -2147418113;
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x24D,
                              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                              (const char *)0x8000FFFFLL,
                              (int)v513);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v582);
                            goto LABEL_1116;
                          }
                          *((_QWORD *)v500 + 2) = a10;
                          *((_DWORD *)v500 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
                          if ( v582 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v582 + 16LL))(v582);
                          goto LABEL_1080;
                        }
                        goto LABEL_1080;
                      }
                    }
                    if ( v521 )
                    {
                      v506 = 1;
                      if ( (unsigned int)v523 > 1 )
                        v506 = v523;
                      v507 = 16LL * v506;
                      v508 = (char *)CoTaskMemAlloc(v507 + 60);
                      v509 = v508;
                      if ( v508 )
                      {
                        v575 = v508;
                        memset_0(v508, 0, v507 + 60);
                        *(_DWORD *)v509 = v341;
                        *((_DWORD *)v509 + 1) = 0;
                        *((_DWORD *)v509 + 14) = 0;
                        v510 = 0;
                        if ( !(_DWORD)v523 )
                        {
LABEL_1110:
                          *(struct _GUID *)(v509 + 36) = *v550;
                          wil::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>(
                            v604,
                            v551);
                          *((_DWORD *)v509 + 13) = v604[0] != 0LL;
                          if ( *((_DWORD *)v509 + 14) > v506 )
                          {
                            v30 = -2147418113;
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x26E,
                              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                              (const char *)0x8000FFFFLL,
                              (int)v513);
                            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v604);
                            goto LABEL_1116;
                          }
                          *((_QWORD *)v509 + 2) = a10;
                          *((_DWORD *)v509 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
                          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v604);
                          goto LABEL_1080;
                        }
                        v511 = 0;
                        while ( v511 <= 0x1F )
                        {
                          *((_DWORD *)v509 + 8) |= 1 << v511;
                          *(_OWORD *)&v509[16 * (*((_DWORD *)v509 + 14))++ + 60] = *((_OWORD *)v577 + v510);
                          v511 = *((_DWORD *)v509 + 14);
                          if ( ++v510 >= (unsigned int)v523 )
                            goto LABEL_1110;
                        }
                        v30 = -2147418113;
                        v512 = 611LL;
                      }
                      else
                      {
                        v30 = -2147024882;
                        v512 = 602LL;
                      }
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v512,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)v30,
                        (int)v513);
                      goto LABEL_1116;
                    }
LABEL_1080:
                    if ( v551 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v551 + 16LL))(v551);
                    if ( v577 )
                      CoTaskMemFree(v577);
                    if ( v583 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v583 + 16LL))(v583);
                    v24 = v547;
                    goto LABEL_1087;
                  }
                }
                CoTaskMemFree(v325);
                v313 = v549;
LABEL_749:
                v583 = v313;
                if ( v313 )
                {
                  v628 = &v577;
                  v629 = 0LL;
                  v630 = 1;
                  v331 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **))(*(_QWORD *)v313 + 32LL);
                  if ( v331 == CCompositeSystemEffect::GetClsids )
                  {
                    LODWORD(v523) = 0;
                    v629 = 0LL;
                    if ( *(int *)(v313 + 64) > 0 )
                    {
                      v332 = 0LL;
                      v333 = *(int *)(v313 + 64);
                      if ( 0xFFFFFFFFFFFFFFFFuLL / v333 < 0x10 )
                        goto LABEL_757;
                      v334 = 16 * v333;
                      if ( v334 <= 0x7FFFFFFF )
                        v332 = CoTaskMemAlloc((unsigned int)v334);
                      if ( v332 )
                      {
                        memcpy_0(v332, *(const void **)(v313 + 56), 16LL * *(int *)(v313 + 64));
                        v629 = v332;
                        LODWORD(v523) = *(_DWORD *)(v313 + 64);
                        CoTaskMemFree(0LL);
                      }
                      else
                      {
LABEL_757:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x2D2,
                          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                          (const char *)0x8007000ELL,
                          (int)v513);
                        CoTaskMemFree(v332);
                      }
                    }
                  }
                  else
                  {
                    ((void (__fastcall *)(__int64, __int64 *, LPVOID *, __int64))v331)(v313, &v523, &v629, v26);
                  }
                  if ( v630 )
                  {
                    v335 = v629;
                    v336 = v628;
                    v337 = *v628;
                    if ( v629 != *v628 )
                    {
                      if ( v337 )
                        CoTaskMemFree(v337);
                      *v336 = v335;
                    }
                  }
                }
                goto LABEL_764;
              }
              if ( 0xFFFFFFFFFFFFFFFFuLL / v324 < 0x10 )
                goto LABEL_743;
              v327 = 16 * v324;
              if ( v327 <= 0x7FFFFFFF )
                v325 = CoTaskMemAlloc((unsigned int)v327);
              if ( !v325 )
              {
LABEL_743:
                v329 = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x272,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)0x8007000ELL,
                  (int)v513);
                CoTaskMemFree(v325);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x462,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)0x8007000ELL,
                  v517);
                ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v581);
                ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v549);
LABEL_747:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x219,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v329,
                  (int)v513);
                v30 = v329;
LABEL_1116:
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v551);
                if ( v577 )
                  CoTaskMemFree(v577);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v583);
                goto LABEL_1092;
              }
              memcpy_0(v325, *(const void **)(v319 + 40), 16LL * *(int *)(v319 + 48));
              v581 = v325;
              CoTaskMemFree(0LL);
              LODWORD(v324) = *(_DWORD *)(v319 + 48);
            }
            v326 = (_DWORD)v324 == 0;
            goto LABEL_740;
          }
        }
LABEL_570:
        v255 = *((_QWORD *)v212 + 2);
        if ( !v255 )
          goto LABEL_587;
        v256 = 0;
        v257 = *(_DWORD *)(v255 + 8);
        if ( v257 <= 0 )
          goto LABEL_587;
        v26 = *(_QWORD *)v661.Data4;
        while ( *(_OWORD *)(*(_QWORD *)v255 + 16LL * v256) != *(_OWORD *)&v661 )
        {
          if ( ++v256 >= v257 )
            goto LABEL_587;
        }
        if ( v256 == -1 )
LABEL_587:
          v255 = 0LL;
        goto LABEL_588;
      }
      v188 = 459LL;
    }
    else
    {
LABEL_431:
      v189 = (unsigned int *)CoTaskMemAlloc(0xD8uLL);
      v190 = v189;
      if ( v189 )
      {
        v533 = v189;
        memset_0(v189, 0, 0xD8uLL);
        *v190 = a4;
        v190[22] = v21;
        *((_QWORD *)v190 + 12) = 0LL;
        v190[34] = 0;
        v190[1] = 0;
        goto LABEL_433;
      }
      v188 = 496LL;
    }
    v30 = -2147024882;
    goto LABEL_439;
  }
  v32 = 0LL;
  pv = 0LL;
  v522 = 0;
  if ( a5 == eLoopbackConnector )
    goto LABEL_347;
  v526 = 0LL;
  v33 = 96LL * (int)a5 + v23;
  v525 = (struct SystemEffectDescriptor *)(v33 + 232);
  if ( !*(_BYTE *)(v33 + 284) )
    goto LABEL_52;
  EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 288));
  v623 = v33 + 288;
  v34 = 0LL;
  v535 = 0LL;
  v536 = 0LL;
  v35 = 0;
  for ( k = v33 + 232; v35 < *(_DWORD *)(v33 + 272); k = v33 + 232 )
  {
    if ( v35 < 0 || v35 >= *(_DWORD *)(k + 40) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v37 = (volatile signed __int32 **)(*(_QWORD *)(k + 32) + 16LL * v35);
    if ( (_DWORD)v32 == v22 )
    {
      if ( v22 )
      {
        v22 = 2 * v32;
        if ( (v32 & 0x40000000) != 0 )
          goto LABEL_46;
      }
      else
      {
        v22 = 1;
      }
      if ( (unsigned __int64)v22 > 0x7FFFFFF
        || (v38 = _o__recalloc(v34, v22, 16LL), (v34 = (volatile signed __int32 **)v38) == 0LL) )
      {
LABEL_46:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F6,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          (int)v513);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v535);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v623);
        v32 = 0LL;
        goto LABEL_52;
      }
      HIDWORD(v536) = v22;
      v535 = (volatile signed __int32 **)v38;
    }
    v39 = &v34[2 * (int)v32];
    if ( v39 )
    {
      *v39 = 0LL;
      v39[1] = 0LL;
      v40 = v37[1];
      if ( v40 )
      {
        _InterlockedIncrement(v40 + 2);
        v22 = HIDWORD(v536);
        LODWORD(v32) = v536;
        v34 = v535;
      }
      *v39 = *v37;
      v39[1] = v37[1];
    }
    LODWORD(v32) = v32 + 1;
    LODWORD(v536) = v32;
    ++v35;
  }
  v41 = 0;
  if ( (int)v32 <= 0 )
  {
LABEL_36:
    if ( v34 )
    {
      if ( (int)v32 > 0 )
      {
        v44 = v34 + 1;
        v32 = (unsigned int)v32;
        do
        {
          v45 = *v44;
          if ( *v44 )
          {
            if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
              if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
            }
          }
          v44 += 2;
          --v32;
        }
        while ( v32 );
        v34 = v535;
      }
      free(v34);
      v32 = 0LL;
      v535 = 0LL;
    }
    else
    {
      v32 = 0LL;
    }
    v536 = 0LL;
    if ( v33 != -288 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v33 + 288));
  }
  else
  {
    while ( 1 )
    {
      if ( v41 < 0 || v41 >= (int)v32 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        __debugbreak();
      }
      if ( *((_BYTE *)v34[2 * v41] + 20) )
      {
        v42 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                &v535,
                                                (unsigned int)v41);
        v43 = SystemEffectChainDescriptor::Resolve(*v42, (struct SystemEffectDescriptor *)(v33 + 232));
        if ( v43 < 0 )
          break;
      }
      if ( ++v41 >= (int)v32 )
        goto LABEL_36;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v43,
      (int)v513);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v535);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v623);
    v32 = 0LL;
  }
LABEL_52:
  v578 = (struct SystemEffectDescriptor *)(v33 + 616);
  if ( *(_BYTE *)(v33 + 668) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 672));
    v624 = v33 + 672;
    v567 = 0LL;
    v46 = 0LL;
    v568 = 0LL;
    v47 = 0;
    if ( *(int *)(v33 + 656) > 0 )
    {
      while ( 1 )
      {
        v48 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v33 + 648, v47);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v567,
                              v48) )
          break;
        if ( (signed int)++v47 >= *(_DWORD *)(v33 + 656) )
        {
          v46 = (unsigned int)v568;
          v32 = v567;
          goto LABEL_57;
        }
      }
      v59 = 2147942414LL;
      v60 = 502LL;
      goto LABEL_76;
    }
LABEL_57:
    v49 = 0;
    if ( (int)v46 > 0 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v567, v49)
                      + 20LL) )
        {
          v50 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v567,
                                                  v49);
          v51 = SystemEffectChainDescriptor::Resolve(*v50, (struct SystemEffectDescriptor *)(v33 + 616));
          if ( v51 < 0 )
            break;
        }
        if ( (int)++v49 >= (int)v46 )
          goto LABEL_61;
      }
      v59 = (unsigned int)v51;
      v60 = 508LL;
LABEL_76:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v60,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v59,
        (int)v513);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v567);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v624);
      goto LABEL_68;
    }
LABEL_61:
    if ( v32 )
    {
      if ( (int)v46 > 0 )
      {
        v52 = v32;
        do
        {
          std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v52);
          v52 += 16LL;
          --v46;
        }
        while ( v46 );
      }
      free((void *)v32);
      v567 = 0LL;
    }
    v568 = 0LL;
    if ( v33 != -672 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v33 + 672));
  }
LABEL_68:
  v53 = v33 + 1000;
  v527 = (struct SystemEffectDescriptor *)v53;
  if ( !*(_BYTE *)(v53 + 52) )
    goto LABEL_107;
  EnterCriticalSection((LPCRITICAL_SECTION)(v53 + 56));
  v605 = v53 + 56;
  v54 = 0LL;
  v545 = 0LL;
  v55 = 0LL;
  v546 = 0LL;
  v56 = 0;
  v57 = 0;
  if ( *(int *)(v53 + 40) <= 0 )
  {
LABEL_88:
    v64 = 0LL;
    v65 = 0;
    if ( (int)v55 <= 0 )
    {
LABEL_94:
      if ( v54 )
      {
        if ( (int)v55 > 0 )
        {
          v68 = v54 + 1;
          do
          {
            v69 = *v68;
            if ( *v68 )
            {
              if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v69)(v69);
                if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
              }
            }
            v68 += 2;
            --v55;
          }
          while ( v55 );
          v54 = v545;
        }
        free(v54);
        v545 = 0LL;
      }
      v546 = 0LL;
      if ( v53 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v53 + 56));
    }
    else
    {
      while ( 1 )
      {
        if ( v65 < 0 || v65 >= (int)v55 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          __debugbreak();
        }
        if ( *((_BYTE *)v54[2 * v65] + 20) )
        {
          v66 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v545,
                                                  (unsigned int)v65);
          v67 = SystemEffectChainDescriptor::Resolve(*v66, (struct SystemEffectDescriptor *)v53);
          if ( v67 < 0 )
            break;
        }
        if ( ++v65 >= (int)v55 )
          goto LABEL_94;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v67,
        (int)v513);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v545);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v605);
    }
    goto LABEL_108;
  }
  while ( 1 )
  {
    if ( v57 < 0 || v57 >= *(_DWORD *)(v53 + 40) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v58 = (volatile signed __int32 **)(*(_QWORD *)(v53 + 32) + 16LL * v57);
    if ( (_DWORD)v55 != v56 )
      goto LABEL_83;
    if ( v56 )
    {
      v56 = 2 * v55;
      if ( (v55 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v56 = 1;
    }
    if ( (unsigned __int64)v56 > 0x7FFFFFF )
      break;
    v61 = _o__recalloc(v54, v56, 16LL);
    v54 = (volatile signed __int32 **)v61;
    if ( !v61 )
      break;
    HIDWORD(v546) = v56;
    v545 = (volatile signed __int32 **)v61;
LABEL_83:
    v62 = &v54[2 * (int)v55];
    if ( v62 )
    {
      *v62 = 0LL;
      v62[1] = 0LL;
      v63 = v58[1];
      if ( v63 )
      {
        _InterlockedIncrement(v63 + 2);
        v56 = HIDWORD(v546);
        LODWORD(v55) = v546;
        v54 = v545;
      }
      *v62 = *v58;
      v62[1] = v58[1];
    }
    v55 = (unsigned int)(v55 + 1);
    LODWORD(v546) = v55;
    if ( ++v57 >= *(_DWORD *)(v53 + 40) )
      goto LABEL_88;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F6,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    (int)v513);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v545);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v605);
LABEL_107:
  v64 = 0LL;
LABEL_108:
  v524 = (struct SystemEffectDescriptor *)(a1 + 4 * ((int)a5 + 10LL));
  v526 = 0LL;
  if ( !*(_DWORD *)v524 )
  {
    Lfx = CEndpointCharacteristics::GetLfx((CEndpointCharacteristics *)a1, a5, &v526, 0LL, v513);
    v139 = Lfx;
    if ( Lfx < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)Lfx,
        (int)v513);
      v30 = v139;
      goto LABEL_307;
    }
    v71 = v526;
    goto LABEL_309;
  }
  v70 = *v550;
  v71 = 0LL;
  v72 = v525;
  if ( !*((_BYTE *)v525 + 52) )
    goto LABEL_151;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
  v606 = (char *)v525 + 56;
  v73 = 0LL;
  v543 = 0LL;
  v544 = 0LL;
  v74 = 0;
  v75 = 0;
  if ( *((int *)v525 + 10) > 0 )
  {
    while ( 1 )
    {
      if ( v75 < 0 || v75 >= *((_DWORD *)v72 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        __debugbreak();
      }
      v76 = (volatile signed __int32 **)(*((_QWORD *)v72 + 4) + 16LL * v75);
      if ( (_DWORD)v64 == v74 )
      {
        if ( v74 )
        {
          v74 = 2 * (_DWORD)v64;
          if ( ((unsigned int)v64 & 0x40000000) != 0 )
            goto LABEL_145;
        }
        else
        {
          v74 = 1;
        }
        if ( (unsigned __int64)v74 > 0x7FFFFFF
          || (v77 = _o__recalloc(v73, v74, 16LL), (v73 = (volatile signed __int32 **)v77) == 0LL) )
        {
LABEL_145:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)v513);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v543);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v606);
          v71 = v526;
          v64 = 0LL;
          goto LABEL_151;
        }
        HIDWORD(v544) = v74;
        v543 = (volatile signed __int32 **)v77;
      }
      v78 = &v73[2 * (int)v64];
      if ( v78 )
      {
        *v78 = 0LL;
        v78[1] = 0LL;
        v79 = v76[1];
        if ( v79 )
        {
          _InterlockedIncrement(v79 + 2);
          v74 = HIDWORD(v544);
          LODWORD(v64) = v544;
          v73 = v543;
        }
        *v78 = *v76;
        v78[1] = v76[1];
      }
      LODWORD(v64) = (_DWORD)v64 + 1;
      LODWORD(v544) = (_DWORD)v64;
      if ( ++v75 >= *((_DWORD *)v72 + 10) )
      {
        v71 = v526;
        break;
      }
    }
  }
  v80 = 0;
  if ( (int)v64 <= 0 )
  {
LABEL_135:
    if ( v73 )
    {
      if ( (int)v64 > 0 )
      {
        v83 = v73 + 1;
        v84 = (unsigned int)v64;
        do
        {
          v85 = *v83;
          if ( *v83 )
          {
            if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v85)(v85);
              if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
            }
          }
          v83 += 2;
          --v84;
        }
        while ( v84 );
        v71 = v526;
        v73 = v543;
      }
      free(v73);
      v64 = 0LL;
      v543 = 0LL;
    }
    else
    {
      v64 = 0LL;
    }
    v544 = 0LL;
    if ( v72 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v72 + 56));
  }
  else
  {
    while ( 1 )
    {
      if ( v80 < 0 || v80 >= (int)v64 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        __debugbreak();
      }
      if ( *((_BYTE *)v73[2 * v80] + 20) )
      {
        v81 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                &v543,
                                                (unsigned int)v80);
        v82 = SystemEffectChainDescriptor::Resolve(*v81, v72);
        if ( v82 < 0 )
          break;
      }
      if ( ++v80 >= (int)v64 )
        goto LABEL_135;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v82,
      (int)v513);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v543);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v606);
    v64 = 0LL;
  }
LABEL_151:
  v86 = v578;
  if ( *((_BYTE *)v578 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v578 + 56));
    v607 = (char *)v86 + 56;
    v569 = 0LL;
    v87 = 0LL;
    v570 = 0LL;
    v88 = 0;
    if ( *((int *)v86 + 10) <= 0 )
    {
LABEL_156:
      v90 = 0;
      if ( (int)v87 > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       &v569,
                                       v90)
                        + 20LL) )
          {
            v91 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    &v569,
                                                    v90);
            v92 = SystemEffectChainDescriptor::Resolve(*v91, v86);
            if ( v92 < 0 )
              break;
          }
          if ( (int)++v90 >= (int)v87 )
            goto LABEL_160;
        }
        v100 = (unsigned int)v92;
        v101 = 508LL;
        goto LABEL_175;
      }
LABEL_160:
      if ( v64 )
      {
        if ( (int)v87 > 0 )
        {
          v93 = v64;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v93);
            v93 += 16;
            --v87;
          }
          while ( v87 );
        }
        free(v64);
        v569 = 0LL;
      }
      v570 = 0LL;
      if ( v86 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v86 + 56));
    }
    else
    {
      while ( 1 )
      {
        v89 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((char *)v86 + 32, v88);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v569,
                              v89) )
          break;
        if ( (signed int)++v88 >= *((_DWORD *)v86 + 10) )
        {
          v87 = (unsigned int)v570;
          v64 = v569;
          goto LABEL_156;
        }
      }
      v100 = 2147942414LL;
      v101 = 502LL;
LABEL_175:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v101,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v100,
        (int)v513);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v569);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v607);
    }
  }
  v94 = v527;
  if ( !*((_BYTE *)v527 + 52) )
    goto LABEL_206;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v527 + 56));
  v608 = (char *)v527 + 56;
  v95 = 0LL;
  v541 = 0LL;
  v96 = 0;
  v542 = 0LL;
  v97 = 0;
  v98 = 0;
  if ( *((int *)v527 + 10) > 0 )
  {
    while ( 1 )
    {
      if ( v98 < 0 || v98 >= *((_DWORD *)v94 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        __debugbreak();
      }
      v99 = (volatile signed __int32 **)(*((_QWORD *)v94 + 4) + 16LL * v98);
      if ( v96 == v97 )
      {
        if ( v97 )
        {
          v97 = 2 * v96;
          if ( (v96 & 0x40000000) != 0 )
            goto LABEL_214;
        }
        else
        {
          v97 = 1;
        }
        if ( (unsigned __int64)v97 > 0x7FFFFFF
          || (v102 = _o__recalloc(v95, v97, 16LL), (v95 = (volatile signed __int32 **)v102) == 0LL) )
        {
LABEL_214:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)v513);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v541);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v608);
          v71 = v526;
          goto LABEL_206;
        }
        HIDWORD(v542) = v97;
        v541 = (volatile signed __int32 **)v102;
      }
      v103 = &v95[2 * v96];
      if ( v103 )
      {
        *v103 = 0LL;
        v103[1] = 0LL;
        v104 = v99[1];
        if ( v104 )
        {
          _InterlockedIncrement(v104 + 2);
          v97 = HIDWORD(v542);
          v96 = v542;
          v95 = v541;
        }
        *v103 = *v99;
        v103[1] = v99[1];
      }
      LODWORD(v542) = ++v96;
      if ( ++v98 >= *((_DWORD *)v94 + 10) )
      {
        v71 = v526;
        break;
      }
    }
  }
  v105 = 0;
  if ( v96 <= 0 )
  {
LABEL_194:
    if ( v95 )
    {
      if ( v96 > 0 )
      {
        v108 = v95 + 1;
        v109 = (unsigned int)v96;
        do
        {
          v110 = *v108;
          if ( *v108 )
          {
            if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v110)(v110);
              if ( _InterlockedExchangeAdd(v110 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v110 + 8LL))(v110);
            }
          }
          v108 += 2;
          --v109;
        }
        while ( v109 );
        v71 = v526;
        v95 = v541;
      }
      free(v95);
      v541 = 0LL;
    }
    v542 = 0LL;
    if ( v94 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v94 + 56));
  }
  else
  {
    while ( 1 )
    {
      if ( v105 < 0 || v105 >= v96 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        __debugbreak();
      }
      if ( *((_BYTE *)v95[2 * v105] + 20) )
      {
        v106 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v541,
                                                 (unsigned int)v105);
        v107 = SystemEffectChainDescriptor::Resolve(*v106, v94);
        if ( v107 < 0 )
          break;
      }
      if ( ++v105 >= v96 )
        goto LABEL_194;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v107,
      (int)v513);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v541);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v608);
  }
LABEL_206:
  if ( !*(_DWORD *)v524 )
    goto LABEL_326;
  v111 = 1;
  v112 = *(_QWORD *)(a1 + 56);
  if ( !v112 )
    goto LABEL_217;
  pvar = 0LL;
  v635 = 0LL;
  v636 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v112 + 40LL))(
         v112,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v111 = v635 == 0;
  }
  PropVariantClear(&pvar);
  if ( v111 || a5 == eKeywordDetectorConnector )
LABEL_217:
    v113 = 1;
  else
    v113 = 0;
  v674 = v70;
  if ( !v113 )
  {
    v114 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v525, &v674) == -1;
    goto LABEL_239;
  }
  v677 = v70;
  v656 = v70;
  if ( *((_BYTE *)v525 + 52) )
  {
    v115 = 0;
    if ( *((int *)v525 + 10) > 0 )
    {
      while ( 1 )
      {
        if ( v115 < 0 || v115 >= *((_DWORD *)v525 + 10) )
        {
          ATL::_AtlRaiseException(0xC000008C, v25);
          __debugbreak();
        }
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v525 + 4) + 16LL * v115) + 20LL) )
        {
          v116 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (char *)v525 + 32,
                             (unsigned int)v115);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v116, &v656) != -1 )
            break;
        }
        if ( ++v115 >= *((_DWORD *)v525 + 10) )
          goto LABEL_252;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
      v598 = (char *)v525 + 56;
      v117 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
               (char *)v525 + 32,
               (unsigned int)v115);
      v118 = *(volatile signed __int32 **)(v117 + 8);
      if ( v118 )
      {
        _InterlockedIncrement(v118 + 2);
        v118 = *(volatile signed __int32 **)(v117 + 8);
        v71 = v526;
      }
      v675 = *(SystemEffectChainDescriptor **)v117;
      v676 = v118;
      if ( (int)SystemEffectChainDescriptor::Resolve(v675, v525) < 0 )
      {
        if ( v118 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v118);
        if ( v525 != (struct SystemEffectDescriptor *)-56LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
LABEL_235:
        if ( !*((_QWORD *)v525 + 2)
          || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             *((_QWORD *)v525 + 2),
                             &v677) == -1 )
        {
          v119 = 0LL;
        }
        goto LABEL_238;
      }
      if ( v118 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v118);
      if ( v525 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
    }
  }
LABEL_252:
  v122 = 0;
  if ( *((int *)v525 + 10) <= 0 )
    goto LABEL_235;
  while ( 1 )
  {
    if ( v122 < 0 || v122 >= *((_DWORD *)v525 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, v25);
      __debugbreak();
    }
    v123 = *((_QWORD *)v525 + 4) + 16LL * v122;
    v124 = 0;
    v25 = *(_DWORD *)(*(_QWORD *)v123 + 8LL);
    if ( v25 > 0 )
    {
      while ( *(_OWORD *)(**(_QWORD **)v123 + 16LL * v124) != *(_OWORD *)&v656 )
      {
        if ( ++v124 >= v25 )
          goto LABEL_260;
      }
      if ( v124 != -1 )
        break;
    }
LABEL_260:
    if ( ++v122 >= *((_DWORD *)v525 + 10) )
      goto LABEL_235;
  }
  if ( v122 >= *((_DWORD *)v525 + 10) )
  {
    ATL::_AtlRaiseException(0xC000008C, v25);
LABEL_1122:
    ATL::_AtlRaiseException(0xC000008C, v25);
    __debugbreak();
  }
  v119 = *(_QWORD *)(*((_QWORD *)v525 + 4) + 16LL * v122);
LABEL_238:
  v114 = v119 == 0;
LABEL_239:
  if ( v114 )
    goto LABEL_326;
  v71 = 0LL;
  v584 = 0LL;
  v526 = 0LL;
  if ( !v525 )
  {
LABEL_304:
    v584 = 0LL;
    v526 = v71;
LABEL_309:
    if ( v71 )
    {
      p_pv = &pv;
      v626 = 0LL;
      v627 = 1;
      v140 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **))(*(_QWORD *)v71 + 32LL);
      if ( v140 == CCompositeSystemEffect::GetClsids )
      {
        v522 = 0;
        v626 = 0LL;
        if ( *((int *)v71 + 16) > 0 )
        {
          v141 = 0LL;
          v142 = *((int *)v71 + 16);
          if ( 0xFFFFFFFFFFFFFFFFuLL / v142 >= 0x10
            && ((v143 = 16 * v142, v143 <= 0x7FFFFFFF) ? (v141 = CoTaskMemAlloc((unsigned int)v143)) : (v141 = 0LL), v141) )
          {
            memcpy_0(v141, *((const void **)v71 + 7), 16LL * *((int *)v71 + 16));
            v626 = v141;
            v522 = *((_DWORD *)v71 + 16);
            CoTaskMemFree(0LL);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D2,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              (int)v513);
            CoTaskMemFree(v141);
          }
        }
      }
      else
      {
        v140(v71, &v522, (struct _GUID **)&v626);
      }
      if ( v627 )
      {
        v144 = v626;
        v145 = p_pv;
        v146 = *p_pv;
        if ( v626 != *p_pv )
        {
          if ( v146 )
            CoTaskMemFree(v146);
          *v145 = v144;
        }
      }
    }
LABEL_326:
    if ( v71 )
    {
      v147 = *(unsigned int (__fastcall **)(int *))(*(_QWORD *)v71 + 16LL);
      if ( v147 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
      {
        if ( !ATL::SafeDecrementReferenceMultiThread((int *)v71 + 9) )
        {
          v148 = *(void *(__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int))(*(_QWORD *)v71 + 40LL);
          if ( v148 == CCompositeSystemEffect::`vector deleting destructor' )
          {
            v149 = *((_QWORD *)v71 + 13);
            v150 = 0;
            if ( v149 )
            {
              *((_QWORD *)v71 + 13) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v149 + 16LL))(v149);
            }
            v151 = (char *)*((_QWORD *)v71 + 11);
            if ( v151 )
            {
              if ( *((int *)v71 + 24) > 0 )
              {
                v152 = 0LL;
                do
                {
                  v151 = (char *)*((_QWORD *)v71 + 11);
                  v153 = *(_QWORD *)&v151[v152];
                  if ( v153 )
                  {
                    *(_QWORD *)&v151[v152] = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v153 + 16LL))(v153);
                    v151 = (char *)*((_QWORD *)v71 + 11);
                  }
                  ++v150;
                  v152 += 8LL;
                }
                while ( v150 < *((_DWORD *)v71 + 24) );
              }
              free(v151);
              *((_QWORD *)v71 + 11) = 0LL;
            }
            *((_QWORD *)v71 + 12) = 0LL;
            ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::RemoveAll((char *)v71 + 72);
            v154 = (void *)*((_QWORD *)v71 + 7);
            if ( v154 )
            {
              free(v154);
              *((_QWORD *)v71 + 7) = 0LL;
            }
            *((_QWORD *)v71 + 8) = 0LL;
            *((_DWORD *)v71 + 9) = -1073741823;
            operator delete(v71, (const struct std::nothrow_t *)0x70);
          }
          else
          {
            v148(v71, 1u);
          }
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      else
      {
        v147((int *)v71);
      }
    }
    v31 = a5;
    v21 = a3;
LABEL_347:
    if ( v534 )
    {
      if ( v534 == 1 )
      {
        v156 = v522 + 2;
        v160 = 16LL * (v522 + 2);
        v161 = CoTaskMemAlloc(v160 + 200);
        v162 = v161;
        if ( v161 )
        {
          v533 = v161;
          memset_0(v161, 0, v160 + 200);
          *v162 = 1;
          v162[22] = v21;
          *((_QWORD *)v162 + 12) = 0LL;
          v162[28] = 0;
          v159 = v162 + 34;
          v162[34] = 0;
          v163 = 0;
          v164 = 0;
          if ( !v522 )
          {
LABEL_358:
            *(GUID *)&v162[4 * v164 + 50] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
            *(GUID *)&v162[4 * ++*v159 + 50] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
            ++*v159;
            v162[1] = v21 >> 31;
            goto LABEL_381;
          }
          while ( v164 <= 0x1F )
          {
            v162[28] |= 1 << v164;
            *(_OWORD *)&v162[4 * *v159 + 50] = *((_OWORD *)pv + v163);
            v164 = *v159 + 1;
            *v159 = v164;
            if ( ++v163 >= v522 )
              goto LABEL_358;
          }
          v30 = -2147418113;
          v155 = 385LL;
LABEL_393:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v155,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v30,
            (int)v513);
          goto LABEL_394;
        }
        v155 = 375LL;
      }
      else
      {
        if ( v534 != 2 )
        {
          v30 = -2147024809;
          v155 = 421LL;
          goto LABEL_393;
        }
        v156 = 3;
        v157 = (char *)CoTaskMemAlloc(0xF8uLL);
        v158 = v157;
        if ( v157 )
        {
          v533 = v157;
          memset_0(v157, 0, 0xF8uLL);
          *(_DWORD *)v158 = (v31 != eLoopbackConnector) + 1;
          *((_DWORD *)v158 + 22) = v21;
          *((_QWORD *)v158 + 12) = 0LL;
          v159 = (unsigned int *)(v158 + 136);
          *((_DWORD *)v158 + 34) = 3;
          *(GUID *)(v158 + 200) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
          *(GUID *)(v158 + 216) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          *(GUID *)(v158 + 232) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          *((_DWORD *)v158 + 28) = 0;
          *((_DWORD *)v158 + 1) = v21 >> 31;
LABEL_381:
          if ( *v159 > v156 )
          {
            v30 = -2147418113;
            v155 = 425LL;
            goto LABEL_393;
          }
          if ( pv )
            CoTaskMemFree(pv);
          v23 = a1;
          goto LABEL_387;
        }
        v155 = 404LL;
      }
    }
    else
    {
      v156 = v522 + 4;
      v165 = 16LL * (v522 + 4);
      v166 = CoTaskMemAlloc(v165 + 200);
      v167 = v166;
      if ( v166 )
      {
        v533 = v166;
        memset_0(v166, 0, v165 + 200);
        *v167 = 0;
        v167[22] = v21;
        *((_QWORD *)v167 + 12) = 0LL;
        v159 = v167 + 34;
        v167[34] = 0;
        v167[28] = 0;
        if ( a18 )
        {
          if ( *v159 > 0x1F )
          {
            v30 = -2147418113;
            v155 = 321LL;
            goto LABEL_393;
          }
          v167[28] = 1 << *v159;
          *(GUID *)&v167[4 * (*v159)++ + 50] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
        }
        else
        {
          for ( m = 0; m < v522; ++m )
          {
            if ( *((_QWORD *)pv + 2 * m) == *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1
              && *((_QWORD *)pv + 2 * m + 1) == *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4 )
            {
              if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
              {
                if ( RpcImpersonateClient(0LL) >= 0 )
                {
                  v169 = IsVirtualSurroundAllowedForProcess(a8);
                  RpcRevertToSelf();
                  if ( !v169 )
                    continue;
                }
              }
            }
            if ( *v159 > 0x1F )
            {
              v30 = -2147418113;
              v155 = 344LL;
              goto LABEL_393;
            }
            v167[28] |= 1 << *v159;
            *(_OWORD *)&v167[4 * (*v159)++ + 50] = *((_OWORD *)pv + m);
          }
          v21 = a3;
        }
        *(GUID *)&v167[4 * (*v159)++ + 50] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        *(GUID *)&v167[4 * (*v159)++ + 50] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
        *(GUID *)&v167[4 * (*v159)++ + 50] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
        if ( !a18 && a17 && CoGetPSClsid(&GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec, &pClsid) >= 0 )
          *(GUID *)&v167[4 * (*v159)++ + 50] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
        v167[1] = v21 >> 31;
        goto LABEL_381;
      }
      v155 = 309LL;
    }
    v30 = -2147024882;
    goto LABEL_393;
  }
  v585 = 0LL;
  v680 = v70;
  v657 = v70;
  v120 = 0;
  if ( *((int *)v525 + 10) > 0 )
  {
    while ( 1 )
    {
      if ( v120 < 0 || v120 >= *((_DWORD *)v525 + 10) )
        goto LABEL_1122;
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v525 + 4) + 16LL * v120) + 20LL) )
      {
        v121 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (char *)v525 + 32,
                           (unsigned int)v120);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v121, &v657) != -1 )
          break;
      }
      if ( ++v120 >= *((_DWORD *)v525 + 10) )
        goto LABEL_275;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
    v604[1] = (char *)v525 + 56;
    v125 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
             (char *)v525 + 32,
             (unsigned int)v120);
    v126 = *(volatile signed __int32 **)(v125 + 8);
    if ( v126 )
    {
      _InterlockedIncrement(v126 + 2);
      v126 = *(volatile signed __int32 **)(v125 + 8);
    }
    v678 = *(SystemEffectChainDescriptor **)v125;
    v679 = v126;
    if ( (int)SystemEffectChainDescriptor::Resolve(v678, v525) < 0 )
    {
      if ( v126 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v126);
      if ( v525 != (struct SystemEffectDescriptor *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
LABEL_284:
      v130 = *((_QWORD *)v525 + 2);
      if ( !v130
        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           *((_QWORD *)v525 + 2),
                           &v680) == -1 )
      {
        v130 = 0LL;
      }
      goto LABEL_287;
    }
    if ( v126 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v126);
    if ( v525 != (struct SystemEffectDescriptor *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v525 + 56));
  }
LABEL_275:
  v127 = 0;
  if ( *((int *)v525 + 10) <= 0 )
    goto LABEL_284;
  while ( 1 )
  {
    if ( v127 < 0 || v127 >= *((_DWORD *)v525 + 10) )
    {
      ATL::_AtlRaiseException(0xC000008C, v25);
      __debugbreak();
    }
    v128 = *((_QWORD *)v525 + 4) + 16LL * v127;
    v129 = 0;
    v25 = *(_DWORD *)(*(_QWORD *)v128 + 8LL);
    if ( v25 > 0 )
    {
      while ( *(_OWORD *)(**(_QWORD **)v128 + 16LL * v129) != *(_OWORD *)&v657 )
      {
        if ( ++v129 >= v25 )
          goto LABEL_283;
      }
      if ( v129 != -1 )
        break;
    }
LABEL_283:
    if ( ++v127 >= *((_DWORD *)v525 + 10) )
      goto LABEL_284;
  }
  if ( v127 >= *((_DWORD *)v525 + 10) )
  {
    ATL::_AtlRaiseException(0xC000008C, v25);
LABEL_1125:
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v198);
    __debugbreak();
  }
  v130 = *(_QWORD *)(*((_QWORD *)v525 + 4) + 16LL * v127);
LABEL_287:
  v131 = 0;
  v132 = 0LL;
  v585 = 0LL;
  if ( !v130 )
  {
LABEL_297:
    v133 = v131 == 0;
LABEL_298:
    if ( !v133 )
    {
      v596 = 0;
      v655 = v132;
      v594 = v131;
      v595 = *(_DWORD *)(a1 + 148);
      v597 = 1;
      v136 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
               &v584,
               &v597,
               &v596,
               &v595,
               (unsigned int *)&v594,
               &v655);
      v137 = v136;
      if ( v136 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46C,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v136,
          (int)v513);
        v30 = v137;
        goto LABEL_301;
      }
    }
    CoTaskMemFree(v132);
    v585 = 0LL;
    v71 = v584;
    goto LABEL_304;
  }
  v131 = *(_DWORD *)(v130 + 48);
  v133 = v131 == 0;
  if ( v131 <= 0 )
    goto LABEL_298;
  v134 = *(int *)(v130 + 48);
  if ( 0xFFFFFFFFFFFFFFFFuLL / v134 >= 0x10 )
  {
    v135 = 16 * v134;
    if ( v135 <= 0x7FFFFFFF )
      v132 = CoTaskMemAlloc((unsigned int)v135);
    if ( v132 )
    {
      memcpy_0(v132, *(const void **)(v130 + 40), 16LL * *(int *)(v130 + 48));
      v585 = v132;
      CoTaskMemFree(0LL);
      v131 = *(_DWORD *)(v130 + 48);
      goto LABEL_297;
    }
  }
  v30 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    (int)v513);
  CoTaskMemFree(v132);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x462,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x8007000ELL,
    v515);
LABEL_301:
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v585);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v584);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x122,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v30,
    v514);
LABEL_307:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v526);
LABEL_394:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_1092:
  if ( v575 )
    CoTaskMemFree(v575);
  if ( v533 )
    CoTaskMemFree(v533);
  if ( v532 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v532 + 16LL))(v532);
  return v30;
}
