/*
 * XREFs of BgpGetBitsPerPixel @ 0x140140DD4
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x140140A34 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140140AAC (GxpWriteFrameBufferPixels.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140167878 (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1402661F0 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402674B4 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x140755880 (AnFwConfigureProgressResources.c)
 *     LogFwReport @ 0x140755B14 (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x14075615C (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1407561CC (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x140757430 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_1403419D0 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_1403419D0 == 5 )
    return 32LL;
  return result;
}
