/*
 * XREFs of wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x1800FAE38
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     _ViewEventDispatcher::_AddValidView_::_1_::dtor$1 @ 0x1800B29D0 (_ViewEventDispatcher--_AddValidView_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$225 @ 0x1800B30C9 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$225.c)
 * Callees:
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1801D0CF8 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 */

__int64 *__fastcall wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___(
        __int64 **a1)
{
  __int64 *result; // rax
  __int64 v2; // rdx

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    result = *a1;
    v2 = **a1;
    if ( !*(_QWORD *)(v2 + 16) )
      return (__int64 *)ViewEventDispatcher::_RemovePerApplicationData(a1[1], v2);
  }
  return result;
}
