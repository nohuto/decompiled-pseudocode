/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003E600 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F1C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001F48 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140003A54 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FE20 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x14001BB60 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x14001BB70 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _invalid_parameter_noinfo @ 0x14001DBE8 (_invalid_parameter_noinfo.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002FFF0 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x140039074 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x140039110 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1400392BC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x140039558 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     memmove_s_0 @ 0x1400395F8 (memmove_s_0.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v4; // xmm0
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v5; // r13
  DWORD DueTime; // ebx
  DWORD CurrentThreadId; // eax
  HRESULT Instance; // ebx
  __int64 v12; // rcx
  CAudioDeviceGraph *v13; // rcx
  struct IAudioGraphCallback *v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(CAudioDeviceGraph *__hidden, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int); // rax
  int v17; // eax
  unsigned __int64 v18; // rsi
  struct ATL::CStringData *(__fastcall *v19)(ATL::CAtlStringMgr *__hidden); // rax
  unsigned int *NilString; // rax
  __int64 v21; // rdx
  _BYTE *v22; // rbx
  __int64 v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r15
  int v26; // eax
  __int64 v27; // rcx
  size_t v28; // r8
  void *v29; // rax
  char *v30; // rax
  char *v31; // rcx
  __int64 v32; // rsi
  char **v33; // r15
  ATL::CAtlStringMgr *v34; // rcx
  __int64 (*v35)(void); // rax
  struct ATL::IAtlStringMgr *v36; // rax
  char *v37; // r13
  char *v38; // rax
  char *v39; // rax
  int v40; // edi
  void (__stdcall *v42)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v43; // r8
  HINSTANCE StringResourceInstance; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  void *v48; // rcx
  int v49; // eax
  size_t v50; // r8
  _BYTE *v51; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  char v55; // [rsp+60h] [rbp-A0h]
  LPCRITICAL_SECTION v56; // [rsp+68h] [rbp-98h] BYREF
  char v57; // [rsp+70h] [rbp-90h]
  void *phNewTimer; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+80h] [rbp-80h]
  DWORD v60; // [rsp+88h] [rbp-78h]
  const wchar_t *v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v63; // [rsp+A0h] [rbp-60h]
  union _RTL_RUN_ONCE *v64; // [rsp+A8h] [rbp-58h] BYREF
  int v65; // [rsp+B0h] [rbp-50h]
  _QWORD v66[10]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v67[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v68; // [rsp+160h] [rbp+60h]
  __int128 v69; // [rsp+170h] [rbp+70h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 148);
  v5 = a2;
  v63 = a2;
  *(_OWORD *)((char *)this + 248) = v4;
  v68 = v4;
  v69 = v4;
  EtwEventActivityIdControl(4LL, &v69);
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v64 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_140086158;
    qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v65 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v64, v42, v43);
  }
  DueTime = g_AudioDgWatchDogTimerInMs;
  v59 = *((_QWORD *)Context + 1);
  phNewTimer = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v62 = 0LL;
  v60 = CurrentThreadId;
  v61 = L"CSystemAudioDeviceSharedBase::Initialize";
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, DueTime, 0, 0x20u);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v66, 0, sizeof(v66));
    LOWORD(v66[0]) = 80;
    *(_OWORD *)&v66[3] = AEWMIGUID_PERFORMANCE;
    HIDWORD(v66[5]) = 0x20000;
    WORD2(v66[0]) = 1033;
    v66[6] = 0LL;
    LODWORD(v66[7]) = 0;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v66);
  }
  v56 = (LPCRITICAL_SECTION)((char *)this + 184);
  v57 = 0;
  ATL::CCritSecLock::Lock(&v56);
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_82;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_3c169ff7_37b2_484c_b199_c3155590f316,
               (LPVOID *)this + 41);
  if ( Instance < 0 )
    goto LABEL_82;
  *((_DWORD *)this + 56) = a4;
  if ( *((struct IAudioGraphCallback **)this + 40) != a3 )
  {
    (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)a3 + 8LL))(a3);
    v12 = *((_QWORD *)this + 40);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 40) = a3;
  }
  v13 = (CAudioDeviceGraph *)*((_QWORD *)this + 41);
  v14 = (CSystemAudioDeviceSharedBase *)((char *)this + 8);
  v15 = *((unsigned int *)this + 56);
  *((_DWORD *)this + 60) = *((_DWORD *)v5 + 34);
  v16 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, unsigned int))(*(_QWORD *)v13 + 24LL);
  v17 = v16 == CAudioDeviceGraph::Initialize ? CAudioDeviceGraph::Initialize(v13, v5, v14, v15) : v16(v13, v5, v14, v15);
  Instance = v17;
  if ( v17 < 0 )
    goto LABEL_82;
  *((_DWORD *)this + 8) = *((_DWORD *)v5 + 18);
  *((_DWORD *)this + 88) = *((_DWORD *)v5 + 25);
  v18 = *((_QWORD *)v5 + 7);
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
  v55 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v19 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v19 == ATL::CAtlStringMgr::GetNilString )
    NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = (unsigned int *)v19((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v22 = NilString + 6;
  v51 = NilString + 6;
  if ( !v18 )
    goto LABEL_66;
  if ( (v18 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v18, v21);
    if ( !StringResourceInstance )
      goto LABEL_30;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v51,
      StringResourceInstance,
      (unsigned __int16)v18);
    goto LABEL_67;
  }
  v23 = -1LL;
  do
    ++v23;
  while ( *(_WORD *)(v18 + 2 * v23) );
  if ( !(_DWORD)v23 )
  {
LABEL_66:
    ATL::CSimpleStringT<unsigned short,0>::Empty(&v51);
LABEL_67:
    v22 = v51;
    goto LABEL_30;
  }
  v24 = NilString[2];
  v25 = (__int64)(v18 - (_QWORD)v22) >> 1;
  v26 = NilString[3] - v23;
  v27 = v26 | (unsigned int)(1 - *((_DWORD *)v22 - 2));
  if ( (v26 | (1 - *((_DWORD *)v22 - 2))) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v51, v23);
    v22 = v51;
  }
  if ( v25 <= v24 )
  {
    memmove_s_0(v22, 2LL * (int)v23, &v22[2 * v25], 2LL * (int)v23);
  }
  else
  {
    v28 = 2LL * (int)v23;
    if ( v28 )
    {
      if ( v22 )
      {
        memcpy_0(v22, (const void *)v18, v28);
      }
      else
      {
        *(_DWORD *)_o__errno(v27, v21, v28) = 22;
        invalid_parameter_noinfo();
      }
    }
  }
  ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v51, v23);
LABEL_30:
  v29 = (void *)_o__recalloc(qword_140086290, (int)qword_1400862A0 + 1, 8LL);
  if ( !v29 )
  {
    v40 = 0;
    goto LABEL_42;
  }
  qword_140086290 = v29;
  v30 = (char *)_o__recalloc(qword_140086298, (int)qword_1400862A0 + 1, 8LL);
  v31 = v30;
  if ( !v30 )
  {
    v40 = 0;
    goto LABEL_42;
  }
  v32 = (int)qword_1400862A0;
  qword_140086298 = v30;
  v33 = (char **)((char *)qword_140086290 + 8 * (int)qword_1400862A0);
  if ( v33 )
  {
    v34 = (ATL::CAtlStringMgr *)*((_QWORD *)v22 - 3);
    v35 = *(__int64 (**)(void))(*(_QWORD *)v34 + 32LL);
    if ( (char *)v35 == (char *)ATL::CAtlStringMgr::Clone )
      v36 = ATL::CAtlStringMgr::Clone(v34);
    else
      v36 = (struct ATL::IAtlStringMgr *)v35();
    if ( *((int *)v22 - 2) >= 0 && v36 == *((struct ATL::IAtlStringMgr **)v22 - 3) )
    {
      v37 = v22 - 24;
      _InterlockedIncrement((volatile signed __int32 *)v22 - 2);
      v22 = v51;
LABEL_38:
      v38 = v37 + 24;
      v5 = v63;
      *v33 = v38;
      v31 = (char *)qword_140086298;
      goto LABEL_39;
    }
    v45 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v36)(
            v36,
            *((unsigned int *)v22 - 4),
            2LL);
    v37 = (char *)v45;
    if ( !v45 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    v48 = (void *)(v45 + 24);
    *(_DWORD *)(v45 + 8) = *((_DWORD *)v22 - 4);
    v49 = *((_DWORD *)v22 - 4) + 1;
    if ( !(2LL * v49) )
      goto LABEL_38;
    if ( v37 != (char *)-24LL )
    {
      v50 = 2LL * v49;
      if ( v22 )
      {
        memcpy_0(v48, v22, v50);
        goto LABEL_38;
      }
      memset(v48, 0, v50);
    }
    *(_DWORD *)_o__errno(v48, v46, v47) = 22;
    invalid_parameter_noinfo();
    goto LABEL_38;
  }
LABEL_39:
  v39 = &v31[8 * v32];
  if ( v39 )
    *(_QWORD *)v39 = this;
  LODWORD(qword_1400862A0) = qword_1400862A0 + 1;
  v40 = 1;
LABEL_42:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v22 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v22 - 3) + 8LL))(*((_QWORD *)v22 - 3));
  if ( v55 )
    LeaveCriticalSection(lpCriticalSection);
  *((_DWORD *)this + 85) = v40;
  if ( !v40 )
  {
    Instance = -2147024882;
    goto LABEL_82;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, v5, 1);
  if ( Instance < 0 )
  {
LABEL_82:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 208LL))(this);
    goto LABEL_50;
  }
  if ( *((_DWORD *)this + 88) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState(this, 3LL);
LABEL_50:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v67, 0, sizeof(v67));
    HIDWORD(v67[5]) = 0x20000;
    *(_OWORD *)&v67[3] = AEWMIGUID_PERFORMANCE;
    LOWORD(v67[0]) = 80;
    WORD2(v67[0]) = 1034;
    v67[6] = 0LL;
    LODWORD(v67[7]) = 0;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v67);
  }
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xC1u, Instance);
  }
  PublishDeviceGraphWnfState();
  if ( v57 )
    LeaveCriticalSection(v56);
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    phNewTimer = 0LL;
  }
  if ( v62 )
    (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v62 + 8LL))(v62, v61, v59);
  EtwEventActivityIdControl(4LL, &v69);
  return (unsigned int)Instance;
}
