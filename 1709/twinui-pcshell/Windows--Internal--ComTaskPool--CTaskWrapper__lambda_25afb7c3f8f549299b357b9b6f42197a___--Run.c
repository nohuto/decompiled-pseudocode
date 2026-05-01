/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___::Run @ 0x1801857D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x180180C70 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = XamlLauncher::LogErrorIfStartOrCortanaArentInstalled();
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A0,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v0);
}
