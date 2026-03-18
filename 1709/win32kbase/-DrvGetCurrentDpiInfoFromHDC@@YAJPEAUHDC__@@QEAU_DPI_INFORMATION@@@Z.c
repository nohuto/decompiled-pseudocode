/*
 * XREFs of ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F7F08
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0073750 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005B7B4 (DrvGetCurrentDpiInfoFromHDev.c)
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDC(struct HOBJ__ *a1, struct _DPI_INFORMATION *const a2)
{
  __int64 v3; // r8
  unsigned int CurrentDpiInfoFromHDev; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(v6[0] + 48LL), (__int64)a2);
  else
    CurrentDpiInfoFromHDev = -1073741811;
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return CurrentDpiInfoFromHDev;
}
