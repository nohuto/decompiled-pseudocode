/*
 * XREFs of AudioSessionDestroy @ 0x1800AF910
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800AF4B4 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall AudioSessionDestroy(CServerAudioSessionControl **a1)
{
  CServerAudioSessionControl *v1; // rbx
  struct _TP_TIMER **v3; // rax
  __int64 v4; // r8
  unsigned int v5; // eax
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *a1;
  v3 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v3[1], v4, (struct _TP_TIMER *)L"AudioSessionDestroy");
  v5 = CServerAudioSessionControl::RemoveClientReference(v1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, v5);
  }
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return 0LL;
}
