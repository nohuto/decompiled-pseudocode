/*
 * XREFs of ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D3508
 * Callers:
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1801D0EE8 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D233C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D33BC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1801D3654 (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 *     wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x1801D3684 (wil--details--ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___--_ScopeExitFn__lambda_9ae7.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x1801D3544 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 */

void __fastcall CSingleViewShellExperience::UnboostDiskIo(CSingleViewShellExperience *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 42) & 2) != 0 )
  {
    v1 = CSingleViewShellExperience::SetImportanceValues(this);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x485,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v1);
  }
}
