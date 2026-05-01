/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55b264313a8019947342e051aa80fccd___::Run @ 0x1801511F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x18014BEE4 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55b264313a8019947342e051aa80fccd___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  XamlLauncher::LogErrorIfStartOrCortanaArentInstalled();
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v0);
}
