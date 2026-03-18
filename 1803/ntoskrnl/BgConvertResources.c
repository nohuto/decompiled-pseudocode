/*
 * XREFs of BgConvertResources @ 0x14083F82C
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1401854B0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x14017361C (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_14039D878, a1);
}
