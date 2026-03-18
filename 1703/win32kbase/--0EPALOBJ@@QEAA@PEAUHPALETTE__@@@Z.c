/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0042464 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     bDeletePalette @ 0x1C0059240 (bDeletePalette.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0080794 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00A0220 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00EF130 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = HmgShareLockCheck((unsigned int)a2, 8);
  return this;
}
