/*
 * XREFs of wil::details::ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___::_ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___ @ 0x18018CD98
 * Callers:
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$0 @ 0x1801F57E4 (_XamlLauncherState--OnStartShown_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018DF90 (--$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Int.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___::_ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
