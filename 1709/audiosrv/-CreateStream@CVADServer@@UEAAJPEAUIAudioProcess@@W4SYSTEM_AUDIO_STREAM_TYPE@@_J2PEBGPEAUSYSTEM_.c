/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0
 * Callers:
 *     AudioServerCreateStream @ 0x180008C70 (AudioServerCreateStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001B590 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001CA50 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x18001CAD0 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18001CCA0 (-Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180020320 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020DE0 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180020E38 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ??0CPerStreamVolumeAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@11W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18002D954 (--0CPerStreamVolumeAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc.c)
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@KW4_AUDCLNT_SHAREMODE@@HHPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x180030D64 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMD.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180082BE4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     McTemplateU0 @ 0x1800906F8 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180090734 (McTemplateU0zqttq.c)
 */

__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        struct IAudioProcess *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        _OWORD *a7)
{
  int v10; // eax
  int MixFormat; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // r10
  __int64 v15; // rax
  const unsigned __int16 *v16; // rdx
  __int64 (__fastcall *v17)(RTL_SRWLOCK *, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  struct IMMDevice *v19; // rbx
  CEndpointCharacteristics *v20; // rdi
  struct IProcessSubmixProxy *v21; // r14
  int IsOffloadCapable; // esi
  int v23; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 ConnectorTypeForStream; // eax
  struct _GUID v25; // xmm0
  int (*v26)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  _QWORD *v27; // rsi
  __int64 v28; // r14
  void *v29; // rcx
  __int64 (__fastcall *v30)(CAudioStream *, const struct tWAVEFORMATEX *); // rax
  int v31; // eax
  __int64 v32; // rbx
  int v33; // eax
  struct IAudioStreamInfo *v34; // r8
  __int64 (__fastcall *v35)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, unsigned int, unsigned int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, int, const struct SPATIAL_STREAM_PROPERTIES *, struct IProcessSubmixProxy *, struct SYSTEM_AUDIO_STREAM *); // r11
  __int64 v36; // r9
  int Stream; // eax
  CPerStreamVolumeAudioSession *v38; // rcx
  __int64 (__fastcall *v39)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *); // rax
  int v40; // eax
  struct IAudioStreamInfo *v41; // rdx
  __int64 v42; // r8
  __int64 (__usercall *v43)@<rax>(Sarm::CSpatialAudioResourceManager *__hidden@<rcx>, struct IAudioStreamInfo *@<rdx>, unsigned int@<r8d>, const struct _GUID *@<r9>, const struct SPATIAL_STREAM_PROPERTIES *); // rax
  const struct _GUID *v44; // r9
  int v45; // eax
  HANDLE EventW; // rax
  _OWORD *v47; // rbx
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  struct IAudioPolicyManager *v53; // rcx
  unsigned __int8 v54; // al
  void (*v55)(void); // rax
  void (*v56)(void); // rax
  void (*v57)(void); // rax
  __int64 v58; // rcx
  __int64 v60; // rdx
  unsigned __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // eax
  unsigned __int64 v65; // r9
  int v66; // r8d
  int v67; // edx
  unsigned int v68; // ecx
  int v69; // eax
  struct _GUID *v70; // r8
  __int64 v71; // rdx
  struct tWAVEFORMATEX *v72; // rdx
  struct tWAVEFORMATEX *v73; // rsi
  struct tWAVEFORMATEX *v74; // r14
  void *v75; // rcx
  unsigned __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  signed int LastError; // eax
  char *v80; // rcx
  int v81; // [rsp+20h] [rbp-120h]
  int v82; // [rsp+20h] [rbp-120h]
  int v83; // [rsp+20h] [rbp-120h]
  struct tWAVEFORMATEX **v84; // [rsp+20h] [rbp-120h]
  struct tWAVEFORMATEX **v85; // [rsp+20h] [rbp-120h]
  unsigned int v86; // [rsp+40h] [rbp-100h]
  CAudioStream *v87; // [rsp+C0h] [rbp-80h]
  CEndpointCharacteristics *v88; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v89; // [rsp+D0h] [rbp-70h]
  LPVOID pv; // [rsp+D8h] [rbp-68h] BYREF
  LPVOID v91; // [rsp+E0h] [rbp-60h] BYREF
  struct _GUID v92; // [rsp+F0h] [rbp-50h] BYREF
  char v93; // [rsp+100h] [rbp-40h]
  unsigned __int16 *v94; // [rsp+110h] [rbp-30h]
  __int64 v95; // [rsp+118h] [rbp-28h]
  struct IAudioProcess *v96; // [rsp+120h] [rbp-20h]
  struct tWAVEFORMATEX *v97[2]; // [rsp+128h] [rbp-18h] BYREF
  char v98; // [rsp+138h] [rbp-8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+140h] [rbp+0h] BYREF
  char v100; // [rsp+148h] [rbp+8h]
  struct _GUID v101; // [rsp+150h] [rbp+10h] BYREF
  struct IMMDevice *v102; // [rsp+160h] [rbp+20h] BYREF
  _OWORD *v103; // [rsp+168h] [rbp+28h]
  _OWORD v104[6]; // [rsp+170h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+E8h]

  v94 = a6;
  v103 = a7;
  v95 = a4;
  v96 = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      a1,
      (unsigned int)&VadServer_CreateStream_Task_Start,
      *(_QWORD *)(a1 + 200),
      *(_DWORD *)(a1 + 288),
      *(_DWORD *)(a1 + 296),
      *(_DWORD *)(a1 + 308),
      *(_DWORD *)(a1 + 292));
  memset(a7, 0, 0x60uLL);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 216);
  v100 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
  }
  if ( !*(_DWORD *)(a1 + 184) )
  {
    MixFormat = -2004287487;
    v60 = 1547LL;
LABEL_75:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v60,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat,
      v81);
    goto LABEL_59;
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    MixFormat = -2004287486;
    v60 = 1548LL;
    goto LABEL_75;
  }
  v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 88LL))(
          g_PolicyManager,
          a3,
          *(unsigned int *)(a1 + 288));
  MixFormat = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x60F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10,
      v81);
    goto LABEL_59;
  }
  v14 = operator new(0x240uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
  {
    if ( (*(_DWORD *)(a1 + 260) & 0x200000) != 0 || (LOBYTE(v13) = 0, a3 == 2) )
      LOBYTE(v13) = 1;
    LOBYTE(v12) = *(_DWORD *)(a1 + 256) == 1;
    LOBYTE(v81) = *(_BYTE *)(a1 + 260) & 1;
    v15 = CPerStreamVolumeAudioStream::CPerStreamVolumeAudioStream(v14, a2, v12, v13);
  }
  else
  {
    v15 = 0LL;
  }
  v87 = (CAudioStream *)v15;
  if ( !v15 )
  {
    MixFormat = -2147024882;
    v60 = 1563LL;
    goto LABEL_75;
  }
  v16 = *(const unsigned __int16 **)(a1 + 208);
  v88 = 0LL;
  v17 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v17 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       v16,
                                       0,
                                       &v88);
  else
    AliasedEndpointCharacteristics = v17((RTL_SRWLOCK *)g_pEndpointCharacteristicsCache, v16, 0, &v88);
  MixFormat = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v61 = (unsigned int)AliasedEndpointCharacteristics;
    v62 = 1571LL;
LABEL_108:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v62,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v61,
      v81);
    goto LABEL_54;
  }
  if ( *(_DWORD *)(a1 + 256) != 1 )
  {
    v102 = (struct IMMDevice *)*((_QWORD *)v88 + 2);
    v19 = v102;
    ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->AddRef)(v19);
    v20 = v88;
    v21 = *(struct IProcessSubmixProxy **)(a1 + 424);
    IsOffloadCapable = CEndpointCharacteristics::IsOffloadCapable(v88);
    v23 = CEndpointCharacteristics::HardwareLoopbackEnabled(v20);
    ConnectorTypeForStream = GetConnectorTypeForStream(
                               v19,
                               *(_DWORD *)(a1 + 260),
                               *(enum _AUDCLNT_SHAREMODE *)(a1 + 256),
                               v23,
                               IsOffloadCapable,
                               0LL,
                               v21);
    v25 = *(struct _GUID *)(a1 + 384);
    pv = 0LL;
    *(_QWORD *)&v92.Data1 = &pv;
    *(_QWORD *)v92.Data4 = 0LL;
    v93 = 1;
    v101 = v25;
    MixFormat = CEndpointCharacteristics::GetMixFormat(
                  (struct _RTL_CRITICAL_SECTION *)v88,
                  ConnectorTypeForStream,
                  &v101,
                  v26,
                  (struct tWAVEFORMATEX **)v92.Data4);
    if ( v93 )
    {
      v27 = *(_QWORD **)&v92.Data1;
      v28 = *(_QWORD *)v92.Data4;
      v29 = **(void ***)&v92.Data1;
      if ( *(_QWORD *)v92.Data4 != **(_QWORD **)&v92.Data1 )
      {
        if ( v29 )
          CoTaskMemFree(v29);
        *v27 = v28;
      }
    }
    if ( MixFormat < 0 )
    {
      v63 = 1588LL;
LABEL_101:
      v65 = (unsigned int)MixFormat;
LABEL_102:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v63,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v65,
        v82);
LABEL_103:
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v102);
      goto LABEL_54;
    }
    if ( *(_DWORD *)(a1 + 308) )
    {
      v64 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v87 + 136LL))(v87, *(_QWORD *)(a1 + 176));
      MixFormat = v64;
      if ( v64 >= 0 )
      {
LABEL_28:
        if ( pv )
          CoTaskMemFree(pv);
        if ( v19 )
          ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->Release)(v19);
        goto LABEL_32;
      }
      v65 = (unsigned int)v64;
      v63 = 1595LL;
      goto LABEL_102;
    }
    if ( (*(_BYTE *)(a1 + 260) & 1) == 0 )
    {
      v30 = *(__int64 (__fastcall **)(CAudioStream *, const struct tWAVEFORMATEX *))(*(_QWORD *)v87 + 136LL);
      if ( v30 == CAudioStream::Initialize )
        v31 = CAudioStream::Initialize(v87, (const struct tWAVEFORMATEX *)pv);
      else
        v31 = v30(v87, (const struct tWAVEFORMATEX *)pv);
      MixFormat = v31;
      if ( v31 >= 0 )
        goto LABEL_28;
      v63 = 1625LL;
      goto LABEL_101;
    }
    v66 = *(_DWORD *)(a1 + 376);
    v67 = *(_DWORD *)(a1 + 296);
    v68 = *(_DWORD *)(a1 + 288);
    v86 = *(_DWORD *)(a1 + 312);
    v92 = GUID_00000000_0000_0000_0000_000000000000;
    v91 = 0LL;
    v101 = GUID_00000000_0000_0000_0000_000000000000;
    *(GUID *)v97 = GUID_00000000_0000_0000_0000_000000000000;
    v69 = DeriveAudioProcessingModeConfiguration(
            v68,
            v67,
            v66,
            v88,
            0,
            0,
            eOffloadConnector,
            0,
            v86,
            &v92,
            &v101,
            (GUID *)v97,
            0LL);
    MixFormat = v69;
    if ( v69 >= 0 )
    {
      v72 = *(struct tWAVEFORMATEX **)(a1 + 176);
      v97[0] = (struct tWAVEFORMATEX *)&v91;
      v92 = v101;
      v97[1] = 0LL;
      v98 = 1;
      MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(v88, v72, v70, &v92, (struct _GUID *)v85, &v97[1]);
      if ( v98 )
      {
        v73 = v97[0];
        v74 = v97[1];
        v75 = *(void **)v97[0];
        if ( v97[1] != *(struct tWAVEFORMATEX **)v97[0] )
        {
          if ( v75 )
            CoTaskMemFree(v75);
          *(_QWORD *)&v73->wFormatTag = v74;
        }
      }
      if ( MixFormat < 0 )
      {
        v76 = (unsigned int)MixFormat;
        v71 = 1618LL;
        goto LABEL_95;
      }
      v69 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v87 + 136LL))(v87, v91);
      MixFormat = v69;
      if ( v69 >= 0 )
      {
        if ( v91 )
          CoTaskMemFree(v91);
        goto LABEL_28;
      }
      v71 = 1620LL;
    }
    else
    {
      v71 = 1616LL;
    }
    v76 = (unsigned int)v69;
LABEL_95:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v71,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v76,
      (int)v85);
    if ( v91 )
      CoTaskMemFree(v91);
    goto LABEL_103;
  }
  v33 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v87 + 136LL))(v87, *(_QWORD *)(a1 + 176));
  MixFormat = v33;
  if ( v33 < 0 )
  {
    v62 = 1577LL;
LABEL_107:
    v61 = (unsigned int)v33;
    goto LABEL_108;
  }
LABEL_32:
  v89 = -1;
  v32 = *(_QWORD *)g_PolicyManager;
  v81 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 120LL))(a2);
  v33 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, bool, _QWORD, _QWORD))(v32 + 56))(
          g_PolicyManager,
          a3 - 1 <= 1,
          *(unsigned int *)(a1 + 288),
          0LL);
  MixFormat = v33;
  if ( v33 < 0 )
  {
    v62 = 1640LL;
    goto LABEL_107;
  }
  memset(v104, 0, sizeof(v104));
  v34 = (CAudioStream *)((char *)v87 + 8);
  if ( !v87 )
    v34 = 0LL;
  v35 = *(__int64 (__fastcall **)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, unsigned int, unsigned int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, int, const struct SPATIAL_STREAM_PROPERTIES *, struct IProcessSubmixProxy *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_AudioResourceManager + 24LL);
  v36 = *(unsigned int *)(a1 + 288);
  if ( v35 == CAudioResourceManager::CreateStream )
  {
    Stream = CAudioResourceManager::CreateStream(
               g_AudioResourceManager,
               v96,
               v34,
               v36,
               *(_DWORD *)(a1 + 296),
               *(_DWORD *)(a1 + 376),
               *(_DWORD *)(a1 + 304),
               *(_DWORD *)(a1 + 308),
               v88,
               *(_DWORD *)(a1 + 260),
               (enum _AUDCLNT_SHAREMODE)*(_DWORD *)(a1 + 256),
               v87,
               *(struct tWAVEFORMATEX **)(a1 + 176),
               v95,
               a5,
               (struct _GUID *)(a1 + 272),
               *(_DWORD *)(a1 + 64),
               v94,
               v89,
               *(_DWORD *)(a1 + 312),
               (const struct SPATIAL_STREAM_PROPERTIES *)(a1 + 320),
               *(struct IProcessSubmixProxy **)(a1 + 424),
               (struct SYSTEM_AUDIO_STREAM *)v104);
  }
  else
  {
    v83 = *(_DWORD *)(a1 + 296);
    Stream = ((__int64 (__fastcall *)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, __int64))v35)(
               g_AudioResourceManager,
               v96,
               v34,
               v36);
  }
  MixFormat = Stream;
  if ( Stream < 0 )
  {
    v77 = 1676LL;
    goto LABEL_115;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      40LL,
      &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
      *(_QWORD *)&v104[3]);
  }
  v38 = *(CPerStreamVolumeAudioSession **)(a1 + 168);
  v39 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *))(*(_QWORD *)v38 + 240LL);
  if ( v39 == CPerStreamVolumeAudioSession::AddStream )
    v40 = CPerStreamVolumeAudioSession::AddStream(v38, v87);
  else
    v40 = v39(v38, v87);
  MixFormat = v40;
  if ( v40 < 0 )
  {
    v77 = 1681LL;
LABEL_115:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v77,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat,
      v83);
    if ( *(_QWORD *)&v104[3] )
      CAudioStream::CloseAudioHandle(v87);
    goto LABEL_54;
  }
  if ( v87 )
    v41 = (CAudioStream *)((char *)v87 + 8);
  else
    v41 = 0LL;
  v42 = *(unsigned int *)(a1 + 260);
  v84 = (struct tWAVEFORMATEX **)(a1 + 320);
  v43 = *(__int64 (__usercall **)@<rax>(Sarm::CSpatialAudioResourceManager *__hidden@<rcx>, struct IAudioStreamInfo *@<rdx>, unsigned int@<r8d>, const struct _GUID *@<r9>, const struct SPATIAL_STREAM_PROPERTIES *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL);
  v44 = (const struct _GUID *)(a1 + 272);
  if ( v43 == Sarm::CSpatialAudioResourceManager::OnCreateStream )
    v45 = Sarm::CSpatialAudioResourceManager::OnCreateStream(
            g_SpatialAudioResourceManager,
            v41,
            v42,
            v44,
            (const struct SPATIAL_STREAM_PROPERTIES *)v84);
  else
    v45 = ((__int64 (__fastcall *)(Sarm::CSpatialAudioResourceManager *, struct IAudioStreamInfo *, __int64, const struct _GUID *))v43)(
            g_SpatialAudioResourceManager,
            v41,
            v42,
            v44);
  MixFormat = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x698,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v45,
      (int)v84);
  }
  else
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    *((_QWORD *)v87 + 64) = EventW;
    if ( EventW )
      goto LABEL_49;
    LastError = GetLastError();
    MixFormat = LastError;
    if ( LastError > 0 )
      MixFormat = (unsigned __int16)LastError | 0x80070000;
    if ( MixFormat >= 0 )
    {
LABEL_49:
      v47 = v103;
      v48 = v104[1];
      *v103 = v104[0];
      v49 = v104[2];
      v47[1] = v48;
      v50 = v104[3];
      v47[2] = v49;
      v51 = v104[4];
      v47[3] = v50;
      v52 = v104[5];
      v47[4] = v51;
      v47[5] = v52;
      v53 = g_PolicyManager;
      *((_QWORD *)v47 + 7) = *((_QWORD *)v87 + 66);
      v54 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)v53 + 320LL))(
              v53,
              (__int64)v87 + 8);
      *(_BYTE *)(a1 + 440) = v54;
      *((_DWORD *)v47 + 23) = v54;
      *(_QWORD *)(a1 + 192) = v87;
      v55 = *(void (**)(void))(*(_QWORD *)v87 + 56LL);
      if ( (char *)v55 == (char *)CAudioStream::AddClientReference )
        CAudioStream::AddClientReference(v87);
      else
        v55();
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
      }
      MixFormat = 0;
      goto LABEL_54;
    }
    v80 = (char *)*((_QWORD *)v87 + 64);
    if ( (unsigned __int64)(v80 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v80);
      *((_QWORD *)v87 + 64) = 0LL;
    }
    *((_QWORD *)v87 + 66) = 0LL;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x69C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat,
      (int)v84);
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *, _QWORD))(*(_QWORD *)g_SpatialAudioResourceManager
                                                                         + 32LL))(
      g_SpatialAudioResourceManager,
      ((unsigned __int64)v87 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v87 >> 64));
  }
  LOBYTE(v78) = 1;
  (*(void (__fastcall **)(_QWORD, CAudioStream *, __int64))(**(_QWORD **)(a1 + 168) + 264LL))(
    *(_QWORD *)(a1 + 168),
    v87,
    v78);
LABEL_54:
  if ( v88 )
  {
    v56 = *(void (**)(void))(*(_QWORD *)v88 + 16LL);
    if ( (char *)v56 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v88);
    else
      v56();
  }
  v57 = *(void (**)(void))(*(_QWORD *)v87 + 64LL);
  if ( (char *)v57 == (char *)CAudioStream::ReleaseClientReference )
    CAudioStream::ReleaseClientReference(v87);
  else
    v57();
LABEL_59:
  if ( v100 )
    LeaveCriticalSection(lpCriticalSection);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v58, &VadServer_CreateStream_Task_Stop);
  return (unsigned int)MixFormat;
}
