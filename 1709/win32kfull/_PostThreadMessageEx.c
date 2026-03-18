/*
 * XREFs of _PostThreadMessageEx @ 0x1C009E6C0
 * Callers:
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C009E694 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00CD370 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1C01163F8 (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(
        __int64 a1,
        __int64 CurrentProcessWin32Process,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagQMSG *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rcx

  v5 = (unsigned int)CurrentProcessWin32Process;
  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 464) & 0x1000001) != 0x1000000 )
  {
    v20 = 1444LL;
    goto LABEL_52;
  }
  CurrentProcessWin32Process = 0x8000LL;
  if ( (unsigned int)v5 < 0x400
    && ((a1 = (unsigned __int16)MessageTable[v5], (a1 & 0x200) != 0) || (_DWORD)v5 == 537 && (a3 & 0x8000) != 0)
    || (_DWORD)v5 == 536 && (a3 & 0x8000) != 0 )
  {
    v20 = 1159LL;
    goto LABEL_52;
  }
  v9 = *(_QWORD *)(v8 + 400);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( v9 != CurrentProcessWin32Process )
  {
    if ( (unsigned int)v5 > 0xD0 )
    {
      if ( (_DWORD)v5 == 272 )
        goto LABEL_36;
      if ( (_DWORD)v5 != 353 && (_DWORD)v5 != 424 && (_DWORD)v5 != 563 && (_DWORD)v5 != 648 )
        goto LABEL_8;
    }
    else if ( (_DWORD)v5 != 208 && (_DWORD)v5 != 12 )
    {
      if ( (_DWORD)v5 == 13 )
        goto LABEL_8;
      if ( (_DWORD)v5 == 78 )
        goto LABEL_36;
      if ( (_DWORD)v5 != 188 )
        goto LABEL_8;
    }
    if ( gbEnforceUIPI && *(_QWORD *)v9 != gpepCSRSS
      || *(_DWORD *)(v9 + 740) == *(_DWORD *)(CurrentProcessWin32Process + 740)
      && *(_DWORD *)(v9 + 744) == *(_DWORD *)(CurrentProcessWin32Process + 744) )
    {
      goto LABEL_8;
    }
LABEL_36:
    v20 = 5LL;
LABEL_52:
    UserSetLastError(v20, CurrentProcessWin32Process);
    return 0LL;
  }
LABEL_8:
  if ( (_DWORD)v5 == 576
    || (_DWORD)v5 == 281
    || (unsigned int)IsPointerInputMessage((unsigned int)v5, CurrentProcessWin32Process) )
  {
    v20 = 1002LL;
    goto LABEL_52;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 784), 0LL, v5);
  if ( (*(_DWORD *)(v8 + 1184) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, (unsigned int)v5, a3, a4) )
  {
    return 0LL;
  }
  v12 = AllocQEntryEx((struct tagMLIST *)(v8 + 784), 0LL, 0);
  if ( !v12 )
    return 0LL;
  v13 = *(_QWORD *)(v8 + 408);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 120);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 16);
    else
      v15 = *(_QWORD *)(v13 + 96);
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(v15 + 400) + 280LL);
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10);
  }
  v17 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  StoreQMessage(v12, 0LL, (unsigned int)v5, a3, a4, 0, 0LL, 0, 0LL, 0, a5, v17, 0LL, 0LL);
  SetWakeBit(v8, 264LL);
  if ( (_DWORD)v5 == 786 )
    SetWakeBit(v8, 128LL);
  v18 = *(_QWORD *)(v8 + 408);
  if ( v8 == *(_QWORD *)(v18 + 64) )
    *(_QWORD *)(v18 + 72) = v12;
  return 1LL;
}
