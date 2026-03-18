/*
 * XREFs of CmpFreeBootRegistry @ 0x140223440
 * Callers:
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1406335E4 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
