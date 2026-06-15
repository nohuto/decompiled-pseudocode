/*
 * XREFs of GetAudioSessionManager @ 0x180005A80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018A60 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall GetAudioSessionManager(
        __int64 a1,
        const unsigned __int16 *a2,
        struct CAudioSessionManager ***a3,
        _DWORD *a4)
{
  int v8; // edi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v10; // rbx
  __int64 (__fastcall *v11)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int v12; // eax
  struct CAudioSessionManager **v13; // rax
  struct CAudioSessionManager **v14; // rbx
  struct CAudioSessionManager *v15; // rcx
  struct CAudioSessionManager *v16; // rcx
  struct CAudioSessionManager *v18; // [rsp+30h] [rbp-50h] BYREF
  struct CAudioSessionManager *v19; // [rsp+38h] [rbp-48h] BYREF
  struct CAudioSessionManagerProvider *v20; // [rsp+40h] [rbp-40h] BYREF
  _BYTE pv[56]; // [rsp+48h] [rbp-38h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, a2);
  }
  v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct CAudioSessionManager **))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v18);
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v20);
    v10 = v20;
    v8 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v11 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v20 + 40LL);
      v12 = v11 == CAudioSessionManagerProvider::GetAudioSessionManager
          ? CAudioSessionManagerProvider::GetAudioSessionManager(v20, a2, &v19)
          : v11(v20, a2, &v19);
      v8 = v12;
      if ( v12 < 0 )
      {
        if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
        else
          (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_17;
      }
    }
    if ( v10 )
    {
      if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
      else
        (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v13 = (struct CAudioSessionManager **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      v15 = v18;
      *v13 = v19;
      v13[1] = v15;
      (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v15 + 8LL))(v15);
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, v19);
      }
      v16 = v18;
      *a3 = v14;
      *a4 = (*(__int64 (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v16 + 112LL))(v16) == 0;
LABEL_17:
      if ( v8 >= 0 )
        goto LABEL_18;
      goto LABEL_30;
    }
    v8 = -2147024882;
  }
LABEL_30:
  AudSrvTraceLoggingErrorHelper("GetAudioSessionManager", 0x862u, v8);
LABEL_18:
  if ( v18 )
  {
    (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return (unsigned int)v8;
}
