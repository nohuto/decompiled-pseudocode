/*
 * XREFs of _GetNextQueueWindow @ 0x1C01CBF24
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00069B0 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CADC4 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C001CA48 (GetLastTopMostWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B7310 (IsWindowUnderActiveLockScreen.c)
 *     GetAppCompatFlags @ 0x1C00F8ED0 (GetAppCompatFlags.c)
 */

__int64 __fastcall GetNextQueueWindow(__int64 a1, __int64 a2, int a3)
{
  int v3; // r15d
  int v4; // r14d
  __int64 LastTopMostWindow; // rax
  struct tagWND *v6; // r13
  __int64 TopLevelWindow; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 i; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 j; // rcx
  char v17; // di
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx

  v3 = 0;
  v4 = a2;
  LastTopMostWindow = a1;
  if ( !a1 )
  {
    LastTopMostWindow = GetLastTopMostWindow(0LL, a2);
    if ( !LastTopMostWindow )
      return 0LL;
  }
  v6 = gspwndAltTab;
  TopLevelWindow = GetTopLevelWindow(LastTopMostWindow);
  v8 = TopLevelWindow;
  if ( !TopLevelWindow )
    return 0LL;
  v9 = *(_QWORD *)(TopLevelWindow + 104);
  if ( !v9 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
    v8 = *(_QWORD *)(v9 + 112);
  }
  v10 = v8;
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    if ( (*(_WORD *)(v8 + 82) & 0x3FFF) == 0x29D )
      goto LABEL_30;
    v11 = 0LL;
    if ( (v4 != 0) == -2 )
    {
      v13 = *(_QWORD *)(v8 + 104);
      if ( v13 )
      {
        v11 = *(_QWORD *)(v13 + 112);
        v14 = GetAppCompatFlags(0LL) & 8;
        while ( v11 && v14 && (*(_BYTE *)(v11 + 64) & 8) != 0 )
          v11 = *(_QWORD *)(v11 + 88);
      }
LABEL_29:
      v8 = v11;
      if ( v11 )
        goto LABEL_39;
      goto LABEL_30;
    }
    if ( (v4 != 0) == -1 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 112LL); i; i = *(_QWORD *)(i + 88) )
        v11 = i;
      goto LABEL_29;
    }
    if ( !v4 )
    {
      v11 = *(_QWORD *)(v8 + 88);
      goto LABEL_29;
    }
    if ( v4 != 0 )
    {
      v11 = *(_QWORD *)(v8 + 96);
      goto LABEL_29;
    }
    if ( (v4 != 0) == 2 )
    {
      v11 = *(_QWORD *)(v8 + 120);
      goto LABEL_29;
    }
    if ( (v4 != 0) == 3 )
    {
      v11 = *(_QWORD *)(v8 + 112);
      goto LABEL_29;
    }
    UserSetLastError(1443LL);
LABEL_30:
    if ( v4 )
    {
      v15 = *(_QWORD *)(v9 + 112);
      v8 = 0LL;
      if ( (*(_WORD *)(v15 + 82) & 0x3FFF) != 0x29D )
      {
        for ( j = *(_QWORD *)(*(_QWORD *)(v15 + 104) + 112LL); j; j = *(_QWORD *)(j + 88) )
          v8 = j;
      }
    }
    else
    {
      v8 = *(_QWORD *)(v9 + 112);
    }
    if ( v3 )
      return 0LL;
    v3 = 1;
    if ( !v8 )
      return 0LL;
LABEL_39:
    if ( v8 == v10 )
      return 0LL;
    if ( (struct tagWND *)v8 != v6 )
    {
      v17 = *(_BYTE *)(v8 + 64);
      if ( v17 >= 0
        && (*(_BYTE *)(v8 + 67) & 8) == 0
        && !(unsigned int)IsWindowUnderActiveLockScreen(v8)
        && (*(_BYTE *)(v8 + 71) & 0x10) != 0
        && !(unsigned int)GetWindowCloakState(v18) )
      {
        v19 = *(_QWORD *)(v8 + 256);
        if ( !v19 || (*(_BYTE *)(v19 + 71) & 8) == 0 && (!a3 || (v17 & 8) == 0 && (*(_BYTE *)(v8 + 60) & 0x20) == 0) )
        {
          v20 = *(_QWORD *)(v8 + 120);
          v21 = v8;
          while ( v20 )
          {
            v21 = v20;
            v20 = *(_QWORD *)(v20 + 120);
          }
          if ( v8 == *(_QWORD *)(v21 + 256) )
            return v8;
        }
      }
    }
    if ( !v8 )
      return 0LL;
  }
}
