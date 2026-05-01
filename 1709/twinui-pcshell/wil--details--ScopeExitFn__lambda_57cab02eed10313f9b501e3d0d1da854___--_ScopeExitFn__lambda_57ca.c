/*
 * XREFs of wil::details::ScopeExitFn__lambda_57cab02eed10313f9b501e3d0d1da854___::_ScopeExitFn__lambda_57cab02eed10313f9b501e3d0d1da854___ @ 0x1800172CC
 * Callers:
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$2 @ 0x1801E641B (_CApplicationManager--ApplyOperation_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::ScopeExitFn__lambda_57cab02eed10313f9b501e3d0d1da854___::_ScopeExitFn__lambda_57cab02eed10313f9b501e3d0d1da854___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
