/*
 * XREFs of wil::details::ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___::_ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___ @ 0x18022DCC4
 * Callers:
 *     _XamlLauncherState::HideCortana_::_1_::dtor$0 @ 0x18022E4F6 (_XamlLauncherState--HideCortana_--_1_--dtor$0.c)
 * Callees:
 *     ??$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18022C2F4 (--$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___::_ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::HideCortanaInternal<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
