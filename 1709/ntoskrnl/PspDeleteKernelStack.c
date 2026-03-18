/*
 * XREFs of PspDeleteKernelStack @ 0x1400AD320
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 */

signed __int64 __fastcall PspDeleteKernelStack(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  return MmDeleteKernelStack(*a2, 2LL, a3);
}
