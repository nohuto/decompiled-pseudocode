/*
 * XREFs of wil::details::lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___::_lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___ @ 0x180126270
 * Callers:
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$12 @ 0x1801EE277 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$12.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$8 @ 0x1801EE59B (_ViewEventDispatcher--ViewCreated_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$8 @ 0x1801EEAB1 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$2 @ 0x1801EEB11 (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$5 @ 0x1801EEC43 (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$5.c)
 *     _KeyboardHosting::TabTipAdapter::SetInputAppAUMID_::_1_::dtor$1 @ 0x1801F69FF (_KeyboardHosting--TabTipAdapter--SetInputAppAUMID_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___::_lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return MsgRelease(**(_QWORD **)a1);
  }
  return result;
}
