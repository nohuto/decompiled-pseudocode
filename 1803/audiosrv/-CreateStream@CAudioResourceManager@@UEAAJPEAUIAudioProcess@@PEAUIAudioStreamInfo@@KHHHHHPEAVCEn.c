/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     McTemplateU0 @ 0x1800021C0 (McTemplateU0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B8A0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018A60 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800199C0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001A800 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B070 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18001D660 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001FE74 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180022930 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180022D60 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18002F700 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002FDF0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180037650 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006339C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x180097F2C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800981C4 (-reset@-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800C18E4 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800C8550 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800CFD24 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D18B0 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D1A70 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?IsOutOfProcOffloadUsed@@YA_N_N@Z @ 0x1800D1CB0 (-IsOutOfProcOffloadUsed@@YA_N_N@Z.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        struct CEndpointCharacteristics *a10,
        unsigned int a11,
        enum _AUDCLNT_SHAREMODE a12,
        struct IAudioGraphCallback *a13,
        struct tWAVEFORMATEX *a14,
        __int64 a15,
        __int64 a16,
        struct _GUID *a17,
        unsigned int a18,
        const unsigned __int16 *a19,
        unsigned int a20,
        unsigned int a21,
        const struct SPATIAL_STREAM_PROPERTIES *a22,
        struct IProcessSubmixProxy *a23,
        struct SYSTEM_AUDIO_STREAM *a24)
{
  struct IProcessSubmixProxy *v25; // r14
  __int64 *v26; // rcx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64 *, unsigned __int16 **); // rax
  int v29; // eax
  int v30; // edi
  struct IMMDevice *v31; // rcx
  bool v32; // zf
  unsigned int v33; // r13d
  void (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // r9
  __int64 v35; // rcx
  int v36; // edi
  int v37; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v38; // edx
  enum _AUDCLNT_SHAREMODE v39; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v40; // ebx
  unsigned int v41; // eax
  void *v42; // rcx
  int v43; // eax
  int v44; // eax
  struct tWAVEFORMATEX *v45; // rcx
  _QWORD *v46; // rbx
  struct tWAVEFORMATEX *v47; // r14
  _QWORD *v48; // rbx
  struct tWAVEFORMATEX *v49; // r14
  struct tWAVEFORMATEX **v50; // rbx
  struct tWAVEFORMATEX *v51; // r14
  struct tWAVEFORMATEX **v52; // rbx
  struct tWAVEFORMATEX *v53; // r14
  const struct _TlgProvider_t *v54; // rcx
  const GUID *v55; // r8
  const GUID *v56; // r9
  WORD wFormatTag; // ax
  __int64 v58; // rdx
  void *v59; // r8
  __int64 v60; // r10
  __int64 v61; // rcx
  LPCGUID v62; // r8
  LPCGUID v63; // r9
  TraceLoggingHProvider v64; // r10
  _DWORD *v65; // rbx
  const struct _TlgProvider_t *v66; // rcx
  const GUID *v67; // r8
  const GUID *v68; // r9
  unsigned __int16 v69; // ax
  LPCGUID v70; // r8
  LPCGUID v71; // r9
  TraceLoggingHProvider v72; // r11
  __int64 v73; // rdx
  void *v74; // r8
  __int64 v75; // r10
  __int64 v76; // rcx
  _DWORD *v77; // rbx
  const struct _TlgProvider_t *v78; // rcx
  const GUID *v79; // r8
  const GUID *v80; // r9
  unsigned __int16 v81; // ax
  LPCGUID v82; // r8
  LPCGUID v83; // r9
  TraceLoggingHProvider v84; // r11
  __int64 v85; // rdx
  void *v86; // r8
  __int64 v87; // r10
  __int64 v88; // rcx
  struct tWAVEFORMATEX *v89; // rbx
  const struct _TlgProvider_t *v90; // rcx
  const GUID *v91; // r8
  const GUID *v92; // r9
  WORD v93; // ax
  LPCGUID v94; // r8
  LPCGUID v95; // r9
  TraceLoggingHProvider v96; // r11
  __int64 v97; // rdx
  void *v98; // r8
  __int64 v99; // r10
  __int64 v100; // rcx
  struct tWAVEFORMATEX *v101; // rbx
  const struct _TlgProvider_t *v102; // rcx
  const GUID *v103; // r8
  const GUID *v104; // r9
  WORD v105; // ax
  LPCGUID v106; // r8
  LPCGUID v107; // r9
  TraceLoggingHProvider v108; // r11
  __int64 v109; // rdx
  void *v110; // r8
  __int64 v111; // r10
  __int64 v112; // rcx
  CAudioStream *v113; // r12
  int v114; // eax
  char v115; // di
  __int64 (__fastcall *v116)(CAudioStream *__hidden); // rax
  __int64 v117; // rax
  LPVOID *v118; // rbx
  void *v119; // r14
  void *v120; // rcx
  LPVOID *v121; // rbx
  void *v122; // r14
  void *v123; // rcx
  char v124; // r14
  char v125; // bl
  bool v126; // cl
  unsigned int v127; // r15d
  CAudioStream *v128; // r13
  int v129; // eax
  __int64 (__fastcall *v130)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  struct IDeviceGraphObjectsStore *v132; // rcx
  _QWORD *(__fastcall *v133)(__int64, LPCRITICAL_SECTION *); // rax
  struct _RTL_CRITICAL_SECTION *v134; // rbx
  __int64 v135; // rax
  __int64 (__fastcall *v136)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  CProcessSubmixProxy *v137; // rcx
  CSharedStreamGroupProxy *v138; // rcx
  struct ISaDeviceProxy **v139; // rbx
  __int64 (__fastcall *v140)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **); // rax
  struct ISaDeviceProxy *v141; // rcx
  char v142; // al
  int v143; // eax
  int v144; // eax
  unsigned int v145; // edx
  SaDeviceParams *v146; // rcx
  unsigned __int64 v147; // r9
  __int64 v148; // rdx
  const struct tWAVEFORMATEX *v149; // rbx
  const struct tWAVEFORMATEX *v150; // rax
  unsigned int v151; // edx
  int v152; // eax
  unsigned int v153; // edx
  SaDeviceParams *v154; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v155; // ebx
  unsigned int v156; // edx
  SaDeviceParams *v157; // rcx
  __int64 v158; // r8
  __int64 v159; // rcx
  __int64 (__fastcall *v160)(__int64, unsigned __int16 *, __int64, GUID *); // rax
  int v161; // eax
  volatile int *v162; // rdx
  CAudioSessionManagerProvider *v163; // rbx
  __int64 v164; // rax
  unsigned int (__fastcall *v165)(__int64, volatile int *); // rax
  __int64 (__fastcall *v166)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  struct CAudioSessionManager *v168; // rcx
  __int64 v169; // rdx
  struct CEndpointCharacteristics *v170; // r15
  bool v171; // di
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // r9
  CAudioResourceManager *v175; // rcx
  int SaDeviceForOffloadedStream; // eax
  struct CAudioSessionManager *v177; // rcx
  CAudioResourceManager *v178; // rcx
  __int64 v179; // rax
  bool v180; // r15
  char v181; // r14
  bool (__fastcall *v182)(CAudioStream *__hidden); // rax
  bool v183; // di
  CAudioResourceManager *v184; // rcx
  void *v185; // r14
  __int64 (__fastcall *v186)(CSharedStreamGroupProxy *, unsigned __int16 **); // rax
  int AuxiliaryInputDescriptor; // eax
  int v188; // eax
  unsigned int v189; // edx
  CSharedStreamGroupProxy *v190; // rdx
  bool (__fastcall *v191)(CBaseStreamGroupProxy *); // rax
  bool v192; // al
  _BOOL8 v193; // r9
  __int64 (__fastcall *v194)(__int64, __int64, __int64, unsigned int, __int64); // rax
  int v195; // eax
  __int64 v196; // rcx
  SaDeviceParams *v197; // rbx
  char *v198; // rcx
  struct ISaDeviceProxy *v199; // rcx
  __int64 (__fastcall *v200)(const struct SaDeviceParams **, struct SaDeviceParams **); // rax
  int v201; // eax
  bool v202; // bl
  unsigned int v203; // edx
  SaDeviceParams *v204; // rcx
  __int64 v205; // rdx
  void *v206; // r8
  __int64 v207; // rbx
  __int64 (__fastcall *v208)(CAudioStream *__hidden); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 v210; // rcx
  void *v211; // rbx
  struct SYSTEM_AUDIO_STREAM *v212; // r14
  CSharedStreamGroupProxy *v213; // rbx
  int v214; // eax
  int v215; // eax
  __int64 v216; // rdx
  unsigned int v217; // eax
  int v218; // eax
  int cData; // [rsp+28h] [rbp-100h]
  int cDataa; // [rsp+28h] [rbp-100h]
  int cDatab; // [rsp+28h] [rbp-100h]
  int cDatac; // [rsp+28h] [rbp-100h]
  int cDatad; // [rsp+28h] [rbp-100h]
  unsigned int cDatae; // [rsp+28h] [rbp-100h]
  int cDataf; // [rsp+28h] [rbp-100h]
  int v227; // [rsp+38h] [rbp-F0h]
  int v228; // [rsp+38h] [rbp-F0h]
  CProcessSubmixProxy *Src; // [rsp+40h] [rbp-E8h]
  struct tWAVEFORMATEX **v230; // [rsp+48h] [rbp-E0h]
  int v231; // [rsp+68h] [rbp-C0h]
  char v232; // [rsp+A8h] [rbp-80h]
  struct ISaDeviceProxy *v233; // [rsp+B0h] [rbp-78h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v234; // [rsp+B8h] [rbp-70h]
  CSharedStreamGroupProxy *v235; // [rsp+C0h] [rbp-68h] BYREF
  struct CEndpointCharacteristics *v236; // [rsp+C8h] [rbp-60h]
  struct CAudioSessionManager *v237; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int16 *v238; // [rsp+D8h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v239; // [rsp+E0h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v240; // [rsp+E8h] [rbp-40h] BYREF
  SaDeviceParams *v241; // [rsp+F0h] [rbp-38h] BYREF
  LPVOID v242; // [rsp+F8h] [rbp-30h] BYREF
  LPVOID v243; // [rsp+100h] [rbp-28h] BYREF
  int v244; // [rsp+108h] [rbp-20h] BYREF
  CAudioSessionManagerProvider *v245; // [rsp+110h] [rbp-18h] BYREF
  struct IAudioProcess *v246; // [rsp+118h] [rbp-10h]
  struct SYSTEM_AUDIO_STREAM *v247; // [rsp+120h] [rbp-8h]
  __int64 v248; // [rsp+128h] [rbp+0h] BYREF
  __int64 v249; // [rsp+130h] [rbp+8h] BYREF
  LPVOID v250; // [rsp+138h] [rbp+10h] BYREF
  SaDeviceParams *v251; // [rsp+140h] [rbp+18h] BYREF
  CSharedStreamGroupProxy *v252; // [rsp+148h] [rbp+20h] BYREF
  LPVOID v253; // [rsp+150h] [rbp+28h] BYREF
  bool v254[8]; // [rsp+158h] [rbp+30h] BYREF
  unsigned int v255; // [rsp+160h] [rbp+38h]
  int v256; // [rsp+168h] [rbp+40h] BYREF
  int v257; // [rsp+16Ch] [rbp+44h]
  WINBOOL v258; // [rsp+170h] [rbp+48h] BYREF
  int v259; // [rsp+174h] [rbp+4Ch] BYREF
  int v260; // [rsp+178h] [rbp+50h] BYREF
  int v261; // [rsp+17Ch] [rbp+54h] BYREF
  WINBOOL fPending; // [rsp+180h] [rbp+58h] BYREF
  int v263; // [rsp+184h] [rbp+5Ch] BYREF
  int v264; // [rsp+188h] [rbp+60h] BYREF
  WINBOOL v265; // [rsp+18Ch] [rbp+64h] BYREF
  unsigned int v266; // [rsp+190h] [rbp+68h]
  int v267; // [rsp+194h] [rbp+6Ch] BYREF
  int v268; // [rsp+198h] [rbp+70h] BYREF
  WINBOOL v269; // [rsp+19Ch] [rbp+74h] BYREF
  int v270; // [rsp+1A0h] [rbp+78h] BYREF
  int v271; // [rsp+1A4h] [rbp+7Ch] BYREF
  WINBOOL v272; // [rsp+1A8h] [rbp+80h] BYREF
  int v273; // [rsp+1ACh] [rbp+84h] BYREF
  __int64 v274; // [rsp+1B0h] [rbp+88h] BYREF
  LPVOID pv; // [rsp+1B8h] [rbp+90h] BYREF
  LPVOID Context; // [rsp+1C0h] [rbp+98h] BYREF
  LPVOID v277; // [rsp+1C8h] [rbp+A0h] BYREF
  LPVOID v278; // [rsp+1D0h] [rbp+A8h] BYREF
  LPVOID v279; // [rsp+1D8h] [rbp+B0h] BYREF
  LPVOID v280; // [rsp+1E0h] [rbp+B8h] BYREF
  LPVOID v281; // [rsp+1E8h] [rbp+C0h] BYREF
  void *v282; // [rsp+1F0h] [rbp+C8h] BYREF
  LPCRITICAL_SECTION v283; // [rsp+1F8h] [rbp+D0h] BYREF
  __int64 v284; // [rsp+200h] [rbp+D8h] BYREF
  WINBOOL v285[4]; // [rsp+208h] [rbp+E0h] BYREF
  GUID v286; // [rsp+218h] [rbp+F0h] BYREF
  struct IProcessSubmixProxy *v287; // [rsp+228h] [rbp+100h]
  CAudioStream *v288; // [rsp+230h] [rbp+108h]
  CAudioResourceManager *v289; // [rsp+238h] [rbp+110h]
  struct IAudioGraphCallback *v290; // [rsp+240h] [rbp+118h]
  struct IMMDevice *v291; // [rsp+248h] [rbp+120h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+250h] [rbp+128h] BYREF
  char v293; // [rsp+258h] [rbp+130h]
  GUID v294; // [rsp+268h] [rbp+140h] BYREF
  unsigned int v295[2]; // [rsp+278h] [rbp+150h]
  struct SaDeviceParams *v296; // [rsp+280h] [rbp+158h] BYREF
  char v297; // [rsp+288h] [rbp+160h]
  struct CAudioSessionManager **v298; // [rsp+290h] [rbp+168h]
  struct CAudioSessionManager *v299; // [rsp+298h] [rbp+170h] BYREF
  char v300; // [rsp+2A0h] [rbp+178h]
  struct IDeviceGraphObjectsStore **v301; // [rsp+2A8h] [rbp+180h]
  struct IDeviceGraphObjectsStore *v302; // [rsp+2B0h] [rbp+188h] BYREF
  char v303; // [rsp+2B8h] [rbp+190h]
  LPVOID *v304; // [rsp+2C0h] [rbp+198h]
  struct tWAVEFORMATEX *v305; // [rsp+2C8h] [rbp+1A0h] BYREF
  char v306; // [rsp+2D0h] [rbp+1A8h]
  LPVOID *v307; // [rsp+2D8h] [rbp+1B0h]
  struct tWAVEFORMATEX *v308; // [rsp+2E0h] [rbp+1B8h] BYREF
  char v309; // [rsp+2E8h] [rbp+1C0h]
  struct tWAVEFORMATEX **v310; // [rsp+2F0h] [rbp+1C8h]
  struct tWAVEFORMATEX *v311; // [rsp+2F8h] [rbp+1D0h] BYREF
  char v312; // [rsp+300h] [rbp+1D8h]
  struct tWAVEFORMATEX **v313; // [rsp+308h] [rbp+1E0h]
  struct tWAVEFORMATEX *v314; // [rsp+310h] [rbp+1E8h] BYREF
  char v315; // [rsp+318h] [rbp+1F0h]
  LPVOID *v316; // [rsp+320h] [rbp+1F8h]
  LPVOID v317; // [rsp+328h] [rbp+200h] BYREF
  char v318; // [rsp+330h] [rbp+208h]
  LPVOID *v319; // [rsp+338h] [rbp+210h]
  LPVOID v320; // [rsp+340h] [rbp+218h] BYREF
  char v321; // [rsp+348h] [rbp+220h]
  unsigned int v322[2]; // [rsp+350h] [rbp+228h]
  __int64 v323; // [rsp+358h] [rbp+230h] BYREF
  char v324; // [rsp+360h] [rbp+238h]
  unsigned int v325[2]; // [rsp+368h] [rbp+240h]
  struct SaDeviceParams *v326; // [rsp+370h] [rbp+248h] BYREF
  char v327; // [rsp+378h] [rbp+250h]
  PROPVARIANT v328; // [rsp+380h] [rbp+258h] BYREF
  __int64 v329; // [rsp+388h] [rbp+260h]
  __int64 v330; // [rsp+390h] [rbp+268h]
  __int64 v331; // [rsp+398h] [rbp+270h] BYREF
  _DWORD v332[2]; // [rsp+3A0h] [rbp+278h] BYREF
  __int64 v333; // [rsp+3A8h] [rbp+280h]
  _DWORD v334[2]; // [rsp+3B0h] [rbp+288h] BYREF
  __int64 v335; // [rsp+3B8h] [rbp+290h]
  _DWORD v336[2]; // [rsp+3C0h] [rbp+298h] BYREF
  __int64 v337; // [rsp+3C8h] [rbp+2A0h]
  _DWORD v338[2]; // [rsp+3D0h] [rbp+2A8h] BYREF
  __int64 v339; // [rsp+3D8h] [rbp+2B0h]
  _DWORD v340[2]; // [rsp+3E0h] [rbp+2B8h] BYREF
  __int64 v341; // [rsp+3E8h] [rbp+2C0h]
  GUID v342; // [rsp+3F8h] [rbp+2D0h] BYREF
  _DWORD v343[2]; // [rsp+408h] [rbp+2E0h] BYREF
  __int64 v344; // [rsp+410h] [rbp+2E8h]
  PROPVARIANT pvar[3]; // [rsp+418h] [rbp+2F0h] BYREF
  union _RTL_RUN_ONCE *v346; // [rsp+430h] [rbp+308h] BYREF
  int v347; // [rsp+438h] [rbp+310h]
  union _RTL_RUN_ONCE *v348; // [rsp+440h] [rbp+318h] BYREF
  int v349; // [rsp+448h] [rbp+320h]
  union _RTL_RUN_ONCE *v350; // [rsp+450h] [rbp+328h] BYREF
  int v351; // [rsp+458h] [rbp+330h]
  union _RTL_RUN_ONCE *v352; // [rsp+460h] [rbp+338h] BYREF
  int v353; // [rsp+468h] [rbp+340h]
  union _RTL_RUN_ONCE *v354; // [rsp+470h] [rbp+348h] BYREF
  int v355; // [rsp+478h] [rbp+350h]
  GUID v356; // [rsp+488h] [rbp+360h] BYREF
  GUID v357; // [rsp+498h] [rbp+370h] BYREF
  union _RTL_RUN_ONCE *v358; // [rsp+4A8h] [rbp+380h] BYREF
  int v359; // [rsp+4B0h] [rbp+388h]
  struct _GUID v360; // [rsp+4B8h] [rbp+390h] BYREF
  struct _GUID v361; // [rsp+4C8h] [rbp+3A0h] BYREF
  struct _GUID v362; // [rsp+4D8h] [rbp+3B0h] BYREF
  struct _GUID v363; // [rsp+4E8h] [rbp+3C0h] BYREF
  struct _GUID v364; // [rsp+4F8h] [rbp+3D0h] BYREF
  struct _GUID v365; // [rsp+508h] [rbp+3E0h] BYREF
  struct _GUID v366; // [rsp+518h] [rbp+3F0h] BYREF
  struct _GUID v367; // [rsp+528h] [rbp+400h] BYREF
  struct _GUID v368; // [rsp+538h] [rbp+410h] BYREF
  GUID v369; // [rsp+548h] [rbp+420h] BYREF
  GUID v370; // [rsp+558h] [rbp+430h] BYREF
  GUID v371; // [rsp+568h] [rbp+440h] BYREF
  GUID v372; // [rsp+578h] [rbp+450h] BYREF
  GUID v373; // [rsp+588h] [rbp+460h] BYREF
  GUID v374; // [rsp+598h] [rbp+470h] BYREF
  GUID v375; // [rsp+5A8h] [rbp+480h] BYREF
  unsigned __int16 *v376; // [rsp+5B8h] [rbp+490h] BYREF
  int v377; // [rsp+5C0h] [rbp+498h]
  int v378; // [rsp+5C4h] [rbp+49Ch]
  void *v379; // [rsp+5C8h] [rbp+4A0h]
  int v380; // [rsp+5D0h] [rbp+4A8h]
  int v381; // [rsp+5D4h] [rbp+4ACh]
  struct _GUID *v382; // [rsp+5D8h] [rbp+4B0h]
  __int64 v383; // [rsp+5E0h] [rbp+4B8h]
  char *v384; // [rsp+5E8h] [rbp+4C0h]
  __int64 v385; // [rsp+5F0h] [rbp+4C8h]
  int *v386; // [rsp+5F8h] [rbp+4D0h]
  __int64 v387; // [rsp+600h] [rbp+4D8h]
  __int64 *v388; // [rsp+608h] [rbp+4E0h]
  __int64 v389; // [rsp+610h] [rbp+4E8h]
  unsigned __int16 *v390; // [rsp+618h] [rbp+4F0h] BYREF
  int v391; // [rsp+620h] [rbp+4F8h]
  int v392; // [rsp+624h] [rbp+4FCh]
  void *v393; // [rsp+628h] [rbp+500h]
  int v394; // [rsp+630h] [rbp+508h]
  int v395; // [rsp+634h] [rbp+50Ch]
  const WCHAR *v396; // [rsp+638h] [rbp+510h]
  __int64 v397; // [rsp+640h] [rbp+518h]
  WORD *v398; // [rsp+648h] [rbp+520h]
  __int64 v399; // [rsp+650h] [rbp+528h]
  DWORD *v400; // [rsp+658h] [rbp+530h]
  __int64 v401; // [rsp+660h] [rbp+538h]
  DWORD *v402; // [rsp+668h] [rbp+540h]
  __int64 v403; // [rsp+670h] [rbp+548h]
  GUID *v404; // [rsp+678h] [rbp+550h]
  __int64 v405; // [rsp+680h] [rbp+558h]
  unsigned __int16 *v406; // [rsp+688h] [rbp+560h] BYREF
  int v407; // [rsp+690h] [rbp+568h]
  int v408; // [rsp+694h] [rbp+56Ch]
  void *v409; // [rsp+698h] [rbp+570h]
  int v410; // [rsp+6A0h] [rbp+578h]
  int v411; // [rsp+6A4h] [rbp+57Ch]
  const WCHAR *v412; // [rsp+6A8h] [rbp+580h]
  __int64 v413; // [rsp+6B0h] [rbp+588h]
  char *v414; // [rsp+6B8h] [rbp+590h]
  __int64 v415; // [rsp+6C0h] [rbp+598h]
  char *v416; // [rsp+6C8h] [rbp+5A0h]
  __int64 v417; // [rsp+6D0h] [rbp+5A8h]
  char *v418; // [rsp+6D8h] [rbp+5B0h]
  __int64 v419; // [rsp+6E0h] [rbp+5B8h]
  char *v420; // [rsp+6E8h] [rbp+5C0h]
  __int64 v421; // [rsp+6F0h] [rbp+5C8h]
  int *v422; // [rsp+6F8h] [rbp+5D0h]
  __int64 v423; // [rsp+700h] [rbp+5D8h]
  unsigned __int16 *v424; // [rsp+708h] [rbp+5E0h] BYREF
  int v425; // [rsp+710h] [rbp+5E8h]
  int v426; // [rsp+714h] [rbp+5ECh]
  void *v427; // [rsp+718h] [rbp+5F0h]
  int v428; // [rsp+720h] [rbp+5F8h]
  int v429; // [rsp+724h] [rbp+5FCh]
  const WCHAR *v430; // [rsp+728h] [rbp+600h]
  __int64 v431; // [rsp+730h] [rbp+608h]
  char *v432; // [rsp+738h] [rbp+610h]
  __int64 v433; // [rsp+740h] [rbp+618h]
  char *v434; // [rsp+748h] [rbp+620h]
  __int64 v435; // [rsp+750h] [rbp+628h]
  char *v436; // [rsp+758h] [rbp+630h]
  __int64 v437; // [rsp+760h] [rbp+638h]
  char *v438; // [rsp+768h] [rbp+640h]
  __int64 v439; // [rsp+770h] [rbp+648h]
  int *v440; // [rsp+778h] [rbp+650h]
  __int64 v441; // [rsp+780h] [rbp+658h]
  unsigned __int16 *v442; // [rsp+788h] [rbp+660h] BYREF
  int v443; // [rsp+790h] [rbp+668h]
  int v444; // [rsp+794h] [rbp+66Ch]
  void *v445; // [rsp+798h] [rbp+670h]
  int v446; // [rsp+7A0h] [rbp+678h]
  int v447; // [rsp+7A4h] [rbp+67Ch]
  const WCHAR *v448; // [rsp+7A8h] [rbp+680h]
  __int64 v449; // [rsp+7B0h] [rbp+688h]
  WORD *v450; // [rsp+7B8h] [rbp+690h]
  __int64 v451; // [rsp+7C0h] [rbp+698h]
  DWORD *v452; // [rsp+7C8h] [rbp+6A0h]
  __int64 v453; // [rsp+7D0h] [rbp+6A8h]
  DWORD *v454; // [rsp+7D8h] [rbp+6B0h]
  __int64 v455; // [rsp+7E0h] [rbp+6B8h]
  char *v456; // [rsp+7E8h] [rbp+6C0h]
  __int64 v457; // [rsp+7F0h] [rbp+6C8h]
  int *v458; // [rsp+7F8h] [rbp+6D0h]
  __int64 v459; // [rsp+800h] [rbp+6D8h]
  unsigned __int16 *v460; // [rsp+808h] [rbp+6E0h] BYREF
  int v461; // [rsp+810h] [rbp+6E8h]
  int v462; // [rsp+814h] [rbp+6ECh]
  void *v463; // [rsp+818h] [rbp+6F0h]
  int v464; // [rsp+820h] [rbp+6F8h]
  int v465; // [rsp+824h] [rbp+6FCh]
  const WCHAR *v466; // [rsp+828h] [rbp+700h]
  __int64 v467; // [rsp+830h] [rbp+708h]
  WORD *v468; // [rsp+838h] [rbp+710h]
  __int64 v469; // [rsp+840h] [rbp+718h]
  DWORD *v470; // [rsp+848h] [rbp+720h]
  __int64 v471; // [rsp+850h] [rbp+728h]
  DWORD *v472; // [rsp+858h] [rbp+730h]
  __int64 v473; // [rsp+860h] [rbp+738h]
  char *v474; // [rsp+868h] [rbp+740h]
  __int64 v475; // [rsp+870h] [rbp+748h]
  int *v476; // [rsp+878h] [rbp+750h]
  __int64 v477; // [rsp+880h] [rbp+758h]
  EVENT_DATA_DESCRIPTOR v478; // [rsp+888h] [rbp+760h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+8A8h] [rbp+780h] BYREF
  WORD *p_nChannels; // [rsp+8B8h] [rbp+790h]
  __int64 v481; // [rsp+8C0h] [rbp+798h]
  DWORD *p_nSamplesPerSec; // [rsp+8C8h] [rbp+7A0h]
  __int64 v483; // [rsp+8D0h] [rbp+7A8h]
  DWORD *p_nAvgBytesPerSec; // [rsp+8D8h] [rbp+7B0h]
  __int64 v485; // [rsp+8E0h] [rbp+7B8h]
  char *v486; // [rsp+8E8h] [rbp+7C0h]
  __int64 v487; // [rsp+8F0h] [rbp+7C8h]
  int *v488; // [rsp+8F8h] [rbp+7D0h]
  __int64 v489; // [rsp+900h] [rbp+7D8h]
  EVENT_DATA_DESCRIPTOR v490; // [rsp+908h] [rbp+7E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v491; // [rsp+928h] [rbp+800h] BYREF
  char *v492; // [rsp+938h] [rbp+810h]
  __int64 v493; // [rsp+940h] [rbp+818h]
  char *v494; // [rsp+948h] [rbp+820h]
  __int64 v495; // [rsp+950h] [rbp+828h]
  char *v496; // [rsp+958h] [rbp+830h]
  __int64 v497; // [rsp+960h] [rbp+838h]
  GUID *v498; // [rsp+968h] [rbp+840h]
  __int64 v499; // [rsp+970h] [rbp+848h]
  EVENT_DATA_DESCRIPTOR v500; // [rsp+978h] [rbp+850h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v501; // [rsp+998h] [rbp+870h] BYREF
  char *v502; // [rsp+9A8h] [rbp+880h]
  __int64 v503; // [rsp+9B0h] [rbp+888h]
  char *v504; // [rsp+9B8h] [rbp+890h]
  __int64 v505; // [rsp+9C0h] [rbp+898h]
  char *v506; // [rsp+9C8h] [rbp+8A0h]
  __int64 v507; // [rsp+9D0h] [rbp+8A8h]
  GUID *v508; // [rsp+9D8h] [rbp+8B0h]
  __int64 v509; // [rsp+9E0h] [rbp+8B8h]
  EVENT_DATA_DESCRIPTOR v510; // [rsp+9E8h] [rbp+8C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v511; // [rsp+A08h] [rbp+8E0h] BYREF
  WORD *v512; // [rsp+A18h] [rbp+8F0h]
  __int64 v513; // [rsp+A20h] [rbp+8F8h]
  DWORD *v514; // [rsp+A28h] [rbp+900h]
  __int64 v515; // [rsp+A30h] [rbp+908h]
  DWORD *v516; // [rsp+A38h] [rbp+910h]
  __int64 v517; // [rsp+A40h] [rbp+918h]
  GUID *v518; // [rsp+A48h] [rbp+920h]
  __int64 v519; // [rsp+A50h] [rbp+928h]
  EVENT_DATA_DESCRIPTOR v520; // [rsp+A58h] [rbp+930h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v521; // [rsp+A78h] [rbp+950h] BYREF
  WORD *v522; // [rsp+A88h] [rbp+960h]
  __int64 v523; // [rsp+A90h] [rbp+968h]
  DWORD *v524; // [rsp+A98h] [rbp+970h]
  __int64 v525; // [rsp+AA0h] [rbp+978h]
  DWORD *v526; // [rsp+AA8h] [rbp+980h]
  __int64 v527; // [rsp+AB0h] [rbp+988h]
  GUID *v528; // [rsp+AB8h] [rbp+990h]
  __int64 v529; // [rsp+AC0h] [rbp+998h]
  EVENT_DATA_DESCRIPTOR v530; // [rsp+AC8h] [rbp+9A0h] BYREF
  int *v531; // [rsp+AE8h] [rbp+9C0h]
  __int64 v532; // [rsp+AF0h] [rbp+9C8h]
  EVENT_DATA_DESCRIPTOR v533; // [rsp+AF8h] [rbp+9D0h] BYREF
  int *v534; // [rsp+B18h] [rbp+9F0h]
  __int64 v535; // [rsp+B20h] [rbp+9F8h]
  EVENT_DATA_DESCRIPTOR v536; // [rsp+B28h] [rbp+A00h] BYREF
  int *v537; // [rsp+B48h] [rbp+A20h]
  __int64 v538; // [rsp+B50h] [rbp+A28h]
  EVENT_DATA_DESCRIPTOR v539; // [rsp+B58h] [rbp+A30h] BYREF
  int *v540; // [rsp+B78h] [rbp+A50h]
  __int64 v541; // [rsp+B80h] [rbp+A58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B88h] [rbp+A60h] BYREF
  int *v543; // [rsp+BA8h] [rbp+A80h]
  __int64 v544; // [rsp+BB0h] [rbp+A88h]
  wil::details::in1diag3 *retaddr; // [rsp+C10h] [rbp+AE8h]

  v290 = a13;
  v247 = a24;
  v25 = a23;
  v289 = this;
  v26 = (__int64 *)*((_QWORD *)a10 + 2);
  v238 = 0LL;
  v246 = a2;
  v27 = *v26;
  v257 = a4;
  v288 = a3;
  v28 = *(__int64 (__fastcall **)(__int64 *, unsigned __int16 **))(v27 + 40);
  v236 = a10;
  v287 = a23;
  v29 = v28(v26, &v238);
  v30 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v29,
      cData);
    goto LABEL_347;
  }
  v31 = (struct IMMDevice *)*((_QWORD *)a10 + 2);
  v32 = *((_DWORD *)a10 + 37) == 0;
  v33 = 1;
  v291 = v31;
  if ( v32 )
    v33 = HIWORD(a11) & 2;
  ((void (__fastcall *)(struct IMMDevice *))v31->lpVtbl->AddRef)(v31);
  v34 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a10 + 2);
  v35 = 0LL;
  v244 = 0;
  v274 = 0LL;
  if ( v34 )
  {
    (**v34)(v34, &GUID_419e19f7_d318_4c05_b705_2f17133c55da, &v274);
    v35 = v274;
    if ( v274 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v274 + 88LL))(v274, &v244);
      v35 = v274;
    }
  }
  v36 = v244;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  memset(pvar, 0, sizeof(pvar));
  v37 = 1;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v236 + 4) + 40LL))(
         *((_QWORD *)v236 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v37 = 0;
  }
  PropVariantClear(pvar);
  v266 = a11 & 0x400000;
  if ( (a11 & 0x400000) != 0 )
  {
    v39 = a12;
    v40 = eKeywordDetectorConnector;
    goto LABEL_28;
  }
  v41 = a11 & 0x20000;
  if ( v25 && v41 )
  {
    v39 = a12;
    v40 = eHostProcessConnector;
    goto LABEL_28;
  }
  if ( v37 && v41 )
  {
    v39 = a12;
    v40 = eLoopbackConnector;
    goto LABEL_28;
  }
  v39 = a12;
  if ( a12 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v42 = 0LL;
    pv = 0LL;
    if ( v36 )
    {
      if ( a14 )
      {
        v43 = IsFormatSupportedByHwAudioEngine(v291, v38, a14, (struct tWAVEFORMATEX **)&pv);
        v42 = pv;
        if ( !v43 )
        {
          CoTaskMemFree(pv);
          v40 = a12;
          goto LABEL_28;
        }
      }
    }
    CoTaskMemFree(v42);
  }
  v40 = ((unsigned __int8)~(_BYTE)a11 >> 1) & 1;
LABEL_28:
  v234 = v40;
  v286 = GUID_00000000_0000_0000_0000_000000000000;
  v294 = GUID_00000000_0000_0000_0000_000000000000;
  v342 = GUID_00000000_0000_0000_0000_000000000000;
  v356 = GUID_00000000_0000_0000_0000_000000000000;
  v44 = DeriveAudioProcessingModeConfiguration(a4, a5, a6, v236, v33, v39, v40, 0, a21, 1, &v286, &v294, &v342, &v356);
  v30 = v44;
  if ( v44 >= 0 )
  {
    v313 = &v239;
    v364 = v286;
    v310 = &v240;
    v304 = &v242;
    v307 = &v243;
    v243 = 0LL;
    v240 = 0LL;
    v242 = 0LL;
    v239 = 0LL;
    v365 = v294;
    v361 = v342;
    v314 = 0LL;
    v315 = 1;
    v311 = 0LL;
    v312 = 1;
    v305 = 0LL;
    v306 = 1;
    v308 = 0LL;
    v309 = 1;
    v30 = DeriveDeviceGraphFormatsForStream(
            v236,
            a8 != 0,
            (struct _GUID *)(unsigned int)v40,
            v39,
            &v361,
            &v365,
            &v364,
            a14,
            &v308,
            &v305,
            &v311,
            &v314);
    if ( v309 )
    {
      v46 = v307;
      v47 = v308;
      v45 = (struct tWAVEFORMATEX *)*v307;
      if ( v308 != *v307 )
      {
        if ( v45 )
          CoTaskMemFree(v45);
        *v46 = v47;
      }
    }
    if ( v306 )
    {
      v48 = v304;
      v49 = v305;
      v45 = (struct tWAVEFORMATEX *)*v304;
      if ( v305 != *v304 )
      {
        if ( v45 )
          CoTaskMemFree(v45);
        *v48 = v49;
      }
    }
    if ( v312 )
    {
      v50 = v310;
      v51 = v311;
      v45 = *v310;
      if ( v311 != *v310 )
      {
        if ( v45 )
          CoTaskMemFree(v45);
        *v50 = v51;
      }
    }
    if ( v315 )
    {
      v52 = v313;
      v53 = v314;
      v45 = *v313;
      if ( v314 != *v313 )
      {
        if ( v45 )
          CoTaskMemFree(v45);
        *v52 = v53;
      }
    }
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x575,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v30,
        cDatab);
LABEL_337:
      if ( v239 )
        CoTaskMemFree(v239);
      if ( v242 )
        CoTaskMemFree(v242);
      if ( v240 )
        CoTaskMemFree(v240);
      if ( v243 )
        CoTaskMemFree(v243);
      goto LABEL_345;
    }
    if ( a14 )
    {
      wFormatTag = a14->wFormatTag;
      if ( a14->wFormatTag == 0xFFFE )
      {
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v45,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, L"WAVEFORMATEXTENSIBLE");
          v481 = 2LL;
          p_nSamplesPerSec = &a14->nSamplesPerSec;
          p_nChannels = &a14->nChannels;
          p_nAvgBytesPerSec = &a14->nAvgBytesPerSec;
          v486 = (char *)&a14[1].nSamplesPerSec + 2;
          v264 = *(_DWORD *)&a14[1].nChannels;
          v488 = &v264;
          v483 = 4LL;
          v485 = 4LL;
          v487 = 16LL;
          v489 = 4LL;
          TlgWrite(v64, &unk_180146F80, v62, v63, 8u, &v478);
        }
      }
      else
      {
        Context = 0LL;
        v372 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v372.Data1 = wFormatTag;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          v346 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          Context = &qword_18018A2A0;
          qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
          qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v347 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v346, v58, v59);
        }
        v60 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v60 > 4u )
        {
          v396 = L"WAVEFORMATEX";
          v398 = &a14->nChannels;
          v400 = &a14->nSamplesPerSec;
          v402 = &a14->nAvgBytesPerSec;
          v404 = &v372;
          v397 = 26LL;
          v399 = 2LL;
          v401 = 4LL;
          v403 = 4LL;
          v405 = 16LL;
          v332[1] = 4;
          v390 = *(unsigned __int16 **)(v60 + 8);
          v332[0] = ((unsigned int)&unk_180147012 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v61 = *(_QWORD *)(v60 + 32);
          v333 = 0LL;
          v391 = *v390;
          v393 = &unk_18014701D;
          v392 = 2;
          v394 = 121;
          v395 = 1;
          EtwEventWriteTransfer(v61, v332, 0LL, 0LL, 7, &v390, v227);
        }
      }
    }
    else
    {
      v54 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)v45,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v54 > 4u )
      {
        v261 = 0;
        v543 = &v261;
        v544 = 4LL;
        TlgWrite(v54, &unk_180147097, v55, v56, 3u, &pData);
      }
    }
    v65 = v243;
    if ( v243 )
    {
      v69 = *(_WORD *)v243;
      if ( *(_WORD *)v243 == 0xFFFE )
      {
        v277 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v265, &v277) && v265 )
        {
          v348 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v277 = &qword_18018A2A0;
          qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
          qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v349 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v348, v73, v74);
        }
        v75 = *((_QWORD *)v277 + 1);
        if ( *(_DWORD *)v75 > 4u )
        {
          v413 = 42LL;
          v412 = L"WAVEFORMATEXTENSIBLE";
          v415 = 2LL;
          v417 = 4LL;
          v419 = 4LL;
          v421 = 16LL;
          v414 = (char *)v243 + 2;
          v416 = (char *)v243 + 4;
          v418 = (char *)v243 + 8;
          v420 = (char *)(v65 + 6);
          v267 = v65[5];
          v422 = &v267;
          v423 = 4LL;
          v334[1] = 4;
          v406 = *(unsigned __int16 **)(v75 + 8);
          v334[0] = ((unsigned int)&unk_180146E17 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v76 = *(_QWORD *)(v75 + 32);
          v335 = 0LL;
          v407 = *v406;
          v409 = &unk_180146E22;
          v408 = 2;
          v410 = 136;
          v411 = 1;
          EtwEventWriteTransfer(v76, v334, 0LL, 0LL, 8, &v406, v227);
        }
      }
      else
      {
        v371 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v371.Data1 = v69;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v54,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v501, L"WAVEFORMATEX");
          v503 = 2LL;
          v505 = 4LL;
          v507 = 4LL;
          v509 = 16LL;
          v502 = (char *)v243 + 2;
          v504 = (char *)v243 + 4;
          v506 = (char *)v243 + 8;
          v508 = &v371;
          TlgWrite(v72, &unk_180146EAB, v70, v71, 7u, &v500);
        }
      }
    }
    else
    {
      v66 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)v54,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v66 > 4u )
      {
        v260 = 0;
        v540 = &v260;
        v541 = 4LL;
        TlgWrite(v66, &unk_180146F32, v67, v68, 3u, &v539);
      }
    }
    v77 = v242;
    if ( v242 )
    {
      v81 = *(_WORD *)v242;
      if ( *(_WORD *)v242 == 0xFFFE )
      {
        v278 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v269, &v278) && v269 )
        {
          v350 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v278 = &qword_18018A2A0;
          qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
          qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v351 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v350, v85, v86);
        }
        v87 = *((_QWORD *)v278 + 1);
        if ( *(_DWORD *)v87 > 4u )
        {
          v431 = 42LL;
          v430 = L"WAVEFORMATEXTENSIBLE";
          v433 = 2LL;
          v435 = 4LL;
          v437 = 4LL;
          v439 = 16LL;
          v432 = (char *)v242 + 2;
          v434 = (char *)v242 + 4;
          v436 = (char *)v242 + 8;
          v438 = (char *)(v77 + 6);
          v270 = v77[5];
          v440 = &v270;
          v441 = 4LL;
          v336[1] = 4;
          v424 = *(unsigned __int16 **)(v87 + 8);
          v336[0] = ((unsigned int)&unk_180146CA5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v88 = *(_QWORD *)(v87 + 32);
          v337 = 0LL;
          v425 = *v424;
          v427 = &unk_180146CB0;
          v426 = 2;
          v428 = 139;
          v429 = 1;
          EtwEventWriteTransfer(v88, v336, 0LL, 0LL, 8, &v424, v227);
        }
      }
      else
      {
        v375 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v375.Data1 = v81;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v66,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v491, L"WAVEFORMATEX");
          v493 = 2LL;
          v495 = 4LL;
          v497 = 4LL;
          v499 = 16LL;
          v492 = (char *)v242 + 2;
          v494 = (char *)v242 + 4;
          v496 = (char *)v242 + 8;
          v498 = &v375;
          TlgWrite(v84, &unk_180146D3C, v82, v83, 7u, &v490);
        }
      }
    }
    else
    {
      v78 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)v66,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v78 > 4u )
      {
        v268 = 0;
        v531 = &v268;
        v532 = 4LL;
        TlgWrite(v78, &unk_180146DC6, v79, v80, 3u, &v530);
      }
    }
    v89 = v240;
    if ( v240 )
    {
      v93 = v240->wFormatTag;
      if ( v240->wFormatTag == 0xFFFE )
      {
        v279 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v272, &v279) && v272 )
        {
          v352 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v279 = &qword_18018A2A0;
          qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
          qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v353 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v352, v97, v98);
        }
        v99 = *((_QWORD *)v279 + 1);
        if ( *(_DWORD *)v99 > 4u )
        {
          v449 = 42LL;
          v448 = L"WAVEFORMATEXTENSIBLE";
          v451 = 2LL;
          v453 = 4LL;
          v455 = 4LL;
          v457 = 16LL;
          v450 = &v240->nChannels;
          v452 = &v240->nSamplesPerSec;
          v454 = &v240->nAvgBytesPerSec;
          v456 = (char *)&v89[1].nSamplesPerSec + 2;
          v273 = *(_DWORD *)&v89[1].nChannels;
          v458 = &v273;
          v459 = 4LL;
          v338[1] = 4;
          v442 = *(unsigned __int16 **)(v99 + 8);
          v338[0] = ((unsigned int)&unk_180146B36 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v100 = *(_QWORD *)(v99 + 32);
          v339 = 0LL;
          v443 = *v442;
          v445 = &unk_180146B41;
          v444 = 2;
          v446 = 138;
          v447 = 1;
          EtwEventWriteTransfer(v100, v338, 0LL, 0LL, 8, &v442, v227);
        }
      }
      else
      {
        v374 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v374.Data1 = v93;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v78,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v511, L"WAVEFORMATEX");
          v513 = 2LL;
          v515 = 4LL;
          v517 = 4LL;
          v519 = 16LL;
          v512 = &v240->nChannels;
          v514 = &v240->nSamplesPerSec;
          v516 = &v240->nAvgBytesPerSec;
          v518 = &v374;
          TlgWrite(v96, &unk_180146BCC, v94, v95, 7u, &v510);
        }
      }
    }
    else
    {
      v90 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                         (__int64)v78,
                                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                           + 1);
      if ( *(_DWORD *)v90 > 4u )
      {
        v271 = 0;
        v534 = &v271;
        v535 = 4LL;
        TlgWrite(v90, &unk_180146C55, v91, v92, 3u, &v533);
      }
    }
    v101 = v239;
    if ( v239 )
    {
      v105 = v239->wFormatTag;
      if ( v239->wFormatTag == 0xFFFE )
      {
        v280 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, v285, &v280) && v285[0] )
        {
          v354 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v280 = &qword_18018A2A0;
          qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
          qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v355 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v354, v109, v110);
        }
        v111 = *((_QWORD *)v280 + 1);
        if ( *(_DWORD *)v111 > 4u )
        {
          v467 = 42LL;
          v466 = L"WAVEFORMATEXTENSIBLE";
          v469 = 2LL;
          v471 = 4LL;
          v473 = 4LL;
          v475 = 16LL;
          v468 = &v239->nChannels;
          v470 = &v239->nSamplesPerSec;
          v472 = &v239->nAvgBytesPerSec;
          v474 = (char *)&v101[1].nSamplesPerSec + 2;
          v256 = *(_DWORD *)&v101[1].nChannels;
          v476 = &v256;
          v477 = 4LL;
          v340[1] = 4;
          v460 = *(unsigned __int16 **)(v111 + 8);
          v340[0] = ((unsigned int)&unk_1801469CA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v112 = *(_QWORD *)(v111 + 32);
          v341 = 0LL;
          v461 = *v460;
          v463 = &unk_1801469D5;
          v462 = 2;
          v464 = 137;
          v465 = 1;
          EtwEventWriteTransfer(v112, v340, 0LL, 0LL, 8, &v460, v227);
        }
      }
      else
      {
        v373 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v373.Data1 = v105;
        if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                             (__int64)v90,
                             lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
              + 1) > 4u )
        {
          TlgCreateWsz(&v521, L"WAVEFORMATEX");
          v523 = 2LL;
          v525 = 4LL;
          v527 = 4LL;
          v529 = 16LL;
          v522 = &v239->nChannels;
          v524 = &v239->nSamplesPerSec;
          v526 = &v239->nAvgBytesPerSec;
          v528 = &v373;
          TlgWrite(v108, &unk_180146A5F, v106, v107, 7u, &v520);
        }
      }
    }
    else
    {
      v102 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                          (__int64)v90,
                                                          lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                            + 1);
      if ( *(_DWORD *)v102 > 4u )
      {
        v263 = 0;
        v537 = &v263;
        v538 = 4LL;
        TlgWrite(v102, &unk_180146AE7, v103, v104, 3u, &v536);
      }
    }
    v113 = v288;
    v366 = v294;
    v367 = v342;
    v368 = v286;
    v114 = DerivePeriodicityForStream(
             v236,
             a14,
             v288,
             a11,
             a12,
             v234,
             v239,
             &v368,
             &v367,
             &v366,
             a7 != 0,
             a8 != 0,
             a15,
             a16,
             v287,
             &a16);
    v30 = v114;
    if ( v114 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x580,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v114,
        cDatac);
      goto LABEL_337;
    }
    v115 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v246 + 368LL))(v246);
    v116 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v113 + 80LL);
    v250 = 0LL;
    v253 = 0LL;
    v369 = v294;
    v370 = v286;
    if ( v116 == CAudioStream::GetUniqueStreamIdentifier )
      v117 = *((_QWORD *)v113 + 67);
    else
      v117 = v116(v113);
    v319 = &v253;
    v320 = 0LL;
    v316 = &v250;
    v321 = 1;
    v317 = 0LL;
    v318 = 1;
    v30 = InitializeStreamAndModeDescriptors(
            (__int64)v236,
            a12,
            a11,
            v33,
            v234,
            &v370,
            &v369,
            a18,
            (__int64)a14,
            (__int64)v243,
            a15,
            a16,
            (__int64)a19,
            a17,
            (__int64)a22,
            v117,
            v115,
            a9 != 0,
            &v317,
            &v320);
    if ( v318 )
    {
      v118 = v316;
      v119 = v317;
      v120 = *v316;
      if ( v317 != *v316 )
      {
        if ( v120 )
          CoTaskMemFree(v120);
        *v118 = v119;
      }
    }
    if ( v321 )
    {
      v121 = v319;
      v122 = v320;
      v123 = *v319;
      if ( v320 != *v319 )
      {
        if ( v123 )
          CoTaskMemFree(v123);
        *v121 = v122;
      }
    }
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v30,
        cDatad);
LABEL_333:
      if ( v253 )
        CoTaskMemFree(v253);
      if ( v250 )
        CoTaskMemFree(v250);
      goto LABEL_337;
    }
    v124 = 0;
    v125 = a12 == AUDCLNT_SHAREMODE_EXCLUSIVE;
    if ( (a11 & 1) != 0 )
    {
      v126 = *((_DWORD *)v250 + 34) || v253 && *((_DWORD *)v253 + 14);
      v124 = IsOutOfProcOffloadUsed(v126);
      if ( !v124 )
        v125 = 1;
    }
    v127 = a20;
    v231 = v33;
    v128 = v288;
    v360 = v356;
    v129 = BuildDeviceGraphForStream(
             (__int64)v236,
             v288,
             (__int64)v246,
             v257,
             a11,
             a12,
             v234,
             Src,
             &v360,
             (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)v250,
             (struct AUDIO_DEVICE_MODE_DESCRIPTOR *)v253,
             v242,
             v231,
             v290,
             a20,
             v125,
             (__int64)v287,
             v247);
    v30 = v129;
    if ( v129 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v129,
        cDatae);
      goto LABEL_333;
    }
    v301 = (struct IDeviceGraphObjectsStore **)&v284;
    v284 = 0LL;
    v302 = 0LL;
    v303 = 1;
    v130 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
    if ( v130 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
      DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v238, &v302);
    else
      DeviceGraphStoreForEndpoint = v130(g_DeviceGraphStore, v238, &v302);
    v30 = DeviceGraphStoreForEndpoint;
    if ( v303 )
    {
      v132 = *v301;
      *v301 = v302;
      if ( v132 )
        (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v132 + 16LL))(v132);
    }
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v30,
        cDatae);
LABEL_331:
      if ( v284 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v284 + 16LL))(v284);
      goto LABEL_333;
    }
    v133 = *(_QWORD *(__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v284 + 112LL);
    if ( (char *)v133 == (char *)CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection )
    {
      v134 = (struct _RTL_CRITICAL_SECTION *)(v284 + 184);
      EnterCriticalSection((LPCRITICAL_SECTION)(v284 + 184));
      v283 = v134;
    }
    else
    {
      v133(v284, &v283);
    }
    v135 = *(_QWORD *)v128;
    v235 = 0LL;
    v136 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(v135 + 120);
    if ( v136 == CAudioStream::GetStreamGroup )
    {
      v137 = (CProcessSubmixProxy *)*((_QWORD *)v128 + 7);
      v136 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v137 + 80LL);
      if ( v136 == CProcessSubmixProxy::GetConnectedStreamGroup )
      {
        v138 = (CSharedStreamGroupProxy *)*((_QWORD *)v137 + 24);
        if ( !v138 )
        {
          v139 = 0LL;
          v235 = 0LL;
LABEL_150:
          v233 = 0LL;
          v140 = (__int64 (__fastcall *)(CBaseStreamGroupProxy *, struct ISaDeviceProxy **))*((_QWORD *)*v139 + 26);
          if ( v140 == CBaseStreamGroupProxy::GetConnectedSaDevice )
          {
            v233 = 0LL;
            v141 = v139[11];
            if ( !v141 )
              goto LABEL_154;
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v141 + 8LL))(v141);
            v233 = v139[11];
          }
          else
          {
            v144 = v140((CBaseStreamGroupProxy *)v139, &v233);
            v30 = v144;
            if ( v144 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x5AB,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v144,
                cDatae);
              goto LABEL_319;
            }
          }
          if ( v233 )
          {
            v142 = 1;
            goto LABEL_162;
          }
LABEL_154:
          v142 = 0;
LABEL_162:
          if ( v142 && (*(unsigned __int8 (__fastcall **)(CAudioStream *))(*(_QWORD *)v128 + 144LL))(v128) )
          {
            *(_QWORD *)v322 = &v251;
            v251 = 0LL;
            v323 = 0LL;
            v324 = 1;
            v30 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)v233 + 104LL))(v233, &v323);
            if ( v324 )
            {
              v145 = v322[0];
              v146 = **(SaDeviceParams ***)v322;
              **(_QWORD **)v322 = v323;
              if ( v146 )
                SaDeviceParams::`scalar deleting destructor'(v146, v145);
            }
            if ( v30 < 0 )
            {
              v147 = (unsigned int)v30;
              v148 = 1465LL;
              goto LABEL_172;
            }
            v149 = (const struct tWAVEFORMATEX *)*((_QWORD *)v251 + 3);
            v150 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CSharedStreamGroupProxy *))(*(_QWORD *)v235 + 112LL))(v235);
            if ( !(unsigned int)CompareWaveFormat(v149, v150) )
            {
              v152 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, CSharedStreamGroupProxy *, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                       g_DeviceGraphManager,
                       v235,
                       v233);
              v30 = v152;
              if ( v152 < 0 )
              {
                v147 = (unsigned int)v152;
                v148 = 1473LL;
LABEL_172:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v148,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)v147,
                  cDatae);
                v154 = v251;
                if ( v251 )
LABEL_173:
                  SaDeviceParams::`scalar deleting destructor'(v154, v153);
LABEL_319:
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v233);
LABEL_320:
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v235);
                if ( v283 )
                  LeaveCriticalSection(v283);
                goto LABEL_331;
              }
              wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v233);
            }
            if ( v251 )
              SaDeviceParams::`scalar deleting destructor'(v251, v151);
          }
          if ( v233 )
          {
            v198 = (char *)v128 - 8;
            if ( !v128 )
              v198 = 0LL;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v198 + 152LL))(v198);
            goto LABEL_278;
          }
          v155 = v234;
          *(_QWORD *)v325 = &v241;
          v241 = 0LL;
          v363 = v294;
          v362 = v286;
          v230 = (struct tWAVEFORMATEX **)*((_QWORD *)v250 + 4);
          v326 = 0LL;
          v327 = 1;
          v30 = DeriveSaDeviceParametersForStream(v236, a12, v234, v124, &v362, &v363, v239, v240, (__int64)v230, &v326);
          if ( v327 )
          {
            v156 = v325[0];
            v157 = **(SaDeviceParams ***)v325;
            **(_QWORD **)v325 = v326;
            if ( v157 )
              SaDeviceParams::`scalar deleting destructor'(v157, v156);
          }
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5CE,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v30,
              cDataf);
            goto LABEL_273;
          }
          *(_QWORD *)v254 = 0LL;
          v158 = *((unsigned int *)v236 + 37);
          v159 = *((_QWORD *)v289 + 5);
          v357 = v286;
          v160 = *(__int64 (__fastcall **)(__int64, unsigned __int16 *, __int64, GUID *))(*(_QWORD *)v159 + 56LL);
          cDatae = v155;
          if ( (char *)v160 == (char *)CConstraintModelResourceManager::AcquireSaDeviceResource )
            v161 = CConstraintModelResourceManager::AcquireSaDeviceResource(v159, v238, v158, &v357);
          else
            v161 = v160(v159, v238, v158, &v357);
          v30 = v161;
          if ( v161 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5D2,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v161,
              v155);
            goto LABEL_271;
          }
          v255 = v127;
          lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
          v237 = 0LL;
          v245 = 0LL;
          v293 = 0;
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
          v163 = g_SingletonAudioSessionManagerProvider;
          if ( !g_SingletonAudioSessionManagerProvider )
          {
            if ( v293 )
              LeaveCriticalSection(lpCriticalSection);
            v30 = -2147467259;
            v169 = 1496LL;
            goto LABEL_269;
          }
          v164 = *(_QWORD *)g_SingletonAudioSessionManagerProvider;
          v245 = g_SingletonAudioSessionManagerProvider;
          v165 = *(unsigned int (__fastcall **)(__int64, volatile int *))(v164 + 8);
          if ( v165 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
            Microsoft::WRL::Details::SafeUnknownIncrementReference(
              (CAudioSessionManagerProvider *)((char *)g_SingletonAudioSessionManagerProvider + 8),
              v162);
          else
            ((void (__fastcall *)(CAudioSessionManagerProvider *))v165)(g_SingletonAudioSessionManagerProvider);
          ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
          v298 = &v237;
          v299 = 0LL;
          v300 = 1;
          v166 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v163 + 40LL);
          if ( v166 == CAudioSessionManagerProvider::GetAudioSessionManager )
            AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v163, v238, &v299);
          else
            AudioSessionManager = v166(v163, v238, &v299);
          v30 = AudioSessionManager;
          if ( v300 )
          {
            v168 = *v298;
            *v298 = v299;
            if ( v168 )
              (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v168 + 16LL))(v168);
          }
          if ( v30 < 0 )
          {
            v169 = 1497LL;
LABEL_269:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v169,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v30,
              cDatae);
            goto LABEL_270;
          }
          v170 = v236;
          v171 = 1;
          v172 = *((_QWORD *)v236 + 4);
          if ( v172 )
          {
            v328 = 0LL;
            v329 = 0LL;
            v330 = 0LL;
            if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v172 + 40LL))(
                   v172,
                   &PKEY_Endpoint_AllowPreemption,
                   &v328) >= 0
              && (((_WORD)v328 - 11) & 0xFFF7) == 0 )
            {
              v171 = (_WORD)v329 != 0;
            }
            PropVariantClear(&v328);
          }
          v232 = 0;
          if ( v171 )
          {
            if ( a12 == AUDCLNT_SHAREMODE_EXCLUSIVE )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)v237 + 79, GetCurrentThreadId(), 0) )
              {
                v30 = -2005139364;
                v173 = 1515LL;
                v174 = 2289827932LL;
                goto LABEL_230;
              }
              v163 = v245;
              v232 = 1;
              goto LABEL_214;
            }
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v237 + 79, 0, 0) )
            {
              v30 = -2005139364;
              v173 = 1521LL;
              v174 = 2289827932LL;
              goto LABEL_230;
            }
            v163 = v245;
          }
          if ( a12 != AUDCLNT_SHAREMODE_EXCLUSIVE )
          {
            if ( (a11 & 1) != 0 )
            {
              wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v233);
              SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                             v178,
                                             v170,
                                             v241,
                                             a11,
                                             a12,
                                             (struct SaDeviceResourceParams *)v254,
                                             (bool)v254,
                                             v246,
                                             v237,
                                             &v233);
              v30 = SaDeviceForOffloadedStream;
              if ( SaDeviceForOffloadedStream < 0 )
              {
                v173 = 1535LL;
                goto LABEL_229;
              }
            }
            else
            {
              v32 = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v246 + 96LL))(v246) == 0;
              v179 = *(_QWORD *)v128;
              v180 = !v32;
              if ( *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v128 + 144LL) == CAudioStream::IsFormatSensitiveClient )
              {
                v181 = *((_BYTE *)v128 + 556);
              }
              else
              {
                v181 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v128 + 144LL))(v128);
                v179 = *(_QWORD *)v128;
              }
              v182 = *(bool (__fastcall **)(CAudioStream *__hidden))(v179 + 136);
              if ( v182 == CAudioStream::IsStrictPeriodicityClient )
                v183 = *((_DWORD *)v128 + 138) == 1;
              else
                v183 = v182(v128);
              v184 = v233;
              v233 = 0LL;
              if ( v184 )
                (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v184 + 16LL))(v184);
              SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                             v184,
                                             v236,
                                             v241,
                                             a11,
                                             a12,
                                             (struct SaDeviceResourceParams *)v254,
                                             (bool)v254,
                                             v180,
                                             v237,
                                             v183,
                                             v181,
                                             &v233);
              v30 = SaDeviceForOffloadedStream;
              if ( SaDeviceForOffloadedStream < 0 )
              {
                v173 = 1542LL;
                goto LABEL_229;
              }
            }
            goto LABEL_232;
          }
LABEL_214:
          wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v233);
          SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                         v175,
                                         v170,
                                         v241,
                                         a11,
                                         AUDCLNT_SHAREMODE_EXCLUSIVE,
                                         (struct SaDeviceResourceParams *)v254,
                                         v171,
                                         v246,
                                         v237,
                                         &v233);
          v30 = SaDeviceForOffloadedStream;
          if ( SaDeviceForOffloadedStream < 0 )
          {
            v173 = 1529LL;
LABEL_229:
            v174 = (unsigned int)SaDeviceForOffloadedStream;
LABEL_230:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v173,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v174,
              cDatae);
            if ( v232 )
              _InterlockedExchange((volatile __int32 *)v237 + 79, 0);
            goto LABEL_270;
          }
LABEL_232:
          if ( v232 )
          {
            v177 = v237;
            _InterlockedExchange((volatile __int32 *)v237 + 79, 0);
            v163 = v245;
          }
          if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
            McTemplateU0((__int64)v177, (__int64)&AudioResourceManager_SaDevice_Created);
          v185 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v185 )
          {
            *(_QWORD *)v185 = 0LL;
            *(_DWORD *)v185 = 0;
            *((_QWORD *)v185 + 1) = 0LL;
          }
          else
          {
            v185 = 0LL;
          }
          v186 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *, unsigned __int16 **))(*(_QWORD *)v235 + 280LL);
          if ( v186 == CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor )
            AuxiliaryInputDescriptor = CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
                                         v235,
                                         (unsigned __int16 **)v185);
          else
            AuxiliaryInputDescriptor = v186(v235, (unsigned __int16 **)v185);
          if ( AuxiliaryInputDescriptor >= 0 )
          {
            if ( *(_DWORD *)v185 == 1 )
            {
              v252 = v235;
              Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v252);
              v188 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup((CAudioResourceManager *)((char *)v289 - 8));
              v30 = v188;
              if ( v188 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x613,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v188,
                  cDatae);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v252);
                AuxiliaryInputDescriptor::`scalar deleting destructor'((AuxiliaryInputDescriptor *)v185, v189);
LABEL_270:
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v245);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v237);
LABEL_271:
                v153 = *(_DWORD *)v254;
                if ( *(_QWORD *)v254 )
                  (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
LABEL_273:
                v154 = v241;
                if ( !v241 )
                  goto LABEL_319;
                goto LABEL_173;
              }
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v252);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x60F,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)AuxiliaryInputDescriptor,
              cDatae);
          }
          if ( v185 )
          {
            CoTaskMemFree(*((LPVOID *)v185 + 1));
            *((_QWORD *)v185 + 1) = 0LL;
            operator delete(v185, (const struct std::nothrow_t *)0x10);
          }
          v190 = v235;
          v191 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v235 + 224LL);
          if ( v191 == CBaseStreamGroupProxy::IsPeriodicitySensitive )
          {
            v192 = *((_DWORD *)v235 + 34) != 0;
          }
          else
          {
            v192 = v191(v235);
            v190 = v235;
          }
          v193 = !v192;
          v194 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 40LL);
          if ( v194 == CDeviceGraphManager::ConnectStreamGroupToSaDevice )
          {
            v195 = CDeviceGraphManager::ConnectStreamGroupToSaDevice(
                     (__int64)g_DeviceGraphManager,
                     (__int64)v190,
                     (__int64)v233,
                     v193,
                     (__int64)v247);
          }
          else
          {
            cDatae = (unsigned int)v247;
            v195 = ((__int64 (__fastcall *)(CDeviceGraphManager *, CSharedStreamGroupProxy *, struct ISaDeviceProxy *, _BOOL8))v194)(
                     g_DeviceGraphManager,
                     v190,
                     v233,
                     v193);
          }
          v30 = v195;
          if ( v195 < 0 )
          {
            v169 = 1567LL;
            goto LABEL_269;
          }
          if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
            McTemplateU0(v196, (__int64)&AudioResourceManager_SaDevice_Connected);
          (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v163 + 16LL))(v163);
          if ( v237 )
            (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v237 + 16LL))(v237);
          if ( *(_QWORD *)v254 )
            (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
          v197 = v241;
          if ( v241 )
          {
            CoTaskMemFree(*((LPVOID *)v241 + 3));
            *((_QWORD *)v197 + 3) = 0LL;
            CoTaskMemFree(*((LPVOID *)v197 + 2));
            *((_QWORD *)v197 + 2) = 0LL;
            CoTaskMemFree(*(LPVOID *)v197);
            *(_QWORD *)v197 = 0LL;
            operator delete(v197, (const struct std::nothrow_t *)0x68);
          }
LABEL_278:
          v199 = v233;
          if ( v233 )
          {
            v282 = 0LL;
            *(_QWORD *)v295 = &v282;
            v296 = 0LL;
            v297 = 1;
            v200 = *(__int64 (__fastcall **)(const struct SaDeviceParams **, struct SaDeviceParams **))(*(_QWORD *)v233 + 104LL);
            if ( v200 == CSaDeviceProxy::GetSaDeviceParams )
              v201 = CloneSaDeviceParams(*((const struct SaDeviceParams **)v233 + 5), &v296);
            else
              v201 = v200((const struct SaDeviceParams **)v233, &v296);
            v202 = v201 >= 0;
            if ( v297 )
            {
              v203 = v295[0];
              v204 = **(SaDeviceParams ***)v295;
              **(_QWORD **)v295 = v296;
              if ( v204 )
                SaDeviceParams::`scalar deleting destructor'(v204, v203);
            }
            if ( v202 )
            {
              v281 = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v258, &v281)
                && v258 )
              {
                v358 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
                v281 = &qword_18018A2A0;
                qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
                qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                v359 = 0;
                wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(
                  (unsigned int *)&v358,
                  v205,
                  v206);
              }
              v207 = *((_QWORD *)v281 + 1);
              if ( *(_DWORD *)v207 > 4u
                && (*(_QWORD *)(v207 + 16) & 0x400000000000LL) != 0
                && (*(_QWORD *)(v207 + 24) & 0x400000000000LL) == *(_QWORD *)(v207 + 24) )
              {
                v382 = a17;
                v383 = 16LL;
                v384 = (char *)v282 + 80;
                v385 = 16LL;
                v387 = 4LL;
                v259 = *((_DWORD *)v236 + 37);
                v386 = &v259;
                v208 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v128 + 80LL);
                if ( v208 == CAudioStream::GetUniqueStreamIdentifier )
                  UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v128);
                else
                  UniqueStreamIdentifier = v208(v128);
                v331 = UniqueStreamIdentifier;
                v388 = &v331;
                v389 = 8LL;
                v343[1] = 4;
                v376 = *(unsigned __int16 **)(v207 + 8);
                v343[0] = ((unsigned int)&unk_180146981 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v210 = *(_QWORD *)(v207 + 32);
                v344 = 0x400000000000LL;
                v377 = *v376;
                v379 = &unk_18014698C;
                v381 = 1;
                v378 = 2;
                v380 = 61;
                EtwEventWriteTransfer(v210, v343, 0LL, 0LL, 6, &v376, v228);
              }
            }
            v211 = v282;
            if ( v282 )
            {
              CoTaskMemFree(*((LPVOID *)v282 + 3));
              *((_QWORD *)v211 + 3) = 0LL;
              CoTaskMemFree(*((LPVOID *)v211 + 2));
              *((_QWORD *)v211 + 2) = 0LL;
              CoTaskMemFree(*(LPVOID *)v211);
              *(_QWORD *)v211 = 0LL;
              operator delete(v211, (const struct std::nothrow_t *)0x68);
            }
            v199 = v233;
          }
          v212 = v247;
          if ( v266 || v247 && !*((_DWORD *)v247 + 22) && (a11 & 1) != 0 )
          {
            v213 = v235;
            v249 = 0LL;
            wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset(&v249);
            v214 = (*(__int64 (__fastcall **)(CSharedStreamGroupProxy *, __int64 *))(*(_QWORD *)v213 + 208LL))(
                     v213,
                     &v249);
            v30 = v214;
            if ( v214 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x643,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v214,
                cDatae);
LABEL_318:
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v249);
              goto LABEL_319;
            }
            if ( v249 )
            {
              v248 = 0LL;
              v215 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v249 + 56LL))(v249, &v248);
              v30 = v215;
              if ( v215 < 0 )
              {
                v216 = 1607LL;
LABEL_316:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v216,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v215,
                  cDatae);
                goto LABEL_317;
              }
              v217 = RpcImpersonateClient(0LL);
              if ( v217 )
              {
                v30 = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)0x64C,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)v217,
                        cDatae);
LABEL_317:
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v248);
                goto LABEL_318;
              }
              v218 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v248 + 32LL))(
                       v248,
                       a18,
                       (__int64)v212 + 72,
                       (__int64)v212 + 80);
              v30 = v218;
              if ( v218 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x64F,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v218,
                  cDatae);
                RpcRevertToSelf();
                goto LABEL_317;
              }
              RpcRevertToSelf();
              if ( *((_QWORD *)v212 + 9) )
              {
                if ( v234 == eOffloadConnector )
                {
                  v215 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)v290 + 32LL))(
                           v290,
                           v248);
                  v30 = v215;
                  if ( v215 < 0 )
                  {
                    v216 = 1625LL;
                    goto LABEL_316;
                  }
                }
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v248);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v249);
            v199 = v233;
          }
          if ( v199 )
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v199 + 16LL))(v199);
          if ( v235 )
            (*(void (__fastcall **)(CSharedStreamGroupProxy *))(*(_QWORD *)v235 + 16LL))(v235);
          if ( v283 )
            LeaveCriticalSection(v283);
          v30 = 0;
          goto LABEL_331;
        }
        v235 = v138;
        (*(void (__fastcall **)(CSharedStreamGroupProxy *))(*(_QWORD *)v138 + 8LL))(v138);
LABEL_149:
        v139 = (struct ISaDeviceProxy **)v235;
        goto LABEL_150;
      }
    }
    else
    {
      v137 = v128;
    }
    v143 = v136(v137, &v235);
    v30 = v143;
    if ( v143 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A7,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v143,
        cDatae);
      goto LABEL_320;
    }
    goto LABEL_149;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x570,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v44,
    cDataa);
LABEL_345:
  if ( v291 )
    ((void (__fastcall *)(struct IMMDevice *))v291->lpVtbl->Release)(v291);
LABEL_347:
  if ( v238 )
    CoTaskMemFree(v238);
  return (unsigned int)v30;
}
