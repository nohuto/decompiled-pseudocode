/*
 * XREFs of CmpFreeBootRegistry @ 0x1401E5D58
 * Callers:
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x1405BF31C (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
