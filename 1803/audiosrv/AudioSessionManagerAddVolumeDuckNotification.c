/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x1800B4050
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  signed int v5; // ebx
  struct _TP_TIMER **v6; // rax
  __int64 v7; // r8
  RPC_STATUS v8; // eax
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int Pid; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  v6 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v6[1],
    v7,
    (struct _TP_TIMER *)L"AudioSessionManagerAddVolumeDuckNotification");
  v8 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v8 )
  {
    if ( v8 > 0 )
    {
      v5 = (unsigned __int16)v8 | 0x80070000;
      goto LABEL_7;
    }
  }
  else
  {
    if ( !g_DuckingManager )
      goto LABEL_9;
    v8 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager
                                                                                            + 32LL))(
           g_DuckingManager,
           a3,
           Pid,
           a2);
  }
  v5 = v8;
LABEL_7:
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddVolumeDuckNotification", 2385, v5);
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v5;
}
