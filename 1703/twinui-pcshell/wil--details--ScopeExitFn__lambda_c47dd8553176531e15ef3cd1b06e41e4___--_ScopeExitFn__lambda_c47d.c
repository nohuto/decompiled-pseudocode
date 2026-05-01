/*
 * XREFs of wil::details::ScopeExitFn__lambda_c47dd8553176531e15ef3cd1b06e41e4___::_ScopeExitFn__lambda_c47dd8553176531e15ef3cd1b06e41e4___ @ 0x180158800
 * Callers:
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$0 @ 0x1801A3F8C (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A5A4 (--$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTele.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c47dd8553176531e15ef3cd1b06e41e4___::_ScopeExitFn__lambda_c47dd8553176531e15ef3cd1b06e41e4___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
