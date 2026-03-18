/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C0054AA0
 * Callers:
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1)
{
  unsigned int v1; // edi
  int v2; // esi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int *v7; // rax

  v1 = 0;
  v2 = 0;
  if ( a1 >= 0 )
    v2 = a1;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(v3);
    v1 = *(_DWORD *)(v3 + 340);
    *(_DWORD *)(v3 + 340) = v2;
    v7 = *(int **)(v3 + 352);
    if ( v7 )
      *v7 = v2;
  }
  if ( !v1 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v6, v5) + 280) | 0x80000000;
  return v1;
}
