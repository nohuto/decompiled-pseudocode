/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x1800A8030
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x1800A8010 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800A7DF4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

void __fastcall s_afxCloseAudioEffectsWatcher(struct AudioEffectsWatcher ***a1)
{
  struct AudioEffectsWatcher **v1; // rdi
  struct AudioEffectsWatcher *v3; // rsi
  struct _TP_TIMER **v4; // rax
  __int64 v5; // r8
  AudioEffectsWatcherFactory *v6; // rcx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *a1;
  v3 = **a1;
  v4 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v4[1], v5, (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher");
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    AudioEffectsWatcherFactory::ReleaseWatcher(v6, v3);
    CoUninitialize();
  }
  operator delete(v1, (const struct std::nothrow_t *)8);
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
}
