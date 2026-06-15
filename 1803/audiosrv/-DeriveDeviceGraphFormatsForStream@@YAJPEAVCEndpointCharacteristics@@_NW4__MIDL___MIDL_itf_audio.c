/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180037650 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800D1D08 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18000271C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180002C84 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180038250 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180039400 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039570 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180050660 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18005399C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180053E54 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009726C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1800975B8 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x18009760C (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18009EC7C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800BA578 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800BAB48 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800BB044 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800C0E48 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800C1D2C (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E8984 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800ECB20 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=117
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct CEndpointCharacteristics *this,
        char a2,
        struct _GUID *a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct _GUID *a7,
        struct tWAVEFORMATEX *a8,
        struct tWAVEFORMATEX **a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11,
        struct tWAVEFORMATEX **a12)
{
  __int64 v12; // rsi
  struct CEndpointCharacteristics *v13; // r13
  struct _GUID *v14; // rbx
  volatile signed __int32 **v15; // r14
  int ProposedConnectorFormatForProcessingMode; // r15d
  struct IMMDevice *v17; // rbx
  bool v18; // sf
  const struct tWAVEFORMATEX *v19; // r9
  __m128i v20; // xmm6
  int (*v21)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int v22; // ebx
  BOOL v23; // edi
  __int64 v24; // rcx
  char *v25; // r8
  int v26; // edx
  int v27; // ecx
  __int64 v28; // r10
  int v29; // ecx
  __int64 v30; // r10
  GUID v31; // xmm6
  const PROPERTYKEY *v32; // rax
  unsigned __int16 *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // r11
  int v36; // ecx
  int v37; // edx
  GUID *v38; // rax
  __int64 v39; // r8
  struct IAudioMediaType *v40; // r9
  GUID v41; // kr00_16
  signed int v42; // eax
  struct IMMDevice *v43; // r10
  signed int lpVtbl; // edx
  struct IAudioMediaType *v45; // rcx
  __int64 v46; // r15
  int v47; // r13d
  __int64 v48; // rsi
  unsigned __int16 *v49; // rcx
  unsigned __int16 v50; // ax
  int v51; // r11d
  __int16 v52; // bx
  unsigned __int16 v53; // r8
  unsigned __int16 v54; // r9
  unsigned __int16 v55; // ax
  int v56; // r8d
  __int16 v57; // r10
  unsigned __int16 v58; // r9
  unsigned __int16 v59; // r8
  int v60; // ecx
  __int16 v61; // ax
  __int64 v62; // rax
  int v63; // edi
  unsigned __int16 *v64; // r10
  __int64 v65; // rbx
  void *v66; // rax
  void *v67; // rdi
  struct tWAVEFORMATEX *v68; // rbx
  __int64 v69; // rdx
  const GUID *v70; // r8
  const GUID *v71; // r9
  BOOL v72; // ebx
  __int64 v73; // rcx
  char *v74; // rax
  char *v75; // r15
  struct _RTL_CRITICAL_SECTION *v76; // r12
  unsigned int v77; // edx
  volatile signed __int32 **v78; // rsi
  int v79; // ebx
  int v80; // edi
  int v81; // r13d
  __int64 v82; // r12
  __int64 v83; // rax
  volatile signed __int32 **v84; // rcx
  __int64 v85; // rax
  int v86; // edi
  volatile signed __int32 **v87; // r14
  SystemEffectChainDescriptor *v88; // rcx
  int v89; // eax
  volatile signed __int32 **v90; // rsi
  __int64 v91; // rdi
  volatile signed __int32 *v92; // rbx
  __int64 v93; // r12
  char *v94; // rdi
  struct _RTL_CRITICAL_SECTION *v95; // r15
  int v96; // esi
  unsigned int v97; // ebx
  __int64 v98; // rax
  unsigned int v99; // ebx
  SystemEffectChainDescriptor *v100; // rcx
  int v101; // eax
  volatile signed __int32 **v102; // rbx
  __int64 v103; // rdi
  char *v104; // r15
  struct _RTL_CRITICAL_SECTION *v105; // r13
  unsigned int v106; // edx
  volatile signed __int32 **v107; // rsi
  int v108; // ebx
  int v109; // edi
  int v110; // r12d
  __int64 v111; // r14
  __int64 v112; // r13
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rax
  volatile signed __int32 **v118; // rcx
  __int64 v119; // rax
  int v120; // edi
  volatile signed __int32 **v121; // r14
  SystemEffectChainDescriptor *v122; // rcx
  int v123; // eax
  volatile signed __int32 **v124; // rsi
  __int64 v125; // rdi
  volatile signed __int32 *v126; // rbx
  int v127; // ecx
  signed int v128; // edx
  int v129; // ebx
  __int64 v130; // r9
  __int64 v131; // rdx
  BOOL v132; // ebx
  __int64 v133; // rcx
  int v134; // eax
  __int64 v135; // r12
  __int64 v136; // r14
  char *v137; // r15
  wil::details::in1diag3 *v138; // rcx
  __int64 v139; // rdx
  int v140; // edi
  __int64 v141; // rsi
  int v142; // ebx
  __int64 v143; // rcx
  char *v144; // rax
  char *v145; // rsi
  __int64 v146; // rdi
  unsigned int v147; // ebx
  __int64 v148; // rax
  unsigned int v149; // ebx
  SystemEffectChainDescriptor *v150; // rcx
  int v151; // eax
  char *v152; // rbx
  unsigned int i; // edi
  unsigned int j; // ebx
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rax
  int v159; // edi
  __int64 v160; // r15
  __int64 v161; // rax
  _QWORD *v162; // r8
  _QWORD *v163; // rcx
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 *v166; // rax
  __int64 v167; // rsi
  int v168; // ebx
  void *v169; // rax
  _OWORD *v170; // rax
  __int64 v171; // r13
  struct _RTL_CRITICAL_SECTION *v172; // r15
  unsigned int v173; // edx
  int v174; // ebx
  int v175; // edi
  int v176; // r12d
  __int64 v177; // rsi
  __int64 v178; // r15
  __int64 v179; // rax
  volatile signed __int32 **v180; // rcx
  __int64 v181; // rax
  int v182; // edi
  volatile signed __int32 **v183; // rsi
  SystemEffectChainDescriptor *v184; // rcx
  int v185; // eax
  volatile signed __int32 **v186; // rdi
  __int64 v187; // rsi
  volatile signed __int32 *v188; // rbx
  __int64 v189; // r9
  __int64 v190; // rdx
  __int64 v191; // r12
  struct CEndpointCharacteristics *v192; // r13
  char *v193; // rdi
  struct _RTL_CRITICAL_SECTION *v194; // r15
  int v195; // esi
  unsigned int v196; // ebx
  __int64 v197; // rax
  unsigned int v198; // ebx
  SystemEffectChainDescriptor *v199; // rcx
  int v200; // eax
  volatile signed __int32 **v201; // rbx
  __int64 v202; // rdi
  char *v203; // r13
  struct _RTL_CRITICAL_SECTION *v204; // r15
  unsigned int v205; // edx
  int v206; // ebx
  int v207; // edi
  int v208; // r12d
  __int64 v209; // rsi
  __int64 v210; // r15
  __int64 v211; // r9
  __int64 v212; // rdx
  __int64 v213; // rax
  volatile signed __int32 **v214; // rcx
  __int64 v215; // rax
  int v216; // edi
  volatile signed __int32 **v217; // rsi
  SystemEffectChainDescriptor *v218; // rcx
  int v219; // eax
  volatile signed __int32 **v220; // r14
  __int64 v221; // rdi
  volatile signed __int32 *v222; // rbx
  __int64 v223; // r9
  __int64 v224; // rdx
  int v225; // ecx
  int DevicePipeFormat; // eax
  volatile signed __int32 **v227; // rbx
  int (*v228)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct tWAVEFORMATEX *v229; // rbx
  __int64 cbSize; // rdi
  struct tWAVEFORMATEX *v231; // rax
  struct tWAVEFORMATEX *v232; // rsi
  struct IAudioMediaType *v233; // rsi
  void *v234; // rbx
  struct IAudioMediaType *v235; // rdi
  struct _GUID *v236; // rdx
  struct IAudioMediaType *v237; // r14
  const struct tWAVEFORMATEX *v238; // rax
  const struct tWAVEFORMATEX *v239; // rax
  const struct tWAVEFORMATEX *v240; // rax
  struct tWAVEFORMATEX *v241; // rax
  struct tWAVEFORMATEX *v242; // rax
  struct tWAVEFORMATEX *v243; // rax
  struct tWAVEFORMATEX *v244; // rax
  struct _GUID *cData; // [rsp+28h] [rbp-E0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v247; // [rsp+48h] [rbp-C0h]
  void *Block; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v249; // [rsp+58h] [rbp-B0h]
  struct tWAVEFORMATEX *v250; // [rsp+60h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v251; // [rsp+68h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v252; // [rsp+70h] [rbp-98h] BYREF
  __int64 v253; // [rsp+78h] [rbp-90h] BYREF
  struct CEndpointCharacteristics *v254; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h] BYREF
  signed int v256; // [rsp+90h] [rbp-78h]
  LPVOID pv; // [rsp+98h] [rbp-70h] BYREF
  struct tWAVEFORMATEX *v258; // [rsp+A0h] [rbp-68h] BYREF
  struct IAudioMediaType *v259; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 **v260; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v261; // [rsp+B8h] [rbp-50h]
  volatile signed __int32 **v262; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v263; // [rsp+C8h] [rbp-40h]
  volatile signed __int32 **v264; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v265; // [rsp+D8h] [rbp-30h]
  volatile signed __int32 **v266; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v267; // [rsp+E8h] [rbp-20h]
  struct IAudioMediaType *v268; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 **v269; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v270; // [rsp+100h] [rbp-8h]
  char *v271; // [rsp+108h] [rbp+0h] BYREF
  __int64 v272; // [rsp+110h] [rbp+8h]
  volatile signed __int32 **v273; // [rsp+118h] [rbp+10h] BYREF
  __int64 v274; // [rsp+120h] [rbp+18h]
  int v275; // [rsp+128h] [rbp+20h] BYREF
  int v276; // [rsp+130h] [rbp+28h]
  struct tWAVEFORMATEX *v277; // [rsp+138h] [rbp+30h] BYREF
  __int64 v278; // [rsp+140h] [rbp+38h]
  __int64 v279; // [rsp+148h] [rbp+40h]
  struct _GUID *v280; // [rsp+150h] [rbp+48h]
  LPVOID v281; // [rsp+158h] [rbp+50h] BYREF
  struct IMMDevice *v282; // [rsp+160h] [rbp+58h]
  PROPVARIANT v283; // [rsp+168h] [rbp+60h] BYREF
  __int64 v284; // [rsp+170h] [rbp+68h]
  unsigned __int16 *v285; // [rsp+178h] [rbp+70h]
  char *v286; // [rsp+180h] [rbp+78h] BYREF
  char *v287; // [rsp+188h] [rbp+80h] BYREF
  char *v288; // [rsp+190h] [rbp+88h] BYREF
  __int64 v289; // [rsp+198h] [rbp+90h] BYREF
  char *v290; // [rsp+1A0h] [rbp+98h] BYREF
  char *v291; // [rsp+1A8h] [rbp+A0h] BYREF
  volatile signed __int32 **v292; // [rsp+1B0h] [rbp+A8h]
  struct IAudioMediaType *v293; // [rsp+1B8h] [rbp+B0h] BYREF
  char *v294; // [rsp+1C0h] [rbp+B8h] BYREF
  __m256i v295; // [rsp+1C8h] [rbp+C0h] BYREF
  PROPVARIANT v296; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v297; // [rsp+1F0h] [rbp+E8h]
  __int64 v298; // [rsp+1F8h] [rbp+F0h]
  PROPVARIANT pvar; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v300; // [rsp+208h] [rbp+100h]
  __int64 v301; // [rsp+210h] [rbp+108h]
  PROPVARIANT v302; // [rsp+218h] [rbp+110h] BYREF
  __int64 v303; // [rsp+220h] [rbp+118h]
  __int64 v304; // [rsp+228h] [rbp+120h]
  struct tWAVEFORMATEX **v305; // [rsp+230h] [rbp+128h]
  struct tWAVEFORMATEX **v306; // [rsp+238h] [rbp+130h]
  struct tWAVEFORMATEX **v307; // [rsp+240h] [rbp+138h]
  struct tWAVEFORMATEX **v308; // [rsp+248h] [rbp+140h]
  __int64 v309; // [rsp+250h] [rbp+148h]
  __m128i v310; // [rsp+258h] [rbp+150h]
  GUID v311; // [rsp+268h] [rbp+160h]
  GUID v312; // [rsp+278h] [rbp+170h]
  __int128 v313; // [rsp+288h] [rbp+180h]
  struct _GUID v314; // [rsp+298h] [rbp+190h] BYREF
  struct _GUID v315; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct _GUID v316; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _GUID v317; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _GUID v318; // [rsp+2D8h] [rbp+1D0h] BYREF
  struct _GUID v319; // [rsp+2E8h] [rbp+1E0h] BYREF
  struct _GUID v320; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _GUID v321; // [rsp+308h] [rbp+200h] BYREF
  struct _GUID v322; // [rsp+318h] [rbp+210h] BYREF
  struct _GUID v323; // [rsp+328h] [rbp+220h] BYREF
  __int64 v324; // [rsp+338h] [rbp+230h]
  struct _GUID v325; // [rsp+348h] [rbp+240h] BYREF
  __int64 v326; // [rsp+358h] [rbp+250h]
  __m256i v327; // [rsp+368h] [rbp+260h] BYREF
  __int128 Buf1; // [rsp+388h] [rbp+280h] BYREF
  _BYTE v329[24]; // [rsp+398h] [rbp+290h]
  __int128 Buf2; // [rsp+3B0h] [rbp+2A8h] BYREF
  _BYTE v331[24]; // [rsp+3C0h] [rbp+2B8h]
  GUID v332; // [rsp+3D8h] [rbp+2D0h]
  GUID fmtid; // [rsp+3E8h] [rbp+2E0h] BYREF
  DWORD pid; // [rsp+3F8h] [rbp+2F0h]
  GUID v335; // [rsp+408h] [rbp+300h] BYREF
  struct _GUID v336; // [rsp+418h] [rbp+310h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+428h] [rbp+320h] BYREF
  const char *v338; // [rsp+448h] [rbp+340h]
  __int64 v339; // [rsp+450h] [rbp+348h]
  __int64 *v340; // [rsp+458h] [rbp+350h]
  __int64 v341; // [rsp+460h] [rbp+358h]
  int *v342; // [rsp+468h] [rbp+360h]
  __int64 v343; // [rsp+470h] [rbp+368h]
  wil::details::in1diag3 *retaddr; // [rsp+4D0h] [rbp+3C8h]

  v326 = -2LL;
  v12 = (int)a3;
  v247 = (int)a3;
  v13 = this;
  v254 = this;
  v14 = a7;
  v280 = a7;
  v306 = a9;
  v307 = a10;
  v305 = a11;
  v308 = a12;
  v15 = 0LL;
  v252 = 0LL;
  v251 = 0LL;
  v258 = 0LL;
  v250 = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    ProposedConnectorFormatForProcessingMode = CloneWaveFormat(a8, &v251);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_502;
    v282 = 0LL;
    v17 = (struct IMMDevice *)*((_QWORD *)v13 + 2);
    v282 = v17;
    ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->AddRef)(v17);
    if ( IsSPDIFFormat(a8) && (unsigned int)IsSPDIFEndpoint(v17) )
      ProposedConnectorFormatForProcessingMode = GetAcceptableSPDIFTypeForDevice(v17, a8, &v252, 0) != 0
                                               ? 0x88890008
                                               : 0;
    else
      ProposedConnectorFormatForProcessingMode = CloneWaveFormat(a8, &v252);
    if ( v17 )
      ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
    v18 = ProposedConnectorFormatForProcessingMode < 0;
LABEL_14:
    if ( !v18 )
    {
      ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v251, &v250);
      goto LABEL_500;
    }
    goto LABEL_502;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v325 = *a6;
    ProposedConnectorFormatForProcessingMode = DeriveOffloadConnectorFormatFromStreamFormat(
                                                 this,
                                                 a8,
                                                 a3,
                                                 &v325,
                                                 cData,
                                                 &v252);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_502;
    ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v252, &v258);
    ConvertPCMWfxToIEEEFloat(v258);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_502;
    ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v19, &v251);
    v18 = ProposedConnectorFormatForProcessingMode < 0;
    goto LABEL_14;
  }
  if ( !a2 )
  {
    v20 = *(__m128i *)a7;
    v310 = *(__m128i *)a7;
    v324 = 0LL;
    v277 = 0LL;
    v281 = 0LL;
    v252 = 0LL;
    v250 = 0LL;
    ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2)
                                                                                           + 40LL))(
                                                 *((_QWORD *)this + 2),
                                                 &v281);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_462;
    v314 = (struct _GUID)v20;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                 v13,
                                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                                                 &v314,
                                                 &v277);
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
      goto LABEL_150;
    v22 = 0;
    if ( (_DWORD)v12 != 2 )
      v22 = v12;
    if ( v22 )
      goto LABEL_28;
    v23 = 1;
    v24 = *((_QWORD *)v13 + 7);
    if ( !v24 )
      goto LABEL_28;
    pvar = 0LL;
    v300 = 0LL;
    v301 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
           v24,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v23 = v300 == 0;
    }
    PropVariantClear(&pvar);
    if ( v23 )
LABEL_28:
      v25 = (char *)v13 + 16 * v22 + 64;
    else
      v25 = (char *)v13 + 128;
    v26 = *((_DWORD *)v25 + 2);
    if ( v26 )
    {
      v27 = 0;
      if ( v26 <= 0 )
        goto LABEL_35;
      v28 = *(_QWORD *)v25;
      while ( *(_QWORD *)(v28 + 16LL * v27) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
           || *(_QWORD *)(v28 + 16LL * v27 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
      {
        if ( ++v27 >= v26 )
          goto LABEL_35;
      }
      if ( v27 == -1 )
      {
LABEL_35:
        v29 = 0;
        if ( v26 <= 0 )
          goto LABEL_40;
        v30 = *(_QWORD *)v25;
        while ( *(_QWORD *)(v30 + 16LL * v29) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || *(_QWORD *)(v30 + 16LL * v29 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          if ( ++v29 >= v26 )
            goto LABEL_40;
        }
        if ( v29 == -1 )
LABEL_40:
          v31 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25, 0LL);
        else
          v31 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        v31 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v31 = GUID_00000000_0000_0000_0000_000000000000;
    }
    v295.m256i_i64[0] = (__int64)v13;
    v295.m256i_i32[2] = v12;
    *(GUID *)((char *)&v295.m256i_u64[1] + 4) = v31;
    pv = 0LL;
    v277 = 0LL;
    v283 = 0LL;
    v284 = 0LL;
    v285 = 0LL;
    v32 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( (_DWORD)v12 != 3 )
      v32 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v32->fmtid;
    pid = v32->pid;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)v13 + 4) + 40LL))(
           *((_QWORD *)v13 + 4),
           &fmtid,
           &v283) < 0 )
      goto LABEL_141;
    if ( (_WORD)v283 != 65 )
      goto LABEL_141;
    if ( (unsigned int)v284 < 0x12 )
      goto LABEL_141;
    Src = v285;
    if ( (unsigned int)v284 != v285[8] + 18LL )
      goto LABEL_141;
    v33 = v285;
    v34 = 192LL;
    if ( (_DWORD)v12 != 3 )
      v34 = 184LL;
    v311 = v31;
    v35 = 24 * v12;
    v36 = 0;
    v37 = *((_DWORD *)v13 + 6 * v12 + 354);
    if ( v37 <= 0 )
      goto LABEL_57;
    while ( *(_OWORD *)(*(_QWORD *)((char *)v13 + v35 + 1400) + 16LL * v36) != *(_OWORD *)&v311 )
    {
      if ( ++v36 >= v37 )
        goto LABEL_57;
    }
    if ( v36 == -1 )
    {
LABEL_57:
      v335 = v31;
      v38 = &v335;
    }
    else
    {
      v315 = v31;
      v38 = CAudioSignalProcessingModeMap::Lookup(
              (struct CEndpointCharacteristics *)((char *)v13 + v35 + 1400),
              &v336,
              &v315);
      Src = v285;
    }
    v332 = *v38;
    v41 = v332;
    v39 = *(_QWORD *)v41.Data4;
    v40 = (struct IAudioMediaType *)*(_OWORD *)&v41;
    v268 = *(struct IAudioMediaType **)&v332.Data1;
    if ( *(_OWORD *)&v332 == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
    {
      v332 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v40 = *(struct IAudioMediaType **)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      v268 = *(struct IAudioMediaType **)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      v39 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    }
    v42 = 0;
    LODWORD(v253) = 0;
    v43 = *(struct IMMDevice **)((char *)v13 + v34);
    v282 = v43;
    lpVtbl = (signed int)v43[1].lpVtbl;
    v256 = lpVtbl;
    if ( lpVtbl <= 0 )
      goto LABEL_135;
    v45 = 0LL;
    v259 = 0LL;
LABEL_62:
    if ( (__int64)v45 < 0 || v42 >= lpVtbl )
    {
      ATL::_AtlRaiseException(0xC000008C, lpVtbl);
LABEL_505:
      ATL::_AtlRaiseException(0xC000008C, v77);
      __debugbreak();
    }
    v46 = *(__int64 *)((char *)&v45->lpVtbl + (unsigned __int64)v43->lpVtbl);
    if ( *(struct IAudioMediaType **)v46 != v40 || *(_QWORD *)(v46 + 8) != v39 )
      goto LABEL_130;
    v47 = *(_DWORD *)(v46 + 24);
    if ( v47 <= 0 )
      goto LABEL_129;
    v48 = 0LL;
    while ( 1 )
    {
      if ( v48 < 0 || (int)v15 >= v47 )
      {
        ATL::_AtlRaiseException(0xC000008C, lpVtbl);
        __debugbreak();
      }
      v49 = **(unsigned __int16 ***)(v48 + *(_QWORD *)(v46 + 16));
      if ( !v33 )
      {
        if ( !v49 )
          goto LABEL_134;
        goto LABEL_127;
      }
      if ( v49 )
      {
        lpVtbl = *v33;
        v50 = v33[8];
        if ( (_WORD)lpVtbl == 0xFFFE )
        {
          if ( v50 != 22
            && (*((_QWORD *)v33 + 3) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
             || *((_QWORD *)v33 + 4) != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
            && (*((_QWORD *)v33 + 3) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
             || *((_QWORD *)v33 + 4) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
          {
            goto LABEL_127;
          }
          Buf1 = *(_OWORD *)v33;
          *(_OWORD *)v329 = *((_OWORD *)v33 + 1);
          *(_QWORD *)&v329[16] = *((_QWORD *)v33 + 4);
          *(_WORD *)v329 = 22;
          v51 = *(_DWORD *)&v329[4];
          v52 = Buf1;
        }
        else
        {
          if ( v50 && (((_WORD)lpVtbl - 1) & 0xFFFD) != 0 )
            goto LABEL_127;
          v53 = v33[1];
          if ( (unsigned __int16)(v53 - 1) > 1u )
            goto LABEL_127;
          v54 = v33[7];
          if ( ((v54 - 8) & 0xFFE7) != 0 )
            goto LABEL_127;
          Buf1 = *(_OWORD *)v33;
          v52 = -2;
          LOWORD(Buf1) = -2;
          *(_WORD *)v329 = 22;
          *(_WORD *)&v329[2] = v54;
          *(GUID *)&v329[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v329[8] = (unsigned __int16)lpVtbl;
          v51 = (v53 == 1) + 3;
          *(_DWORD *)&v329[4] = v51;
        }
        lpVtbl = *v49;
        v55 = v49[8];
        if ( (_WORD)lpVtbl == 0xFFFE )
        {
          if ( v55 == 22
            || *((_QWORD *)v49 + 3) == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
            && *((_QWORD *)v49 + 4) == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4
            || *((_QWORD *)v49 + 3) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
            && *((_QWORD *)v49 + 4) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
          {
            Buf2 = *(_OWORD *)v49;
            *(_OWORD *)v331 = *((_OWORD *)v49 + 1);
            *(_QWORD *)&v331[16] = *((_QWORD *)v49 + 4);
            *(_WORD *)v331 = 22;
            v56 = *(_DWORD *)&v331[4];
            v57 = Buf2;
            goto LABEL_100;
          }
        }
        else if ( !v55 || (((_WORD)lpVtbl - 1) & 0xFFFD) == 0 )
        {
          v58 = v49[1];
          if ( (unsigned __int16)(v58 - 1) <= 1u )
          {
            v59 = v49[7];
            v57 = -2;
            if ( ((v59 - 8) & 0xFFE7) == 0 )
            {
              Buf2 = *(_OWORD *)v49;
              LOWORD(Buf2) = -2;
              *(_WORD *)v331 = 22;
              *(_WORD *)&v331[2] = v59;
              *(GUID *)&v331[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
              *(_DWORD *)&v331[8] = (unsigned __int16)lpVtbl;
              v56 = (v58 == 1) + 3;
LABEL_100:
              if ( WORD1(Buf1) )
              {
                lpVtbl = WORD1(Buf2);
              }
              else
              {
                lpVtbl = 0;
                WORD1(Buf2) = 0;
                DWORD2(Buf2) = 0;
                WORD6(Buf2) = 0;
              }
              if ( DWORD1(Buf1) )
              {
                v60 = DWORD1(Buf2);
              }
              else
              {
                v60 = 0;
                *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
              }
              if ( HIWORD(Buf1) )
              {
                v61 = HIWORD(Buf2);
              }
              else
              {
                v61 = 0;
                HIDWORD(Buf2) = 0;
              }
              if ( !v51 )
                v56 = 0;
              *(_DWORD *)&v331[4] = v56;
              if ( !v52 )
              {
                v57 = 0;
                LOWORD(Buf2) = 0;
              }
              if ( !(_WORD)lpVtbl )
              {
                WORD1(Buf1) = 0;
                DWORD2(Buf1) = 0;
                WORD6(Buf1) = 0;
              }
              if ( !v60 )
                *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
              if ( !v61 )
                HIDWORD(Buf1) = 0;
              if ( !v56 )
                v51 = 0;
              *(_DWORD *)&v329[4] = v51;
              if ( !v57 )
                LOWORD(Buf1) = 0;
              v62 = *(_QWORD *)&v329[8] - *(_QWORD *)&v331[8];
              if ( *(_QWORD *)&v329[8] == *(_QWORD *)&v331[8] )
                v62 = *(_QWORD *)&v329[16] - *(_QWORD *)&v331[16];
              if ( !v62 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
              {
LABEL_134:
                v63 = 0;
                v64 = (unsigned __int16 *)Src;
                goto LABEL_136;
              }
            }
          }
        }
      }
LABEL_127:
      LODWORD(v15) = (_DWORD)v15 + 1;
      v48 += 8LL;
      if ( (int)v15 >= v47 )
      {
        v45 = v259;
        lpVtbl = v256;
        v40 = v268;
        v43 = v282;
LABEL_129:
        LODWORD(v15) = 0;
LABEL_130:
        v42 = v253 + 1;
        LODWORD(v253) = v42;
        v259 = ++v45;
        if ( v42 < lpVtbl )
        {
          v39 = *(_QWORD *)v332.Data4;
          goto LABEL_62;
        }
LABEL_135:
        v63 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14BF,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL,
          (int)cData);
        v64 = v285;
        Src = v285;
LABEL_136:
        if ( v63 >= 0 )
        {
          v65 = v64[8];
          v66 = CoTaskMemAlloc(v65 + 18);
          v67 = v66;
          if ( !v66 )
          {
            v15 = 0LL;
            pv = 0LL;
            ProposedConnectorFormatForProcessingMode = -2147024882;
            v275 = -2147024882;
            LODWORD(v253) = 6147;
            goto LABEL_146;
          }
          memcpy_0(v66, Src, v65 + 18);
          pv = v67;
          v15 = 0LL;
LABEL_143:
          PropVariantClear(&v283);
          v68 = (struct tWAVEFORMATEX *)pv;
          ProposedConnectorFormatForProcessingMode = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pv);
          if ( ProposedConnectorFormatForProcessingMode >= 0 )
          {
            pv = 0LL;
            v277 = v68;
          }
LABEL_145:
          v275 = ProposedConnectorFormatForProcessingMode;
          LODWORD(v253) = 6147;
          if ( ProposedConnectorFormatForProcessingMode < 0 )
          {
LABEL_146:
            if ( (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
            {
              v338 = "CEndpointCharacteristics::GetDeviceFormatInternal";
              v339 = 50LL;
              v340 = &v253;
              v341 = v69;
              v342 = &v275;
              v343 = v69;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014791D, v70, v71, 5u, &pData);
            }
          }
          CoTaskMemFree(pv);
          pv = 0LL;
          v13 = v254;
          LODWORD(v12) = v247;
LABEL_150:
          if ( ProposedConnectorFormatForProcessingMode < 0 )
            goto LABEL_459;
          if ( v310.m128i_i64[0] != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
            || _mm_srli_si128(v310, 8).m128i_u64[0] != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
          {
            goto LABEL_456;
          }
          Block = 0LL;
          v249 = 0LL;
          v256 = 0;
          v312 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          if ( !(_DWORD)v12 )
          {
            v72 = 1;
            v73 = *((_QWORD *)v13 + 7);
            if ( v73 )
            {
              v296 = 0LL;
              v297 = 0LL;
              v298 = 0LL;
              if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v73 + 40LL))(
                     v73,
                     &PKEY_AudioEndpoint_Disable_SysFx,
                     &v296) >= 0
                && (_WORD)v296 == 19 )
              {
                v72 = v297 == 0;
              }
              PropVariantClear(&v296);
              if ( !v72 )
              {
                v74 = (char *)v13 + 128;
                goto LABEL_259;
              }
            }
          }
          v279 = 96LL * (int)v12;
          v75 = (char *)v13 + v279 + 232;
          if ( !v75[52] )
            goto LABEL_198;
          v76 = (struct _RTL_CRITICAL_SECTION *)(v75 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v75 + 56));
          v294 = v75 + 56;
          v78 = 0LL;
          v266 = 0LL;
          v79 = 0;
          v267 = 0LL;
          v80 = 0;
          v81 = 0;
          if ( *((int *)v75 + 10) > 0 )
          {
            do
            {
              if ( (__int64)v15 < 0 || v81 >= *((_DWORD *)v75 + 10) )
                goto LABEL_505;
              v82 = *((_QWORD *)v75 + 4);
              if ( v79 == v80 )
              {
                if ( v80 )
                {
                  v80 = 2 * v79;
                  if ( (v79 & 0x40000000) != 0 )
                    goto LABEL_222;
                }
                else
                {
                  v80 = 1;
                }
                if ( (unsigned __int64)v80 > 0x7FFFFFF
                  || (v83 = _o__recalloc(v78, v80, 16LL), (v78 = (volatile signed __int32 **)v83) == 0LL) )
                {
LABEL_222:
                  v113 = 2147942414LL;
                  v114 = 502LL;
                  goto LABEL_223;
                }
                HIDWORD(v267) = v80;
                v266 = (volatile signed __int32 **)v83;
              }
              v84 = &v78[2 * v79];
              if ( v84 )
              {
                *v84 = 0LL;
                v84[1] = 0LL;
                v85 = *(__int64 *)((char *)v15 + v82 + 8);
                if ( v85 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v85 + 8));
                  v80 = HIDWORD(v267);
                  v79 = v267;
                  v78 = v266;
                }
                *v84 = *(volatile signed __int32 **)((char *)v15 + v82);
                v84[1] = *(volatile signed __int32 **)((char *)v15 + v82 + 8);
              }
              LODWORD(v267) = ++v79;
              ++v81;
              v15 += 2;
            }
            while ( v81 < *((_DWORD *)v75 + 10) );
            v76 = (struct _RTL_CRITICAL_SECTION *)(v75 + 56);
            v15 = 0LL;
          }
          v86 = 0;
          if ( v79 <= 0 )
            goto LABEL_185;
          v87 = v78;
          while ( 1 )
          {
            if ( v86 < 0 || v86 >= v79 )
            {
              ATL::_AtlRaiseException(0xC000008C, v77);
LABEL_507:
              ATL::_AtlRaiseException(0xC000008C, v106);
              __debugbreak();
            }
            if ( *((_BYTE *)*v87 + 20) )
            {
              v88 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                       &v266,
                                                       (unsigned int)v86);
              v89 = SystemEffectChainDescriptor::Resolve(v88, (struct SystemEffectDescriptor *)v75);
              if ( v89 < 0 )
                break;
            }
            ++v86;
            v87 += 2;
            if ( v86 >= v79 )
            {
              v15 = 0LL;
LABEL_185:
              if ( v78 )
              {
                if ( v79 > 0 )
                {
                  v90 = v78 + 1;
                  v91 = (unsigned int)v79;
                  do
                  {
                    v92 = *v90;
                    if ( *v90 )
                    {
                      if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
                      {
                        (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
                        if ( _InterlockedExchangeAdd(v92 + 3, 0xFFFFFFFF) == 1 )
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
                      }
                    }
                    v90 += 2;
                    --v91;
                  }
                  while ( v91 );
                  v78 = v266;
                }
                free(v78);
                v266 = 0LL;
              }
              v267 = 0LL;
              if ( v76 )
                LeaveCriticalSection(v76);
LABEL_197:
              v13 = v254;
LABEL_198:
              v93 = v279;
              v94 = (char *)v13 + v279 + 616;
              if ( v94[52] )
              {
                v95 = (struct _RTL_CRITICAL_SECTION *)(v94 + 56);
                EnterCriticalSection((LPCRITICAL_SECTION)(v94 + 56));
                v286 = v94 + 56;
                v273 = 0LL;
                v96 = 0;
                v274 = 0LL;
                v97 = 0;
                if ( *((int *)v94 + 10) <= 0 )
                  goto LABEL_203;
                do
                {
                  v98 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v94 + 32, v97);
                  if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                        &v273,
                                        v98) )
                  {
                    v115 = 2147942414LL;
                    v116 = 502LL;
                    goto LABEL_226;
                  }
                  ++v97;
                }
                while ( (signed int)v97 < *((_DWORD *)v94 + 10) );
                v96 = v274;
                v15 = v273;
LABEL_203:
                v99 = 0;
                if ( v96 <= 0 )
                {
LABEL_207:
                  if ( v15 )
                  {
                    if ( v96 > 0 )
                    {
                      v102 = v15;
                      v103 = (unsigned int)v96;
                      do
                      {
                        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v102);
                        v102 += 2;
                        --v103;
                      }
                      while ( v103 );
                    }
                    free(v15);
                    v273 = 0LL;
                  }
                  v274 = 0LL;
                  if ( v95 )
                    LeaveCriticalSection(v95);
                }
                else
                {
                  while ( 1 )
                  {
                    if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                 &v273,
                                                 v99)
                                  + 20LL) )
                    {
                      v100 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                &v273,
                                                                v99);
                      v101 = SystemEffectChainDescriptor::Resolve(v100, (struct SystemEffectDescriptor *)v94);
                      if ( v101 < 0 )
                        break;
                    }
                    if ( (int)++v99 >= v96 )
                      goto LABEL_207;
                  }
                  v115 = (unsigned int)v101;
                  v116 = 508LL;
LABEL_226:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v116,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                    (const char *)v115,
                    (int)cData);
                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v273);
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v286);
                }
              }
              v104 = (char *)v13 + v93 + 1000;
              if ( v104[52] )
              {
                v105 = (struct _RTL_CRITICAL_SECTION *)(v104 + 56);
                EnterCriticalSection((LPCRITICAL_SECTION)(v104 + 56));
                v287 = v104 + 56;
                v106 = 0;
                v107 = 0LL;
                v264 = 0LL;
                v108 = 0;
                v265 = 0LL;
                v109 = 0;
                v110 = 0;
                if ( *((int *)v104 + 10) > 0 )
                {
                  v111 = 0LL;
                  do
                  {
                    if ( v111 < 0 || v110 >= *((_DWORD *)v104 + 10) )
                      goto LABEL_507;
                    v112 = *((_QWORD *)v104 + 4);
                    if ( v108 == v109 )
                    {
                      if ( v109 )
                      {
                        v109 = 2 * v108;
                        if ( (v108 & 0x40000000) != 0 )
                          goto LABEL_264;
                      }
                      else
                      {
                        v109 = 1;
                      }
                      if ( (unsigned __int64)v109 > 0x7FFFFFF
                        || (v117 = _o__recalloc(v107, v109, 16LL), (v107 = (volatile signed __int32 **)v117) == 0LL) )
                      {
LABEL_264:
                        v130 = 2147942414LL;
                        v131 = 502LL;
                        goto LABEL_265;
                      }
                      HIDWORD(v265) = v109;
                      v264 = (volatile signed __int32 **)v117;
                      v106 = 0;
                    }
                    v118 = &v107[2 * v108];
                    if ( v118 )
                    {
                      *v118 = 0LL;
                      v118[1] = 0LL;
                      v119 = *(_QWORD *)(v111 + v112 + 8);
                      if ( v119 )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v119 + 8));
                        v109 = HIDWORD(v265);
                        v108 = v265;
                        v107 = v264;
                      }
                      *v118 = *(volatile signed __int32 **)(v111 + v112);
                      v118[1] = *(volatile signed __int32 **)(v111 + v112 + 8);
                    }
                    LODWORD(v265) = ++v108;
                    ++v110;
                    v111 += 16LL;
                  }
                  while ( v110 < *((_DWORD *)v104 + 10) );
                  v105 = (struct _RTL_CRITICAL_SECTION *)(v104 + 56);
                }
                v120 = 0;
                if ( v108 <= 0 )
                {
LABEL_245:
                  if ( v107 )
                  {
                    if ( v108 > 0 )
                    {
                      v124 = v107 + 1;
                      v125 = (unsigned int)v108;
                      do
                      {
                        v126 = *v124;
                        if ( *v124 )
                        {
                          if ( _InterlockedExchangeAdd(v126 + 2, 0xFFFFFFFF) == 1 )
                          {
                            (**(void (__fastcall ***)(volatile signed __int32 *))v126)(v126);
                            if ( _InterlockedExchangeAdd(v126 + 3, 0xFFFFFFFF) == 1 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v126 + 8LL))(v126);
                          }
                        }
                        v124 += 2;
                        --v125;
                      }
                      while ( v125 );
                      v107 = v264;
                    }
                    free(v107);
                    v264 = 0LL;
                  }
                  v265 = 0LL;
                  if ( v105 )
                    LeaveCriticalSection(v105);
                }
                else
                {
                  v121 = v107;
                  while ( 1 )
                  {
                    if ( v120 < 0 || v120 >= v108 )
                    {
                      ATL::_AtlRaiseException(0xC000008C, v106);
LABEL_509:
                      ATL::_AtlRaiseException(0xC000008C, v128);
                      __debugbreak();
                    }
                    if ( *((_BYTE *)*v121 + 20) )
                    {
                      v122 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                &v264,
                                                                (unsigned int)v120);
                      v123 = SystemEffectChainDescriptor::Resolve(v122, (struct SystemEffectDescriptor *)v104);
                      if ( v123 < 0 )
                        break;
                    }
                    ++v120;
                    v121 += 2;
                    if ( v120 >= v108 )
                      goto LABEL_245;
                  }
                  v130 = (unsigned int)v123;
                  v131 = 508LL;
LABEL_265:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v131,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                    (const char *)v130,
                    (int)cData);
                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v264);
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v287);
                }
                v13 = v254;
              }
              LODWORD(v12) = v247;
              v74 = (char *)v13 + 16 * v247 + 64;
              v15 = 0LL;
LABEL_259:
              v127 = 0;
              v128 = *((_DWORD *)v74 + 2);
              if ( v128 > 0 )
              {
                v21 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v74;
                while ( *((_OWORD *)v21 + v127) != *(_OWORD *)&v312 )
                {
                  if ( ++v127 >= v128 )
                    goto LABEL_263;
                }
                if ( v127 != -1 )
                {
                  v132 = 1;
                  v133 = *((_QWORD *)v13 + 7);
                  if ( !v133 )
                    goto LABEL_274;
                  v302 = 0LL;
                  v303 = 0LL;
                  v304 = 0LL;
                  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v133 + 40LL))(
                         v133,
                         &PKEY_AudioEndpoint_Disable_SysFx,
                         &v302) >= 0
                    && (_WORD)v302 == 19 )
                  {
                    v132 = v303 == 0;
                  }
                  PropVariantClear(&v302);
                  if ( v132 || (v134 = 0, (_DWORD)v12 == 3) )
LABEL_274:
                    v134 = 1;
                  v135 = (int)v12;
                  v278 = (int)v12;
                  v136 = 96LL * (int)v12;
                  v137 = (char *)v13 + v136;
                  if ( !v134 )
                  {
                    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, v137 + 616);
                    if ( (_DWORD)v249 != *(_DWORD *)((char *)v13 + v136 + 624) )
                    {
                      v138 = retaddr;
                      v139 = 570LL;
                      goto LABEL_278;
                    }
                    goto LABEL_279;
                  }
                  if ( *((_BYTE *)v13 + v136 + 668) )
                  {
                    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v13 + v136 + 672));
                    v288 = (char *)v13 + v136 + 672;
                    v145 = 0LL;
                    v271 = 0LL;
                    v146 = 0LL;
                    v272 = 0LL;
                    v147 = 0;
                    if ( *(int *)((char *)v13 + v136 + 656) <= 0 )
                      goto LABEL_295;
                    do
                    {
                      v148 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (char *)v13 + v136 + 648,
                               v147);
                      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                            &v271,
                                            v148) )
                      {
                        v164 = 2147942414LL;
                        v165 = 502LL;
                        goto LABEL_324;
                      }
                      ++v147;
                    }
                    while ( (signed int)v147 < *(_DWORD *)((char *)v13 + v136 + 656) );
                    v146 = (unsigned int)v272;
                    v145 = v271;
LABEL_295:
                    v149 = 0;
                    if ( (int)v146 <= 0 )
                    {
LABEL_299:
                      if ( v145 )
                      {
                        if ( (int)v146 > 0 )
                        {
                          v152 = v145;
                          do
                          {
                            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v152);
                            v152 += 16;
                            --v146;
                          }
                          while ( v146 );
                        }
                        free(v145);
                        v271 = 0LL;
                      }
                      v272 = 0LL;
                      if ( (struct CEndpointCharacteristics *)((char *)v13 + v136 + 672) )
                        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v13 + v136 + 672));
                    }
                    else
                    {
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     &v271,
                                                     v149)
                                      + 20LL) )
                        {
                          v150 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                    &v271,
                                                                    v149);
                          v151 = SystemEffectChainDescriptor::Resolve(
                                   v150,
                                   (struct SystemEffectDescriptor *)(v137 + 616));
                          if ( v151 < 0 )
                            break;
                        }
                        if ( (int)++v149 >= (int)v146 )
                          goto LABEL_299;
                      }
                      v164 = (unsigned int)v151;
                      v165 = 508LL;
LABEL_324:
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v165,
                        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                        (const char *)v164,
                        (int)cData);
                      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v271);
                      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v288);
                    }
                    v135 = v278;
                  }
                  for ( i = 0; (signed int)i < *(_DWORD *)((char *)v13 + v136 + 656); ++i )
                  {
                    for ( j = 0;
                          (signed int)j < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                   (char *)v13 + v136 + 648,
                                                                   i)
                                                    + 8LL);
                          ++j )
                    {
                      v155 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                          (char *)v13 + v136 + 648,
                                          i);
                      v156 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v155, j);
                      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                           &Block,
                                           v156) == -1 )
                      {
                        v157 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                            (char *)v13 + v136 + 648,
                                            i);
                        v158 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v157, j);
                        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                              &Block,
                                              v158) )
                        {
                          v138 = retaddr;
                          v139 = 584LL;
                          goto LABEL_278;
                        }
                      }
                    }
                  }
                  if ( *(_QWORD *)((char *)v13 + v136 + 632) )
                  {
                    v159 = 0;
                    if ( *(int *)(*(_QWORD *)((char *)v13 + v136 + 632) + 8LL) > 0 )
                    {
                      v160 = 0LL;
                      do
                      {
                        v161 = *(_QWORD *)((char *)v13 + v136 + 632);
                        if ( v159 < 0 || v159 >= *(_DWORD *)(v161 + 8) )
                        {
                          ATL::_AtlRaiseException(0xC000008C, v128);
LABEL_511:
                          ATL::_AtlRaiseException(0xC000008C, v173);
                          __debugbreak();
                        }
                        v162 = (_QWORD *)(*(_QWORD *)v161 + 16LL * v159);
                        v128 = 0;
                        if ( (int)v249 <= 0 )
                          goto LABEL_328;
                        while ( 1 )
                        {
                          v163 = (char *)Block + 16 * v128;
                          if ( *v163 == *v162 && v163[1] == v162[1] )
                            break;
                          if ( ++v128 >= (int)v249 )
                            goto LABEL_328;
                        }
                        if ( v128 == -1 )
                        {
LABEL_328:
                          v166 = *(__int64 **)((char *)v13 + v136 + 632);
                          if ( v159 >= *((_DWORD *)v166 + 2) )
                            goto LABEL_509;
                          v167 = *v166;
                          if ( (_DWORD)v249 == HIDWORD(v249) )
                          {
                            if ( HIDWORD(v249) )
                            {
                              v168 = 2 * v249;
                              if ( (v249 & 0x40000000) != 0 )
                                goto LABEL_341;
                            }
                            else
                            {
                              v168 = 1;
                            }
                            if ( (unsigned __int64)v168 > 0x7FFFFFF
                              || (v169 = (void *)_o__recalloc(Block, v168, 16LL)) == 0LL )
                            {
LABEL_341:
                              v138 = retaddr;
                              v139 = 596LL;
LABEL_278:
                              wil::details::in1diag3::Return_Hr(
                                v138,
                                (void *)v139,
                                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                (const char *)0x8007000ELL,
                                (int)cData);
                              break;
                            }
                            HIDWORD(v249) = v168;
                            Block = v169;
                          }
                          v170 = (char *)Block + 16 * (int)v249;
                          if ( v170 )
                            *v170 = *(_OWORD *)(v160 + v167);
                          LODWORD(v249) = v249 + 1;
                        }
                        ++v159;
                        v160 += 16LL;
                      }
                      while ( v159 < *(_DWORD *)(*(_QWORD *)((char *)v13 + v136 + 632) + 8LL) );
                    }
                  }
LABEL_279:
                  v15 = 0LL;
                  v140 = 0;
                  v276 = 0;
                  if ( (int)v249 <= 0 )
                    goto LABEL_451;
                  v141 = 0LL;
                  v279 = 0LL;
                  while ( 1 )
                  {
                    if ( v141 < 0 || v140 >= (int)v249 )
                      goto LABEL_515;
                    v313 = *((_OWORD *)Block + v141);
                    if ( v247 == eHostProcessConnector )
                    {
                      v142 = 1;
                      v143 = *((_QWORD *)v13 + 7);
                      if ( v143 )
                      {
                        memset(&v295, 0, 24);
                        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, __m256i *))(*(_QWORD *)v143 + 40LL))(
                               v143,
                               &PKEY_AudioEndpoint_Disable_SysFx,
                               &v295) >= 0
                          && v295.m256i_i16[0] == 19 )
                        {
                          v142 = (int)v15;
                          LOBYTE(v142) = v295.m256i_i32[2] == 0;
                        }
                        PropVariantClear((PROPVARIANT *)&v295);
                        if ( !v142 )
                        {
                          v144 = (char *)v13 + 128;
                          goto LABEL_440;
                        }
                      }
                    }
                    v309 = 96 * v135;
                    v171 = (__int64)v254 + 96 * v135 + 232;
                    if ( *(_BYTE *)(v171 + 52) )
                    {
                      v172 = (struct _RTL_CRITICAL_SECTION *)(v171 + 56);
                      EnterCriticalSection((LPCRITICAL_SECTION)(v171 + 56));
                      v289 = v171 + 56;
                      v262 = v15;
                      v173 = 0;
                      v174 = 0;
                      v263 = 0LL;
                      v175 = 0;
                      v176 = 0;
                      if ( *(int *)(v171 + 40) > 0 )
                      {
                        v177 = 0LL;
                        do
                        {
                          if ( v177 < 0 || v176 >= *(_DWORD *)(v171 + 40) )
                            goto LABEL_511;
                          v178 = *(_QWORD *)(v171 + 32);
                          if ( v174 == v175 )
                          {
                            if ( v175 )
                            {
                              v175 = 2 * v174;
                              if ( (v174 & 0x40000000) != 0 )
                                goto LABEL_377;
                            }
                            else
                            {
                              v175 = 1;
                            }
                            if ( (unsigned __int64)v175 > 0x7FFFFFF
                              || (v179 = _o__recalloc(v15, v175, 16LL), (v15 = (volatile signed __int32 **)v179) == 0LL) )
                            {
LABEL_377:
                              v189 = 2147942414LL;
                              v190 = 502LL;
                              goto LABEL_378;
                            }
                            HIDWORD(v263) = v175;
                            v262 = (volatile signed __int32 **)v179;
                            v173 = 0;
                          }
                          v180 = &v15[2 * v174];
                          if ( v180 )
                          {
                            *v180 = 0LL;
                            v180[1] = 0LL;
                            v181 = *(_QWORD *)(v177 + v178 + 8);
                            if ( v181 )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v181 + 8));
                              v175 = HIDWORD(v263);
                              v174 = v263;
                              v15 = v262;
                            }
                            *v180 = *(volatile signed __int32 **)(v177 + v178);
                            v180[1] = *(volatile signed __int32 **)(v177 + v178 + 8);
                          }
                          LODWORD(v263) = ++v174;
                          ++v176;
                          v177 += 16LL;
                        }
                        while ( v176 < *(_DWORD *)(v171 + 40) );
                        v172 = (struct _RTL_CRITICAL_SECTION *)(v171 + 56);
                      }
                      v182 = 0;
                      if ( v174 <= 0 )
                      {
LABEL_367:
                        if ( v15 )
                        {
                          if ( v174 > 0 )
                          {
                            v186 = v15 + 1;
                            v187 = (unsigned int)v174;
                            do
                            {
                              v188 = *v186;
                              if ( *v186 )
                              {
                                if ( _InterlockedExchangeAdd(v188 + 2, 0xFFFFFFFF) == 1 )
                                {
                                  (**(void (__fastcall ***)(volatile signed __int32 *))v188)(v188);
                                  if ( _InterlockedExchangeAdd(v188 + 3, 0xFFFFFFFF) == 1 )
                                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v188 + 8LL))(v188);
                                }
                              }
                              v186 += 2;
                              --v187;
                            }
                            while ( v187 );
                            v15 = v262;
                          }
                          free(v15);
                          v15 = 0LL;
                          v262 = 0LL;
                        }
                        v263 = 0LL;
                        if ( v172 )
                          LeaveCriticalSection(v172);
                      }
                      else
                      {
                        v183 = v15;
                        while ( 1 )
                        {
                          if ( v182 < 0 || v182 >= v174 )
                          {
                            ATL::_AtlRaiseException(0xC000008C, v173);
LABEL_513:
                            ATL::_AtlRaiseException(0xC000008C, v205);
                            __debugbreak();
                          }
                          if ( *((_BYTE *)*v183 + 20) )
                          {
                            v184 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                      &v262,
                                                                      (unsigned int)v182);
                            v185 = SystemEffectChainDescriptor::Resolve(v184, (struct SystemEffectDescriptor *)v171);
                            if ( v185 < 0 )
                              break;
                          }
                          ++v182;
                          v183 += 2;
                          if ( v182 >= v174 )
                            goto LABEL_367;
                        }
                        v189 = (unsigned int)v185;
                        v190 = 508LL;
LABEL_378:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v190,
                          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                          (const char *)v189,
                          (int)cData);
                        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v262);
                        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v289);
                        v15 = 0LL;
                      }
                    }
                    v191 = v309;
                    v192 = v254;
                    v193 = (char *)v254 + v309 + 616;
                    if ( v193[52] )
                    {
                      v194 = (struct _RTL_CRITICAL_SECTION *)(v193 + 56);
                      EnterCriticalSection((LPCRITICAL_SECTION)(v193 + 56));
                      v290 = v193 + 56;
                      v269 = v15;
                      v195 = 0;
                      v270 = 0LL;
                      v196 = 0;
                      if ( *((int *)v193 + 10) <= 0 )
                        goto LABEL_387;
                      do
                      {
                        v197 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v193 + 32, v196);
                        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                              &v269,
                                              v197) )
                        {
                          v211 = 2147942414LL;
                          v212 = 502LL;
                          goto LABEL_407;
                        }
                        ++v196;
                      }
                      while ( (signed int)v196 < *((_DWORD *)v193 + 10) );
                      v195 = v270;
                      v15 = v269;
LABEL_387:
                      v198 = 0;
                      if ( v195 <= 0 )
                      {
LABEL_391:
                        if ( v15 )
                        {
                          if ( v195 > 0 )
                          {
                            v201 = v15;
                            v202 = (unsigned int)v195;
                            do
                            {
                              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v201);
                              v201 += 2;
                              --v202;
                            }
                            while ( v202 );
                          }
                          free(v15);
                          v269 = 0LL;
                        }
                        v270 = 0LL;
                        if ( v194 )
                          LeaveCriticalSection(v194);
                      }
                      else
                      {
                        while ( 1 )
                        {
                          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                       &v269,
                                                       v198)
                                        + 20LL) )
                          {
                            v199 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                      &v269,
                                                                      v198);
                            v200 = SystemEffectChainDescriptor::Resolve(v199, (struct SystemEffectDescriptor *)v193);
                            if ( v200 < 0 )
                              break;
                          }
                          if ( (int)++v198 >= v195 )
                            goto LABEL_391;
                        }
                        v211 = (unsigned int)v200;
                        v212 = 508LL;
LABEL_407:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v212,
                          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                          (const char *)v211,
                          (int)cData);
                        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v269);
                        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v290);
                      }
                    }
                    v203 = (char *)v192 + v191 + 1000;
                    if ( !v203[52] )
                      goto LABEL_438;
                    v204 = (struct _RTL_CRITICAL_SECTION *)(v203 + 56);
                    EnterCriticalSection((LPCRITICAL_SECTION)(v203 + 56));
                    v291 = v203 + 56;
                    v205 = 0;
                    v15 = 0LL;
                    v260 = 0LL;
                    v206 = 0;
                    v261 = 0LL;
                    v207 = 0;
                    v208 = 0;
                    if ( *((int *)v203 + 10) > 0 )
                    {
                      v209 = 0LL;
                      do
                      {
                        if ( v209 < 0 || v208 >= *((_DWORD *)v203 + 10) )
                          goto LABEL_513;
                        v210 = *((_QWORD *)v203 + 4);
                        if ( v206 == v207 )
                        {
                          if ( v207 )
                          {
                            v207 = 2 * v206;
                            if ( (v206 & 0x40000000) != 0 )
                              goto LABEL_436;
                          }
                          else
                          {
                            v207 = 1;
                          }
                          if ( (unsigned __int64)v207 > 0x7FFFFFF
                            || (v213 = _o__recalloc(v15, v207, 16LL), (v15 = (volatile signed __int32 **)v213) == 0LL) )
                          {
LABEL_436:
                            v223 = 2147942414LL;
                            v224 = 502LL;
                            goto LABEL_437;
                          }
                          HIDWORD(v261) = v207;
                          v260 = (volatile signed __int32 **)v213;
                          v205 = 0;
                        }
                        v214 = &v15[2 * v206];
                        if ( v214 )
                        {
                          *v214 = 0LL;
                          v214[1] = 0LL;
                          v215 = *(_QWORD *)(v209 + v210 + 8);
                          if ( v215 )
                          {
                            _InterlockedIncrement((volatile signed __int32 *)(v215 + 8));
                            v207 = HIDWORD(v261);
                            v206 = v261;
                            v15 = v260;
                          }
                          *v214 = *(volatile signed __int32 **)(v209 + v210);
                          v214[1] = *(volatile signed __int32 **)(v209 + v210 + 8);
                        }
                        LODWORD(v261) = ++v206;
                        ++v208;
                        v209 += 16LL;
                      }
                      while ( v208 < *((_DWORD *)v203 + 10) );
                      v204 = (struct _RTL_CRITICAL_SECTION *)(v203 + 56);
                    }
                    v216 = 0;
                    if ( v206 <= 0 )
                    {
LABEL_426:
                      if ( v15 )
                      {
                        if ( v206 > 0 )
                        {
                          v220 = v15 + 1;
                          v221 = (unsigned int)v206;
                          do
                          {
                            v222 = *v220;
                            if ( *v220 )
                            {
                              if ( _InterlockedExchangeAdd(v222 + 2, 0xFFFFFFFF) == 1 )
                              {
                                (**(void (__fastcall ***)(volatile signed __int32 *))v222)(v222);
                                if ( _InterlockedExchangeAdd(v222 + 3, 0xFFFFFFFF) == 1 )
                                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v222 + 8LL))(v222);
                              }
                            }
                            v220 += 2;
                            --v221;
                          }
                          while ( v221 );
                          v15 = v260;
                        }
                        free(v15);
                        v15 = 0LL;
                        v260 = 0LL;
                      }
                      v261 = 0LL;
                      if ( v204 )
                        LeaveCriticalSection(v204);
                      goto LABEL_439;
                    }
                    v217 = v15;
                    while ( 1 )
                    {
                      if ( v216 < 0 || v216 >= v206 )
                      {
                        ATL::_AtlRaiseException(0xC000008C, v205);
LABEL_515:
                        ATL::_AtlRaiseException(0xC000008C, v128);
                        JUMPOUT(0x1800140ABLL);
                      }
                      if ( *((_BYTE *)*v217 + 20) )
                      {
                        v218 = *(SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                                  &v260,
                                                                  (unsigned int)v216);
                        v219 = SystemEffectChainDescriptor::Resolve(v218, (struct SystemEffectDescriptor *)v203);
                        if ( v219 < 0 )
                          break;
                      }
                      ++v216;
                      v217 += 2;
                      if ( v216 >= v206 )
                        goto LABEL_426;
                    }
                    v223 = (unsigned int)v219;
                    v224 = 508LL;
LABEL_437:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v224,
                      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                      (const char *)v223,
                      (int)cData);
                    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v260);
                    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v291);
LABEL_438:
                    v15 = 0LL;
LABEL_439:
                    v135 = v278;
                    v13 = v254;
                    v144 = (char *)v254 + 16 * v278 + 64;
                    v140 = v276;
                    v141 = v279;
LABEL_440:
                    v225 = (int)v15;
                    v128 = *((_DWORD *)v144 + 2);
                    if ( v128 <= 0 )
                      goto LABEL_444;
                    v21 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v144;
                    while ( *((_OWORD *)v21 + v225) != v313 )
                    {
                      if ( ++v225 >= v128 )
                        goto LABEL_444;
                    }
                    if ( v225 == -1 )
                    {
LABEL_444:
                      v129 = 1;
                      goto LABEL_452;
                    }
                    v276 = ++v140;
                    v279 = ++v141;
                    if ( v140 >= (int)v249 )
                    {
LABEL_451:
                      v129 = v256;
LABEL_452:
                      if ( Block )
                      {
                        free(Block);
                        Block = v15;
                      }
                      v249 = 0LL;
                      LODWORD(v12) = v247;
                      if ( v129 )
                      {
                        v316 = (struct _GUID)v310;
                        DevicePipeFormat = CEndpointCharacteristics::GetDevicePipeFormat(v13, v247, &v316, v21, &v250);
                        goto LABEL_457;
                      }
LABEL_456:
                      v317 = (struct _GUID)v310;
                      DevicePipeFormat = CEndpointCharacteristics::GetMixFormat(
                                           v13,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                                           &v317,
                                           v21,
                                           &v250);
LABEL_457:
                      ProposedConnectorFormatForProcessingMode = DevicePipeFormat;
                      if ( DevicePipeFormat >= 0 )
                      {
                        v252 = v277;
                        goto LABEL_461;
                      }
LABEL_459:
                      if ( v277 )
                        CoTaskMemFree(v277);
LABEL_461:
                      v14 = v280;
LABEL_462:
                      if ( v281 )
                      {
                        CoTaskMemFree(v281);
                        v281 = v15;
                      }
                      if ( ProposedConnectorFormatForProcessingMode < 0 )
                      {
                        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
                          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                        {
                          WPP_SF_d(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            59LL,
                            &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
                            (unsigned int)ProposedConnectorFormatForProcessingMode);
                        }
                        AudSrvTraceLoggingErrorHelper(
                          "GetDeviceDefaults",
                          0x1C35u,
                          ProposedConnectorFormatForProcessingMode);
                      }
                      if ( ProposedConnectorFormatForProcessingMode >= 0 )
                      {
                        if ( *(_QWORD *)&v14->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
                          && *(_QWORD *)v14->Data4 == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
                        {
                          v292 = v15;
                          v227 = (volatile signed __int32 **)*((_QWORD *)v13 + 2);
                          v292 = v227;
                          (*((void (__fastcall **)(volatile signed __int32 **))*v227 + 1))(v227);
                          v318 = *a5;
                          ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMixFormat(
                                                                       v13,
                                                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                                                                       &v318,
                                                                       v228,
                                                                       &v258);
                          if ( v227 )
                          {
                            v292 = v15;
                            (*((void (__fastcall **)(volatile signed __int32 **))*v227 + 2))(v227);
                          }
                        }
                        if ( ProposedConnectorFormatForProcessingMode >= 0 )
                        {
                          v319 = *a5;
                          if ( CEndpointCharacteristics::GetStreamGroupFormat(
                                 v13,
                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                                 &v319,
                                 &v251) < 0
                            || !v251 )
                          {
                            v229 = v250;
                            cbSize = v250->cbSize;
                            v231 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
                            v232 = v231;
                            if ( v231 )
                            {
                              memcpy_0(v231, v229, cbSize + 18);
                              ProposedConnectorFormatForProcessingMode = (int)v15;
                              v251 = v232;
                            }
                            else
                            {
                              ProposedConnectorFormatForProcessingMode = -2147024882;
                              v251 = 0LL;
                            }
                          }
                          goto LABEL_500;
                        }
                      }
                      goto LABEL_502;
                    }
                  }
                }
              }
LABEL_263:
              v129 = 0;
              goto LABEL_452;
            }
          }
          v113 = (unsigned int)v89;
          v114 = 508LL;
LABEL_223:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v114,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v113,
            (int)cData);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v266);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v294);
          v15 = 0LL;
          goto LABEL_197;
        }
        v13 = v254;
        LODWORD(v12) = v247;
        v15 = 0LL;
LABEL_141:
        v327 = v295;
        ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                     (int)v13,
                                                     0,
                                                     v12,
                                                     (int)&v327,
                                                     (struct tWAVEFORMATEX **)&pv);
        if ( ProposedConnectorFormatForProcessingMode >= 0 )
        {
          ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                                                       v13,
                                                       0,
                                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
                                                       (const struct tWAVEFORMATEX *)pv);
          if ( ProposedConnectorFormatForProcessingMode >= 0 )
            goto LABEL_143;
        }
        goto LABEL_145;
      }
    }
  }
  v320 = *a7;
  v321 = *a6;
  v322 = *a5;
  ProposedConnectorFormatForProcessingMode = DeriveConnectorFormatFromStreamFormat(
                                               this,
                                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                                               a8,
                                               &v322,
                                               &v321,
                                               &v320,
                                               1,
                                               &v252);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_502;
  v293 = 0LL;
  v233 = 0LL;
  v268 = 0LL;
  v234 = 0LL;
  Src = 0LL;
  v235 = 0LL;
  v259 = 0LL;
  ProposedConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                               v252,
                                               (unsigned int)v252->cbSize + 18,
                                               &v293,
                                               0.0,
                                               0);
  v237 = v293;
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    ProposedConnectorFormatForProcessingMode = DeriveDevicePipeFormatFromConnectorFormat(v13, v236, v247, v293, &v268);
    v233 = v268;
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      v323 = *a6;
      ProposedConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(
                                                   v13,
                                                   &v323,
                                                   v247,
                                                   v268,
                                                   &v259,
                                                   (struct IAudioMediaType **)&Src);
      if ( ProposedConnectorFormatForProcessingMode < 0 )
      {
        v235 = v259;
      }
      else
      {
        v238 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v233->lpVtbl->GetAudioFormat)(v233);
        ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v238, &v250);
        v235 = v259;
        if ( ProposedConnectorFormatForProcessingMode >= 0 )
        {
          v239 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v259->lpVtbl->GetAudioFormat)(v259);
          ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v239, &v258);
          v234 = Src;
          if ( ProposedConnectorFormatForProcessingMode >= 0 )
          {
            if ( Src )
            {
              v240 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)Src + 40LL))(Src);
              ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v240, &v251);
            }
            else
            {
              ProposedConnectorFormatForProcessingMode = CloneWaveFormat(v250, &v251);
            }
          }
          goto LABEL_492;
        }
      }
      v234 = Src;
    }
  }
LABEL_492:
  if ( v235 )
    ((void (__fastcall *)(struct IAudioMediaType *))v235->lpVtbl->Release)(v235);
  if ( v234 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v234 + 16LL))(v234);
  if ( v233 )
    ((void (__fastcall *)(struct IAudioMediaType *))v233->lpVtbl->Release)(v233);
  if ( v237 )
    ((void (__fastcall *)(struct IAudioMediaType *))v237->lpVtbl->Release)(v237);
LABEL_500:
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    v241 = v252;
    v252 = 0LL;
    *v308 = v241;
    v242 = v251;
    v251 = 0LL;
    *v307 = v242;
    v243 = v258;
    v258 = 0LL;
    *v306 = v243;
    v244 = v250;
    v250 = 0LL;
    *v305 = v244;
  }
LABEL_502:
  CoTaskMemFree(v250);
  v250 = 0LL;
  CoTaskMemFree(v258);
  v258 = 0LL;
  CoTaskMemFree(v251);
  v251 = 0LL;
  CoTaskMemFree(v252);
  v252 = 0LL;
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
