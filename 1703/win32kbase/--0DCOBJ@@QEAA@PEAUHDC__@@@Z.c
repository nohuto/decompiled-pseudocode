/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     GreSetupDCAttributes @ 0x1C002BFCC (GreSetupDCAttributes.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 *     GreCleanDC @ 0x1C0042380 (GreCleanDC.c)
 *     GreSelectPalette @ 0x1C0042400 (GreSelectPalette.c)
 *     GreGetNearestColor @ 0x1C0058F50 (GreGetNearestColor.c)
 *     GreSetLayout @ 0x1C00808C0 (GreSetLayout.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00825B0 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiCreateMetafileDC @ 0x1C0089080 (NtGdiCreateMetafileDC.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F6E84 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00FB1FC (GreSetMagicColors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
