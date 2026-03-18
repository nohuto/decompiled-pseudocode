/*
 * XREFs of GetWindowDpiLastNotify @ 0x1C003D960
 * Callers:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0040EEC (GetWindowBordersWithDpiAwareness.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     TransformWindowTrackInfo @ 0x1C00B2E30 (TransformWindowTrackInfo.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020D0B4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0210C2C (xxxCalcCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowDpiLastNotify(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 374);
  if ( !(_WORD)result )
    return *(unsigned __int16 *)(a1 + 372);
  return result;
}
