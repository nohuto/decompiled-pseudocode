/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C01DE2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01E9540 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, void *Src, unsigned int a3)
{
  SIZE_T v3; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  void *v12; // rdi

  v3 = a3;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v11 = (void *)Win32AllocPoolWithQuota(v3, 1768452949LL);
    v12 = v11;
    if ( v11 )
    {
      memmove(v11, Src, v3);
      LOBYTE(v6) = InkProcessorProcessInkFeedbackCommand(a1, v12, v3) >= 0;
      Win32FreePool(v12);
    }
    else
    {
      UserSetLastError(8LL);
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
