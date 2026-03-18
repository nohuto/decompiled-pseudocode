/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C00BD550
 * Callers:
 *     NtUserLockWorkStation @ 0x1C00081F0 (NtUserLockWorkStation.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00B3D90 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     _SetCaretBlinkTime @ 0x1C00BB9A0 (_SetCaretBlinkTime.c)
 *     zzzSetCursorPosByType @ 0x1C00BBA6C (zzzSetCursorPosByType.c)
 *     _RegisterHotKey @ 0x1C00BD09C (_RegisterHotKey.c)
 *     NtUserGetCursorInfo @ 0x1C00BD430 (NtUserGetCursorInfo.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     _SetDoubleClickTime @ 0x1C00C6930 (_SetDoubleClickTime.c)
 *     NtUserShowSystemCursor @ 0x1C01E0720 (NtUserShowSystemCursor.c)
 *     xxxSetSystemCursor @ 0x1C0209AFC (xxxSetSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess, __int64 a2)
{
  ACCESS_MASK v2; // edi
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v5; // rcx

  v2 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess, a2);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), v2) )
      return 1LL;
    v5 = 5LL;
  }
  else
  {
    v5 = 1459LL;
  }
  UserSetLastError(v5);
  return 0LL;
}
