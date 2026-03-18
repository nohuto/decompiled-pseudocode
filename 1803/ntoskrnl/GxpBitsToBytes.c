/*
 * XREFs of GxpBitsToBytes @ 0x14016571C
 * Callers:
 *     BgpGxRectangleCreate @ 0x14083C2B0 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
