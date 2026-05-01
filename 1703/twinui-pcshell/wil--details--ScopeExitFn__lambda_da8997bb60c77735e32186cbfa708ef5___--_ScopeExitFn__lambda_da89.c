/*
 * XREFs of wil::details::ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___::_ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___ @ 0x180158980
 * Callers:
 *     _XamlLauncherState::HideCortana_::_1_::dtor$0 @ 0x1801A3E9C (_XamlLauncherState--HideCortana_--_1_--dtor$0.c)
 * Callees:
 *     ??$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159738 (--$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___::_ScopeExitFn__lambda_da8997bb60c77735e32186cbfa708ef5___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::HideCortanaInternal<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
