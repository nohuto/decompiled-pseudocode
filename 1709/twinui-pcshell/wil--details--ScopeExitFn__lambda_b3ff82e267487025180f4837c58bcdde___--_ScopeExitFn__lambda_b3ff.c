/*
 * XREFs of wil::details::ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___::_ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___ @ 0x18018CD18
 * Callers:
 *     _XamlLauncherState::OnStartLaunchResult_::_1_::dtor$0 @ 0x1801F5844 (_XamlLauncherState--OnStartLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E2B0 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___::_ScopeExitFn__lambda_b3ff82e267487025180f4837c58bcdde___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
