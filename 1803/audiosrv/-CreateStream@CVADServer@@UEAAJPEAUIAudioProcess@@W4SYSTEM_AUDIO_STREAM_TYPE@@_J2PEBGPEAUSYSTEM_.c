/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10
 * Callers:
 *     AudioServerCreateStream @ 0x180023040 (AudioServerCreateStream.c)
 * Callees:
 *     McTemplateU0 @ 0x1800021C0 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x1800021FC (McTemplateU0zqttq.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F1A0 (-Initialize@CAudioStream@@UEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18002F260 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180096508 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800BB044 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800C1E94 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
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
  __int64 v10; // rbx
  unsigned __int64 CurrentThreadId; // rdi
  signed __int64 v12; // rcx
  signed __int64 *v13; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  signed __int64 v16; // rax
  signed int MixFormat; // edi
  unsigned int (__fastcall *v18)(CAudioStream *__hidden); // rcx
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rbx
  struct CEndpointCharacteristics *v23; // rcx
  const unsigned __int16 *v24; // rdx
  __int64 (__fastcall *v25)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // r15
  void (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // rcx
  int v31; // r14d
  int (*v32)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int v33; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // edx
  int v35; // eax
  struct _GUID v36; // xmm0
  struct tWAVEFORMATEX **v37; // r14
  struct tWAVEFORMATEX *v38; // r15
  struct tWAVEFORMATEX *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  unsigned __int64 v42; // r9
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  struct _GUID *v47; // r8
  __int64 v48; // rdx
  struct tWAVEFORMATEX *v49; // rdx
  _QWORD *v50; // r14
  struct tWAVEFORMATEX *v51; // r15
  struct tWAVEFORMATEX *v52; // rcx
  unsigned __int64 v53; // r9
  __int64 v54; // rbx
  int v55; // eax
  __int64 (__fastcall *v56)(CAudioStream *__hidden, const struct tWAVEFORMATEX *); // rax
  int v57; // eax
  struct IAudioStreamInfo *v58; // r8
  __int64 (__fastcall *v59)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, int, int, int, int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, unsigned int, const struct SPATIAL_STREAM_PROPERTIES *, struct IProcessSubmixProxy *, struct SYSTEM_AUDIO_STREAM *); // r11
  __int64 v60; // r9
  int Stream; // eax
  __int64 v62; // rdx
  CPerStreamVolumeAudioSession *v63; // rcx
  __int64 (__fastcall *v64)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *); // rax
  int v65; // eax
  CAudioStream *v66; // rbx
  unsigned int (__fastcall *v67)(CAudioStream *__hidden); // rax
  CAudioStream *v68; // rbx
  HANDLE EventW; // rax
  signed int LastError; // eax
  char *v71; // rcx
  __int64 v72; // r8
  _OWORD *v73; // rbx
  CAudioStream *v74; // rcx
  __int128 v75; // xmm1
  char *v76; // rdx
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int64 v81; // rax
  struct IAudioPolicyManager *v82; // rcx
  unsigned __int8 v83; // al
  volatile signed __int32 *v84; // rbx
  unsigned int (__fastcall *v85)(CAudioStream *__hidden); // rax
  _QWORD *v86; // rax
  void (*v87)(void); // rax
  __int64 v88; // r10
  int v90; // [rsp+28h] [rbp-130h]
  int v91; // [rsp+28h] [rbp-130h]
  int v92; // [rsp+28h] [rbp-130h]
  struct tWAVEFORMATEX **v93; // [rsp+28h] [rbp-130h]
  int v94; // [rsp+28h] [rbp-130h]
  unsigned int v95; // [rsp+48h] [rbp-110h]
  char v96; // [rsp+D8h] [rbp-80h] BYREF
  struct CEndpointCharacteristics *v97; // [rsp+E0h] [rbp-78h] BYREF
  CAudioStream *v98; // [rsp+E8h] [rbp-70h]
  unsigned int v99; // [rsp+F0h] [rbp-68h]
  struct tWAVEFORMATEX *v100; // [rsp+F8h] [rbp-60h] BYREF
  unsigned __int16 *v101; // [rsp+100h] [rbp-58h]
  LPVOID pv; // [rsp+108h] [rbp-50h] BYREF
  int v103; // [rsp+110h] [rbp-48h] BYREF
  __int64 v104; // [rsp+118h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+120h] [rbp-38h] BYREF
  __int64 v106; // [rsp+130h] [rbp-28h]
  struct IAudioProcess *v107; // [rsp+138h] [rbp-20h]
  __int64 (__fastcall **v108)(); // [rsp+148h] [rbp-10h] BYREF
  __int128 v109; // [rsp+150h] [rbp-8h]
  _QWORD v110[2]; // [rsp+160h] [rbp+8h] BYREF
  __int64 v111; // [rsp+170h] [rbp+18h]
  DWORD v112; // [rsp+178h] [rbp+20h]
  __int64 v113; // [rsp+180h] [rbp+28h]
  struct tWAVEFORMATEX **v114; // [rsp+188h] [rbp+30h]
  struct tWAVEFORMATEX *v115; // [rsp+190h] [rbp+38h] BYREF
  char v116; // [rsp+198h] [rbp+40h]
  LPVOID *p_pv; // [rsp+1A0h] [rbp+48h]
  struct tWAVEFORMATEX *v118; // [rsp+1A8h] [rbp+50h] BYREF
  char v119; // [rsp+1B0h] [rbp+58h]
  __int64 v120; // [rsp+1B8h] [rbp+60h] BYREF
  _OWORD *v121; // [rsp+1C0h] [rbp+68h]
  PROPVARIANT pvar[4]; // [rsp+1C8h] [rbp+70h] BYREF
  GUID v123; // [rsp+1E8h] [rbp+90h] BYREF
  struct _GUID v124; // [rsp+1F8h] [rbp+A0h] BYREF
  GUID v125; // [rsp+208h] [rbp+B0h] BYREF
  GUID v126; // [rsp+218h] [rbp+C0h] BYREF
  struct _GUID v127; // [rsp+228h] [rbp+D0h] BYREF
  _OWORD v128[3]; // [rsp+238h] [rbp+E0h] BYREF
  __int128 v129; // [rsp+268h] [rbp+110h]
  __int128 v130; // [rsp+278h] [rbp+120h]
  __int128 v131; // [rsp+288h] [rbp+130h]
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+198h]

  v121 = a7;
  v106 = a4;
  v107 = a2;
  v101 = a6;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      a1,
      (__int64)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 208),
      *(_DWORD *)(a1 + 296),
      *(_DWORD *)(a1 + 304),
      *(_DWORD *)(a1 + 316),
      *(_DWORD *)(a1 + 300));
  v10 = wil::details::g_pThreadFailureCallbacks;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)&v96;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)&v97;
  v108 = off_180122518;
  v110[1] = &v108;
  v97 = 0LL;
  v96 = 0;
  v110[0] = 0LL;
  v111 = 0LL;
  v112 = 0;
  v113 = 0LL;
  v109 = *(_OWORD *)lpCriticalSection;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_11;
  CurrentThreadId = GetCurrentThreadId();
  v12 = *(_QWORD *)(v10 + 8 * (CurrentThreadId % 0xA));
  v13 = (signed __int64 *)(v10 + 8 * (CurrentThreadId % 0xA));
  if ( !v12 )
  {
LABEL_7:
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v12 = (signed __int64)v15;
    if ( v15 )
    {
      *(_QWORD *)v15 = 0LL;
      v15[2] = CurrentThreadId;
      *((_QWORD *)v15 + 2) = 0LL;
      _m_prefetchw(v13);
      do
      {
        v16 = *v13;
        *(_QWORD *)(v12 + 16) = *v13;
      }
      while ( v16 != _InterlockedCompareExchange64(v13, v12, v16) );
      goto LABEL_12;
    }
LABEL_11:
    v12 = 0LL;
    goto LABEL_12;
  }
  while ( *(_DWORD *)(v12 + 8) != (_DWORD)CurrentThreadId )
  {
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 )
      goto LABEL_7;
  }
LABEL_12:
  v110[0] = v12;
  if ( v12 )
  {
    v111 = *(_QWORD *)v12;
    *(_QWORD *)v12 = v110;
    v112 = GetCurrentThreadId();
  }
  memset_0(a7, 0, 0x60uLL);
  LOBYTE(lpCriticalSection[1]) = 0;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)(a1 + 224);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
  if ( !*(_DWORD *)(a1 + 184) )
  {
    MixFormat = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x674,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v90);
    goto LABEL_139;
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    MixFormat = -2004287486;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x675,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890002LL,
      v90);
    goto LABEL_139;
  }
  v19 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 96LL))(
          g_PolicyManager,
          a3,
          *(unsigned int *)(a1 + 296));
  MixFormat = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x678,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v19,
      v90);
    goto LABEL_139;
  }
  v20 = operator new(0x2A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v20;
  if ( v20 )
  {
    LOBYTE(v21) = *(_DWORD *)(a1 + 264) == 1;
    v90 = a1 + 280;
    CAudioStream::CAudioStream(v20, a2, v21, *(unsigned int *)(a1 + 268));
    *v22 = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
    v22[1] = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
    v22[2] = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
    v22[3] = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
    v22[81] = 0LL;
    v22[82] = 0LL;
    *((_BYTE *)v22 + 664) = 0;
  }
  else
  {
    v22 = 0LL;
  }
  v98 = (CAudioStream *)v22;
  if ( !v22 )
  {
    MixFormat = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x680,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8007000ELL,
      v90);
    goto LABEL_139;
  }
  v23 = v97;
  v97 = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = *(const unsigned __int16 **)(a1 + 216);
  v25 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v25 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       v24,
                                       0,
                                       &v97);
  else
    AliasedEndpointCharacteristics = v25(g_pEndpointCharacteristicsCache, v24, 0, &v97);
  MixFormat = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x687,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)AliasedEndpointCharacteristics,
      v90);
    goto LABEL_114;
  }
  if ( *(_DWORD *)(a1 + 264) == 1 )
  {
    v27 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v98 + 136LL))(v98, *(_QWORD *)(a1 + 176));
    MixFormat = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v27,
        v90);
      goto LABEL_114;
    }
    goto LABEL_84;
  }
  v120 = *((_QWORD *)v97 + 2);
  v28 = v120;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  v29 = *(_QWORD *)(a1 + 440);
  v103 = 0;
  v104 = 0LL;
  v30 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v97 + 2);
  if ( v30 )
  {
    (**v30)(v30, &GUID_419e19f7_d318_4c05_b705_2f17133c55da, &v104);
    if ( v104 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v104 + 88LL))(v104, &v103);
      if ( v104 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
    }
  }
  memset(pvar, 0, 24);
  v31 = 1;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v97 + 4) + 40LL))(
         *((_QWORD *)v97 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v31 = 0;
  }
  PropVariantClear(pvar);
  v33 = *(_DWORD *)(a1 + 268);
  if ( (v33 & 0x400000) != 0 )
  {
    v34 = eKeywordDetectorConnector;
  }
  else
  {
    v35 = v33 & 0x20000;
    if ( v29 && v35 )
    {
      v34 = eHostProcessConnector;
    }
    else if ( v31 && v35 )
    {
      v34 = eLoopbackConnector;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 264) == 1 )
        CoTaskMemFree(0LL);
      v34 = ((unsigned __int8)~(_BYTE)v33 >> 1) & 1;
    }
  }
  v36 = *(struct _GUID *)(a1 + 400);
  v114 = &v100;
  v100 = 0LL;
  v115 = 0LL;
  v116 = 1;
  v124 = v36;
  MixFormat = CEndpointCharacteristics::GetMixFormat(v97, v34, &v124, v32, &v115);
  if ( v116 )
  {
    v37 = v114;
    v38 = v115;
    v39 = *v114;
    if ( v115 != *v114 )
    {
      if ( v39 )
        CoTaskMemFree(v39);
      *v37 = v38;
    }
  }
  if ( MixFormat < 0 )
  {
    v40 = 1688LL;
LABEL_91:
    v42 = (unsigned int)MixFormat;
    goto LABEL_92;
  }
  if ( *(_DWORD *)(a1 + 316) )
  {
    v41 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v98 + 136LL))(v98, *(_QWORD *)(a1 + 176));
    MixFormat = v41;
    if ( v41 < 0 )
    {
      v42 = (unsigned int)v41;
      v40 = 1695LL;
LABEL_92:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v42,
        v92);
LABEL_93:
      if ( v100 )
        CoTaskMemFree(v100);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v120);
      goto LABEL_114;
    }
    goto LABEL_80;
  }
  if ( (*(_BYTE *)(a1 + 268) & 1) != 0 )
  {
    v43 = *(_DWORD *)(a1 + 384);
    v44 = *(_DWORD *)(a1 + 304);
    v45 = *(_DWORD *)(a1 + 296);
    v95 = *(_DWORD *)(a1 + 320);
    v126 = GUID_00000000_0000_0000_0000_000000000000;
    pv = 0LL;
    v123 = GUID_00000000_0000_0000_0000_000000000000;
    v125 = GUID_00000000_0000_0000_0000_000000000000;
    v46 = DeriveAudioProcessingModeConfiguration(
            v45,
            v44,
            v43,
            v97,
            0,
            0,
            eOffloadConnector,
            0,
            v95,
            1,
            &v126,
            &v123,
            &v125,
            0LL);
    MixFormat = v46;
    if ( v46 >= 0 )
    {
      v49 = *(struct tWAVEFORMATEX **)(a1 + 176);
      p_pv = &pv;
      v127 = v123;
      v118 = 0LL;
      v119 = 1;
      MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(v97, v49, v47, &v127, (struct _GUID *)v93, &v118);
      if ( v119 )
      {
        v50 = p_pv;
        v51 = v118;
        v52 = (struct tWAVEFORMATEX *)*p_pv;
        if ( v118 != *p_pv )
        {
          if ( v52 )
            CoTaskMemFree(v52);
          *v50 = v51;
        }
      }
      if ( MixFormat < 0 )
      {
        v53 = (unsigned int)MixFormat;
        v48 = 1719LL;
        goto LABEL_76;
      }
      v46 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v98 + 136LL))(v98, pv);
      MixFormat = v46;
      if ( v46 >= 0 )
      {
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_80;
      }
      v48 = 1721LL;
    }
    else
    {
      v48 = 1717LL;
    }
    v53 = (unsigned int)v46;
LABEL_76:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v53,
      (int)v93);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_93;
  }
  v56 = *(__int64 (__fastcall **)(CAudioStream *__hidden, const struct tWAVEFORMATEX *))(*(_QWORD *)v98 + 136LL);
  if ( v56 == CAudioStream::Initialize )
    v57 = CAudioStream::Initialize(v98, v100);
  else
    v57 = v56(v98, v100);
  MixFormat = v57;
  if ( v57 < 0 )
  {
    v40 = 1726LL;
    goto LABEL_91;
  }
LABEL_80:
  if ( v100 )
    CoTaskMemFree(v100);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
LABEL_84:
  v99 = -1;
  v54 = *(_QWORD *)g_PolicyManager;
  v94 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 120LL))(a2);
  v55 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, bool, _QWORD, _QWORD))(v54 + 64))(
          g_PolicyManager,
          a3 - 1 <= 1,
          *(unsigned int *)(a1 + 296),
          0LL);
  MixFormat = v55;
  if ( v55 >= 0 )
  {
    memset_0(v128, 0, 0x60uLL);
    v58 = (CAudioStream *)((char *)v98 + 8);
    if ( !v98 )
      v58 = 0LL;
    v59 = *(__int64 (__fastcall **)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, int, int, int, int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, unsigned int, const struct SPATIAL_STREAM_PROPERTIES *, struct IProcessSubmixProxy *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_AudioResourceManager + 24LL);
    v60 = *(unsigned int *)(a1 + 296);
    if ( v59 == CAudioResourceManager::CreateStream )
    {
      Stream = CAudioResourceManager::CreateStream(
                 g_AudioResourceManager,
                 v107,
                 v58,
                 v60,
                 *(_DWORD *)(a1 + 304),
                 *(_DWORD *)(a1 + 384),
                 *(_DWORD *)(a1 + 312),
                 *(_DWORD *)(a1 + 316),
                 *(_DWORD *)(a1 + 388),
                 v97,
                 *(_DWORD *)(a1 + 268),
                 (enum _AUDCLNT_SHAREMODE)*(_DWORD *)(a1 + 264),
                 v98,
                 *(struct tWAVEFORMATEX **)(a1 + 176),
                 v106,
                 a5,
                 (struct _GUID *)(a1 + 280),
                 *(_DWORD *)(a1 + 64),
                 v101,
                 v99,
                 *(_DWORD *)(a1 + 320),
                 (const struct SPATIAL_STREAM_PROPERTIES *)(a1 + 328),
                 *(struct IProcessSubmixProxy **)(a1 + 440),
                 (struct SYSTEM_AUDIO_STREAM *)v128);
    }
    else
    {
      v91 = *(_DWORD *)(a1 + 304);
      Stream = ((__int64 (__fastcall *)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, __int64))v59)(
                 g_AudioResourceManager,
                 v107,
                 v58,
                 v60);
    }
    MixFormat = Stream;
    if ( Stream >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, v129);
      }
      v63 = *(CPerStreamVolumeAudioSession **)(a1 + 168);
      v64 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *))(*(_QWORD *)v63 + 248LL);
      if ( v64 == CPerStreamVolumeAudioSession::AddStream )
        v65 = CPerStreamVolumeAudioSession::AddStream(v63, v98);
      else
        v65 = v64(v63, v98);
      MixFormat = v65;
      if ( v65 >= 0 )
      {
        v68 = v98;
        EventW = CreateEventW(0LL, 1, 0, 0LL);
        *((_QWORD *)v68 + 66) = EventW;
        if ( EventW )
          goto LABEL_127;
        LastError = GetLastError();
        MixFormat = LastError;
        if ( LastError > 0 )
          MixFormat = (unsigned __int16)LastError | 0x80070000;
        if ( MixFormat >= 0 )
        {
LABEL_127:
          v73 = v121;
          v74 = v98;
          v75 = v128[1];
          *v121 = v128[0];
          v76 = (char *)v74 + 8;
          v77 = v128[2];
          v73[1] = v75;
          v78 = v129;
          v73[2] = v77;
          v79 = v130;
          v73[3] = v78;
          v80 = v131;
          v73[4] = v79;
          v73[5] = v80;
          v81 = *((_QWORD *)v74 + 68);
          v82 = g_PolicyManager;
          *((_QWORD *)v73 + 7) = v81;
          v83 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, char *))(*(_QWORD *)v82 + 304LL))(v82, v76);
          *(_BYTE *)(a1 + 456) = v83;
          *((_DWORD *)v73 + 23) = v83;
          v84 = (volatile signed __int32 *)v98;
          *(_QWORD *)(a1 + 192) = v98;
          if ( *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v84 + 56LL) == CAudioStream::AddClientReference )
          {
            v85 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v84 + 8LL);
            if ( v85 == CAudioStream::AddRef )
              _InterlockedIncrement(v84 + 8);
            else
              v85((CAudioStream *)v84);
            _InterlockedIncrement(v84 + 11);
          }
          else
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 56LL))(v84);
          }
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
          }
          MixFormat = 0;
        }
        else
        {
          v71 = (char *)*((_QWORD *)v68 + 66);
          if ( (unsigned __int64)(v71 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            CloseHandle(v71);
            *((_QWORD *)v68 + 66) = 0LL;
          }
          *((_QWORD *)v68 + 68) = 0LL;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6FC,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)MixFormat,
            v91);
          LOBYTE(v72) = 1;
          (*(void (__fastcall **)(_QWORD, CAudioStream *, __int64))(**(_QWORD **)(a1 + 168) + 272LL))(
            *(_QWORD *)(a1 + 168),
            v98,
            v72);
        }
        goto LABEL_114;
      }
      v62 = 1783LL;
    }
    else
    {
      v62 = 1778LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v62,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat,
      v91);
    if ( (_QWORD)v129 )
      CAudioStream::CloseAudioHandle(v98);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6CD,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v55,
      v94);
  }
LABEL_114:
  v66 = v98;
  v67 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v98 + 64LL);
  if ( v67 != CAudioStream::ReleaseClientReference )
    goto LABEL_138;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v98 + 11, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v66 + 3) + 32LL))((__int64)v66 + 24);
  v18 = CAudioStream::Release;
  v67 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v66 + 16LL);
  if ( v67 == CAudioStream::Release )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v66 + 8, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v66 + 3) + 32LL))((__int64)v66 + 24);
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v66 + 3) + 24LL))((__int64)v66 + 24, 1LL);
    }
  }
  else
  {
LABEL_138:
    v67(v66);
  }
LABEL_139:
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( v112 )
  {
    if ( v112 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        v91);
    v18 = (unsigned int (__fastcall *)(CAudioStream *__hidden))v110[0];
    v112 = 0;
    v86 = *(_QWORD **)v110[0];
    if ( *(_QWORD *)v110[0] )
    {
      while ( v86 != v110 )
      {
        v18 = (unsigned int (__fastcall *)(CAudioStream *__hidden))(v86 + 2);
        v110[0] = v86 + 2;
        v86 = (_QWORD *)v86[2];
        if ( !v86 )
          goto LABEL_149;
      }
      *(_QWORD *)v18 = v111;
    }
LABEL_149:
    v110[0] = 0LL;
  }
  if ( v97 )
  {
    v87 = *(void (**)(void))(*(_QWORD *)v97 + 16LL);
    if ( (char *)v87 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
    {
LABEL_157:
      v87();
      goto LABEL_158;
    }
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)v97 + 3) )
    {
      if ( v88 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v88 + 48LL))(v88, 1LL);
      v18 = (unsigned int (__fastcall *)(CAudioStream *__hidden))Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v87 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_157;
      }
    }
  }
LABEL_158:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0((__int64)v18, (__int64)&VadServer_CreateStream_Task_Stop);
  return (unsigned int)MixFormat;
}
