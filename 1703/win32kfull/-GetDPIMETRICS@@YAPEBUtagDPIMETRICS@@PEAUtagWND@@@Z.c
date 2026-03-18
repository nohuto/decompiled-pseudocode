/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC
 * Callers:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C00EF1B4 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     MNDrawArrow @ 0x1C02157A4 (MNDrawArrow.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

const struct tagDPIMETRICS *__fastcall GetDPIMETRICS(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned int WindowDpiLastNotify; // eax

  if ( !a1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(0LL) & 0xF) == 0 )
      goto LABEL_6;
LABEL_10:
    WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  }
  if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  }
  if ( (*((_DWORD *)a1 + 92) & 0xF) != 0 )
    goto LABEL_10;
  v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL);
  if ( !v1 || (*(_DWORD *)(**(_QWORD **)(v1 + 8) + 52LL) & 1) == 0 )
    goto LABEL_10;
LABEL_6:
  WindowDpiLastNotify = 96;
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
}
