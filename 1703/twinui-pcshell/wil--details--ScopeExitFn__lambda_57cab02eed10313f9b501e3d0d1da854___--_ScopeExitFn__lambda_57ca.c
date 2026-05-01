/*
 * XREFs of wil::details::ScopeExitFn__lambda_57cab02eed10313f9b501e3d0d1da854___::_ScopeExitFn__lambda_57cab02eed10313f9b501e3d0d1da854___ @ 0x18001643C
 * Callers:
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$2 @ 0x180197E23 (_CApplicationManager--ApplyOperation_--_1_--dtor$2.c)
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
