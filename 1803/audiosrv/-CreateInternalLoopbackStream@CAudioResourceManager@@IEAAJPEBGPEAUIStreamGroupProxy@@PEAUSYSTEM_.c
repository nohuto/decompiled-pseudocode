/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800CFD24 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     McTemplateU0 @ 0x1800021C0 (McTemplateU0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B8A0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180019D70 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001FE74 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800955A0 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800956D8 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        struct _RTL_CRITICAL_SECTION *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  _QWORD *v4; // r14
  int SharedModeEnginePeriodicity; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // ebx
  GUID v7; // xmm7
  GUID v8; // xmm8
  GUID v9; // xmm1
  GUID v10; // xmm6
  struct tWAVEFORMATEX *v11; // r15
  struct tWAVEFORMATEX *v12; // r12
  struct tWAVEFORMATEX *Src; // r13
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
  __int64 v65; // r14
  __int64 v66; // rbx
  __int64 v67; // rdi
  struct ISaDeviceProxy *v68; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v69; // edi
  int *v70; // rdi
  __int64 (__fastcall *v71)(int *); // rax
  bool DoesExclusiveModeOverrideShared; // cl
  int SaDeviceForSharedStream; // eax
  signed __int32 v74; // eax
  LPVOID *v75; // rdi
  CAudioSessionManager *v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  const struct _TlgProvider_t *v79; // rcx
  const GUID *v80; // r8
  const GUID *v81; // r9
  __int64 v82; // rcx
  void (*v83)(void); // rax
  void *cData; // [rsp+28h] [rbp-100h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v86; // [rsp+A8h] [rbp-80h] BYREF
  SaDeviceParams *v87; // [rsp+B0h] [rbp-78h] BYREF
  CEndpointCharacteristics *v88; // [rsp+B8h] [rbp-70h] BYREF
  struct ISaDeviceProxy *v89; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-58h] BYREF
  SaDeviceParams *v92; // [rsp+D8h] [rbp-50h] BYREF
  CAudioSessionManager *v93; // [rsp+E0h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v94; // [rsp+E8h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v95; // [rsp+F0h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v96; // [rsp+F8h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v97; // [rsp+100h] [rbp-28h] BYREF
  __int64 v98; // [rsp+108h] [rbp-20h] BYREF
  const unsigned __int16 *v99; // [rsp+110h] [rbp-18h]
  __int64 v100; // [rsp+118h] [rbp-10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp-8h] BYREF
  int v102; // [rsp+128h] [rbp+0h] BYREF
  int v103; // [rsp+12Ch] [rbp+4h] BYREF
  int v104; // [rsp+130h] [rbp+8h] BYREF
  int v105; // [rsp+134h] [rbp+Ch] BYREF
  int v106; // [rsp+138h] [rbp+10h] BYREF
  int v107; // [rsp+13Ch] [rbp+14h] BYREF
  int v108; // [rsp+140h] [rbp+18h] BYREF
  int v109; // [rsp+144h] [rbp+1Ch] BYREF
  int v110; // [rsp+148h] [rbp+20h] BYREF
  int v111; // [rsp+14Ch] [rbp+24h] BYREF
  int v112; // [rsp+150h] [rbp+28h] BYREF
  struct CAudioSessionManagerProvider *v113; // [rsp+158h] [rbp+30h] BYREF
  struct SYSTEM_AUDIO_STREAM *v114; // [rsp+160h] [rbp+38h]
  bool v115[8]; // [rsp+168h] [rbp+40h] BYREF
  int v116; // [rsp+170h] [rbp+48h]
  CAudioResourceManager *v117; // [rsp+178h] [rbp+50h]
  GUID v118; // [rsp+188h] [rbp+60h] BYREF
  GUID v119; // [rsp+198h] [rbp+70h] BYREF
  GUID v120; // [rsp+1A8h] [rbp+80h] BYREF
  GUID v121; // [rsp+1B8h] [rbp+90h] BYREF
  __int64 v122; // [rsp+1C8h] [rbp+A0h]
  GUID v123; // [rsp+1D8h] [rbp+B0h] BYREF
  __int64 v124[2]; // [rsp+1E8h] [rbp+C0h] BYREF
  struct _GUID v125; // [rsp+1F8h] [rbp+D0h] BYREF
  struct _GUID v126; // [rsp+208h] [rbp+E0h] BYREF
  GUID v127; // [rsp+218h] [rbp+F0h] BYREF
  struct _GUID v128; // [rsp+228h] [rbp+100h] BYREF
  struct _GUID v129; // [rsp+238h] [rbp+110h] BYREF
  struct _GUID v130; // [rsp+248h] [rbp+120h] BYREF
  GUID v131; // [rsp+258h] [rbp+130h] BYREF
  GUID v132; // [rsp+268h] [rbp+140h] BYREF
  _DWORD v133[3]; // [rsp+278h] [rbp+150h] BYREF
  GUID v134; // [rsp+284h] [rbp+15Ch]
  int v135[2]; // [rsp+298h] [rbp+170h]
  const unsigned __int16 *v136; // [rsp+2A0h] [rbp+178h]
  GUID v137; // [rsp+2A8h] [rbp+180h] BYREF
  GUID v138; // [rsp+2B8h] [rbp+190h] BYREF
  GUID v139; // [rsp+2C8h] [rbp+1A0h] BYREF
  GUID v140; // [rsp+2D8h] [rbp+1B0h] BYREF
  GUID v141; // [rsp+2E8h] [rbp+1C0h] BYREF
  EVENT_DATA_DESCRIPTOR v142; // [rsp+2F8h] [rbp+1D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+318h] [rbp+1F0h] BYREF
  WORD *v144; // [rsp+328h] [rbp+200h]
  __int64 v145; // [rsp+330h] [rbp+208h]
  DWORD *v146; // [rsp+338h] [rbp+210h]
  __int64 v147; // [rsp+340h] [rbp+218h]
  DWORD *v148; // [rsp+348h] [rbp+220h]
  __int64 v149; // [rsp+350h] [rbp+228h]
  char *v150; // [rsp+358h] [rbp+230h]
  __int64 v151; // [rsp+360h] [rbp+238h]
  int *v152; // [rsp+368h] [rbp+240h]
  __int64 v153; // [rsp+370h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v154; // [rsp+378h] [rbp+250h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v155; // [rsp+398h] [rbp+270h] BYREF
  WORD *p_nChannels; // [rsp+3A8h] [rbp+280h]
  __int64 v157; // [rsp+3B0h] [rbp+288h]
  DWORD *p_nSamplesPerSec; // [rsp+3B8h] [rbp+290h]
  __int64 v159; // [rsp+3C0h] [rbp+298h]
  DWORD *p_nAvgBytesPerSec; // [rsp+3C8h] [rbp+2A0h]
  __int64 v161; // [rsp+3D0h] [rbp+2A8h]
  char *v162; // [rsp+3D8h] [rbp+2B0h]
  __int64 v163; // [rsp+3E0h] [rbp+2B8h]
  int *v164; // [rsp+3E8h] [rbp+2C0h]
  __int64 v165; // [rsp+3F0h] [rbp+2C8h]
  EVENT_DATA_DESCRIPTOR v166; // [rsp+3F8h] [rbp+2D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+418h] [rbp+2F0h] BYREF
  WORD *v168; // [rsp+428h] [rbp+300h]
  __int64 v169; // [rsp+430h] [rbp+308h]
  DWORD *v170; // [rsp+438h] [rbp+310h]
  __int64 v171; // [rsp+440h] [rbp+318h]
  DWORD *v172; // [rsp+448h] [rbp+320h]
  __int64 v173; // [rsp+450h] [rbp+328h]
  char *v174; // [rsp+458h] [rbp+330h]
  __int64 v175; // [rsp+460h] [rbp+338h]
  int *v176; // [rsp+468h] [rbp+340h]
  __int64 v177; // [rsp+470h] [rbp+348h]
  EVENT_DATA_DESCRIPTOR v178; // [rsp+478h] [rbp+350h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v179; // [rsp+498h] [rbp+370h] BYREF
  WORD *v180; // [rsp+4A8h] [rbp+380h]
  __int64 v181; // [rsp+4B0h] [rbp+388h]
  DWORD *v182; // [rsp+4B8h] [rbp+390h]
  __int64 v183; // [rsp+4C0h] [rbp+398h]
  DWORD *v184; // [rsp+4C8h] [rbp+3A0h]
  __int64 v185; // [rsp+4D0h] [rbp+3A8h]
  char *v186; // [rsp+4D8h] [rbp+3B0h]
  __int64 v187; // [rsp+4E0h] [rbp+3B8h]
  int *v188; // [rsp+4E8h] [rbp+3C0h]
  __int64 v189; // [rsp+4F0h] [rbp+3C8h]
  EVENT_DATA_DESCRIPTOR v190; // [rsp+4F8h] [rbp+3D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v191; // [rsp+518h] [rbp+3F0h] BYREF
  WORD *v192; // [rsp+528h] [rbp+400h]
  __int64 v193; // [rsp+530h] [rbp+408h]
  DWORD *v194; // [rsp+538h] [rbp+410h]
  __int64 v195; // [rsp+540h] [rbp+418h]
  DWORD *v196; // [rsp+548h] [rbp+420h]
  __int64 v197; // [rsp+550h] [rbp+428h]
  char *v198; // [rsp+558h] [rbp+430h]
  __int64 v199; // [rsp+560h] [rbp+438h]
  int *v200; // [rsp+568h] [rbp+440h]
  __int64 v201; // [rsp+570h] [rbp+448h]
  EVENT_DATA_DESCRIPTOR v202; // [rsp+578h] [rbp+450h] BYREF
  GUID *v203; // [rsp+598h] [rbp+470h]
  __int64 v204; // [rsp+5A0h] [rbp+478h]
  char *v205; // [rsp+5A8h] [rbp+480h]
  __int64 v206; // [rsp+5B0h] [rbp+488h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v207; // [rsp+5B8h] [rbp+490h]
  __int64 v208; // [rsp+5C0h] [rbp+498h]
  EVENT_DATA_DESCRIPTOR v209; // [rsp+5C8h] [rbp+4A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+5E8h] [rbp+4C0h] BYREF
  WORD *v211; // [rsp+5F8h] [rbp+4D0h]
  __int64 v212; // [rsp+600h] [rbp+4D8h]
  DWORD *v213; // [rsp+608h] [rbp+4E0h]
  __int64 v214; // [rsp+610h] [rbp+4E8h]
  DWORD *v215; // [rsp+618h] [rbp+4F0h]
  __int64 v216; // [rsp+620h] [rbp+4F8h]
  GUID *v217; // [rsp+628h] [rbp+500h]
  __int64 v218; // [rsp+630h] [rbp+508h]
  EVENT_DATA_DESCRIPTOR v219; // [rsp+638h] [rbp+510h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v220; // [rsp+658h] [rbp+530h] BYREF
  WORD *v221; // [rsp+668h] [rbp+540h]
  __int64 v222; // [rsp+670h] [rbp+548h]
  DWORD *v223; // [rsp+678h] [rbp+550h]
  __int64 v224; // [rsp+680h] [rbp+558h]
  DWORD *v225; // [rsp+688h] [rbp+560h]
  __int64 v226; // [rsp+690h] [rbp+568h]
  GUID *v227; // [rsp+698h] [rbp+570h]
  __int64 v228; // [rsp+6A0h] [rbp+578h]
  EVENT_DATA_DESCRIPTOR v229; // [rsp+6A8h] [rbp+580h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v230; // [rsp+6C8h] [rbp+5A0h] BYREF
  WORD *v231; // [rsp+6D8h] [rbp+5B0h]
  __int64 v232; // [rsp+6E0h] [rbp+5B8h]
  DWORD *v233; // [rsp+6E8h] [rbp+5C0h]
  __int64 v234; // [rsp+6F0h] [rbp+5C8h]
  DWORD *v235; // [rsp+6F8h] [rbp+5D0h]
  __int64 v236; // [rsp+700h] [rbp+5D8h]
  GUID *v237; // [rsp+708h] [rbp+5E0h]
  __int64 v238; // [rsp+710h] [rbp+5E8h]
  EVENT_DATA_DESCRIPTOR v239; // [rsp+718h] [rbp+5F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v240; // [rsp+738h] [rbp+610h] BYREF
  WORD *v241; // [rsp+748h] [rbp+620h]
  __int64 v242; // [rsp+750h] [rbp+628h]
  DWORD *v243; // [rsp+758h] [rbp+630h]
  __int64 v244; // [rsp+760h] [rbp+638h]
  DWORD *v245; // [rsp+768h] [rbp+640h]
  __int64 v246; // [rsp+770h] [rbp+648h]
  GUID *v247; // [rsp+778h] [rbp+650h]
  __int64 v248; // [rsp+780h] [rbp+658h]
  EVENT_DATA_DESCRIPTOR v249; // [rsp+788h] [rbp+660h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v250; // [rsp+7A8h] [rbp+680h] BYREF
  WORD *v251; // [rsp+7B8h] [rbp+690h]
  __int64 v252; // [rsp+7C0h] [rbp+698h]
  DWORD *v253; // [rsp+7C8h] [rbp+6A0h]
  __int64 v254; // [rsp+7D0h] [rbp+6A8h]
  DWORD *v255; // [rsp+7D8h] [rbp+6B0h]
  __int64 v256; // [rsp+7E0h] [rbp+6B8h]
  GUID *v257; // [rsp+7E8h] [rbp+6C0h]
  __int64 v258; // [rsp+7F0h] [rbp+6C8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+7F8h] [rbp+6D0h] BYREF
  int *v260; // [rsp+818h] [rbp+6F0h]
  __int64 v261; // [rsp+820h] [rbp+6F8h]
  EVENT_DATA_DESCRIPTOR v262; // [rsp+828h] [rbp+700h] BYREF
  int *v263; // [rsp+848h] [rbp+720h]
  __int64 v264; // [rsp+850h] [rbp+728h]
  EVENT_DATA_DESCRIPTOR v265; // [rsp+858h] [rbp+730h] BYREF
  int *v266; // [rsp+878h] [rbp+750h]
  __int64 v267; // [rsp+880h] [rbp+758h]
  EVENT_DATA_DESCRIPTOR v268; // [rsp+888h] [rbp+760h] BYREF
  int *v269; // [rsp+8A8h] [rbp+780h]
  __int64 v270; // [rsp+8B0h] [rbp+788h]
  EVENT_DATA_DESCRIPTOR v271; // [rsp+8B8h] [rbp+790h] BYREF
  int *v272; // [rsp+8D8h] [rbp+7B0h]
  __int64 v273; // [rsp+8E0h] [rbp+7B8h]
  wil::details::in1diag3 *retaddr; // [rsp+970h] [rbp+848h]

  v122 = -2LL;
  v114 = a4;
  lpCriticalSection = a3;
  v99 = a2;
  v117 = this;
  v4 = 0LL;
  v88 = 0LL;
  SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                  g_pEndpointCharacteristicsCache,
                                  a2,
                                  0LL,
                                  &v88);
  if ( SharedModeEnginePeriodicity < 0
    || (v6 = eLoopbackConnector, !(unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v88)) )
  {
    v6 = eHostProcessConnector;
  }
  v86 = v6;
  v7 = GUID_00000000_0000_0000_0000_000000000000;
  v118 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = GUID_00000000_0000_0000_0000_000000000000;
  v120 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = GUID_00000000_0000_0000_0000_000000000000;
  v121 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v119 = GUID_00000000_0000_0000_0000_000000000000;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    SharedModeEnginePeriodicity = DeriveAudioProcessingModeConfiguration(
                                    0,
                                    0,
                                    0,
                                    v88,
                                    2u,
                                    0,
                                    v6,
                                    0,
                                    0,
                                    0,
                                    &v118,
                                    &v120,
                                    &v121,
                                    &v119);
    v7 = v118;
    v8 = v120;
    v9 = v121;
    v10 = v119;
  }
  v11 = 0LL;
  v94 = 0LL;
  v12 = 0LL;
  v95 = 0LL;
  Src = 0LL;
  v96 = 0LL;
  v14 = 0LL;
  v97 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v128 = v7;
    v129 = v8;
    v130 = v9;
    SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                    v88,
                                    0,
                                    (struct _GUID *)(unsigned int)v6,
                                    AUDCLNT_SHAREMODE_SHARED,
                                    &v130,
                                    &v129,
                                    &v128,
                                    0LL,
                                    &v94,
                                    &v95,
                                    &v96,
                                    &v97);
    v11 = v94;
    v12 = v95;
    Src = v96;
    v14 = v97;
  }
  v90 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
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
          TlgCreateWsz(&v155, L"WAVEFORMATEXTENSIBLE");
          p_nChannels = &v11->nChannels;
          v157 = 2LL;
          p_nSamplesPerSec = &v11->nSamplesPerSec;
          v159 = 4LL;
          p_nAvgBytesPerSec = &v11->nAvgBytesPerSec;
          v161 = 4LL;
          v162 = (char *)&v11[1].nSamplesPerSec + 2;
          v163 = 16LL;
          v103 = *(_DWORD *)&v11[1].nChannels;
          v164 = &v103;
          v165 = 4LL;
          TlgWrite(v23, &unk_1801466EE, v21, v22, 8u, &v154);
        }
      }
      else
      {
        v137 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v137.Data1 = v11->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
          v211 = &v11->nChannels;
          v212 = 2LL;
          v213 = &v11->nSamplesPerSec;
          v214 = 4LL;
          v215 = &v11->nAvgBytesPerSec;
          v216 = 4LL;
          v217 = &v137;
          v218 = 16LL;
          TlgWrite(v20, &unk_180146792, v18, v19, 7u, &v209);
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
        v102 = 0;
        v260 = &v102;
        v261 = 4LL;
        TlgWrite(v15, &unk_180146829, v16, v17, 3u, &pData);
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
          TlgCreateWsz(&v167, L"WAVEFORMATEXTENSIBLE");
          v168 = &v12->nChannels;
          v169 = 2LL;
          v170 = &v12->nSamplesPerSec;
          v171 = 4LL;
          v172 = &v12->nAvgBytesPerSec;
          v173 = 4LL;
          v174 = (char *)&v12[1].nSamplesPerSec + 2;
          v175 = 16LL;
          v105 = *(_DWORD *)&v12[1].nChannels;
          v176 = &v105;
          v177 = 4LL;
          TlgWrite(v32, &unk_18014654C, v30, v31, 8u, &v166);
        }
      }
      else
      {
        v138 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v138.Data1 = v12->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v15,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v250, L"WAVEFORMATEX");
          v251 = &v12->nChannels;
          v252 = 2LL;
          v253 = &v12->nSamplesPerSec;
          v254 = 4LL;
          v255 = &v12->nAvgBytesPerSec;
          v256 = 4LL;
          v257 = &v138;
          v258 = 16LL;
          TlgWrite(v29, &unk_1801465F3, v27, v28, 7u, &v249);
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
        v104 = 0;
        v263 = &v104;
        v264 = 4LL;
        TlgWrite(v24, &unk_18014668D, v25, v26, 3u, &v262);
      }
    }
    if ( Src )
    {
      if ( Src->wFormatTag == 0xFFFE )
      {
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v24,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v179, L"WAVEFORMATEXTENSIBLE");
          v180 = &Src->nChannels;
          v181 = 2LL;
          v182 = &Src->nSamplesPerSec;
          v183 = 4LL;
          v184 = &Src->nAvgBytesPerSec;
          v185 = 4LL;
          v186 = (char *)&Src[1].nSamplesPerSec + 2;
          v187 = 16LL;
          v107 = *(_DWORD *)&Src[1].nChannels;
          v188 = &v107;
          v189 = 4LL;
          TlgWrite(v41, &unk_1801463AD, v39, v40, 8u, &v178);
        }
      }
      else
      {
        v139 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v139.Data1 = Src->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v24,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v220, L"WAVEFORMATEX");
          v221 = &Src->nChannels;
          v222 = 2LL;
          v223 = &Src->nSamplesPerSec;
          v224 = 4LL;
          v225 = &Src->nAvgBytesPerSec;
          v226 = 4LL;
          v227 = &v139;
          v228 = 16LL;
          TlgWrite(v38, &unk_180146453, v36, v37, 7u, &v219);
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
        v106 = 0;
        v266 = &v106;
        v267 = 4LL;
        TlgWrite(v33, &unk_1801464EC, v34, v35, 3u, &v265);
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
          TlgCreateWsz(&v191, L"WAVEFORMATEXTENSIBLE");
          v192 = &v14->nChannels;
          v193 = 2LL;
          v194 = &v14->nSamplesPerSec;
          v195 = 4LL;
          v196 = &v14->nAvgBytesPerSec;
          v197 = 4LL;
          v198 = (char *)&v14[1].nSamplesPerSec + 2;
          v199 = 16LL;
          v108 = *(_DWORD *)&v14[1].nChannels;
          v200 = &v108;
          v201 = 4LL;
          TlgWrite(v50, &unk_180146211, v48, v49, 8u, &v190);
        }
      }
      else
      {
        v140 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v140.Data1 = v14->wFormatTag;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v33,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v230, L"WAVEFORMATEX");
          v231 = &v14->nChannels;
          v232 = 2LL;
          v233 = &v14->nSamplesPerSec;
          v234 = 4LL;
          v235 = &v14->nAvgBytesPerSec;
          v236 = 4LL;
          v237 = &v140;
          v238 = 16LL;
          TlgWrite(v47, &unk_1801462B6, v45, v46, 7u, &v229);
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
        v112 = 0;
        v269 = &v112;
        v270 = 4LL;
        TlgWrite(v42, &unk_18014634E, v43, v44, 3u, &v268);
      }
    }
    v131 = v7;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                    (__int64)v88,
                                    v6,
                                    &v14->wFormatTag,
                                    &v131,
                                    0,
                                    &v111,
                                    0LL,
                                    0LL,
                                    0LL);
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v90 = (unsigned int)(int)((double)v111 * 10000000.0 / (double)(int)v14->nSamplesPerSec + 0.5);
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
          TlgCreateWsz(&v143, L"WAVEFORMATEXTENSIBLE");
          v144 = &v14->nChannels;
          v145 = 2LL;
          v146 = &v14->nSamplesPerSec;
          v147 = 4LL;
          v148 = &v14->nAvgBytesPerSec;
          v149 = 4LL;
          v150 = (char *)&v14[1].nSamplesPerSec + 2;
          v151 = 16LL;
          v110 = *(_DWORD *)&v14[1].nChannels;
          v152 = &v110;
          v153 = 4LL;
          TlgWrite(v63, &unk_1801460E4, v61, v62, 8u, &v142);
        }
      }
      else
      {
        v141 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v141.Data1 = v14->wFormatTag;
        v56 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v51,
                lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        if ( **((_DWORD **)v56 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v56 + 1), 0x200000000000uLL) )
        {
          TlgCreateWsz(&v240, L"WAVEFORMATEX");
          v241 = &v14->nChannels;
          v242 = 2LL;
          v243 = &v14->nSamplesPerSec;
          v244 = 4LL;
          v245 = &v14->nAvgBytesPerSec;
          v246 = 4LL;
          v247 = &v141;
          v248 = 16LL;
          TlgWrite(v59, &unk_180146164, v57, v58, 7u, &v239);
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
        v109 = 0;
        v272 = &v109;
        v273 = 4LL;
        TlgWrite(v53, &unk_1801461D7, v54, v55, 3u, &v271);
      }
    }
  }
  memset_0(v133, 0, 0x30uLL);
  v98 = 0LL;
  v64 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v132 = v8;
    v123 = v7;
    v65 = v90;
    SharedModeEnginePeriodicity = InitializeStreamAndModeDescriptors(
                                    (__int64)v88,
                                    0,
                                    0x20002u,
                                    2u,
                                    v6,
                                    &v123,
                                    &v132,
                                    0,
                                    0LL,
                                    (__int64)v11,
                                    0LL,
                                    v90,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0,
                                    0,
                                    0LL,
                                    &v98);
    *(_QWORD *)v135 = v65;
    v133[0] = 2;
    v134 = v8;
    v133[2] = v6;
    v136 = v99;
    v133[1] = 1;
    v4 = (_QWORD *)v98;
    v64 = 0LL;
    if ( v98 )
    {
      *(_DWORD *)(v98 + 8) = v11->cbSize + 18;
      v4[2] = v11;
    }
  }
  v66 = 0LL;
  v90 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    *(GUID *)v124 = v10;
    SharedModeEnginePeriodicity = DeriveStreamGroupParametersForStream(
                                    (__int64)v88,
                                    v86,
                                    2,
                                    *(__int64 *)v135,
                                    cData,
                                    (__int128 *)v124,
                                    0,
                                    0,
                                    &v12->wFormatTag,
                                    0,
                                    (LPVOID **)&v90);
    v66 = v90;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v64, (__int64)&AudioResourceManager_StreamSettings_Derived);
  v91 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v91);
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, _QWORD, _QWORD *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 56LL))(
                                    g_DeviceGraphManager,
                                    v66,
                                    0LL,
                                    v4,
                                    &v91);
    if ( SharedModeEnginePeriodicity >= 0 )
      SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, _DWORD *, LPCRITICAL_SECTION, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v91 + 256LL))(
                                      v91,
                                      v133,
                                      lpCriticalSection,
                                      v114);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v64, (__int64)&AudioResourceManager_Stream_Created);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
      SharedModeEnginePeriodicity);
  }
  v100 = 0LL;
  if ( SharedModeEnginePeriodicity < 0
    || (SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                        g_DeviceGraphStore,
                                        v99,
                                        &v100),
        SharedModeEnginePeriodicity < 0) )
  {
LABEL_129:
    AudSrvTraceLoggingErrorHelper(
      "CAudioResourceManager::CreateInternalLoopbackStream",
      2997,
      SharedModeEnginePeriodicity);
LABEL_130:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
        SharedModeEnginePeriodicity);
    }
    goto LABEL_134;
  }
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v100 + 112LL))(v100, &lpCriticalSection);
  v89 = 0LL;
  v67 = v91;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v89);
  SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v67 + 208LL))(
                                  v67,
                                  &v89);
  if ( SharedModeEnginePeriodicity < 0 )
  {
LABEL_126:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v89);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( SharedModeEnginePeriodicity >= 0 )
      goto LABEL_130;
    goto LABEL_129;
  }
  v68 = v89;
  if ( v89 )
  {
LABEL_119:
    if ( SharedModeEnginePeriodicity >= 0 && v68 )
    {
      v87 = 0LL;
      if ( (*(int (__fastcall **)(struct ISaDeviceProxy *, SaDeviceParams **))(*(_QWORD *)v68 + 104LL))(v68, &v87) >= 0 )
      {
        v79 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                           v78,
                                                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                             + 1);
        if ( *(_DWORD *)v79 > 4u )
        {
          v203 = &GUID_00000000_0000_0000_0000_000000000000;
          v204 = 16LL;
          v205 = (char *)v87 + 80;
          v206 = 16LL;
          v86 = *((_DWORD *)v88 + 37);
          v207 = &v86;
          v208 = 4LL;
          TlgWrite(v79, &unk_18014609D, v80, v81, 5u, &v202);
        }
      }
      if ( v87 )
        SaDeviceParams::`scalar deleting destructor'((LPVOID *)v87);
    }
    goto LABEL_126;
  }
  v92 = 0LL;
  v125 = v8;
  v126 = v7;
  v69 = v86;
  LODWORD(v87) = DeriveSaDeviceParametersForStream(
                   v88,
                   AUDCLNT_SHAREMODE_SHARED,
                   v86,
                   0,
                   &v126,
                   &v125,
                   v14,
                   Src,
                   *(_QWORD *)(v66 + 24),
                   &v92);
  v93 = 0LL;
  if ( (int)v87 >= 0 )
  {
    v113 = 0LL;
    LODWORD(v87) = GetAudioSessionManagerProvider(&v113);
    v70 = (int *)v113;
    if ( (int)v87 >= 0 )
      LODWORD(v87) = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v113 + 40LL))(
                       v113,
                       v99,
                       &v93);
    if ( v70 )
    {
      v71 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v70 + 16LL);
      if ( v71 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v70);
      else
        v71(v70);
    }
    v69 = v86;
  }
  DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v88);
  SaDeviceForSharedStream = (int)v87;
  if ( (int)v87 < 0 )
    goto LABEL_86;
  if ( DoesExclusiveModeOverrideShared )
  {
    v74 = _InterlockedCompareExchange((volatile signed __int32 *)v93 + 79, 0, 0);
    v11 = v94;
    v12 = v95;
    Src = v96;
    v14 = v97;
    v4 = (_QWORD *)v98;
    v66 = v90;
    if ( v74 )
    {
      SaDeviceForSharedStream = -2005139364;
      LODWORD(v87) = -2005139364;
LABEL_86:
      v75 = (LPVOID *)v92;
LABEL_87:
      v76 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Bu,
          (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
          SaDeviceForSharedStream);
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0((__int64)v76, (__int64)&AudioResourceManager_SaDevice_Created);
      if ( (int)v87 >= 0 )
        LODWORD(v87) = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, struct ISaDeviceProxy *, __int64, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                         g_DeviceGraphManager,
                         v91,
                         v89,
                         1LL,
                         v114);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0((__int64)v76, (__int64)&AudioResourceManager_SaDevice_Connected);
      if ( v93 )
      {
        if ( *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v93 + 16LL) == CAudioSessionManager::Release )
          CAudioSessionManager::Release(v93);
        else
          (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v93 + 16LL))(v93);
      }
      if ( v75 )
        SaDeviceParams::`scalar deleting destructor'(v75);
      SharedModeEnginePeriodicity = (int)v87;
      v68 = v89;
      goto LABEL_119;
    }
    SaDeviceForSharedStream = 0;
    LODWORD(v87) = 0;
    v7 = v118;
  }
  if ( SaDeviceForSharedStream < 0 )
    goto LABEL_86;
  *(_QWORD *)v115 = 0LL;
  v116 = 0;
  v127 = v7;
  v77 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, GUID *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, _DWORD))(**((_QWORD **)v117 + 6) + 56LL))(
          *((_QWORD *)v117 + 6),
          v99,
          *((unsigned int *)v88 + 37),
          &v127,
          v69,
          0);
  SharedModeEnginePeriodicity = v77;
  if ( v77 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v89);
    v75 = (LPVOID *)v92;
    SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                0LL,
                                v88,
                                v92,
                                0x20002u,
                                AUDCLNT_SHAREMODE_SHARED,
                                (struct SaDeviceResourceParams *)v115,
                                (bool)v115,
                                0,
                                v93,
                                0,
                                0,
                                &v89);
    LODWORD(v87) = SaDeviceForSharedStream;
    if ( *(_QWORD *)v115 )
    {
      (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
      SaDeviceForSharedStream = (int)v87;
    }
    goto LABEL_87;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB81,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v77);
  if ( *(_QWORD *)v115 )
    (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  if ( v93 )
  {
    if ( *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v93 + 16LL) == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v93);
    else
      (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v93 + 16LL))(v93);
  }
  if ( v92 )
    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v92);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v89);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_134:
  v82 = v100;
  if ( v100 )
  {
    v100 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v91);
  if ( v66 )
  {
    operator delete(*(void **)(v66 + 56), (const struct std::nothrow_t *)0x10);
    *(_QWORD *)(v66 + 56) = 0LL;
    CoTaskMemFree(*(LPVOID *)(v66 + 16));
    *(_QWORD *)(v66 + 16) = 0LL;
    CoTaskMemFree(*(LPVOID *)v66);
    *(_QWORD *)v66 = 0LL;
    operator delete((void *)v66, (const struct std::nothrow_t *)0x40);
  }
  CoTaskMemFree(v4);
  CoTaskMemFree(v14);
  CoTaskMemFree(Src);
  CoTaskMemFree(v12);
  CoTaskMemFree(v11);
  if ( v88 )
  {
    v83 = *(void (**)(void))(*(_QWORD *)v88 + 16LL);
    if ( (char *)v83 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v88);
    else
      v83();
  }
  return (unsigned int)SharedModeEnginePeriodicity;
}
