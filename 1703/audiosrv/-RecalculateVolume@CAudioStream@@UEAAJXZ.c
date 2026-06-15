/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220
 * Callers:
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x180016950 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x18001AAF0 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18000BFD0 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800166D0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x180016A50 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001A38C (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x18002CC40 (-Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x18007FD1C (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18007FE40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x1800B2928 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this)
{
  CAudioStream *v1; // rdi
  CAudioStream *v2; // r12
  int v3; // esi
  Microsoft::WRL::WeakRef *v4; // rbx
  unsigned int i; // edx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(CPerStreamVolumeAudioStream *, unsigned int, unsigned __int64, bool *, __int64 *); // rax
  int v9; // eax
  int v10; // esi
  _BOOL8 v11; // rdx
  CVolumeStrip *v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(CAudioSession *, unsigned int *); // rax
  int v15; // esi
  _QWORD **v16; // rbx
  __int64 (__fastcall *v17)(CAudioSession *, struct IAudioProcess **); // rax
  __int64 v18; // rax
  unsigned int j; // ebx
  _QWORD *v20; // rbx
  _QWORD *v21; // r13
  _QWORD *v22; // rdx
  const unsigned __int16 *(__fastcall *v23)(CAudioSession *); // rax
  _WORD *v24; // r12
  int v25; // xmm6_4
  _WORD *v26; // rsi
  char *v27; // rbx
  ULONGLONG TickCount64; // r15
  __int64 v29; // rbx
  _QWORD *v30; // rbx
  size_t v31; // r15
  _QWORD *v32; // rcx
  _QWORD *v33; // r13
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // rsi
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  __int64 v42; // rbx
  const CHAR **v43; // rax
  const CHAR *v44; // rcx
  const CHAR *v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rcx
  __int64 (*v48)(void); // rax
  __int64 v49; // rax
  const WCHAR *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rbx
  unsigned __int64 v54; // rsi
  __int64 v55; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v57; // rcx
  float v58; // xmm6_4
  __int64 (__fastcall *v59)(CAudioStream *__hidden, float *); // rax
  CVolumeStrip *v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rax
  void (__fastcall *v64)(CPerStreamVolumeAudioStream *); // rax
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // r8
  void (__fastcall *v69)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int); // rax
  unsigned __int64 v70; // rdx
  AudioSrvVolumeTelemetryStreamVolume *v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rcx
  LPVOID v75; // rax
  const struct _TlgProvider_t *v76; // rbx
  const WCHAR *v77; // rax
  LPCGUID v78; // r8
  LPCGUID v79; // r9
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rsi
  _QWORD *Next; // rax
  int cData; // [rsp+20h] [rbp-378h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-370h]
  bool v85; // [rsp+40h] [rbp-358h] BYREF
  char v86[3]; // [rsp+41h] [rbp-357h] BYREF
  int v87; // [rsp+44h] [rbp-354h]
  int v88; // [rsp+48h] [rbp-350h] BYREF
  float v89; // [rsp+4Ch] [rbp-34Ch] BYREF
  int v90; // [rsp+50h] [rbp-348h]
  _QWORD *v91; // [rsp+58h] [rbp-340h] BYREF
  void ***v92; // [rsp+60h] [rbp-338h] BYREF
  BOOL v93; // [rsp+68h] [rbp-330h] BYREF
  _BYTE v94[4]; // [rsp+6Ch] [rbp-32Ch] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp-328h] BYREF
  WINBOOL v96; // [rsp+74h] [rbp-324h] BYREF
  WINBOOL v97; // [rsp+78h] [rbp-320h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-318h] BYREF
  LPVOID v99; // [rsp+88h] [rbp-310h] BYREF
  LPVOID v100; // [rsp+90h] [rbp-308h] BYREF
  CAudioStream *v101; // [rsp+98h] [rbp-300h]
  __int64 v102; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-2F0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp-2E8h] BYREF
  char v105; // [rsp+B8h] [rbp-2E0h]
  LPCRITICAL_SECTION v106; // [rsp+C0h] [rbp-2D8h] BYREF
  char v107; // [rsp+C8h] [rbp-2D0h]
  LPCRITICAL_SECTION v108; // [rsp+D0h] [rbp-2C8h] BYREF
  char v109; // [rsp+D8h] [rbp-2C0h]
  CAudioStream *v110; // [rsp+E0h] [rbp-2B8h]
  __int64 v111; // [rsp+E8h] [rbp-2B0h] BYREF
  _DWORD v112[2]; // [rsp+F0h] [rbp-2A8h] BYREF
  __int64 v113; // [rsp+F8h] [rbp-2A0h]
  _QWORD v114[2]; // [rsp+100h] [rbp-298h] BYREF
  int *v115; // [rsp+110h] [rbp-288h] BYREF
  void **v116; // [rsp+118h] [rbp-280h] BYREF
  char v117[96]; // [rsp+120h] [rbp-278h] BYREF
  __int64 v118; // [rsp+180h] [rbp-218h]
  int v119; // [rsp+188h] [rbp-210h]
  _BYTE v120[104]; // [rsp+198h] [rbp-200h] BYREF
  __int64 v121; // [rsp+200h] [rbp-198h]
  char v122[16]; // [rsp+208h] [rbp-190h] BYREF
  void *v123; // [rsp+218h] [rbp-180h] BYREF
  unsigned __int64 v124; // [rsp+230h] [rbp-168h]
  void *v125; // [rsp+238h] [rbp-160h] BYREF
  unsigned __int64 v126; // [rsp+250h] [rbp-148h]
  unsigned __int16 *v127; // [rsp+260h] [rbp-138h] BYREF
  int v128; // [rsp+268h] [rbp-130h]
  int v129; // [rsp+26Ch] [rbp-12Ch]
  void *v130; // [rsp+270h] [rbp-128h]
  int v131; // [rsp+278h] [rbp-120h]
  int v132; // [rsp+27Ch] [rbp-11Ch]
  const CHAR *v133; // [rsp+280h] [rbp-118h]
  int v134; // [rsp+288h] [rbp-110h]
  int v135; // [rsp+28Ch] [rbp-10Ch]
  char *v136; // [rsp+290h] [rbp-108h]
  __int64 v137; // [rsp+298h] [rbp-100h]
  const WCHAR *v138; // [rsp+2A0h] [rbp-F8h]
  int v139; // [rsp+2A8h] [rbp-F0h]
  int v140; // [rsp+2ACh] [rbp-ECh]
  int *v141; // [rsp+2B0h] [rbp-E8h]
  __int64 v142; // [rsp+2B8h] [rbp-E0h]
  char *v143; // [rsp+2C0h] [rbp-D8h]
  __int64 v144; // [rsp+2C8h] [rbp-D0h]
  EVENT_DATA_DESCRIPTOR v145; // [rsp+2E0h] [rbp-B8h] BYREF
  BOOL *v146; // [rsp+300h] [rbp-98h]
  __int64 v147; // [rsp+308h] [rbp-90h]
  void ****v148; // [rsp+310h] [rbp-88h]
  __int64 v149; // [rsp+318h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+320h] [rbp-78h] BYREF
  _BYTE *v151; // [rsp+330h] [rbp-68h]
  __int64 v152; // [rsp+338h] [rbp-60h]

  v121 = -2LL;
  v1 = this;
  v110 = this;
  v2 = this;
  v101 = this;
  v90 = 0;
  v3 = 0;
  if ( !*((_QWORD *)this + 22) )
    goto LABEL_121;
  v4 = (CAudioStream *)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
    goto LABEL_121;
  for ( i = 0; i < *((_DWORD *)this + 22); *(_DWORD *)(*((_QWORD *)this + 15) + 4LL * i++) = 1065353216 )
    ;
  v6 = *((_QWORD *)this + 15);
  v7 = *((unsigned int *)this + 22);
  v8 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, unsigned int, unsigned __int64, bool *, __int64 *))(*(_QWORD *)this + 40LL);
  v9 = v8 == CPerStreamVolumeAudioStream::CalculateAPOVolume
     ? CPerStreamVolumeAudioStream::CalculateAPOVolume(this, v7, v6, &v85, &v102)
     : v8(this, v7, v6, &v85, &v102);
  v3 = v9;
  v87 = v9;
  if ( v9 < 0 )
    goto LABEL_121;
  v108 = (LPCRITICAL_SECTION)((char *)v1 + 136);
  v109 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v108);
  if ( *(_QWORD *)v4 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)v4 + 24LL))(*(_QWORD *)v4, v86);
    v87 = v10;
    if ( v10 == -2147417848 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids);
      }
      v86[0] = 0;
      Microsoft::WRL::WeakRef::~WeakRef(v4);
      v10 = 0;
      v87 = 0;
    }
    if ( *(_QWORD *)v4 )
    {
      if ( !v10 )
      {
        v11 = v85;
        if ( (v86[0] != 0) != v85 )
        {
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              44LL,
              &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
              v1,
              v85);
            v11 = v85;
          }
          v72 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8, _QWORD, _QWORD, _QWORD))(**(_QWORD **)v4 + 32LL))(
                  *(_QWORD *)v4,
                  v11,
                  0LL,
                  0LL,
                  0LL);
          v87 = v72;
          if ( v72 < 0 )
          {
            if ( v72 == -2147417848 )
            {
              if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids);
              }
              Microsoft::WRL::WeakRef::~WeakRef(v4);
              v87 = 0;
            }
            else
            {
              AudSrvTraceLoggingErrorHelper("CAudioStream::RecalculateVolume", 0x752u, v72);
            }
          }
          else
          {
            v73 = *((_QWORD *)v1 + 8);
            if ( v73 )
            {
              if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v73 + 128LL))(v73, v94) >= 0 )
              {
                v75 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v74,
                        lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                v76 = (const struct _TlgProvider_t *)*((_QWORD *)v75 + 1);
                if ( *(_DWORD *)v76 > 4u )
                {
                  if ( TlgKeywordOn(*((TraceLoggingHProvider *)v75 + 1), 0x400000000000uLL) )
                  {
                    v93 = v85;
                    v146 = &v93;
                    v147 = 4LL;
                    v92 = (void ***)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v1 + 1) + 72LL))((__int64)v1 + 8);
                    v148 = &v92;
                    v149 = 8LL;
                    v77 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 8) + 64LL))(*((_QWORD *)v1 + 8));
                    TlgCreateWsz(&pDesc, v77);
                    v151 = v94;
                    v152 = 4LL;
                    TlgWrite(v76, &unk_1800F8FC5, v78, v79, 6u, &v145);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v111 = 0LL;
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, v1);
    v12 = WPP_GLOBAL_Control;
  }
  try
  {
    v13 = *((_QWORD *)v1 + 8);
    if ( !v13 )
      goto LABEL_205;
    v14 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v13 + 128LL);
    if ( v14 == CAudioSession::GetProcessId )
    {
      v15 = 0;
      if ( v12 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 5u )
      {
        WPP_SF_S(*((_QWORD *)v12 + 2), 15LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, *(_QWORD *)(v13 + 864));
      }
      if ( *(_DWORD *)(v13 + 856) )
      {
        v15 = 143196173;
        v88 = *(_DWORD *)(v13 + 348);
      }
      else
      {
        v88 = *(_DWORD *)(v13 + 848);
      }
    }
    else
    {
      v15 = v14(*((CAudioSession **)v1 + 8), (unsigned int *)&v88);
    }
    if ( v15 < 0 )
      goto LABEL_205;
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
    if ( !*((_QWORD *)Context + 1) )
      goto LABEL_205;
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v96, &v99);
    if ( v96 )
    {
      v99 = qword_18012BF30;
      qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
    }
    if ( **((_DWORD **)v99 + 1) <= 4u )
      goto LABEL_205;
    v91 = 0LL;
    v16 = (_QWORD **)*((_QWORD *)v1 + 8);
    v17 = (__int64 (__fastcall *)(CAudioSession *, struct IAudioProcess **))(*v16)[3];
    if ( v17 == CAudioSession::GetProcess )
    {
      (*(void (__fastcall **)(_QWORD *))(*v16[109] + 8LL))(v16[109]);
      v91 = v16[109];
    }
    else if ( (int)v17(*((CAudioSession **)v1 + 8), (struct IAudioProcess **)&v91) < 0 )
    {
LABEL_102:
      if ( v91 )
        (*(void (__fastcall **)(_QWORD *))(*v91 + 16LL))(v91);
      goto LABEL_205;
    }
    v114[0] = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::istream'};
    v115 = (int *)&std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
    std::ios::ios(v120);
    v90 = 1;
    std::iostream::basic_iostream<char>(v114, &v116, 0LL);
    *(_QWORD *)((char *)v114 + *(int *)(v114[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
    *(_DWORD *)((char *)&v113 + *(int *)(v114[0] + 4LL) + 4) = *(_DWORD *)(v114[0] + 4LL) - 152;
    v92 = &v116;
    std::streambuf::streambuf(&v116);
    v116 = &std::stringbuf::`vftable';
    v118 = 0LL;
    v119 = 0;
    v18 = std::setprecision(v122, 3LL);
    (*(void (__fastcall **)(char *, _QWORD))v18)((char *)&v115 + v115[1], *(_QWORD *)(v18 + 8));
    std::ostream::operator<<(&v115, std::fixed);
    std::ostream::operator<<(&v115);
    for ( j = 1; j < *((_DWORD *)v1 + 22); ++j )
    {
      v66 = std::operator<<<std::char_traits<char>>((__int64)&v115);
      std::ostream::operator<<(v66);
    }
    v20 = v91;
    v21 = (_QWORD *)std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v114, &v123);
    v22 = (_QWORD *)*((_QWORD *)v1 + 8);
    v23 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(*v22 + 64LL);
    if ( v23 == CAudioSession::GetIdentifier )
      v24 = (_WORD *)v22[108];
    else
      v24 = (_WORD *)v23(*((CAudioSession **)v1 + 8));
    v25 = *((_DWORD *)v1 + 24);
    v90 = v88;
    v92 = (void ***)*((_QWORD *)v1 + 66);
    v26 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 72LL))(v20);
    v27 = (char *)v1 + 216;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 248);
    v105 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    TickCount64 = GetTickCount64();
    if ( *((_QWORD *)v1 + 28) )
    {
      v29 = *((_QWORD *)v1 + 28);
      if ( GetTickCount64() - v29 > 0x3E8 )
      {
        v68 = *((unsigned int *)v1 + 60);
        v69 = (void (__fastcall *)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int))**((_QWORD **)v1 + 27);
        v70 = v29 - *((_QWORD *)v1 + 29);
        v27 = (char *)v1 + 216;
        v71 = (CAudioStream *)((char *)v1 + 216);
        if ( v69 == AudioSrvVolumeTelemetryStreamVolume::Fire )
          AudioSrvVolumeTelemetryStreamVolume::Fire(v71, v70, v68);
        else
          v69(v71, v70, v68);
        *((_DWORD *)v1 + 60) = 0;
        *((_QWORD *)v1 + 29) = TickCount64;
LABEL_43:
        *((_QWORD *)v27 + 1) = TickCount64;
        if ( v105 )
          LeaveCriticalSection(lpCriticalSection);
        v30 = v27 + 72;
        if ( v30 == v21 )
          goto LABEL_57;
        v31 = v21[2];
        if ( v31 == -1LL )
        {
          v31 = -1LL;
        }
        else if ( !v31 )
        {
          v30[2] = 0LL;
          if ( v30[3] >= 0x10uLL )
            v30 = (_QWORD *)*v30;
          *(_BYTE *)v30 = 0;
          goto LABEL_57;
        }
        if ( v30[3] < v31 )
          std::string::_Copy(v30);
        if ( v21[3] >= 0x10uLL )
          v21 = (_QWORD *)*v21;
        if ( v30[3] >= 0x10uLL )
          v32 = (_QWORD *)*v30;
        else
          v32 = v30;
        memcpy_0(v32, v21, v31);
        v30[2] = v31;
        if ( v30[3] >= 0x10uLL )
          v30 = (_QWORD *)*v30;
        *((_BYTE *)v30 + v31) = 0;
LABEL_57:
        v33 = (_QWORD *)((char *)v1 + 320);
        v34 = -1LL;
        do
          ++v34;
        while ( v26[v34] );
        v35 = *((_QWORD *)v1 + 43);
        if ( v35 >= 8 )
          v36 = (_QWORD *)*v33;
        else
          v36 = (_QWORD *)((char *)v1 + 320);
        if ( v36 > (_QWORD *)v26 || v26 >= (_WORD *)v36 + *((_QWORD *)v1 + 42) )
        {
          if ( v34 )
          {
            if ( v35 < v34 )
              std::wstring::_Copy((const void **)v1 + 40, v34);
            if ( *((_QWORD *)v1 + 43) < 8uLL )
              v67 = (_QWORD *)((char *)v1 + 320);
            else
              v67 = (_QWORD *)*v33;
            memcpy_0(v67, v26, 2 * v34);
            *((_QWORD *)v1 + 42) = v34;
            if ( *((_QWORD *)v1 + 43) >= 8uLL )
              v33 = (_QWORD *)*v33;
            *((_WORD *)v33 + v34) = 0;
          }
          else
          {
            *((_QWORD *)v1 + 42) = 0LL;
            if ( v35 >= 8 )
              v33 = (_QWORD *)*v33;
            *(_WORD *)v33 = 0;
          }
        }
        else
        {
          std::wstring::assign((char *)v1 + 320);
        }
        *((_QWORD *)v1 + 44) = v92;
        v37 = (_QWORD *)((char *)v1 + 360);
        v38 = -1LL;
        do
          ++v38;
        while ( v24[v38] );
        v39 = *((_QWORD *)v1 + 48);
        if ( v39 < 8 )
          v40 = (_QWORD *)((char *)v1 + 360);
        else
          v40 = (_QWORD *)*v37;
        if ( v40 > (_QWORD *)v24 || v24 >= (_WORD *)v40 + *((_QWORD *)v1 + 47) )
        {
          if ( v38 )
          {
            if ( v39 < v38 )
              std::wstring::_Copy((const void **)v1 + 45, v38);
            if ( *((_QWORD *)v1 + 48) < 8uLL )
              v41 = (_QWORD *)((char *)v1 + 360);
            else
              v41 = (_QWORD *)*v37;
            memcpy_0(v41, v24, 2 * v38);
            *((_QWORD *)v1 + 47) = v38;
            if ( *((_QWORD *)v1 + 48) >= 8uLL )
              v37 = (_QWORD *)*v37;
            *((_WORD *)v37 + v38) = 0;
          }
          else
          {
            *((_QWORD *)v1 + 47) = 0LL;
            if ( v39 >= 8 )
              v37 = (_QWORD *)*v37;
            *(_WORD *)v37 = 0;
          }
        }
        else
        {
          std::wstring::assign((char *)v1 + 360);
        }
        *((_DWORD *)v1 + 98) = v90;
        *((_DWORD *)v1 + 99) = v25;
        if ( v124 >= 0x10 )
          std::_Deallocate(v123, v124 + 1, 1uLL);
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v97, &v100);
        if ( v97 )
        {
          v100 = qword_18012BF30;
          qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
        }
        v42 = *((_QWORD *)v100 + 1);
        if ( *(_DWORD *)v42 > 5u )
        {
          v43 = (const CHAR **)std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(
                                 v114,
                                 &v125);
          v44 = (const CHAR *)v43;
          if ( (unsigned __int64)v43[3] >= 0x10 )
            v44 = *v43;
          v45 = MultiByteStr;
          LODWORD(v46) = 0;
          if ( v44 )
          {
            v45 = v44;
            v46 = -1LL;
            do
              ++v46;
            while ( v44[v46] );
          }
          v133 = v45;
          v134 = v46 + 1;
          v135 = 0;
          v136 = (char *)v1 + 528;
          v137 = 8LL;
          v47 = (_QWORD *)*((_QWORD *)v1 + 8);
          v48 = *(__int64 (**)(void))(*v47 + 64LL);
          if ( (char *)v48 == (char *)CAudioSession::GetIdentifier )
            v49 = v47[108];
          else
            v49 = v48();
          v50 = &word_1800EAD74;
          LODWORD(v51) = 0;
          if ( v49 )
          {
            v50 = (const WCHAR *)v49;
            v51 = -1LL;
            do
              ++v51;
            while ( *(_WORD *)(v49 + 2 * v51) );
          }
          v138 = v50;
          v139 = 2 * v51 + 2;
          v140 = 0;
          v141 = &v88;
          v142 = 4LL;
          v143 = (char *)v1 + 96;
          v144 = 4LL;
          v112[0] = ((unsigned int)&unk_1800F8F51 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v112[1] = 5;
          v113 = 0LL;
          v127 = *(unsigned __int16 **)(v42 + 8);
          v128 = *v127;
          v129 = 2;
          v130 = &unk_1800F8F5C;
          v131 = 104;
          v132 = 1;
          pData = (EVENT_DATA_DESCRIPTOR *)&v127;
          cData = 7;
          EtwEventWriteTransfer(*(_QWORD *)(v42 + 32), v112, 0LL, 0LL);
          if ( v126 >= 0x10 )
            std::_Deallocate(v125, v126 + 1, 1uLL);
        }
        *(_QWORD *)((char *)v114 + *(int *)(v114[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
        *(_DWORD *)((char *)&v113 + *(int *)(v114[0] + 4LL) + 4) = *(_DWORD *)(v114[0] + 4LL) - 152;
        v116 = &std::stringbuf::`vftable';
        if ( (v119 & 1) != 0 )
        {
          if ( std::streambuf::pptr(&v116) )
            v52 = std::streambuf::epptr(&v116);
          else
            v52 = std::streambuf::egptr(&v116);
          v53 = v52;
          v54 = std::streambuf::eback(&v116);
          if ( (unsigned __int64)(v53 - std::streambuf::eback(&v116)) >= 0x1000 )
          {
            if ( (v54 & 0x1F) != 0 )
            {
              _o__invalid_parameter_noinfo_noreturn(v55);
              JUMPOUT(0x18006AE36LL);
            }
            v80 = *(_QWORD *)(v54 - 8);
            if ( v80 >= v54 )
            {
              _o__invalid_parameter_noinfo_noreturn(v55);
              JUMPOUT(0x18006AE46LL);
            }
            v81 = v54 - v80;
            if ( v81 < 8 )
            {
              _o__invalid_parameter_noinfo_noreturn(v55);
              JUMPOUT(0x18006AE56LL);
            }
            if ( v81 > 0x27 )
            {
              _o__invalid_parameter_noinfo_noreturn(v55);
              JUMPOUT(0x18006AE63LL);
            }
            v54 = v80;
          }
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, (LPVOID)v54);
        }
        std::streambuf::setg(&v116, 0LL, 0LL, 0LL, cData, pData);
        std::streambuf::setp(&v116, 0LL, 0LL);
        v118 = 0LL;
        v119 &= ~1u;
        std::streambuf::~streambuf<char,std::char_traits<char>>(&v116);
        std::iostream::~basic_iostream<char,std::char_traits<char>>(v117);
        std::ios::~ios<char,std::char_traits<char>>(v120);
        v2 = v101;
        goto LABEL_102;
      }
      v27 = (char *)v1 + 216;
    }
    ++*((_DWORD *)v27 + 6);
    goto LABEL_43;
  }
  catch ( ... )
  {
    v1 = v110;
    v2 = v110;
  }
LABEL_205:
  v3 = v87;
  v57 = *((_QWORD *)v1 + 22);
  if ( v57 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, int, __int64 *))(*(_QWORD *)v57 + 32LL))(
           v57,
           *((unsigned int *)v1 + 22),
           *((_QWORD *)v1 + 15),
           &v111,
           1,
           &v102);
    if ( v3 == -2147417848 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids);
      }
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)v1 + 176));
      v3 = 0;
    }
  }
  v106 = (LPCRITICAL_SECTION)((char *)v1 + 408);
  v107 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v106);
  v58 = 0.0;
  v89 = 0.0;
  v59 = *(__int64 (__fastcall **)(CAudioStream *__hidden, float *))(*((_QWORD *)v1 + 1) + 80LL);
  if ( v59 == CAudioStream::GetMaxStreamChannelVolume )
  {
    v60 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, v2);
    }
    v89 = 0.0;
    v61 = *((_DWORD *)v1 + 22);
    if ( v61 )
    {
      v60 = 0LL;
      v62 = v61;
      do
      {
        v63 = *((_QWORD *)v1 + 14);
        if ( *(float *)((char *)v60 + v63) > v58 )
        {
          v58 = *(float *)((char *)v60 + v63);
          v89 = v58;
        }
        v60 = (CVolumeStrip *)((char *)v60 + 4);
        --v62;
      }
      while ( v62 );
    }
  }
  else
  {
    v59((CAudioStream *)((char *)v1 + 8), &v89);
  }
  v103 = *((_QWORD *)v1 + 56);
  while ( v103 )
  {
    Next = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                       v60,
                       &v103);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*Next + 24LL))(*Next, *((_QWORD *)v1 + 6));
  }
  if ( v107 )
    LeaveCriticalSection(v106);
  if ( v109 )
    LeaveCriticalSection(v108);
LABEL_121:
  v64 = *(void (__fastcall **)(CPerStreamVolumeAudioStream *))(*(_QWORD *)v1 + 48LL);
  if ( v64 == CPerStreamVolumeAudioStream::ResetVolumeRampDelays )
  {
    *((_QWORD *)v1 + 13) = 0LL;
    *((_QWORD *)v1 + 70) = 0LL;
  }
  else
  {
    v64(v1);
  }
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::RecalculateVolume", 0x7A4u, v3);
  return (unsigned int)v3;
}
