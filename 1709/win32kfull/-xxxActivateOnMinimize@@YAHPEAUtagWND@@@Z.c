/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     CanForceForeground @ 0x1C0090A90 (CanForceForeground.c)
 *     SkipWindowOnMonitor @ 0x1C00C83C4 (SkipWindowOnMonitor.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r13d
  struct tagWND *v2; // rbp
  BOOL v3; // r12d
  __int64 LastTopMostWindow; // rax
  __int64 v5; // rdi
  __int64 ThreadDesktopWindow; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  char v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD v16[11]; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+88h] [rbp+10h]

  v1 = 0;
  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 128LL) != 0LL;
  v18 = *((_DWORD *)a1 + 80);
  if ( v18 == 1 )
    LastTopMostWindow = GetLastTopMostWindow((__int64)a1);
  else
    LastTopMostWindow = 0LL;
  if ( !LastTopMostWindow )
  {
    ThreadDesktopWindow = *((_QWORD *)v2 + 13);
    goto LABEL_7;
  }
  v5 = *(_QWORD *)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v7 = v3 ? *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 128LL) : v5;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v7 + gSharedInfo[1] + 25LL) & 1) == 0
          && (*(_BYTE *)(v7 + 67) & 8) == 0 )
        {
          v9 = *(_BYTE *)(v7 + 71);
          if ( (v9 & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v7)
            && ((v9 & 0x20) == 0 || (*(_BYTE *)(v7 + 63) & 7) == 1)
            && (v18 != 1 || *(_DWORD *)(v7 + 320) == 1)
            && !(unsigned int)SkipWindowOnMonitor(v7) )
          {
            if ( *(char *)(v7 + 64) >= 0 )
              break;
            if ( !v8 )
              v8 = v7;
          }
        }
        if ( v3 )
        {
          v3 = 0;
          v7 = v5;
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 88);
        }
      }
      while ( v7 );
      v2 = a1;
      if ( v7 )
        break;
    }
    if ( v1 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      break;
    }
    v1 = 1;
    if ( v5 )
    {
      ThreadDesktopWindow = *(_QWORD *)(v5 + 104);
      goto LABEL_7;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_7:
      v5 = *(_QWORD *)(ThreadDesktopWindow + 112);
    else
      v5 = 0LL;
  }
  v16[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v16;
  v16[1] = v7;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v10 = *((_QWORD *)v2 + 2);
  if ( (*(_DWORD *)(v10 + 1184) & 0x40000) != 0 && *(struct tagWND **)(v10 + 1352) == v2 )
  {
    v14 = *(_QWORD *)(v10 + 408);
    if ( v14 == gpqForeground && *(struct tagWND **)(v14 + 120) == v2 )
    {
      v15 = *(_QWORD *)(v10 + 1360);
      if ( v15 )
      {
        if ( *(_QWORD *)(v15 + 16) == gptiForeground
          && *(_QWORD *)(*(_QWORD *)(v7 + 16) + 408LL) != gpqForeground
          && !(unsigned int)CanForceForeground(*(_QWORD *)(v10 + 400)) )
        {
          *(_DWORD *)(gptiCurrent + 464LL) |= 0x20u;
        }
      }
    }
  }
  xxxSetForegroundWindow((struct tagWND *)v7);
  ThreadUnlock1(v12, v11);
  return 1LL;
}
