/*
 * XREFs of MiGetPdeAddress @ 0x14003B3E0
 * Callers:
 *     MiEliminateZeroPages @ 0x1404B3970 (MiEliminateZeroPages.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 *     MiUnmapLargeDriver @ 0x140755F38 (MiUnmapLargeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
