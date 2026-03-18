/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C01EA410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01F552C (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, void *Src, unsigned int a3)
{
  SIZE_T v3; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8

  v3 = a3;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v10 = (void *)Win32AllocPoolWithQuota(v3, 1768452949LL);
    v12 = v10;
    if ( v10 )
    {
      memmove(v10, Src, v3);
      LOBYTE(v6) = InkProcessorProcessInkFeedbackCommand(a1, v12, v3) >= 0;
      Win32FreePool(v12, v13, v14);
    }
    else
    {
      UserSetLastError(8LL, v11);
    }
  }
  else
  {
    UserSetLastError(87LL, v7);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}
