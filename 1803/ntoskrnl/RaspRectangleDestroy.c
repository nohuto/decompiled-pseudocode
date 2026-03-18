/*
 * XREFs of RaspRectangleDestroy @ 0x140174288
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x14083D5E4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140174460 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
