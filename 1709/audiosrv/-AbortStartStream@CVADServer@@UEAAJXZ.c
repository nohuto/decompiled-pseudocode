/*
 * XREFs of ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x18008A7A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIAudioStreamPreStartContext@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B740 (-reset@-$com_ptr_t@UIAudioStreamPreStartContext@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall CVADServer::AbortStartStream(CVADServer *this)
{
  __int64 v2; // rcx
  void *v3; // r8
  const struct _TlgProvider_t *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  const WCHAR *v7; // rax
  int v8; // eax
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-31h] BYREF
  int v16; // [rsp+3Ch] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-21h] BYREF
  char v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF
  int *v26; // [rsp+A0h] [rbp+37h]
  int v27; // [rsp+A8h] [rbp+3Fh]
  int v28; // [rsp+ACh] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *((_QWORD *)this + 24);
  v14 = 0LL;
  if ( v2 )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v14 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v2 + 8) + 24LL))(v2 + 8, &v14) >= 0 )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
        if ( fPending )
        {
          Context = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v3);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v4 > 4u )
        {
          v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 80LL))(*((_QWORD *)this + 24) + 8LL);
          v6 = *((_QWORD *)this + 21);
          v24 = 0;
          v20 = v5;
          v22 = &v20;
          v23 = 8;
          v7 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
          TlgCreateWsz(&pDesc, v7);
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
          v28 = 0;
          v16 = v8;
          v26 = &v16;
          v27 = 4;
          TlgWrite(v4, &unk_18010F3A9, v9, v10, 5u, &pData);
        }
      }
    }
  }
  if ( !*((_DWORD *)this + 46) )
  {
    v11 = 1840LL;
LABEL_14:
    v12 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_16;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v11 = 1841LL;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v11 = 1842LL;
    goto LABEL_14;
  }
  wil::com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>::reset((__int64 *)this + 56);
  v12 = 0;
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return v12;
}
