/*
 * XREFs of ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780
 * Callers:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0045988 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C009BC6C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     GreSetWindowOrg @ 0x1C00F76DC (GreSetWindowOrg.c)
 *     GreReferenceObject @ 0x1C0105B20 (GreReferenceObject.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C012F2C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DWMSPRITEREF::bValid(DWMSPRITEREF *this)
{
  return *(_QWORD *)this != 0LL;
}
