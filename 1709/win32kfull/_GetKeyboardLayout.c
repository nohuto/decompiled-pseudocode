/*
 * XREFs of _GetKeyboardLayout @ 0x1C00A0980
 * Callers:
 *     GetActiveHKL @ 0x1C00CD4E4 (GetActiveHKL.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetKeyboardLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  _QWORD **v9; // rdi
  _QWORD *v10; // rbx
  HANDLE v11; // rsi

  if ( (_DWORD)a1 )
  {
    v9 = (_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 168LL);
    v10 = *v9;
    if ( *v9 == v9 )
      return 0LL;
    v11 = (HANDLE)(int)a1;
    while ( PsGetThreadId((PETHREAD)*(v10 - 89)) != v11 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        return 0LL;
    }
    v7 = *(v10 - 37);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, (unsigned __int8)a1, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v5 = *ThreadWin32Thread;
    }
    v7 = *(_QWORD *)(v5 + 416);
  }
  if ( v7 )
    return *(_QWORD *)(v7 + 40);
  return 0LL;
}
