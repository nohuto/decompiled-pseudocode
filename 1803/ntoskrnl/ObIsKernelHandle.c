/*
 * XREFs of ObIsKernelHandle @ 0x14014D7E0
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x14003EC88 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
