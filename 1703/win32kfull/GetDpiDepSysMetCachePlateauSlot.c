/*
 * XREFs of GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     AdjustWindowRectExInternal @ 0x1C003E718 (AdjustWindowRectExInternal.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowFrameMetricInternal @ 0x1C00418B0 (GetWindowFrameMetricInternal.c)
 *     GetResizeBorderWidthInternal @ 0x1C0042D24 (GetResizeBorderWidthInternal.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     GetWindowNCMetricsForDpi @ 0x1C0044D04 (GetWindowNCMetricsForDpi.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     _SystemParametersInfoForDpi @ 0x1C00F6100 (_SystemParametersInfoForDpi.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0210C2C (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiDepSysMetCachePlateauSlot(int a1)
{
  unsigned int v1; // r9d
  int v2; // edx

  v1 = -1;
  if ( a1 >= 120 && a1 == 24 * (a1 / 24) )
  {
    v2 = (a1 - 120) / 24;
    if ( v2 >= 16 )
      return (unsigned int)-1;
    return (unsigned int)v2;
  }
  return v1;
}
