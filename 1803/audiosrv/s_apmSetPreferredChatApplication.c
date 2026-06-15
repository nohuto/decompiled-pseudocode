/*
 * XREFs of s_apmSetPreferredChatApplication @ 0x1800DCE70
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetPreferredChatApplication(__int64 a1, __int64 a2)
{
  struct _TP_TIMER **v3; // rax
  __int64 v4; // r8
  int (__fastcall **v5)(struct IAudioPolicyManager *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v3 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v3[1], v4, (struct _TP_TIMER *)L"s_apmSetPreferredChatApplication");
  if ( !g_PolicyManager )
  {
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  v5 = *(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager;
  v11 = 0LL;
  if ( (*v5)(g_PolicyManager, &GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c, &v11) < 0
    || (v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 72LL))(v11, a2), v7 = v6, v6 >= 0) )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39E,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v6);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
