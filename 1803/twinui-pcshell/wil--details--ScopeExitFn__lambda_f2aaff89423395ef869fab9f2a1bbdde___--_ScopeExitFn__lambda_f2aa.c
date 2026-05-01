/*
 * XREFs of wil::details::ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___::_ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___ @ 0x1800FB068
 * Callers:
 *     _XamlLauncherState::OnCortanaAppTransitionCompleted_::_1_::dtor$0 @ 0x1800B5976 (_XamlLauncherState--OnCortanaAppTransitionCompleted_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800947A4 (--$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTel.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___::_ScopeExitFn__lambda_f2aaff89423395ef869fab9f2a1bbdde___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaAppTransitionCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
