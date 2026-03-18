/*
 * XREFs of FixHDCBITSBmpEx @ 0x1C0112F44
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C01118E0 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0211DD8 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0082CD4 (GreGetDCDpiScaleValue.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall FixHDCBITSBmpEx(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdx

  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3, a4) & 0xF) != 0
      || *(_WORD *)(gpsi + 9974LL) == 96
      || a1 && (unsigned int)GreGetDCDpiScaleValue(a1) != 1 )
    {
      v5 = (_QWORD *)ghbmBits;
    }
    else
    {
      v5 = (_QWORD *)ghbmBits96;
    }
    GreSelectBitmap(*(_QWORD *)(gpDispInfo + 56LL), *v5);
  }
}
