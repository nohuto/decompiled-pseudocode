/*
 * XREFs of NtUserInjectTouchInput @ 0x1C01DC4A0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0197CD0 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01B85C0 (xxxInjectTouchInput.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, void *Src)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v9; // rax
  struct tagPOINTER_TOUCH_INFO *v10; // rbx
  int v11; // ebx
  int v12; // edx
  int v13; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagPOINTER_TOUCH_INFO *v20; // [rsp+30h] [rbp-38h]
  _QWORD v21[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1;
  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    TraceLoggingTouchInjection(1, 0, v3);
    v11 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6, v7);
    ProbeForRead(Src, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v3, 1953067861LL);
    v10 = v9;
    v20 = v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    memmove(v9, Src, 144 * v3);
    PushW32ThreadLock((__int64)v10, v21, (__int64)Win32FreePool);
    v11 = xxxInjectTouchInput(v3, v10);
    if ( v11 )
    {
      v13 = v3;
      v12 = 1;
    }
    else
    {
      v12 = 0;
      v13 = -2;
    }
    TraceLoggingTouchInjection(1, v12, v13);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v21[0];
    if ( v20 )
      Win32FreePool(v20);
    EtwTraceTouchInjectionStop();
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v11;
}
