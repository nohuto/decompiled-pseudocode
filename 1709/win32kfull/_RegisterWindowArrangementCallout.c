/*
 * XREFs of _RegisterWindowArrangementCallout @ 0x1C00D6230
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 *     _UnregisterHotKey @ 0x1C00C34CC (_UnregisterHotKey.c)
 *     SetShellWndManagementWindow @ 0x1C00D6330 (SetShellWndManagementWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 *     IsIAMThread @ 0x1C00D63C0 (IsIAMThread.c)
 */

__int64 __fastcall RegisterWindowArrangementCallout(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v7 = 5LL;
    goto LABEL_13;
  }
  if ( !a2 )
  {
    v8 = *(_QWORD *)(v4 + 328);
    if ( !v8 )
      return 1LL;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 328LL) == a1 && *(_QWORD *)(v8 + 16) == gptiCurrent )
    {
      UnregisterHotKey(a1, 0xF060u);
      SetShellWndManagementWindow(v4, 0LL);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v4 + 328) )
  {
    v7 = 1242LL;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 16) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 400LL))
    || !(unsigned int)IsIAMThread(gptiCurrent) )
  {
    goto LABEL_12;
  }
  if ( (unsigned int)IsMessageOnlyWindow(a1) && (*(_DWORD *)(a1 + 368) & 0xF) == 2 )
  {
    SetShellWndManagementWindow(v4, a1);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(*(struct tagWND **)(v4 + 328), 0LL, 61536, 28673, BugCheckParameter2);
    return 1LL;
  }
  v7 = 87LL;
LABEL_13:
  UserSetLastError(v7, v5);
  return 0LL;
}
