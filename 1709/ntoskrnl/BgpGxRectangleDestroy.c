/*
 * XREFs of BgpGxRectangleDestroy @ 0x1407CFF98
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x14013B4CC (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x14013B5C8 (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14013BCD8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14013BD50 (GxpWriteFrameBufferPixels.c)
 *     BgpGxParseBitmap @ 0x1407CE81C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1407CE960 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     BgpTxtDestroyRegion @ 0x1407CF358 (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x1407CF3B8 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x1407CFE6C (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x1407CFF14 (TxtpClearCache.c)
 *     BgpGxBlendRectangle @ 0x1407D3F10 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x1407D4204 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1407D4284 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
