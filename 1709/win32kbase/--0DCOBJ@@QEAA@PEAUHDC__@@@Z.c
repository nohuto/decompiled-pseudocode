/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74
 * Callers:
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     GreGetNearestColor @ 0x1C00634D0 (GreGetNearestColor.c)
 *     GreSelectPalette @ 0x1C006ED50 (GreSelectPalette.c)
 *     GreCleanDC @ 0x1C0080350 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C00852F0 (GreSetLayout.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0089430 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiCreateMetafileDC @ 0x1C008E550 (NtGdiCreateMetafileDC.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F7F08 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00FB5EC (GreSetMagicColors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, struct HOBJ__ *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
