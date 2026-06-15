/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180025E30 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002D5A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x180011680 (-Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x180011C68 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z @ 0x18001C520 (-GetMaxStreamChannelVolume@CAudioStream@@UEAAJPEAM@Z.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     ?ResetVolumeRampDelays@CPerStreamVolumeAudioStream@@MEAAXXZ @ 0x18002D6A0 (-ResetVolumeRampDelays@CPerStreamVolumeAudioStream@@MEAAXXZ.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18002D6D0 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x18002DAE0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180031738 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x18005AA18 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x18005F568 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800846D4 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall CAudioStream::RecalculateVolume(float **this)
{
  CPerStreamVolumeAudioStream *v1; // rdi
  unsigned int v2; // esi
  _QWORD *v3; // rbx
  unsigned int i; // r8d
  __int64 v5; // rdx
  float *v6; // r8
  __int64 (__fastcall *v7)(CPerStreamVolumeAudioStream *__hidden, unsigned int, float *const, bool *, __int64 *); // rax
  int v8; // eax
  int v9; // esi
  _BOOL8 v10; // rdx
  __int64 v11; // rax
  unsigned int j; // ebx
  __int64 v13; // rsi
  char v14; // al
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  size_t v17; // rbx
  const void *v18; // rax
  __int64 v19; // r8
  CAudioSession *v20; // rcx
  __int64 (*v21)(void); // rax
  const unsigned __int16 *v22; // r14
  int v23; // xmm6_4
  _WORD *v24; // rsi
  _BOOL8 v25; // r8
  ULONGLONG TickCount64; // r15
  __int64 v27; // rbx
  void **v28; // rcx
  __int128 *p_Src; // r9
  size_t v30; // rbx
  size_t v31; // rax
  void *v32; // r15
  char **v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  char *v36; // r15
  __int64 v37; // rbx
  bool v38; // r8
  char **v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  char *v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // r14
  char v45; // al
  unsigned __int64 v46; // rax
  __int64 v47; // rbx
  size_t v48; // rbx
  const void *v49; // rax
  __int64 v50; // r8
  void **v51; // rcx
  const CHAR *v52; // rdx
  __int64 v53; // rax
  CAudioSession *v54; // rcx
  __int64 (*v55)(void); // rax
  const unsigned __int16 *v56; // rcx
  const WCHAR *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rsi
  __int64 v62; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v64; // rcx
  int v65; // eax
  CAudioStream *v66; // rcx
  __int64 (__fastcall *v67)(CAudioStream *__hidden, float *); // rax
  __int64 v68; // rcx
  void (__fastcall *v69)(CPerStreamVolumeAudioStream *__hidden); // rax
  __int64 v71; // rax
  int v72; // eax
  int v73; // esi
  const struct _TlgProvider_t *v74; // rbx
  __int64 (*v75)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v77; // rcx
  __int64 (*v78)(void); // rax
  const WCHAR *Identifier; // rax
  LPCGUID v80; // r8
  LPCGUID v81; // r9
  __int64 v82; // r8
  void (__fastcall *v83)(AudioSrvVolumeTelemetryStreamVolume *, __int64, unsigned int); // rax
  __int64 v84; // rdx
  AudioSrvVolumeTelemetryStreamVolume *v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // r14
  __int64 v88; // rax
  __int128 *v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rsi
  __int64 v92; // rax
  __int128 *v93; // rcx
  unsigned __int64 v94; // rax
  _QWORD *Next; // rax
  __int64 *cData; // [rsp+20h] [rbp-418h]
  bool v97; // [rsp+40h] [rbp-3F8h] BYREF
  char v98[3]; // [rsp+41h] [rbp-3F7h] BYREF
  float v99; // [rsp+44h] [rbp-3F4h] BYREF
  int v100; // [rsp+48h] [rbp-3F0h]
  unsigned int v101; // [rsp+4Ch] [rbp-3ECh]
  __int64 v102; // [rsp+50h] [rbp-3E8h] BYREF
  WINBOOL v103; // [rsp+58h] [rbp-3E0h] BYREF
  BOOL v104; // [rsp+5Ch] [rbp-3DCh] BYREF
  int v105; // [rsp+60h] [rbp-3D8h] BYREF
  WINBOOL fPending; // [rsp+64h] [rbp-3D4h] BYREF
  WINBOOL v107; // [rsp+68h] [rbp-3D0h] BYREF
  WINBOOL v108; // [rsp+6Ch] [rbp-3CCh] BYREF
  int v109; // [rsp+70h] [rbp-3C8h] BYREF
  LPVOID v110; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v111; // [rsp+80h] [rbp-3B8h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-3B0h] BYREF
  LPVOID v113; // [rsp+90h] [rbp-3A8h] BYREF
  LPVOID v114; // [rsp+98h] [rbp-3A0h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-398h] BYREF
  void ***v116; // [rsp+A8h] [rbp-390h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp-388h] BYREF
  char v118; // [rsp+B8h] [rbp-380h]
  LPCRITICAL_SECTION v119; // [rsp+C0h] [rbp-378h] BYREF
  char v120; // [rsp+C8h] [rbp-370h]
  LPCRITICAL_SECTION v121; // [rsp+D0h] [rbp-368h] BYREF
  char v122; // [rsp+D8h] [rbp-360h]
  CAudioStream *v123; // [rsp+E0h] [rbp-358h]
  _DWORD v124[2]; // [rsp+E8h] [rbp-350h] BYREF
  __int64 v125; // [rsp+F0h] [rbp-348h]
  int v126; // [rsp+FCh] [rbp-33Ch]
  _QWORD v127[2]; // [rsp+100h] [rbp-338h] BYREF
  int *v128; // [rsp+110h] [rbp-328h] BYREF
  void **v129; // [rsp+118h] [rbp-320h] BYREF
  char v130[96]; // [rsp+120h] [rbp-318h] BYREF
  unsigned __int64 v131; // [rsp+180h] [rbp-2B8h]
  int v132; // [rsp+188h] [rbp-2B0h]
  _BYTE v133[104]; // [rsp+198h] [rbp-2A0h] BYREF
  __int64 v134; // [rsp+200h] [rbp-238h]
  char v135[16]; // [rsp+208h] [rbp-230h] BYREF
  __int128 Src; // [rsp+218h] [rbp-220h] BYREF
  size_t Size[2]; // [rsp+228h] [rbp-210h]
  void *v138[2]; // [rsp+238h] [rbp-200h] BYREF
  __m128i v139; // [rsp+248h] [rbp-1F0h]
  __int128 v140; // [rsp+258h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+268h] [rbp-1D0h]
  __int128 v142; // [rsp+278h] [rbp-1C0h] BYREF
  __m128i v143; // [rsp+288h] [rbp-1B0h]
  __int128 v144; // [rsp+298h] [rbp-1A0h] BYREF
  __m128i v145; // [rsp+2A8h] [rbp-190h]
  __int128 v146; // [rsp+2B8h] [rbp-180h] BYREF
  __m128i v147; // [rsp+2C8h] [rbp-170h]
  _OWORD v148[2]; // [rsp+2D8h] [rbp-160h] BYREF
  _OWORD v149[2]; // [rsp+2F8h] [rbp-140h] BYREF
  unsigned __int16 *v150; // [rsp+320h] [rbp-118h] BYREF
  int v151; // [rsp+328h] [rbp-110h]
  int v152; // [rsp+32Ch] [rbp-10Ch]
  void *v153; // [rsp+330h] [rbp-108h]
  int v154; // [rsp+338h] [rbp-100h]
  int v155; // [rsp+33Ch] [rbp-FCh]
  const CHAR *v156; // [rsp+340h] [rbp-F8h]
  int v157; // [rsp+348h] [rbp-F0h]
  int v158; // [rsp+34Ch] [rbp-ECh]
  char *v159; // [rsp+350h] [rbp-E8h]
  __int64 v160; // [rsp+358h] [rbp-E0h]
  const WCHAR *v161; // [rsp+360h] [rbp-D8h]
  int v162; // [rsp+368h] [rbp-D0h]
  int v163; // [rsp+36Ch] [rbp-CCh]
  int *v164; // [rsp+370h] [rbp-C8h]
  __int64 v165; // [rsp+378h] [rbp-C0h]
  char *v166; // [rsp+380h] [rbp-B8h]
  __int64 v167; // [rsp+388h] [rbp-B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+390h] [rbp-A8h] BYREF
  BOOL *v169; // [rsp+3B0h] [rbp-88h]
  __int64 v170; // [rsp+3B8h] [rbp-80h]
  __int64 *v171; // [rsp+3C0h] [rbp-78h]
  __int64 v172; // [rsp+3C8h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3D0h] [rbp-68h] BYREF
  int *v174; // [rsp+3E0h] [rbp-58h]
  __int64 v175; // [rsp+3E8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+0h]

  v134 = -2LL;
  v1 = (CPerStreamVolumeAudioStream *)this;
  v123 = (CAudioStream *)this;
  v100 = 0;
  v2 = 0;
  v101 = 0;
  if ( this[22] )
  {
    v3 = this + 23;
    if ( this[23] )
    {
      for ( i = 0; ; ++i )
      {
        v5 = *((unsigned int *)this + 21);
        if ( i >= (unsigned int)v5 )
          break;
        this[15][i] = 1.0;
      }
      v6 = this[15];
      v7 = (__int64 (__fastcall *)(CPerStreamVolumeAudioStream *__hidden, unsigned int, float *const, bool *, __int64 *))*((_QWORD *)*this + 5);
      if ( v7 == CPerStreamVolumeAudioStream::CalculateAPOVolume )
      {
        v8 = CPerStreamVolumeAudioStream::CalculateAPOVolume((CPerStreamVolumeAudioStream *)this, v5, v6, &v97, &v115);
      }
      else
      {
        cData = &v115;
        v8 = ((__int64 (__fastcall *)(float **, __int64, float *, bool *))v7)(this, v5, v6, &v97);
      }
      v2 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6D3,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v8,
          (int)cData);
        return v2;
      }
      v121 = (LPCRITICAL_SECTION)((char *)v1 + 136);
      v122 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v121);
      if ( *v3 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 24LL))(*v3, v98);
        if ( v9 == -2147417848 )
        {
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids);
          }
          v98[0] = 0;
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>(v3);
        }
        if ( *v3 )
        {
          if ( !v9 )
          {
            v10 = v97;
            if ( (v98[0] != 0) != v97 )
            {
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
              {
                WPP_SF_qd(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  43LL,
                  &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
                  v1,
                  v97);
                v10 = v97;
              }
              v72 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8, _QWORD, _QWORD))(*(_QWORD *)*v3 + 32LL))(
                      *v3,
                      v10,
                      0LL,
                      0LL);
              v73 = v72;
              if ( v72 < 0 )
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x6EC,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  (const char *)(unsigned int)v72,
                  0);
                if ( v73 == -2147417848 )
                {
                  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
                  {
                    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids);
                  }
                  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>(v3);
                }
              }
              else if ( *((_QWORD *)v1 + 8) )
              {
                InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v103, &v110);
                if ( v103 )
                {
                  v110 = qword_18014C2B8;
                  qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
                  qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                  atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                  wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
                  InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
                }
                v74 = (const struct _TlgProvider_t *)*((_QWORD *)v110 + 1);
                if ( *(_DWORD *)v74 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v110 + 1), 0x400000000000uLL) )
                {
                  v104 = v97;
                  v169 = &v104;
                  v170 = 4LL;
                  v75 = *(__int64 (**)(void))(*((_QWORD *)v1 + 1) + 80LL);
                  if ( (char *)v75 == (char *)CAudioStream::GetUniqueStreamIdentifier )
                    UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier((CPerStreamVolumeAudioStream *)((char *)v1 + 8));
                  else
                    UniqueStreamIdentifier = v75();
                  v111 = UniqueStreamIdentifier;
                  v171 = &v111;
                  v172 = 8LL;
                  v77 = (CAudioSession *)*((_QWORD *)v1 + 8);
                  v78 = *(__int64 (**)(void))(*(_QWORD *)v77 + 64LL);
                  if ( (char *)v78 == (char *)CAudioSession::GetIdentifier )
                    Identifier = CAudioSession::GetIdentifier(v77);
                  else
                    Identifier = (const WCHAR *)v78();
                  TlgCreateWsz(&pDesc, Identifier);
                  v105 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 9) + 40LL))(*((_QWORD *)v1 + 9));
                  v174 = &v105;
                  v175 = 4LL;
                  TlgWrite(v74, &unk_18010EFF6, v80, v81, 6u, &pData);
                }
              }
            }
          }
        }
      }
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, v1);
      }
      if ( !*((_QWORD *)v1 + 8) )
        goto LABEL_88;
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
      if ( !*((_QWORD *)Context + 1) )
        goto LABEL_88;
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v107, &v113);
      if ( v107 )
      {
        v113 = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      if ( **((_DWORD **)v113 + 1) <= 4u )
        goto LABEL_88;
      v127[0] = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::istream'};
      v128 = (int *)&std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
      std::ios::ios(v133);
      v100 = 1;
      std::iostream::basic_iostream<char>(v127, &v129, 0LL);
      *(_QWORD *)((char *)v127 + *(int *)(v127[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
      *(int *)((char *)&v126 + *(int *)(v127[0] + 4LL)) = *(_DWORD *)(v127[0] + 4LL) - 152;
      v116 = &v129;
      std::streambuf::streambuf(&v129);
      v129 = &std::stringbuf::`vftable';
      v131 = 0LL;
      v132 = 0;
      v11 = std::setprecision(v135, 3LL);
      (*(void (__fastcall **)(char *, _QWORD))v11)((char *)&v128 + v128[1], *(_QWORD *)(v11 + 8));
      std::ostream::operator<<(&v128, std::fixed);
      std::ostream::operator<<(&v128);
      for ( j = 1; j < *((_DWORD *)v1 + 21); ++j )
      {
        v71 = std::operator<<<std::char_traits<char>>(&v128);
        std::ostream::operator<<(v71);
      }
      v13 = *((_QWORD *)v1 + 9);
      v14 = v132;
      if ( (v132 & 2) == 0 )
      {
        if ( std::streambuf::pptr(&v129) )
        {
          v15 = std::streambuf::pptr(&v129);
          v16 = v131;
          if ( v131 < v15 )
            v16 = std::streambuf::pptr(&v129);
          v17 = v16 - std::streambuf::pbase(&v129);
          v18 = (const void *)std::streambuf::pbase(&v129);
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          LOBYTE(v140) = 0;
          if ( v17 > 0xF )
          {
            std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
              &v140,
              v17,
              v19,
              v18);
          }
          else
          {
            si128.m128i_i64[0] = v17;
            memmove(&v140, v18, v17);
            *((_BYTE *)&v140 + v17) = 0;
          }
          Src = v140;
          *(__m128i *)Size = si128;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          LOBYTE(v140) = 0;
LABEL_32:
          v20 = (CAudioSession *)*((_QWORD *)v1 + 8);
          v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 64LL);
          if ( (char *)v21 == (char *)CAudioSession::GetIdentifier )
            v22 = CAudioSession::GetIdentifier(v20);
          else
            v22 = (const unsigned __int16 *)v21();
          v23 = *((_DWORD *)v1 + 23);
          v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
          v102 = *((_QWORD *)v1 + 66);
          v24 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
          lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 248);
          v118 = 0;
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
          TickCount64 = GetTickCount64();
          if ( *((_QWORD *)v1 + 28) && (v27 = *((_QWORD *)v1 + 28), GetTickCount64() - v27 > 0x3E8) )
          {
            v82 = *((unsigned int *)v1 + 60);
            v83 = (void (__fastcall *)(AudioSrvVolumeTelemetryStreamVolume *, __int64, unsigned int))**((_QWORD **)v1 + 27);
            v84 = v27 - *((_QWORD *)v1 + 29);
            v85 = (CPerStreamVolumeAudioStream *)((char *)v1 + 216);
            if ( v83 == AudioSrvVolumeTelemetryStreamVolume::Fire )
              AudioSrvVolumeTelemetryStreamVolume::Fire(v85, v84, v82);
            else
              v83(v85, v84, v82);
            *((_DWORD *)v1 + 60) = 0;
            *((_QWORD *)v1 + 29) = TickCount64;
          }
          else
          {
            ++*((_DWORD *)v1 + 60);
          }
          *((_QWORD *)v1 + 28) = TickCount64;
          if ( v118 )
            LeaveCriticalSection(lpCriticalSection);
          v28 = (void **)((char *)v1 + 288);
          if ( (__int128 *)((char *)v1 + 288) != &Src )
          {
            p_Src = &Src;
            if ( Size[1] >= 0x10 )
              p_Src = (__int128 *)Src;
            v30 = Size[0];
            v31 = *((_QWORD *)v1 + 39);
            if ( Size[0] > v31 )
            {
              std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
                v28,
                Size[0],
                v25,
                p_Src);
            }
            else
            {
              v32 = (char *)v1 + 288;
              if ( v31 >= 0x10 )
                v32 = *v28;
              *((_QWORD *)v1 + 38) = Size[0];
              memmove(v32, p_Src, v30);
              *((_BYTE *)v32 + v30) = 0;
            }
          }
          v33 = (char **)((char *)v1 + 320);
          v34 = -1LL;
          do
            ++v34;
          while ( v24[v34] );
          v35 = *((_QWORD *)v1 + 43);
          if ( v34 > v35 )
          {
            std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
              (__int64)v33,
              v34,
              v25,
              v24);
          }
          else
          {
            v36 = (char *)v1 + 320;
            if ( v35 >= 8 )
              v36 = *v33;
            *((_QWORD *)v1 + 42) = v34;
            v37 = 2 * v34;
            memmove(v36, v24, 2 * v34);
            *(_WORD *)&v36[v37] = 0;
          }
          *((_QWORD *)v1 + 44) = v102;
          v39 = (char **)((char *)v1 + 360);
          v40 = -1LL;
          do
            ++v40;
          while ( v22[v40] );
          v41 = *((_QWORD *)v1 + 48);
          if ( v40 > v41 )
          {
            std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
              (__int64)v39,
              v40,
              v38,
              v22);
          }
          else
          {
            v42 = (char *)v1 + 360;
            if ( v41 >= 8 )
              v42 = *v39;
            *((_QWORD *)v1 + 47) = v40;
            v43 = 2 * v40;
            memmove(v42, v22, 2 * v40);
            *(_WORD *)&v42[v43] = 0;
          }
          *((_DWORD *)v1 + 98) = v100;
          *((_DWORD *)v1 + 99) = v23;
          if ( Size[1] >= 0x10 )
            std::_Deallocate((void *)Src, Size[1] + 1, 1uLL);
          InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v108, &v114);
          if ( v108 )
          {
            v114 = qword_18014C2B8;
            qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
          }
          v44 = *((_QWORD *)v114 + 1);
          if ( *(_DWORD *)v44 <= 5u )
            goto LABEL_82;
          v45 = v132;
          if ( (v132 & 2) == 0 )
          {
            if ( std::streambuf::pptr(&v129) )
            {
              v46 = std::streambuf::pptr(&v129);
              v47 = v131;
              if ( v131 < v46 )
                v47 = std::streambuf::pptr(&v129);
              v48 = v47 - std::streambuf::pbase(&v129);
              v49 = (const void *)std::streambuf::pbase(&v129);
              v143 = _mm_load_si128((const __m128i *)&_xmm);
              LOBYTE(v142) = 0;
              if ( v48 > 0xF )
              {
                std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
                  &v142,
                  v48,
                  v50,
                  v49);
              }
              else
              {
                v143.m128i_i64[0] = v48;
                memmove(&v142, v49, v48);
                *((_BYTE *)&v142 + v48) = 0;
              }
              *(_OWORD *)v138 = v142;
              v139 = v143;
              v143 = _mm_load_si128((const __m128i *)&_xmm);
              LOBYTE(v142) = 0;
              goto LABEL_70;
            }
            v45 = v132;
          }
          if ( (v45 & 4) != 0 || !std::streambuf::gptr(&v129) )
          {
            LOBYTE(v149[0]) = 0;
            *(_OWORD *)v138 = v149[0];
            v139 = _mm_load_si128((const __m128i *)&_xmm);
            v149[1] = v139;
            LOBYTE(v149[0]) = 0;
            v93 = v149;
          }
          else
          {
            v90 = std::streambuf::egptr(&v129);
            v91 = std::streambuf::eback(&v129);
            v92 = std::streambuf::eback(&v129);
            std::string::string(&v146, v92, v90 - v91);
            *(_OWORD *)v138 = v146;
            v139 = v147;
            v147 = _mm_load_si128((const __m128i *)&_xmm);
            LOBYTE(v146) = 0;
            v93 = &v146;
          }
          std::string::_Tidy_deallocate(v93);
LABEL_70:
          v51 = v138;
          if ( v139.m128i_i64[1] >= 0x10uLL )
            v51 = (void **)v138[0];
          v52 = MultiByteStr;
          LODWORD(v53) = 0;
          if ( v51 )
          {
            v52 = (const CHAR *)v51;
            v53 = -1LL;
            do
              ++v53;
            while ( *((_BYTE *)v51 + v53) );
          }
          v156 = v52;
          v157 = v53 + 1;
          v158 = 0;
          v159 = (char *)v1 + 528;
          v160 = 8LL;
          v54 = (CAudioSession *)*((_QWORD *)v1 + 8);
          v55 = *(__int64 (**)(void))(*(_QWORD *)v54 + 64LL);
          if ( (char *)v55 == (char *)CAudioSession::GetIdentifier )
            v56 = CAudioSession::GetIdentifier(v54);
          else
            v56 = (const unsigned __int16 *)v55();
          v57 = &word_180104218;
          LODWORD(v58) = 0;
          if ( v56 )
          {
            v57 = v56;
            v58 = -1LL;
            do
              ++v58;
            while ( v56[v58] );
          }
          v161 = v57;
          v162 = 2 * v58 + 2;
          v163 = 0;
          v109 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 9) + 40LL))(*((_QWORD *)v1 + 9));
          v164 = &v109;
          v165 = 4LL;
          v166 = (char *)v1 + 92;
          v167 = 4LL;
          v124[0] = ((unsigned int)&unk_18010EF89 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v124[1] = 5;
          v125 = 0LL;
          v150 = *(unsigned __int16 **)(v44 + 8);
          v151 = *v150;
          v152 = 2;
          v153 = &unk_18010EF94;
          v154 = 97;
          v155 = 1;
          EtwEventWriteTransfer(*(_QWORD *)(v44 + 32), v124, 0LL, 0LL, 7, &v150);
          if ( v139.m128i_i64[1] >= 0x10uLL )
            std::_Deallocate(v138[0], v139.m128i_i64[1] + 1, 1uLL);
LABEL_82:
          *(_QWORD *)((char *)v127 + *(int *)(v127[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
          *(int *)((char *)&v126 + *(int *)(v127[0] + 4LL)) = *(_DWORD *)(v127[0] + 4LL) - 152;
          v129 = &std::stringbuf::`vftable';
          if ( (v132 & 1) != 0 )
          {
            if ( std::streambuf::pptr(&v129) )
              v59 = std::streambuf::epptr(&v129);
            else
              v59 = std::streambuf::egptr(&v129);
            v60 = v59;
            v61 = std::streambuf::eback(&v129);
            if ( (unsigned __int64)(v60 - std::streambuf::eback(&v129)) >= 0x1000 )
            {
              if ( (v61 & 0x1F) != 0 || (v94 = *(_QWORD *)(v61 - 8), v94 >= v61) || v61 - v94 - 8 > 0x1F )
              {
                _o__invalid_parameter_noinfo_noreturn(v62);
                v2 = 0;
                v1 = v123;
                goto LABEL_89;
              }
              v61 = *(_QWORD *)(v61 - 8);
            }
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, (LPVOID)v61);
          }
          std::streambuf::setg(&v129, 0LL, 0LL, 0LL);
          std::streambuf::setp(&v129, 0LL, 0LL);
          v131 = 0LL;
          v132 &= ~1u;
          std::streambuf::~streambuf<char,std::char_traits<char>>(&v129);
          std::iostream::~basic_iostream<char,std::char_traits<char>>(v130);
          std::ios::~ios<char,std::char_traits<char>>(v133);
LABEL_88:
          v2 = v101;
LABEL_89:
          v64 = *((_QWORD *)v1 + 22);
          if ( v64 )
          {
            v116 = 0LL;
            v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void ****))(*(_QWORD *)v64 + 32LL))(
                    v64,
                    *((unsigned int *)v1 + 21),
                    *((_QWORD *)v1 + 15),
                    &v116);
            v2 = v65;
            if ( v65 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x734,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                (const char *)(unsigned int)v65,
                1);
            if ( v2 == -2147417848 )
            {
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids);
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)v1 + 22);
              v2 = 0;
            }
          }
          v119 = (LPCRITICAL_SECTION)((char *)v1 + 408);
          v120 = 0;
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v119);
          v99 = 0.0;
          v66 = (CPerStreamVolumeAudioStream *)((char *)v1 + 8);
          v67 = *(__int64 (__fastcall **)(CAudioStream *__hidden, float *))(*((_QWORD *)v1 + 1) + 88LL);
          if ( v67 == CAudioStream::GetMaxStreamChannelVolume )
            CAudioStream::GetMaxStreamChannelVolume(v66, &v99);
          else
            v67(v66, &v99);
          v102 = *((_QWORD *)v1 + 56);
          while ( v102 )
          {
            Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                               v68,
                               &v102);
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*Next + 24LL))(*Next, *((_QWORD *)v1 + 6));
          }
          if ( v120 )
            LeaveCriticalSection(v119);
          if ( v122 )
            LeaveCriticalSection(v121);
          goto LABEL_100;
        }
        v14 = v132;
      }
      if ( (v14 & 4) != 0 || !std::streambuf::gptr(&v129) )
      {
        LOBYTE(v148[0]) = 0;
        Src = v148[0];
        *(__m128i *)Size = _mm_load_si128((const __m128i *)&_xmm);
        v148[1] = *(_OWORD *)Size;
        LOBYTE(v148[0]) = 0;
        v89 = v148;
      }
      else
      {
        v86 = std::streambuf::egptr(&v129);
        v87 = std::streambuf::eback(&v129);
        v88 = std::streambuf::eback(&v129);
        std::string::string(&v144, v88, v86 - v87);
        Src = v144;
        *(__m128i *)Size = v145;
        v145 = _mm_load_si128((const __m128i *)&_xmm);
        LOBYTE(v144) = 0;
        v89 = &v144;
      }
      std::string::_Tidy_deallocate(v89);
      goto LABEL_32;
    }
  }
LABEL_100:
  v69 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *__hidden))(*(_QWORD *)v1 + 48LL);
  if ( v69 == CPerStreamVolumeAudioStream::ResetVolumeRampDelays )
    CPerStreamVolumeAudioStream::ResetVolumeRampDelays(v1);
  else
    v69(v1);
  return v2;
}
