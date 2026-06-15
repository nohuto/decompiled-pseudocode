/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800A1710
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd_guid_ @ 0x1800A1BBC (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3, int *a4)
{
  CAudioSessionManager *v7; // rcx
  int v8; // r14d
  int v9; // ebx
  LPVOID v10; // rax
  const WCHAR *v11; // rdx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  TraceLoggingHProvider v14; // r10
  int v15; // eax
  unsigned int v16; // esi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  unsigned int *v23; // [rsp+60h] [rbp-9h]
  __int64 v24; // [rsp+68h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v21 = a2;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, (_DWORD)this, a2, (__int64)a3);
    a2 = v21;
  }
  v8 = *((_DWORD *)this + 6);
  v9 = 0;
  if ( v8 != a2 )
  {
    v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
            (__int64)v7,
            lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v10 + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v10 + 1), 0x400000000000uLL) )
    {
      v11 = (const WCHAR *)*((_QWORD *)this + 4);
      v23 = &v21;
      v24 = 4LL;
      TlgCreateWsz(&pDesc, v11);
      TlgWrite(v14, &unk_1801450D3, v12, v13, 4u, &pData);
    }
    v15 = (*(__int64 (__fastcall **)(CMuteControlBase *, _QWORD))(*(_QWORD *)this + 80LL))(this, v21);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
    v18 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 6) = v21;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)v18 + 40LL))(v18, 0LL, a3);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v19);
      return v20;
    }
    a2 = v21;
  }
  if ( a4 )
  {
    LOBYTE(v9) = v8 == a2;
    *a4 = v9;
  }
  return 0LL;
}
