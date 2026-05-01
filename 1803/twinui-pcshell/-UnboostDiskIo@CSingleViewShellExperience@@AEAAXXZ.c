/*
 * XREFs of ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069954
 * Callers:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069ADC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A07C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     wil::details::ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___::_ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___ @ 0x1800FB2FC (wil--details--ScopeExitFn__lambda_9ae7f4b71f8554f9e67f674bf49c4d79___--_ScopeExitFn__lambda_9ae7.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1800FB318 (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180307AB0 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x180069838 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 */

void __fastcall CSingleViewShellExperience::UnboostDiskIo(
        CSingleViewShellExperience *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // edx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)this + 42);
  if ( (v5 & 2) != 0 )
  {
    v6 = CSingleViewShellExperience::SetImportanceValues((__int64)this, v5 & 0xFD);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48B,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6,
        a5);
  }
}
