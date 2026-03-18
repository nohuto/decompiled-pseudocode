/*
 * XREFs of ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F6E84
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C007B4BC (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0026CD0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDC(HDC a1, struct _DPI_INFORMATION *const a2)
{
  unsigned int CurrentDpiInfoFromHDev; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(v5[0] + 48LL), (__int64)a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  return CurrentDpiInfoFromHDev;
}
