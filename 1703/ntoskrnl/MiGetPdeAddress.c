/*
 * XREFs of MiGetPdeAddress @ 0x14006B954
 * Callers:
 *     MiMapProcessExecutable @ 0x14049A420 (MiMapProcessExecutable.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 *     MiUnmapLargeDriver @ 0x1406BF148 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
