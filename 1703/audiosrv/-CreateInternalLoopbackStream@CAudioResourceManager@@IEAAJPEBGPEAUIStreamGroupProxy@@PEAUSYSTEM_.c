/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800AD2EC (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180004470 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180004BE4 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     TemplateEventDescriptor @ 0x18000B310 (TemplateEventDescriptor.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18000CA5C (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x18002C2A0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18002C540 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x180079BEC (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  _QWORD *v4; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 AliasedEndpointCharacteristics; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // ebx
  GUID v7; // xmm6
  GUID v8; // xmm8
  GUID v9; // xmm1
  GUID v10; // xmm7
  struct tWAVEFORMATEX *v11; // r15
  struct tWAVEFORMATEX *v12; // r12
  struct tWAVEFORMATEX *v13; // r13
  struct tWAVEFORMATEX *v14; // rsi
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  TraceLoggingHProvider v20; // r10
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  TraceLoggingHProvider v23; // r10
  const struct _TlgProvider_t *v24; // rcx
  const GUID *v25; // r8
  const GUID *v26; // r9
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  TraceLoggingHProvider v29; // r10
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  TraceLoggingHProvider v32; // r10
  const struct _TlgProvider_t *v33; // rcx
  const GUID *v34; // r8
  const GUID *v35; // r9
  LPCGUID v36; // r8
  LPCGUID v37; // r9
  TraceLoggingHProvider v38; // r10
  LPCGUID v39; // r8
  LPCGUID v40; // r9
  TraceLoggingHProvider v41; // r10
  const struct _TlgProvider_t *v42; // rcx
  const GUID *v43; // r8
  const GUID *v44; // r9
  LPCGUID v45; // r8
  LPCGUID v46; // r9
  TraceLoggingHProvider v47; // r10
  LPCGUID v48; // r8
  LPCGUID v49; // r9
  TraceLoggingHProvider v50; // r10
  __int64 v51; // rcx
  const struct _TlgProvider_t *v52; // rcx
  const struct _TlgProvider_t *v53; // rcx
  const GUID *v54; // r8
  const GUID *v55; // r9
  LPVOID v56; // rax
  LPCGUID v57; // r8
  LPCGUID v58; // r9
  TraceLoggingHProvider v59; // r10
  LPVOID v60; // rax
  LPCGUID v61; // r8
  LPCGUID v62; // r9
  TraceLoggingHProvider v63; // r10
  __int64 v64; // rcx
  struct CAudioSessionManager *v65; // r14
  __int64 v66; // rbx
  __int64 v67; // rdi
  struct ISaDeviceProxy *v68; // rcx
  struct CAudioSessionManagerProvider *v69; // rdi
  bool DoesExclusiveModeOverrideShared; // cl
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 SaDeviceForSharedStream; // eax
  signed __int32 v72; // eax
  LPVOID *v73; // rdi
  CAudioResourceManager *v74; // rcx
  CVolumeStrip *v75; // rcx
  __int64 v76; // rcx
  const struct _TlgProvider_t *v77; // rcx
  const struct _TlgProvider_t *v78; // rcx
  const GUID *v79; // r8
  const GUID *v80; // r9
  __int64 v81; // rcx
  void *cData; // [rsp+28h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-F8h]
  bool v85; // [rsp+40h] [rbp-E8h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v86[2]; // [rsp+A8h] [rbp-80h] BYREF
  CEndpointCharacteristics *v87; // [rsp+B0h] [rbp-78h] BYREF
  struct ISaDeviceProxy *v88; // [rsp+B8h] [rbp-70h] BYREF
  struct CAudioSessionManager *v89; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-60h] BYREF
  const unsigned __int16 *v91; // [rsp+D0h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v92; // [rsp+D8h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v93; // [rsp+E0h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v94; // [rsp+E8h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v95; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v97; // [rsp+100h] [rbp-28h] BYREF
  SaDeviceParams *v98; // [rsp+108h] [rbp-20h] BYREF
  __int64 v99; // [rsp+110h] [rbp-18h] BYREF
  struct CAudioSessionManagerProvider *v100; // [rsp+118h] [rbp-10h] BYREF
  int v101; // [rsp+120h] [rbp-8h] BYREF
  int v102; // [rsp+124h] [rbp-4h] BYREF
  int v103; // [rsp+128h] [rbp+0h] BYREF
  int v104; // [rsp+12Ch] [rbp+4h] BYREF
  int v105; // [rsp+130h] [rbp+8h] BYREF
  int v106; // [rsp+134h] [rbp+Ch] BYREF
  int v107; // [rsp+138h] [rbp+10h] BYREF
  int v108; // [rsp+13Ch] [rbp+14h] BYREF
  int v109; // [rsp+140h] [rbp+18h] BYREF
  int v110; // [rsp+144h] [rbp+1Ch] BYREF
  int v111; // [rsp+148h] [rbp+20h] BYREF
  struct SYSTEM_AUDIO_STREAM *v112; // [rsp+150h] [rbp+28h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+158h] [rbp+30h] BYREF
  GUID v114; // [rsp+168h] [rbp+40h] BYREF
  GUID v115; // [rsp+178h] [rbp+50h] BYREF
  GUID v116; // [rsp+188h] [rbp+60h] BYREF
  GUID v117; // [rsp+198h] [rbp+70h] BYREF
  __int64 v118; // [rsp+1A8h] [rbp+80h]
  GUID v119; // [rsp+1B8h] [rbp+90h] BYREF
  __int64 v120[2]; // [rsp+1C8h] [rbp+A0h] BYREF
  struct _GUID v121; // [rsp+1D8h] [rbp+B0h] BYREF
  struct _GUID v122; // [rsp+1E8h] [rbp+C0h] BYREF
  struct _GUID v123; // [rsp+1F8h] [rbp+D0h] BYREF
  struct _GUID v124; // [rsp+208h] [rbp+E0h] BYREF
  struct _GUID v125; // [rsp+218h] [rbp+F0h] BYREF
  GUID v126; // [rsp+228h] [rbp+100h] BYREF
  struct _GUID v127[2]; // [rsp+238h] [rbp+110h] BYREF
  _QWORD v128[6]; // [rsp+258h] [rbp+130h] BYREF
  GUID v129; // [rsp+288h] [rbp+160h] BYREF
  GUID v130; // [rsp+298h] [rbp+170h] BYREF
  GUID v131; // [rsp+2A8h] [rbp+180h] BYREF
  GUID v132; // [rsp+2B8h] [rbp+190h] BYREF
  GUID v133; // [rsp+2C8h] [rbp+1A0h] BYREF
  EVENT_DATA_DESCRIPTOR v134; // [rsp+2D8h] [rbp+1B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+2F8h] [rbp+1D0h] BYREF
  WORD *v136; // [rsp+308h] [rbp+1E0h]
  __int64 v137; // [rsp+310h] [rbp+1E8h]
  DWORD *v138; // [rsp+318h] [rbp+1F0h]
  __int64 v139; // [rsp+320h] [rbp+1F8h]
  DWORD *v140; // [rsp+328h] [rbp+200h]
  __int64 v141; // [rsp+330h] [rbp+208h]
  char *v142; // [rsp+338h] [rbp+210h]
  __int64 v143; // [rsp+340h] [rbp+218h]
  int *v144; // [rsp+348h] [rbp+220h]
  __int64 v145; // [rsp+350h] [rbp+228h]
  EVENT_DATA_DESCRIPTOR v146; // [rsp+368h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v147; // [rsp+388h] [rbp+260h] BYREF
  WORD *p_nChannels; // [rsp+398h] [rbp+270h]
  __int64 v149; // [rsp+3A0h] [rbp+278h]
  DWORD *p_nSamplesPerSec; // [rsp+3A8h] [rbp+280h]
  __int64 v151; // [rsp+3B0h] [rbp+288h]
  DWORD *p_nAvgBytesPerSec; // [rsp+3B8h] [rbp+290h]
  __int64 v153; // [rsp+3C0h] [rbp+298h]
  char *v154; // [rsp+3C8h] [rbp+2A0h]
  __int64 v155; // [rsp+3D0h] [rbp+2A8h]
  int *v156; // [rsp+3D8h] [rbp+2B0h]
  __int64 v157; // [rsp+3E0h] [rbp+2B8h]
  EVENT_DATA_DESCRIPTOR v158; // [rsp+3F8h] [rbp+2D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v159; // [rsp+418h] [rbp+2F0h] BYREF
  WORD *v160; // [rsp+428h] [rbp+300h]
  __int64 v161; // [rsp+430h] [rbp+308h]
  DWORD *v162; // [rsp+438h] [rbp+310h]
  __int64 v163; // [rsp+440h] [rbp+318h]
  DWORD *v164; // [rsp+448h] [rbp+320h]
  __int64 v165; // [rsp+450h] [rbp+328h]
  char *v166; // [rsp+458h] [rbp+330h]
  __int64 v167; // [rsp+460h] [rbp+338h]
  int *v168; // [rsp+468h] [rbp+340h]
  __int64 v169; // [rsp+470h] [rbp+348h]
  EVENT_DATA_DESCRIPTOR v170; // [rsp+488h] [rbp+360h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v171; // [rsp+4A8h] [rbp+380h] BYREF
  WORD *v172; // [rsp+4B8h] [rbp+390h]
  __int64 v173; // [rsp+4C0h] [rbp+398h]
  DWORD *v174; // [rsp+4C8h] [rbp+3A0h]
  __int64 v175; // [rsp+4D0h] [rbp+3A8h]
  DWORD *v176; // [rsp+4D8h] [rbp+3B0h]
  __int64 v177; // [rsp+4E0h] [rbp+3B8h]
  char *v178; // [rsp+4E8h] [rbp+3C0h]
  __int64 v179; // [rsp+4F0h] [rbp+3C8h]
  int *v180; // [rsp+4F8h] [rbp+3D0h]
  __int64 v181; // [rsp+500h] [rbp+3D8h]
  EVENT_DATA_DESCRIPTOR v182; // [rsp+518h] [rbp+3F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v183; // [rsp+538h] [rbp+410h] BYREF
  WORD *v184; // [rsp+548h] [rbp+420h]
  __int64 v185; // [rsp+550h] [rbp+428h]
  DWORD *v186; // [rsp+558h] [rbp+430h]
  __int64 v187; // [rsp+560h] [rbp+438h]
  DWORD *v188; // [rsp+568h] [rbp+440h]
  __int64 v189; // [rsp+570h] [rbp+448h]
  char *v190; // [rsp+578h] [rbp+450h]
  __int64 v191; // [rsp+580h] [rbp+458h]
  int *v192; // [rsp+588h] [rbp+460h]
  __int64 v193; // [rsp+590h] [rbp+468h]
  EVENT_DATA_DESCRIPTOR v194; // [rsp+5A8h] [rbp+480h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+5C8h] [rbp+4A0h] BYREF
  WORD *v196; // [rsp+5D8h] [rbp+4B0h]
  __int64 v197; // [rsp+5E0h] [rbp+4B8h]
  DWORD *v198; // [rsp+5E8h] [rbp+4C0h]
  __int64 v199; // [rsp+5F0h] [rbp+4C8h]
  DWORD *v200; // [rsp+5F8h] [rbp+4D0h]
  __int64 v201; // [rsp+600h] [rbp+4D8h]
  GUID *v202; // [rsp+608h] [rbp+4E0h]
  __int64 v203; // [rsp+610h] [rbp+4E8h]
  EVENT_DATA_DESCRIPTOR v204; // [rsp+628h] [rbp+500h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v205; // [rsp+648h] [rbp+520h] BYREF
  WORD *v206; // [rsp+658h] [rbp+530h]
  __int64 v207; // [rsp+660h] [rbp+538h]
  DWORD *v208; // [rsp+668h] [rbp+540h]
  __int64 v209; // [rsp+670h] [rbp+548h]
  DWORD *v210; // [rsp+678h] [rbp+550h]
  __int64 v211; // [rsp+680h] [rbp+558h]
  GUID *v212; // [rsp+688h] [rbp+560h]
  __int64 v213; // [rsp+690h] [rbp+568h]
  EVENT_DATA_DESCRIPTOR v214; // [rsp+6A8h] [rbp+580h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v215; // [rsp+6C8h] [rbp+5A0h] BYREF
  WORD *v216; // [rsp+6D8h] [rbp+5B0h]
  __int64 v217; // [rsp+6E0h] [rbp+5B8h]
  DWORD *v218; // [rsp+6E8h] [rbp+5C0h]
  __int64 v219; // [rsp+6F0h] [rbp+5C8h]
  DWORD *v220; // [rsp+6F8h] [rbp+5D0h]
  __int64 v221; // [rsp+700h] [rbp+5D8h]
  GUID *v222; // [rsp+708h] [rbp+5E0h]
  __int64 v223; // [rsp+710h] [rbp+5E8h]
  EVENT_DATA_DESCRIPTOR v224; // [rsp+728h] [rbp+600h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v225; // [rsp+748h] [rbp+620h] BYREF
  WORD *v226; // [rsp+758h] [rbp+630h]
  __int64 v227; // [rsp+760h] [rbp+638h]
  DWORD *v228; // [rsp+768h] [rbp+640h]
  __int64 v229; // [rsp+770h] [rbp+648h]
  DWORD *v230; // [rsp+778h] [rbp+650h]
  __int64 v231; // [rsp+780h] [rbp+658h]
  GUID *v232; // [rsp+788h] [rbp+660h]
  __int64 v233; // [rsp+790h] [rbp+668h]
  EVENT_DATA_DESCRIPTOR v234; // [rsp+7A8h] [rbp+680h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v235; // [rsp+7C8h] [rbp+6A0h] BYREF
  WORD *v236; // [rsp+7D8h] [rbp+6B0h]
  __int64 v237; // [rsp+7E0h] [rbp+6B8h]
  DWORD *v238; // [rsp+7E8h] [rbp+6C0h]
  __int64 v239; // [rsp+7F0h] [rbp+6C8h]
  DWORD *v240; // [rsp+7F8h] [rbp+6D0h]
  __int64 v241; // [rsp+800h] [rbp+6D8h]
  GUID *v242; // [rsp+808h] [rbp+6E0h]
  __int64 v243; // [rsp+810h] [rbp+6E8h]
  EVENT_DATA_DESCRIPTOR v244; // [rsp+828h] [rbp+700h] BYREF
  GUID *v245; // [rsp+848h] [rbp+720h]
  __int64 v246; // [rsp+850h] [rbp+728h]
  __int64 v247; // [rsp+858h] [rbp+730h]
  __int64 v248; // [rsp+860h] [rbp+738h]
  const unsigned __int16 **v249; // [rsp+868h] [rbp+740h]
  __int64 v250; // [rsp+870h] [rbp+748h]
  EVENT_DATA_DESCRIPTOR v251; // [rsp+888h] [rbp+760h] BYREF
  int *v252; // [rsp+8A8h] [rbp+780h]
  __int64 v253; // [rsp+8B0h] [rbp+788h]
  EVENT_DATA_DESCRIPTOR v254; // [rsp+8C0h] [rbp+798h] BYREF
  int *v255; // [rsp+8E0h] [rbp+7B8h]
  __int64 v256; // [rsp+8E8h] [rbp+7C0h]
  EVENT_DATA_DESCRIPTOR v257; // [rsp+8F8h] [rbp+7D0h] BYREF
  int *v258; // [rsp+918h] [rbp+7F0h]
  __int64 v259; // [rsp+920h] [rbp+7F8h]
  EVENT_DATA_DESCRIPTOR v260; // [rsp+930h] [rbp+808h] BYREF
  int *v261; // [rsp+950h] [rbp+828h]
  __int64 v262; // [rsp+958h] [rbp+830h]
  EVENT_DATA_DESCRIPTOR v263; // [rsp+968h] [rbp+840h] BYREF
  int *v264; // [rsp+988h] [rbp+860h]
  __int64 v265; // [rsp+990h] [rbp+868h]

  v118 = -2LL;
  v112 = a4;
  v100 = a3;
  v91 = a2;
  v4 = 0LL;
  v87 = 0LL;
  AliasedEndpointCharacteristics = (unsigned int)GetAliasedEndpointCharacteristics(a2, 0, &v87);
  if ( AliasedEndpointCharacteristics < eHostProcessConnector
    || (v6 = eLoopbackConnector, !(unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v87)) )
  {
    v6 = eHostProcessConnector;
  }
  v86[0] = v6;
  v7 = GUID_00000000_0000_0000_0000_000000000000;
  v115 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = GUID_00000000_0000_0000_0000_000000000000;
  v116 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = GUID_00000000_0000_0000_0000_000000000000;
  v117 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v114 = GUID_00000000_0000_0000_0000_000000000000;
  if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
  {
    AliasedEndpointCharacteristics = (unsigned int)DeriveAudioProcessingModeConfiguration(
                                                     0,
                                                     0,
                                                     v87,
                                                     2u,
                                                     0,
                                                     v6,
                                                     0,
                                                     0,
                                                     &v115,
                                                     &v116,
                                                     &v117,
                                                     &v114);
    v7 = v115;
    v8 = v116;
    v9 = v117;
    v10 = v114;
  }
  v11 = 0LL;
  v92 = 0LL;
  v12 = 0LL;
  v93 = 0LL;
  v13 = 0LL;
  v94 = 0LL;
  v14 = 0LL;
  v95 = 0LL;
  if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
  {
    v123 = v7;
    v124 = v8;
    v125 = v9;
    AliasedEndpointCharacteristics = (unsigned int)DeriveDeviceGraphFormatsForStream(
                                                     v87,
                                                     0,
                                                     (struct _GUID *)(unsigned int)v6,
                                                     AUDCLNT_SHAREMODE_SHARED,
                                                     &v125,
                                                     &v124,
                                                     &v123,
                                                     0LL,
                                                     &v92,
                                                     &v93,
                                                     &v94,
                                                     &v95);
    v11 = v92;
    v12 = v93;
    v13 = v94;
    v14 = v95;
  }
  v89 = 0LL;
  if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
  {
    if ( v11 )
    {
      if ( v11->wFormatTag == 0xFFFE )
      {
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v147, L"WAVEFORMATEXTENSIBLE");
          p_nChannels = &v11->nChannels;
          v149 = 2LL;
          p_nSamplesPerSec = &v11->nSamplesPerSec;
          v151 = 4LL;
          p_nAvgBytesPerSec = &v11->nAvgBytesPerSec;
          v153 = 4LL;
          v154 = (char *)&v11[1].nSamplesPerSec + 2;
          v155 = 16LL;
          v102 = *(_DWORD *)&v11[1].nChannels;
          v156 = &v102;
          v157 = 4LL;
          TlgWrite(v23, &unk_1800F9A43, v21, v22, 8u, &v146);
        }
      }
      else
      {
        v129 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v129.Data1 = v11->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
          v196 = &v11->nChannels;
          v197 = 2LL;
          v198 = &v11->nSamplesPerSec;
          v199 = 4LL;
          v200 = &v11->nAvgBytesPerSec;
          v201 = 4LL;
          v202 = &v129;
          v203 = 16LL;
          TlgWrite(v20, &unk_1800F99AC, v18, v19, 7u, &v194);
        }
      }
    }
    else
    {
      v15 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v15 > 4u )
      {
        v101 = 0;
        v252 = &v101;
        v253 = 4LL;
        TlgWrite(v15, &unk_1800F9AE7, v16, v17, 3u, &v251);
      }
    }
    if ( v12 )
    {
      if ( v12->wFormatTag == 0xFFFE )
      {
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v15,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v159, L"WAVEFORMATEXTENSIBLE");
          v160 = &v12->nChannels;
          v161 = 2LL;
          v162 = &v12->nSamplesPerSec;
          v163 = 4LL;
          v164 = &v12->nAvgBytesPerSec;
          v165 = 4LL;
          v166 = (char *)&v12[1].nSamplesPerSec + 2;
          v167 = 16LL;
          v104 = *(_DWORD *)&v12[1].nChannels;
          v168 = &v104;
          v169 = 4LL;
          TlgWrite(v32, &unk_1800F97AA, v30, v31, 8u, &v158);
        }
      }
      else
      {
        v130 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v130.Data1 = v12->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v15,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v235, L"WAVEFORMATEX");
          v236 = &v12->nChannels;
          v237 = 2LL;
          v238 = &v12->nSamplesPerSec;
          v239 = 4LL;
          v240 = &v12->nAvgBytesPerSec;
          v241 = 4LL;
          v242 = &v130;
          v243 = 16LL;
          TlgWrite(v29, &unk_1800F9912, v27, v28, 7u, &v234);
        }
      }
    }
    else
    {
      v24 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)v15,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v24 > 4u )
      {
        v103 = 0;
        v255 = &v103;
        v256 = 4LL;
        TlgWrite(v24, &unk_1800F98B1, v25, v26, 3u, &v254);
      }
    }
    if ( v13 )
    {
      if ( v13->wFormatTag == 0xFFFE )
      {
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v24,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v171, L"WAVEFORMATEXTENSIBLE");
          v172 = &v13->nChannels;
          v173 = 2LL;
          v174 = &v13->nSamplesPerSec;
          v175 = 4LL;
          v176 = &v13->nAvgBytesPerSec;
          v177 = 4LL;
          v178 = (char *)&v13[1].nSamplesPerSec + 2;
          v179 = 16LL;
          v106 = *(_DWORD *)&v13[1].nChannels;
          v180 = &v106;
          v181 = 4LL;
          TlgWrite(v41, &unk_1800F9704, v39, v40, 8u, &v170);
        }
      }
      else
      {
        v131 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v131.Data1 = v13->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v24,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v205, L"WAVEFORMATEX");
          v206 = &v13->nChannels;
          v207 = 2LL;
          v208 = &v13->nSamplesPerSec;
          v209 = 4LL;
          v210 = &v13->nAvgBytesPerSec;
          v211 = 4LL;
          v212 = &v131;
          v213 = 16LL;
          TlgWrite(v38, &unk_1800F966B, v36, v37, 7u, &v204);
        }
      }
    }
    else
    {
      v33 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)v24,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v33 > 4u )
      {
        v105 = 0;
        v258 = &v105;
        v259 = 4LL;
        TlgWrite(v33, &unk_1800F9851, v34, v35, 3u, &v257);
      }
    }
    if ( v14 )
    {
      if ( v14->wFormatTag == 0xFFFE )
      {
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v33,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v183, L"WAVEFORMATEXTENSIBLE");
          v184 = &v14->nChannels;
          v185 = 2LL;
          v186 = &v14->nSamplesPerSec;
          v187 = 4LL;
          v188 = &v14->nAvgBytesPerSec;
          v189 = 4LL;
          v190 = (char *)&v14[1].nSamplesPerSec + 2;
          v191 = 16LL;
          v111 = *(_DWORD *)&v14[1].nChannels;
          v192 = &v111;
          v193 = 4LL;
          TlgWrite(v50, &unk_1800F9495, v48, v49, 8u, &v182);
        }
      }
      else
      {
        v132 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v132.Data1 = v14->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v33,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v215, L"WAVEFORMATEX");
          v216 = &v14->nChannels;
          v217 = 2LL;
          v218 = &v14->nSamplesPerSec;
          v219 = 4LL;
          v220 = &v14->nAvgBytesPerSec;
          v221 = 4LL;
          v222 = &v132;
          v223 = 16LL;
          TlgWrite(v47, &unk_1800F95D3, v45, v46, 7u, &v214);
        }
      }
    }
    else
    {
      v42 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)v33,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v42 > 4u )
      {
        v107 = 0;
        v261 = &v107;
        v262 = 4LL;
        TlgWrite(v42, &unk_1800F9574, v43, v44, 3u, &v260);
      }
    }
    v126 = v7;
    AliasedEndpointCharacteristics = (unsigned int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                                     (__int64)v87,
                                                     v6,
                                                     &v14->wFormatTag,
                                                     &v126,
                                                     0,
                                                     &v110,
                                                     0LL,
                                                     0LL,
                                                     0LL);
    if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
    {
      v89 = (struct CAudioSessionManager *)(unsigned int)(int)((double)v110
                                                             * 10000000.0
                                                             / (double)(int)v14->nSamplesPerSec
                                                             + 0.5);
    }
    else if ( v14 )
    {
      if ( v14->wFormatTag == 0xFFFE )
      {
        v60 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v51,
                lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        if ( **((_DWORD **)v60 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v60 + 1), 0x200000000000uLL) )
        {
          TlgCreateWsz(&v135, L"WAVEFORMATEXTENSIBLE");
          v136 = &v14->nChannels;
          v137 = 2LL;
          v138 = &v14->nSamplesPerSec;
          v139 = 4LL;
          v140 = &v14->nAvgBytesPerSec;
          v141 = 4LL;
          v142 = (char *)&v14[1].nSamplesPerSec + 2;
          v143 = 16LL;
          v109 = *(_DWORD *)&v14[1].nChannels;
          v144 = &v109;
          v145 = 4LL;
          TlgWrite(v63, &unk_1800F9415, v61, v62, 8u, &v134);
        }
      }
      else
      {
        v133 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v133.Data1 = v14->wFormatTag;
        v56 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v51,
                lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        if ( **((_DWORD **)v56 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v56 + 1), 0x200000000000uLL) )
        {
          TlgCreateWsz(&v225, L"WAVEFORMATEX");
          v226 = &v14->nChannels;
          v227 = 2LL;
          v228 = &v14->nSamplesPerSec;
          v229 = 4LL;
          v230 = &v14->nAvgBytesPerSec;
          v231 = 4LL;
          v232 = &v133;
          v233 = 16LL;
          TlgWrite(v59, &unk_1800F93A2, v57, v58, 7u, &v224);
        }
      }
    }
    else
    {
      v52 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         v51,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v52 > 2u && TlgKeywordOn(v52, 0x200000000000uLL) )
      {
        v108 = 0;
        v264 = &v108;
        v265 = 4LL;
        TlgWrite(v53, &unk_1800F953A, v54, v55, 3u, &v263);
      }
    }
  }
  memset(v128, 0, sizeof(v128));
  v96 = 0LL;
  v64 = 0LL;
  if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
  {
    v127[0] = v8;
    v119 = v7;
    v65 = v89;
    AliasedEndpointCharacteristics = (unsigned int)InitializeStreamAndModeDescriptors(
                                                     v87,
                                                     0,
                                                     0x20002u,
                                                     2u,
                                                     v6,
                                                     &v119,
                                                     v127,
                                                     0,
                                                     0LL,
                                                     (__int64)v11,
                                                     0LL,
                                                     (__int64)v89,
                                                     0LL,
                                                     0LL,
                                                     0LL,
                                                     0LL,
                                                     0,
                                                     0LL,
                                                     &v96);
    v128[4] = v65;
    v128[0] = 0x100000002LL;
    *(GUID *)((char *)&v128[1] + 4) = v8;
    LODWORD(v128[1]) = v6;
    v128[5] = v91;
    v4 = (_QWORD *)v96;
    v64 = 0LL;
    if ( v96 )
    {
      *(_DWORD *)(v96 + 8) = v11->cbSize + 18;
      v4[2] = v11;
    }
  }
  v66 = 0LL;
  v97 = 0LL;
  if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
  {
    *(GUID *)v120 = v10;
    v127[1] = v7;
    AliasedEndpointCharacteristics = (unsigned int)DeriveStreamGroupParametersForStream(
                                                     (__int64)v87,
                                                     v86[0],
                                                     2,
                                                     v128[4],
                                                     cData,
                                                     (__int128 *)v120,
                                                     0,
                                                     0,
                                                     &v12->wFormatTag,
                                                     0,
                                                     (LPVOID **)&v97);
    v66 = v97;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v64, (__int64)&AudioResourceManager_StreamSettings_Derived);
  v90 = 0LL;
  if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v90);
    AliasedEndpointCharacteristics = (*(unsigned int (__fastcall **)(CDeviceGraphManager *, __int64, _QWORD, _QWORD *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 56LL))(
                                       g_DeviceGraphManager,
                                       v66,
                                       0LL,
                                       v4,
                                       &v90);
    if ( AliasedEndpointCharacteristics >= eHostProcessConnector )
      AliasedEndpointCharacteristics = (*(unsigned int (__fastcall **)(__int64, _QWORD *, struct CAudioSessionManagerProvider *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v90 + 264LL))(
                                         v90,
                                         v128,
                                         v100,
                                         v112);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v64, (__int64)&AudioResourceManager_Stream_Created);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
      AliasedEndpointCharacteristics);
  }
  v99 = 0LL;
  if ( AliasedEndpointCharacteristics < eHostProcessConnector )
    goto LABEL_113;
  AliasedEndpointCharacteristics = (*(unsigned int (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                     g_DeviceGraphStore,
                                     v91,
                                     &v99);
  if ( AliasedEndpointCharacteristics < eHostProcessConnector )
    goto LABEL_113;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v99 + 88LL))(v99, lpCriticalSection);
  v88 = 0LL;
  v67 = v90;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v88);
  AliasedEndpointCharacteristics = (*(unsigned int (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v67 + 208LL))(
                                     v67,
                                     &v88);
  if ( AliasedEndpointCharacteristics < eHostProcessConnector )
    goto LABEL_110;
  v68 = v88;
  if ( !v88 )
  {
    v98 = 0LL;
    v121 = v8;
    v122 = v7;
    v86[0] = DeriveSaDeviceParametersForStream(
               v87,
               AUDCLNT_SHAREMODE_SHARED,
               v86[0],
               0,
               &v122,
               &v121,
               v14,
               v13,
               *(_QWORD *)(v66 + 24),
               &v98);
    v89 = 0LL;
    if ( v86[0] >= eHostProcessConnector )
    {
      v100 = 0LL;
      v86[0] = GetAudioSessionManagerProvider(&v100);
      v69 = v100;
      if ( v86[0] >= eHostProcessConnector )
        v86[0] = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v100 + 40LL))(
                   v100,
                   v91,
                   &v89);
      if ( v69 )
        (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v69 + 16LL))(v69);
    }
    DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v87);
    SaDeviceForSharedStream = v86[0];
    if ( v86[0] < eHostProcessConnector )
      goto LABEL_86;
    if ( DoesExclusiveModeOverrideShared )
    {
      v72 = _InterlockedCompareExchange((volatile signed __int32 *)v89 + 63, 0, 0);
      v11 = v92;
      v12 = v93;
      v13 = v94;
      v14 = v95;
      v4 = (_QWORD *)v96;
      v66 = v97;
      if ( v72 )
      {
        SaDeviceForSharedStream = -2005139364;
        v86[0] = -2005139364;
        goto LABEL_86;
      }
      SaDeviceForSharedStream = eHostProcessConnector;
      v86[0] = eHostProcessConnector;
    }
    if ( SaDeviceForSharedStream >= eHostProcessConnector )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v88);
      v73 = (LPVOID *)v98;
      SaDeviceForSharedStream = (unsigned int)CAudioResourceManager::GetSaDeviceForSharedStream(
                                                v74,
                                                v87,
                                                (unsigned __int16 **)v98,
                                                0x20002u,
                                                AUDCLNT_SHAREMODE_SHARED,
                                                (unsigned __int64)pData,
                                                0,
                                                v85,
                                                0,
                                                v89,
                                                0,
                                                0,
                                                &v88);
      v86[0] = SaDeviceForSharedStream;
      goto LABEL_87;
    }
LABEL_86:
    v73 = (LPVOID *)v98;
LABEL_87:
    v75 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Au,
        (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
        SaDeviceForSharedStream);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      TemplateEventDescriptor((__int64)v75, (__int64)&AudioResourceManager_SaDevice_Created);
    if ( v86[0] >= eHostProcessConnector )
      v86[0] = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, struct ISaDeviceProxy *, __int64, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                 g_DeviceGraphManager,
                 v90,
                 v88,
                 1LL,
                 v112);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      TemplateEventDescriptor((__int64)v75, (__int64)&AudioResourceManager_SaDevice_Connected);
    if ( v89 )
      (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v89 + 16LL))(v89);
    if ( v73 )
      SaDeviceParams::`scalar deleting destructor'(v73);
    AliasedEndpointCharacteristics = v86[0];
    v68 = v88;
  }
  if ( AliasedEndpointCharacteristics >= eHostProcessConnector && v68 )
  {
    *(_QWORD *)v86 = 0LL;
    if ( (*(int (__fastcall **)(struct ISaDeviceProxy *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *))(*(_QWORD *)v68 + 104LL))(
           v68,
           v86) >= 0 )
    {
      v77 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         v76,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v77 > 4u )
      {
        if ( TlgKeywordOn(v77, 0x400000000000uLL) )
        {
          v245 = &GUID_00000000_0000_0000_0000_000000000000;
          v246 = 16LL;
          v247 = *(_QWORD *)v86 + 80LL;
          v248 = 16LL;
          LODWORD(v91) = *((_DWORD *)v87 + 37);
          v249 = &v91;
          v250 = 4LL;
          TlgWrite(v78, &unk_1800F935B, v79, v80, 5u, &v244);
        }
      }
    }
    if ( *(_QWORD *)v86 )
      SaDeviceParams::`scalar deleting destructor'(*(LPVOID **)v86);
  }
LABEL_110:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v88);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( AliasedEndpointCharacteristics < eHostProcessConnector )
LABEL_113:
    AudSrvTraceLoggingErrorHelper(
      "CAudioResourceManager::CreateInternalLoopbackStream",
      2816,
      AliasedEndpointCharacteristics);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids,
      AliasedEndpointCharacteristics);
  }
  v81 = v99;
  if ( v99 )
  {
    v99 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v90);
  if ( v66 )
  {
    operator delete(*(void **)(v66 + 56), (const struct std::nothrow_t *)0x10);
    *(_QWORD *)(v66 + 56) = 0LL;
    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)(v66 + 16));
    ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)v66);
    operator delete((void *)v66, (const struct std::nothrow_t *)0x40);
  }
  CoTaskMemFree(v4);
  CoTaskMemFree(v14);
  CoTaskMemFree(v13);
  CoTaskMemFree(v12);
  CoTaskMemFree(v11);
  if ( v87 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v87 + 16LL))(v87);
  return (unsigned int)AliasedEndpointCharacteristics;
}
