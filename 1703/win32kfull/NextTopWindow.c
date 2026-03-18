/*
 * XREFs of NextTopWindow @ 0x1C005F5C0
 * Callers:
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C02028E0 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00B7360 (SkipWindowOnMonitor.c)
 *     ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C00DD7DC (-NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z.c)
 *     ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C00DD820 (-GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ?CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C010ACE0 (-CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall NextTopWindow(struct tagTHREADINFO *a1, __int64 a2, struct tagWND *a3, char a4)
{
  int v7; // r15d
  struct tagWND *v8; // rdx
  struct tagWND *v9; // r10
  struct tagWND *TopScan; // r12
  struct tagWND *v11; // rdi
  struct tagWND *v12; // rbx
  __int64 v13; // rdx
  __int64 DesktopWindow; // rax
  __int64 v15; // rax
  struct tagWND *v16; // r11
  __int64 v17; // rdx
  struct tagWND *v19; // rax
  struct tagWND *v20; // r10
  struct tagWND *NextTop; // rax

  v7 = 0;
  TopScan = GNT_NextTopScan(a1, 0LL, 0LL);
  if ( v9 )
  {
    v11 = CheckTopLevelOnly(v9);
    v12 = v11;
    if ( v11 )
    {
      a3 = CheckTopLevelOnly(a3);
      while ( 1 )
      {
        if ( (a4 & 1) != 0 )
        {
          v20 = 0LL;
          do
          {
            NextTop = NTW_GetNextTop(a1, v20);
            if ( NextTop == v12 && v20 )
              break;
            v20 = NextTop;
          }
          while ( NextTop );
          v12 = v20;
        }
        else
        {
          v12 = NTW_GetNextTop(a1, v12);
        }
        if ( v12 == v11 )
          break;
        if ( v12 == TopScan )
        {
          if ( v7 )
            return 0LL;
          v7 = 1;
        }
        if ( !v12 )
          break;
        DesktopWindow = GetDesktopWindow(v11, v13);
        v15 = GetDesktopWindow(v12, DesktopWindow);
        if ( v17 != v15 || v16 == v12 )
          break;
LABEL_15:
        if ( v12 != a3
          && (*((_BYTE *)v12 + 71) & 0x18) == 0x10
          && (*((_BYTE *)v12 + 67) & 8) == 0
          && ((a4 & 2) == 0 || *((char *)v12 + 64) >= 0)
          && !(unsigned int)GetWindowCloakState(v12)
          && ((a4 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v12)) )
        {
          return v12;
        }
      }
    }
  }
  else
  {
    v19 = NTW_GetNextTop(a1, v8);
    v11 = CheckTopLevelOnly(v19);
    v12 = v11;
    if ( v11 )
      goto LABEL_15;
  }
  return 0LL;
}
