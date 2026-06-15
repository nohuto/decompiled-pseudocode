/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400448E0
 * Callers:
 *     ?CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001E6D0 (-CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x140001310 (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x140001BA0 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140030BF8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x140030DE0 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x140030E68 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  int Stream; // eax
  WINBOOL *v19; // rbx
  LPVOID Context; // [rsp+30h] [rbp-B8h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-A8h] BYREF
  int v23; // [rsp+48h] [rbp-A0h]
  struct SYSTEM_AUDIO_STREAM *v24; // [rsp+50h] [rbp-98h]
  __int64 v25; // [rsp+58h] [rbp-90h]
  WINBOOL *v26; // [rsp+60h] [rbp-88h] BYREF
  HANDLE Parameter[6]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v28; // [rsp+98h] [rbp-50h]
  __int128 v29; // [rsp+A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v25 = -2LL;
  v4 = a4;
  v24 = a4;
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_14008A158;
    qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v23 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&lpCriticalSection, v9, v10);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v8,
    L"CStreamGroup::CreateStream");
  v28 = *((_OWORD *)a2 + 3);
  v29 = v28;
  EtwEventActivityIdControl(4LL, &v29);
  if ( !*((_BYTE *)this + 297) )
  {
    Stream = CSubmixImpl::CreateStream((CStreamGroup *)((char *)this + 24), a2, a3, v4);
    v13 = Stream;
    if ( Stream < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6E,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)Stream);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  LOBYTE(v23) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Context = 0LL;
  v11 = CStreamInstance::CreateStreamInstance(&Context, *((_DWORD *)a2 + 3), *(_DWORD *)a2, (__int64)this, 0LL);
  v13 = v11;
  if ( v11 >= 0 )
  {
    try
    {
      v16 = Context;
      *(_QWORD *)fPending = Context;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
        (__int64 *)this + 7,
        (__int64 *)fPending,
        v12);
    }
    catch ( ATL::CAtlException *v26 )
    {
      v19 = v26;
      if ( *v26 == -1073741571 )
        _o__resetstkoflw();
      fPending[0] = *v19;
      v13 = fPending[0];
      if ( fPending[0] < 0 )
      {
        v14 = (unsigned int)fPending[0];
        v15 = 100LL;
        goto LABEL_8;
      }
      v16 = Context;
      v4 = v24;
    }
    *((_QWORD *)v4 + 6) = v16[1];
    if ( (_BYTE)v23 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_17:
    v13 = 0;
    goto LABEL_18;
  }
  v14 = (unsigned int)v11;
  v15 = 96LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)v14);
  if ( Context )
    CStreamInstance::`scalar deleting destructor'((CStreamInstance *)Context);
  if ( (_BYTE)v23 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_18:
  EtwEventActivityIdControl(4LL, &v29);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  return v13;
}
