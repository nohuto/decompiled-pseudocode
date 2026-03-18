/*
 * XREFs of KiIsKernelCfgActive @ 0x1408BB470
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14087C364 (CcInitializeBcbProfiler.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
