/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043F30
 * Callers:
 *     ?CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001E9D0 (-CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x14001A350 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140031194 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400312AC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x1400313A0 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1400313E8 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStreamGroup::CreateStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r14
  __int64 v8; // r8
  void (__stdcall *v9)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  int Stream; // eax
  WINBOOL *v18; // rbx
  LPVOID Context; // [rsp+30h] [rbp-B8h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-A8h] BYREF
  int v22; // [rsp+48h] [rbp-A0h]
  struct SYSTEM_AUDIO_STREAM *v23; // [rsp+50h] [rbp-98h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  WINBOOL *v25; // [rsp+60h] [rbp-88h] BYREF
  HANDLE Parameter[5]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v24 = -2LL;
  v4 = a4;
  v23 = a4;
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_140086158;
    qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v22 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&lpCriticalSection, v9, v10);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v8,
    L"CStreamGroup::CreateStream");
  v27 = *((_OWORD *)a2 + 3);
  v28 = v27;
  EtwEventActivityIdControl(4LL, &v28);
  if ( !*((_BYTE *)this + 297) )
  {
    Stream = CSubmixImpl::CreateStream((CStreamGroup *)((char *)this + 24), a2, a3, v4);
    v12 = Stream;
    if ( Stream < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6D,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)Stream);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  LOBYTE(v22) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Context = 0LL;
  v11 = CStreamInstance::CreateStreamInstance(&Context, *((_DWORD *)a2 + 3), *(_DWORD *)a2, (__int64)this, 0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    try
    {
      v15 = Context;
      *(_QWORD *)fPending = Context;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead((_QWORD *)this + 7, fPending);
    }
    catch ( ATL::CAtlException *v25 )
    {
      v18 = v25;
      if ( *v25 == -1073741571 )
        _o__resetstkoflw();
      fPending[0] = *v18;
      v12 = fPending[0];
      if ( fPending[0] < 0 )
      {
        v13 = (unsigned int)fPending[0];
        v14 = 99LL;
        goto LABEL_8;
      }
      v15 = Context;
      v4 = v23;
    }
    *((_QWORD *)v4 + 6) = v15[1];
    if ( (_BYTE)v22 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  v13 = (unsigned int)v11;
  v14 = 95LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)v13);
  if ( Context )
    CStreamInstance::`scalar deleting destructor'((CStreamInstance *)Context);
  if ( (_BYTE)v22 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_18:
  EtwEventActivityIdControl(4LL, &v28);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  return v12;
}
