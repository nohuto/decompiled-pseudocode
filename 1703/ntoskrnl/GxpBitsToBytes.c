/*
 * XREFs of GxpBitsToBytes @ 0x140143248
 * Callers:
 *     BgpGxRectangleCreate @ 0x140757D58 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
