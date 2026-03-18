/*
 * XREFs of GetWindowDpiLastNotify @ 0x1C00930B4
 * Callers:
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxGetMenuBarInfo @ 0x1C007C018 (xxxGetMenuBarInfo.c)
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     TransformWindowTrackInfo @ 0x1C0084D4C (TransformWindowTrackInfo.c)
 *     GetCaptionHeight @ 0x1C00930D4 (GetCaptionHeight.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     DwmChildRectChange @ 0x1C009BDCC (DwmChildRectChange.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0138480 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020EDC8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0212320 (xxxCalcCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
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
