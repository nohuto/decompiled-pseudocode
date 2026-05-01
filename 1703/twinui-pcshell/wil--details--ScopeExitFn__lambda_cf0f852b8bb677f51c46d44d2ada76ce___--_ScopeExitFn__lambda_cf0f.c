/*
 * XREFs of wil::details::ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___::_ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___ @ 0x1801588A0
 * Callers:
 *     _XamlLauncherState::OnStartFailedToGetForegroundImpl_::_1_::dtor$0 @ 0x1801A3F20 (_XamlLauncherState--OnStartFailedToGetForegroundImpl_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A068 (--$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___::_ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 56LL);
  }
  return result;
}
