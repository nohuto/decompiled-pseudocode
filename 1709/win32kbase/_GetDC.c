/*
 * XREFs of _GetDC @ 0x1C008E6E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 */

__int64 __fastcall GetDC(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( a1 )
  {
    v1 = 0x10000LL;
    return GetDCEx(a1, 0LL, v1);
  }
  result = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  if ( result )
  {
    v1 = 3LL;
    a1 = *(_QWORD *)(*(_QWORD *)(result + 8) + 16LL);
    return GetDCEx(a1, 0LL, v1);
  }
  return result;
}
