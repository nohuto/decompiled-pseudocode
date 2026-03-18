/*
 * XREFs of BgpGetResolution @ 0x140132228
 * Callers:
 *     BgpConsoleInitialize @ 0x1407CE070 (BgpConsoleInitialize.c)
 *     LogFwReport @ 0x1407CE4FC (LogFwReport.c)
 *     GxpReadFrameBufferPixels @ 0x1407CEA70 (GxpReadFrameBufferPixels.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
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
