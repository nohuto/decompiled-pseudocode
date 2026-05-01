/*
 * XREFs of wil::details::lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___::_lambda_call__lambda_8f9faccf1931a261a8a8f9732b78f2d0___ @ 0x1800FAD58
 * Callers:
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$2 @ 0x1800B2AF6 (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$8 @ 0x1800B2BA4 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$8 @ 0x1800B2DD4 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$12 @ 0x1800B2FE5 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$12.c)
 *     __lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator()_::_1_::dtor$2 @ 0x1801C93DA (__lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator()_--_1_--dtor$2.c)
 *     __lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator()_::_1_::dtor$7 @ 0x1801C940A (__lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator()_--_1_--dtor$7.c)
 *     _KeyboardHosting::TabTipAdapter::SetInputAppAUMID_::_1_::dtor$1 @ 0x18024D579 (_KeyboardHosting--TabTipAdapter--SetInputAppAUMID_--_1_--dtor$1.c)
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
