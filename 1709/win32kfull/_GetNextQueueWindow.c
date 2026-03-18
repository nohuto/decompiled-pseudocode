/*
 * XREFs of _GetNextQueueWindow @ 0x1C01D02B4
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C000BE60 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C005E6A0 (IsWindowUnderActiveLockScreen.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetAppCompatFlags @ 0x1C0073430 (GetAppCompatFlags.c)
 */

__int64 __fastcall GetNextQueueWindow(__int64 a1, int a2, int a3)
{
  int v3; // r15d
  __int64 LastTopMostWindow; // rax
  struct tagWND *TopLevelWindow; // rbx
  struct tagWND *TopLevelHost; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 i; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 j; // rcx
  char v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  ULONG_PTR v25; // [rsp+50h] [rbp+8h]

  v3 = 0;
  LastTopMostWindow = a1;
  if ( !a1 )
  {
    LastTopMostWindow = GetLastTopMostWindow(0LL);
    if ( !LastTopMostWindow )
      return 0LL;
  }
  v25 = gspwndAltTab;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(LastTopMostWindow);
  TopLevelHost = CoreWindowProp::GetTopLevelHost(TopLevelWindow);
  v10 = GetTopLevelWindow((__int64)TopLevelHost);
  if ( !v10 )
    v10 = (__int64)TopLevelWindow;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = *(_QWORD *)(v10 + 104);
  if ( !v12 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
    v10 = *(_QWORD *)(v12 + 112);
    v11 = v10;
  }
  if ( !v10 )
    return 0LL;
  while ( 1 )
  {
    if ( (*(_WORD *)(v10 + 82) & 0x3FFF) == 0x29D )
      goto LABEL_32;
    v13 = 0LL;
    if ( (a2 != 0) == -2 )
    {
      v15 = *(_QWORD *)(v10 + 104);
      if ( v15 )
      {
        v13 = *(_QWORD *)(v15 + 112);
        v16 = GetAppCompatFlags(0LL) & 8;
        while ( v13 && v16 && (*(_BYTE *)(v13 + 64) & 8) != 0 )
          v13 = *(_QWORD *)(v13 + 88);
      }
LABEL_31:
      v10 = v13;
      if ( v13 )
        goto LABEL_41;
      goto LABEL_32;
    }
    if ( (a2 != 0) == -1 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(v10 + 104) + 112LL); i; i = *(_QWORD *)(i + 88) )
        v13 = i;
      goto LABEL_31;
    }
    if ( !a2 )
    {
      v13 = *(_QWORD *)(v10 + 88);
      goto LABEL_31;
    }
    if ( a2 != 0 )
    {
      v13 = *(_QWORD *)(v10 + 96);
      goto LABEL_31;
    }
    if ( (a2 != 0) == 2 )
    {
      v13 = *(_QWORD *)(v10 + 120);
      goto LABEL_31;
    }
    if ( (a2 != 0) == 3 )
    {
      v13 = *(_QWORD *)(v10 + 112);
      goto LABEL_31;
    }
    UserSetLastError(1443LL, v9);
LABEL_32:
    if ( a2 )
    {
      v17 = *(_QWORD *)(v12 + 112);
      v10 = 0LL;
      if ( (*(_WORD *)(v17 + 82) & 0x3FFF) != 0x29D )
      {
        for ( j = *(_QWORD *)(*(_QWORD *)(v17 + 104) + 112LL); j; j = *(_QWORD *)(j + 88) )
          v10 = j;
      }
    }
    else
    {
      v10 = *(_QWORD *)(v12 + 112);
    }
    if ( v3 )
      return 0LL;
    v3 = 1;
    if ( !v10 )
      return 0LL;
LABEL_41:
    if ( v10 == v11 )
      return 0LL;
    if ( v10 != v25 )
    {
      v19 = *(_BYTE *)(v10 + 64);
      if ( v19 >= 0
        && (*(_BYTE *)(v10 + 67) & 8) == 0
        && !(unsigned int)IsWindowUnderActiveLockScreen(v10)
        && (*(_BYTE *)(v10 + 71) & 0x10) != 0
        && !(unsigned int)GetWindowCloakState(v20) )
      {
        v21 = *(_QWORD *)(v10 + 256);
        if ( !v21 || (*(_BYTE *)(v21 + 71) & 8) == 0 && (!a3 || (v19 & 8) == 0 && (*(_BYTE *)(v10 + 60) & 0x20) == 0) )
        {
          v22 = *(_QWORD *)(v10 + 120);
          v23 = v10;
          while ( v22 )
          {
            v23 = v22;
            v22 = *(_QWORD *)(v22 + 120);
          }
          if ( v10 == *(_QWORD *)(v23 + 256) )
            return v10;
        }
      }
    }
    if ( !v10 )
      return 0LL;
  }
}
