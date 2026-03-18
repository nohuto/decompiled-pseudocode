/*
 * XREFs of NtUserSendInput @ 0x1C009CDE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSendInput @ 0x1C009CEF0 (xxxSendInput.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v9; // rax
  void *v10; // rbx
  unsigned int v11; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v18; // [rsp+30h] [rbp-38h]
  _QWORD v19[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  if ( a3 == 40 && (_DWORD)v5 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7);
    ProbeForRead(a2, 40 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (void *)Win32AllocPoolWithQuota(40 * v5, 1769173845LL);
    v10 = v9;
    v18 = v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    memmove(v9, (const void *)a2, 40 * v5);
    PushW32ThreadLock(v10, v19, Win32FreePool);
    v11 = xxxSendInput((unsigned int)v5, v10);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v19[0];
    Win32FreePool(v18, v13, v14);
  }
  else
  {
    v11 = 0;
    UserSetLastError(87LL, v6);
  }
  UserSessionSwitchLeaveCrit(v16, v15);
  return v11;
}
