/*
 * XREFs of wil::details::ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___::_ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___ @ 0x1800746D4
 * Callers:
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$0 @ 0x18019AE28 (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800735F4 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 */

_DWORD *__fastcall wil::details::ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___::_ScopeExitFn__lambda_3752109e28d6ea02fd1f915d996064c2___(
        __int64 a1)
{
  _DWORD *result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_3752109e28d6ea02fd1f915d996064c2_::operator()(a1);
  }
  return result;
}
