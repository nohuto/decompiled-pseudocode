/*
 * XREFs of _RegisterWindowArrangementCallout @ 0x1C00F66E0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C001BECC (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     _UnregisterHotKey @ 0x1C00BCF40 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C00BD09C (_RegisterHotKey.c)
 *     SetShellWndManagementWindow @ 0x1C00F67E0 (SetShellWndManagementWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     IsIAMThread @ 0x1C00F6870 (IsIAMThread.c)
 */

__int64 __fastcall RegisterWindowArrangementCallout(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 12) & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v6 = 5LL;
    goto LABEL_13;
  }
  if ( !v2 )
  {
    v7 = *(_QWORD *)(v4 + 328);
    if ( !v7 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *(_QWORD *)(v7 + 16) == gptiCurrent )
    {
      UnregisterHotKey(a1, 61536);
      SetShellWndManagementWindow(v4, 0LL);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v4 + 328) )
  {
    v6 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent
    || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 376LL))
    || !(unsigned int)IsIAMThread(gptiCurrent) )
  {
    goto LABEL_12;
  }
  if ( (unsigned int)IsMessageOnlyWindow(a1) && (*((_DWORD *)a1 + 92) & 0xF) == 2 )
  {
    SetShellWndManagementWindow(v4, a1);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(*(struct tagWND **)(v4 + 328), 0LL, 61536, 28673, BugCheckParameter2);
    return 1LL;
  }
  v6 = 87LL;
LABEL_13:
  UserSetLastError(v6);
  return 0LL;
}
