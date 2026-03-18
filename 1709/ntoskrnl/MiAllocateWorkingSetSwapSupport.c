/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x14000B20C
 * Callers:
 *     MiGetKernelStackSwapSupport @ 0x14000B0AC (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14000B1B4 (MiReAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x140230E70 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (a1 + 2), 0x53576D4Du);
  if ( result )
  {
    result[2] = 0LL;
    result[1] = a1;
    result[3] = 0LL;
    *result = ((unsigned __int64)result + 39) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
