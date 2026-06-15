/*
 * XREFs of AudioServerIsOffloadCapable @ 0x1800C53B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180095530 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  int v10; // ebx
  void (*v11)(void); // rax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  CEndpointCharacteristics *v14; // [rsp+38h] [rbp-40h] BYREF
  struct _TP_TIMER *pv[6]; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"AudioServerIsOffloadCapable");
  if ( !g_PolicyManager )
    goto LABEL_5;
  v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
          g_PolicyManager,
          a1,
          &v13);
  if ( v10 < 0 )
    goto LABEL_7;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 144LL))(v13, a3, 0LL) )
  {
LABEL_5:
    v10 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            &v14);
    if ( v10 >= 0 )
      *a4 = CEndpointCharacteristics::IsOffloadCapable(v14);
  }
  else
  {
    *a4 = 0;
  }
LABEL_7:
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v13 = 0LL;
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerIsOffloadCapable", 4597, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v14 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v14);
    else
      v11();
  }
  return (unsigned int)v10;
}
