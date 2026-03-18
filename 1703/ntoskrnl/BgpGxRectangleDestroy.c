/*
 * XREFs of BgpGxRectangleDestroy @ 0x140757D34
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140140A34 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140140AAC (GxpWriteFrameBufferPixels.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140167878 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x1401678FC (BgpGxConvertRectangle.c)
 *     BgpGxParseBitmap @ 0x140755FF4 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14075615C (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140756A9C (BgpTxtCreateRegion.c)
 *     AnFwFadeCompletion @ 0x140756C7C (AnFwFadeCompletion.c)
 *     TxtpAddCacheEntry @ 0x140757C08 (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x140757CB0 (TxtpClearCache.c)
 *     BgpTxtDestroyRegion @ 0x140758C40 (BgpTxtDestroyRegion.c)
 *     BgpGxBlendRectangle @ 0x14075A828 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x14075AB1C (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x14075AB90 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
