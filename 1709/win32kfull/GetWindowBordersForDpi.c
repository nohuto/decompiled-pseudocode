/*
 * XREFs of GetWindowBordersForDpi @ 0x1C007C2E0
 * Callers:
 *     GetWindowBorders @ 0x1C007BB30 (GetWindowBorders.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0138480 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0212320 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C007C324 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2; // eax
  int v8; // r8d

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, AppCompatFlags2);
}
