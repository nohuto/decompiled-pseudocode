/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180001CB0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180001D98 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA-AW.c)
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z @ 0x18000E550 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z.c)
 *     std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x18000FC70 (std--_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std--allocator_int__long_SystemEffectD.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010540 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x1800109E0 (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180010A50 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x180013060 (-GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013980 (-Release@-$RuntimeClass@U-$InterfaceList@UICompositeSystemEffect@@U-$InterfaceList@UIAudioProces.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800139E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18002C540 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??$try_copy@UIAPOAuxiliaryInputConfiguration@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18002E650 (--$try_copy@UIAPOAuxiliaryInputConfiguration@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returnc.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032FD4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z @ 0x180079FB4 (-IsCriticalAPO@CEndpointCharacteristics@@QEAAHW4APO_TYPE@@@Z.c)
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18007B524 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 *     ??1?$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ @ 0x18007CE74 (--1-$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18008263C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?IsOutOfProcOffloadUsed@@YA_N_N@Z @ 0x1800ABC80 (-IsOutOfProcOffloadUsed@@YA_N_N@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BD430 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=25
__int64 __fastcall InitializeStreamAndModeDescriptors(
        CEndpointCharacteristics *a1,
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
        GUID **a18,
        _QWORD *a19)
{
  unsigned int v19; // r14d
  __int64 v21; // r12
  _QWORD *v22; // rbx
  GUID *v23; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // r13d
  __int64 v25; // r14
  __int64 v26; // r15
  struct _GUID v27; // xmm6
  CCompositeSystemEffect *v28; // rbx
  __int64 v29; // r12
  BOOL v30; // edi
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r8d
  int v34; // edi
  int v35; // r11d
  __int64 v36; // rdx
  __int64 *v37; // rcx
  int v38; // r10d
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 *v41; // rax
  volatile signed __int32 *v42; // rdi
  __int64 v43; // r15
  volatile signed __int32 *v44; // r13
  __int64 v45; // rcx
  volatile signed __int32 *v46; // r12
  __int64 v47; // rcx
  __int64 (__fastcall *v48)(__int64, __int64 *, __int64 *); // rax
  int v49; // eax
  int v50; // r8d
  int v51; // ecx
  int v52; // edi
  __int64 v53; // r9
  __int64 *v54; // rdx
  int v55; // r11d
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // r11
  int Lfx; // eax
  unsigned int v60; // r14d
  unsigned int v61; // r15d
  SIZE_T v62; // rbx
  GUID *v63; // rax
  GUID *v64; // rdi
  unsigned int v65; // edx
  __int64 v66; // rcx
  enum FEATURE_CHANGE_TIME v67; // r8d
  unsigned int *p_Data2; // r14
  unsigned int i; // r12d
  struct _GUID *v70; // rdx
  GUID *v71; // rax
  struct _GUID v72; // xmm6
  CCompositeSystemEffect *v73; // rdi
  __int64 v74; // rbx
  __int64 v75; // r15
  signed int v76; // edx
  BOOL v77; // ebx
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // r14
  int v81; // ebx
  int v82; // ecx
  int v83; // r11d
  __int64 v84; // r9
  __int64 *v85; // r8
  int v86; // r10d
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 SupportedConnectorModes; // rax
  int v91; // r13d
  int v92; // edx
  __int64 v93; // r8
  __int64 v94; // rax
  CCompositeSystemEffect *v95; // r9
  signed int v96; // edx
  BOOL v97; // ebx
  __int64 v98; // rcx
  int v99; // ebx
  int v100; // ecx
  int v101; // r11d
  __int64 v102; // r9
  __int64 *v103; // r8
  int v104; // r10d
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // r14
  int v108; // ecx
  void *v109; // rbx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx
  void *v113; // rax
  int v114; // eax
  struct IMMDevice *v115; // rdx
  int (*v116)(CCompositeSystemEffect *__hidden, struct IMMDevice *, struct _GUID *__struct_ptr, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **); // rax
  int v117; // eax
  struct _GUID **v118; // r8
  CCompositeSystemEffect *v119; // r9
  __int64 (__fastcall *v120)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **); // rax
  void *v121; // rbx
  void **v122; // r14
  void *v123; // rcx
  __int64 v124; // rax
  void (__fastcall *v125)(CCompositeSystemEffect *); // rax
  GUID *v126; // rax
  LPVOID v127; // rax
  struct _GUID **v129; // r8
  __int64 (__fastcall *v130)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **); // rax
  void *v131; // rdi
  void **v132; // r14
  void *v133; // rcx
  void (__fastcall *v134)(CCompositeSystemEffect *); // rax
  __int64 v135; // rax
  int v136; // r8d
  int v137; // r9d
  _QWORD *v138; // rdx
  __int64 v139; // rax
  int v140; // edx
  int v141; // r8d
  _QWORD *v142; // rcx
  __int64 v143; // rax
  unsigned int v144; // r15d
  __int64 v145; // r14
  char *v146; // rax
  char *v147; // rbx
  __int64 v148; // r8
  unsigned __int8 v149; // r14
  unsigned int v150; // ecx
  GUID *v151; // rax
  volatile signed __int32 *v152; // rbx
  __int64 v153; // rdx
  __int64 v154; // rdx
  GUID *v155; // rax
  GUID *v156; // rbx
  SIZE_T v157; // rdi
  GUID *v158; // rax
  GUID *v159; // rbx
  unsigned int j; // r8d
  int v161; // ebx
  int StreamEffect; // eax
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // r9
  void *v166; // rbx
  void **v167; // rdi
  void *v168; // rcx
  __int64 v169; // rax
  __int64 v170; // r9
  void *v171; // rbx
  void **v172; // rdi
  void *v173; // rcx
  bool v174; // cl
  unsigned int v175; // r14d
  SIZE_T v176; // rdi
  GUID *v177; // rax
  GUID *v178; // rbx
  unsigned int v179; // r8d
  unsigned int v180; // ecx
  __int64 v181; // rdx
  GUID *v182; // rax
  GUID *v183; // rbx
  _QWORD *v184; // rax
  __int64 *v185; // rax
  _QWORD *v186; // rax
  __int64 *v187; // rax
  __int64 v188; // rdx
  unsigned int v189; // r15d
  __int64 v190; // r14
  char *v191; // rax
  char *v192; // rbx
  __int64 v193; // r8
  unsigned int v194; // ecx
  struct IAudioSystemEffects2 **v195; // [rsp+28h] [rbp-E0h]
  int v196; // [rsp+28h] [rbp-E0h]
  int v197; // [rsp+28h] [rbp-E0h]
  bool v198; // [rsp+68h] [rbp-A0h]
  unsigned int v201; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v202; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v203; // [rsp+80h] [rbp-88h]
  CCompositeSystemEffect *v204; // [rsp+88h] [rbp-80h] BYREF
  GUID *v205; // [rsp+90h] [rbp-78h]
  unsigned int v206; // [rsp+98h] [rbp-70h] BYREF
  int v207; // [rsp+9Ch] [rbp-6Ch]
  CCompositeSystemEffect *v208; // [rsp+A0h] [rbp-68h] BYREF
  struct IAudioProcessingObject *v209; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v210; // [rsp+B0h] [rbp-58h]
  LPVOID v211; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID *v212; // [rsp+C0h] [rbp-48h]
  int v213; // [rsp+C8h] [rbp-40h] BYREF
  struct ICompositeSystemEffect *v214; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v216; // [rsp+E0h] [rbp-28h]
  struct ICompositeSystemEffect *v217; // [rsp+E8h] [rbp-20h] BYREF
  LPVOID v218; // [rsp+F0h] [rbp-18h] BYREF
  void *v219; // [rsp+F8h] [rbp-10h] BYREF
  int v220; // [rsp+100h] [rbp-8h] BYREF
  BOOL v221; // [rsp+108h] [rbp+0h] BYREF
  int v222; // [rsp+110h] [rbp+8h] BYREF
  int v223; // [rsp+118h] [rbp+10h] BYREF
  __int16 v224; // [rsp+11Ch] [rbp+14h]
  int v225; // [rsp+120h] [rbp+18h] BYREF
  LPVOID v226; // [rsp+128h] [rbp+20h] BYREF
  __int64 v227; // [rsp+130h] [rbp+28h] BYREF
  __int64 v228; // [rsp+138h] [rbp+30h] BYREF
  CCompositeSystemEffect *v229; // [rsp+140h] [rbp+38h] BYREF
  int v230; // [rsp+148h] [rbp+40h]
  __int16 v231; // [rsp+14Ch] [rbp+44h]
  __int64 v232; // [rsp+158h] [rbp+50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+160h] [rbp+58h] BYREF
  LPCRITICAL_SECTION v234; // [rsp+168h] [rbp+60h] BYREF
  LPCRITICAL_SECTION v235; // [rsp+170h] [rbp+68h] BYREF
  __int64 v236; // [rsp+178h] [rbp+70h] BYREF
  __int64 v237; // [rsp+180h] [rbp+78h] BYREF
  volatile signed __int32 *v238; // [rsp+188h] [rbp+80h]
  struct _GUID v239; // [rsp+198h] [rbp+90h]
  struct _GUID v240; // [rsp+1A8h] [rbp+A0h] BYREF
  PROPVARIANT v241; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v242; // [rsp+1C0h] [rbp+B8h]
  __int64 v243; // [rsp+1C8h] [rbp+C0h]
  PROPVARIANT v244; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v245; // [rsp+1D8h] [rbp+D0h]
  __int64 v246; // [rsp+1E0h] [rbp+D8h]
  PROPVARIANT pvar; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v248; // [rsp+1F0h] [rbp+E8h]
  __int64 v249; // [rsp+1F8h] [rbp+F0h]
  void *v250; // [rsp+200h] [rbp+F8h] BYREF
  GUID **v251; // [rsp+208h] [rbp+100h]
  __int64 v252; // [rsp+210h] [rbp+108h]
  SystemEffectChainDescriptor *v253; // [rsp+218h] [rbp+110h] BYREF
  std::_Ref_count_base *v254; // [rsp+220h] [rbp+118h]
  struct _GUID v255; // [rsp+228h] [rbp+120h]
  SystemEffectChainDescriptor *v256; // [rsp+238h] [rbp+130h] BYREF
  std::_Ref_count_base *v257; // [rsp+240h] [rbp+138h]
  struct _GUID v258; // [rsp+248h] [rbp+140h] BYREF
  struct _GUID v259; // [rsp+258h] [rbp+150h] BYREF
  struct _GUID v260; // [rsp+268h] [rbp+160h]
  struct _GUID v261; // [rsp+278h] [rbp+170h]
  struct _GUID v262; // [rsp+288h] [rbp+180h] BYREF
  void **v263; // [rsp+298h] [rbp+190h] BYREF
  void *v264; // [rsp+2A0h] [rbp+198h]
  char v265; // [rsp+2A8h] [rbp+1A0h]
  void **v266; // [rsp+2B0h] [rbp+1A8h] BYREF
  void *v267; // [rsp+2B8h] [rbp+1B0h]
  char v268; // [rsp+2C0h] [rbp+1B8h]
  void **v269; // [rsp+2C8h] [rbp+1C0h] BYREF
  void *v270; // [rsp+2D0h] [rbp+1C8h]
  char v271; // [rsp+2D8h] [rbp+1D0h]
  void **v272; // [rsp+2E0h] [rbp+1D8h] BYREF
  void *v273; // [rsp+2E8h] [rbp+1E0h]
  char v274; // [rsp+2F0h] [rbp+1E8h]
  __int64 v275; // [rsp+2F8h] [rbp+1F0h]
  struct _GUID v276; // [rsp+308h] [rbp+200h] BYREF
  __int64 v277; // [rsp+318h] [rbp+210h]
  volatile signed __int32 *v278; // [rsp+320h] [rbp+218h]
  int v279[4]; // [rsp+328h] [rbp+220h] BYREF
  struct _GUID v280; // [rsp+338h] [rbp+230h] BYREF
  struct _GUID v281; // [rsp+348h] [rbp+240h] BYREF
  struct _GUID v282; // [rsp+358h] [rbp+250h] BYREF
  CLSID pClsid; // [rsp+368h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3C0h] [rbp+2B8h]

  v275 = -2LL;
  v203 = a4;
  v19 = a3;
  v207 = a2;
  v21 = (__int64)a1;
  v212 = a7;
  v251 = a18;
  v22 = a19;
  v210 = a19;
  v23 = 0LL;
  v205 = 0LL;
  v216 = 0LL;
  v198 = 0;
  v252 = *((_QWORD *)a1 + 2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v252 + 8LL))(v252);
  if ( !a18 )
  {
    v24 = a5;
    v70 = v212;
    goto LABEL_77;
  }
  if ( (v19 & 0x800000) != 0 )
  {
    if ( a2 )
    {
      v60 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8000FFFFLL,
        (int)v195);
      goto LABEL_184;
    }
    v151 = (GUID *)CoTaskMemAlloc(0xD0uLL);
    if ( !v151 )
    {
      v60 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL,
        (int)v195);
      goto LABEL_184;
    }
    v23 = v151;
    v205 = v151;
    v151->Data1 = 0;
    *(_DWORD *)v151[5].Data4 = v19;
    *(_QWORD *)&v151[6].Data1 = 0LL;
    *(_DWORD *)&v151[8].Data2 = 0;
    v151[7].Data1 = 0;
    v151[(unsigned int)(*(_DWORD *)&v151[8].Data2)++ + 12] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
    *(_DWORD *)&v151->Data2 = 1;
    v24 = a5;
    goto LABEL_74;
  }
  if ( a2 )
  {
    v24 = a5;
  }
  else
  {
    v24 = a5;
    if ( (a5 & 0xFFFFFFFC) == 0 && a5 != eOffloadConnector )
    {
      v211 = 0LL;
      v201 = 0;
      if ( a5 == eLoopbackConnector )
        goto LABEL_64;
      v204 = 0LL;
      v25 = 96LL * (int)a5 + v21 + 224;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v25);
      v26 = 96LL * (int)a5 + v21;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v26 + 608));
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v26 + 992));
      if ( !*((_DWORD *)a1 + a5 + 10) )
      {
        v204 = 0LL;
        Lfx = CEndpointCharacteristics::GetLfx(a1, a5, &v204, 0LL, v195);
        v60 = Lfx;
        if ( Lfx >= 0 )
          goto LABEL_61;
        v153 = 262LL;
        goto LABEL_294;
      }
      v27 = *v212;
      v28 = 0LL;
      v204 = 0LL;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v25);
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v26 + 608));
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v26 + 992));
      v29 = (__int64)a1;
      if ( *((_DWORD *)a1 + a5 + 10) )
      {
        v30 = 1;
        v31 = *((_QWORD *)a1 + 7);
        if ( !v31 )
          goto LABEL_10;
        v241 = 0LL;
        v242 = 0LL;
        v243 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
               v31,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v241) >= 0
          && (_WORD)v241 == 19 )
        {
          v30 = v242 == 0;
        }
        PropVariantClear(&v241);
        if ( v30 || a5 == eKeywordDetectorConnector )
        {
LABEL_10:
          v32 = 1;
          v33 = 0;
        }
        else
        {
          v33 = 0;
          v32 = 0;
        }
        v276 = v27;
        if ( v32 )
        {
          v259 = v27;
          v239 = v27;
          if ( *(_BYTE *)(v25 + 52) )
          {
            v34 = 0;
            v35 = *(_DWORD *)(v25 + 40);
            if ( v35 > 0 )
            {
              v36 = 0LL;
              do
              {
                if ( v36 < 0 || v34 >= v35 )
                {
                  RaiseException(0xC000008C, 1u, 0, 0LL);
                  JUMPOUT(0x1800667B4LL);
                }
                v37 = *(__int64 **)(v36 + *(_QWORD *)(v25 + 32));
                if ( *((_BYTE *)v37 + 16) )
                {
                  if ( v34 >= v35 )
                    goto LABEL_280;
                  v38 = *((_DWORD *)v37 + 2);
                  if ( v38 > 0 )
                  {
                    v39 = *v37;
                    while ( 1 )
                    {
                      v40 = *(_QWORD *)(v39 + 16LL * v33) - *(_QWORD *)&v239.Data1;
                      if ( !v40 )
                        v40 = *(_QWORD *)(v39 + 16LL * v33 + 8) - *(_QWORD *)v239.Data4;
                      if ( !v40 )
                        break;
                      if ( ++v33 >= v38 )
                        goto LABEL_264;
                    }
                    if ( v33 != -1 )
                    {
                      Microsoft::WRL::Wrappers::CriticalSection::Lock(v25 + 56, (__int64)&lpCriticalSection);
                      if ( v34 < 0 || v34 >= *(_DWORD *)(v25 + 40) )
                      {
                        RaiseException(0xC000008C, 1u, 0, 0LL);
LABEL_280:
                        RaiseException(0xC000008C, 1u, 0, 0LL);
                        JUMPOUT(0x18006679FLL);
                      }
                      v41 = (__int64 *)(*(_QWORD *)(v25 + 32) + 16LL * v34);
                      v42 = (volatile signed __int32 *)v41[1];
                      v43 = *v41;
                      if ( v42 )
                      {
                        _InterlockedIncrement(v42 + 2);
                        v23 = v205;
                        v28 = v204;
                      }
                      v278 = v42;
                      v277 = v43;
                      v44 = *(volatile signed __int32 **)(v43 + 32);
                      v45 = *(_QWORD *)(v43 + 24);
                      if ( v44 )
                      {
                        _InterlockedIncrement(v44 + 2);
                        v23 = v205;
                        v28 = v204;
                      }
                      v46 = v44;
                      v238 = v44;
                      v237 = v45;
                      *(_BYTE *)(v43 + 16) = 0;
                      v236 = v43;
                      v232 = v25;
                      v47 = *(_QWORD *)(v45 + 56);
                      if ( !v47 )
                      {
                        std::_Xbad_function_call();
                        JUMPOUT(0x180066685LL);
                      }
                      v48 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v47 + 16LL);
                      if ( v48 == std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call )
                        v49 = std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call(
                                v47,
                                &v232,
                                &v236);
                      else
                        v49 = v48(v47, &v232, &v236);
                      if ( v49 >= 0 )
                      {
                        if ( !*(_BYTE *)(v43 + 16) )
                        {
                          v46 = 0LL;
                          v238 = 0LL;
                          if ( v44 )
                            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v44);
                        }
                        if ( v46 )
                        {
                          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
                          {
                            v152 = v238;
                            (**(void (__fastcall ***)(volatile signed __int32 *))v238)(v238);
                            if ( _InterlockedExchangeAdd(v152 + 3, 0xFFFFFFFF) == 1 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v238 + 8LL))(v238);
                          }
                          v28 = v204;
                          v23 = v205;
                        }
                        if ( v42 )
                        {
                          if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
                          {
                            (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
                            if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
                          }
                          v28 = v204;
                          v23 = v205;
                        }
                        if ( lpCriticalSection )
                          LeaveCriticalSection(lpCriticalSection);
                        v24 = a5;
                        v29 = (__int64)a1;
                        break;
                      }
                      wil::details::in1diag3::Return_Hr_NoOriginate(
                        retaddr,
                        (void *)0x63,
                        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                        (const char *)(unsigned int)v49,
                        (int)v195);
                      std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(&v237);
                      if ( v42 )
                        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v42);
                      if ( lpCriticalSection )
                        LeaveCriticalSection(lpCriticalSection);
                      v24 = a5;
                      v29 = (__int64)a1;
LABEL_288:
                      if ( !*(_QWORD *)(v25 + 16)
                        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                           *(_QWORD *)(v25 + 16),
                                           &v259) == -1 )
                      {
                        v58 = 0LL;
                      }
                      goto LABEL_59;
                    }
                  }
LABEL_264:
                  v33 = 0;
                }
                ++v34;
                v36 += 16LL;
              }
              while ( v34 < v35 );
            }
          }
          v50 = 0;
          v51 = 0;
          v52 = *(_DWORD *)(v25 + 40);
          if ( v52 <= 0 )
            goto LABEL_288;
          v53 = 0LL;
          while ( 1 )
          {
            if ( v53 < 0 || v51 >= v52 )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              JUMPOUT(0x1800667FCLL);
            }
            v54 = *(__int64 **)(v53 + *(_QWORD *)(v25 + 32));
            v55 = *((_DWORD *)v54 + 2);
            if ( v55 > 0 )
            {
              v56 = *v54;
              while ( 1 )
              {
                v57 = *(_QWORD *)(v56 + 16LL * v50) - *(_QWORD *)&v239.Data1;
                if ( !v57 )
                  v57 = *(_QWORD *)(v56 + 16LL * v50 + 8) - *(_QWORD *)v239.Data4;
                if ( !v57 )
                  break;
                if ( ++v50 >= v55 )
                  goto LABEL_283;
              }
              if ( v50 != -1 )
                break;
            }
LABEL_283:
            ++v51;
            v53 += 16LL;
            v50 = 0;
            if ( v51 >= v52 )
              goto LABEL_288;
          }
          if ( v51 == -1 )
            goto LABEL_288;
          if ( v51 < 0 || v51 >= v52 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x1800667E7LL);
          }
          v58 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 16LL * v51);
LABEL_59:
          if ( !v58 )
            goto LABEL_62;
          goto LABEL_60;
        }
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v25, &v276) != -1 )
        {
LABEL_60:
          *(struct _GUID *)v279 = v27;
          Lfx = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                  v29,
                  v25,
                  1u,
                  0,
                  (struct _GUID *)v279,
                  0,
                  0,
                  v24,
                  &v204,
                  0LL,
                  0LL);
          v60 = Lfx;
          if ( Lfx >= 0 )
          {
LABEL_61:
            v28 = v204;
            if ( v204 )
            {
              v129 = (struct _GUID **)(wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v266, (__int64)&v211)
                                     + 8);
              v130 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **))(*(_QWORD *)v28 + 32LL);
              if ( v130 == CCompositeSystemEffect::GetClsids )
                CCompositeSystemEffect::GetClsids(v28, &v201, v129);
              else
                v130(v28, &v201, v129);
              if ( v268 )
              {
                v131 = v267;
                v132 = v266;
                v133 = *v266;
                if ( v267 != *v266 )
                {
                  if ( v133 )
                    CoTaskMemFree(v133);
                  *v132 = v131;
                }
              }
            }
            goto LABEL_62;
          }
          v153 = 257LL;
LABEL_294:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v153,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)Lfx,
            (int)v195);
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v204);
          goto LABEL_320;
        }
      }
LABEL_62:
      if ( v28 )
      {
        v134 = *(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v28 + 16LL);
        if ( (char *)v134 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v28);
        else
          v134(v28);
      }
      v19 = a3;
LABEL_64:
      switch ( v203 )
      {
        case 0u:
          v61 = v201 + 4;
          v62 = 16 * (v201 + 4 + 12LL);
          v63 = (GUID *)CoTaskMemAlloc(v62);
          v64 = v63;
          if ( v63 )
          {
            v23 = v63;
            v205 = v63;
            memset(v63, 0, v62);
            v23->Data1 = 0;
            *(_DWORD *)v23[5].Data4 = v19;
            *(_QWORD *)&v23[6].Data1 = 0LL;
            p_Data2 = (unsigned int *)&v23[8].Data2;
            *(_DWORD *)&v23[8].Data2 = 0;
            v23[7].Data1 = 0;
            for ( i = 0; i < v201; ++i )
            {
              v135 = *((_QWORD *)v211 + 2 * i) - *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1;
              if ( !v135 )
                v135 = *((_QWORD *)v211 + 2 * i + 1) - *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4;
              if ( !v135 )
              {
                if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
                {
                  if ( RpcImpersonateClient(0LL) >= 0 )
                  {
                    v161 = IsVirtualSurroundAllowedForProcess(a8);
                    RpcRevertToSelf();
                    if ( !v161 )
                      continue;
                  }
                }
              }
              if ( *p_Data2 > 0x1F )
              {
                v60 = -2147418113;
                v154 = 302LL;
                goto LABEL_319;
              }
              v64[7].Data1 |= 1 << *p_Data2;
              v66 = 2 * (*p_Data2 + 12LL);
              v64[(*p_Data2)++ + 12] = *((GUID *)v211 + i);
            }
            v64[(*p_Data2)++ + 12] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
            v64[(*p_Data2)++ + 12] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
            v64[(*p_Data2)++ + 12] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
            if ( a17 )
            {
              if ( (`wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
                wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::GetCachedFeatureEnabledState(v66, v65, v67);
              v230 = 0;
              LOBYTE(v231) = 0;
              v223 = 0;
              v224 = v231;
              wil_details_FeaturePropertyCache_ReportUsageToService(
                (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::GetFeaturePropertyCache'::`2'::data,
                9662156LL,
                (const struct FEATURE_LOGGED_TRAITS *)&v223);
              if ( CoGetPSClsid(&GUID_1cfdfbb6_d1cc_4b8c_8e78_e9281f547eec, &pClsid) >= 0 )
                v64[(*p_Data2)++ + 12] = GUID_ee9dfa92_62ec_494f_8f5d_b3935d0f68bd;
            }
            *(_DWORD *)&v64->Data2 = a3 >> 31;
            break;
          }
          v154 = 276LL;
LABEL_318:
          v60 = -2147024882;
LABEL_319:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v154,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v60,
            (int)v195);
LABEL_320:
          if ( v211 )
            CoTaskMemFree(v211);
          goto LABEL_184;
        case 1u:
          v61 = v201 + 2;
          v157 = 16 * (v201 + 2 + 12LL);
          v158 = (GUID *)CoTaskMemAlloc(v157);
          v159 = v158;
          if ( !v158 )
          {
            v154 = 340LL;
            goto LABEL_318;
          }
          v23 = v158;
          v205 = v158;
          memset(v158, 0, v157);
          v159->Data1 = 1;
          *(_DWORD *)v159[5].Data4 = v19;
          *(_QWORD *)&v159[6].Data1 = 0LL;
          v159[7].Data1 = 0;
          p_Data2 = (unsigned int *)&v159[8].Data2;
          *(_DWORD *)&v159[8].Data2 = 0;
          for ( j = 0; j < v201; ++j )
          {
            if ( *p_Data2 > 0x1F )
            {
              v60 = -2147418113;
              v154 = 350LL;
              goto LABEL_319;
            }
            v159[7].Data1 |= 1 << *p_Data2;
            v159[(*p_Data2)++ + 12] = *((GUID *)v211 + j);
          }
          v159[(*p_Data2)++ + 12] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          v159[(*p_Data2)++ + 12] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          *(_DWORD *)&v159->Data2 = a3 >> 31;
          break;
        case 2u:
          v61 = 3;
          v155 = (GUID *)CoTaskMemAlloc(0xF0uLL);
          v156 = v155;
          if ( !v155 )
          {
            v154 = 369LL;
            goto LABEL_318;
          }
          v23 = v155;
          v205 = v155;
          memset(v155, 0, 0xF0uLL);
          v156->Data1 = (v24 != eLoopbackConnector) + 1;
          *(_DWORD *)v156[5].Data4 = v19;
          *(_QWORD *)&v156[6].Data1 = 0LL;
          p_Data2 = (unsigned int *)&v156[8].Data2;
          *(_DWORD *)&v156[8].Data2 = 3;
          v156[12] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
          v156[13] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          v156[14] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          v156[7].Data1 = 0;
          *(_DWORD *)&v156->Data2 = a3 >> 31;
          break;
        default:
          v60 = -2147024809;
          v154 = 386LL;
          goto LABEL_319;
      }
      if ( *p_Data2 <= v61 )
      {
        if ( v211 )
          CoTaskMemFree(v211);
        v24 = a5;
        v21 = (__int64)a1;
LABEL_73:
        v22 = v210;
LABEL_74:
        v70 = v212;
        *(GUID *)((char *)v23 + 116) = *v212;
        *(_DWORD *)v23->Data4 = v24;
        *(_QWORD *)&v23[5].Data1 = a9;
        *(_DWORD *)v23[4].Data4 = *(unsigned __int16 *)(a9 + 16) + 18;
        *(_QWORD *)v23[1].Data4 = a11;
        *(_QWORD *)&v23[2].Data1 = a12;
        *(_DWORD *)&v23->Data4[4] = a8;
        *(_QWORD *)&v23[1].Data1 = a13;
        v71 = a14;
        if ( !a14 )
          v71 = &GUID_00000000_0000_0000_0000_000000000000;
        v23[3] = *v71;
        *(GUID *)((char *)v23 + 136) = *(GUID *)a15;
        *(GUID *)((char *)v23 + 152) = *(GUID *)(a15 + 16);
        *(GUID *)((char *)v23 + 168) = *(GUID *)(a15 + 32);
        *(_QWORD *)v23[11].Data4 = *(_QWORD *)(a15 + 48);
        *(_QWORD *)&v23[4].Data1 = a16;
LABEL_77:
        if ( !v22 )
        {
LABEL_179:
          if ( v251 )
          {
            v126 = v23;
            v23 = 0LL;
            *v251 = v126;
          }
          if ( v22 )
          {
            v127 = v216;
            v216 = 0LL;
            *v22 = v127;
          }
          v60 = 0;
          goto LABEL_184;
        }
        pv = 0LL;
        v202 = 0;
        v72 = *v70;
        v73 = 0LL;
        v229 = 0LL;
        v209 = 0LL;
        v74 = 96LL * (int)v24;
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v74 + v21 + 224));
        v75 = v74 + v21 + 608;
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v75);
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v74 + v21 + 992));
        if ( !*(_DWORD *)(v21 + 4LL * (int)v24 + 40) )
        {
LABEL_163:
          if ( (a3 & 0x800000) != 0 )
          {
            if ( !v207 )
              goto LABEL_171;
            v60 = -2147418113;
            v188 = 512LL;
          }
          else
          {
            if ( v207 )
            {
LABEL_171:
              if ( v209 )
                ((void (__fastcall *)(struct IAudioProcessingObject *))v209->lpVtbl->Release)(v209);
              if ( pv )
                CoTaskMemFree(pv);
              if ( v73 )
              {
                v125 = *(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v73 + 16LL);
                if ( (char *)v125 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v73);
                else
                  v125(v73);
              }
              v22 = v210;
              goto LABEL_179;
            }
            if ( v24 && v24 != eKeywordDetectorConnector || v203 == 2 )
              goto LABEL_170;
            v124 = *a6 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
            if ( *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
              v124 = a6[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
            if ( v124 )
            {
LABEL_170:
              if ( !v198 )
                goto LABEL_171;
              v189 = 1;
              if ( v202 > 1 )
                v189 = v202;
              v190 = 16LL * v189;
              v191 = (char *)CoTaskMemAlloc(v190 + 60);
              v192 = v191;
              if ( v191 )
              {
                v216 = v191;
                memset(v191, 0, v190 + 60);
                *(_DWORD *)v192 = v203;
                *((_DWORD *)v192 + 1) = 0;
                *((_DWORD *)v192 + 14) = 0;
                v193 = 0LL;
                if ( !v202 )
                {
LABEL_433:
                  *(struct _GUID *)(v192 + 36) = *v212;
                  wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IAPOAuxiliaryInputConfiguration>(
                    &v209,
                    &v228,
                    v193);
                  *((_DWORD *)v192 + 13) = v228 != 0;
                  if ( *((_DWORD *)v192 + 14) <= v189 )
                  {
                    *((_QWORD *)v192 + 2) = a10;
                    *((_DWORD *)v192 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
                    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v228);
                    goto LABEL_171;
                  }
                  v60 = -2147418113;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x24B,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)0x8000FFFFLL,
                    (int)v195);
                  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v228);
                  goto LABEL_439;
                }
                while ( 1 )
                {
                  v194 = *((_DWORD *)v192 + 14);
                  if ( v194 > 0x1F )
                    break;
                  *((_DWORD *)v192 + 8) |= 1 << v194;
                  *(_OWORD *)&v192[16 * (*((_DWORD *)v192 + 14))++ + 60] = *((_OWORD *)pv + (unsigned int)v193);
                  v193 = (unsigned int)(v193 + 1);
                  if ( (unsigned int)v193 >= v202 )
                    goto LABEL_433;
                }
                v60 = -2147418113;
                v188 = 576LL;
                goto LABEL_438;
              }
              v188 = 567LL;
            }
            else
            {
              if ( !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                                    (CEndpointCharacteristics *)v21,
                                    v24) )
                goto LABEL_171;
              v144 = 1;
              if ( v202 > 1 )
                v144 = v202;
              v145 = 16LL * v144;
              v146 = (char *)CoTaskMemAlloc(v145 + 60);
              v147 = v146;
              if ( v146 )
              {
                v216 = v146;
                memset(v146, 0, v145 + 60);
                *(_DWORD *)v147 = v203;
                *((_DWORD *)v147 + 1) = 0;
                *((_DWORD *)v147 + 14) = 0;
                v148 = 0LL;
                v149 = 1;
                if ( !v202 )
                {
LABEL_245:
                  *(struct _GUID *)(v147 + 36) = *v212;
                  wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IAPOAuxiliaryInputConfiguration>(
                    &v209,
                    &v227,
                    v148);
                  if ( !v227 )
                    v149 = 0;
                  *((_DWORD *)v147 + 13) = v149;
                  if ( *((_DWORD *)v147 + 14) <= v144 )
                  {
                    *((_QWORD *)v147 + 2) = a10;
                    *((_DWORD *)v147 + 2) = *(unsigned __int16 *)(a10 + 16) + 18;
                    if ( v227 )
                      (*(void (**)(void))(*(_QWORD *)v227 + 16LL))();
                    goto LABEL_171;
                  }
                  v60 = -2147418113;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x22A,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)0x8000FFFFLL,
                    (int)v195);
                  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v227);
                  goto LABEL_439;
                }
                while ( 1 )
                {
                  v150 = *((_DWORD *)v147 + 14);
                  if ( v150 > 0x1F )
                    break;
                  *((_DWORD *)v147 + 8) |= 1 << v150;
                  *(_OWORD *)&v147[16 * (*((_DWORD *)v147 + 14))++ + 60] = *((_OWORD *)pv + (unsigned int)v148);
                  v148 = (unsigned int)(v148 + 1);
                  if ( (unsigned int)v148 >= v202 )
                    goto LABEL_245;
                }
                v60 = -2147418113;
                v188 = 543LL;
                goto LABEL_438;
              }
              v188 = 535LL;
            }
            v60 = -2147024882;
          }
LABEL_438:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v188,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v60,
            (int)v195);
          goto LABEL_439;
        }
        v77 = 1;
        v78 = *(_QWORD *)(v21 + 56);
        if ( !v78 )
          goto LABEL_80;
        v244 = 0LL;
        v245 = 0LL;
        v246 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v78 + 40LL))(
               v78,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v244) >= 0
          && (_WORD)v244 == 19 )
        {
          v77 = v245 == 0;
        }
        PropVariantClear(&v244);
        if ( v77 || v24 == eKeywordDetectorConnector )
        {
LABEL_80:
          v79 = 1;
          v80 = 0LL;
        }
        else
        {
          v80 = 0LL;
          v79 = 0;
        }
        v282 = v72;
        if ( !v79 )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v75, &v282) == -1 )
            goto LABEL_163;
LABEL_104:
          v260 = v72;
          SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v21, (unsigned int)v24, 0LL);
          v91 = 0;
          v92 = *(_DWORD *)(SupportedConnectorModes + 8);
          if ( v92 <= 0 )
          {
LABEL_110:
            v91 = -1;
          }
          else
          {
            v93 = *(_QWORD *)SupportedConnectorModes;
            while ( 1 )
            {
              v94 = *(_QWORD *)(v93 + 16LL * v91) - *(_QWORD *)&v260.Data1;
              if ( !v94 )
                v94 = *(_QWORD *)(v93 + 16LL * v91 + 8) - *(_QWORD *)v260.Data4;
              if ( !v94 )
                break;
              if ( ++v91 >= v92 )
                goto LABEL_110;
            }
          }
          v95 = 0LL;
          v208 = 0LL;
          v73 = 0LL;
          v229 = 0LL;
          v209 = 0LL;
          if ( !v75 )
            goto LABEL_154;
          if ( (int)CEndpointCharacteristics::UpdateAPOEnableStatus(v21, 2) < 0 )
            goto LABEL_153;
          v97 = 0;
          v98 = *(_QWORD *)(v21 + 32);
          if ( v98 )
          {
            pvar = 0LL;
            v248 = 0LL;
            v249 = 0LL;
            if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v98 + 40LL))(
                   v98,
                   &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                   &pvar) >= 0
              && (_WORD)pvar == 19 )
            {
              v97 = v248 == 1;
            }
            PropVariantClear(&pvar);
            if ( v97 )
            {
              if ( !(unsigned int)CEndpointCharacteristics::IsCriticalAPO(v21, 2LL) )
              {
LABEL_153:
                v95 = v208;
LABEL_154:
                v73 = v95;
                v229 = v95;
                if ( v95 )
                {
                  v118 = (struct _GUID **)(wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v263, (__int64)&pv)
                                         + 8);
                  v120 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int *, struct _GUID **))(*(_QWORD *)v119 + 32LL);
                  if ( v120 == CCompositeSystemEffect::GetClsids )
                    CCompositeSystemEffect::GetClsids(v119, &v202, v118);
                  else
                    v120(v119, &v202, v118);
                  if ( v265 )
                  {
                    v121 = v264;
                    v122 = v263;
                    v123 = *v263;
                    if ( v264 != *v263 )
                    {
                      if ( v123 )
                        CoTaskMemFree(v123);
                      *v122 = v121;
                    }
                  }
                }
                v24 = a5;
                goto LABEL_163;
              }
            }
          }
          v219 = 0LL;
          v261 = v72;
          v258 = v72;
          v99 = 0;
          if ( *(int *)(v75 + 40) <= 0 )
          {
LABEL_124:
            v100 = 0;
            v101 = *(_DWORD *)(v75 + 40);
            if ( v101 > 0 )
            {
              v102 = 0LL;
              while ( 1 )
              {
                if ( v102 < 0 || v100 >= v101 )
                {
                  ATL::_AtlRaiseException(0xC000008C, v96);
                  __debugbreak();
                }
                v103 = *(__int64 **)(v102 + *(_QWORD *)(v75 + 32));
                v96 = 0;
                v104 = *((_DWORD *)v103 + 2);
                if ( v104 > 0 )
                {
                  v105 = *v103;
                  while ( 1 )
                  {
                    v106 = *(_QWORD *)(v105 + 16LL * v96) - *(_QWORD *)&v258.Data1;
                    if ( !v106 )
                      v106 = *(_QWORD *)(v105 + 16LL * v96 + 8) - *(_QWORD *)v258.Data4;
                    if ( !v106 )
                      break;
                    if ( ++v96 >= v104 )
                      goto LABEL_195;
                  }
                  if ( v96 != -1 )
                    break;
                }
LABEL_195:
                ++v100;
                v102 += 16LL;
                if ( v100 >= v101 )
                  goto LABEL_231;
              }
              if ( v100 != -1 )
              {
                if ( v100 < 0 || v100 >= v101 )
                {
                  ATL::_AtlRaiseException(0xC000008C, v96);
                  __debugbreak();
                }
                v107 = *(_QWORD *)(*(_QWORD *)(v75 + 32) + 16LL * v100);
                goto LABEL_138;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              if ( v99 < 0 || v99 >= *(_DWORD *)(v75 + 40) )
              {
                ATL::_AtlRaiseException(0xC000008C, v96);
                __debugbreak();
              }
              if ( *(_BYTE *)(*(_QWORD *)(v80 + *(_QWORD *)(v75 + 32)) + 16LL) )
              {
                v186 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v75 + 32, v99);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v186, &v258) != -1 )
                  break;
              }
              ++v99;
              v80 += 16LL;
              if ( v99 >= *(_DWORD *)(v75 + 40) )
                goto LABEL_123;
            }
            Microsoft::WRL::Wrappers::CriticalSection::Lock(v75 + 56, (__int64)&v235);
            v187 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v75 + 32, v99);
            std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v256, v187);
            if ( (int)SystemEffectChainDescriptor::Resolve(v256, (struct SystemEffectDescriptor *)v75) >= 0 )
            {
              if ( v257 )
                std::_Ref_count_base::_Decref(v257);
              if ( v235 )
                LeaveCriticalSection(v235);
LABEL_123:
              v21 = (__int64)a1;
              goto LABEL_124;
            }
            if ( v257 )
              std::_Ref_count_base::_Decref(v257);
            if ( v235 )
              LeaveCriticalSection(v235);
            v21 = (__int64)a1;
          }
LABEL_231:
          v107 = *(_QWORD *)(v75 + 16);
          if ( !v107 )
            goto LABEL_410;
          v140 = 0;
          v141 = *(_DWORD *)(v107 + 8);
          if ( v141 <= 0 )
            goto LABEL_410;
          while ( 1 )
          {
            v142 = (_QWORD *)(*(_QWORD *)v107 + 16LL * v140);
            v143 = *v142 - *(_QWORD *)&v261.Data1;
            if ( *v142 == *(_QWORD *)&v261.Data1 )
              v143 = v142[1] - *(_QWORD *)v261.Data4;
            if ( !v143 )
              break;
            if ( ++v140 >= v141 )
              goto LABEL_410;
          }
          if ( v140 == -1 )
LABEL_410:
            v107 = 0LL;
LABEL_138:
          v108 = 0;
          v109 = 0LL;
          v219 = 0LL;
          if ( v107 )
          {
            if ( *(int *)(v107 + 48) > 0 )
            {
              v110 = *(int *)(v107 + 48);
              v111 = -1LL;
              if ( v110 != 1 )
                v111 = 0xFFFFFFFFFFFFFFFFuLL / v110;
              if ( v111 < 0x10
                || (v112 = 16 * v110, v112 > 0x7FFFFFFF)
                || (v113 = CoTaskMemAlloc((unsigned int)v112), (v109 = v113) == 0LL) )
              {
                v60 = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x251,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)0x8007000ELL,
                  (int)v195);
                CoTaskMemFree(v109);
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x467,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)0x8007000ELL,
                  v197);
                ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v219);
                ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v208);
                goto LABEL_416;
              }
              memcpy_0(v113, *(const void **)(v107 + 40), 16LL * *(int *)(v107 + 48));
              v219 = v109;
              CoTaskMemFree(0LL);
            }
            v108 = *(_DWORD *)(v107 + 48);
          }
          if ( !v108 )
          {
LABEL_152:
            CoTaskMemFree(v109);
            goto LABEL_153;
          }
          v221 = v91 != -1;
          v250 = v109;
          v225 = v108;
          v220 = *(_DWORD *)(v21 + 148);
          v222 = 2;
          v114 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                   (unsigned int)&v208,
                   (unsigned int)&v222,
                   (unsigned int)&v221,
                   (unsigned int)&v220,
                   (__int64)&v225,
                   (__int64)&v250);
          v60 = v114;
          if ( v114 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x471,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v114,
              v196);
            ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v219);
            ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v208);
            v24 = a5;
          }
          else
          {
            v262 = v72;
            v115 = *(struct IMMDevice **)(v21 + 16);
            v116 = *(int (**)(CCompositeSystemEffect *__hidden, struct IMMDevice *, struct _GUID *__struct_ptr, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **))(*(_QWORD *)v208 + 24LL);
            v24 = a5;
            if ( v116 == CCompositeSystemEffect::Initialize )
            {
              v117 = CCompositeSystemEffect::Initialize(v208, v115, &v262, 0, a5, &v209, 0LL);
            }
            else
            {
              LODWORD(v195) = a5;
              v117 = ((__int64 (__fastcall *)(CCompositeSystemEffect *, struct IMMDevice *, struct _GUID *, _QWORD))v116)(
                       v208,
                       v115,
                       &v262,
                       0LL);
            }
            v60 = v117;
            if ( v117 >= 0 )
              goto LABEL_152;
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x475,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v117,
              (int)v195);
            CoTaskMemFree(v109);
            ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v208);
          }
          if ( (v60 & 0x80000000) == 0 )
            goto LABEL_163;
LABEL_416:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v60,
            (int)v195);
LABEL_439:
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v209);
          if ( pv )
            CoTaskMemFree(pv);
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v229);
          goto LABEL_184;
        }
        v255 = v72;
        v240 = v72;
        if ( *(_BYTE *)(v75 + 52) && (v81 = 0, *(int *)(v75 + 40) > 0) )
        {
          while ( 1 )
          {
            if ( v81 < 0 || v81 >= *(_DWORD *)(v75 + 40) )
            {
              ATL::_AtlRaiseException(0xC000008C, v76);
              __debugbreak();
            }
            if ( *(_BYTE *)(*(_QWORD *)(v80 + *(_QWORD *)(v75 + 32)) + 16LL) )
            {
              v184 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v75 + 32, v81);
              if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v184, &v240) != -1 )
                break;
            }
            ++v81;
            v80 += 16LL;
            if ( v81 >= *(_DWORD *)(v75 + 40) )
              goto LABEL_88;
          }
          Microsoft::WRL::Wrappers::CriticalSection::Lock(v75 + 56, (__int64)&v234);
          v185 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v75 + 32, v81);
          std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v253, v185);
          if ( (int)SystemEffectChainDescriptor::Resolve(v253, (struct SystemEffectDescriptor *)v75) >= 0 )
          {
            if ( v254 )
              std::_Ref_count_base::_Decref(v254);
            if ( v234 )
              LeaveCriticalSection(v234);
LABEL_88:
            v21 = (__int64)a1;
            v80 = 0LL;
            goto LABEL_89;
          }
          if ( v254 )
            std::_Ref_count_base::_Decref(v254);
          if ( v234 )
            LeaveCriticalSection(v234);
          v80 = 0LL;
          v21 = (__int64)a1;
        }
        else
        {
LABEL_89:
          v82 = 0;
          v83 = *(_DWORD *)(v75 + 40);
          if ( v83 > 0 )
          {
            v84 = 0LL;
            while ( 1 )
            {
              if ( v84 < 0 || v82 >= v83 )
              {
                ATL::_AtlRaiseException(0xC000008C, v76);
                __debugbreak();
              }
              v85 = *(__int64 **)(v84 + *(_QWORD *)(v75 + 32));
              v76 = 0;
              v86 = *((_DWORD *)v85 + 2);
              if ( v86 > 0 )
              {
                v87 = *v85;
                while ( 1 )
                {
                  v88 = *(_QWORD *)(v87 + 16LL * v76) - *(_QWORD *)&v240.Data1;
                  if ( !v88 )
                    v88 = *(_QWORD *)(v87 + 16LL * v76 + 8) - *(_QWORD *)v240.Data4;
                  if ( !v88 )
                    break;
                  if ( ++v76 >= v86 )
                    goto LABEL_192;
                }
                if ( v76 != -1 )
                  break;
              }
LABEL_192:
              ++v82;
              v84 += 16LL;
              if ( v82 >= v83 )
                goto LABEL_224;
            }
            if ( v82 != -1 )
            {
              if ( v82 < 0 || v82 >= v83 )
              {
                ATL::_AtlRaiseException(0xC000008C, v76);
                __debugbreak();
              }
              v89 = *(_QWORD *)(*(_QWORD *)(v75 + 32) + 16LL * v82);
              goto LABEL_103;
            }
          }
        }
LABEL_224:
        v89 = *(_QWORD *)(v75 + 16);
        if ( !v89 )
          goto LABEL_392;
        v136 = 0;
        v137 = *(_DWORD *)(v89 + 8);
        if ( v137 <= 0 )
          goto LABEL_392;
        while ( 1 )
        {
          v138 = (_QWORD *)(*(_QWORD *)v89 + 16LL * v136);
          v139 = *v138 - *(_QWORD *)&v255.Data1;
          if ( *v138 == *(_QWORD *)&v255.Data1 )
            v139 = v138[1] - *(_QWORD *)v255.Data4;
          if ( !v139 )
            break;
          if ( ++v136 >= v137 )
            goto LABEL_392;
        }
        if ( v136 == -1 )
LABEL_392:
          v89 = 0LL;
LABEL_103:
        if ( !v89 )
          goto LABEL_163;
        goto LABEL_104;
      }
      v60 = -2147418113;
      v154 = 390LL;
      goto LABEL_319;
    }
  }
  v218 = 0LL;
  v206 = 0;
  v226 = 0LL;
  v213 = 0;
  if ( v24 != eOffloadConnector || v207 )
    goto LABEL_359;
  v214 = 0LL;
  v280 = *v212;
  v217 = 0LL;
  StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                   (CEndpointCharacteristics *)v21,
                   &v280,
                   0,
                   eOffloadConnector,
                   &v217,
                   0LL,
                   0LL);
  v60 = StreamEffect;
  if ( StreamEffect >= 0 )
  {
    v281 = *v212;
    v214 = 0LL;
    StreamEffect = CEndpointCharacteristics::GetModeEffect(
                     (CEndpointCharacteristics *)v21,
                     &v281,
                     0,
                     eOffloadConnector,
                     &v214,
                     0LL,
                     0LL);
    v60 = StreamEffect;
    if ( StreamEffect < 0 )
    {
      v163 = 402LL;
      goto LABEL_329;
    }
    if ( v217 )
    {
      v164 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v269, (__int64)&v218);
      (*(void (__fastcall **)(__int64, unsigned int *, __int64))(*(_QWORD *)v165 + 32LL))(v165, &v206, v164 + 8);
      if ( v271 )
      {
        v166 = v270;
        v167 = v269;
        v168 = *v269;
        if ( v270 != *v269 )
        {
          if ( v168 )
            CoTaskMemFree(v168);
          *v167 = v166;
        }
      }
    }
    if ( v214 )
    {
      v169 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v272, (__int64)&v226);
      (*(void (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v170 + 32LL))(v170, &v213, v169 + 8);
      if ( v274 )
      {
        v171 = v273;
        v172 = v272;
        v173 = *v272;
        if ( v273 != *v272 )
        {
          if ( v173 )
            CoTaskMemFree(v173);
          *v172 = v171;
        }
      }
    }
    v174 = v206 || v213;
    v198 = IsOutOfProcOffloadUsed(v174);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v214);
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v217);
    if ( v198 )
    {
      if ( v203 )
      {
        v60 = -2147024809;
        v181 = 448LL;
        goto LABEL_367;
      }
      v175 = v206;
      v176 = 16 * (v206 + 12LL);
      v177 = (GUID *)CoTaskMemAlloc(v176);
      v178 = v177;
      if ( v177 )
      {
        v23 = v177;
        v205 = v177;
        memset(v177, 0, v176);
        v178->Data1 = 0;
        *(_DWORD *)v178[5].Data4 = a3;
        *(_QWORD *)&v178[6].Data1 = 0LL;
        *(_DWORD *)&v178[8].Data2 = 0;
        v178[7].Data1 = 0;
        v179 = 0;
        if ( v206 )
        {
          while ( 1 )
          {
            v180 = *(_DWORD *)&v178[8].Data2;
            if ( v180 > 0x1F )
              break;
            v178[7].Data1 |= 1 << v180;
            v178[(unsigned int)(*(_DWORD *)&v178[8].Data2)++ + 12] = *((GUID *)v218 + v179);
            if ( ++v179 >= v206 )
              goto LABEL_354;
          }
          v60 = -2147418113;
          v181 = 435LL;
          goto LABEL_367;
        }
LABEL_354:
        *(_DWORD *)&v178->Data2 = 0;
        if ( *(_DWORD *)&v178[8].Data2 > v175 )
        {
          v60 = -2147418113;
          v181 = 443LL;
LABEL_367:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v181,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v60,
            (int)v195);
          goto LABEL_368;
        }
LABEL_361:
        if ( v226 )
          CoTaskMemFree(v226);
        if ( v218 )
          CoTaskMemFree(v218);
        goto LABEL_73;
      }
      v181 = 424LL;
      goto LABEL_366;
    }
    v19 = a3;
LABEL_359:
    v182 = (GUID *)CoTaskMemAlloc(0xD0uLL);
    v183 = v182;
    if ( v182 )
    {
      v23 = v182;
      v205 = v182;
      memset(v182, 0, 0xD0uLL);
      v183->Data1 = v203;
      *(_DWORD *)v183[5].Data4 = v19;
      *(_QWORD *)&v183[6].Data1 = 0LL;
      *(_DWORD *)&v183[8].Data2 = 0;
      *(_DWORD *)&v183->Data2 = 0;
      goto LABEL_361;
    }
    v181 = 461LL;
LABEL_366:
    v60 = -2147024882;
    goto LABEL_367;
  }
  v163 = 401LL;
LABEL_329:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v163,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)StreamEffect,
    (int)v195);
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v214);
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v217);
LABEL_368:
  if ( v226 )
    CoTaskMemFree(v226);
  if ( v218 )
    CoTaskMemFree(v218);
LABEL_184:
  if ( v216 )
    CoTaskMemFree(v216);
  if ( v23 )
    CoTaskMemFree(v23);
  if ( v252 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v252 + 16LL))(v252);
  return v60;
}
