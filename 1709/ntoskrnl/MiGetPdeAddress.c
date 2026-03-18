/*
 * XREFs of MiGetPdeAddress @ 0x1401322DC
 * Callers:
 *     MiMapProcessExecutable @ 0x14045EF60 (MiMapProcessExecutable.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 *     MiUnmapLargeDriver @ 0x1406EC428 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
