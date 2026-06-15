/*
 * XREFs of AudioServerGetChannelCount @ 0x180003940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180003EF0 (-GetChannelCount@CVADServer@@UEAAJPEAI@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetChannelCount(CVADServer *this, unsigned int *a2)
{
  GUID v4; // xmm0
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(CVADServer *__hidden, unsigned int *); // rax
  int ChannelCount; // eax
  unsigned int v8; // ebx
  _BYTE pv[48]; // [rsp+30h] [rbp-78h] BYREF
  GUID v11; // [rsp+60h] [rbp-48h]
  GUID v12; // [rsp+70h] [rbp-38h]
  GUID v13; // [rsp+80h] [rbp-28h] BYREF

  if ( this )
    v4 = *(GUID *)((char *)this + 280);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = v4;
  v12 = v4;
  v13 = v4;
  EtwEventActivityIdControl(4LL, &v13);
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v5,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v6 = *(__int64 (__fastcall **)(CVADServer *__hidden, unsigned int *))(*(_QWORD *)this + 184LL);
  if ( v6 == CVADServer::GetChannelCount )
    ChannelCount = CVADServer::GetChannelCount(this, a2);
  else
    ChannelCount = v6(this, a2);
  v8 = ChannelCount;
  if ( ChannelCount < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetChannelCount", 0xD90u, ChannelCount);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v13);
  return v8;
}
