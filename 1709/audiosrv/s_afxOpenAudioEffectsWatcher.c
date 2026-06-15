/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800085C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180009E7C (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180009EF4 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        AudioEffectsWatcherFactory **a6,
        struct AudioEffectsWatcher ***a7)
{
  struct AudioEffectsWatcher **v11; // rdi
  char v12; // si
  unsigned int v13; // r8d
  HRESULT Watcher; // ebx
  AudioEffectsWatcherFactory *v15; // rcx
  AudioEffectsWatcherFactory *v16; // rcx
  struct AudioEffectsWatcher *v17; // rcx
  struct AudioEffectsWatcher *v18; // rdx
  struct AudioEffectsWatcher **v20; // [rsp+20h] [rbp-60h]
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-4Ch] BYREF
  struct AudioEffectsWatcher *v23; // [rsp+38h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-40h] BYREF
  _BYTE Parameter[56]; // [rsp+48h] [rbp-38h] BYREF

  v11 = 0LL;
  v23 = 0LL;
  v12 = 0;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v13,
    L"s_afxOpenAudioEffectsWatcher",
    (struct IAudioHealthMonitor *)v20);
  if ( g_PolicyManager )
  {
    Watcher = CoInitializeEx(0LL, 0);
    if ( Watcher >= 0 )
    {
      v12 = 1;
      v11 = (struct AudioEffectsWatcher **)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v11 )
      {
        Watcher = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)g_PolicyManager + 96LL))(
                    g_PolicyManager,
                    a1,
                    a3,
                    0LL,
                    &v22);
        if ( Watcher >= 0 )
        {
          Watcher = AudioEffectsWatcherFactory::GetWatcher(v15, a2, v22, a4, &v23);
          if ( Watcher < 0 )
          {
            v18 = v23;
          }
          else
          {
            v17 = v23;
            v18 = 0LL;
            *v11 = v23;
            *a5 = *(_OWORD *)((char *)v17 + 8);
            v16 = *(AudioEffectsWatcherFactory **)((char *)v17 + 92);
            *a6 = v16;
            *a7 = v11;
            v11 = 0LL;
            Watcher = 0;
          }
          if ( v18 )
            AudioEffectsWatcherFactory::ReleaseWatcher(v16, v18);
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
  operator delete(v11, (const struct std::nothrow_t *)8);
  if ( v12 )
    CoUninitialize();
  CWatchdogTimer::~CWatchdogTimer((CWatchdogTimer *)Parameter);
  return (unsigned int)Watcher;
}
