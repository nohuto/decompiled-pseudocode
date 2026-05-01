/*
 * XREFs of wil::details::ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___::_ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___ @ 0x18018CD78
 * Callers:
 *     _XamlLauncherState::OnStartHidden_::_1_::dtor$0 @ 0x1801F5814 (_XamlLauncherState--OnStartHidden_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E058 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___::_ScopeExitFn__lambda_1dc06cf7010d4ad9b4df65633a63c040___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
