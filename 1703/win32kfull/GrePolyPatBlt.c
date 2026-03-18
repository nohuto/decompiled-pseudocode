/*
 * XREFs of GrePolyPatBlt @ 0x1C0029270
 * Callers:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C000DE2C (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0028A5C (-UT_InvertCaret@@YAXXZ.c)
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     DrawBox @ 0x1C00F69D0 (DrawBox.c)
 *     DrawGrip @ 0x1C010B3C8 (DrawGrip.c)
 *     DrawFrame @ 0x1C0135058 (DrawFrame.c)
 *     DrawSize @ 0x1C020ED64 (DrawSize.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0214EE4 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C021640C (xxxMenuBarDraw.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 *     ClientFrame @ 0x1C0239550 (ClientFrame.c)
 *     DrawDiagonalLine @ 0x1C0239760 (DrawDiagonalLine.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0092270 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  _QWORD v9[2]; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  v9[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v5 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 40LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 32LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 44LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 36LL));
    XDCOBJ::RestoreAttributes((XDCOBJ *)v9);
    _InterlockedDecrement((volatile signed __int32 *)(v9[0] + 12LL));
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
