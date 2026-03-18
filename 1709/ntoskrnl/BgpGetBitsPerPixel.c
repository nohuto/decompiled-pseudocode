/*
 * XREFs of BgpGetBitsPerPixel @ 0x14013C074
 * Callers:
 *     BgpGxProcessQrCodeBitmap @ 0x14013B4CC (BgpGxProcessQrCodeBitmap.c)
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14013BCD8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14013BD50 (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x140290508 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402917C8 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwConfigureProgressResources @ 0x1407CE39C (AnFwConfigureProgressResources.c)
 *     LogFwReport @ 0x1407CE4FC (LogFwReport.c)
 *     BgpGxReadRectangle @ 0x1407CE960 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x1407CEA70 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x1407CF6D0 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_14035A150 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_14035A150 == 5 )
    return 32LL;
  return result;
}
