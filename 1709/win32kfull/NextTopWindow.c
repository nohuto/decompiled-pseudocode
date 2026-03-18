/*
 * XREFs of NextTopWindow @ 0x1C0065110
 * Callers:
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C02043E4 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00C83C4 (SkipWindowOnMonitor.c)
 *     ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C010EEC4 (-GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ?CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0111D64 (-CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C01B4CB8 (-NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall NextTopWindow(struct tagTHREADINFO *a1, __int64 a2, struct tagWND *a3, char a4)
{
  int v7; // r12d
  struct tagWND *v8; // rdx
  struct tagWND *v9; // r8
  struct tagWND *v10; // r10
  struct tagWND *TopScan; // r14
  struct tagWND *v12; // rdi
  struct tagWND *v13; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v15; // r11
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  struct tagWND *v18; // rcx
  struct tagWND *v19; // rbx
  __int64 v20; // rdx
  struct tagWND *v22; // rax
  struct tagWND *v23; // r10
  struct tagWND *NextTop; // rax

  v7 = 0;
  TopScan = GNT_NextTopScan(a1, 0LL, 0LL);
  if ( v10 )
  {
    v12 = CheckTopLevelOnly(v10);
    v13 = v12;
    if ( !v12 )
      return 0LL;
    a3 = CheckTopLevelOnly(a3);
  }
  else
  {
    v22 = GNT_NextTopScan(a1, v8, v9);
    v12 = CheckTopLevelOnly(v22);
    v13 = v12;
    if ( !v12 )
      return 0LL;
LABEL_9:
    if ( v13 != a3 )
    {
      v17 = *((_BYTE *)v13 + 71);
      if ( (v17 & 0x18) == 0x10
        && ((unsigned __int8)~(v17 >> 5) & (unsigned __int8)~(*((_BYTE *)v13 + 67) >> 3) & 1) != 0
        && ((a4 & 2) == 0 || *((char *)v13 + 64) >= 0)
        && !(unsigned int)GetWindowCloakState((__int64)v13)
        && ((a4 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v13)) )
      {
        return v13;
      }
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v23 = 0LL;
    do
    {
      NextTop = NTW_GetNextTop(a1, v23);
      if ( NextTop == v13 && v23 )
        break;
      v23 = NextTop;
    }
    while ( NextTop );
    v13 = v23;
    goto LABEL_4;
  }
  v18 = v13;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v19 )
    {
      v13 = (struct tagWND *)*((_QWORD *)v19 + 11);
      goto LABEL_15;
    }
    v20 = *((_QWORD *)a1 + 54);
    if ( v20 )
    {
      if ( (*(_DWORD *)(v20 + 48) & 2) == 0 )
        break;
    }
LABEL_18:
    v19 = v18;
    if ( !v18 )
    {
      v13 = GNT_NextTopScan(a1, 0LL, 0LL);
      goto LABEL_4;
    }
    v18 = (struct tagWND *)*((_QWORD *)v18 + 15);
  }
  v13 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL) + 112LL);
LABEL_15:
  if ( !v13 )
    goto LABEL_18;
  while ( *((struct tagWND **)v13 + 15) != v18 )
  {
    v13 = (struct tagWND *)*((_QWORD *)v13 + 11);
    if ( !v13 )
      goto LABEL_18;
  }
LABEL_4:
  if ( v13 != v12 )
  {
    if ( v13 == TopScan )
    {
      if ( !v7 )
      {
        v7 = 1;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( v13 )
      {
        DesktopWindow = GetDesktopWindow(v12);
        if ( DesktopWindow == v16 && v15 != v13 )
          goto LABEL_9;
      }
    }
  }
  return 0LL;
}
