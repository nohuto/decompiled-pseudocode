/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18009C3D8 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180007C00 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180007DF4 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B350 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18000FD7C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020DE0 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x180020EB8 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     McTemplateU0 @ 0x1800906F8 (McTemplateU0.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  unsigned int *v4; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 SharedModeEnginePeriodicity; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edi
  GUID v7; // xmm7
  GUID v8; // xmm8
  GUID v9; // xmm1
  GUID v10; // xmm6
  struct tWAVEFORMATEX *v11; // r15
  struct tWAVEFORMATEX *Src; // r12
  struct tWAVEFORMATEX *v13; // r13
  struct tWAVEFORMATEX *v14; // r14
  const GUID *v15; // r8
  const GUID *v16; // r9
  void *v17; // r8
  const struct _TlgProvider_t *v18; // rcx
  void *v19; // r8
  __int64 v20; // r11
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  TraceLoggingHProvider v23; // r10
  void *v24; // r8
  __int64 v25; // r11
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  TraceLoggingHProvider v28; // r10
  const GUID *v29; // r8
  const GUID *v30; // r9
  void *v31; // r8
  const struct _TlgProvider_t *v32; // rcx
  void *v33; // r8
  __int64 v34; // r11
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  TraceLoggingHProvider v37; // r10
  void *v38; // r8
  __int64 v39; // r11
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  TraceLoggingHProvider v42; // r10
  const GUID *v43; // r8
  const GUID *v44; // r9
  void *v45; // r8
  const struct _TlgProvider_t *v46; // rcx
  void *v47; // r8
  __int64 v48; // r11
  LPCGUID v49; // r8
  LPCGUID v50; // r9
  TraceLoggingHProvider v51; // r10
  void *v52; // r8
  __int64 v53; // r11
  LPCGUID v54; // r8
  LPCGUID v55; // r9
  TraceLoggingHProvider v56; // r10
  const GUID *v57; // r8
  const GUID *v58; // r9
  void *v59; // r8
  const struct _TlgProvider_t *v60; // rcx
  void *v61; // r8
  __int64 v62; // r11
  LPCGUID v63; // r8
  LPCGUID v64; // r9
  TraceLoggingHProvider v65; // r10
  void *v66; // r8
  __int64 v67; // r11
  LPCGUID v68; // r8
  LPCGUID v69; // r9
  TraceLoggingHProvider v70; // r10
  void *v71; // r8
  const struct _TlgProvider_t *v72; // rcx
  const struct _TlgProvider_t *v73; // rcx
  const GUID *v74; // r8
  const GUID *v75; // r9
  void *v76; // r8
  LPCGUID v77; // r8
  LPCGUID v78; // r9
  TraceLoggingHProvider v79; // r10
  void *v80; // r8
  LPCGUID v81; // r8
  LPCGUID v82; // r9
  TraceLoggingHProvider v83; // r10
  __int64 v84; // rcx
  CAudioSessionManager *v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rbx
  struct ISaDeviceProxy *v88; // rcx
  struct CAudioSessionManagerProvider *v89; // rbx
  __int64 (__fastcall *v90)(volatile signed __int32 *); // rax
  bool DoesExclusiveModeOverrideShared; // cl
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 SaDeviceForSharedStream; // eax
  signed __int32 v93; // eax
  LPVOID *v94; // rbx
  CAudioResourceManager *v95; // rcx
  CAudioDGProcess *v96; // rcx
  void (*v97)(void); // rax
  const GUID *v98; // r9
  const GUID *v99; // r8
  void *v100; // r8
  const struct _TlgProvider_t *v101; // rcx
  CAudioSessionManager *v102; // rcx
  LPVOID *v103; // rax
  CAudioSessionManager *v104; // rax
  void (*v105)(void); // rax
  void *cData; // [rsp+28h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-F8h]
  bool v109; // [rsp+40h] [rbp-E8h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v110[2]; // [rsp+A8h] [rbp-80h] BYREF
  CEndpointCharacteristics *v111; // [rsp+B0h] [rbp-78h] BYREF
  CAudioSessionManager *v112; // [rsp+B8h] [rbp-70h] BYREF
  struct ISaDeviceProxy *v113; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v114; // [rsp+C8h] [rbp-60h] BYREF
  const unsigned __int16 *v115; // [rsp+D0h] [rbp-58h] BYREF
  unsigned int *v116; // [rsp+D8h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v117; // [rsp+E0h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v118; // [rsp+E8h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v119; // [rsp+F0h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v120; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v121; // [rsp+100h] [rbp-28h] BYREF
  struct SaDeviceParams *v122; // [rsp+108h] [rbp-20h] BYREF
  __int64 v123; // [rsp+110h] [rbp-18h] BYREF
  LPVOID v124; // [rsp+118h] [rbp-10h] BYREF
  int v125; // [rsp+120h] [rbp-8h] BYREF
  WINBOOL v126; // [rsp+124h] [rbp-4h] BYREF
  int v127; // [rsp+128h] [rbp+0h] BYREF
  WINBOOL v128; // [rsp+12Ch] [rbp+4h] BYREF
  WINBOOL v129; // [rsp+130h] [rbp+8h] BYREF
  int v130; // [rsp+134h] [rbp+Ch] BYREF
  int v131; // [rsp+138h] [rbp+10h] BYREF
  int v132; // [rsp+13Ch] [rbp+14h] BYREF
  WINBOOL v133; // [rsp+140h] [rbp+18h] BYREF
  WINBOOL v134; // [rsp+144h] [rbp+1Ch] BYREF
  int v135; // [rsp+148h] [rbp+20h] BYREF
  int v136; // [rsp+14Ch] [rbp+24h] BYREF
  WINBOOL v137; // [rsp+150h] [rbp+28h] BYREF
  WINBOOL fPending; // [rsp+154h] [rbp+2Ch] BYREF
  int v139; // [rsp+158h] [rbp+30h] BYREF
  WINBOOL v140; // [rsp+15Ch] [rbp+34h] BYREF
  WINBOOL v141; // [rsp+160h] [rbp+38h] BYREF
  WINBOOL v142; // [rsp+164h] [rbp+3Ch] BYREF
  int v143; // [rsp+168h] [rbp+40h] BYREF
  WINBOOL v144; // [rsp+16Ch] [rbp+44h] BYREF
  WINBOOL v145; // [rsp+170h] [rbp+48h] BYREF
  WINBOOL v146; // [rsp+174h] [rbp+4Ch] BYREF
  int v147; // [rsp+178h] [rbp+50h] BYREF
  WINBOOL v148; // [rsp+17Ch] [rbp+54h] BYREF
  int v149; // [rsp+180h] [rbp+58h] BYREF
  WINBOOL v150; // [rsp+184h] [rbp+5Ch] BYREF
  WINBOOL v151; // [rsp+188h] [rbp+60h] BYREF
  LPVOID v152; // [rsp+190h] [rbp+68h] BYREF
  LPVOID v153; // [rsp+198h] [rbp+70h] BYREF
  LPVOID v154; // [rsp+1A0h] [rbp+78h] BYREF
  LPVOID v155; // [rsp+1A8h] [rbp+80h] BYREF
  LPVOID v156; // [rsp+1B0h] [rbp+88h] BYREF
  LPVOID v157; // [rsp+1B8h] [rbp+90h] BYREF
  LPVOID v158; // [rsp+1C0h] [rbp+98h] BYREF
  LPVOID v159; // [rsp+1C8h] [rbp+A0h] BYREF
  LPVOID v160; // [rsp+1D0h] [rbp+A8h] BYREF
  LPVOID v161; // [rsp+1D8h] [rbp+B0h] BYREF
  LPVOID v162; // [rsp+1E0h] [rbp+B8h] BYREF
  LPVOID v163; // [rsp+1E8h] [rbp+C0h] BYREF
  LPVOID v164; // [rsp+1F0h] [rbp+C8h] BYREF
  LPVOID v165; // [rsp+1F8h] [rbp+D0h] BYREF
  struct CAudioSessionManagerProvider *v166; // [rsp+200h] [rbp+D8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v167; // [rsp+208h] [rbp+E0h]
  LPVOID Context; // [rsp+210h] [rbp+E8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+218h] [rbp+F0h] BYREF
  GUID v170; // [rsp+228h] [rbp+100h] BYREF
  GUID v171; // [rsp+238h] [rbp+110h] BYREF
  GUID v172; // [rsp+248h] [rbp+120h] BYREF
  GUID v173; // [rsp+258h] [rbp+130h] BYREF
  __int64 v174; // [rsp+268h] [rbp+140h]
  GUID v175; // [rsp+278h] [rbp+150h] BYREF
  GUID v176; // [rsp+288h] [rbp+160h] BYREF
  __int64 v177[2]; // [rsp+298h] [rbp+170h] BYREF
  struct _GUID v178; // [rsp+2A8h] [rbp+180h] BYREF
  struct _GUID v179; // [rsp+2B8h] [rbp+190h] BYREF
  struct _GUID v180; // [rsp+2C8h] [rbp+1A0h] BYREF
  struct _GUID v181; // [rsp+2D8h] [rbp+1B0h] BYREF
  struct _GUID v182; // [rsp+2E8h] [rbp+1C0h] BYREF
  GUID v183; // [rsp+2F8h] [rbp+1D0h] BYREF
  _QWORD v184[6]; // [rsp+308h] [rbp+1E0h] BYREF
  GUID v185; // [rsp+338h] [rbp+210h] BYREF
  GUID v186; // [rsp+348h] [rbp+220h] BYREF
  GUID v187; // [rsp+358h] [rbp+230h] BYREF
  GUID v188; // [rsp+368h] [rbp+240h] BYREF
  GUID v189; // [rsp+378h] [rbp+250h] BYREF
  EVENT_DATA_DESCRIPTOR v190; // [rsp+388h] [rbp+260h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v191; // [rsp+3A8h] [rbp+280h] BYREF
  WORD *v192; // [rsp+3B8h] [rbp+290h]
  __int64 v193; // [rsp+3C0h] [rbp+298h]
  DWORD *v194; // [rsp+3C8h] [rbp+2A0h]
  __int64 v195; // [rsp+3D0h] [rbp+2A8h]
  DWORD *v196; // [rsp+3D8h] [rbp+2B0h]
  __int64 v197; // [rsp+3E0h] [rbp+2B8h]
  char *v198; // [rsp+3E8h] [rbp+2C0h]
  __int64 v199; // [rsp+3F0h] [rbp+2C8h]
  int *v200; // [rsp+3F8h] [rbp+2D0h]
  __int64 v201; // [rsp+400h] [rbp+2D8h]
  EVENT_DATA_DESCRIPTOR v202; // [rsp+408h] [rbp+2E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v203; // [rsp+428h] [rbp+300h] BYREF
  WORD *p_nChannels; // [rsp+438h] [rbp+310h]
  __int64 v205; // [rsp+440h] [rbp+318h]
  DWORD *p_nSamplesPerSec; // [rsp+448h] [rbp+320h]
  __int64 v207; // [rsp+450h] [rbp+328h]
  DWORD *p_nAvgBytesPerSec; // [rsp+458h] [rbp+330h]
  __int64 v209; // [rsp+460h] [rbp+338h]
  char *v210; // [rsp+468h] [rbp+340h]
  __int64 v211; // [rsp+470h] [rbp+348h]
  int *v212; // [rsp+478h] [rbp+350h]
  __int64 v213; // [rsp+480h] [rbp+358h]
  EVENT_DATA_DESCRIPTOR v214; // [rsp+488h] [rbp+360h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v215; // [rsp+4A8h] [rbp+380h] BYREF
  WORD *v216; // [rsp+4B8h] [rbp+390h]
  __int64 v217; // [rsp+4C0h] [rbp+398h]
  DWORD *v218; // [rsp+4C8h] [rbp+3A0h]
  __int64 v219; // [rsp+4D0h] [rbp+3A8h]
  DWORD *v220; // [rsp+4D8h] [rbp+3B0h]
  __int64 v221; // [rsp+4E0h] [rbp+3B8h]
  char *v222; // [rsp+4E8h] [rbp+3C0h]
  __int64 v223; // [rsp+4F0h] [rbp+3C8h]
  int *v224; // [rsp+4F8h] [rbp+3D0h]
  __int64 v225; // [rsp+500h] [rbp+3D8h]
  EVENT_DATA_DESCRIPTOR v226; // [rsp+508h] [rbp+3E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v227; // [rsp+528h] [rbp+400h] BYREF
  WORD *v228; // [rsp+538h] [rbp+410h]
  __int64 v229; // [rsp+540h] [rbp+418h]
  DWORD *v230; // [rsp+548h] [rbp+420h]
  __int64 v231; // [rsp+550h] [rbp+428h]
  DWORD *v232; // [rsp+558h] [rbp+430h]
  __int64 v233; // [rsp+560h] [rbp+438h]
  char *v234; // [rsp+568h] [rbp+440h]
  __int64 v235; // [rsp+570h] [rbp+448h]
  int *v236; // [rsp+578h] [rbp+450h]
  __int64 v237; // [rsp+580h] [rbp+458h]
  EVENT_DATA_DESCRIPTOR v238; // [rsp+588h] [rbp+460h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v239; // [rsp+5A8h] [rbp+480h] BYREF
  WORD *v240; // [rsp+5B8h] [rbp+490h]
  __int64 v241; // [rsp+5C0h] [rbp+498h]
  DWORD *v242; // [rsp+5C8h] [rbp+4A0h]
  __int64 v243; // [rsp+5D0h] [rbp+4A8h]
  DWORD *v244; // [rsp+5D8h] [rbp+4B0h]
  __int64 v245; // [rsp+5E0h] [rbp+4B8h]
  char *v246; // [rsp+5E8h] [rbp+4C0h]
  __int64 v247; // [rsp+5F0h] [rbp+4C8h]
  int *v248; // [rsp+5F8h] [rbp+4D0h]
  __int64 v249; // [rsp+600h] [rbp+4D8h]
  EVENT_DATA_DESCRIPTOR v250; // [rsp+608h] [rbp+4E0h] BYREF
  GUID *v251; // [rsp+628h] [rbp+500h]
  __int64 v252; // [rsp+630h] [rbp+508h]
  __int64 v253; // [rsp+638h] [rbp+510h]
  __int64 v254; // [rsp+640h] [rbp+518h]
  const unsigned __int16 **v255; // [rsp+648h] [rbp+520h]
  __int64 v256; // [rsp+650h] [rbp+528h]
  EVENT_DATA_DESCRIPTOR v257; // [rsp+658h] [rbp+530h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+678h] [rbp+550h] BYREF
  WORD *v259; // [rsp+688h] [rbp+560h]
  __int64 v260; // [rsp+690h] [rbp+568h]
  DWORD *v261; // [rsp+698h] [rbp+570h]
  __int64 v262; // [rsp+6A0h] [rbp+578h]
  DWORD *v263; // [rsp+6A8h] [rbp+580h]
  __int64 v264; // [rsp+6B0h] [rbp+588h]
  GUID *v265; // [rsp+6B8h] [rbp+590h]
  __int64 v266; // [rsp+6C0h] [rbp+598h]
  EVENT_DATA_DESCRIPTOR v267; // [rsp+6C8h] [rbp+5A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v268; // [rsp+6E8h] [rbp+5C0h] BYREF
  WORD *v269; // [rsp+6F8h] [rbp+5D0h]
  __int64 v270; // [rsp+700h] [rbp+5D8h]
  DWORD *v271; // [rsp+708h] [rbp+5E0h]
  __int64 v272; // [rsp+710h] [rbp+5E8h]
  DWORD *v273; // [rsp+718h] [rbp+5F0h]
  __int64 v274; // [rsp+720h] [rbp+5F8h]
  GUID *v275; // [rsp+728h] [rbp+600h]
  __int64 v276; // [rsp+730h] [rbp+608h]
  EVENT_DATA_DESCRIPTOR v277; // [rsp+738h] [rbp+610h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v278; // [rsp+758h] [rbp+630h] BYREF
  WORD *v279; // [rsp+768h] [rbp+640h]
  __int64 v280; // [rsp+770h] [rbp+648h]
  DWORD *v281; // [rsp+778h] [rbp+650h]
  __int64 v282; // [rsp+780h] [rbp+658h]
  DWORD *v283; // [rsp+788h] [rbp+660h]
  __int64 v284; // [rsp+790h] [rbp+668h]
  GUID *v285; // [rsp+798h] [rbp+670h]
  __int64 v286; // [rsp+7A0h] [rbp+678h]
  EVENT_DATA_DESCRIPTOR v287; // [rsp+7A8h] [rbp+680h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v288; // [rsp+7C8h] [rbp+6A0h] BYREF
  WORD *v289; // [rsp+7D8h] [rbp+6B0h]
  __int64 v290; // [rsp+7E0h] [rbp+6B8h]
  DWORD *v291; // [rsp+7E8h] [rbp+6C0h]
  __int64 v292; // [rsp+7F0h] [rbp+6C8h]
  DWORD *v293; // [rsp+7F8h] [rbp+6D0h]
  __int64 v294; // [rsp+800h] [rbp+6D8h]
  GUID *v295; // [rsp+808h] [rbp+6E0h]
  __int64 v296; // [rsp+810h] [rbp+6E8h]
  EVENT_DATA_DESCRIPTOR v297; // [rsp+818h] [rbp+6F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v298; // [rsp+838h] [rbp+710h] BYREF
  WORD *v299; // [rsp+848h] [rbp+720h]
  __int64 v300; // [rsp+850h] [rbp+728h]
  DWORD *v301; // [rsp+858h] [rbp+730h]
  __int64 v302; // [rsp+860h] [rbp+738h]
  DWORD *v303; // [rsp+868h] [rbp+740h]
  __int64 v304; // [rsp+870h] [rbp+748h]
  GUID *v305; // [rsp+878h] [rbp+750h]
  __int64 v306; // [rsp+880h] [rbp+758h]
  EVENT_DATA_DESCRIPTOR v307; // [rsp+888h] [rbp+760h] BYREF
  int *v308; // [rsp+8A8h] [rbp+780h]
  __int64 v309; // [rsp+8B0h] [rbp+788h]
  EVENT_DATA_DESCRIPTOR v310; // [rsp+8B8h] [rbp+790h] BYREF
  int *v311; // [rsp+8D8h] [rbp+7B0h]
  __int64 v312; // [rsp+8E0h] [rbp+7B8h]
  EVENT_DATA_DESCRIPTOR v313; // [rsp+8E8h] [rbp+7C0h] BYREF
  int *v314; // [rsp+908h] [rbp+7E0h]
  __int64 v315; // [rsp+910h] [rbp+7E8h]
  EVENT_DATA_DESCRIPTOR v316; // [rsp+918h] [rbp+7F0h] BYREF
  int *v317; // [rsp+938h] [rbp+810h]
  __int64 v318; // [rsp+940h] [rbp+818h]
  EVENT_DATA_DESCRIPTOR v319; // [rsp+948h] [rbp+820h] BYREF
  int *v320; // [rsp+968h] [rbp+840h]
  __int64 v321; // [rsp+970h] [rbp+848h]

  v174 = -2LL;
  v167 = a4;
  v124 = a3;
  v115 = a2;
  v4 = 0LL;
  v111 = 0LL;
  SharedModeEnginePeriodicity = (*(unsigned int (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                  g_pEndpointCharacteristicsCache,
                                  a2,
                                  0LL,
                                  &v111);
  if ( SharedModeEnginePeriodicity < eHostProcessConnector
    || (v6 = eLoopbackConnector, !(unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v111)) )
  {
    v6 = eHostProcessConnector;
  }
  v110[0] = v6;
  v7 = GUID_00000000_0000_0000_0000_000000000000;
  v171 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = GUID_00000000_0000_0000_0000_000000000000;
  v172 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = GUID_00000000_0000_0000_0000_000000000000;
  v173 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = GUID_00000000_0000_0000_0000_000000000000;
  v170 = GUID_00000000_0000_0000_0000_000000000000;
  if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
  {
    SharedModeEnginePeriodicity = (unsigned int)DeriveAudioProcessingModeConfiguration(
                                                  0,
                                                  0,
                                                  0,
                                                  v111,
                                                  2u,
                                                  0,
                                                  v6,
                                                  0,
                                                  0,
                                                  &v171,
                                                  &v172,
                                                  &v173,
                                                  &v170);
    v7 = v171;
    v8 = v172;
    v9 = v173;
    v10 = v170;
  }
  v11 = 0LL;
  v117 = 0LL;
  Src = 0LL;
  v118 = 0LL;
  v13 = 0LL;
  v119 = 0LL;
  v14 = 0LL;
  v120 = 0LL;
  if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
  {
    v180 = v7;
    v181 = v8;
    v182 = v9;
    SharedModeEnginePeriodicity = (unsigned int)DeriveDeviceGraphFormatsForStream(
                                                  v111,
                                                  0,
                                                  (struct _GUID *)(unsigned int)v6,
                                                  AUDCLNT_SHAREMODE_SHARED,
                                                  &v182,
                                                  &v181,
                                                  &v180,
                                                  0LL,
                                                  &v117,
                                                  &v118,
                                                  &v119,
                                                  &v120);
    v11 = v117;
    Src = v118;
    v13 = v119;
    v14 = v120;
  }
  v112 = 0LL;
  if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
  {
    if ( v11 )
    {
      if ( v11->wFormatTag == 0xFFFE )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v141, &v153);
        if ( v141 )
        {
          v153 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v24);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v153 + 1) > 4u )
        {
          TlgCreateWsz(&v203, L"WAVEFORMATEXTENSIBLE");
          p_nChannels = &v11->nChannels;
          v205 = 2LL;
          p_nSamplesPerSec = &v11->nSamplesPerSec;
          v207 = v25;
          p_nAvgBytesPerSec = &v11->nAvgBytesPerSec;
          v209 = v25;
          v210 = (char *)&v11[1].nSamplesPerSec + 2;
          v211 = 16LL;
          v131 = *(_DWORD *)&v11[1].nChannels;
          v212 = &v131;
          v213 = v25;
          TlgWrite(v28, &unk_18010FBBF, v26, v27, 8u, &v202);
        }
      }
      else
      {
        v185 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v185.Data1 = v11->wFormatTag;
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v140, &v152);
        if ( v140 )
        {
          v152 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v19);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v152 + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
          v259 = &v11->nChannels;
          v260 = 2LL;
          v261 = &v11->nSamplesPerSec;
          v262 = v20;
          v263 = &v11->nAvgBytesPerSec;
          v264 = v20;
          v265 = &v185;
          v266 = 16LL;
          TlgWrite(v23, &unk_18010FD22, v21, v22, 7u, &v257);
        }
      }
    }
    else
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v17);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v18 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v18 > 4u )
      {
        v139 = 0;
        v308 = &v139;
        v309 = 4LL;
        TlgWrite(v18, &unk_18010FCC4, v15, v16, 3u, &v307);
      }
    }
    if ( Src )
    {
      if ( Src->wFormatTag == 0xFFFE )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v145, &v156);
        if ( v145 )
        {
          v156 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v38);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v156 + 1) > 4u )
        {
          TlgCreateWsz(&v215, L"WAVEFORMATEXTENSIBLE");
          v216 = &Src->nChannels;
          v217 = 2LL;
          v218 = &Src->nSamplesPerSec;
          v219 = v39;
          v220 = &Src->nAvgBytesPerSec;
          v221 = v39;
          v222 = (char *)&Src[1].nSamplesPerSec + 2;
          v223 = 16LL;
          v147 = *(_DWORD *)&Src[1].nChannels;
          v224 = &v147;
          v225 = v39;
          TlgWrite(v42, &unk_18010FB18, v40, v41, 8u, &v214);
        }
      }
      else
      {
        v186 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v186.Data1 = Src->wFormatTag;
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v144, &v155);
        if ( v144 )
        {
          v155 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v33);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v155 + 1) > 4u )
        {
          TlgCreateWsz(&v268, L"WAVEFORMATEX");
          v269 = &Src->nChannels;
          v270 = 2LL;
          v271 = &Src->nSamplesPerSec;
          v272 = v34;
          v273 = &Src->nAvgBytesPerSec;
          v274 = v34;
          v275 = &v186;
          v276 = 16LL;
          TlgWrite(v37, &unk_18010FA7E, v35, v36, 7u, &v267);
        }
      }
    }
    else
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v142, &v154);
      if ( v142 )
      {
        v154 = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v31);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v32 = (const struct _TlgProvider_t *)*((_QWORD *)v154 + 1);
      if ( *(_DWORD *)v32 > 4u )
      {
        v143 = 0;
        v311 = &v143;
        v312 = 4LL;
        TlgWrite(v32, &unk_18010FC63, v29, v30, 3u, &v310);
      }
    }
    if ( v13 )
    {
      if ( v13->wFormatTag == 0xFFFE )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v151, &v159);
        if ( v151 )
        {
          v159 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v52);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v159 + 1) > 4u )
        {
          TlgCreateWsz(&v227, L"WAVEFORMATEXTENSIBLE");
          v228 = &v13->nChannels;
          v229 = 2LL;
          v230 = &v13->nSamplesPerSec;
          v231 = v53;
          v232 = &v13->nAvgBytesPerSec;
          v233 = v53;
          v234 = (char *)&v13[1].nSamplesPerSec + 2;
          v235 = 16LL;
          v125 = *(_DWORD *)&v13[1].nChannels;
          v236 = &v125;
          v237 = v53;
          TlgWrite(v56, &unk_18010F880, v54, v55, 8u, &v226);
        }
      }
      else
      {
        v187 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v187.Data1 = v13->wFormatTag;
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v150, &v158);
        if ( v150 )
        {
          v158 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v47);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v158 + 1) > 4u )
        {
          TlgCreateWsz(&v278, L"WAVEFORMATEX");
          v279 = &v13->nChannels;
          v280 = 2LL;
          v281 = &v13->nSamplesPerSec;
          v282 = v48;
          v283 = &v13->nAvgBytesPerSec;
          v284 = v48;
          v285 = &v187;
          v286 = 16LL;
          TlgWrite(v51, &unk_18010F9E5, v49, v50, 7u, &v277);
        }
      }
    }
    else
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v148, &v157);
      if ( v148 )
      {
        v157 = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v45);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v46 = (const struct _TlgProvider_t *)*((_QWORD *)v157 + 1);
      if ( *(_DWORD *)v46 > 4u )
      {
        v149 = 0;
        v314 = &v149;
        v315 = 4LL;
        TlgWrite(v46, &unk_18010F985, v43, v44, 3u, &v313);
      }
    }
    if ( v14 )
    {
      if ( v14->wFormatTag == 0xFFFE )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v129, &v162);
        if ( v129 )
        {
          v162 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v66);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v162 + 1) > 4u )
        {
          TlgCreateWsz(&v239, L"WAVEFORMATEXTENSIBLE");
          v240 = &v14->nChannels;
          v241 = 2LL;
          v242 = &v14->nSamplesPerSec;
          v243 = v67;
          v244 = &v14->nAvgBytesPerSec;
          v245 = v67;
          v246 = (char *)&v14[1].nSamplesPerSec + 2;
          v247 = 16LL;
          v130 = *(_DWORD *)&v14[1].nChannels;
          v248 = &v130;
          v249 = v67;
          TlgWrite(v70, &unk_18010F7DB, v68, v69, 8u, &v238);
        }
      }
      else
      {
        v188 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v188.Data1 = v14->wFormatTag;
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v128, &v161);
        if ( v128 )
        {
          v161 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v61);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v161 + 1) > 4u )
        {
          TlgCreateWsz(&v288, L"WAVEFORMATEX");
          v289 = &v14->nChannels;
          v290 = 2LL;
          v291 = &v14->nSamplesPerSec;
          v292 = v62;
          v293 = &v14->nAvgBytesPerSec;
          v294 = v62;
          v295 = &v188;
          v296 = 16LL;
          TlgWrite(v65, &unk_18010F743, v63, v64, 7u, &v287);
        }
      }
    }
    else
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v126, &v160);
      if ( v126 )
      {
        v160 = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v59);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v60 = (const struct _TlgProvider_t *)*((_QWORD *)v160 + 1);
      if ( *(_DWORD *)v60 > 4u )
      {
        v127 = 0;
        v320 = &v127;
        v321 = 4LL;
        TlgWrite(v60, &unk_18010F926, v57, v58, 3u, &v319);
      }
    }
    v183 = v7;
    SharedModeEnginePeriodicity = (unsigned int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                                  (__int64)v111,
                                                  v6,
                                                  v14,
                                                  &v183,
                                                  0,
                                                  &v136,
                                                  0LL,
                                                  0LL,
                                                  0LL);
    if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
    {
      v112 = (CAudioSessionManager *)(unsigned int)(int)((double)v136 * 10000000.0 / (double)(int)v14->nSamplesPerSec
                                                       + 0.5);
    }
    else if ( v14 )
    {
      if ( v14->wFormatTag == 0xFFFE )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v134, &v165);
        if ( v134 )
        {
          v165 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v80);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v165 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v165 + 1), 0x200000000000uLL) )
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
          v135 = *(_DWORD *)&v14[1].nChannels;
          v200 = &v135;
          v201 = 4LL;
          TlgWrite(v83, &unk_18010F616, v81, v82, 8u, &v190);
        }
      }
      else
      {
        v189 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v189.Data1 = v14->wFormatTag;
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v133, &v164);
        if ( v133 )
        {
          v164 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v76);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)v164 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v164 + 1), 0x200000000000uLL) )
        {
          TlgCreateWsz(&v298, L"WAVEFORMATEX");
          v299 = &v14->nChannels;
          v300 = 2LL;
          v301 = &v14->nSamplesPerSec;
          v302 = 4LL;
          v303 = &v14->nAvgBytesPerSec;
          v304 = 4LL;
          v305 = &v189;
          v306 = 16LL;
          TlgWrite(v79, &unk_18010F6D0, v77, v78, 7u, &v297);
        }
      }
    }
    else
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v146, &v163);
      if ( v146 )
      {
        v163 = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v71);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v72 = (const struct _TlgProvider_t *)*((_QWORD *)v163 + 1);
      if ( *(_DWORD *)v72 > 2u && TlgKeywordOn(v72, 0x200000000000uLL) )
      {
        v132 = 0;
        v317 = &v132;
        v318 = 4LL;
        TlgWrite(v73, &unk_18010F696, v74, v75, 3u, &v316);
      }
    }
  }
  memset(v184, 0, sizeof(v184));
  v116 = 0LL;
  v84 = 0LL;
  if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
  {
    v175 = v8;
    v176 = v7;
    v85 = v112;
    SharedModeEnginePeriodicity = (unsigned int)InitializeStreamAndModeDescriptors(
                                                  (size_t)v111,
                                                  0,
                                                  131074,
                                                  2u,
                                                  v6,
                                                  &v176,
                                                  (__int128 *)&v175,
                                                  0,
                                                  0LL,
                                                  (__int64)v11,
                                                  0LL,
                                                  (__int64)v112,
                                                  0LL,
                                                  0LL,
                                                  0LL,
                                                  0LL,
                                                  0,
                                                  0LL,
                                                  &v116);
    v184[4] = v85;
    v184[0] = 0x100000002LL;
    *(GUID *)((char *)&v184[1] + 4) = v8;
    LODWORD(v184[1]) = v6;
    v184[5] = v115;
    v4 = v116;
    v84 = 0LL;
    if ( v116 )
    {
      v116[2] = v11->cbSize + 18;
      *((_QWORD *)v4 + 2) = v11;
    }
  }
  v86 = 0LL;
  v121 = 0LL;
  if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
  {
    *(GUID *)v177 = v10;
    SharedModeEnginePeriodicity = (unsigned int)DeriveStreamGroupParametersForStream(
                                                  (__int64)v111,
                                                  v110[0],
                                                  2,
                                                  v184[4],
                                                  cData,
                                                  v177,
                                                  0,
                                                  0,
                                                  Src,
                                                  0,
                                                  (LPVOID **)&v121);
    v86 = v121;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v84, &AudioResourceManager_StreamSettings_Derived);
  v114 = 0LL;
  if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v114);
    SharedModeEnginePeriodicity = (*(unsigned int (__fastcall **)(CDeviceGraphManager *, __int64, _QWORD, unsigned int *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 56LL))(
                                    g_DeviceGraphManager,
                                    v86,
                                    0LL,
                                    v4,
                                    &v114);
    if ( SharedModeEnginePeriodicity >= eHostProcessConnector )
      SharedModeEnginePeriodicity = (*(unsigned int (__fastcall **)(__int64, _QWORD *, LPVOID, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v114 + 256LL))(
                                      v114,
                                      v184,
                                      v124,
                                      v167);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v84, &AudioResourceManager_Stream_Created);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
      SharedModeEnginePeriodicity);
  }
  v123 = 0LL;
  if ( SharedModeEnginePeriodicity < eHostProcessConnector )
    goto LABEL_148;
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v123);
  SharedModeEnginePeriodicity = (*(unsigned int (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                  g_DeviceGraphStore,
                                  v115,
                                  &v123);
  if ( SharedModeEnginePeriodicity < eHostProcessConnector )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v123 + 96LL))(v123, lpCriticalSection);
  v113 = 0LL;
  v87 = v114;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v113);
  SharedModeEnginePeriodicity = (*(unsigned int (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v87
                                                                                                  + 208LL))(
                                  v87,
                                  &v113);
  if ( SharedModeEnginePeriodicity < eHostProcessConnector )
    goto LABEL_145;
  v88 = v113;
  if ( !v113 )
  {
    v122 = 0LL;
    v178 = v8;
    v179 = v7;
    v110[0] = DeriveSaDeviceParametersForStream(
                v111,
                AUDCLNT_SHAREMODE_SHARED,
                v110[0],
                0,
                &v179,
                &v178,
                v14,
                v13,
                *(_QWORD *)(v86 + 24),
                &v122);
    v112 = 0LL;
    if ( v110[0] >= eHostProcessConnector )
    {
      v166 = 0LL;
      v110[0] = GetAudioSessionManagerProvider(&v166);
      v89 = v166;
      if ( v110[0] >= eHostProcessConnector )
        v110[0] = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v166 + 40LL))(
                    v166,
                    v115,
                    &v112);
      if ( v89 )
      {
        v90 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 16LL);
        if ( v90 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v89);
        else
          v90((volatile signed __int32 *)v89);
      }
    }
    DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v111);
    SaDeviceForSharedStream = v110[0];
    if ( v110[0] < eHostProcessConnector )
      goto LABEL_118;
    if ( DoesExclusiveModeOverrideShared )
    {
      v93 = _InterlockedCompareExchange((volatile signed __int32 *)v112 + 63, 0, 0);
      v11 = v117;
      Src = v118;
      v13 = v119;
      v14 = v120;
      v4 = v116;
      v86 = v121;
      if ( v93 )
      {
        SaDeviceForSharedStream = -2005139364;
        v110[0] = -2005139364;
        goto LABEL_118;
      }
      SaDeviceForSharedStream = eHostProcessConnector;
      v110[0] = eHostProcessConnector;
    }
    if ( SaDeviceForSharedStream >= eHostProcessConnector )
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v113);
      v94 = (LPVOID *)v122;
      SaDeviceForSharedStream = (unsigned int)CAudioResourceManager::GetSaDeviceForSharedStream(
                                                v95,
                                                v111,
                                                (unsigned __int16 **)v122,
                                                0x20002u,
                                                AUDCLNT_SHAREMODE_SHARED,
                                                (unsigned __int64)pData,
                                                0,
                                                v109,
                                                0,
                                                v112,
                                                0,
                                                0,
                                                &v113);
      v110[0] = SaDeviceForSharedStream;
      goto LABEL_119;
    }
LABEL_118:
    v94 = (LPVOID *)v122;
LABEL_119:
    v96 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
        SaDeviceForSharedStream);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0((__int64)v96, &AudioResourceManager_SaDevice_Created);
    if ( v110[0] >= eHostProcessConnector )
      v110[0] = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, struct ISaDeviceProxy *, __int64, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                  g_DeviceGraphManager,
                  v114,
                  v113,
                  1LL,
                  v167);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0((__int64)v96, &AudioResourceManager_SaDevice_Connected);
    if ( v112 )
    {
      v97 = *(void (**)(void))(*(_QWORD *)v112 + 16LL);
      if ( (char *)v97 == (char *)CAudioSessionManager::Release )
        CAudioSessionManager::Release(v112);
      else
        v97();
    }
    if ( v94 )
    {
      CoTaskMemFree(v94[3]);
      v94[3] = 0LL;
      CoTaskMemFree(v94[2]);
      v94[2] = 0LL;
      CoTaskMemFree(*v94);
      *v94 = 0LL;
      operator delete(v94, (const struct std::nothrow_t *)0x68);
    }
    SharedModeEnginePeriodicity = v110[0];
    v88 = v113;
  }
  if ( SharedModeEnginePeriodicity >= eHostProcessConnector && v88 )
  {
    *(_QWORD *)v110 = 0LL;
    if ( (*(int (__fastcall **)(struct ISaDeviceProxy *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *))(*(_QWORD *)v88 + 104LL))(
           v88,
           v110) >= 0 )
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v137, &v124);
      v99 = 0LL;
      if ( v137 )
      {
        v124 = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v100);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v101 = (const struct _TlgProvider_t *)*((_QWORD *)v124 + 1);
      if ( *(_DWORD *)v101 > 4u )
      {
        v251 = &GUID_00000000_0000_0000_0000_000000000000;
        v252 = 16LL;
        v253 = *(_QWORD *)v110 + 80LL;
        v254 = 16LL;
        LODWORD(v115) = *((_DWORD *)v111 + 37);
        v255 = &v115;
        v256 = 4LL;
        TlgWrite(v101, &unk_18010F5CF, v99, v98, 5u, &v250);
      }
    }
    v112 = *(CAudioSessionManager **)v110;
    if ( *(_QWORD *)v110 )
    {
      CoTaskMemFree(*(LPVOID *)(*(_QWORD *)v110 + 24LL));
      v102 = v112;
      *((_QWORD *)v112 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v102 + 2));
      v103 = (LPVOID *)v112;
      *((_QWORD *)v112 + 2) = 0LL;
      CoTaskMemFree(*v103);
      v104 = v112;
      *(_QWORD *)v112 = 0LL;
      operator delete(v104, (const struct std::nothrow_t *)0x68);
    }
  }
LABEL_145:
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v113);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( SharedModeEnginePeriodicity < eHostProcessConnector )
LABEL_148:
    AudSrvTraceLoggingErrorHelper(
      "CAudioResourceManager::CreateInternalLoopbackStream",
      2929,
      SharedModeEnginePeriodicity);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids,
      SharedModeEnginePeriodicity);
  }
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v123);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v114);
  if ( v86 )
  {
    operator delete(*(void **)(v86 + 56), (const struct std::nothrow_t *)0x10);
    *(_QWORD *)(v86 + 56) = 0LL;
    CoTaskMemFree(*(LPVOID *)(v86 + 16));
    *(_QWORD *)(v86 + 16) = 0LL;
    CoTaskMemFree(*(LPVOID *)v86);
    *(_QWORD *)v86 = 0LL;
    operator delete((void *)v86, (const struct std::nothrow_t *)0x40);
  }
  CoTaskMemFree(v4);
  CoTaskMemFree(v14);
  CoTaskMemFree(v13);
  CoTaskMemFree(Src);
  CoTaskMemFree(v11);
  if ( v111 )
  {
    v105 = *(void (**)(void))(*(_QWORD *)v111 + 16LL);
    if ( (char *)v105 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v111);
    else
      v105();
  }
  return (unsigned int)SharedModeEnginePeriodicity;
}
