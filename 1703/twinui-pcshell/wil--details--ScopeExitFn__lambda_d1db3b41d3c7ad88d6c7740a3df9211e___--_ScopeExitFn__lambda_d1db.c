/*
 * XREFs of wil::details::ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___::_ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___ @ 0x1801587A0
 * Callers:
 *     _XamlLauncherState::OnStartExitTransitionToCortanaCompleted_::_1_::dtor$0 @ 0x1801A3FE0 (_XamlLauncherState--OnStartExitTransitionToCortanaCompleted_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A7FC (--$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartW.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___::_ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartExitTransitionToCortanaCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
