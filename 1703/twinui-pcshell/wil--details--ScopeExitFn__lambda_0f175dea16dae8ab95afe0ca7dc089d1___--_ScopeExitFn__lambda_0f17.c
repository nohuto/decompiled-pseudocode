/*
 * XREFs of wil::details::ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___::_ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___ @ 0x1801588C0
 * Callers:
 *     _XamlLauncherState::OnStartDestroyed_::_1_::dtor$0 @ 0x1801A3F14 (_XamlLauncherState--OnStartDestroyed_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159FA0 (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___::_ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
