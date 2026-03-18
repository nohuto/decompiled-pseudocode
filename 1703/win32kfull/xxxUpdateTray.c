/*
 * XREFs of xxxUpdateTray @ 0x1C0019CC0
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0018E48 (xxxSetTrayWindow.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     Is31TrayWindow @ 0x1C020AC64 (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  struct tagWND *v1; // rdi
  unsigned __int64 v2; // rbx
  unsigned __int8 v3; // r10
  int i; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  char v11; // al
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

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
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 384LL) == gpqForeground
      && (*(_DWORD *)(gpsi + 2104LL) & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) != 0
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
          v10 = IsTrayWindow(v2);
          goto LABEL_21;
        }
        if ( *(char *)(v2 + 64) < 0 )
          break;
        if ( (*(_BYTE *)(v2 + 60) & 0x40) != 0
          || (v11 = *(_BYTE *)(v2 + 70), (v11 & 0xA) != 0) && ((v11 & 0xC0) != 0 || (*(_BYTE *)(v2 + 71) & 0x20) != 0) )
        {
          v10 = Is31TrayWindow((struct tagWND *)v2);
LABEL_21:
          v5 = v2 & -(__int64)(v10 != 0);
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
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      v12[1] = v5;
      if ( v5 )
      {
        ++*(_DWORD *)(v5 + 8);
        v6 = *(_QWORD *)(v5 + 24);
      }
      else
      {
        v6 = *(_QWORD *)(v2 + 24);
      }
      xxxSetTrayWindow(v6, (__int64 *)v5);
      ThreadUnlock1(v8, v7);
    }
    if ( !*((_QWORD *)v1 + 15) || (v9 = 23LL, (*((_BYTE *)v1 + 66) & 4) != 0) )
      v9 = 19LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v9, *(_QWORD *)v1);
  }
}
