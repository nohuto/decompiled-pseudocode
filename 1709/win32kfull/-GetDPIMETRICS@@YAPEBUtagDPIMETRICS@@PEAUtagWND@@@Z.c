/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90
 * Callers:
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C00FC2A0 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

const struct tagDPIMETRICS *__fastcall GetDPIMETRICS(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
    if ( (*((_DWORD *)a1 + 92) & 0xF) != 0
      || (v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v1 + 8) + 52LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, 0LL) & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v4) + 284);
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  }
  WindowDpiLastNotify = 96;
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
}
