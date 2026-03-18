/*
 * XREFs of ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C00572C0
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C00571F8 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C00587B8 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0119290 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121908 (-IsLastTopMostWindow@@YAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall TrackBackground(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        struct tagWND *a6)
{
  __int64 v6; // rbx
  __int64 *LastTopMostWindow; // r9
  __int64 v11; // rdx

  v6 = 0LL;
  if ( !a3
    || *((_QWORD *)a2 + 2) == gptiForeground
    || ((*((_BYTE *)a3 + 59) & 4 ^ (*((unsigned __int8 *)a3 + 64) >> 1) & 4) & 0xFFFFFFFC) == 0
    || (*((_BYTE *)a2 + 64) & 8) != 0 )
  {
    return 0LL;
  }
  if ( a4 || (a4 = (struct tagWND *)CalcForegroundInsertAfter(a2)) != 0LL )
  {
    if ( !a6 || *(_QWORD *)(*((_QWORD *)a2 + 2) + 408LL) != gpqForeground || !(unsigned int)IsLastTopMostWindow(a4) )
    {
      if ( !(unsigned int)IsLastTopMostWindow(a4) && a5 == GetRootOwner(a2) )
      {
        v11 = *((_QWORD *)a5 + 2);
        if ( *(_QWORD *)(v11 + 1352) )
        {
          if ( *(_QWORD *)(v11 + 408) == gpqForeground && a5 == *(struct tagWND **)(gpqForeground + 120LL) )
            LastTopMostWindow = (__int64 *)GetLastTopMostWindow(a2);
        }
      }
      if ( LastTopMostWindow )
        v6 = *LastTopMostWindow;
      goto LABEL_14;
    }
    return 0LL;
  }
LABEL_14:
  *((_QWORD *)a1 + 1) = v6;
  return 1LL;
}
