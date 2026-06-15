/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110
 * Callers:
 *     AudioServerCreateStream @ 0x18002AF60 (AudioServerCreateStream.c)
 * Callees:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     TemplateEventDescriptor @ 0x18000B310 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18000B330 (Template_zqttq.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x180013DA4 (-AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180016580 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019490 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180019540 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Initialize@CAudioStream@@UEAAJPEAVCVADServer@@PEAUIAudioProcess@@PEBUtWAVEFORMATEX@@@Z @ 0x180019710 (-Initialize@CAudioStream@@UEAAJPEAVCVADServer@@PEAUIAudioProcess@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ??0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180019BA0 (--0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001D7F0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002B790 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18007A2D4 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x18007A6F4 (-RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18009B6BC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 */

__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        struct IAudioProcess *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        struct SYSTEM_AUDIO_STREAM *a7)
{
  unsigned int v7; // ebx
  char *v10; // r14
  int AliasedEndpointCharacteristics; // edi
  int v12; // eax
  char v13; // r8
  const unsigned __int16 *v14; // rcx
  char v15; // r12
  struct CEndpointCharacteristics *v16; // rcx
  __int64 v17; // rbx
  void (__fastcall ***v18)(_QWORD, GUID *, struct tWAVEFORMATEX **); // rcx
  int v19; // r15d
  int (*v20)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int v21; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v22; // edx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  const struct tWAVEFORMATEX *v26; // r9
  __int64 (__fastcall *v27)(CAudioStream *, struct CVADServer *, struct IAudioProcess *, const struct tWAVEFORMATEX *); // rax
  int v28; // eax
  CAudioSession *v29; // rcx
  __int64 (__fastcall *v30)(CAudioSession *, struct IAudioProcess **); // rax
  int v31; // edx
  unsigned int v32; // ecx
  struct _GUID *v33; // r8
  BOOL v34; // edi
  __int64 v35; // rbx
  int v36; // eax
  __int64 (__fastcall *v37)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, unsigned int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, int, const struct SPATIAL_STREAM_PROPERTIES *, struct IProcessSubmixProxy *, struct SYSTEM_AUDIO_STREAM *); // r11
  struct IAudioStreamInfo *v38; // r8
  __int64 v39; // r9
  int v40; // eax
  __int64 (__fastcall *v41)(CAudioStream *); // rax
  struct SYSTEM_AUDIO_STREAM *v42; // r13
  CPerStreamVolumeAudioSession *v43; // rcx
  __int64 (__fastcall *v44)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *); // rax
  int v45; // eax
  __int64 v46; // r8
  const struct _GUID *v47; // r9
  __int64 (__fastcall *v48)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *, unsigned int, const struct _GUID *, const struct SPATIAL_STREAM_PROPERTIES *); // rax
  struct IAudioStreamInfo *v49; // rdx
  int v50; // eax
  HANDLE EventW; // rax
  signed int LastError; // eax
  char *v53; // rcx
  __int64 v54; // rcx
  LPVOID v55; // rcx
  __int64 (__fastcall *v56)(CAudioStream *); // rax
  struct tWAVEFORMATEX **v58; // [rsp+28h] [rbp-120h]
  unsigned int v59; // [rsp+40h] [rbp-108h]
  struct CEndpointCharacteristics *v60; // [rsp+C8h] [rbp-80h] BYREF
  unsigned int v61; // [rsp+D0h] [rbp-78h] BYREF
  struct tWAVEFORMATEX *v62; // [rsp+D8h] [rbp-70h] BYREF
  LPVOID pv; // [rsp+E0h] [rbp-68h] BYREF
  struct IAudioProcess *v64; // [rsp+E8h] [rbp-60h] BYREF
  struct CEndpointCharacteristics *v65; // [rsp+F0h] [rbp-58h] BYREF
  int v66[4]; // [rsp+F8h] [rbp-50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+108h] [rbp-40h] BYREF
  __int64 v68; // [rsp+118h] [rbp-30h]
  struct _GUID v69; // [rsp+128h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+138h] [rbp-10h] BYREF
  char v71; // [rsp+140h] [rbp-8h]
  GUID v72; // [rsp+148h] [rbp+0h] BYREF
  char v73; // [rsp+1A8h] [rbp+60h]

  v7 = a3;
  v10 = 0LL;
  v73 = 0;
  pv = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(
      a1,
      (__int64)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 200),
      *(_DWORD *)(a1 + 288),
      *(_DWORD *)(a1 + 296),
      *(_DWORD *)(a1 + 308),
      *(_DWORD *)(a1 + 292));
  memset(a7, 0, 0x60uLL);
  v71 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids);
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    if ( *(_QWORD *)(a1 + 192) )
    {
      AliasedEndpointCharacteristics = -2004287486;
      goto LABEL_48;
    }
    AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 88LL))(
                                       g_PolicyManager,
                                       v7,
                                       *(unsigned int *)(a1 + 288));
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_48;
    v10 = (char *)operator new(0x240uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v12 = *(_DWORD *)(a1 + 260);
      v13 = (v12 & 0x200000) != 0 || v7 == 2;
      CAudioStream::CAudioStream(
        (__int64)v10,
        *(_DWORD *)(a1 + 256) == 1,
        v13,
        v12 & 1,
        *(_DWORD *)(a1 + 288),
        *(_DWORD *)(a1 + 300),
        *(_DWORD *)(a1 + 308) != 0,
        v7);
      *(_QWORD *)v10 = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
      *((_QWORD *)v10 + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
      *((_QWORD *)v10 + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
      *((_QWORD *)v10 + 69) = 0LL;
      *((_QWORD *)v10 + 70) = 0LL;
      v10[568] = 0;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
    {
      AliasedEndpointCharacteristics = -2147024882;
      goto LABEL_48;
    }
    AliasedEndpointCharacteristics = CAudioSession::AddPendingStreamCreate(
                                       *(CAudioSession **)(a1 + 168),
                                       (struct CAudioStream *)v10);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_48;
    if ( *(_DWORD *)(a1 + 256) == 1 )
    {
      AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(char *, __int64, struct IAudioProcess *, _QWORD))(*(_QWORD *)v10 + 144LL))(
                                         v10,
                                         a1,
                                         a2,
                                         *(_QWORD *)(a1 + 176));
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_48;
LABEL_63:
      v29 = *(CAudioSession **)(a1 + 168);
      v30 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(*(_QWORD *)v29 + 24LL);
      if ( v30 == CAudioSession::GetProcess )
        CAudioSession::GetProcess(v29, &v64);
      else
        v30(v29, &v64);
      AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(
                                         *(const unsigned __int16 **)(a1 + 208),
                                         0,
                                         &v65);
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_48;
      v61 = -1;
      v34 = v7 - 1 <= 1;
      v35 = *(_QWORD *)g_PolicyManager;
      v36 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v64 + 120LL))(v64);
      AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, BOOL, _QWORD, _QWORD, int, unsigned int *))(v35 + 56))(
                                         g_PolicyManager,
                                         v34,
                                         *(unsigned int *)(a1 + 288),
                                         0LL,
                                         v36,
                                         &v61);
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_48;
      v37 = *(__int64 (__fastcall **)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, unsigned int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, int, const struct SPATIAL_STREAM_PROPERTIES *, struct IProcessSubmixProxy *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_AudioResourceManager + 24LL);
      v38 = (struct IAudioStreamInfo *)(v10 + 8);
      v39 = *(unsigned int *)(a1 + 288);
      v40 = v37 == CAudioResourceManager::CreateStream
          ? CAudioResourceManager::CreateStream(
              g_AudioResourceManager,
              a2,
              v38,
              v39,
              *(_DWORD *)(a1 + 296),
              *(_DWORD *)(a1 + 304),
              *(_DWORD *)(a1 + 308),
              v65,
              *(_DWORD *)(a1 + 260),
              (enum _AUDCLNT_SHAREMODE)*(_DWORD *)(a1 + 256),
              (struct IAudioGraphCallback *)v10,
              *(struct tWAVEFORMATEX **)(a1 + 176),
              a4,
              a5,
              (const struct _GUID *)(a1 + 272),
              *(_DWORD *)(a1 + 64),
              a6,
              v61,
              *(_DWORD *)(a1 + 312),
              (const struct SPATIAL_STREAM_PROPERTIES *)(a1 + 320),
              *(struct IProcessSubmixProxy **)(a1 + 416),
              a7)
          : ((__int64 (__fastcall *)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, __int64, _DWORD, _DWORD, _DWORD, struct CEndpointCharacteristics *))v37)(
              g_AudioResourceManager,
              a2,
              v38,
              v39,
              *(_DWORD *)(a1 + 296),
              *(_DWORD *)(a1 + 304),
              *(_DWORD *)(a1 + 308),
              v65);
      AliasedEndpointCharacteristics = v40;
      if ( v40 < 0 )
        goto LABEL_48;
      v41 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v10 + 64LL);
      if ( v41 == CAudioStream::AddClientReference )
        CAudioStream::AddClientReference((CAudioStream *)v10);
      else
        v41((CAudioStream *)v10);
      *(_QWORD *)(a1 + 192) = v10;
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0 )
      {
        v42 = a7;
      }
      else
      {
        v42 = a7;
        if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            40LL,
            &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
            *((_QWORD *)a7 + 6));
      }
      v43 = *(CPerStreamVolumeAudioSession **)(a1 + 168);
      v44 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *))(*(_QWORD *)v43 + 248LL);
      v45 = v44 == CPerStreamVolumeAudioSession::AddStream
          ? CPerStreamVolumeAudioSession::AddStream(v43, (struct CAudioStream *)v10)
          : v44(v43, (struct CAudioStream *)v10);
      AliasedEndpointCharacteristics = v45;
      if ( v45 )
        goto LABEL_48;
      v46 = *(unsigned int *)(a1 + 260);
      v47 = (const struct _GUID *)(a1 + 272);
      v73 = 1;
      v48 = *(__int64 (__fastcall **)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *, unsigned int, const struct _GUID *, const struct SPATIAL_STREAM_PROPERTIES *))(*(_QWORD *)g_SpatialAudioResourceManager + 24LL);
      v49 = (struct IAudioStreamInfo *)(v10 + 8);
      v50 = v48 == Sarm::CSpatialAudioResourceManager::OnCreateStream
          ? Sarm::CSpatialAudioResourceManager::OnCreateStream(
              g_SpatialAudioResourceManager,
              v49,
              v46,
              v47,
              (const struct SPATIAL_STREAM_PROPERTIES *)(a1 + 320))
          : ((__int64 (__fastcall *)(Sarm::CSpatialAudioResourceManager *, struct IAudioStreamInfo *, __int64, const struct _GUID *))v48)(
              g_SpatialAudioResourceManager,
              v49,
              v46,
              v47);
      AliasedEndpointCharacteristics = v50;
      if ( v50 < 0 )
        goto LABEL_48;
      AliasedEndpointCharacteristics = 0;
      EventW = CreateEventW(0LL, 1, 0, 0LL);
      *((_QWORD *)v10 + 64) = EventW;
      if ( !EventW )
      {
        LastError = GetLastError();
        AliasedEndpointCharacteristics = LastError;
        if ( LastError > 0 )
          AliasedEndpointCharacteristics = (unsigned __int16)LastError | 0x80070000;
        if ( AliasedEndpointCharacteristics >= 0 )
          goto LABEL_110;
        v53 = (char *)*((_QWORD *)v10 + 64);
        if ( (unsigned __int64)(v53 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          CloseHandle(v53);
          *((_QWORD *)v10 + 64) = 0LL;
        }
        *((_QWORD *)v10 + 66) = 0LL;
      }
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_48;
LABEL_110:
      *((_QWORD *)v42 + 7) = *((_QWORD *)v10 + 66);
      goto LABEL_117;
    }
    v14 = *(const unsigned __int16 **)(a1 + 208);
    v15 = *(_BYTE *)(a1 + 260) & 1;
    v60 = 0LL;
    AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(v14, 0, &v60);
    if ( AliasedEndpointCharacteristics < 0 )
    {
      v16 = v60;
      if ( !v60 )
        goto LABEL_48;
LABEL_75:
      (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 16LL))(v16);
      goto LABEL_48;
    }
    v17 = *((_QWORD *)v60 + 2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v66[0] = 0;
    v62 = 0LL;
    v18 = (void (__fastcall ***)(_QWORD, GUID *, struct tWAVEFORMATEX **))*((_QWORD *)v60 + 2);
    if ( v18 )
    {
      (**v18)(v18, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v62);
      if ( v62 )
      {
        (*(void (__fastcall **)(struct tWAVEFORMATEX *, int *))(*(_QWORD *)&v62->wFormatTag + 88LL))(v62, v66);
        if ( v62 )
          (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v62->wFormatTag + 16LL))(v62);
      }
    }
    pvar[0] = 0LL;
    pvar[1] = 0LL;
    v68 = 0LL;
    v19 = 1;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v60 + 4) + 40LL))(
           *((_QWORD *)v60 + 4),
           &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
           pvar) < 0
      || LOWORD(pvar[0]) != 19 )
    {
      v19 = 0;
    }
    PropVariantClear(pvar);
    v21 = *(_DWORD *)(a1 + 260);
    if ( (v21 & 0x400000) != 0 )
    {
      v22 = eKeywordDetectorConnector;
    }
    else if ( v19 && (v21 & 0x20000) != 0 )
    {
      v22 = eLoopbackConnector;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 256) == 1 )
        CoTaskMemFree(0LL);
      v22 = ((unsigned __int8)~(_BYTE)v21 >> 1) & 1;
    }
    *(_OWORD *)pvar = *(_OWORD *)(a1 + 376);
    AliasedEndpointCharacteristics = CEndpointCharacteristics::GetMixFormat(
                                       v60,
                                       v22,
                                       (struct _GUID *)pvar,
                                       v20,
                                       (struct tWAVEFORMATEX **)&pv);
    if ( AliasedEndpointCharacteristics < 0 )
    {
LABEL_44:
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      if ( v60 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 16LL))(v60);
      goto LABEL_48;
    }
    if ( *(_DWORD *)(a1 + 308) )
    {
      v26 = *(const struct tWAVEFORMATEX **)(a1 + 176);
      v27 = *(__int64 (__fastcall **)(CAudioStream *, struct CVADServer *, struct IAudioProcess *, const struct tWAVEFORMATEX *))(*(_QWORD *)v10 + 144LL);
    }
    else
    {
      if ( v15 )
      {
        v31 = *(_DWORD *)(a1 + 296);
        v32 = *(_DWORD *)(a1 + 288);
        v59 = *(_DWORD *)(a1 + 312);
        v72 = GUID_00000000_0000_0000_0000_000000000000;
        v62 = 0LL;
        v69 = GUID_00000000_0000_0000_0000_000000000000;
        *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
        AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                           v32,
                                           v31,
                                           v60,
                                           0,
                                           0,
                                           eOffloadConnector,
                                           0,
                                           v59,
                                           &v72,
                                           &v69,
                                           (GUID *)pvar,
                                           0LL);
        if ( AliasedEndpointCharacteristics < 0 )
        {
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          v16 = v60;
          if ( !v60 )
            goto LABEL_48;
          goto LABEL_75;
        }
        AliasedEndpointCharacteristics = DeriveOffloadConnectorFormatFromStreamFormat(
                                           v60,
                                           *(struct tWAVEFORMATEX **)(a1 + 176),
                                           v33,
                                           &v69,
                                           (struct _GUID *)v58,
                                           &v62);
        if ( AliasedEndpointCharacteristics < 0 )
        {
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          v16 = v60;
          if ( !v60 )
            goto LABEL_48;
          goto LABEL_75;
        }
        v28 = (*(__int64 (__fastcall **)(char *, __int64, struct IAudioProcess *, struct tWAVEFORMATEX *))(*(_QWORD *)v10 + 144LL))(
                v10,
                a1,
                a2,
                v62);
        goto LABEL_57;
      }
      v26 = (const struct tWAVEFORMATEX *)pv;
      v27 = *(__int64 (__fastcall **)(CAudioStream *, struct CVADServer *, struct IAudioProcess *, const struct tWAVEFORMATEX *))(*(_QWORD *)v10 + 144LL);
      if ( v27 == CAudioStream::Initialize )
      {
        v28 = CAudioStream::Initialize(
                (CAudioStream *)v10,
                (struct CVADServer *)a1,
                a2,
                (const struct tWAVEFORMATEX *)pv);
LABEL_57:
        AliasedEndpointCharacteristics = v28;
        if ( v28 >= 0 )
        {
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          if ( v60 )
            (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 16LL))(v60);
          v7 = a3;
          goto LABEL_63;
        }
        goto LABEL_44;
      }
    }
    v28 = v27((CAudioStream *)v10, (struct CVADServer *)a1, a2, v26);
    goto LABEL_57;
  }
  AliasedEndpointCharacteristics = -2004287487;
LABEL_48:
  if ( *((_QWORD *)a7 + 6) )
  {
    if ( v10 )
    {
      CAudioStream::CloseAudioHandle((CAudioStream *)v10);
      if ( v73 )
      {
        v23 = *(_QWORD *)(a1 + 192);
        v24 = v23 + 8;
        if ( !v23 )
          v24 = 0LL;
        (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *, __int64))(*(_QWORD *)g_SpatialAudioResourceManager
                                                                              + 32LL))(
          g_SpatialAudioResourceManager,
          v24);
        LOBYTE(v25) = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 168) + 272LL))(
          *(_QWORD *)(a1 + 168),
          *(_QWORD *)(a1 + 192),
          0LL,
          v25);
      }
      else
      {
        CAudioSession::RemovePendingStreamCreate(*(CAudioSession **)(a1 + 168), (struct CAudioStream *)v10);
      }
      v54 = *(_QWORD *)(a1 + 192);
      if ( v54 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 72LL))(v54);
        *(_QWORD *)(a1 + 192) = 0LL;
      }
    }
  }
  else if ( v10 )
  {
    CAudioSession::RemovePendingStreamCreate(*(CAudioSession **)(a1 + 168), (struct CAudioStream *)v10);
  }
  memset(a7, 0, 0x60uLL);
LABEL_117:
  LeaveCriticalSection(lpCriticalSection);
  v55 = pv;
  if ( pv )
    CoTaskMemFree(pv);
  if ( v10 )
  {
    v56 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v10 + 72LL);
    if ( v56 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference((CAudioStream *)v10);
    else
      v56((CAudioStream *)v10);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor((__int64)v55, (__int64)&VadServer_CreateStream_Task_Stop);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      41LL,
      &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
      (unsigned int)AliasedEndpointCharacteristics);
  }
  if ( AliasedEndpointCharacteristics < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::CreateStream", 0x6B5u, AliasedEndpointCharacteristics);
  if ( v64 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v64 + 16LL))(v64);
  if ( v65 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v65 + 16LL))(v65);
  return (unsigned int)AliasedEndpointCharacteristics;
}
