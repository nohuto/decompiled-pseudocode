/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x180067770
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_qd_guid_ @ 0x180067CBC (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3)
{
  void *v5; // r8
  const WCHAR *v6; // rdx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  TraceLoggingHProvider v9; // r10
  int v10; // ebx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  unsigned int *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF

  v13 = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, (_DWORD)this, a2, (__int64)a3);
    a2 = v13;
  }
  if ( *((_DWORD *)this + 6) == a2 )
  {
    v10 = 1;
  }
  else
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
    if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      v19 = 0;
      v6 = (const WCHAR *)*((_QWORD *)this + 4);
      v17 = &v13;
      v18 = 4;
      TlgCreateWsz(&pDesc, v6);
      TlgWrite(v9, &unk_18010EC55, v7, v8, 4u, &pData);
    }
    v10 = (*(__int64 (__fastcall **)(CMuteControlBase *, _QWORD))(*(_QWORD *)this + 80LL))(this, v13);
    if ( v10 < 0 )
      goto LABEL_15;
    v11 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 6) = v13;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)v11 + 40LL))(v11, 0LL, a3);
  }
  if ( v10 < 0 )
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::SetMute", 229, v10);
  return (unsigned int)v10;
}
