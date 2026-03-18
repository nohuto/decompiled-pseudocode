/*
 * XREFs of GrePolyPatBlt @ 0x1C007F804
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     DrawEdge @ 0x1C007EBC4 (DrawEdge.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C007FCA8 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0081ED8 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C009C70C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrame @ 0x1C0139C54 (DrawFrame.c)
 *     DrawSize @ 0x1C0210548 (DrawSize.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0215E04 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C02175E0 (xxxMenuBarDraw.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C023AC74 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     ClientFrame @ 0x1C023AF54 (ClientFrame.c)
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C001DD20 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, int a2, struct _POLYPATBLT *a3, int a4)
{
  unsigned int v5; // ebx
  DC *v9[2]; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  v9[1] = 0LL;
  XDCOBJ::vLock(v9, a1);
  if ( v9[0] )
  {
    v5 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 40LL),
           *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 32LL),
           *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 44LL),
           *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 36LL));
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
