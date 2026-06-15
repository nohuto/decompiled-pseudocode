/*
 * XREFs of ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400025F0
 * Callers:
 *     ?CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001E2C0 (-CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallbac.c)
 * Callees:
 *     ??0?$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x14000184C (--0-$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$01@@QEAA@XZ @ 0x140001918 (--1-$CWatchdogTimer@$01@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::CreateStream(
        CProcessSubmix *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  int Stream; // eax
  unsigned int v11; // ebx
  int pftDueTime; // [rsp+20h] [rbp-48h]
  struct _TP_TIMER *pv[6]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         (__int64)this,
         lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  CWatchdogTimer<2>::CWatchdogTimer<2>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v9,
    (struct _TP_TIMER *)L"CProcessSubmix::CreateStream",
    (__int64)&::pftDueTime);
  Stream = CSubmixImpl::CreateStream((CProcessSubmix *)((char *)this + 16), a2, a3, a4);
  v11 = Stream;
  if ( Stream < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)Stream,
      pftDueTime);
  else
    v11 = 0;
  CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
  return v11;
}
