/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800A80B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800A7534 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800A7DF4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        AudioEffectsWatcherFactory **a6,
        _QWORD *a7)
{
  _QWORD *v8; // rdi
  char v12; // si
  struct _TP_TIMER **v13; // rax
  __int64 v14; // r8
  int Watcher; // ebx
  AudioEffectsWatcherFactory *v16; // rcx
  AudioEffectsWatcherFactory *v17; // rcx
  struct AudioEffectsWatcher *v18; // rcx
  struct AudioEffectsWatcher *v19; // rdx
  unsigned int v21; // [rsp+30h] [rbp-58h] BYREF
  struct AudioEffectsWatcher *v22; // [rsp+38h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[6]; // [rsp+40h] [rbp-48h] BYREF

  v8 = 0LL;
  v22 = 0LL;
  v12 = 0;
  v13 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               a1,
                               lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v13[1], v14, (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher");
  if ( g_PolicyManager )
  {
    Watcher = CoInitializeEx(0LL, 0);
    if ( Watcher >= 0 )
    {
      v12 = 1;
      v8 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        Watcher = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)g_PolicyManager + 104LL))(
                    g_PolicyManager,
                    a1,
                    a3,
                    0LL,
                    &v21);
        if ( Watcher >= 0 )
        {
          Watcher = AudioEffectsWatcherFactory::GetWatcher(v16, a2, v21, a4, &v22);
          if ( Watcher < 0 )
          {
            v19 = v22;
          }
          else
          {
            v18 = v22;
            v19 = 0LL;
            *v8 = v22;
            *a5 = *(_OWORD *)((char *)v18 + 8);
            v17 = *(AudioEffectsWatcherFactory **)((char *)v18 + 92);
            *a6 = v17;
            *a7 = v8;
            v8 = 0LL;
            Watcher = 0;
          }
          if ( v19 )
            AudioEffectsWatcherFactory::ReleaseWatcher(v17, v19);
        }
      }
      else
      {
        Watcher = -2147024882;
      }
    }
  }
  else
  {
    Watcher = -2147418113;
  }
  operator delete(v8, (const struct std::nothrow_t *)8);
  if ( v12 )
    CoUninitialize();
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)Watcher;
}
