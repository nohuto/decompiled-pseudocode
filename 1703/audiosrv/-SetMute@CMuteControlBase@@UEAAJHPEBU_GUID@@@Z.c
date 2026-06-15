/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x180048130
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd_guid_ @ 0x180084B88 (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3)
{
  CVolumeStrip *v5; // rcx
  int v6; // ebx
  LPVOID v8; // rax
  const WCHAR *v9; // rdx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  TraceLoggingHProvider v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  unsigned int *v16; // [rsp+60h] [rbp-48h]
  int v17; // [rsp+68h] [rbp-40h]
  int v18; // [rsp+6Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF

  v14 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, (_DWORD)this, a2, (__int64)a3);
    a2 = v14;
  }
  if ( *((_DWORD *)this + 6) == a2 )
  {
    v6 = 1;
  }
  else
  {
    v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           (__int64)v5,
           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v8 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v8 + 1), 0x400000000000uLL) )
    {
      v18 = 0;
      v9 = (const WCHAR *)*((_QWORD *)this + 4);
      v16 = &v14;
      v17 = 4;
      TlgCreateWsz(&pDesc, v9);
      TlgWrite(v12, &unk_1800F8D49, v10, v11, 4u, &pData);
    }
    v6 = (*(__int64 (__fastcall **)(CMuteControlBase *, _QWORD))(*(_QWORD *)this + 80LL))(this, v14);
    if ( v6 < 0 )
      goto LABEL_9;
    v13 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 6) = v14;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)v13 + 48LL))(v13, 0LL, a3);
  }
  if ( v6 < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::SetMute", 0xE5u, v6);
  return (unsigned int)v6;
}
