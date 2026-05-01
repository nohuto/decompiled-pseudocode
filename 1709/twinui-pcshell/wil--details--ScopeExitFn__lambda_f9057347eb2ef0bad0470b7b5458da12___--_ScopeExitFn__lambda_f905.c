/*
 * XREFs of wil::details::ScopeExitFn__lambda_f9057347eb2ef0bad0470b7b5458da12___::_ScopeExitFn__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1801D3710
 * Callers:
 *     _CSingleViewShellExperience::OnViewCreatedBase_::_1_::dtor$0 @ 0x1801F79DC (_CSingleViewShellExperience--OnViewCreatedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_f9057347eb2ef0bad0470b7b5458da12___::_ScopeExitFn__lambda_f9057347eb2ef0bad0470b7b5458da12___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = CSingleViewShellExperience::DestroyView(*(CSingleViewShellExperience **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x193,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v1);
  }
}
