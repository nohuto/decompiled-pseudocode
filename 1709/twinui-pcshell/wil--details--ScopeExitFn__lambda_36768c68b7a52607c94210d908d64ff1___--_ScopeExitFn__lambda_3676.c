/*
 * XREFs of wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___ @ 0x18018CDF8
 * Callers:
 *     _XamlLauncherState::Show_::_1_::dtor$0 @ 0x1801F57B4 (_XamlLauncherState--Show_--_1_--dtor$0.c)
 * Callees:
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018DA3C (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
