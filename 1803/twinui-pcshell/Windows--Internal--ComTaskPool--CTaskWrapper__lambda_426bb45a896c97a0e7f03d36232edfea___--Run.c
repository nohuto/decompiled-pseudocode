/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_426bb45a896c97a0e7f03d36232edfea___::Run @ 0x1801F91F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1801F8A60 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_426bb45a896c97a0e7f03d36232edfea___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = XamlExplorerHostShellComponent::InitializeWindows(*(XamlExplorerHostShellComponent **)(a1 + 16));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      123LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v1);
}
