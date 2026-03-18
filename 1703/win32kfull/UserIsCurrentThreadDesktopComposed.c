/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C00E7A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserIsCurrentThreadDesktopComposed()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rax

  v0 = 0;
  v1 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v1 = *ThreadWin32Thread;
  v3 = *(_QWORD *)(v1 + 408);
  if ( v3 )
    return *(_DWORD *)(**(_QWORD **)(v3 + 8) + 52LL) & 1;
  return v0;
}
