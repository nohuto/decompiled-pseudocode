/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FB00
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003EF70 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x140001310 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140014BA4 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14001A604 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002FC38 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v4; // xmm0
  DWORD DueTime; // edi
  DWORD CurrentThreadId; // eax
  HRESULT Instance; // edi
  __int64 v12; // rcx
  CAudioDeviceGraph *v13; // rcx
  struct IAudioGraphCallback *v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(CAudioDeviceGraph *, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, WINBOOL); // rax
  int v17; // eax
  int v18; // eax
  void (__stdcall *v20)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v21; // r8
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  char v24; // [rsp+58h] [rbp-B0h]
  _OWORD v25[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  union _RTL_RUN_ONCE *v28; // [rsp+B8h] [rbp-50h] BYREF
  int v29; // [rsp+C0h] [rbp-48h]
  void *phNewTimer[2]; // [rsp+C8h] [rbp-40h] BYREF
  DWORD v31; // [rsp+D8h] [rbp-30h]
  const wchar_t *v32; // [rsp+E0h] [rbp-28h]
  __int64 v33; // [rsp+E8h] [rbp-20h]
  char v34; // [rsp+F0h] [rbp-18h]
  __int128 v35; // [rsp+F8h] [rbp-10h]
  __int128 v36; // [rsp+108h] [rbp+0h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v35 = v4;
  v36 = v4;
  EtwEventActivityIdControl(4LL, &v36);
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    v28 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_14008A158;
    qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v29 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v28, v20, v21);
  }
  DueTime = g_AudioDgWatchDogTimerInMs;
  phNewTimer[1] = *((void **)Context + 1);
  phNewTimer[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v33 = 0LL;
  v31 = CurrentThreadId;
  v32 = L"CSystemAudioDeviceSharedBase::Initialize";
  v34 = 0;
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, DueTime, 0, 0x20u);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v25, 0, sizeof(v25));
    LOWORD(v25[0]) = 80;
    *(_OWORD *)((char *)&v25[1] + 8) = AEWMIGUID_PERFORMANCE;
    HIDWORD(v25[2]) = 0x20000;
    WORD2(v25[0]) = 1033;
    *(_QWORD *)&v25[3] = 0LL;
    DWORD2(v25[3]) = 0;
    v26 = 0LL;
    v27 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v25);
  }
  Context = (char *)this + 184;
  v24 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&Context);
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_29;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_3c169ff7_37b2_484c_b199_c3155590f316,
               (LPVOID *)this + 41);
  if ( Instance < 0 )
    goto LABEL_29;
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
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  v16 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, WINBOOL))(*(_QWORD *)v13 + 24LL);
  v17 = v16 == CAudioDeviceGraph::Initialize ? CAudioDeviceGraph::Initialize(v13, a2, v14, v15) : v16(v13, a2, v14, v15);
  Instance = v17;
  if ( v17 < 0 )
    goto LABEL_29;
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
  v18 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 85) = v18;
  if ( !v18 )
  {
    Instance = -2147024882;
    goto LABEL_29;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  if ( Instance < 0 )
  {
LABEL_29:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 208LL))(this);
    goto LABEL_20;
  }
  if ( *((_DWORD *)this + 88) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState(this, 3LL);
LABEL_20:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v25, 0, sizeof(v25));
    HIDWORD(v25[2]) = 0x20000;
    *(_OWORD *)((char *)&v25[1] + 8) = AEWMIGUID_PERFORMANCE;
    LOWORD(v25[0]) = 80;
    WORD2(v25[0]) = 1034;
    *(_QWORD *)&v25[3] = 0LL;
    DWORD2(v25[3]) = 0;
    v26 = 0LL;
    v27 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v25);
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
  if ( v24 )
    LeaveCriticalSection((LPCRITICAL_SECTION)Context);
  CWatchdogTimer::~CWatchdogTimer(phNewTimer);
  EtwEventActivityIdControl(4LL, &v36);
  return (unsigned int)Instance;
}
