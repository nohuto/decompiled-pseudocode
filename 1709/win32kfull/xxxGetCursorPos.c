/*
 * XREFs of xxxGetCursorPos @ 0x1C00A0860
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall xxxGetCursorPos(__int64 *a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v13; // rcx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
    {
      v13 = 1459LL;
      goto LABEL_13;
    }
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 2u) )
      goto LABEL_12;
  }
  v6 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v6 )
  {
    if ( v6 != grpdeskRitInput )
    {
LABEL_12:
      v13 = 5LL;
LABEL_13:
      UserSetLastError(v13, v5);
      return 0LL;
    }
  }
  v7 = a2 - 1;
  if ( v7 && v7 != 1 )
    return 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6, v5);
  v9 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  if ( ((PsGetCurrentProcessWow64Process(v10) != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[7] = v11[7];
  *a1 = v9;
  return 1LL;
}
