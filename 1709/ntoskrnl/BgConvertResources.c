/*
 * XREFs of BgConvertResources @ 0x1407D2DBC
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14013B660 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpGxConvertRectangle @ 0x14013B5C8 (BgpGxConvertRectangle.c)
 */

__int64 __fastcall BgConvertResources(unsigned int a1)
{
  return BgpGxConvertRectangle(&qword_14035A238, a1);
}
