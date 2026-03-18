/*
 * XREFs of CmpFreeBootRegistry @ 0x1401E1C54
 * Callers:
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
