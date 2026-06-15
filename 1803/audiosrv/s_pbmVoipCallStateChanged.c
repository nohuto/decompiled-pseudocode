/*
 * XREFs of s_pbmVoipCallStateChanged @ 0x1800DD970
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmVoipCallStateChanged(__int64 a1, int a2)
{
  struct _TP_TIMER **v4; // rax
  __int64 v5; // r8
  int (__fastcall **v6)(struct IAudioPolicyManager *, GUID *, __int64 *); // rax
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct _TP_TIMER *pv[6]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  __int64 v15; // [rsp+88h] [rbp+28h] BYREF

  v4 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v4[1], v5, (struct _TP_TIMER *)L"s_pbmVoipCallStateChanged");
  if ( !g_PolicyManager )
  {
LABEL_15:
    v9 = 0;
    goto LABEL_16;
  }
  v6 = *(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager;
  v15 = 0LL;
  if ( (*v6)(g_PolicyManager, &GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c, &v15) < 0 )
  {
LABEL_13:
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_15;
  }
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v14);
  v9 = v7;
  if ( v7 >= 0 )
  {
    LOBYTE(v8) = a2 == 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, v14, v8);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 523LL;
      goto LABEL_7;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    goto LABEL_13;
  }
  v10 = 521LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v7);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_16:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
