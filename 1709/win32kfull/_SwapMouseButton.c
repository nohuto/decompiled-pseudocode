/*
 * XREFs of _SwapMouseButton @ 0x1C01A19A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C0050878 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall SwapMouseButton(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v3; // eax
  int v4; // edx
  __int64 result; // rax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 656), 0x12u);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
  {
    UserSetLastError(1459LL, 0LL);
    return 0LL;
  }
  result = *(unsigned int *)(gpsi + 1972LL);
  *(_DWORD *)(gpsi + 1972LL) = v1;
  if ( v1 != (_DWORD)result )
  {
    LOBYTE(v4) = gbMouseButtonsRecentlySwapped == 0;
    gbMouseButtonsRecentlySwapped = v4;
  }
  return result;
}
