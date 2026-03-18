/*
 * XREFs of BgpGetResolution @ 0x1400D2BE0
 * Callers:
 *     LogFwReport @ 0x14083B7D8 (LogFwReport.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x14083D9A0 (BgpConsoleInitialize.c)
 *     GxpReadFrameBufferPixels @ 0x1408410C4 (GxpReadFrameBufferPixels.c)
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
