/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B4430
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01B5980 (_NotifyOverlayWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C020B480 (SetWindowCompositionVideoOverlayActive.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rbp
  struct tagBWL *v4; // rax
  struct tagBWL *v5; // r14
  unsigned __int64 *i; // rsi
  __int64 v7; // rax

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    if ( __CFSHR__(*(_DWORD *)(TopLevelWindow + 304), 11) )
    {
LABEL_10:
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(v3) >= 0;
      return v1;
    }
    v4 = BuildHwndList(TopLevelWindow, 1, 0LL);
    v5 = v4;
    if ( v4 )
    {
      for ( i = (unsigned __int64 *)((char *)v4 + 32); *i != 1; ++i )
      {
        v7 = HMValidateHandleNoSecure(*i, 1);
        if ( v7 )
        {
          if ( (*(_DWORD *)(v7 + 304) & 0x400) != 0 )
            break;
        }
      }
      FreeHwndList(v5);
      goto LABEL_10;
    }
  }
  return v1;
}
