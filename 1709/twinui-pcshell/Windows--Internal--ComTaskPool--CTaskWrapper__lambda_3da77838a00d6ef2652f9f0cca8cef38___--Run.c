/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3da77838a00d6ef2652f9f0cca8cef38___::Run @ 0x18018EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1801DBCE8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3da77838a00d6ef2652f9f0cca8cef38___::Run(
        __int64 a1)
{
  struct IUnknown *v1; // rdi
  char *EventW; // rbx
  __int64 v3; // r9
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(struct IUnknown **)(a1 + 16);
  EventW = (char *)CreateEventW(0LL, 1, 0, L"ShellStartReadyEvent");
  if ( ((unsigned __int64)(EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    WaitForSingleObject(EventW, 0x7530u);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)0x80010120LL);
    if ( (unsigned __int64)(EventW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_6;
  }
  CloseHandle(EventW);
LABEL_6:
  v4 = ExperienceManagerUtils::PostToUIThread(0LL, v1, (void *)5, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
}
