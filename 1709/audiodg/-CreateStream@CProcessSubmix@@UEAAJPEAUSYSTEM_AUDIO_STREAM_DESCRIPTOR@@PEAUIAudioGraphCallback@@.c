/*
 * XREFs of ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400018D0
 * Callers:
 *     ?CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001F0F0 (-CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallbac.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x140001310 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::CreateStream(
        CProcessSubmix *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  DWORD v8; // ebx
  void *v9; // rcx
  DWORD CurrentThreadId; // eax
  int Stream; // eax
  unsigned int v12; // ebx
  void (__stdcall *v14)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v15; // r8
  DWORD DueTime; // [rsp+28h] [rbp-29h]
  LPVOID Context; // [rsp+48h] [rbp-9h] BYREF
  union _RTL_RUN_ONCE *v18; // [rsp+50h] [rbp-1h] BYREF
  int v19; // [rsp+58h] [rbp+7h]
  void *phNewTimer[2]; // [rsp+60h] [rbp+Fh] BYREF
  DWORD v21; // [rsp+70h] [rbp+1Fh]
  const wchar_t *v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+80h] [rbp+2Fh]
  char v24; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  WINBOOL fPending; // [rsp+B8h] [rbp+67h] BYREF

  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v18 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_14008A158;
    qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v19 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v18, v14, v15);
  }
  v8 = g_AudioDgWatchDogTimerInMs;
  v9 = (void *)*((_QWORD *)Context + 1);
  phNewTimer[0] = 0LL;
  phNewTimer[1] = v9;
  CurrentThreadId = GetCurrentThreadId();
  v23 = 0LL;
  v21 = CurrentThreadId;
  v22 = L"CProcessSubmix::CreateStream";
  v24 = 0;
  if ( v8 >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, v8, 0, 0x20u);
  Stream = CSubmixImpl::CreateStream((CProcessSubmix *)((char *)this + 16), a2, a3, a4);
  v12 = Stream;
  if ( Stream < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x49,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)Stream,
      DueTime);
  else
    v12 = 0;
  CWatchdogTimer::~CWatchdogTimer(phNewTimer);
  return v12;
}
