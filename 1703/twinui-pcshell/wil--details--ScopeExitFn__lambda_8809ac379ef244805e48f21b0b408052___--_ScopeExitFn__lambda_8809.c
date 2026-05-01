/*
 * XREFs of wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::_ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___ @ 0x1801587E0
 * Callers:
 *     _XamlLauncherState::ShowCortanaFromOpenStart_::_1_::dtor$0 @ 0x1801A3FB0 (_XamlLauncherState--ShowCortanaFromOpenStart_--_1_--dtor$0.c)
 * Callees:
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A66C (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::_ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
