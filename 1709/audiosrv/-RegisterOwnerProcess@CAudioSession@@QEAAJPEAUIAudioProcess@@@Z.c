/*
 * XREFs of ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x180074FC4
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     ??$emplace_back@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002FC84 (--$emplace_back@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18005B384 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::RegisterOwnerProcess(CAudioSession *this, struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // r9
  __int64 result; // rax
  void *v8; // r8
  const struct _TlgProvider_t *v9; // rdi
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  struct IAudioProcess *v13; // [rsp+38h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-98h] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v16; // [rsp+58h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp-78h]
  __int128 v18; // [rsp+68h] [rbp-70h]
  char v19; // [rsp+78h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-38h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp-28h]
  int v23; // [rsp+B8h] [rbp-20h]
  int v24; // [rsp+BCh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v16 = -2LL;
  v13 = a2;
  try
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 800);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 20);
    v17 = v3;
    v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v13 + 24LL))(v13, this);
    v5 = v4;
    if ( v4 >= 0 )
    {
      Context[0] = &v13;
      Context[1] = this;
      v18 = *(_OWORD *)Context;
      v19 = 1;
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
        &v12,
        (__int64)v13);
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        (__int64 **)this + 105,
        &v12);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
      v19 = 0;
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context);
      if ( fPending )
      {
        Context[0] = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v8);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
      if ( *(_DWORD *)v9 > 4u )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 99));
        LODWORD(v12) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v13 + 40LL))(v13);
        v22 = &v12;
        v23 = 4;
        v24 = 0;
        TlgWrite(v9, &unk_18010ED6D, v10, v11, 4u, &pData);
      }
      if ( v3 )
        LeaveCriticalSection(v3);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8E1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v4);
      if ( v3 )
        LeaveCriticalSection(v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8F3,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
