/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x1800B4440
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180031CA0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180033FF4 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(
        CAudioSessionManager ***a1,
        const unsigned __int16 *a2,
        _QWORD *a3)
{
  CAudioSessionManager **v3; // rsi
  __int64 v6; // rcx
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  RPC_STATUS v9; // eax
  signed int v10; // ebx
  int AudioSession; // eax
  struct CAudioSession *v12; // rdi
  unsigned int Pid; // [rsp+30h] [rbp-79h] BYREF
  struct CAudioSession *v15; // [rsp+38h] [rbp-71h] BYREF
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v18[80]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v18);
  v15 = 0LL;
  v16 = 0LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v6,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"AudioSessionManagerGetExistingSession");
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, *v3);
  }
  v9 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v10 = v9;
  if ( v9 )
  {
    if ( v9 > 0 )
      v10 = (unsigned __int16)v9 | 0x80070000;
  }
  else
  {
    v10 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v18, a2);
    if ( v10 < 0 )
    {
LABEL_15:
      AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetExistingSession", 2460, v10);
      goto LABEL_16;
    }
    AudioSession = CAudioSessionManager::FindAudioSession(*v3, (struct CAudioSessionInstanceId *)v18, &v15);
    v12 = v15;
    v10 = AudioSession;
    if ( AudioSession >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, struct CAudioSession *, __int64 *))(*(_QWORD *)*v3 + 104LL))(
              *v3,
              Pid,
              0LL,
              v15,
              &v16);
      if ( v10 >= 0 )
        *a3 = v16;
    }
    if ( v12 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v10 < 0 )
    goto LABEL_15;
LABEL_16:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v18);
  return (unsigned int)v10;
}
