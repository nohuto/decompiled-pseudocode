/*
 * XREFs of wil::details::ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___::_ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___ @ 0x180045BB8
 * Callers:
 *     _CAppViewManager::WindowProvided_::_1_::dtor$1 @ 0x1801E82E7 (_CAppViewManager--WindowProvided_--_1_--dtor$1.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$0 @ 0x1801E8317 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$0.c)
 * Callees:
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180040DD0 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___::_ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return CAppViewManager::_ObliterateOperation(*(CAppViewManager **)a1, *(const struct _GUID **)(a1 + 8));
  }
  return result;
}
