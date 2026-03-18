/*
 * XREFs of KiAreCodePatchesAllowed @ 0x14086B630
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14080C364 (CcInitializeBcbProfiler.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x180) == 384;
}
