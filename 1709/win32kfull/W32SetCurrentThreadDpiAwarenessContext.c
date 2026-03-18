/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C00AA540
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  _DWORD *v10; // rax

  v4 = 0;
  v5 = 0;
  if ( (int)a1 >= 0 )
    v5 = a1;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(v7);
    v4 = *(_DWORD *)(v7 + 340);
    *(_DWORD *)(v7 + 340) = v5;
    v10 = *(_DWORD **)(v7 + 352);
    if ( v10 )
      *v10 = v5;
  }
  if ( !v4 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 280) | 0x80000000;
  return v4;
}
