/*
 * XREFs of MmGrowKernelStack @ 0x140256430
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x1400CAE30 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, 24576LL);
}
