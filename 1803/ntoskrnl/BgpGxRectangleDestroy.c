/*
 * XREFs of BgpGxRectangleDestroy @ 0x14083D230
 * Callers:
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140165238 (GxpWriteFrameBufferPixels.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140173598 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x14017361C (BgpGxConvertRectangle.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     AnFwFadeCompletion @ 0x14083B3E4 (AnFwFadeCompletion.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     TxtpClearCache @ 0x14083C4B0 (TxtpClearCache.c)
 *     BgpTxtDestroyRegion @ 0x14083D1D0 (BgpTxtDestroyRegion.c)
 *     TxtpAddCacheEntry @ 0x14083D4D4 (TxtpAddCacheEntry.c)
 *     BgpGxParseBitmap @ 0x14083D624 (BgpGxParseBitmap.c)
 *     BgpGxBlendRectangle @ 0x140840A84 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140840D9C (BgpGxDrawBitmapImage.c)
 *     BgpGxReadRectangle @ 0x140841048 (BgpGxReadRectangle.c)
 *     BgpTxtDisplayString @ 0x140841398 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
