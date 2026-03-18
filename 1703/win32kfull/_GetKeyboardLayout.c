/*
 * XREFs of _GetKeyboardLayout @ 0x1C004C020
 * Callers:
 *     GetActiveHKL @ 0x1C00C9A9C (GetActiveHKL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  __int64 v1; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rax
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  HANDLE v7; // rsi

  if ( a1 )
  {
    v5 = (_QWORD **)(*(_QWORD *)(gptiCurrent + 408LL) + 168LL);
    v6 = *v5;
    if ( *v5 == v5 )
      return 0LL;
    v7 = (HANDLE)a1;
    while ( PsGetThreadId((PETHREAD)*(v6 - 82)) != v7 )
    {
      v6 = (_QWORD *)*v6;
      if ( v6 == v5 )
        return 0LL;
    }
    v3 = *(v6 - 33);
  }
  else
  {
    v1 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
    v3 = *(_QWORD *)(v1 + 392);
  }
  if ( v3 )
    return *(_QWORD *)(v3 + 40);
  return 0LL;
}
