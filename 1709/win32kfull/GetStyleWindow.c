/*
 * XREFs of GetStyleWindow @ 0x1C006B4B0
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     CalcVisRgn @ 0x1C006A5C0 (CalcVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 *     SpbCheckDce @ 0x1C0072E70 (SpbCheckDce.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     UnredirectDCEs @ 0x1C008FFB4 (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0092BA0 (UserGetRedirectedWindowOrigin.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     UpdateRedirectedDCE @ 0x1C00FAEE0 (UpdateRedirectedDCE.c)
 *     xxxDesktopPaintCallback @ 0x1C011E940 (xxxDesktopPaintCallback.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     xxxPrintWindow @ 0x1C01C53F8 (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01E7930 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C01E7EC0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( !a1 )
    return a1;
  do
  {
    if ( ((unsigned __int8)a2 & *(_BYTE *)(BYTE1(a2) + a1 + 56)) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 104);
  }
  while ( a1 );
  if ( a1 && (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D && a1 != v2 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return a1;
}
