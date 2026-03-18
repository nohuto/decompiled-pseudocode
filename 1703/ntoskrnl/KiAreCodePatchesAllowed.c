/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140834468
 * Callers:
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x180) == 384;
}
