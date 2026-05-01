/*
 * XREFs of _lambda_3da77838a00d6ef2652f9f0cca8cef38_::operator() @ 0x18022DF20
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3da77838a00d6ef2652f9f0cca8cef38___::Run @ 0x1802308D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3da77838a00d6ef2652f9f0cca8cef38___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803094E8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall lambda_3da77838a00d6ef2652f9f0cca8cef38_::operator()(struct IUnknown **a1)
{
  struct IUnknown *v1; // rdi
  char *EventW; // rbx
  unsigned int v3; // esi
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  EventW = (char *)CreateEventW(0LL, 1, 0, L"ShellStartReadyEvent");
  if ( ((unsigned __int64)(EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    WaitForSingleObject(EventW, 0x7530u);
    v3 = 0;
  }
  else
  {
    v3 = -2147417824;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)0x80010120LL);
  }
  if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(EventW);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, v1, (void *)5, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      264LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  return v3;
}
