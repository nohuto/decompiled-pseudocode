/*
 * XREFs of wil::details::ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___::_ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___ @ 0x180158780
 * Callers:
 *     _XamlLauncherState::OnCortanaAppTransitionCompleted_::_1_::dtor$0 @ 0x1801A3FEC (_XamlLauncherState--OnCortanaAppTransitionCompleted_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A8C4 (--$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTel.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___::_ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaAppTransitionCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
