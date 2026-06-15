/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400431D0
 * Callers:
 *     ?CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001D8A0 (-CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ??0?$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x14000184C (--0-$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$01@@QEAA@XZ @ 0x140001918 (--1-$CWatchdogTimer@$01@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x140001B60 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002FC4C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x14002FDF8 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStreamGroup::CreateStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r14
  __int64 *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  CStreamInstance *v15; // rbx
  int Stream; // eax
  ATL::CAtlException *v18; // rbx
  CStreamInstance *v19; // [rsp+30h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-B0h] BYREF
  char v21; // [rsp+40h] [rbp-A8h]
  char *v22; // [rsp+48h] [rbp-A0h] BYREF
  struct SYSTEM_AUDIO_STREAM *v23; // [rsp+50h] [rbp-98h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  ATL::CAtlException *v25; // [rsp+60h] [rbp-88h] BYREF
  struct _TP_TIMER *pv[6]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v27; // [rsp+98h] [rbp-50h]
  __int128 v28; // [rsp+A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v24 = -2LL;
  v4 = a4;
  v23 = a4;
  v8 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         (__int64)this,
         lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  CWatchdogTimer<2>::CWatchdogTimer<2>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v9,
    (struct _TP_TIMER *)L"CStreamGroup::CreateStream",
    (__int64)&pftDueTime);
  v27 = *((_OWORD *)a2 + 3);
  v28 = v27;
  EtwEventActivityIdControl(4LL, &v28);
  if ( !*((_BYTE *)this + 297) )
  {
    Stream = CSubmixImpl::CreateStream((CStreamGroup *)((char *)this + 24), a2, a3, v4);
    v12 = Stream;
    if ( Stream < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)Stream);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v19 = 0LL;
  v10 = CStreamInstance::CreateStreamInstance(&v19, *((_DWORD *)a2 + 3), *(_DWORD *)a2, (__int64)this, 0LL);
  v12 = v10;
  if ( v10 >= 0 )
  {
    try
    {
      v15 = v19;
      v22 = (char *)v19;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
        (__int64 *)this + 7,
        (__int64 *)&v22,
        v11);
    }
    catch ( ATL::CAtlException *v25 )
    {
      v18 = v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v22) = *(_DWORD *)v18;
      v12 = (unsigned int)v22;
      if ( (int)v22 < 0 )
      {
        v13 = (unsigned int)v22;
        v14 = 100LL;
        goto LABEL_6;
      }
      v15 = v19;
      v4 = v23;
    }
    *((_QWORD *)v4 + 6) = *((_QWORD *)v15 + 1);
    if ( v21 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_13:
    v12 = 0;
    goto LABEL_14;
  }
  v13 = (unsigned int)v10;
  v14 = 96LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)v13);
  if ( v19 )
    CStreamInstance::`scalar deleting destructor'(v19);
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_14:
  EtwEventActivityIdControl(4LL, &v28);
  CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
  return v12;
}
