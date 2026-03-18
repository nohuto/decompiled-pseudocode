/*
 * XREFs of CalcForegroundInsertAfter @ 0x1C00587B8
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C00572C0 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00575BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01C00F8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C0058058 (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfter(__int64 a1)
{
  struct tagWND *LastNonBottomMostWindow; // rax
  struct tagWND *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // r11
  struct tagWND *v7; // r8
  struct tagWND *v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8

  if ( (*(_BYTE *)(a1 + 60) & 0x20) != 0 )
    LastNonBottomMostWindow = GetLastNonBottomMostWindow((struct tagWND *)a1, 1);
  else
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow(a1);
  v3 = LastNonBottomMostWindow;
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40
    || (v4 = *(_QWORD *)(a1 + 16), (*(_DWORD *)(v4 + 464) & 0x20) == 0)
    && (*(_DWORD *)(*(_QWORD *)(v4 + 400) + 12LL) & 0x80100) == 0 )
  {
    if ( gpqForeground )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v6 + 408) != gpqForeground )
      {
        v7 = LastNonBottomMostWindow ? LastNonBottomMostWindow : *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
        v8 = LastNonBottomMostWindow;
        if ( !v7 )
          goto LABEL_22;
        do
        {
          v9 = v7;
          if ( v7 == (struct tagWND *)a1
            || (*((_BYTE *)v7 + 60) & 0x20) != 0
            || *((_QWORD *)v7 + 2) == v6
            && (*((_BYTE *)v7 + 64) & 8) == 0
            && ((*((_BYTE *)v7 + 71) & 0xC0) == 0x40 || (*((_BYTE *)v7 + 71) & 0x10) != 0) )
          {
            break;
          }
          v7 = (struct tagWND *)*((_QWORD *)v7 + 11);
          v3 = v9;
        }
        while ( v7 );
        if ( !v7 || (*((_BYTE *)v7 + 60) & 0x20) != 0 )
        {
LABEL_22:
          v3 = LastNonBottomMostWindow;
          if ( !LastNonBottomMostWindow )
            v8 = *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
          v10 = *(_QWORD *)(gpqForeground + 120LL);
          v11 = 0LL;
          if ( v10 )
            v11 = *(_QWORD *)(v10 + 16);
          while ( v8 && (*((_BYTE *)v8 + 60) & 0x20) == 0 )
          {
            if ( *((_QWORD *)v8 + 2) == v11 )
            {
              if ( *((_QWORD *)v8 + 15) )
              {
                v3 = v8;
              }
              else if ( (*((_BYTE *)v8 + 71) & 0x10) != 0 )
              {
                v3 = v8;
              }
            }
            v8 = (struct tagWND *)*((_QWORD *)v8 + 11);
          }
        }
      }
    }
  }
  return v3;
}
