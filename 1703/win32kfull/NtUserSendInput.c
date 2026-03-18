/*
 * XREFs of NtUserSendInput @ 0x1C003B0E0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWow64Process; // rax
  void *v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v23; // [rsp+30h] [rbp-38h]
  _QWORD v24[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a1;
  EnterCrit(0LL, 1LL);
  if ( a3 == 40 && (_DWORD)v5 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v8, v9);
    ProbeForRead(a2, 40 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = (void *)Win32AllocPoolWithQuota(40 * v5, 1769173845LL);
    v12 = (__int64)v11;
    v23 = v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    memmove(v11, (const void *)a2, 40 * v5);
    PushW32ThreadLock(v12, v24, (__int64)Win32FreePool);
    v13 = xxxSendInput((unsigned int)v5, v12);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v14, v15, v16);
    *(_QWORD *)(ThreadWin32Thread + 16) = v24[0];
    Win32FreePool(v23);
  }
  else
  {
    v13 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v13;
}
