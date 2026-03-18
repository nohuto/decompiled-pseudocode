/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C0071318
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B678 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1)
{
  unsigned int v1; // ebx
  int v2; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  int *v8; // rax

  v1 = 0;
  v2 = 0;
  if ( a1 >= 0 )
    v2 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    v1 = *(_DWORD *)(v7 + 340);
    *(_DWORD *)(v7 + 340) = v2;
    v8 = *(int **)(v7 + 352);
    if ( v8 )
      *v8 = v2;
  }
  if ( !v1 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4, v6) + 280) | 0x80000000;
  return v1;
}
