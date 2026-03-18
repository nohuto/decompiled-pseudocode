/*
 * XREFs of NtUserInvalidateRect @ 0x1C0069850
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rsi
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v16; // r14
  __int64 v17; // rsi
  __int64 *v18; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct _KTHREAD *v20; // r14
  __int64 v21; // rsi
  __int64 *v22; // rax
  struct tagWND *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD v27[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v28; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  v11 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
      goto LABEL_28;
  }
  else
  {
    v12 = 0LL;
  }
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v28 = *a2;
    if ( v12 )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, v7, v9, v10) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v14 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v14 + 456) + 224LL) & 1) == 0 )
      {
        v16 = KeGetCurrentThread();
        v17 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
        {
          v18 = (__int64 *)PsGetThreadWin32Thread(v16);
          if ( v18 )
            v17 = *v18;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v17 + 456) + 224LL) & 0x20) == 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v7);
          v7 = 511LL;
          v8 = *(_DWORD *)(v12 + 368) >> 8;
          LOWORD(v8) = v8 & 0x1FF;
          if ( (_WORD)v8 != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
            TransformRectBetweenCoordinateSpaces(&v28, &v28, 0LL, v12);
        }
      }
    }
  }
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v22 )
      v21 = *v22;
  }
  v27[0] = *(_QWORD *)(v21 + 392);
  *(_QWORD *)(v21 + 392) = v27;
  v27[1] = v12;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v23 = (struct tagWND *)v12;
  }
  else
  {
    v23 = 0LL;
  }
  v11 = xxxRedrawWindow(v23);
  ThreadUnlock1(v25, v24);
LABEL_28:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v11;
}
