/*
 * XREFs of wil::details::ScopeExitFn__lambda_cb08ba1a907e487366d832dfbcd92e26___::_ScopeExitFn__lambda_cb08ba1a907e487366d832dfbcd92e26___ @ 0x1800FAEBC
 * Callers:
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$12 @ 0x18019E070 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$12.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$8 @ 0x18019E388 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$8 @ 0x18019E90A (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$2 @ 0x18019E96A (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$5 @ 0x18019EA9C (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_cb08ba1a907e487366d832dfbcd92e26___::_ScopeExitFn__lambda_cb08ba1a907e487366d832dfbcd92e26___(
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
