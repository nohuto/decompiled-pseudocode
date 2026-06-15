/*
 * XREFs of ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002610
 * Callers:
 *     ?CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001F410 (-CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallbac.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::CreateStream(
        CProcessSubmix *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  DWORD v8; // ebx
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  int Stream; // eax
  unsigned int v12; // ebx
  void (__stdcall *v14)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v15; // r8
  DWORD DueTime; // [rsp+20h] [rbp-60h]
  LPVOID Context; // [rsp+40h] [rbp-40h] BYREF
  union _RTL_RUN_ONCE *v18; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-30h]
  void *phNewTimer; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  DWORD v22; // [rsp+68h] [rbp-18h]
  const wchar_t *v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  WINBOOL fPending; // [rsp+A0h] [rbp+20h] BYREF

  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v18 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_140086158;
    qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v18, v14, v15);
  }
  v8 = g_AudioDgWatchDogTimerInMs;
  v9 = *((_QWORD *)Context + 1);
  phNewTimer = 0LL;
  v21 = v9;
  CurrentThreadId = GetCurrentThreadId();
  v24 = 0LL;
  v22 = CurrentThreadId;
  v23 = L"CProcessSubmix::CreateStream";
  if ( v8 >= 0x3E8 )
    CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, v8, 0, 0x20u);
  Stream = CSubmixImpl::CreateStream((CProcessSubmix *)((char *)this + 16), a2, a3, a4);
  v12 = Stream;
  if ( Stream < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x46,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)Stream,
      DueTime);
  else
    v12 = 0;
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    phNewTimer = 0LL;
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v24 + 8LL))(v24, v23, v21);
  return v12;
}
