/*
 * XREFs of ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x18018C7A8
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180188E20 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180189B10 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x18018AAF8 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ??$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018EBD4 (--$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 *     ??$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEBKAEAW4InternalState@XamlLauncherState@@@Z @ 0x18018EC9C (--$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTeleme.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaCutoffTimerFired(struct _TP_TIMER **this)
{
  _DWORD *v2; // rdi
  int v3; // eax
  int v5; // [rsp+28h] [rbp-20h] BYREF
  struct _TP_TIMER **v6; // [rsp+30h] [rbp-18h]
  char v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 118,
    0LL);
  if ( !XamlLauncherState::DoesCortanaHaveForeground((XamlLauncherState *)(this + 3)) )
  {
    v2 = this + 8;
    v5 = *((_DWORD *)this + 16);
    v6 = this;
    v7 = 1;
    StartWindowTelemetry::CortanaCancelledDueToTimerCutoff<unsigned long const &,enum XamlLauncherState::InternalState &>(
      this + 9,
      this + 8);
    v3 = (*(__int64 (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)this[11] + 88LL))(this[11]);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8EA,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    if ( *v2 != 1 )
    {
      if ( *v2 == 2 )
        goto LABEL_8;
      if ( *v2 != 18 )
      {
        if ( *v2 != 19 )
        {
LABEL_10:
          v7 = 0;
          StartWindowTelemetry::OnCortanaCutoffTimerFired<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
            &v5,
            this + 8);
          return 0LL;
        }
LABEL_8:
        XamlLauncherState::TryToCompleteStartShowWithoutCortana((XamlLauncherState *)this);
        goto LABEL_10;
      }
    }
    *((_BYTE *)this + 964) = 1;
    goto LABEL_10;
  }
  return 0LL;
}
