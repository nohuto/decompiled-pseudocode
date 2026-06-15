/*
 * XREFs of ?PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z @ 0x18008C490
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
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

__int64 __fastcall CVADServer::PreStartStream(__int64 a1, int a2)
{
  __int64 v4; // rcx
  void *v5; // r8
  const struct _TlgProvider_t *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  const WCHAR *v9; // rax
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 *v14; // rdi
  __int64 v15; // rbx
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-41h] BYREF
  int v20; // [rsp+3Ch] [rbp-3Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-31h] BYREF
  char v23; // [rsp+50h] [rbp-29h]
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v26; // [rsp+80h] [rbp+7h]
  __int64 v27; // [rsp+88h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  int *v29; // [rsp+A0h] [rbp+27h]
  __int64 v30; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 216);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD *)(a1 + 192);
  v18 = 0LL;
  if ( v4 )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      v18 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v4 + 8) + 24LL))(v4 + 8, &v18) >= 0 )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
        if ( fPending )
        {
          Context = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v5);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v6 > 4u )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
          v8 = *(_QWORD *)(a1 + 168);
          v24 = v7;
          v26 = &v24;
          v27 = 8LL;
          v9 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
          TlgCreateWsz(&pDesc, v9);
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
          v29 = &v20;
          v30 = 4LL;
          TlgWrite(v6, &unk_18010F3F8, v10, v11, 5u, &pData);
        }
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v12 = 1798LL;
LABEL_14:
    v13 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(a1 + 168) )
  {
    v12 = 1799LL;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(a1 + 192) )
  {
    v12 = 1800LL;
    goto LABEL_14;
  }
  v14 = (__int64 *)(a1 + 448);
  wil::com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>::reset((__int64 *)(a1 + 448));
  v15 = *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(v15 + 128) && a2 == 2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
    }
    goto LABEL_21;
  }
  wil::com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>::reset(v14);
  v17 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 328LL))(
          g_PolicyManager,
          (v15 + 8) & -(__int64)(v15 != 0),
          v14);
  v13 = v17;
  if ( v17 >= 0 )
  {
LABEL_21:
    v13 = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x715,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v17);
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
