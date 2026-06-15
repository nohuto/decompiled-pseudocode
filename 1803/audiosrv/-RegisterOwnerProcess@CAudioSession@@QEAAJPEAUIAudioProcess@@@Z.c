/*
 * XREFs of ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800AC664
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$emplace_back@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800179F4 (--$emplace_back@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com_.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::RegisterOwnerProcess(CAudioSession *this, struct IAudioProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // eax
  unsigned int v5; // esi
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rsi
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  struct IAudioProcess *v12; // [rsp+30h] [rbp-98h] BYREF
  __int128 v13; // [rsp+38h] [rbp-90h] BYREF
  __int64 v14; // [rsp+48h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp-78h]
  __int128 v16; // [rsp+58h] [rbp-70h]
  char v17; // [rsp+68h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-38h] BYREF
  __int128 *v20; // [rsp+A0h] [rbp-28h]
  int v21; // [rsp+A8h] [rbp-20h]
  int v22; // [rsp+ACh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v14 = -2LL;
  v12 = a2;
  try
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v15 = v3;
    v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v12 + 24LL))(v12, this);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *(_QWORD *)&v13 = &v12;
      *((_QWORD *)&v13 + 1) = this;
      v16 = v13;
      v17 = 1;
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
        &v13,
        (__int64)v12);
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        (char **)this + 97,
        (char **)&v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
      v17 = 0;
      if ( *((_BYTE *)this + 800) )
        *((_BYTE *)this + 800) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v12 + 96LL))(v12) != 0;
      v9 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                        v8,
                                                        lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                          + 1);
      if ( *(_DWORD *)v9 > 4u )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 91));
        LODWORD(v13) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v12 + 40LL))(v12);
        v20 = &v13;
        v21 = 4;
        v22 = 0;
        TlgWrite(v9, &unk_180145339, v10, v11, 4u, &pData);
      }
      if ( v3 )
        LeaveCriticalSection(v3);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x79D,
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
                           (void *)0x7B8,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
