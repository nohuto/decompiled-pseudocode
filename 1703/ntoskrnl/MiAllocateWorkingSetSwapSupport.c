/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x14007D2B8
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x14007D260 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x14007D9B4 (MiGetKernelStackSwapSupport.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
