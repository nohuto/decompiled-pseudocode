/*
 * XREFs of GreSetBkMode @ 0x1C002B384
 * Callers:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     FinalUserInit @ 0x1C000EC20 (FinalUserInit.c)
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01ED8D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C020D6C4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    v5 = *(_QWORD *)(v7[0] + 80LL);
    v3 = *(_DWORD *)(v5 + 92);
    *(_DWORD *)(v5 + 92) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*(_QWORD *)(v4 + 80) + 73LL) = a2;
    XDCOBJ::RestoreAttributes((XDCOBJ *)v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7[0] + 12LL));
  }
  return v3;
}
