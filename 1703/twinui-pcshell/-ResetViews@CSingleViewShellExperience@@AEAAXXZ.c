/*
 * XREFs of ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180180EEC
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180181330 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180181828 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___::_ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___ @ 0x180183C64 (wil--details--ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___--_ScopeExitFn__lambda_4c55.c)
 * Callees:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180182EA0 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSingleViewShellExperience::ResetViews(CSingleViewShellExperience *this)
{
  __int64 v2; // rcx

  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 1;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
}
