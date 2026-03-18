/*
 * XREFs of PopW32ThreadLock @ 0x1C0115960
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
