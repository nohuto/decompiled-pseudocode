/*
 * XREFs of SelectWindowRgn @ 0x1C00E6E74
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1C01EC350 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z @ 0x1C005F570 (-GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C00E6F74 (DwmAsyncChildClipRgnChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00E6FFC (GreUpdateSpriteClipRgn.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C023A6EC (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

void __fastcall SelectWindowRgn(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  int v4; // esi
  __int64 v5; // rcx
  HRGN MonitorRegionForDpi; // rdi
  __int64 v8; // rcx
  void *v9; // rax
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v11; // r9

  v4 = 0;
  v5 = *((_QWORD *)a1 + 27);
  MonitorRegionForDpi = a2;
  if ( v5 )
  {
    if ( (*((_BYTE *)a1 + 61) & 8) != 0 )
    {
      SetOrClrWF(0, a1, 0x508u, 1);
    }
    else
    {
      if ( a2 == (HRGN)2 )
        return;
      GreDeleteObject(v5);
      v4 = 1;
    }
    *((_QWORD *)a1 + 27) = 0LL;
  }
  if ( (unsigned __int64)MonitorRegionForDpi > 1 )
  {
    if ( MonitorRegionForDpi == (HRGN)2 )
    {
      if ( (*((_BYTE *)a1 + 71) & 1) == 0 || (*((_BYTE *)a1 + 59) & 0x40) == 0 || !_MonitorFromWindowInternal(a1, 0, 0) )
        return;
      WindowCompositedDpi = GetWindowCompositedDpi(a1);
      MonitorRegionForDpi = GetMonitorRegionForDpi(v11, WindowCompositedDpi);
      SetOrClrWF(1, a1, 0x508u, 1);
    }
    else
    {
      if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        GreOffsetRgn(MonitorRegionForDpi, *((unsigned int *)a1 + 32), *((unsigned int *)a1 + 33));
      GreSetRegionOwner(MonitorRegionForDpi, 0LL);
      v4 = 1;
    }
    *((_QWORD *)a1 + 27) = MonitorRegionForDpi;
  }
  if ( v4 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
    {
      if ( (*((_BYTE *)a1 + 66) & 8) != 0 )
        GreUpdateSpriteClipRgn(v8, *(_QWORD *)a1, *((_QWORD *)a1 + 27), a3);
    }
    v9 = (void *)ReferenceDwmApiPort(v8);
    DwmAsyncChildClipRgnChange(v9);
  }
}
