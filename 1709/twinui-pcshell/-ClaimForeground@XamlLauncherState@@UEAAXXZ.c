/*
 * XREFs of ?ClaimForeground@XamlLauncherState@@UEAAXXZ @ 0x180189C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ClaimForeground@AEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAW4InternalState@XamlLauncherState@@@Z @ 0x18018D8F8 (--$ClaimForeground@AEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAW4Internal.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::ClaimForeground(XamlLauncherState *this)
{
  _DWORD *v1; // rbx
  int v3; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_DWORD *)((char *)this + 40);
  StartWindowTelemetry::ClaimForeground<enum XamlLauncherState::InternalState &>((char *)this + 40);
  if ( *v1 == 5 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 104LL))(*((_QWORD *)this + 8));
    if ( v3 >= 0 )
      return;
    v4 = 752LL;
    goto LABEL_7;
  }
  if ( *v1 == 16 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 128LL))(*((_QWORD *)this + 7));
    if ( v3 < 0 )
    {
      v4 = 756LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    }
  }
}
