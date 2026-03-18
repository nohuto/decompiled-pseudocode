/*
 * XREFs of FixHDCBITSBmp @ 0x1C00D6694
 * Callers:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00D65E0 (NtUserBitBltSysBmp.c)
 *     ?BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02106A8 (-BltMe4Times@@YAXPEAUtagOEMBITMAPINFO@@HHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0210840 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void FixHDCBITSBmp()
{
  _QWORD *v0; // rdx

  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (v0 = (_QWORD *)ghbmBits96, *(_WORD *)(gpsi + 8678LL) == 96) )
    {
      v0 = (_QWORD *)ghbmBits;
    }
    GreSelectBitmap(*(_QWORD *)(gpDispInfo + 56LL), *v0);
  }
}
