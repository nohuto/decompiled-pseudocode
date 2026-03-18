/*
 * XREFs of ImeSetTopmost @ 0x1C001E790
 * Callers:
 *     ImeCheckTopmost @ 0x1C001E73C (ImeCheckTopmost.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C001E954 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UnlinkWindow @ 0x1C005FA3C (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 */

void __fastcall ImeSetTopmost(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  struct tagWND *LastTopMostWindowNoIME; // rbx
  struct tagWND *v8; // rdi
  __int64 v9; // r12
  char v10; // al
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  struct tagWND *v14; // r15
  struct tagWND *v15; // rsi
  __int64 v16; // rdx
  struct tagWND *v17; // rcx
  struct tagWND *i; // rcx
  __int64 v19; // r8

  v3 = *(_QWORD *)(a1 + 104);
  LastTopMostWindowNoIME = 0LL;
  if ( !v3 )
    return;
  v8 = *(struct tagWND **)(v3 + 112);
  v9 = gpsi;
  if ( !a2 )
  {
    LastTopMostWindowNoIME = GetLastTopMostWindowNoIME((struct tagWND *)a1);
    if ( a3 )
    {
      v10 = 0;
      if ( !LastTopMostWindowNoIME )
        return;
      do
      {
        v11 = *((_QWORD *)LastTopMostWindowNoIME + 11);
        if ( v11 == a3 )
          break;
        v12 = LastTopMostWindowNoIME == (struct tagWND *)a1;
        LastTopMostWindowNoIME = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
        if ( v12 )
          v10 = 1;
      }
      while ( v11 );
      if ( !LastTopMostWindowNoIME || v10 )
        return;
    }
    v13 = *(_QWORD *)(a1 + 120);
    if ( (*(_BYTE *)(v13 + 60) & 0x20) != 0 )
    {
      for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( i == (struct tagWND *)v13 )
          break;
        v19 = *((_QWORD *)i + 21);
        if ( (*(_BYTE *)(v19 + 94) & 1) == 0 && *(_WORD *)(v19 + 8) != *(_WORD *)(gpsi + 882LL) )
          LastTopMostWindowNoIME = i;
      }
    }
  }
  v14 = LastTopMostWindowNoIME;
  while ( v8 )
  {
    v15 = (struct tagWND *)*((_QWORD *)v8 + 11);
    if ( *((_QWORD *)v8 + 2) == *(_QWORD *)(a1 + 16) )
    {
      v16 = *((_QWORD *)v8 + 21);
      if ( ((*(_BYTE *)(v16 + 94) & 1) != 0 || *(_WORD *)(v16 + 8) == *(_WORD *)(*(_QWORD *)v9 + 882LL))
        && v8 != LastTopMostWindowNoIME )
      {
        v17 = v8;
        while ( v17 != (struct tagWND *)a1
             || LastTopMostWindowNoIME && *((_QWORD *)LastTopMostWindowNoIME + 13) != *((_QWORD *)v8 + 13)
             || *((_QWORD *)v8 + 13) != v3 )
        {
          v17 = (struct tagWND *)*((_QWORD *)v17 + 15);
          if ( !v17 )
            goto LABEL_14;
        }
        UnlinkWindow(v8, v3);
        SetOrClrWF(a2 != 0, v8, 0x808u, 1);
        LinkWindow(v8);
        v9 = gpsi;
        LastTopMostWindowNoIME = v8;
      }
    }
LABEL_14:
    v8 = v15;
    if ( !v15 )
      break;
    if ( v15 == v14 )
      v8 = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
  }
}
