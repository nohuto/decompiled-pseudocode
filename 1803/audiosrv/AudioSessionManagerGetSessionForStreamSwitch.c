/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x1800B45B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180031CA0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800ABD70 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800AF6C4 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(CAudioSessionManager ***a1, char *a2, _QWORD *a3)
{
  CAudioSessionManager **v3; // rdi
  __int64 v6; // rcx
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  CAudioSessionManager *v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  CAudioSession *v13; // rsi
  CAudioSessionManager *v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // eax
  bool v18; // [rsp+40h] [rbp-89h] BYREF
  struct IAudioProcess *v19; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-75h] BYREF
  CAudioSession *v22; // [rsp+58h] [rbp-71h] BYREF
  __int64 v23; // [rsp+60h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v25[80]; // [rsp+A0h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v25);
  v22 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v6,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    v7[1],
    v8,
    (struct _TP_TIMER *)L"AudioSessionManagerGetSessionForStreamSwitch");
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, *v3);
  }
  v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         0LL,
         &v19);
  if ( v9 >= 0 )
  {
    v9 = CAudioSession::ParseStreamSwitchId(
           *((const unsigned __int16 **)*v3 + 38),
           a2,
           (struct CAudioSessionInstanceId *)v25,
           &v21,
           &v20,
           &v18);
    if ( v9 >= 0 )
    {
      v10 = *v3;
      v11 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 40LL))(v19);
      v12 = CAudioSessionManager::CreateAudioSession(
              v10,
              v19,
              (struct CAudioSessionInstanceId *)v25,
              v21,
              v20,
              v11,
              &v22);
      v13 = v22;
      v9 = v12;
      if ( v12 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v22 + 56LL))(v22)
          || (v9 = CAudioSession::SetDuckingOptOutPreference(v13, v18), v9 >= 0) )
        {
          v14 = *v3;
          v15 = *(_QWORD *)v14;
          v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 40LL))(v19);
          v9 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, CAudioSession *, __int64 *))(v15 + 104))(
                 v14,
                 v16,
                 0LL,
                 v13,
                 &v23);
          if ( v9 >= 0 )
            *a3 = v23;
        }
      }
      if ( v13 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetSessionForStreamSwitch", 2532, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v25);
  return (unsigned int)v9;
}
