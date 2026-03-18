/*
 * XREFs of RaspRectangleDestroy @ 0x14013CB44
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x1407D00AC (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x14013CD18 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
