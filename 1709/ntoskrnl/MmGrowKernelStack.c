/*
 * XREFs of MmGrowKernelStack @ 0x140219880
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x140151490 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
