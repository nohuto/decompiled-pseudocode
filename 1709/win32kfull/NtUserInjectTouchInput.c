/*
 * XREFs of NtUserInjectTouchInput @ 0x1C01E8680
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01A3780 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01BD79C (xxxInjectTouchInput.c)
 */

__int64 __fastcall NtUserInjectTouchInput(unsigned int a1, void *Src)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v6; // rax
  struct tagPOINTER_TOUCH_INFO *v7; // rbx
  __int64 v8; // r9
  int v9; // ebx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct tagPOINTER_TOUCH_INFO *v22; // [rsp+30h] [rbp-38h]
  _QWORD v23[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1;
  EnterCrit(0LL, 1LL);
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    TraceLoggingTouchInjection(1, 0, v3);
    v9 = 0;
    UserSetLastError(87LL, v20);
  }
  else
  {
    EtwTraceTouchInjectionStart();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
    ProbeForRead(Src, 144 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
    v6 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuota(144 * v3, 1953067861LL);
    v7 = v6;
    v22 = v6;
    if ( !v6 )
      ExRaiseStatus(-1073741801);
    memmove(v6, Src, 144 * v3);
    PushW32ThreadLock((__int64)v7, v23, (__int64)Win32FreePool, v8);
    v9 = xxxInjectTouchInput(v3, v7);
    if ( v9 )
    {
      v11 = v3;
      v10 = 1;
    }
    else
    {
      v10 = 0;
      v11 = -2;
    }
    TraceLoggingTouchInjection(1, v10, v11);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
    *(_QWORD *)(ThreadWin32Thread + 16) = v23[0];
    if ( v22 )
      Win32FreePool(v22, v16, v17);
    EtwTraceTouchInjectionStop();
  }
  UserSessionSwitchLeaveCrit(v19, v18);
  return v9;
}
