/*
 * XREFs of ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C001F3BC
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C001F2FC (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C001C8FC (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C001CA48 (GetLastTopMostWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0105A30 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C0117D24 (-IsLastTopMostWindow@@YAHPEBUtagWND@@@Z.c)
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
  __int64 *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx

  v6 = 0LL;
  if ( !a3
    || *((_QWORD *)a2 + 2) == gptiForeground
    || ((*((_BYTE *)a3 + 59) & 4 ^ (*((unsigned __int8 *)a3 + 64) >> 1) & 4) & 0xFFFFFFFC) == 0
    || (*((_BYTE *)a2 + 64) & 8) != 0 )
  {
    return 0LL;
  }
  if ( a4 || (a4 = CalcForegroundInsertAfter((__int64)a2)) != 0LL )
  {
    if ( !a6 || *(_QWORD *)(*((_QWORD *)a2 + 2) + 384LL) != gpqForeground || !(unsigned int)IsLastTopMostWindow(a4) )
    {
      if ( !(unsigned int)IsLastTopMostWindow(a4) && a5 == GetRootOwner(a2) )
      {
        v12 = *((_QWORD *)a5 + 2);
        if ( *(_QWORD *)(v12 + 1264) )
        {
          v13 = *v11;
          if ( *(_QWORD *)(v12 + 384) == *v11 && a5 == *(struct tagWND **)(v13 + 88) )
            LastTopMostWindow = (__int64 *)GetLastTopMostWindow((__int64)a2, v13);
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
