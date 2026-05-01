/*
 * XREFs of wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x180183BF4
 * Callers:
 *     _CSingleViewShellExperience::ShowView_::_1_::dtor$0 @ 0x1801A5611 (_CSingleViewShellExperience--ShowView_--_1_--dtor$0.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180183A78 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSingleViewShellExperience::UnboostDiskIo(*(CSingleViewShellExperience **)a1);
  }
}
