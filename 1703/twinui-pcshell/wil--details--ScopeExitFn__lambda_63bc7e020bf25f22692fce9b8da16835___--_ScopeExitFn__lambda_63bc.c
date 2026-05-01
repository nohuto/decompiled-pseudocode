/*
 * XREFs of wil::details::ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___::_ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___ @ 0x1801589C0
 * Callers:
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$1 @ 0x1801A3E6C (_XamlLauncherState--ShowStartView_--_1_--dtor$1.c)
 * Callees:
 *     ??$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015947C (--$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___::_ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowStartView<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
