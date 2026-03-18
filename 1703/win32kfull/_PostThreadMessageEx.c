/*
 * XREFs of _PostThreadMessageEx @ 0x1C00CBC7C
 * Callers:
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C004D288 (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00CBF40 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E11E8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1C010736C (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(__int64 a1, unsigned int a2, LARGE_INTEGER a3, LARGE_INTEGER a4, DWORD *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 CurrentProcessWin32Process; // rdx
  LARGE_INTEGER *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  struct tagPOINT v17; // rax
  __int64 v18; // rax

  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 440) & 0x1000001) != 0x1000000 )
  {
    v9 = 1444LL;
    goto LABEL_47;
  }
  if ( a2 < 0x400
    && ((a1 = (unsigned __int16)MessageTable[a2], (a1 & 0x200) != 0) || a2 == 537 && (a3.LowPart & 0x8000) != 0)
    || a2 == 536 && (a3.LowPart & 0x8000) != 0 )
  {
    v9 = 1159LL;
LABEL_47:
    UserSetLastError(v9);
    return 0LL;
  }
  v10 = *(_QWORD *)(v8 + 376);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, 0x8000LL);
  if ( v10 == CurrentProcessWin32Process )
    goto LABEL_17;
  if ( a2 > 0xD0 )
  {
    if ( a2 != 272 )
    {
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_17;
      goto LABEL_32;
    }
    goto LABEL_36;
  }
  switch ( a2 )
  {
    case 0xD0u:
    case 0xCu:
      goto LABEL_32;
    case 0xDu:
      goto LABEL_17;
    case 0x4Eu:
LABEL_36:
      v9 = 5LL;
      goto LABEL_47;
  }
  if ( a2 != 188 )
    goto LABEL_17;
LABEL_32:
  if ( (!gbEnforceUIPI || *(_QWORD *)v10 == gpepCSRSS)
    && (*(_DWORD *)(v10 + 732) != *(_DWORD *)(CurrentProcessWin32Process + 732)
     || *(_DWORD *)(v10 + 736) != *(_DWORD *)(CurrentProcessWin32Process + 736)) )
  {
    goto LABEL_36;
  }
LABEL_17:
  if ( a2 == 576 || a2 == 281 || (unsigned int)IsPointerInputMessage(a2) )
  {
    v9 = 1002LL;
    goto LABEL_47;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 728), 0LL, a2);
  if ( (*(_DWORD *)(v8 + 1096) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ProcessSuspendedPostMessage)(
                        v8,
                        0LL,
                        a2,
                        (LARGE_INTEGER)a3.QuadPart,
                        (LARGE_INTEGER)a4.QuadPart) )
  {
    return 0LL;
  }
  v12 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v8 + 728), 0LL, 0);
  if ( !v12 )
    return 0LL;
  v13 = *(_QWORD *)(v8 + 384);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 88);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 16);
    else
      v15 = *(_QWORD *)(v13 + 64);
    v16 = *(_DWORD *)(*(_QWORD *)(v15 + 376) + 280LL);
  }
  else
  {
    LOBYTE(v16) = W32GetCurrentThreadDpiAwarenessContext();
  }
  v17 = LogicalCursorPosFromDpiAwarenessContext(v16);
  StoreQMessage(v12, 0LL, a2, a3, a4, 0, 0, 0, 0LL, 0, a5, *(_QWORD *)&v17, 0LL, 0LL);
  SetWakeBit(v8, 0x108u);
  if ( a2 == 786 )
    SetWakeBit(v8, 0x80u);
  v18 = *(_QWORD *)(v8 + 384);
  if ( v8 == *(_QWORD *)(v18 + 32) )
    *(_QWORD *)(v18 + 40) = v12;
  return 1LL;
}
