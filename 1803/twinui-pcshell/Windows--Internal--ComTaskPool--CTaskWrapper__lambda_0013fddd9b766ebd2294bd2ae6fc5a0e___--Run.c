/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___::Run @ 0x180091830
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___ @ 0x180091860 (Microsoft--WRL--EventSource_Windows--Internal--Shell--Popups--IPopupPropertyChangedEventHandler_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___::Run(
        __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16) + 312LL;
  v5 = 1;
  v2 = Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___(
         v1,
         &v5);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x239,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      v3);
}
