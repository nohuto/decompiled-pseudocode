/*
 * XREFs of AudioServerNotifyStreamSuspensionState @ 0x1800C55F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18000422C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800C1FF4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 */

__int64 __fastcall AudioServerNotifyStreamSuspensionState(CVADServer *this, __int64 a2, int a3)
{
  __int64 v6; // rcx
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  struct _TP_TIMER *pv[6]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v13, (char *)this);
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v6,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"AudioServerNotifyStreamSuspensionState");
  v9 = CVADServer::NotifyStreamSuspensionStateChanged(this, a2, a3 != 0);
  v10 = v9;
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerNotifyStreamSuspensionState", 3427, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v14);
  return v10;
}
