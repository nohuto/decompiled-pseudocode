/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C00F8B60
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall UserIsCurrentThreadDesktopComposed(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = *(_QWORD *)(v4 + 432);
  if ( v6 )
    return *(_DWORD *)(**(_QWORD **)(v6 + 8) + 52LL) & 1;
  return v3;
}
