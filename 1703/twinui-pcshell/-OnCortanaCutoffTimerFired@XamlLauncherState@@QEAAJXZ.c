/*
 * XREFs of ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180158304
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180154BA0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180155770 (-DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1801566A0 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ??$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015AA54 (--$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 *     ??$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEBKAEAW4InternalState@XamlLauncherState@@@Z @ 0x18015AB1C (--$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTeleme.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaCutoffTimerFired(struct _TP_TIMER **this)
{
  _DWORD *v2; // rdi
  int v3; // eax
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v6[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  char v8; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 117,
    0LL);
  if ( (unsigned __int8)XamlLauncherState::DoesCortanaHaveForeground((XamlLauncherState *)(this + 2)) )
    return 0LL;
  v2 = this + 7;
  LODWORD(v5) = *((_DWORD *)this + 14);
  *((_QWORD *)&v5 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v6, &v5);
  StartWindowTelemetry::CortanaCancelledDueToTimerCutoff<unsigned long const &,enum XamlLauncherState::InternalState &>(
    this + 8,
    this + 7);
  v3 = (*(__int64 (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)this[10] + 88LL))(this[10]);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3);
  if ( *v2 != 1 )
  {
    if ( *v2 == 2 )
    {
LABEL_8:
      XamlLauncherState::TryToCompleteStartShowWithoutCortana((XamlLauncherState *)this);
      goto LABEL_10;
    }
    if ( *v2 != 18 )
    {
      if ( *v2 != 19 )
        goto LABEL_10;
      goto LABEL_8;
    }
  }
  *((_BYTE *)this + 955) = 1;
LABEL_10:
  if ( v8 )
  {
    v8 = 0;
    StartWindowTelemetry::OnCortanaCutoffTimerFired<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v6,
      v7 + 56);
  }
  return 0LL;
}
