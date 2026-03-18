/*
 * XREFs of ExpIsKernelCfgActive @ 0x1407549D0
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 ExpIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
