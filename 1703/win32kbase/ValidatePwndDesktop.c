/*
 * XREFs of ValidatePwndDesktop @ 0x1C00D5770
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall ValidatePwndDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 && (*(_QWORD *)(a1 + 16) == a2 || *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 408)) )
    return 1;
  else
    UserSetLastError(1400LL, a2, a3, a4);
  return v4;
}
