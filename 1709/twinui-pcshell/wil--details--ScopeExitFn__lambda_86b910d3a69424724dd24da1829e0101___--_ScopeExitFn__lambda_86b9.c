/*
 * XREFs of wil::details::ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___::_ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___ @ 0x18018CBD8
 * Callers:
 *     _XamlLauncherState::OnCortanaCutoffTimerFired_::_1_::dtor$0 @ 0x1801F5910 (_XamlLauncherState--OnCortanaCutoffTimerFired_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018EBD4 (--$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___::_ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaCutoffTimerFired<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
