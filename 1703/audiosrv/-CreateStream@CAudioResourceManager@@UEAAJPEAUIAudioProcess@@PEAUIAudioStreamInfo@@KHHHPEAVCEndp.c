/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEA_J@Z @ 0x180003310 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180004BE4 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008C70 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x1800095F0 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180009EB0 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000A960 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     TemplateEventDescriptor @ 0x18000B310 (TemplateEventDescriptor.c)
 *     ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000B4E0 (-LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSect.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018110 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180018120 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800195A0 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x180019DD0 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x180019DE0 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001A338 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18001E3A0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18002BCF0 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x18002C2A0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     wil::ScopeExit__lambda_46818ec810044a4765cde12cca0092dd___ @ 0x18002F0EC (wil--ScopeExit__lambda_46818ec810044a4765cde12cca0092dd___.c)
 *     wil::ScopeExit__lambda_9663f652cb5f57b866414b82c5f5c38a___ @ 0x18002F0F4 (wil--ScopeExit__lambda_9663f652cb5f57b866414b82c5f5c38a___.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800389C4 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18007B774 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18007B910 (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800A0E20 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800A1B70 (-reset@-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AB950 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ABB14 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?IsOutOfProcOffloadUsed@@YA_N_N@Z @ 0x1800ABC80 (-IsOutOfProcOffloadUsed@@YA_N_N@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACD5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        struct CEndpointCharacteristics *a8,
        unsigned int a9,
        enum _AUDCLNT_SHAREMODE a10,
        struct IAudioGraphCallback *a11,
        struct tWAVEFORMATEX *a12,
        __int64 a13,
        __int64 a14,
        const struct _GUID *a15,
        unsigned int a16,
        const unsigned __int16 *a17,
        unsigned int a18,
        int a19,
        const struct SPATIAL_STREAM_PROPERTIES *a20,
        struct IProcessSubmixProxy *a21,
        struct SYSTEM_AUDIO_STREAM *a22)
{
  __int64 *v22; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64 *, unsigned __int16 **); // rax
  int v27; // eax
  int v28; // ebx
  unsigned int v29; // r12d
  void (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // r9
  __int64 v31; // rcx
  int v32; // edi
  int v33; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v35; // ecx
  void *v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // r8
  char v43; // r11
  void **v44; // r14
  void *v45; // rdi
  void *v46; // rcx
  void **v47; // r14
  void *v48; // rdi
  void *v49; // rcx
  void **v50; // r14
  void *v51; // rdi
  void *v52; // rcx
  void **v53; // r14
  void *v54; // rdi
  void *v55; // rcx
  const struct _TlgProvider_t *v56; // rcx
  const GUID *v57; // r8
  const GUID *v58; // r9
  WORD wFormatTag; // ax
  __int64 v60; // r10
  _DWORD *v61; // rdx
  _DWORD *v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // r10
  _DWORD *v65; // rdx
  unsigned __int16 v66; // ax
  LPCGUID v67; // r8
  LPCGUID v68; // r9
  TraceLoggingHProvider v69; // r10
  _DWORD *v70; // rbx
  const struct _TlgProvider_t *v71; // rcx
  const GUID *v72; // r8
  const GUID *v73; // r9
  unsigned __int16 v74; // ax
  LPCGUID v75; // r8
  LPCGUID v76; // r9
  TraceLoggingHProvider v77; // r10
  __int64 v78; // r10
  __int64 v79; // rcx
  struct tWAVEFORMATEX *v80; // rbx
  const struct _TlgProvider_t *v81; // rcx
  const GUID *v82; // r8
  const GUID *v83; // r9
  WORD v84; // ax
  LPCGUID v85; // r8
  LPCGUID v86; // r9
  TraceLoggingHProvider v87; // r10
  __int64 v88; // r10
  __int64 v89; // rcx
  struct tWAVEFORMATEX *v90; // rbx
  const struct _TlgProvider_t *v91; // rcx
  const GUID *v92; // r8
  const GUID *v93; // r9
  WORD v94; // ax
  LPCGUID v95; // r8
  LPCGUID v96; // r9
  TraceLoggingHProvider v97; // r10
  __int64 v98; // r10
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rcx
  __int64 (__fastcall *v102)(CAudioStream *__hidden); // rax
  void **v103; // r14
  void *v104; // rdi
  void *v105; // rcx
  void **v106; // r14
  void *v107; // rdi
  void *v108; // rcx
  bool v109; // di
  unsigned int v110; // r15d
  bool v111; // cl
  unsigned int v112; // r13d
  CAudioStream *v113; // r12
  int v114; // eax
  __int64 (__fastcall *v115)(CAudioStream *__hidden, struct SYSTEM_AUDIO_STREAM *, unsigned int); // rax
  int v116; // eax
  struct IDeviceGraphObjectsStore **v117; // r8
  int (*v118)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  __int64 v120; // rdx
  void (__fastcall *v121)(__int64, LPCRITICAL_SECTION *); // rax
  __int64 v122; // rax
  __int64 (__fastcall *v123)(CAudioStream *__hidden, struct IStreamGroupProxy **); // rax
  int StreamGroup; // eax
  __int64 (__fastcall *v125)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rax
  int ConnectedSaDevice; // eax
  CSaDeviceProxy *v127; // rbx
  bool (__fastcall *v128)(CAudioStream *__hidden); // rax
  bool IsFormatSensitiveClient; // al
  __int64 v130; // rax
  SaDeviceParams *v131; // rdx
  unsigned __int64 v132; // r9
  __int64 v133; // rdx
  const struct tWAVEFORMATEX *v134; // rbx
  const struct tWAVEFORMATEX *v135; // rax
  unsigned int v136; // edx
  int v137; // eax
  unsigned int v138; // edx
  SaDeviceParams *v139; // rcx
  __int64 v140; // rax
  SaDeviceParams *v141; // rdx
  CAudioSessionManagerProvider *v142; // rdi
  __int64 v143; // rax
  struct CAudioSessionManager **v144; // r8
  __int64 (__fastcall *v145)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  __int64 v147; // rdx
  __int64 v148; // rdx
  bool v149; // r14
  __int64 v150; // rcx
  CAudioResourceManager *v151; // rcx
  int SaDeviceForOffloadedStream; // eax
  __int64 v153; // rcx
  __int64 v154; // rdx
  CAudioResourceManager *v155; // rcx
  BOOL v156; // r15d
  bool (__fastcall *v157)(CAudioStream *__hidden); // rax
  bool v158; // al
  bool v159; // r14
  bool (__fastcall *v160)(CAudioStream *__hidden); // rax
  bool IsStrictPeriodicityClient; // al
  CAudioResourceManager *v162; // rcx
  bool v163; // bl
  const unsigned __int16 **v164; // r14
  __int64 (__fastcall *v165)(CSharedStreamGroupProxy *__hidden, struct AuxiliaryInputDescriptor *); // rax
  int AuxiliaryInputDescriptor; // eax
  CBaseStreamGroupProxy *v167; // rbx
  bool (__fastcall *v168)(CBaseStreamGroupProxy *__hidden); // rax
  bool IsPeriodicitySensitive; // al
  CAudioResourceManager *v170; // rcx
  int v171; // eax
  unsigned int v172; // edx
  _BOOL8 v173; // r9
  __int64 (__fastcall *v174)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *, _BOOL8); // rax
  int v175; // eax
  __int64 v176; // rcx
  SaDeviceParams *v177; // rbx
  struct SaDeviceParams **v178; // rdx
  __int64 (__fastcall *v179)(CSaDeviceProxy *__hidden, struct SaDeviceParams **); // rax
  int SaDeviceParams; // eax
  bool v181; // bl
  unsigned int v182; // edx
  SaDeviceParams *v183; // rcx
  __int64 v184; // rbx
  __int64 (__fastcall *v185)(CAudioStream *__hidden); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 v187; // rcx
  void *v188; // rbx
  struct SYSTEM_AUDIO_STREAM *v189; // r14
  CBaseStreamGroupProxy *v190; // rbx
  int v191; // eax
  int v192; // eax
  __int64 v193; // rdx
  unsigned int v194; // eax
  unsigned int v195; // r8d
  int v196; // eax
  int cData; // [rsp+28h] [rbp-100h]
  int cDataa; // [rsp+28h] [rbp-100h]
  int cDatab; // [rsp+28h] [rbp-100h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 cDatac; // [rsp+28h] [rbp-100h]
  unsigned int cDatad; // [rsp+28h] [rbp-100h]
  int cDatae; // [rsp+28h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-F8h]
  bool v205; // [rsp+40h] [rbp-E8h]
  char v206; // [rsp+A8h] [rbp-80h] BYREF
  struct ISaDeviceProxy *v207; // [rsp+B0h] [rbp-78h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v208; // [rsp+B8h] [rbp-70h]
  bool v209; // [rsp+BCh] [rbp-6Ch]
  CBaseStreamGroupProxy *v210; // [rsp+C0h] [rbp-68h] BYREF
  struct CEndpointCharacteristics *v211; // [rsp+C8h] [rbp-60h]
  char v212; // [rsp+D0h] [rbp-58h] BYREF
  char v213; // [rsp+D1h] [rbp-57h]
  struct CAudioSessionManager *v214; // [rsp+D8h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v215; // [rsp+E0h] [rbp-48h] BYREF
  struct SYSTEM_AUDIO_STREAM *v216; // [rsp+E8h] [rbp-40h]
  SaDeviceParams *v217; // [rsp+F0h] [rbp-38h] BYREF
  LPVOID v218; // [rsp+F8h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v219; // [rsp+100h] [rbp-28h] BYREF
  LPVOID v220; // [rsp+108h] [rbp-20h] BYREF
  unsigned __int16 *v221; // [rsp+110h] [rbp-18h] BYREF
  int v222; // [rsp+118h] [rbp-10h] BYREF
  struct IAudioProcess *v223; // [rsp+120h] [rbp-8h]
  __int64 v224; // [rsp+128h] [rbp+0h] BYREF
  __int64 v225; // [rsp+130h] [rbp+8h] BYREF
  CMonitor *v226; // [rsp+138h] [rbp+10h] BYREF
  LPVOID v227; // [rsp+140h] [rbp+18h] BYREF
  LPVOID v228; // [rsp+148h] [rbp+20h] BYREF
  SaDeviceParams *v229; // [rsp+150h] [rbp+28h] BYREF
  int v230; // [rsp+158h] [rbp+30h] BYREF
  WINBOOL fPending; // [rsp+15Ch] [rbp+34h] BYREF
  int v232; // [rsp+160h] [rbp+38h] BYREF
  int v233; // [rsp+164h] [rbp+3Ch] BYREF
  WINBOOL v234; // [rsp+168h] [rbp+40h] BYREF
  int v235; // [rsp+16Ch] [rbp+44h] BYREF
  int v236; // [rsp+170h] [rbp+48h] BYREF
  WINBOOL v237; // [rsp+174h] [rbp+4Ch] BYREF
  int v238; // [rsp+178h] [rbp+50h] BYREF
  WINBOOL v239; // [rsp+17Ch] [rbp+54h] BYREF
  int v240; // [rsp+180h] [rbp+58h] BYREF
  int v241; // [rsp+184h] [rbp+5Ch] BYREF
  int v242; // [rsp+188h] [rbp+60h] BYREF
  int v243; // [rsp+18Ch] [rbp+64h] BYREF
  WINBOOL v244; // [rsp+190h] [rbp+68h] BYREF
  int v245; // [rsp+194h] [rbp+6Ch] BYREF
  unsigned int v246; // [rsp+198h] [rbp+70h]
  unsigned int v247; // [rsp+19Ch] [rbp+74h]
  WINBOOL v248; // [rsp+1A0h] [rbp+78h] BYREF
  unsigned int v249; // [rsp+1A4h] [rbp+7Ch]
  __int64 v250; // [rsp+1A8h] [rbp+80h] BYREF
  LPVOID pv; // [rsp+1B0h] [rbp+88h] BYREF
  void *v252; // [rsp+1B8h] [rbp+90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+1C0h] [rbp+98h] BYREF
  __int64 v254; // [rsp+1C8h] [rbp+A0h] BYREF
  GUID v255; // [rsp+1D8h] [rbp+B0h]
  LPVOID Context; // [rsp+1E8h] [rbp+C0h] BYREF
  LPVOID v257; // [rsp+1F0h] [rbp+C8h] BYREF
  LPVOID v258; // [rsp+1F8h] [rbp+D0h] BYREF
  LPVOID v259; // [rsp+200h] [rbp+D8h] BYREF
  LPVOID v260; // [rsp+208h] [rbp+E0h] BYREF
  LPVOID v261; // [rsp+210h] [rbp+E8h] BYREF
  __int64 v262; // [rsp+218h] [rbp+F0h] BYREF
  struct IAudioGraphCallback *v263; // [rsp+220h] [rbp+F8h]
  struct IMMDevice *v264; // [rsp+228h] [rbp+100h]
  GUID v265; // [rsp+238h] [rbp+110h]
  LPCRITICAL_SECTION v266; // [rsp+248h] [rbp+120h] BYREF
  char v267; // [rsp+250h] [rbp+128h]
  _BYTE *v268; // [rsp+258h] [rbp+130h] BYREF
  __int64 *v269; // [rsp+260h] [rbp+138h]
  char v270; // [rsp+268h] [rbp+140h]
  PROPVARIANT v271; // [rsp+270h] [rbp+148h] BYREF
  __int64 v272; // [rsp+278h] [rbp+150h]
  __int64 v273; // [rsp+280h] [rbp+158h]
  struct IProcessSubmixProxy *v274; // [rsp+288h] [rbp+160h]
  CAudioStream *v275; // [rsp+290h] [rbp+168h]
  _DWORD v276[2]; // [rsp+298h] [rbp+170h] BYREF
  __int64 v277; // [rsp+2A0h] [rbp+178h]
  _DWORD v278[2]; // [rsp+2A8h] [rbp+180h] BYREF
  __int64 v279; // [rsp+2B0h] [rbp+188h]
  _DWORD v280[2]; // [rsp+2B8h] [rbp+190h] BYREF
  __int64 v281; // [rsp+2C0h] [rbp+198h]
  _DWORD v282[2]; // [rsp+2C8h] [rbp+1A0h] BYREF
  __int64 v283; // [rsp+2D0h] [rbp+1A8h]
  _DWORD v284[2]; // [rsp+2D8h] [rbp+1B0h] BYREF
  __int64 v285; // [rsp+2E0h] [rbp+1B8h]
  _DWORD v286[2]; // [rsp+2E8h] [rbp+1C0h] BYREF
  __int64 v287; // [rsp+2F0h] [rbp+1C8h]
  _DWORD v288[2]; // [rsp+2F8h] [rbp+1D0h] BYREF
  __int64 v289; // [rsp+300h] [rbp+1D8h]
  GUID v290; // [rsp+308h] [rbp+1E0h]
  _DWORD v291[2]; // [rsp+318h] [rbp+1F0h] BYREF
  __int64 v292; // [rsp+320h] [rbp+1F8h]
  PROPVARIANT pvar[3]; // [rsp+328h] [rbp+200h] BYREF
  _QWORD v294[2]; // [rsp+340h] [rbp+218h] BYREF
  union _RTL_RUN_ONCE *v295; // [rsp+350h] [rbp+228h] BYREF
  int v296; // [rsp+358h] [rbp+230h]
  GUID v297; // [rsp+368h] [rbp+240h]
  _QWORD v298[2]; // [rsp+378h] [rbp+250h] BYREF
  char v299; // [rsp+388h] [rbp+260h]
  _QWORD v300[2]; // [rsp+390h] [rbp+268h] BYREF
  char v301; // [rsp+3A0h] [rbp+278h]
  unsigned int v302[2]; // [rsp+3A8h] [rbp+280h] BYREF
  __int64 v303; // [rsp+3B0h] [rbp+288h]
  char v304; // [rsp+3B8h] [rbp+290h]
  void **v305; // [rsp+3C0h] [rbp+298h] BYREF
  void *v306; // [rsp+3C8h] [rbp+2A0h]
  char v307; // [rsp+3D0h] [rbp+2A8h]
  void **v308; // [rsp+3D8h] [rbp+2B0h] BYREF
  void *v309; // [rsp+3E0h] [rbp+2B8h]
  char v310; // [rsp+3E8h] [rbp+2C0h]
  void **v311; // [rsp+3F0h] [rbp+2C8h] BYREF
  void *v312; // [rsp+3F8h] [rbp+2D0h]
  char v313; // [rsp+400h] [rbp+2D8h]
  void **v314; // [rsp+408h] [rbp+2E0h] BYREF
  void *v315; // [rsp+410h] [rbp+2E8h]
  char v316; // [rsp+418h] [rbp+2F0h]
  void **v317; // [rsp+420h] [rbp+2F8h] BYREF
  void *v318; // [rsp+428h] [rbp+300h]
  char v319; // [rsp+430h] [rbp+308h]
  void **v320; // [rsp+438h] [rbp+310h] BYREF
  void *v321; // [rsp+440h] [rbp+318h]
  char v322; // [rsp+448h] [rbp+320h]
  _QWORD v323[2]; // [rsp+450h] [rbp+328h] BYREF
  char v324; // [rsp+460h] [rbp+338h]
  _QWORD v325[2]; // [rsp+468h] [rbp+340h] BYREF
  char v326; // [rsp+478h] [rbp+350h]
  struct _GUID v327; // [rsp+488h] [rbp+360h] BYREF
  struct _GUID v328; // [rsp+498h] [rbp+370h] BYREF
  struct _GUID v329; // [rsp+4A8h] [rbp+380h] BYREF
  struct _GUID v330; // [rsp+4B8h] [rbp+390h] BYREF
  struct _GUID v331; // [rsp+4C8h] [rbp+3A0h] BYREF
  GUID v332; // [rsp+4D8h] [rbp+3B0h]
  GUID v333; // [rsp+4E8h] [rbp+3C0h]
  GUID v334; // [rsp+4F8h] [rbp+3D0h]
  GUID v335; // [rsp+508h] [rbp+3E0h]
  struct _GUID v336; // [rsp+518h] [rbp+3F0h] BYREF
  struct _GUID v337; // [rsp+528h] [rbp+400h] BYREF
  struct _GUID v338; // [rsp+538h] [rbp+410h] BYREF
  GUID v339; // [rsp+548h] [rbp+420h] BYREF
  GUID v340; // [rsp+558h] [rbp+430h] BYREF
  GUID v341; // [rsp+568h] [rbp+440h] BYREF
  GUID v342; // [rsp+578h] [rbp+450h] BYREF
  GUID v343; // [rsp+588h] [rbp+460h] BYREF
  _BYTE v344[96]; // [rsp+598h] [rbp+470h] BYREF
  unsigned __int16 *v345; // [rsp+5F8h] [rbp+4D0h]
  int v346; // [rsp+600h] [rbp+4D8h]
  int v347; // [rsp+604h] [rbp+4DCh]
  void *v348; // [rsp+608h] [rbp+4E0h]
  int v349; // [rsp+610h] [rbp+4E8h]
  int v350; // [rsp+614h] [rbp+4ECh]
  int *v351; // [rsp+618h] [rbp+4F0h]
  __int64 v352; // [rsp+620h] [rbp+4F8h]
  unsigned __int16 *v353; // [rsp+638h] [rbp+510h]
  int v354; // [rsp+640h] [rbp+518h]
  int v355; // [rsp+644h] [rbp+51Ch]
  void *v356; // [rsp+648h] [rbp+520h]
  int v357; // [rsp+650h] [rbp+528h]
  int v358; // [rsp+654h] [rbp+52Ch]
  const struct _GUID *v359; // [rsp+658h] [rbp+530h]
  __int64 v360; // [rsp+660h] [rbp+538h]
  char *v361; // [rsp+668h] [rbp+540h]
  __int64 v362; // [rsp+670h] [rbp+548h]
  int *v363; // [rsp+678h] [rbp+550h]
  __int64 v364; // [rsp+680h] [rbp+558h]
  __int64 *v365; // [rsp+688h] [rbp+560h]
  __int64 v366; // [rsp+690h] [rbp+568h]
  unsigned __int16 *v367; // [rsp+6A8h] [rbp+580h]
  int v368; // [rsp+6B0h] [rbp+588h]
  int v369; // [rsp+6B4h] [rbp+58Ch]
  void *v370; // [rsp+6B8h] [rbp+590h]
  int v371; // [rsp+6C0h] [rbp+598h]
  int v372; // [rsp+6C4h] [rbp+59Ch]
  const WCHAR *v373; // [rsp+6C8h] [rbp+5A0h]
  __int64 v374; // [rsp+6D0h] [rbp+5A8h]
  WORD *v375; // [rsp+6D8h] [rbp+5B0h]
  __int64 v376; // [rsp+6E0h] [rbp+5B8h]
  DWORD *v377; // [rsp+6E8h] [rbp+5C0h]
  __int64 v378; // [rsp+6F0h] [rbp+5C8h]
  DWORD *v379; // [rsp+6F8h] [rbp+5D0h]
  __int64 v380; // [rsp+700h] [rbp+5D8h]
  char *v381; // [rsp+708h] [rbp+5E0h]
  __int64 v382; // [rsp+710h] [rbp+5E8h]
  int *v383; // [rsp+718h] [rbp+5F0h]
  __int64 v384; // [rsp+720h] [rbp+5F8h]
  unsigned __int16 *v385; // [rsp+738h] [rbp+610h]
  int v386; // [rsp+740h] [rbp+618h]
  int v387; // [rsp+744h] [rbp+61Ch]
  void *v388; // [rsp+748h] [rbp+620h]
  int v389; // [rsp+750h] [rbp+628h]
  int v390; // [rsp+754h] [rbp+62Ch]
  const WCHAR *v391; // [rsp+758h] [rbp+630h]
  __int64 v392; // [rsp+760h] [rbp+638h]
  WORD *v393; // [rsp+768h] [rbp+640h]
  __int64 v394; // [rsp+770h] [rbp+648h]
  DWORD *v395; // [rsp+778h] [rbp+650h]
  __int64 v396; // [rsp+780h] [rbp+658h]
  DWORD *v397; // [rsp+788h] [rbp+660h]
  __int64 v398; // [rsp+790h] [rbp+668h]
  GUID *v399; // [rsp+798h] [rbp+670h]
  __int64 v400; // [rsp+7A0h] [rbp+678h]
  unsigned __int16 *v401; // [rsp+7B8h] [rbp+690h]
  int v402; // [rsp+7C0h] [rbp+698h]
  int v403; // [rsp+7C4h] [rbp+69Ch]
  void *v404; // [rsp+7C8h] [rbp+6A0h]
  int v405; // [rsp+7D0h] [rbp+6A8h]
  int v406; // [rsp+7D4h] [rbp+6ACh]
  const WCHAR *v407; // [rsp+7D8h] [rbp+6B0h]
  __int64 v408; // [rsp+7E0h] [rbp+6B8h]
  WORD *v409; // [rsp+7E8h] [rbp+6C0h]
  __int64 v410; // [rsp+7F0h] [rbp+6C8h]
  DWORD *v411; // [rsp+7F8h] [rbp+6D0h]
  __int64 v412; // [rsp+800h] [rbp+6D8h]
  DWORD *v413; // [rsp+808h] [rbp+6E0h]
  __int64 v414; // [rsp+810h] [rbp+6E8h]
  char *v415; // [rsp+818h] [rbp+6F0h]
  __int64 v416; // [rsp+820h] [rbp+6F8h]
  int *v417; // [rsp+828h] [rbp+700h]
  __int64 v418; // [rsp+830h] [rbp+708h]
  unsigned __int16 *v419; // [rsp+848h] [rbp+720h]
  int v420; // [rsp+850h] [rbp+728h]
  int v421; // [rsp+854h] [rbp+72Ch]
  void *v422; // [rsp+858h] [rbp+730h]
  int v423; // [rsp+860h] [rbp+738h]
  int v424; // [rsp+864h] [rbp+73Ch]
  const WCHAR *v425; // [rsp+868h] [rbp+740h]
  __int64 v426; // [rsp+870h] [rbp+748h]
  char *v427; // [rsp+878h] [rbp+750h]
  __int64 v428; // [rsp+880h] [rbp+758h]
  char *v429; // [rsp+888h] [rbp+760h]
  __int64 v430; // [rsp+890h] [rbp+768h]
  char *v431; // [rsp+898h] [rbp+770h]
  __int64 v432; // [rsp+8A0h] [rbp+778h]
  char *v433; // [rsp+8A8h] [rbp+780h]
  __int64 v434; // [rsp+8B0h] [rbp+788h]
  int *v435; // [rsp+8B8h] [rbp+790h]
  __int64 v436; // [rsp+8C0h] [rbp+798h]
  unsigned __int16 *v437; // [rsp+8D8h] [rbp+7B0h]
  int v438; // [rsp+8E0h] [rbp+7B8h]
  int v439; // [rsp+8E4h] [rbp+7BCh]
  void *v440; // [rsp+8E8h] [rbp+7C0h]
  int v441; // [rsp+8F0h] [rbp+7C8h]
  int v442; // [rsp+8F4h] [rbp+7CCh]
  const WCHAR *v443; // [rsp+8F8h] [rbp+7D0h]
  __int64 v444; // [rsp+900h] [rbp+7D8h]
  char *v445; // [rsp+908h] [rbp+7E0h]
  __int64 v446; // [rsp+910h] [rbp+7E8h]
  char *v447; // [rsp+918h] [rbp+7F0h]
  __int64 v448; // [rsp+920h] [rbp+7F8h]
  char *v449; // [rsp+928h] [rbp+800h]
  __int64 v450; // [rsp+930h] [rbp+808h]
  char *v451; // [rsp+938h] [rbp+810h]
  __int64 v452; // [rsp+940h] [rbp+818h]
  int *v453; // [rsp+948h] [rbp+820h]
  __int64 v454; // [rsp+950h] [rbp+828h]
  unsigned __int16 *v455; // [rsp+968h] [rbp+840h]
  int v456; // [rsp+970h] [rbp+848h]
  int v457; // [rsp+974h] [rbp+84Ch]
  void *v458; // [rsp+978h] [rbp+850h]
  int v459; // [rsp+980h] [rbp+858h]
  int v460; // [rsp+984h] [rbp+85Ch]
  const WCHAR *v461; // [rsp+988h] [rbp+860h]
  __int64 v462; // [rsp+990h] [rbp+868h]
  WORD *p_nChannels; // [rsp+998h] [rbp+870h]
  __int64 v464; // [rsp+9A0h] [rbp+878h]
  DWORD *p_nSamplesPerSec; // [rsp+9A8h] [rbp+880h]
  __int64 v466; // [rsp+9B0h] [rbp+888h]
  DWORD *p_nAvgBytesPerSec; // [rsp+9B8h] [rbp+890h]
  __int64 v468; // [rsp+9C0h] [rbp+898h]
  char *v469; // [rsp+9C8h] [rbp+8A0h]
  __int64 v470; // [rsp+9D0h] [rbp+8A8h]
  int *v471; // [rsp+9D8h] [rbp+8B0h]
  __int64 v472; // [rsp+9E0h] [rbp+8B8h]
  EVENT_DATA_DESCRIPTOR v473; // [rsp+9F8h] [rbp+8D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v474; // [rsp+A18h] [rbp+8F0h] BYREF
  char *v475; // [rsp+A28h] [rbp+900h]
  __int64 v476; // [rsp+A30h] [rbp+908h]
  char *v477; // [rsp+A38h] [rbp+910h]
  __int64 v478; // [rsp+A40h] [rbp+918h]
  char *v479; // [rsp+A48h] [rbp+920h]
  __int64 v480; // [rsp+A50h] [rbp+928h]
  GUID *v481; // [rsp+A58h] [rbp+930h]
  __int64 v482; // [rsp+A60h] [rbp+938h]
  EVENT_DATA_DESCRIPTOR v483; // [rsp+A78h] [rbp+950h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A98h] [rbp+970h] BYREF
  char *v485; // [rsp+AA8h] [rbp+980h]
  __int64 v486; // [rsp+AB0h] [rbp+988h]
  char *v487; // [rsp+AB8h] [rbp+990h]
  __int64 v488; // [rsp+AC0h] [rbp+998h]
  char *v489; // [rsp+AC8h] [rbp+9A0h]
  __int64 v490; // [rsp+AD0h] [rbp+9A8h]
  GUID *v491; // [rsp+AD8h] [rbp+9B0h]
  __int64 v492; // [rsp+AE0h] [rbp+9B8h]
  EVENT_DATA_DESCRIPTOR v493; // [rsp+AF8h] [rbp+9D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v494; // [rsp+B18h] [rbp+9F0h] BYREF
  WORD *v495; // [rsp+B28h] [rbp+A00h]
  __int64 v496; // [rsp+B30h] [rbp+A08h]
  DWORD *v497; // [rsp+B38h] [rbp+A10h]
  __int64 v498; // [rsp+B40h] [rbp+A18h]
  DWORD *v499; // [rsp+B48h] [rbp+A20h]
  __int64 v500; // [rsp+B50h] [rbp+A28h]
  GUID *v501; // [rsp+B58h] [rbp+A30h]
  __int64 v502; // [rsp+B60h] [rbp+A38h]
  EVENT_DATA_DESCRIPTOR v503; // [rsp+B78h] [rbp+A50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v504; // [rsp+B98h] [rbp+A70h] BYREF
  WORD *v505; // [rsp+BA8h] [rbp+A80h]
  __int64 v506; // [rsp+BB0h] [rbp+A88h]
  DWORD *v507; // [rsp+BB8h] [rbp+A90h]
  __int64 v508; // [rsp+BC0h] [rbp+A98h]
  DWORD *v509; // [rsp+BC8h] [rbp+AA0h]
  __int64 v510; // [rsp+BD0h] [rbp+AA8h]
  GUID *v511; // [rsp+BD8h] [rbp+AB0h]
  __int64 v512; // [rsp+BE0h] [rbp+AB8h]
  EVENT_DATA_DESCRIPTOR v513; // [rsp+BF8h] [rbp+AD0h] BYREF
  int *v514; // [rsp+C18h] [rbp+AF0h]
  __int64 v515; // [rsp+C20h] [rbp+AF8h]
  EVENT_DATA_DESCRIPTOR v516; // [rsp+C30h] [rbp+B08h] BYREF
  int *v517; // [rsp+C50h] [rbp+B28h]
  __int64 v518; // [rsp+C58h] [rbp+B30h]
  EVENT_DATA_DESCRIPTOR v519; // [rsp+C68h] [rbp+B40h] BYREF
  int *v520; // [rsp+C88h] [rbp+B60h]
  __int64 v521; // [rsp+C90h] [rbp+B68h]
  EVENT_DATA_DESCRIPTOR v522; // [rsp+CA0h] [rbp+B78h] BYREF
  int *v523; // [rsp+CC0h] [rbp+B98h]
  __int64 v524; // [rsp+CC8h] [rbp+BA0h]
  wil::details::in1diag3 *retaddr; // [rsp+D20h] [rbp+BF8h]

  v263 = a11;
  v274 = a21;
  v22 = (__int64 *)*((_QWORD *)a8 + 2);
  v216 = a22;
  v221 = 0LL;
  v25 = *v22;
  v223 = a2;
  v26 = *(__int64 (__fastcall **)(__int64 *, unsigned __int16 **))(v25 + 40);
  v246 = a4;
  v275 = a3;
  v211 = a8;
  v27 = v26(v22, &v221);
  v28 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x506,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v27,
      cData);
    goto LABEL_335;
  }
  if ( *((_DWORD *)a8 + 37) )
    v29 = 1;
  else
    v29 = HIWORD(a9) & 2;
  v264 = (struct IMMDevice *)*((_QWORD *)a8 + 2);
  ((void (__fastcall *)(struct IMMDevice *))v264->lpVtbl->AddRef)(v264);
  v30 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a8 + 2);
  v31 = 0LL;
  v222 = 0;
  v250 = 0LL;
  if ( v30 )
  {
    (**v30)(v30, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v250);
    v31 = v250;
    if ( v250 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v250 + 88LL))(v250, &v222);
      v31 = v250;
    }
  }
  v32 = v222;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  memset(pvar, 0, sizeof(pvar));
  v33 = 1;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v211 + 4) + 40LL))(
         *((_QWORD *)v211 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v33 = 0;
  }
  PropVariantClear(pvar);
  v249 = a9 & 0x400000;
  if ( (a9 & 0x400000) != 0 )
  {
    v35 = eKeywordDetectorConnector;
    goto LABEL_26;
  }
  if ( v33 && (a9 & 0x20000) != 0 )
  {
    v35 = eLoopbackConnector;
    goto LABEL_26;
  }
  if ( a10 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v36 = 0LL;
    pv = 0LL;
    if ( v32 )
    {
      if ( a12 )
      {
        v37 = IsFormatSupportedByHwAudioEngine(v264, v34, a12, (struct tWAVEFORMATEX **)&pv);
        v36 = pv;
        if ( !v37 )
        {
          CoTaskMemFree(pv);
          v35 = eOffloadConnector;
          goto LABEL_26;
        }
      }
    }
    CoTaskMemFree(v36);
  }
  v35 = ((unsigned __int8)~(_BYTE)a9 >> 1) & 1;
LABEL_26:
  v208 = v35;
  v255 = GUID_00000000_0000_0000_0000_000000000000;
  v265 = GUID_00000000_0000_0000_0000_000000000000;
  v290 = GUID_00000000_0000_0000_0000_000000000000;
  v297 = GUID_00000000_0000_0000_0000_000000000000;
  v38 = DeriveAudioProcessingModeConfiguration(a4, a5, v211, v29);
  v28 = v38;
  if ( v38 >= 0 )
  {
    v327 = v255;
    v209 = a7 != 0;
    v329 = v290;
    v220 = 0LL;
    v219 = 0LL;
    v218 = 0LL;
    v215 = 0LL;
    v328 = v265;
    wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v317, (__int64)&v215);
    wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v314, (__int64)&v219);
    wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v311, (__int64)&v218);
    v39 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v308, (__int64)&v220);
    v28 = DeriveDeviceGraphFormatsForStream(
            v211,
            v43,
            (struct _GUID *)(unsigned int)v208,
            a10,
            &v329,
            &v328,
            &v327,
            a12,
            (struct tWAVEFORMATEX **)(v39 + 8),
            (struct tWAVEFORMATEX **)(v42 + 8),
            (struct tWAVEFORMATEX **)(v40 + 8),
            (struct tWAVEFORMATEX **)(v41 + 8));
    if ( v310 )
    {
      v44 = v308;
      v45 = v309;
      v46 = *v308;
      if ( v309 != *v308 )
      {
        if ( v46 )
          CoTaskMemFree(v46);
        *v44 = v45;
      }
    }
    if ( v313 )
    {
      v47 = v311;
      v48 = v312;
      v49 = *v311;
      if ( v312 != *v311 )
      {
        if ( v49 )
          CoTaskMemFree(v49);
        *v47 = v48;
      }
    }
    if ( v316 )
    {
      v50 = v314;
      v51 = v315;
      v52 = *v314;
      if ( v315 != *v314 )
      {
        if ( v52 )
          CoTaskMemFree(v52);
        *v50 = v51;
      }
    }
    if ( v319 )
    {
      v53 = v317;
      v54 = v318;
      v55 = *v317;
      if ( v318 != *v317 )
      {
        if ( v55 )
          CoTaskMemFree(v55);
        *v53 = v54;
      }
    }
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x521,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v28,
        cDataa);
LABEL_325:
      if ( v215 )
        CoTaskMemFree(v215);
      if ( v218 )
        CoTaskMemFree(v218);
      if ( v219 )
        CoTaskMemFree(v219);
      if ( v220 )
        CoTaskMemFree(v220);
      goto LABEL_333;
    }
    if ( !a12 )
    {
      v56 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v56 > 4u )
      {
        v232 = 0;
        v523 = &v232;
        v524 = 4LL;
        TlgWrite(v56, &unk_1800FA263, v57, v58, 3u, &v522);
      }
      goto LABEL_61;
    }
    wFormatTag = a12->wFormatTag;
    if ( a12->wFormatTag == 0xFFFE )
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        Context = qword_18012BF30;
        qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
      }
      v60 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v60 <= 4u )
      {
LABEL_61:
        v62 = v220;
        if ( v220 )
        {
          v66 = *(_WORD *)v220;
          if ( *(_WORD *)v220 != 0xFFFE )
          {
            v340 = GUID_00000000_0000_0010_8000_00aa00389b71;
            v340.Data1 = v66;
            if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                 (__int64)v56,
                                 lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 1) > 4u )
            {
              TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
              v486 = 2LL;
              v488 = 4LL;
              v490 = 4LL;
              v492 = 16LL;
              v485 = (char *)v220 + 2;
              v487 = (char *)v220 + 4;
              v489 = (char *)v220 + 8;
              v491 = &v340;
              TlgWrite(v69, &unk_1800FA068, v67, v68, 7u, &v483);
            }
            goto LABEL_72;
          }
          v64 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)v56,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                + 1);
          if ( *(_DWORD *)v64 <= 4u )
          {
LABEL_72:
            v70 = v218;
            if ( v218 )
            {
              v74 = *(_WORD *)v218;
              if ( *(_WORD *)v218 == 0xFFFE )
              {
                InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v239, &v258);
                if ( v239 )
                {
                  v258 = qword_18012BF30;
                  qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
                  qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                  atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                  wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
                  InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
                }
                v78 = *((_QWORD *)v258 + 1);
                if ( *(_DWORD *)v78 > 4u )
                {
                  v444 = 42LL;
                  v443 = L"WAVEFORMATEXTENSIBLE";
                  v446 = 2LL;
                  v448 = 4LL;
                  v450 = 4LL;
                  v452 = 16LL;
                  v445 = (char *)v218 + 2;
                  v447 = (char *)v218 + 4;
                  v449 = (char *)v218 + 8;
                  v451 = (char *)(v70 + 6);
                  v240 = v70[5];
                  v453 = &v240;
                  v454 = 4LL;
                  v284[1] = 4;
                  v437 = *(unsigned __int16 **)(v78 + 8);
                  v284[0] = ((unsigned int)&unk_1800F9EA6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                  v79 = *(_QWORD *)(v78 + 32);
                  v285 = 0LL;
                  v438 = *v437;
                  v440 = &unk_1800F9EB1;
                  v439 = 2;
                  v441 = 139;
                  v442 = 1;
                  EtwEventWriteTransfer(v79, v284, 0LL, 0LL);
                }
              }
              else
              {
                v341 = GUID_00000000_0000_0010_8000_00aa00389b71;
                v341.Data1 = v74;
                if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                     v63,
                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1) > 4u )
                {
                  TlgCreateWsz(&v474, L"WAVEFORMATEX");
                  v476 = 2LL;
                  v478 = 4LL;
                  v480 = 4LL;
                  v482 = 16LL;
                  v475 = (char *)v218 + 2;
                  v477 = (char *)v218 + 4;
                  v479 = (char *)v218 + 8;
                  v481 = &v341;
                  TlgWrite(v77, &unk_1800F9FDE, v75, v76, 7u, &v473);
                }
              }
            }
            else
            {
              v71 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                                 v63,
                                                                 lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                                   + 1);
              if ( *(_DWORD *)v71 > 4u )
              {
                v238 = 0;
                v520 = &v238;
                v521 = 4LL;
                TlgWrite(v71, &unk_1800F9F8D, v72, v73, 3u, &v519);
              }
            }
            v80 = v219;
            if ( v219 )
            {
              v84 = v219->wFormatTag;
              if ( v219->wFormatTag == 0xFFFE )
              {
                InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v237, &v259);
                if ( v237 )
                {
                  v259 = qword_18012BF30;
                  qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
                  qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                  atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                  wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
                  InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
                }
                v88 = *((_QWORD *)v259 + 1);
                if ( *(_DWORD *)v88 > 4u )
                {
                  v462 = 42LL;
                  v461 = L"WAVEFORMATEXTENSIBLE";
                  v464 = 2LL;
                  v466 = 4LL;
                  v468 = 4LL;
                  v470 = 16LL;
                  p_nChannels = &v219->nChannels;
                  p_nSamplesPerSec = &v219->nSamplesPerSec;
                  p_nAvgBytesPerSec = &v219->nAvgBytesPerSec;
                  v469 = (char *)&v80[1].nSamplesPerSec + 2;
                  v242 = *(_DWORD *)&v80[1].nChannels;
                  v471 = &v242;
                  v472 = 4LL;
                  v286[1] = 4;
                  v455 = *(unsigned __int16 **)(v88 + 8);
                  v286[0] = ((unsigned int)&unk_1800F9E10 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                  v89 = *(_QWORD *)(v88 + 32);
                  v287 = 0LL;
                  v456 = *v455;
                  v458 = &unk_1800F9E1B;
                  v457 = 2;
                  v459 = 138;
                  v460 = 1;
                  EtwEventWriteTransfer(v89, v286, 0LL, 0LL);
                }
              }
              else
              {
                v342 = GUID_00000000_0000_0010_8000_00aa00389b71;
                v342.Data1 = v84;
                if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                     (__int64)v71,
                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1) > 4u )
                {
                  TlgCreateWsz(&v494, L"WAVEFORMATEX");
                  v496 = 2LL;
                  v498 = 4LL;
                  v500 = 4LL;
                  v502 = 16LL;
                  v495 = &v219->nChannels;
                  v497 = &v219->nSamplesPerSec;
                  v499 = &v219->nAvgBytesPerSec;
                  v501 = &v342;
                  TlgWrite(v87, &unk_1800F9D87, v85, v86, 7u, &v493);
                }
              }
            }
            else
            {
              v81 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                                 (__int64)v71,
                                                                 lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                                   + 1);
              if ( *(_DWORD *)v81 > 4u )
              {
                v241 = 0;
                v514 = &v241;
                v515 = 4LL;
                TlgWrite(v81, &unk_1800F9F3D, v82, v83, 3u, &v513);
              }
            }
            v90 = v215;
            if ( v215 )
            {
              v94 = v215->wFormatTag;
              if ( v215->wFormatTag == 0xFFFE )
              {
                InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v244, &v260);
                if ( v244 )
                {
                  v260 = qword_18012BF30;
                  qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
                  qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                  atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                  wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
                  InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
                }
                v98 = *((_QWORD *)v260 + 1);
                if ( *(_DWORD *)v98 > 4u )
                {
                  v374 = 42LL;
                  v373 = L"WAVEFORMATEXTENSIBLE";
                  v376 = 2LL;
                  v378 = 4LL;
                  v380 = 4LL;
                  v382 = 16LL;
                  v375 = &v215->nChannels;
                  v377 = &v215->nSamplesPerSec;
                  v379 = &v215->nAvgBytesPerSec;
                  v381 = (char *)&v90[1].nSamplesPerSec + 2;
                  v245 = *(_DWORD *)&v90[1].nChannels;
                  v383 = &v245;
                  v384 = 4LL;
                  v288[1] = 4;
                  v367 = *(unsigned __int16 **)(v98 + 8);
                  v288[0] = ((unsigned int)&unk_1800F9C1B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                  v99 = *(_QWORD *)(v98 + 32);
                  v289 = 0LL;
                  v368 = *v367;
                  v370 = &unk_1800F9C26;
                  v369 = 2;
                  v371 = 137;
                  v372 = 1;
                  EtwEventWriteTransfer(v99, v288, 0LL, 0LL);
                }
              }
              else
              {
                v343 = GUID_00000000_0000_0010_8000_00aa00389b71;
                v343.Data1 = v94;
                if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                     (__int64)v81,
                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1) > 4u )
                {
                  TlgCreateWsz(&v504, L"WAVEFORMATEX");
                  v506 = 2LL;
                  v508 = 4LL;
                  v510 = 4LL;
                  v512 = 16LL;
                  v505 = &v215->nChannels;
                  v507 = &v215->nSamplesPerSec;
                  v509 = &v215->nAvgBytesPerSec;
                  v511 = &v343;
                  TlgWrite(v97, &unk_1800F9CFF, v95, v96, 7u, &v503);
                }
              }
            }
            else
            {
              v91 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                                 (__int64)v81,
                                                                 lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                                   + 1);
              if ( *(_DWORD *)v91 > 4u )
              {
                v243 = 0;
                v517 = &v243;
                v518 = 4LL;
                TlgWrite(v91, &unk_1800F9CB0, v92, v93, 3u, &v516);
              }
            }
            v330 = v265;
            v331 = v290;
            v338 = v255;
            v100 = DerivePeriodicityForStream(
                     v211,
                     a12,
                     a3,
                     a9,
                     a10,
                     v208,
                     v215,
                     &v338,
                     &v331,
                     &v330,
                     a6 != 0,
                     v209,
                     a13,
                     a14,
                     &a14);
            v28 = v100;
            if ( v100 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x52C,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v100,
                cDatab);
              goto LABEL_325;
            }
            (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v223 + 360LL))(v223);
            v101 = *(_QWORD *)a3;
            v227 = 0LL;
            v102 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(v101 + 72);
            v228 = 0LL;
            v332 = v265;
            v333 = v255;
            if ( v102 == CAudioStream::GetUniqueStreamIdentifier )
              CAudioStream::GetUniqueStreamIdentifier(a3);
            else
              v102(a3);
            wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v320, (__int64)&v228);
            wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v305, (__int64)&v227);
            cDatac = v208;
            v28 = InitializeStreamAndModeDescriptors(v211, (unsigned int)a10, a9, v29);
            if ( v307 )
            {
              v103 = v305;
              v104 = v306;
              v105 = *v305;
              if ( v306 != *v305 )
              {
                if ( v105 )
                  CoTaskMemFree(v105);
                *v103 = v104;
              }
            }
            if ( v322 )
            {
              v106 = v320;
              v107 = v321;
              v108 = *v320;
              if ( v321 != *v320 )
              {
                if ( v108 )
                  CoTaskMemFree(v108);
                *v106 = v107;
              }
            }
            if ( v28 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x536,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v28,
                cDatac);
LABEL_321:
              if ( v228 )
                CoTaskMemFree(v228);
              if ( v227 )
                CoTaskMemFree(v227);
              goto LABEL_325;
            }
            v109 = 0;
            v110 = a9 & 1;
            v247 = v110;
            if ( (a9 & 1) != 0 )
            {
              v111 = *((_DWORD *)v227 + 33) || v228 && *((_DWORD *)v228 + 14);
              v109 = IsOutOfProcOffloadUsed(v111);
            }
            v112 = a18;
            v113 = v275;
            cDatad = a9;
            v334 = v297;
            v335 = v255;
            v114 = BuildDeviceGraphForStream(v211, v275, v223, v246);
            v28 = v114;
            if ( v114 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x547,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v114,
                a9);
              goto LABEL_321;
            }
            v115 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct SYSTEM_AUDIO_STREAM *, unsigned int))(*(_QWORD *)v113 + 104LL);
            if ( v115 == CAudioStream::SetAudioHandle )
              v116 = CAudioStream::SetAudioHandle(v113, v216, v112);
            else
              v116 = v115(v113, v216, v112);
            v28 = v116;
            if ( v116 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x54B,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v116,
                a9);
              goto LABEL_321;
            }
            v254 = 0LL;
            v117 = (struct IDeviceGraphObjectsStore **)(wil::out_param<std::unique_ptr<SaDeviceParams>>(
                                                          (__int64)v323,
                                                          (__int64)&v254)
                                                      + 8);
            v118 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
            if ( v118 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
              DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
                                              g_DeviceGraphStore,
                                              v221,
                                              v117);
            else
              DeviceGraphStoreForEndpoint = ((__int64 (__fastcall *)(CDeviceGraphStore *, unsigned __int16 *, struct IDeviceGraphObjectsStore **))v118)(
                                              g_DeviceGraphStore,
                                              v221,
                                              v117);
            v28 = DeviceGraphStoreForEndpoint;
            if ( v324 )
            {
              v120 = *(_QWORD *)v323[0];
              *(_QWORD *)v323[0] = v323[1];
              if ( v120 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v120 + 16LL))(v120);
            }
            if ( v28 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x54F,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v28,
                a9);
LABEL_319:
              if ( v254 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v254 + 16LL))(v254);
              goto LABEL_321;
            }
            v121 = *(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v254 + 88LL);
            if ( (char *)v121 == (char *)CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection )
              CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(v254, &lpCriticalSection);
            else
              v121(v254, &lpCriticalSection);
            v122 = *(_QWORD *)v113;
            v210 = 0LL;
            v123 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IStreamGroupProxy **))(v122 + 112);
            if ( v123 == CAudioStream::GetStreamGroup )
              StreamGroup = CAudioStream::GetStreamGroup(v113, &v210);
            else
              StreamGroup = v123(v113, &v210);
            v28 = StreamGroup;
            if ( StreamGroup < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x557,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)StreamGroup,
                a9);
              goto LABEL_317;
            }
            v207 = 0LL;
            v125 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)v210 + 208LL);
            if ( v125 == CBaseStreamGroupProxy::GetConnectedSaDevice )
              ConnectedSaDevice = CBaseStreamGroupProxy::GetConnectedSaDevice(v210, &v207);
            else
              ConnectedSaDevice = v125(v210, &v207);
            v28 = ConnectedSaDevice;
            if ( ConnectedSaDevice < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x55B,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)ConnectedSaDevice,
                a9);
LABEL_316:
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v207);
LABEL_317:
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v210);
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
              goto LABEL_319;
            }
            v127 = v207;
            if ( v207 )
            {
              v128 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v113 + 136LL);
              if ( v128 == CAudioStream::IsFormatSensitiveClient )
              {
                IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(v113);
              }
              else
              {
                IsFormatSensitiveClient = v128(v113);
                v127 = v207;
              }
              if ( IsFormatSensitiveClient )
              {
                v229 = 0LL;
                v130 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v325, (__int64)&v229);
                v28 = (*(__int64 (__fastcall **)(CSaDeviceProxy *, __int64))(*(_QWORD *)v127 + 104LL))(v127, v130 + 8);
                if ( v326 )
                {
                  v131 = *(SaDeviceParams **)v325[0];
                  *(_QWORD *)v325[0] = v325[1];
                  if ( v131 )
                    SaDeviceParams::`scalar deleting destructor'(v131, (unsigned int)v131);
                }
                if ( v28 < 0 )
                {
                  v132 = (unsigned int)v28;
                  v133 = 1385LL;
LABEL_167:
                  wil::details::in1diag3::Return_Hr_NoOriginate(
                    retaddr,
                    (void *)v133,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)v132,
                    a9);
                  v139 = v229;
                  goto LABEL_314;
                }
                v134 = (const struct tWAVEFORMATEX *)*((_QWORD *)v229 + 3);
                v135 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v210 + 112LL))(v210);
                if ( !(unsigned int)CompareWaveFormat(v134, v135) )
                {
                  v137 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                           g_DeviceGraphManager,
                           v210,
                           v207);
                  v28 = v137;
                  if ( v137 < 0 )
                  {
                    v132 = (unsigned int)v137;
                    v133 = 1393LL;
                    goto LABEL_167;
                  }
                  wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v207);
                }
                if ( v229 )
                  SaDeviceParams::`scalar deleting destructor'(v229, v136);
                v127 = v207;
              }
              if ( v127 )
                goto LABEL_254;
            }
            v337 = v265;
            v336 = v255;
            v217 = 0LL;
            v140 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v298, (__int64)&v217);
            v28 = DeriveSaDeviceParametersForStream(
                    v211,
                    a10,
                    v208,
                    v109,
                    &v336,
                    &v337,
                    v215,
                    v219,
                    *((_QWORD *)v227 + 4),
                    (struct SaDeviceParams **)(v140 + 8));
            if ( v299 )
            {
              v141 = *(SaDeviceParams **)v298[0];
              *(_QWORD *)v298[0] = v298[1];
              if ( v141 )
                SaDeviceParams::`scalar deleting destructor'(v141, (unsigned int)v141);
            }
            if ( v28 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x57E,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v28,
                cDatad);
LABEL_313:
              v139 = v217;
LABEL_314:
              if ( v139 )
                SaDeviceParams::`scalar deleting destructor'(v139, v138);
              goto LABEL_316;
            }
            v214 = 0LL;
            v266 = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
            v226 = 0LL;
            v267 = 0;
            ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v266);
            v142 = g_SingletonAudioSessionManagerProvider;
            if ( !g_SingletonAudioSessionManagerProvider )
            {
              if ( v267 )
                LeaveCriticalSection(v266);
              v28 = -2147467259;
              v148 = 1411LL;
              goto LABEL_311;
            }
            v143 = *(_QWORD *)g_SingletonAudioSessionManagerProvider;
            v226 = g_SingletonAudioSessionManagerProvider;
            (*(void (__fastcall **)(CMonitor *))(v143 + 8))(g_SingletonAudioSessionManagerProvider);
            ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v266);
            v144 = (struct CAudioSessionManager **)(wil::out_param<std::unique_ptr<SaDeviceParams>>(
                                                      (__int64)v300,
                                                      (__int64)&v214)
                                                  + 8);
            v145 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v142 + 40LL);
            if ( v145 == CAudioSessionManagerProvider::GetAudioSessionManager )
              AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v142, v221, v144);
            else
              AudioSessionManager = v145(v142, v221, v144);
            v28 = AudioSessionManager;
            if ( v301 )
            {
              v147 = *(_QWORD *)v300[0];
              *(_QWORD *)v300[0] = v300[1];
              if ( v147 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v147 + 16LL))(v147);
            }
            if ( v28 < 0 )
            {
              v148 = 1412LL;
LABEL_311:
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)v148,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v28,
                cDatad);
              goto LABEL_312;
            }
            v149 = 1;
            v150 = *((_QWORD *)v211 + 4);
            if ( v150 )
            {
              v271 = 0LL;
              v272 = 0LL;
              v273 = 0LL;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v150 + 40LL))(
                     v150,
                     &PKEY_Endpoint_AllowPreemption,
                     &v271) >= 0
                && (((_WORD)v271 - 11) & 0xFFF7) == 0 )
              {
                v149 = (_WORD)v272 != 0;
              }
              PropVariantClear(&v271);
            }
            v206 = 0;
            v294[0] = &v206;
            v294[1] = &v214;
            wil::ScopeExit__lambda_9663f652cb5f57b866414b82c5f5c38a___(&v268, v294);
            if ( v149 )
            {
              if ( a10 == AUDCLNT_SHAREMODE_EXCLUSIVE )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)v214 + 63, GetCurrentThreadId(), 0) )
                {
                  v28 = -2005139364;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x596,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)0x887C005CLL,
                    cDatad);
LABEL_217:
                  if ( v270 && *v268 )
                    _InterlockedExchange((volatile __int32 *)(*v269 + 252), 0);
                  goto LABEL_312;
                }
                v142 = v226;
                v206 = 1;
                goto LABEL_201;
              }
              if ( _InterlockedCompareExchange((volatile signed __int32 *)v214 + 63, 0, 0) )
              {
                v28 = -2005139364;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x59C,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)0x887C005CLL,
                  cDatad);
                goto LABEL_217;
              }
              v142 = v226;
            }
            if ( a10 != AUDCLNT_SHAREMODE_EXCLUSIVE )
            {
              if ( (a9 & 1) != 0 )
              {
                wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v207);
                SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                               v155,
                                               v211,
                                               v217,
                                               a9,
                                               a10,
                                               (unsigned __int64)pData,
                                               v112,
                                               v205,
                                               v223,
                                               v214,
                                               &v207);
                v28 = SaDeviceForOffloadedStream;
                if ( SaDeviceForOffloadedStream < 0 )
                {
                  v154 = 1453LL;
                  goto LABEL_216;
                }
              }
              else
              {
                v156 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v223 + 96LL))(v223) != 0;
                v157 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v113 + 136LL);
                if ( v157 == CAudioStream::IsFormatSensitiveClient )
                  v158 = CAudioStream::IsFormatSensitiveClient(v113);
                else
                  v158 = v157(v113);
                v159 = v158;
                v160 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v113 + 128LL);
                if ( v160 == CAudioStream::IsStrictPeriodicityClient )
                  IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(v113);
                else
                  IsStrictPeriodicityClient = v160(v113);
                v162 = v207;
                v163 = IsStrictPeriodicityClient;
                v207 = 0LL;
                if ( v162 )
                  (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v162 + 16LL))(v162);
                SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                               v162,
                                               v211,
                                               (unsigned __int16 **)v217,
                                               a9,
                                               a10,
                                               (unsigned __int64)pData,
                                               v112,
                                               v205,
                                               v156,
                                               v214,
                                               v163,
                                               v159,
                                               &v207);
                v28 = SaDeviceForOffloadedStream;
                if ( SaDeviceForOffloadedStream < 0 )
                {
                  v154 = 1460LL;
                  goto LABEL_216;
                }
                v110 = v247;
              }
LABEL_221:
              if ( v270 && *v268 )
              {
                v153 = *v269;
                _InterlockedExchange((volatile __int32 *)(*v269 + 252), 0);
                v142 = v226;
              }
              if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
                TemplateEventDescriptor(v153, &AudioResourceManager_SaDevice_Created);
              v164 = (const unsigned __int16 **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
              if ( v164 )
              {
                *v164 = 0LL;
                *(_DWORD *)v164 = 0;
                v164[1] = 0LL;
              }
              else
              {
                v164 = 0LL;
              }
              v165 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct AuxiliaryInputDescriptor *))(*(_QWORD *)v210 + 288LL);
              if ( v165 == CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor )
                AuxiliaryInputDescriptor = CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
                                             v210,
                                             (struct AuxiliaryInputDescriptor *)v164);
              else
                AuxiliaryInputDescriptor = v165(v210, (struct AuxiliaryInputDescriptor *)v164);
              if ( AuxiliaryInputDescriptor >= 0 )
              {
                if ( *(_DWORD *)v164 == 1 )
                {
                  memset(v344, 0, sizeof(v344));
                  CAudioResourceManager::CreateInternalLoopbackStream(
                    v170,
                    v164[1],
                    v210,
                    (struct SYSTEM_AUDIO_STREAM *)v344);
                  v171 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *, _BYTE *, const unsigned __int16 *))(*(_QWORD *)v210 + 296LL))(
                           v210,
                           v344,
                           v164[1]);
                  v28 = v171;
                  if ( v171 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0x5C3,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                      (const char *)(unsigned int)v171,
                      cDatae);
                    AuxiliaryInputDescriptor::`scalar deleting destructor'((AuxiliaryInputDescriptor *)v164, v172);
LABEL_312:
                    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v226);
                    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v214);
                    goto LABEL_313;
                  }
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x5BD,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)AuxiliaryInputDescriptor,
                  cDatae);
              }
              if ( v164 )
              {
                CoTaskMemFree((LPVOID)v164[1]);
                v164[1] = 0LL;
                operator delete(v164, (const struct std::nothrow_t *)0x10);
              }
              v167 = v210;
              v168 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v210 + 232LL);
              if ( v168 == CBaseStreamGroupProxy::IsPeriodicitySensitive )
              {
                IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(v210);
              }
              else
              {
                IsPeriodicitySensitive = v168(v210);
                v167 = v210;
              }
              v173 = !IsPeriodicitySensitive;
              v174 = *(__int64 (__fastcall **)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *, _BOOL8))(*(_QWORD *)g_DeviceGraphManager + 40LL);
              cDatad = (unsigned int)v216;
              if ( (char *)v174 == (char *)CDeviceGraphManager::ConnectStreamGroupToSaDevice )
                v175 = CDeviceGraphManager::ConnectStreamGroupToSaDevice(g_DeviceGraphManager, v167, v207, v173);
              else
                v175 = v174(g_DeviceGraphManager, v167, v207, v173);
              v28 = v175;
              if ( v175 < 0 )
              {
                v148 = 1487LL;
                goto LABEL_311;
              }
              if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
                TemplateEventDescriptor(v176, &AudioResourceManager_SaDevice_Connected);
              (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v142 + 16LL))(v142);
              if ( v214 )
                (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v214 + 16LL))(v214);
              v177 = v217;
              if ( v217 )
              {
                CoTaskMemFree(*((LPVOID *)v217 + 3));
                *((_QWORD *)v177 + 3) = 0LL;
                CoTaskMemFree(*((LPVOID *)v177 + 2));
                *((_QWORD *)v177 + 2) = 0LL;
                CoTaskMemFree(*(LPVOID *)v177);
                *(_QWORD *)v177 = 0LL;
                operator delete(v177, (const struct std::nothrow_t *)0x68);
              }
              v127 = v207;
              if ( !v207 )
              {
LABEL_273:
                v189 = v216;
                if ( v249 || v216 && !*((_DWORD *)v216 + 22) && v110 )
                {
                  v190 = v210;
                  v225 = 0LL;
                  wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v225);
                  v191 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *, __int64 *))(*(_QWORD *)v190 + 208LL))(
                           v190,
                           &v225);
                  v28 = v191;
                  if ( v191 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0x5EE,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                      (const char *)(unsigned int)v191,
                      cDatad);
                    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v225);
                    goto LABEL_316;
                  }
                  if ( v225 )
                  {
                    v224 = 0LL;
                    v192 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v225 + 56LL))(v225, &v224);
                    v28 = v192;
                    if ( v192 < 0 )
                    {
                      v193 = 1522LL;
LABEL_293:
                      wil::details::in1diag3::Return_Hr_NoOriginate(
                        retaddr,
                        (void *)v193,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)(unsigned int)v192,
                        cDatad);
                      goto LABEL_294;
                    }
                    v194 = RpcImpersonateClient(0LL);
                    if ( v194 )
                    {
                      v28 = wil::details::in1diag3::Return_Win32(
                              retaddr,
                              (void *)0x5F7,
                              v195,
                              (const char *)v194,
                              cDatad);
LABEL_294:
                      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v224);
                      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v225);
                      goto LABEL_316;
                    }
                    wil::ScopeExit__lambda_46818ec810044a4765cde12cca0092dd___(&v212);
                    v196 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v224 + 32LL))(
                             v224,
                             a16,
                             (__int64)v189 + 72,
                             (__int64)v189 + 80);
                    v28 = v196;
                    if ( v196 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr_NoOriginate(
                        retaddr,
                        (void *)0x5FA,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)(unsigned int)v196,
                        cDatad);
                      if ( v213 )
                        RpcRevertToSelf();
                      goto LABEL_294;
                    }
                    if ( v213 )
                      RpcRevertToSelf();
                    if ( *((_QWORD *)v189 + 9) )
                    {
                      if ( v208 == eOffloadConnector )
                      {
                        v192 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)v263 + 32LL))(
                                 v263,
                                 v224);
                        v28 = v192;
                        if ( v192 < 0 )
                        {
                          v193 = 1540LL;
                          goto LABEL_293;
                        }
                      }
                    }
                    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v224);
                  }
                  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v225);
                  v127 = v207;
                }
                if ( v127 )
                  (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v127 + 16LL))(v127);
                if ( v210 )
                  (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v210 + 16LL))(v210);
                if ( lpCriticalSection )
                  LeaveCriticalSection(lpCriticalSection);
                if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_2c4c01588c603834331eaea4b7884cf8_Traceguids);
                }
                v28 = 0;
                goto LABEL_319;
              }
LABEL_254:
              v252 = 0LL;
              v178 = (struct SaDeviceParams **)(wil::out_param<std::unique_ptr<SaDeviceParams>>(
                                                  (__int64)v302,
                                                  (__int64)&v252)
                                              + 8);
              v179 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct SaDeviceParams **))(*(_QWORD *)v127
                                                                                                  + 104LL);
              if ( v179 == CSaDeviceProxy::GetSaDeviceParams )
                SaDeviceParams = CSaDeviceProxy::GetSaDeviceParams(v127, v178);
              else
                SaDeviceParams = v179(v127, v178);
              v181 = SaDeviceParams >= 0;
              if ( v304 )
              {
                v182 = v302[0];
                v183 = **(SaDeviceParams ***)v302;
                **(_QWORD **)v302 = v303;
                if ( v183 )
                  SaDeviceParams::`scalar deleting destructor'(v183, v182);
              }
              if ( v181 )
              {
                InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v248, &v261);
                if ( v248 )
                {
                  v295 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
                  v261 = qword_18012BF30;
                  qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
                  qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                  atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                  v296 = 0;
                  wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v295);
                }
                v184 = *((_QWORD *)v261 + 1);
                if ( *(_DWORD *)v184 > 4u
                  && (*(_QWORD *)(v184 + 16) & 0x400000000000LL) != 0
                  && (*(_QWORD *)(v184 + 24) & 0x400000000000LL) == *(_QWORD *)(v184 + 24) )
                {
                  v359 = a15;
                  v360 = 16LL;
                  v361 = (char *)v252 + 80;
                  v362 = 16LL;
                  v364 = 4LL;
                  v230 = *((_DWORD *)v211 + 37);
                  v363 = &v230;
                  v185 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v113 + 72LL);
                  if ( v185 == CAudioStream::GetUniqueStreamIdentifier )
                    UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v113);
                  else
                    UniqueStreamIdentifier = v185(v113);
                  v262 = UniqueStreamIdentifier;
                  v365 = &v262;
                  v366 = 8LL;
                  v291[1] = 4;
                  v353 = *(unsigned __int16 **)(v184 + 8);
                  v291[0] = ((unsigned int)&unk_1800F9BD2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                  v187 = *(_QWORD *)(v184 + 32);
                  v292 = 0x400000000000LL;
                  v354 = *v353;
                  v356 = &unk_1800F9BDD;
                  cDatad = 6;
                  v355 = 2;
                  v357 = 61;
                  v358 = 1;
                  EtwEventWriteTransfer(v187, v291, 0LL, 0LL);
                }
              }
              v188 = v252;
              if ( v252 )
              {
                CoTaskMemFree(*((LPVOID *)v252 + 3));
                *((_QWORD *)v188 + 3) = 0LL;
                CoTaskMemFree(*((LPVOID *)v188 + 2));
                *((_QWORD *)v188 + 2) = 0LL;
                CoTaskMemFree(*(LPVOID *)v188);
                *(_QWORD *)v188 = 0LL;
                operator delete(v188, (const struct std::nothrow_t *)0x68);
              }
              v127 = v207;
              goto LABEL_273;
            }
LABEL_201:
            wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v207);
            SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                           v151,
                                           v211,
                                           v217,
                                           a9,
                                           AUDCLNT_SHAREMODE_EXCLUSIVE,
                                           (unsigned __int64)pData,
                                           v112,
                                           v149,
                                           v223,
                                           v214,
                                           &v207);
            v28 = SaDeviceForOffloadedStream;
            if ( SaDeviceForOffloadedStream < 0 )
            {
              v154 = 1447LL;
LABEL_216:
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)v154,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)SaDeviceForOffloadedStream,
                cDatae);
              goto LABEL_217;
            }
            goto LABEL_221;
          }
          v426 = 42LL;
          v425 = L"WAVEFORMATEXTENSIBLE";
          v428 = 2LL;
          v430 = 4LL;
          v432 = 4LL;
          v434 = 16LL;
          v427 = (char *)v220 + 2;
          v429 = (char *)v220 + 4;
          v431 = (char *)v220 + 8;
          v433 = (char *)(v62 + 6);
          v236 = v62[5];
          v435 = &v236;
          v436 = 4LL;
          v65 = v282;
          v282[1] = 4;
          v419 = *(unsigned __int16 **)(v64 + 8);
          v282[0] = ((unsigned int)&unk_1800FA0EF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v283 = 0LL;
          v420 = *v419;
          v422 = &unk_1800FA0FA;
          v421 = 2;
          v423 = 136;
          v424 = 1;
        }
        else
        {
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v234, &v257);
          if ( v234 )
          {
            v257 = qword_18012BF30;
            qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
          }
          v64 = *((_QWORD *)v257 + 1);
          if ( *(_DWORD *)v64 <= 4u )
            goto LABEL_72;
          v235 = 0;
          v351 = &v235;
          v352 = 4LL;
          v65 = v280;
          v280[1] = 4;
          v345 = *(unsigned __int16 **)(v64 + 8);
          v280[0] = ((unsigned int)&unk_1800FA215 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v281 = 0LL;
          v346 = *v345;
          v348 = &unk_1800FA220;
          v347 = 2;
          v349 = 66;
          v350 = 1;
        }
        EtwEventWriteTransfer(*(_QWORD *)(v64 + 32), v65, 0LL, 0LL);
        goto LABEL_72;
      }
      v407 = L"WAVEFORMATEXTENSIBLE";
      v409 = &a12->nChannels;
      v411 = &a12->nSamplesPerSec;
      v413 = &a12->nAvgBytesPerSec;
      v415 = (char *)&a12[1].nSamplesPerSec + 2;
      v233 = *(_DWORD *)&a12[1].nChannels;
      v417 = &v233;
      v408 = 42LL;
      v410 = 2LL;
      v412 = 4LL;
      v414 = 4LL;
      v416 = 16LL;
      v418 = 4LL;
      v61 = v278;
      v278[1] = 4;
      v401 = *(unsigned __int16 **)(v60 + 8);
      v278[0] = ((unsigned int)&unk_1800FA183 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v279 = 0LL;
      v402 = *v401;
      v404 = &unk_1800FA18E;
      v403 = 2;
      v405 = 134;
      v406 = 1;
    }
    else
    {
      v339 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v339.Data1 = wFormatTag;
      v60 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
                          lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
            + 1);
      if ( *(_DWORD *)v60 <= 4u )
        goto LABEL_61;
      v391 = L"WAVEFORMATEX";
      v393 = &a12->nChannels;
      v395 = &a12->nSamplesPerSec;
      v397 = &a12->nAvgBytesPerSec;
      v399 = &v339;
      v392 = 26LL;
      v394 = 2LL;
      v396 = 4LL;
      v398 = 4LL;
      v400 = 16LL;
      v61 = v276;
      v276[1] = 4;
      v385 = *(unsigned __int16 **)(v60 + 8);
      v276[0] = ((unsigned int)&unk_1800FA2AF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v277 = 0LL;
      v386 = *v385;
      v388 = &unk_1800FA2BA;
      v387 = 2;
      v389 = 121;
      v390 = 1;
    }
    EtwEventWriteTransfer(*(_QWORD *)(v60 + 32), v61, 0LL, 0LL);
    goto LABEL_61;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x51C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v38,
    a10);
LABEL_333:
  if ( v264 )
    ((void (__fastcall *)(struct IMMDevice *))v264->lpVtbl->Release)(v264);
LABEL_335:
  if ( v221 )
    CoTaskMemFree(v221);
  return (unsigned int)v28;
}
