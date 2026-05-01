/*
 * XREFs of wil::details::ScopeExitFn__lambda_35477ed2ebee72493a531d8bde3f7eed___::_ScopeExitFn__lambda_35477ed2ebee72493a531d8bde3f7eed___ @ 0x1800F88E4
 * Callers:
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$7 @ 0x1800B3ED0 (_CApplicationManager--ApplyOperation_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::ScopeExitFn__lambda_35477ed2ebee72493a531d8bde3f7eed___::_ScopeExitFn__lambda_35477ed2ebee72493a531d8bde3f7eed___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
