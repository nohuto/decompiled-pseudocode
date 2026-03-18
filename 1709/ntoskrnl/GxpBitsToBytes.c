/*
 * XREFs of GxpBitsToBytes @ 0x14013E740
 * Callers:
 *     BgpGxRectangleCreate @ 0x1407CFFBC (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
