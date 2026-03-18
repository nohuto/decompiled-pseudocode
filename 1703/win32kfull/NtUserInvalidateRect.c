/*
 * XREFs of NtUserInvalidateRect @ 0x1C00654A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 *v11; // rdx
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rsi
  __int64 *v15; // rax
  struct tagWND *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v21[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v3);
  v5 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
      goto LABEL_20;
  }
  else
  {
    v8 = 0LL;
  }
  v11 = a2;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v11 = (__int128 *)W32UserProbeAddress;
    v22 = *v11;
    if ( v8 )
    {
      v12 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 432) + 224LL) & 1) == 0 )
      {
        v14 = 0LL;
        v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v15 )
          v14 = *v15;
        if ( (*(_BYTE *)(*(_QWORD *)(v14 + 432) + 224LL) & 0x20) == 0
          && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (*(_DWORD *)(v8 + 368) & 0xF) )
        {
          TransformRectBetweenCoordinateSpaces(&v22, &v22, 0LL, v8);
        }
      }
    }
  }
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  v21[1] = v8;
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 8);
    v16 = (struct tagWND *)v8;
  }
  else
  {
    v16 = 0LL;
  }
  v5 = xxxRedrawWindow(v16);
  ThreadUnlock1(v18, v17);
LABEL_20:
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v5;
}
