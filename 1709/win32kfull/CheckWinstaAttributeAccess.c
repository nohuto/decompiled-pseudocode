/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C0053250
 * Callers:
 *     NtUserLockWorkStation @ 0x1C000D220 (NtUserLockWorkStation.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     zzzSetCursorPos @ 0x1C0051414 (zzzSetCursorPos.c)
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 *     NtUserGetCursorInfo @ 0x1C0053130 (NtUserGetCursorInfo.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00CB310 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     _SetDoubleClickTime @ 0x1C0114210 (_SetDoubleClickTime.c)
 *     _SetCaretBlinkTime @ 0x1C011C350 (_SetCaretBlinkTime.c)
 *     NtUserShowSystemCursor @ 0x1C01EC870 (NtUserShowSystemCursor.c)
 *     xxxSetSystemCursor @ 0x1C020B89C (xxxSetSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v4; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), v1) )
      return 1LL;
    v4 = 5LL;
  }
  else
  {
    v4 = 1459LL;
  }
  UserSetLastError(v4);
  return 0LL;
}
