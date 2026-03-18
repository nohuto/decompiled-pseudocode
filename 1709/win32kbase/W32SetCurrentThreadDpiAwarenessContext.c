/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C0060E38
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0048C48 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
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
