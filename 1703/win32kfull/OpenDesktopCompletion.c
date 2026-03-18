/*
 * XREFs of OpenDesktopCompletion @ 0x1C0012728
 * Callers:
 *     NtUserOpenInputDesktop @ 0x1C00107D0 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C0010E24 (_OpenDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01C359C (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  PEPROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v7; // rbx
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  CurrentProcessWin32Process = (PEPROCESS *)PsGetCurrentProcessWin32Process(a1, a2);
  v7 = *(_DWORD **)(a1 + 40);
  if ( (v7[8] & 2) == 0 )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  if ( PsGetProcessId(*CurrentProcessWin32Process) == (HANDLE)gpidLogon )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  GetProcessLuid(0LL, &v9);
  if ( v9 != v7[36] || v10 != v7[37] )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  UserSetLastError(170LL);
  return 3221226091LL;
}
