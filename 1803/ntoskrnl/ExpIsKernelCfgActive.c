/*
 * XREFs of ExpIsKernelCfgActive @ 0x1407BB2F0
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 */

__int64 ExpIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
