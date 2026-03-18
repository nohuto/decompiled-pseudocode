/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C0218C14
 * Callers:
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020EDC8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0213B48 (xxxHiliteMenuItem.c)
 *     xxxGetMenuItemRect @ 0x1C0218AD0 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C0218CF4 (xxxMenuItemFromPoint.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C007C2E0 (GetWindowBordersForDpi.c)
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     GetCaptionHeight @ 0x1C00930D4 (GetCaptionHeight.c)
 */

__int64 __fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v8; // rax
  int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  result = *(unsigned int *)(a2 + 56);
  if ( (result & 0x80u) == 0LL && (*(_QWORD *)(a2 + 88) != a1 || !*(_DWORD *)(a2 + 72) || !*(_DWORD *)(a2 + 76)) )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
    WindowBordersForDpi = GetWindowBordersForDpi(
                            *(_DWORD *)(a1 + 68),
                            *(_DWORD *)(a1 + 64),
                            a3,
                            a4,
                            WindowDpiLastNotify);
    CaptionHeight = GetCaptionHeight(a1);
    return xxxMenuBarCompute(
             (struct tagMENU *)a2,
             a1,
             (unsigned int)(WindowBordersForDpi + CaptionHeight),
             WindowBordersForDpi,
             *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - 2 * WindowBordersForDpi);
  }
  return result;
}
