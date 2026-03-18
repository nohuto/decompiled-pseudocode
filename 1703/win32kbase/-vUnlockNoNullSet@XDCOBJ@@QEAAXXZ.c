/*
 * XREFs of ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0031EE0
 * Callers:
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 *     GreCleanDC @ 0x1C0042380 (GreCleanDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00423CC (--1DCOBJ@@QEAA@XZ.c)
 *     GreSelectPalette @ 0x1C0042400 (GreSelectPalette.c)
 *     GreGetNearestColor @ 0x1C0058F50 (GreGetNearestColor.c)
 *     GreSetLayout @ 0x1C00808C0 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C0089080 (NtGdiCreateMetafileDC.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F6E84 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00FB1FC (GreSetMagicColors.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  }
}
