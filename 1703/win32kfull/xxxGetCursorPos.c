/*
 * XREFs of xxxGetCursorPos @ 0x1C004D120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C004D288 (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall xxxGetCursorPos(struct tagPOINT *a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagPOINT v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagPOINT *v13; // rdx
  __int64 v15; // rcx

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
    {
      v15 = 1459LL;
      goto LABEL_13;
    }
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 648), 2u) )
      goto LABEL_12;
  }
  v5 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v5 )
  {
    if ( v5 != grpdeskRitInput )
    {
LABEL_12:
      v15 = 5LL;
LABEL_13:
      UserSetLastError(v15);
      return 0LL;
    }
  }
  v6 = v2 - 1;
  if ( v6 && v6 != 1 )
    return 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v5);
  v8 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  if ( ((PsGetCurrentProcessWow64Process(v10, v9, v11, v12) != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v13 = (struct tagPOINT *)W32UserProbeAddress;
  LOBYTE(v13->x) = v13->x;
  HIBYTE(v13->y) = HIBYTE(v13->y);
  *a1 = v8;
  return 1LL;
}
