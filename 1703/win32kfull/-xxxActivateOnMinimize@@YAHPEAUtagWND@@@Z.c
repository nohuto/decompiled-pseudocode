/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     CanForceForeground @ 0x1C001BDE0 (CanForceForeground.c)
 *     GetLastTopMostWindow @ 0x1C001CA48 (GetLastTopMostWindow.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00B7360 (SkipWindowOnMonitor.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  struct tagWND *v5; // rbp
  BOOL v6; // r12d
  __int64 LastTopMostWindow; // rax
  __int64 v8; // rdi
  __int64 ThreadDesktopWindow; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  char v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  _QWORD v18[11]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+88h] [rbp+10h]

  v4 = 0;
  v5 = a1;
  v6 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL) != 0LL;
  v20 = *((_DWORD *)a1 + 80);
  if ( v20 == 1 )
    LastTopMostWindow = GetLastTopMostWindow((__int64)a1, a2);
  else
    LastTopMostWindow = 0LL;
  if ( !LastTopMostWindow )
  {
    ThreadDesktopWindow = *((_QWORD *)v5 + 13);
    goto LABEL_7;
  }
  v8 = *(_QWORD *)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v10 = v6 ? *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL) : v8;
    v11 = 0LL;
    if ( v10 )
    {
      do
      {
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v10 + gSharedInfo[1] + 25LL) & 1) == 0
          && (*(_BYTE *)(v10 + 67) & 8) == 0 )
        {
          v12 = *(_BYTE *)(v10 + 71);
          if ( (v12 & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v10)
            && ((v12 & 0x20) == 0 || (*(_BYTE *)(v10 + 63) & 7) == 1)
            && (v20 != 1 || *(_DWORD *)(v10 + 320) == 1)
            && !(unsigned int)SkipWindowOnMonitor(v10) )
          {
            if ( *(char *)(v10 + 64) >= 0 )
              break;
            if ( !v11 )
              v11 = v10;
          }
        }
        if ( v6 )
        {
          v6 = 0;
          v10 = v8;
        }
        else
        {
          v10 = *(_QWORD *)(v10 + 88);
        }
      }
      while ( v10 );
      v5 = a1;
      if ( v10 )
        break;
    }
    if ( v4 )
    {
      v10 = v11;
      if ( !v11 )
        return 0LL;
      break;
    }
    v4 = 1;
    if ( v8 )
    {
      ThreadDesktopWindow = *(_QWORD *)(v8 + 104);
      goto LABEL_7;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_7:
      v8 = *(_QWORD *)(ThreadDesktopWindow + 112);
    else
      v8 = 0LL;
  }
  v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v18;
  v18[1] = v10;
  ++*(_DWORD *)(v10 + 8);
  v13 = *((_QWORD *)v5 + 2);
  if ( (*(_DWORD *)(v13 + 1096) & 0x40000) != 0 && *(struct tagWND **)(v13 + 1264) == v5 )
  {
    v17 = *(_QWORD *)(v13 + 384);
    a4 = gpqForeground;
    if ( v17 == gpqForeground && *(struct tagWND **)(v17 + 88) == v5 )
    {
      a3 = *(_QWORD *)(v13 + 1272);
      if ( a3 )
      {
        if ( *(_QWORD *)(a3 + 16) == gptiForeground
          && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL) != gpqForeground
          && !(unsigned int)CanForceForeground(*(_QWORD *)(v13 + 376)) )
        {
          *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
        }
      }
    }
  }
  xxxSetForegroundWindow((struct tagWND *)v10, 0LL, a3, a4);
  ThreadUnlock1(v15, v14);
  return 1LL;
}
