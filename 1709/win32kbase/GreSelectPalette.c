/*
 * XREFs of GreSelectPalette @ 0x1C006ED50
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C006EDB4 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(struct HOBJ__ *a1, HPALETTE a2, int a3)
{
  HPALETTE v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = SelectPaletteWorker((struct XDCOBJ *)v7, a2, a3);
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
