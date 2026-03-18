/*
 * XREFs of PspDeleteKernelStack @ 0x1400B2D90
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x140130270 (MmDeleteKernelStack.c)
 */

__int64 __fastcall PspDeleteKernelStack(__int64 a1, _QWORD *a2)
{
  return MmDeleteKernelStack(*a2, 2LL);
}
