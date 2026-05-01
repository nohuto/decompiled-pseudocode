/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c67d7deeb921e5458a9889de9f36378___::Run @ 0x1802287B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x18022750C (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c67d7deeb921e5458a9889de9f36378___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = XamlLauncher::LogErrorIfStartOrCortanaArentInstalled();
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      415LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v0);
}
