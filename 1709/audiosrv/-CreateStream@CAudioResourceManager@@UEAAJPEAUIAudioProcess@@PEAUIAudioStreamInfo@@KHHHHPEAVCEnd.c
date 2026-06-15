/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180007DF4 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B350 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18000D750 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000DFF0 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x18000E1A0 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000E900 (-LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSect.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18000FD7C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180011990 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013A20 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18001B6B0 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB20 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001D350 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001D360 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020DE0 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180020E38 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x180020EB8 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029700 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x180029F00 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180030080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180030A18 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@KW4_AUDCLNT_SHAREMODE@@HHPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x180030D64 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMD.c)
 *     ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800312E0 (-reset@-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18005B338 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18005B43C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005F638 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18007581C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     McTemplateU0 @ 0x1800906F8 (McTemplateU0.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009A82C (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009A9F0 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?IsOutOfProcOffloadUsed@@YA_N_N@Z @ 0x18009AC28 (-IsOutOfProcOffloadUsed@@YA_N_N@Z.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        struct CEndpointCharacteristics *a9,
        unsigned int a10,
        enum _AUDCLNT_SHAREMODE a11,
        struct IAudioGraphCallback *a12,
        struct tWAVEFORMATEX *a13,
        __int64 a14,
        __int64 a15,
        struct _GUID *a16,
        unsigned int a17,
        const unsigned __int16 *a18,
        unsigned int a19,
        int a20,
        const struct SPATIAL_STREAM_PROPERTIES *a21,
        struct IProcessSubmixProxy *a22,
        struct SYSTEM_AUDIO_STREAM *a23)
{
  __int64 *v23; // rcx
  struct IProcessSubmixProxy *v24; // r12
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64 *, unsigned __int16 **); // rax
  int v28; // eax
  int v29; // r14d
  struct IMMDevice *v30; // rbx
  int IsOffloadCapable; // edi
  int v32; // eax
  int v33; // eax
  _QWORD *v34; // rbx
  struct tWAVEFORMATEX *v35; // rdi
  struct tWAVEFORMATEX *v36; // rcx
  _QWORD *v37; // rbx
  struct tWAVEFORMATEX *v38; // rdi
  struct tWAVEFORMATEX *v39; // rcx
  struct tWAVEFORMATEX **v40; // rbx
  struct tWAVEFORMATEX *v41; // rdi
  struct tWAVEFORMATEX *v42; // rcx
  struct tWAVEFORMATEX **v43; // rbx
  struct tWAVEFORMATEX *v44; // rdi
  struct tWAVEFORMATEX *v45; // rcx
  WORD wFormatTag; // ax
  __int64 v47; // r10
  __int64 v48; // rcx
  _DWORD *v49; // rbx
  unsigned __int16 v50; // ax
  __int64 v51; // r10
  __int64 v52; // rcx
  _DWORD *v53; // rbx
  unsigned __int16 v54; // ax
  __int64 v55; // r10
  __int64 v56; // rcx
  struct tWAVEFORMATEX *v57; // rbx
  WORD v58; // ax
  __int64 v59; // r10
  __int64 v60; // rcx
  struct tWAVEFORMATEX *v61; // rbx
  WORD v62; // ax
  __int64 v63; // r10
  __int64 v64; // rcx
  int v65; // eax
  char v66; // al
  __int64 v67; // rcx
  char v68; // di
  __int64 (__fastcall *v69)(CAudioStream *__hidden); // rax
  __int64 UniqueStreamIdentifier; // rax
  LPVOID *v71; // rbx
  void *v72; // rdi
  void *v73; // rcx
  _QWORD *v74; // rbx
  unsigned int *v75; // rdi
  unsigned int *v76; // rcx
  char v77; // di
  char v78; // bl
  unsigned int v79; // r15d
  unsigned int v80; // r12d
  int v81; // eax
  __int64 (__fastcall *v82)(CAudioStream *__hidden, struct SYSTEM_AUDIO_STREAM *, unsigned int); // rax
  int v83; // eax
  int (*v84)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  __int64 v86; // rdx
  _QWORD *(__fastcall *v87)(__int64, LPCRITICAL_SECTION *); // rax
  __int64 v88; // rax
  __int64 (__fastcall *v89)(CAudioStream *__hidden, struct IStreamGroupProxy **); // rax
  int StreamGroup; // eax
  CBaseStreamGroupProxy *v91; // rbx
  __int64 (__fastcall *v92)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **); // rax
  int ConnectedSaDevice; // eax
  SaDeviceParams *v94; // rdx
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v96; // rdi
  __int64 (__fastcall *v97)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  CAudioSessionManager *v99; // rdx
  bool DoesExclusiveModeOverrideShared; // r14
  BOOL v101; // r15d
  bool (__fastcall *v102)(CAudioStream *__hidden); // rax
  bool IsFormatSensitiveClient; // al
  bool v104; // r14
  bool (__fastcall *v105)(CAudioStream *__hidden); // rax
  bool IsStrictPeriodicityClient; // al
  bool v107; // bl
  CEndpointCharacteristics *v108; // r12
  CAudioResourceManager *v109; // rcx
  int SaDeviceForOffloadedStream; // eax
  CAudioSessionManager *v111; // rcx
  const unsigned __int16 **v112; // rbx
  __int64 (__fastcall *v113)(CSharedStreamGroupProxy *__hidden, struct AuxiliaryInputDescriptor *); // rax
  int AuxiliaryInputDescriptor; // eax
  CBaseStreamGroupProxy *v115; // rbx
  bool (__fastcall *v116)(CBaseStreamGroupProxy *); // rax
  bool IsPeriodicitySensitive; // al
  _BOOL8 v118; // r9
  __int64 (__fastcall *v119)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *, _BOOL8); // rax
  int v120; // eax
  __int64 v121; // rcx
  void (__fastcall *v122)(struct CAudioSessionManagerProvider *); // rax
  void (*v123)(void); // rax
  SaDeviceParams *v124; // rbx
  const struct SaDeviceParams **v125; // rcx
  __int64 (__fastcall *v126)(const struct SaDeviceParams **, struct SaDeviceParams **); // rax
  int SaDeviceParams; // eax
  bool v128; // bl
  unsigned int v129; // edx
  SaDeviceParams *v130; // rcx
  __int64 v131; // rbx
  __int64 v132; // rax
  __int64 (__fastcall *v133)(CAudioStream *__hidden); // rax
  __int64 v134; // rax
  __int64 v135; // rcx
  void *v136; // rbx
  struct SYSTEM_AUDIO_STREAM *v137; // rdi
  void (*v138)(void); // rax
  const GUID *v140; // r9
  const GUID *v141; // r8
  const struct _TlgProvider_t *v142; // rcx
  LPCGUID v143; // r8
  LPCGUID v144; // r9
  TraceLoggingHProvider v145; // r10
  const GUID *v146; // r8
  const GUID *v147; // r9
  const struct _TlgProvider_t *v148; // rcx
  LPCGUID v149; // r8
  LPCGUID v150; // r9
  TraceLoggingHProvider v151; // r10
  const GUID *v152; // r8
  const GUID *v153; // r9
  const struct _TlgProvider_t *v154; // rcx
  LPCGUID v155; // r8
  LPCGUID v156; // r9
  TraceLoggingHProvider v157; // r10
  const GUID *v158; // r8
  const GUID *v159; // r9
  const struct _TlgProvider_t *v160; // rcx
  LPCGUID v161; // r8
  LPCGUID v162; // r9
  TraceLoggingHProvider v163; // r10
  const GUID *v164; // r8
  const GUID *v165; // r9
  const struct _TlgProvider_t *v166; // rcx
  LPCGUID v167; // r8
  LPCGUID v168; // r9
  TraceLoggingHProvider v169; // r10
  bool v170; // cl
  SaDeviceParams *v171; // rdx
  unsigned __int64 v172; // r9
  __int64 v173; // rdx
  const struct tWAVEFORMATEX *v174; // rbx
  const struct tWAVEFORMATEX *v175; // rax
  unsigned int v176; // edx
  int v177; // eax
  unsigned int v178; // edx
  SaDeviceParams *v179; // rcx
  unsigned __int64 v180; // r9
  __int64 v181; // rdx
  CAudioResourceManager *v182; // rcx
  __int64 v183; // rdx
  CAudioResourceManager *v184; // rcx
  CAudioResourceManager *v185; // rcx
  int v186; // eax
  unsigned int v187; // edx
  CBaseStreamGroupProxy *v188; // rbx
  int v189; // eax
  int v190; // eax
  __int64 v191; // rdx
  unsigned int v192; // eax
  int v193; // eax
  int cData; // [rsp+28h] [rbp-100h]
  int cDataa; // [rsp+28h] [rbp-100h]
  int cDatab; // [rsp+28h] [rbp-100h]
  int cDatac; // [rsp+28h] [rbp-100h]
  unsigned int cDatad; // [rsp+28h] [rbp-100h]
  int cDatae; // [rsp+28h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-F8h]
  unsigned int v201; // [rsp+38h] [rbp-F0h]
  unsigned int v202; // [rsp+38h] [rbp-F0h]
  unsigned int v203; // [rsp+38h] [rbp-F0h]
  CBaseStreamGroupProxy *Src; // [rsp+40h] [rbp-E8h]
  bool Srca; // [rsp+40h] [rbp-E8h]
  struct tWAVEFORMATEX **v206; // [rsp+48h] [rbp-E0h]
  char v207; // [rsp+A8h] [rbp-80h]
  struct ISaDeviceProxy *v208; // [rsp+B0h] [rbp-78h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 ConnectorTypeForStream; // [rsp+B8h] [rbp-70h]
  CBaseStreamGroupProxy *v210; // [rsp+C0h] [rbp-68h] BYREF
  int v211; // [rsp+C8h] [rbp-60h]
  CEndpointCharacteristics *v212; // [rsp+D0h] [rbp-58h]
  CAudioSessionManager *v213; // [rsp+D8h] [rbp-50h] BYREF
  struct SYSTEM_AUDIO_STREAM *v214; // [rsp+E0h] [rbp-48h]
  struct tWAVEFORMATEX *v215; // [rsp+E8h] [rbp-40h] BYREF
  struct CAudioSessionManagerProvider *v216; // [rsp+F0h] [rbp-38h] BYREF
  SaDeviceParams *v217; // [rsp+F8h] [rbp-30h] BYREF
  LPVOID v218; // [rsp+100h] [rbp-28h] BYREF
  struct tWAVEFORMATEX *v219; // [rsp+108h] [rbp-20h] BYREF
  LPVOID v220; // [rsp+110h] [rbp-18h] BYREF
  unsigned __int16 *v221; // [rsp+118h] [rbp-10h] BYREF
  unsigned int v222; // [rsp+120h] [rbp-8h]
  __int64 v223; // [rsp+128h] [rbp+0h] BYREF
  struct IAudioProcess *v224; // [rsp+130h] [rbp+8h]
  __int64 v225; // [rsp+138h] [rbp+10h] BYREF
  LPVOID v226; // [rsp+140h] [rbp+18h] BYREF
  SaDeviceParams *v227; // [rsp+148h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+150h] [rbp+28h] BYREF
  WINBOOL v229; // [rsp+158h] [rbp+30h] BYREF
  int v230; // [rsp+15Ch] [rbp+34h] BYREF
  WINBOOL v231; // [rsp+160h] [rbp+38h] BYREF
  int v232; // [rsp+164h] [rbp+3Ch] BYREF
  WINBOOL fPending; // [rsp+168h] [rbp+40h] BYREF
  WINBOOL v234; // [rsp+16Ch] [rbp+44h] BYREF
  int v235; // [rsp+170h] [rbp+48h] BYREF
  unsigned int v236; // [rsp+174h] [rbp+4Ch]
  WINBOOL v237; // [rsp+178h] [rbp+50h] BYREF
  int v238; // [rsp+17Ch] [rbp+54h] BYREF
  WINBOOL v239; // [rsp+180h] [rbp+58h] BYREF
  WINBOOL v240; // [rsp+184h] [rbp+5Ch] BYREF
  int v241; // [rsp+188h] [rbp+60h] BYREF
  WINBOOL v242; // [rsp+18Ch] [rbp+64h] BYREF
  int v243; // [rsp+190h] [rbp+68h] BYREF
  WINBOOL v244; // [rsp+194h] [rbp+6Ch] BYREF
  int v245; // [rsp+198h] [rbp+70h] BYREF
  WINBOOL v246; // [rsp+19Ch] [rbp+74h] BYREF
  WINBOOL v247; // [rsp+1A0h] [rbp+78h] BYREF
  int v248; // [rsp+1A4h] [rbp+7Ch] BYREF
  WINBOOL v249; // [rsp+1A8h] [rbp+80h] BYREF
  int v250; // [rsp+1ACh] [rbp+84h] BYREF
  WINBOOL v251; // [rsp+1B0h] [rbp+88h] BYREF
  int v252; // [rsp+1B4h] [rbp+8Ch] BYREF
  WINBOOL v253; // [rsp+1B8h] [rbp+90h] BYREF
  WINBOOL v254; // [rsp+1BCh] [rbp+94h] BYREF
  int v255; // [rsp+1C0h] [rbp+98h] BYREF
  WINBOOL v256; // [rsp+1C4h] [rbp+9Ch] BYREF
  void *v257; // [rsp+1C8h] [rbp+A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+1D0h] [rbp+A8h] BYREF
  __int64 v259; // [rsp+1D8h] [rbp+B0h] BYREF
  LPVOID v260; // [rsp+1E0h] [rbp+B8h] BYREF
  LPVOID Context; // [rsp+1E8h] [rbp+C0h] BYREF
  LPVOID v262; // [rsp+1F0h] [rbp+C8h] BYREF
  LPVOID v263; // [rsp+1F8h] [rbp+D0h] BYREF
  LPVOID v264; // [rsp+200h] [rbp+D8h] BYREF
  LPVOID v265; // [rsp+208h] [rbp+E0h] BYREF
  LPVOID v266; // [rsp+210h] [rbp+E8h] BYREF
  LPVOID v267; // [rsp+218h] [rbp+F0h] BYREF
  LPVOID v268; // [rsp+220h] [rbp+F8h] BYREF
  LPVOID v269; // [rsp+228h] [rbp+100h] BYREF
  LPVOID v270; // [rsp+230h] [rbp+108h] BYREF
  LPVOID v271; // [rsp+238h] [rbp+110h] BYREF
  LPVOID v272; // [rsp+240h] [rbp+118h] BYREF
  LPVOID v273; // [rsp+248h] [rbp+120h] BYREF
  LPVOID v274; // [rsp+250h] [rbp+128h] BYREF
  struct IProcessSubmixProxy *v275; // [rsp+258h] [rbp+130h]
  LPVOID v276; // [rsp+260h] [rbp+138h] BYREF
  __int64 v277; // [rsp+268h] [rbp+140h] BYREF
  struct IAudioGraphCallback *v278; // [rsp+270h] [rbp+148h]
  GUID v279; // [rsp+278h] [rbp+150h]
  GUID v280; // [rsp+288h] [rbp+160h]
  CAudioSessionManager **v281; // [rsp+298h] [rbp+170h]
  struct CAudioSessionManager *v282; // [rsp+2A0h] [rbp+178h] BYREF
  char v283; // [rsp+2A8h] [rbp+180h]
  unsigned int v284[2]; // [rsp+2B0h] [rbp+188h]
  struct SaDeviceParams *v285; // [rsp+2B8h] [rbp+190h] BYREF
  char v286; // [rsp+2C0h] [rbp+198h]
  __int64 *v287; // [rsp+2C8h] [rbp+1A0h]
  struct IDeviceGraphObjectsStore *v288; // [rsp+2D0h] [rbp+1A8h] BYREF
  char v289; // [rsp+2D8h] [rbp+1B0h]
  struct tWAVEFORMATEX **v290; // [rsp+2E0h] [rbp+1B8h]
  struct tWAVEFORMATEX *v291; // [rsp+2E8h] [rbp+1C0h] BYREF
  char v292; // [rsp+2F0h] [rbp+1C8h]
  LPVOID *v293; // [rsp+2F8h] [rbp+1D0h]
  struct tWAVEFORMATEX *v294; // [rsp+300h] [rbp+1D8h] BYREF
  char v295; // [rsp+308h] [rbp+1E0h]
  LPVOID *v296; // [rsp+310h] [rbp+1E8h]
  struct tWAVEFORMATEX *v297; // [rsp+318h] [rbp+1F0h] BYREF
  char v298; // [rsp+320h] [rbp+1F8h]
  LPVOID *v299; // [rsp+328h] [rbp+200h]
  LPVOID v300; // [rsp+330h] [rbp+208h] BYREF
  char v301; // [rsp+338h] [rbp+210h]
  SaDeviceParams **v302; // [rsp+340h] [rbp+218h]
  struct SaDeviceParams *v303; // [rsp+348h] [rbp+220h] BYREF
  char v304; // [rsp+350h] [rbp+228h]
  SaDeviceParams **v305; // [rsp+358h] [rbp+230h]
  SaDeviceParams *v306; // [rsp+360h] [rbp+238h] BYREF
  char v307; // [rsp+368h] [rbp+240h]
  LPVOID *p_pv; // [rsp+370h] [rbp+248h]
  unsigned int *v309; // [rsp+378h] [rbp+250h] BYREF
  char v310; // [rsp+380h] [rbp+258h]
  struct tWAVEFORMATEX **v311; // [rsp+388h] [rbp+260h]
  struct tWAVEFORMATEX *v312; // [rsp+390h] [rbp+268h] BYREF
  char v313; // [rsp+398h] [rbp+270h]
  struct IMMDevice *v314; // [rsp+3A0h] [rbp+278h]
  _DWORD v315[2]; // [rsp+3A8h] [rbp+280h] BYREF
  __int64 v316; // [rsp+3B0h] [rbp+288h]
  _DWORD v317[2]; // [rsp+3B8h] [rbp+290h] BYREF
  __int64 v318; // [rsp+3C0h] [rbp+298h]
  _DWORD v319[2]; // [rsp+3C8h] [rbp+2A0h] BYREF
  __int64 v320; // [rsp+3D0h] [rbp+2A8h]
  _DWORD v321[2]; // [rsp+3D8h] [rbp+2B0h] BYREF
  __int64 v322; // [rsp+3E0h] [rbp+2B8h]
  _DWORD v323[2]; // [rsp+3E8h] [rbp+2C0h] BYREF
  __int64 v324; // [rsp+3F0h] [rbp+2C8h]
  _DWORD v325[2]; // [rsp+3F8h] [rbp+2D0h] BYREF
  __int64 v326; // [rsp+400h] [rbp+2D8h]
  GUID v327; // [rsp+408h] [rbp+2E0h]
  GUID v328; // [rsp+418h] [rbp+2F0h]
  union _RTL_RUN_ONCE *v329; // [rsp+428h] [rbp+300h] BYREF
  int v330; // [rsp+430h] [rbp+308h]
  struct _GUID v331; // [rsp+438h] [rbp+310h] BYREF
  struct _GUID v332; // [rsp+448h] [rbp+320h] BYREF
  GUID v333; // [rsp+458h] [rbp+330h] BYREF
  struct _GUID v334; // [rsp+468h] [rbp+340h] BYREF
  struct _GUID v335; // [rsp+478h] [rbp+350h] BYREF
  struct _GUID v336; // [rsp+488h] [rbp+360h] BYREF
  struct _GUID v337; // [rsp+498h] [rbp+370h] BYREF
  struct _GUID v338; // [rsp+4A8h] [rbp+380h] BYREF
  struct _GUID v339; // [rsp+4B8h] [rbp+390h] BYREF
  GUID v340; // [rsp+4C8h] [rbp+3A0h] BYREF
  GUID v341; // [rsp+4D8h] [rbp+3B0h] BYREF
  GUID v342; // [rsp+4E8h] [rbp+3C0h] BYREF
  GUID v343; // [rsp+4F8h] [rbp+3D0h] BYREF
  GUID v344; // [rsp+508h] [rbp+3E0h] BYREF
  GUID v345; // [rsp+518h] [rbp+3F0h] BYREF
  GUID v346; // [rsp+528h] [rbp+400h] BYREF
  _BYTE v347[96]; // [rsp+538h] [rbp+410h] BYREF
  unsigned __int16 *v348; // [rsp+598h] [rbp+470h] BYREF
  int v349; // [rsp+5A0h] [rbp+478h]
  int v350; // [rsp+5A4h] [rbp+47Ch]
  void *v351; // [rsp+5A8h] [rbp+480h]
  int v352; // [rsp+5B0h] [rbp+488h]
  int v353; // [rsp+5B4h] [rbp+48Ch]
  struct _GUID *v354; // [rsp+5B8h] [rbp+490h]
  __int64 v355; // [rsp+5C0h] [rbp+498h]
  char *v356; // [rsp+5C8h] [rbp+4A0h]
  __int64 v357; // [rsp+5D0h] [rbp+4A8h]
  int *v358; // [rsp+5D8h] [rbp+4B0h]
  __int64 v359; // [rsp+5E0h] [rbp+4B8h]
  __int64 *v360; // [rsp+5E8h] [rbp+4C0h]
  __int64 v361; // [rsp+5F0h] [rbp+4C8h]
  unsigned __int16 *v362; // [rsp+5F8h] [rbp+4D0h] BYREF
  int v363; // [rsp+600h] [rbp+4D8h]
  int v364; // [rsp+604h] [rbp+4DCh]
  void *v365; // [rsp+608h] [rbp+4E0h]
  int v366; // [rsp+610h] [rbp+4E8h]
  int v367; // [rsp+614h] [rbp+4ECh]
  struct _EVENT_DATA_DESCRIPTOR v368; // [rsp+618h] [rbp+4F0h] BYREF
  char *v369; // [rsp+628h] [rbp+500h]
  __int64 v370; // [rsp+630h] [rbp+508h]
  char *v371; // [rsp+638h] [rbp+510h]
  __int64 v372; // [rsp+640h] [rbp+518h]
  char *v373; // [rsp+648h] [rbp+520h]
  __int64 v374; // [rsp+650h] [rbp+528h]
  char *v375; // [rsp+658h] [rbp+530h]
  __int64 v376; // [rsp+660h] [rbp+538h]
  int *v377; // [rsp+668h] [rbp+540h]
  __int64 v378; // [rsp+670h] [rbp+548h]
  unsigned __int16 *v379; // [rsp+678h] [rbp+550h] BYREF
  int v380; // [rsp+680h] [rbp+558h]
  int v381; // [rsp+684h] [rbp+55Ch]
  void *v382; // [rsp+688h] [rbp+560h]
  int v383; // [rsp+690h] [rbp+568h]
  int v384; // [rsp+694h] [rbp+56Ch]
  struct _EVENT_DATA_DESCRIPTOR v385; // [rsp+698h] [rbp+570h] BYREF
  char *v386; // [rsp+6A8h] [rbp+580h]
  __int64 v387; // [rsp+6B0h] [rbp+588h]
  char *v388; // [rsp+6B8h] [rbp+590h]
  __int64 v389; // [rsp+6C0h] [rbp+598h]
  char *v390; // [rsp+6C8h] [rbp+5A0h]
  __int64 v391; // [rsp+6D0h] [rbp+5A8h]
  char *v392; // [rsp+6D8h] [rbp+5B0h]
  __int64 v393; // [rsp+6E0h] [rbp+5B8h]
  int *v394; // [rsp+6E8h] [rbp+5C0h]
  __int64 v395; // [rsp+6F0h] [rbp+5C8h]
  unsigned __int16 *v396; // [rsp+6F8h] [rbp+5D0h] BYREF
  int v397; // [rsp+700h] [rbp+5D8h]
  int v398; // [rsp+704h] [rbp+5DCh]
  void *v399; // [rsp+708h] [rbp+5E0h]
  int v400; // [rsp+710h] [rbp+5E8h]
  int v401; // [rsp+714h] [rbp+5ECh]
  struct _EVENT_DATA_DESCRIPTOR v402; // [rsp+718h] [rbp+5F0h] BYREF
  WORD *v403; // [rsp+728h] [rbp+600h]
  __int64 v404; // [rsp+730h] [rbp+608h]
  DWORD *v405; // [rsp+738h] [rbp+610h]
  __int64 v406; // [rsp+740h] [rbp+618h]
  DWORD *v407; // [rsp+748h] [rbp+620h]
  __int64 v408; // [rsp+750h] [rbp+628h]
  char *v409; // [rsp+758h] [rbp+630h]
  __int64 v410; // [rsp+760h] [rbp+638h]
  int *v411; // [rsp+768h] [rbp+640h]
  __int64 v412; // [rsp+770h] [rbp+648h]
  unsigned __int16 *v413; // [rsp+778h] [rbp+650h] BYREF
  int v414; // [rsp+780h] [rbp+658h]
  int v415; // [rsp+784h] [rbp+65Ch]
  void *v416; // [rsp+788h] [rbp+660h]
  int v417; // [rsp+790h] [rbp+668h]
  int v418; // [rsp+794h] [rbp+66Ch]
  struct _EVENT_DATA_DESCRIPTOR v419; // [rsp+798h] [rbp+670h] BYREF
  WORD *v420; // [rsp+7A8h] [rbp+680h]
  __int64 v421; // [rsp+7B0h] [rbp+688h]
  DWORD *v422; // [rsp+7B8h] [rbp+690h]
  __int64 v423; // [rsp+7C0h] [rbp+698h]
  DWORD *v424; // [rsp+7C8h] [rbp+6A0h]
  __int64 v425; // [rsp+7D0h] [rbp+6A8h]
  char *v426; // [rsp+7D8h] [rbp+6B0h]
  __int64 v427; // [rsp+7E0h] [rbp+6B8h]
  int *v428; // [rsp+7E8h] [rbp+6C0h]
  __int64 v429; // [rsp+7F0h] [rbp+6C8h]
  unsigned __int16 *v430; // [rsp+7F8h] [rbp+6D0h] BYREF
  int v431; // [rsp+800h] [rbp+6D8h]
  int v432; // [rsp+804h] [rbp+6DCh]
  void *v433; // [rsp+808h] [rbp+6E0h]
  int v434; // [rsp+810h] [rbp+6E8h]
  int v435; // [rsp+814h] [rbp+6ECh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+818h] [rbp+6F0h] BYREF
  WORD *v437; // [rsp+828h] [rbp+700h]
  __int64 v438; // [rsp+830h] [rbp+708h]
  DWORD *v439; // [rsp+838h] [rbp+710h]
  __int64 v440; // [rsp+840h] [rbp+718h]
  DWORD *v441; // [rsp+848h] [rbp+720h]
  __int64 v442; // [rsp+850h] [rbp+728h]
  GUID *v443; // [rsp+858h] [rbp+730h]
  __int64 v444; // [rsp+860h] [rbp+738h]
  EVENT_DATA_DESCRIPTOR v445; // [rsp+868h] [rbp+740h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v446; // [rsp+888h] [rbp+760h] BYREF
  WORD *p_nChannels; // [rsp+898h] [rbp+770h]
  __int64 v448; // [rsp+8A0h] [rbp+778h]
  DWORD *p_nSamplesPerSec; // [rsp+8A8h] [rbp+780h]
  __int64 v450; // [rsp+8B0h] [rbp+788h]
  DWORD *p_nAvgBytesPerSec; // [rsp+8B8h] [rbp+790h]
  __int64 v452; // [rsp+8C0h] [rbp+798h]
  char *v453; // [rsp+8C8h] [rbp+7A0h]
  __int64 v454; // [rsp+8D0h] [rbp+7A8h]
  int *v455; // [rsp+8D8h] [rbp+7B0h]
  __int64 v456; // [rsp+8E0h] [rbp+7B8h]
  EVENT_DATA_DESCRIPTOR v457; // [rsp+8E8h] [rbp+7C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v458; // [rsp+908h] [rbp+7E0h] BYREF
  WORD *v459; // [rsp+918h] [rbp+7F0h]
  __int64 v460; // [rsp+920h] [rbp+7F8h]
  DWORD *v461; // [rsp+928h] [rbp+800h]
  __int64 v462; // [rsp+930h] [rbp+808h]
  DWORD *v463; // [rsp+938h] [rbp+810h]
  __int64 v464; // [rsp+940h] [rbp+818h]
  GUID *v465; // [rsp+948h] [rbp+820h]
  __int64 v466; // [rsp+950h] [rbp+828h]
  EVENT_DATA_DESCRIPTOR v467; // [rsp+958h] [rbp+830h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v468; // [rsp+978h] [rbp+850h] BYREF
  char *v469; // [rsp+988h] [rbp+860h]
  __int64 v470; // [rsp+990h] [rbp+868h]
  char *v471; // [rsp+998h] [rbp+870h]
  __int64 v472; // [rsp+9A0h] [rbp+878h]
  char *v473; // [rsp+9A8h] [rbp+880h]
  __int64 v474; // [rsp+9B0h] [rbp+888h]
  GUID *v475; // [rsp+9B8h] [rbp+890h]
  __int64 v476; // [rsp+9C0h] [rbp+898h]
  EVENT_DATA_DESCRIPTOR v477; // [rsp+9C8h] [rbp+8A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v478; // [rsp+9E8h] [rbp+8C0h] BYREF
  char *v479; // [rsp+9F8h] [rbp+8D0h]
  __int64 v480; // [rsp+A00h] [rbp+8D8h]
  char *v481; // [rsp+A08h] [rbp+8E0h]
  __int64 v482; // [rsp+A10h] [rbp+8E8h]
  char *v483; // [rsp+A18h] [rbp+8F0h]
  __int64 v484; // [rsp+A20h] [rbp+8F8h]
  GUID *v485; // [rsp+A28h] [rbp+900h]
  __int64 v486; // [rsp+A30h] [rbp+908h]
  EVENT_DATA_DESCRIPTOR v487; // [rsp+A38h] [rbp+910h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v488; // [rsp+A58h] [rbp+930h] BYREF
  WORD *v489; // [rsp+A68h] [rbp+940h]
  __int64 v490; // [rsp+A70h] [rbp+948h]
  DWORD *v491; // [rsp+A78h] [rbp+950h]
  __int64 v492; // [rsp+A80h] [rbp+958h]
  DWORD *v493; // [rsp+A88h] [rbp+960h]
  __int64 v494; // [rsp+A90h] [rbp+968h]
  GUID *v495; // [rsp+A98h] [rbp+970h]
  __int64 v496; // [rsp+AA0h] [rbp+978h]
  EVENT_DATA_DESCRIPTOR v497; // [rsp+AA8h] [rbp+980h] BYREF
  int *v498; // [rsp+AC8h] [rbp+9A0h]
  __int64 v499; // [rsp+AD0h] [rbp+9A8h]
  EVENT_DATA_DESCRIPTOR v500; // [rsp+AD8h] [rbp+9B0h] BYREF
  int *v501; // [rsp+AF8h] [rbp+9D0h]
  __int64 v502; // [rsp+B00h] [rbp+9D8h]
  EVENT_DATA_DESCRIPTOR v503; // [rsp+B08h] [rbp+9E0h] BYREF
  int *v504; // [rsp+B28h] [rbp+A00h]
  __int64 v505; // [rsp+B30h] [rbp+A08h]
  EVENT_DATA_DESCRIPTOR v506; // [rsp+B38h] [rbp+A10h] BYREF
  int *v507; // [rsp+B58h] [rbp+A30h]
  __int64 v508; // [rsp+B60h] [rbp+A38h]
  EVENT_DATA_DESCRIPTOR v509; // [rsp+B68h] [rbp+A40h] BYREF
  int *v510; // [rsp+B88h] [rbp+A60h]
  __int64 v511; // [rsp+B90h] [rbp+A68h]
  wil::details::in1diag3 *retaddr; // [rsp+BE0h] [rbp+AB8h]

  v278 = a12;
  v23 = (__int64 *)*((_QWORD *)a9 + 2);
  v24 = a22;
  v214 = a23;
  v221 = 0LL;
  v26 = *v23;
  v224 = a2;
  v27 = *(__int64 (__fastcall **)(__int64 *, unsigned __int16 **))(v26 + 40);
  v222 = a4;
  v212 = a9;
  v275 = a22;
  v28 = v27(v23, &v221);
  v29 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x518,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v28,
      cData);
    goto LABEL_189;
  }
  if ( *((_DWORD *)a9 + 37) )
  {
    v211 = 1;
  }
  else if ( (a10 & 0x20000) != 0 )
  {
    v211 = 2;
  }
  else
  {
    v211 = 0;
  }
  v314 = (struct IMMDevice *)*((_QWORD *)a9 + 2);
  v30 = v314;
  ((void (__fastcall *)(struct IMMDevice *))v30->lpVtbl->AddRef)(v30);
  IsOffloadCapable = CEndpointCharacteristics::IsOffloadCapable(a9);
  v32 = CEndpointCharacteristics::HardwareLoopbackEnabled(v212);
  ConnectorTypeForStream = GetConnectorTypeForStream(v30, a10, a11, v32, IsOffloadCapable, a13, v24);
  v280 = GUID_00000000_0000_0000_0000_000000000000;
  v279 = GUID_00000000_0000_0000_0000_000000000000;
  v327 = GUID_00000000_0000_0000_0000_000000000000;
  v328 = GUID_00000000_0000_0000_0000_000000000000;
  v33 = DeriveAudioProcessingModeConfiguration(v222, a5, a6);
  v29 = v33;
  if ( v33 >= 0 )
  {
    v220 = 0LL;
    v219 = 0LL;
    v218 = 0LL;
    v215 = 0LL;
    v311 = &v215;
    v290 = &v219;
    v293 = &v218;
    v296 = &v220;
    v336 = v280;
    v337 = v279;
    v331 = v327;
    v312 = 0LL;
    v313 = 1;
    v291 = 0LL;
    v292 = 1;
    v294 = 0LL;
    v295 = 1;
    v297 = 0LL;
    v298 = 1;
    v29 = DeriveDeviceGraphFormatsForStream(
            v212,
            a8 != 0,
            (struct _GUID *)(unsigned int)ConnectorTypeForStream,
            a11,
            &v331,
            &v337,
            &v336,
            a13,
            &v297,
            &v294,
            &v291,
            &v312);
    if ( v298 )
    {
      v34 = v296;
      v35 = v297;
      v36 = (struct tWAVEFORMATEX *)*v296;
      if ( v297 != *v296 )
      {
        if ( v36 )
          CoTaskMemFree(v36);
        *v34 = v35;
      }
    }
    if ( v295 )
    {
      v37 = v293;
      v38 = v294;
      v39 = (struct tWAVEFORMATEX *)*v293;
      if ( v294 != *v293 )
      {
        if ( v39 )
          CoTaskMemFree(v39);
        *v37 = v38;
      }
    }
    if ( v292 )
    {
      v40 = v290;
      v41 = v291;
      v42 = *v290;
      if ( v291 != *v290 )
      {
        if ( v42 )
          CoTaskMemFree(v42);
        *v40 = v41;
      }
    }
    if ( v313 )
    {
      v43 = v311;
      v44 = v312;
      v45 = *v311;
      if ( v312 != *v311 )
      {
        if ( v45 )
          CoTaskMemFree(v45);
        *v43 = v44;
      }
    }
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x533,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v29,
        cDataa);
    }
    else
    {
      if ( a13 )
      {
        wFormatTag = a13->wFormatTag;
        if ( a13->wFormatTag == 0xFFFE )
        {
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v242, &v262);
          if ( v242 )
          {
            v262 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v262 + 1) > 4u )
          {
            TlgCreateWsz(&v446, L"WAVEFORMATEXTENSIBLE");
            v448 = 2LL;
            p_nSamplesPerSec = &a13->nSamplesPerSec;
            p_nChannels = &a13->nChannels;
            p_nAvgBytesPerSec = &a13->nAvgBytesPerSec;
            v453 = (char *)&a13[1].nSamplesPerSec + 2;
            v243 = *(_DWORD *)&a13[1].nChannels;
            v455 = &v243;
            v450 = 4LL;
            v452 = 4LL;
            v454 = 16LL;
            v456 = 4LL;
            TlgWrite(v145, &unk_1801104C3, v143, v144, 8u, &v445);
          }
        }
        else
        {
          v346 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v346.Data1 = wFormatTag;
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
          if ( fPending )
          {
            Context = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)Context + 1) > 4u )
          {
            TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
            v438 = 2LL;
            v439 = &a13->nSamplesPerSec;
            v437 = &a13->nChannels;
            v441 = &a13->nAvgBytesPerSec;
            v443 = &v346;
            v440 = 4LL;
            v442 = 4LL;
            v444 = 16LL;
            v315[1] = 4;
            v430 = *(unsigned __int16 **)(v47 + 8);
            v315[0] = ((unsigned int)&unk_18011043E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v48 = *(_QWORD *)(v47 + 32);
            v316 = 0LL;
            v431 = *v430;
            v433 = &unk_180110449;
            v432 = 2;
            v434 = 121;
            v435 = 1;
            EtwEventWriteTransfer(v48, v315, 0LL, 0LL, 7, &v430);
          }
        }
      }
      else
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v240, &v260);
        v141 = (const GUID *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        if ( v240 )
        {
          v260 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v142 = (const struct _TlgProvider_t *)*((_QWORD *)v260 + 1);
        if ( *(_DWORD *)v142 > 4u )
        {
          v241 = 0;
          v510 = &v241;
          v511 = 4LL;
          TlgWrite(v142, &unk_180110555, v141, v140, 3u, &v509);
        }
      }
      v49 = v220;
      if ( v220 )
      {
        v50 = *(_WORD *)v220;
        if ( *(_WORD *)v220 == 0xFFFE )
        {
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v247, &v265);
          if ( v247 )
          {
            v265 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v265 + 1) > 4u )
          {
            TlgCreateWsz(&v368, L"WAVEFORMATEXTENSIBLE");
            v370 = 2LL;
            v372 = 4LL;
            v374 = 4LL;
            v376 = 16LL;
            v369 = (char *)v220 + 2;
            v371 = (char *)v220 + 4;
            v373 = (char *)v220 + 8;
            v375 = (char *)(v49 + 6);
            v248 = v49[5];
            v377 = &v248;
            v378 = 4LL;
            v317[1] = 4;
            v362 = *(unsigned __int16 **)(v51 + 8);
            v317[0] = ((unsigned int)&unk_180110284 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v52 = *(_QWORD *)(v51 + 32);
            v318 = 0LL;
            v363 = *v362;
            v365 = &unk_18011028F;
            v364 = 2;
            v366 = 136;
            v367 = 1;
            EtwEventWriteTransfer(v52, v317, 0LL, 0LL, 8, &v362);
          }
        }
        else
        {
          v342 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v342.Data1 = v50;
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v246, &v264);
          if ( v246 )
          {
            v264 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v264 + 1) > 4u )
          {
            TlgCreateWsz(&v468, L"WAVEFORMATEX");
            v470 = 2LL;
            v472 = 4LL;
            v474 = 4LL;
            v476 = 16LL;
            v469 = (char *)v220 + 2;
            v471 = (char *)v220 + 4;
            v473 = (char *)v220 + 8;
            v475 = &v342;
            TlgWrite(v151, &unk_1801103B7, v149, v150, 7u, &v467);
          }
        }
      }
      else
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v244, &v263);
        if ( v244 )
        {
          v263 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v148 = (const struct _TlgProvider_t *)*((_QWORD *)v263 + 1);
        if ( *(_DWORD *)v148 > 4u )
        {
          v245 = 0;
          v498 = &v245;
          v499 = 4LL;
          TlgWrite(v148, &unk_180110369, v146, v147, 3u, &v497);
        }
      }
      v53 = v218;
      if ( v218 )
      {
        v54 = *(_WORD *)v218;
        if ( *(_WORD *)v218 == 0xFFFE )
        {
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v251, &v268);
          if ( v251 )
          {
            v268 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v268 + 1) > 4u )
          {
            TlgCreateWsz(&v385, L"WAVEFORMATEXTENSIBLE");
            v387 = 2LL;
            v389 = 4LL;
            v391 = 4LL;
            v393 = 16LL;
            v386 = (char *)v218 + 2;
            v388 = (char *)v218 + 4;
            v390 = (char *)v218 + 8;
            v392 = (char *)(v53 + 6);
            v252 = v53[5];
            v394 = &v252;
            v395 = 4LL;
            v319[1] = 4;
            v379 = *(unsigned __int16 **)(v55 + 8);
            v319[0] = ((unsigned int)&unk_1801101ED - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v56 = *(_QWORD *)(v55 + 32);
            v320 = 0LL;
            v380 = *v379;
            v382 = &unk_1801101F8;
            v381 = 2;
            v383 = 139;
            v384 = 1;
            EtwEventWriteTransfer(v56, v319, 0LL, 0LL, 8, &v379);
          }
        }
        else
        {
          v343 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v343.Data1 = v54;
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v239, &v267);
          if ( v239 )
          {
            v267 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v267 + 1) > 4u )
          {
            TlgCreateWsz(&v478, L"WAVEFORMATEX");
            v480 = 2LL;
            v482 = 4LL;
            v484 = 4LL;
            v486 = 16LL;
            v479 = (char *)v218 + 2;
            v481 = (char *)v218 + 4;
            v483 = (char *)v218 + 8;
            v485 = &v343;
            TlgWrite(v157, &unk_180110163, v155, v156, 7u, &v477);
          }
        }
      }
      else
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v249, &v266);
        if ( v249 )
        {
          v266 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v154 = (const struct _TlgProvider_t *)*((_QWORD *)v266 + 1);
        if ( *(_DWORD *)v154 > 4u )
        {
          v250 = 0;
          v501 = &v250;
          v502 = 4LL;
          TlgWrite(v154, &unk_180110318, v152, v153, 3u, &v500);
        }
      }
      v57 = v219;
      if ( v219 )
      {
        v58 = v219->wFormatTag;
        if ( v219->wFormatTag == 0xFFFE )
        {
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v229, &v271);
          if ( v229 )
          {
            v271 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v271 + 1) > 4u )
          {
            TlgCreateWsz(&v402, L"WAVEFORMATEXTENSIBLE");
            v404 = 2LL;
            v406 = 4LL;
            v408 = 4LL;
            v410 = 16LL;
            v403 = &v219->nChannels;
            v405 = &v219->nSamplesPerSec;
            v407 = &v219->nAvgBytesPerSec;
            v409 = (char *)&v57[1].nSamplesPerSec + 2;
            v230 = *(_DWORD *)&v57[1].nChannels;
            v411 = &v230;
            v412 = 4LL;
            v321[1] = 4;
            v396 = *(unsigned __int16 **)(v59 + 8);
            v321[0] = ((unsigned int)&unk_18010FFA5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v60 = *(_QWORD *)(v59 + 32);
            v322 = 0LL;
            v397 = *v396;
            v399 = &unk_18010FFB0;
            v398 = 2;
            v400 = 138;
            v401 = 1;
            EtwEventWriteTransfer(v60, v321, 0LL, 0LL, 8, &v396);
          }
        }
        else
        {
          v344 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v344.Data1 = v58;
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v256, &v270);
          if ( v256 )
          {
            v270 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v270 + 1) > 4u )
          {
            TlgCreateWsz(&v458, L"WAVEFORMATEX");
            v460 = 2LL;
            v462 = 4LL;
            v464 = 4LL;
            v466 = 16LL;
            v459 = &v219->nChannels;
            v461 = &v219->nSamplesPerSec;
            v463 = &v219->nAvgBytesPerSec;
            v465 = &v344;
            TlgWrite(v163, &unk_1801100DA, v161, v162, 7u, &v457);
          }
        }
      }
      else
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v254, &v269);
        if ( v254 )
        {
          v269 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v160 = (const struct _TlgProvider_t *)*((_QWORD *)v269 + 1);
        if ( *(_DWORD *)v160 > 4u )
        {
          v255 = 0;
          v504 = &v255;
          v505 = 4LL;
          TlgWrite(v160, &unk_18011008A, v158, v159, 3u, &v503);
        }
      }
      v61 = v215;
      if ( v215 )
      {
        v62 = v215->wFormatTag;
        if ( v215->wFormatTag == 0xFFFE )
        {
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v234, &v274);
          if ( v234 )
          {
            v274 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v274 + 1) > 4u )
          {
            TlgCreateWsz(&v419, L"WAVEFORMATEXTENSIBLE");
            v421 = 2LL;
            v423 = 4LL;
            v425 = 4LL;
            v427 = 16LL;
            v420 = &v215->nChannels;
            v422 = &v215->nSamplesPerSec;
            v424 = &v215->nAvgBytesPerSec;
            v426 = (char *)&v61[1].nSamplesPerSec + 2;
            v235 = *(_DWORD *)&v61[1].nChannels;
            v428 = &v235;
            v429 = 4LL;
            v323[1] = 4;
            v413 = *(unsigned __int16 **)(v63 + 8);
            v323[0] = ((unsigned int)&unk_18010FF10 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v64 = *(_QWORD *)(v63 + 32);
            v324 = 0LL;
            v414 = *v413;
            v416 = &unk_18010FF1B;
            v415 = 2;
            v417 = 137;
            v418 = 1;
            EtwEventWriteTransfer(v64, v323, 0LL, 0LL, 8, &v413);
          }
        }
        else
        {
          v345 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v345.Data1 = v62;
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v253, &v273);
          if ( v253 )
          {
            v273 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          if ( **((_DWORD **)v273 + 1) > 4u )
          {
            TlgCreateWsz(&v488, L"WAVEFORMATEX");
            v490 = 2LL;
            v492 = 4LL;
            v494 = 4LL;
            v496 = 16LL;
            v489 = &v215->nChannels;
            v491 = &v215->nSamplesPerSec;
            v493 = &v215->nAvgBytesPerSec;
            v495 = &v345;
            TlgWrite(v169, &unk_18010FE88, v167, v168, 7u, &v487);
          }
        }
      }
      else
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v231, &v272);
        if ( v231 )
        {
          v272 = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v166 = (const struct _TlgProvider_t *)*((_QWORD *)v272 + 1);
        if ( *(_DWORD *)v166 > 4u )
        {
          v232 = 0;
          v507 = &v232;
          v508 = 4LL;
          TlgWrite(v166, &unk_18011003B, v164, v165, 3u, &v506);
        }
      }
      v335 = v279;
      v334 = v327;
      v332 = v280;
      v65 = DerivePeriodicityForStream(
              v212,
              a13,
              a3,
              a10,
              a11,
              ConnectorTypeForStream,
              v215,
              &v332,
              &v334,
              &v335,
              a7 != 0,
              a8 != 0,
              a14,
              a15,
              v275,
              &a15);
      v29 = v65;
      if ( v65 >= 0 )
      {
        v66 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v224 + 368LL))(v224);
        v67 = *(_QWORD *)a3;
        v68 = v66;
        v226 = 0LL;
        v69 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(v67 + 80);
        pv = 0LL;
        v333 = v279;
        v341 = v280;
        if ( v69 == CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(a3);
        else
          UniqueStreamIdentifier = v69(a3);
        p_pv = &pv;
        v299 = &v226;
        v309 = 0LL;
        v310 = 1;
        v300 = 0LL;
        v301 = 1;
        v29 = InitializeStreamAndModeDescriptors(
                (size_t)v212,
                a11,
                a10,
                v211,
                ConnectorTypeForStream,
                &v341,
                (__int128 *)&v333,
                a17,
                (__int64)a13,
                (__int64)v220,
                a14,
                a15,
                (__int64)a18,
                a16,
                (__int64)a21,
                UniqueStreamIdentifier,
                v68,
                &v300,
                &v309);
        if ( v301 )
        {
          v71 = v299;
          v72 = v300;
          v73 = *v299;
          if ( v300 != *v299 )
          {
            if ( v73 )
              CoTaskMemFree(v73);
            *v71 = v72;
          }
        }
        if ( v310 )
        {
          v74 = p_pv;
          v75 = v309;
          v76 = (unsigned int *)*p_pv;
          if ( v309 != *p_pv )
          {
            if ( v76 )
              CoTaskMemFree(v76);
            *v74 = v75;
          }
        }
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x548,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v29,
            cDatac);
        }
        else
        {
          v77 = 0;
          v78 = a11 == AUDCLNT_SHAREMODE_EXCLUSIVE;
          v79 = a10 & 1;
          v236 = v79;
          if ( (a10 & 1) != 0 )
          {
            v170 = *((_DWORD *)v226 + 34) || pv && *((_DWORD *)pv + 14);
            v77 = IsOutOfProcOffloadUsed(v170);
            v78 |= v77 == 0;
          }
          v80 = a19;
          v340 = v328;
          v81 = BuildDeviceGraphForStream(
                  (int)v212,
                  a3,
                  (int)v224,
                  v222,
                  a10,
                  a11,
                  ConnectorTypeForStream,
                  Src,
                  &v340,
                  (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)v226,
                  (struct AUDIO_DEVICE_MODE_DESCRIPTOR *)pv,
                  (struct tWAVEFORMATEX *)v218,
                  v211,
                  v278,
                  a19,
                  v78,
                  (__int64)v275,
                  v214);
          v29 = v81;
          if ( v81 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x559,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v81,
              cDatad);
          }
          else
          {
            v82 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct SYSTEM_AUDIO_STREAM *, unsigned int))(*(_QWORD *)a3 + 112LL);
            if ( v82 == CAudioStream::SetAudioHandle )
              v83 = CAudioStream::SetAudioHandle(a3, v214, v80);
            else
              v83 = v82(a3, v214, v80);
            v29 = v83;
            if ( v83 >= 0 )
            {
              v287 = &v259;
              v259 = 0LL;
              v288 = 0LL;
              v289 = 1;
              v84 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
              if ( v84 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
                DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(
                                                g_DeviceGraphStore,
                                                v221,
                                                &v288);
              else
                DeviceGraphStoreForEndpoint = ((__int64 (__fastcall *)(CDeviceGraphStore *, unsigned __int16 *, struct IDeviceGraphObjectsStore **))v84)(
                                                g_DeviceGraphStore,
                                                v221,
                                                &v288);
              v29 = DeviceGraphStoreForEndpoint;
              if ( v289 )
              {
                v86 = *v287;
                *v287 = (__int64)v288;
                if ( v86 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
              }
              if ( v29 < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x561,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v29,
                  cDatad);
LABEL_172:
                if ( v259 )
                {
                  v138 = *(void (**)(void))(*(_QWORD *)v259 + 16LL);
                  if ( (char *)v138 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release )
                    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release();
                  else
                    v138();
                }
                goto LABEL_175;
              }
              v87 = *(_QWORD *(__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v259 + 96LL);
              if ( (char *)v87 == (char *)CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection )
                CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(v259, &lpCriticalSection);
              else
                v87(v259, &lpCriticalSection);
              v88 = *(_QWORD *)a3;
              v210 = 0LL;
              v89 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IStreamGroupProxy **))(v88 + 120);
              if ( v89 == CAudioStream::GetStreamGroup )
                StreamGroup = CAudioStream::GetStreamGroup(a3, &v210);
              else
                StreamGroup = v89(a3, &v210);
              v29 = StreamGroup;
              if ( StreamGroup < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x569,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)StreamGroup,
                  cDatad);
                goto LABEL_324;
              }
              v91 = v210;
              v208 = 0LL;
              wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v208);
              v92 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **))(*(_QWORD *)v91 + 208LL);
              if ( v92 == CBaseStreamGroupProxy::GetConnectedSaDevice )
                ConnectedSaDevice = CBaseStreamGroupProxy::GetConnectedSaDevice(v91, &v208);
              else
                ConnectedSaDevice = v92(v91, &v208);
              v29 = ConnectedSaDevice;
              if ( ConnectedSaDevice < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x56D,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)ConnectedSaDevice,
                  cDatad);
                goto LABEL_323;
              }
              if ( !v208 )
                goto LABEL_91;
              if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 144LL))(a3) )
              {
                v305 = &v227;
                v227 = 0LL;
                v306 = 0LL;
                v307 = 1;
                v29 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, SaDeviceParams **))(*(_QWORD *)v208 + 104LL))(
                        v208,
                        &v306);
                if ( v307 )
                {
                  v171 = *v305;
                  *v305 = v306;
                  if ( v171 )
                    SaDeviceParams::`scalar deleting destructor'(v171, (unsigned int)v171);
                }
                if ( v29 < 0 )
                {
                  v172 = (unsigned int)v29;
                  v173 = 1403LL;
                  goto LABEL_265;
                }
                v174 = (const struct tWAVEFORMATEX *)*((_QWORD *)v227 + 3);
                v175 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v210 + 112LL))(v210);
                if ( !(unsigned int)CompareWaveFormat(v174, v175) )
                {
                  v177 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                           g_DeviceGraphManager,
                           v210,
                           v208);
                  v29 = v177;
                  if ( v177 < 0 )
                  {
                    v172 = (unsigned int)v177;
                    v173 = 1411LL;
LABEL_265:
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)v173,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                      (const char *)v172,
                      cDatad);
                    v179 = v227;
                    if ( v227 )
LABEL_266:
                      SaDeviceParams::`scalar deleting destructor'(v179, v178);
LABEL_323:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v208);
LABEL_324:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v210);
                    if ( lpCriticalSection )
                      LeaveCriticalSection(lpCriticalSection);
                    goto LABEL_172;
                  }
                  wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v208);
                }
                if ( v227 )
                  SaDeviceParams::`scalar deleting destructor'(v227, v176);
              }
              v125 = (const struct SaDeviceParams **)v208;
              if ( v208 )
              {
                v108 = v212;
                goto LABEL_141;
              }
LABEL_91:
              v302 = &v217;
              v217 = 0LL;
              v339 = v279;
              v338 = v280;
              v206 = (struct tWAVEFORMATEX **)*((_QWORD *)v226 + 4);
              v303 = 0LL;
              v304 = 1;
              v29 = DeriveSaDeviceParametersForStream(
                      v212,
                      a11,
                      ConnectorTypeForStream,
                      v77,
                      &v338,
                      &v339,
                      v215,
                      v219,
                      (__int64)v206,
                      &v303);
              if ( v304 )
              {
                v94 = *v302;
                *v302 = v303;
                if ( v94 )
                  SaDeviceParams::`scalar deleting destructor'(v94, (unsigned int)v94);
              }
              if ( v29 < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x590,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v29,
                  cDatad);
                goto LABEL_301;
              }
              v213 = 0LL;
              v216 = 0LL;
              AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v216);
              v29 = AudioSessionManagerProvider;
              if ( AudioSessionManagerProvider < 0 )
              {
                v180 = (unsigned int)AudioSessionManagerProvider;
                v181 = 1429LL;
LABEL_299:
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)v181,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)v180,
                  cDatad);
                goto LABEL_300;
              }
              v96 = v216;
              v281 = &v213;
              v282 = 0LL;
              v283 = 1;
              v97 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v216 + 40LL);
              if ( v97 == CAudioSessionManagerProvider::GetAudioSessionManager )
                AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v216, v221, &v282);
              else
                AudioSessionManager = v97(v216, v221, &v282);
              v29 = AudioSessionManager;
              if ( v283 )
              {
                v99 = *v281;
                *v281 = v282;
                if ( v99 )
                  (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v99 + 16LL))(v99);
              }
              if ( v29 < 0 )
              {
                v181 = 1430LL;
LABEL_298:
                v180 = (unsigned int)v29;
                goto LABEL_299;
              }
              v207 = 0;
              DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v212);
              if ( DoesExclusiveModeOverrideShared )
              {
                if ( a11 == AUDCLNT_SHAREMODE_EXCLUSIVE )
                {
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)v213 + 63, GetCurrentThreadId(), 0) )
                  {
                    v29 = -2005139364;
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x5A8,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                      (const char *)0x887C005CLL,
                      cDatad);
                    goto LABEL_288;
                  }
                  v96 = v216;
                  v207 = 1;
                  goto LABEL_279;
                }
                if ( _InterlockedCompareExchange((volatile signed __int32 *)v213 + 63, 0, 0) )
                {
                  v29 = -2005139364;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x5AE,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)0x887C005CLL,
                    cDatad);
                  goto LABEL_288;
                }
                v96 = v216;
              }
              if ( a11 != AUDCLNT_SHAREMODE_EXCLUSIVE )
              {
                if ( (a10 & 1) != 0 )
                {
                  wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v208);
                  v203 = v80;
                  v108 = v212;
                  SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                                 v184,
                                                 v212,
                                                 v217,
                                                 a10,
                                                 a11,
                                                 (unsigned __int64)pData,
                                                 v203,
                                                 Srca,
                                                 v224,
                                                 v213,
                                                 &v208);
                  v29 = SaDeviceForOffloadedStream;
                  if ( SaDeviceForOffloadedStream >= 0 )
                    goto LABEL_114;
                  v183 = 1471LL;
                }
                else
                {
                  v101 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v224 + 96LL))(v224) != 0;
                  v102 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a3 + 144LL);
                  if ( v102 == CAudioStream::IsFormatSensitiveClient )
                    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a3);
                  else
                    IsFormatSensitiveClient = v102(a3);
                  v104 = IsFormatSensitiveClient;
                  v105 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a3 + 136LL);
                  if ( v105 == CAudioStream::IsStrictPeriodicityClient )
                    IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(a3);
                  else
                    IsStrictPeriodicityClient = v105(a3);
                  v107 = IsStrictPeriodicityClient;
                  wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v208);
                  v201 = v80;
                  v108 = v212;
                  SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                                 v109,
                                                 v212,
                                                 (unsigned __int16 **)v217,
                                                 a10,
                                                 a11,
                                                 (unsigned __int64)pData,
                                                 v201,
                                                 Srca,
                                                 v101,
                                                 v213,
                                                 v107,
                                                 v104,
                                                 &v208);
                  v29 = SaDeviceForOffloadedStream;
                  if ( SaDeviceForOffloadedStream >= 0 )
                  {
                    v79 = v236;
LABEL_114:
                    if ( v207 )
                    {
                      v111 = v213;
                      _InterlockedExchange((volatile __int32 *)v213 + 63, 0);
                      v96 = v216;
                    }
                    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
                      McTemplateU0(v111, &AudioResourceManager_SaDevice_Created);
                    v112 = (const unsigned __int16 **)operator new(
                                                        0x10uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
                    if ( v112 )
                    {
                      *v112 = 0LL;
                      *(_DWORD *)v112 = 0;
                      v112[1] = 0LL;
                    }
                    else
                    {
                      v112 = 0LL;
                    }
                    v113 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct AuxiliaryInputDescriptor *))(*(_QWORD *)v210 + 280LL);
                    if ( v113 == CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor )
                      AuxiliaryInputDescriptor = CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
                                                   v210,
                                                   (struct AuxiliaryInputDescriptor *)v112);
                    else
                      AuxiliaryInputDescriptor = v113(v210, (struct AuxiliaryInputDescriptor *)v112);
                    if ( AuxiliaryInputDescriptor < 0 )
                    {
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x5CF,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)(unsigned int)AuxiliaryInputDescriptor,
                        cDatae);
                    }
                    else if ( *(_DWORD *)v112 == 1 )
                    {
                      memset(v347, 0, sizeof(v347));
                      CAudioResourceManager::CreateInternalLoopbackStream(
                        v185,
                        v112[1],
                        v210,
                        (struct SYSTEM_AUDIO_STREAM *)v347);
                      v186 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *, _BYTE *, const unsigned __int16 *))(*(_QWORD *)v210 + 288LL))(
                               v210,
                               v347,
                               v112[1]);
                      v29 = v186;
                      if ( v186 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr_NoOriginate(
                          retaddr,
                          (void *)0x5D5,
                          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                          (const char *)(unsigned int)v186,
                          cDatae);
                        AuxiliaryInputDescriptor::`scalar deleting destructor'((AuxiliaryInputDescriptor *)v112, v187);
LABEL_300:
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v216);
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v213);
LABEL_301:
                        v179 = v217;
                        if ( !v217 )
                          goto LABEL_323;
                        goto LABEL_266;
                      }
                    }
                    if ( v112 )
                    {
                      CoTaskMemFree((LPVOID)v112[1]);
                      v112[1] = 0LL;
                      operator delete(v112, (const struct std::nothrow_t *)0x10);
                    }
                    v115 = v210;
                    v116 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v210 + 224LL);
                    if ( v116 == CBaseStreamGroupProxy::IsPeriodicitySensitive )
                    {
                      IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(v210);
                    }
                    else
                    {
                      IsPeriodicitySensitive = v116(v210);
                      v115 = v210;
                    }
                    v118 = !IsPeriodicitySensitive;
                    v119 = *(__int64 (__fastcall **)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *, _BOOL8))(*(_QWORD *)g_DeviceGraphManager + 40LL);
                    cDatad = (unsigned int)v214;
                    if ( (char *)v119 == (char *)CDeviceGraphManager::ConnectStreamGroupToSaDevice )
                      v120 = CDeviceGraphManager::ConnectStreamGroupToSaDevice(g_DeviceGraphManager, v115, v208, v118);
                    else
                      v120 = v119(g_DeviceGraphManager, v115, v208, v118);
                    v29 = v120;
                    if ( v120 >= 0 )
                    {
                      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
                        McTemplateU0(v121, &AudioResourceManager_SaDevice_Connected);
                      v122 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v96 + 16LL);
                      if ( (char *)v122 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
                        ATL::CComObject<CAudioSessionManagerProvider>::Release(v96);
                      else
                        v122(v96);
                      if ( v213 )
                      {
                        v123 = *(void (**)(void))(*(_QWORD *)v213 + 16LL);
                        if ( (char *)v123 == (char *)CAudioSessionManager::Release )
                          CAudioSessionManager::Release(v213);
                        else
                          v123();
                      }
                      v124 = v217;
                      if ( v217 )
                      {
                        CoTaskMemFree(*((LPVOID *)v217 + 3));
                        *((_QWORD *)v124 + 3) = 0LL;
                        CoTaskMemFree(*((LPVOID *)v124 + 2));
                        *((_QWORD *)v124 + 2) = 0LL;
                        CoTaskMemFree(*(LPVOID *)v124);
                        *(_QWORD *)v124 = 0LL;
                        operator delete(v124, (const struct std::nothrow_t *)0x68);
                      }
                      v125 = (const struct SaDeviceParams **)v208;
LABEL_141:
                      if ( v125 )
                      {
                        v257 = 0LL;
                        *(_QWORD *)v284 = &v257;
                        v285 = 0LL;
                        v286 = 1;
                        v126 = (__int64 (__fastcall *)(const struct SaDeviceParams **, struct SaDeviceParams **))*((_QWORD *)*v125 + 13);
                        if ( v126 == CSaDeviceProxy::GetSaDeviceParams )
                          SaDeviceParams = CSaDeviceProxy::GetSaDeviceParams(v125, &v285);
                        else
                          SaDeviceParams = v126(v125, &v285);
                        v128 = SaDeviceParams >= 0;
                        if ( v286 )
                        {
                          v129 = v284[0];
                          v130 = **(SaDeviceParams ***)v284;
                          **(_QWORD **)v284 = v285;
                          if ( v130 )
                            SaDeviceParams::`scalar deleting destructor'(v130, v129);
                        }
                        if ( v128 )
                        {
                          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v237, &v276);
                          if ( v237 )
                          {
                            v329 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
                            v276 = qword_18014C2B8;
                            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
                            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                            v330 = 0;
                            wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v329);
                          }
                          v131 = *((_QWORD *)v276 + 1);
                          if ( *(_DWORD *)v131 > 4u
                            && (*(_QWORD *)(v131 + 16) & 0x400000000000LL) != 0
                            && (*(_QWORD *)(v131 + 24) & 0x400000000000LL) == *(_QWORD *)(v131 + 24) )
                          {
                            v354 = a16;
                            v355 = 16LL;
                            v356 = (char *)v257 + 80;
                            v238 = *((_DWORD *)v108 + 37);
                            v358 = &v238;
                            v132 = *(_QWORD *)a3;
                            v357 = 16LL;
                            v359 = 4LL;
                            v133 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(v132 + 80);
                            if ( v133 == CAudioStream::GetUniqueStreamIdentifier )
                              v134 = CAudioStream::GetUniqueStreamIdentifier(a3);
                            else
                              v134 = v133(a3);
                            v277 = v134;
                            v360 = &v277;
                            v361 = 8LL;
                            v325[1] = 4;
                            v348 = *(unsigned __int16 **)(v131 + 8);
                            v325[0] = ((unsigned int)&unk_18010FE3F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                            v135 = *(_QWORD *)(v131 + 32);
                            v326 = 0x400000000000LL;
                            v349 = *v348;
                            v351 = &unk_18010FE4A;
                            v350 = 2;
                            v352 = 61;
                            v353 = 1;
                            EtwEventWriteTransfer(v135, v325, 0LL, 0LL, 6, &v348);
                          }
                        }
                        v136 = v257;
                        if ( v257 )
                        {
                          CoTaskMemFree(*((LPVOID *)v257 + 3));
                          *((_QWORD *)v136 + 3) = 0LL;
                          CoTaskMemFree(*((LPVOID *)v136 + 2));
                          *((_QWORD *)v136 + 2) = 0LL;
                          CoTaskMemFree(*(LPVOID *)v136);
                          *(_QWORD *)v136 = 0LL;
                          operator delete(v136, (const struct std::nothrow_t *)0x68);
                        }
                        v125 = (const struct SaDeviceParams **)v208;
                      }
                      v137 = v214;
                      if ( (a10 & 0x400000) == 0 && (!v214 || *((_DWORD *)v214 + 22) || !v79) )
                        goto LABEL_163;
                      v188 = v210;
                      v223 = 0LL;
                      wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v223);
                      v189 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *, __int64 *))(*(_QWORD *)v188 + 208LL))(
                               v188,
                               &v223);
                      v29 = v189;
                      if ( v189 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr_NoOriginate(
                          retaddr,
                          (void *)0x600,
                          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                          (const char *)(unsigned int)v189,
                          cDatad);
LABEL_322:
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v223);
                        goto LABEL_323;
                      }
                      if ( v223 )
                      {
                        v225 = 0LL;
                        v190 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v223 + 56LL))(v223, &v225);
                        v29 = v190;
                        if ( v190 < 0 )
                        {
                          v191 = 1540LL;
LABEL_320:
                          wil::details::in1diag3::Return_Hr_NoOriginate(
                            retaddr,
                            (void *)v191,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            (const char *)(unsigned int)v190,
                            cDatad);
                          goto LABEL_321;
                        }
                        v192 = RpcImpersonateClient(0LL);
                        if ( v192 )
                        {
                          v29 = wil::details::in1diag3::Return_Win32(
                                  retaddr,
                                  (void *)0x609,
                                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                                  (const char *)v192,
                                  cDatad);
LABEL_321:
                          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v225);
                          goto LABEL_322;
                        }
                        v193 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v225 + 32LL))(
                                 v225,
                                 a17,
                                 (__int64)v137 + 72,
                                 (__int64)v137 + 80);
                        v29 = v193;
                        if ( v193 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr_NoOriginate(
                            retaddr,
                            (void *)0x60C,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            (const char *)(unsigned int)v193,
                            cDatad);
                          RpcRevertToSelf();
                          goto LABEL_321;
                        }
                        RpcRevertToSelf();
                        if ( *((_QWORD *)v137 + 9) )
                        {
                          if ( ConnectorTypeForStream == eOffloadConnector )
                          {
                            v190 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)v278 + 32LL))(
                                     v278,
                                     v225);
                            v29 = v190;
                            if ( v190 < 0 )
                            {
                              v191 = 1558LL;
                              goto LABEL_320;
                            }
                          }
                        }
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v225);
                      }
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v223);
                      v125 = (const struct SaDeviceParams **)v208;
LABEL_163:
                      if ( v125 )
                        (*((void (__fastcall **)(const struct SaDeviceParams **))*v125 + 2))(v125);
                      if ( v210 )
                        (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v210 + 16LL))(v210);
                      if ( lpCriticalSection )
                        LeaveCriticalSection(lpCriticalSection);
                      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        WPP_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                          12LL,
                          &WPP_bb65bbd1062e3a5a45659ad203069e3d_Traceguids);
                      }
                      v29 = 0;
                      goto LABEL_172;
                    }
                    v181 = 1505LL;
                    goto LABEL_298;
                  }
                  v183 = 1478LL;
                }
                goto LABEL_287;
              }
LABEL_279:
              wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v208);
              v202 = v80;
              v108 = v212;
              SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                             v182,
                                             v212,
                                             v217,
                                             a10,
                                             AUDCLNT_SHAREMODE_EXCLUSIVE,
                                             (unsigned __int64)pData,
                                             v202,
                                             DoesExclusiveModeOverrideShared,
                                             v224,
                                             v213,
                                             &v208);
              v29 = SaDeviceForOffloadedStream;
              if ( SaDeviceForOffloadedStream >= 0 )
                goto LABEL_114;
              v183 = 1465LL;
LABEL_287:
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)v183,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)SaDeviceForOffloadedStream,
                cDatae);
LABEL_288:
              if ( v207 )
                _InterlockedExchange((volatile __int32 *)v213 + 63, 0);
              goto LABEL_300;
            }
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x55D,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v83,
              cDatad);
          }
        }
LABEL_175:
        if ( pv )
          CoTaskMemFree(pv);
        if ( v226 )
          CoTaskMemFree(v226);
        goto LABEL_179;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x53E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v65,
        cDatab);
    }
LABEL_179:
    if ( v215 )
      CoTaskMemFree(v215);
    if ( v218 )
      CoTaskMemFree(v218);
    if ( v219 )
      CoTaskMemFree(v219);
    if ( v220 )
      CoTaskMemFree(v220);
    goto LABEL_187;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x52E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v33,
    v211);
LABEL_187:
  if ( v314 )
    ((void (__fastcall *)(struct IMMDevice *))v314->lpVtbl->Release)(v314);
LABEL_189:
  if ( v221 )
    CoTaskMemFree(v221);
  return (unsigned int)v29;
}
