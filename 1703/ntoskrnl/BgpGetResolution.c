/*
 * XREFs of BgpGetResolution @ 0x14003C760
 * Callers:
 *     LogFwReport @ 0x140755B14 (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x1407561CC (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x140756A9C (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x140758740 (BgpConsoleInitialize.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = DWORD2(BgInternal);
  a1[1] = DWORD1(BgInternal);
  a1[2] = HIDWORD(BgInternal);
  return a1;
}
