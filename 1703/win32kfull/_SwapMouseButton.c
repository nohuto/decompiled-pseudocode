/*
 * XREFs of _SwapMouseButton @ 0x1C01C4650
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C00EBE68 (CheckGrantedAccess.c)
 */

__int64 __fastcall SwapMouseButton(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v4; // eax
  int v5; // edx
  __int64 result; // rax

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v4 = CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 648), 0x12u);
  v5 = 0;
  if ( !v4 )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL);
    return 0LL;
  }
  result = *(unsigned int *)(gpsi + 1972LL);
  *(_DWORD *)(gpsi + 1972LL) = v2;
  if ( v2 != (_DWORD)result )
  {
    LOBYTE(v5) = gbMouseButtonsRecentlySwapped == 0;
    gbMouseButtonsRecentlySwapped = v5;
  }
  return result;
}
