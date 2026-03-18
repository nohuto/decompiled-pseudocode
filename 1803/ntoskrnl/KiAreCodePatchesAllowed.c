/*
 * XREFs of KiAreCodePatchesAllowed @ 0x1408E00E0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14087C364 (CcInitializeBcbProfiler.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x180) == 384;
}
