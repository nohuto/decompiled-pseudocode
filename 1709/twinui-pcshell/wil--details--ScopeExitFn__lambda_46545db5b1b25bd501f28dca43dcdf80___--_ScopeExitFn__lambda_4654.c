/*
 * XREFs of wil::details::ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___::_ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___ @ 0x18018CBF8
 * Callers:
 *     _XamlLauncherState::OnCortanaLaunchResult_::_1_::dtor$0 @ 0x1801F5904 (_XamlLauncherState--OnCortanaLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018EB0C (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___::_ScopeExitFn__lambda_46545db5b1b25bd501f28dca43dcdf80___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
