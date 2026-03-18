/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x140755960
 * Callers:
 *     BgpTxtRegionSize @ 0x14014041C (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x14014047C (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
