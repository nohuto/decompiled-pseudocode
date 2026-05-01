/*
 * XREFs of wil::details::ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___::_ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___ @ 0x180158840
 * Callers:
 *     _XamlLauncherState::OnCortanaDestroyed_::_1_::dtor$0 @ 0x1801A3F74 (_XamlLauncherState--OnCortanaDestroyed_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A388 (--$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAE.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___::_ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
