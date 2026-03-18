/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00C3088
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0210C2C (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0040F94 (GetWindowBordersWithCompatFlags2.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C00C30C8 (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 __fastcall GetWindowBordersForDpi(unsigned int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2WithDPIAware; // eax

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowBordersWithCompatFlags2(a1, a2, a5, 0, AppCompatFlags2WithDPIAware, a5);
}
