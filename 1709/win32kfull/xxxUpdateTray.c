/*
 * XREFs of xxxUpdateTray @ 0x1C0055370
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C00537F8 (xxxSetTrayWindow.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     Is31TrayWindow @ 0x1C020BF38 (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  struct tagWND *v1; // rsi
  unsigned __int64 v2; // rbx
  unsigned __int8 v3; // r9
  int i; // ecx
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  char v12; // al
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = (unsigned __int64)a1;
  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    while ( 1 )
    {
      a1 = (struct tagWND *)*((_QWORD *)a1 + 15);
      if ( !a1 )
        break;
      if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
        v2 = (unsigned __int64)a1;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 408LL) == gpqForeground
      && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) != 0
       || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 184LL))
      && (unsigned int)IsTopLevelWindow(v2)
      && ((*(_BYTE *)(v2 + 71) & v3) != 0 || (*((_BYTE *)v1 + 66) & 4) != 0) )
    {
      for ( i = 1; ; i = 0 )
      {
        if ( (*(_BYTE *)(v2 + 61) & 2) != 0 )
        {
          if ( (*((_BYTE *)v1 + 61) & 2) != 0 && (unsigned int)IsTrayWindow(v1) )
          {
            v5 = (__int64)v1;
            goto LABEL_13;
          }
          v11 = IsTrayWindow(v2);
          goto LABEL_21;
        }
        if ( *(char *)(v2 + 64) < 0 )
          break;
        if ( (*(_BYTE *)(v2 + 60) & 0x40) != 0
          || (v12 = *(_BYTE *)(v2 + 70), (v12 & 0xA) != 0) && ((v12 & 0xC0) != 0 || (*(_BYTE *)(v2 + 71) & 0x20) != 0) )
        {
          v11 = Is31TrayWindow((struct tagWND *)v2);
LABEL_21:
          v5 = v2 & -(__int64)(v11 != 0);
          goto LABEL_13;
        }
        if ( !i )
          return;
        v2 = *(_QWORD *)(v2 + 256);
        if ( !v2 )
          return;
      }
      v5 = 0LL;
LABEL_13:
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v13;
      v13[1] = v5;
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
        v7 = *(_QWORD *)(v5 + 24);
      }
      else
      {
        v7 = *(_QWORD *)(v2 + 24);
      }
      xxxSetTrayWindow(v7, (__int64 *)v5);
      ThreadUnlock1(v9, v8);
    }
    if ( !*((_QWORD *)v1 + 15) || (v10 = 23LL, (*((_BYTE *)v1 + 66) & 4) != 0) )
      v10 = 19LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), v10, *(_QWORD *)v1);
  }
}
