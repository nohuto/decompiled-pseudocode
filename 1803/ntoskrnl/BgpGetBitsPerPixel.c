/*
 * XREFs of BgpGetBitsPerPixel @ 0x140165560
 * Callers:
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140165238 (GxpWriteFrameBufferPixels.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140173598 (BgpGxProcessQrCodeBitmap.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402C7278 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     AnFwConfigureProgressResources @ 0x14083B6D8 (AnFwConfigureProgressResources.c)
 *     LogFwReport @ 0x14083B7D8 (LogFwReport.c)
 *     AnFwpFadeAnimationTimer @ 0x1408404D0 (AnFwpFadeAnimationTimer.c)
 *     BgpGxReadRectangle @ 0x140841048 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1408410C4 (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_14039D790 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_14039D790 == 5 )
    return 32LL;
  return result;
}
